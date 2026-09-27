// src/unsorted/unit_00D29B00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D29B00..00D29CC0, 3 functions

#include "mgrr.h"

// 00D29B00  FUN_00d29b00  size=399  [run]
undefined4 __fastcall FUN_00d29b00(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 8);
  do {
    iVar2 = FUN_00d29960(0);
    *piVar5 = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 2);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x200) = 0;
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar4 + 0x200) = 1;
  puVar1 = (uint *)(iVar4 + 0x28);
  *puVar1 = *puVar1 | 0x8080000;
  iVar4 = FUN_00c1d6f0();
  if (iVar4 != 0) {
    iVar4 = FUN_00932720();
    if (iVar4 != 0xf0a) goto LAB_00d29bad;
  }
  iVar4 = FUN_00c1d770();
  if (iVar4 != 0x22) {
    iVar4 = FUN_00c1d770();
    if (iVar4 != 0x27) {
      iVar4 = FUN_00932720();
      if (iVar4 != 0xf0a) goto LAB_00d29bad;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = FUN_00d29960(1);
    *(int *)(param_1 + 0x10) = iVar4;
    *(undefined4 *)(iVar4 + 0x200) = 0;
  }
LAB_00d29bad:
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar4 = FUN_00dd29b0(0xe00,0x20,0,0);
    *(int *)(param_1 + 0xb0) = iVar4;
    if (iVar4 == 0) {
      uVar3 = (**(code **)(DAT_01b7be50 + 0x18))();
      uVar3 = FUN_00dd2960(0xe00,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 0x80;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 1;
    }
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar4 = FUN_00dd29b0(0x1c00,0x20,0,0);
    *(int *)(param_1 + 0x98) = iVar4;
    if (iVar4 == 0) {
      uVar3 = (**(code **)(DAT_01b7be50 + 0x18))();
      uVar3 = FUN_00dd2960(0x1c00,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
      return 1;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0x100;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  return 1;
}

// 00D29CA0  FUN_00d29ca0  size=32  [run]
void __thiscall FUN_00d29ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar1 = FUN_00d29960(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

// 00D29CC0  FUN_00d29cc0  size=89  [run]
undefined4 __thiscall FUN_00d29cc0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
      (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0))
     || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
    piVar2 = (int *)0x0;
  }
  iVar1 = FUN_00d1fa60(piVar2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

