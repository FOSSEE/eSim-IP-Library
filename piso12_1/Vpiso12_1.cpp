// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpiso12_1.h"
#include "Vpiso12_1__Syms.h"

//============================================================
// Constructors

Vpiso12_1::Vpiso12_1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vpiso12_1__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , load{vlSymsp->TOP.load}
    , Data_pr{vlSymsp->TOP.Data_pr}
    , Data_sr{vlSymsp->TOP.Data_sr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vpiso12_1::Vpiso12_1(const char* _vcname__)
    : Vpiso12_1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vpiso12_1::~Vpiso12_1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpiso12_1___024root___eval_initial(Vpiso12_1___024root* vlSelf);
void Vpiso12_1___024root___eval_settle(Vpiso12_1___024root* vlSelf);
void Vpiso12_1___024root___eval(Vpiso12_1___024root* vlSelf);
QData Vpiso12_1___024root___change_request(Vpiso12_1___024root* vlSelf);
#ifdef VL_DEBUG
void Vpiso12_1___024root___eval_debug_assertions(Vpiso12_1___024root* vlSelf);
#endif  // VL_DEBUG
void Vpiso12_1___024root___final(Vpiso12_1___024root* vlSelf);

static void _eval_initial_loop(Vpiso12_1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpiso12_1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpiso12_1___024root___eval_settle(&(vlSymsp->TOP));
        Vpiso12_1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpiso12_1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("piso12_1.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpiso12_1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpiso12_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpiso12_1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpiso12_1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpiso12_1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpiso12_1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("piso12_1.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpiso12_1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vpiso12_1::final() {
    Vpiso12_1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vpiso12_1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpiso12_1::name() const {
    return vlSymsp->name();
}
