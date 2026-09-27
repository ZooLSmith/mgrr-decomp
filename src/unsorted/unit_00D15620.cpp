// src/unsorted/unit_00D15620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D15620..00D15CF0, 2 functions

#include "mgrr.h"

// 00D15620  FUN_00d15620  size=1731  [run]
void __thiscall FUN_00d15620(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x20);
  if (DAT_01dc1418 == '\0') {
    if ((((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(uVar6 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
       && ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
           (iVar2 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar2 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 &&
        ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
         (iVar2 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar2 == 0)))))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x28) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
        (iVar2 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar2 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x2c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0 &&
        ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
         (iVar2 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar2 == 0)))))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x30) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
        (iVar2 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar2 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar2 = *(int *)(&DAT_018b56b8 + *(int *)(&DAT_018b56c0 + param_2 * 0xc) * 4);
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x28) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x2c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x30) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)) {
      piVar1[9] = iVar2;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    FUN_00cdeec0(*(undefined4 *)(&DAT_018b56c8 + param_2 * 0xc));
    return;
  }
  if (((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
     ((piVar1 = *(int **)(uVar6 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0 &&
      ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
       (iVar2 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar2 == 0)))))) {
    FUN_00dd5650(&DAT_016b9264,0x6709e058);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar1 != (int *)0x0)) &&
     ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
      (iVar2 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar2 == 0)))) {
    FUN_00dd5650(&DAT_016b9264,0x6709e058);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x28) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar1 != (int *)0x0 &&
      ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
       (iVar2 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar2 == 0)))))) {
    FUN_00dd5650(&DAT_016b9264,0x6709e058);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x2c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar1 != (int *)0x0)) &&
     ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
      (iVar2 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar2 == 0)))) {
    FUN_00dd5650(&DAT_016b9264,0x6709e058);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar2 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x30) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar1 != (int *)0x0 &&
      ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1 &&
       (iVar2 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar2 == 0)))))) {
    FUN_00dd5650(&DAT_016b9264,0x6709e058);
  }
  uVar7 = DAT_01b77e88;
  uVar6 = DAT_01b77e80;
  iVar2 = *(int *)(&DAT_018b56c0 + param_2 * 0xc);
  if (iVar2 == 1) {
    uVar3 = DAT_01b77e80 & 0x80000000;
    if (uVar3 == 0) {
      iVar2 = FUN_00cc70f0(DAT_01b77e80);
    }
    else {
      iVar2 = FUN_00caa190();
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x28) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x2c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)) {
      piVar1[9] = iVar2;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x30) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = iVar2;
    }
    uVar7 = uVar6;
    if (uVar3 != 0) {
      iVar2 = FUN_00caa1d0();
      goto LAB_00d1594c;
    }
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    uVar6 = DAT_01b77e88 & 0x80000000;
    if (uVar6 == 0) {
      uVar5 = FUN_00cc70f0(DAT_01b77e88);
    }
    else {
      uVar5 = FUN_00caa190();
    }
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar5);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x24),uVar5);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x28),uVar5);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x2c),uVar5);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x30),uVar5);
    if (uVar6 != 0) {
      iVar2 = FUN_00caa1d0(uVar7);
      goto LAB_00d1594c;
    }
  }
  iVar2 = FUN_00ca9f50(uVar7);
LAB_00d1594c:
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(3);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(4);
    return;
  }
  return;
}

