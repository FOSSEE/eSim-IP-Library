\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off LATCH*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off NULLPORT*/  /* verilator lint_off EOFNEWLINE*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/  /* verilator lint_off */  

//Your Verilog/System Verilog Code Starts Here:


   
module glenn_FSM(

input [2:0]In3,

input RST,

input clk,

output reg [2:0] Out1

);

reg [2:0]current_state,next_state;

parameter A=3'b000,B=3'b001,C=3'b010,D=3'b011,E=3'b100,F=3'b101;

always@(posedge clk or negedge RST)

begin:STATE_MEMORY

if(!RST)

current_state<= current_state;

else

current_state<= next_state;

end

always@(current_state or In3)

begin : NEXT_STATE_LOGIC

case(current_state)
   
A : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

B : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

C : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

D : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

E : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

F : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

endcase

end

always@(current_state)

begin:OUTPUT_LOGIC

case(current_state)

A : Out1=3'b000;

B : Out1=3'b001;

C : Out1=3'b010;

D : Out1=3'b011;

E : Out1=3'b100;

F : Out1=3'b101;

endcase

end

endmodule





//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  [2:0] In3;//input
		logic  RST;//input
		logic  Out1;//output
//The $random() can be replaced if user wants to assign values
		assign In3 = $random();
		assign RST = $random();
		glenn_FSM glenn_FSM(.In3(In3), .RST(RST), .clk(clk), .Out1(Out1));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule

