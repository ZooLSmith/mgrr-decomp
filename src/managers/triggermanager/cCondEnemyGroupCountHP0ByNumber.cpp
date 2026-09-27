// src/managers/triggermanager/cCondEnemyGroupCountHP0ByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7BF10..00C86240, 4 functions

#include "mgrr.h"

// 00C7BF10  Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return;
}

// 00C7BF40  Trigger::cCondEnemyGroupCountHP0ByNumber::vf14  size=163  [class]
bool __fastcall Trigger::cCondEnemyGroupCountHP0ByNumber::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00dd5650(&DAT_016a9994);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      FUN_00dd5650(&DAT_016a995c);
      return false;
    }
    iVar1 = FUN_00c18c10(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_00c19970(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
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

// 00C7C000  Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C86240  Trigger::cCondEnemyGroupCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

