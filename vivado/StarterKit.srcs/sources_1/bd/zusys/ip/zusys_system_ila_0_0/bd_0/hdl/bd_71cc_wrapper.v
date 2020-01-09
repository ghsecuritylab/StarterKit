//Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Command: generate_target bd_71cc_wrapper.bd
//Design : bd_71cc_wrapper
//Purpose: IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module bd_71cc_wrapper
   (clk,
    probe0);
  input clk;
  input [15:0]probe0;

  wire clk;
  wire [15:0]probe0;

  bd_71cc bd_71cc_i
       (.clk(clk),
        .probe0(probe0));
endmodule