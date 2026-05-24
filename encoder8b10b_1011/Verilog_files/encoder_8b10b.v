module encoder_8b10b (
input  wire       clk,
input  wire       rst_n,
input  wire [7:0] din,
input  wire       kin,    // Control character indicator
output reg  [9:0] dout,
output reg        rd      // Current Running Disparity
);

wire [4:0] fiveb = din[4:0];  
wire [2:0] threeb = din[7:5];  

wire [5:0] code6_n, code6_p;  
wire [3:0] code4_n, code4_p;  
wire       disp6_n, disp6_p;  
wire       disp4_n, disp4_p;  

reg [9:0] dout_next;  
reg       rd_next;  
reg       rd_mid;  

// Instantiate 5b/6b sub-module  
enc_5b6b u1 (  
    .fiveb(fiveb),  
    .kin(kin),  
    .code_n(code6_n),  
    .code_p(code6_p),  
    .disp_n(disp6_n),  
    .disp_p(disp6_p)  
);  

// Instantiate 3b/4b sub-module  
enc_3b4b u2 (  
    .threeb(threeb),  
    .kin(kin),  
    .code_n(code4_n),  
    .code_p(code4_p),  
    .disp_n(disp4_n),  
    .disp_p(disp4_p)  
);  

// Combinational logic for disparity and output selection  
always @(*) begin  
    dout_next = dout;  
    rd_next   = rd;  
    rd_mid    = 1'b0;  

    // Stage 1: Select 6-bit code based on current RD  
    if (rd == 1'b0) begin  
        dout_next[9:4] = code6_n;  
        rd_mid         = disp6_n;  
    end else begin  
        dout_next[9:4] = code6_p;  
        rd_mid         = disp6_p;  
    end  

    // Stage 2: Select 4-bit code based on intermediate RD  
    if (rd_mid == 1'b0) begin  
        dout_next[3:0] = code4_n;  
        rd_next        = disp4_n;  
    end else begin  
        dout_next[3:0] = code4_p;  
        rd_next        = disp4_p;  
    end  
end  

// Sequential logic for state update  
always @(posedge clk or negedge rst_n) begin  
    if (!rst_n) begin  
        dout <= 10'b0;  
        rd   <= 1'b0; // Initialize RD to -1 (represented as 0)  
    end else begin  
        dout <= dout_next;  
        rd   <= rd_next;  
    end  
end

endmodule


module enc_3b4b (
    input  wire [2:0] threeb,
    input  wire       kin,
    output reg  [3:0] code_n,
    output reg  [3:0] code_p,
    output reg        disp_n,
    output reg        disp_p
);

    always @(*) begin
        disp_n = 1'b0;
        disp_p = 1'b1;

        case (threeb)
            3'b000: begin code_n = 4'b1011; code_p = 4'b0100; disp_n = 1'b1; disp_p = 1'b0; end // D.x.0
            3'b001: begin code_n = 4'b1001; code_p = 4'b1001; end // D.x.1
            3'b010: begin code_n = 4'b0101; code_p = 4'b0101; end // D.x.2
            3'b011: begin code_n = 4'b1100; code_p = 4'b0011; disp_n = 1'b0; disp_p = 1'b1; end // D.x.3
            3'b100: begin code_n = 4'b1101; code_p = 4'b0010; disp_n = 1'b1; disp_p = 1'b0; end // D.x.4
            3'b101: begin code_n = 4'b1010; code_p = 1010; end // D.x.5
            3'b110: begin code_n = 4'b0110; code_p = 0110; end // D.x.6
            3'b111: begin 
                if (!kin) begin // D.x.7 Special Case
                    code_n = 4'b1110; code_p = 4'b0001; disp_n = 1'b0; disp_p = 1'b1;
                end else begin // K.x.7 Special Case
                    code_n = 4'b0111; code_p = 4'b1000; disp_n = 1'b1; disp_p = 1'b0;
                end
            end
            default: begin code_n = 4'b1011; code_p = 4'b0100; disp_n = 1'b1; disp_p = 1'b0; end
        endcase
    end
endmodule


module enc_5b6b (
    input  wire [4:0] fiveb,
    input  wire       kin,
    output reg  [5:0] code_n, // Next code if RD is -1
    output reg  [5:0] code_p, // Next code if RD is +1
    output reg        disp_n, // Resulting RD if RD was -1
    output reg        disp_p  // Resulting RD if RD was +1
);

    always @(*) begin
        // Default: Neutral Disparity (Stay in current state)
        disp_n = 1'b0; 
        disp_p = 1'b1;

        if (!kin) begin
            case (fiveb)
                5'b00000: begin code_n = 6'b100111; code_p = 6'b011000; disp_n = 1'b1; disp_p = 1'b0; end // D.00
                5'b00001: begin code_n = 6'b011101; code_p = 6'b100010; disp_n = 1'b1; disp_p = 1'b0; end // D.01
                5'b00010: begin code_n = 6'b101101; code_p = 6'b010010; disp_n = 1'b1; disp_p = 1'b0; end // D.02
                5'b00011: begin code_n = 6'b110001; code_p = 6'b110001; end // D.03 (Neutral)
                5'b00100: begin code_n = 6'b110101; code_p = 6'b001010; disp_n = 1'b1; disp_p = 1'b0; end // D.04
                5'b00101: begin code_n = 6'b101001; code_p = 6'b101001; end // D.05
                5'b00110: begin code_n = 6'b011001; code_p = 6'b011001; end // D.06
                5'b00111: begin code_n = 6'b111000; code_p = 6'b000111; disp_n = 1'b0; disp_p = 1'b1; end // D.07
                5'b01000: begin code_n = 6'b111001; code_p = 6'b000110; disp_n = 1'b1; disp_p = 1'b0; end // D.08
                5'b01001: begin code_n = 6'b100101; code_p = 6'b100101; end // D.09
                5'b01010: begin code_n = 6'b010101; code_p = 6'b010101; end // D.10
                5'b01011: begin code_n = 6'b110100; code_p = 6'b110100; end // D.11
                5'b01100: begin code_n = 6'b001101; code_p = 6'b001101; end // D.12
                5'b01101: begin code_n = 6'b101100; code_p = 6'b101100; end // D.13
                5'b01110: begin code_n = 6'b011100; code_p = 6'b011100; end // D.14
                5'b01111: begin code_n = 6'b010111; code_p = 6'b101000; disp_n = 1'b1; disp_p = 1'b0; end // D.15
                5'b10000: begin code_n = 6'b011011; code_p = 6'b100100; disp_n = 1'b1; disp_p = 1'b0; end // D.16
                5'b10001: begin code_n = 6'b100011; code_p = 6'b100011; end // D.17
                5'b10010: begin code_n = 6'b010011; code_p = 6'b010011; end // D.18
                5'b10011: begin code_n = 6'b110010; code_p = 6'b110010; end // D.19
                5'b10100: begin code_n = 6'b001011; code_p = 6'b001011; end // D.20
                5'b10101: begin code_n = 6'b101010; code_p = 6'b101010; end // D.21
                5'b10110: begin code_n = 6'b011010; code_p = 6'b011010; end // D.22
                5'b10111: begin code_n = 6'b111010; code_p = 6'b000101; disp_n = 1'b0; disp_p = 1'b1; end // D.23
                5'b11000: begin code_n = 6'b110011; code_p = 6'b001100; disp_n = 1'b1; disp_p = 1'b0; end // D.24
                5'b11001: begin code_n = 6'b100110; code_p = 6'b100110; end // D.25
                5'b11010: begin code_n = 6'b010110; code_p = 6'b010110; end // D.26
                5'b11011: begin code_n = 6'b110110; code_p = 6'b001001; disp_n = 1'b0; disp_p = 1'b1; end // D.27
                5'b11100: begin code_n = 6'b001110; code_p = 6'b001110; end // D.28
                5'b11101: begin code_n = 6'b101110; code_p = 6'b010001; disp_n = 1'b0; disp_p = 1'b1; end // D.29
                5'b11110: begin code_n = 6'b011110; code_p = 6'b100001; disp_n = 1'b0; disp_p = 1'b1; end // D.30
                5'b11111: begin code_n = 6'b101011; code_p = 6'b010100; disp_n = 1'b1; disp_p = 1'b0; end // D.31
                default:  begin code_n = 6'b100111; code_p = 6'b011000; disp_n = 1'b1; disp_p = 1'b0; end
            endcase
        end else begin
            // K Characters (Only K.28 is shown as it is most common)
            case (fiveb)
                5'b11100: begin code_n = 6'b001111; code_p = 6'b110000; disp_n = 1'b1; disp_p = 1'b0; end // K.28
                default:  begin code_n = 6'b001111; code_p = 6'b110000; disp_n = 1'b1; disp_p = 1'b0; end
            endcase
        end
    end
endmodule