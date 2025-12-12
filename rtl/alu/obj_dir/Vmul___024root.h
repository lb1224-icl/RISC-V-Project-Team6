// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024ROOT_H_
#define VERILATED_VMUL___024ROOT_H_  // guard

#include "verilated.h"

class Vmul__Syms;

class Vmul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(mul_ctrl,1,0);
    VL_IN(rd1,31,0);
    VL_IN(rd2,31,0);
    VL_OUT(result,31,0);
    QData/*63:0*/ mul__DOT__full_result;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024root(Vmul__Syms* symsp, const char* name);
    ~Vmul___024root();
    VL_UNCOPYABLE(Vmul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
