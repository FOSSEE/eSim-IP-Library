// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram6t23.h for the primary calling header

#include "Vsram6t23___024root.h"
#include "Vsram6t23__Syms.h"

//==========

VL_INLINE_OPT void Vsram6t23___024root___combo__TOP__1(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___combo__TOP__1\n"); );
    // Body
    if (vlSelf->wen) {
        vlSelf->q = vlSelf->din;
    }
}

void Vsram6t23___024root___eval(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___eval\n"); );
    // Body
    Vsram6t23___024root___combo__TOP__1(vlSelf);
}

QData Vsram6t23___024root___change_request_1(Vsram6t23___024root* vlSelf);

VL_INLINE_OPT QData Vsram6t23___024root___change_request(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___change_request\n"); );
    // Body
    return (Vsram6t23___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsram6t23___024root___change_request_1(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsram6t23___024root___eval_debug_assertions(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->din & 0xfeU))) {
        Verilated::overWidthError("din");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
