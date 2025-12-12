module fd(
    input  logic  eq,
    input  logic  branch_predicted,
    input  logic  jump,
    input  logic  branch,

    output logic flush
);

always_comb begin
    if (jump) begin
        flush = ~branch_predicted;
    end
    else if (branch) begin
        flush = !(eq == branch_predicted);
    end
    else begin
        flush = 0;
    end
end
endmodule
