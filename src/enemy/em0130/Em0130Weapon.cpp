// src/enemy/em0130/Em0130Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006063A0..00ABA5B0, 6 functions

#include "mgrr.h"
#include "Em0130Weapon.h"

// 006063A0  Em0130Weapon::vf40  size=101  [class]
undefined4 __fastcall Em0130Weapon::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorWeapon::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
  uVar2 = 2;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 1;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f1600(8);
    }
  }
  return 1;
}

// 00606410  Em0130Weapon::vf44  size=5  [class]
void __fastcall Em0130Weapon::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x8a0) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a0));
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(char *)(param_1 + 0x8a4) != '\0')) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x28))((undefined4 *)(param_1 + 0x8a8));
    *(undefined4 *)(param_1 + 0x8a8) = 0;
  }
  Behavior::vf44();
  return;
}

// 00606420  Em0130Weapon::vf4C  size=29  [class]
void __fastcall Em0130Weapon::vf4C(int *param_1)

{
  BehaviorWeapon::vf4C();
  if (param_1[0x231] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00606439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  return;
}

// 00AB59C0  Em0130Weapon::Em0130Weapon  size=49  [class]
undefined4 * __fastcall Em0130Weapon::Em0130Weapon(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AB5A00  Em0130Weapon::vf04  size=6  [class]
undefined * Em0130Weapon::vf04(void)

{
  return &DAT_01b35514;
}

// 00ABA5B0  Em0130Weapon::vf00  size=105  [class]
undefined4 * __thiscall Em0130Weapon::vf00(undefined4 *param_1,byte param_2)

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

