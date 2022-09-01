// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsmlock31.h"
#include "Vfsmlock31__Syms.h"

//============================================================
// Constructors

Vfsmlock31::Vfsmlock31(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfsmlock31__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , din{vlSymsp->TOP.din}
    , pattern_detect{vlSymsp->TOP.pattern_detect}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfsmlock31::Vfsmlock31(const char* _vcname__)
    : Vfsmlock31(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfsmlock31::~Vfsmlock31() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfsmlock31___024root___eval_initial(Vfsmlock31___024root* vlSelf);
void Vfsmlock31___024root___eval_settle(Vfsmlock31___024root* vlSelf);
void Vfsmlock31___024root___eval(Vfsmlock31___024root* vlSelf);
QData Vfsmlock31___024root___change_request(Vfsmlock31___024root* vlSelf);
#ifdef VL_DEBUG
void Vfsmlock31___024root___eval_debug_assertions(Vfsmlock31___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsmlock31___024root___final(Vfsmlock31___024root* vlSelf);

static void _eval_initial_loop(Vfsmlock31__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfsmlock31___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfsmlock31___024root___eval_settle(&(vlSymsp->TOP));
        Vfsmlock31___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfsmlock31___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fsmlock31.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfsmlock31___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfsmlock31::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsmlock31::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsmlock31___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfsmlock31___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfsmlock31___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fsmlock31.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfsmlock31___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfsmlock31::final() {
    Vfsmlock31___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfsmlock31::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfsmlock31::name() const {
    return vlSymsp->name();
}
