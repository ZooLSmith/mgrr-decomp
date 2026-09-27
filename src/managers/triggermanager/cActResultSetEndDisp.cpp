// src/managers/triggermanager/cActResultSetEndDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F9C0..00C92F80, 7 functions

#include "mgrr.h"

// 00C7F9C0  Trigger::cActResultSetEndDisp::vf18  size=18  [class]
undefined4 Trigger::cActResultSetEndDisp::vf18(void)

{
  DAT_01dc130c = 0;
  return 1;
}

// 00C8BDE0  Trigger::cActResultSetEndDisp::vf08  size=1  [class]
void Trigger::cActResultSetEndDisp::vf08(void)

{
  return;
}

// 00C8BDF0  Trigger::cActResultSetEndDisp::vf0C  size=1  [class]
void Trigger::cActResultSetEndDisp::vf0C(void)

{
  return;
}

// 00C8BE00  Trigger::cActResultSetEndDisp::vf10  size=1  [class]
void Trigger::cActResultSetEndDisp::vf10(void)

{
  return;
}

// 00C8BE10  Trigger::cActResultSetEndDisp::vf14  size=1  [class]
void Trigger::cActResultSetEndDisp::vf14(void)

{
  return;
}

// 00C92F70  Trigger::cActResultSetEndDisp::vf00  size=6  [class]
undefined * Trigger::cActResultSetEndDisp::vf00(void)

{
  return &DAT_01dbe158;
}

// 00C92F80  Trigger::cActResultSetEndDisp::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActResultSetEndDisp::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

