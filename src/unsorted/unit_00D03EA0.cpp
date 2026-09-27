// src/unsorted/unit_00D03EA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D03EA0..00D03F90, 2 functions

#include "mgrr.h"

// 00D03EA0  FUN_00d03ea0  size=233  [run]
undefined4 __fastcall FUN_00d03ea0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    if (*(int *)(param_1 + 0xd0) == 6) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x90),"COLLECT_TITLE_05",1,0xffffffff);
    }
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0x90) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if ((iVar2 == 3) && (piVar1[0x5c] != 0)) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        *(undefined4 *)(param_1 + 0xcc) = 1;
        return 0;
      }
    }
  }
  else if (iVar2 == 2) {
    return 1;
  }
  return 0;
}

// 00D03F90  FUN_00d03f90  size=214  [run]
int __thiscall FUN_00d03f90(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
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
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

