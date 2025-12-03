module l1_cache_dm #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter CACHE_SIZE  = 4096,   // bytes (defined by brief)
    parameter LINE_SIZE   = 16      // bytes (4 words)
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
    localparam int OFFSET_BITS  = $clog2(LINE_SIZE);
    localparam int SET_BITS   = $clog2(LINES);
    localparam int TAG_BITS     = ADDR_WIDTH - SET_BITS - OFFSET_BITS;

    localparam int BYTES_PER_WORD = DATA_WIDTH/8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD; // 4
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);     // 2
    localparam int LINE_BITS      = LINE_SIZE * 8;              // 128

    // storage
    logic [TAG_BITS-1:0]  tag_array   [0:LINES-1];
    logic                 valid_array [0:LINES-1];
    logic [LINE_BITS-1:0] data_array  [0:LINES-1];

    // address breakdown for CPU
    wire [TAG_BITS-1:0]      mem_tag        = mem_addr[ADDR_WIDTH-1 -: TAG_BITS];

    wire [SET_BITS-1:0]      mem_set        = mem_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    wire [OFFSET_BITS-1:0]   mem_offset     = mem_addr[OFFSET_BITS-1:0];

    wire [WORD_SEL_BITS-1:0] mem_word_index = mem_offset[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // lookup
    logic [TAG_BITS-1:0]  line_tag;
    logic                 line_valid;
    logic [LINE_BITS-1:0] line_data;

    always_comb begin
        line_tag   = tag_array[mem_set];
        line_valid = valid_array[mem_set];
        line_data  = data_array[mem_set];
    end 

    assign cache_hit = line_valid && (line_tag == mem_tag);

    logic [DATA_WIDTH-1:0] line_word;

    always_comb begin
        case (mem_word_index)
            0: line_word = line_data[31:0];
            1: line_word = line_data[63:32];
            2: line_word = line_data[95:64];
            3: line_word = line_data[127:96];
            default: line_word = '0;
        endcase
    end

    assign mem_r_data = line_word;

    // fill address breakdown 
    wire [TAG_BITS-1:0]      fill_tag        = fill_addr[ADDR_WIDTH-1 -: TAG_BITS];

    wire [SET_BITS-1:0]      fill_index      = fill_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    wire [OFFSET_BITS-1:0]   fill_offset     = fill_addr[OFFSET_BITS-1:0];

    wire [WORD_SEL_BITS-1:0] fill_word_index = fill_offset[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // sequential updates
    integer i;
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < LINES; i++) begin
                valid_array[i] <= 1'b0;
                tag_array[i]   <= '0;
                data_array[i]  <= '0;
            end
        end else begin
            // CPU write-hit: update line word
            if (mem_valid && mem_we && cache_hit) begin
                case (mem_word_index)
                    0: data_array[mem_set][31:0]     <= mem_w_data;
                    1: data_array[mem_set][63:32]    <= mem_w_data;
                    2: data_array[mem_set][95:64]    <= mem_w_data;
                    3: data_array[mem_set][127:96]   <= mem_w_data;
                endcase
            end

            // Fill from MMU (read-miss block fill)
            if (fill_en) begin
                case (fill_word_index)
                    0: data_array[fill_index][31:0]     <= fill_data;
                    1: data_array[fill_index][63:32]    <= fill_data;
                    2: data_array[fill_index][95:64]    <= fill_data;
                    3: data_array[fill_index][127:96]   <= fill_data;
                endcase

                if (fill_mark_valid) begin
                    tag_array[fill_index]   <= fill_tag;
                    valid_array[fill_index] <= 1'b1;
                end
            end
        end
    end

endmodule
