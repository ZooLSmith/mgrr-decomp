// src/managers/triggermanager/cActReqBehaviorInstruction.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8B4F0..00C92A90, 6 functions

#include "mgrr.h"

// 00C8B4F0  Trigger::cActReqBehaviorInstruction::vf08  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf08(void)

{
  return;
}

// 00C8B500  Trigger::cActReqBehaviorInstruction::vf0C  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf0C(void)

{
  return;
}

// 00C8B510  Trigger::cActReqBehaviorInstruction::vf10  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf10(void)

{
  return;
}

// 00C8B520  Trigger::cActReqBehaviorInstruction::vf14  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf14(void)

{
  return;
}

// 00C92A80  Trigger::cActReqBehaviorInstruction::vf00  size=6  [class]
undefined * Trigger::cActReqBehaviorInstruction::vf00(void)

{
  return &DAT_01dbe120;
}

// 00C92A90  Trigger::cActReqBehaviorInstruction::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActReqBehaviorInstruction::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

