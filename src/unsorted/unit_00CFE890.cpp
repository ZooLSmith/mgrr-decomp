// src/unsorted/unit_00CFE890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFE890..00CFE890, 1 functions

#include "types.h"

// 00CFE890  FUN_00cfe890  size=243  [run]
int __thiscall FUN_00cfe890(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 4)) {
      piVar3 = (int *)0x0;
    }
    FUN_00ce5150(piVar3,param_3,&local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

