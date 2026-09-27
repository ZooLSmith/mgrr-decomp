// src/unsorted/unit_008E29C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E29C0..008E29F0, 2 functions

#include "mgrr.h"

// 008E29C0  FUN_008e29c0  size=41  [run]
void __thiscall FUN_008e29c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x70) = *param_2;
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(undefined4 *)(iVar1 + 0x7c) = uVar4;
  return;
}

// 008E29F0  FUN_008e29f0  size=10  [run]
uint __fastcall FUN_008e29f0(int param_1)

{
  return *(uint *)(param_1 + 0x16c) & 1;
}

