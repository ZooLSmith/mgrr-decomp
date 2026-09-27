// src/unsorted/unit_004BD970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004BD970..004BDC40, 3 functions

#include "types.h"

// 004BD970  FUN_004bd970  size=246  [run]
void __thiscall FUN_004bd970(int param_1,int param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 < 0xe) {
    if (*(int *)(param_1 + 0xa18) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
    }
    iVar4 = 0;
    *(undefined4 *)(param_1 + (param_2 * 9 + 0x372) * 4) = 0;
    if (0 < (int)(&DAT_0163ed24)[param_2]) {
      piVar3 = (int *)(param_1 + 0xde4 + param_2 * 0x24);
      do {
        if (*piVar3 != 0) {
          puVar1 = (uint *)(*piVar3 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < (int)(&DAT_0163ed24)[param_2]);
    }
    iVar4 = *(int *)(param_1 + 0xdd4 + param_2 * 0x24);
    if (iVar4 != 0) {
      puVar2 = (ushort *)(iVar4 + 0xa2);
      *puVar2 = *puVar2 | 8;
    }
    iVar4 = *(int *)(param_1 + 0xdd8 + param_2 * 0x24);
    if (iVar4 != 0) {
      puVar2 = (ushort *)(iVar4 + 0xa2);
      *puVar2 = *puVar2 | 8;
    }
    iVar4 = *(int *)(param_1 + 0xddc + param_2 * 0x24);
    if (iVar4 != 0) {
      puVar2 = (ushort *)(iVar4 + 0xa2);
      *puVar2 = *puVar2 | 8;
    }
    iVar4 = *(int *)(param_1 + 0xde0 + param_2 * 0x24);
    if (iVar4 != 0) {
      puVar2 = (ushort *)(iVar4 + 0xa2);
      *puVar2 = *puVar2 | 8;
    }
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x20))();
    }
    FUN_00a938c0(param_2);
    if (*(int *)(param_1 + 0xa18) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
    }
  }
  return;
}

// 004BDA70  FUN_004bda70  size=453  [run]
undefined4 __thiscall FUN_004bda70(int param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_38 [14];
  
  uVar4 = FUN_004b72d0();
  if (uVar4 < param_2) {
    return 0;
  }
  uVar4 = 0;
  local_38[0] = 7;
  local_38[1] = 0;
  local_38[2] = 0xd;
  local_38[3] = 6;
  local_38[4] = 0xc;
  local_38[5] = 5;
  local_38[6] = 0xb;
  local_38[7] = 4;
  local_38[8] = 10;
  local_38[9] = 3;
  local_38[10] = 9;
  local_38[0xb] = 2;
  local_38[0xc] = 8;
  local_38[0xd] = 1;
  while ((0 < (int)param_2 && (uVar4 < 0xe))) {
    iVar3 = local_38[uVar4];
    uVar4 = uVar4 + 1;
    if ((iVar3 < 0xe) && (iVar5 = iVar3 * 9 + 0x372, *(int *)(param_1 + iVar5 * 4) != 0)) {
      if (*(int *)(param_1 + 0xa18) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
      }
      iVar7 = 0;
      *(undefined4 *)(param_1 + iVar5 * 4) = 0;
      if (0 < (int)(&DAT_0163ed24)[iVar3]) {
        piVar6 = (int *)(param_1 + 0xde4 + iVar3 * 0x24);
        do {
          if (*piVar6 != 0) {
            puVar1 = (uint *)(*piVar6 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < (int)(&DAT_0163ed24)[iVar3]);
      }
      iVar5 = *(int *)(param_1 + 0xdd4 + iVar3 * 0x24);
      if (iVar5 != 0) {
        puVar2 = (ushort *)(iVar5 + 0xa2);
        *puVar2 = *puVar2 | 8;
      }
      iVar5 = *(int *)(param_1 + 0xdd8 + iVar3 * 0x24);
      if (iVar5 != 0) {
        puVar2 = (ushort *)(iVar5 + 0xa2);
        *puVar2 = *puVar2 | 8;
      }
      iVar5 = *(int *)(param_1 + 0xddc + iVar3 * 0x24);
      if (iVar5 != 0) {
        puVar2 = (ushort *)(iVar5 + 0xa2);
        *puVar2 = *puVar2 | 8;
      }
      iVar5 = *(int *)(param_1 + 0xde0 + iVar3 * 0x24);
      if (iVar5 != 0) {
        puVar2 = (ushort *)(iVar5 + 0xa2);
        *puVar2 = *puVar2 | 8;
      }
      iVar5 = FUN_00a81330();
      if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
        (**(code **)(*piVar6 + 0x20))();
      }
      FUN_00a938c0(iVar3);
      if (*(int *)(param_1 + 0xa18) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
      }
      param_2 = param_2 - 1;
    }
  }
  return 1;
}

// 004BDC40  FUN_004bdc40  size=362  [run]
float * __thiscall FUN_004bdc40(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

