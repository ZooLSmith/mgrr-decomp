// src/unsorted/unit_00D237C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D237C0..00D23A50, 2 functions

#include "types.h"

// 00D237C0  FUN_00d237c0  size=645  [run]
void __thiscall FUN_00d237c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float local_4;
  
  if (*(float *)(param_1 + 0x8c) <= *(float *)(param_1 + 0x90)) {
    local_4 = *(float *)(param_1 + 0x8c);
  }
  else {
    local_4 = *(float *)(param_1 + 0x90);
  }
  fVar6 = (float10)local_4;
  fVar7 = (float10)0;
  if (fVar6 < fVar7) {
    local_4 = (float)fVar7;
    fVar6 = fVar7;
  }
  if ((param_2 != 1) && (fVar6 == (float10)*(float *)(param_1 + 0x78))) {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if ((iVar4 != 0) &&
       (((uVar3 < *(uint *)(iVar4 + 0x80) &&
         (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) &&
        (*(int *)(iVar4 + 0x3b0) != 0)))) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar4 = FUN_00ce4dd0(0xd);
        fVar6 = extraout_ST0;
        if (iVar4 != 0) {
          fVar6 = (float10)FUN_00cb2310(uVar3,0);
        }
        if (*(int *)(param_1 + 0x4c) == 0) goto LAB_00d23a3b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      if (0x3c < *(int *)(param_1 + 0x50)) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0xd);
          fVar6 = (float10)local_4;
        }
        *(float *)(param_1 + 0x7c) = (float)fVar6;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return;
      }
    }
    goto LAB_00d23a3b;
  }
  fVar7 = ABS((float10)*(float *)(param_1 + 0x78) - fVar6) * (float10)0.2;
  if (fVar7 < (float10)0.5) {
    fVar7 = (float10)0.5;
  }
  if ((float10)*(float *)(param_1 + 0x78) <= fVar6) {
    if (((float10)*(float *)(param_1 + 0x78) < fVar6) &&
       (fVar7 = (float10)*(float *)(param_1 + 0x78) + fVar7,
       *(float *)(param_1 + 0x78) = (float)fVar7, fVar6 < fVar7)) {
      *(float *)(param_1 + 0x78) = (float)fVar6;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x90);
    fVar7 = (float10)*(float *)(param_1 + 0x78) - fVar7;
    *(float *)(param_1 + 0x78) = (float)fVar7;
    if (fVar7 < fVar6) {
      *(float *)(param_1 + 0x78) = (float)fVar6;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (iVar4 == 0) {
LAB_00d2394a:
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0xc);
        fVar6 = (float10)local_4;
      }
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(float *)(param_1 + 0x84) = fVar1 / fVar2;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else if (((*(uint *)(iVar4 + 0x80) <= uVar3) ||
             (iVar5 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar5 == 0)) ||
            (*(int *)(iVar5 + 0x3b0) == 0)) {
      if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      goto LAB_00d2394a;
    }
    if ((float10)*(float *)(param_1 + 0x7c) != fVar6) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  fVar1 = *(float *)(param_1 + 0x78) / *(float *)(param_1 + 0x90);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x30),fVar1);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     ((iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0 && (*(int *)(iVar4 + 0x3b0) != 0))
     )) {
    FUN_00cb28a0(uVar3,fVar1 * 240.0 - 1.5);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x2c),*(float *)(param_1 + 0x84) - fVar1);
  }
  FUN_00d14280(*(float *)(param_1 + 0x78) / *(float *)(param_1 + 0x90));
  fVar6 = (float10)local_4;
LAB_00d23a3b:
  *(float *)(param_1 + 0x7c) = (float)fVar6;
  return;
}

// 00D23A50  FUN_00d23a50  size=208  [run]
undefined4 __fastcall FUN_00d23a50(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_00d14280(0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_00d237c0(1);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
switchD_00d23a66_caseD_1:
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    if (6 < *(int *)(param_1 + 0x68)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    goto switchD_00d23a66_caseD_2;
  case 1:
    goto switchD_00d23a66_caseD_1;
  case 2:
switchD_00d23a66_caseD_2:
    fVar1 = *(float *)(param_1 + 0x6c) + 0.03;
    *(float *)(param_1 + 0x6c) = fVar1;
    if (*(float *)(param_1 + 0x48) <= fVar1) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x48);
    }
    fVar1 = *(float *)(param_1 + 0x6c) / *(float *)(param_1 + 0x48);
    if ((*(float *)(param_1 + 0x90) != 0.0) &&
       (fVar2 = *(float *)(param_1 + 0x8c) / *(float *)(param_1 + 0x90), fVar2 < fVar1)) {
      fVar1 = fVar2;
    }
    FUN_00d14280(fVar1);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6c));
    return 0;
  case 3:
    uVar3 = 1;
  default:
    return uVar3;
  }
}

