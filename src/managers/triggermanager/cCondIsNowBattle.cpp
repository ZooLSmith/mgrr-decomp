// src/managers/triggermanager/cCondIsNowBattle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CDB0..00C86600, 4 functions

#include "mgrr.h"

// 00C7CDB0  Trigger::cCondIsNowBattle::vf10  size=1  [class]
void Trigger::cCondIsNowBattle::vf10(void)

{
  return;
}

// 00C7CDC0  Trigger::cCondIsNowBattle::vf14  size=10  [class]
void Trigger::cCondIsNowBattle::vf14(void)

{
  FUN_00c1bd80();
  return;
}

// 00C7CDD0  Trigger::cCondIsNowBattle::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsNowBattle::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86600  Trigger::cCondIsNowBattle::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsNowBattle::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

