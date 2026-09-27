// src/unsorted/unit_00D24020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D24020..00D243C0, 2 functions

#include "types.h"

// 00D24020  FUN_00d24020  size=926  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00d24020(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar7;
  float local_4;
  
  if (DAT_01dc14c8 == 0) {
    return;
  }
  fVar6 = (float10)_DAT_01dc0ddc;
  if ((float10)_DAT_01dc0de0 < fVar6) {
    fVar6 = (float10)_DAT_01dc0de0;
  }
  fVar7 = (float10)0;
  if (fVar6 < fVar7) {
    fVar6 = fVar7;
  }
  local_4 = (float)fVar6;
  if (((float10)*(float *)(DAT_01dc14c8 + 0x2bac) <= fVar7) || (*(int *)(param_1 + 0xe0) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  *(uint *)(param_1 + 0xe0) = (uint)(fVar7 < (float10)*(float *)(DAT_01dc14c8 + 0x2bac));
  if ((param_2 != 1) && (fVar6 == (float10)*(float *)(param_1 + 0xc4))) {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x38);
    if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
       ((iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0 &&
        (*(int *)(iVar4 + 0x3b0) != 0)))) {
      if (*(int *)(param_1 + 100) == 0) {
        iVar4 = FUN_00ce4dd0(0xd);
        fVar6 = extraout_ST0;
        if (iVar4 != 0) {
          fVar6 = (float10)FUN_00cb2310(uVar1,0);
        }
        if (*(int *)(param_1 + 100) == 0) goto LAB_00d24381;
      }
      iVar4 = FUN_00ca8620(param_1 + 0x68,0x1e);
      fVar6 = extraout_ST0_00;
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0xd);
          fVar6 = (float10)local_4;
        }
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
    goto LAB_00d24381;
  }
  fVar7 = ABS((float10)*(float *)(param_1 + 0xc4) - fVar6) * (float10)0.2;
  if (fVar7 < (float10)0.5) {
    fVar7 = (float10)0.5;
  }
  if ((float10)*(float *)(param_1 + 0xc4) <= fVar6) {
    if (((float10)*(float *)(param_1 + 0xc4) < fVar6) &&
       (fVar7 = (float10)*(float *)(param_1 + 0xc4) + fVar7,
       *(float *)(param_1 + 0xc4) = (float)fVar7, fVar6 < fVar7)) {
      *(float *)(param_1 + 0xc4) = (float)fVar6;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0xc4) / _DAT_01dc0de0;
    fVar7 = (float10)*(float *)(param_1 + 0xc4) - fVar7;
    *(float *)(param_1 + 0xc4) = (float)fVar7;
    if (fVar7 < fVar6) {
      *(float *)(param_1 + 0xc4) = (float)fVar6;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x38);
    if (iVar4 == 0) {
LAB_00d241fe:
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0xc);
        fVar6 = (float10)local_4;
      }
      *(undefined4 *)(param_1 + 100) = 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(float *)(param_1 + 0xd0) = fVar2 * 0.991 + 0.009;
    }
    else if (((*(uint *)(iVar4 + 0x80) <= uVar1) ||
             (iVar5 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar5 == 0)) ||
            (*(int *)(iVar5 + 0x3b0) == 0)) {
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      goto LAB_00d241fe;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      if ((float10)*(float *)(param_1 + 200) != fVar6) {
LAB_00d24274:
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (*(int *)(param_1 + 0xdc) == 0) {
          *(undefined4 *)(param_1 + 0xd8) = 0;
          *(undefined4 *)(param_1 + 0xdc) = 1;
          _DAT_01dc0de8 = 1;
        }
      }
    }
    else if (((bVar3) || ((float10)1.0 < (float10)*(float *)(param_1 + 200) - fVar6)) ||
            (1 < DAT_01dc0de4)) goto LAB_00d24274;
  }
  fVar2 = 0.0;
  if (*(float *)(param_1 + 0xc4) != 0.0) {
    fVar2 = (*(float *)(param_1 + 0xc4) / _DAT_01dc0de0) * 0.991 + 0.009;
  }
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x3c),fVar2);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
      (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x3b0) != 0)) {
    FUN_00cb28a0(uVar1,fVar2 * 240.0 - 1.5);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x38),*(float *)(param_1 + 0xd0) - fVar2);
  }
  FUN_00d14440(*(float *)(param_1 + 0xc4) / _DAT_01dc0de0);
  fVar6 = (float10)local_4;
LAB_00d24381:
  if ((*(int *)(param_1 + 0xdc) != 0) &&
     (*(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1, 6 < *(int *)(param_1 + 0xd8))) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    _DAT_01dc0de8 = 0;
  }
  *(float *)(param_1 + 200) = (float)fVar6;
  DAT_01dc0de4 = 0;
  return;
}

// 00D243C0  FUN_00d243c0  size=286  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00d243c0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  bool bVar3;
  
  bVar3 = false;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    if (*(int *)(param_1 + 0x7c) == 0) {
      FUN_00d14440(0);
      return false;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    fVar2 = _DAT_01dc0ddc;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x80) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 2;
      *(float *)(param_1 + 0xc4) = fVar2;
      uVar1 = *(undefined4 *)(param_1 + 0x60);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    FUN_00d24020(1);
switchD_00d243d9_caseD_1:
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    if (6 < *(int *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    }
    goto switchD_00d243d9_caseD_2;
  case 1:
    goto switchD_00d243d9_caseD_1;
  case 2:
switchD_00d243d9_caseD_2:
    fVar2 = *(float *)(param_1 + 0x88) + 0.03;
    *(float *)(param_1 + 0x88) = fVar2;
    bVar3 = *(float *)(param_1 + 0x60) <= fVar2;
    if (bVar3) {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x60);
    }
    fVar2 = *(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x60);
    if ((_DAT_01dc0de0 != 0.0) && (_DAT_01dc0ddc / _DAT_01dc0de0 < fVar2)) {
      fVar2 = _DAT_01dc0ddc / _DAT_01dc0de0;
    }
    FUN_00d14440(fVar2);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x88));
    return bVar3;
  case 3:
    bVar3 = true;
  default:
    return bVar3;
  }
}

