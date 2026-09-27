// src/unsorted/unit_00D5A780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5A780..00D5A780, 1 functions

#include "mgrr.h"

// 00D5A780  FUN_00d5a780  size=210  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5a780(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x20080);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x20080);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      uStack_20 = _DAT_018b9290;
      uStack_1c = _DAT_018b9294;
      uStack_18 = _DAT_018b9298;
      uStack_14 = _DAT_018b929c;
      (**(code **)(*piVar2 + 0x6c))(&uStack_20);
      FUN_0048c1b0();
    }
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while( true );
}

