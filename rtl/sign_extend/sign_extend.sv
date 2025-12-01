module sign_extend #(
    WIDTH = 32
)(
    input logic  [2:0]             imm_src,  // type of instruction
    input logic  [WIDTH-1:0]       ins,      // entire instruction word
    output logic [WIDTH-1:0]       imm_op    // output sign extended imm
);

always_comb
case (imm_src)   // R type -> do no care as this instruction doesn't use immediates

    0:  begin if (ins[31])    // I type
            imm_op = {{WIDTH-12{1'b1}}, ins[31:20]};
        else 
            imm_op = {{WIDTH-12{1'b0}}, ins[31:20]};
    end
    1:  begin if (ins[31])    // S type
            imm_op = {{WIDTH-12{1'b1}}, ins[31:25], ins[11:7]};
        else 
            imm_op = {{WIDTH-12{1'b0}}, ins[31:20]};
    end
    2:  begin if (ins[31])    // B type
            imm_op = {{WIDTH-13{1'b1}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
        else 
            imm_op = {{WIDTH-13{1'b0}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
    end
    3:  begin if (ins[31])    // J type
            imm_op = {{WIDTH-21{1'b1}}, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};
        else 
            imm_op = {{WIDTH-21{1'b0}}, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};
    end
    4:  begin if (ins[31])    // U type
            imm_op = {{WIDTH-20{1'b1}}, ins[31:12]};
        else 
            imm_op = {{WIDTH-20{1'b0}}, ins[31:12]};
    end
    default: $error("Immediate Module Error: imm_src value outside of range!");

endcase

endmodule
