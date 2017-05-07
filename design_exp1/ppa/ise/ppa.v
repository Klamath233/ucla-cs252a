`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:36 04/15/2017 
// Design Name: 
// Module Name:    ppa 
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
module ppa(x, y, c_in, s, c_out);

parameter n = 31;
parameter max_layer = $clog2(n + 1);

input [n:0] x;
input [n:0] y;
input c_in;
output [n:0] s;
output c_out;

genvar i;
genvar j;

wire [n:0] g_layers [0:max_layer];
wire [n:0] a_layers [0:max_layer];
wire [n:0] p;

	for (j = n; j >= 0; j = j - 1) begin: GAP_LOOP
		gap gap(x[j], y[j], g_layers[0][j], a_layers[0][j], p[j]);
	end
	
	for (i = 1; i <= max_layer; i = i + 1) begin
		for (j = n; j >= 0; j = j - 1) begin: COMB_LOOP
			if (j > 2 ** i - 2) begin
				// Use comb22 (white dot in slides)
				comb22 comb22(g_layers[i - 1][j],
					a_layers[i - 1][j],
					g_layers[i - 1][j - 2 ** (i - 1)], 
					a_layers[i - 1][j - 2 ** (i - 1)],
					g_layers[i][j],
					a_layers[i][j]);
			end else if (j > 2 ** i - 2 - 2 ** (i - 1)) begin
				// Use comb21 (black dot in slides)
				if (j - 2 ** (i - 1) < 0) begin
					comb21 comb21(g_layers[i - 1][j],
						a_layers[i - 1][j], 
						c_in,
						g_layers[i][j]);
				end else begin
					comb21 comb21(g_layers[i - 1][j],
						a_layers[i - 1][j], 
						g_layers[i - 1][j - 2 ** (i - 1)],
						g_layers[i][j]);

				end
			end else begin
				// buf(g_layers[i][j], g_layers[i - 1][j]);
			end
		end
	end
	
	comb21 comb21(g_layers[max_layer][n], a_layers[max_layer][n], c_in, c_out);

	for (j = n; j > 0; j = j - 1) begin
		xor(s[j], g_layers[max_layer][j - 1], p[j]);
	end

	xor(s[0], c_in, p[0]);
	


endmodule
