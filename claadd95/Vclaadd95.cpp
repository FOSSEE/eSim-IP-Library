// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclaadd95.h"
#include "Vclaadd95__Syms.h"

//============================================================
// Constructors

Vclaadd95::Vclaadd95(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vclaadd95__Syms(_vcontextp__, _vcname__, this)}
    , sum{vlSymsp->TOP.sum}
    , c_out{vlSymsp->TOP.c_out}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c_in{vlSymsp->TOP.c_in}
    , rootp{&(vlSymsp->TOP)}
{
}

Vclaadd95::Vclaadd95(const char* _vcname__)
    : Vclaadd95(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vclaadd95::~Vclaadd95() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclaadd95___024root___eval_initial(Vclaadd95___024root* vlSelf);
void Vclaadd95___024root___eval_settle(Vclaadd95___024root* vlSelf);
void Vclaadd95___024root___eval(Vclaadd95___024root* vlSelf);
QData Vclaadd95___024root___change_request(Vclaadd95___024root* vlSelf);
#ifdef VL_DEBUG
void Vclaadd95___024root___eval_debug_assertions(Vclaadd95___024root* vlSelf);
#endif  // VL_DEBUG
void Vclaadd95___024root___final(Vclaadd95___024root* vlSelf);

static void _eval_initial_loop(Vclaadd95__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclaadd95___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclaadd95___024root___eval_settle(&(vlSymsp->TOP));
        Vclaadd95___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclaadd95___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("claadd95.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclaadd95___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vclaadd95::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclaadd95::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclaadd95___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclaadd95___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vclaadd95___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("claadd95.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vclaadd95___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vclaadd95::final() {
    Vclaadd95___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vclaadd95::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vclaadd95::name() const {
    return vlSymsp->name();
}
