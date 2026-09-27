// src/managers/triggermanager/cActFlagOffDlc3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8FCE0..00C94D10, 6 functions

#include "mgrr.h"

// 00C8FCE0  Trigger::cActFlagOffDlc3::vf00  size=6  [class]
undefined * Trigger::cActFlagOffDlc3::vf00(void)

{
  return &DAT_01dbe324;
}

// 00C8FCF0  Trigger::cActFlagOffDlc3::vf08  size=1  [class]
void Trigger::cActFlagOffDlc3::vf08(void)

{
  return;
}

// 00C8FD00  Trigger::cActFlagOffDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc3::vf0C(void)

{
  return;
}

// 00C8FD10  Trigger::cActFlagOffDlc3::vf10  size=1  [class]
void Trigger::cActFlagOffDlc3::vf10(void)

{
  return;
}

// 00C8FD20  Trigger::cActFlagOffDlc3::vf14  size=1  [class]
void Trigger::cActFlagOffDlc3::vf14(void)

{
  return;
}

// 00C94D10  Trigger::cActFlagOffDlc3::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOffDlc3::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

