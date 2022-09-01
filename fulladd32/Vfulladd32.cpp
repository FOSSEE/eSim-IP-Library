// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfulladd32.h"
#include "Vfulladd32__Syms.h"

//============================================================
// Constructors

Vfulladd32::Vfulladd32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfulladd32__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c_in{vlSymsp->TOP.c_in}
    , s{vlSymsp->TOP.s}
    , c_out{vlSymsp->TOP.c_out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfulladd32::Vfulladd32(const char* _vcname__)
    : Vfulladd32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfulladd32::~Vfulladd32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfulladd32___024root___eval_initial(Vfulladd32___024root* vlSelf);
void Vfulladd32___024root___eval_settle(Vfulladd32___024root* vlSelf);
void Vfulladd32___024root___eval(Vfulladd32___024root* vlSelf);
QData Vfulladd32___024root___change_request(Vfulladd32___024root* vlSelf);
#ifdef VL_DEBUG
void Vfulladd32___024root___eval_debug_assertions(Vfulladd32___024root* vlSelf);
#endif  // VL_DEBUG
void Vfulladd32___024root___final(Vfulladd32___024root* vlSelf);

static void _eval_initial_loop(Vfulladd32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfulladd32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfulladd32___024root___eval_settle(&(vlSymsp->TOP));
        Vfulladd32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfulladd32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fulladd32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfulladd32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfulladd32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfulladd32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfulladd32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfulladd32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfulladd32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fulladd32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfulladd32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfulladd32::final() {
    Vfulladd32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfulladd32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfulladd32::name() const {
    return vlSymsp->name();
}
