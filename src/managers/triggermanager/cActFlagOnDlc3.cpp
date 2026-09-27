// src/managers/triggermanager/cActFlagOnDlc3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8FC40..00C94CE0, 6 functions

#include "mgrr.h"

// 00C8FC40  Trigger::cActFlagOnDlc3::vf00  size=6  [class]
undefined * Trigger::cActFlagOnDlc3::vf00(void)

{
  return &DAT_01dbe328;
}

// 00C8FC50  Trigger::cActFlagOnDlc3::vf08  size=1  [class]
void Trigger::cActFlagOnDlc3::vf08(void)

{
  return;
}

// 00C8FC60  Trigger::cActFlagOnDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc3::vf0C(void)

{
  return;
}

// 00C8FC70  Trigger::cActFlagOnDlc3::vf10  size=1  [class]
void Trigger::cActFlagOnDlc3::vf10(void)

{
  return;
}

// 00C8FC80  Trigger::cActFlagOnDlc3::vf14  size=1  [class]
void Trigger::cActFlagOnDlc3::vf14(void)

{
  return;
}

// 00C94CE0  Trigger::cActFlagOnDlc3::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActFlagOnDlc3::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

