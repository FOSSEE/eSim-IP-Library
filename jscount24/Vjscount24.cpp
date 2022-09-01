// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjscount24.h"
#include "Vjscount24__Syms.h"

//============================================================
// Constructors

Vjscount24::Vjscount24(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vjscount24__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vjscount24::Vjscount24(const char* _vcname__)
    : Vjscount24(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vjscount24::~Vjscount24() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vjscount24___024root___eval_initial(Vjscount24___024root* vlSelf);
void Vjscount24___024root___eval_settle(Vjscount24___024root* vlSelf);
void Vjscount24___024root___eval(Vjscount24___024root* vlSelf);
QData Vjscount24___024root___change_request(Vjscount24___024root* vlSelf);
#ifdef VL_DEBUG
void Vjscount24___024root___eval_debug_assertions(Vjscount24___024root* vlSelf);
#endif  // VL_DEBUG
void Vjscount24___024root___final(Vjscount24___024root* vlSelf);

static void _eval_initial_loop(Vjscount24__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vjscount24___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vjscount24___024root___eval_settle(&(vlSymsp->TOP));
        Vjscount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjscount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jscount24.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjscount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjscount24::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjscount24::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjscount24___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vjscount24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vjscount24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jscount24.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vjscount24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vjscount24::final() {
    Vjscount24___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vjscount24::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vjscount24::name() const {
    return vlSymsp->name();
}
