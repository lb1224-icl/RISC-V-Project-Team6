module mmu #(
    parameter DATA_WIDTH  = 32,
    parameter ADDR_WIDTH  = 32,
    parameter CACHE_SIZE  = 4096,   // bytes
    parameter LINE_SIZE   = 16      // bytes
)(
    input  logic clk,
    input  logic rst,

    // CPU -> MMU
    input  logic                  mem_valid, // valid memory instruction
    input  logic                  mem_we,
    input  logic [ADDR_WIDTH-1:0] mem_addr,
    input  logic [DATA_WIDTH-1:0] mem_w_data,

    // MMU -> CPU
    output logic [DATA_WIDTH-1:0] mem_r_data,
    output logic                  mem_ready, //mmu is ready for next memory instruction
    output logic                  cache_hit
);

    // wires between MMU and L1 cache
    logic [DATA_WIDTH-1:0] cache_r_data;
    logic                  cache_hit_int;

    logic                  fill_en;
    logic [ADDR_WIDTH-1:0] fill_addr;
    logic [DATA_WIDTH-1:0] fill_data;
    logic                  fill_mark_valid;

    // wires between MMU and RAM 
    logic [ADDR_WIDTH-1:0] ram_addr;
    logic [DATA_WIDTH-1:0] ram_r_data;
    logic [DATA_WIDTH-1:0] ram_w_data;
    logic                  ram_we;

    l1_cache_dm #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .CACHE_SIZE (CACHE_SIZE),
        .LINE_SIZE  (LINE_SIZE)
    ) u_l1 (
        .clk           (clk),
        .rst           (rst),
        .mem_valid     (mem_valid),
        .mem_we        (mem_we),
        .mem_addr      (mem_addr),
        .mem_w_data    (mem_w_data),
        .mem_r_data    (cache_r_data),
        .cache_hit     (cache_hit_int),
        .fill_en       (fill_en),
        .fill_addr     (fill_addr),
        .fill_data     (fill_data),
        .fill_mark_valid(fill_mark_valid)
    );

    assign cache_hit = cache_hit_int;

    ram u_ram (
        .addr         (ram_addr),
        .write_data   (ram_w_data),
        .clk          (clk),
        .write_enable (ram_we),
        .read_data    (ram_r_data)
    );

    // FSM for read-miss block fill
    localparam int OFFSET_BITS  = $clog2(LINE_SIZE);

    typedef enum logic [1:0] {
        IDLE,
        FILL
    } state_t;

    state_t state;

    logic [ADDR_WIDTH-1:0] miss_addr_base;
    logic [1:0]            fill_count;
    logic [ADDR_WIDTH-1:0] saved_mem_addr;

    // default RAM write-through from CPU writes
    assign ram_w_data = mem_w_data;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state          <= IDLE;
            fill_count     <= 2'd0;
            miss_addr_base <= '0;
            saved_mem_addr <= '0;
            saved_mem_we   <= 1'b0;
            mem_r_data     <= '0;
            mem_ready      <= 1'b0;
        end else begin
            // defaults
            mem_ready      <= 1'b0;
            fill_en        <= 1'b0;
            fill_mark_valid<= 1'b0;

            case (state)

                IDLE: begin
                    if (mem_valid) begin
                        saved_mem_addr <= mem_addr;

                        if (!mem_we) begin
                            // READ
                            if (cache_hit_int) begin
                                // hit: serve from cache
                                mem_r_data <= cache_r_data;
                                mem_ready  <= 1'b1;
                            end else begin
                                // miss: start block fill
                                miss_addr_base <= {
                                    mem_addr[ADDR_WIDTH-1:OFFSET_BITS],
                                    {OFFSET_BITS{1'b0}}
                                }; // put to first of 4 words
                                fill_count <= 2'd0;
                                state      <= S_FILL;
                            end

                        end else begin
                            // WRITE
                            // write-through to RAM
                            mem_ready <= 1'b1;
                        end
                    end
                end

                FILL: begin
                    // On each cycle, RAM is addressed at miss_addr_base + (fill_count << 2)
                    // ram_r_data holds that word, so push it into cache
                    fill_en   <= 1'b1;
                    fill_addr <= miss_addr_base + {fill_count, 2'b00};
                    fill_data <= ram_r_data;

                    if(fill_count == saved_mem_addr[OFFSET_BITS-1-:2]){
                        mem_r_data      <= ram_r_data; // output right data from memory
                    }

                    if (fill_count == 2'd3) begin
                        fill_mark_valid <= 1'b1;
                        state           <= IDLE;
                        mem_ready       <= 1'b1;
                    end else begin
                        fill_count <= fill_count + 2'd1;
                    end
                end

            endcase
        end
    end

    // RAM address and write-enable (split for ease of reading)
    always_comb begin
        case (state)
            IDLE: begin
                ram_addr = mem_addr;
                ram_we   = (mem_valid && mem_we); // write-through
            end
            FILL: begin
                ram_addr = miss_addr_base + {fill_count, 2'b00};
                ram_we   = 1'b0;
            end
            default: begin
                ram_addr = '0;
                ram_we   = 1'b0;
            end
        endcase
    end

endmodule
