module priencode16_4(out,i);
  output reg [3:0]out;
  input [15:0]i;
 always @ (*)
   casex(i)
     	16'b0000000000000001:out = 4'b0000;
		16'b000000000000001x:out = 4'b0001;
		16'b00000000000001xx:out = 4'b0010;
		16'b0000000000001xxx:out = 4'b0011;
		16'b000000000001xxxx:out = 4'b0100;
		16'b00000000001xxxxx:out = 4'b0101;
		16'b0000000001xxxxxx:out = 4'b0110;
		16'b00000001xxxxxxxx:out = 4'b0111;
		16'b0000001xxxxxxxxx:out = 4'b1000;
		16'b000001xxxxxxxxxx:out = 4'b1001;
		16'b00001xxxxxxxxxxx:out = 4'b1010;
		16'b0001xxxxxxxxxxxx:out = 4'b1011;
		16'b001xxxxxxxxxxxxx:out = 4'b1100;
		16'b001xxxxxxxxxxxxx:out = 4'b1101;
		16'b001xxxxxxxxxxxxx:out = 4'b1110;
		16'b1xxxxxxxxxxxxxxx:out = 4'b1111;
default : out=4'bxxxx;
   endcase
endmodule
