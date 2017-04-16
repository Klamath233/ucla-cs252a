`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:39 04/15/2017 
// Design Name: 
// Module Name:    cla32 
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
module cla32(x,y,c0,s,c);
input [31:0] x;
input [31:0] y;
input c0;
output [31:0] s;
output [7:0] c;
wire [7:0] G;
wire [7:0] A;

cla4 cla0(x[3:0],y[3:0],c0,s[3:0],,G[0],A[0]);
cla4 cla1(x[7:4],y[7:4],c[0],s[7:4],,G[1],A[1]);
cla4 cla2(x[11:8],y[11:8],c[1],s[11:8],,G[2],A[2]);
cla4 cla3(x[15:12],y[15:12],c[2],s[15:12],,G[3],A[3]);
cla4 cla4(x[19:16],y[19:16],c[3],s[19:16],,G[4],A[4]);
cla4 cla5(x[23:20],y[23:20],c[4],s[23:20],,G[5],A[5]);
cla4 cla6(x[27:24],y[27:24],c[5],s[27:24],,G[6],A[6]);
cla4 cla7(x[31:28],y[31:28],c[6],s[31:28],,G[7],A[7]);

clg4 clg0({G[3],G[2],G[1],G[0]},{A[3],A[2],A[1],A[0]},c0,,,c[0],c[1],c[2],c[3]);
clg4 clg1({G[7],G[6],G[5],G[4]},{A[7],A[6],A[5],A[4]},c[3],,,c[4],c[5],c[6],c[7]);
endmodule
