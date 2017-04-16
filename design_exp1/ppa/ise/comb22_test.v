`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:11:10 04/15/2017
// Design Name:   comb22
// Module Name:   C:/Users/Xi Han/Documents/workspace/ucla-cs252a/design_exp1/ppa/ise/comb22_test.v
// Project Name:  ppa
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comb22
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comb22_test;

	// Inputs
	reg gL;
	reg aL;
	reg gR;
	reg aR;

	// Outputs
	wire gout;
	wire aout;

	// Instantiate the Unit Under Test (UUT)
	comb22 uut (
		.gL(gL), 
		.aL(aL), 
		.gR(gR), 
		.aR(aR), 
		.gout(gout), 
		.aout(aout)
	);

	initial begin
		// Initialize Inputs
		gL = 0;
		aL = 0;
		gR = 0;
		aR = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		aL = 1;
		aR = 1;
		gL = 0;
		gR = 0;
		
		#50;
		gR = 1;
		
	end
      
endmodule

