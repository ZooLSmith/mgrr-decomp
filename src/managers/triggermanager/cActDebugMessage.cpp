// src/managers/triggermanager/cActDebugMessage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F120..00C92190, 7 functions

#include "mgrr.h"

// 00C7F120  Trigger::cActDebugMessage::vf18  size=5  [class]
undefined4 Trigger::cActDebugMessage::vf18(void)

{
  return 0;
}

// 00C8A550  Trigger::cActDebugMessage::vf08  size=1  [class]
void Trigger::cActDebugMessage::vf08(void)

{
  return;
}

// 00C8A560  Trigger::cActDebugMessage::vf0C  size=1  [class]
void Trigger::cActDebugMessage::vf0C(void)

{
  return;
}

// 00C8A570  Trigger::cActDebugMessage::vf10  size=1  [class]
void Trigger::cActDebugMessage::vf10(void)

{
  return;
}

// 00C8A580  Trigger::cActDebugMessage::vf14  size=1  [class]
void Trigger::cActDebugMessage::vf14(void)

{
  return;
}

// 00C92180  Trigger::cActDebugMessage::vf00  size=6  [class]
undefined * Trigger::cActDebugMessage::vf00(void)

{
  return &DAT_01dbe0cc;
}

// 00C92190  Trigger::cActDebugMessage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActDebugMessage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

