`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:32 04/15/2017 
// Design Name: 
// Module Name:    clg4 
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
module clg4(g,a,c0,A,G,c1,c2,c3,c4);
input [3:0] g;
input [3:0] a;
input c0;
output A;
output G;
output c1;
output c2; 
output c3;
output c4;


assign c1=g[0]|(a[0]&c0);
assign c2=g[1]|(a[1]&g[0])|(a[1]&a[0]&c0);
assign c3=g[2]|(a[2]&g[1])|(a[2]&a[1]&g[0])|(a[2]&a[1]&a[0]&c0);
assign A=a[3]&a[2]&a[1]&a[0];
assign G=g[3]|(a[3]&g[2])|(a[3]&a[2]&g[1])|(a[3]&a[2]&a[1]&g[0]);
assign c4=G|(A&c0);
endmodule
