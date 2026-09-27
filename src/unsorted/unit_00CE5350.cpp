// src/unsorted/unit_00CE5350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE5350..00CE5350, 1 functions

#include "types.h"

// 00CE5350  FUN_00ce5350  size=107  [run]
void FUN_00ce5350(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00cac210(param_1);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b8e2c,param_1);
    return;
  }
  if ((iVar1 == 7) && (*(int *)(param_1 + 0x10) == 1)) {
    uVar2 = 0x13;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  uVar2 = FUN_00cc9000(iVar1,uVar2);
  iVar1 = FUN_00d1df70(&DAT_01b7be50,uVar2);
  if (iVar1 != 0) {
    FUN_00cdf180(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

