// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdlatch31.h"
#include "Vdlatch31__Syms.h"

//============================================================
// Constructors

Vdlatch31::Vdlatch31(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdlatch31__Syms(_vcontextp__, _vcname__, this)}
    , d{vlSymsp->TOP.d}
    , en{vlSymsp->TOP.en}
    , rstn{vlSymsp->TOP.rstn}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdlatch31::Vdlatch31(const char* _vcname__)
    : Vdlatch31(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdlatch31::~Vdlatch31() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdlatch31___024root___eval_initial(Vdlatch31___024root* vlSelf);
void Vdlatch31___024root___eval_settle(Vdlatch31___024root* vlSelf);
void Vdlatch31___024root___eval(Vdlatch31___024root* vlSelf);
QData Vdlatch31___024root___change_request(Vdlatch31___024root* vlSelf);
#ifdef VL_DEBUG
void Vdlatch31___024root___eval_debug_assertions(Vdlatch31___024root* vlSelf);
#endif  // VL_DEBUG
void Vdlatch31___024root___final(Vdlatch31___024root* vlSelf);

static void _eval_initial_loop(Vdlatch31__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdlatch31___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdlatch31___024root___eval_settle(&(vlSymsp->TOP));
        Vdlatch31___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdlatch31___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dlatch31.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdlatch31___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdlatch31::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdlatch31::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdlatch31___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdlatch31___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdlatch31___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("dlatch31.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdlatch31___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdlatch31::final() {
    Vdlatch31___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdlatch31::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdlatch31::name() const {
    return vlSymsp->name();
}
