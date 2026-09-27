// src/unsorted/unit_00512D50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00512D50..00512D50, 1 functions

#include "mgrr.h"

// 00512D50  FUN_00512d50  size=194  [run]
void __fastcall FUN_00512d50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1e0 [336];
  undefined1 local_90 [140];
  
  FUN_004039a0(0x1c,param_1,0);
  FUN_00a963e0(local_1e0);
  FUN_0040b190();
  iVar1 = FUN_00a82090("dummy",0x44020,local_90);
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    switchD_0080dbae::default();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_004cb9a0(0x1d);
    FUN_00dffb30(param_1 + 0xdf0);
    iVar1 = FUN_00a7c8a0();
    FUN_00e020f0(*(undefined4 *)(iVar1 + 0x4f0));
    FUN_00a8c8b0(0x20190,local_1e0);
  }
  return;
}

