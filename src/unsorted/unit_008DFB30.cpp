// src/unsorted/unit_008DFB30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DFB30..008DFB30, 1 functions

#include "types.h"

// 008DFB30  FUN_008dfb30  size=41  [run]
undefined4 * FUN_008dfb30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018847e8 + uVar1) == param_1) {
      return &DAT_018847e8 + iVar2 * 6;
    }
    uVar1 = uVar1 + 0x18;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x120);
  return (undefined4 *)0x0;
}

