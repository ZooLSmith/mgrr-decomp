// src/managers/triggermanager/cActText.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8A730..00C92250, 6 functions

#include "mgrr.h"

// 00C8A730  Trigger::cActText::vf08  size=1  [class]
void Trigger::cActText::vf08(void)

{
  return;
}

// 00C8A740  Trigger::cActText::vf0C  size=1  [class]
void Trigger::cActText::vf0C(void)

{
  return;
}

// 00C8A750  Trigger::cActText::vf10  size=1  [class]
void Trigger::cActText::vf10(void)

{
  return;
}

// 00C8A760  Trigger::cActText::vf14  size=1  [class]
void Trigger::cActText::vf14(void)

{
  return;
}

// 00C92240  Trigger::cActText::vf00  size=6  [class]
undefined * Trigger::cActText::vf00(void)

{
  return &DAT_01dbe0d8;
}

// 00C92250  Trigger::cActText::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActText::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

