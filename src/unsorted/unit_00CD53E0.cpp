// src/unsorted/unit_00CD53E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD53E0..00CD5470, 2 functions

#include "mgrr.h"

// 00CD53E0  FUN_00cd53e0  size=134  [run]
void FUN_00cd53e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (iVar1 = FUN_00cbbb80(*(undefined4 *)(param_1 + 0x4b4)), iVar1 != 0)) {
    uVar3 = 0xffffffff;
    uVar2 = 0;
    do {
      if (param_1 == (&DAT_01dc0ef8)[uVar2]) {
        (&DAT_01dc0ed0)[uVar2] = param_1;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
    uVar2 = 0;
    do {
      if ((&DAT_01dc0ef8)[uVar2] == 0) {
        if (((&DAT_01dbfb68)[uVar2] == 0) && (uVar3 == 0xffffffff)) {
          uVar3 = uVar2;
        }
      }
      else {
        uVar4 = uVar2;
        if ((&DAT_01dc0ed0)[uVar2] == param_1) break;
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar3;
    } while (uVar2 < 10);
    if (uVar4 != 0xffffffff) {
      (&DAT_01dc0ed0)[uVar4] = param_1;
      (&DAT_01dbfb40)[uVar4] = 1;
    }
  }
  return;
}

// 00CD5470  FUN_00cd5470  size=701  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cd5470(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint local_8;
  float local_4;
  
  local_8 = 0;
  do {
    piVar9 = param_1 + 1;
    if ((*(int *)((int)&DAT_01dbfa98 + local_8) != 0) &&
       (iVar7 = *(int *)((int)&DAT_01dc0f20 + local_8), iVar7 != 0)) {
      local_4 = 9999.0;
      uVar8 = DAT_01bea090 >> 6 & 1;
      if (uVar8 != 0) {
        fVar4 = *(float *)(DAT_01dc1490 + 0x40) - *(float *)(iVar7 + 0x40);
        fVar3 = *(float *)(DAT_01dc1490 + 0x44) - *(float *)(iVar7 + 0x44);
        fVar2 = *(float *)(DAT_01dc1490 + 0x48) - *(float *)(iVar7 + 0x48);
        local_4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      iVar6 = *(int *)((int)&DAT_01dc1020 + local_8);
      if ((iVar6 < 0) || (*(short *)(iVar7 + 0x324) <= iVar6)) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 * 0x70 + *(int *)(iVar7 + 800);
      }
      iVar1 = *piVar9;
      switch(iVar1) {
      case 0:
        if (((*(int *)(iVar7 + 0x4b0) == 0x71000) && (iVar7 = FUN_005e94a0(iVar7), iVar7 != 0)) &&
           (cVar5 = FUN_005e8d40(), cVar5 != '\0')) {
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xfffffffe;
        }
        else if (*(int *)((int)&DAT_01dc10a0 + local_8) == 0) {
          if (local_4 < 30.0) {
            *piVar9 = *piVar9 + 1;
          }
        }
        else if ((DAT_01bea090 & 0x40) != 0) {
          *piVar9 = *piVar9 + 1;
        }
        break;
      case 1:
        uVar8 = param_1[0x21] & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        if ((int)uVar8 < 1) {
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
        }
        else {
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xfffffffe;
        }
        param_1[0x21] = param_1[0x21] + 1;
        if (4 < param_1[0x21]) {
          param_1[0x21] = 0;
          *piVar9 = *piVar9 + 1;
        }
        break;
      case 2:
        if (*(int *)((int)&DAT_01dc10a0 + local_8) == 0) {
          if (30.0 < local_4) {
            *piVar9 = iVar1 + 1;
          }
        }
        else if (uVar8 == 0) {
          *piVar9 = iVar1 + 1;
        }
        break;
      case 3:
        uVar8 = param_1[0x21] & 0x80000001;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        if ((int)uVar8 < 1) {
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
        }
        param_1[0x21] = param_1[0x21] + 1;
        if (4 < param_1[0x21]) {
          param_1[0x21] = 0;
          *piVar9 = 0;
        }
      }
    }
    local_8 = local_8 + 4;
    param_1 = piVar9;
  } while (local_8 < 0x80);
  uVar8 = 0;
  DAT_01dbfa98 = 0;
  DAT_01dbfa9c = 0;
  _DAT_01dbfaa0 = 0;
  _DAT_01dbfaa4 = 0;
  _DAT_01dbfaa8 = 0;
  _DAT_01dbfaac = 0;
  _DAT_01dbfab0 = 0;
  _DAT_01dbfab4 = 0;
  _DAT_01dbfab8 = 0;
  _DAT_01dbfabc = 0;
  _DAT_01dbfac0 = 0;
  _DAT_01dbfac4 = 0;
  _DAT_01dbfac8 = 0;
  _DAT_01dbfacc = 0;
  _DAT_01dbfad0 = 0;
  _DAT_01dbfad4 = 0;
  _DAT_01dbfad8 = 0;
  _DAT_01dbfadc = 0;
  _DAT_01dbfae0 = 0;
  _DAT_01dbfae4 = 0;
  _DAT_01dbfae8 = 0;
  _DAT_01dbfaec = 0;
  _DAT_01dbfaf0 = 0;
  _DAT_01dbfaf4 = 0;
  _DAT_01dbfaf8 = 0;
  _DAT_01dbfafc = 0;
  _DAT_01dbfb00 = 0;
  _DAT_01dbfb04 = 0;
  _DAT_01dbfb08 = 0;
  _DAT_01dbfb0c = 0;
  _DAT_01dbfb10 = 0;
  _DAT_01dbfb14 = 0;
  do {
    *(undefined4 *)((int)&DAT_01dc0fa0 + uVar8) = *(undefined4 *)((int)&DAT_01dc0f20 + uVar8);
    *(undefined4 *)((int)&DAT_01dc0f20 + uVar8) = 0;
    uVar8 = uVar8 + 4;
  } while (uVar8 < 0x80);
  return;
}

