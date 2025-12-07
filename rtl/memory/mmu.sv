module mmu #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter LINE_SIZE   = 16          // bytes per cache line (4 words)
)(
    input  logic clk,
    input  logic rst,

    // cpu -> mmu
    input  logic                  mem_valid,
    input  logic                  mem_we,
    input  logic [ADDR_WIDTH-1:0] mem_addr,
    input  logic [DATA_WIDTH-1:0] mem_w_data,

    // mmu -> cpu
    output logic [DATA_WIDTH-1:0] mem_r_data,
    output logic                  mem_ready,   // mmu ready for next op
    output logic                  cache_hit    // hit in any level
);

    localparam int BYTES_PER_WORD = DATA_WIDTH/8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD;     // 4
    localparam int BLOCK_BITS     = DATA_WIDTH * WORDS_PER_LINE;    // 128
    localparam int OFFSET_BITS    = $clog2(LINE_SIZE);
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);         // 2

    // word index within block from address
    wire [WORD_SEL_BITS-1:0] addr_word_index =
        mem_addr[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // block-aligned base address for fills
    wire [ADDR_WIDTH-1:0] block_base_addr = {
        mem_addr[ADDR_WIDTH-1:OFFSET_BITS],
        {OFFSET_BITS{1'b0}}
    };

    // L1 wires
    logic [DATA_WIDTH-1:0] l1_r_word;
    logic                  l1_hit;

    logic                  l1_fill_en;
    logic [ADDR_WIDTH-1:0] l1_fill_addr;
    logic [BLOCK_BITS-1:0] l1_fill_data;
    logic                  l1_fill_mark_valid;

    // L2 wires
    logic [BLOCK_BITS-1:0] l2_r_block;
    logic                  l2_hit;

    logic                  l2_fill_en;
    logic [ADDR_WIDTH-1:0] l2_fill_addr;
    logic [BLOCK_BITS-1:0] l2_fill_data;
    logic                  l2_fill_mark_valid;

    // L3 wires
    logic [BLOCK_BITS-1:0] l3_r_block;
    logic                  l3_hit;

    logic                  l3_fill_en;
    logic [ADDR_WIDTH-1:0] l3_fill_addr;
    logic [BLOCK_BITS-1:0] l3_fill_data;
    logic                  l3_fill_mark_valid;

    // RAM wires
    logic [ADDR_WIDTH-1:0] ram_addr;
    logic [DATA_WIDTH-1:0] ram_r_data;
    logic [DATA_WIDTH-1:0] ram_w_data;
    logic                  ram_we;

    // Instantiate caches
    l1_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (4096),
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (2)
    ) u_l1 (
        .clk            (clk),
        .rst            (rst),
        .mem_valid      (mem_valid),      // always see CPU request
        .mem_we         (mem_we),
        .mem_addr       (mem_addr),
        .mem_w_data     (mem_w_data),
        .mem_r_data     (l1_r_word),
        .cache_hit      (l1_hit),
        .fill_en        (l1_fill_en),
        .fill_addr      (l1_fill_addr),
        .fill_data      (l1_fill_data),
        .fill_mark_valid(l1_fill_mark_valid)
    );

    l2_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (16384),
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (4)
    ) u_l2 (
        .clk            (clk),
        .rst            (rst),
        .mem_valid      (mem_valid_l2),
        .mem_we         (mem_we_l2),
        .mem_addr       (addr_l2),
        .mem_w_data     (mem_w_data),
        .mem_r_data     (l2_r_block),
        .cache_hit      (l2_hit),
        .fill_en        (l2_fill_en),
        .fill_addr      (l2_fill_addr),
        .fill_data      (l2_fill_data),
        .fill_mark_valid(l2_fill_mark_valid)
    );

    l3_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (65536),
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (8)
    ) u_l3 (
        .clk            (clk),
        .rst            (rst),
        .mem_valid      (mem_valid_l3),
        .mem_we         (mem_we_l3),
        .mem_addr       (addr_l3),
        .mem_w_data     (mem_w_data),
        .mem_r_data     (l3_r_block),
        .cache_hit      (l3_hit),
        .fill_en        (l3_fill_en),
        .fill_addr      (l3_fill_addr),
        .fill_data      (l3_fill_data),
        .fill_mark_valid(l3_fill_mark_valid)
    );

    ram u_ram (
        .addr         (ram_addr),
        .write_data   (ram_w_data),
        .clk          (clk),
        .write_enable (ram_we),
        .read_data    (ram_r_data)
    );

    // always write-through RAM from CPU writes
    assign ram_w_data = mem_w_data;

    // small helpers
    function automatic [DATA_WIDTH-1:0] word_from_block (
        input [BLOCK_BITS-1:0] blk,
        input [WORD_SEL_BITS-1:0] widx
    );
        case (widx)
            2'd0: word_from_block = blk[31:0];
            2'd1: word_from_block = blk[63:32];
            2'd2: word_from_block = blk[95:64];
            2'd3: word_from_block = blk[127:96];
            default: word_from_block = '0;
        endcase
    endfunction

    // FSM
    typedef enum logic [2:0] {
        S_IDLE,
        S_L2_CHECK,
        S_L3_CHECK,
        S_FILL_RAM
    } state_t;

    state_t state;

    logic [ADDR_WIDTH-1:0] saved_addr;
    logic [WORD_SEL_BITS-1:0] saved_word_index;

    logic [1:0]            fill_count;
    logic [BLOCK_BITS-1:0] block_buf;

    // driven to L2/L3 (L1 sees cpu directly)
    logic                  mem_valid_l2, mem_valid_l3;
    logic                  mem_we_l2,    mem_we_l3;
    logic [ADDR_WIDTH-1:0] addr_l2, addr_l3;

    // hit if found in any level
    assign cache_hit = (state == S_IDLE && l1_hit) ||
                       (state == S_L2_CHECK && l2_hit) ||
                       (state == S_L3_CHECK && l3_hit);

    // ram addr + we (depends on state)
    always_comb begin
        unique case (state)
            S_FILL_RAM: ram_addr = { saved_addr[ADDR_WIDTH-1:OFFSET_BITS],
                                     {OFFSET_BITS{1'b0}} } + {fill_count, 2'b00};
            default:    ram_addr = mem_addr;
        endcase
    end

    // main sequential
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state            <= S_IDLE;
            mem_r_data       <= '0;
            mem_ready        <= 1'b0;

            saved_addr       <= '0;
            saved_word_index <= '0;
            fill_count       <= 2'd0;
            block_buf        <= '0;

            // disables
            mem_valid_l2     <= 1'b0;
            mem_valid_l3     <= 1'b0;
            mem_we_l2        <= 1'b0;
            mem_we_l3        <= 1'b0;
            addr_l2          <= '0;
            addr_l3          <= '0;

            l1_fill_en        <= 1'b0;
            l1_fill_addr      <= '0;
            l1_fill_data      <= '0;
            l1_fill_mark_valid<= 1'b0;

            l2_fill_en        <= 1'b0;
            l2_fill_addr      <= '0;
            l2_fill_data      <= '0;
            l2_fill_mark_valid<= 1'b0;

            l3_fill_en        <= 1'b0;
            l3_fill_addr      <= '0;
            l3_fill_data      <= '0;
            l3_fill_mark_valid<= 1'b0;

            ram_we           <= 1'b0;
        end else begin
            // defaults each cycle
            mem_ready         <= 1'b0;

            mem_valid_l2      <= 1'b0;
            mem_valid_l3      <= 1'b0;
            mem_we_l2         <= 1'b0;
            mem_we_l3         <= 1'b0;

            l1_fill_en        <= 1'b0;
            l1_fill_mark_valid<= 1'b0;
            l2_fill_en        <= 1'b0;
            l2_fill_mark_valid<= 1'b0;
            l3_fill_en        <= 1'b0;
            l3_fill_mark_valid<= 1'b0;

            ram_we            <= 1'b0;

            unique case (state)

                // IDLE -> wait for req
                S_IDLE: begin
                    if (mem_valid) begin
                        saved_addr       <= mem_addr;
                        saved_word_index <= addr_word_index;

                        if (mem_we) begin
                            // write-through to all levels + RAM
                            ram_we      <= 1'b1;
                            mem_valid_l2<= 1'b1;
                            mem_we_l2   <= 1'b1;
                            addr_l2     <= mem_addr;
                            mem_valid_l3<= 1'b1;
                            mem_we_l3   <= 1'b1;
                            addr_l3     <= mem_addr;
                            mem_ready   <= 1'b1; // write completes in one cycle
                        end else begin
                            // READ
                            // L1 lookup
                            if (l1_hit) begin
                                mem_r_data <= l1_r_word;
                                mem_ready  <= 1'b1;
                                state      <= S_IDLE;
                            end else begin
                                // go to L2
                                mem_valid_l2 <= 1'b1;
                                addr_l2      <= saved_addr;
                                state        <= S_L2_CHECK;
                            end
                        end
                    end
                end

                // L2 lookup
                S_L2_CHECK: begin
                    mem_valid_l2 <= 1'b1;
                    addr_l2      <= saved_addr;

                    if (l2_hit) begin
                        // promote block to L1
                        l1_fill_en         <= 1'b1;
                        l1_fill_addr       <= block_base_addr;
                        l1_fill_data       <= l2_r_block;
                        l1_fill_mark_valid <= 1'b1;

                        mem_r_data <= word_from_block(l2_r_block, saved_word_index);
                        mem_ready  <= 1'b1;
                        state      <= S_IDLE;
                    end else begin
                        // go to L3
                        mem_valid_l3 <= 1'b1;
                        addr_l3      <= saved_addr;
                        state        <= S_L3_CHECK;
                    end
                end

                // L3 lookup
                S_L3_CHECK: begin
                    mem_valid_l3 <= 1'b1;
                    addr_l3      <= saved_addr;

                    if (l3_hit) begin
                        // promote to L2 & L1
                        l2_fill_en         <= 1'b1;
                        l2_fill_addr       <= block_base_addr;
                        l2_fill_data       <= l3_r_block;
                        l2_fill_mark_valid <= 1'b1;

                        l1_fill_en         <= 1'b1;
                        l1_fill_addr       <= block_base_addr;
                        l1_fill_data       <= l3_r_block;
                        l1_fill_mark_valid <= 1'b1;

                        mem_r_data <= word_from_block(l3_r_block, saved_word_index);
                        mem_ready  <= 1'b1;
                        state      <= S_IDLE;
                    end else begin
                        // miss in all levels -> fetch from RAM
                        fill_count <= 2'd0;
                        block_buf  <= '0;
                        state      <= S_FILL_RAM;
                    end
                end

                // Fill from RAM (4 words -> 1 block)
                S_FILL_RAM: begin
                    // ram_addr already driven combinationally from saved_addr + fill_count<<2

                    // capture current word into block buffer
                    unique case (fill_count)
                        2'd0: block_buf[31:0]    <= ram_r_data;
                        2'd1: block_buf[63:32]   <= ram_r_data;
                        2'd2: block_buf[95:64]   <= ram_r_data;
                        2'd3: block_buf[127:96]  <= ram_r_data;
                    endcase

                    if (fill_count == 2'd3) begin
                        // finished block -> fill all levels
                        l3_fill_en         <= 1'b1;
                        l3_fill_addr       <= block_base_addr;
                        l3_fill_data       <= block_buf;
                        l3_fill_mark_valid <= 1'b1;

                        l2_fill_en         <= 1'b1;
                        l2_fill_addr       <= block_base_addr;
                        l2_fill_data       <= block_buf;
                        l2_fill_mark_valid <= 1'b1;

                        l1_fill_en         <= 1'b1;
                        l1_fill_addr       <= block_base_addr;
                        l1_fill_data       <= block_buf;
                        l1_fill_mark_valid <= 1'b1;

                        mem_r_data <= word_from_block(block_buf, saved_word_index);
                        mem_ready  <= 1'b1;
                        state      <= S_IDLE;
                    end else begin
                        fill_count <= fill_count + 2'd1;
                    end
                end

                default: state <= S_IDLE;

            endcase
        end
    end

endmodule
