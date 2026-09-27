// src/managers/triggermanager/cActFlagOffDlc2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8FBA0..00C94CB0, 6 functions

#include "mgrr.h"

// 00C8FBA0  Trigger::cActFlagOffDlc2::vf00  size=6  [class]
undefined * Trigger::cActFlagOffDlc2::vf00(void)

{
  return &DAT_01dbe32c;
}

// 00C8FBB0  Trigger::cActFlagOffDlc2::vf08  size=1  [class]
void Trigger::cActFlagOffDlc2::vf08(void)

{
  return;
}

// 00C8FBC0  Trigger::cActFlagOffDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc2::vf0C(void)

{
  return;
}

// 00C8FBD0  Trigger::cActFlagOffDlc2::vf10  size=1  [class]
void Trigger::cActFlagOffDlc2::vf10(void)

{
  return;
}

// 00C8FBE0  Trigger::cActFlagOffDlc2::vf14  size=1  [class]
void Trigger::cActFlagOffDlc2::vf14(void)

{
  return;
}

// 00C94CB0  Trigger::cActFlagOffDlc2::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOffDlc2::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

