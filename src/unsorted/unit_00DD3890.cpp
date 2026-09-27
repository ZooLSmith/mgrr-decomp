// src/unsorted/unit_00DD3890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3890..00DD3890, 1 functions

#include "mgrr.h"

// 00DD3890  FUN_00dd3890  size=194  [run]
undefined4 __thiscall FUN_00dd3890(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x50) = param_3 + -0x1c;
  *(int *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x44) = param_2;
  *(int *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined4 *)(param_2 + 4) = 0;
    **(undefined4 **)(param_1 + 0x44) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc) = 0x1c;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 8) = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  _memset((void *)(param_1 + 0x70),0,0x400);
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    uVar3 = *(uint *)(iVar1 + 8) >> 6;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    iVar2 = *(int *)(param_1 + 0x70 + uVar3 * 4);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(int *)(param_1 + 0x70 + uVar3 * 4) = iVar1;
      return 1;
    }
    *(int *)(iVar2 + 0x14) = iVar1;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x70 + uVar3 * 4);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(int *)(param_1 + 0x70 + uVar3 * 4) = iVar1;
  }
  return 1;
}

