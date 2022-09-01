// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwallacemul66.h"
#include "Vwallacemul66__Syms.h"

//============================================================
// Constructors

Vwallacemul66::Vwallacemul66(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vwallacemul66__Syms(_vcontextp__, _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , prod{vlSymsp->TOP.prod}
    , rootp{&(vlSymsp->TOP)}
{
}

Vwallacemul66::Vwallacemul66(const char* _vcname__)
    : Vwallacemul66(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vwallacemul66::~Vwallacemul66() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vwallacemul66___024root___eval_initial(Vwallacemul66___024root* vlSelf);
void Vwallacemul66___024root___eval_settle(Vwallacemul66___024root* vlSelf);
void Vwallacemul66___024root___eval(Vwallacemul66___024root* vlSelf);
QData Vwallacemul66___024root___change_request(Vwallacemul66___024root* vlSelf);
#ifdef VL_DEBUG
void Vwallacemul66___024root___eval_debug_assertions(Vwallacemul66___024root* vlSelf);
#endif  // VL_DEBUG
void Vwallacemul66___024root___final(Vwallacemul66___024root* vlSelf);

static void _eval_initial_loop(Vwallacemul66__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vwallacemul66___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vwallacemul66___024root___eval_settle(&(vlSymsp->TOP));
        Vwallacemul66___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vwallacemul66___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("wallacemul66.v", 67, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vwallacemul66___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vwallacemul66::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwallacemul66::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwallacemul66___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vwallacemul66___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vwallacemul66___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("wallacemul66.v", 67, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vwallacemul66___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vwallacemul66::final() {
    Vwallacemul66___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vwallacemul66::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vwallacemul66::name() const {
    return vlSymsp->name();
}
