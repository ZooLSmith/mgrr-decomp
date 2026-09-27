// src/unsorted/unit_00D292C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D292C0..00D29960, 5 functions

#include "mgrr.h"

// 00D292C0  FUN_00d292c0  size=673  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00d292c0(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  pfVar3 = param_3;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  if (((*(uint *)(param_1 + 0x80) <= param_2) ||
      (param_3 = *(float **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)),
      param_3 == (float *)0x0)) || (iVar4 = (**(code **)((int)*param_3 + 8))(), iVar4 != 3)) {
    param_3 = (float *)0x0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar4 = param_2 * 0x400 + 0x2a0 + *(int *)(param_1 + 0x7c);
    param_2 = param_2 * 0x400 + 0x50 + *(int *)(param_1 + 0x7c);
  }
  else {
    param_2 = 0;
    iVar4 = 0;
  }
  if (((param_3 != (float *)0x0) && (param_2 != 0)) && ((iVar4 != 0 && (param_3[5] != 0.0)))) {
    if ((_DAT_01dc51b8 & 1) == 0) {
      _DAT_01dc51b8 = _DAT_01dc51b8 | 1;
      FUN_00cc7d30();
    }
    _memset(&DAT_01dc50a8,0,0x110);
    iVar5 = FUN_00ccf000(&DAT_01dc50a8);
    if (iVar5 != 0) {
      FUN_00d1e780(&DAT_01dc50a8);
      if (DAT_01dc50f8 != 0) {
        FUN_00dd4920(DAT_01dc50f8);
        DAT_01dc50f8 = 0;
      }
      if (DAT_01dc5100 != 0) {
        FUN_00dd4920(DAT_01dc5100);
        DAT_01dc5100 = 0;
      }
    }
    fVar1 = _DAT_01dc50e8 *
            *(float *)(param_2 + 0x10) *
            SQRT(*(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
                 *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60) +
                 *(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68));
    fVar2 = SQRT(*(float *)(iVar4 + 0x74) * *(float *)(iVar4 + 0x74) +
                 *(float *)(iVar4 + 0x70) * *(float *)(iVar4 + 0x70) +
                 *(float *)(iVar4 + 0x78) * *(float *)(iVar4 + 0x78)) * *(float *)(param_2 + 0x14) *
            _DAT_01dc50ec;
    *pfVar3 = *(float *)(iVar4 + 0x90);
    pfVar3[1] = *(float *)(iVar4 + 0x94);
    pfVar3[2] = *(float *)(iVar4 + 0x90);
    pfVar3[3] = *(float *)(iVar4 + 0x94);
    switch(param_3[3]) {
    case 0.0:
    case 4.2039e-45:
      pfVar3[2] = pfVar3[2] + fVar1;
      break;
    case 1.4013e-45:
      *pfVar3 = *pfVar3 - fVar1 * 0.5;
      pfVar3[2] = fVar1 * 0.5 + pfVar3[2];
      break;
    case 2.8026e-45:
      *pfVar3 = *pfVar3 - fVar1;
    }
    iVar4 = (int)param_3[4];
    if (iVar4 == 0) {
      pfVar3[3] = fVar2 + pfVar3[3];
    }
    else if (iVar4 == 1) {
      pfVar3[1] = pfVar3[1] - fVar2 * 0.5;
      pfVar3[3] = fVar2 * 0.5 + pfVar3[3];
    }
    else if (iVar4 == 2) {
      pfVar3[1] = pfVar3[1] - fVar2;
    }
    iVar4 = FUN_00f98a90();
    *pfVar3 = *pfVar3 / ((float)iVar4 * 0.00078125);
    iVar4 = FUN_00f98aa0();
    pfVar3[1] = pfVar3[1] / ((float)iVar4 * 0.0013888889);
    iVar4 = FUN_00f98a90();
    pfVar3[2] = pfVar3[2] / ((float)iVar4 * 0.00078125);
    iVar4 = FUN_00f98aa0();
    pfVar3[3] = pfVar3[3] / ((float)iVar4 * 0.0013888889);
    return 1;
  }
  return 0;
}

