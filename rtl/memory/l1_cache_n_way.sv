module l1_cache_n_way #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter CACHE_SIZE = 4096, // bytes
    parameter LINE_SIZE  = 16,   // bytes (4 words)
    parameter WAYS       = 2
)(
    input  logic                      clk,
    input  logic                      rst,

    // CPU side
    input  logic                      mem_valid,
    input  logic                      mem_we,
    input  logic [ADDR_WIDTH-1:0]     mem_addr,
    input  logic [DATA_WIDTH-1:0]     mem_w_data,     // word in (write hit)
    input  logic [(DATA_WIDTH/8)-1:0] mem_byte_en,
    output logic [DATA_WIDTH-1:0]     mem_r_data,     // word out
    output logic                      cache_hit,

    // fill interface from MMU (block fill on read miss)
    input  logic                      fill_en,
    input  logic [ADDR_WIDTH-1:0]     fill_addr,      // base address of line
    input  logic [LINE_SIZE*8-1:0]    fill_data,      // full line in
    input  logic                      fill_mark_valid // 1 when line is fully valid
);

    localparam int LINES          = CACHE_SIZE / LINE_SIZE;
    localparam int SETS           = LINES / WAYS;
    localparam int OFFSET_BITS    = $clog2(LINE_SIZE);
    localparam int SET_BITS       = $clog2(SETS);
    localparam int TAG_BITS       = ADDR_WIDTH - SET_BITS - OFFSET_BITS;

    localparam int BYTES_PER_WORD = DATA_WIDTH / 8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD;
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam int LINE_BITS      = LINE_SIZE * 8;
    localparam int WAY_BITS       = (WAYS > 1) ? $clog2(WAYS) : 1;

    // storage: [set][way]
    logic [TAG_BITS-1:0]  tag_array   [0:SETS-1][0:WAYS-1];
    logic                 valid_array [0:SETS-1][0:WAYS-1];
    logic [LINE_BITS-1:0] data_array  [0:SETS-1][0:WAYS-1];

    // round-robin replacement pointer per set
    logic [WAY_BITS-1:0]  rr_ptr      [0:SETS-1];

    // address breakdown for CPU
    wire [TAG_BITS-1:0]      mem_tag        = mem_addr[ADDR_WIDTH-1 -: TAG_BITS];
    wire [SET_BITS-1:0]      mem_set        = mem_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];
    wire [OFFSET_BITS-1:0]   mem_off        = mem_addr[OFFSET_BITS-1:0];
    wire [WORD_SEL_BITS-1:0] mem_word_index =
        mem_off[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // lookup
    logic [WAYS-1:0]      way_hit;
    logic [LINE_BITS-1:0] way_data [0:WAYS-1];

    always_comb begin
        for (int w = 0; w < WAYS; w++) begin
            way_data[w] = data_array[mem_set][w];
            way_hit[w]  = valid_array[mem_set][w] && (tag_array[mem_set][w] == mem_tag);
        end
    end

    assign cache_hit = |way_hit;

    // select word from hit way
    logic [DATA_WIDTH-1:0] selected_word;

    always_comb begin
        selected_word = '0;
        for (int w = 0; w < WAYS; w++) begin
            if (way_hit[w]) begin
                case (mem_word_index)
                    0: selected_word = way_data[w][31:0];
                    1: selected_word = way_data[w][63:32];
                    2: selected_word = way_data[w][95:64];
                    3: selected_word = way_data[w][127:96];
                    default: selected_word = '0;
                endcase
            end
        end
    end

    assign mem_r_data = selected_word;

    // fill address breakdown (base of line)
    wire [TAG_BITS-1:0] fill_tag = fill_addr[ADDR_WIDTH-1 -: TAG_BITS];
    wire [SET_BITS-1:0] fill_set = fill_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    // choose replacement way for this set
    logic [WAY_BITS-1:0] repl_way;

    always_comb begin
        repl_way = rr_ptr[fill_set]; // default round-robin
        for (int w = 0; w < WAYS; w++) begin
            if (!valid_array[fill_set][w])
                repl_way = w[WAY_BITS-1:0];
        end
    end

    // byte-enable mask expanded to DATA_WIDTH bits
    logic [DATA_WIDTH-1:0] byte_mask;
    always_comb begin
        for (int b = 0; b < BYTES_PER_WORD; b++) begin
            byte_mask[b*8 +: 8] = {8{mem_byte_en[b]}};
        end
    end

    wire [DATA_WIDTH-1:0] masked_write = mem_w_data & byte_mask;

    // sequential logic
    integer s, w;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (s = 0; s < SETS; s++) begin
                for (w = 0; w < WAYS; w++) begin
                    valid_array[s][w] = 1'b0;
                    tag_array[s][w]   = '0;
                    data_array[s][w]  = '0;
                end
                rr_ptr[s] = '0;
            end
        end else begin
            // write hit -> update word
            if (mem_valid && mem_we && cache_hit) begin
                for (int ww = 0; ww < WAYS; ww++) begin
                    if (way_hit[ww]) begin
                        logic [DATA_WIDTH-1:0] cur_word;
                        case (mem_word_index)
                            0: begin
                                cur_word = data_array[mem_set][ww][31:0];
                                data_array[mem_set][ww][31:0]   <= (cur_word & ~byte_mask) | masked_write;
                            end
                            1: begin
                                cur_word = data_array[mem_set][ww][63:32];
                                data_array[mem_set][ww][63:32]  <= (cur_word & ~byte_mask) | masked_write;
                            end
                            2: begin
                                cur_word = data_array[mem_set][ww][95:64];
                                data_array[mem_set][ww][95:64]  <= (cur_word & ~byte_mask) | masked_write;
                            end
                            3: begin
                                cur_word = data_array[mem_set][ww][127:96];
                                data_array[mem_set][ww][127:96] <= (cur_word & ~byte_mask) | masked_write;
                            end
                        endcase
                        rr_ptr[mem_set] <= (ww + 1) % WAYS;
                    end
                end
            end

            // block fill on read miss
            if (fill_en) begin
                data_array[fill_set][repl_way] <= fill_data;

                if (fill_mark_valid) begin
                    tag_array[fill_set][repl_way]   <= fill_tag;
                    valid_array[fill_set][repl_way] <= 1'b1;
                    rr_ptr[fill_set]                <= (repl_way + 1) % WAYS;
                end
            end
        end
    end

endmodule
