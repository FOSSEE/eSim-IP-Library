// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFULLADD32__SYMS_H_
#define VERILATED_VFULLADD32__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vfulladd32.h"

// INCLUDE MODULE CLASSES
#include "Vfulladd32___024root.h"

// SYMS CLASS (contains all model state)
class Vfulladd32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfulladd32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfulladd32___024root           TOP;

    // CONSTRUCTORS
    Vfulladd32__Syms(VerilatedContext* contextp, const char* namep, Vfulladd32* modelp);
    ~Vfulladd32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
