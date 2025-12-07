module l2_cache_n_way #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter CACHE_SIZE = 16384,   // bytes
    parameter LINE_SIZE  = 16,      // bytes
    parameter WAYS       = 4
)(
    input  logic                   clk,
    input  logic                   rst,

    // upper level (L1 / MMU)
    input  logic                   mem_valid,
    input  logic                   mem_we,
    input  logic [ADDR_WIDTH-1:0]  mem_addr,
    input  logic [DATA_WIDTH-1:0]  mem_w_data,        // word in on write hit
    output logic [LINE_SIZE*8-1:0] mem_r_data,        // full line out on read hit
    output logic                   cache_hit,

    // block fill from below (L3 / RAM)
    input  logic                   fill_en,
    input  logic [ADDR_WIDTH-1:0]  fill_addr,
    input  logic [LINE_SIZE*8-1:0] fill_data,
    input  logic                   fill_mark_valid
);

    localparam int LINES         = CACHE_SIZE / LINE_SIZE;
    localparam int SETS          = LINES / WAYS;
    localparam int OFFSET_BITS   = $clog2(LINE_SIZE);
    localparam int SET_BITS      = $clog2(SETS);
    localparam int TAG_BITS      = ADDR_WIDTH - SET_BITS - OFFSET_BITS;

    localparam int BYTES_PER_WORD = DATA_WIDTH / 8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD;
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam int LINE_BITS      = LINE_SIZE * 8;
    localparam int WAY_BITS       = (WAYS > 1) ? $clog2(WAYS) : 1;

    logic [TAG_BITS-1:0]  tag_array   [0:SETS-1][0:WAYS-1];
    logic                 valid_array [0:SETS-1][0:WAYS-1];
    logic [LINE_BITS-1:0] data_array  [0:SETS-1][0:WAYS-1];

    logic [WAY_BITS-1:0]  rr_ptr      [0:SETS-1]; // round robin pointer

    wire [TAG_BITS-1:0]    mem_tag   = mem_addr[ADDR_WIDTH-1 -: TAG_BITS];
    wire [SET_BITS-1:0]    mem_set   = mem_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];
    wire [OFFSET_BITS-1:0] mem_off   = mem_addr[OFFSET_BITS-1:0];
    wire [WORD_SEL_BITS-1:0] mem_word_index = mem_off[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    logic [WAYS-1:0]       way_hit;

    always_comb begin
        for (int w = 0; w < WAYS; w++) begin
            way_hit[w]  = valid_array[mem_set][w] && (tag_array[mem_set][w] == mem_tag);
        end
    end

    assign cache_hit = |way_hit; // or all results

    // pick whole line from hit way
    logic [LINE_BITS-1:0] selected_line;

    always_comb begin
        selected_line = '0;
        for (int w = 0; w < WAYS; w++) begin
            if (way_hit[w])
                selected_line = data_array[mem_set][w]; // if we had a hit store that way
        end
    end

    // mmu will handle cache_hit for if this was valid data or not
    assign mem_r_data = selected_line;

    // fill address breakdown (base of line)
    wire [TAG_BITS-1:0]   fill_tag = fill_addr[ADDR_WIDTH-1 -: TAG_BITS];
    wire [SET_BITS-1:0]   fill_set = fill_addr[OFFSET_BITS + SET_BITS - 1 -: SET_BITS];

    logic [WAY_BITS-1:0] repl_way;

    always_comb begin
        repl_way = rr_ptr[fill_set]; // set to next way in round robin
        for (int w = 0; w < WAYS; w++) begin
            if (!valid_array[fill_set][w])
                repl_way = w[WAY_BITS-1:0]; // loop through and check if any are invalid, if so replace it (weird formatting is for length of w)
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int s = 0; s < SETS; s++) begin
                for (int w = 0; w < WAYS; w++) begin
                    valid_array[s][w] = 1'b0;
                    tag_array[s][w]   = '0;
                    data_array[s][w]  = '0;
                end
                rr_ptr[s] = '0;
            end
        end else begin
            // write hit -> update one word in line
            if (mem_valid && mem_we && cache_hit) begin
                for (int w = 0; w < WAYS; w++) begin
                    if (way_hit[w]) begin
                        case (mem_word_index)
                            0: data_array[mem_set][w][31:0]     <= mem_w_data;
                            1: data_array[mem_set][w][63:32]    <= mem_w_data;
                            2: data_array[mem_set][w][95:64]    <= mem_w_data;
                            3: data_array[mem_set][w][127:96]   <= mem_w_data;
                        endcase
                        rr_ptr[mem_set] <= (w + 1) % WAYS;
                    end
                end
            end

            // block fill
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
