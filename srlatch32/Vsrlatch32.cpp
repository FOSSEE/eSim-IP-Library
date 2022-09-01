// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsrlatch32.h"
#include "Vsrlatch32__Syms.h"

//============================================================
// Constructors

Vsrlatch32::Vsrlatch32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsrlatch32__Syms(_vcontextp__, _vcname__, this)}
    , Q{vlSymsp->TOP.Q}
    , Qn{vlSymsp->TOP.Qn}
    , CLK{vlSymsp->TOP.CLK}
    , S{vlSymsp->TOP.S}
    , R{vlSymsp->TOP.R}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsrlatch32::Vsrlatch32(const char* _vcname__)
    : Vsrlatch32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsrlatch32::~Vsrlatch32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsrlatch32___024root___eval_initial(Vsrlatch32___024root* vlSelf);
void Vsrlatch32___024root___eval_settle(Vsrlatch32___024root* vlSelf);
void Vsrlatch32___024root___eval(Vsrlatch32___024root* vlSelf);
QData Vsrlatch32___024root___change_request(Vsrlatch32___024root* vlSelf);
#ifdef VL_DEBUG
void Vsrlatch32___024root___eval_debug_assertions(Vsrlatch32___024root* vlSelf);
#endif  // VL_DEBUG
void Vsrlatch32___024root___final(Vsrlatch32___024root* vlSelf);

static void _eval_initial_loop(Vsrlatch32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsrlatch32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsrlatch32___024root___eval_settle(&(vlSymsp->TOP));
        Vsrlatch32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsrlatch32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("srlatch32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsrlatch32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsrlatch32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsrlatch32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsrlatch32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsrlatch32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsrlatch32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("srlatch32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsrlatch32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsrlatch32::final() {
    Vsrlatch32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsrlatch32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsrlatch32::name() const {
    return vlSymsp->name();
}
