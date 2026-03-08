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

module network_processor_full_tb;

  // Parameters
  localparam DATA_WIDTH       = 64;
  localparam CTRL_WIDTH       = 8;
  localparam FIFO_DEPTH_WORDS = 256;
  localparam clk_PERIOD       = 200; // Using a faster clock for simulation
  integer i;

  // Inputs to UUT
  reg                         clk;
  reg                         reset_cpu;
  reg                         reset_gpu;
  reg [1:0]                   memory_port_master;
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
  always #(clk_PERIOD/2) clk = ~clk;

  // Helper task to apply reset (active-low, consistent with RSTB)
/*  task apply_reset;
    begin
      $display("[%0t] INFO: Applying reset (active-low).", $time);
      reset <= 1'b0; // Assert reset
      #(clk_PERIOD * 5);
      reset <= 1'b1; // De-assert reset
      $display("[%0t] INFO: Reset released.", $time);
      #(clk_PERIOD);
    end
  endtask

  // Helper task to send one word to the FIFO datapath
  task send_word;
    input [DATA_WIDTH-1:0] data;
    input [CTRL_WIDTH-1:0] ctrl;
    begin
      wait(in_rdy);
      @(posedge clk);
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
  endtask*/

  // Main test sequence
  initial begin
    // Initialize signals
    clk = 1'b0;
    reset_gpu = 1'b0;
	 reset_cpu = 1'b1;
    memory_port_master = 2'b10;
    out_rdy = 1'b0;
    in_data = 64'bx;
    in_ctrl = 8'bx;
    in_wr = 1'b0;
    errors = 0;
    cpu_activity_detected = 1'b0;
	 debug_enable = 1;
	 debug_instr_write_en = 0;
	
	  
	  // Wait a few cycles
	 #25; 
 // ========================================== INS_MEM_Write
	  debug_instr_write_en = 1;

	  // Load Vectors from Data Memory to Registers
	  debug_pc = 9'd0;  debug_instr_in = 32'h8C010000; @(negedge clk); // LW $1, 0($0) -> Load Vec 1
	  debug_pc = 9'd1;  debug_instr_in = 32'h8C020001; @(negedge clk); // LW $2, 1($0) -> Load Vec 2
	  debug_pc = 9'd2;  debug_instr_in = 32'h8C060002; @(negedge clk); // LW $6, 2($0) -> Load Bias to $6
	  
	  // Pipeline Data Hazard NOPs (Wait 5 cycles for LW to reach Writeback stage)
	  debug_pc = 9'd3;  debug_instr_in = 32'h00000000; @(negedge clk); 
	  debug_pc = 9'd4;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd5;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd6;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd7;  debug_instr_in = 32'h00000000; @(negedge clk);
		 
	  // ADDFP Operation
	  debug_pc = 9'd8;  debug_instr_in = 32'h10221800; @(negedge clk); // ADDFP $3, $1, $2
	  debug_pc = 9'd9;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd10;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd11;  debug_instr_in = 32'h00000000; @(negedge clk);
	  
	  // MULTFP Operation
	  debug_pc = 9'd12; debug_instr_in = 32'h14222000; @(negedge clk); // MULTFP $4, $1, $2
	  debug_pc = 9'd13;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd14;  debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd15;  debug_instr_in = 32'h00000000; @(negedge clk);
	
	  // MAC Operation
	  debug_pc = 9'd16; debug_instr_in = 32'h1C223980; @(negedge clk); // MAC $7, $6, $1, $2
	  
	  // Pipeline Data Hazard NOPs (Wait 5 cycles for MAC to reach Writeback stage)
	  debug_pc = 9'd17; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd18; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd19; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd20; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd21; debug_instr_in = 32'h00000000; @(negedge clk);

	  // ReLU Operation
	  debug_pc = 9'd22; debug_instr_in = 32'h18E04000; @(negedge clk); // RELU $8, $7 -> $8 = MAX(0, $7)
	  
	  // Pipeline Data Hazard NOPs (Wait 5 cycles for ReLU to reach Writeback stage)
	  debug_pc = 9'd23; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd24; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd25; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd26; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd27; debug_instr_in = 32'h00000000; @(negedge clk);

	  // Store Results back to Memory
	  debug_pc = 9'd28; debug_instr_in = 32'hAC030003; @(negedge clk); // SW $3, 3($0) -> Store ADDFP
	  debug_pc = 9'd29; debug_instr_in = 32'hAC040004; @(negedge clk); // SW $4, 4($0) -> Store MULTFP
	  debug_pc = 9'd30; debug_instr_in = 32'hAC070005; @(negedge clk); // SW $7, 5($0) -> Store MAC
	  debug_pc = 9'd31; debug_instr_in = 32'hAC080006; @(negedge clk); // SW $8, 6($0) -> Store ReLU
	  debug_pc = 9'd32; debug_instr_in = 32'h00000000; @(negedge clk);
	  debug_pc = 9'd33; debug_instr_in = 32'h00000000; @(negedge clk);
	  
	  debug_pc = 9'd34; debug_instr_in = 32'hFC000000; @(negedge clk); // HALT
	  debug_pc = 9'd35; debug_instr_in = 32'h00000000; @(negedge clk); // Infinite NOP buffer
	  
	  debug_instr_write_en = 0; // Disable instruction write
	  debug_enable = 0; // Release debug control so CPU can run memory
	  #600;
	  @(negedge clk);
	  debug_enable = 1; // Re-enable debug mode
	 
	     $display("Initializing source registers...");
	 for (i = 0; i < 32; i = i + 1) begin
			uut.gpu_instance.reg_file[i] = 64'd0;
			
		end
		for (i = 0; i < 128; i = i + 1) begin
		
			uut.cpu_instance.reg_file[i] = 64'd0;
		end
	 reset_gpu = 1'b1;
	 #50000;
	 reset_gpu = 1'b0;
	 reset_cpu = 1'b0;
	 #500
	 memory_port_master = 2'b01;
	 reset_cpu = 1'b1;
	 #500
	 #1200000;
	 $stop;
	 
	 
    /*apply_reset();
    // --- TEST 1: Basic packet send with output stalled ---
    $display("\n--- TEST 1: Basic packet send with output stalled. ---");
    sent_word_count = 0;
    received_word_count = 0;
    out_rdy <= 1'b0; // Keep downstream stalled

    send_word(64'hAAAAAAAA_AAAAAAAA, 8'h00);
    send_word(64'hBBBBBBBB_BBBBBBBB, 8'h00);
    send_word(64'hCCCCCCCC_CCCCCCCC, 8'h01); // End of packet

    $display("[%0t] INFO: Packet sent. FIFO should be full. Waiting 5 cycles.", $time);
    
    // --- Final Results ---
    #(clk_PERIOD * 5);
    if (errors == 0) $display("\n--- ALL TESTS PASSED ---");
    else $display("\n--- TEST FAILED with %0d errors ---", errors);
    $finish;
  end

  // Verification and Monitoring Logic
  always @(posedge clk) begin
    if (reset && out_wr && out_rdy) begin
      if (received_word_count < sent_word_count) begin
        if (out_data !== sent_packet_data[received_word_count] || out_ctrl !== sent_packet_ctrl[received_word_count]) begin
          $display("[%0t] MISMATCH! Word: %0d. Expected: D=%h,C=%h. Got: D=%h,C=%h",
                 $time, received_word_count, sent_packet_data[received_word_count], sent_packet_ctrl[received_word_count], out_data, out_ctrl);
          errors = errors + 1;
        end else $display("[%0t] MATCH. Word: %0d. Data: %h, Ctrl: %h", $time, received_word_count, out_data, out_ctrl);
        received_word_count = received_word_count + 1;
      end else if (memory_port_master == 1'b0) begin
        $display("[%0t] UNEXPECTED DATA! Received more words than sent.", $time);
        errors = errors + 1;
      end
    end
  end*/
	end
endmodule