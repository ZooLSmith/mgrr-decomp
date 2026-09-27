// src/managers/triggermanager/cActCameraFocusOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F030..00C92050, 7 functions

#include "mgrr.h"

// 00C7F030  Trigger::cActCameraFocusOff::vf18  size=18  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Trigger::cActCameraFocusOff::vf18(void)

{
  _DAT_01dbd898 = 0x78;
  return 1;
}

// 00C8A230  Trigger::cActCameraFocusOff::vf08  size=1  [class]
void Trigger::cActCameraFocusOff::vf08(void)

{
  return;
}

// 00C8A240  Trigger::cActCameraFocusOff::vf0C  size=1  [class]
void Trigger::cActCameraFocusOff::vf0C(void)

{
  return;
}

// 00C8A250  Trigger::cActCameraFocusOff::vf10  size=1  [class]
void Trigger::cActCameraFocusOff::vf10(void)

{
  return;
}

// 00C8A260  Trigger::cActCameraFocusOff::vf14  size=1  [class]
void Trigger::cActCameraFocusOff::vf14(void)

{
  return;
}

// 00C92040  Trigger::cActCameraFocusOff::vf00  size=6  [class]
undefined * Trigger::cActCameraFocusOff::vf00(void)

{
  return &DAT_01dbe0b8;
}

// 00C92050  Trigger::cActCameraFocusOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCameraFocusOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

