// src/unsorted/unit_00485330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00485330..00485330, 1 functions

#include "types.h"

// 00485330  FUN_00485330  size=120  [run]
void __fastcall FUN_00485330(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1a4) == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
  }
  else if (*(int *)(param_1 + 0x1a4) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1d4) < *(int *)(param_1 + 0x1d0)) {
    fVar1 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1d8) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

