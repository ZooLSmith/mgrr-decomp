// src/unsorted/unit_0040C150.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040C150..0040C150, 1 functions

#include "mgrr.h"

// 0040C150  FUN_0040c150  size=76  [run]
undefined4 * __thiscall FUN_0040c150(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  puVar4 = param_2;
  iVar3 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)(iVar3 + uVar2 * 4);
  if ((((param_2 != puVar1) && (iVar3 != 0)) && (uVar2 != 0)) &&
     ((uint)((int)param_2 - iVar3 >> 2) < uVar2)) {
    for (; param_2 != puVar1 + -1; param_2 = param_2 + 1) {
      *param_2 = param_2[1];
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    return puVar4;
  }
  return puVar1;
}

