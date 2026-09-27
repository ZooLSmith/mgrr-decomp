// src/unsorted/unit_00DD5540.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD5540..00DD5540, 1 functions

#include "mgrr.h"

// 00DD5540  FUN_00dd5540  size=32  [run]
void __fastcall FUN_00dd5540(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (999 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 999;
  }
  uVar1 = FUN_00df7ff0();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

