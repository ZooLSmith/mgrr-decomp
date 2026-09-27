// src/unsorted/unit_0047F210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0047F210..0047F340, 2 functions

#include "mgrr.h"

// 0047F210  FUN_0047f210  size=102  [run]
void __thiscall
FUN_0047f210(byte *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  *(undefined4 *)(param_1 + 0x50) = *param_3;
  *(undefined4 *)(param_1 + 0x54) = param_3[1];
  *(undefined4 *)(param_1 + 0x58) = param_3[2];
  *(undefined4 *)(param_1 + 0x5c) = param_3[3];
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  sVar1 = FUN_00dde2d0(0,1);
  param_1[8] = 0xff;
  if (sVar1 != 0) {
    *param_1 = *param_1 | 1;
  }
  return;
}

// 0047F340  FUN_0047f340  size=22  [run]
undefined4 FUN_0047f340(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

