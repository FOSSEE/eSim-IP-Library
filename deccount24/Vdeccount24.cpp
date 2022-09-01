// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdeccount24.h"
#include "Vdeccount24__Syms.h"

//============================================================
// Constructors

Vdeccount24::Vdeccount24(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdeccount24__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdeccount24::Vdeccount24(const char* _vcname__)
    : Vdeccount24(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdeccount24::~Vdeccount24() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdeccount24___024root___eval_initial(Vdeccount24___024root* vlSelf);
void Vdeccount24___024root___eval_settle(Vdeccount24___024root* vlSelf);
void Vdeccount24___024root___eval(Vdeccount24___024root* vlSelf);
QData Vdeccount24___024root___change_request(Vdeccount24___024root* vlSelf);
#ifdef VL_DEBUG
void Vdeccount24___024root___eval_debug_assertions(Vdeccount24___024root* vlSelf);
#endif  // VL_DEBUG
void Vdeccount24___024root___final(Vdeccount24___024root* vlSelf);

static void _eval_initial_loop(Vdeccount24__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdeccount24___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdeccount24___024root___eval_settle(&(vlSymsp->TOP));
        Vdeccount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdeccount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("deccount24.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdeccount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdeccount24::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdeccount24::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdeccount24___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdeccount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdeccount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("deccount24.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdeccount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdeccount24::final() {
    Vdeccount24___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdeccount24::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdeccount24::name() const {
    return vlSymsp->name();
}
