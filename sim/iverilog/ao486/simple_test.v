
`timescale 1ns/1ns

module simple_test;

    // ------------------------------------------------------------------------
    // Clock / reset
    reg clk   = 1'b0;
    reg rst_n = 1'b0;

    always #10 clk = ~clk; // 50 MHz (20ns period)

    integer cycle = 0;
    always @(posedge clk) begin
        cycle <= cycle + 1;
    end

    initial begin
        $dumpfile("simple.vcd");
        $dumpvars(0, simple_test);

        $display("=== AO486 SIMPLE TEST ===");

        // Hold reset a little
        #200;
        rst_n = 1'b1;
        $display("Reset released at time %0t", $time);

        // Run some cycles
        repeat (5000) @(posedge clk);

        $display("Finished after %0d cycles", cycle);
        $finish;
    end

    // ------------------------------------------------------------------------
    // ao486 ports
    reg         interrupt_do     = 1'b0;
    reg  [7:0]  interrupt_vector = 8'h00;
    wire        interrupt_done;

    wire [31:0] avm_address;
    wire [31:0] avm_writedata;
    wire [3:0]  avm_byteenable;
    wire [2:0]  avm_burstcount;
    wire        avm_write;
    wire        avm_read;

    reg         avm_waitrequest   = 1'b0;
    reg         avm_readdatavalid = 1'b0;
    reg  [31:0] avm_readdata      = 32'd0;

    wire [15:0] avalon_io_address;
    wire [3:0]  avalon_io_byteenable;
    wire        avalon_io_read;
    reg         avalon_io_readdatavalid = 1'b0;
    reg  [31:0] avalon_io_readdata      = 32'd0;
    wire        avalon_io_write;
    wire [31:0] avalon_io_writedata;
    reg         avalon_io_waitrequest   = 1'b0;

    ao486 cpu (
        .clk(clk),
        .rst_n(rst_n),

        .interrupt_do(interrupt_do),
        .interrupt_vector(interrupt_vector),
        .interrupt_done(interrupt_done),

        .avm_address(avm_address),
        .avm_writedata(avm_writedata),
        .avm_byteenable(avm_byteenable),
        .avm_burstcount(avm_burstcount),
        .avm_write(avm_write),
        .avm_read(avm_read),
        .avm_waitrequest(avm_waitrequest),
        .avm_readdatavalid(avm_readdatavalid),
        .avm_readdata(avm_readdata),

        .avalon_io_address(avalon_io_address),
        .avalon_io_byteenable(avalon_io_byteenable),
        .avalon_io_read(avalon_io_read),
        .avalon_io_readdatavalid(avalon_io_readdatavalid),
        .avalon_io_readdata(avalon_io_readdata),
        .avalon_io_write(avalon_io_write),
        .avalon_io_writedata(avalon_io_writedata),
        .avalon_io_waitrequest(avalon_io_waitrequest)
    );

    // ------------------------------------------------------------------------
    // Avalon IO responder (do NOT leave IO reads hanging)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            avalon_io_readdatavalid <= 1'b0;
            avalon_io_readdata      <= 32'd0;
        end else begin
            avalon_io_readdatavalid <= 1'b0;

            if (avalon_io_read && !avalon_io_waitrequest) begin
                // Return something deterministic; can be replaced by a device model.
                avalon_io_readdata      <= 32'd0;
                avalon_io_readdatavalid <= 1'b1;
            end
        end
    end

    // ------------------------------------------------------------------------
    // Simple RAM: 64KB (16384 dwords)
    // Addressing: word index = address[15:2] (within 64KB)
    reg [31:0] ram [0:16383];
    integer i;

    // ROM window for top 4KB: 0xFFFFF000..0xFFFFFFFF (1024 dwords)
    // Addressing: word index = address[11:2]
    reg [31:0] rom_hi [0:1023];

    initial begin
        // Default-fill RAM with NOPs
        for (i = 0; i < 16384; i = i + 1) ram[i] = 32'h90909090;

        // Default-fill high ROM with NOPs
        for (i = 0; i < 1024; i = i + 1) rom_hi[i] = 32'h90909090;

        // Load your assembled binary into low RAM at 0x0000_0000 (run.sh generates test.hex)
        $readmemh("test.hex", ram);

        // Reset vector stub at 0xFFFF_FFF0:
        // FAR JMP ptr16:16  => EA imm16(offset) imm16(segment)
        // EA 00 00 00 00    => jmp 0x0000:0x0000  (linear 0x00000000 in real mode)
        rom_hi[10'h3FC] = 32'h000000EA; // bytes: EA 00 00 00  @0xFFFF_FFF0
        rom_hi[10'h3FD] = 32'h90909000; // bytes: 00 90 90 90  @0xFFFF_FFF4 (segment high byte + padding)

        $display("Memory init done.");
        $display("Reset vector @ 0xFFFF_FFF0 = %08x", rom_hi[10'h3FC]);
        $display("Next dword  @ 0xFFFF_FFF4 = %08x", rom_hi[10'h3FD]);
    end

    // ------------------------------------------------------------------------
    // Avalon-MM memory responder
    // - 1-cycle delayed response: observe avm_read, then next cycle pulse readdatavalid with data
    // - Supports writes to low RAM with byte enables
    wire sel_hi = (avm_address[31:12] == 20'hFFFFF);

    wire [9:0]  hi_idx = avm_address[11:2];  // 1024 dwords
    wire [13:0] lo_idx = avm_address[15:2];  // 64KB dwords

    reg [31:0] read_data_next;
    always @* begin
        if (sel_hi) read_data_next = rom_hi[hi_idx];
        else        read_data_next = ram[lo_idx];
    end

    reg        rd_pending;
    reg [31:0] rd_data_q;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            avm_readdatavalid <= 1'b0;
            avm_readdata      <= 32'd0;
            rd_pending        <= 1'b0;
            rd_data_q         <= 32'd0;
        end else begin
            avm_readdatavalid <= 1'b0;

            // complete previous request
            if (rd_pending) begin
                avm_readdata      <= rd_data_q;
                avm_readdatavalid <= 1'b1;
                rd_pending        <= 1'b0;
            end

            // accept new request
            if (avm_read && !avm_waitrequest) begin
                rd_data_q  <= read_data_next;
                rd_pending <= 1'b1;
            end

            // writes (only to low RAM region here)
            if (avm_write && !avm_waitrequest && !sel_hi) begin
                if (avm_byteenable[0]) ram[lo_idx][7:0]   <= avm_writedata[7:0];
                if (avm_byteenable[1]) ram[lo_idx][15:8]  <= avm_writedata[15:8];
                if (avm_byteenable[2]) ram[lo_idx][23:16] <= avm_writedata[23:16];
                if (avm_byteenable[3]) ram[lo_idx][31:24] <= avm_writedata[31:24];
            end
        end
    end

    // ------------------------------------------------------------------------
    // Bus monitor (prints requests + responses)
    always @(posedge clk) begin
        if (rst_n) begin
            if (avm_read) begin
                $display("CYCLE %0d: avm_read  addr=%08x be=%x burst=%0d hi=%0d",
                         cycle, avm_address, avm_byteenable, avm_burstcount, sel_hi);
            end

            if (avm_readdatavalid) begin
                $display("CYCLE %0d: rvalid    data=%08x", cycle, avm_readdata);
            end

            if (avm_write) begin
                $display("CYCLE %0d: avm_write addr=%08x data=%08x be=%x burst=%0d",
                         cycle, avm_address, avm_writedata, avm_byteenable, avm_burstcount);
            end

            if (avalon_io_read) begin
                $display("CYCLE %0d: io_read   port=%04x be=%x",
                         cycle, avalon_io_address, avalon_io_byteenable);
            end

            if (avalon_io_write) begin
                $display("CYCLE %0d: io_write  port=%04x data=%08x be=%x",
                         cycle, avalon_io_address, avalon_io_writedata, avalon_io_byteenable);
            end

            if ((cycle % 500) == 0) begin
                $display("--- still running at cycle %0d ---", cycle);
            end
        end
    end

endmodule
