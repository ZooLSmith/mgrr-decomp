// src/unsorted/unit_00CECFB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CECFB0..00CED560, 2 functions

#include "types.h"

// 00CECFB0  FUN_00cecfb0  size=1444  [run]
void __thiscall FUN_00cecfb0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  undefined8 uVar9;
  int local_1c;
  uint local_18;
  char local_10 [16];
  
  iVar4 = *(int *)(param_1 + 0xdc);
  local_1c = *(int *)(param_1 + 0xd8);
  if (iVar4 < local_1c) {
    local_1c = iVar4;
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  if ((((param_2 == '\x01') || (*(float *)(param_1 + 0xe4) != (float)local_1c)) ||
      (*(int *)(param_1 + 0xf0) != 0)) ||
     (iVar3 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x94)), iVar3 == 0)) {
    fVar2 = (float)local_1c;
    fVar1 = ABS(*(float *)(param_1 + 0xe4) - fVar2) * 0.1;
    if (fVar1 < 0.5) {
      fVar1 = 0.5;
    }
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe4);
    if (*(float *)(param_1 + 0xe4) <= fVar2) {
      if ((*(float *)(param_1 + 0xe4) < fVar2) &&
         (fVar1 = *(float *)(param_1 + 0xe4) + fVar1, *(float *)(param_1 + 0xe4) = fVar1,
         fVar2 < fVar1)) {
        *(float *)(param_1 + 0xe4) = fVar2;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xe4) - fVar1;
      *(float *)(param_1 + 0xe4) = fVar1;
      if (fVar1 < fVar2) {
        *(float *)(param_1 + 0xe4) = fVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    uVar6 = *(uint *)(param_1 + 0x90);
    fVar7 = (float10)*(float *)(param_1 + 0xe4) / (float10)iVar4;
    fVar1 = (float)fVar7;
    if (((iVar3 != 0) && (uVar6 < *(uint *)(iVar3 + 0x80))) &&
       (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
      if (uVar6 < *(uint *)(iVar3 + 0x80)) {
        iVar4 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar6 * 0x400;
      }
      else {
        iVar4 = 0;
      }
      *(float *)(iVar4 + 0xd0) = (float)fVar7;
    }
    if ((fVar2 < *(float *)(param_1 + 0xe4)) && (*(int *)(param_1 + 0xf4) == 0)) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar6 = *(uint *)(param_1 + 0x94);
      if ((iVar4 != 0) &&
         (((*(uint *)(iVar4 + 0x80) <= uVar6 ||
           (iVar4 = uVar6 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 == 0)) ||
          (*(char *)(iVar4 + 0x3ed) != '\0')))) {
        *(undefined4 *)(param_1 + 0xf4) = 1;
        FUN_00cb2340(uVar6,0);
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x94),
                     (1.0 - *(float *)(param_1 + 0xe8) / (float)*(int *)(param_1 + 0xdc)) * 322.0);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe8);
        fVar7 = (float10)fVar1;
      }
    }
    fVar8 = (float10)*(float *)(param_1 + 0xec) / (float10)*(int *)(param_1 + 0xdc);
    if (fVar7 <= fVar8) {
      fVar8 = fVar8 - fVar7;
    }
    else {
      fVar8 = (float10)0;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    uVar6 = *(uint *)(param_1 + 0x94);
    if (((iVar4 != 0) && (uVar6 < *(uint *)(iVar4 + 0x80))) &&
       (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
      if (uVar6 < *(uint *)(iVar4 + 0x80)) {
        *(float *)(*(int *)(iVar4 + 0x7c) + 0x370 + uVar6 * 0x400) = (float)fVar8;
      }
      else {
        fRam000000d0 = (float)fVar8;
      }
    }
    if (fVar2 == *(float *)(param_1 + 0xe4)) {
      if (*(int *)(param_1 + 0xf4) != 0) {
        piVar5 = (int *)(param_1 + 0xf0);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          uVar9 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x94));
          fVar7 = extraout_ST0;
          if ((int)uVar9 != 0) {
            *(undefined4 *)(param_1 + 0xf4) = 0;
            fVar7 = (float10)FUN_00cb23d0((int)((ulonglong)uVar9 >> 0x20),0);
            if (*(int *)(param_1 + 0x18) != 0) {
              FUN_00cded00(*(undefined4 *)(param_1 + 0x94),5);
              fVar7 = (float10)fVar1;
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf0) = DAT_018b77e8;
    }
    local_10[0] = '\0';
    local_18 = (uint)(longlong)ROUND(fVar7 * (float10)100.0 * (float10)10.0);
    uVar6 = local_18 / 10;
    local_18 = local_18 % 10;
    local_10[1] = '\0';
    local_10[2] = '\0';
    local_10[3] = '\0';
    local_10[4] = '\0';
    local_10[5] = '\0';
    local_10[6] = '\0';
    local_10[7] = '\0';
    local_10[8] = '\0';
    local_10[9] = '\0';
    local_10[10] = '\0';
    local_10[0xb] = '\0';
    local_10[0xc] = '\0';
    local_10[0xd] = '\0';
    local_10[0xe] = '\0';
    local_10[0xf] = 0;
    if (uVar6 == 100) {
      _sprintf_s(local_10,0x10,"#00");
      iVar4 = *(int *)(param_1 + 0x18);
      if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar4 + 0x80))) &&
          (piVar5 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar4 + 0x80))) &&
         ((piVar5 = *(int **)(*(uint *)(param_1 + 0xb0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0 && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)))) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      _sprintf_s(local_10,0x10,".0%%%%");
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar4 + 0x80))) &&
         ((piVar5 = *(int **)(*(uint *)(param_1 + 0xb4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0 && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)))) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 == 0) {
        return;
      }
      if (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xb8)) {
        return;
      }
      piVar5 = *(int **)(*(uint *)(param_1 + 0xb8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c));
    }
    else {
      FUN_00ca84a0(uVar6,local_10,0x10);
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar4 + 0x80))) &&
         ((piVar5 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0 && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)))) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar4 + 0x80))) &&
          (piVar5 = *(int **)(*(uint *)(param_1 + 0xb0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      if (((uVar6 == 0) && (local_18 == 0)) && (0.0 < fVar1)) {
        local_18 = 1;
      }
      _sprintf_s(local_10,0x10,".%d%%%%",local_18);
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar4 + 0x80))) &&
         ((piVar5 = *(int **)(*(uint *)(param_1 + 0xb4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar5 != (int *)0x0 && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)))) {
        FUN_00cb3cc0(piVar5,local_10);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 == 0) {
        return;
      }
      if (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xb8)) {
        return;
      }
      piVar5 = *(int **)(*(uint *)(param_1 + 0xb8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c));
    }
    if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)) {
      FUN_00cb3cc0(piVar5,local_10);
    }
  }
  return;
}

