// src/unsorted/unit_00CDA6C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDA6C0..00CDA6C0, 1 functions

#include "types.h"

// 00CDA6C0  FUN_00cda6c0  size=168  [run]
void FUN_00cda6c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((((((byte)DAT_01bea090 & 0x40) == 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar2 = FUN_00a7c800(), iVar2 != 0)) &&
      ((iVar2 = FUN_00a7c800(), (*(byte *)(iVar2 + 0x4c0) & 1) != 0 &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)))) &&
     (((*(uint *)(iVar1 + 0x24) & 0xf0000) != 0x20000 ||
      ((iVar1 = FUN_00445b60(iVar2), iVar1 == 0 || (*(int *)(iVar1 + 0xa50) != 0)))))) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = (&DAT_01dc1378)[iVar1];
    if ((iVar2 != 0) && ((iVar1 == *(int *)(iVar2 + 8) && (*(int *)(iVar2 + 0x24) != 0)))) {
      *(int *)(param_1 + 0x24) = *(int *)(iVar2 + 0x24);
    }
    if (iVar1 != -1) {
      (&DAT_01dc1378)[iVar1] = param_1;
      (&DAT_01dbf770)[iVar1] = 1;
    }
  }
  return;
}

