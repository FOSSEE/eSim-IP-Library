// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veleasm63.h for the primary calling header

#include "Veleasm63___024root.h"
#include "Veleasm63__Syms.h"

//==========

extern const VlUnpacked<CData/*0:0*/, 256> Veleasm63__ConstPool__TABLE_79516801_0;
extern const VlUnpacked<CData/*2:0*/, 256> Veleasm63__ConstPool__TABLE_4f72585d_0;
extern const VlUnpacked<CData/*0:0*/, 8> Veleasm63__ConstPool__TABLE_e4d6d9c5_0;
extern const VlUnpacked<CData/*1:0*/, 8> Veleasm63__ConstPool__TABLE_678979d9_0;

VL_INLINE_OPT void Veleasm63___024root___sequent__TOP__1(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->rd) << 7U) | (
                                                   ((IData)(vlSelf->rc) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->rb) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->ra) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->eleasm63__DOT__state) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->rst))))));
    if (Veleasm63__ConstPool__TABLE_79516801_0[__Vtableidx1]) {
        vlSelf->eleasm63__DOT__state = Veleasm63__ConstPool__TABLE_4f72585d_0
            [__Vtableidx1];
    }
    if ((((0U == (IData)(vlSelf->eleasm63__DOT__state)) 
          | (1U == (IData)(vlSelf->eleasm63__DOT__state))) 
         | (2U == (IData)(vlSelf->eleasm63__DOT__state)))) {
        vlSelf->dir = 0U;
    } else if ((((3U == (IData)(vlSelf->eleasm63__DOT__state)) 
                 | (4U == (IData)(vlSelf->eleasm63__DOT__state))) 
                | (5U == (IData)(vlSelf->eleasm63__DOT__state)))) {
        vlSelf->dir = 1U;
    }
    __Vtableidx2 = vlSelf->eleasm63__DOT__state;
    if (Veleasm63__ConstPool__TABLE_e4d6d9c5_0[__Vtableidx2]) {
        vlSelf->floor = Veleasm63__ConstPool__TABLE_678979d9_0
            [__Vtableidx2];
    }
}

void Veleasm63___024root___eval(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Veleasm63___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Veleasm63___024root___change_request_1(Veleasm63___024root* vlSelf);

VL_INLINE_OPT QData Veleasm63___024root___change_request(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___change_request\n"); );
    // Body
    return (Veleasm63___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Veleasm63___024root___change_request_1(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Veleasm63___024root___eval_debug_assertions(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ra & 0xfeU))) {
        Verilated::overWidthError("ra");}
    if (VL_UNLIKELY((vlSelf->rb & 0xfeU))) {
        Verilated::overWidthError("rb");}
    if (VL_UNLIKELY((vlSelf->rc & 0xfeU))) {
        Verilated::overWidthError("rc");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
}
#endif  // VL_DEBUG
