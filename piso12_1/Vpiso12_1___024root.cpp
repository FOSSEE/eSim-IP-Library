// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpiso12_1.h for the primary calling header

#include "Vpiso12_1___024root.h"
#include "Vpiso12_1__Syms.h"

//==========

VL_INLINE_OPT void Vpiso12_1___024root___sequent__TOP__1(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___sequent__TOP__1\n"); );
    // Variables
    SData/*9:0*/ __Vdly__piso12_1__DOT__tmp;
    // Body
    __Vdly__piso12_1__DOT__tmp = vlSelf->piso12_1__DOT__tmp;
    if (vlSelf->load) {
        __Vdly__piso12_1__DOT__tmp = vlSelf->Data_pr;
    } else {
        vlSelf->Data_sr = (1U & ((IData)(vlSelf->piso12_1__DOT__tmp) 
                                 >> 9U));
        __Vdly__piso12_1__DOT__tmp = (0x3feU & ((IData)(vlSelf->piso12_1__DOT__tmp) 
                                                << 1U));
    }
    vlSelf->piso12_1__DOT__tmp = __Vdly__piso12_1__DOT__tmp;
}

void Vpiso12_1___024root___eval(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpiso12_1___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vpiso12_1___024root___change_request_1(Vpiso12_1___024root* vlSelf);

VL_INLINE_OPT QData Vpiso12_1___024root___change_request(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___change_request\n"); );
    // Body
    return (Vpiso12_1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpiso12_1___024root___change_request_1(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpiso12_1___024root___eval_debug_assertions(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
    if (VL_UNLIKELY((vlSelf->Data_pr & 0xfc00U))) {
        Verilated::overWidthError("Data_pr");}
}
#endif  // VL_DEBUG
