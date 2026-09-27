// src/misc/cPl0000Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6880..00B80560, 6 functions

#include "mgrr.h"
#include "cPl0000Weapon.h"

// 00AA6880  cPl0000Weapon::cPl0000Weapon_2  size=49  [class]
undefined4 * __fastcall cPl0000Weapon::cPl0000Weapon_2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA68C0  cPl0000Weapon::vf04  size=6  [class]
undefined * cPl0000Weapon::vf04(void)

{
  return &DAT_01be9dbc;
}

// 00AAF280  cPl0000Weapon::cPl0000Weapon  size=132  [class]
undefined4 * __fastcall cPl0000Weapon::cPl0000Weapon(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  cEspControler::cEspControler();
  *param_1 = cPl0000SaiWeapon::vftable;
  cEspControler::cEspControler();
  FUN_004105d0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00445db0();
  FUN_00405230();
  FUN_00904d60();
  return param_1;
}

// 00AB7CF0  cPl0000Weapon::vf00  size=30  [class]
undefined4 __thiscall cPl0000Weapon::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_121();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B804F0  cPl0000Weapon::vf40  size=99  [class]
undefined4 __fastcall cPl0000Weapon::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorWeapon::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 1;
  FUN_00a92fb0(1);
  FUN_00e08640(uVar2);
  local_c = 1;
  local_8 = 1;
  local_4 = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8c0) = 1;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  return 1;
}

// 00B80560  cPl0000Weapon::vf4C  size=18  [class]
void __fastcall cPl0000Weapon::vf4C(int *param_1)

{
  BehaviorWeapon::vf4C();
                    /* WARNING: Could not recover jumptable at 0x00b80570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

