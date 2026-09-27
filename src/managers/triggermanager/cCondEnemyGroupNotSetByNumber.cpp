// src/managers/triggermanager/cCondEnemyGroupNotSetByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7BB20..00C861A0, 3 functions

#include "mgrr.h"

// 00C7BB20  Trigger::cCondEnemyGroupNotSetByNumber::vf14  size=24  [class]
bool __fastcall Trigger::cCondEnemyGroupNotSetByNumber::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return iVar1 == 0;
}

// 00C7BB40  Trigger::cCondEnemyGroupNotSetByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupNotSetByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C861A0  Trigger::cCondEnemyGroupNotSetByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupNotSetByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

