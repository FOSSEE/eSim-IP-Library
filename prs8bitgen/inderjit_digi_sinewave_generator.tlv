\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/ /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/
//Your Verilog/System Verilog Code Starts Here:

module inderjit_digi_sinewave_generator(clk, dsine, data_out);
//declare input and output
    input clk;
    input dsine; 
    output [7:0] data_out;
//8 bit Sine lookup table   
    reg [7:0] sine [0:16];
//Internal signals  
    integer i;  
    reg [7:0] data_out; 
 //Initialize the sine values with samples. 

        initial begin
        i = 0;
        sine[0] = 0;
        sine[1] = 76;
        sine[2] = 141;
        sine[3] = 185;
        sine[4] = 200;
        sine[5] = 185;
        sine[6] = 141;
        sine[7] = 76;
        sine[8] = 0;
        sine[9] = -76;
        sine[10] = -141;
        sine[11] = -185;
        sine[12] = -200;
        sine[13] = -185;
        sine[14] = -141;
        sine[15] = -76;
        sine[16] = 0;
    end

    
    //At every positive edge of the clock, output a sine wave sample.
    always@ (posedge clk)
    begin
        data_out = sine[i];
        i = i + 1;
        if(i == 16)
            i = 0;
    end

endmodule


//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  dsine;//input
		logic  [7:0] data_out;//output
//The $random() can be replaced if user wants to assign values
		assign dsine = reset;
		inderjit_digi_sinewave_generator inderjit_digi_sinewave_generator(.clk(clk), .dsine(dsine), .data_out(data_out));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule

