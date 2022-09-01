// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpwm11.h"
#include "Vpwm11__Syms.h"

//============================================================
// Constructors

Vpwm11::Vpwm11(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vpwm11__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
}

Vpwm11::Vpwm11(const char* _vcname__)
    : Vpwm11(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vpwm11::~Vpwm11() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpwm11___024root___eval_initial(Vpwm11___024root* vlSelf);
void Vpwm11___024root___eval_settle(Vpwm11___024root* vlSelf);
void Vpwm11___024root___eval(Vpwm11___024root* vlSelf);
QData Vpwm11___024root___change_request(Vpwm11___024root* vlSelf);
#ifdef VL_DEBUG
void Vpwm11___024root___eval_debug_assertions(Vpwm11___024root* vlSelf);
#endif  // VL_DEBUG
void Vpwm11___024root___final(Vpwm11___024root* vlSelf);

static void _eval_initial_loop(Vpwm11__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpwm11___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpwm11___024root___eval_settle(&(vlSymsp->TOP));
        Vpwm11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpwm11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pwm11.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpwm11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpwm11::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpwm11::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpwm11___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpwm11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpwm11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pwm11.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpwm11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vpwm11::final() {
    Vpwm11___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vpwm11::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpwm11::name() const {
    return vlSymsp->name();
}
