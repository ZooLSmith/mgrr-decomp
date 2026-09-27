// src/unsorted/unit_00D5CC50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5CC50..00D5CC50, 1 functions

#include "mgrr.h"

// 00D5CC50  FUN_00d5cc50  size=273  [run]
void FUN_00d5cc50(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_40 [15];
  
  iVar1 = FUN_00a7f600(0x20030);
  if (iVar1 != 0) {
    puVar4 = local_40;
    local_40[0] = 0xe;
    FUN_00a7c8a0(puVar4);
    FUN_00a9d720(puVar4);
  }
  iVar1 = FUN_00a7f600(0x20030);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    (**(code **)(*piVar2 + 0x28))(0xffffffff);
    piVar2 = (int *)FUN_00a7c8a0();
    FUN_00b94fc0();
    (**(code **)(*piVar2 + 0x220))(0x3f800000);
    DAT_01bea070 = DAT_01bea070 | 0x40000000;
    FUN_00d89e60(0x24);
    FUN_00a7c8a0();
    iVar1 = FUN_00a8cab0();
    while (iVar1 != 0x40000) {
      piVar3 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar3 + 0x50))(1);
      FUN_00a7c8a0();
      iVar1 = FUN_00a8cab0();
    }
    (**(code **)(*piVar2 + 0x220))(0);
    DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
    FUN_00d89e60(0x22);
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

