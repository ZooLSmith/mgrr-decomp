// src/unsorted/unit_00ED8880.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8880..00ED89F0, 2 functions

#include "mgrr.h"

// 00ED8880  FUN_00ed8880  size=356  [run]
void __fastcall FUN_00ed8880(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x4b8) != 0) && (uVar3 = 0, *(int *)(param_1 + 0x450) != 0)) {
    iVar2 = 0;
    do {
      fVar4 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4ac),*(undefined4 *)(param_1 + 0x4ac));
      fVar5 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b0));
      fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b4));
      iVar1 = *(int *)(param_1 + 0x4a4);
      *(float *)(iVar1 + iVar2) = (float)fVar4;
      *(float *)(iVar1 + 4 + iVar2) = (float)fVar5;
      *(float *)(iVar1 + 8 + iVar2) = (float)fVar6;
      fVar4 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4ac),*(undefined4 *)(param_1 + 0x4ac));
      fVar5 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b0));
      fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b4));
      iVar1 = *(int *)(param_1 + 0x4a8);
      uVar3 = uVar3 + 1;
      *(float *)(iVar1 + iVar2) = (float)fVar4;
      iVar2 = iVar2 + 0xc;
      *(float *)(iVar1 + -8 + iVar2) = (float)fVar5;
      *(float *)(iVar1 + -4 + iVar2) = (float)fVar6;
    } while (uVar3 < *(uint *)(param_1 + 0x450));
  }
  return;
}

// 00ED89F0  FUN_00ed89f0  size=244  [run]
void __fastcall FUN_00ed89f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((*(int *)(param_1 + 0x4b8) != 0) && (uVar3 = 0, *(int *)(param_1 + 0x450) != 0)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x4a8);
      iVar2 = *(int *)(param_1 + 0x4a4);
      *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar2 + 4 + iVar4) = *(undefined4 *)(iVar1 + 4 + iVar4);
      *(undefined4 *)(iVar2 + 8 + iVar4) = *(undefined4 *)(iVar1 + 8 + iVar4);
      fVar5 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4ac),*(undefined4 *)(param_1 + 0x4ac));
      fVar6 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b0));
      fVar7 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b4));
      iVar1 = *(int *)(param_1 + 0x4a8);
      uVar3 = uVar3 + 1;
      *(float *)(iVar1 + iVar4) = (float)fVar5;
      iVar4 = iVar4 + 0xc;
      *(float *)(iVar1 + -8 + iVar4) = (float)fVar6;
      *(float *)(iVar1 + -4 + iVar4) = (float)fVar7;
    } while (uVar3 < *(uint *)(param_1 + 0x450));
  }
  return;
}

