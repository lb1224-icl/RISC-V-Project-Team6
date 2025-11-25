module cache_direct #(
    paremeter DATA_WIDTH = 32, 
    paremeter ADDR_WIDTH = 32,
    parameter CACHE_SIZE   = 4096,   // bytes
    parameter LINE_SIZE    = 16      // bytes (4 byte words) (spacial locality)
)(
    input  logic clk,
    input  logic rst,

    input  logic                  cpu_valid, // used to ensure actual read or write is being called and not other instructions (no read bit)
    input  logic                  cpu_we,
    input  logic [ADDR_WIDTH-1:0] cpu_addr,
    input  logic [DATA_WIDTH-1:0] cpu_w_data,
    output logic [DATA_WIDTH-1:0] cpu_r_data,
    output logic                  cpu_ready, // will be used in pipeline to know when we have the right data (0 for cache_miss)
    output logic                  cache_hit,

    // write to memory info
    input  logic [DATA_WIDTH-1:0] mem_r_data,
    output logic [ADDR_WIDTH-1:0] mem_addr,
    output logic [DATA_WIDTH-1:0] mem_w_data,
    output logic                  mem_we

);

localparam int LINES = CACHE_SIZE / LINE_SIZE;
localparam int OFFSET = $clog2(LINE_SIZE); // used to work out which word and which byte
localparam int INDEX = $clog2(LINES);
localparam int TAG = ADDR_WIDTH - INDEX - OFFSET;

localparam int BYTES_PER_WORD = DATA_WIDTH/8;

localparam int WORDS_PER_LINE = LINE_SIZE / (DATA_WIDTH/8);
localparam int WORD_SEL = $clog2(WORDS_PER_LINE);
localparam int LINE_DATA = LINE_SIZE * 8;

// break down of cache memory
logic [TAG-1:0]       tag_array   [LINES-1:0];
logic                 valid_array [LINES-1:0];
logic [LINE_DATA-1:0] data_array  [LINES-1:0];

// used to index right word in data_array
wire [TAG-1:0]    addr_tag    = cpu_addr[ADDR_WIDTH-1 -: TAG]; // used for checking against cpu_addr
wire [INDEX-1:0]  addr_index  = cpu_addr[OFFSET+INDEX-1 -: INDEX]; // to index the cache data array
wire [OFFSET-1:0] addr_offset = cpu_addr[OFFSET-1:0]; // handles words and bytes in words
wire [WORD_SEL-1:0] word_index = addr_offset[OFFSET-1:$clog2(BYTES_PER_WORD)]; // word within line (4 bytes per word so final 2 bits free)

// taken from cache at given index
logic [TAG-1:0]       line_tag;
logic                 line_valid;
logic [LINE_DATA-1:0] line_data;

always_comb begin
    line_tag = tag_array[addr_index];
    line_valid = valid_array[addr_index];
    line_data = data_array[addr_index];
end

always_comb begin
    cache_hit = line_valid && (line_tag == addr_tag);
end

logic [DATA_WIDTH-1:0] line_word; // word we actually need to output

always_comb begin
    case (word_index)
        0: line_word = line_data[DATA_WIDTH-1:0];
        1: line_word = line_data[DATA_WIDTH*2-1:DATA_WIDTH];
        2: line_word = line_data[DATA_WIDTH*3-1:DATA_WIDTH*2];
        3: line_word = line_data[DATA_WIDTH*4-1:DATA_WIDTH*3];
        default: line_word = '0;
    endcase
end

assign mem_addr  = cpu_addr;
assign mem_wdata = cpu_wdata;
assign mem_we    = cpu_valid && cpu_we;

assign cpu_ready = cpu_valid; // currently single cycle so this is sufficient

always_comb begin
    if (cpu_valid && !cpu_we) begin
        if (cache_hit) begin
            cpu_rdata = line_word;       // hit → use cache
        end else begin
            cpu_rdata = mem_rdata;       // miss → bypass RAM (single-cycle, future we change this)
        end
    end else begin
        cpu_rdata = '0;
    end
end

always_ff @(posedge clk) begin
    if (rst) begin
        // invalidate cache
        for (int i = 0; i < LINES; i++) begin
            valid_array[i] <= 0;
            tag_array[i]   <= 0;
            data_array[i]  <= 0;
        end
    end 
    else if (cpu_valid) begin

        // WRITE HIT: update cache + write-through to memory
        if (cpu_we && cache_hit) begin
            case (word_index)
                0: data_array[addr_index][31:0]     <= cpu_wdata;
                1: data_array[addr_index][63:32]    <= cpu_wdata;
                2: data_array[addr_index][95:64]    <= cpu_wdata;
                3: data_array[addr_index][127:96]   <= cpu_wdata;
            endcase
        end

        // READ MISS: fill the cache line
        else if (!cpu_we && !cache_hit) begin
            // For single-cycle model, memory returns only the accessed word.
            // We store that one word and leave the rest unchanged.
            case (word_index)
                0: data_array[addr_index][31:0]     <= mem_rdata;
                1: data_array[addr_index][63:32]    <= mem_rdata; // need to do spacial locality to get all 4
                2: data_array[addr_index][95:64]    <= mem_rdata;
                3: data_array[addr_index][127:96]   <= mem_rdata;
            endcase

            tag_array[addr_index]   <= addr_tag;
            valid_array[addr_index] <= 1;
        end

        // WRITE MISS: (write-no-allocate)
        // Do nothing to cache. Memory already receives write-through.
    end
end



endmodule
