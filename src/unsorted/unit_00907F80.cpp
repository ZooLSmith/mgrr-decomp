// src/unsorted/unit_00907F80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00907F80..00908220, 3 functions

#include "mgrr.h"

// 00907F80  FUN_00907f80  size=274  [run]
void __thiscall FUN_00907f80(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = param_3[1];
  iVar11 = param_1[1];
  if (iVar2 <= param_1[1]) {
    iVar11 = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar9 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    FUN_0100a210(param_2,param_1,iVar9,0x30);
  }
  iVar9 = *param_3;
  iVar10 = *param_1;
  if (0 < iVar11) {
    puVar7 = (undefined4 *)(iVar9 + 0x24);
    puVar6 = (undefined4 *)(iVar10 + 0x10);
    iVar8 = iVar11;
    do {
      uVar3 = puVar7[-8];
      uVar4 = puVar7[-7];
      uVar5 = puVar7[-6];
      puVar6[-4] = puVar7[-9];
      puVar6[-3] = uVar3;
      puVar6[-2] = uVar4;
      puVar6[-1] = uVar5;
      puVar1 = (undefined4 *)((iVar9 - iVar10) + (int)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6[4] = puVar7[-1];
      puVar6[5] = *puVar7;
      puVar6[6] = puVar7[1];
      puVar6[7] = puVar7[2];
      puVar7 = puVar7 + 0xc;
      puVar6 = puVar6 + 0xc;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar9 = iVar2 - iVar11;
  iVar10 = *param_3 + iVar11 * 0x30;
  iVar11 = *param_1 + iVar11 * 0x30;
  if (iVar9 < 1) {
    param_1[1] = iVar2;
    return;
  }
  puVar7 = (undefined4 *)(iVar10 + 0x24);
  puVar6 = (undefined4 *)(iVar11 + 0x10);
  do {
    if (puVar6 != (undefined4 *)0x10) {
      uVar3 = puVar7[-8];
      uVar4 = puVar7[-7];
      uVar5 = puVar7[-6];
      puVar6[-4] = puVar7[-9];
      puVar6[-3] = uVar3;
      puVar6[-2] = uVar4;
      puVar6[-1] = uVar5;
      puVar1 = (undefined4 *)((iVar10 - iVar11) + (int)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6[4] = puVar7[-1];
      puVar6[5] = *puVar7;
      puVar6[6] = puVar7[1];
      puVar6[7] = puVar7[2];
    }
    puVar6 = puVar6 + 0xc;
    puVar7 = puVar7 + 0xc;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  param_1[1] = iVar2;
  return;
}

// 00908160  FUN_00908160  size=192  [run]
void FUN_00908160(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  
  FUN_004066f0();
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x40;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (param_1 != 0) {
    FUN_004066f0();
    puVar5 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
    *puVar5 = *puVar5 | 4;
    puVar5[4] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar3 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 00908220  FUN_00908220  size=36  [run]
void __fastcall FUN_00908220(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_009078e0();
  }
  Hw::cHeap::cHeap_5();
  return;
}

