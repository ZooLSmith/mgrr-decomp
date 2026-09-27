// src/managers/triggermanager/cCondAreaPlCamOut.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E670..00C86D90, 4 functions

#include "mgrr.h"

// 00C7E670  Trigger::cCondAreaPlCamOut::vf10  size=1  [class]
void Trigger::cCondAreaPlCamOut::vf10(void)

{
  return;
}

// 00C7E680  Trigger::cCondAreaPlCamOut::vf14  size=132  [class]
undefined4 __fastcall Trigger::cCondAreaPlCamOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = DAT_01bea380;
  local_1c = DAT_01bea384;
  local_18 = DAT_01bea388;
  local_14 = DAT_01bea38c;
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x2c))(&local_20,*(undefined2 *)(param_1 + 0x10),1);
  piVar1 = (int *)FUN_00a6e640();
  iVar3 = (**(code **)(*piVar1 + 0x2c))(&stack0xffffffd4,*(undefined2 *)(param_1 + 0x10),2);
  if ((iVar2 == 0) && (iVar3 == 0)) {
    return 1;
  }
  return 0;
}

// 00C7E710  Trigger::cCondAreaPlCamOut::vf1C  size=18  [class]
void __thiscall Trigger::cCondAreaPlCamOut::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C86D90  Trigger::cCondAreaPlCamOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaPlCamOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

