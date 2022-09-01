module glenn_TIMER(
	input in_Clk,
	output reg out_1minRecord,
	output reg out_5minTransmit
	);
	reg [5:0]reg_Countsec = 0;
	reg [5:0]reg_Countmin = 0;
	always@(posedge in_Clk)
	  begin
		  begin
		  if(reg_Countmin<5)
		    begin
			 if(reg_Countsec<60)
			   begin
			   reg_Countsec = reg_Countsec + 1;
			   out_1minRecord = 1'b0;
			   end
			 else
			   begin
			   reg_Countsec = 0;
			   out_1minRecord = 1'b1;
			   reg_Countmin = reg_Countmin + 1;
            out_5minTransmit = 1'b0;
			   end
			 end
		  else
		    begin
		    reg_Countmin = 0;
		    out_5minTransmit = 1'b1;
		    end
		  end
	  end
endmodule