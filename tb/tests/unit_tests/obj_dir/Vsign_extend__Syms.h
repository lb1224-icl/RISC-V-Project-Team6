// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIGN_EXTEND__SYMS_H_
#define VERILATED_VSIGN_EXTEND__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsign_extend.h"

// INCLUDE MODULE CLASSES
#include "Vsign_extend___024root.h"

// SYMS CLASS (contains all model state)
class Vsign_extend__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsign_extend* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsign_extend___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_sign_extend;

    // CONSTRUCTORS
    Vsign_extend__Syms(VerilatedContext* contextp, const char* namep, Vsign_extend* modelp);
    ~Vsign_extend__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
