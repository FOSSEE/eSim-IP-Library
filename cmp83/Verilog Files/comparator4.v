module comparator4(
    input a3,
    input a2,
    input a1,
    input a0,

    input b3,
    input b2,
    input b1,
    input b0,

    output gt,
    output eq,
    output lt
);

assign gt = (a3 & ~b3) |
            (~(a3 ^ b3) & a2 & ~b2) |
            (~(a3 ^ b3) & ~(a2 ^ b2) & a1 & ~b1) |
            (~(a3 ^ b3) & ~(a2 ^ b2) & ~(a1 ^ b1) & a0 & ~b0);

assign eq = ~(a3 ^ b3) &
            ~(a2 ^ b2) &
            ~(a1 ^ b1) &
            ~(a0 ^ b0);

assign lt = (~a3 & b3) |
            (~(a3 ^ b3) & ~a2 & b2) |
            (~(a3 ^ b3) & ~(a2 ^ b2) & ~a1 & b1) |
            (~(a3 ^ b3) & ~(a2 ^ b2) & ~(a1 ^ b1) & ~a0 & b0);

endmodule
