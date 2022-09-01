module digital_sinewave (clk, rst, compare, out, data_out);
    input clk, rst;
    input [8:1] compare;
    output reg out;
    //output reg outmod8;
    output [7:0] data_out;
    reg [8:1] sr;
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
    always @(posedge clk)
       begin
        if (rst) begin
            sr  <= 8'b10101010;     // initial non-zero value
            out <= 0;
        end
        else begin
            sr[8:2] <= sr[7:1];
            sr[1]   <= sr[4] ^ sr[5] ^ sr[6] ^ sr[8];
            out     <= (compare >= sr);
        end
      //if (rst) begin  
      //outmod8 <= out;  
      //end else begin  
      //if (outmod8 == 7)  
       // outmod8 <= 0;  
      //else  
       // outmod8 <= outmod8 + 1;  
    //end  
    //At every positive edge of the clock, output a sine wave sample
    begin
        data_out = sine[i];
        i = i + 1;
        if(i == 16)
            i = 0;
       //data_out <= outmod8;
    end
       end 
endmodule
