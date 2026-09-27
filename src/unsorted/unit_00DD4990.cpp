// src/unsorted/unit_00DD4990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD4990..00DD4990, 1 functions

#include "types.h"

// 00DD4990  FUN_00dd4990  size=94  [run]
undefined4 FUN_00dd4990(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  HANDLE pvVar3;
  
  piVar1 = (int *)FUN_00a1d830();
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (iVar2 == 0) {
    iVar2 = FUN_00dd7240();
    if (iVar2 != 0) {
      pvVar3 = HeapCreate(1,0,0);
      if (pvVar3 != (HANDLE)0x0) {
        piVar1[0x10] = (int)pvVar3;
        piVar1[0x13] = param_1;
        piVar1[0x14] = param_1;
        piVar1[0xe] = param_2;
        piVar1[0x11] = 0;
        piVar1[0x12] = 0;
        return 1;
      }
    }
  }
  return 0;
}

