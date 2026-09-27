// src/unsorted/unit_00DD37B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD37B0..00DD37B0, 1 functions

#include "types.h"

// 00DD37B0  FUN_00dd37b0  size=35  [run]
void __fastcall FUN_00dd37b0(int *param_1)

{
  if (param_1[0x10] != 0) {
    (**(code **)(*param_1 + 0x10))();
    HeapDestroy((HANDLE)param_1[0x10]);
    param_1[0x10] = 0;
  }
  return;
}

