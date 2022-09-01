module srlatch32(Q, Qn, CLK, S, R);
   output Q;
   output Qn;
   input  CLK;   
   input  S;
   input  R;

   wire   S1;
   wire   R1;
   
   and(S1, CLK, S);
   and(R1, CLK, R);   
   nor(Qn, S1, Q);
   nor(Q, R1, Qn);
endmodule
