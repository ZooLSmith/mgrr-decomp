// src/unsorted/unit_00D36520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D36520..00D36520, 1 functions

#include "mgrr.h"

// 00D36520  FUN_00d36520  size=182  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d36520(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00d29960(0x55);
  *(int *)(param_1 + 4) = iVar1;
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x10000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x210) = 0xc;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
  piVar3 = (int *)(param_1 + 8);
  iVar1 = 2;
  do {
    iVar2 = FUN_00d29960(0x57);
    *piVar3 = iVar2;
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x10000;
    *(undefined4 *)(*piVar3 + 0x1e4) = 0xc;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (iVar1 != 0);
  DAT_018b5764 = 0xbf800000;
  DAT_01dc1374 = 0;
  DAT_018b5768 = 0xbf800000;
  _DAT_018b576c = 0xbf800000;
  _DAT_018b5770 = 0xbf800000;
  return;
}

