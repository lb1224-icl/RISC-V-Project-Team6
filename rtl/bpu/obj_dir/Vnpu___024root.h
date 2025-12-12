// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu.h for the primary calling header

#ifndef VERILATED_VNPU___024ROOT_H_
#define VERILATED_VNPU___024ROOT_H_  // guard

#include "verilated.h"

class Vnpu__Syms;

class Vnpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(flush,0,0);
    VL_IN8(branch_en,0,0);
    VL_OUT8(branch_predicted,0,0);
    VL_IN(pc_circuit,31,0);
    VL_IN(pc_tu,31,0);
    VL_IN(pc_target,31,0);
    VL_OUT(pc_next,31,0);

    // INTERNAL VARIABLES
    Vnpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpu___024root(Vnpu__Syms* symsp, const char* name);
    ~Vnpu___024root();
    VL_UNCOPYABLE(Vnpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
