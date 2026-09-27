// src/managers/triggermanager/cActFlagOnDlc2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8FB00..00C94C80, 6 functions

#include "mgrr.h"

// 00C8FB00  Trigger::cActFlagOnDlc2::vf00  size=6  [class]
undefined * Trigger::cActFlagOnDlc2::vf00(void)

{
  return &DAT_01dbe330;
}

// 00C8FB10  Trigger::cActFlagOnDlc2::vf08  size=1  [class]
void Trigger::cActFlagOnDlc2::vf08(void)

{
  return;
}

// 00C8FB20  Trigger::cActFlagOnDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc2::vf0C(void)

{
  return;
}

// 00C8FB30  Trigger::cActFlagOnDlc2::vf10  size=1  [class]
void Trigger::cActFlagOnDlc2::vf10(void)

{
  return;
}

// 00C8FB40  Trigger::cActFlagOnDlc2::vf14  size=1  [class]
void Trigger::cActFlagOnDlc2::vf14(void)

{
  return;
}

// 00C94C80  Trigger::cActFlagOnDlc2::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOnDlc2::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

