// src/unsorted/unit_00CBF6E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF6E0..00CBF6E0, 1 functions

#include "mgrr.h"

// 00CBF6E0  FUN_00cbf6e0  size=92  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cbf6e0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c800();
      if ((*(byte *)(iVar1 + 0x4c0) & 1) != 0) {
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a12210(*(undefined4 *)(iVar1 + 0x830));
          if (iVar1 != 0) {
            DAT_01dbf94c = param_1;
            _DAT_01dbf944 = *(undefined4 *)(iVar1 + 0x44);
            DAT_01dbf940 = 1;
          }
        }
      }
    }
  }
  return;
}

