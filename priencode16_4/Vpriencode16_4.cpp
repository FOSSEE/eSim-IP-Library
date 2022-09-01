// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpriencode16_4.h"
#include "Vpriencode16_4__Syms.h"

//============================================================
// Constructors

Vpriencode16_4::Vpriencode16_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vpriencode16_4__Syms(_vcontextp__, _vcname__, this)}
    , out{vlSymsp->TOP.out}
    , i{vlSymsp->TOP.i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vpriencode16_4::Vpriencode16_4(const char* _vcname__)
    : Vpriencode16_4(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vpriencode16_4::~Vpriencode16_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpriencode16_4___024root___eval_initial(Vpriencode16_4___024root* vlSelf);
void Vpriencode16_4___024root___eval_settle(Vpriencode16_4___024root* vlSelf);
void Vpriencode16_4___024root___eval(Vpriencode16_4___024root* vlSelf);
QData Vpriencode16_4___024root___change_request(Vpriencode16_4___024root* vlSelf);
#ifdef VL_DEBUG
void Vpriencode16_4___024root___eval_debug_assertions(Vpriencode16_4___024root* vlSelf);
#endif  // VL_DEBUG
void Vpriencode16_4___024root___final(Vpriencode16_4___024root* vlSelf);

static void _eval_initial_loop(Vpriencode16_4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpriencode16_4___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpriencode16_4___024root___eval_settle(&(vlSymsp->TOP));
        Vpriencode16_4___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpriencode16_4___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("priencode16_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpriencode16_4___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpriencode16_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpriencode16_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpriencode16_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpriencode16_4___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpriencode16_4___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("priencode16_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpriencode16_4___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vpriencode16_4::final() {
    Vpriencode16_4___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vpriencode16_4::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpriencode16_4::name() const {
    return vlSymsp->name();
}
