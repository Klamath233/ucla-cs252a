`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:49 04/15/2017 
// Design Name: 
// Module Name:    cla4 
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
module cla4(x,y,c0,s,c4,G,A);
input [3:0] x;
input [3:0] y;
input c0;
output [3:0] s;
output c4;
output G;
output A;
wire [3:0] g;
wire [3:0] a;
wire [3:0] p;
wire c1,
		c2,
		c3;
gap gap0(x[0],y[0],g[0],a[0],p[0]);
gap gap1(x[1],y[1],g[1],a[1],p[1]);
gap gap2(x[2],y[2],g[2],a[2],p[2]);
gap gap3(x[3],y[3],g[3],a[3],p[3]);

clg4 clg(g,a,c0,A,G,c1,c2,c3,c4);
assign s[0]=p[0]^c0;
assign s[1]=p[1]^c1;
assign s[2]=p[2]^c2;
assign s[3]=p[3]^c3;
endmodule