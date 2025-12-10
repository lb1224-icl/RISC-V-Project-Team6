module mmu #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter LINE_SIZE   = 16  // bytes per cache line (4 words)
)(
    input  logic                      clk,
    input  logic                      rst,

    // CPU -> MMU
    input  logic                      mem_valid,
    input  logic                      mem_we,
    input  logic [ADDR_WIDTH-1:0]     mem_addr,
    input  logic [DATA_WIDTH-1:0]     mem_w_data,
    input  logic [(DATA_WIDTH/8)-1:0] mem_byte_en,

    // MMU -> CPU
    output logic [DATA_WIDTH-1:0]     mem_r_data,
    output logic                      mem_ready,  // 1 -> MMU can accept / complete an access
    output logic                      cache_hit   // 1 -> last completed READ was a cache hit (used in test benches)
);

    localparam int BYTES_PER_WORD = DATA_WIDTH/8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD;  // 4
    localparam int BLOCK_BITS     = DATA_WIDTH * WORDS_PER_LINE; // 128
    localparam int OFFSET_BITS    = $clog2(LINE_SIZE);
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);      // 2

    wire [WORD_SEL_BITS-1:0] addr_word_index =
        mem_addr[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    wire [ADDR_WIDTH-1:0] addr_block_base = {
        mem_addr[ADDR_WIDTH-1:OFFSET_BITS],
        {OFFSET_BITS{1'b0}}
    };


    // L1: word out
    logic [DATA_WIDTH-1:0] l1_r_word;
    logic                  l1_hit;

    logic                  l1_fill_en;
    logic [ADDR_WIDTH-1:0] l1_fill_addr;
    logic [BLOCK_BITS-1:0] l1_fill_data;
    logic                  l1_fill_mark_valid;

    // L2: block out
    logic [BLOCK_BITS-1:0] l2_r_block;
    logic                  l2_hit;

    logic                  l2_fill_en;
    logic [ADDR_WIDTH-1:0] l2_fill_addr;
    logic [BLOCK_BITS-1:0] l2_fill_data;
    logic                  l2_fill_mark_valid;

    // L3: block out
    logic [BLOCK_BITS-1:0] l3_r_block;
    logic                  l3_hit;

    logic                  l3_fill_en;
    logic [ADDR_WIDTH-1:0] l3_fill_addr;
    logic [BLOCK_BITS-1:0] l3_fill_data;
    logic                  l3_fill_mark_valid;

    // RAM: word out, word in
    logic [ADDR_WIDTH-1:0] ram_addr;
    logic [DATA_WIDTH-1:0] ram_r_data;
    logic [DATA_WIDTH-1:0] ram_w_data;

    l1_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (4096),       // 4 KiB
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (2)
    ) u_l1 (
        .clk             (clk),
        .rst             (rst),
        .mem_valid       (mem_valid),
        .mem_we          (mem_we),
        .mem_addr        (mem_addr),
        .mem_w_data      (mem_w_data),
        .mem_byte_en     (mem_byte_en),
        .mem_r_data      (l1_r_word),
        .cache_hit       (l1_hit),
        .fill_en         (l1_fill_en),
        .fill_addr       (l1_fill_addr),
        .fill_data       (l1_fill_data),
        .fill_mark_valid (l1_fill_mark_valid)
    );

    l2_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (16384),      // 16 KiB
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (4)
    ) u_l2 (
        .clk             (clk),
        .rst             (rst),
        .mem_valid       (mem_valid),
        .mem_we          (mem_we),
        .mem_addr        (mem_addr),
        .mem_w_data      (mem_w_data),
        .mem_byte_en     (mem_byte_en),
        .mem_r_data      (l2_r_block),
        .cache_hit       (l2_hit),
        .fill_en         (l2_fill_en),
        .fill_addr       (l2_fill_addr),
        .fill_data       (l2_fill_data),
        .fill_mark_valid (l2_fill_mark_valid)
    );

    l3_cache_n_way #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (65536),      // 64 KiB
        .LINE_SIZE  (LINE_SIZE),
        .WAYS       (8)
    ) u_l3 (
        .clk             (clk),
        .rst             (rst),
        .mem_valid       (mem_valid),
        .mem_we          (mem_we),
        .mem_addr        (mem_addr),
        .mem_w_data      (mem_w_data),
        .mem_byte_en     (mem_byte_en),
        .mem_r_data      (l3_r_block),
        .cache_hit       (l3_hit),
        .fill_en         (l3_fill_en),
        .fill_addr       (l3_fill_addr),
        .fill_data       (l3_fill_data),
        .fill_mark_valid (l3_fill_mark_valid)
    );

    ram u_ram (
        .addr         (ram_addr),
        .write_data   (ram_w_data),
        .clk          (clk),
        .write_enable (mem_we),
        .byte_en      (mem_byte_en),
        .read_data    (ram_r_data)
    );

    // write-through: RAM always sees CPU writes
    assign ram_w_data = mem_w_data;

    function automatic [DATA_WIDTH-1:0] word_from_block (
        input [BLOCK_BITS-1:0]    blk,
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

    typedef enum logic [0:0] {
        S_IDLE, // ready for new access, no outstanding miss
        S_FILL  // reading 4 words from RAM into block_buf
    } state_t;

    state_t state;

    logic [ADDR_WIDTH-1:0]    saved_addr;
    logic [WORD_SEL_BITS-1:0] saved_word_index;

    logic [1:0]               fill_count;   
    logic [BLOCK_BITS-1:0]    block_buf;  // assembled block from RAM

    logic                     resp_valid; // goes high after 4 clock cycles of a full read miss
    logic [WORD_SEL_BITS-1:0] resp_word_index;

    logic last_read_hit;

    // RAM address: depends on state
    always_comb begin
        if (state == S_FILL) begin
            // block base for saved address + (fill_count << 2)
            ram_addr = {saved_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}} + {fill_count, 2'b00};
        end else begin
            // normal case: just follow CPU
            // word-align the address so byte lanes are selected via byte_en
            ram_addr = {mem_addr[ADDR_WIDTH-1:2], 2'b00};
        end
    end

    // stall the CPU on a miss immediately (same cycle) and while refilling
    assign mem_ready = (state != S_FILL) && !(mem_valid && !mem_we && !(l1_hit | l2_hit | l3_hit));

    logic [DATA_WIDTH-1:0] resp_data_comb;

    always_comb begin
        resp_data_comb = '0;

        // only meaningful for reads; writes don't care about mem_r_data
        if (!mem_we) begin
            if (resp_valid) begin
                resp_data_comb = word_from_block(block_buf, resp_word_index);
            end else begin
                unique case (state)

                    S_IDLE: begin
                        // no outstanding miss; we just look at cache hits
                        if (l1_hit) begin
                            resp_data_comb = l1_r_word; // L1 is word out
                        end else if (l2_hit) begin
                            resp_data_comb = word_from_block(l2_r_block, addr_word_index);
                        end else if (l3_hit) begin
                            resp_data_comb = word_from_block(l3_r_block, addr_word_index);
                        end else begin
                            // read miss in all 3; we are about to go to FILL
                            resp_data_comb = '0;
                        end
                    end

                    S_FILL: begin
                        // in the middle of a miss; mem_ready = 0 so CPU must stall
                        resp_data_comb = '0;
                    end

                    default: resp_data_comb = '0;

                endcase
            end
        end
    end

    assign mem_r_data = resp_data_comb;

    // sequential part - miss tracking, fills, write-through, stats
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state              <= S_IDLE;
            saved_addr         <= '0;
            saved_word_index   <= '0;
            fill_count         <= 2'd0;
            block_buf          <= '0;
            resp_valid         <= 1'b0;
            resp_word_index    <= '0;

            l1_fill_en         <= 1'b0;
            l1_fill_addr       <= '0;
            l1_fill_data       <= '0;
            l1_fill_mark_valid <= 1'b0;

            l2_fill_en         <= 1'b0;
            l2_fill_addr       <= '0;
            l2_fill_data       <= '0;
            l2_fill_mark_valid <= 1'b0;

            l3_fill_en         <= 1'b0;
            l3_fill_addr       <= '0;
            l3_fill_data       <= '0;
            l3_fill_mark_valid <= 1'b0;

            last_read_hit      <= 1'b0;

        end else begin
            // defaults every cycle
            l1_fill_en         <= 1'b0;
            l1_fill_mark_valid <= 1'b0;
            l2_fill_en         <= 1'b0;
            l2_fill_mark_valid <= 1'b0;
            l3_fill_en         <= 1'b0;
            l3_fill_mark_valid <= 1'b0;

            if (state == S_IDLE) begin
                resp_valid <= 1'b0;
            end

            case (state)

                // S_IDLE ==> normal operation, no outstanding miss
                S_IDLE: begin
                    if (mem_valid) begin
                        if (!mem_we) begin
                            // READ
                            logic any_hit;
                            any_hit = (l1_hit | l2_hit | l3_hit);

                            if (any_hit) begin
                                last_read_hit <= 1'b1;

                                if (l2_hit && !l1_hit) begin
                                    // promote L2 -> L1
                                    l1_fill_en         <= 1'b1;
                                    l1_fill_addr       <= {mem_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};
                                    l1_fill_data       <= l2_r_block;
                                    l1_fill_mark_valid <= 1'b1;
                                end else if (l3_hit && !l2_hit) begin
                                    // promote L3 -> L2
                                    l2_fill_en         <= 1'b1;
                                    l2_fill_addr       <= {mem_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};
                                    l2_fill_data       <= l3_r_block;
                                    l2_fill_mark_valid <= 1'b1;

                                    // promote L3 -> L1 as well
                                    l1_fill_en         <= 1'b1;
                                    l1_fill_addr       <= {mem_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};
                                    l1_fill_data       <= l3_r_block;
                                    l1_fill_mark_valid <= 1'b1;
                                end
                            end else begin
                                // MISS in all 3 levels ==> start a 4-cycle block fetch from RAM.
                                last_read_hit    <= 1'b0;
                                saved_addr       <= mem_addr;
                                saved_word_index <= addr_word_index;
                                fill_count       <= 2'd0;
                                block_buf        <= '0;
                                state            <= S_FILL;
                                resp_valid       <= 1'b0;
                            end
                        end
                    end
                end

                // S_FILL ==> we are fetching 4 words from RAM
                S_FILL: begin
                    logic [BLOCK_BITS-1:0] block_next;
                    block_next = block_buf;

                    unique case (fill_count)
                        2'd0: block_next[31:0]   = ram_r_data;
                        2'd1: block_next[63:32]  = ram_r_data;
                        2'd2: block_next[95:64]  = ram_r_data;
                        2'd3: block_next[127:96] = ram_r_data;
                    endcase

                    // commit updated block into block_buf
                    block_buf <= block_next;

                    if (fill_count == 2'd3) begin

                        logic [ADDR_WIDTH-1:0] base;
                        base = { saved_addr[ADDR_WIDTH-1:OFFSET_BITS],
                                 {OFFSET_BITS{1'b0}} };

                        l3_fill_en         <= 1'b1;
                        l3_fill_addr       <= base;
                        l3_fill_data       <= block_next;
                        l3_fill_mark_valid <= 1'b1;

                        l2_fill_en         <= 1'b1;
                        l2_fill_addr       <= base;
                        l2_fill_data       <= block_next;
                        l2_fill_mark_valid <= 1'b1;

                        l1_fill_en         <= 1'b1;
                        l1_fill_addr       <= base;
                        l1_fill_data       <= block_next;
                        l1_fill_mark_valid <= 1'b1;

                        resp_valid         <= 1'b1;
                        resp_word_index    <= saved_word_index;

                        // next cycle ==> back to IDLE so we can accept another request
                        state <= S_IDLE;
                    end else begin
                        fill_count <= fill_count + 2'd1;
                    end
                end

                default: state <= S_IDLE;

            endcase
        end
    end

    assign cache_hit = last_read_hit;

endmodule
