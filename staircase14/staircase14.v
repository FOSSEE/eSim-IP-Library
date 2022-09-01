module staircase14(input clk,
			output reg[3:0] val);

	always @ (posedge clk) begin
		if(val[3] == 1)
			val <= 0;
		else
			val <= val + val + 1;
   	end

endmodule
