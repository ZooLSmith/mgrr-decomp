// src/unsorted/unit_00E9ADE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9ADE0..00E9ADE0, 1 functions

#include "types.h"

// 00E9ADE0  FUN_00e9ade0  size=193  [run]
void __thiscall FUN_00e9ade0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    iVar4 = FUN_00dd29b0(uVar3 * 0xc,0x20,0,0);
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        iVar5 = iVar2;
        iVar6 = iVar4;
        do {
          if (iVar6 != 0) {
            FUN_00e997f0((iVar1 - iVar4) + iVar6);
          }
          iVar6 = iVar6 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_00e9a0f0();
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      FUN_00e9a0f0();
      *(uint *)(param_1 + 0xc) = (param_2 * 0xc) / 0xc;
      *(int *)(param_1 + 4) = iVar4;
      *(int *)(param_1 + 8) = iVar2;
    }
  }
  return;
}

