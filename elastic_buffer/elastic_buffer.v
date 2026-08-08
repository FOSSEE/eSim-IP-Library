module elastic_buffer(
    input wclk,
    input rclk,
    input rst,
    input wen,
    input ren,
    input din7, din6, din5, din4, din3, din2, din1, din0,
    output dout7, dout6, dout5, dout4, dout3, dout2, dout1, dout0,
    output full,
    output empty,
    output half
);

// FIFO memory 8 locations, 8 bits wide
reg [7:0] mem0, mem1, mem2, mem3, mem4, mem5, mem6, mem7;

// Write and read pointers (Gray code, 3 bit for 8 locations)
reg [2:0] wptr, rptr;
reg [2:0] wptr_gray, rptr_gray;

// Synchronized pointers (2FF synchronizer)
reg [2:0] wptr_gray_s1, wptr_gray_s2;
reg [2:0] rptr_gray_s1, rptr_gray_s2;

wire [7:0] din;
reg [7:0] dout_reg;

assign din = {din7, din6, din5, din4, din3, din2, din1, din0};

// Binary to Gray
wire [2:0] wgray, rgray;
assign wgray = wptr ^ (wptr >> 1);
assign rgray = rptr ^ (rptr >> 1);

// Write logic
always @(posedge wclk or posedge rst) begin
    if (rst) begin
        wptr <= 0;
        wptr_gray <= 0;
    end else if (wen && !full) begin
        case (wptr)
            3'd0: mem0 <= din;
            3'd1: mem1 <= din;
            3'd2: mem2 <= din;
            3'd3: mem3 <= din;
            3'd4: mem4 <= din;
            3'd5: mem5 <= din;
            3'd6: mem6 <= din;
            3'd7: mem7 <= din;
        endcase
        wptr <= wptr + 1;
        wptr_gray <= wgray;
    end
end

// Read logic
always @(posedge rclk or posedge rst) begin
    if (rst) begin
        rptr <= 0;
        rptr_gray <= 0;
        dout_reg <= 0;
    end else if (ren && !empty) begin
        case (rptr)
            3'd0: dout_reg <= mem0;
            3'd1: dout_reg <= mem1;
            3'd2: dout_reg <= mem2;
            3'd3: dout_reg <= mem3;
            3'd4: dout_reg <= mem4;
            3'd5: dout_reg <= mem5;
            3'd6: dout_reg <= mem6;
            3'd7: dout_reg <= mem7;
        endcase
        rptr <= rptr + 1;
        rptr_gray <= rgray;
    end
end

// 2FF synchronizer: wptr into rclk domain
always @(posedge rclk or posedge rst) begin
    if (rst) begin
        wptr_gray_s1 <= 0;
        wptr_gray_s2 <= 0;
    end else begin
        wptr_gray_s1 <= wptr_gray;
        wptr_gray_s2 <= wptr_gray_s1;
    end
end

// 2FF synchronizer: rptr into wclk domain
always @(posedge wclk or posedge rst) begin
    if (rst) begin
        rptr_gray_s1 <= 0;
        rptr_gray_s2 <= 0;
    end else begin
        rptr_gray_s1 <= rptr_gray;
        rptr_gray_s2 <= rptr_gray_s1;
    end
end

// Full and empty flags
assign empty = (wptr_gray_s2 == rptr_gray);
assign full  = (wptr_gray == {~rptr_gray_s2[2], ~rptr_gray_s2[1], rptr_gray_s2[0]});
assign half  = (wptr[2] != rptr[2]) ? (wptr[1:0] == rptr[1:0]) : (wptr == rptr + 3'd4);

// Output
assign dout7 = dout_reg[7];
assign dout6 = dout_reg[6];
assign dout5 = dout_reg[5];
assign dout4 = dout_reg[4];
assign dout3 = dout_reg[3];
assign dout2 = dout_reg[2];
assign dout1 = dout_reg[1];
assign dout0 = dout_reg[0];

endmodule