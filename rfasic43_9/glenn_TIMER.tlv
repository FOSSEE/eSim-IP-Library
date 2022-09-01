\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off LATCH*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off NULLPORT*/  /* verilator lint_off EOFNEWLINE*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/  /* verilator lint_off */  

//Your Verilog/System Verilog Code Starts Here:
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

//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  in_Clk;//input
		logic  out_1minRecord;//output
		logic  out_5minTransmit;//output
//The $random() can be replaced if user wants to assign values
		assign in_Clk = $random();
		glenn_TIMER glenn_TIMER(.in_Clk(in_Clk), .out_1minRecord(out_1minRecord), .out_5minTransmit(out_5minTransmit));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule

