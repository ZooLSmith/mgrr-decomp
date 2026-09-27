// src/unsorted/unit_00B02100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B02100..00B02140, 2 functions

#include "types.h"

// 00B02100  FUN_00b02100  size=36  [run]
undefined4 FUN_00b02100(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(6);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00B02140  FUN_00b02140  size=24  [run]
undefined4 __fastcall FUN_00b02140(int param_1)

{
  if (*(float *)(param_1 + 0x12e0) < 1.0) {
    return 1;
  }
  return 0;
}

