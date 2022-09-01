// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdlatch31.h for the primary calling header

#include "Vdlatch31___024root.h"
#include "Vdlatch31__Syms.h"

//==========

VL_INLINE_OPT void Vdlatch31___024root___combo__TOP__1(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___combo__TOP__1\n"); );
    // Body
    if (vlSelf->rstn) {
        if (vlSelf->en) {
            vlSelf->q = vlSelf->d;
        }
    } else {
        vlSelf->q = 0U;
    }
}

void Vdlatch31___024root___eval(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___eval\n"); );
    // Body
    Vdlatch31___024root___combo__TOP__1(vlSelf);
}

QData Vdlatch31___024root___change_request_1(Vdlatch31___024root* vlSelf);

VL_INLINE_OPT QData Vdlatch31___024root___change_request(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___change_request\n"); );
    // Body
    return (Vdlatch31___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdlatch31___024root___change_request_1(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdlatch31___024root___eval_debug_assertions(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
