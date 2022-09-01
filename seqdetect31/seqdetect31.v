module seqdetect31(I,CLK,RST,Z);
input I,CLK,RST;
output reg Z;
reg [4:0]state;
parameter S0=5'b00000,S1=5'b00001,S2=5'b00010,S3=5'b00011,S4=5'b00100;

always @(posedge CLK,posedge RST) 
begin
if (RST==0) 
state <= S0;

else
begin

if (I ==0)
case (state)
S0: state <= S0;
S1: state <=S2;
S2: state <=S3;
S3: state <= S0;
S4: state <= S0;

 endcase

 else 
 case ( state)
S0: state <= S1;
S1: state <=S1;
S2: state <=S1;
S3: state <= S4;
S4: state <= S1;
 endcase  
 
 if ((I == 1)&&(state == S4)) Z <=1;
 else Z <=0;
end
 end
endmodule
