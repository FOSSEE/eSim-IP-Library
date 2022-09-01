// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfreq8div11.h"
#include "Vfreq8div11__Syms.h"

//============================================================
// Constructors

Vfreq8div11::Vfreq8div11(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfreq8div11__Syms(_vcontextp__, _vcname__, this)}
    , out_clk{vlSymsp->TOP.out_clk}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfreq8div11::Vfreq8div11(const char* _vcname__)
    : Vfreq8div11(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfreq8div11::~Vfreq8div11() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfreq8div11___024root___eval_initial(Vfreq8div11___024root* vlSelf);
void Vfreq8div11___024root___eval_settle(Vfreq8div11___024root* vlSelf);
void Vfreq8div11___024root___eval(Vfreq8div11___024root* vlSelf);
QData Vfreq8div11___024root___change_request(Vfreq8div11___024root* vlSelf);
#ifdef VL_DEBUG
void Vfreq8div11___024root___eval_debug_assertions(Vfreq8div11___024root* vlSelf);
#endif  // VL_DEBUG
void Vfreq8div11___024root___final(Vfreq8div11___024root* vlSelf);

static void _eval_initial_loop(Vfreq8div11__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfreq8div11___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfreq8div11___024root___eval_settle(&(vlSymsp->TOP));
        Vfreq8div11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfreq8div11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("freq8div11.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfreq8div11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfreq8div11::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfreq8div11::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfreq8div11___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfreq8div11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfreq8div11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("freq8div11.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfreq8div11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfreq8div11::final() {
    Vfreq8div11___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfreq8div11::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfreq8div11::name() const {
    return vlSymsp->name();
}
