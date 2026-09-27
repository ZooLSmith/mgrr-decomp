// src/managers/triggermanager/cCondEnemyGroupEntityCountHP0ByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C280..00C862A0, 4 functions

#include "mgrr.h"

// 00C7C280  Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName  size=35  [class]
void __fastcall
Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName
          (undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7C2C0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14  size=162  [class]
bool __fastcall Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9b7c);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_00dd5650(&DAT_016a9b38);
      return false;
    }
    iVar1 = FUN_00c18c40(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c197e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
        return iVar1 < *(int *)(param_1 + 0x14);
      case 2:
        return iVar1 <= *(int *)(param_1 + 0x14);
      case 3:
        return iVar1 == *(int *)(param_1 + 0x14);
      case 4:
        return *(int *)(param_1 + 0x14) < iVar1;
      case 5:
        return *(int *)(param_1 + 0x14) <= iVar1;
      }
    }
  }
  return false;
}

// 00C7C380  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_2 + 0x14;
  return;
}

// 00C862A0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