// 00CED560  FUN_00ced560  size=1628  [run]
void __thiscall FUN_00ced560(int param_1,char param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int local_24;
  uint local_1c;
  char local_10 [16];
  
  iVar7 = *(int *)(param_1 + 0xdc);
  local_24 = *(int *)(param_1 + 0xd8);
  uVar9 = *(uint *)(param_1 + 0x108);
  if (iVar7 < local_24) {
    local_24 = iVar7;
  }
  if (local_24 < 0) {
    local_24 = 0;
  }
  if (((param_2 != '\x01') && (*(float *)(param_1 + 0xe4) == (float)local_24)) &&
     (*(int *)(param_1 + 0xf0) == 0)) {
    uVar11 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x94));
    uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      uVar11 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0x98));
      uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        *(uint *)(param_1 + 0x108) = uVar9;
        return;
      }
    }
  }
  fVar3 = (float)local_24;
  fVar4 = ABS(*(float *)(param_1 + 0xe4) - fVar3) * 0.1;
  if (fVar4 < 0.5) {
    fVar4 = 0.5;
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe4);
  if (*(float *)(param_1 + 0xe4) <= fVar3) {
    if ((*(float *)(param_1 + 0xe4) < fVar3) &&
       (fVar4 = fVar4 + *(float *)(param_1 + 0xe4), *(float *)(param_1 + 0xe4) = fVar4,
       fVar3 < fVar4)) {
      *(float *)(param_1 + 0xe4) = fVar3;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0xe4) - fVar4;
    *(float *)(param_1 + 0xe4) = fVar4;
    if (fVar4 < fVar3) {
      *(float *)(param_1 + 0xe4) = fVar3;
    }
  }
  bVar6 = false;
  fVar4 = *(float *)(param_1 + 0xe4) / (float)iVar7;
  uVar10 = (uint)(0.5 < fVar4);
  if (uVar10 != uVar9) {
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(uint *)(iVar7 + 0x3b0) = (uint)(uVar10 == 0);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(uint *)(iVar7 + 0x3b0) = (uint)(uVar10 == 0);
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(uint *)(iVar7 + 0x3b0) = uVar10;
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(uint *)(iVar7 + 0x3b0) = uVar10;
    }
    iVar7 = *(int *)(param_1 + 0x18);
    if (((iVar7 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar7 + 0x80))) &&
       (iVar7 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(uint *)(iVar7 + 0x3b0) = uVar10;
    }
    bVar6 = true;
  }
  if (uVar10 == 0) {
    uVar12 = *(undefined4 *)(param_1 + 0x90);
    _param_2 = fVar4 + fVar4;
  }
  else {
    _param_2 = (fVar4 - 0.5) + (fVar4 - 0.5);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x9c),1.0 - _param_2);
    uVar12 = *(undefined4 *)(param_1 + 0xa0);
  }
  FUN_00cb2bc0(uVar12,_param_2);
  uVar9 = *(uint *)(param_1 + 0x94);
  if (uVar10 != 0) {
    uVar9 = *(uint *)(param_1 + 0x98);
  }
  if (*(float *)(param_1 + 0xe8) <= fVar3) {
    if (*(float *)(param_1 + 0xe8) < fVar3) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe4);
      fVar2 = *(float *)(param_1 + 0xe4) / (float)*(int *)(param_1 + 0xdc);
      if (0.5 < fVar2) {
        fVar2 = fVar2 - 0.5;
      }
      FUN_00cb28a0(uVar9,(1.0 - (fVar2 + fVar2)) * 322.0);
    }
  }
  else if ((((*(int *)(param_1 + 0xf4) == 0) || (bVar6)) &&
           (iVar7 = *(int *)(param_1 + 0x18), iVar7 != 0)) &&
          (((*(uint *)(iVar7 + 0x80) <= uVar9 ||
            (iVar8 = uVar9 * 0x400 + *(int *)(iVar7 + 0x7c), iVar8 == 0)) ||
           (*(char *)(iVar8 + 0x3ed) != '\0')))) {
    fVar2 = *(float *)(param_1 + 0xe8);
    if (bVar6) {
      fVar2 = *(float *)(param_1 + 0xe4);
    }
    *(undefined4 *)(param_1 + 0xf4) = 1;
    if ((uVar9 < *(uint *)(iVar7 + 0x80)) &&
       (iVar7 = uVar9 * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
      *(undefined1 *)(iVar7 + 0x3ee) = 1;
      *(undefined4 *)(iVar7 + 0x3d4) = 0;
      *(undefined4 *)(iVar7 + 0x3d0) = 0;
    }
    fVar5 = fVar2 / (float)*(int *)(param_1 + 0xdc);
    if (0.5 < fVar5) {
      fVar5 = fVar5 - 0.5;
    }
    FUN_00cb28a0(uVar9,(1.0 - (fVar5 + fVar5)) * 322.0);
    *(float *)(param_1 + 0xec) = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0xec) / (float)*(int *)(param_1 + 0xdc);
  if (0.5 < fVar2) {
    fVar2 = fVar2 - 0.5;
  }
  if (_param_2 <= fVar2 + fVar2) {
    _param_2 = (fVar2 + fVar2) - _param_2;
  }
  else {
    _param_2 = 0.0;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  fVar2 = fRam000000d0;
  if ((((iVar7 != 0) && (uVar9 < *(uint *)(iVar7 + 0x80))) &&
      (*(int *)(iVar7 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) &&
     (fVar2 = _param_2, uVar9 < *(uint *)(iVar7 + 0x80))) {
    *(float *)(*(int *)(iVar7 + 0x7c) + 0x370 + uVar9 * 0x400) = _param_2;
    fVar2 = fRam000000d0;
  }
  fRam000000d0 = fVar2;
  if (fVar3 == *(float *)(param_1 + 0xe4)) {
    if (*(int *)(param_1 + 0xf4) != 0) {
      piVar1 = (int *)(param_1 + 0xf0);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar7 = FUN_00cb24b0(uVar9), iVar7 != 0)) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
        FUN_00cb23d0(uVar9,0);
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cded00(uVar9,5);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = DAT_018b77ec;
  }
  local_10[0] = '\0';
  local_1c = (uint)(longlong)ROUND(fVar4 * 200.0 * 10.0);
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = '\0';
  local_10[10] = '\0';
  local_10[0xb] = '\0';
  local_10[0xc] = '\0';
  local_10[0xd] = '\0';
  local_10[0xe] = '\0';
  local_10[0xf] = 0;
  uVar9 = local_1c % 10;
  FUN_00ca84a0(local_1c / 10,local_10,0x10);
  iVar7 = *(int *)(param_1 + 0x18);
  if (((iVar7 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar7 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar7 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)))) {
    FUN_00cb3cc0(piVar1,local_10);
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if ((((iVar7 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar7 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0xb0) * 0x400 + 0x3f0 + *(int *)(iVar7 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)) {
    FUN_00cb3cc0(piVar1,local_10);
  }
  if (((local_1c / 10 == 0) && (uVar9 == 0)) && (0.0 < fVar4)) {
    uVar9 = 1;
  }
  _sprintf_s(local_10,0x10,".%d%%%%",uVar9);
  iVar7 = *(int *)(param_1 + 0x18);
  if (((iVar7 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar7 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0xb4) * 0x400 + 0x3f0 + *(int *)(iVar7 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)))) {
    FUN_00cb3cc0(piVar1,local_10);
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if ((((iVar7 != 0) && (*(uint *)(param_1 + 0xb8) < *(uint *)(iVar7 + 0x80))) &&
      (piVar1 = *(int **)(*(int *)(iVar7 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0xb8) * 0x400),
      piVar1 != (int *)0x0)) && (iVar7 = (**(code **)(*piVar1 + 8))(), iVar7 == 4)) {
    FUN_00cb3cc0(piVar1,local_10);
  }
  *(uint *)(param_1 + 0x108) = uVar10;
  return;
}

