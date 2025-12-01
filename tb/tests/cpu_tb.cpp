#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"

#include <chrono>
#include <thread>

#include "vbuddy.cpp"

#define MAX_SIM_CYC 100

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

        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        // FALLING EDGE
        cpu->clk = 0;
        cpu->eval();
        tfp->dump(2*cyc);

        // RISING EDGE — PC updates here
        cpu->clk = 1;
        cpu->eval();
        tfp->dump(2*cyc+1);

        vbdBar(cpu->a0 & 0xFF);
        vbdCycle(cyc);

        printf("Cycle %d\n",
               cyc);

        if (Verilated::gotFinish() || vbdGetkey()=='q')
            break;
    }

    vbdClose();
    tfp->close();
    delete cpu;

    return 0;
}
