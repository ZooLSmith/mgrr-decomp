// src/managers/triggermanager/cCondEnemyGroupFinishByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B860..00C86060, 5 functions

#include "mgrr.h"

// 00C7B860  Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00C7B890  Trigger::cCondEnemyGroupFinishByNumber::vf14  size=95  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_00c18c10(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 1) {
      uVar2 = FUN_00c18d20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  bVar3 = *(int *)(param_1 + 0x18) == 1;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return bVar3;
}

// 00C7B8F0  Trigger::cCondEnemyGroupFinishByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C7B910  Trigger::cCondEnemyGroupFinishByNumber::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C86060  Trigger::cCondEnemyGroupFinishByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupFinishByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

