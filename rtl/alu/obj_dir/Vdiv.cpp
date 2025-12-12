// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdiv__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdiv::Vdiv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdiv__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , div_ctrl{vlSymsp->TOP.div_ctrl}
    , division_done{vlSymsp->TOP.division_done}
    , numerator{vlSymsp->TOP.numerator}
    , denominator{vlSymsp->TOP.denominator}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdiv::Vdiv(const char* _vcname__)
    : Vdiv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdiv::~Vdiv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
void Vdiv___024root___eval_static(Vdiv___024root* vlSelf);
void Vdiv___024root___eval_initial(Vdiv___024root* vlSelf);
void Vdiv___024root___eval_settle(Vdiv___024root* vlSelf);
void Vdiv___024root___eval(Vdiv___024root* vlSelf);

void Vdiv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdiv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdiv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdiv___024root___eval_static(&(vlSymsp->TOP));
        Vdiv___024root___eval_initial(&(vlSymsp->TOP));
        Vdiv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdiv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdiv::eventsPending() { return false; }

uint64_t Vdiv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdiv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdiv___024root___eval_final(Vdiv___024root* vlSelf);

VL_ATTR_COLD void Vdiv::final() {
    Vdiv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdiv::hierName() const { return vlSymsp->name(); }
const char* Vdiv::modelName() const { return "Vdiv"; }
unsigned Vdiv::threads() const { return 1; }
void Vdiv::prepareClone() const { contextp()->prepareClone(); }
void Vdiv::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdiv::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdiv___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdiv___024root__trace_init_top(Vdiv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdiv___024root__trace_decl_types(tracep);
    Vdiv___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdiv___024root__trace_register(Vdiv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdiv::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdiv::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdiv___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
