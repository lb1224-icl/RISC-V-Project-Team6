module main_decoder (
    input  logic [31:25] funct7,
    input  logic [2:0]   funct3,
    input  logic [6:0]   opcode,
    input  logic         eq,

    output logic         pc_src,
    output logic [1:0]   result_src,
    output logic         mem_write,
    output logic         alu_src,
    output logic [2:0]   imm_src,
    output logic         reg_write,
    output logic [2:0]   alu_op
);

always_comb begin
    // -------- DEFAULT VALUES (prevents latches) --------
    pc_src     = 0;
    result_src = 0;
    mem_write  = 0;
    alu_src    = 0;
    imm_src    = 0;
    reg_write  = 0;
    alu_op     = 0;

    unique case (opcode)

        // ---------------------- R-type ----------------------
        7'd51: begin
            $display("Hit R %0d %0d", funct7, funct3);
            pc_src     = 0;
            result_src = 0; 
            mem_write  = 0;
            alu_src    = 0;
            reg_write  = 1;
            alu_op     = 2;    // ALU decider will choose ADD/SUB/etc.
        end

        // ---------------------- I-type LOAD ----------------------
        7'd3: begin
            $display("Hit I (load op) %0d %0d", funct7, funct3);
            pc_src     = 0;
            result_src = 1;    // from memory
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for address calculation
        end

        // ---------------------- I-type ALU ----------------------
        7'd19: begin
            $display("Hit I (logic op) %0d %0d", funct7, funct3);
            pc_src     = 0;
            result_src = 0;
            mem_write  = 0;
            alu_src    = 1;
            imm_src    = 0;
            reg_write  = 1;
            alu_op     = 2;    // handled in ALU decoder
        end

        // ---------------------- S-type STORE ----------------------
        7'd35: begin
            $display("Hit S %0d %0d", funct7, funct3);
            pc_src     = 0;
            mem_write  = 1;
            alu_src    = 1;
            imm_src    = 1;    // S-type immediate
            reg_write  = 0;
            alu_op     = 0;
        end

        // ---------------------- B-type BRANCH ----------------------
        7'd99: begin
            $display("Hit B %0d %0d", funct7, funct3);
            pc_src     = eq;   // branch taken?
            mem_write  = 0;
            alu_src    = 0;
            imm_src    = 2;    // B-type immediate
            reg_write  = 0;
            alu_op     = 1;    // SUB for compare
        end

        // ---------------------- JALR ----------------------
        7'd103: begin
            $display("Hit JALR %0d %0d", funct7, funct3);
            pc_src     = 1;
            result_src = 2;    // PC+4
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 3;    // J-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for PC = rs1 + imm
        end

        // ---------------------- JAL ----------------------
        7'd111: begin
            $display("Hit JAL %0d %0d", funct7, funct3);
            pc_src     = 1;
            result_src = 2;    // PC+4
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 3;    // J-type immediate
            reg_write  = 1;
        end

        // ---------------------- ALL ZERO ----------------------
        7'd0: begin
            $display("Hit a zero? %0d %0d", funct7, funct3);
        end

        // ---------------------- INVALID OPCODE ----------------------
        default: begin
            $display("ERROR: Invalid opcode %0d", opcode);
        end

    endcase
end

endmodule
