// src/managers/triggermanager/cCondIsCodec.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D8C0..00C86A70, 4 functions

#include "mgrr.h"

// 00C7D8C0  Trigger::cCondIsCodec::vf10  size=1  [class]
void Trigger::cCondIsCodec::vf10(void)

{
  return;
}

// 00C7D8D0  Trigger::cCondIsCodec::vf14  size=12  [class]
uint Trigger::cCondIsCodec::vf14(void)

{
  return DAT_01bea060 >> 0x12 & 1;
}

// 00C7D8E0  Trigger::cCondIsCodec::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsCodec::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86A70  Trigger::cCondIsCodec::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsCodec::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

