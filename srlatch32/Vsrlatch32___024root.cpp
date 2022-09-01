// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsrlatch32.h for the primary calling header

#include "Vsrlatch32___024root.h"
#include "Vsrlatch32__Syms.h"

//==========

VL_INLINE_OPT void Vsrlatch32___024root___combo__TOP__1(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Qn = (1U & (~ (((IData)(vlSelf->CLK) & (IData)(vlSelf->S)) 
                           | (IData)(vlSelf->Q))));
    vlSelf->Q = (1U & (~ (((IData)(vlSelf->CLK) & (IData)(vlSelf->R)) 
                          | (IData)(vlSelf->Qn))));
}

void Vsrlatch32___024root___eval(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___eval\n"); );
    // Body
    Vsrlatch32___024root___combo__TOP__1(vlSelf);
}

QData Vsrlatch32___024root___change_request_1(Vsrlatch32___024root* vlSelf);

VL_INLINE_OPT QData Vsrlatch32___024root___change_request(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___change_request\n"); );
    // Body
    return (Vsrlatch32___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsrlatch32___024root___change_request_1(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->Q ^ vlSelf->__Vchglast__TOP__Q));
    VL_DEBUG_IF( if(__req && ((vlSelf->Q ^ vlSelf->__Vchglast__TOP__Q))) VL_DBG_MSGF("        CHANGE: srlatch32.v:2: Q\n"); );
    // Final
    vlSelf->__Vchglast__TOP__Q = vlSelf->Q;
    return __req;
}

#ifdef VL_DEBUG
void Vsrlatch32___024root___eval_debug_assertions(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->S & 0xfeU))) {
        Verilated::overWidthError("S");}
    if (VL_UNLIKELY((vlSelf->R & 0xfeU))) {
        Verilated::overWidthError("R");}
}
#endif  // VL_DEBUG
