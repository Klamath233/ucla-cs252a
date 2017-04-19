`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:59:20 04/18/2017
// Design Name:   cla64
// Module Name:   C:/downloads/Jessie/ucla-cs252a/design_exp1/cla/cla/cla64_test.v
// Project Name:  cla
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla64
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cla64_test;

	// Inputs
	reg [63:0] x;
	reg [63:0] y;
	reg c0;

	// Outputs
	wire [63:0] s;
	wire [3:0] c;

	// Instantiate the Unit Under Test (UUT)
	cla64 uut (
		.x(x), 
		.y(y), 
		.c0(c0), 
		.s(s), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;
		c0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      x = 64'hFFFFFFFFFFFFFFFE;
		y = 1;
		// Add stimulus here

	end
      
endmodule

