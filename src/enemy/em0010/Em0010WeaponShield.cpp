// src/enemy/em0010/Em0010WeaponShield.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAF1C0..00B5CA00, 14 functions

#include "mgrr.h"
#include "Em0010WeaponShield.h"

// 00AAF1C0  Em0010WeaponShield::Em0010WeaponShield  size=55  [class]
undefined4 * __fastcall Em0010WeaponShield::Em0010WeaponShield(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = cEm0010Weapon::vftable;
  FUN_00a7c930();
  *param_1 = vftable;
  return param_1;
}

// 00AAF200  Em0010WeaponShield::vf04  size=6  [class]
undefined * Em0010WeaponShield::vf04(void)

{
  return &DAT_01be9d2c;
}

// 00AAF210  Em0010WeaponShield::vf1D0  size=3  [class]
void Em0010WeaponShield::vf1D0(void)

{
  return;
}

// 00AB7C80  Em0010WeaponShield::destruct  size=105  [class]
undefined4 * __thiscall Em0010WeaponShield::destruct(undefined4 *param_1,byte param_2)

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
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B2DD90  Em0010WeaponShield::vf50  size=52  [class]
void __fastcall Em0010WeaponShield::vf50(int param_1)

{
  int iVar1;
  
  BehaviorWeapon::vf50();
  if ((*(int *)(param_1 + 0x8d4) == 0) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  return;
}

// 00B2DDD0  Em0010WeaponShield::vf54  size=103  [class]
void __fastcall Em0010WeaponShield::vf54(int param_1)

{
  int iVar1;
  
  BehaviorWeapon::vf54();
  if ((*(int *)(param_1 + 0x8d4) != 0) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f7700(param_1);
      switchD_0080dbae::default();
      if ((((*(int *)(param_1 + 0x87c) != 0) && (*(char *)(param_1 + 0x470) != '\0')) &&
          ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) && (*(char *)(param_1 + 0x471) != '\0')) {
        E3_EnemyBoardDebrisSokushi::vf4C();
        return;
      }
    }
  }
  return;
}

// 00B2DE70  FUN_00b2de70  size=82  [between]
void __fastcall FUN_00b2de70(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))(0);
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  param_1[0x186] = 0;
  param_1[0x231] = 1;
  return;
}

// 00B2DED0  FUN_00b2ded0  size=98  [between]
void __fastcall FUN_00b2ded0(int *param_1)

{
  int iVar1;
  undefined1 auStack_24 [32];
  
  (**(code **)(*param_1 + 0xd8))(1);
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar1 != 0) {
      FUN_00a925a0(auStack_24);
      iVar1 = FUN_00a12210(0);
      (**(code **)(*(int *)param_1[0x1ec] + 200))(auStack_24,iVar1 + 0x40,0);
    }
  }
  return;
}

// 00B2DF80  Em0010WeaponShield::vfD8  size=85  [class]
undefined4 __thiscall Em0010WeaponShield::vfD8(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x8d4) = param_2;
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
      if (param_2 != 0) {
        FUN_008f3c70();
        return 0;
      }
      FUN_008f3c80();
    }
  }
  return 0;
}

// 00B33200  Em0010WeaponShield::startup  size=218  [class]
undefined4 __fastcall Em0010WeaponShield::startup(int param_1)

{
  int iVar1;
  
  iVar1 = cEm0010Weapon::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0x32;
  *(undefined4 *)(param_1 + 0x8d8) = 0x32;
  FUN_00410540(8,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
      FUN_008f1600(8);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00a93730(0x12);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x40a00000);
    }
  }
  return 1;
}

// 00B332E0  Em0010WeaponShield::vf4C  size=35  [class]
void __fastcall Em0010WeaponShield::vf4C(int param_1)

{
  int iVar1;
  
  cEm0010Weapon::vf4C();
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x87c) = 1;
  }
  return;
}

// 00B39250  Em0010WeaponShield::vf44  size=100  [class]
void __fastcall Em0010WeaponShield::vf44(int param_1)

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
  FUN_00a9d8a0();
  BehaviorWeapon::vf44();
  if (*(int *)(param_1 + 0x4a0) != 100) {
    FUN_00a8c820();
    FUN_00a944d0();
    return;
  }
  return;
}

// 00B4C390  Em0010WeaponShield::vf30  size=91  [class]
void Em0010WeaponShield::vf30(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9d20;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d20);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          FUN_00b4c1f0();
          return;
        }
      }
    }
  }
  return;
}

// 00B5CA00  Em0010WeaponShield::vf48  size=16  [class]
void Em0010WeaponShield::vf48(void)

{
  BehaviorDebrisActor::vf48();
  FUN_00b52220();
  return;
}

