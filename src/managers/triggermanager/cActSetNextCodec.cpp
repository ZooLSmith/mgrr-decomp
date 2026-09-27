// src/managers/triggermanager/cActSetNextCodec.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C805F0..00C93920, 7 functions

#include "mgrr.h"

// 00C805F0  Trigger::cActSetNextCodec::vf18  size=77  [class]
undefined4 __fastcall Trigger::cActSetNextCodec::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab328);
    return 0;
  }
  iVar2 = FUN_00937830(*(undefined4 *)(iVar1 + 8));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab548,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  return 1;
}

// 00C8D000  Trigger::cActSetNextCodec::vf08  size=1  [class]
void Trigger::cActSetNextCodec::vf08(void)

{
  return;
}

// 00C8D010  Trigger::cActSetNextCodec::vf0C  size=1  [class]
void Trigger::cActSetNextCodec::vf0C(void)

{
  return;
}

// 00C8D020  Trigger::cActSetNextCodec::vf10  size=1  [class]
void Trigger::cActSetNextCodec::vf10(void)

{
  return;
}

// 00C8D030  Trigger::cActSetNextCodec::vf14  size=1  [class]
void Trigger::cActSetNextCodec::vf14(void)

{
  return;
}

// 00C93910  Trigger::cActSetNextCodec::vf00  size=6  [class]
undefined * Trigger::cActSetNextCodec::vf00(void)

{
  return &DAT_01dbe1d8;
}

// 00C93920  Trigger::cActSetNextCodec::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSetNextCodec::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

