// src/managers/triggermanager/cActUnloadRoom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8AA40..00C92350, 6 functions

#include "mgrr.h"

// 00C8AA40  Trigger::cActUnloadRoom::vf00  size=6  [class]
undefined * Trigger::cActUnloadRoom::vf00(void)

{
  return &DAT_01dbe530;
}

// 00C8AA50  Trigger::cActUnloadRoom::vf08  size=1  [class]
void Trigger::cActUnloadRoom::vf08(void)

{
  return;
}

// 00C8AA60  Trigger::cActUnloadRoom::vf0C  size=1  [class]
void Trigger::cActUnloadRoom::vf0C(void)

{
  return;
}

// 00C8AA70  Trigger::cActUnloadRoom::vf10  size=1  [class]
void Trigger::cActUnloadRoom::vf10(void)

{
  return;
}

// 00C8AA80  Trigger::cActUnloadRoom::vf14  size=1  [class]
void Trigger::cActUnloadRoom::vf14(void)

{
  return;
}

// 00C92350  Trigger::cActUnloadRoom::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActUnloadRoom::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

