// src/managers/triggermanager/cActDoorDispOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8EB70..00C94660, 6 functions

#include "mgrr.h"

// 00C8EB70  Trigger::cActDoorDispOff::vf08  size=1  [class]
void Trigger::cActDoorDispOff::vf08(void)

{
  return;
}

// 00C8EB80  Trigger::cActDoorDispOff::vf0C  size=1  [class]
void Trigger::cActDoorDispOff::vf0C(void)

{
  return;
}

// 00C8EB90  Trigger::cActDoorDispOff::vf10  size=1  [class]
void Trigger::cActDoorDispOff::vf10(void)

{
  return;
}

// 00C8EBA0  Trigger::cActDoorDispOff::vf14  size=1  [class]
void Trigger::cActDoorDispOff::vf14(void)

{
  return;
}

// 00C94650  Trigger::cActDoorDispOff::vf00  size=6  [class]
undefined * Trigger::cActDoorDispOff::vf00(void)

{
  return &DAT_01dbe27c;
}

// 00C94660  Trigger::cActDoorDispOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDoorDispOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

