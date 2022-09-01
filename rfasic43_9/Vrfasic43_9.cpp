// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrfasic43_9.h"
#include "Vrfasic43_9__Syms.h"

//============================================================
// Constructors

Vrfasic43_9::Vrfasic43_9(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrfasic43_9__Syms(_vcontextp__, _vcname__, this)}
    , in_Sensor1{vlSymsp->TOP.in_Sensor1}
    , in_Sensor2{vlSymsp->TOP.in_Sensor2}
    , in_Sensor3{vlSymsp->TOP.in_Sensor3}
    , in_Sensor4{vlSymsp->TOP.in_Sensor4}
    , in_Sensor5{vlSymsp->TOP.in_Sensor5}
    , in_Global_Clock{vlSymsp->TOP.in_Global_Clock}
    , in_Clk{vlSymsp->TOP.in_Clk}
    , in_RST{vlSymsp->TOP.in_RST}
    , out_Light{vlSymsp->TOP.out_Light}
    , out_Tx_Serial{vlSymsp->TOP.out_Tx_Serial}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrfasic43_9::Vrfasic43_9(const char* _vcname__)
    : Vrfasic43_9(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrfasic43_9::~Vrfasic43_9() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrfasic43_9___024root___eval_initial(Vrfasic43_9___024root* vlSelf);
void Vrfasic43_9___024root___eval_settle(Vrfasic43_9___024root* vlSelf);
void Vrfasic43_9___024root___eval(Vrfasic43_9___024root* vlSelf);
QData Vrfasic43_9___024root___change_request(Vrfasic43_9___024root* vlSelf);
#ifdef VL_DEBUG
void Vrfasic43_9___024root___eval_debug_assertions(Vrfasic43_9___024root* vlSelf);
#endif  // VL_DEBUG
void Vrfasic43_9___024root___final(Vrfasic43_9___024root* vlSelf);

static void _eval_initial_loop(Vrfasic43_9__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrfasic43_9___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrfasic43_9___024root___eval_settle(&(vlSymsp->TOP));
        Vrfasic43_9___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrfasic43_9___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rfasic43_9.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrfasic43_9___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrfasic43_9::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrfasic43_9::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrfasic43_9___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrfasic43_9___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrfasic43_9___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rfasic43_9.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrfasic43_9___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vrfasic43_9::final() {
    Vrfasic43_9___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vrfasic43_9::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrfasic43_9::name() const {
    return vlSymsp->name();
}
