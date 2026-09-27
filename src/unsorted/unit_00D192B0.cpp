// src/unsorted/unit_00D192B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D192B0..00D19BD0, 4 functions

#include "types.h"

// 00D192B0  FUN_00d192b0  size=712  [run]
void __thiscall FUN_00d192b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_4;
  
  FUN_009c4bf0();
  if (-1 < param_2) {
    if (param_2 < 10) {
      puVar3 = (undefined4 *)(&DAT_01b6f3e0 + param_3 * 0xc0 + param_2 * 0x3c0);
    }
    else {
      puVar3 = (undefined4 *)(&DAT_01b6f430 + param_3 * 0xc0 + param_2 * 0x3c0);
    }
    *(int *)(param_1 + 0x24c) = param_2;
    *(undefined4 *)(param_1 + 0x2c0) = *puVar3;
    *(undefined4 *)(param_1 + 0x2c4) = puVar3[3];
    *(undefined4 *)(param_1 + 0x2cc) = puVar3[4];
    *(undefined4 *)(param_1 + 0x2d0) = puVar3[0xb];
    *(undefined4 *)(param_1 + 0x2c8) = puVar3[5];
    *(undefined4 *)(param_1 + 0x2d4) = puVar3[0x2b];
    *(undefined4 *)(param_1 + 0x2d8) = puVar3[0x15];
    *(uint *)(param_1 + 0x2f4) = (uint)(puVar3[1] == 0);
    *(uint *)(param_1 + 0x2fc) = (uint)(puVar3[2] == 0);
    *(uint *)(param_1 + 0x2f8) = (uint)(puVar3[0xd] == 0);
    if ((param_2 == 0) || (param_2 == 6)) {
      *(undefined4 *)(param_1 + 0x2fc) = 0;
    }
    if (param_2 != 9) {
      *(undefined4 *)(param_1 + 0x2f8) = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x130) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x134) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  puVar6 = (uint *)(param_1 + 0x118);
  local_4 = 6;
  do {
    puVar6[0x4e] = 0;
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*puVar6 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *puVar6 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (puVar6[0x1d] < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(puVar6[0x1d] * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)))) {
      FUN_00cb3cc0(piVar1,&DAT_016416fa);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (puVar6[0x23] < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(puVar6[0x23] * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)) {
      FUN_00cb3cc0(piVar1,&DAT_016416fa);
    }
    puVar6 = puVar6 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_00d07730(param_2);
  iVar5 = FUN_009c5130(param_2,param_3);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x224);
  if (iVar5 == 0) {
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined1 *)(param_1 + 0x244) = 1;
      return;
    }
  }
  else if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
          (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 1;
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x244) = 1;
  return;
}

