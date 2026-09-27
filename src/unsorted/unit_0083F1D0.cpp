// src/unsorted/unit_0083F1D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083F1D0..0083F1D0, 1 functions

#include "types.h"

// 0083F1D0  FUN_0083f1d0  size=80  [run]
void __fastcall FUN_0083f1d0(int *param_1)

{
  code *pcVar1;
  
  if (param_1[0x2d6] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d0));
  }
  pcVar1 = *(code **)(*param_1 + 0x20);
  param_1[0x2cd] = 0;
  (*pcVar1)();
  FUN_00aa92c0(1);
  param_1[0x139] = 1;
  if (param_1[0x2d6] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d0));
  }
  return;
}

