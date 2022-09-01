// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcount24.h"
#include "Vcount24__Syms.h"

//============================================================
// Constructors

Vcount24::Vcount24(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcount24__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcount24::Vcount24(const char* _vcname__)
    : Vcount24(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcount24::~Vcount24() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcount24___024root___eval_initial(Vcount24___024root* vlSelf);
void Vcount24___024root___eval_settle(Vcount24___024root* vlSelf);
void Vcount24___024root___eval(Vcount24___024root* vlSelf);
QData Vcount24___024root___change_request(Vcount24___024root* vlSelf);
#ifdef VL_DEBUG
void Vcount24___024root___eval_debug_assertions(Vcount24___024root* vlSelf);
#endif  // VL_DEBUG
void Vcount24___024root___final(Vcount24___024root* vlSelf);

static void _eval_initial_loop(Vcount24__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcount24___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcount24___024root___eval_settle(&(vlSymsp->TOP));
        Vcount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("count24.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcount24::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcount24::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcount24___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("count24.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcount24::final() {
    Vcount24___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcount24::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcount24::name() const {
    return vlSymsp->name();
}
