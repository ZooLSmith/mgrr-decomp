// src/misc/cEm0010Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6830..00B32420, 6 functions

#include "mgrr.h"
#include "cEm0010Weapon.h"

// 00AA6830  cEm0010Weapon::cEm0010Weapon  size=49  [class]
undefined4 * __fastcall cEm0010Weapon::cEm0010Weapon(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6870  cEm0010Weapon::vf04  size=6  [class]
undefined * cEm0010Weapon::vf04(void)

{
  return &DAT_01be9d28;
}

// 00AB7BA0  cEm0010Weapon::destruct  size=105  [class]
undefined4 * __thiscall cEm0010Weapon::destruct(undefined4 *param_1,byte param_2)

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

// 00B322B0  cEm0010Weapon::startup  size=308  [class]
undefined4 __fastcall cEm0010Weapon::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorWeapon::startup();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4a0) == 100) {
LAB_00b323ca:
      uVar2 = 2;
      FUN_00a92fb0(2);
      FUN_00e08640(uVar2);
      return 1;
    }
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x8c4) = 0;
      *(undefined4 *)(param_1 + 0x8c0) = 0;
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x4b0) == 0x30031) {
          FUN_00a92f90();
          FUN_00e26e90();
          FUN_00e272b0(0x30031,0x30030);
        }
        if ((*(int *)(param_1 + 0x4b0) == 0x30040) || (*(int *)(param_1 + 0x4b0) == 0x30042)) {
          FUN_00a92f90();
          FUN_00e26e90();
          FUN_00e272b0(0x3004f,0x30040);
        }
        if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
          iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
          if (iVar1 != 0) {
            FUN_008f1600(0x100);
            FUN_008f1600(0x80);
            FUN_008f1600(8);
          }
        }
        goto LAB_00b323ca;
      }
    }
  }
  return 0;
}

// 00B323F0  cEm0010Weapon::vf44  size=34  [class]
void __fastcall cEm0010Weapon::vf44(int param_1)

{
  BehaviorWeapon::vf44();
  if (*(int *)(param_1 + 0x4a0) != 100) {
    FUN_00a8c820();
    FUN_00a944d0();
    return;
  }
  return;
}

// 00B32420  cEm0010Weapon::vf4C  size=245  [class]
void __fastcall cEm0010Weapon::vf4C(int *param_1)

{
  int iVar1;
  undefined1 *local_c [3];
  
  local_c[0] = &DAT_016416fa;
  local_c[1] = &DAT_0163b604;
  local_c[2] = &DAT_0163b5f4;
  BehaviorWeapon::vf4C();
  if (param_1[0x128] == 100) {
    return;
  }
  if (param_1[0x231] == 0) goto LAB_00b324de;
  iVar1 = param_1[0x186];
  if (iVar1 == 0) {
    param_1[0x186] = 1;
LAB_00b324c2:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x186] = param_1[0x186] + 1;
    }
  }
  else {
    if (iVar1 == 1) goto LAB_00b324c2;
    if (iVar1 == 2) {
      if (param_1[0x230] != 0) {
        FUN_00a9e290(local_c[param_1[0x230]],0,0,0x3f800000,0,0,0x3f800000);
        param_1[0x186] = 0;
      }
      param_1[0x230] = 0;
    }
  }
  (**(code **)(*param_1 + 100))();
LAB_00b324de:
  if ((param_1[0x232] == 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x25c))(0xffffffff,0,0);
    param_1[0x232] = 1;
  }
  return;
}

