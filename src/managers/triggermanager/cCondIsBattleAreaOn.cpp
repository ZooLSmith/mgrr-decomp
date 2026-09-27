// src/managers/triggermanager/cCondIsBattleAreaOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CF60..00C86680, 4 functions

#include "mgrr.h"

// 00C7CF60  Trigger::cCondIsBattleAreaOn::vf10  size=1  [class]
void Trigger::cCondIsBattleAreaOn::vf10(void)

{
  return;
}

// 00C7CF70  Trigger::cCondIsBattleAreaOn::vf14  size=23  [class]
void __fastcall Trigger::cCondIsBattleAreaOn::vf14(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00401110();
  (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CF90  Trigger::cCondIsBattleAreaOn::vf1C  size=16  [class]
void __thiscall Trigger::cCondIsBattleAreaOn::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C86680  Trigger::cCondIsBattleAreaOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsBattleAreaOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

