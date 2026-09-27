// src/managers/triggermanager/cActBattleAreaOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8DE50..00C93F00, 6 functions

#include "mgrr.h"

// 00C8DE50  Trigger::cActBattleAreaOn::vf08  size=1  [class]
void Trigger::cActBattleAreaOn::vf08(void)

{
  return;
}

// 00C8DE60  Trigger::cActBattleAreaOn::vf0C  size=1  [class]
void Trigger::cActBattleAreaOn::vf0C(void)

{
  return;
}

// 00C8DE70  Trigger::cActBattleAreaOn::vf10  size=1  [class]
void Trigger::cActBattleAreaOn::vf10(void)

{
  return;
}

// 00C8DE80  Trigger::cActBattleAreaOn::vf14  size=1  [class]
void Trigger::cActBattleAreaOn::vf14(void)

{
  return;
}

// 00C93EF0  Trigger::cActBattleAreaOn::vf00  size=6  [class]
undefined * Trigger::cActBattleAreaOn::vf00(void)

{
  return &DAT_01dbe228;
}

// 00C93F00  Trigger::cActBattleAreaOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBattleAreaOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

