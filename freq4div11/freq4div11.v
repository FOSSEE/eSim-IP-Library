`include "ff.v"
module freq4div11(CLK, COUNT); 
 	
	input CLK; 
	output COUNT; 
	 
	reg CLK; 
	reg COUNT;

	wire C1; 
	wire Q1; 
	wire Q2; 
	 
	FF TFF1(.CLK(CLK), .Q(Q1), .QBAR(C1)); 
	FF TFF2(.CLK(C1), .Q(), .QBAR(Q2)); 
	 
	assign COUNT = Q2; 
 
endmodule 