// 00D15CF0  FUN_00d15cf0  size=5746  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d15cf0(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float10 fVar16;
  float10 fVar17;
  float10 extraout_ST0;
  float10 fVar18;
  float10 fVar19;
  char *pcVar20;
  float local_2c;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  undefined1 uStack_c;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  cVar7 = FUN_00ce12f0(0);
  iVar13 = 1;
  if ((cVar7 != '\0') || (DAT_01b7b79c == 1)) {
    *(undefined4 *)(param_1 + 0x3c0) = 1;
  }
  if (*(int *)(param_1 + 0x3c0) != 0) {
    FUN_00cb2d60(*(undefined4 *)(param_1 + 0x90));
    puVar14 = (undefined4 *)(param_1 + 0x118);
    iVar13 = 6;
    do {
      FUN_00cb30b0(puVar14[-6]);
      FUN_00cb30b0(*puVar14);
      FUN_00cb2d60(puVar14[-0x12]);
      FUN_00cb2d60(puVar14[-0xc]);
      puVar14 = puVar14 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    FUN_00cb30b0(*(undefined4 *)(param_1 + 0x13c));
    FUN_00cb30b0(*(undefined4 *)(param_1 + 0x140));
    puVar14 = (undefined4 *)(param_1 + 0x1a4);
    iVar11 = 9;
    do {
      iVar13 = iVar11;
      FUN_00cb30b0(puVar14[-1]);
      FUN_00cb30b0(*puVar14);
      puVar14 = puVar14 + 3;
      iVar11 = iVar13 + -1;
    } while (iVar13 + -1 != 0);
    FUN_00cb2d60(*(undefined4 *)(param_1 + 0x134));
    FUN_00cb30b0(*(undefined4 *)(param_1 + 0x13c));
    FUN_00cb30b0(*(undefined4 *)(param_1 + 0x140));
    FUN_00cb2d60(*(undefined4 *)(param_1 + 0x148));
  }
  fVar3 = _DAT_018b8c18;
  fVar5 = 0.0;
  switch(*(undefined4 *)(param_1 + 0x3b8)) {
  case 0:
    FUN_00cbe9d0();
    piVar8 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar8 + 0x3c))(*(int *)(param_1 + 0x398) + *(int *)(param_1 + 0x394));
    iVar11 = FUN_00d46780();
    if ((((iVar11 == 0) && (iVar11 = FUN_00d467a0(), iVar11 == 0)) &&
        (iVar11 = FUN_00a4ae60(), iVar11 == 0)) &&
       ((*(int *)(param_1 + 0x33c) == 0 && (0 < *(int *)(param_1 + 0x340))))) {
      DAT_01b719a0 = DAT_01b719a0 + iVar13;
      if (DAT_01b719a0 < 999999) {
        if (DAT_01b719a0 < 10) goto LAB_00d15e9d;
      }
      else {
        DAT_01b719a0 = 999999;
      }
      FUN_009c6540(0x25);
    }
