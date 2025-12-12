module cache #(
    parameter CACHE_SIZE = 16,    // number of cache lines
    parameter ADDR_WIDTH = 32,     // width of the full address
    parameter WIDTH = 32
)(
    input  logic                   clk,
    input  logic                   reset,
    input  logic [ADDR_WIDTH-1:0]  wr_addr,        // full address
    input  logic [ADDR_WIDTH-1:0]  rd_addr,
    input  logic [WIDTH-1:0]       data_in0,   // first 16-bit number
    input  logic [WIDTH-1:0]       data_in1,   // second 16-bit number
    input  logic [1:0]             data_in2,   // extra 2-bit data
    input  logic                   write_en,  // write enable
    
    output logic [WIDTH-1:0]       data_out1, // second 16-bit number output
    output logic [1:0]             data_out2, // extra 2-bit output
    output logic [1:0]             data_out3,
    output logic                   hit1,        // cache hit flag
    output logic                   hit2
);

    localparam LINE_ADDR_WIDTH = $clog2(CACHE_SIZE); // number of bits to index cache line
    localparam TAG_WIDTH = ADDR_WIDTH - LINE_ADDR_WIDTH; // remaining bits for tag

    // Extract line index and tag from full address
    logic [LINE_ADDR_WIDTH-1:0] wr_line_index;
    logic [LINE_ADDR_WIDTH-1:0] rd_line_index;
    logic [TAG_WIDTH-1:0]       wr_addr_tag;
    logic [TAG_WIDTH-1:0]       rd_addr_tag;

    assign wr_line_index = wr_addr[LINE_ADDR_WIDTH-1:0];
    assign rd_line_index = rd_addr[LINE_ADDR_WIDTH-1:0];
    assign wr_addr_tag   = wr_addr[ADDR_WIDTH-1:LINE_ADDR_WIDTH];
    assign rd_addr_tag   = rd_addr[ADDR_WIDTH-1:LINE_ADDR_WIDTH];

    // Cache storage
    logic [WIDTH-1:0] cache_data0 [CACHE_SIZE-1:0];
    logic [WIDTH-1:0] cache_data1 [CACHE_SIZE-1:0];
    logic [1:0]  state       [CACHE_SIZE-1:0];
    logic        valid       [CACHE_SIZE-1:0];
    logic [TAG_WIDTH-1:0] tag [CACHE_SIZE-1:0];

    // Write logic
    always_ff @(negedge clk or posedge reset) begin
        if (reset) begin
            for (int i = 0; i < CACHE_SIZE; i++) begin
                valid[i]       <= 1'b0;
                cache_data0[i] <= 32'd0;
                cache_data1[i] <= 32'd0;
                state[i]       <= 2'd0;
                tag[i]         <= {TAG_WIDTH{1'b0}};
            end
        end else if (write_en) begin
            cache_data0[wr_line_index] <= data_in0;
            cache_data1[wr_line_index] <= data_in1;
            state[wr_line_index]       <= data_in2;
            tag[wr_line_index]         <= wr_addr_tag;
            valid[wr_line_index]       <= 1'b1;
        end
    end

    // Hit detection: valid + tag match
    assign hit1 = valid[rd_line_index] && (tag[rd_line_index] == rd_addr_tag);
    assign hit2 = valid[wr_line_index] && (tag[wr_line_index] == wr_addr_tag);

    // Read logic: output only if hit
    assign data_out1 = hit1 ? cache_data1[rd_line_index] : 32'd0;
    assign data_out2 = hit1 ? state[rd_line_index]       : 2'd0;
    assign data_out3 = hit2 ? state[wr_line_index]       : 2'd0;

endmodule