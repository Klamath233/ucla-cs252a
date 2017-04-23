`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:54:24 04/18/2017
// Design Name:   cla32
// Module Name:   C:/downloads/Jessie/ucla-cs252a/design_exp1/cla/cla/cla32_test.v
// Project Name:  cla
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cla32_test;

	// Inputs
	reg [31:0] x;
	reg [31:0] y;
	reg c_in;

	// Outputs
	wire [31:0] s;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	cla32 uut (
		.x(x), 
		.y(y), 
		.c_in(c_in), 
		.s(s), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;
		c_in = 1;

		// Wait 100 ns for global reset to finish
		#100;
      x = 32'hFFFFFFFE;
		y = 1;
		// Add stimulus here

	end
      
endmodule

