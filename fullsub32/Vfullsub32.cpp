// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfullsub32.h"
#include "Vfullsub32__Syms.h"

//============================================================
// Constructors

Vfullsub32::Vfullsub32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vfullsub32__Syms(_vcontextp__, _vcname__, this)}
    , D{vlSymsp->TOP.D}
    , B{vlSymsp->TOP.B}
    , X{vlSymsp->TOP.X}
    , Y{vlSymsp->TOP.Y}
    , Z{vlSymsp->TOP.Z}
    , rootp{&(vlSymsp->TOP)}
{
}

Vfullsub32::Vfullsub32(const char* _vcname__)
    : Vfullsub32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vfullsub32::~Vfullsub32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfullsub32___024root___eval_initial(Vfullsub32___024root* vlSelf);
void Vfullsub32___024root___eval_settle(Vfullsub32___024root* vlSelf);
void Vfullsub32___024root___eval(Vfullsub32___024root* vlSelf);
QData Vfullsub32___024root___change_request(Vfullsub32___024root* vlSelf);
#ifdef VL_DEBUG
void Vfullsub32___024root___eval_debug_assertions(Vfullsub32___024root* vlSelf);
#endif  // VL_DEBUG
void Vfullsub32___024root___final(Vfullsub32___024root* vlSelf);

static void _eval_initial_loop(Vfullsub32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfullsub32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfullsub32___024root___eval_settle(&(vlSymsp->TOP));
        Vfullsub32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfullsub32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fullsub32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfullsub32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfullsub32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfullsub32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfullsub32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfullsub32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vfullsub32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("fullsub32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vfullsub32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vfullsub32::final() {
    Vfullsub32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vfullsub32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vfullsub32::name() const {
    return vlSymsp->name();
}
