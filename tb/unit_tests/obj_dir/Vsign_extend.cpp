// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsign_extend.h"
#include "Vsign_extend__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsign_extend::Vsign_extend(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsign_extend__Syms(contextp(), _vcname__, this)}
    , imm_src{vlSymsp->TOP.imm_src}
    , ins{vlSymsp->TOP.ins}
    , imm_op{vlSymsp->TOP.imm_op}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsign_extend::Vsign_extend(const char* _vcname__)
    : Vsign_extend(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsign_extend::~Vsign_extend() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsign_extend___024root___eval_initial(Vsign_extend___024root* vlSelf);
void Vsign_extend___024root___eval_settle(Vsign_extend___024root* vlSelf);
void Vsign_extend___024root___eval(Vsign_extend___024root* vlSelf);
#ifdef VL_DEBUG
void Vsign_extend___024root___eval_debug_assertions(Vsign_extend___024root* vlSelf);
#endif  // VL_DEBUG
void Vsign_extend___024root___final(Vsign_extend___024root* vlSelf);

static void _eval_initial_loop(Vsign_extend__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsign_extend___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsign_extend___024root___eval_settle(&(vlSymsp->TOP));
        Vsign_extend___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsign_extend::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsign_extend::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsign_extend___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsign_extend___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsign_extend::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsign_extend::final() {
    Vsign_extend___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsign_extend::hierName() const { return vlSymsp->name(); }
const char* Vsign_extend::modelName() const { return "Vsign_extend"; }
unsigned Vsign_extend::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsign_extend::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsign_extend___024root__trace_init_top(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsign_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_extend___024root*>(voidSelf);
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsign_extend___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsign_extend___024root__trace_register(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsign_extend::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsign_extend___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
