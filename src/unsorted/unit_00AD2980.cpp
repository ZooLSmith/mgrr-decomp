// src/unsorted/unit_00AD2980.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AD2980..00AD2C90, 3 functions

#include "mgrr.h"

// 00AD2980  FUN_00ad2980  size=280  [run]
undefined4 __thiscall FUN_00ad2980(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined2 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_2 + 0x150) == 0xffff) {
    return 0;
  }
  FUN_00c76ea0();
  local_30 = *(undefined4 *)(param_2 + 0x150);
  local_2c = *(int *)(param_1 + 0x4f0);
  local_28 = param_2 + 0x380;
  if (*(int *)(param_2 + 0x370) == 0) {
    if ((local_2c != 0) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
      if (*(int *)(param_2 + 0x364) == 0) {
        return 0;
      }
      puVar3 = (undefined4 *)(*(int *)(param_2 + 0x364) + 0x10);
      puVar4 = local_80;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    local_40 = *(undefined4 *)(param_2 + 400);
    local_24 = *(undefined2 *)(param_2 + 0x1ba);
    local_3c = *(undefined4 *)(param_2 + 0x194);
    local_20 = 1;
    local_38 = *(undefined4 *)(param_2 + 0x198);
    local_34 = *(undefined4 *)(param_2 + 0x19c);
  }
  FUN_00c76620();
  uVar2 = FUN_00c771b0(local_80,&local_84);
  *(undefined4 *)(param_2 + 0x37c) = local_84;
  *(uint *)(param_2 + 1000) = *(uint *)(param_2 + 1000) | 0x40;
  *(undefined4 *)(param_2 + 0x3c0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x3c4) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x3c8) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x3cc) = *(undefined4 *)(param_2 + 0x3c);
  return uVar2;
}

// 00AD2BF0  FUN_00ad2bf0  size=148  [run]
void __fastcall FUN_00ad2bf0(int param_1)

{
  int iVar1;
  
  FUN_00d8a1d0(0x16,*(undefined4 *)(param_1 + 0xa08));
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 00AD2C90  FUN_00ad2c90  size=27  [run]
void __fastcall FUN_00ad2c90(int param_1)

{
  Behavior::vf4C();
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00acdbe0();
    return;
  }
  return;
}

