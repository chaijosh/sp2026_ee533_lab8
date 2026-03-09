`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:52:23 03/06/2026 
// Design Name: 
// Module Name:    network_processor 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module network_processor
	 #(
    parameter DATA_WIDTH       = 64,
    parameter CTRL_WIDTH       = 8,
    parameter FIFO_DEPTH_WORDS = 256,
    parameter UDP_REG_SRC_WIDTH = 2
	 )
	 (
    // --- Data path interface (output)
    output wire [DATA_WIDTH-1:0]        out_data,
    output wire [CTRL_WIDTH-1:0]        out_ctrl,
    output wire                         out_wr,
    input                               out_rdy,

    // --- Data path interface (input)
    input      [DATA_WIDTH-1:0]         in_data,
    input      [CTRL_WIDTH-1:0]         in_ctrl,
    input                               in_wr,
    output wire                         in_rdy,
	 
    // --- Register interface  
    input                               reg_req_in,
    input                               reg_ack_in,
    input                               reg_rd_wr_L_in,
    input  [`UDP_REG_ADDR_WIDTH-1:0]    reg_addr_in,
    input  [`CPCI_NF2_DATA_WIDTH-1:0]   reg_data_in,
    input  [UDP_REG_SRC_WIDTH-1:0]      reg_src_in,

    output                              reg_req_out,
    output                              reg_ack_out,
    output                              reg_rd_wr_L_out,
    output  [`UDP_REG_ADDR_WIDTH-1:0]   reg_addr_out,
    output  [`CPCI_NF2_DATA_WIDTH-1:0]  reg_data_out,
    output  [UDP_REG_SRC_WIDTH-1:0]     reg_src_out,
  
    // --- Misc
    input                               clk,
    input                               reset
	 
  );
  wire GPU_done;
  wire CPU_done;
  wire gpu_start;
  wire [1:0] w_memory_port_master;
  reg [1:0] mem_port_master;
  wire [1:0] state;
  wire [63:0] CG_mem_rd_data;
  wire [7:0] cpu_mem_addr;
  wire cpu_mem_we,cpu_mem_en;
  wire [63:0] cpu_mem_wr_data, cpu_mem_rd_data;
  wire fifo_freeze;
  wire [7:0] gpu_mem_addr;
  wire gpu_mem_we,gpu_mem_en;
  wire [63:0] gpu_mem_wr_data, gpu_mem_rd_data;
  
  assign cpu_mem_rd_data = CG_mem_rd_data;
  assign gpu_mem_rd_data = CG_mem_rd_data;
  
  // CPU SW Regs
  wire [31:0] cpu_imem_interact, cpu_imem_write, cpu_imem_rw_address, cpu_imem_wdata;

  // HW Regs & Internal State
  // reg [8:0]  PC;           // CPU Traversal PC
  reg [31:0] cpu_pc_end;       // Shadow PC
  reg [31:0] cpu_imem_rdata;   // Extraction (Port B Read)
  
  // GPU SW Regs
  wire [31:0] gpu_imem_interact, gpu_imem_write, gpu_imem_rw_address, gpu_imem_wdata;

  // HW Regs & Internal State
  reg [31:0] gpu_pc_end;       // Shadow PC
  reg [31:0] gpu_imem_rdata;   // Extraction (Port B Read)

  // HW wires for driving cpu/gpu reads

  wire [10:0] cpu_pc_out;
  wire [8:0] gpu_pc_out;
  wire [31:0] cpu_instr_rdata;
  wire [31:0] gpu_instr_rdata;

  always @(posedge clk)
  begin
    cpu_pc_end <= {21'b0 , cpu_pc_out};
    gpu_pc_end <= {23'b0 , gpu_pc_out};

    cpu_imem_rdata <= cpu_instr_rdata;
    gpu_imem_rdata <= gpu_instr_rdata;
  
  end

  // -- CPU Debug Controls

  wire cpu_debug_mode = cpu_imem_interact[0];

  // -- GPU Debug Controls

  wire gpu_debug_mode = gpu_imem_interact[0];


  // -- Reset logic: on reset
  wire [31:0] sw_reset;
  wire reset_cpu = ~(reset || ~sw_reset[2]);
  wire reset_gpu = ~(reset || ~sw_reset[1]); 
  wire fifo_reset = reset || ~sw_reset[0]; 

  // Memory control

  assign fifo_freeze = CPU_done;

  
  always @(posedge CPU_done or posedge GPU_done or posedge gpu_start or state) begin
		if(state != 2'b10|| CPU_done)
			mem_port_master = 2'b00;
		else if(state == 2'b10) begin
			if (gpu_start)
				mem_port_master = 2'b10;
			else if(GPU_done)
				mem_port_master = 2'b01;
		end
  end
  
  assign w_memory_port_master = mem_port_master;
  
  single_packet_fifo #( 
    .DATA_WIDTH(DATA_WIDTH),
    .CTRL_WIDTH(CTRL_WIDTH),
    .FIFO_DEPTH_WORDS(FIFO_DEPTH_WORDS)
  ) fifo_instance(
	 .port_master(w_memory_port_master),
    .out_data(out_data),
    .out_ctrl(out_ctrl),
    .out_wr(out_wr),
    .out_rdy(out_rdy),

    .in_data(in_data),
    .in_ctrl(in_ctrl),
    .in_wr(in_wr),
    .in_rdy(in_rdy),
    .state(state),
	 .freeze(fifo_freeze),
    .clk(clk),
    .reset(fifo_reset),

    .cpu_addr(cpu_mem_addr),
    .cpu_in_data(cpu_mem_wr_data),
    .cpu_in_ctrl(8'd0), 
    .cpu_we(cpu_mem_we),
    .CG_out_data(CG_mem_rd_data),
    .CG_out_ctrl(),
    .cpu_en(cpu_mem_en),
	 
	 .gpu_addr(gpu_mem_addr),
    .gpu_in_data(gpu_mem_wr_data),
    .gpu_in_ctrl(8'd0), 
    .gpu_we(gpu_mem_we),
    .gpu_en(gpu_mem_en)
    
  );
  
  
  GPU_CMT gpu_instance(
    .CLK(clk), 
    .RSTB(reset_gpu),
    .gpu_begin(gpu_start),
	  .debug_pc(gpu_imem_rw_address[8:0]),
    .debug_enable(gpu_debug_mode),
    .debug_instr_in(gpu_imem_wdata),
    .debug_instr_write_en(gpu_imem_write),
    .debug_instr_out(gpu_instr_rdata),
    .mem_addr(gpu_mem_addr),
    .mem_we(gpu_mem_we),
    .mem_en(gpu_mem_en),
    .mem_wr_data(gpu_mem_wr_data),
    .mem_rd_data(gpu_mem_rd_data),
	 .PC_END(gpu_pc_out),
	 .gpu_done(GPU_done)
    );
	
	  cpu_CMT cpu_instance(
    .CLK(clk), 
    .RSTB(reset_cpu),
    .mem_addr(cpu_mem_addr),
    .mem_we(cpu_mem_we),
    .mem_en(cpu_mem_en),
    .mem_wr_data(cpu_mem_wr_data),
    .mem_rd_data(cpu_mem_rd_data),
	  .debug_enable(cpu_debug_mode),
    .debug_instr_in(cpu_imem),
    .debug_instr_write_en(cpu_imem_write),
    .debug_pc(cpu_imem_rw_address[10:0]),
    .debug_instr_out(cpu_instr_rdata),
    .PC_END(cpu_pc_out),
    .CPU_done(CPU_done),
    .GPU_active(gpu_start),
    .GPU_done(GPU_done)
    );

  generic_regs
   #( 
      .UDP_REG_SRC_WIDTH   (UDP_REG_SRC_WIDTH),
      .TAG                 (`NETWORK_PROCESSOR_BLOCK_ADDR),          // Tag -- eg. MODULE_TAG   - TODO requires definition in defines.v?
      .REG_ADDR_WIDTH      (`NETWORK_PROCESSOR_REG_ADDR_WIDTH),     // Width of block addresses -- eg. MODULE_REG_ADDR_WIDTH  - TODO requires definition in defines.v?
      .NUM_COUNTERS        (0),                 // Number of counters
      .NUM_SOFTWARE_REGS   (9),                 // Number of sw regs 
      .NUM_HARDWARE_REGS   (4)                  // Number of hw regs 
   ) module_regs (
      .reg_req_in       (reg_req_in),
      .reg_ack_in       (reg_ack_in),
      .reg_rd_wr_L_in   (reg_rd_wr_L_in),
      .reg_addr_in      (reg_addr_in),
      .reg_data_in      (reg_data_in),
      .reg_src_in       (reg_src_in),

      .reg_req_out      (reg_req_out),
      .reg_ack_out      (reg_ack_out),
      .reg_rd_wr_L_out  (reg_rd_wr_L_out),
      .reg_addr_out     (reg_addr_out),
      .reg_data_out     (reg_data_out),
      .reg_src_out      (reg_src_out),

      // --- counters interface
      .counter_updates  (),
      .counter_decrement(),

      // --- SW regs interface  
      .software_regs({

            sw_reset,           // Reg 8 (Offset 0x20) -> 3 bit reset input mapped to module resets
            cpu_imem_wdata,         // Reg 7 (Offset 0x1C)
            cpu_imem_rw_address,    // Reg 6
            cpu_imem_write,         // Reg 5
            cpu_imem_interact,      // Reg 4
            gpu_imem_wdata,         // Reg 3
            gpu_imem_rw_address,    // Reg 2
            gpu_imem_write,         // Reg 1
            gpu_imem_interact       // Reg 0 (Offset 0x00)
        }),

      // --- HW regs interface
      .hardware_regs({
            cpu_pc_end,             // HW Reg 3 (Offset 0x30)
            cpu_imem_rdata,         // HW Reg 2 
            gpu_pc_end,             // HW Reg 1 
            gpu_imem_rdata          // HW Reg 0 (Offset 0x24)
        }),

      .clk              (clk),
      .reset            (reset)
    );

endmodule
