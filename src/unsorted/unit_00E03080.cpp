// src/unsorted/unit_00E03080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E03080..00E03A70, 14 functions

#include "mgrr.h"

// 00E03080  FUN_00e03080  size=20  [run]
void FUN_00e03080(undefined4 param_1,undefined4 param_2)

{
  FUN_00e02140(param_1,0xffffffff,param_2);
  return;
}

// 00E030A0  FUN_00e030a0  size=30  [run]
void FUN_00e030a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_00e02140(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,param_2);
  }
  return;
}

// 00E03120  FUN_00e03120  size=37  [run]
int FUN_00e03120(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,uVar1);
  }
  return uVar1 + 0x1000;
}

// 00E03150  FUN_00e03150  size=37  [run]
int FUN_00e03150(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5d0,uVar1);
  }
  return uVar1 + 0x2000;
}

// 00E03180  FUN_00e03180  size=77  [run]
int FUN_00e03180(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 * 0x10000;
  uVar1 = *param_2;
  if ((uVar2 & 0xfff0ffff) != 0) {
    FUN_00dd5650(&DAT_016ca600,*param_1);
  }
  if ((uVar1 & 0xffff0000) != 0) {
    FUN_00dd5650(&DAT_016ca5e4,*param_2);
  }
  return uVar1 + 0x20000000 + uVar2;
}

// 00E03510  FUN_00e03510  size=36  [run]
undefined4 * __fastcall FUN_00e03510(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  return param_1;
}

// 00E03680  FUN_00e03680  size=169  [run]
void FUN_00e03680(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  FUN_009df6d0();
  iVar1 = FUN_00f4b0b0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00fddccc(param_2,1000);
    local_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar2 * 4);
    _local_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar2 >> 0x20)]);
    iVar1 = FUN_00de3d80(0,&local_c);
    if (iVar1 != 0) {
      FUN_009df740();
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
  }
  FUN_009df740();
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

// 00E03730  FUN_00e03730  size=36  [run]
undefined4 * __fastcall FUN_00e03730(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  return param_1;
}

// 00E03760  FUN_00e03760  size=132  [run]
void __thiscall FUN_00e03760(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(param_1 + 4);
  if (pcVar3 != (char *)(param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc)) {
    do {
      if (*param_2 == *pcVar3) {
        iVar1 = (int)(pcVar3 + (-4 - param_1)) / 0xc;
        if (iVar1 < *(int *)(param_1 + 0x7c) + -1) {
          puVar2 = (undefined4 *)(param_1 + 8 + iVar1 * 0xc);
          iVar4 = iVar1;
          do {
            *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar2 + 2);
            *puVar2 = puVar2[3];
            puVar2[1] = puVar2[4];
            iVar4 = iVar4 + 1;
            puVar2 = puVar2 + 3;
          } while (iVar4 < *(int *)(param_1 + 0x7c) + -1);
        }
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        pcVar3 = (char *)(param_1 + 4 + iVar1 * 0xc);
      }
      else {
        pcVar3 = pcVar3 + 0xc;
      }
    } while (pcVar3 != (char *)(param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc));
  }
  return;
}

// 00E03850  FUN_00e03850  size=148  [run]
int * __thiscall FUN_00e03850(int *param_1,int *param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
  iVar2 = param_1[0x1f];
  piVar3 = param_1 + 1;
  piVar1 = param_1 + iVar2 * 3 + 1;
  piVar4 = piVar1;
  if (piVar3 != piVar1) {
    do {
      piVar4 = piVar3;
      if (*param_3 == (char)*piVar3) break;
      piVar3 = piVar3 + 3;
      piVar4 = piVar1;
    } while (piVar3 != param_1 + iVar2 * 3 + 1);
  }
  if (piVar4 != piVar1) {
    *param_2 = (int)piVar4;
    return param_2;
  }
  if (iVar2 < 10) {
    piVar3 = param_1 + iVar2 * 3 + 1;
    if (piVar3 != (int *)0x0) {
      *(char *)piVar3 = *param_3;
      piVar3[1] = local_8;
      piVar3[2] = local_4;
    }
    param_1[0x1f] = param_1[0x1f] + 1;
    *param_2 = (int)piVar3;
    return param_2;
  }
  *param_2 = *param_1;
  return param_2;
}

// 00E03940  FUN_00e03940  size=9  [run]
void __fastcall FUN_00e03940(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00E03960  FUN_00e03960  size=6  [run]
undefined4 FUN_00e03960(void)

{
  return DAT_01dd9160;
}

// 00E03970  FUN_00e03970  size=223  [run]
void __thiscall FUN_00e03970(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)thunk_FUN_00df81d0();
  fVar1 = (float)fVar4;
  if (0.0 < *(float *)(param_1 + 0x80)) {
    fVar3 = fVar1 - *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x8c) = fVar3;
    if (param_2 != 0) {
      fVar3 = fVar3 + *(float *)(param_1 + 0x84);
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      iVar2 = *(int *)(param_1 + 0x90);
      *(float *)(param_1 + 0x84) = fVar3;
      if (iVar2 < 1) goto LAB_00e03a35;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(float *)(param_1 + 0x7c) = (fVar3 / (float)iVar2) * *(float *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x84) = 0;
      param_3 = 0x3f800000;
      if (1.0 <= *(float *)(param_1 + 0x7c)) {
        if (*(float *)(param_1 + 0x7c) <= 2.0) {
          *(float *)(param_1 + 0x80) = fVar1;
          return;
        }
        *(undefined4 *)(param_1 + 0x7c) = 0x40000000;
        *(float *)(param_1 + 0x80) = fVar1;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x7c) = param_3;
    *(float *)(param_1 + 0x80) = fVar1;
    return;
  }
LAB_00e03a35:
  *(float *)(param_1 + 0x80) = fVar1;
  return;
}

// 00E03A70  FUN_00e03a70  size=22  [run]
void __thiscall FUN_00e03a70(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + 0x3c + param_2 * 0x10) = param_3;
  }
  return;
}

