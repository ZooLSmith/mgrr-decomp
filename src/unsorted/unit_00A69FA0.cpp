// src/unsorted/unit_00A69FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A69FA0..00A6A0E0, 4 functions

#include "mgrr.h"

// 00A69FA0  FUN_00a69fa0  size=69  [run]
void __fastcall FUN_00a69fa0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00dd29b0(0x180c,0x20,0,0);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0x200;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(int *)(param_1 + 0x18) = iVar1 + 0x1800;
      FUN_00a68710();
      return;
    }
  }
  return;
}

// 00A69FF0  FUN_00a69ff0  size=108  [run]
void __fastcall FUN_00a69ff0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)param_1[6]) {
    do {
      piVar1 = (int *)*piVar2;
      if ((piVar1[6] != 0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 4))(1);
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)param_1[6]);
  }
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A6A060  FUN_00a6a060  size=116  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00a6a060(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01be99c4 & 1) == 0) {
    _DAT_01be99c4 = _DAT_01be99c4 | 1;
    DAT_01be99c0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be99c0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be99c0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00a692d0(param_1,param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00A6A0E0  FUN_00a6a0e0  size=65  [run]
void __fastcall FUN_00a6a0e0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

