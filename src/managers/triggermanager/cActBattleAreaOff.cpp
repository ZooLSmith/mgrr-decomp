// src/managers/triggermanager/cActBattleAreaOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8DEF0..00C93F40, 6 functions

#include "mgrr.h"

// 00C8DEF0  Trigger::cActBattleAreaOff::vf08  size=1  [class]
void Trigger::cActBattleAreaOff::vf08(void)

{
  return;
}

// 00C8DF00  Trigger::cActBattleAreaOff::vf0C  size=1  [class]
void Trigger::cActBattleAreaOff::vf0C(void)

{
  return;
}

// 00C8DF10  Trigger::cActBattleAreaOff::vf10  size=1  [class]
void Trigger::cActBattleAreaOff::vf10(void)

{
  return;
}

// 00C8DF20  Trigger::cActBattleAreaOff::vf14  size=1  [class]
void Trigger::cActBattleAreaOff::vf14(void)

{
  return;
}

// 00C93F30  Trigger::cActBattleAreaOff::vf00  size=6  [class]
undefined * Trigger::cActBattleAreaOff::vf00(void)

{
  return &DAT_01dbe22c;
}

// 00C93F40  Trigger::cActBattleAreaOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBattleAreaOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

