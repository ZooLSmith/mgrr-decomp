// src/managers/triggermanager/cCondition.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77C70..00C961C0, 5 functions

#include "mgrr.h"

// 00C77C70  Trigger::cCondition::vf1C  size=10  [class]
void __thiscall Trigger::cCondition::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C77C80  Trigger::cCondition::vf20  size=6  [class]
undefined4 Trigger::cCondition::vf20(void)

{
  return 1;
}

// 00C77CC0  Trigger::cCondition::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondition::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C960B0  Trigger::cCondition::cCondition  size=55  [class]
void __fastcall Trigger::cCondition::cCondition(undefined4 *param_1)

{
  *param_1 = cCondStartAnimation::vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00C961C0  Trigger::cCondition::cCondition_2  size=55  [class]
void __fastcall Trigger::cCondition::cCondition_2(undefined4 *param_1)

{
  *param_1 = cCondEndAnimation::vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = vftable;
  return;
}

