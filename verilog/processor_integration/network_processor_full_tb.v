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
  localparam CLK_PERIOD       = 200; // Using a faster clock for simulation
  integer i;

  // Inputs to UUT
  reg                         clk;
  reg                         reset;
  reg                         memory_port_master;
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
    .clk(clk),
    .reset(reset)
  );

  // Clock generator
  always #(CLK_PERIOD/2) clk = ~clk;

  // Helper task to apply reset (active-low, consistent with RSTB)
  task apply_reset;
    begin
      $display("[%0t] INFO: Applying reset (active-low).", $time);
      reset <= 1'b0; // Assert reset
      #(CLK_PERIOD * 5);
      reset <= 1'b1; // De-assert reset
      $display("[%0t] INFO: Reset released.", $time);
      #(CLK_PERIOD);
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
  endtask

  // Main test sequence
  initial begin
    // Initialize signals
    clk = 1'b0;
    reset = 1'b1;
    memory_port_master = 1'b1;
    out_rdy = 1'b0;
    in_data = 64'bx;
    in_ctrl = 8'bx;
    in_wr = 1'b0;
    errors = 0;
    cpu_activity_detected = 1'b0;

	 #1000
	     $display("Initializing source registers...");
	 for (i = 0; i < 128; i = i + 1) begin
			uut.cpu_instance.reg_file[i] = 64'd0;
		end
	 reset = 0;
	 #1200000

    apply_reset();
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
    #(CLK_PERIOD * 5);
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
  end

endmodule