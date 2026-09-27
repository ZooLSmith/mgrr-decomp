// src/managers/triggermanager/cCondIsNowVRMission.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D780..00C86A30, 4 functions

#include "mgrr.h"

// 00C7D780  Trigger::cCondIsNowVRMission::vf10  size=1  [class]
void Trigger::cCondIsNowVRMission::vf10(void)

{
  return;
}

// 00C7D790  Trigger::cCondIsNowVRMission::vf14  size=10  [class]
void Trigger::cCondIsNowVRMission::vf14(void)

{
  FUN_0095bfa0();
  FUN_0095c2a0();
  return;
}

// 00C7D7A0  Trigger::cCondIsNowVRMission::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsNowVRMission::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86A30  Trigger::cCondIsNowVRMission::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsNowVRMission::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

