module l1_cache_two_way #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter CACHE_SIZE  = 2048,   // bytes (half of brief as l2 about to exist)
    parameter LINE_SIZE   = 16,     // bytes (4 words)
    parameter WAYS = 2
)(
    input  logic clk,
    input  logic rst,

    // CPU-side lookup
    input  logic                  mem_valid,
    input  logic                  mem_we,
    input  logic [ADDR_WIDTH-1:0] mem_addr,
    input  logic [DATA_WIDTH-1:0] mem_w_data,
    output logic [DATA_WIDTH-1:0] mem_r_data,
    output logic                  cache_hit,

    // Fill interface from MMU (block fill on read miss)
    input  logic                  fill_en,
    input  logic [ADDR_WIDTH-1:0] fill_addr,   // address of word being filled
    input  logic [DATA_WIDTH-1:0] fill_data,
    input  logic                  fill_mark_valid
);

    // geometry
    localparam int LINES        = CACHE_SIZE / LINE_SIZE;
    localparam int SETS         = LINES/WAYS;
    localparam int OFFSET_BITS  = $clog2(LINE_SIZE);
    localparam int SET_BITS     = $clog2(SETS);
    localparam int TAG_BITS     = ADDR_WIDTH - SET_BITS - OFFSET_BITS;

    localparam int BYTES_PER_WORD = DATA_WIDTH/8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD; // 4
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);     // 2
    localparam int LINE_BITS      = LINE_SIZE * 8;              // 128

    // storage
    logic [TAG_BITS-1:0]  tag_array   [0:SETS-1][0:WAYS-1];
    logic                 valid_array [0:SETS-1][0:WAYS-1];
    logic [LINE_BITS-1:0] data_array  [0:SETS-1][0:WAYS-1];

    // address breakdown for CPU
    wire [TAG_BITS-1:0]      mem_tag        = mem_addr[ADDR_WIDTH-1 -: TAG_BITS];

    wire [SET_BITS-1:0]      mem_set        = mem_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    wire [OFFSET_BITS-1:0]   mem_offset     = mem_addr[OFFSET_BITS-1:0];

    wire [WORD_SEL_BITS-1:0] mem_word_index = mem_offset[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // simple pseudo-LRU: 1 bit per set
    // 0 → way 0 is LRU candidate, 1 → way 1 is LRU candidate
    logic lru_bit [0:SETS-1];

    // lookup
    logic [TAG_BITS-1:0]  line_tag    [0:WAYS-1];
    logic                 line_valid  [0:WAYS-1];
    logic [LINE_BITS-1:0] line_data   [0:WAYS-1];

    always_comb begin
        for (int w = 0; w < WAYS; w++) begin
            line_tag[w]   = tag_array[mem_set][w];
            line_valid[w] = valid_array[mem_set][w];
            line_data[w]  = data_array[mem_set][w];
        end
    end

    logic hit_way0, hit_way1;
    assign hit_way0 = line_valid[0] && (line_tag[0] == mem_tag);
    assign hit_way1 = line_valid[1] && (line_tag[1] == mem_tag);

    assign cache_hit = hit_way0 || hit_way1;


    logic [DATA_WIDTH-1:0] line_word;

    always_comb begin
        line_word = '0;
        if (hit_way0) begin
            case (mem_word_index)
                0: line_word = line_data[0][31:0];
                1: line_word = line_data[0][63:32];
                2: line_word = line_data[0][95:64];
                3: line_word = line_data[0][127:96];
                default: line_word = '0;
            endcase
        end else if (hit_way1) begin
            case (mem_word_index)
                0: line_word = line_data[1][31:0];
                1: line_word = line_data[1][63:32];
                2: line_word = line_data[1][95:64];
                3: line_word = line_data[1][127:96];
                default: line_word = '0;
            endcase
        end
    end

    assign mem_r_data = line_word;

    // fill address breakdown 
    wire [TAG_BITS-1:0]      fill_tag        = fill_addr[ADDR_WIDTH-1 -: TAG_BITS];

    wire [SET_BITS-1:0]      fill_index      = fill_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    wire [OFFSET_BITS-1:0]   fill_offset     = fill_addr[OFFSET_BITS-1:0];

    wire [WORD_SEL_BITS-1:0] fill_word_index = fill_offset[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // choose replacement way for this set
    logic repl_way; // 0 or 1

    always_comb begin
        logic v0 = valid_array[fill_set][0];
        logic v1 = valid_array[fill_set][1];

        if (!v0)       repl_way = 1'b0;         // empty way 0
        else if (!v1)  repl_way = 1'b1;         // empty way 1
        else           repl_way = lru_bit[fill_set]; // evict LRU
    end

    // sequential updates
    integer i;
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < SETS; i++) begin
                for (w = 0; w < WAYS; w++) begin
                    valid_array[i][w] <= 1'b0;
                    tag_array[i][w]   <= '0;
                    data_array[i][w]  <= '0;
                end
                lru_bit[i] <= 1'b0;
            end
        end else begin
            // CPU write-hit: update line word
            if (mem_valid && mem_we && cache_hit) begin
                if (hit_way0) begin
                    case (mem_word_index)
                        0: data_array[mem_set][0][31:0]     <= mem_w_data;
                        1: data_array[mem_set][0][63:32]    <= mem_w_data;
                        2: data_array[mem_set][0][95:64]    <= mem_w_data;
                        3: data_array[mem_set][0][127:96]   <= mem_w_data;
                    endcase
                    // mark way 0 as most recently used -> evict 1 next time
                    lru_bit[mem_set] <= 1'b1;
                end else if (hit_way1) begin
                    case (mem_word_index)
                        0: data_array[mem_set][1][31:0]     <= mem_w_data;
                        1: data_array[mem_set][1][63:32]    <= mem_w_data;
                        2: data_array[mem_set][1][95:64]    <= mem_w_data;
                        3: data_array[mem_set][1][127:96]   <= mem_w_data;
                    endcase
                    // mark way 1 as MRU -> evict 0 next time
                    lru_bit[mem_set] <= 1'b0;
                end
            end

            // Fill from MMU (read-miss block fill)
            if (fill_en) begin
                case (fill_word_index)
                    0: data_array[fill_set][repl_way][31:0]     <= fill_data;
                    1: data_array[fill_set][repl_way][63:32]    <= fill_data;
                    2: data_array[fill_set][repl_way][95:64]    <= fill_data;
                    3: data_array[fill_set][repl_way][127:96]   <= fill_data;
                endcase

                if (fill_mark_valid) begin //only do this if full block is valid (on last word entry)
                    tag_array[fill_set][repl_way]   <= fill_tag;
                    valid_array[fill_set][repl_way] <= 1'b1;

                    // newly filled way is MRU → evict the other next time
                    lru_bit[fill_set] <= ~repl_way;
                end
            end
        end
    end

endmodule
