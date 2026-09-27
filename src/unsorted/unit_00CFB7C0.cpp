// src/unsorted/unit_00CFB7C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFB7C0..00CFB800, 2 functions

#include "types.h"

// 00CFB7C0  FUN_00cfb7c0  size=57  [run]
undefined4 __thiscall FUN_00cfb7c0(int param_1,int param_2)

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

// 00CFB800  FUN_00cfb800  size=223  [run]
void __thiscall FUN_00cfb800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = param_2[6];
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)((int)param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x2a);
  *(uint *)(param_1 + 0x40) = (*(char *)(param_2 + 10) != '\0') + 1;
  *(bool *)(param_1 + 0x48) = param_2[9] != 0;
  *(bool *)(param_1 + 0x4b) = *(char *)((int)param_2 + 0x2b) != '\0';
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
  if (param_2[7] != 0) {
    iVar2 = FUN_00cf7390(param_1 + 0x2c,param_2[7]);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016b9290);
    }
    *(undefined4 *)(param_1 + 0x44) = param_2[8];
  }
  return;
}

