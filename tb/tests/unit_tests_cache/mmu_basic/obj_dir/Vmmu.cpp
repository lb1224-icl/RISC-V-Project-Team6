// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmmu.h"
#include "Vmmu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmmu::Vmmu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmmu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , mem_valid{vlSymsp->TOP.mem_valid}
    , mem_we{vlSymsp->TOP.mem_we}
    , mem_byte_en{vlSymsp->TOP.mem_byte_en}
    , mem_ready{vlSymsp->TOP.mem_ready}
    , cache_hit{vlSymsp->TOP.cache_hit}
    , mem_addr{vlSymsp->TOP.mem_addr}
    , mem_w_data{vlSymsp->TOP.mem_w_data}
    , mem_r_data{vlSymsp->TOP.mem_r_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmmu::Vmmu(const char* _vcname__)
    : Vmmu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmmu::~Vmmu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmmu___024root___eval_initial(Vmmu___024root* vlSelf);
void Vmmu___024root___eval_settle(Vmmu___024root* vlSelf);
void Vmmu___024root___eval(Vmmu___024root* vlSelf);
#ifdef VL_DEBUG
void Vmmu___024root___eval_debug_assertions(Vmmu___024root* vlSelf);
#endif  // VL_DEBUG
void Vmmu___024root___final(Vmmu___024root* vlSelf);

static void _eval_initial_loop(Vmmu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmmu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmmu___024root___eval_settle(&(vlSymsp->TOP));
        Vmmu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmmu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmmu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmmu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmmu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vmmu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmmu::final() {
    Vmmu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmmu::hierName() const { return vlSymsp->name(); }
const char* Vmmu::modelName() const { return "Vmmu"; }
unsigned Vmmu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmmu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmmu___024root__trace_init_top(Vmmu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmmu___024root*>(voidSelf);
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmmu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmmu___024root__trace_register(Vmmu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmmu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmmu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
