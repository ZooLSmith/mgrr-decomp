// src/unsorted/unit_00586130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00586130..00586380, 4 functions

#include "mgrr.h"

// 00586130  FUN_00586130  size=236  [run]
void __thiscall FUN_00586130(int param_1,float *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar1 = param_1;
  }
  if ((6 < *(short *)(iVar1 + 0x358)) && (iVar1 = *(int *)(iVar1 + 0x350), iVar1 != -0x420)) {
    local_20 = 0;
    local_1c = 0x3ca3d70a;
    local_18 = 0xbe0a3d71;
    param_2[0x10] = 0.2;
    param_2[0x11] = 0.03;
    param_2[0x12] = 0.35;
    D3DXVec3TransformNormal(param_2,&local_20,(float *)(iVar1 + 0x430));
    *param_2 = *param_2 + *(float *)(iVar1 + 0x460);
    param_2[1] = *(float *)(iVar1 + 0x464) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x468) + param_2[2];
    param_2[4] = *(float *)(iVar1 + 0x430);
    param_2[5] = *(float *)(iVar1 + 0x434);
    param_2[6] = *(float *)(iVar1 + 0x438);
    param_2[7] = *(float *)(iVar1 + 0x43c);
    param_2[8] = *(float *)(iVar1 + 0x440);
    param_2[9] = *(float *)(iVar1 + 0x444);
    param_2[10] = *(float *)(iVar1 + 0x448);
    param_2[0xb] = *(float *)(iVar1 + 0x44c);
    param_2[0xc] = *(float *)(iVar1 + 0x450);
    param_2[0xd] = *(float *)(iVar1 + 0x454);
    param_2[0xe] = *(float *)(iVar1 + 0x458);
    param_2[0xf] = *(float *)(iVar1 + 0x45c);
  }
  return;
}

// 00586220  FUN_00586220  size=157  [run]
void __fastcall FUN_00586220(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_c;
  int local_4;
  
  iStack_c = 1;
  local_4 = param_1;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iStack_c = 0;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_4);
    if (iStack_c != 0) {
      *(undefined4 *)(param_1 + 0xb24) = 100;
      *(undefined4 *)(param_1 + 0xb2c) = 1;
      *(undefined1 *)(param_1 + 0xb30) = 1;
      *(undefined4 *)(param_1 + 0xb28) = 100;
      *(undefined4 *)(param_1 + 0xb20) = 0x16c;
      uVar1 = CollisionAttackData::CollisionAttackData_4((undefined4 *)(param_1 + 0xb20));
      Behavior::addBodyOffenseCollisionFromRigidBody
                (&iStack_c,*(int *)(param_1 + 0x760) + 1,0,5,uVar1);
      iVar2 = FUN_00a93580(0);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 900) = *(uint *)(iVar2 + 900) | 1;
        FUN_00d7acc0();
        *(undefined4 *)(param_1 + 0xc24) = 0;
      }
    }
  }
  return;
}

// 00586310  FUN_00586310  size=112  [run]
void __fastcall FUN_00586310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc30) == 0) {
    iVar1 = *(int *)(param_1 + 0x4b0);
    if (iVar1 == 0xd5411) {
      uVar2 = FUN_00e5e0c0("bm5411_se_swish",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xc30) = uVar2;
    }
    else {
      if (iVar1 == 0xd5412) {
        uVar2 = FUN_00e5e0c0("bm5412_se_swish",param_1,0xffffffff,0);
        *(undefined4 *)(param_1 + 0xc30) = uVar2;
        return;
      }
      if (iVar1 == 0xf5031) {
        uVar2 = FUN_00e5e0c0("ba5031_se_swish",param_1,0xffffffff,0);
        *(undefined4 *)(param_1 + 0xc30) = uVar2;
        return;
      }
    }
  }
  return;
}

// 00586380  FUN_00586380  size=115  [run]
void __fastcall FUN_00586380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (iVar1 == 0xd5411) {
    FUN_00e5e0c0("bm5411_se_break",param_1,0xffffffff,0);
  }
  else {
    if (iVar1 == 0xd5412) {
      FUN_00e5e0c0("bm5412_se_break",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xc30) = 0;
      return;
    }
    if (iVar1 == 0xf5031) {
      FUN_00e5e0c0("ba5031_se_break",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0xc30) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc30) = 0;
  return;
}

