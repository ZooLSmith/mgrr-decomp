// src/unsorted/unit_0090B720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090B720..0090B8D0, 2 functions

#include "types.h"

// 0090B720  FUN_0090b720  size=274  [run]
void __thiscall FUN_0090b720(int *param_1,int *param_2)

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
  
  iVar2 = param_2[1];
  iVar11 = param_1[1];
  if (iVar2 <= param_1[1]) {
    iVar11 = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar9 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar9,0x30);
  }
  iVar9 = *param_2;
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
  iVar10 = *param_2 + iVar11 * 0x30;
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

// 0090B8D0  FUN_0090b8d0  size=518  [run]
void FUN_0090b8d0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar5 = 0;
  if (3 < param_2) {
    puVar7 = (undefined4 *)(param_3 + 0x78);
    iVar8 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar8 * 4;
    puVar4 = (undefined4 *)(param_1 + 0x70);
    do {
      if (puVar4 != (undefined4 *)0x70) {
        uVar1 = puVar7[-0x1d];
        uVar2 = puVar7[-0x1c];
        uVar3 = puVar7[-0x1b];
        puVar4[-0x1c] = puVar7[-0x1e];
        puVar4[-0x1b] = uVar1;
        puVar4[-0x1a] = uVar2;
        puVar4[-0x19] = uVar3;
        puVar4[-0x18] = puVar7[-0x1a];
        puVar4[-0x17] = puVar7[-0x19];
        puVar4[-0x16] = puVar7[-0x18];
        puVar4[-0x15] = puVar7[-0x17];
        puVar9 = puVar7 + -0x16;
        puVar10 = puVar4 + -0x14;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4[-0xc] = puVar7[-0xe];
        puVar4[-8] = puVar7[-10];
      }
      if (puVar4 != (undefined4 *)0x10) {
        uVar1 = puVar7[-5];
        uVar2 = puVar7[-4];
        uVar3 = puVar7[-3];
        puVar4[-4] = puVar7[-6];
        puVar4[-3] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
        *puVar4 = *(undefined4 *)((int)puVar4 + (param_3 - param_1));
        puVar4[1] = puVar7[-1];
        puVar4[2] = *puVar7;
        puVar4[3] = puVar7[1];
        puVar9 = puVar7 + 2;
        puVar10 = puVar4 + 4;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4[0xc] = puVar7[10];
        puVar4[0x10] = puVar7[0xe];
      }
      if (puVar4 + 0x14 != (undefined4 *)0x0) {
        uVar1 = puVar7[0x13];
        uVar2 = puVar7[0x14];
        uVar3 = puVar7[0x15];
        puVar4[0x14] = puVar7[0x12];
        puVar4[0x15] = uVar1;
        puVar4[0x16] = uVar2;
        puVar4[0x17] = uVar3;
        puVar4[0x18] = puVar7[0x16];
        puVar4[0x19] = puVar7[0x17];
        puVar4[0x1a] = puVar7[0x18];
        puVar4[0x1b] = puVar7[0x19];
        puVar9 = puVar7 + 0x1a;
        puVar10 = puVar4 + 0x1c;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4[0x24] = puVar7[0x22];
        puVar4[0x28] = puVar7[0x26];
      }
      if (puVar4 + 0x2c != (undefined4 *)0x0) {
        uVar1 = puVar7[0x2b];
        uVar2 = puVar7[0x2c];
        uVar3 = puVar7[0x2d];
        puVar4[0x2c] = puVar7[0x2a];
        puVar4[0x2d] = uVar1;
        puVar4[0x2e] = uVar2;
        puVar4[0x2f] = uVar3;
        puVar4[0x30] = puVar7[0x2e];
        puVar4[0x31] = puVar7[0x2f];
        puVar4[0x32] = puVar7[0x30];
        puVar4[0x33] = puVar7[0x31];
        puVar9 = puVar7 + 0x32;
        puVar10 = puVar4 + 0x34;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4[0x3c] = puVar7[0x3a];
        puVar4[0x40] = puVar7[0x3e];
      }
      puVar4 = puVar4 + 0x60;
      puVar7 = puVar7 + 0x60;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (iVar5 < param_2) {
    puVar7 = (undefined4 *)(iVar5 * 0x60 + 0x18 + param_3);
    param_2 = param_2 - iVar5;
    puVar4 = (undefined4 *)(iVar5 * 0x60 + 0x10 + param_1);
    do {
      if (puVar4 != (undefined4 *)0x10) {
        uVar1 = puVar7[-5];
        uVar2 = puVar7[-4];
        uVar3 = puVar7[-3];
        puVar4[-4] = puVar7[-6];
        puVar4[-3] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
        *puVar4 = *(undefined4 *)((int)puVar4 + (param_3 - param_1));
        puVar4[1] = puVar7[-1];
        puVar4[2] = *puVar7;
        puVar4[3] = puVar7[1];
        puVar9 = puVar7 + 2;
        puVar10 = puVar4 + 4;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar4[0xc] = puVar7[10];
        puVar4[0x10] = puVar7[0xe];
      }
      puVar4 = puVar4 + 0x18;
      puVar7 = puVar7 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

