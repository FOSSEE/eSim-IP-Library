// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux61.h"
#include "Vmux61__Syms.h"

//============================================================
// Constructors

Vmux61::Vmux61(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux61__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , d{vlSymsp->TOP.d}
    , s0{vlSymsp->TOP.s0}
    , s1{vlSymsp->TOP.s1}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux61::Vmux61(const char* _vcname__)
    : Vmux61(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux61::~Vmux61() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux61___024root___eval_initial(Vmux61___024root* vlSelf);
void Vmux61___024root___eval_settle(Vmux61___024root* vlSelf);
void Vmux61___024root___eval(Vmux61___024root* vlSelf);
QData Vmux61___024root___change_request(Vmux61___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux61___024root___eval_debug_assertions(Vmux61___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux61___024root___final(Vmux61___024root* vlSelf);

static void _eval_initial_loop(Vmux61__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux61___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux61___024root___eval_settle(&(vlSymsp->TOP));
        Vmux61___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux61___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux61.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux61___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux61::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux61::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux61___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux61___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux61___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux61.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux61___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmux61::final() {
    Vmux61___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmux61::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux61::name() const {
    return vlSymsp->name();
}
