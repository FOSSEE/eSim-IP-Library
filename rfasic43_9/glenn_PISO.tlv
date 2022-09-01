\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/ 

//Your Verilog/System Verilog Code Starts Here:
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
			
			
			
				

//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  in_Clk;//input
		logic  [7:0] in_8bitData;//input
		logic  in_En;//input
		logic  [7:0] out_Serial;//output
//The $random() can be replaced if user wants to assign values
		assign in_Clk = clk;
		assign in_8bitData = 8'b00110011;
      assign in_En = reset;
		glenn_PISO glenn_PISO(.in_Clk(in_Clk), .in_8bitData(in_8bitData), .in_En(in_En), .out_Serial(out_Serial));
	
\TLV
//Add \TLV here if desired    

\SV
endmodule

