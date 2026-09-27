// src/managers/triggermanager/cActSESimple.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8AFF0..00C92750, 6 functions

#include "mgrr.h"

// 00C8AFF0  Trigger::cActSESimple::vf08  size=1  [class]
void Trigger::cActSESimple::vf08(void)

{
  return;
}

// 00C8B000  Trigger::cActSESimple::vf0C  size=1  [class]
void Trigger::cActSESimple::vf0C(void)

{
  return;
}

// 00C8B010  Trigger::cActSESimple::vf10  size=1  [class]
void Trigger::cActSESimple::vf10(void)

{
  return;
}

// 00C8B020  Trigger::cActSESimple::vf14  size=1  [class]
void Trigger::cActSESimple::vf14(void)

{
  return;
}

// 00C92740  Trigger::cActSESimple::vf00  size=6  [class]
undefined * Trigger::cActSESimple::vf00(void)

{
  return &DAT_01dbe100;
}

// 00C92750  Trigger::cActSESimple::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSESimple::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

