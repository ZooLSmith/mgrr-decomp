// src/managers/triggermanager/cActTextOut.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F1A0..00C92290, 7 functions

#include "mgrr.h"

// 00C7F1A0  Trigger::cActTextOut::vf18  size=18  [class]
undefined4 Trigger::cActTextOut::vf18(void)

{
  FUN_00cae000();
  return 1;
}

// 00C8A7D0  Trigger::cActTextOut::vf08  size=1  [class]
void Trigger::cActTextOut::vf08(void)

{
  return;
}

// 00C8A7E0  Trigger::cActTextOut::vf0C  size=1  [class]
void Trigger::cActTextOut::vf0C(void)

{
  return;
}

// 00C8A7F0  Trigger::cActTextOut::vf10  size=1  [class]
void Trigger::cActTextOut::vf10(void)

{
  return;
}

// 00C8A800  Trigger::cActTextOut::vf14  size=1  [class]
void Trigger::cActTextOut::vf14(void)

{
  return;
}

// 00C92280  Trigger::cActTextOut::vf00  size=6  [class]
undefined * Trigger::cActTextOut::vf00(void)

{
  return &DAT_01dbe0dc;
}

// 00C92290  Trigger::cActTextOut::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActTextOut::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

