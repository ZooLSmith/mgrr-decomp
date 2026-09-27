// src/managers/triggermanager/cActHackEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FA00..00C93000, 7 functions

#include "mgrr.h"

// 00C7FA00  Trigger::cActHackEnd::vf18  size=8  [class]
undefined4 Trigger::cActHackEnd::vf18(void)

{
  return 1;
}

// 00C8BF20  Trigger::cActHackEnd::vf08  size=1  [class]
void Trigger::cActHackEnd::vf08(void)

{
  return;
}

// 00C8BF30  Trigger::cActHackEnd::vf0C  size=1  [class]
void Trigger::cActHackEnd::vf0C(void)

{
  return;
}

// 00C8BF40  Trigger::cActHackEnd::vf10  size=1  [class]
void Trigger::cActHackEnd::vf10(void)

{
  return;
}

// 00C8BF50  Trigger::cActHackEnd::vf14  size=1  [class]
void Trigger::cActHackEnd::vf14(void)

{
  return;
}

// 00C92FF0  Trigger::cActHackEnd::vf00  size=6  [class]
undefined * Trigger::cActHackEnd::vf00(void)

{
  return &DAT_01dbe160;
}

// 00C93000  Trigger::cActHackEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActHackEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

