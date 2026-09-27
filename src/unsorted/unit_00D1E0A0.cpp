// src/unsorted/unit_00D1E0A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D1E0A0..00D1E5B0, 5 functions

#include "types.h"

// 00D1E0A0  FUN_00d1e0a0  size=128  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00d1e0a0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x690) + 0x44))(0x1000,&DAT_01b7e6a0,"UITexList");
  _DAT_018b5720 = param_1 + 0x690;
  if (DAT_018b5728 == 0) {
    DAT_018b5728 = FUN_00dd29b0(0x15c,0x20,0,0);
    if (DAT_018b5728 != 0) {
      _DAT_018b573c = DAT_018b5728 + 0x150;
      _DAT_018b572c = 0x1c;
      _DAT_018b5730 = 0;
      FUN_00cf62f0();
      return 1;
    }
  }
  return 0;
}

// 00D1E120  FUN_00d1e120  size=103  [run]
void FUN_00d1e120(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  FUN_00d0dc80(*(undefined4 *)(param_1 + 8));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x1c));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

// 00D1E190  FUN_00d1e190  size=78  [run]
void __fastcall FUN_00d1e190(int param_1)

{
  *(undefined4 *)(param_1 + 0xaec) = 0;
  FUN_00f972f0();
  FUN_00f972f0();
  FUN_00f972f0();
  FUN_00cdebb0();
  FUN_00ce2ba0();
  FUN_00d11bb0();
  return;
}

// 00D1E1E0  FUN_00d1e1e0  size=946  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d1e1e0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  FUN_00ce2c70();
  fVar1 = 0.066;
  if (*(int *)(param_1 + 0xd44) == 0) {
    if (*(float *)(param_1 + 0x1c) < 1.0) {
      if ((DAT_01bea064 & 0x4000) != 0) {
        fVar1 = 0.132;
      }
      fVar1 = fVar1 + *(float *)(param_1 + 0x1c);
      *(float *)(param_1 + 0x1c) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
      }
    }
  }
  else if (0.0 < *(float *)(param_1 + 0x1c)) {
    if ((DAT_01bea064 & 0x4000) == 0) {
      fVar1 = 0.066;
    }
    else {
      fVar1 = 0.132;
    }
    fVar1 = *(float *)(param_1 + 0x1c) - fVar1;
    *(float *)(param_1 + 0x1c) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd68) == 0) {
    if (0.0 < *(float *)(param_1 + 0x2c)) {
      if ((DAT_01bea064 & 0x4000) == 0) {
        fVar1 = 0.066;
      }
      else {
        fVar1 = 0.132;
      }
      fVar1 = *(float *)(param_1 + 0x2c) - fVar1;
      *(float *)(param_1 + 0x2c) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  else if (*(float *)(param_1 + 0x2c) < 1.0) {
    if ((DAT_01bea064 & 0x4000) == 0) {
      fVar1 = 0.066;
    }
    else {
      fVar1 = 0.132;
    }
    fVar1 = fVar1 + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x2c) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    }
  }
  if (((DAT_01bea094 & 0x100000) == 0) && (*(int *)(param_1 + 0xd4c) == 0)) {
    if (*(float *)(param_1 + 0x3c) < 1.0) {
      if ((DAT_01bea064 & 0x4000) == 0) {
        fVar1 = 0.2;
      }
      else {
        fVar1 = 0.4;
      }
      fVar1 = fVar1 + *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x3c) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      }
    }
  }
  else if (0.0 < *(float *)(param_1 + 0x3c)) {
    if ((DAT_01bea064 & 0x4000) == 0) {
      fVar1 = 0.2;
    }
    else {
      fVar1 = 0.4;
    }
    fVar1 = *(float *)(param_1 + 0x3c) - fVar1;
    *(float *)(param_1 + 0x3c) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  uVar2 = 0;
  uVar3 = (uint)(*(int *)(param_1 + 0xcd8) == 0);
  *(uint *)(param_1 + 0xcd8) = uVar3;
  if (uVar3 != 0) {
    uVar2 = 0x3c888889;
  }
  *(undefined4 *)(param_1 + 0xcd4) = uVar2;
  if (*(int *)(param_1 + 0x948) != 0) {
    if (*(int *)(param_1 + 0x968) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x950));
    }
    FUN_00d11b20();
    if (*(int *)(param_1 + 0x968) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x950));
    }
  }
  FUN_00cca9d0();
  *(undefined4 *)(param_1 + 0xd50) = 0;
  if (*(int *)(param_1 + 0xd78) != 0) {
    iVar4 = FUN_00f98a90();
    iVar5 = FUN_00f98aa0();
    FUN_00ddccc0(param_1 + 0xb30,0x3f733211,(float)iVar4 / (float)iVar5,0x38d1b717,0x42c80000,0,0);
    FUN_00ddccc0(param_1 + 0xbf0,0x3f733211,(float)iVar4 / (float)iVar5,0x38d1b717,0x42c80000,0,0);
    *(undefined4 *)(param_1 + 0xd78) = 0;
  }
  if (((DAT_01bea094 & 0x100000) != 0) &&
     (((DAT_01bea060 & 0x1000) == 0 || (1.0 < _DAT_01dc203c == (_DAT_01dc203c == 1.0))))) {
    FUN_00cad430(local_20);
    local_40 = 0;
    local_3c = _DAT_01bea530 * 5.0;
    local_38 = 0xbf800000;
    local_34 = 0x3f800000;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_2c = 0xbf800000;
    thunk_FUN_00de01a0(param_1 + 0xbb0,extraout_EDX,&local_40,&local_30);
    return;
  }
  FUN_00cad430(local_20);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbf800000;
  local_24 = 0x3f800000;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = -1.0;
  thunk_FUN_00de01a0(param_1 + 0xaf0,local_20,&local_30,&local_40);
  thunk_FUN_00de01a0(param_1 + 0xbb0,local_20,&local_30,&local_40);
  return;
}

// 00D1E5B0  FUN_00d1e5b0  size=180  [run]
undefined4 __thiscall FUN_00d1e5b0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (piVar1 = *(int **)(param_1 + 0x1c); piVar1 != *(int **)(param_1 + 0x20);
      piVar1 = (int *)piVar1[2]) {
    if (param_2 == *(int *)(*piVar1 + 4)) {
      FUN_00dd5650(&DAT_016bb2fc,(&PTR_DAT_018b3a30)[param_2]);
      return 1;
    }
  }
  param_2 = FUN_00dd29b0(0x2c,0x20,0,0);
  if (param_2 != 0) {
    iVar2 = FUN_00cc93b0(*(undefined4 *)(param_1 + 4),iVar2,param_3);
    if (iVar2 != 0) {
      cFixedList::insert_27(&param_3,param_1 + 0x20,&param_2);
      return 1;
    }
    FUN_00dd5650(&DAT_016bb2d8);
    return 0;
  }
  FUN_00dd5650(&DAT_016bb318);
  return 0;
}

