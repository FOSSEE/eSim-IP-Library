// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VELEASM63__SYMS_H_
#define VERILATED_VELEASM63__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Veleasm63.h"

// INCLUDE MODULE CLASSES
#include "Veleasm63___024root.h"

// SYMS CLASS (contains all model state)
class Veleasm63__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Veleasm63* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Veleasm63___024root            TOP;

    // CONSTRUCTORS
    Veleasm63__Syms(VerilatedContext* contextp, const char* namep, Veleasm63* modelp);
    ~Veleasm63__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