// 00D19580  FUN_00d19580  size=1071  [run]
bool __fastcall FUN_00d19580(int param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  char local_169;
  char local_168 [12];
  uint *local_15c;
  float local_158;
  char *local_154;
  undefined1 local_150 [32];
  float fStack_130;
  int iStack_12c;
  float fStack_128;
  int iStack_124;
  char local_120;
  undefined1 local_11f [31];
  char local_100 [32];
  char local_e0 [32];
  char local_c0 [32];
  char local_a0 [32];
  char local_80 [32];
  char local_60 [32];
  char local_40 [32];
  char local_20 [32];
  
  local_169 = '\0';
  local_120 = '\0';
  _memset(local_11f,0,0x11f);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2dc),local_150,0x20);
  _sprintf_s(&local_120,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e0),local_150,0x20);
  _sprintf_s(local_100,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e4),local_150,0x20);
  _sprintf_s(local_e0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e8),local_150,0x20);
  _sprintf_s(local_c0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2ec),local_150,0x20);
  _sprintf_s(local_a0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f0),local_150,0x20);
  _sprintf_s(local_80,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f4),local_150,0x20);
  _sprintf_s(local_60,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f8),local_150,0x20);
  _sprintf_s(local_40,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2fc),local_150,0x20);
  _sprintf_s(local_20,0x20,"+%s",local_150);
  local_168[0] = *(int *)(param_1 + 0x2dc) != 0;
  local_168[1] = *(int *)(param_1 + 0x2e0) != 0;
  local_168[2] = *(int *)(param_1 + 0x2e4) != 0;
  local_168[3] = *(int *)(param_1 + 0x2e8) != 0;
  local_168[4] = *(int *)(param_1 + 0x2ec) != 0;
  local_168[5] = *(int *)(param_1 + 0x2f0) != 0;
  local_168[6] = *(int *)(param_1 + 0x2f4) != 0;
  local_168[7] = *(int *)(param_1 + 0x2f8) != 0;
  local_168[8] = *(int *)(param_1 + 0x2fc) != 0;
  iVar6 = 0;
  local_154 = &local_120;
  local_15c = (uint *)(param_1 + 0x200);
  piVar7 = (int *)(param_1 + 0x34);
  do {
    fVar8 = (float10)FUN_00d07940(iVar6,1,local_154,0);
    local_158 = (float)fVar8;
    iVar5 = *piVar7;
    if ((((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x238))) ||
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x238) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 == (int *)0x0)) || (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 8)) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)piVar1[3];
      iStack_12c = piVar1[4];
      fStack_130 = fVar2;
    }
    iVar5 = *piVar7;
    local_158 = fVar2 + fVar2 + local_158;
    if (((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x238))) ||
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x238) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 == (int *)0x0 || (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 8)))) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)piVar1[1];
      iStack_124 = piVar1[2];
      fStack_128 = fVar2;
    }
    iVar5 = *piVar7;
    uVar3 = *(uint *)(param_1 + 0x238);
    fVar4 = fRam000000d0;
    if (((iVar5 != 0) && (uVar3 < *(uint *)(iVar5 + 0x80))) &&
       ((*(int *)(iVar5 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0 &&
        (fVar4 = local_158 / fVar2, uVar3 < *(uint *)(iVar5 + 0x80))))) {
      *(float *)(*(int *)(iVar5 + 0x7c) + 0x370 + uVar3 * 0x400) = local_158 / fVar2;
      fVar4 = fRam000000d0;
    }
    fRam000000d0 = fVar4;
    if (local_168[iVar6] != '\0') {
      iVar5 = *(int *)(param_1 + 0x18);
      if (((iVar5 != 0) && (*local_15c < *(uint *)(iVar5 + 0x80))) &&
         (iVar5 = *local_15c * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 0x3b0) = 1;
      }
    }
    iVar5 = *piVar7;
    if (((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x23c))) ||
       ((piVar1 = *(int **)(*(int *)(iVar5 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x23c) * 0x400),
        piVar1 == (int *)0x0 ||
        ((iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 4 || (piVar1[0x3e6] == 0)))))) {
      iVar5 = *piVar7;
      if ((iVar5 == 0) ||
         ((((*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x240) ||
            (piVar1 = *(int **)(*(uint *)(param_1 + 0x240) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c))
            , piVar1 == (int *)0x0)) || (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 4)) ||
          (piVar1[0x3e6] == 0)))) {
        local_169 = local_169 + '\x01';
      }
    }
    local_15c = local_15c + 1;
    local_154 = local_154 + 0x20;
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 7;
  } while (iVar6 < 9);
  return '\b' < local_169;
}

// 00D199B0  FUN_00d199b0  size=533  [run]
void __thiscall FUN_00d199b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_20 [32];
  
  FUN_00ca84a0(param_2,local_20,0x20);
  iVar6 = *(int *)(param_1 + 0x18);
  if ((((iVar6 != 0) && (*(uint *)(param_1 + 0x1e4) < *(uint *)(iVar6 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x1e4) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 == 4)) {
    FUN_00cb3cc0(piVar1,local_20);
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 != 0) && (*(uint *)(param_1 + 0x1e8) < *(uint *)(iVar6 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x1e8) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 == 4)))) {
    FUN_00cb3cc0(piVar1,local_20);
  }
  fVar7 = (float10)FUN_00d07a60(0x33,local_20,0);
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 == 0) || (*(uint *)(iVar6 + 0x80) <= *(uint *)(param_1 + 0x1e0))) ||
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x1e0) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar1 == (int *)0x0 || (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 != 8)))) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)piVar1[3];
  }
  iVar6 = *(int *)(param_1 + 0x18);
  fVar2 = fVar2 + fVar2 + (float)fVar7;
  if ((((iVar6 == 0) || (*(uint *)(iVar6 + 0x80) <= *(uint *)(param_1 + 0x1e0))) ||
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x1e0) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar1 == (int *)0x0)) || (iVar6 = (**(code **)(*piVar1 + 8))(), iVar6 != 8)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)piVar1[1];
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1e0);
  fVar3 = fVar2 / fVar3;
  fVar5 = fRam000000d0;
  if (((iVar6 != 0) && (uVar4 < *(uint *)(iVar6 + 0x80))) &&
     ((*(int *)(iVar6 + 0x7c) + 0x2a0 + uVar4 * 0x400 != 0 &&
      (fVar5 = fVar3, uVar4 < *(uint *)(iVar6 + 0x80))))) {
    *(float *)(*(int *)(iVar6 + 0x7c) + uVar4 * 0x400 + 0x370) = fVar3;
    fVar5 = fRam000000d0;
  }
  fRam000000d0 = fVar5;
  uVar4 = *(uint *)(param_1 + 0x1ec);
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 != 0) && (uVar4 < *(uint *)(iVar6 + 0x80))) &&
     (*(int *)(iVar6 + 0x7c) + 0x2a0 + uVar4 * 0x400 != 0)) {
    if (uVar4 < *(uint *)(iVar6 + 0x80)) {
      iVar6 = *(int *)(iVar6 + 0x7c) + 0x2a0 + uVar4 * 0x400;
    }
    else {
      iVar6 = 0;
    }
    fVar7 = (float10)FUN_00ddb510(fVar2 * -1.0,0);
    *(float *)(iVar6 + 0xc0) = (float)fVar7;
    return;
  }
  return;
}

