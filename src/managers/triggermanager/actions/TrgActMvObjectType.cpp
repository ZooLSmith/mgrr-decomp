// src/managers/triggermanager/actions/TrgActMvObjectType.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87CE0..00C87CE0, 1 functions

#include "mgrr.h"

// 00C87CE0  Trigger::Act::MV_OBJECT_TYPE  size=114  [class]
undefined4 __fastcall Trigger::Act::MV_OBJECT_TYPE(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    switch(*(undefined4 *)(*(int *)(param_1 + 4) + 8)) {
    case 0:
      DAT_01bea070 = DAT_01bea070 & 0x7fffffff;
      return 1;
    case 1:
      DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
      return 1;
    case 2:
      DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
      return 1;
    case 3:
      DAT_01bea070 = DAT_01bea070 & 0x9fffffff;
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_00dd5650(&DAT_016ac8d8);
  return 0;
}

