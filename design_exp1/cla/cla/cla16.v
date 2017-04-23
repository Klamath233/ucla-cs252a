`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:56 04/15/2017 
// Design Name: 
// Module Name:    cla16 
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
module cla16(x,y,c_in,s,c_out);
input [15:0] x;
input [15:0] y;
input c_in;
output [15:0] s;
output c_out;
wire [3:0] G;
wire [3:0] A;
wire [2:0] c;

cla4 cla0(x[3:0],y[3:0],c_in,s[3:0],,G[0],A[0]);
cla4 cla1(x[7:4],y[7:4],c[0],s[7:4],,G[1],A[1]);
cla4 cla2(x[11:8],y[11:8],c[1],s[11:8],,G[2],A[2]);
cla4 cla3(x[15:12],y[15:12],c[2],s[15:12],,G[3],A[3]);

clg4 clg({G[3],G[2],G[1],G[0]},{A[3],A[2],A[1],A[0]},c_in,,,c[0],c[1],c[2],c_out);
endmodule

