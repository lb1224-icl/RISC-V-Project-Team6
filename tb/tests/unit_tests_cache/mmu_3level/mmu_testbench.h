#pragma once
#include <verilated.h>
#include "Vmmu.h"

class MmuTb {
public:
    Vmmu* top;
    vluint64_t cycles = 0;

    static const int MAX_WAIT = 200;

    MmuTb() { 
        top = new Vmmu; 
        top->mem_byte_en = 0;
    }
    ~MmuTb() { delete top; }

    // One tick = full clock cycle
    void tick() {
        top->clk = 0; top->eval(); cycles++;
        top->clk = 1; top->eval(); cycles++;
    }

    void reset() {
        top->clk = 0;
        top->rst = 1;
        top->mem_byte_en = 0;
        tick();
        tick();
        top->rst = 0;
        tick();
    }

    void writeWord(uint32_t addr, uint32_t data, uint8_t byte_en = 0xF) {
        top->mem_valid = 1;
        top->mem_we    = 1;
        top->mem_addr  = addr;
        top->mem_w_data = data;
        top->mem_byte_en = byte_en;

        tick();   

    }

    uint32_t readWord(uint32_t addr) {
        top->mem_valid = 1;
        top->mem_we    = 0;
        top->mem_addr  = addr;
        top->mem_byte_en = 0;

        tick();  

        int guard = 0;
        while (!top->mem_ready && guard < MAX_WAIT) {
            tick();
            guard++;
        }

        uint32_t r = top->mem_r_data;


        return r;
    }
};
