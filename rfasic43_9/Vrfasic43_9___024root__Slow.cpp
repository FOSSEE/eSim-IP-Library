// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrfasic43_9.h for the primary calling header

#include "Vrfasic43_9___024root.h"
#include "Vrfasic43_9__Syms.h"

//==========


void Vrfasic43_9___024root___ctor_var_reset(Vrfasic43_9___024root* vlSelf);

Vrfasic43_9___024root::Vrfasic43_9___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrfasic43_9___024root___ctor_var_reset(this);
}

void Vrfasic43_9___024root::__Vconfigure(Vrfasic43_9__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrfasic43_9___024root::~Vrfasic43_9___024root() {
}

void Vrfasic43_9___024root___initial__TOP__4(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___initial__TOP__4\n"); );
    // Body
    vlSelf->rfasic43_9__DOT__reg_trackaddress = 0U;
    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 0U;
    vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec = 0U;
    vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin = 0U;
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done = 0U;
    vlSelf->rfasic43_9__DOT__reg_q = 0U;
    vlSelf->rfasic43_9__DOT__reg_1minRecord = 0U;
    vlSelf->rfasic43_9__DOT__reg_d = 0U;
    vlSelf->rfasic43_9__DOT__reg_address = 0U;
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 0U;
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index = 0U;
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Data = 0U;
    vlSelf->rfasic43_9__DOT__reg_5minTransmit = 0U;
}

void Vrfasic43_9___024root___settle__TOP__5(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->rfasic43_9__DOT__reg_d = (((IData)(vlSelf->in_Sensor2) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->in_Sensor3) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->in_Sensor4) 
                                         << 8U) | (IData)(vlSelf->in_Sensor5))));
    vlSelf->rfasic43_9__DOT__reg_q = vlSelf->rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY
        [(0x7fU & (IData)(vlSelf->rfasic43_9__DOT__reg_address))];
}

void Vrfasic43_9___024root___eval_initial(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__in_Global_Clock = vlSelf->in_Global_Clock;
    vlSelf->__Vclklast__TOP__in_RST = vlSelf->in_RST;
    vlSelf->__Vclklast__TOP__in_Clk = vlSelf->in_Clk;
    Vrfasic43_9___024root___initial__TOP__4(vlSelf);
}

void Vrfasic43_9___024root___eval_settle(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___eval_settle\n"); );
    // Body
    Vrfasic43_9___024root___settle__TOP__5(vlSelf);
}

void Vrfasic43_9___024root___final(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___final\n"); );
}

void Vrfasic43_9___024root___ctor_var_reset(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in_Sensor1 = VL_RAND_RESET_I(8);
    vlSelf->in_Sensor2 = VL_RAND_RESET_I(8);
    vlSelf->in_Sensor3 = VL_RAND_RESET_I(8);
    vlSelf->in_Sensor4 = VL_RAND_RESET_I(8);
    vlSelf->in_Sensor5 = VL_RAND_RESET_I(8);
    vlSelf->in_Global_Clock = VL_RAND_RESET_I(1);
    vlSelf->in_Clk = VL_RAND_RESET_I(1);
    vlSelf->in_RST = VL_RAND_RESET_I(1);
    vlSelf->out_Light = VL_RAND_RESET_I(8);
    vlSelf->out_Tx_Serial = VL_RAND_RESET_I(1);
    vlSelf->rfasic43_9__DOT__reg_1minRecord = VL_RAND_RESET_I(1);
    vlSelf->rfasic43_9__DOT__reg_5minTransmit = VL_RAND_RESET_I(1);
    vlSelf->rfasic43_9__DOT__reg_address = VL_RAND_RESET_I(8);
    vlSelf->rfasic43_9__DOT__reg_d = VL_RAND_RESET_I(32);
    vlSelf->rfasic43_9__DOT__reg_q = VL_RAND_RESET_I(32);
    vlSelf->rfasic43_9__DOT__reg_Tx_8bitData = VL_RAND_RESET_I(8);
    vlSelf->rfasic43_9__DOT__reg_trackaddress = VL_RAND_RESET_I(8);
    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec = VL_RAND_RESET_I(6);
    vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin = VL_RAND_RESET_I(6);
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = VL_RAND_RESET_I(3);
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index = VL_RAND_RESET_I(3);
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Data = VL_RAND_RESET_I(8);
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = VL_RAND_RESET_I(3);
}
