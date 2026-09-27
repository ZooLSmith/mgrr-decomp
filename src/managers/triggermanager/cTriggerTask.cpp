// src/managers/triggermanager/cTriggerTask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77530..00C83E40, 3 functions

#include "mgrr.h"

// 00C77530  Trigger::cTriggerTask::vf04  size=5  [class]
void __fastcall Trigger::cTriggerTask::vf04(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return;
}

// 00C77540  Trigger::cTriggerTask::vf08  size=9  [class]
void __fastcall Trigger::cTriggerTask::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00C83E40  Trigger::cTriggerTask::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cTriggerTask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

