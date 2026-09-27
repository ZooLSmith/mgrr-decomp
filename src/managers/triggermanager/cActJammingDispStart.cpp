// src/managers/triggermanager/cActJammingDispStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C804E0..00C937E0, 7 functions

#include "mgrr.h"

// 00C804E0  Trigger::cActJammingDispStart::vf18  size=13  [class]
void Trigger::cActJammingDispStart::vf18(void)

{
  DAT_01dc0ec8 = 1;
  return;
}

// 00C8CCE0  Trigger::cActJammingDispStart::vf08  size=1  [class]
void Trigger::cActJammingDispStart::vf08(void)

{
  return;
}

// 00C8CCF0  Trigger::cActJammingDispStart::vf0C  size=1  [class]
void Trigger::cActJammingDispStart::vf0C(void)

{
  return;
}

// 00C8CD00  Trigger::cActJammingDispStart::vf10  size=1  [class]
void Trigger::cActJammingDispStart::vf10(void)

{
  return;
}

// 00C8CD10  Trigger::cActJammingDispStart::vf14  size=1  [class]
void Trigger::cActJammingDispStart::vf14(void)

{
  return;
}

// 00C937D0  Trigger::cActJammingDispStart::vf00  size=6  [class]
undefined * Trigger::cActJammingDispStart::vf00(void)

{
  return &DAT_01dbe1c8;
}

// 00C937E0  Trigger::cActJammingDispStart::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActJammingDispStart::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

