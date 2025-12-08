module sign_extend #(
    WIDTH = 32
)(
    input logic  [2:0]             imm_src,  // type of instruction
    input logic  [WIDTH-1:0]       ins,      // entire instruction word
    output logic [WIDTH-1:0]       imm_op    // output sign extended imm
);

always_comb begin
    imm_op = '0;

    case (imm_src)
        // I-type (+jalr): imm[11:0] = ins[31:20]
        3'd0: imm_op = {{20{ins[31]}}, ins[31:20]};

        // S-type: imm = {ins[31:25], ins[11:7]}
        3'd1: imm_op = {{20{ins[31]}}, ins[31:25], ins[11:7]};

        // B-type: imm = {ins[31], ins[7], ins[30:25], ins[11:8], 0}
        3'd2: imm_op = {{19{ins[31]}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};

        // J-type: imm = {ins[31], ins[19:12], ins[20], ins[30:21], 0}
        3'd3: imm_op = {{11{ins[31]}}, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};

        // U-type: imm = ins[31:12] << 12
        3'd4: imm_op = {ins[31:12], 12'b0};

        default: $error("Immediate Module Error: imm_src value outside of range!");
    endcase

end


endmodule
