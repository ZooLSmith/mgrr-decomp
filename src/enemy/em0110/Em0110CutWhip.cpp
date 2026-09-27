// src/enemy/em0110/Em0110CutWhip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B6D80..00AB7250, 7 functions

#include "mgrr.h"
#include "Em0110CutWhip.h"

// 004B6D80  Em0110CutWhip::thunk_vf30  size=5  [class]
void __fastcall Em0110CutWhip::thunk_vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x674) = 1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      puVar3 = (undefined4 *)FUN_009f8b60();
      iVar1 = *(int *)(param_1 + 0x588);
      uVar2 = *puVar3;
      *(undefined4 *)(iVar1 + 0x3c) = 1;
      *(undefined4 *)(iVar1 + 0x40) = uVar2;
      return;
    }
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}

// 004CAC30  Em0110CutWhip::vf44  size=133  [class]
void __fastcall Em0110CutWhip::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00c62bb0(*(undefined4 *)(param_1 + 0x4f0),0x10);
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  BehaviorWeapon::vf44();
  return;
}

// 004D7620  Em0110CutWhip::vf40  size=612  [class]
undefined4 __fastcall Em0110CutWhip::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = BehaviorWeapon::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  local_34 = 0;
  iVar1 = FUN_00a54ae0(&local_34,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar3;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_34);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
      FUN_008f1600(0x20);
      FUN_008f18c0(0x100);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(4);
  uStack_30 = FUN_00a8d2a0();
  puVar4 = &DAT_0163f39c;
  do {
    puVar5 = (undefined4 *)FUN_009f8b60();
    iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),*puVar4);
      *(undefined4 *)(iVar1 + 0x594) = 0x3fcccccd;
      *(undefined4 *)(iVar1 + 0x590) = 0x3d4ccccd;
      *(undefined4 *)(iVar1 + 0x580) = 0;
      *(undefined4 *)(iVar1 + 0x584) = 0;
      *(undefined4 *)(iVar1 + 0x588) = 0x3fc90fdb;
      *(undefined4 *)(iVar1 + 0x58c) = uStack_14;
      FUN_00d771d0(0xb);
      *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
      FUN_00a93a00(iVar1,uStack_30);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x163f3ac);
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 0;
  }
  uStack_2c = 0x3f666666;
  uStack_28 = 0x3f99999a;
  uStack_24 = 0x3f8ccccd;
  uStack_20 = 0x3e4ccccd;
  uStack_1c = 0x40400000;
  uStack_18 = 0x40000000;
  FUN_00a8e4d0(&uStack_20,&uStack_2c);
  FUN_009fd240();
  *(undefined4 *)(param_1 + 0x8c4) = 0xffffffff;
  FUN_00410540(0x20,&DAT_01b7bd48);
  return 1;
}

// 00AA64F0  Em0110CutWhip::Em0110CutWhip  size=60  [class]
undefined4 * __fastcall Em0110CutWhip::Em0110CutWhip(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a8f0e0();
  return param_1;
}

// 00AA6530  Em0110CutWhip::vf04  size=6  [class]
undefined * Em0110CutWhip::vf04(void)

{
  return &DAT_01b34e8c;
}

// 00AA6540  Em0110CutWhip::vf1D0  size=3  [class]
void Em0110CutWhip::vf1D0(void)

{
  return;
}

// 00AB7250  Em0110CutWhip::vf00  size=105  [class]
undefined4 * __thiscall Em0110CutWhip::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

