// src/unsorted/unit_00B2B5F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B2B5F0..00B2B5F0, 1 functions

#include "mgrr.h"

// 00B2B5F0  FUN_00b2b5f0  size=166  [run]
void __fastcall FUN_00b2b5f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00c070a0(&stack0xffffffd4);
  if (iVar1 == 0) {
    uVar2 = FUN_00a8c760(0x1c);
    uVar3 = FUN_00a8c760(0x11);
    uVar4 = FUN_00a8c760(0x1c);
    iVar1 = FUN_00b94500(uVar4,uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00c07980(1,0);
      if (iVar1 != 0) {
        FUN_00b96b30();
      }
    }
  }
  return;
}

