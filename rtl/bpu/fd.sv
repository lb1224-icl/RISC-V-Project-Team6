module fd(
    input  logic  eq,
    input  logic  branch_predicted,

    output logic flush
);

assign flush = eq ^ branch_predicted;

endmodule
