// src/managers/triggermanager/cActObjectDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8E0D0..00C94220, 6 functions

#include "mgrr.h"

// 00C8E0D0  Trigger::cActObjectDisp::vf08  size=1  [class]
void Trigger::cActObjectDisp::vf08(void)

{
  return;
}

// 00C8E0E0  Trigger::cActObjectDisp::vf0C  size=1  [class]
void Trigger::cActObjectDisp::vf0C(void)

{
  return;
}

// 00C8E0F0  Trigger::cActObjectDisp::vf10  size=1  [class]
void Trigger::cActObjectDisp::vf10(void)

{
  return;
}

// 00C8E100  Trigger::cActObjectDisp::vf14  size=1  [class]
void Trigger::cActObjectDisp::vf14(void)

{
  return;
}

// 00C94210  Trigger::cActObjectDisp::vf00  size=6  [class]
undefined * Trigger::cActObjectDisp::vf00(void)

{
  return &DAT_01dbe238;
}

// 00C94220  Trigger::cActObjectDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActObjectDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

