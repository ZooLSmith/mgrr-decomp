// src/unsorted/unit_00CB4BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4BA0..00CB5390, 10 functions

#include "types.h"

// 00CB4BA0  FUN_00cb4ba0  size=64  [run]
void __thiscall FUN_00cb4ba0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    while (((&DAT_018b5cb8)[uVar2 * 2] != param_2 ||
           (iVar1 = (*(code *)(&PTR_cUIEx0001_018b5cbc)[uVar2 * 2])(), iVar1 == 0))) {
      uVar2 = uVar2 + 1;
      if (*(uint *)(param_1 + 8) <= uVar2) {
        return;
      }
    }
    *(int *)(iVar1 + 4) = param_2;
  }
  return;
}

// 00CB4C20  FUN_00cb4c20  size=96  [run]
undefined4 __thiscall FUN_00cb4c20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (param_4 != 0)) && (param_3 != 0)) {
    uVar2 = 0;
    if (*(int *)(param_3 + 4) == 1) {
      iVar1 = cTouchArea::cTouchArea
                        (param_2,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),
                         *(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),0,1,1);
      if (0 < iVar1) {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  return 0;
}

// 00CB4C80  FUN_00cb4c80  size=107  [run]
undefined4
FUN_00cb4c80(int param_1,float param_2,float param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_1 != 0) && (param_6 != 0)) {
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14);
    *(float *)(param_6 + 8) = ((*(float *)(param_1 + 8) - param_2) + param_2) - (param_2 - param_4);
    *(float *)(param_6 + 0xc) = ((fVar1 - param_3) + param_3) - (param_3 - param_5);
    *(float *)(param_6 + 0x10) = ((fVar2 - param_2) + param_2) - (param_2 - param_4);
    *(float *)(param_6 + 0x14) = (param_3 + (fVar3 - param_3)) - (param_3 - param_5);
    return 1;
  }
  return 0;
}

// 00CB4DE0  FUN_00cb4de0  size=107  [run]
undefined4
FUN_00cb4de0(int param_1,float param_2,float param_3,float param_4,float param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_1 != 0) && (param_6 != 0)) {
    fVar1 = *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_1 + 0xc);
    fVar3 = *(float *)(param_1 + 0x10);
    *(float *)(param_6 + 4) = ((*(float *)(param_1 + 4) - param_2) + param_2) - (param_2 - param_4);
    *(float *)(param_6 + 8) = ((fVar1 - param_3) + param_3) - (param_3 - param_5);
    *(float *)(param_6 + 0xc) = ((fVar2 - param_2) + param_2) - (param_2 - param_4);
    *(float *)(param_6 + 0x10) = (param_3 + (fVar3 - param_3)) - (param_3 - param_5);
    return 1;
  }
  return 0;
}

// 00CB4EA0  FUN_00cb4ea0  size=48  [run]
undefined4
FUN_00cb4ea0(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 1) {
    uVar1 = FUN_00cb4de0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

// 00CB4F80  FUN_00cb4f80  size=95  [run]
undefined4 __thiscall FUN_00cb4f80(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      uVar1 = FUN_00982f30(param_2 << 0x10 | param_3 & 0xffff,param_4);
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return uVar1;
  }
  return 0;
}

// 00CB4FE0  FUN_00cb4fe0  size=74  [run]
undefined4 __thiscall FUN_00cb4fe0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      FUN_00982f70(param_2);
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return 1;
  }
  return 0;
}

// 00CB5030  FUN_00cb5030  size=95  [run]
undefined4 __thiscall FUN_00cb5030(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      uVar1 = FUN_00982df0(param_2 << 0x10 | param_3 & 0xffff,param_4);
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return uVar1;
  }
  return 0;
}

// 00CB52C0  FUN_00cb52c0  size=196  [run]
float10 __thiscall FUN_00cb52c0(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float local_10;
  
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      local_10 = (float)piVar2[1];
      goto LAB_00cb5317;
    }
  }
  local_10 = 0.0;
LAB_00cb5317:
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      return ((float10)(float)piVar2[3] + (float10)(float)piVar2[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CB5390  FUN_00cb5390  size=167  [run]
bool __fastcall FUN_00cb5390(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = true;
  if (((byte)DAT_01bea090 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x114) = 1;
    return false;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 1;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(int *)(param_1 + 0x11c) == 1) {
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    bVar1 = false;
    if (0x3c < *(int *)(param_1 + 0x120)) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x11c) == 2) {
    uVar2 = *(uint *)(param_1 + 0x120) & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    bVar1 = (int)uVar2 < 2;
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    if (0xc < *(int *)(param_1 + 0x120)) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      return bVar1;
    }
  }
  return bVar1;
}

