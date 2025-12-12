// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtuu.h for the primary calling header

#include "verilated.h"

#include "Vtuu__Syms.h"
#include "Vtuu___024root.h"

void Vtuu___024root___ctor_var_reset(Vtuu___024root* vlSelf);

Vtuu___024root::Vtuu___024root(Vtuu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtuu___024root___ctor_var_reset(this);
}

void Vtuu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtuu___024root::~Vtuu___024root() {
}
