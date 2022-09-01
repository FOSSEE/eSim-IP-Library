// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrfasic43_9.h for the primary calling header

#include "Vrfasic43_9___024root.h"
#include "Vrfasic43_9__Syms.h"

//==========

VL_INLINE_OPT void Vrfasic43_9___024root___sequent__TOP__2(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*6:0*/ __Vdlyvdim0__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0;
    IData/*31:0*/ __Vdlyvval__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0;
    // Body
    vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main 
        = vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main;
    __Vdlyvval__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0 
        = ((IData)(vlSelf->rfasic43_9__DOT__reg_1minRecord)
            ? vlSelf->rfasic43_9__DOT__reg_d : 0U);
    __Vdlyvdim0__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0 
        = (0x7fU & (IData)(vlSelf->rfasic43_9__DOT__reg_address));
    vlSelf->rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY[__Vdlyvdim0__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0] 
        = __Vdlyvval__rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY__v0;
}

VL_INLINE_OPT void Vrfasic43_9___024root___sequent__TOP__3(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___sequent__TOP__3\n"); );
    // Body
    if ((5U > (IData)(vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin))) {
        if ((0x3cU > (IData)(vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec))) {
            vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec)));
            vlSelf->rfasic43_9__DOT__reg_1minRecord = 0U;
        } else {
            vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec = 0U;
            vlSelf->rfasic43_9__DOT__reg_1minRecord = 1U;
            vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin)));
            vlSelf->rfasic43_9__DOT__reg_5minTransmit = 0U;
        }
    } else {
        vlSelf->rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin = 0U;
        vlSelf->rfasic43_9__DOT__reg_5minTransmit = 1U;
    }
    if (vlSelf->rfasic43_9__DOT__reg_1minRecord) {
        vlSelf->rfasic43_9__DOT__reg_address = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->rfasic43_9__DOT__reg_address)));
        if (vlSelf->rfasic43_9__DOT__reg_5minTransmit) {
            vlSelf->rfasic43_9__DOT__reg_trackaddress 
                = vlSelf->rfasic43_9__DOT__reg_address;
            vlSelf->rfasic43_9__DOT__reg_address = 0U;
            if ((0U < (IData)(vlSelf->rfasic43_9__DOT__reg_trackaddress))) {
                vlSelf->rfasic43_9__DOT__reg_Tx_8bitData 
                    = (0xffU & vlSelf->rfasic43_9__DOT__reg_q);
                if (((IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done) 
                     & (0U == (IData)(vlSelf->rfasic43_9__DOT__reg_Tx_Byte)))) {
                    vlSelf->rfasic43_9__DOT__reg_Tx_8bitData 
                        = (0xffU & (vlSelf->rfasic43_9__DOT__reg_q 
                                    >> 8U));
                    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 1U;
                } else if (((IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done) 
                            & (1U == (IData)(vlSelf->rfasic43_9__DOT__reg_Tx_Byte)))) {
                    vlSelf->rfasic43_9__DOT__reg_Tx_8bitData 
                        = (0xffU & (vlSelf->rfasic43_9__DOT__reg_q 
                                    >> 0x10U));
                    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 2U;
                } else if (((IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done) 
                            & (2U == (IData)(vlSelf->rfasic43_9__DOT__reg_Tx_Byte)))) {
                    vlSelf->rfasic43_9__DOT__reg_Tx_8bitData 
                        = (vlSelf->rfasic43_9__DOT__reg_q 
                           >> 0x18U);
                    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 3U;
                } else if (((IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done) 
                            & (3U == (IData)(vlSelf->rfasic43_9__DOT__reg_Tx_Byte)))) {
                    vlSelf->rfasic43_9__DOT__reg_address 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->rfasic43_9__DOT__reg_address)));
                    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 4U;
                } else {
                    vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 0U;
                }
            } else {
                vlSelf->rfasic43_9__DOT__reg_trackaddress = 0U;
                vlSelf->rfasic43_9__DOT__reg_address = 0U;
                vlSelf->rfasic43_9__DOT__reg_5minTransmit = 0U;
            }
        } else {
            vlSelf->rfasic43_9__DOT__reg_Tx_Byte = 0U;
        }
    } else {
        vlSelf->rfasic43_9__DOT__reg_1minRecord = 0U;
    }
}

