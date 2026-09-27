// src/unsorted/unit_00CFAF30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFAF30..00CFAF70, 2 functions

#include "mgrr.h"

// 00CFAF30  FUN_00cfaf30  size=57  [run]
undefined4 __thiscall FUN_00cfaf30(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00cf7390(param_1 + 0x2c,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016b9264,param_2);
  return 0;
}

// 00CFAF70  FUN_00cfaf70  size=215  [run]
void __thiscall FUN_00cfaf70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2[4];
  *(undefined4 *)(param_1 + 0x20) = param_2[5];
  *(undefined4 *)(param_1 + 0x24) = param_2[6];
  *(undefined4 *)(param_1 + 0x28) = param_2[7];
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)((int)param_2 + 0x2d);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x2e);
  *(uint *)(param_1 + 0x40) = (*(char *)(param_2 + 0xb) != '\0') + 1;
  *(bool *)(param_1 + 0x48) = param_2[10] != 0;
  *(bool *)(param_1 + 0x4b) = *(char *)((int)param_2 + 0x2f) != '\0';
  if (param_2[8] != 0) {
    iVar2 = FUN_00cf7390(param_1 + 0x2c,param_2[8]);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016b9290);
    }
    *(undefined4 *)(param_1 + 0x44) = param_2[9];
  }
  return;
}

