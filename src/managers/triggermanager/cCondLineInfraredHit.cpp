// src/managers/triggermanager/cCondLineInfraredHit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CF00..00C86660, 4 functions

#include "mgrr.h"

// 00C7CF00  Trigger::cCondLineInfraredHit::vf10  size=1  [class]
void Trigger::cCondLineInfraredHit::vf10(void)

{
  return;
}

// 00C7CF10  Trigger::cCondLineInfraredHit::vf14  size=15  [class]
void __fastcall Trigger::cCondLineInfraredHit::vf14(int param_1)

{
  FUN_00c2d7f0(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CF20  Trigger::cCondLineInfraredHit::vf1C  size=16  [class]
void __thiscall Trigger::cCondLineInfraredHit::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C86660  Trigger::cCondLineInfraredHit::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondLineInfraredHit::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

