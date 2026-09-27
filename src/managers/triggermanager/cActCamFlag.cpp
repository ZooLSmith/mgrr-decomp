// src/managers/triggermanager/cActCamFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8BFC0..00C93040, 6 functions

#include "mgrr.h"

// 00C8BFC0  Trigger::cActCamFlag::vf08  size=1  [class]
void Trigger::cActCamFlag::vf08(void)

{
  return;
}

// 00C8BFD0  Trigger::cActCamFlag::vf0C  size=1  [class]
void Trigger::cActCamFlag::vf0C(void)

{
  return;
}

// 00C8BFE0  Trigger::cActCamFlag::vf10  size=1  [class]
void Trigger::cActCamFlag::vf10(void)

{
  return;
}

// 00C8BFF0  Trigger::cActCamFlag::vf14  size=1  [class]
void Trigger::cActCamFlag::vf14(void)

{
  return;
}

// 00C93030  Trigger::cActCamFlag::vf00  size=6  [class]
undefined * Trigger::cActCamFlag::vf00(void)

{
  return &DAT_01dbe164;
}

// 00C93040  Trigger::cActCamFlag::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamFlag::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

