// src/enemy/emc220/Emc220Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00822260..00AB9F80, 12 functions

#include "mgrr.h"
#include "Emc220Weapon.h"

// 00822260  Emc220Weapon::vf54  size=5  [class]
void __fastcall Emc220Weapon::vf54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_90 [16];
  undefined1 auStack_50 [76];
  
  Behavior::vf54();
  if (*(int *)(param_1 + 0x4a0) == 100) {
    switchD_0080dbae::default();
  }
  else if (*(int *)(param_1 + 0x8a0) != 0) {
    FUN_0091df60(auStack_50);
    iVar1 = FUN_00a12210(0);
    if (iVar1 == 0) {
      FUN_01005140(auStack_90);
      puVar3 = auStack_90;
      puVar4 = (undefined4 *)(param_1 + 0x10);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    }
    else {
      FUN_01005140(auStack_90);
      puVar3 = auStack_90;
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    switchD_0080dbae::default();
    if ((((*(int *)(param_1 + 0x87c) != 0) && (*(char *)(param_1 + 0x470) != '\0')) &&
        ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) && (*(char *)(param_1 + 0x471) != '\0')) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00822270  Emc220Weapon::vf1C8  size=11  [class]
void __fastcall Emc220Weapon::vf1C8(int param_1)

{
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return;
}

// 00822280  Emc220Weapon::setCutCrerateInfo  size=45  [class]
void Emc220Weapon::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x42000;
  if ((DAT_01bea060 & 0x2000000) != 0) {
    uVar1 = 0x42220;
  }
  if (0 < param_3) {
    do {
      *param_1 = uVar1;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00832120  Emc220Weapon::startup  size=314  [class]
undefined4 __fastcall Emc220Weapon::startup(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float local_24;
  undefined4 local_14;
  
  iVar1 = BehaviorWeapon::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  FUN_00410540(0x20,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
  if (iVar1 != 0) {
    local_24 = 1.0;
    if (*(int *)(param_1 + 0x4b0) == 0x3c371) {
      local_24 = 2.3;
    }
    *(undefined4 *)(iVar1 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(float *)(iVar1 + 0x594) = local_24;
    *(undefined4 *)(iVar1 + 0x590) = 0x3e800000;
    *(undefined4 *)(iVar1 + 0x570) = 0;
    *(undefined4 *)(iVar1 + 0x574) = 0xbe000000;
    *(float *)(iVar1 + 0x578) = local_24 * 0.5 - 0.1;
    *(undefined4 *)(iVar1 + 0x57c) = local_14;
    *(undefined4 *)(iVar1 + 0x580) = 0x3fc90fdb;
    *(undefined4 *)(iVar1 + 0x584) = 0;
    *(undefined4 *)(iVar1 + 0x588) = 0;
    *(undefined4 *)(iVar1 + 0x58c) = local_14;
    FUN_00d771d0(1);
    uVar3 = FUN_00a8d2a0();
    FUN_00a93a00(iVar1,uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return 1;
}

// 008322A0  Emc220Weapon::vf30  size=81  [class]
void __fastcall Emc220Weapon::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35a10;
    (**(code **)(*piVar2 + 4))(&DAT_01b35a10);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_0082f9f0(param_1 + 0x8e0,param_1 + 0x8d0);
    }
  }
  return;
}

// 00832300  Emc220Weapon::vf25C  size=249  [class]
void __thiscall Emc220Weapon::vf25C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar2 = param_4;
  BehaviorWeapon::vf25C(param_2,param_3,param_4);
  if (iVar2 == 0) {
    iVar2 = param_1[0xdc];
  }
  else {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9ca0;
      (**(code **)(*piVar1 + 4))(&DAT_01be9ca0);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        iVar2 = FUN_00acdea0();
        if (iVar2 == 0) {
          return;
        }
        if (*(int *)(iVar2 + 0x4f0) == 0) {
          return;
        }
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        return;
      }
    }
    if (param_1[0x1ec] != 0) {
      (**(code **)(*param_1 + 0xd8))(1);
    }
    iVar2 = param_1[0xdc];
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  param_4 = param_1[0x13c];
  DebrisExplodeManager::addHandle(&param_4,0);
  return;
}

// 008373E0  Emc220Weapon::vf44  size=73  [class]
void __fastcall Emc220Weapon::vf44(int param_1)

{
  BehaviorWeapon::vf44();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  return;
}

// 0083D810  Emc220Weapon::vf48  size=143  [class]
/* WARNING: Type propagation algorithm not settling */

void __fastcall Emc220Weapon::vf48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_24 [8];
  
  BehaviorDebrisActor::vf48();
  FUN_0083b500();
  if (*(int *)(param_1 + 0x8f0) != 0) {
    iVar1 = FUN_00a8e520();
    if ((iVar1 == 0) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(local_24,0);
      if (local_24[0] != 0) {
        iVar1 = FUN_0091aa00();
        if (iVar1 == 0) {
          local_24[1] = 0;
          local_24[2] = 0xbf800000;
          local_24[3] = 0;
          FUN_0091a7e0(local_24 + 1);
        }
      }
    }
  }
  uVar2 = FUN_00a8e520();
  *(undefined4 *)(param_1 + 0x8f0) = uVar2;
  return;
}

// 00AB3780  Emc220Weapon::Emc220Weapon  size=49  [class]
undefined4 * __fastcall Emc220Weapon::Emc220Weapon(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB37C0  Emc220Weapon::vf04  size=6  [class]
undefined * Emc220Weapon::vf04(void)

{
  return &DAT_01b35a14;
}

// 00AB37D0  Emc220Weapon::vf1D0  size=3  [class]
void Emc220Weapon::vf1D0(void)

{
  return;
}

// 00AB9F80  Emc220Weapon::destruct  size=105  [class]
undefined4 * __thiscall Emc220Weapon::destruct(undefined4 *param_1,byte param_2)

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

