// src/managers/triggermanager/cActSubstage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F140..00C92210, 7 functions

#include "mgrr.h"

// 00C7F140  Trigger::cActSubstage::vf18  size=5  [class]
undefined4 Trigger::cActSubstage::vf18(void)

{
  return 0;
}

// 00C8A690  Trigger::cActSubstage::vf08  size=1  [class]
void Trigger::cActSubstage::vf08(void)

{
  return;
}

// 00C8A6A0  Trigger::cActSubstage::vf0C  size=1  [class]
void Trigger::cActSubstage::vf0C(void)

{
  return;
}

// 00C8A6B0  Trigger::cActSubstage::vf10  size=1  [class]
void Trigger::cActSubstage::vf10(void)

{
  return;
}

// 00C8A6C0  Trigger::cActSubstage::vf14  size=1  [class]
void Trigger::cActSubstage::vf14(void)

{
  return;
}

// 00C92200  Trigger::cActSubstage::vf00  size=6  [class]
undefined * Trigger::cActSubstage::vf00(void)

{
  return &DAT_01dbe0d4;
}

// 00C92210  Trigger::cActSubstage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubstage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

