// src/unsorted/unit_009CB9F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CB9F0..009CBA50, 2 functions

#include "mgrr.h"

// 009CB9F0  FUN_009cb9f0  size=84  [run]
undefined4 FUN_009cb9f0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = DAT_01b781fc;
  if (*(uint *)(DAT_01b781f8 + 8) != 0) {
    do {
      if (*puVar1 == (puVar1[1] & param_1)) {
        iVar2 = FUN_009cab20(puVar1,param_1,param_2,param_3);
        if (iVar2 == 0) {
          return 0;
        }
        return *(undefined4 *)(iVar2 + 0x14);
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar3 < *(uint *)(DAT_01b781f8 + 8));
  }
  return 0;
}

// 009CBA50  FUN_009cba50  size=360  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009cba50(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  
  uVar1 = param_4;
  uVar7 = param_2;
  if (param_2 == 0x90000) {
    return 0;
  }
  if (param_5 < 0) {
    return 0;
  }
  uVar6 = 0;
  puVar2 = DAT_01b78204;
  if (*(uint *)(DAT_01b78200 + 8) != 0) {
    do {
      if (*puVar2 == (puVar2[1] & param_2)) {
        iVar3 = FUN_009cabd0(puVar2,param_2,param_5,param_4);
        if (iVar3 == 0) {
          return 0;
        }
        if (((*(uint *)(iVar3 + 0x14) & 2) != 0) && (param_3 == 0)) {
          return 0;
        }
        if (((*(uint *)(iVar3 + 0x14) & 1) != 0) && (uVar7 == uVar1)) {
          return 0;
        }
        if (DAT_01b78228 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b78210);
        }
        iVar9 = iVar3 - _DAT_01b78208 >> 5;
        iVar8 = 0;
        param_2 = -1;
        uVar7 = 0;
        piVar10 = &DAT_01b78238;
        goto LAB_009cbb00;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar6 < *(uint *)(DAT_01b78200 + 8));
  }
  return 0;
  while( true ) {
    iVar4 = param_2;
    uVar7 = uVar7 + 0xc;
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 3;
    if (0x5ff < uVar7) break;
LAB_009cbb00:
    if (*piVar10 < 1) {
      if (param_2 == -1) {
        param_2 = iVar8;
      }
    }
    else {
      iVar4 = FUN_00a7c9b0(&param_1);
      if (((iVar4 == 0) && (piVar10[-1] == iVar9)) && (0 < *piVar10)) goto LAB_009cbb51;
    }
  }
  if (param_2 != -1) {
    FUN_00a7c960(&param_1);
    (&DAT_01b78234)[iVar4 * 3] = iVar9;
    uVar5 = FUN_00fdbc60();
    bVar11 = DAT_01b78228 != 0;
    (&DAT_01b78238)[iVar4 * 3] = uVar5;
    if (bVar11) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b78210);
    }
    return *(undefined4 *)(iVar3 + 0x18);
  }
  FUN_00dd5650(&DAT_01659178);
LAB_009cbb51:
  if (DAT_01b78228 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b78210);
  }
  return 0;
}

