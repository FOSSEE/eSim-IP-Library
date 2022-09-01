module FF(CLK, Q, QBAR); 
 
	input CLK; 
 
	output QBAR; 
	output Q; 
 
	wire CLK; 
	wire Q; 
	wire QBAR; 
	 
	reg state; 
	 
	always @(posedge CLK) 
	begin 
		begin 
			state <= ~state; 
		end 
	end 
	 
	assign QBAR = ~state; 
	assign Q = state; 
 
endmodule 

