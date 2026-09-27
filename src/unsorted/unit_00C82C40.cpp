// src/unsorted/unit_00C82C40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C82C40..00C82DD0, 3 functions

#include "mgrr.h"

// 00C82C40  FUN_00c82c40  size=35  [run]
void __fastcall FUN_00c82c40(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C82CE0  FUN_00c82ce0  size=120  [run]
undefined4 __thiscall FUN_00c82ce0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00C82DD0  FUN_00c82dd0  size=120  [run]
undefined4 __thiscall FUN_00c82dd0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 8,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 8,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

