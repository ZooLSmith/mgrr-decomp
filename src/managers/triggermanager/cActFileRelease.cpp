// src/managers/triggermanager/cActFileRelease.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FFA0..00C933C0, 7 functions

#include "mgrr.h"

// 00C7FFA0  Trigger::cActFileRelease::vf18  size=5  [class]
undefined4 Trigger::cActFileRelease::vf18(void)

{
  return 0;
}

// 00C8C420  Trigger::cActFileRelease::vf08  size=1  [class]
void Trigger::cActFileRelease::vf08(void)

{
  return;
}

// 00C8C430  Trigger::cActFileRelease::vf0C  size=1  [class]
void Trigger::cActFileRelease::vf0C(void)

{
  return;
}

// 00C8C440  Trigger::cActFileRelease::vf10  size=1  [class]
void Trigger::cActFileRelease::vf10(void)

{
  return;
}

// 00C8C450  Trigger::cActFileRelease::vf14  size=1  [class]
void Trigger::cActFileRelease::vf14(void)

{
  return;
}

// 00C933B0  Trigger::cActFileRelease::vf00  size=6  [class]
undefined * Trigger::cActFileRelease::vf00(void)

{
  return &DAT_01dbe19c;
}

// 00C933C0  Trigger::cActFileRelease::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFileRelease::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

