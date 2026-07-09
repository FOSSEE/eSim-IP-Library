`include "main_memory.v"
module memory_interface (
    input                        aclk,
    input                        aresetn,

    // Write address channel
    input      s_axi_awaddr,
    input                        s_axi_awvalid,
    output reg                   s_axi_awready,

    // Write data channel
    input  [3:0]      s_axi_wdata,
    input                        s_axi_wvalid,
    output reg                   s_axi_wready,

    // Write response channel
    output reg [1:0]             s_axi_bresp,
    output reg                   s_axi_bvalid,
    input                        s_axi_bready,

    // Read address channel
    input        s_axi_araddr,
    input                        s_axi_arvalid,
    output reg                   s_axi_arready,

    // Read data channel
    output reg [3:0]  s_axi_rdata,
    output reg [1:0]             s_axi_rresp,
    output reg                   s_axi_rvalid,
    input                        s_axi_rready
);

    localparam RESP_OKAY = 2'b00;

    // ---------------- RAM interface signals (all combinational,
    // driven directly off current FSM state so addr/wdata/wen stay
    // perfectly aligned in the same cycle) ----------------
    reg                      ram_write_en;
    reg      ram_addr;
    reg  [3:0]    ram_wdata;
    wire [3:0]    ram_rdata;

    main_memory dut (
        .clk      (aclk),
        .rst_n    (aresetn),
        .write_en (ram_write_en),
        .addr     (ram_addr),
        .wdata    (ram_wdata),
        .rdata    (ram_rdata)
    );

    // =========================================================
    // WRITE CHANNEL
    // =========================================================
    // Independent address/data handshake capture flags
    reg                   awaddr_done, wdata_done;
    reg   awaddr_latched;
    reg [3:0]  wdata_latched;

    localparam W_IDLE = 2'b00,
               W_WAIT  = 2'b01,  // waiting for both AW and W to complete
               W_WRITE = 2'b10,  // perform RAM write
               W_RESP  = 2'b11;  // drive BVALID

    reg [1:0] write_state;

    always @(posedge aclk) begin
        if (!aresetn) begin
            s_axi_awready  <= 1'b0;
            s_axi_wready   <= 1'b0;
            s_axi_bvalid   <= 1'b0;
            s_axi_bresp    <= RESP_OKAY;
            awaddr_done    <= 1'b0;
            wdata_done     <= 1'b0;
            awaddr_latched <= 1'b0;
            wdata_latched  <= 4'd0;
            write_state    <= W_IDLE;
        end else begin
            case (write_state)
                W_IDLE: begin
                    s_axi_awready <= 1'b1;
                    s_axi_wready  <= 1'b1;
                    awaddr_done   <= 1'b0;
                    wdata_done    <= 1'b0;
                    write_state   <= W_WAIT;
                end

                W_WAIT: begin
                    // Latch address when handshake occurs
                    if (s_axi_awvalid && s_axi_awready) begin
                        awaddr_latched <= s_axi_awaddr;
                        awaddr_done    <= 1'b1;
                        s_axi_awready  <= 1'b0;
                    end
                    // Latch data when handshake occurs
                    if (s_axi_wvalid && s_axi_wready) begin
                        wdata_latched <= s_axi_wdata;
                        wdata_done    <= 1'b1;
                        s_axi_wready  <= 1'b0;
                    end

                    // Once both address and data are captured, do the write
                    if ((awaddr_done || (s_axi_awvalid && s_axi_awready)) &&
                        (wdata_done  || (s_axi_wvalid  && s_axi_wready)))
                        write_state <= W_WRITE;
                end

                W_WRITE: begin
                    write_state  <= W_RESP;
                end

                W_RESP: begin
                    s_axi_bvalid <= 1'b1;
                    s_axi_bresp  <= RESP_OKAY;
                    if (s_axi_bvalid && s_axi_bready) begin
                        s_axi_bvalid <= 1'b0;
                        write_state  <= W_IDLE;
                    end
                end

                default: write_state <= W_IDLE;
            endcase
        end
    end

    // =========================================================
    // READ CHANNEL
    // =========================================================
    localparam R_IDLE = 2'b00,
               R_READ = 2'b01,  // RAM read latency cycle
               R_RESP = 2'b10;  // drive RVALID/RDATA

    reg [1:0]            read_state;
    reg  araddr_latched;

    always @(posedge aclk) begin
        if (!aresetn) begin
            s_axi_arready  <= 1'b0;
            s_axi_rvalid   <= 1'b0;
            s_axi_rdata    <= {4{1'b0}};
            s_axi_rresp    <= RESP_OKAY;
            araddr_latched <= 1'b0;
            read_state     <= R_IDLE;
        end else begin
            case (read_state)
                R_IDLE: begin
                    s_axi_arready <= 1'b1;
                    if (s_axi_arvalid && s_axi_arready) begin
                        araddr_latched <= s_axi_araddr;
                        s_axi_arready  <= 1'b0;
                        read_state     <= R_READ;
                    end
                end

                R_READ: begin
                    // ram_addr is shared with the write path; drive it here
                    // for the read, and the RAM's registered output will be
                    // valid on the next clock edge.
                    read_state <= R_RESP;
                end

                R_RESP: begin
                    s_axi_rdata  <= ram_rdata;
                    s_axi_rresp  <= RESP_OKAY;
                    s_axi_rvalid <= 1'b1;
                    if (s_axi_rvalid && s_axi_rready) begin
                        s_axi_rvalid <= 1'b0;
                        read_state   <= R_IDLE;
                    end
                end

                default: read_state <= R_IDLE;
            endcase
        end
    end

    // Combinational RAM control: address, write-enable and write-data
    // are all derived from the *current* state in the same cycle, so
    // ram_write_en can never pulse after ram_addr has already moved on.
    always @(*) begin
        if (write_state == W_WRITE) begin
            ram_addr     = awaddr_latched;
            ram_wdata    = wdata_latched;
            ram_write_en = 1'b1;
        end else begin
            ram_addr     = araddr_latched;
            ram_wdata    = {4{1'b0}};
            ram_write_en = 1'b0;
        end
    end

endmodule




