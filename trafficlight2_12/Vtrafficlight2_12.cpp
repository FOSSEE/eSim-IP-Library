// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrafficlight2_12.h"
#include "Vtrafficlight2_12__Syms.h"

//============================================================
// Constructors

Vtrafficlight2_12::Vtrafficlight2_12(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtrafficlight2_12__Syms(_vcontextp__, _vcname__, this)}
    , light_S1{vlSymsp->TOP.light_S1}
    , light_S2{vlSymsp->TOP.light_S2}
    , light_S3{vlSymsp->TOP.light_S3}
    , light_S4{vlSymsp->TOP.light_S4}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtrafficlight2_12::Vtrafficlight2_12(const char* _vcname__)
    : Vtrafficlight2_12(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtrafficlight2_12::~Vtrafficlight2_12() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrafficlight2_12___024root___eval_initial(Vtrafficlight2_12___024root* vlSelf);
void Vtrafficlight2_12___024root___eval_settle(Vtrafficlight2_12___024root* vlSelf);
void Vtrafficlight2_12___024root___eval(Vtrafficlight2_12___024root* vlSelf);
QData Vtrafficlight2_12___024root___change_request(Vtrafficlight2_12___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrafficlight2_12___024root___eval_debug_assertions(Vtrafficlight2_12___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrafficlight2_12___024root___final(Vtrafficlight2_12___024root* vlSelf);

static void _eval_initial_loop(Vtrafficlight2_12__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrafficlight2_12___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrafficlight2_12___024root___eval_settle(&(vlSymsp->TOP));
        Vtrafficlight2_12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtrafficlight2_12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("trafficlight2_12.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtrafficlight2_12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtrafficlight2_12::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrafficlight2_12::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrafficlight2_12___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrafficlight2_12___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtrafficlight2_12___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("trafficlight2_12.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtrafficlight2_12___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtrafficlight2_12::final() {
    Vtrafficlight2_12___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtrafficlight2_12::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtrafficlight2_12::name() const {
    return vlSymsp->name();
}