LAB_00d15e9d:
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),iVar13,3);
    FUN_00e5e050("core_se_sys_result",0);
    *(undefined4 *)(param_1 + 0x3cc) = 0;
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + iVar13;
    *(undefined4 *)(param_1 + 0x3d0) = 0xc1700000;
    *(undefined4 *)(param_1 + 0x3d4) = 0xc0a00000;
    *(undefined4 *)(param_1 + 0x3d8) = 0xc1a00000;
    *(undefined4 *)(param_1 + 0x3dc) = 0xc1200000;
    *(undefined4 *)(param_1 + 0x3e0) = 0xc1c80000;
  case 1:
    *(float *)(param_1 + 0x3c8) = *(float *)(param_1 + 0x3c8) + 1.0;
    if (*(int *)(param_1 + 0x3c0) != 0) {
      *(undefined4 *)(param_1 + 0x3c8) = 0x42c80000;
    }
    iVar13 = 0;
    pfVar15 = (float *)(param_1 + 0x3cc);
    fVar5 = _DAT_018b8c1c;
    do {
      fVar3 = 1.0;
      if (0.0 < *(float *)(param_1 + 0x3c8)) {
        if (*(int *)(param_1 + 0x3c0) != 0) {
          fVar3 = fVar5;
        }
        fVar2 = *pfVar15;
        *pfVar15 = fVar3 + fVar2;
        if (fVar5 < fVar3 + fVar2) {
          *pfVar15 = fVar5;
        }
      }
      if (0.0 < *pfVar15 != (*pfVar15 == 0.0)) {
        iVar11 = *(int *)(param_1 + 0x18);
        if (((iVar11 != 0) && ((uint)pfVar15[-0xce] < (uint)*(float *)(iVar11 + 0x80))) &&
           (iVar11 = (int)pfVar15[-0xce] * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
          *(undefined4 *)(iVar11 + 0x3b0) = 1;
        }
        iVar11 = *(int *)(param_1 + 0x18);
        fVar2 = *pfVar15 / fVar5;
        fVar3 = pfVar15[-0xc5];
        if (((iVar11 != 0) && ((uint)fVar3 < (uint)*(float *)(iVar11 + 0x80))) &&
           ((int)fVar3 * 0x400 + 0x2a0 + *(int *)(iVar11 + 0x7c) != 0)) {
          if ((uint)fVar3 < (uint)*(float *)(iVar11 + 0x80)) {
            iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + (int)fVar3 * 0x400;
          }
          else {
            iVar11 = 0;
          }
          *(float *)(iVar11 + 0xd0) = fVar2;
        }
        if (((0.0 < fVar2) && (fVar2 < 1.0 != (fVar2 == 1.0))) && (pfVar15[0x1b] == 0.0)) {
          iVar11 = *(int *)(param_1 + 0x18);
          if (((iVar11 != 0) && ((uint)pfVar15[-0xbf] < (uint)*(float *)(iVar11 + 0x80))) &&
             (iVar11 = (int)pfVar15[-0xbf] * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
            *(undefined4 *)(iVar11 + 0x3b0) = 1;
          }
          iVar11 = *(int *)(param_1 + 0x18);
          if (((iVar11 != 0) && ((uint)pfVar15[-0xb9] < (uint)*(float *)(iVar11 + 0x80))) &&
             (iVar11 = (int)pfVar15[-0xb9] * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
            *(undefined4 *)(iVar11 + 0x3b0) = 1;
          }
          FUN_00ccdf90(pfVar15[-0xbf],1,3);
          FUN_00ccdf90(pfVar15[-0xb9],1,3);
          fVar5 = _DAT_018b8c1c;
          pfVar15[0x1b] = 1.4013e-45;
        }
        if ((1.0 <= fVar2) && (pfVar15[0x1b] != 0.0)) {
          FUN_00cd7670(iVar13);
          fVar5 = _DAT_018b8c1c;
          pfVar15[0x1b] = 0.0;
        }
      }
      iVar13 = iVar13 + 1;
      pfVar15 = pfVar15 + 1;
    } while (iVar13 < 6);
    if (((fVar5 < *(float *)(param_1 + 0x3cc) != (fVar5 == *(float *)(param_1 + 0x3cc))) &&
        (fVar5 < *(float *)(param_1 + 0x3d0) != (fVar5 == *(float *)(param_1 + 0x3d0)))) &&
       ((fVar5 < *(float *)(param_1 + 0x3d4) != (fVar5 == *(float *)(param_1 + 0x3d4)) &&
        (((fVar5 < *(float *)(param_1 + 0x3d8) != (fVar5 == *(float *)(param_1 + 0x3d8)) &&
          (fVar5 < *(float *)(param_1 + 0x3e0) != (fVar5 == *(float *)(param_1 + 0x3e0)))) &&
         (fVar5 < *(float *)(param_1 + 0x3dc) != (fVar5 == *(float *)(param_1 + 0x3dc)))))))) {
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(undefined4 *)(param_1 + 0x3cc) = 0;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(undefined4 *)(param_1 + 0x3d4) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      *(undefined4 *)(param_1 + 0x3dc) = 0;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
      return;
    }
    break;
  case 2:
    fVar19 = (float10)0;
    if (*(int *)(param_1 + 0x3c0) == 0) {
      fVar18 = (float10)1;
      *(float *)(param_1 + 0x3c8) = (float)((float10)*(float *)(param_1 + 0x3c8) + fVar18);
      fVar16 = (float10)_DAT_018b8c18;
      fVar17 = fVar19;
      if ((*(int *)(param_1 + 0x388) != -1) &&
         (fVar16 * fVar19 < (float10)*(float *)(param_1 + 0x3c8))) {
        *(float *)(param_1 + 0x3e4) = (float)((float10)*(float *)(param_1 + 0x3e4) + fVar18);
        fVar17 = fVar18;
      }
      if ((*(int *)(param_1 + 0x38c) != -1) &&
         (fVar16 * fVar17 < (float10)*(float *)(param_1 + 0x3c8))) {
        *(float *)(param_1 + 1000) = (float)((float10)*(float *)(param_1 + 1000) + fVar18);
        fVar17 = fVar17 + fVar18;
      }
      if ((*(int *)(param_1 + 0x390) != -1) &&
         (fVar16 * fVar17 < (float10)*(float *)(param_1 + 0x3c8))) {
        *(float *)(param_1 + 0x3ec) = (float)((float10)*(float *)(param_1 + 0x3ec) + fVar18);
      }
    }
    else {
      if (*(int *)(param_1 + 0x388) != -1) {
        *(float *)(param_1 + 0x3e4) = _DAT_018b8c18;
      }
      if (*(int *)(param_1 + 0x38c) != -1) {
        *(float *)(param_1 + 1000) = fVar3;
      }
      if (*(int *)(param_1 + 0x390) != -1) {
        *(float *)(param_1 + 0x3ec) = fVar3;
      }
    }
    iVar13 = 6;
    do {
      if ((float10)*(float *)(param_1 + 0x3cc + iVar13 * 4) <= fVar19) goto LAB_00d1640b;
      uVar9 = FUN_00fdbc60();
      uVar9 = uVar9 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      iVar11 = *(int *)(param_1 + 0x18);
      uVar4 = *(uint *)(param_1 + 0x94 + iVar13 * 4);
      if (((iVar11 != 0) && (uVar4 < *(uint *)(iVar11 + 0x80))) &&
         (iVar11 = uVar4 * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
        *(uint *)(iVar11 + 0x3b0) = (uint)(1 < (int)uVar9);
      }
      fVar19 = extraout_ST0;
      if (iVar13 == 8) {
        if (*(int *)(param_1 + 0x38c) == -1) {
LAB_00d16302:
          fVar18 = (float10)-34.0;
        }
        else {
          iVar11 = FUN_00d467a0();
          fVar19 = (float10)0;
          if (iVar11 == 0) goto LAB_00d16302;
          fVar18 = (float10)(float)extraout_ST0;
        }
        if (*(int *)(param_1 + 0x388) == -1) {
          fVar18 = fVar18 - (float10)34.0;
        }
        iVar11 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0xb4);
        if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
           (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (uVar9 < *(uint *)(iVar11 + 0x80)) {
            iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          }
          else {
LAB_00d16366:
            iVar11 = 0;
          }
LAB_00d16368:
          fVar19 = (float10)FUN_00ddb510((float)fVar18,0);
          *(float *)(iVar11 + 0xc4) = (float)fVar19;
          fVar19 = (float10)0;
        }
      }
      else if (iVar13 == 7) {
        fVar18 = extraout_ST0;
        if (*(int *)(param_1 + 0x388) == -1) {
          iVar11 = FUN_00d467a0();
          if (iVar11 == 0) {
            fVar19 = (float10)0;
            fVar18 = (float10)(float)extraout_ST0;
          }
          else {
            fVar18 = (float10)-34.0;
            fVar19 = (float10)0;
          }
        }
        iVar11 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0xb0);
        if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
           (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (*(uint *)(iVar11 + 0x80) <= uVar9) goto LAB_00d16366;
          iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          goto LAB_00d16368;
        }
      }
LAB_00d1640b:
      iVar13 = iVar13 + 1;
    } while (iVar13 < 9);
    if (((_DAT_018b8c18 < *(float *)(param_1 + 0x3e4) !=
          (_DAT_018b8c18 == *(float *)(param_1 + 0x3e4))) || (*(int *)(param_1 + 0x388) == -1)) &&
       (((_DAT_018b8c18 < *(float *)(param_1 + 1000) !=
          (_DAT_018b8c18 == *(float *)(param_1 + 1000)) || (*(int *)(param_1 + 0x38c) == -1)) &&
        ((_DAT_018b8c18 < *(float *)(param_1 + 0x3ec) !=
          (_DAT_018b8c18 == *(float *)(param_1 + 0x3ec)) || (*(int *)(param_1 + 0x390) == -1)))))) {
      *(float *)(param_1 + 0x3c8) = (float)fVar19;
      bVar6 = 0 < *(int *)(param_1 + 0x34c);
      if ((bool)bVar6) {
        *(undefined4 *)(param_1 + 0x3f0) = 0;
      }
      else {
        *(float *)(param_1 + 0x3f0) = (float)fVar19;
      }
      if (*(int *)(param_1 + 0x350) < 1) {
        *(float *)(param_1 + 0x3f4) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x3f4) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x354) < 1) {
        *(float *)(param_1 + 0x3f8) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x3f8) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x358) < 1) {
        *(float *)(param_1 + 0x3fc) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x3fc) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x35c) < 1) {
        *(float *)(param_1 + 0x400) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x400) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x360) < 1) {
        *(float *)(param_1 + 0x404) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x404) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x364) < 1) {
        *(float *)(param_1 + 0x408) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x408) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x368) < 1) {
        *(float *)(param_1 + 0x40c) = (float)fVar19;
      }
      else {
        uVar9 = (uint)bVar6;
        bVar6 = bVar6 + 1;
        *(float *)(param_1 + 0x40c) = -((float)uVar9 * 10.0);
      }
      if (*(int *)(param_1 + 0x36c) < 1) {
        *(float *)(param_1 + 0x410) = (float)fVar19;
        *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
        return;
      }
      *(float *)(param_1 + 0x410) = -((float)bVar6 * 10.0);
      *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
      return;
    }
    break;
  case 3:
    iVar13 = 0;
    do {
      fVar5 = 0.0;
      if (iVar13 == 8) {
        if ((*(int *)(param_1 + 0x38c) == -1) || (iVar11 = FUN_00d467a0(), iVar11 == 0)) {
          fVar5 = -34.0;
        }
        else {
          fVar5 = 0.0;
        }
        if (*(int *)(param_1 + 0x388) == -1) {
          fVar5 = fVar5 - 34.0;
        }
        iVar11 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0x180);
        if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
           (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (uVar9 < *(uint *)(iVar11 + 0x80)) {
            iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          }
          else {
LAB_00d16667:
            iVar11 = 0;
          }
LAB_00d16669:
          fVar19 = (float10)FUN_00ddb510(fVar5,0);
          *(float *)(iVar11 + 0xc4) = (float)fVar19;
        }
      }
      else if (iVar13 == 7) {
        if (*(int *)(param_1 + 0x388) == -1) {
          iVar11 = FUN_00d467a0();
          if (iVar11 == 0) {
            fVar5 = 0.0;
          }
          else {
            fVar5 = -34.0;
          }
        }
        iVar11 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0x17c);
        if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
           (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (*(uint *)(iVar11 + 0x80) <= uVar9) goto LAB_00d16667;
          iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          goto LAB_00d16669;
        }
      }
      if (0 < *(int *)(param_1 + 0x34c + iVar13 * 4)) {
        if (*(int *)(param_1 + 0x3c0) == 0) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = 1000.0;
        }
        fVar5 = fVar5 + *(float *)(param_1 + 0x3f0 + iVar13 * 4);
        *(float *)(param_1 + 0x3f0 + iVar13 * 4) = fVar5;
        if (0.0 < fVar5) {
          *(undefined4 *)(param_1 + 0x3f0 + iVar13 * 4) = 0;
        }
        fVar5 = *(float *)(param_1 + 0x3f0 + iVar13 * 4);
        if (NAN(fVar5) || 0.0 < fVar5 == (fVar5 == 0.0)) {
          if (*(int *)(param_1 + 0x414 + iVar13 * 4) != 0) goto LAB_00d168b4;
        }
        else if (*(int *)(param_1 + 0x414 + iVar13 * 4) == 0) {
          iVar11 = *(int *)(param_1 + 0x18);
          uVar9 = *(uint *)(param_1 + 0x160 + iVar13 * 4);
          if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
             (iVar11 = uVar9 * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
            *(undefined4 *)(iVar11 + 0x3b0) = 1;
          }
          local_20 = (char *)0x0;
          local_1c = (char *)0x0;
          local_18 = (char *)0x0;
          local_14 = (char *)0x0;
          local_10 = (char *)0x0;
          uStack_c = 0;
          local_b = 0;
          local_7 = 0;
          local_3 = 0;
          local_1 = 0;
          FUN_00ca84a0(*(undefined4 *)(param_1 + 0x34c + iVar13 * 4),&local_20,0x20);
          iVar11 = 0x1e;
          do {
            iVar10 = iVar11 + -1;
            *(undefined1 *)((int)&local_20 + iVar11 + 1) = *(undefined1 *)((int)&local_20 + iVar11);
            iVar11 = iVar10;
          } while (-1 < iVar10);
          iVar11 = param_1 + 0x208 + iVar13 * 0x1c;
          iVar10 = *(int *)(iVar11 + 0x18);
          puVar1 = (uint *)(param_1 + 0x1a0 + iVar13 * 0xc);
          uVar9 = *puVar1;
          local_20 = (char *)CONCAT31(local_20._1_3_,0x2b);
          if (((iVar10 != 0) && (uVar9 < *(uint *)(iVar10 + 0x80))) &&
             ((piVar8 = *(int **)(uVar9 * 0x400 + 0x3f0 + *(int *)(iVar10 + 0x7c)),
              piVar8 != (int *)0x0 && (iVar10 = (**(code **)(*piVar8 + 8))(), iVar10 == 4)))) {
            FUN_00cb3cc0(piVar8,&local_20);
          }
          iVar10 = iVar13 * 3 + 0x69;
          uVar9 = *(uint *)(param_1 + iVar10 * 4);
          iVar11 = *(int *)(iVar11 + 0x18);
          if ((((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
              (piVar8 = *(int **)(uVar9 * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
              piVar8 != (int *)0x0)) && (iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 == 4)) {
            FUN_00cb3cc0(piVar8,&local_20);
          }
          FUN_00cce0e0(*puVar1,1,3);
          FUN_00cce0e0(*(undefined4 *)(param_1 + iVar10 * 4),1,3);
          *(undefined4 *)(param_1 + 0x414 + iVar13 * 4) = 1;
        }
        else {
LAB_00d168b4:
          fVar19 = (float10)FUN_00d031b0(iVar13,1);
          fVar19 = (float10)FUN_00cbe8f0(iVar13,0,(float)fVar19);
          FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x19c + iVar13 * 0xc),(float)fVar19);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 9);
    if (*(float *)(param_1 + 0x3f0) == 0.0) {
      iVar13 = *(int *)(param_1 + 0x220);
      if ((((iVar13 == 0) || (*(uint *)(iVar13 + 0x80) <= *(uint *)(param_1 + 0x1a0))) ||
          ((piVar8 = *(int **)(*(uint *)(param_1 + 0x1a0) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c))
           , piVar8 == (int *)0x0 ||
           ((iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 != 4 || (piVar8[0x3e6] == 0)))))) &&
         (*(float *)(param_1 + 0x3f4) == 0.0)) {
        iVar13 = *(int *)(param_1 + 0x23c);
        if ((((((iVar13 == 0) || (*(uint *)(iVar13 + 0x80) <= *(uint *)(param_1 + 0x1ac))) ||
              (piVar8 = *(int **)(*(uint *)(param_1 + 0x1ac) * 0x400 + 0x3f0 +
                                 *(int *)(iVar13 + 0x7c)), piVar8 == (int *)0x0)) ||
             ((iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 != 4 || (piVar8[0x3e6] == 0)))) &&
            ((((*(float *)(param_1 + 0x3f8) == 0.0 &&
               ((iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x1b8)), iVar13 == 0 &&
                (*(float *)(param_1 + 0x3fc) == 0.0)))) &&
              (iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x1c4)), iVar13 == 0)) &&
             (((((*(float *)(param_1 + 0x400) == 0.0 &&
                 (iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x1d0)), iVar13 == 0)) &&
                (*(float *)(param_1 + 0x404) == 0.0)) &&
               (((iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x1dc)), iVar13 == 0 &&
                 (*(float *)(param_1 + 0x408) == 0.0)) &&
                ((iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x1e8)), iVar13 == 0 &&
                 ((*(float *)(param_1 + 0x40c) == 0.0 &&
                  (iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 500)), iVar13 == 0)))))))) &&
              (*(float *)(param_1 + 0x410) == 0.0)))))) &&
           (iVar13 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x200)), iVar13 == 0)) {
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x134),1,3);
          *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
          *(undefined4 *)(param_1 + 0x3c8) = 0;
          return;
        }
      }
    }
    break;
  case 4:
    uVar9 = *(uint *)(param_1 + 0x130);
    iVar11 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x394) < 1) {
      if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
         (iVar11 = uVar9 * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
        *(undefined4 *)(iVar11 + 0x3b0) = 0;
        *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + iVar13;
        goto LAB_00d16cd2;
      }
    }
    else {
      if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
         (iVar11 = uVar9 * 0x400 + *(int *)(iVar11 + 0x7c), iVar11 != 0)) {
        *(int *)(iVar11 + 0x3b0) = iVar13;
      }
      local_2c = 0.0;
      if (*(int *)(param_1 + 0x388) == -1) {
        fVar5 = -34.0;
        local_2c = -34.0;
      }
      if (*(int *)(param_1 + 0x390) == -1) {
        fVar5 = fVar5 - 34.0;
        local_2c = fVar5;
      }
      if ((*(int *)(param_1 + 0x38c) == -1) ||
         (iVar11 = FUN_00d467a0(), fVar5 = local_2c, iVar11 == 0)) {
        local_2c = fVar5 - 34.0;
      }
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x130),local_2c);
      local_20 = (char *)0x0;
      local_1c = (char *)0x0;
      local_18 = (char *)0x0;
      local_14 = (char *)0x0;
      local_10 = (char *)0x0;
      uStack_c = 0;
      local_b = 0;
      local_7 = 0;
      local_3 = 0;
      local_1 = 0;
      FUN_00ca84a0(*(undefined4 *)(param_1 + 0x394),&local_20,0x20);
      iVar11 = *(int *)(param_1 + 0x18);
      if ((((iVar11 != 0) && (*(uint *)(param_1 + 0x13c) < *(uint *)(iVar11 + 0x80))) &&
          (piVar8 = *(int **)(*(uint *)(param_1 + 0x13c) * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
          piVar8 != (int *)0x0)) && (iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 == 4)) {
        FUN_00cb3cc0(piVar8,&local_20);
      }
      iVar11 = *(int *)(param_1 + 0x18);
      if (((iVar11 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar11 + 0x80))) &&
         ((piVar8 = *(int **)(*(int *)(iVar11 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x140) * 0x400),
          piVar8 != (int *)0x0 && (iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 == 4)))) {
        FUN_00cb3cc0(piVar8,&local_20);
      }
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x13c),iVar13,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x140),iVar13,3);
    }
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + iVar13;
    goto LAB_00d16cd2;
  case 5:
