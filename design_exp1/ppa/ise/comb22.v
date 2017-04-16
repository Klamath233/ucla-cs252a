`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:23:48 04/15/2017 
// Design Name: 
// Module Name:    comb22 
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
module comb22(
    input gL,
    input aL,
    input gR,
    input aR,
    output gout,
    output aout
    );

wire aLgR;

and(aout, aL, aR);

and(aLgR, aL, gR);
or(gout, gL, aLgR);

endmodule
