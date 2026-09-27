// src/managers/triggermanager/cCondEnemyEntityCountHP0ByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B6C0..00C85E90, 4 functions

#include "mgrr.h"

// 00C7B6C0  Trigger::cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName  size=32  [class]
void __fastcall
Trigger::cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 00C7B6F0  Trigger::cCondEnemyEntityCountHP0ByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyEntityCountHP0ByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x18) = param_2 + 0x10;
  return;
}

// 00C85E70  Trigger::cCondEnemyEntityCountHP0ByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyEntityCountHP0ByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85E90  Trigger::cCondEnemyEntityCountHP0ByName::vf14  size=197  [class]
bool __fastcall Trigger::cCondEnemyEntityCountHP0ByName::vf14(int param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac5bc);
  }
  else {
    iVar1 = __stricmp("all",*(char **)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = FUN_00c18cc0(DAT_01d5bad4);
        if (iVar1 == 0) {
          return false;
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      iVar1 = FUN_00c19580();
    }
    else {
      iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_00c19840(*(undefined4 *)(param_1 + 0x18));
    }
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
  return false;
}

