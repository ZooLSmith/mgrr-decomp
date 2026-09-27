// src/misc/BulletBaseDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A9BBC0..00AC31B0, 5 functions

#include "types.h"

// 00A9BBC0  BulletBaseDLC::vf304  size=41  [class]
void __fastcall BulletBaseDLC::vf304(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x930) == 0x11) {
    iVar1 = FUN_00acae60();
    if ((iVar1 == 0) && (*(int *)(param_1 + 0xc00) != 0)) {
      *(undefined4 *)(param_1 + 0x618) = 2;
    }
  }
  return;
}

// 00AB6190  BulletBaseDLC::BulletBaseDLC  size=18  [class]
undefined4 * __fastcall BulletBaseDLC::BulletBaseDLC(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AB61B0  BulletBaseDLC::vf04  size=6  [class]
undefined * BulletBaseDLC::vf04(void)

{
  return &DAT_01be9c48;
}

// 00ABA990  BulletBaseDLC::vf00  size=30  [class]
undefined4 __thiscall BulletBaseDLC::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_120();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC31B0  BulletBaseDLC::vf300  size=15  [class]
void __fastcall BulletBaseDLC::vf300(int param_1)

{
  if (*(int *)(param_1 + 0x930) == 0x11) {
    hkpAllCdPointCollector::hkpAllCdPointCollector();
    return;
  }
  return;
}

