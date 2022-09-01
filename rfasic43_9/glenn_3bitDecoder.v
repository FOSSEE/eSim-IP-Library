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