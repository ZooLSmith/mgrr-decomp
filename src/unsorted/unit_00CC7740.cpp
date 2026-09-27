// src/unsorted/unit_00CC7740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC7740..00CC7D30, 4 functions

#include "types.h"

// 00CC7740  FUN_00cc7740  size=486  [run]
undefined4 __thiscall FUN_00cc7740(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  if (((*(uint *)(param_1 + 0x80) <= param_2) ||
      (piVar5 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar5 == (int *)0x0)
      ) || (iVar3 = (**(code **)(*piVar5 + 8))(), iVar3 != 1)) {
    piVar5 = (int *)0x0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar3 = param_2 * 0x400 + 0x50 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar3 = 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar4 = param_2 * 0x400 + 0x2a0 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar4 = 0;
  }
  if (((piVar5 == (int *)0x0) || (iVar3 == 0)) || (iVar4 == 0)) {
    return 0;
  }
  fVar1 = (float)piVar5[1] *
          *(float *)(iVar3 + 0x10) *
          SQRT(*(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
               *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60) +
               *(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68));
  fVar2 = SQRT(*(float *)(iVar4 + 0x74) * *(float *)(iVar4 + 0x74) +
               *(float *)(iVar4 + 0x70) * *(float *)(iVar4 + 0x70) +
               *(float *)(iVar4 + 0x78) * *(float *)(iVar4 + 0x78)) * *(float *)(iVar3 + 0x14) *
          (float)piVar5[2];
  *param_3 = *(float *)(iVar4 + 0x90);
  param_3[1] = *(float *)(iVar4 + 0x94);
  param_3[2] = *(float *)(iVar4 + 0x90);
  param_3[3] = *(float *)(iVar4 + 0x94);
  iVar3 = piVar5[3];
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        *param_3 = *param_3 - fVar1;
      }
      goto LAB_00cc787b;
    }
    fVar1 = fVar1 * 0.5;
    *param_3 = *param_3 - fVar1;
  }
  param_3[2] = param_3[2] + fVar1;
LAB_00cc787b:
  iVar3 = piVar5[4];
  if (iVar3 == 0) {
    param_3[3] = fVar2 + param_3[3];
  }
  else if (iVar3 == 1) {
    param_3[1] = param_3[1] - fVar2 * 0.5;
    param_3[3] = fVar2 * 0.5 + param_3[3];
  }
  else if (iVar3 == 2) {
    param_3[1] = param_3[1] - fVar2;
  }
  iVar3 = FUN_00f98a90();
  *param_3 = *param_3 / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[1] = param_3[1] / ((float)iVar3 * 0.0013888889);
  iVar3 = FUN_00f98a90();
  param_3[2] = param_3[2] / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[3] = param_3[3] / ((float)iVar3 * 0.0013888889);
  return 1;
}

// 00CC7930  FUN_00cc7930  size=505  [run]
undefined4 __thiscall FUN_00cc7930(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  if (((*(uint *)(param_1 + 0x80) <= param_2) ||
      (piVar5 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar5 == (int *)0x0)
      ) || (iVar3 = (**(code **)(*piVar5 + 8))(), iVar3 != 2)) {
    piVar5 = (int *)0x0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar3 = param_2 * 0x400 + 0x50 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar3 = 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar4 = param_2 * 0x400 + 0x2a0 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar4 = 0;
  }
  if (((piVar5 == (int *)0x0) || (iVar3 == 0)) || (iVar4 == 0)) {
    return 0;
  }
  fVar1 = SQRT(*(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
               *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60) +
               *(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68)) * (float)piVar5[1];
  fVar2 = SQRT(*(float *)(iVar4 + 0x74) * *(float *)(iVar4 + 0x74) +
               *(float *)(iVar4 + 0x70) * *(float *)(iVar4 + 0x70) +
               *(float *)(iVar4 + 0x78) * *(float *)(iVar4 + 0x78)) * (float)piVar5[2];
  *param_3 = *(float *)(iVar4 + 0x90);
  param_3[1] = *(float *)(iVar4 + 0x94);
  param_3[2] = *(float *)(iVar4 + 0x90);
  param_3[3] = *(float *)(iVar4 + 0x94);
  iVar3 = piVar5[7];
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        *param_3 = *param_3 - fVar1;
      }
      goto LAB_00cc7a78;
    }
    fVar1 = fVar1 * 0.5;
    *param_3 = *param_3 - fVar1;
  }
  param_3[2] = param_3[2] + fVar1;
