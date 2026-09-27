// src/unsorted/unit_00CBC1E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC1E0..00CBC1E0, 1 functions

#include "types.h"

// 00CBC1E0  FUN_00cbc1e0  size=78  [run]
void FUN_00cbc1e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((&DAT_01dbf9b4)[iVar2] == 0) {
      (&DAT_01dbf98c)[iVar2] = param_1;
      (&DAT_01dc4dc0)[iVar2 * 4] = *param_2;
      (&DAT_01dc4dc4)[iVar2 * 4] = param_2[1];
      (&DAT_01dc4dc8)[iVar2 * 4] = param_2[2];
      uVar1 = param_2[3];
      (&DAT_01dbf9b4)[iVar2] = 1;
      (&DAT_01dc4dcc)[iVar2 * 4] = uVar1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}

