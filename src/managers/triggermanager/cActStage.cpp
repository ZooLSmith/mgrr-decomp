// src/managers/triggermanager/cActStage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F130..00C921D0, 7 functions

#include "mgrr.h"

// 00C7F130  Trigger::cActStage::vf18  size=5  [class]
undefined4 Trigger::cActStage::vf18(void)

{
  return 0;
}

// 00C8A5F0  Trigger::cActStage::vf08  size=1  [class]
void Trigger::cActStage::vf08(void)

{
  return;
}

// 00C8A600  Trigger::cActStage::vf0C  size=1  [class]
void Trigger::cActStage::vf0C(void)

{
  return;
}

// 00C8A610  Trigger::cActStage::vf10  size=1  [class]
void Trigger::cActStage::vf10(void)

{
  return;
}

// 00C8A620  Trigger::cActStage::vf14  size=1  [class]
void Trigger::cActStage::vf14(void)

{
  return;
}

// 00C921C0  Trigger::cActStage::vf00  size=6  [class]
undefined * Trigger::cActStage::vf00(void)

{
  return &DAT_01dbe0d0;
}

// 00C921D0  Trigger::cActStage::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStage::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

