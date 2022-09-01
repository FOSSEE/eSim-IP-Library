// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstaircase14.h"
#include "Vstaircase14__Syms.h"

//============================================================
// Constructors

Vstaircase14::Vstaircase14(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vstaircase14__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , val{vlSymsp->TOP.val}
    , rootp{&(vlSymsp->TOP)}
{
}

Vstaircase14::Vstaircase14(const char* _vcname__)
    : Vstaircase14(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vstaircase14::~Vstaircase14() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vstaircase14___024root___eval_initial(Vstaircase14___024root* vlSelf);
void Vstaircase14___024root___eval_settle(Vstaircase14___024root* vlSelf);
void Vstaircase14___024root___eval(Vstaircase14___024root* vlSelf);
QData Vstaircase14___024root___change_request(Vstaircase14___024root* vlSelf);
#ifdef VL_DEBUG
void Vstaircase14___024root___eval_debug_assertions(Vstaircase14___024root* vlSelf);
#endif  // VL_DEBUG
void Vstaircase14___024root___final(Vstaircase14___024root* vlSelf);

static void _eval_initial_loop(Vstaircase14__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vstaircase14___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vstaircase14___024root___eval_settle(&(vlSymsp->TOP));
        Vstaircase14___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vstaircase14___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("staircase14.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vstaircase14___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vstaircase14::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstaircase14::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstaircase14___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vstaircase14___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vstaircase14___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("staircase14.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vstaircase14___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vstaircase14::final() {
    Vstaircase14___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vstaircase14::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vstaircase14::name() const {
    return vlSymsp->name();
}
