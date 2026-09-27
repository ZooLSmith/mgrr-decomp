// src/unsorted/unit_0084F630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0084F630..0084F630, 1 functions

#include "mgrr.h"

// 0084F630  FUN_0084f630  size=98  [run]
void FUN_0084f630(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_0040b190();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35ad8;
      (**(code **)(*piVar2 + 4))(&DAT_01b35ad8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        piVar2[0x281] = 1;
      }
    }
  }
  return;
}

