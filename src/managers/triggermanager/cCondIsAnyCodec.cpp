// src/managers/triggermanager/cCondIsAnyCodec.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D920..00C86A90, 4 functions

#include "mgrr.h"

// 00C7D920  Trigger::cCondIsAnyCodec::vf10  size=1  [class]
void Trigger::cCondIsAnyCodec::vf10(void)

{
  return;
}

// 00C7D930  Trigger::cCondIsAnyCodec::vf14  size=12  [class]
uint Trigger::cCondIsAnyCodec::vf14(void)

{
  return DAT_01bea060 >> 7 & 1;
}

// 00C7D940  Trigger::cCondIsAnyCodec::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsAnyCodec::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86A90  Trigger::cCondIsAnyCodec::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsAnyCodec::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

