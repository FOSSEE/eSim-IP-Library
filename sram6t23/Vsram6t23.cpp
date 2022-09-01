// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsram6t23.h"
#include "Vsram6t23__Syms.h"

//============================================================
// Constructors

Vsram6t23::Vsram6t23(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsram6t23__Syms(_vcontextp__, _vcname__, this)}
    , din{vlSymsp->TOP.din}
    , wen{vlSymsp->TOP.wen}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsram6t23::Vsram6t23(const char* _vcname__)
    : Vsram6t23(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsram6t23::~Vsram6t23() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsram6t23___024root___eval_initial(Vsram6t23___024root* vlSelf);
void Vsram6t23___024root___eval_settle(Vsram6t23___024root* vlSelf);
void Vsram6t23___024root___eval(Vsram6t23___024root* vlSelf);
QData Vsram6t23___024root___change_request(Vsram6t23___024root* vlSelf);
#ifdef VL_DEBUG
void Vsram6t23___024root___eval_debug_assertions(Vsram6t23___024root* vlSelf);
#endif  // VL_DEBUG
void Vsram6t23___024root___final(Vsram6t23___024root* vlSelf);

static void _eval_initial_loop(Vsram6t23__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsram6t23___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsram6t23___024root___eval_settle(&(vlSymsp->TOP));
        Vsram6t23___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsram6t23___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sram6t23.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsram6t23___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsram6t23::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsram6t23::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsram6t23___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsram6t23___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsram6t23___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sram6t23.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsram6t23___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsram6t23::final() {
    Vsram6t23___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsram6t23::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsram6t23::name() const {
    return vlSymsp->name();
}
