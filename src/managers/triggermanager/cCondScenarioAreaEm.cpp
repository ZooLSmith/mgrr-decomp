// src/managers/triggermanager/cCondScenarioAreaEm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E180..00C86CF0, 4 functions

#include "mgrr.h"

// 00C7E180  Trigger::cCondScenarioAreaEm::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaEm::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E190  Trigger::cCondScenarioAreaEm::vf14  size=175  [class]
undefined4 __fastcall Trigger::cCondScenarioAreaEm::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_8 = (undefined4 *)(param_1 + 0x24);
    do {
      iVar1 = FUN_00c19c00(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),*local_8)
      ;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a6e640();
        iVar4 = *piVar2;
        uVar3 = FUN_00a7c8b0(*(undefined2 *)(param_1 + 0x10),2);
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x14) = iVar1;
          return 1;
        }
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

// 00C7E240  Trigger::cCondScenarioAreaEm::vf1C  size=66  [class]
void __thiscall Trigger::cCondScenarioAreaEm::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}

// 00C86CF0  Trigger::cCondScenarioAreaEm::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaEm::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

