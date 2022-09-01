// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vasyupcnt58.h"
#include "Vasyupcnt58__Syms.h"

//============================================================
// Constructors

Vasyupcnt58::Vasyupcnt58(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vasyupcnt58__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , q{vlSymsp->TOP.q}
    , qb{vlSymsp->TOP.qb}
    , rootp{&(vlSymsp->TOP)}
{
}

Vasyupcnt58::Vasyupcnt58(const char* _vcname__)
    : Vasyupcnt58(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vasyupcnt58::~Vasyupcnt58() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vasyupcnt58___024root___eval_initial(Vasyupcnt58___024root* vlSelf);
void Vasyupcnt58___024root___eval_settle(Vasyupcnt58___024root* vlSelf);
void Vasyupcnt58___024root___eval(Vasyupcnt58___024root* vlSelf);
QData Vasyupcnt58___024root___change_request(Vasyupcnt58___024root* vlSelf);
#ifdef VL_DEBUG
void Vasyupcnt58___024root___eval_debug_assertions(Vasyupcnt58___024root* vlSelf);
#endif  // VL_DEBUG
void Vasyupcnt58___024root___final(Vasyupcnt58___024root* vlSelf);

static void _eval_initial_loop(Vasyupcnt58__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vasyupcnt58___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vasyupcnt58___024root___eval_settle(&(vlSymsp->TOP));
        Vasyupcnt58___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vasyupcnt58___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("asyupcnt58.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vasyupcnt58___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vasyupcnt58::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vasyupcnt58::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vasyupcnt58___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vasyupcnt58___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vasyupcnt58___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("asyupcnt58.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vasyupcnt58___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vasyupcnt58::final() {
    Vasyupcnt58___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vasyupcnt58::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vasyupcnt58::name() const {
    return vlSymsp->name();
}
