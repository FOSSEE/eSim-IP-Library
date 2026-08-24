module parity_checker (
    input data_in1,
    input data_in0,
    input parity_in0,
    input parity_type0,
    output error_flag0
);

wire parity_calc;
wire parity_expected;

assign parity_calc = data_in1 ^ data_in0;

assign parity_expected = parity_type0 ? ~parity_calc : parity_calc;

assign error_flag0 = parity_expected ^ parity_in0;

endmodule