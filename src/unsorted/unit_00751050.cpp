// src/unsorted/unit_00751050.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00751050..00751090, 2 functions

#include "types.h"

// 00751050  FUN_00751050  size=36  [run]
undefined4 FUN_00751050(void)

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

// 00751090  FUN_00751090  size=24  [run]
undefined4 __fastcall FUN_00751090(int param_1)

{
  if (*(float *)(param_1 + 0x13b0) < 1.0) {
    return 1;
  }
  return 0;
}

