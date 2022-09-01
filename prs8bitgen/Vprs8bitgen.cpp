// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprs8bitgen.h"
#include "Vprs8bitgen__Syms.h"

//============================================================
// Constructors

Vprs8bitgen::Vprs8bitgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vprs8bitgen__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vprs8bitgen::Vprs8bitgen(const char* _vcname__)
    : Vprs8bitgen(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vprs8bitgen::~Vprs8bitgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vprs8bitgen___024root___eval_initial(Vprs8bitgen___024root* vlSelf);
void Vprs8bitgen___024root___eval_settle(Vprs8bitgen___024root* vlSelf);
void Vprs8bitgen___024root___eval(Vprs8bitgen___024root* vlSelf);
QData Vprs8bitgen___024root___change_request(Vprs8bitgen___024root* vlSelf);
#ifdef VL_DEBUG
void Vprs8bitgen___024root___eval_debug_assertions(Vprs8bitgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vprs8bitgen___024root___final(Vprs8bitgen___024root* vlSelf);

static void _eval_initial_loop(Vprs8bitgen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vprs8bitgen___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vprs8bitgen___024root___eval_settle(&(vlSymsp->TOP));
        Vprs8bitgen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vprs8bitgen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("prs8bitgen.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vprs8bitgen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vprs8bitgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprs8bitgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprs8bitgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vprs8bitgen___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vprs8bitgen___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("prs8bitgen.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vprs8bitgen___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vprs8bitgen::final() {
    Vprs8bitgen___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vprs8bitgen::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vprs8bitgen::name() const {
    return vlSymsp->name();
}
