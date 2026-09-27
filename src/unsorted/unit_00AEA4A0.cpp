// src/unsorted/unit_00AEA4A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AEA4A0..00AEA810, 5 functions

#include "mgrr.h"

// 00AEA4A0  FUN_00aea4a0  size=1  [run]
void FUN_00aea4a0(void)

{
  return;
}

// 00AEA4B0  FUN_00aea4b0  size=107  [run]
undefined4 __fastcall FUN_00aea4b0(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorPartsModel::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0xa50) = 0xffffffff;
  FUN_009fd240();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  return 1;
}

// 00AEA530  FUN_00aea530  size=241  [run]
void __fastcall FUN_00aea530(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar2 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar3;
  }
  BehaviorPartsModel::vf4C();
  if (*(int *)(param_1 + 0xa64) != 0) {
    FUN_00a92fb0();
    fVar5 = (float10)FUN_00e049b0();
    fVar5 = (float10)*(float *)(param_1 + 0xa60) - fVar5;
    *(float *)(param_1 + 0xa60) = (float)fVar5;
    fVar1 = (float10)0;
    if ((*(int *)(param_1 + 0xa68) == 0) && (fVar5 < fVar1)) {
      *(undefined4 *)(param_1 + 0xa68) = 1;
      *(undefined4 *)(param_1 + 0xa6c) = 0x3f800000;
    }
    if (*(int *)(param_1 + 0xa68) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xa6c);
      iVar4 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar3;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      fVar5 = (float10)*(float *)(param_1 + 0xa6c) - (float10)0.016666668;
      *(float *)(param_1 + 0xa6c) = (float)fVar5;
      if (fVar5 < fVar1 != (fVar5 == fVar1)) {
        FUN_009fdde0();
        return;
      }
    }
  }
  return;
}

// 00AEA630  FUN_00aea630  size=288  [run]
void __thiscall FUN_00aea630(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  FUN_00acf8b0(param_2,1);
  thunk_FUN_00a8c480();
  if (param_3 == 1) {
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"front"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    puVar7 = &DAT_016a0500;
  }
  else {
    if (param_3 != 2) goto LAB_00aea707;
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a04f8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    puVar7 = &DAT_016a04f4;
  }
  FUN_00a8c420(0,puVar7);
LAB_00aea707:
  FUN_00a7c8a0();
  iVar6 = *param_1;
  uVar4 = FUN_009f8b40();
  (**(code **)(iVar6 + 0x3c))(uVar4);
  param_1[0x298] = 0x44160000;
  param_1[0x299] = 1;
  FUN_00e5e0c0("em0200_se_dmg_spark",param_1,0xffffffff,0);
  return;
}

// 00AEA810  FUN_00aea810  size=140  [run]
void __fastcall FUN_00aea810(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00a9e290(&DAT_016a0504,0,0,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00a9e290(&DAT_016a050c,0,0,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

