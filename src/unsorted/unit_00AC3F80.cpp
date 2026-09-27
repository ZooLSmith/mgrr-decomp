// src/unsorted/unit_00AC3F80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC3F80..00AC3F80, 1 functions

#include "mgrr.h"

// 00AC3F80  FUN_00ac3f80  size=45  [run]
void __fastcall FUN_00ac3f80(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xa88) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0xa8c);
  }
  *(undefined4 *)(param_1 + 0xa88) = 0;
  return;
}

