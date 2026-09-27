// src/managers/triggermanager/cActLoadRoom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8A9A0..00C92320, 6 functions

#include "mgrr.h"

// 00C8A9A0  Trigger::cActLoadRoom::vf00  size=6  [class]
undefined * Trigger::cActLoadRoom::vf00(void)

{
  return &DAT_01dbe534;
}

// 00C8A9B0  Trigger::cActLoadRoom::vf08  size=1  [class]
void Trigger::cActLoadRoom::vf08(void)

{
  return;
}

// 00C8A9C0  Trigger::cActLoadRoom::vf0C  size=1  [class]
void Trigger::cActLoadRoom::vf0C(void)

{
  return;
}

// 00C8A9D0  Trigger::cActLoadRoom::vf10  size=1  [class]
void Trigger::cActLoadRoom::vf10(void)

{
  return;
}

// 00C8A9E0  Trigger::cActLoadRoom::vf14  size=1  [class]
void Trigger::cActLoadRoom::vf14(void)

{
  return;
}

// 00C92320  Trigger::cActLoadRoom::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActLoadRoom::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

