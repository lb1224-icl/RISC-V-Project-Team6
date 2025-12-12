// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtuu.h"
#include "Vtuu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtuu::Vtuu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtuu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , eq{vlSymsp->TOP.eq}
    , jump{vlSymsp->TOP.jump}
    , branch{vlSymsp->TOP.branch}
    , branch_predicted_e{vlSymsp->TOP.branch_predicted_e}
    , branch_en{vlSymsp->TOP.branch_en}
    , flush{vlSymsp->TOP.flush}
    , ins{vlSymsp->TOP.ins}
    , pc{vlSymsp->TOP.pc}
    , pc_tu_i{vlSymsp->TOP.pc_tu_i}
    , pcplusimm_tu{vlSymsp->TOP.pcplusimm_tu}
    , pc_tu_o{vlSymsp->TOP.pc_tu_o}
    , pc_target{vlSymsp->TOP.pc_target}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtuu::Vtuu(const char* _vcname__)
    : Vtuu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtuu::~Vtuu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtuu___024root___eval_initial(Vtuu___024root* vlSelf);
void Vtuu___024root___eval_settle(Vtuu___024root* vlSelf);
void Vtuu___024root___eval(Vtuu___024root* vlSelf);
#ifdef VL_DEBUG
void Vtuu___024root___eval_debug_assertions(Vtuu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtuu___024root___final(Vtuu___024root* vlSelf);

static void _eval_initial_loop(Vtuu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtuu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtuu___024root___eval_settle(&(vlSymsp->TOP));
        Vtuu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtuu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtuu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtuu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtuu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtuu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtuu::final() {
    Vtuu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtuu::hierName() const { return vlSymsp->name(); }
const char* Vtuu::modelName() const { return "Vtuu"; }
unsigned Vtuu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtuu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtuu___024root__trace_init_top(Vtuu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtuu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtuu___024root*>(voidSelf);
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtuu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtuu___024root__trace_register(Vtuu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtuu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtuu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
