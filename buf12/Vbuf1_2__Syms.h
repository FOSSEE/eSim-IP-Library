// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBUF1_2__SYMS_H_
#define VERILATED_VBUF1_2__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vbuf1_2.h"

// INCLUDE MODULE CLASSES
#include "Vbuf1_2___024root.h"

// SYMS CLASS (contains all model state)
class Vbuf1_2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbuf1_2* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbuf1_2___024root              TOP;

    // CONSTRUCTORS
    Vbuf1_2__Syms(VerilatedContext* contextp, const char* namep, Vbuf1_2* modelp);
    ~Vbuf1_2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
