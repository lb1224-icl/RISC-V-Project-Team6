module division #(
    parameter W = 32
)(
    input  logic clk,
    input  logic start, //div_en

    input  logic [1:0] div_ctrl,     // 00=DIV, 01=DIVU, 10=REM, 11=REMU

    input  logic [W-1:0] numerator,
    input  logic [W-1:0] denominator,

    output logic [W-1:0] result,
    output logic division_done
);

    // ----------- FSM States -----------
    typedef enum logic [1:0] {IDLE, INIT, DIVIDE, DONE} state_t;
    state_t state, next_state;

    // ----------- Internal registers -----------
    logic [W:0] rem;
    logic [W-1:0] quo;
    logic [W:0] den;

    logic [5:0] counter;

    logic sign_q, sign_r;
    logic is_signed;

    assign is_signed = (div_ctrl == 2'b00) || (div_ctrl == 2'b10);

    // ---------- Next state logic ----------
    always_comb begin
        next_state = state;
        case (state)
            IDLE:   if (start) next_state = INIT;
            INIT:   next_state = DIVIDE;
            DIVIDE: if (counter == 6'd32) next_state = DONE;
            DONE:   next_state = IDLE;
        endcase
    end

    // ---------- State register ----------
    always_ff @(posedge clk) begin
        if (start && state == IDLE)
            state <= INIT;
        else
            state <= next_state;
    end

    // ---------- Main logic ----------
    always_ff @(posedge clk) begin
        division_done <= 0;

        case (state)

            //--------------------------------
            // IDLE
            //--------------------------------
            IDLE: begin
                counter <= 0;
            end

            //--------------------------------
            // INIT
            //--------------------------------
            INIT: begin
                counter <= 0;
                rem <= 0;

                // Signed support
                if (is_signed) begin
                    sign_q <= numerator[31] ^ denominator[31];
                    sign_r <= numerator[31];

                    quo <= numerator[31] ? -numerator : numerator;
                    den <= {1'b0, denominator[31] ? -denominator : denominator};
                end else begin
                    sign_q <= 0;
                    sign_r <= 0;

                    quo <= numerator;
                    den <= {1'b0, denominator};
                end
            end

            //--------------------------------
            // DIVIDE
            //--------------------------------
            DIVIDE: begin
                // Shift left
                rem <= {rem[W-1:0], quo[W-1]};
                quo <= {quo[W-2:0], 1'b0};

                // Subtract if >= den
                if (rem >= den) begin
                    rem <= rem - den;
                    quo[0] <= 1'b1;
                end

                counter <= counter + 1;
            end

            //--------------------------------
            // DONE (sign correction + output)
            //--------------------------------
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
