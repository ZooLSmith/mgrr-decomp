// src/unsorted/unit_004B7C50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7C50..004B7E20, 4 functions

#include "types.h"

// 004B7C50  FUN_004b7c50  size=118  [run]
undefined4 __thiscall FUN_004b7c50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x70,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0x70,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 004B7D90  FUN_004b7d90  size=42  [run]
uint FUN_004b7d90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9db8;
  (**(code **)(*param_1 + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 004B7DC0  FUN_004b7dc0  size=42  [run]
uint FUN_004b7dc0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b18;
  (**(code **)(*param_1 + 4))(&DAT_01b34b18);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 004B7E20  FUN_004b7e20  size=42  [run]
uint FUN_004b7e20(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34e80;
  (**(code **)(*param_1 + 4))(&DAT_01b34e80);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