LAB_00cc7a78:
  iVar3 = piVar5[8];
  if (iVar3 == 0) {
    param_3[3] = fVar2 + param_3[3];
  }
  else if (iVar3 == 1) {
    param_3[1] = param_3[1] - fVar2 * 0.5;
    param_3[3] = fVar2 * 0.5 + param_3[3];
  }
  else if (iVar3 == 2) {
    param_3[1] = param_3[1] - fVar2;
  }
  iVar3 = FUN_00f98a90();
  *param_3 = *param_3 / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[1] = param_3[1] / ((float)iVar3 * 0.0013888889);
  iVar3 = FUN_00f98a90();
  param_3[2] = param_3[2] / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[3] = param_3[3] / ((float)iVar3 * 0.0013888889);
  return 1;
}

// 00CC7B30  FUN_00cc7b30  size=505  [run]
undefined4 __thiscall FUN_00cc7b30(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  if (((*(uint *)(param_1 + 0x80) <= param_2) ||
      (piVar5 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(param_1 + 0x7c)), piVar5 == (int *)0x0)
      ) || (iVar3 = (**(code **)(*piVar5 + 8))(), iVar3 != 8)) {
    piVar5 = (int *)0x0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar3 = param_2 * 0x400 + 0x50 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar3 = 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    iVar4 = param_2 * 0x400 + 0x2a0 + *(int *)(param_1 + 0x7c);
  }
  else {
    iVar4 = 0;
  }
  if (((piVar5 == (int *)0x0) || (iVar3 == 0)) || (iVar4 == 0)) {
    return 0;
  }
  fVar1 = SQRT(*(float *)(iVar4 + 100) * *(float *)(iVar4 + 100) +
               *(float *)(iVar4 + 0x60) * *(float *)(iVar4 + 0x60) +
               *(float *)(iVar4 + 0x68) * *(float *)(iVar4 + 0x68)) * (float)piVar5[1];
  fVar2 = SQRT(*(float *)(iVar4 + 0x74) * *(float *)(iVar4 + 0x74) +
               *(float *)(iVar4 + 0x70) * *(float *)(iVar4 + 0x70) +
               *(float *)(iVar4 + 0x78) * *(float *)(iVar4 + 0x78)) * (float)piVar5[2];
  *param_3 = *(float *)(iVar4 + 0x90);
  param_3[1] = *(float *)(iVar4 + 0x94);
  param_3[2] = *(float *)(iVar4 + 0x90);
  param_3[3] = *(float *)(iVar4 + 0x94);
  iVar3 = piVar5[7];
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        *param_3 = *param_3 - fVar1;
      }
      goto LAB_00cc7c78;
    }
    fVar1 = fVar1 * 0.5;
    *param_3 = *param_3 - fVar1;
  }
  param_3[2] = param_3[2] + fVar1;
LAB_00cc7c78:
  iVar3 = piVar5[8];
  if (iVar3 == 0) {
    param_3[3] = fVar2 + param_3[3];
  }
  else if (iVar3 == 1) {
    param_3[1] = param_3[1] - fVar2 * 0.5;
    param_3[3] = fVar2 * 0.5 + param_3[3];
  }
  else if (iVar3 == 2) {
    param_3[1] = param_3[1] - fVar2;
  }
  iVar3 = FUN_00f98a90();
  *param_3 = *param_3 / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[1] = param_3[1] / ((float)iVar3 * 0.0013888889);
  iVar3 = FUN_00f98a90();
  param_3[2] = param_3[2] / ((float)iVar3 * 0.00078125);
  iVar3 = FUN_00f98aa0();
  param_3[3] = param_3[3] / ((float)iVar3 * 0.0013888889);
  return 1;
}

// 00CC7D30  FUN_00cc7d30  size=257  [run]
void __fastcall FUN_00cc7d30(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(undefined4 *)(param_1 + 0x10c) = 0xc;
  return;
}

