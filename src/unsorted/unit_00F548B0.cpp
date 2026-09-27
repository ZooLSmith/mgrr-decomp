// src/unsorted/unit_00F548B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F548B0..00F54E10, 2 functions

#include "types.h"

// 00F548B0  FUN_00f548b0  size=1365  [run]
undefined4 FUN_00f548b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int iVar20;
  float *pfVar21;
  int local_74;
  int local_68;
  float *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  undefined4 *local_50;
  
  iVar13 = param_3 * 4 + 2;
  local_74 = 0;
  iVar10 = iVar13 * param_4;
  iVar20 = iVar10 * 8 + param_2;
  iVar16 = iVar10 * 0x10 + param_2;
  iVar17 = param_2 + iVar10 * 0x18;
  if (0 < param_4) {
    local_54 = (float *)(iVar16 + 0x14);
    local_58 = (float *)(iVar17 + 0x1c);
    local_5c = (float *)(iVar20 + 0xc);
    local_50 = (undefined4 *)(param_1 + 0x14);
    local_60 = (float *)(param_2 + 8);
    do {
      local_68 = 0;
      if (0 < param_3) {
        fVar8 = (float)local_74 * (1.0 / (float)param_4);
        fVar7 = fVar8 + 1.0 / (float)param_4;
        fVar1 = 1.0 - fVar7;
        fVar2 = 1.0 - fVar8;
        puVar9 = local_50;
        pfVar11 = local_54;
        pfVar14 = local_58;
        pfVar18 = local_5c;
        pfVar21 = local_60;
        do {
          fVar6 = (float)local_68 * (1.0 / (float)param_3);
          puVar9[-5] = fVar6 - 1.0;
          puVar9[-4] = fVar7 - 1.0;
          puVar9[-3] = 0;
          puVar9[-2] = fVar6 - 1.0;
          puVar9[-1] = fVar8 - 1.0;
          *puVar9 = 0;
          fVar5 = fVar6 + 1.0 / (float)param_3;
          puVar9[1] = fVar5 - 1.0;
          puVar9[2] = fVar7 - 1.0;
          puVar9[3] = 0;
          puVar9[4] = fVar5 - 1.0;
          puVar9[5] = fVar8 - 1.0;
          puVar9[6] = 0;
          pfVar11[-5] = fVar6;
          pfVar11[-4] = fVar7;
          pfVar11[-3] = fVar6;
          pfVar11[-2] = fVar8;
          pfVar11[-1] = fVar5;
          *pfVar11 = fVar7;
          pfVar11[1] = fVar5;
          pfVar11[2] = fVar8;
          fVar3 = 1.0 - fVar6;
          pfVar14[-7] = fVar3;
          pfVar14[-6] = fVar7;
          pfVar14[-5] = fVar3;
          pfVar14[-4] = fVar8;
          fVar4 = 1.0 - fVar5;
          pfVar14[-3] = fVar4;
          *(float *)((iVar17 - iVar16) + (int)pfVar11) = fVar7;
          pfVar14[-1] = fVar4;
          *pfVar14 = fVar8;
          pfVar21[-2] = fVar6;
          pfVar21[-1] = fVar1;
          *pfVar21 = fVar6;
          *(float *)((int)pfVar18 + (param_2 - iVar20)) = fVar2;
          puVar9 = puVar9 + 0xc;
          pfVar21[2] = fVar5;
          *(float *)((param_2 - iVar16) + (int)pfVar11) = fVar1;
          pfVar11 = pfVar11 + 8;
          pfVar21[4] = fVar5;
          *(float *)((int)pfVar14 + (param_2 - iVar17)) = fVar2;
          pfVar18[-3] = fVar3;
          pfVar18[-2] = fVar1;
          pfVar18[-1] = fVar3;
          *pfVar18 = fVar2;
          pfVar18[1] = fVar4;
          *(float *)((iVar20 - iVar16) + -0x20 + (int)pfVar11) = fVar1;
          pfVar18[3] = fVar4;
          *(float *)((int)pfVar14 + (iVar20 - iVar17)) = fVar2;
          local_68 = local_68 + 1;
          pfVar14 = pfVar14 + 8;
          pfVar18 = pfVar18 + 8;
          pfVar21 = pfVar21 + 8;
        } while (local_68 < param_3);
      }
      local_50 = local_50 + param_3 * 0xc + 6;
      local_74 = local_74 + 1;
      local_60 = local_60 + param_3 * 8 + 4;
      local_5c = local_5c + param_3 * 8 + 4;
      local_58 = local_58 + param_3 * 8 + 4;
      local_54 = local_54 + param_3 * 8 + 4;
    } while (local_74 < param_4);
  }
  iVar16 = param_4 + -1;
  iVar17 = 0;
  if (3 < iVar16) {
    puVar9 = (undefined4 *)(param_1 + -4 + param_3 * 0x30);
    puVar19 = (undefined4 *)(param_3 * 0xc0 + 0x44 + param_1);
    puVar15 = (undefined4 *)(param_1 + 0x2c + param_3 * 0x90);
    puVar12 = (undefined4 *)(param_3 * 0x60 + 0x14 + param_1);
    iVar20 = (param_4 - 5U >> 2) + 1;
    iVar17 = iVar20 * 4;
    do {
      puVar9[1] = puVar9[-2];
      puVar9[2] = puVar9[-1];
      puVar9[3] = *puVar9;
      puVar9[4] = puVar9[7];
      puVar9[5] = puVar9[8];
      puVar9[6] = puVar9[9];
      puVar9 = puVar9 + iVar13 * 0xc;
      puVar12[1] = puVar12[-2];
      puVar12[2] = puVar12[-1];
      puVar12[3] = *puVar12;
      puVar12[4] = puVar12[7];
      puVar12[5] = puVar12[8];
      puVar12[6] = puVar12[9];
      puVar12 = puVar12 + iVar13 * 0xc;
      puVar15[1] = puVar15[-2];
      puVar15[2] = puVar15[-1];
      puVar15[3] = *puVar15;
      puVar15[4] = puVar15[7];
      puVar15[5] = puVar15[8];
      puVar15[6] = puVar15[9];
      puVar15 = puVar15 + iVar13 * 0xc;
      puVar19[1] = puVar19[-2];
      puVar19[2] = puVar19[-1];
      puVar19[3] = *puVar19;
      puVar19[4] = puVar19[7];
      puVar19[5] = puVar19[8];
      puVar19[6] = puVar19[9];
      puVar19 = puVar19 + iVar13 * 0xc;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  if (iVar17 < iVar16) {
    puVar9 = (undefined4 *)(param_1 + -4 + (iVar13 * iVar17 + param_3 * 4) * 0xc);
    iVar16 = iVar16 - iVar17;
    do {
      puVar9[1] = puVar9[-2];
      puVar9[2] = puVar9[-1];
      puVar9[3] = *puVar9;
      puVar9[4] = puVar9[7];
      puVar9[5] = puVar9[8];
      puVar9[6] = puVar9[9];
      puVar9 = puVar9 + param_3 * 0xc + 6;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  iVar17 = iVar10 + -2;
  iVar13 = FUN_00f9cae0(0xc,iVar17,param_5);
  if ((iVar13 != 0) && (iVar13 = FUN_00f99d50(param_1,0xc,iVar17), iVar13 != 0)) {
    iVar13 = 0;
    while ((iVar16 = FUN_00f9cae0(8,iVar17,param_5), iVar16 != 0 &&
           (iVar16 = FUN_00f99d50(param_2,8,iVar17), iVar16 != 0))) {
      param_2 = param_2 + iVar10 * 8;
      iVar13 = iVar13 + 1;
      if (3 < iVar13) {
        return 1;
      }
    }
  }
  return 0;
}

// 00F54E10  FUN_00f54e10  size=1425  [run]
undefined4 FUN_00f54e10(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  int local_74;
  int local_68;
  float *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  undefined4 *local_50;
  
  iVar9 = param_3 * 4 + 2;
  local_74 = 0;
  iVar15 = iVar9 * param_4;
  iVar20 = iVar15 * 8 + param_2;
  iVar18 = iVar15 * 0x10 + param_2;
  iVar13 = param_2 + iVar15 * 0x18;
  if (0 < param_4) {
    local_54 = (float *)(iVar18 + 0x14);
    local_58 = (float *)(iVar13 + 0x1c);
    local_5c = (float *)(iVar20 + 0xc);
    local_50 = (undefined4 *)(param_1 + 0x18);
    local_60 = (float *)(param_2 + 8);
    do {
      local_68 = 0;
      if (0 < param_3) {
        fVar8 = (float)local_74 * (1.0 / (float)param_4);
        fVar7 = fVar8 + 1.0 / (float)param_4;
        fVar1 = 1.0 - fVar7;
        fVar2 = 1.0 - fVar8;
        puVar11 = local_50;
        pfVar12 = local_54;
        pfVar16 = local_58;
        pfVar19 = local_5c;
        pfVar21 = local_60;
        do {
          fVar6 = (float)local_68 * (1.0 / (float)param_3);
          puVar11[-6] = fVar6 - 1.0;
          puVar11[-5] = fVar7 - 1.0;
          puVar11[-4] = 0;
          puVar11[-2] = fVar6 - 1.0;
          puVar11[-1] = fVar8 - 1.0;
          *puVar11 = 0;
          fVar5 = fVar6 + 1.0 / (float)param_3;
          puVar11[2] = fVar5 - 1.0;
          puVar11[3] = fVar7 - 1.0;
          puVar11[4] = 0;
          puVar11[6] = fVar5 - 1.0;
          puVar11[7] = fVar8 - 1.0;
          puVar11[8] = 0;
          pfVar12[-5] = fVar6;
          pfVar12[-4] = fVar7;
          pfVar12[-3] = fVar6;
          pfVar12[-2] = fVar8;
          pfVar12[-1] = fVar5;
          *pfVar12 = fVar7;
          pfVar12[1] = fVar5;
          pfVar12[2] = fVar8;
          fVar3 = 1.0 - fVar6;
          pfVar16[-7] = fVar3;
          pfVar16[-6] = fVar7;
          pfVar16[-5] = fVar3;
          pfVar16[-4] = fVar8;
          fVar4 = 1.0 - fVar5;
          pfVar16[-3] = fVar4;
          *(float *)((int)pfVar12 + (iVar13 - iVar18)) = fVar7;
          pfVar16[-1] = fVar4;
          *pfVar16 = fVar8;
          pfVar21[-2] = fVar6;
          pfVar21[-1] = fVar1;
          *pfVar21 = fVar6;
          *(float *)((param_2 - iVar20) + (int)pfVar19) = fVar2;
          pfVar21[2] = fVar5;
          puVar11 = puVar11 + 0x10;
          *(float *)((param_2 - iVar18) + (int)pfVar12) = fVar1;
          pfVar21[4] = fVar5;
          pfVar12 = pfVar12 + 8;
          *(float *)((int)pfVar16 + (param_2 - iVar13)) = fVar2;
          pfVar19[-3] = fVar3;
          pfVar19[-2] = fVar1;
          pfVar19[-1] = fVar3;
          *pfVar19 = fVar2;
          pfVar19[1] = fVar4;
          *(float *)((iVar20 - iVar18) + -0x20 + (int)pfVar12) = fVar1;
          pfVar19[3] = fVar4;
          *(float *)((int)pfVar16 + (iVar20 - iVar13)) = fVar2;
          local_68 = local_68 + 1;
          pfVar16 = pfVar16 + 8;
          pfVar19 = pfVar19 + 8;
          pfVar21 = pfVar21 + 8;
        } while (local_68 < param_3);
      }
      local_50 = local_50 + param_3 * 0x10 + 8;
      local_74 = local_74 + 1;
      local_60 = local_60 + param_3 * 8 + 4;
      local_5c = local_5c + param_3 * 8 + 4;
      local_58 = local_58 + param_3 * 8 + 4;
      local_54 = local_54 + param_3 * 8 + 4;
    } while (local_74 < param_4);
  }
  iVar18 = param_4 + -1;
  iVar13 = 0;
  if (3 < iVar18) {
    puVar11 = (undefined4 *)(param_3 * 0x100 + 0x58 + param_1);
    puVar10 = (undefined4 *)(param_3 * 0x40 + -8 + param_1);
    puVar17 = (undefined4 *)(param_3 * 0xc0 + 0x38 + param_1);
    puVar14 = (undefined4 *)(param_3 * 0x80 + 0x18 + param_1);
    iVar20 = (param_4 - 5U >> 2) + 1;
    iVar13 = iVar20 * 4;
    do {
      puVar10[2] = puVar10[-2];
      puVar10[3] = puVar10[-1];
      puVar10[4] = *puVar10;
      puVar10[5] = puVar10[1];
      puVar10[6] = puVar10[10];
      puVar10[7] = puVar10[0xb];
      puVar10[8] = puVar10[0xc];
      puVar10[9] = puVar10[0xd];
      puVar10 = puVar10 + iVar9 * 0x10;
      puVar14[2] = puVar14[-2];
      puVar14[3] = puVar14[-1];
      puVar14[4] = *puVar14;
      puVar14[5] = puVar14[1];
      puVar14[6] = puVar14[10];
      puVar14[7] = puVar14[0xb];
      puVar14[8] = puVar14[0xc];
      puVar14[9] = puVar14[0xd];
      puVar14 = puVar14 + iVar9 * 0x10;
      puVar17[2] = puVar17[-2];
      puVar17[3] = puVar17[-1];
      puVar17[4] = *puVar17;
      puVar17[5] = puVar17[1];
      puVar17[6] = puVar17[10];
      puVar17[7] = puVar17[0xb];
      puVar17[8] = puVar17[0xc];
      puVar17[9] = puVar17[0xd];
      puVar17 = puVar17 + iVar9 * 0x10;
      puVar11[2] = puVar11[-2];
      puVar11[3] = puVar11[-1];
      puVar11[4] = *puVar11;
      puVar11[5] = puVar11[1];
      puVar11[6] = puVar11[10];
      puVar11[7] = puVar11[0xb];
      puVar11[8] = puVar11[0xc];
      puVar11[9] = puVar11[0xd];
      puVar11 = puVar11 + iVar9 * 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  if (iVar13 < iVar18) {
    puVar11 = (undefined4 *)(param_1 + -8 + (iVar9 * iVar13 + param_3 * 4) * 0x10);
    iVar18 = iVar18 - iVar13;
    do {
      puVar11[2] = puVar11[-2];
      puVar11[3] = puVar11[-1];
      puVar11[4] = *puVar11;
      puVar11[5] = puVar11[1];
      puVar11[6] = puVar11[10];
      puVar11[7] = puVar11[0xb];
      puVar11[8] = puVar11[0xc];
      puVar11[9] = puVar11[0xd];
      puVar11 = puVar11 + param_3 * 0x10 + 8;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  iVar13 = iVar15 + -2;
  iVar9 = FUN_00f9cae0(0x10,iVar13,param_5);
  if ((iVar9 != 0) && (iVar9 = FUN_00f99d50(param_1,0x10,iVar13), iVar9 != 0)) {
    iVar9 = 0;
    while ((iVar18 = FUN_00f9cae0(8,iVar13,param_5), iVar18 != 0 &&
           (iVar18 = FUN_00f99d50(param_2,8,iVar13), iVar18 != 0))) {
      param_2 = param_2 + iVar15 * 8;
      iVar9 = iVar9 + 1;
      if (3 < iVar9) {
        return 1;
      }
    }
  }
  return 0;
}

