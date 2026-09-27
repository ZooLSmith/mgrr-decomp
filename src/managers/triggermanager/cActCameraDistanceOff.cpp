// src/managers/triggermanager/cActCameraDistanceOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F010..00C91FD0, 7 functions

#include "mgrr.h"

// 00C7F010  Trigger::cActCameraDistanceOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraDistanceOff::vf18(void)

{
  _DAT_01dbd8a4 = 0x78;
  return 1;
}

// 00C8A0F0  Trigger::cActCameraDistanceOff::vf08  size=1  [class]
void Trigger::cActCameraDistanceOff::vf08(void)

{
  return;
}

// 00C8A100  Trigger::cActCameraDistanceOff::vf0C  size=1  [class]
void Trigger::cActCameraDistanceOff::vf0C(void)

{
  return;
}

// 00C8A110  Trigger::cActCameraDistanceOff::vf10  size=1  [class]
void Trigger::cActCameraDistanceOff::vf10(void)

{
  return;
}

// 00C8A120  Trigger::cActCameraDistanceOff::vf14  size=1  [class]
void Trigger::cActCameraDistanceOff::vf14(void)

{
  return;
}

// 00C91FC0  Trigger::cActCameraDistanceOff::vf00  size=6  [class]
undefined * Trigger::cActCameraDistanceOff::vf00(void)

{
  return &DAT_01dbe0b0;
}

// 00C91FD0  Trigger::cActCameraDistanceOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraDistanceOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

