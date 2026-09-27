// src/managers/triggermanager/cActCollisionOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8B130..00C92910, 6 functions

#include "mgrr.h"

// 00C8B130  Trigger::cActCollisionOff::vf08  size=1  [class]
void Trigger::cActCollisionOff::vf08(void)

{
  return;
}

// 00C8B140  Trigger::cActCollisionOff::vf0C  size=1  [class]
void Trigger::cActCollisionOff::vf0C(void)

{
  return;
}

// 00C8B150  Trigger::cActCollisionOff::vf10  size=1  [class]
void Trigger::cActCollisionOff::vf10(void)

{
  return;
}

// 00C8B160  Trigger::cActCollisionOff::vf14  size=1  [class]
void Trigger::cActCollisionOff::vf14(void)

{
  return;
}

// 00C92900  Trigger::cActCollisionOff::vf00  size=6  [class]
undefined * Trigger::cActCollisionOff::vf00(void)

{
  return &DAT_01dbe108;
}

// 00C92910  Trigger::cActCollisionOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCollisionOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

