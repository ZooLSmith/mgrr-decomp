// src/managers/triggermanager/cActCamOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EB10..00C917C0, 7 functions

#include "mgrr.h"

// 00C7EB10  Trigger::cActCamOff::vf18  size=23  [class]
undefined4 Trigger::cActCamOff::vf18(void)

{
  if (DAT_01dbd8a8 != 0) {
    FUN_00ac9fe0();
  }
  return 1;
}

// 00C893D0  Trigger::cActCamOff::vf08  size=1  [class]
void Trigger::cActCamOff::vf08(void)

{
  return;
}

// 00C893E0  Trigger::cActCamOff::vf0C  size=1  [class]
void Trigger::cActCamOff::vf0C(void)

{
  return;
}

// 00C893F0  Trigger::cActCamOff::vf10  size=1  [class]
void Trigger::cActCamOff::vf10(void)

{
  return;
}

// 00C89400  Trigger::cActCamOff::vf14  size=1  [class]
void Trigger::cActCamOff::vf14(void)

{
  return;
}

// 00C917B0  Trigger::cActCamOff::vf00  size=6  [class]
undefined * Trigger::cActCamOff::vf00(void)

{
  return &DAT_01dbe04c;
}

// 00C917C0  Trigger::cActCamOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

