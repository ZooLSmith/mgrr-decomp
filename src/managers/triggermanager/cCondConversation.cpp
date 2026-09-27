// src/managers/triggermanager/cCondConversation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ADD0..00C85AD0, 4 functions

#include "mgrr.h"

// 00C7ADD0  Trigger::cCondConversation::vf0C  size=6  [class]
undefined4 Trigger::cCondConversation::vf0C(void)

{
  return 1;
}

// 00C7ADE0  Trigger::cCondConversation::vf14  size=3  [class]
undefined4 Trigger::cCondConversation::vf14(void)

{
  return 0;
}

// 00C7ADF0  Trigger::cCondConversation::vf1C  size=10  [class]
void __thiscall Trigger::cCondConversation::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C85AD0  Trigger::cCondConversation::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondConversation::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

