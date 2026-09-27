// src/unsorted/unit_00F175E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F175E0..00F175E0, 1 functions

#include "types.h"

// 00F175E0  FUN_00f175e0  size=65  [run]
void __fastcall FUN_00f175e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

