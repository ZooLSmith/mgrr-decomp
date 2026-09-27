// src/managers/triggermanager/cActTurnOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89B50..00C91BC0, 6 functions

#include "mgrr.h"

// 00C89B50  Trigger::cActTurnOff::vf08  size=1  [class]
void Trigger::cActTurnOff::vf08(void)

{
  return;
}

// 00C89B60  Trigger::cActTurnOff::vf0C  size=1  [class]
void Trigger::cActTurnOff::vf0C(void)

{
  return;
}

// 00C89B70  Trigger::cActTurnOff::vf10  size=1  [class]
void Trigger::cActTurnOff::vf10(void)

{
  return;
}

// 00C89B80  Trigger::cActTurnOff::vf14  size=1  [class]
void Trigger::cActTurnOff::vf14(void)

{
  return;
}

// 00C91BB0  Trigger::cActTurnOff::vf00  size=6  [class]
undefined * Trigger::cActTurnOff::vf00(void)

{
  return &DAT_01dbe08c;
}

// 00C91BC0  Trigger::cActTurnOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTurnOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

