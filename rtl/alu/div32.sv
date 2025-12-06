module div32 #(
    parameter D_WIDTH = 32;
)
(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic sgn, // 0 = unsigned, 1 = signed
    input  logic signed [D_WIDTH-1:0] numerator,
    input  logic signed [D_WIDTH-1:0] denominator,
    output logic signed [D_WIDTH-1:0] quotient,
    output logic signed [32:0] remainder,
    output logic [1:0] state_out,
    output logic division_done
);

    localparam logic [1:0] IDLE = 2'b00;
    localparam logic [1:0] INIT = 2'b01;
    localparam logic [1:0] DIVIDE = 2'b10;
    localparam logic [1:0] DONE = 2'b11;

    logic [1:0] state;
    logic [5:0] counter;

    logic sign_quotient;
    logic sign_remainder;

    logic [32:0] remainder_tmp;
    logic [31:0] quotient_tmp;
    logic [32:0] denominator_tmp;

    assign state_out = state;

    always_ff @(posedge clk) begin
        if (rst) begin
            quotient <= D_WIDTH-1'b0;
            remainder <= 33'b0;
            state <= 2'b00;
            counter <= 6'b0;
            sign_quotient <= 1'b0;
            sign_remainder <= 1'b0;
            remainder_tmp <= 33'b0;
            quotient_tmp <= 32'b0;
            denominator_tmp <= 33'b0;
            division_done <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        state <= INIT;
                    end
                end

                INIT: begin
                    remainder_tmp <= 33'b0;

                    if (sgn) begin
                        quotient_tmp <= numerator[31] ? -numerator : numerator;
                        denominator_tmp[31:0] <= denominator[31] ? -denominator : denominator;
                        denominator_tmp[32] <= denominator[31] ? 1'b1 : 1'b0;
                    end else begin
                        quotient_tmp <= numerator;
                        denominator_tmp[31:0] <= denominator;
                        denominator_tmp[32] <= 1'b0;
                    end

                    sign_quotient <= numerator[31] ^ denominator[31];
                    sign_remainder <= numerator[31];

                    counter <= 6'd0;
                    state <= DIVIDE;
                    division_done <= 1'b0;
                end

                DIVIDE: begin
                    remainder_tmp = remainder_tmp << 1;
                    remainder_tmp[0] = quotient_tmp[31];
                    quotient_tmp = quotient_tmp << 1;

                    if (remainder_tmp >= denominator_tmp) begin
                        quotient_tmp[0] = 1'b1;
                        remainder_tmp = remainder_tmp - denominator_tmp;
                    end else begin
                        quotient_tmp[0] = 1'b0;
                    end

                    counter <= counter + 1'b1;
                    if (counter == 6'd31) begin
                        state <= DONE;
                    end
                end

                DONE: begin
                    if (sgn) begin
                        quotient <= sign_quotient ? -quotient_tmp : quotient_tmp;
                        remainder <= sign_remainder ? -remainder_tmp : remainder_tmp;
                    end else begin
                        quotient <= quotient_tmp;
                        remainder <= remainder_tmp;
                    end
                    division_done <= 1'b1;
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule