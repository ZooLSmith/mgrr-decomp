// src/unsorted/unit_008E6C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E6C60..008E6CB0, 2 functions

#include "types.h"

// 008E6C60  FUN_008e6c60  size=75  [run]
void __thiscall FUN_008e6c60(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x114) != param_2) {
    if (param_2 != 0) {
      FUN_008e5c50(*(undefined4 *)(param_1 + 0x11c));
      *(int *)(param_1 + 0x114) = param_2;
      return;
    }
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x110);
    FUN_008e5c50(0x1f);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  return;
}

// 008E6CB0  FUN_008e6cb0  size=65  [run]
void __fastcall FUN_008e6cb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_008e1d50();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x90) = *puVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_008e4320(param_1 + 0xa0);
  return;
}