VL_INLINE_OPT void Vrfasic43_9___024root___combo__TOP__6(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->rfasic43_9__DOT__reg_d = (((IData)(vlSelf->in_Sensor2) 
                                       << 0x18U) | 
                                      (((IData)(vlSelf->in_Sensor3) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->in_Sensor4) 
                                         << 8U) | (IData)(vlSelf->in_Sensor5))));
}

VL_INLINE_OPT void Vrfasic43_9___024root___sequent__TOP__7(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___sequent__TOP__7\n"); );
    // Body
    if ((4U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
        if ((2U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 0U;
        } else if ((1U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 0U;
        } else {
            vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done = 1U;
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 0U;
        }
    } else if ((2U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
        if ((1U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
            vlSelf->out_Tx_Serial = 1U;
            vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done = 1U;
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 4U;
        } else {
            vlSelf->out_Tx_Serial = (1U & ((IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Data) 
                                           >> (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index)));
            if ((7U > (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index))) {
                vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index)));
                vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 2U;
            } else {
                vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index = 0U;
                vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main))) {
        vlSelf->out_Tx_Serial = 0U;
        vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 2U;
    } else {
        vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index = 0U;
        vlSelf->out_Tx_Serial = 1U;
        vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done = 0U;
        if (vlSelf->rfasic43_9__DOT__reg_5minTransmit) {
            vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Data 
                = vlSelf->rfasic43_9__DOT__reg_Tx_8bitData;
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 1U;
        } else {
            vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main = 0U;
        }
    }
    vlSelf->rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main 
        = vlSelf->__Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main;
}

VL_INLINE_OPT void Vrfasic43_9___024root___multiclk__TOP__8(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___multiclk__TOP__8\n"); );
    // Body
    vlSelf->rfasic43_9__DOT__reg_q = vlSelf->rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY
        [(0x7fU & (IData)(vlSelf->rfasic43_9__DOT__reg_address))];
}

void Vrfasic43_9___024root___eval(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->in_Global_Clock) & (~ (IData)(vlSelf->__Vclklast__TOP__in_Global_Clock)))) {
        Vrfasic43_9___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->in_Clk) & (~ (IData)(vlSelf->__Vclklast__TOP__in_Clk)))) {
        Vrfasic43_9___024root___sequent__TOP__3(vlSelf);
    }
    Vrfasic43_9___024root___combo__TOP__6(vlSelf);
    if (((IData)(vlSelf->in_Global_Clock) & (~ (IData)(vlSelf->__Vclklast__TOP__in_Global_Clock)))) {
        Vrfasic43_9___024root___sequent__TOP__7(vlSelf);
    }
    if ((((IData)(vlSelf->in_Clk) & (~ (IData)(vlSelf->__Vclklast__TOP__in_Clk))) 
         | ((IData)(vlSelf->in_Global_Clock) & (~ (IData)(vlSelf->__Vclklast__TOP__in_Global_Clock))))) {
        Vrfasic43_9___024root___multiclk__TOP__8(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__in_Global_Clock = vlSelf->in_Global_Clock;
    vlSelf->__Vclklast__TOP__in_RST = vlSelf->in_RST;
    vlSelf->__Vclklast__TOP__in_Clk = vlSelf->in_Clk;
}

QData Vrfasic43_9___024root___change_request_1(Vrfasic43_9___024root* vlSelf);

VL_INLINE_OPT QData Vrfasic43_9___024root___change_request(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___change_request\n"); );
    // Body
    return (Vrfasic43_9___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrfasic43_9___024root___change_request_1(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrfasic43_9___024root___eval_debug_assertions(Vrfasic43_9___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrfasic43_9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrfasic43_9___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->in_Global_Clock & 0xfeU))) {
        Verilated::overWidthError("in_Global_Clock");}
    if (VL_UNLIKELY((vlSelf->in_Clk & 0xfeU))) {
        Verilated::overWidthError("in_Clk");}
    if (VL_UNLIKELY((vlSelf->in_RST & 0xfeU))) {
        Verilated::overWidthError("in_RST");}
}
#endif  // VL_DEBUG
