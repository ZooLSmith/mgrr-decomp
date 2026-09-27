// src/managers/triggermanager/cCondScenarioAreaOut.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E2C0..00C86D10, 4 functions

#include "mgrr.h"

// 00C7E2C0  Trigger::cCondScenarioAreaOut::vf10  size=8  [class]
void __fastcall Trigger::cCondScenarioAreaOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E2D0  Trigger::cCondScenarioAreaOut::vf14  size=74  [class]
undefined4 __fastcall Trigger::cCondScenarioAreaOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,2);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
      return 1;
    }
  }
  return 0;
}

// 00C7E320  Trigger::cCondScenarioAreaOut::vf1C  size=18  [class]
void __thiscall Trigger::cCondScenarioAreaOut::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C86D10  Trigger::cCondScenarioAreaOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondScenarioAreaOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

