// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff32.h for the primary calling header

#include "Vdff32___024root.h"
#include "Vdff32__Syms.h"

//==========

VL_INLINE_OPT void Vdff32___024root___combo__TOP__1(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Qbar = (1U & (~ (IData)(vlSelf->Q)));
    vlSelf->Q = ((IData)(vlSelf->Clk) ? (IData)(vlSelf->D)
                  : (IData)(vlSelf->Q));
}

void Vdff32___024root___eval(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___eval\n"); );
    // Body
    Vdff32___024root___combo__TOP__1(vlSelf);
}

QData Vdff32___024root___change_request_1(Vdff32___024root* vlSelf);

VL_INLINE_OPT QData Vdff32___024root___change_request(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___change_request\n"); );
    // Body
    return (Vdff32___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdff32___024root___change_request_1(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->Q ^ vlSelf->__Vchglast__TOP__Q));
    VL_DEBUG_IF( if(__req && ((vlSelf->Q ^ vlSelf->__Vchglast__TOP__Q))) VL_DBG_MSGF("        CHANGE: dff32.v:2: Q\n"); );
    // Final
    vlSelf->__Vchglast__TOP__Q = vlSelf->Q;
    return __req;
}

#ifdef VL_DEBUG
void Vdff32___024root___eval_debug_assertions(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->D & 0xfeU))) {
        Verilated::overWidthError("D");}
    if (VL_UNLIKELY((vlSelf->Clk & 0xfeU))) {
        Verilated::overWidthError("Clk");}
    if (VL_UNLIKELY((vlSelf->Reset & 0xfeU))) {
        Verilated::overWidthError("Reset");}
}
#endif  // VL_DEBUG
