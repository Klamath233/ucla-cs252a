`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:57:00 04/16/2017
// Design Name:   ppa
// Module Name:   C:/Users/Xi Han/Documents/workspace/ucla-cs252a/design_exp1/ppa/ise/ppa_test.v
// Project Name:  ppa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ppa
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ppa_test;

	// Inputs
	reg [31:0] x;
	reg [31:0] y;
	reg c_in;

	// Outputs
	wire [31:0] s;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	ppa uut (
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
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      x = 4294967295;
		y = 1;
		// Add stimulus here

	end
      
endmodule

