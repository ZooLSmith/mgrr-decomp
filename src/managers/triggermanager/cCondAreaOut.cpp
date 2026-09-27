// src/managers/triggermanager/cCondAreaOut.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79D20..00C850A0, 5 functions

#include "mgrr.h"

// 00C79D20  Trigger::cCondAreaOut::vf10  size=8  [class]
void __fastcall Trigger::cCondAreaOut::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C79D30  Trigger::cCondAreaOut::vf14  size=49  [class]
undefined4 __fastcall Trigger::cCondAreaOut::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00a6e640();
  iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
    return 1;
  }
  return 0;
}

// 00C79D70  Trigger::cCondAreaOut::vf1C  size=18  [class]
void __thiscall Trigger::cCondAreaOut::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}

// 00C79D90  Trigger::cCondAreaOut::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondAreaOut::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C850A0  Trigger::cCondAreaOut::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondAreaOut::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

