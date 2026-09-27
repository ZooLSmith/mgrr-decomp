// src/unsorted/unit_0070B440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0070B440..0070B440, 1 functions

#include "types.h"

// 0070B440  FUN_0070b440  size=157  [run]
void __fastcall FUN_0070b440(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_008635c0(&stack0xffffffd4);
  if (iVar1 == 0) {
    uVar4 = 0;
    uVar2 = FUN_00a8c760(0x11);
    uVar3 = FUN_00a8c760(0x1c);
    iVar1 = FUN_0086efb0(uVar3,uVar2,uVar4);
    if (iVar1 == 0) {
      iVar1 = FUN_008638d0(1,0);
      if (iVar1 != 0) {
        FUN_00b96b30();
      }
    }
  }
  return;
}

