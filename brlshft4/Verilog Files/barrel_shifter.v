module barrel_shifter(
    input a3,
    input a2,
    input a1,
    input a0,

    input s1,
    input s0,

    output y3,
    output y2,
    output y1,
    output y0
);

// y3
assign y3 = (~s1 & ~s0 & a3) |
            (~s1 &  s0 & a2) |
            ( s1 & ~s0 & a1) |
            ( s1 &  s0 & a0);

// y2
assign y2 = (~s1 & ~s0 & a2) |
            (~s1 &  s0 & a1) |
            ( s1 & ~s0 & a0);

// y1
assign y1 = (~s1 & ~s0 & a1) |
            (~s1 &  s0 & a0);

// y0
assign y0 = (~s1 & ~s0 & a0);

endmodule
