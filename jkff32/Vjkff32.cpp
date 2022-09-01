// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjkff32.h"
#include "Vjkff32__Syms.h"

//============================================================
// Constructors

Vjkff32::Vjkff32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjkff32__Syms(_vcontextp__, _vcname__, this)}
    , j{vlSymsp->TOP.j}
    , k{vlSymsp->TOP.k}
    , clk{vlSymsp->TOP.clk}
    , q{vlSymsp->TOP.q}
    , qb{vlSymsp->TOP.qb}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjkff32::Vjkff32(const char* _vcname__)
    : Vjkff32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjkff32::~Vjkff32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjkff32___024root___eval_initial(Vjkff32___024root* vlSelf);
void Vjkff32___024root___eval_settle(Vjkff32___024root* vlSelf);
void Vjkff32___024root___eval(Vjkff32___024root* vlSelf);
QData Vjkff32___024root___change_request(Vjkff32___024root* vlSelf);
#ifdef VL_DEBUG
void Vjkff32___024root___eval_debug_assertions(Vjkff32___024root* vlSelf);
#endif  // VL_DEBUG
void Vjkff32___024root___final(Vjkff32___024root* vlSelf);

static void _eval_initial_loop(Vjkff32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjkff32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjkff32___024root___eval_settle(&(vlSymsp->TOP));
        Vjkff32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjkff32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jkff32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjkff32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjkff32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjkff32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjkff32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjkff32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjkff32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jkff32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjkff32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjkff32::final() {
    Vjkff32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjkff32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjkff32::name() const {
    return vlSymsp->name();
}
