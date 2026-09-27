// src/unsorted/unit_00E86EA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E86EA0..00E86EA0, 1 functions

#include "mgrr.h"

// 00E86EA0  FUN_00e86ea0  size=82  [run]
undefined4 __thiscall FUN_00e86ea0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
    iVar1 = FUN_00e76ba0(param_2);
    if (iVar1 != 0) {
      switch(*(undefined1 *)(param_2 + 0x14)) {
      default:
switchD_00e86ec3_caseD_0:
        return 1;
      case 3:
        break;
      }
    }
  }
  else {
    iVar1 = FUN_00e76ba0(param_2);
    if (iVar1 != 0) {
      switch(*(undefined1 *)(param_2 + 0x14)) {
      default:
        goto switchD_00e86ec3_caseD_0;
      case 2:
        break;
      }
    }
  }
  return 0;
}

