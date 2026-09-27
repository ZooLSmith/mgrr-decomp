// src/unsorted/unit_00CDD260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDD260..00CDD410, 2 functions

#include "mgrr.h"

// 00CDD260  FUN_00cdd260  size=424  [run]
void __fastcall FUN_00cdd260(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  pfVar1 = (float *)FUN_00cc46c0(8);
  *(float *)(param_1 + 0x1b4) = *pfVar1 + *(float *)(param_1 + 0x1b4);
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + (int)pfVar1[3];
  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + (int)pfVar1[5];
  fVar4 = *(float *)(param_1 + 0x1c0);
  if ((int)*(float *)(param_1 + 0x1c0) < (int)pfVar1[4]) {
    fVar4 = pfVar1[4];
  }
  *(float *)(param_1 + 0x1c0) = fVar4;
  *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + (int)pfVar1[0xb];
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + (int)pfVar1[6];
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + (int)pfVar1[7];
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + (int)pfVar1[8];
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + (int)pfVar1[10];
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + (int)pfVar1[0xc];
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + (int)pfVar1[0xd];
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + (int)pfVar1[0xe];
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + (int)pfVar1[0xf];
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + (int)pfVar1[0x10];
  *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + (int)pfVar1[0x11];
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + (int)pfVar1[0x12];
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + (int)pfVar1[0x13];
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + (int)pfVar1[0x14];
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + (int)pfVar1[9];
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + (int)pfVar1[2];
  FUN_00cc47b0();
  piVar2 = &DAT_01b71234;
  do {
    if (*piVar2 != 1) goto LAB_00cdd361;
    piVar2 = piVar2 + 0x30;
  } while ((int)piVar2 < 0x1b715f4);
  *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x400000;
  *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
LAB_00cdd361:
  fVar4 = *(float *)(param_1 + 0x1b4) * 0.016666668;
  if (fVar4 < 40.0 != (fVar4 == 40.0)) {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x800000;
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  iVar6 = 0;
  if (DAT_01b76014 != 0) {
    iVar6 = DAT_01b75ff4;
  }
  iVar5 = 0;
  piVar2 = &DAT_01b71214;
  do {
    iVar3 = FUN_009c4bf0();
    if (iVar5 != iVar3) {
      iVar6 = iVar6 + *piVar2;
    }
    piVar2 = piVar2 + 0x30;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x1b715d4);
  if (99 < iVar6) {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x1000000;
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  if ((*(int *)(param_1 + 0x214) != -1) && ((&DAT_01b71234)[*(int *)(param_1 + 0x214) * 0x30] == 0))
  {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  return;
}

// 00CDD410  FUN_00cdd410  size=386  [run]
void __fastcall FUN_00cdd410(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  
  pfVar1 = (float *)FUN_00cc46c0(9);
  *(float *)(param_1 + 0x1b4) = *pfVar1 + *(float *)(param_1 + 0x1b4);
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + (int)pfVar1[3];
  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + (int)pfVar1[5];
  fVar3 = *(float *)(param_1 + 0x1c0);
  if ((int)*(float *)(param_1 + 0x1c0) < (int)pfVar1[4]) {
    fVar3 = pfVar1[4];
  }
  *(float *)(param_1 + 0x1c0) = fVar3;
  *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + (int)pfVar1[0xb];
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + (int)pfVar1[6];
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + (int)pfVar1[7];
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + (int)pfVar1[8];
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + (int)pfVar1[10];
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + (int)pfVar1[0x2b];
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + (int)pfVar1[0xc];
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + (int)pfVar1[0xd];
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + (int)pfVar1[0xe];
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + (int)pfVar1[0xf];
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + (int)pfVar1[0x10];
  *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + (int)pfVar1[0x11];
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + (int)pfVar1[0x12];
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + (int)pfVar1[0x13];
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + (int)pfVar1[0x14];
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + (int)pfVar1[9];
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + (int)pfVar1[2];
  FUN_00cc47b0();
  piVar2 = &DAT_01b715f4;
  do {
    if (*piVar2 != 1) goto LAB_00cdd520;
    piVar2 = piVar2 + 0x30;
  } while ((int)piVar2 < 0x1b719b4);
  *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x2000000;
  *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
LAB_00cdd520:
  fVar3 = *(float *)(param_1 + 0x1b4) * 0.016666668;
  if (fVar3 < 40.0 != (fVar3 == 40.0)) {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x4000000;
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  if (0x1d < *(int *)(param_1 + 0x204)) {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 0x8000000;
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  if ((*(int *)(param_1 + 0x214) != -1) && ((&DAT_01b715f4)[*(int *)(param_1 + 0x214) * 0x30] == 0))
  {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  return;
}

