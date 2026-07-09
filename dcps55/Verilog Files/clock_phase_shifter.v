
module clock_phase_shifter (
    input  wire        clk_in,       // Input Master Clock (4x target frequency)
    input  wire        rst_n,        // Asynchronous Reset (Active Low)
    input  wire        en,           // Clock Generator Enable
    input  wire [1:0]  phase_sel,    // Phase select: 00=0°, 01=90°, 10=180°, 11=270°
    
    // Quadrature Phase Outputs
    output wire        clk_0,        // 0° Phase
    output wire        clk_90,       // 90° Phase
    output wire        clk_180,      // 180° Phase
    output wire        clk_270,      // 270° Phase
    
    // Dynamic Glitch-Free Selected Output
    output wire        clk_out       
);

    //------------------------------------------------------------------------
    // 1. JOHNSON COUNTER FOR QUADRATURE PHASE GENERATION
    //------------------------------------------------------------------------
    reg [1:0] q; // 2-bit Johnson Counter state

    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            q <= 2'b00;
        end else if (en) begin
            q[0] <= ~q[1];
            q[1] <= q[0];
        end
    end

    // Decode the overlapping states of the Johnson Counter to extract phases
    // State Sequence: 00 -> 10 -> 11 -> 01 -> 00
    assign clk_0   = q[0] & ~q[1];  // Active during state 10
    assign clk_90  = q[0] & q[1];   // Active during state 11
    assign clk_180 = ~q[0] & q[1];  // Active during state 01
    assign clk_270 = ~q[0] & ~q[1]; // Active during state 00


    //------------------------------------------------------------------------
    // 2. GLITCH-FREE CLOCK MULTIPLEXER LOGIC
    //------------------------------------------------------------------------
    // A standard combinational mux will create dangerous clock glitches.
    // This design uses a dual-rank falling-edge synchronized enable matrix
    // to cleanly isolate and hand over control between the clock sources.

    // Decode the desired channel selection
    wire [3:0] select_decoded;
    assign select_decoded[0] = (phase_sel == 2'b00);
    assign select_decoded[1] = (phase_sel == 2'b01);
    assign select_decoded[2] = (phase_sel == 2'b10);
    assign select_decoded[3] = (phase_sel == 2'b11);

    // Feedback lines to prevent a new clock from rising until the old one finishes dropping
    wire [3:0] clk_enable;
    reg  [3:0] q_falling_1;
    reg  [3:0] q_falling_2;

    // Phase 0 Mux Control Gate
    assign clk_enable[0] = select_decoded[0] & ~q_falling_2[1] & ~q_falling_2[2] & ~q_falling_2[3];
    always @(posedge clk_0 or negedge rst_n) begin
        if (!rst_n) begin
            q_falling_1[0] <= 1'b0;
            q_falling_2[0] <= 1'b0;
        end else begin
            q_falling_1[0] <= clk_enable[0];
            q_falling_2[0] <= q_falling_1[0];
        end
    end

    // Phase 90 Mux Control Gate
    assign clk_enable[1] = select_decoded[1] & ~q_falling_2[0] & ~q_falling_2[2] & ~q_falling_2[3];
    always @(posedge clk_90 or negedge rst_n) begin
        if (!rst_n) begin
            q_falling_1[1] <= 1'b0;
            q_falling_2[1] <= 1'b0;
        end else begin
            q_falling_1[1] <= clk_enable[1];
            q_falling_2[1] <= q_falling_1[1];
        end
    end

    // Phase 180 Mux Control Gate
    assign clk_enable[2] = select_decoded[2] & ~q_falling_2[0] & ~q_falling_2[1] & ~q_falling_2[3];
    always @(posedge clk_180 or negedge rst_n) begin
        if (!rst_n) begin
            q_falling_1[2] <= 1'b0;
            q_falling_2[2] <= 1'b0;
        end else begin
            q_falling_1[2] <= clk_enable[2];
            q_falling_2[2] <= q_falling_1[2];
        end
    end

    // Phase 270 Mux Control Gate
    assign clk_enable[3] = select_decoded[3] & ~q_falling_2[0] & ~q_falling_2[1] & ~q_falling_2[2];
    always @(posedge clk_270 or negedge rst_n) begin
        if (!rst_n) begin
            q_falling_1[3] <= 1'b0;
            q_falling_2[3] <= 1'b0;
        end else begin
            q_falling_1[3] <= clk_enable[3];
            q_falling_2[3] <= q_falling_1[3];
        end
    end

    //------------------------------------------------------------------------
    // 3. FINAL AND-OR GLITCH-FREE OUTPUT COMBINATION
    //------------------------------------------------------------------------
    wire gated_clk_0   = clk_0   & q_falling_2[0];
    wire gated_clk_90  = clk_90  & q_falling_2[1];
    wire gated_clk_180 = clk_180 & q_falling_2[2];
    wire gated_clk_270 = clk_270 & q_falling_2[3];

    assign clk_out = gated_clk_0 | gated_clk_90 | gated_clk_180 | gated_clk_270;

endmodule