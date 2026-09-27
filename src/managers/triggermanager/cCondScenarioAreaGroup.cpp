// src/managers/triggermanager/cCondScenarioAreaGroup.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E0E0..00C86CD0, 5 functions

#include "mgrr.h"

// 00C7E0E0  Trigger::cCondScenarioAreaGroup::vf04  size=30  [class]
void __fastcall Trigger::cCondScenarioAreaGroup::vf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dd29b0(0x100,0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// 00C7E100  Trigger::cCondScenarioAreaGroup::vf10  size=1  [class]
void Trigger::cCondScenarioAreaGroup::vf10(void)

{
  return;
}

// 00C7E110  Trigger::cCondScenarioAreaGroup::vf08  size=15  [class]
void __fastcall Trigger::cCondScenarioAreaGroup::vf08(int param_1)

{
  FUN_00dd48d0(*(undefined4 *)(param_1 + 0x24),0);
  return;
}

// 00C7E120  Trigger::cCondScenarioAreaGroup::vf1C  size=36  [class]
void __thiscall Trigger::cCondScenarioAreaGroup::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C86CD0  Trigger::cCondScenarioAreaGroup::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaGroup::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

