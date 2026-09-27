// src/unsorted/unit_00CF80A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF80A0..00CF80A0, 1 functions

#include "mgrr.h"

// 00CF80A0  FUN_00cf80a0  size=354  [run]
void __fastcall FUN_00cf80a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1e8)) {
  case 0:
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  case 1:
    if ((*(uint *)(param_1 + 0x1e4) < *(uint *)(param_1 + 0xc0)) &&
       (iVar1 = *(uint *)(param_1 + 0x1e4) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x3b0) = 0;
    }
    iVar1 = FUN_00cab580();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x1fc) == 0) {
        FUN_00cdef90(0,1);
        *(undefined4 *)(param_1 + 0x1e8) = 2;
        return;
      }
      FUN_00cdeec0(0);
      *(undefined4 *)(param_1 + 0x1e8) = 2;
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x1f8) == 0) {
      if (DAT_01b77e48 == 1) {
        uVar2 = *(undefined4 *)(param_1 + 0x1e4);
        uVar3 = 0;
        goto LAB_00cf8158;
      }
      if (DAT_01b77e48 != 2) goto LAB_00cf814a;
      uVar3 = 0;
    }
    else {
LAB_00cf814a:
      uVar3 = *(undefined4 *)(param_1 + 0x1ec);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1e4);
LAB_00cf8158:
    FUN_00cab140(uVar2,uVar3);
    if ((((*(int *)(param_1 + 500) != -1) && ((DAT_01bea060 & 0x1000) == 0)) &&
        ((iVar1 = FUN_00416910(0x18), iVar1 == 0 || (*(int *)(param_1 + 0x200) != 0)))) &&
       ((iVar1 = FUN_00e6b910(), iVar1 == 0 &&
        (*(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1, *(int *)(param_1 + 500) < 1)))) {
      *(undefined4 *)(param_1 + 0x1e8) = 3;
      *(undefined4 *)(param_1 + 500) = 0xffffffff;
    }
    FUN_00ce2ae0(*(undefined4 *)(param_1 + 0x204));
    return;
  case 3:
    if ((*(uint *)(param_1 + 0x1e4) < *(uint *)(param_1 + 0xc0)) &&
       (iVar1 = *(uint *)(param_1 + 0x1e4) * 0x400 + *(int *)(param_1 + 0xbc), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x3b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  return;
}

