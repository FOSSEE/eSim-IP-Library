`timescale 1ns / 1ps

module BIST_FAULT_FREE (
   clk,
   rst,
   testmode,
    in,
   out,
    fault_detected,
   misr_out,
    complete
    );
    input  wire       clk;
    input  wire       rst;
    input  wire       testmode;
    input  wire [3:0] in;
    output wire [3:0] out;
    output reg        fault_detected;
    output wire [3:0] misr_out;
   output wire complete;

    wire [3:0] mux_out;
    wire [3:0] lfsr_out;
    wire [3:0] cut_out;
    

    parameter [3:0] golden_signature = 4'b0011;

    LFSR lfsr_inst (
        .clk(clk),
        .rst(rst),
        .enable(testmode),
        .lfsr_out(lfsr_out),
        .complete(complete)
    );

    MUX mux_inst (
        .a(in),
        .b(lfsr_out),
        .sel(testmode),
        .out(mux_out)
    );

    CUT cut_inst (
        .a(mux_out[3]),
        .b(mux_out[2]),
        .c(mux_out[1]),
        .d(mux_out[0]),
        .y1(cut_out[3]),
        .y2(cut_out[2]),
        .y3(cut_out[1]),
        .y4(cut_out[0])
    );

    assign out = cut_out;

    MISR misr_inst (
        .clk(clk),
        .reset(rst),
        .data_in(cut_out),
        .enable(testmode),
        .q(misr_out)
    );

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            fault_detected <= 1'b0;
        end else if (testmode) begin
            if (complete) begin
                fault_detected <= (misr_out != golden_signature);
            end else begin
                fault_detected <= 1'b0;
            end
        end else begin
            fault_detected <= 1'b0;
        end
    end

endmodule

module LFSR (
    input  wire       clk,
    input  wire       rst,
    input  wire       enable,
    output reg [3:0]  lfsr_out,
    output reg        complete
);
    reg  [3:0] count;
    wire feedback;

    assign feedback = lfsr_out[0] ^ lfsr_out[3];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            lfsr_out <= 4'hF;
            count    <= 4'b0000;
            complete <= 1'b0;
        end 
        else if (enable) begin
            lfsr_out <= {lfsr_out[2:0], feedback};
            count    <= count + 1;
            if (count == 4'b1111) 
                complete <= 1'b1;
            else
                complete <= 1'b0;
        end
    end
endmodule

module MUX (
    input  wire [3:0] a,
    input  wire [3:0] b,
    input  wire       sel,
    output wire [3:0] out
);
    assign out = sel ? b : a;
endmodule

module CUT (
    input  wire a, b, c, d,
    output wire y1, y2, y3, y4
);

   wire f0;
    wire f1, f2, f3, f4;
    wire sa1 = 1'b1;
    wire sa0 = 1'b0;
   or g1(f0,a,b);
   xor g2(f1,c,d);
   
   not g3(y1,f0);
   not g4(y4,f1);
   
   and g5(y2,f0,f1);
   or g6(y3,f0,f1);
   
   
endmodule

module MISR (
    input        clk,
    input        reset,
    input  [3:0] data_in,
    input        enable,
    output reg [3:0] q
);
    reg feedback;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            q <= 4'b0;
        end 
        else if (enable) begin
            feedback = q[3] ^ data_in[3];
            q[3] <= q[2] ^ data_in[2];
            q[2] <= q[1] ^ data_in[1];
            q[1] <= q[0] ^ data_in[0] ^ feedback;
            q[0] <= feedback;
        end
    end
endmodule