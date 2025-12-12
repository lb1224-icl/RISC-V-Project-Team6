// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu.h for the primary calling header

#include "verilated.h"

#include "Vnpu__Syms.h"
#include "Vnpu___024root.h"

void Vnpu___024root___ctor_var_reset(Vnpu___024root* vlSelf);

Vnpu___024root::Vnpu___024root(Vnpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpu___024root___ctor_var_reset(this);
}

void Vnpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpu___024root::~Vnpu___024root() {
}
