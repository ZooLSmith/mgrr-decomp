// src/unsorted/unit_0091F260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0091F260..0091F260, 1 functions

#include "mgrr.h"

// 0091F260  FUN_0091f260  size=162  [run]
void FUN_0091f260(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0xe8) != '\x05') && (*(char *)(param_1 + 0xe8) != '\x04')) {
    FUN_0119f640(param_2);
    FUN_004066f0();
    uVar3 = -(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc);
    puVar1 = (uint *)(uVar3 + 4);
    *puVar1 = *puVar1 | 8;
    *(undefined4 *)(uVar3 + 0x94) = param_2;
    if (DAT_01885d68 != 1) {
      piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar2 = *piVar2 + -1;
      if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    if (param_3 != 0) {
      FUN_0091d4f0(param_1);
    }
  }
  return;
}

