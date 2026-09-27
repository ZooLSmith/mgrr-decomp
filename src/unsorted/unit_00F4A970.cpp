// src/unsorted/unit_00F4A970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4A970..00F4AA40, 3 functions

#include "mgrr.h"

// 00F4A970  FUN_00f4a970  size=65  [run]
int FUN_00f4a970(void)

{
  int iVar1;
  
  if (((DAT_018d72b4 < DAT_018d72b0) && (0 < DAT_018d72d0)) && (DAT_018d72d8 != 0)) {
    iVar1 = FUN_00f4c8d0();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00ec75e0();
    return iVar1;
  }
  return 0;
}

// 00F4A9C0  FUN_00f4a9c0  size=121  [run]
void FUN_00f4a9c0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = DAT_018d72ac;
  piVar3 = DAT_018d72ac;
  if (DAT_018d72ac != DAT_018d72ac + DAT_018d72b4) {
    do {
      iVar1 = *(int *)(*(int *)(*piVar3 + 4) + 0x40);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016e08d8,*(int *)(*piVar3 + 4) + 0x2c,iVar1);
        piVar2 = DAT_018d72ac;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2 + DAT_018d72b4);
  }
  uVar4 = 0;
  do {
    if (*(int *)((int)&DAT_01ee5470 + uVar4) != 0) {
      FUN_00dd5650(&DAT_016e0968,&DAT_01ee545c + uVar4,*(int *)((int)&DAT_01ee5470 + uVar4));
    }
    uVar4 = uVar4 + 0x54;
  } while (uVar4 < 0xfc);
  return;
}

// 00F4AA40  FUN_00f4aa40  size=73  [run]
bool FUN_00f4aa40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f4db70(0x200,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00f4c7d0(0x200,param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00f4d970(0x200,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

