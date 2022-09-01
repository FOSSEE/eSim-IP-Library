module mayur_half_adder(
    Data_in_A,
    Data_in_B,
    Data_out_Sum,
    Data_out_Carry
    );

    //what are the input ports.
    input Data_in_A;
    input Data_in_B;
    //What are the output ports.
    output Data_out_Sum;
     output Data_out_Carry;
     
     //Implement the Sum and Carry equations using Verilog Bit operators.
     assign Data_out_Sum = Data_in_A ^ Data_in_B;  //XOR operation
     assign Data_out_Carry = Data_in_A & Data_in_B; //AND operation
    
endmodule

module mayur_full_adder(
    Data_in_A,  //input A
    Data_in_B,  //input B
    Data_in_C,  //input C
    Data_out_Sum,
    Data_out_Carry
    );

    //what are the input ports.
    input Data_in_A;
    input Data_in_B;
     input Data_in_C;
    //What are the output ports.
    output Data_out_Sum;
     output Data_out_Carry;
     //Internal variables
     wire ha1_sum;
     wire ha2_sum;
     wire ha1_carry;
     wire ha2_carry;
     wire Data_out_Sum;
     wire Data_out_Carry;

     //Instantiate the half adder 1
    mayur_half_adder  ha1(
        .Data_in_A(Data_in_A),
        .Data_in_B(Data_in_B),
        .Data_out_Sum(ha1_sum),
        .Data_out_Carry(ha1_carry)
    );
    
    //Instantiate the half adder 2
    mayur_half_adder  ha2(
        .Data_in_A(Data_in_C),
        .Data_in_B(ha1_sum),
        .Data_out_Sum(ha2_sum),
        .Data_out_Carry(ha2_carry)
    );

    //sum output from 2nd half adder is connected to full adder output
    assign Data_out_Sum = ha2_sum;  
    //The carry's from both the half adders are OR'ed to get the final carry./
    assign Data_out_Carry = ha1_carry | ha2_carry;
    
endmodule

module wallacemul66(A,B,prod);
    
    //inputs and outputs
    input [2:0] A,B;
    output [5:0] prod;
    //internal variables.
    wire s11,s12,s13,s22,s23,s32,s35,s34;
    wire c11,c12,c13,c22,c23,c32,c35;
    wire [2:0] p0,p1,p2,p3;

//initialize the p's.
    assign  p0 = A & {3{B[0]}};
    assign  p1 = A & {3{B[1]}};
    assign  p2 = A & {3{B[2]}};

//final product assignments    
    assign prod[0] = p0[0];
    assign prod[1] = s11;
    assign prod[2] = s22;
    assign prod[3] = s32;
    assign prod[4] = s34;
    assign prod[5] = s35;

//first stage
    mayur_half_adder ha11 (p0[1],p1[0],s11,c11);
    mayur_full_adder fa12(p0[2],p1[1],c11,s12,c12);
    mayur_half_adder ha15(p1[2],c12,s13,c13);

//second stage
    mayur_half_adder ha22 (p2[0],s12,s22,c22);
    mayur_full_adder fa23 (p2[1],c22,s13,s32,c32);
    mayur_full_adder fa24 (p2[2],c13,c32,s34,s35);

endmodule
