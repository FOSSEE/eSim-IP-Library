\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/

//Your Verilog/System Verilog Code Starts Here:
module glenn_RAM128x32

( //ports

input wire clk,

input wire we,

input wire [6:0] address,

input wire [31:0] d,

output reg [31:0] q

);
   
reg [31:0]MEMORY[2**7-1:0];

always@(posedge clk)

begin

if(we)

MEMORY[address]<=d;

else

MEMORY[address]<=32'hxxxxxxxx;

end

assign q=MEMORY[address];

endmodule

//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  we;//input
		logic  [6:0] address;//input
		logic  [31:0] d;//input
		logic  [31:0] q;//output
//The $random() can be replaced if user wants to assign values
		assign we = 1'b1;
		assign address = cyc_cnt;
		assign d = cyc_cnt;
		glenn_RAM128x32 glenn_RAM128x32(.clk(clk), .we(we), .address(address), .d(d), .q(q));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule

