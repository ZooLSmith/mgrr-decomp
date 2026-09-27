// src/unsorted/unit_00A980D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A980D0..00A98280, 4 functions

#include "types.h"

// 00A980D0  FUN_00a980d0  size=216  [run]
undefined4
FUN_00a980d0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 - *param_2;
  fVar3 = param_3[2] - param_2[2];
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  if ((fVar2 < param_5) && (-param_5 < fVar2)) {
    *param_1 = *param_3;
    param_1[2] = param_3[2];
    return 1;
  }
  fVar1 = fVar1 * param_4;
  param_4 = param_4 * fVar3;
  fVar2 = SQRT(fVar1 * fVar1 + param_4 * param_4);
  if (param_6 < fVar2) {
    fVar1 = fVar1 * (param_6 / fVar2);
    param_4 = param_4 * (param_6 / fVar2);
  }
  if (param_5 <= fVar2) {
    *param_1 = fVar1 + *param_2;
    param_1[2] = param_4 + param_2[2];
    return 0;
  }
  *param_1 = fVar1 * (param_5 / fVar2) + *param_2;
  param_1[2] = (param_5 / fVar2) * param_4 + param_2[2];
  return 0;
}

// 00A981B0  FUN_00a981b0  size=102  [run]
undefined4
FUN_00a981b0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6)

{
  bool bVar1;
  
  param_4 = (*param_3 - *param_2) * param_4;
  if (param_4 * param_4 <= param_6 * param_6) {
    if (param_4 * param_4 < param_5 * param_5) {
      *param_1 = *param_3;
      return 1;
    }
  }
  else {
    bVar1 = param_4 < 0.0;
    param_4 = param_6;
    if (bVar1) {
      param_4 = -param_6;
    }
  }
  *param_1 = param_4 + *param_2;
  return 0;
}

// 00A98220  FUN_00a98220  size=89  [run]
undefined4 __thiscall FUN_00a98220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 == *(int *)(param_2 + 0x14)) {
      uVar3 = 1;
      goto LAB_00a9824c;
    }
  }
  uVar3 = 0;
LAB_00a9824c:
  if (*(int *)(param_1 + 0x370) == 0) {
    return 0;
  }
  uVar3 = FUN_00a1b020(param_1,uVar3,*(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf0)
                       ,0);
  return uVar3;
}

// 00A98280  FUN_00a98280  size=102  [run]
void __fastcall FUN_00a98280(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4c0);
  if ((uVar1 & 0x20000) == 0) {
    return;
  }
  if ((uVar1 & 0x40000) != 0) {
    *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + 1;
    if (6 < *(int *)(param_1 + 0x834)) {
      *(uint *)(param_1 + 0x4c0) = uVar1 & 0xfff8ffff;
      return;
    }
    uVar2 = (*(int *)(param_1 + 0x834) + -1) / 2 & 0x80000001;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar3) {
      *(uint *)(param_1 + 0x4c0) = uVar1 & 0xfffeffff;
      return;
    }
  }
  *(uint *)(param_1 + 0x4c0) = uVar1 | 0x10000;
  return;
}

