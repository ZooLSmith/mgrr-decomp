// src/unsorted/unit_00EDA1A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDA1A0..00EDA1E0, 2 functions

#include "mgrr.h"

// 00EDA1A0  FUN_00eda1a0  size=53  [run]
void __fastcall FUN_00eda1a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x45c);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00EDA1E0  FUN_00eda1e0  size=34  [run]
void __fastcall FUN_00eda1e0(int param_1)

{
  if (*(int *)(param_1 + 0x450) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x450));
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

