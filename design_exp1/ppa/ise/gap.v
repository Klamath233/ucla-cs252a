`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:31 04/15/2017 
// Design Name: 
// Module Name:    gap 
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
module gap(
    input x,
    input y,
    output g,
    output a,
    output p
    );

and(g, x, y);
or(a, x, y);
xor(p, x, y);

endmodule
