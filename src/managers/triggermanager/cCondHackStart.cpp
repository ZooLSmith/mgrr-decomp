// src/managers/triggermanager/cCondHackStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AFE0..00C85B30, 4 functions

#include "mgrr.h"

// 00C7AFE0  Trigger::cCondHackStart::vf10  size=1  [class]
void Trigger::cCondHackStart::vf10(void)

{
  return;
}

// 00C7AFF0  Trigger::cCondHackStart::vf14  size=3  [class]
undefined4 Trigger::cCondHackStart::vf14(void)

{
  return 0;
}

// 00C7B000  Trigger::cCondHackStart::vf1C  size=16  [class]
void __thiscall Trigger::cCondHackStart::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85B30  Trigger::cCondHackStart::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHackStart::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

