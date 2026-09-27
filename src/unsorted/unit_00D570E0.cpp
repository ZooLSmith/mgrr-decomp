// src/unsorted/unit_00D570E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D570E0..00D570E0, 1 functions

#include "mgrr.h"

// 00D570E0  FUN_00d570e0  size=95  [run]
int __thiscall FUN_00d570e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = iVar2 + uVar1 * 8;
  if ((((param_2 != iVar3) && (iVar2 != 0)) && (uVar1 != 0)) &&
     ((uint)(param_2 - iVar2 >> 3) < uVar1)) {
    iVar2 = param_2;
    while (iVar2 != iVar3 + -8) {
      FUN_00a7c960(iVar2 + 8);
      FUN_00910ab0(iVar2 + 0xc);
      iVar2 = iVar2 + 8;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    iVar3 = param_2;
  }
  return iVar3;
}

