// src/managers/triggermanager/cActCameraAngleOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F090..00C920D0, 7 functions

#include "mgrr.h"

// 00C7F090  Trigger::cActCameraAngleOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraAngleOff::vf18(void)

{
  _DAT_01dbd878 = 0x78;
  return 1;
}

// 00C8A370  Trigger::cActCameraAngleOff::vf08  size=1  [class]
void Trigger::cActCameraAngleOff::vf08(void)

{
  return;
}

// 00C8A380  Trigger::cActCameraAngleOff::vf0C  size=1  [class]
void Trigger::cActCameraAngleOff::vf0C(void)

{
  return;
}

// 00C8A390  Trigger::cActCameraAngleOff::vf10  size=1  [class]
void Trigger::cActCameraAngleOff::vf10(void)

{
  return;
}

// 00C8A3A0  Trigger::cActCameraAngleOff::vf14  size=1  [class]
void Trigger::cActCameraAngleOff::vf14(void)

{
  return;
}

// 00C920C0  Trigger::cActCameraAngleOff::vf00  size=6  [class]
undefined * Trigger::cActCameraAngleOff::vf00(void)

{
  return &DAT_01dbe0c0;
}

// 00C920D0  Trigger::cActCameraAngleOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraAngleOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

