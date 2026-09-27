// src/managers/triggermanager/cActFlagOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8A900..00C922F0, 6 functions

#include "mgrr.h"

// 00C8A900  Trigger::cActFlagOff::vf00  size=6  [class]
undefined * Trigger::cActFlagOff::vf00(void)

{
  return &DAT_01dbe538;
}

// 00C8A910  Trigger::cActFlagOff::vf08  size=1  [class]
void Trigger::cActFlagOff::vf08(void)

{
  return;
}

// 00C8A920  Trigger::cActFlagOff::vf0C  size=1  [class]
void Trigger::cActFlagOff::vf0C(void)

{
  return;
}

// 00C8A930  Trigger::cActFlagOff::vf10  size=1  [class]
void Trigger::cActFlagOff::vf10(void)

{
  return;
}

// 00C8A940  Trigger::cActFlagOff::vf14  size=1  [class]
void Trigger::cActFlagOff::vf14(void)

{
  return;
}

// 00C922F0  Trigger::cActFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

