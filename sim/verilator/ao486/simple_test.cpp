#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "Vmain.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;
typedef unsigned long long uint64;

// Simple memory model
union memory_t {
    uint8  bytes [134217728];  // 128MB
    uint16 shorts[67108864];
    uint32 ints  [33554432];
};

memory_t memory;

int main(int argc, char **argv) {
    printf("=== ao486 Simple Test ===\n");
    
    // Initialize memory to zero
    memset(&memory, 0, sizeof(memory));
    
    // Load our test program at address 0x7c00 (boot sector location)
    // Simple program: MOV EAX, 55; ADD EAX, 10; HLT
    uint8 program[] = {
        0xB8, 0x37, 0x00, 0x00, 0x00,  // mov eax, 55 (0x37)
        0x83, 0xC0, 0x0A,               // add eax, 10
        0xF4                            // hlt
    };
    
    memcpy(&memory.bytes[0x7c00], program, sizeof(program));
    
    // Set boot signature
    memory.bytes[0x7dfe] = 0x55;
    memory.bytes[0x7dff] = 0xAA;
    
    printf("Program loaded at 0x7c00\n");
    printf("Program size: %zu bytes\n", sizeof(program));
    
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    VerilatedVcdC* tracer = new VerilatedVcdC;
    Vmain *top = new Vmain();
    top->trace(tracer, 99);
    tracer->open("simple_test.vcd");
    
    // Reset the CPU
    printf("Resetting CPU...\n");
    top->clk = 0; top->rst_n = 1; top->eval();
    top->clk = 1; top->rst_n = 1; top->eval();
    top->clk = 1; top->rst_n = 0; top->eval();
    top->clk = 0; top->rst_n = 0; top->eval();
    top->clk = 0; top->rst_n = 1; top->eval();
    
    printf("CPU reset complete\n");
    
    // Simulation variables
    uint32 sdram_read_count = 0;
    uint32 sdram_read_data[4];
    uint32 sdram_write_count = 0;
    uint32 sdram_write_address = 0;
    
    uint64 cycle = 0;
    uint32 max_cycles = 100000;  // Run for 100k cycles
    
    printf("Starting simulation...\n");
    
    while(cycle < max_cycles && !Verilated::gotFinish()) {
        
        // Handle SDRAM reads
        top->avm_readdatavalid = 0;
        
        if(top->avm_read) {
            uint32 address = top->avm_address & 0x07FFFFFC;
            
            for(uint32 i=0; i<4; i++) {
                sdram_read_data[i] = memory.ints[(address + i*4)/4];
                
                if(((top->avm_byteenable >> 0) & 1) == 0) sdram_read_data[i] &= 0xFFFFFF00;
                if(((top->avm_byteenable >> 1) & 1) == 0) sdram_read_data[i] &= 0xFFFF00FF;
                if(((top->avm_byteenable >> 2) & 1) == 0) sdram_read_data[i] &= 0xFF00FFFF;
                if(((top->avm_byteenable >> 3) & 1) == 0) sdram_read_data[i] &= 0x00FFFFFF;
            }
            sdram_read_count = top->avm_burstcount;
            
            if(cycle < 1000) {
                printf("SDRAM READ: addr=0x%08x byteenable=0x%x burst=%d\n", 
                       address, top->avm_byteenable, top->avm_burstcount);
            }
        }
        else if(sdram_read_count > 0) {
            top->avm_readdatavalid = 1;
            top->avm_readdata = sdram_read_data[0];
            memmove(sdram_read_data, &sdram_read_data[1], sizeof(sdram_read_data)-sizeof(uint32));
            sdram_read_count--;
        }
        
        // Handle SDRAM writes
        if(top->avm_write) {
            uint32 address = (sdram_write_count > 0)? sdram_write_address : top->avm_address & 0x07FFFFFC;
            uint32 data = top->avm_writedata;
            
            printf("SDRAM WRITE: addr=0x%08x data=0x%08x byteenable=0x%x\n", 
                   address, data, top->avm_byteenable);
            
            // Write to memory
            for(uint32 i=0; i<4; i++) {
                if((top->avm_byteenable >> i) & 1) {
                    memory.bytes[address + i] = (data >> (i*8)) & 0xFF;
                }
            }
            
            if(sdram_write_count == 0) {
                sdram_write_address = (address + 4) & 0x07FFFFFC;
                sdram_write_count = top->avm_burstcount;
            }
            
            if(sdram_write_count > 0) sdram_write_count--;
        }
        
        // Handle I/O (stub - just acknowledge)
        top->avalon_io_readdatavalid = 0;
        if(top->avalon_io_read) {
            top->avalon_io_readdatavalid = 1;
            top->avalon_io_readdata = 0;
        }
        
        // No interrupts for this simple test
        top->interrupt_do = 0;
        top->interrupt_vector = 0;
        
        // Clock cycle
        top->clk = 0;
        top->eval();
        tracer->dump(cycle++);
        
        top->clk = 1;
        top->eval();
        tracer->dump(cycle++);
        
        if((cycle % 10000) == 0) {
            printf("Cycle: %llu\n", cycle);
        }
    }
    
    printf("\n=== Simulation Complete ===\n");
    printf("Total cycles: %llu\n", cycle);
    printf("Check simple_test.vcd for waveforms\n");
    
    tracer->close();
    delete top;
    
    return 0;
}
