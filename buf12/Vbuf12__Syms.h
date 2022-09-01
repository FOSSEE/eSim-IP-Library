// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBUF12__SYMS_H_
#define VERILATED_VBUF12__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vbuf12.h"

// INCLUDE MODULE CLASSES
#include "Vbuf12___024root.h"

// SYMS CLASS (contains all model state)
class Vbuf12__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbuf12* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbuf12___024root               TOP;

    // CONSTRUCTORS
    Vbuf12__Syms(VerilatedContext* contextp, const char* namep, Vbuf12* modelp);
    ~Vbuf12__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
