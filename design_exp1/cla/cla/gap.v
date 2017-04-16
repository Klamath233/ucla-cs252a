`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:00 04/15/2017 
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
module gap(x,y,g,a,p);
input x;
input y;
output g;
output a;
output p;

assign g=x&y;
assign a=x|y;
assign p=x^y;
endmodule
