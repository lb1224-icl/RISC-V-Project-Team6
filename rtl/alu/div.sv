module div #(
    parameter D_WIDTH = 32
) (
    input  logic               clk,
    input  logic               rst,
    input  logic               cache_stall,
    input  logic               start,       // div_en
    input  logic [1:0]         div_ctrl,

    input  logic [D_WIDTH-1:0] numerator,   // op1
    input  logic [D_WIDTH-1:0] denominator, // op2

    output logic [D_WIDTH-1:0] result,
    output logic               div_busy     // busy
);

logic [5:0] counter;

typedef enum logic [1:0] {
    IDLE,
    INIT,
    DIVIDE,
    DONE
} state_t;

state_t state, next_state;

logic [D_WIDTH:0]   div_r;
logic [D_WIDTH-1:0] div_q;
logic [D_WIDTH-1:0] div_shift;
logic [D_WIDTH:0]   div_d;

logic [D_WIDTH-1:0] n_reg;
logic [D_WIDTH-1:0] d_reg;

logic               sign_q;
logic               sign_r;
logic               is_signed;

logic               start_q;
logic               busy_q;
logic               start_pulse;

assign start_pulse = start & ~start_q & ~cache_stall;
assign is_signed   = (div_ctrl == 2'b00) || (div_ctrl == 2'b10);

always_comb begin
    next_state = state;
    case (state)
        IDLE: if (start_pulse)
            next_state = INIT;
        INIT: next_state = DIVIDE;
        DIVIDE: if (counter == 6'd31)
            next_state = DONE;
        DONE: next_state = IDLE;
    endcase
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state   <= IDLE;
        counter <= 6'd0;
        start_q <= 1'b0;
        busy_q  <= 1'b1;
    end else begin
        state   <= next_state;

        // latch operand values to capture forwarding results
        if (state == IDLE && start_pulse) begin
            n_reg <= numerator;
            d_reg <= denominator;
        end

        if (state == IDLE)
            start_q <= 1'b0;
        else
            start_q <= 1'b1;

        if (state == DONE)
            busy_q  <= 1'b0;
        else
            busy_q  <= 1'b1;

        // counter management
        if (state == IDLE || state == DONE)
            counter <= 6'd0;
        else if (state == DIVIDE)
            counter <= counter + 1;
    end
end

assign div_busy = start & busy_q;

always_ff @(posedge clk) begin
    case (state)
        IDLE: begin
        end
        INIT: begin
            div_r <= 33'b0;
            div_q <= 32'b0;
            if (is_signed) begin
                sign_q <= n_reg[31] ^ d_reg[31];
                sign_r <= n_reg[31];
                div_shift <= n_reg[31] ? -n_reg : n_reg;
                div_d <= {1'b0, d_reg[31] ? -d_reg : d_reg};
            end else begin
                sign_q <= 1'b0;
                sign_r <= 1'b0;
                div_shift <= n_reg;
                div_d <= {1'b0, d_reg};
            end
        end
        DIVIDE: begin
            logic [D_WIDTH:0] div_r_next; // local remainder candidate

            div_r_next = {div_r[D_WIDTH-1:0], div_shift[D_WIDTH-1]}; // shift left and bring top dividend bit

            // shift dividend left (consume top bit)
            div_shift  <= div_shift << 1;

            // decide subtract
            if (div_r_next >= div_d) begin
                div_r <= div_r_next - div_d;
                div_q <= {div_q[D_WIDTH-2:0], 1'b1};
            end else begin
                div_r <= div_r_next;
                div_q <= {div_q[D_WIDTH-2:0], 1'b0};
            end
        end
        DONE: begin
            case (div_ctrl)
                2'b00: result <= sign_q ? -div_q : div_q;                           // DIV
                2'b01: result <= div_q;                                             // DIVU
                2'b10: result <= sign_r ? -div_r[D_WIDTH-1:0] : div_r[D_WIDTH-1:0]; // REM
                2'b11: result <= div_r[D_WIDTH-1:0];                                // REMU
            endcase
        end
    endcase
end

endmodule
