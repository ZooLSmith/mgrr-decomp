// src/managers/triggermanager/cActForceBattleFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8C240..00C93300, 6 functions

#include "mgrr.h"

// 00C8C240  Trigger::cActForceBattleFlag::vf08  size=1  [class]
void Trigger::cActForceBattleFlag::vf08(void)

{
  return;
}

// 00C8C250  Trigger::cActForceBattleFlag::vf0C  size=1  [class]
void Trigger::cActForceBattleFlag::vf0C(void)

{
  return;
}

// 00C8C260  Trigger::cActForceBattleFlag::vf10  size=1  [class]
void Trigger::cActForceBattleFlag::vf10(void)

{
  return;
}

// 00C8C270  Trigger::cActForceBattleFlag::vf14  size=1  [class]
void Trigger::cActForceBattleFlag::vf14(void)

{
  return;
}

// 00C932F0  Trigger::cActForceBattleFlag::vf00  size=6  [class]
undefined * Trigger::cActForceBattleFlag::vf00(void)

{
  return &DAT_01dbe190;
}

// 00C93300  Trigger::cActForceBattleFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActForceBattleFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

