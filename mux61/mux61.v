module mux61(a,b,c,d,s0,s1,out);
input wire a,b,c,d;
input wire s0,s1;
output out;
assign out=s1 ?(s0?d:c):(s0?b:a);
endmodule
