`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:44:47 04/18/2017
// Design Name:   cla16
// Module Name:   C:/downloads/Jessie/ucla-cs252a/design_exp1/cla/cla/cla16_test.v
// Project Name:  cla
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla16
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cla16_test;

	// Inputs
	reg [15:0] x;
	reg [15:0] y;
	reg c0;

	// Outputs
	wire [15:0] s;
	wire [3:0] c;

	// Instantiate the Unit Under Test (UUT)
	cla16 uut (
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
        
		// Add stimulus here
		x = 16'h000F;
		y = 1;
	end
      
endmodule

