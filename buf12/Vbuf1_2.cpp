// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbuf1_2.h"
#include "Vbuf1_2__Syms.h"

//============================================================
// Constructors

Vbuf1_2::Vbuf1_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vbuf1_2__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , y{vlSymsp->TOP.y}
    , ybar{vlSymsp->TOP.ybar}
    , rootp{&(vlSymsp->TOP)}
{
}

Vbuf1_2::Vbuf1_2(const char* _vcname__)
    : Vbuf1_2(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vbuf1_2::~Vbuf1_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbuf1_2___024root___eval_initial(Vbuf1_2___024root* vlSelf);
void Vbuf1_2___024root___eval_settle(Vbuf1_2___024root* vlSelf);
void Vbuf1_2___024root___eval(Vbuf1_2___024root* vlSelf);
QData Vbuf1_2___024root___change_request(Vbuf1_2___024root* vlSelf);
#ifdef VL_DEBUG
void Vbuf1_2___024root___eval_debug_assertions(Vbuf1_2___024root* vlSelf);
#endif  // VL_DEBUG
void Vbuf1_2___024root___final(Vbuf1_2___024root* vlSelf);

static void _eval_initial_loop(Vbuf1_2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbuf1_2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbuf1_2___024root___eval_settle(&(vlSymsp->TOP));
        Vbuf1_2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbuf1_2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("buf1_2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbuf1_2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbuf1_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbuf1_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbuf1_2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbuf1_2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbuf1_2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("buf1_2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbuf1_2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vbuf1_2::final() {
    Vbuf1_2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vbuf1_2::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vbuf1_2::name() const {
    return vlSymsp->name();
}
