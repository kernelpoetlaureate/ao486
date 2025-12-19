module main_fixed(
    input               clk,
    input               rst_n,
    
    //--------------------------------------------------------------------------
    input               interrupt_do,
    input   [7:0]       interrupt_vector,
    output              interrupt_done,
    
    //-------------------------------------------------------------------------- Altera Avalon memory bus
    output      [31:0]  avm_address,
    output      [31:0]  avm_writedata,
    output      [3:0]   avm_byteenable,
    output      [2:0]   avm_burstcount,
    output              avm_write,
    output              avm_read,
    
    input               avm_waitrequest,
    input               avm_readdatavalid,
    input       [31:0]  avm_readdata,
    
    //-------------------------------------------------------------------------- Altera Avalon io bus
    output  [15:0]      avalon_io_address,
    output  [3:0]       avalon_io_byteenable,
    
    output              avalon_io_read,
    input               avalon_io_readdatavalid,
    input   [31:0]      avalon_io_readdata,
    
    output              avalon_io_write,
    output  [31:0]      avalon_io_writedata,
    
    input               avalon_io_waitrequest
);

// Instantiate the real ao486
ao486 ao486_inst(
    .clk                (clk),
    .rst_n              (rst_n),
    
    .interrupt_do       (interrupt_do),
    .interrupt_vector   (interrupt_vector),
    .interrupt_done     (interrupt_done),
    
    .avm_address        (avm_address),
    .avm_writedata      (avm_writedata),
    .avm_byteenable     (avm_byteenable),
    .avm_burstcount     (avm_burstcount),
    .avm_write          (avm_write),
    .avm_read           (avm_read),
    
    .avm_waitrequest    (avm_waitrequest),
    .avm_readdatavalid  (avm_readdatavalid),
    .avm_readdata       (avm_readdata),
    
    .avalon_io_address      (avalon_io_address),
    .avalon_io_byteenable   (avalon_io_byteenable),
    .avalon_io_read         (avalon_io_read),
    .avalon_io_readdatavalid(avalon_io_readdatavalid),
    .avalon_io_readdata     (avalon_io_readdata),
    .avalon_io_write        (avalon_io_write),
    .avalon_io_writedata    (avalon_io_writedata),
    .avalon_io_waitrequest  (avalon_io_waitrequest)
);

endmodule
