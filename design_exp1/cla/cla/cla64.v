`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:59 04/15/2017 
// Design Name: 
// Module Name:    cla64 
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
module cla64(x,y,c0,s,c);
input [63:0] x;
input [63:0] y;
input c0;
output [63:0] s;
output [3:0] c;
wire [15:0] G;
wire [15:0] A;
wire [15:0] carry;
wire [3:0] G2;
wire [3:0] A2;

cla4 cla0(x[3:0],y[3:0],c0,s[3:0],,G[0],A[0]);
cla4 cla1(x[7:4],y[7:4],carry[0],s[7:4],,G[1],A[1]);
cla4 cla2(x[11:8],y[11:8],carry[1],s[11:8],,G[2],A[2]);
cla4 cla3(x[15:12],y[15:12],carry[2],s[15:12],,G[3],A[3]);
cla4 cla4(x[19:16],y[19:16],carry[3],s[19:16],,G[4],A[4]);
cla4 cla5(x[23:20],y[23:20],carry[4],s[23:20],,G[5],A[5]);
cla4 cla6(x[27:24],y[27:24],carry[5],s[27:24],,G[6],A[6]);
cla4 cla7(x[31:28],y[31:28],carry[6],s[31:28],,G[7],A[7]);
cla4 cla8(x[35:32],y[35:32],carry[7],s[35:32],,G[8],A[8]);
cla4 cla9(x[39:36],y[39:36],carry[8],s[39:36],,G[9],A[9]);
cla4 cla10(x[43:40],y[43:40],carry[9],s[43:40],,G[10],A[10]);
cla4 cla11(x[47:44],y[47:44],carry[10],s[47:44],,G[11],A[11]);
cla4 cla12(x[51:48],y[51:48],carry[11],s[51:48],,G[12],A[12]);
cla4 cla13(x[55:52],y[55:52],carry[12],s[55:52],,G[13],A[13]);
cla4 cla14(x[59:56],y[59:56],carry[13],s[59:56],,G[14],A[14]);
cla4 cla15(x[63:60],y[63:60],carry[14],s[63:60],,G[15],A[15]);

clg4 clg0({G[3],G[2],G[1],G[0]},{A[3],A[2],A[1],A[0]},c0,A2[0],G2[0],carry[0],carry[1],carry[2],carry[3]);
clg4 clg1({G[7],G[6],G[5],G[4]},{A[7],A[6],A[5],A[4]},carry[3],A2[1],G2[1],carry[4],carry[5],carry[6],carry[7]);
clg4 clg2({G[11],G[10],G[9],G[8]},{A[11],A[10],A[9],A[8]},carry[7],A2[2],G2[2],carry[8],carry[9],carry[10],carry[11]);
clg4 clg3({G[15],G[14],G[13],G[12]},{A[15],A[14],A[13],A[12]},carry[11],A2[3],G2[3],carry[12],carry[13],carry[14],carry[15]);

clg4 clg_level3({G2[3],G2[2],G2[1],G2[0]},{A2[3],A2[2],A2[1],A2[0]},c0,,,c[0],c[1],c[2],c[3]);
endmodule