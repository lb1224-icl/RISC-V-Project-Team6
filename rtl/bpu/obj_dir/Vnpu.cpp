// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnpu.h"
#include "Vnpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnpu::Vnpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnpu__Syms(contextp(), _vcname__, this)}
    , flush{vlSymsp->TOP.flush}
    , branch_en{vlSymsp->TOP.branch_en}
    , branch_predicted{vlSymsp->TOP.branch_predicted}
    , pc_circuit{vlSymsp->TOP.pc_circuit}
    , pc_tu{vlSymsp->TOP.pc_tu}
    , pc_target{vlSymsp->TOP.pc_target}
    , pc_next{vlSymsp->TOP.pc_next}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnpu::Vnpu(const char* _vcname__)
    : Vnpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnpu::~Vnpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vnpu___024root___eval_initial(Vnpu___024root* vlSelf);
void Vnpu___024root___eval_settle(Vnpu___024root* vlSelf);
void Vnpu___024root___eval(Vnpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vnpu___024root___eval_debug_assertions(Vnpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpu___024root___final(Vnpu___024root* vlSelf);

static void _eval_initial_loop(Vnpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vnpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vnpu___024root___eval_settle(&(vlSymsp->TOP));
        Vnpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vnpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vnpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vnpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vnpu::final() {
    Vnpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnpu::hierName() const { return vlSymsp->name(); }
const char* Vnpu::modelName() const { return "Vnpu"; }
unsigned Vnpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vnpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnpu___024root__trace_init_top(Vnpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu___024root*>(voidSelf);
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vnpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vnpu___024root__trace_register(Vnpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
