`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   [Date]
// Design Name:   network_processor
// Module Name:   network_processor_full_tb
// Project Name:  processor_integration
// Target Device:
// Tool versions:
// Description:   Testbench for both CPU and FIFO functionality of the
//                network_processor module.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module network_proc_full_tb;

  // Parameters
  localparam DATA_WIDTH       = 64;
  localparam CTRL_WIDTH       = 8;
  localparam FIFO_DEPTH_WORDS = 256;
  localparam CLK_PERIOD       = 200; // Using a faster clock for simulation
  integer i;

  // Inputs to UUT
  reg                         clk;
  reg                         fifo_reset;
  reg                         reset_cpu;
  reg                         reset_gpu;
  reg [1:0]                        memory_port_master;
  reg                         out_rdy;
  reg [DATA_WIDTH-1:0]        in_data;
  reg [CTRL_WIDTH-1:0]        in_ctrl;
  reg                         in_wr;

  // Outputs from UUT
  wire [DATA_WIDTH-1:0]       out_data;
  wire [CTRL_WIDTH-1:0]       out_ctrl;
  wire                        out_wr;
  wire                        in_rdy;

  // Testbench internal variables
  reg [DATA_WIDTH-1:0]        sent_packet_data[0:FIFO_DEPTH_WORDS-1];
  reg [CTRL_WIDTH-1:0]        sent_packet_ctrl[0:FIFO_DEPTH_WORDS-1];
  integer                     sent_word_count;
  integer                     received_word_count;
  integer                     errors;
  reg [7:0]                   last_cpu_addr;
  reg                         cpu_activity_detected;
  
  reg  [8:0]  debug_pc;
  reg         debug_enable;
  reg  [31:0] debug_instr_in;
  reg         debug_instr_write_en;
  wire [31:0] debug_instr_out;
  wire [8:0]  PC_END;

  // Instantiate the Unit Under Test (UUT)
  network_processor #(
    .DATA_WIDTH(DATA_WIDTH),
    .CTRL_WIDTH(CTRL_WIDTH),
    .FIFO_DEPTH_WORDS(FIFO_DEPTH_WORDS)
  ) uut (
    .memory_port_master(memory_port_master),
    .out_data(out_data),
    .out_ctrl(out_ctrl),
    .out_wr(out_wr),
    .out_rdy(out_rdy),
    .in_data(in_data),
    .in_ctrl(in_ctrl),
    .in_wr(in_wr),
    .in_rdy(in_rdy),
	 .debug_pc(debug_pc),
    .debug_enable(debug_enable),
    .debug_instr_in(debug_instr_in),
    .debug_instr_write_en(debug_instr_write_en),
    .debug_instr_out(debug_instr_out),
	 .PC_END(PC_END),
    .clk(clk),
    .reset_cpu(reset_cpu),
	 .reset_gpu(reset_gpu),
	 .fifo_reset(fifo_reset)
  );

  // Clock generator
  always #(CLK_PERIOD/2) clk = ~clk;

  // Helper task to apply reset (active-low, consistent with RSTB)
  task apply_reset;
    begin
      fifo_reset <= 1'b1; // Assert reset
      #1000;
      fifo_reset <= 1'b0; // De-assert reset
      #200;
    end
  endtask

  // Helper task to send one word to the FIFO datapath
  task send_word;
    input [DATA_WIDTH-1:0] data;
    input [CTRL_WIDTH-1:0] ctrl;
    begin
      wait(in_rdy); // wait until we are ready to take new input
      @(posedge clk); // wait till next posedge
      in_data <= data;
      in_ctrl <= ctrl;
      in_wr   <= 1'b1;
      
      sent_packet_data[sent_word_count] = data;
      sent_packet_ctrl[sent_word_count] = ctrl;
      sent_word_count = sent_word_count + 1;
      
      @(posedge clk);
      in_wr <= 1'b0;
      in_data <= 64'bx;
      in_ctrl <= 8'bx;
    end
  endtask

  // Main test sequence
  initial begin
    // Initialize signals
    clk = 1'b0;
    fifo_reset = 1'b0;
    in_data = 64'bx;
    in_ctrl = 8'bx;
    in_wr = 1'b0;
    errors = 0;
	 reset_gpu = 1'b0;
	 reset_cpu = 1'b0;
    memory_port_master = 2'b00;
    out_rdy <= 1'b0; // Keep downstream stalled
    cpu_activity_detected = 1'b0;
	 debug_enable = 1;
	 debug_instr_write_en = 0;
	 #25; 
	 apply_reset();
    sent_word_count = 0;
    received_word_count = 0;
    #25; 
	 send_word(64'hA3F19C2D_7B4E8A10, 8'h00);
    send_word(64'h1C4D8EAA_FF209B73, 8'h00);
	 send_word(64'h5E07D4B9_C8123FA6, 8'h00);
    send_word(64'h00000000_000001F4, 8'h00);
    send_word(64'h9B2A6F01_3D7C55E8, 8'h00);
    send_word(64'hFFFFFFFF_FFFFFEA3, 8'h00);
    send_word(64'hD0E5B317_6A9C42FD, 8'h00);
    send_word(64'h7F8A1DCC_0045BE92, 8'h00);
    send_word(64'h2843F6B1_E9DA107C, 8'h00);
    send_word(64'hC6BD902E_1357AF48, 8'hFF);
		#25; 
 // ========================================== INS_MEM_Write
	 memory_port_master = 2'b10;
	  debug_instr_write_en = 1;

	  // Load Vectors from Data Memory to Registers
	  debug_pc = 9'd0;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd1;  debug_instr_in = 32'h8C010001; @(negedge clk); // LW $1, 1($0) -> Load Vec 1
	  debug_pc = 9'd2;  debug_instr_in = 32'h8C020002; @(negedge clk); // LW $2, 2($0) -> Load Vec 2
	  debug_pc = 9'd3;  debug_instr_in = 32'h8C060003; @(negedge clk); // LW $6, 3($0) -> Load Bias to $6
	  
	  // Pipeline Data Hazard NOPs (Wait 5 cycles for LW to reach Writeback stage)
	  debug_pc = 9'd4;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd5;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd6;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd7;  debug_instr_in = 32'h00000000; @(negedge clk);
		 
/*	  // ADDFP Operation
	  debug_pc = 9'd8;  debug_instr_in = 32'h10221800; @(negedge clk); // ADDFP $3, $1, $2
	  debug_pc = 9'd9;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd10; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd11; debug_instr_in = 32'h00000000; @(negedge clk);
	  
	  // MULTFP Operation
	  debug_pc = 9'd12; debug_instr_in = 32'h14222000; @(negedge clk); // MULTFP $4, $1, $2
	  debug_pc = 9'd13; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd14; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd15; debug_instr_in = 32'h00000000; @(negedge clk);
	
	  // MAC Operation
	  debug_pc = 9'd16; debug_instr_in = 32'h1C223980; @(negedge clk); // MAC $7, $6, $1, $2  
	  debug_pc = 9'd17; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd18; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd19; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd20; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd21; debug_instr_in = 32'h00000000; @(negedge clk);

	  // ReLU Operation
	  debug_pc = 9'd22; debug_instr_in = 32'h18E04000; @(negedge clk); // RELU $8, $7 -> $8 = MAX(0, $7)*/
	  debug_pc = 9'd08; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd09; debug_instr_in = 32'h14C21800; @(negedge clk); // MULTFP $3, $6, $2 0001 0100 1100 0010 0001 1000 
	  // Pipeline Data Hazard NOPs (Wait 5 cycles for MULT to reach Writeback stage)
	  
	  debug_pc = 9'd10; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd11; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd12; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd13; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd14; debug_instr_in = 32'h00000000; @(negedge clk);
	  // Store Results back to Memory
	  debug_pc = 9'd15; debug_instr_in = 32'hAC030005; @(negedge clk); // SW $3, 5($0) -> Store ADDFP
	  debug_pc = 9'd16; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd17; debug_instr_in = 32'h00000000; @(negedge clk);
	  
	  debug_pc = 9'd18; debug_instr_in = 32'h00000000; @(negedge clk); // Infinite NOP buffer
	  
	  debug_instr_write_en = 0; // Disable instruction write
	  debug_enable = 0; // Release debug control so CPU can run memory
	  #600;
	  @(negedge clk);
	  debug_enable = 1; // Re-enable debug mode
	  #100
	  for (i = 0; i < 32; i = i + 1) begin
			uut.gpu_instance.reg_file[i] = 64'd0;
		end
	     $display("Initializing source registers...");
	  for (i = 0; i < 128; i = i + 1) begin
	 		uut.cpu_instance.reg_file[i] = 64'd0;
		end
	 reset_gpu = 1'b1;
	 #5000;
    
	 reset_gpu = 1'b0;
    sent_word_count = 0;
    received_word_count = 0;
	 #200
	 reset_cpu = 1;
	 memory_port_master = 2'b01;
	 #150000
	 
	 reset_cpu = 0;
	 memory_port_master = 2'b00;
	 
	 #200;
	 out_rdy = 1'b1;
    #5000;
    $finish;
  end

endmodule