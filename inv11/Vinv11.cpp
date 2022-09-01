// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinv11.h"
#include "Vinv11__Syms.h"

//============================================================
// Constructors

Vinv11::Vinv11(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vinv11__Syms(_vcontextp__, _vcname__, this)}
    , inv_out{vlSymsp->TOP.inv_out}
    , inv_in{vlSymsp->TOP.inv_in}
    , rootp{&(vlSymsp->TOP)}
{
}

Vinv11::Vinv11(const char* _vcname__)
    : Vinv11(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vinv11::~Vinv11() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vinv11___024root___eval_initial(Vinv11___024root* vlSelf);
void Vinv11___024root___eval_settle(Vinv11___024root* vlSelf);
void Vinv11___024root___eval(Vinv11___024root* vlSelf);
QData Vinv11___024root___change_request(Vinv11___024root* vlSelf);
#ifdef VL_DEBUG
void Vinv11___024root___eval_debug_assertions(Vinv11___024root* vlSelf);
#endif  // VL_DEBUG
void Vinv11___024root___final(Vinv11___024root* vlSelf);

static void _eval_initial_loop(Vinv11__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vinv11___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vinv11___024root___eval_settle(&(vlSymsp->TOP));
        Vinv11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vinv11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("inv11.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vinv11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vinv11::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinv11::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinv11___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vinv11___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vinv11___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("inv11.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vinv11___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vinv11::final() {
    Vinv11___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vinv11::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vinv11::name() const {
    return vlSymsp->name();
}
