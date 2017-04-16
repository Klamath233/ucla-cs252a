`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:33:21 04/15/2017
// Design Name:   gap
// Module Name:   C:/Users/Xi Han/Documents/workspace/ucla-cs252a/design_exp1/ppa/ise/gap_test.v
// Project Name:  ppa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gap
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gap_test;

	// Inputs
	reg x;
	reg y;

	// Outputs
	wire g;
	wire a;
	wire p;

	// Instantiate the Unit Under Test (UUT)
	gap uut (
		.x(x), 
		.y(y), 
		.g(g), 
		.a(a), 
		.p(p)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		x = 1;
		y = 0;
		
		#50;
		
		x = 1;
		y = 1;
		
		#50;
		
		x = 0;
		y = 1;
		
	end
      
endmodule

