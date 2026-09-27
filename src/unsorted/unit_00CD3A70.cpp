// src/unsorted/unit_00CD3A70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD3A70..00CD3A70, 1 functions

#include "types.h"

// 00CD3A70  FUN_00cd3a70  size=197  [run]
void FUN_00cd3a70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((((DAT_01dc1490 != 0) && (param_1 != 0)) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) &&
      ((iVar1 = FUN_00a7c800(), (*(byte *)(iVar1 + 0x4c0) & 1) != 0 &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) &&
     ((iVar2 = FUN_00cc6d70(param_1), iVar2 != 0 &&
      ((iVar1 = FUN_0049b700(iVar1), iVar1 != 0 && (*(int *)(iVar1 + 0x870) < 1)))))) {
    uVar3 = 0;
    do {
      if (param_1 == (&DAT_01dc0ad0)[uVar3]) {
        (&DAT_01dc0a50)[uVar3] = param_1;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    do {
      if ((&DAT_01dc0ad0)[uVar4] == 0) {
        if (uVar3 == 0xffffffff) {
          uVar3 = uVar4;
        }
      }
      else {
        uVar5 = uVar4;
        if ((&DAT_01dc0a50)[uVar4] == param_1) break;
      }
      uVar5 = uVar3;
      uVar4 = uVar4 + 1;
      uVar3 = uVar5;
    } while (uVar4 < 0x20);
    if (uVar5 != 0xffffffff) {
      (&DAT_01dc0a50)[uVar5] = param_1;
    }
  }
  return;
}

