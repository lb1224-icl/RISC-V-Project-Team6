// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNPU__SYMS_H_
#define VERILATED_VNPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnpu.h"

// INCLUDE MODULE CLASSES
#include "Vnpu___024root.h"

// SYMS CLASS (contains all model state)
class Vnpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnpu___024root                 TOP;

    // CONSTRUCTORS
    Vnpu__Syms(VerilatedContext* contextp, const char* namep, Vnpu* modelp);
    ~Vnpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