// 00D19BD0  FUN_00d19bd0  size=549  [run]
undefined4 __fastcall FUN_00d19bd0(int param_1)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_20 [32];
  
  iVar6 = *(int *)(param_1 + 0x300) / 0x14;
  if (iVar6 < 1) {
    *(undefined4 *)(param_1 + 0x250) = 0x14;
  }
  iVar6 = *(int *)(param_1 + 0x250) * iVar6;
  if (0x13 < *(int *)(param_1 + 0x250)) {
    iVar6 = *(int *)(param_1 + 0x300);
  }
  FUN_00ca84a0(iVar6,local_20,0x20);
  iVar6 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x13c);
  if (((iVar6 != 0) &&
      ((((*(uint *)(iVar6 + 0x80) <= uVar1 ||
         (iVar7 = uVar1 * 0x400 + *(int *)(iVar6 + 0x7c), iVar7 == 0)) ||
        (*(int *)(iVar7 + 0x3b0) == 0)) && ((iVar6 != 0 && (uVar1 < *(uint *)(iVar6 + 0x80))))))) &&
     (iVar6 = uVar1 * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
    *(undefined4 *)(iVar6 + 0x3b0) = 1;
  }
  fVar8 = (float10)FUN_00d07a60(0x33,local_20,0);
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 == 0) || (*(uint *)(iVar6 + 0x80) <= *(uint *)(param_1 + 0x1e0))) ||
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0x1e0) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar2 == (int *)0x0 || (iVar6 = (**(code **)(*piVar2 + 8))(), iVar6 != 8)))) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)piVar2[3];
  }
  iVar6 = *(int *)(param_1 + 0x18);
  fVar3 = fVar3 + fVar3 + (float)fVar8;
  if ((((iVar6 == 0) || (*(uint *)(iVar6 + 0x80) <= *(uint *)(param_1 + 0x1e0))) ||
      (piVar2 = *(int **)(*(uint *)(param_1 + 0x1e0) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
      piVar2 == (int *)0x0)) || (iVar6 = (**(code **)(*piVar2 + 8))(), iVar6 != 8)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)piVar2[1];
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1e0);
  fVar4 = fVar3 / fVar4;
  fVar5 = fRam000000d0;
  if (((iVar6 != 0) && (uVar1 < *(uint *)(iVar6 + 0x80))) &&
     ((*(int *)(iVar6 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0 &&
      (fVar5 = fVar4, uVar1 < *(uint *)(iVar6 + 0x80))))) {
    *(float *)(*(int *)(iVar6 + 0x7c) + uVar1 * 0x400 + 0x370) = fVar4;
    fVar5 = fRam000000d0;
  }
  fRam000000d0 = fVar5;
  iVar6 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1ec);
  if (((iVar6 != 0) && (uVar1 < *(uint *)(iVar6 + 0x80))) &&
     (*(int *)(iVar6 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar6 + 0x80)) {
      iVar6 = *(int *)(iVar6 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar6 = 0;
    }
    fVar8 = (float10)FUN_00ddb510(fVar3 * -1.0,0);
    *(float *)(iVar6 + 0xc0) = (float)fVar8;
  }
  if (*(int *)(param_1 + 0x250) < 0x14) {
    *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
    return 0;
  }
  return 1;
}

