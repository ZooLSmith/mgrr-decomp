// src/managers/triggermanager/cActPosIndex.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8AB90..00C923D0, 6 functions

#include "mgrr.h"

// 00C8AB90  Trigger::cActPosIndex::vf08  size=1  [class]
void Trigger::cActPosIndex::vf08(void)

{
  return;
}

// 00C8ABA0  Trigger::cActPosIndex::vf0C  size=1  [class]
void Trigger::cActPosIndex::vf0C(void)

{
  return;
}

// 00C8ABB0  Trigger::cActPosIndex::vf10  size=1  [class]
void Trigger::cActPosIndex::vf10(void)

{
  return;
}

// 00C8ABC0  Trigger::cActPosIndex::vf14  size=1  [class]
void Trigger::cActPosIndex::vf14(void)

{
  return;
}

// 00C923C0  Trigger::cActPosIndex::vf00  size=6  [class]
undefined * Trigger::cActPosIndex::vf00(void)

{
  return &DAT_01dbe0e4;
}

// 00C923D0  Trigger::cActPosIndex::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPosIndex::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

