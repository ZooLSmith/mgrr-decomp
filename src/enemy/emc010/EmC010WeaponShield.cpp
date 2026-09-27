// src/enemy/emc010/EmC010WeaponShield.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0070D930..00ABA1E0, 13 functions

#include "types.h"

// 0070D930  EmC010WeaponShield::vf4C  size=35  [class]
void __fastcall EmC010WeaponShield::vf4C(int param_1)

{
  int iVar1;
  
  cEm0010Weapon::vf4C();
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x87c) = 1;
  }
  return;
}

// 0070D960  EmC010WeaponShield::vf50  size=52  [class]
void __fastcall EmC010WeaponShield::vf50(int param_1)

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

// 0070D9A0  EmC010WeaponShield::vf54  size=103  [class]
void __fastcall EmC010WeaponShield::vf54(int param_1)

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
        FUN_009fdde0();
        return;
      }
    }
  }
  return;
}

// 0070DA40  FUN_0070da40  size=29  [between]
void __fastcall FUN_0070da40(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))(0);
  FUN_00b2bbb0(&DAT_0163b604);
  return;
}

// 0070DA60  FUN_0070da60  size=98  [between]
void __fastcall FUN_0070da60(int *param_1)

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

// 0070DB10  EmC010WeaponShield::vfD8  size=85  [class]
undefined4 __thiscall EmC010WeaponShield::vfD8(int param_1,int param_2)

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

// 00711C10  EmC010WeaponShield::vf40  size=255  [class]
undefined4 __fastcall EmC010WeaponShield::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = EmC010Weapon::vf40();
  if (iVar2 == 0) {
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
    iVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar2 != 0) {
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
      FUN_008f1600(8);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00a93730(0x12);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x40a00000);
    }
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4b0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(uVar1,0x30090);
  }
  return 1;
}

// 007175B0  EmC010WeaponShield::vf44  size=74  [class]
void __fastcall EmC010WeaponShield::vf44(int param_1)

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
  cEm0010Weapon::vf44();
  return;
}

// 0072A8B0  EmC010WeaponShield::vf30  size=91  [class]
void EmC010WeaponShield::vf30(void)

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
        puVar3 = &DAT_01b357a0;
        (**(code **)(*piVar2 + 4))(&DAT_01b357a0);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          FUN_0072a710();
          return;
        }
      }
    }
  }
  return;
}

// 0073AA00  EmC010WeaponShield::vf48  size=16  [class]
void EmC010WeaponShield::vf48(void)

{
  BehaviorDebrisActor::vf48();
  FUN_007303b0();
  return;
}

// 00AB42A0  EmC010WeaponShield::vf04  size=6  [class]
undefined * EmC010WeaponShield::vf04(void)

{
  return &DAT_01b357ac;
}

// 00AB42B0  EmC010WeaponShield::vf1D0  size=3  [class]
void EmC010WeaponShield::vf1D0(void)

{
  return;
}

// 00ABA1E0  EmC010WeaponShield::vf00  size=105  [class]
undefined4 * __thiscall EmC010WeaponShield::vf00(undefined4 *param_1,byte param_2)

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

