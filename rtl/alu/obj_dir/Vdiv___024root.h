// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdiv.h for the primary calling header

#ifndef VERILATED_VDIV___024ROOT_H_
#define VERILATED_VDIV___024ROOT_H_  // guard

#include "verilated.h"


class Vdiv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdiv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    VL_IN8(div_ctrl,1,0);
    VL_OUT8(division_done,0,0);
    CData/*5:0*/ div__DOT__counter;
    CData/*1:0*/ div__DOT__state;
    CData/*1:0*/ div__DOT__next_state;
    CData/*0:0*/ div__DOT__sign_q;
    CData/*0:0*/ div__DOT__sign_r;
    CData/*0:0*/ div__DOT__is_signed;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(numerator,31,0);
    VL_IN(denominator,31,0);
    VL_OUT(result,31,0);
    IData/*31:0*/ div__DOT__quo;
    IData/*31:0*/ div__DOT__div_shift;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ div__DOT__rem;
    QData/*32:0*/ div__DOT__den;
    QData/*32:0*/ div__DOT__unnamedblk1__DOT__rem_next;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdiv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdiv___024root(Vdiv__Syms* symsp, const char* v__name);
    ~Vdiv___024root();
    VL_UNCOPYABLE(Vdiv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
