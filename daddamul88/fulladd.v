module fulladd(q1,p1,fad,car,cout);
input q1,p1,car;
output fad,cout;

wire w1= q1^p1;
xor (fad,w1,car);

wire a1= w1&car;
wire a2= q1&p1;

or(cout,a1,a2);

endmodule

