module cache_direct_mc #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter CACHE_SIZE  = 4096,     // bytes
    parameter LINE_SIZE   = 16        // bytes (4 words)
)(
    input  logic clk,
    input  logic rst,

    // CPU → cache
    input  logic                  cpu_valid,
    input  logic                  cpu_we,
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic [DATA_WIDTH-1:0] cpu_w_data,

    // Cache → CPU
    output logic [DATA_WIDTH-1:0] cpu_r_data,
    output logic                  cpu_ready,
    output logic                  cache_hit,

    // Cache → RAM
    output logic [ADDR_WIDTH-1:0] mem_addr,
    output logic [DATA_WIDTH-1:0] mem_w_data,
    output logic                  mem_we,

    // RAM → cache
    input  logic [DATA_WIDTH-1:0] mem_r_data
);

    // ============================================
    // Cache geometry
    // ============================================
    localparam int LINES        = CACHE_SIZE / LINE_SIZE;
    localparam int OFFSET_BITS  = $clog2(LINE_SIZE);
    localparam int INDEX_BITS   = $clog2(LINES);
    localparam int TAG_BITS     = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;

    localparam int BYTES_PER_WORD = DATA_WIDTH/8;
    localparam int WORDS_PER_LINE = LINE_SIZE / BYTES_PER_WORD; // 4
    localparam int WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);     // 2
    localparam int LINE_BITS      = LINE_SIZE * 8;              // 128

    // ============================================
    // Cache storage
    // ============================================
    logic [TAG_BITS-1:0]       tag_array   [0:LINES-1];
    logic                      valid_array [0:LINES-1];
    logic [LINE_BITS-1:0]      data_array  [0:LINES-1];

    // ============================================
    // Address breakdown
    // ============================================
    wire [TAG_BITS-1:0]   addr_tag =
        cpu_addr[ADDR_WIDTH-1 -: TAG_BITS];

    wire [INDEX_BITS-1:0] addr_index =
        cpu_addr[OFFSET_BITS + INDEX_BITS - 1 -: INDEX_BITS];

    wire [OFFSET_BITS-1:0] addr_offset =
        cpu_addr[OFFSET_BITS-1:0];

    wire [WORD_SEL_BITS-1:0] word_index =
        addr_offset[OFFSET_BITS-1 : $clog2(BYTES_PER_WORD)];

    // ============================================
    // Lookup the selected line
    // ============================================
    logic [TAG_BITS-1:0]       line_tag;
    logic                      line_valid;
    logic [LINE_BITS-1:0]      line_data;

    always_comb begin
        line_tag   = tag_array[addr_index];
        line_valid = valid_array[addr_index];
        line_data  = data_array[addr_index];
    end

    assign cache_hit = line_valid && (line_tag == addr_tag);

    // Select the word inside the line
    logic [DATA_WIDTH-1:0] line_word;

    always_comb begin
        case (word_index)
            0: line_word = line_data[31:0];
            1: line_word = line_data[63:32];
            2: line_word = line_data[95:64];
            3: line_word = line_data[127:96];
            default: line_word = '0;
        endcase
    end

    // RAM interface defaults / write-through
    assign mem_addr  = cpu_addr;
    assign mem_w_data = cpu_w_data;
    assign mem_we    = cpu_valid && cpu_we; // write-through

    // FSM for read miss block fill
    typedef enum logic [1:0] {
        S_IDLE,
        S_FILL
    } state_t;

    state_t state;

    // Latched miss information (Used to keep track of original miss)
    logic [ADDR_WIDTH-1:0] miss_addr_base;
    logic [INDEX_BITS-1:0] miss_index;
    logic [TAG_BITS-1:0]   miss_tag;
    logic [WORD_SEL_BITS-1:0] miss_word_index;
    logic [1:0] fill_count; // used to fill all 4 words

    // Output to CPU
    logic [DATA_WIDTH-1:0] rdata_reg;
    logic                  ready_reg;

    assign cpu_r_data = rdata_reg;
    assign cpu_ready  = ready_reg;

    // Sequential logic
    integer i;
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < LINES; i++) begin
                valid_array[i] <= 0;
                tag_array[i]   <= 0;
                data_array[i]  <= 0;
            end

            rdata_reg        <= '0;
            ready_reg        <= 1'b0;

            state            <= S_IDLE;
            fill_count       <= 2'd0;
            miss_addr_base   <= '0;
            miss_index       <= '0;
            miss_tag         <= '0;
            miss_word_index  <= '0;
        end else begin
            // Default: not ready unless set in the state logic
            ready_reg <= 1'b0;

            case (state)

                // S_IDLE: hits and writes are 1-cycle
                S_IDLE: begin
                    if (cpu_valid) begin

                        if (!cpu_we) begin
                            // -------- READ HIT --------
                            if (cache_hit) begin
                                rdata_reg <= line_word;
                                ready_reg <= 1'b1;

                            end else begin
                                // -------- READ MISS --------
                                miss_index      <= addr_index;
                                miss_tag        <= addr_tag;
                                miss_word_index <= word_index;

                                // Align to start of 16-byte block
                                miss_addr_base <= {
                                    cpu_addr[ADDR_WIDTH-1:OFFSET_BITS],
                                    {OFFSET_BITS{1'b0}}
                                };

                                fill_count <= 2'd0;
                                state      <= S_FILL;
                            end

                        end else begin
                            if (cache_hit) begin
                                // -------- WRITE HIT --------
                                case (word_index)
                                    0: data_array[addr_index][31:0]    <= cpu_w_data;
                                    1: data_array[addr_index][63:32]   <= cpu_w_data;
                                    2: data_array[addr_index][95:64]   <= cpu_w_data;
                                    3: data_array[addr_index][127:96]  <= cpu_w_data;
                                endcase
                            end
                            // write miss = write-through only (no allocate)

                            ready_reg <= 1'b1;
                        end
                    end
                end

                // S_FILL: read 4 words from RAM for read miss
                S_FILL: begin
                    // Store returned word into correct slot in the cache line
                    case (fill_count)
                        0: data_array[miss_index][31:0]    <= mem_r_data;
                        1: data_array[miss_index][63:32]   <= mem_r_data;
                        2: data_array[miss_index][95:64]   <= mem_r_data;
                        3: data_array[miss_index][127:96]  <= mem_r_data;
                    endcase

                    // got whole block
                    if (fill_count == 2'd3) begin
                        // Whole block fetched
                        valid_array[miss_index] <= 1'b1;
                        tag_array[miss_index]   <= miss_tag;

                        // Serve the original read
                        case (miss_word_index)
                            0: rdata_reg <= data_array[miss_index][31:0];
                            1: rdata_reg <= data_array[miss_index][63:32];
                            2: rdata_reg <= data_array[miss_index][95:64];
                            3: rdata_reg <= data_array[miss_index][127:96];
                        endcase

                        ready_reg <= 1'b1;
                        state     <= S_IDLE;

                    end else begin
                        // Move to next word in block
                        fill_count <= fill_count + 2'd1;
                    end
                end

            endcase
        end
    end

    // RAM address during FILL state
    always_comb begin
        if (state == S_IDLE)
            mem_addr = cpu_addr;
        else // S_FILL:
            mem_addr = miss_addr_base + {fill_count, 2'b00};
    end

endmodule
