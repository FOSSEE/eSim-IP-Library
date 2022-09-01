// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprs8bitgen.h for the primary calling header

#include "Vprs8bitgen___024root.h"
#include "Vprs8bitgen__Syms.h"

//==========

VL_INLINE_OPT void Vprs8bitgen___024root___sequent__TOP__1(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vdly__prs8bitgen__DOT__sr;
    // Body
    __Vdly__prs8bitgen__DOT__sr = vlSelf->prs8bitgen__DOT__sr;
    if (vlSelf->rst) {
        __Vdly__prs8bitgen__DOT__sr = 0xaaU;
        vlSelf->out = 0U;
    } else {
        __Vdly__prs8bitgen__DOT__sr = ((1U & (IData)(__Vdly__prs8bitgen__DOT__sr)) 
                                       | (0xfeU & ((IData)(vlSelf->prs8bitgen__DOT__sr) 
                                                   << 1U)));
        __Vdly__prs8bitgen__DOT__sr = ((0xfeU & (IData)(__Vdly__prs8bitgen__DOT__sr)) 
                                       | (1U & VL_REDXOR_32(
                                                            (0xb8U 
                                                             & (IData)(vlSelf->prs8bitgen__DOT__sr)))));
        vlSelf->out = (0x80U >= (IData)(vlSelf->prs8bitgen__DOT__sr));
    }
    vlSelf->prs8bitgen__DOT__sr = __Vdly__prs8bitgen__DOT__sr;
}

void Vprs8bitgen___024root___eval(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vprs8bitgen___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vprs8bitgen___024root___change_request_1(Vprs8bitgen___024root* vlSelf);

VL_INLINE_OPT QData Vprs8bitgen___024root___change_request(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___change_request\n"); );
    // Body
    return (Vprs8bitgen___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vprs8bitgen___024root___change_request_1(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vprs8bitgen___024root___eval_debug_assertions(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
