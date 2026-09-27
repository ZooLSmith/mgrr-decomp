// src/unsorted/unit_0093FBB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093FBB0..0093FC70, 2 functions

#include "types.h"

// 0093FBB0  FUN_0093fbb0  size=184  [run]
void __fastcall FUN_0093fbb0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar3 = FUN_00d466f0();
  if (((iVar3 != 0) && (*(int *)(param_1 + 0x70) == 0)) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar3 = iVar6 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 0x28;
    bVar2 = false;
    if (iVar6 != iVar3) {
      do {
        iVar4 = FUN_00a81330();
        if ((iVar4 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
LAB_0093fc22:
          bVar2 = true;
        }
        else {
          puVar7 = &DAT_01be9c78;
          (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
          iVar4 = FUN_00dd6d80(puVar7);
          if (iVar4 == 0) goto LAB_0093fc22;
        }
        iVar6 = iVar6 + 0x28;
      } while (iVar6 != iVar3);
      if ((bVar2) && (0.0 < *(float *)(param_1 + 8))) {
        fVar1 = *(float *)(param_1 + 8) - 1.0;
        *(float *)(param_1 + 8) = fVar1;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          *(undefined4 *)(param_1 + 8) = 0;
          FUN_0093fa20();
          return;
        }
      }
    }
  }
  return;
}

// 0093FC70  FUN_0093fc70  size=325  [run]
void __thiscall FUN_0093fc70(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  *param_2 = 0.0;
  iVar2 = *(int *)(param_1 + 0x10);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  iVar6 = *(int *)(iVar2 + 4);
  iVar2 = iVar6 + *(int *)(iVar2 + 8) * 0x28;
  for (; iVar6 != iVar2; iVar6 = iVar6 + 0x28) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar7 = &DAT_01b35300;
      (**(code **)(*piVar4 + 4))(&DAT_01b35300);
      iVar3 = FUN_00dd6d80(puVar7);
      if (iVar3 == 0) {
        *param_2 = *param_2 + (float)piVar4[0x10];
        param_2[1] = (float)piVar4[0x11] + param_2[1];
        param_2[2] = (float)piVar4[0x12] + param_2[2];
        fVar1 = (float)piVar4[0x13];
      }
      else {
        FUN_005d9b40(auStack_30);
        pfVar5 = (float *)FUN_005d9b40(auStack_20);
        *param_2 = *pfVar5 + *param_2;
        param_2[1] = pfVar5[1] + param_2[1];
        param_2[2] = pfVar5[2] + param_2[2];
        fVar1 = pfVar5[3];
      }
      param_2[3] = fVar1 + param_2[3];
    }
  }
  fVar1 = (float)*(int *)(*(int *)(param_1 + 0x10) + 8);
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *param_2 = *param_2 / fVar1;
  param_2[1] = param_2[1] / fVar1;
  param_2[2] = param_2[2] / fVar1;
  param_2[3] = param_2[3] / fVar1;
  return;
}

