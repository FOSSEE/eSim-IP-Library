// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE48__SYMS_H_
#define VERILATED_VDECODE48__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdecode48.h"

// INCLUDE MODULE CLASSES
#include "Vdecode48___024root.h"

// SYMS CLASS (contains all model state)
class Vdecode48__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode48* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode48___024root            TOP;

    // CONSTRUCTORS
    Vdecode48__Syms(VerilatedContext* contextp, const char* namep, Vdecode48* modelp);
    ~Vdecode48__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
