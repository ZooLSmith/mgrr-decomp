// src/unsorted/unit_0093FEA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093FEA0..0093FEA0, 1 functions

#include "mgrr.h"

// 0093FEA0  FUN_0093fea0  size=176  [run]
undefined4 * __thiscall FUN_0093fea0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)(iVar4 + uVar3 * 0x28);
  if ((((param_2 != puVar2) && (iVar4 != 0)) && (uVar3 != 0)) &&
     ((uint)(((int)param_2 - iVar4) / 0x28) < uVar3)) {
    if (param_2 != puVar2 + -10) {
      puVar5 = param_2 + 0xc;
      do {
        FUN_00a7c960(puVar5 + -2);
        puVar5[-0xb] = puVar5[-1];
        puVar5[-10] = *puVar5;
        puVar5[-9] = puVar5[1];
        puVar5[-8] = puVar5[2];
        puVar5[-7] = puVar5[3];
        puVar5[-6] = puVar5[4];
        puVar5[-5] = puVar5[5];
        puVar5[-4] = puVar5[6];
        puVar5[-3] = puVar5[7];
        puVar1 = puVar5 + -2;
        puVar5 = puVar5 + 10;
      } while (puVar1 != puVar2 + -10);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    return param_2;
  }
  return puVar2;
}

