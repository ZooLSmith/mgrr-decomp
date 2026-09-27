// src/unsorted/unit_00CF9AC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF9AC0..00CF9B00, 2 functions

#include "types.h"

// 00CF9AC0  FUN_00cf9ac0  size=57  [run]
undefined4 __thiscall FUN_00cf9ac0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00cf7390(param_1 + 0x28,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016b9264,param_2);
  return 0;
}

// 00CF9B00  FUN_00cf9b00  size=228  [run]
void __thiscall FUN_00cf9b00(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(int *)(param_1 + 0x1c) = (int)*(char *)((int)param_2 + 0x27);
  *(uint *)(param_1 + 0x50) = (*(char *)((int)param_2 + 0x25) != '\0') + 1;
  *(bool *)(param_1 + 0x54) = *(char *)(param_2 + 9) != '\0';
  *(bool *)(param_1 + 0x57) = *(char *)((int)param_2 + 0x26) != '\0';
  *(bool *)(param_1 + 0x55) = *(char *)(param_2 + 10) != '\0';
  *(bool *)(param_1 + 0x56) = *(char *)((int)param_2 + 0x29) != '\0';
  *(undefined4 *)(param_1 + 0x58) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x78) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x7c) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x60) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x80) = param_2[0xd];
  *(undefined4 *)(param_1 + 100) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x84) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x18);
  if (param_2[7] != 0) {
    iVar1 = FUN_00cf7390(param_1 + 0x28,param_2[7]);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016b9264,param_2[7]);
    }
    *(undefined4 *)(param_1 + 0x24) = param_2[8];
  }
  return;
}

