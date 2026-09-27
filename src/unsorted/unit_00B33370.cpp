// src/unsorted/unit_00B33370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B33370..00B33370, 1 functions

#include "types.h"

// 00B33370  FUN_00b33370  size=64  [run]
void __thiscall FUN_00b33370(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x4f0);
    uVar4 = 0xffffffff;
    uVar3 = 0;
    uVar2 = 0;
    FUN_00a7c8a0(0,param_2,uVar1,0,0xffffffff);
    FUN_00a8c5f0(uVar2,param_2,uVar1,uVar3,uVar4);
  }
  return;
}

