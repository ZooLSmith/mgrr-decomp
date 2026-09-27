// src/unsorted/unit_00D1B520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D1B520..00D1B950, 2 functions

#include "types.h"

// 00D1B520  FUN_00d1b520  size=1071  [run]
bool __fastcall FUN_00d1b520(int param_1)

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
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e0),local_150,0x20);
  _sprintf_s(&local_120,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e4),local_150,0x20);
  _sprintf_s(local_100,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2e8),local_150,0x20);
  _sprintf_s(local_e0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2ec),local_150,0x20);
  _sprintf_s(local_c0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f0),local_150,0x20);
  _sprintf_s(local_a0,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f4),local_150,0x20);
  _sprintf_s(local_80,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2f8),local_150,0x20);
  _sprintf_s(local_60,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x2fc),local_150,0x20);
  _sprintf_s(local_40,0x20,"+%s",local_150);
  FUN_00ca84a0(*(undefined4 *)(param_1 + 0x300),local_150,0x20);
  _sprintf_s(local_20,0x20,"+%s",local_150);
  local_168[0] = *(int *)(param_1 + 0x2e0) != 0;
  local_168[1] = *(int *)(param_1 + 0x2e4) != 0;
  local_168[2] = *(int *)(param_1 + 0x2e8) != 0;
  local_168[3] = *(int *)(param_1 + 0x2ec) != 0;
  local_168[4] = *(int *)(param_1 + 0x2f0) != 0;
  local_168[5] = *(int *)(param_1 + 0x2f4) != 0;
  local_168[6] = *(int *)(param_1 + 0x2f8) != 0;
  local_168[7] = *(int *)(param_1 + 0x2fc) != 0;
  local_168[8] = *(int *)(param_1 + 0x300) != 0;
  iVar6 = 0;
  local_154 = &local_120;
  local_15c = (uint *)(param_1 + 0x200);
  piVar7 = (int *)(param_1 + 0x34);
  do {
    fVar8 = (float10)FUN_00d08870(iVar6,1,local_154,0);
    local_158 = (float)fVar8;
    iVar5 = *piVar7;
    if ((((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x234))) ||
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x234) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
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
    if (((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x234))) ||
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x234) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 == (int *)0x0 || (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 8)))) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)piVar1[1];
      iStack_124 = piVar1[2];
      fStack_128 = fVar2;
    }
    iVar5 = *piVar7;
    uVar3 = *(uint *)(param_1 + 0x234);
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
    if (((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x238))) ||
       ((piVar1 = *(int **)(*(int *)(iVar5 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x238) * 0x400),
        piVar1 == (int *)0x0 ||
        ((iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 != 4 || (piVar1[0x3e6] == 0)))))) {
      iVar5 = *piVar7;
      if ((iVar5 == 0) ||
         ((((*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x23c) ||
            (piVar1 = *(int **)(*(uint *)(param_1 + 0x23c) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c))
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

// 00D1B950  FUN_00d1b950  size=549  [run]
undefined4 __fastcall FUN_00d1b950(int param_1)

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
  
  iVar6 = *(int *)(param_1 + 0x304) / 0x14;
  if (iVar6 < 1) {
    *(undefined4 *)(param_1 + 0x248) = 0x14;
  }
  iVar6 = *(int *)(param_1 + 0x248) * iVar6;
  if (0x13 < *(int *)(param_1 + 0x248)) {
    iVar6 = *(int *)(param_1 + 0x304);
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
  fVar8 = (float10)FUN_00d08990(0x33,local_20,0);
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
  if (*(int *)(param_1 + 0x248) < 0x14) {
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    return 0;
  }
  return 1;
}

