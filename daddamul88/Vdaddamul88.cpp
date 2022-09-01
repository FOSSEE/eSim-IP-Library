// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdaddamul88.h"
#include "Vdaddamul88__Syms.h"

//============================================================
// Constructors

Vdaddamul88::Vdaddamul88(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdaddamul88__Syms(_vcontextp__, _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Y{vlSymsp->TOP.Y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdaddamul88::Vdaddamul88(const char* _vcname__)
    : Vdaddamul88(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdaddamul88::~Vdaddamul88() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdaddamul88___024root___eval_initial(Vdaddamul88___024root* vlSelf);
void Vdaddamul88___024root___eval_settle(Vdaddamul88___024root* vlSelf);
void Vdaddamul88___024root___eval(Vdaddamul88___024root* vlSelf);
QData Vdaddamul88___024root___change_request(Vdaddamul88___024root* vlSelf);
#ifdef VL_DEBUG
void Vdaddamul88___024root___eval_debug_assertions(Vdaddamul88___024root* vlSelf);
#endif  // VL_DEBUG
void Vdaddamul88___024root___final(Vdaddamul88___024root* vlSelf);

static void _eval_initial_loop(Vdaddamul88__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdaddamul88___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdaddamul88___024root___eval_settle(&(vlSymsp->TOP));
        Vdaddamul88___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdaddamul88___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("daddamul88.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdaddamul88___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdaddamul88::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdaddamul88::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdaddamul88___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdaddamul88___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdaddamul88___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("daddamul88.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdaddamul88___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdaddamul88::final() {
    Vdaddamul88___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdaddamul88::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdaddamul88::name() const {
    return vlSymsp->name();
}
