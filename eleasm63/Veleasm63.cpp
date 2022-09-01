// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Veleasm63.h"
#include "Veleasm63__Syms.h"

//============================================================
// Constructors

Veleasm63::Veleasm63(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Veleasm63__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ra{vlSymsp->TOP.ra}
    , rb{vlSymsp->TOP.rb}
    , rc{vlSymsp->TOP.rc}
    , rd{vlSymsp->TOP.rd}
    , floor{vlSymsp->TOP.floor}
    , dir{vlSymsp->TOP.dir}
    , rootp{&(vlSymsp->TOP)}
{
}

Veleasm63::Veleasm63(const char* _vcname__)
    : Veleasm63(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Veleasm63::~Veleasm63() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Veleasm63___024root___eval_initial(Veleasm63___024root* vlSelf);
void Veleasm63___024root___eval_settle(Veleasm63___024root* vlSelf);
void Veleasm63___024root___eval(Veleasm63___024root* vlSelf);
QData Veleasm63___024root___change_request(Veleasm63___024root* vlSelf);
#ifdef VL_DEBUG
void Veleasm63___024root___eval_debug_assertions(Veleasm63___024root* vlSelf);
#endif  // VL_DEBUG
void Veleasm63___024root___final(Veleasm63___024root* vlSelf);

static void _eval_initial_loop(Veleasm63__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Veleasm63___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Veleasm63___024root___eval_settle(&(vlSymsp->TOP));
        Veleasm63___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Veleasm63___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("eleasm63.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Veleasm63___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Veleasm63::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Veleasm63::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Veleasm63___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Veleasm63___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Veleasm63___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("eleasm63.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Veleasm63___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Veleasm63::final() {
    Veleasm63___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Veleasm63::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Veleasm63::name() const {
    return vlSymsp->name();
}
