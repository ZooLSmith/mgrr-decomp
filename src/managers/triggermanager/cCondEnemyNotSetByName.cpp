// src/managers/triggermanager/cCondEnemyNotSetByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A990..00C857E0, 3 functions

#include "mgrr.h"

// 00C7A990  Trigger::cCondEnemyNotSetByName::vf14  size=40  [class]
bool __fastcall Trigger::cCondEnemyNotSetByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00dd5650(&DAT_016a9148);
    return false;
  }
  iVar1 = FUN_00c18c70(*(int *)(param_1 + 0x10));
  return iVar1 == 0;
}

// 00C7A9C0  Trigger::cCondEnemyNotSetByName::vf1C  size=16  [class]
void __thiscall Trigger::cCondEnemyNotSetByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  return;
}

// 00C857E0  Trigger::cCondEnemyNotSetByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyNotSetByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

