module div #(
    parameter D_WIDTH = 32
)
(
    input  logic               clk,
    input  logic               rst,
    input  logic               start,        // div_en

    input  logic [1:0]         div_ctrl,

    input  logic [D_WIDTH-1:0] numerator,    // rd1
    input  logic [D_WIDTH-1:0] denominator,  // rd2
    output logic [D_WIDTH-1:0] result,
    output logic               division_done // busy
);

logic [5:0] counter;

typedef enum logic [1:0] {
    IDLE,
    INIT,
    DIVIDE,
    DONE
} state_t;

state_t state, next_state;

logic [D_WIDTH:0]   rem;
logic [D_WIDTH-1:0] quo;
logic [D_WIDTH-1:0] div_shift;
logic [D_WIDTH:0]   den;

logic               sign_q;
logic               sign_r;
logic               is_signed;

assign is_signed = (div_ctrl == 2'b00) || (div_ctrl == 2'b10);

always_comb begin
    next_state = state;
    case (state)
        IDLE: if (start) next_state = INIT;
        INIT: next_state = DIVIDE;
        DIVIDE: if (counter == 6'd31) next_state = DONE;
        DONE: next_state = IDLE;
    endcase
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state         <= IDLE;
        division_done <= 1'b1;
        counter       <= 6'd0;
    end else begin
        state <= next_state;

        // track busy/done
        if (state == IDLE && start)
            division_done <= 1'b0;
        else if (state == DONE)
            division_done <= 1'b1;

        // counter management
        if (state == IDLE || state == DONE)
            counter <= 6'd0;
        else if (state == DIVIDE)
            counter <= counter + 1;
    end
end

always_ff @(posedge clk) begin
    case (state)
        IDLE: begin
        end
        INIT: begin
            rem <= 33'b0;
            quo <= 32'b0;
            if (is_signed) begin
                sign_q <= numerator[31] ^ denominator[31];
                sign_r <= numerator[31];
                div_shift <= numerator[31] ? -numerator : numerator;
                den <= {1'b0, denominator[31] ? -denominator : denominator};
            end
            else begin
                sign_q <= 1'b0;
                sign_r <= 1'b0;
                div_shift <= numerator;
                den <= {1'b0, denominator};
            end
        end
        DIVIDE: begin
            logic [D_WIDTH:0] rem_next;
            rem_next = {rem[D_WIDTH-1:0], div_shift[D_WIDTH-1]}; // shift left and bring top dividend bit

            // shift dividend left (consume top bit)
            div_shift <= div_shift << 1;

            // decide subtract
            if (rem_next >= den) begin
                    rem <= rem_next - den;
                    quo <= { quo[D_WIDTH-2:0], 1'b1 };
            end else begin
                    rem <= rem_next;
                    quo <= { quo[D_WIDTH-2:0], 1'b0 };
            end
        end
        DONE: begin
            case (div_ctrl)
                2'b00: result <= sign_q ? -quo : quo;                           // DIV
                2'b01: result <= quo;                                           // DIVU
                2'b10: result <= sign_r ? -rem[D_WIDTH-1:0] : rem[D_WIDTH-1:0]; // REM
                2'b11: result <= rem[D_WIDTH-1:0];                              // REMU
            endcase
        end
    endcase
end

endmodule
