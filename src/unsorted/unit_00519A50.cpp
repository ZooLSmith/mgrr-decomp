// src/unsorted/unit_00519A50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00519A50..00519A50, 1 functions

#include "types.h"

// 00519A50  FUN_00519a50  size=58  [run]
undefined4 __fastcall FUN_00519a50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa08) != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 == *(int *)(param_1 + 0xa08)) && (*(int *)(param_1 + 0x618) == 0)) {
      return 1;
    }
  }
  return 0;
}

