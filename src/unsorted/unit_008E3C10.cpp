// src/unsorted/unit_008E3C10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E3C10..008E3C10, 1 functions

#include "types.h"

// 008E3C10  FUN_008e3c10  size=210  [run]
void __fastcall FUN_008e3c10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 1;
  RayCastManager::getWork(param_1 + 0x160);
  FUN_004066f0();
  FUN_008e2520(*(int *)(param_1 + 0x100) << 0x10 | 0x1f);
  puVar2 = *(undefined4 **)(param_1 + 0xd0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (iVar3 != iVar3 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e3c10();
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

