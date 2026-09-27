// src/unsorted/unit_00989440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00989440..00989540, 3 functions

#include "mgrr.h"

// 00989440  FUN_00989440  size=43  [run]
void FUN_00989440(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 1;
  uVar1 = FUN_00cb25d0(0xd);
  FUN_00cb2310(uVar1,uVar2);
  uVar3 = 3;
  uVar2 = 1;
  uVar1 = FUN_00cb25d0(0x11);
  FUN_00ccdf90(uVar1,uVar2,uVar3);
  return;
}

// 00989470  FUN_00989470  size=58  [run]
undefined4 __fastcall FUN_00989470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x54));
  if (iVar1 != 0) {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0xa4));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00989540  FUN_00989540  size=67  [run]
void __thiscall FUN_00989540(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x634) = param_2;
  *(undefined4 *)(param_1 + 0x638) = param_3;
  *(undefined4 *)(param_1 + 0x22c) = param_2;
  *(undefined4 *)(param_1 + 0x230) = param_3;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x448) = param_2;
  *(undefined4 *)(param_1 + 0x44c) = param_3;
  *(undefined4 *)(param_1 + 0x450) = 1;
  return;
}

