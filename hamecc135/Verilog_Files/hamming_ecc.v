module hamming_ecc (
    input clk,
    input rst,
    input [3:0] data_in,
    input [6:0] error_inject,
    output reg [3:0] data_out,
    output reg error_detected
);

    reg [6:0] stage1_encoded;
    reg [6:0] stage1_err;

    reg [6:0] stage2_rx;
    reg [2:0] stage2_syndrome;

    wire p1, p2, p3;
    wire s1, s2, s3;
    wire [6:0] channel_data;

    // Stage 1: Combinational Parity Generation
    assign p1 = data_in[0] ^ data_in[1] ^ data_in[3];
    assign p2 = data_in[0] ^ data_in[2] ^ data_in[3];
    assign p3 = data_in[1] ^ data_in[2] ^ data_in[3];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            stage1_encoded <= 7'd0;
            stage1_err <= 7'd0;
        end else begin
            stage1_encoded <= {data_in[3], data_in[2], data_in[1], p3, data_in[0], p2, p1};
            stage1_err <= error_inject;
        end
    end

    // The Channel (Error Injection)
    assign channel_data = stage1_encoded ^ stage1_err;

    // Stage 2: Combinational Syndrome Calculation
    assign s1 = channel_data[0] ^ channel_data[2] ^ channel_data[4] ^ channel_data[6];
    assign s2 = channel_data[1] ^ channel_data[2] ^ channel_data[5] ^ channel_data[6];
    assign s3 = channel_data[3] ^ channel_data[4] ^ channel_data[5] ^ channel_data[6];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            stage2_rx <= 7'd0;
            stage2_syndrome <= 3'd0;
        end else begin
            stage2_rx <= channel_data;
            stage2_syndrome <= {s3, s2, s1};
        end
    end

    // Stage 3: The Bug-Proof Correction Logic
    // If the syndrome matches the bit's error location, the wire goes High (1)
    wire flip_d0 = (stage2_syndrome == 3'd3);
    wire flip_d1 = (stage2_syndrome == 3'd5);
    wire flip_d2 = (stage2_syndrome == 3'd6);
    wire flip_d3 = (stage2_syndrome == 3'd7);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            data_out <= 4'd0;
            error_detected <= 1'b0;
        end else begin
            error_detected <= (stage2_syndrome != 3'd0);
            
            // XORing the received bit with the flip wire corrects the error
            data_out[0] <= stage2_rx[2] ^ flip_d0;
            data_out[1] <= stage2_rx[4] ^ flip_d1;
            data_out[2] <= stage2_rx[5] ^ flip_d2;
            data_out[3] <= stage2_rx[6] ^ flip_d3;
        end
    end

endmodule