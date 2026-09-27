// src/enemy/em0310/Em0310Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E1F0..00AB7110, 7 functions

#include "types.h"

// 0057E1F0  Em0310Weapon::vf40  size=41  [class]
undefined4 __fastcall Em0310Weapon::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorWeapon::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c4) = 0x43340000;
  return 1;
}

// 0057E220  Em0310Weapon::vf44  size=31  [class]
void __fastcall Em0310Weapon::vf44(int param_1)

{
  int *piVar1;
  
  BehaviorWeapon::vf44();
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x8c0);
  return;
}

// 00585C30  Em0310Weapon::vf4C  size=156  [class]
void __fastcall Em0310Weapon::vf4C(int *param_1)

{
  float fVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  BehaviorWeapon::vf4C();
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  if (param_1[0x230] != 0) {
    fVar1 = (float)param_1[0x231];
    param_1[0x231] = (int)(float)((float10)fVar1 - fVar5);
    fVar2 = (float10)0;
    if ((float10)fVar1 - fVar5 <= fVar2) {
      fVar5 = (float10)(float)param_1[0x232] - fVar5 * (float10)0.025;
      param_1[0x232] = (int)(float)fVar5;
      if (fVar5 < fVar2 != (fVar5 == fVar2)) {
        (**(code **)(*param_1 + 0x20))();
        FUN_009fdde0();
        return;
      }
      iVar4 = 0;
      iVar3 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          *(float *)(iVar4 + 0x1c + param_1[200]) = (float)fVar5;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar3 < (short)param_1[0xc9]);
        return;
      }
    }
  }
  return;
}

// 00590A80  Em0310Weapon::vf54  size=81  [class]
void __fastcall Em0310Weapon::vf54(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [19];
  
  BehaviorWeapon::vf4C();
  if (*(int *)(param_1 + 0x8c0) != 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_01005140(local_50);
    puVar2 = local_50;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    switchD_0080dbae::default();
  }
  return;
}

// 00AA6470  Em0310Weapon::Em0310Weapon  size=44  [class]
undefined4 * __fastcall Em0310Weapon::Em0310Weapon(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  param_1[0x230] = 0;
  return param_1;
}

// 00AA64A0  Em0310Weapon::vf04  size=6  [class]
undefined * Em0310Weapon::vf04(void)

{
  return &DAT_01b35144;
}

// 00AB7110  Em0310Weapon::vf00  size=105  [class]
undefined4 * __thiscall Em0310Weapon::vf00(undefined4 *param_1,byte param_2)

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

