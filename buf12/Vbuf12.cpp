// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbuf12.h"
#include "Vbuf12__Syms.h"

//============================================================
// Constructors

Vbuf12::Vbuf12(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vbuf12__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , y{vlSymsp->TOP.y}
    , ybar{vlSymsp->TOP.ybar}
    , rootp{&(vlSymsp->TOP)}
{
}

Vbuf12::Vbuf12(const char* _vcname__)
    : Vbuf12(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vbuf12::~Vbuf12() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbuf12___024root___eval_initial(Vbuf12___024root* vlSelf);
void Vbuf12___024root___eval_settle(Vbuf12___024root* vlSelf);
void Vbuf12___024root___eval(Vbuf12___024root* vlSelf);
QData Vbuf12___024root___change_request(Vbuf12___024root* vlSelf);
#ifdef VL_DEBUG
void Vbuf12___024root___eval_debug_assertions(Vbuf12___024root* vlSelf);
#endif  // VL_DEBUG
void Vbuf12___024root___final(Vbuf12___024root* vlSelf);

static void _eval_initial_loop(Vbuf12__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbuf12___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbuf12___024root___eval_settle(&(vlSymsp->TOP));
        Vbuf12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbuf12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("buf12.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbuf12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbuf12::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbuf12::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbuf12___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbuf12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vbuf12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("buf12.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vbuf12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vbuf12::final() {
    Vbuf12___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vbuf12::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vbuf12::name() const {
    return vlSymsp->name();
}
