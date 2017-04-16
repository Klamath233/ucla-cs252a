`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:42:35 04/16/2017 
// Design Name: 
// Module Name:    comb21 
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
module comb21(
    input gL,
    input aL,
    input gR,
    output gout
    );

wire aLgR;

and(aLgR, aL, gR);
or(gout, gL, aLgR);

endmodule
