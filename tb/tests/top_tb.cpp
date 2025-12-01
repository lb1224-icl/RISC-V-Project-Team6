#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"

#include "vbuddy.cpp"    
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;       

  Verilated::commandArgs(argc, argv);
  Vcpu* cpu = new Vcpu;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  cpu->trace (tfp, 99);
  tfp->open ("cpu.vcd");
 
  if (vbdOpen()!=1) return(-1);
  vbdHeader("RISC-V:F1-Random");
  vbdSetMode(1);        

  cpu->clk = 1;
  
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      cpu->clk = !cpu->clk;
      cpu->eval ();
    } 

    vbdBar(cpu->fetch->u_pc_reg->ram_array[0]);
    vbdCycle(simcyc);

    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);
  }

  vbdClose();    
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}


