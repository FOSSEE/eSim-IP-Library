// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdff32.h"
#include "Vdff32__Syms.h"

//============================================================
// Constructors

Vdff32::Vdff32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdff32__Syms(_vcontextp__, _vcname__, this)}
    , Q{vlSymsp->TOP.Q}
    , Qbar{vlSymsp->TOP.Qbar}
    , D{vlSymsp->TOP.D}
    , Clk{vlSymsp->TOP.Clk}
    , Reset{vlSymsp->TOP.Reset}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdff32::Vdff32(const char* _vcname__)
    : Vdff32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdff32::~Vdff32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdff32___024root___eval_initial(Vdff32___024root* vlSelf);
void Vdff32___024root___eval_settle(Vdff32___024root* vlSelf);
void Vdff32___024root___eval(Vdff32___024root* vlSelf);
QData Vdff32___024root___change_request(Vdff32___024root* vlSelf);
#ifdef VL_DEBUG
void Vdff32___024root___eval_debug_assertions(Vdff32___024root* vlSelf);
#endif  // VL_DEBUG
void Vdff32___024root___final(Vdff32___024root* vlSelf);

static void _eval_initial_loop(Vdff32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdff32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdff32___024root___eval_settle(&(vlSymsp->TOP));
        Vdff32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdff32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dff32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdff32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdff32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdff32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdff32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdff32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdff32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dff32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdff32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdff32::final() {
    Vdff32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdff32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdff32::name() const {
    return vlSymsp->name();
}