// 00D29580  FUN_00d29580  size=172  [run]
void __fastcall FUN_00d29580(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  iVar1 = 0xe;
  do {
    FUN_00f972f0();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[9] = 0;
    *(undefined2 *)((int)puVar2 + 0x29) = 0;
    FUN_00d0dc80(puVar2[-10]);
    FUN_00e9d6a0(puVar2[-5]);
    FUN_00e9d6a0(puVar2[-3]);
    puVar2[-0xb] = 0;
    puVar2[-10] = 0xffffffff;
    puVar2[-9] = 0xffffffff;
    puVar2[-5] = 0;
    puVar2[-3] = 0;
    puVar2[-4] = 0;
    puVar2[-2] = 0;
    puVar2[0x10] = 0;
    puVar2 = puVar2 + 0x1d;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00d0dbc0();
  FUN_00e9ef20((int *)(param_1 + 0x690));
  (**(code **)(*(int *)(param_1 + 0x690) + 8))();
  *(undefined4 *)(param_1 + 0x664) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  return;
}

// 00D29630  FUN_00d29630  size=355  [run]
void FUN_00d29630(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_190 [16];
  char local_180 [128];
  char local_100 [256];
  
  FUN_00de3530();
  FUN_00de3530();
  if (param_2 == 0) {
    uVar2 = FUN_00e9d0b0(param_1[7]);
    param_1[8] = uVar2;
    uVar2 = FUN_00e9d0b0(param_1[9]);
    param_1[10] = uVar2;
  }
  FUN_00de3540(param_1[8],param_1[10]);
  FUN_00d1e5b0(param_1[2],local_190);
  puVar1 = (&PTR_DAT_018b3a30)[param_1[2]];
  _sprintf_s(local_180,0x80,"mess%s.mcd",puVar1);
  _sprintf_s(local_100,0x80,"mess%s.wtb",puVar1);
  iVar3 = FUN_00de4550(local_180,0);
  iVar4 = FUN_00de4550(local_100,0);
  param_1[0x1b] = iVar4;
  uVar2 = DAT_01dc3e0c;
  if ((iVar3 == 0) || (param_2 != 0)) {
LAB_00d2972a:
    FUN_00f972f0();
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x15] = 0;
    *(undefined2 *)((int)param_1 + 0x59) = 0;
  }
  else {
    if (iVar4 != 0) {
      iVar4 = FUN_00fa25d0(iVar4);
      if (iVar4 == 0) goto LAB_00d2972a;
    }
    param_1[0xc] = iVar3;
    param_1[0xd] = uVar2;
    param_1[0x15] = 0;
  }
  _sprintf_s(local_180,0x80,"str%s.str",puVar1);
  uVar2 = FUN_00de4550(local_180,0);
  param_1[0x1c] = uVar2;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  *param_1 = 0xffffffff;
  return;
}

// 00D297A0  FUN_00d297a0  size=434  [run]
void __fastcall FUN_00d297a0(int param_1)

{
  int iVar1;
  
  FUN_00f9cb70();
  (**(code **)(*(int *)(param_1 + 0x884) + 4))();
  (**(code **)(*(int *)(param_1 + 0x7d8) + 4))();
  (**(code **)(*(int *)(param_1 + 0x72c) + 4))();
  (**(code **)(*(int *)(param_1 + 0x65c) + 4))();
  (**(code **)(*(int *)(param_1 + 0x58c) + 4))();
  (**(code **)(*(int *)(param_1 + 0x4ec) + 4))();
  (**(code **)(*(int *)(param_1 + 0x47c) + 4))();
  (**(code **)(*(int *)(param_1 + 0x364) + 4))();
  (**(code **)(*(int *)(param_1 + 0x2d0) + 4))();
  (**(code **)(*(int *)(param_1 + 0x230) + 4))();
  (**(code **)(*(int *)(param_1 + 400) + 4))();
  (**(code **)(*(int *)(param_1 + 0xf0) + 4))();
  (**(code **)(*(int *)(param_1 + 0x50) + 4))();
  iVar1 = (**(code **)(*(int *)(param_1 + 0xa90) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
    (**(code **)(*(int *)(param_1 + 0xa90) + 8))();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xa20) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b6e0();
    (**(code **)(*(int *)(param_1 + 0xa20) + 8))();
  }
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x974) != 0) {
    if (*(int *)(param_1 + 0x974) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x974),0);
      *(undefined4 *)(param_1 + 0x974) = 0;
    }
    *(undefined4 *)(param_1 + 0x978) = 0;
    *(undefined4 *)(param_1 + 0x97c) = 0;
    *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x970);
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x970);
    *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x970);
  }
  *(undefined4 *)(param_1 + 0x948) = 0;
  return;
}

// 00D29960  FUN_00d29960  size=164  [run]
undefined4 * __thiscall FUN_00d29960(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xa10) != 0) {
    do {
      if ((undefined4 *)(&DAT_018b5878)[uVar1 * 2] == param_2) {
        iStack_4 = param_1;
        puVar2 = (undefined4 *)(**(code **)(uVar1 * 8 + 0x18b587c))();
        if (puVar2 != (undefined4 *)0x0) {
          param_2 = puVar2;
          if (*(int *)(param_1 + 0x948) == 0) {
            (**(code **)*puVar2)(1);
            return (undefined4 *)0x0;
          }
          if (*(int *)(param_1 + 0x968) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x950));
          }
          cFixedList::insert_26(&iStack_4,param_1 + 0x988,&param_2);
          if (*(int *)(param_1 + 0x968) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x950));
          }
        }
        return puVar2;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xa10));
  }
  return (undefined4 *)0x0;
}

