// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinv11.h for the primary calling header

#include "Vinv11___024root.h"
#include "Vinv11__Syms.h"

//==========

VL_INLINE_OPT void Vinv11___024root___combo__TOP__1(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->inv_out = (1U & (~ (IData)(vlSelf->inv_in)));
}

void Vinv11___024root___eval(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___eval\n"); );
    // Body
    Vinv11___024root___combo__TOP__1(vlSelf);
}

QData Vinv11___024root___change_request_1(Vinv11___024root* vlSelf);

VL_INLINE_OPT QData Vinv11___024root___change_request(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___change_request\n"); );
    // Body
    return (Vinv11___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vinv11___024root___change_request_1(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vinv11___024root___eval_debug_assertions(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->inv_in & 0xfeU))) {
        Verilated::overWidthError("inv_in");}
}
#endif  // VL_DEBUG
