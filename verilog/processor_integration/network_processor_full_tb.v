`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:42:11 03/07/2026 
// Design Name: 
// Module Name:    network_processor_full_tb 
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

module network_processor_full_tb;
    localparam DATA_WIDTH       = 64;
    localparam CTRL_WIDTH       = 8;
    localparam FIFO_DEPTH_WORDS = 256;
    integer i;

    // Inputs signals:
    reg                         clk;
    reg                         cpu_reset, fifo_reset;
    reg                         memory_port_master;
    reg                         out_rdy;
    reg [DATA_WIDTH-1:0]        in_data;
    reg [CTRL_WIDTH-1:0]        in_ctrl;
    reg                         in_wr;

    // Outputs signals:
    wire [DATA_WIDTH-1:0]       out_data;
    wire [CTRL_WIDTH-1:0]       out_ctrl;
    wire                        out_wr;
    wire                        in_rdy;

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
                              .cpu_reset(cpu_reset),
                              .fifo_reset(fifo_reset)
                              );

    always #100 clk = ~clk;

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

            @(posedge clk);
            in_wr <= 1'b0;
            in_data <= 64'b0;
            in_ctrl <= 8'b0;
        end
    endtask

    initial begin
        clk = 1'b0;
        fifo_reset = 1'b0;
        cpu_reset = 1'b1;
        memory_port_master = 1'b0;
        out_rdy = 1'b0;
        in_data = 64'b0;
        in_ctrl = 8'b0;
        in_wr = 1'b0;

        #1000
        for (i = 0; i < 128; i = i + 1)
            uut.cpu_instance.reg_file[i] = 64'd0;

        // FIFO reset
        fifo_reset = 1'b1;
        #1000;
        fifo_reset = 1'b0;
        #200;

        // First, we send 10 input packets to FIFO from network:

        out_rdy <= 1'b0; // Keep output queue stalled
        send_word(64'h00000000_000001F4, 8'h00);
        send_word(64'hFFFFFFFF_FFFFFEA3, 8'h00);
        send_word(64'hA3F19C2D_7B4E8A10, 8'h00);
        send_word(64'h5E07D4B9_C8123FA6, 8'h00);
        send_word(64'h9B2A6F01_3D7C55E8, 8'h00);
        send_word(64'h1C4D8EAA_FF209B73, 8'h00);
        send_word(64'hD0E5B317_6A9C42FD, 8'h00);
        send_word(64'h7F8A1DCC_0045BE92, 8'h00);
        send_word(64'h2843F6B1_E9DA107C, 8'h00);
        send_word(64'hC6BD902E_1357AF48, 8'hFF);

        // GPU stimulus
        // port_master = 2
        // gpu computation

        // CPU de-assert reset to begin bubble sort on the received packets
        cpu_reset = 0;
        memory_port_master = 1'b1;
        #1200000

        // reset CPU and handover to network
        cpu_reset = 1;
        memory_port_master = 1'b0;
        #400;

        // Send packet to output queue
        out_rdy = 1'b1;
        #10000;
      $finish;
    end
endmodule