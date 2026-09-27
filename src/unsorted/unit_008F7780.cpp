// src/unsorted/unit_008F7780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F7780..008F77B0, 2 functions

#include "mgrr.h"

// 008F7780  FUN_008f7780  size=27  [run]
undefined4 FUN_008f7780(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_008f7f80(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 008F77B0  FUN_008f77b0  size=57  [run]
void FUN_008f77b0(void)

{
  if (DAT_01b35da8 != (undefined4 *)0x0) {
    (**(code **)*DAT_01b35da8)(1);
    DAT_01b35da8 = (undefined4 *)0x0;
  }
  if (DAT_01b35dac != (undefined4 *)0x0) {
    (**(code **)*DAT_01b35dac)(1);
    DAT_01b35dac = (undefined4 *)0x0;
  }
  return;
}

