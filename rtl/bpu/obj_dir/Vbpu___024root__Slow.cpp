// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpu.h for the primary calling header

#include "verilated.h"

#include "Vbpu__Syms.h"
#include "Vbpu___024root.h"

void Vbpu___024root___ctor_var_reset(Vbpu___024root* vlSelf);

Vbpu___024root::Vbpu___024root(Vbpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbpu___024root___ctor_var_reset(this);
}

void Vbpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbpu___024root::~Vbpu___024root() {
}
