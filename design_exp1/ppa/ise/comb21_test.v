`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:52:06 04/16/2017
// Design Name:   comb21
// Module Name:   C:/Users/Xi Han/Documents/workspace/ucla-cs252a/design_exp1/ppa/ise/comb21_test.v
// Project Name:  ppa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comb21
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comb21_test;

	// Inputs
	reg gL;
	reg aL;
	reg gR;

	// Outputs
	wire gout;

	// Instantiate the Unit Under Test (UUT)
	comb21 uut (
		.gL(gL), 
		.aL(aL), 
		.gR(gR), 
		.gout(gout)
	);

	initial begin
		// Initialize Inputs
		gL = 0;
		aL = 0;
		gR = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

