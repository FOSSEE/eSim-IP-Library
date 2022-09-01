// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDFF32__SYMS_H_
#define VERILATED_VDFF32__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdff32.h"

// INCLUDE MODULE CLASSES
#include "Vdff32___024root.h"

// SYMS CLASS (contains all model state)
class Vdff32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdff32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdff32___024root               TOP;

    // CONSTRUCTORS
    Vdff32__Syms(VerilatedContext* contextp, const char* namep, Vdff32* modelp);
    ~Vdff32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
