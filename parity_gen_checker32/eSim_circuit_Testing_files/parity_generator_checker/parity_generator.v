

module parity_generator 
(
    input  [1:0] data_in,
    input  parity_type, // 0 = Even parity, 1 = Odd parity
    output parity_out
);

    wire xor_all;

    assign xor_all = ^data_in;

    assign parity_out = parity_type ? ~xor_all : xor_all;

endmodule

