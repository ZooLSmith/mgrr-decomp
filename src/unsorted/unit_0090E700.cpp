// src/unsorted/unit_0090E700.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E700..0090E700, 1 functions

#include "types.h"

// 0090E700  FUN_0090e700  size=284  [run]
void __thiscall FUN_0090e700(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar12 = *(int *)(param_1 + 0x14);
  if (iVar2 <= *(int *)(param_1 + 0x14)) {
    iVar12 = iVar2;
  }
  uVar6 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
  if ((int)uVar6 < iVar2) {
    iVar10 = uVar6 * 2;
    iVar11 = iVar2;
    if (iVar2 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),iVar11,0x30);
  }
  iVar10 = *(int *)(param_2 + 0x10);
  iVar11 = *(int *)(param_1 + 0x10);
  if (0 < iVar12) {
    puVar8 = (undefined4 *)(iVar10 + 0x24);
    puVar7 = (undefined4 *)(iVar11 + 0x10);
    iVar9 = iVar12;
    do {
      uVar3 = puVar8[-8];
      uVar4 = puVar8[-7];
      uVar5 = puVar8[-6];
      puVar7[-4] = puVar8[-9];
      puVar7[-3] = uVar3;
      puVar7[-2] = uVar4;
      puVar7[-1] = uVar5;
      puVar1 = (undefined4 *)((iVar10 - iVar11) + (int)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7[4] = puVar8[-1];
      puVar7[5] = *puVar8;
      puVar7[6] = puVar8[1];
      puVar7[7] = puVar8[2];
      puVar8 = puVar8 + 0xc;
      puVar7 = puVar7 + 0xc;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar10 = iVar2 - iVar12;
  iVar11 = *(int *)(param_2 + 0x10) + iVar12 * 0x30;
  iVar12 = *(int *)(param_1 + 0x10) + iVar12 * 0x30;
  if (0 < iVar10) {
    puVar8 = (undefined4 *)(iVar11 + 0x24);
    puVar7 = (undefined4 *)(iVar12 + 0x10);
    do {
      if (puVar7 != (undefined4 *)0x10) {
        uVar3 = puVar8[-8];
        uVar4 = puVar8[-7];
        uVar5 = puVar8[-6];
        puVar7[-4] = puVar8[-9];
        puVar7[-3] = uVar3;
        puVar7[-2] = uVar4;
        puVar7[-1] = uVar5;
        puVar1 = (undefined4 *)((iVar11 - iVar12) + (int)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = puVar8[-1];
        puVar7[5] = *puVar8;
        puVar7[6] = puVar8[1];
        puVar7[7] = puVar8[2];
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(int *)(param_1 + 0x14) = iVar2;
    return;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}

