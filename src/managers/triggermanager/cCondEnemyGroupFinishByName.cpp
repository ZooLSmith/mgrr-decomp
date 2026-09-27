// src/managers/triggermanager/cCondEnemyGroupFinishByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B7D0..00C85FB0, 5 functions

#include "mgrr.h"

// 00C7B7D0  Trigger::cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B810  Trigger::cCondEnemyGroupFinishByName::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyGroupFinishByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 0xc;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C7B830  Trigger::cCondEnemyGroupFinishByName::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondEnemyGroupFinishByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00C85F90  Trigger::cCondEnemyGroupFinishByName::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondEnemyGroupFinishByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85FB0  Trigger::cCondEnemyGroupFinishByName::vf14  size=173  [class]
bool __fastcall Trigger::cCondEnemyGroupFinishByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac5f8);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar2 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        if (*(int *)(param_1 + 0x1c) != 1) goto LAB_00c86046;
        uVar2 = FUN_00c18cf0(*(undefined4 *)(param_1 + 0x14));
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 1) goto LAB_00c86046;
        uVar2 = FUN_00c18d50(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
LAB_00c86046:
    bVar3 = *(int *)(param_1 + 0x18) == 1;
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return bVar3;
  }
  return false;
}

