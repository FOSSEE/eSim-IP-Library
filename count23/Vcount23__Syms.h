// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNT23__SYMS_H_
#define VERILATED_VCOUNT23__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcount23.h"

// INCLUDE MODULE CLASSES
#include "Vcount23___024root.h"

// SYMS CLASS (contains all model state)
class Vcount23__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcount23* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcount23___024root             TOP;

    // CONSTRUCTORS
    Vcount23__Syms(VerilatedContext* contextp, const char* namep, Vcount23* modelp);
    ~Vcount23__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
