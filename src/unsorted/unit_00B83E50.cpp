// src/unsorted/unit_00B83E50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83E50..00B849E0, 19 functions

#include "mgrr.h"

// 00B83E50  FUN_00b83e50  size=69  [run]
undefined4 __fastcall FUN_00b83e50(int param_1)

{
  if ((((*(int *)(param_1 + 0x2f4) == 0) && (*(int *)(param_1 + 0x2f8) == 0)) &&
      (*(int *)(param_1 + 0x2fc) == 0)) &&
     (((*(int *)(param_1 + 0x300) == 0 && (*(int *)(param_1 + 0x304) < 1)) &&
      (*(float *)(param_1 + 0x5d8) <= 0.0)))) {
    return 1;
  }
  return 0;
}

// 00B83EA0  FUN_00b83ea0  size=53  [run]
void __thiscall FUN_00b83ea0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x38c) != 0) {
    FUN_005edc60(param_2);
  }
  if (*(int *)(param_1 + 0x390) != 0) {
    FUN_005edc60(param_2);
  }
  return;
}

// 00B83EE0  FUN_00b83ee0  size=202  [run]
undefined4 FUN_00b83ee0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_2 - *param_4;
  fVar2 = param_2[1] - param_4[1];
  fVar3 = param_2[2] - param_4[2];
  fVar1 = param_3[2] * fVar3 + *param_3 * fVar7 + param_3[1] * fVar2;
  fVar7 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) - param_5 * param_5;
  if ((fVar7 <= 0.0) || (fVar1 <= 0.0)) {
    fVar7 = fVar1 * fVar1 - fVar7;
    if (0.0 <= fVar7) {
      fVar7 = -fVar1 - SQRT(fVar7);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      fVar6 = param_2[3];
      *param_1 = *param_2 + *param_3 * fVar7;
      param_1[1] = fVar4 + fVar1 * fVar7;
      param_1[2] = fVar2 * fVar7 + fVar5;
      param_1[3] = fVar6 + fVar3 * fVar7;
      return 1;
    }
  }
  return 0;
}

// 00B83FB0  FUN_00b83fb0  size=142  [run]
undefined4 FUN_00b83fb0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1 - *param_3;
  fVar3 = param_1[1] - param_3[1];
  fVar4 = param_1[2] - param_3[2];
  fVar2 = (fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1) - param_4 * param_4;
  if (fVar2 <= 0.0) {
    return 1;
  }
  fVar1 = param_2[1] * fVar3 + *param_2 * fVar1 + param_2[2] * fVar4;
  if ((fVar1 <= 0.0) && (0.0 <= fVar1 * fVar1 - fVar2)) {
    return 1;
  }
  return 0;
}

// 00B84230  FUN_00b84230  size=120  [run]
undefined4 __thiscall FUN_00b84230(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x120,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0x120,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00B842F0  FUN_00b842f0  size=118  [run]
undefined4 __thiscall FUN_00b842f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 << 5,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 << 5,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00B84400  FUN_00b84400  size=123  [run]
undefined4 __thiscall FUN_00b84400(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x18,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0x18,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00B84490  FUN_00b84490  size=109  [run]
int __thiscall FUN_00b84490(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x18;
      iVar3 = param_2;
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        *puVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18 + iVar2);
        puVar1[1] = puVar1[7];
        puVar1[2] = puVar1[8];
        puVar1[3] = puVar1[9];
        puVar1[4] = puVar1[10];
        puVar1[5] = puVar1[0xb];
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar2 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar2 = param_2;
    }
    return iVar2;
  }
  return -1;
}

// 00B84510  FUN_00b84510  size=42  [run]
uint FUN_00b84510(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b352c0;
  (**(code **)(*param_1 + 4))(&DAT_01b352c0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B84570  FUN_00b84570  size=42  [run]
uint FUN_00b84570(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b14;
  (**(code **)(*param_1 + 4))(&DAT_01b34b14);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B845D0  FUN_00b845d0  size=67  [run]
undefined4 * __thiscall FUN_00b845d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  FUN_00a7c940(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}

// 00B84620  FUN_00b84620  size=67  [run]
undefined4 * __thiscall FUN_00b84620(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  FUN_00a7c960(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}

// 00B847B0  FUN_00b847b0  size=66  [run]
int __fastcall FUN_00b847b0(int param_1)

{
  FUN_004105d0();
  FUN_00a7c930();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return param_1;
}

// 00B84830  FUN_00b84830  size=52  [run]
void __fastcall FUN_00b84830(int param_1)

{
  FUN_00a9f3c0(param_1 + 0x494,4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  return;
}

// 00B84870  FUN_00b84870  size=52  [run]
void __fastcall FUN_00b84870(int param_1)

{
  FUN_00a9f3c0(param_1 + 0x494,5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  return;
}

// 00B848B0  FUN_00b848b0  size=52  [run]
void __fastcall FUN_00b848b0(int param_1)

{
  FUN_00a9f3c0(param_1 + 0x494,6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  return;
}

// 00B848F0  FUN_00b848f0  size=52  [run]
void __fastcall FUN_00b848f0(int param_1)

{
  FUN_00a9f3c0(param_1 + 0x494,7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  return;
}

// 00B84980  FUN_00b84980  size=84  [run]
void __fastcall FUN_00b84980(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 4), iVar3 != *(int *)(iVar1 + 8) * 0x50 + iVar3)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x1c))();
      }
      iVar3 = iVar3 + 0x50;
    } while (iVar3 != *(int *)(*param_1 + 8) * 0x50 + *(int *)(*param_1 + 4));
  }
  return;
}

// 00B849E0  FUN_00b849e0  size=84  [run]
void __fastcall FUN_00b849e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 4), iVar3 != *(int *)(iVar1 + 8) * 0x50 + iVar3)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
      iVar3 = iVar3 + 0x50;
    } while (iVar3 != *(int *)(*param_1 + 8) * 0x50 + *(int *)(*param_1 + 4));
  }
  return;
}

