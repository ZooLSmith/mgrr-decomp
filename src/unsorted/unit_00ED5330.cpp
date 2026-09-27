// src/unsorted/unit_00ED5330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED5330..00ED5330, 1 functions

#include "types.h"

// 00ED5330  FUN_00ed5330  size=64  [run]
void __fastcall FUN_00ed5330(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    uVar1 = *(byte *)(param_1 + 0x49e) & 1 | 0x50000;
    iVar2 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x454);
    FUN_009d5aa0(iVar2,uVar1,iVar3);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

