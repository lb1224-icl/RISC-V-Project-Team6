// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmmu.h for the primary calling header

#include "verilated.h"

#include "Vmmu__Syms.h"
#include "Vmmu___024root.h"

void Vmmu___024root___ctor_var_reset(Vmmu___024root* vlSelf);

Vmmu___024root::Vmmu___024root(Vmmu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmmu___024root___ctor_var_reset(this);
}

void Vmmu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmmu___024root::~Vmmu___024root() {
}
