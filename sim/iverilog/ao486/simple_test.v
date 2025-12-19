  `timescale 1ns/1ns

module simple_test;
    reg clk = 0;
    reg rst_n = 0;

    // 1. Clock and Reset
    always #10 clk = ~clk;
    initial begin
        $dumpfile("simple.vcd");
        $dumpvars(0, simple_test);
        $display("Starting simulation...");
        
        #100 rst_n = 1; 
        $display("Reset released. CPU should start fetching...");
        
        #10000; // Increased time to see activity
        $display("Simulation finished.");
        $finish;
    end

    // 2. Wires for CPU Outputs
    wire [31:0] avm_address;
    wire [3:0]  avm_byteenable;
    wire        avm_read;
    wire        avm_write;
    wire [31:0] avm_writedata;
    wire [31:0] avm_readdata;

    // 3. The ao486 CPU Core
    ao486 ao486_inst (
        .clk                (clk),
        .rst_n              (rst_n),
        .avm_address        (avm_address),
        .avm_byteenable     (avm_byteenable),
        .avm_read           (avm_read),
        .avm_write          (avm_write),
        .avm_writedata      (avm_writedata),
        .avm_readdata       (avm_readdata),
        .avm_waitrequest    (1'b0),
        .avm_readdatavalid  (avm_read) 
    );

    // 4. Simple Memory
    reg [31:0] ram [0:255];
    initial begin
        integer i;
        for (i=0; i<256; i++) ram[i] = 32'h0;
        $readmemh("test.hex", ram);
    end

    // Mapping: Address 0xFFFFFFF0 will now look at ram[0]
    // We do this by only looking at the very last 4 bits of the address
    assign avm_readdata = ram[avm_address[3:2]];

    // 5. RTL Level Detail Printing (External Bus)
    // We monitor the Avalon Bus because hierarchical paths are failing
    always @(posedge clk) begin
        if (rst_n) begin
            if (avm_read) begin
                $display("TIME: %0t | FETCH | ADDR: 0x%h | DATA: 0x%h", $time, avm_address, avm_readdata);
            end
            if (avm_write) begin
                $display("TIME: %0t | WRITE | ADDR: 0x%h | DATA: 0x%h", $time, avm_address, avm_writedata);
            end
        end
    end

endmodule
