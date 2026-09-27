// src/managers/triggermanager/cActSeObject.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8F2F0..00C94950, 6 functions

#include "mgrr.h"

// 00C8F2F0  Trigger::cActSeObject::vf08  size=1  [class]
void Trigger::cActSeObject::vf08(void)

{
  return;
}

// 00C8F300  Trigger::cActSeObject::vf0C  size=1  [class]
void Trigger::cActSeObject::vf0C(void)

{
  return;
}

// 00C8F310  Trigger::cActSeObject::vf10  size=1  [class]
void Trigger::cActSeObject::vf10(void)

{
  return;
}

// 00C8F320  Trigger::cActSeObject::vf14  size=1  [class]
void Trigger::cActSeObject::vf14(void)

{
  return;
}

// 00C94940  Trigger::cActSeObject::vf00  size=6  [class]
undefined * Trigger::cActSeObject::vf00(void)

{
  return &DAT_01dbe2a8;
}

// 00C94950  Trigger::cActSeObject::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSeObject::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

