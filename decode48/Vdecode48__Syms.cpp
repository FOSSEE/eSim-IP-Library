// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecode48__Syms.h"
#include "Vdecode48.h"
#include "Vdecode48___024root.h"

// FUNCTIONS
Vdecode48__Syms::~Vdecode48__Syms()
{
}

Vdecode48__Syms::Vdecode48__Syms(VerilatedContext* contextp, const char* namep,Vdecode48* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
