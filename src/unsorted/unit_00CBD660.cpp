// src/unsorted/unit_00CBD660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD660..00CBD6A0, 2 functions

#include "types.h"

// 00CBD660  FUN_00cbd660  size=53  [run]
void __thiscall FUN_00cbd660(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (DAT_01dc1300 != 0)) && (*(int *)(iVar1 + 0x18) != 0)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x40) = param_2;
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x44) = param_3;
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x48) = 0;
  }
  return;
}

// 00CBD6A0  FUN_00cbd6a0  size=292  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cbd6a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  
  uVar5 = 0;
  do {
    if (param_2 == (&DAT_01dc12ac)[uVar5]) {
      (&DAT_01dc1284)[uVar5] = param_2;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 10);
  uVar6 = 0;
  uVar5 = 0xffffffff;
  do {
    uVar9 = uVar5;
    if (uVar5 != 0xffffffff) goto LAB_00cbd6ff;
    uVar4 = uVar6;
  } while ((((&DAT_01dc12ac)[uVar6] == 0) ||
           (uVar9 = uVar6, uVar4 = uVar5, (&DAT_01dc1284)[uVar6] != param_2)) &&
          (uVar9 = uVar4, uVar6 = uVar6 + 1, uVar5 = uVar9, uVar6 < 10));
  if (uVar9 != 0xffffffff) {
LAB_00cbd6ff:
    if (param_1 == 3) {
      if (DAT_01dc1490 == 0) {
        pfVar7 = (float *)&DAT_01dc14e0;
      }
      else {
        pfVar7 = (float *)(DAT_01dc1490 + 0x40);
      }
      fVar1 = *(float *)(param_2 + 0x40) - *pfVar7;
      fVar3 = *(float *)(param_2 + 0x44) - pfVar7[1];
      fVar2 = *(float *)(param_2 + 0x48) - pfVar7[2];
      fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
      if (fVar1 < _DAT_018b66d8) {
        (&DAT_01dc12d4)[uVar9] = 1;
        (&DAT_01dbf964)[uVar9] = 3;
        (&DAT_01dc1284)[uVar9] = param_2;
      }
      if ((fVar1 < _DAT_018b66d4) &&
         ((DAT_01dc14c8 == (int *)0x0 ||
          (iVar8 = (**(code **)(*DAT_01dc14c8 + 0x32c))(), iVar8 == 0)))) {
        DAT_01dc1300 = 1;
        DAT_01dc12fc = 3;
        return;
      }
    }
    else {
      (&DAT_01dc12d4)[uVar9] = 1;
      (&DAT_01dbf964)[uVar9] = param_1;
      (&DAT_01dc1284)[uVar9] = param_2;
    }
  }
  return;
}

