// src/unsorted/unit_00F9F050.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9F050..00F9F050, 1 functions

#include "types.h"

// 00F9F050  FUN_00f9f050  size=87  [run]
undefined4 __thiscall FUN_00f9f050(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x158))(DAT_01f206d4,param_2,(undefined4 *)(param_1 + 4));
    if (-1 < iVar2) {
      uVar3 = FUN_00f96fc0(param_2);
      *(undefined4 *)(param_1 + 8) = uVar3;
      return 1;
    }
  }
  return 0;
}

