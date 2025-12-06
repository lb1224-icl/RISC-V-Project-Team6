module div #(
    parameter D_WIDTH = 32;
)
(
    input  logic clk,
    input  logic start, //div_en

    input  logic [1:0] div_ctrl,

    input  logic [D_WIDTH-1:0] numerator, //rd1
    input  logic [D_WIDTH-1:0] denominator, //rd2
    output logic [D_WIDTH-1:0] result,
    output logic division_done //busy
);

logic [5:0] counter;

typedef enum logic [1:0] {
    IDLE,
    INIT,
    DIVIDE,
    DONE
} state_t;

state_t state, next_state;

logic [D_WIDTH:0] rem;
logic [D_WIDTH-1:0] quo;
logic [D_WIDTH:0] den;

logic [5:0] counter;

logic sign_q;
logic sign_r;
logic is_signed;

assign is_signed = (div_ctrl == 2'b00) || (div_ctrl == 2'b10);

always_comb begin
        next_state = state;
        case (state)
            IDLE:   if (start) next_state = INIT;
            INIT:   next_state = DIVIDE;
            DIVIDE:    if (count == 6'd32) next_state = DONE;
            DONE: next_state = IDLE;
        endcase
end

always_ff @(posedge clk) begin
        if (start && state == IDLE)
            state <= INIT;
        else
            state <= next_state;
end

always_ff @(posedge clk) begin
    division_done <= 0;
    case (state)
        IDLE: begin
                counter <= 0;
        end
        INIT: begin
            rem <= 0;
            if (is_signed) begin
                sign_q <= numerator[31] ^ denominator[31];
                sign_r <= numerator[31];
                quo <= numerator[31] ? -numerator : numerator;
                den <= {1'b0, denominator[31] ? -denominator : denominator};
            end
            else begin
                sign_q <= 0;
                sign_r <= 0;
                quo <= numerator;
                den <= {1'b0, denominator};
            end
        end
        DIVIDE: begin
            rem <= rem << 1;
            rem[0] <= qup[D_WIDTH-1];
            quo <= quo << 1;
            quo[0] <= 1'b0; 
            if (rem >= den) begin
                quo[0] <= 1'b1;
                rem <= rem - den;
            end
            counter <= counter + 1;
        end
        DONE: begin
            division_done <= 1;
            case (div_ctrl)
                2'b00:  result <= sign_q ? -quo : quo;            // DIV
                2'b01:  result <= quo;                            // DIVU
                2'b10:  result <= sign_r ? -rem[W-1:0] : rem[W-1:0]; // REM
                2'b11:  result <= rem[W-1:0];                     // REMU
            endcase
        end
    endcase
end

endmodule
