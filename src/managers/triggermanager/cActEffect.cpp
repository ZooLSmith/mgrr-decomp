// src/managers/triggermanager/cActEffect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89A10..00C91B40, 6 functions

#include "mgrr.h"

// 00C89A10  Trigger::cActEffect::vf08  size=1  [class]
void Trigger::cActEffect::vf08(void)

{
  return;
}

// 00C89A20  Trigger::cActEffect::vf0C  size=1  [class]
void Trigger::cActEffect::vf0C(void)

{
  return;
}

// 00C89A30  Trigger::cActEffect::vf10  size=1  [class]
void Trigger::cActEffect::vf10(void)

{
  return;
}

// 00C89A40  Trigger::cActEffect::vf14  size=1  [class]
void Trigger::cActEffect::vf14(void)

{
  return;
}

// 00C91B30  Trigger::cActEffect::vf00  size=6  [class]
undefined * Trigger::cActEffect::vf00(void)

{
  return &DAT_01dbe084;
}

// 00C91B40  Trigger::cActEffect::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEffect::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

