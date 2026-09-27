// src/managers/triggermanager/actions/TrgActStpObjectType.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87C40..00C87C40, 1 functions

#include "mgrr.h"

// 00C87C40  Trigger::Act::STP_OBJECT_TYPE  size=114  [class]
undefined4 __fastcall Trigger::Act::STP_OBJECT_TYPE(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    switch(*(undefined4 *)(*(int *)(param_1 + 4) + 8)) {
    case 0:
      DAT_01bea070 = DAT_01bea070 | 0x80000000;
      return 1;
    case 1:
      DAT_01bea070 = DAT_01bea070 | 0x40000000;
      return 1;
    case 2:
      DAT_01bea070 = DAT_01bea070 | 0x20000000;
      return 1;
    case 3:
      DAT_01bea070 = DAT_01bea070 | 0x60000000;
      uVar1 = 1;
    }
    return uVar1;
  }
  FUN_00dd5650(&DAT_016ac8a4);
  return 0;
}

