///table update unit
module tuu #(
    parameter WIDTH = 32
) (
    input  logic             clk,
    input  logic             rst,
    input  logic [WIDTH-1:0] ins,        ///next pc
    input  logic [WIDTH-1:0] pc,         ///next pc
    input  logic [WIDTH-1:0] pc_tu_i,    ///cache
    input  logic [WIDTH-1:0] pcplusimm_tu,///cache
    input  logic             eq,         ///cache
    input  logic             jump,  ///cache
    input  logic             branch,
    input  logic             branch_predicted_e,
    output logic [WIDTH-1:0] pc_tu_o,    ///next pc for flush
    output logic             branch_en,  ///next pc
    output logic [WIDTH-1:0] pc_target,   ///next pc
    output logic             flush
);

logic b_or_j;
logic [1:0] state_wr_int1;
logic [1:0] next_state;
logic [1:0] state_rd_intermediate;
logic hit1;
logic hit2;
logic write_en;

logic [WIDTH-1:0] pc_intermediate;
logic             is_jal;
logic             is_branch;
logic [WIDTH-1:0] jal_imm;
logic [WIDTH-1:0] branch_imm;
logic [WIDTH-1:0] jal_target;
logic [WIDTH-1:0] branch_target;
logic [WIDTH-1:0] pc_target_mux_in0;

///flush decider (fd.sv)
fd FD(
    .eq(eq),
    .branch_predicted(branch_predicted_e),
    .jump(jump),
    .branch(branch),
    .flush(flush)
);

assign pc_tu_o = pc_tu_i;
assign write_en = (jump||branch);

///Next PC logic
always_comb begin
    b_or_j = (ins[6:0] == 7'b1100011) ||  // BEQ / B-type
             (ins[6:0] == 7'b1101111);     // JAL
             // JALR (7'b1100111) excluded - target is register-dependent, cannot be predicted
    is_jal = (ins[6:0] == 7'b1101111);     // JAL
    is_branch = (ins[6:0] == 7'b1100011);  // B-type
end

// Extract JAL immediate from instruction (J-type: imm[20|10:1|11|19:12])
// Format matches sign_extend.sv: {{11{ins[31]}}, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0}
always_comb begin
    jal_imm = {{11{ins[31]}}, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};
end

// Extract B-type branch immediate from instruction
// Format matches sign_extend.sv: {{19{ins[31]}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0}
always_comb begin
    branch_imm = {{19{ins[31]}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
end

// Compute JAL target: pc + jal_imm
assign jal_target = pc + jal_imm;

// Compute branch target: pc + branch_imm
assign branch_target = pc + branch_imm;

cache bp_cache (
    .clk(clk), //negative edge
    .reset(rst),
    .wr_addr(pc_tu_i),        // full address
    .rd_addr(pc),
    .data_in0(pc_tu_i),   // first 32-bit number
    .data_in1(pcplusimm_tu),   // second 32-bit number
    .data_in2(next_state),   // 2-bit state
    .write_en(write_en),  // write enable
    .data_out1(pc_intermediate), // second 16-bit number output
    .data_out2(state_rd_intermediate), // extra 2-bit output
    .data_out3(state_wr_int1),
    .hit1(hit1),
    .hit2(hit2)
);

// For JAL without cache hit, use computed target. For branches without hit, use computed branch target.
// Note: Even if we predict "not taken", we compute the target so it's available for flush correction.
assign pc_target_mux_in0 = is_jal ? jal_target : (is_branch ? branch_target : pc);

mux_2 pc_mux (
    .in0(pc_target_mux_in0),
    .in1(pc_intermediate),
    .sel(hit1),
    .out(pc_target)
);

// JAL should always be predicted as taken (branch_en = 1)
// For branches, use cache state if hit
// For branches without cache hit, predict based on branch direction:
//   - Backward branches (negative immediate, typical for loops) -> predict taken
//   - Forward branches (positive immediate) -> predict not taken
logic is_backward_branch;
assign is_backward_branch = is_branch && branch_imm[31]; // Negative immediate = backward branch

assign branch_en = is_jal ? 1'b1 : 
                   ((b_or_j && hit1) ? state_rd_intermediate[1] : 
                    (is_backward_branch ? 1'b1 : 1'b0)); // Predict backward branches as taken

always_comb begin
    next_state = state_wr_int1; // no update
    if (write_en) begin
        if (!hit2) begin
            // For new entries: JAL is always taken, branches depend on eq
            if (jump && !branch) begin
                // JAL: always initialize to strongly taken
                next_state = 2'b11;
            end else begin
                // Branch: initialize based on actual outcome
                // For loops, branches are almost always taken, so initialize to strongly taken if taken
                case (eq)
                    1'b0: next_state = 2'b00;  // Not taken: weakly not taken
                    1'b1: next_state = 2'b11;  // Taken: strongly taken (for loops)
                endcase
            end
        end
        else begin
            if (!eq) begin // NOT TAKEN
                case (state_wr_int1)
                    2'b01: next_state = 2'b01;
                    2'b00: next_state = 2'b01;
                    2'b10: next_state = 2'b00;
                    2'b11: next_state = 2'b10;
                endcase
            end 
            else begin // TAKEN
                case (state_wr_int1)
                    2'b01: next_state = 2'b00;
                    2'b00: next_state = 2'b10;
                    2'b10: next_state = 2'b11;
                    2'b11: next_state = 2'b11;
                endcase
            end
        end
    end
end

///if b_or_j == 1, look through cache to find PC tag entry
///if it exists, set branch_en to whatever the cashe entry enable is
///and set pc_target to whatever is in the cache
///if not, set branch_en to low
///and set pc_target to pc

///table update logic
///if cu_branch is high
///check pc_tu_i
///if pc_tu_i is in the table
///update state in cache according to eq (actual branch taken)
///if pc_tu_i is not in the table
///change the entry of PC_tu_i tag with pc_tu_i, pc_imm_tu, valid, and state (eq)


endmodule