LAB_00d16cd2:
    fVar19 = (float10)FUN_00d030c0(0x2b);
    fVar19 = (float10)FUN_00cbe7f0(0x2a,(float)fVar19);
    iVar11 = *(int *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_1 + 0x138);
    if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
       (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
      if (uVar9 < *(uint *)(iVar11 + 0x80)) {
        *(float *)(*(int *)(iVar11 + 0x7c) + 0x370 + uVar9 * 0x400) = (float)fVar19;
      }
      else {
        fRam000000d0 = (float)fVar19;
      }
    }
    iVar11 = *(int *)(param_1 + 0x18);
    if (((iVar11 == 0) || (*(uint *)(iVar11 + 0x80) <= *(uint *)(param_1 + 0x138))) ||
       ((piVar8 = *(int **)(*(int *)(iVar11 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x138) * 0x400),
        piVar8 == (int *)0x0 || (iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 != 8)))) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)piVar8[1];
    }
    iVar11 = *(int *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_1 + 0x134);
    if (((iVar11 != 0) && (uVar9 < *(uint *)(iVar11 + 0x80))) &&
       (*(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
      if (uVar9 < *(uint *)(iVar11 + 0x80)) {
        iVar11 = *(int *)(iVar11 + 0x7c) + 0x2a0 + uVar9 * 0x400;
      }
      else {
        iVar11 = 0;
      }
      fVar19 = (float10)FUN_00ddb510(-(fVar5 * (float)fVar19),0);
      *(float *)(iVar11 + 0xc0) = (float)fVar19;
    }
    iVar11 = *(int *)(param_1 + 0x18);
    if ((((iVar11 == 0) || (*(uint *)(iVar11 + 0x80) <= *(uint *)(param_1 + 0x140))) ||
        (piVar8 = *(int **)(*(uint *)(param_1 + 0x140) * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
        piVar8 == (int *)0x0)) ||
       ((iVar11 = (**(code **)(*piVar8 + 8))(), iVar11 != 4 || (piVar8[0x3e6] == 0)))) {
      *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + iVar13;
      return;
    }
    break;
  case 6:
    iVar13 = *(int *)(param_1 + 0x18);
    local_20 = "HUD_COMB_RES_04";
    local_1c = "HUD_COMB_RES_05";
    local_18 = "HUD_COMB_RES_06";
    local_14 = "HUD_COMB_RES_07";
    local_10 = "HUD_COMB_RES_08";
    if (*(int *)(param_1 + 0x3b0) == -1) {
      if (((iVar13 != 0) && (*(uint *)(param_1 + 0x150) < *(uint *)(iVar13 + 0x80))) &&
         ((piVar8 = *(int **)(*(uint *)(param_1 + 0x150) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0 && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)))) {
        uVar12 = FUN_00e03ea0("HUD_COMB_RES_09");
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      iVar13 = *(int *)(param_1 + 0x18);
      if ((((iVar13 != 0) && (*(uint *)(param_1 + 0x154) < *(uint *)(iVar13 + 0x80))) &&
          (piVar8 = *(int **)(*(uint *)(param_1 + 0x154) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0)) && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)) {
        uVar12 = FUN_00e03ea0("HUD_COMB_RES_09");
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      iVar13 = *(int *)(param_1 + 0x18);
      if (((iVar13 != 0) && (*(uint *)(param_1 + 0x158) < *(uint *)(iVar13 + 0x80))) &&
         ((piVar8 = *(int **)(*(uint *)(param_1 + 0x158) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0 && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)))) {
        uVar12 = FUN_00e03ea0("HUD_COMB_RES_09");
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      iVar13 = *(int *)(param_1 + 0x18);
      if (((iVar13 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar13 + 0x80))) &&
         ((piVar8 = *(int **)(*(uint *)(param_1 + 0x15c) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0 && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)))) {
        pcVar20 = "HUD_COMB_RES_09";
LAB_00d17205:
        uVar12 = FUN_00e03ea0(pcVar20);
        piVar8[0x2b] = 1;
        piVar8[0x2a] = -1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2e] = 0;
          piVar8[0x2b] = 1;
          piVar8[0x2a] = iVar13;
        }
      }
    }
    else {
      uVar12 = (&local_20)[*(int *)(param_1 + 0x3b0)];
      if ((((iVar13 != 0) && (*(uint *)(param_1 + 0x150) < *(uint *)(iVar13 + 0x80))) &&
          (piVar8 = *(int **)(*(uint *)(param_1 + 0x150) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0)) && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)) {
        uVar12 = FUN_00e03ea0(uVar12);
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      uVar12 = (&local_20)[*(int *)(param_1 + 0x3b0)];
      iVar13 = *(int *)(param_1 + 0x18);
      if (((iVar13 != 0) && (*(uint *)(param_1 + 0x154) < *(uint *)(iVar13 + 0x80))) &&
         ((piVar8 = *(int **)(*(uint *)(param_1 + 0x154) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0 && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)))) {
        uVar12 = FUN_00e03ea0(uVar12);
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      iVar13 = *(int *)(param_1 + 0x18);
      uVar12 = (&local_20)[*(int *)(param_1 + 0x3b0)];
      if (((iVar13 != 0) && (*(uint *)(param_1 + 0x158) < *(uint *)(iVar13 + 0x80))) &&
         ((piVar8 = *(int **)(*(uint *)(param_1 + 0x158) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0 && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3)))) {
        uVar12 = FUN_00e03ea0(uVar12);
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar13 = FUN_00cb1cd0(uVar12), -1 < iVar13)) {
          piVar8[0x2a] = iVar13;
          piVar8[0x2b] = 1;
          piVar8[0x2e] = 0;
        }
      }
      pcVar20 = (char *)(&local_20)[*(int *)(param_1 + 0x3b0)];
      iVar13 = *(int *)(param_1 + 0x18);
      if ((((iVar13 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar13 + 0x80))) &&
          (piVar8 = *(int **)(*(uint *)(param_1 + 0x15c) * 0x400 + 0x3f0 + *(int *)(iVar13 + 0x7c)),
          piVar8 != (int *)0x0)) && (iVar13 = (**(code **)(*piVar8 + 8))(), iVar13 == 3))
      goto LAB_00d17205;
    }
    iVar13 = *(int *)(param_1 + 0x3b0);
    iVar11 = *(int *)(param_1 + 0x18);
    if (iVar13 == 0) {
      if (iVar11 == 0) goto LAB_00d17285;
      uVar12 = 6;
    }
    else if (iVar13 == 1) {
      if (iVar11 == 0) goto LAB_00d17285;
      uVar12 = 5;
    }
    else if (iVar13 == 2) {
      if (iVar11 == 0) goto LAB_00d17285;
      uVar12 = 4;
    }
    else {
      if (iVar11 == 0) goto LAB_00d17285;
      uVar12 = 3;
    }
    FUN_00cdeec0(uVar12);
LAB_00d17285:
    iVar13 = *(int *)(param_1 + 0x18);
    if (((iVar13 != 0) && (*(uint *)(param_1 + 0x144) < *(uint *)(iVar13 + 0x80))) &&
       (iVar13 = *(uint *)(param_1 + 0x144) * 0x400 + *(int *)(iVar13 + 0x7c), iVar13 != 0)) {
      *(undefined4 *)(iVar13 + 0x3b0) = 1;
    }
    fVar5 = 0.0;
    local_2c = 0.0;
    if (*(int *)(param_1 + 0x388) == -1) {
      fVar5 = -34.0;
      local_2c = -34.0;
    }
    if (*(int *)(param_1 + 0x390) == -1) {
      fVar5 = fVar5 - 34.0;
      local_2c = fVar5;
    }
    if ((*(int *)(param_1 + 0x38c) == -1) ||
       (iVar13 = FUN_00d467a0(), fVar5 = local_2c, iVar13 == 0)) {
      local_2c = fVar5 - 34.0;
    }
    if (*(int *)(param_1 + 0x394) == 0) {
      local_2c = local_2c - 44.0;
    }
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x144),local_2c);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x148),1,3);
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3c4) = 1;
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x398) = 0;
    return;
  }
  return;
}

