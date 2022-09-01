// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode48.h"
#include "Vdecode48__Syms.h"

//============================================================
// Constructors

Vdecode48::Vdecode48(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdecode48__Syms(_vcontextp__, _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , en{vlSymsp->TOP.en}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdecode48::Vdecode48(const char* _vcname__)
    : Vdecode48(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdecode48::~Vdecode48() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdecode48___024root___eval_initial(Vdecode48___024root* vlSelf);
void Vdecode48___024root___eval_settle(Vdecode48___024root* vlSelf);
void Vdecode48___024root___eval(Vdecode48___024root* vlSelf);
QData Vdecode48___024root___change_request(Vdecode48___024root* vlSelf);
#ifdef VL_DEBUG
void Vdecode48___024root___eval_debug_assertions(Vdecode48___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode48___024root___final(Vdecode48___024root* vlSelf);

static void _eval_initial_loop(Vdecode48__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdecode48___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdecode48___024root___eval_settle(&(vlSymsp->TOP));
        Vdecode48___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode48___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("decode48.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode48___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdecode48::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode48::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode48___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdecode48___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode48___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("decode48.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode48___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdecode48::final() {
    Vdecode48___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdecode48::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdecode48::name() const {
    return vlSymsp->name();
}
