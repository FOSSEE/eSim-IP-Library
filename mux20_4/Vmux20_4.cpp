// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux20_4.h"
#include "Vmux20_4__Syms.h"

//============================================================
// Constructors

Vmux20_4::Vmux20_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux20_4__Syms(_vcontextp__, _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , s{vlSymsp->TOP.s}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux20_4::Vmux20_4(const char* _vcname__)
    : Vmux20_4(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux20_4::~Vmux20_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux20_4___024root___eval_initial(Vmux20_4___024root* vlSelf);
void Vmux20_4___024root___eval_settle(Vmux20_4___024root* vlSelf);
void Vmux20_4___024root___eval(Vmux20_4___024root* vlSelf);
QData Vmux20_4___024root___change_request(Vmux20_4___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux20_4___024root___eval_debug_assertions(Vmux20_4___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux20_4___024root___final(Vmux20_4___024root* vlSelf);

static void _eval_initial_loop(Vmux20_4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux20_4___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux20_4___024root___eval_settle(&(vlSymsp->TOP));
        Vmux20_4___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux20_4___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux20_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux20_4___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux20_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux20_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux20_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux20_4___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux20_4___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux20_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux20_4___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmux20_4::final() {
    Vmux20_4___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmux20_4::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux20_4::name() const {
    return vlSymsp->name();
}
