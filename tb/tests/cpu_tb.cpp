#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"

#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    Vcpu* cpu = new Vcpu;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    cpu->trace(tfp, 99);
    tfp->open("cpu.vcd");

    if (vbdOpen()!=1) return -1;
    vbdHeader("RISC-V CPU");
    vbdSetMode(1);

    cpu->clk = 0;
    cpu->rst = 1;
    cpu->eval();

    // Apply reset for 5 cycles
    for (int i = 0; i < 5; i++) {
        cpu->clk = 0; cpu->eval(); tfp->dump(i*2);
        cpu->clk = 1; cpu->eval(); tfp->dump(i*2+1);
    }
    cpu->rst = 0;

    for (int cyc = 0; cyc < MAX_SIM_CYC; cyc++) {

        // FALLING EDGE
        cpu->clk = 0;
        cpu->eval();
        tfp->dump(2*cyc);

        // RISING EDGE — PC updates here
        cpu->clk = 1;
        cpu->eval();
        tfp->dump(2*cyc+1);

        // Only log **once per cycle**, after rising edge
        uint32_t pc      = cpu->rootp->u_fetch__DOT__pc_f;
        uint32_t instr   = cpu->rootp->u_fetch__DOT__ins;

        vbdBar(cpu->a0);
        vbdCycle(cyc);

        printf("Cycle %d  PC=0x%08x  INS=0x%08x\n",
               cyc, pc, instr);

        if (Verilated::gotFinish() || vbdGetkey()=='q')
            break;
    }

    vbdClose();
    tfp->close();
    delete cpu;

    return 0;
}
