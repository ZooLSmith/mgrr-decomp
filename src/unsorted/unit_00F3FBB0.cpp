// src/unsorted/unit_00F3FBB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3FBB0..00F3FF10, 9 functions

#include "mgrr.h"

// 00F3FBB0  FUN_00f3fbb0  size=48  [run]
void __fastcall FUN_00f3fbb0(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00F3FBE0  FUN_00f3fbe0  size=53  [run]
void __fastcall FUN_00f3fbe0(int param_1)

{
  FUN_00f3b960();
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00F3FC20  FUN_00f3fc20  size=64  [run]
undefined4 __thiscall
FUN_00f3fc20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  uVar1 = FUN_00f42180(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x38) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  return uVar1;
}

// 00F3FC90  FUN_00f3fc90  size=103  [run]
void FUN_00f3fc90(void *param_1,undefined4 param_2,void *param_3)

{
  float unaff_ESI;
  float unaff_EDI;
  void *pvStack_1c;
  uint local_10 [3];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_10;
  pvStack_1c = param_3;
  D3DXVec3TransformNormal(local_10,param_2);
  if (param_1 != param_3) {
    FID_conflict__memcpy(param_1,param_3,0x40);
  }
  *(float *)((int)param_1 + 0x30) = *(float *)((int)param_1 + 0x30) + (float)pvStack_1c;
  *(float *)((int)param_1 + 0x34) = unaff_EDI + *(float *)((int)param_1 + 0x34);
  *(float *)((int)param_1 + 0x38) = *(float *)((int)param_1 + 0x38) + unaff_ESI;
  __security_check_cookie(local_10[0] ^ (uint)&pvStack_1c);
  return;
}

// 00F3FD00  FUN_00f3fd00  size=285  [run]
void __thiscall FUN_00f3fd00(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  param_1[1] = *param_1;
  *param_1 = param_2 * param_1[2] + *param_1;
  param_1[2] = param_1[3] * param_2 + param_1[2];
  if (6.2831855 < *param_1) {
    fVar1 = *param_1;
    do {
      param_1[1] = fVar1;
      fVar1 = fVar1 - 6.2831855;
    } while (6.2831855 < fVar1);
    *param_1 = fVar1;
  }
  if (*param_1 < 0.0) {
    fVar1 = *param_1;
    do {
      param_1[1] = fVar1;
      fVar1 = fVar1 + 6.2831855;
    } while (fVar1 < 0.0);
    *param_1 = fVar1;
  }
  fVar1 = param_1[5] * param_2 + param_1[4];
  param_1[4] = fVar1;
  if (param_2 == 1.0) {
    param_1[4] = fVar1 * param_1[6];
    return;
  }
  fVar2 = param_1[6];
  if (fVar2 < 2.0) {
    param_1[4] = fVar1 * (fVar2 / ((param_2 - fVar2 * param_2) + fVar2));
    return;
  }
  fVar3 = (float10)FUN_00fdc1f0();
  param_1[4] = fVar1 * (float)fVar3;
  return;
}

// 00F3FE20  FUN_00f3fe20  size=60  [run]
void __thiscall FUN_00f3fe20(int *param_1,undefined4 param_2)

{
  if (*param_1 != 0) {
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
  }
  return;
}

// 00F3FE60  FUN_00f3fe60  size=60  [run]
void __thiscall FUN_00f3fe60(int *param_1,undefined4 param_2)

{
  if (*param_1 != 0) {
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
  }
  return;
}

// 00F3FEA0  FUN_00f3fea0  size=60  [run]
void __thiscall FUN_00f3fea0(int *param_1,undefined4 param_2)

{
  if (*param_1 != 0) {
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
    FUN_00f3fd00(param_2);
  }
  return;
}

// 00F3FF10  FUN_00f3ff10  size=25  [run]
int __fastcall FUN_00f3ff10(int param_1)

{
  FUN_00ddbbb0();
  *(undefined1 *)(param_1 + 0x10a) = 0;
  return param_1;
}

