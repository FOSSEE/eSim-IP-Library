module glenn_PISO(
	input in_Clk,
	input [7:0]in_8bitData,
	input in_En,
	output out_Serial
	);
	reg [7:0]reg_Q;
	always@(posedge in_Clk)
	  begin
			if(in_En)
			reg_Q<=in_8bitData;
			else
			begin
			reg_Q[0]<=reg_Q[1];
         reg_Q[1]<=reg_Q[2];
         reg_Q[2]<=reg_Q[3];
         reg_Q[3]<=reg_Q[4];
         reg_Q[4]<=reg_Q[5];
         reg_Q[5]<=reg_Q[6];
         reg_Q[6]<=reg_Q[7];
         reg_Q[7]<=1'bX;
			end
	  end
	assign out_Serial=reg_Q[0];
endmodule