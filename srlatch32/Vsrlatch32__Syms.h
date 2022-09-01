// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSRLATCH32__SYMS_H_
#define VERILATED_VSRLATCH32__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vsrlatch32.h"

// INCLUDE MODULE CLASSES
#include "Vsrlatch32___024root.h"

// SYMS CLASS (contains all model state)
class Vsrlatch32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsrlatch32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsrlatch32___024root           TOP;

    // CONSTRUCTORS
    Vsrlatch32__Syms(VerilatedContext* contextp, const char* namep, Vsrlatch32* modelp);
    ~Vsrlatch32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
