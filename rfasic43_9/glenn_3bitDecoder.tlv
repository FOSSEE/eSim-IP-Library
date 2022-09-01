\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/ 

//Your Verilog/System Verilog Code Starts Here:
module glenn_3bitDecoder(

input [2:0]  in3,

input en,

output d0,d1,d2,d3,d4,d5,d6,d7
   
);

reg a,b,c;
reg [7:0]d;
assign c=in3[0];
assign b=in3[1];
assign a=in3[2];

always @(in3 or en)

begin
      if(en) 
      begin
      d[0]=((~a)&(~b)&(~c));
		d[1]=((~a)&(~b)&c);
		d[2]=((~a)&b&(~c));
		d[3]=((~a)&b&c);
		d[4]=(a&(~b)&(~c));
		d[5]=(a&(~b)&c);
		d[6]=(a&b&(~c));
		d[7]=(a&b&c);
      end
	   else
      d=8'b0000000;
end
assign d0=d[0];
assign d1=d[1];
assign d2=d[2];
assign d3=d[3];
assign d4=d[4];
assign d5=d[5];
assign d6=d[6];
assign d7=d[7];
endmodule

//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  [2:0] in3;//input
		logic  en;//input
		logic  d0;//output
		logic  d1;//output
		logic  d2;//output
		logic  d3;//output
		logic  d4;//output
		logic  d5;//output
		logic  d6;//output
		logic  d7;//output
//The $random() can be replaced if user wants to assign values
		assign in3 = cyc_cnt;
		assign en = 1'b0;
		glenn_3bitDecoder glenn_3bitDecoder(.in3(in3), .en(en), .d0(d0), .d1(d1), .d2(d2), .d3(d3), .d4(d4), .d5(d5), .d6(d6), .d7(d7));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule

