module fulladd32(s,c_out,a,b,c_in);
input a,b,c_in;
output reg s,c_out;


always@(a or b or c_in)
begin

  {c_out, s} = a + b + c_in; 

end
endmodule
