// src/managers/triggermanager/cActFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8E8F0..00C94560, 6 functions

#include "mgrr.h"

// 00C8E8F0  Trigger::cActFade::vf08  size=1  [class]
void Trigger::cActFade::vf08(void)

{
  return;
}

// 00C8E900  Trigger::cActFade::vf0C  size=1  [class]
void Trigger::cActFade::vf0C(void)

{
  return;
}

// 00C8E910  Trigger::cActFade::vf10  size=1  [class]
void Trigger::cActFade::vf10(void)

{
  return;
}

// 00C8E920  Trigger::cActFade::vf14  size=1  [class]
void Trigger::cActFade::vf14(void)

{
  return;
}

// 00C94550  Trigger::cActFade::vf00  size=6  [class]
undefined * Trigger::cActFade::vf00(void)

{
  return &DAT_01dbe26c;
}

// 00C94560  Trigger::cActFade::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFade::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

