// lib/havok/unit_0108C750.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0108C750..010A8EC0, 544 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkgpMesh.h"

// 0108C750  FUN_0108c750  size=59  [run]
void __thiscall FUN_0108c750(int *param_1,undefined1 *param_2,int *param_3)

{
  if (((*param_1 != *param_3) || (param_1[1] != param_3[1])) &&
     ((param_1[1] != *param_3 || (*param_1 != param_3[1])))) {
    *param_2 = 0;
    return;
  }
  *param_2 = 1;
  return;
}

// 0108C790  FUN_0108c790  size=42  [run]
void __thiscall FUN_0108c790(int *param_1,undefined1 *param_2,int *param_3)

{
  if ((*param_1 == *param_3) && (param_1[1] == param_3[1])) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 0108C7F0  FUN_0108c7f0  size=15  [run]
int __thiscall FUN_0108c7f0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0108C810  FUN_0108c810  size=63  [run]
int __thiscall FUN_0108c810(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 8);
    do {
      if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 2;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0108C850  FUN_0108c850  size=83  [run]
int __thiscall FUN_0108c850(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(param_3 * 0x20 + *param_1);
    do {
      if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) {
        return param_3;
      }
      if ((piVar1[1] == *param_2) && (*piVar1 == param_2[1])) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 8;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0108C8D0  FUN_0108c8d0  size=32  [run]
void __thiscall FUN_0108c8d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0108C920  FUN_0108c920  size=25  [run]
void __thiscall FUN_0108c920(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 0108C940  FUN_0108c940  size=11  [run]
int FUN_0108c940(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0108C950  FUN_0108c950  size=28  [run]
void __thiscall FUN_0108c950(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0108C970  FUN_0108c970  size=11  [run]
int FUN_0108c970(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0108C980  FUN_0108c980  size=11  [run]
int FUN_0108c980(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0108C9E0  FUN_0108c9e0  size=99  [run]
undefined4 FUN_0108c9e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (3 < (int)param_1[1]) {
    hkgpConvexHull::hkgpConvexHull();
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = FUN_01077490();
    iVar4 = FUN_010798d0(uVar2,uVar1,uVar3);
    if (iVar4 != -1) {
      FUN_01078920(1,param_2);
      hkBaseObject::hkBaseObject_27();
      return 0;
    }
    hkBaseObject::hkBaseObject_27();
  }
  return 1;
}

// 0108CD80  FUN_0108cd80  size=124  [run]
void FUN_0108cd80(int *param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)(*param_1 + param_2 * 0x10);
  pfVar1 = (float *)(*param_1 + param_3 * 0x10);
  fVar3 = pfVar1[2] * pfVar2[1] - pfVar1[1] * pfVar2[2];
  fVar4 = *pfVar1 * pfVar2[2] - pfVar1[2] * *pfVar2;
  fVar5 = pfVar1[1] * *pfVar2 - *pfVar1 * pfVar2[1];
  fVar6 = pfVar1[3] * pfVar2[3] - pfVar1[3] * pfVar2[3];
  *param_5 = fVar3;
  param_5[1] = fVar4;
  param_5[2] = fVar5;
  param_5[3] = fVar6;
  pfVar2 = (float *)(param_4 * 0x10 + *param_1);
  if (0.0 < pfVar2[2] * fVar5 + pfVar2[1] * fVar4 + *pfVar2 * fVar3) {
    *param_5 = -fVar3;
    param_5[1] = -fVar4;
    param_5[2] = -fVar5;
    param_5[3] = -fVar6;
  }
  return;
}

// 0108CE00  FUN_0108ce00  size=255  [run]
void FUN_0108ce00(float param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float *local_8;
  
  puVar4 = (uint *)param_2;
  pfVar6 = (float *)*param_2;
  iVar9 = (int)param_2[1] - 1;
  local_8 = pfVar6;
  if (iVar9 < 0) {
LAB_0108ce90:
    uVar10 = (int)((int)local_8 - *puVar4) >> 4;
    *param_3 = uVar10;
    if ((int)(puVar4[2] & 0x3fffffff) < (int)uVar10) {
      uVar5 = (puVar4[2] & 0x3fffffff) * 2;
      if ((int)uVar5 <= (int)uVar10) {
        uVar5 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,puVar4,uVar5,0x10);
    }
    puVar4[1] = uVar10;
    return;
  }
  param_2 = pfVar6 + -4;
LAB_0108ce33:
  if ((float *)*puVar4 <= param_2) {
    pfVar7 = param_2;
    do {
      if (*pfVar7 <= *pfVar6 - 0.01 && *pfVar6 - 0.01 != *pfVar7) break;
      if ((pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]) +
          (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
          (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) < param_1) {
        iVar8 = iVar9 + -1;
        if (iVar8 < 0) goto LAB_0108ce87;
        goto LAB_0108ced4;
      }
      pfVar7 = pfVar7 + -4;
    } while ((float *)*puVar4 <= pfVar7);
  }
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[3];
  param_2 = param_2 + 4;
  *local_8 = *pfVar6;
  local_8[1] = fVar1;
  local_8[2] = fVar2;
  local_8[3] = fVar3;
  local_8 = local_8 + 4;
  goto LAB_0108ce87;
  while( true ) {
    pfVar6 = pfVar6 + 4;
    iVar9 = iVar9 + -1;
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) break;
LAB_0108ced4:
    if (param_1 <=
        (pfVar7[2] - pfVar6[6]) * (pfVar7[2] - pfVar6[6]) +
        (pfVar7[1] - pfVar6[5]) * (pfVar7[1] - pfVar6[5]) +
        (*pfVar7 - pfVar6[4]) * (*pfVar7 - pfVar6[4])) break;
  }
LAB_0108ce87:
  pfVar6 = pfVar6 + 4;
  iVar9 = iVar9 + -1;
  if (iVar9 < 0) goto LAB_0108ce90;
  goto LAB_0108ce33;
}

// 0108D630  FUN_0108d630  size=36  [run]
void __thiscall FUN_0108d630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return;
}

// 0108D690  FUN_0108d690  size=32  [run]
void __thiscall FUN_0108d690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0108D6B0  FUN_0108d6b0  size=60  [run]
void __thiscall FUN_0108d6b0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108D6F0  FUN_0108d6f0  size=66  [run]
void FUN_0108d6f0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0108D740  FUN_0108d740  size=40  [run]
void FUN_0108d740(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0108D770  FUN_0108d770  size=66  [run]
void FUN_0108d770(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0108D7D0  FUN_0108d7d0  size=93  [run]
void __thiscall FUN_0108d7d0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108D830  FUN_0108d830  size=67  [run]
void __thiscall FUN_0108d830(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108D880  FUN_0108d880  size=93  [run]
void __thiscall FUN_0108d880(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108D8E0  FUN_0108d8e0  size=60  [run]
void __fastcall FUN_0108d8e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108D920  FUN_0108d920  size=63  [run]
void __thiscall FUN_0108d920(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108D960  FUN_0108d960  size=94  [run]
void __thiscall FUN_0108d960(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108D9C0  FUN_0108d9c0  size=68  [run]
void __thiscall FUN_0108d9c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108DA10  FUN_0108da10  size=94  [run]
void __thiscall FUN_0108da10(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0108DA70  FUN_0108da70  size=60  [run]
void __fastcall FUN_0108da70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108DAB0  FUN_0108dab0  size=63  [run]
void __fastcall FUN_0108dab0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108DAF0  FUN_0108daf0  size=63  [run]
void __fastcall FUN_0108daf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108DB30  FUN_0108db30  size=27  [run]
void __thiscall FUN_0108db30(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 0108DB50  FUN_0108db50  size=63  [run]
void __fastcall FUN_0108db50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0108DC30  FUN_0108dc30  size=10  [run]
void FUN_0108dc30(void)

{
  return;
}

// 0108DDE0  FUN_0108dde0  size=33  [run]
void FUN_0108dde0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *param_1 = (param_2[4] - *param_2) * *param_3 + *param_2;
  param_1[1] = (fVar4 - fVar1) * fVar7 + fVar1;
  param_1[2] = (fVar5 - fVar2) * fVar8 + fVar2;
  param_1[3] = (fVar6 - fVar3) * fVar9 + fVar3;
  return;
}

// 0108DE10  FUN_0108de10  size=490  [run]
void FUN_0108de10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1[1] * 2.0 - 1.0;
  fVar1 = *param_1 * 2.0 - 1.0;
  fVar3 = fVar2 + fVar1;
  fVar4 = fVar2 - fVar1;
  if (fVar2 < 0.0) {
    if (fVar1 < 0.0) {
      if (fVar3 < -1.0) {
        fVar3 = fVar3 + 2.0;
        fVar2 = (fVar1 + 1.0) / fVar3 + 2.0;
        param_1 = (float *)0xbf800000;
      }
      else {
        fVar3 = -fVar3;
        param_1 = (float *)0x3f800000;
        fVar2 = 2.0 - fVar2 / fVar3;
      }
    }
    else if (-1.0 <= fVar4) {
      fVar3 = -fVar4;
      fVar2 = fVar1 / fVar3 + 3.0;
      param_1 = (float *)0x3f800000;
    }
    else {
      fVar3 = fVar4 + 2.0;
      fVar2 = (fVar2 + 1.0) / fVar3 + 3.0;
      param_1 = (float *)0xbf800000;
    }
  }
  else if (fVar1 < 0.0) {
    if (1.0 < fVar4) {
      fVar3 = 2.0 - fVar4;
      param_1 = (float *)0xbf800000;
      fVar2 = (1.0 - fVar2) / fVar3 + 1.0;
    }
    else {
      param_1 = (float *)0x3f800000;
      fVar2 = 1.0 - fVar1 / fVar4;
      fVar3 = fVar4;
    }
  }
  else if (1.0 < fVar3) {
    param_1 = (float *)0xbf800000;
    fVar2 = (1.0 - fVar1) / (2.0 - fVar3);
    fVar3 = 2.0 - fVar3;
  }
  else {
    param_1 = (float *)0x3f800000;
    fVar2 = fVar2 / fVar3;
  }
  if (fVar3 == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = fVar2 * 1.5707964;
  }
  fVar4 = SQRT(2.0 - fVar3 * fVar3) * fVar3;
  fVar1 = fVar2;
  FUN_01437589();
  FUN_0143743a();
  *param_2 = fVar1 * fVar4;
  param_2[1] = fVar2 * fVar4;
  param_2[2] = (1.0 - fVar3 * fVar3) * (float)param_1;
  param_2[3] = 0.0;
  return;
}

// 0108E270  FUN_0108e270  size=33  [run]
void FUN_0108e270(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_1 = (*param_3 - *param_2) * 0.5 + *param_2;
  param_1[1] = (fVar1 - fVar4) * 0.5 + fVar7;
  param_1[2] = (fVar2 - fVar5) * 0.5 + fVar8;
  param_1[3] = (fVar3 - fVar6) * 0.5 + fVar9;
  return;
}

// 0108E2A0  FUN_0108e2a0  size=36  [run]
void FUN_0108e2a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_1 = (*param_2 + *param_3 + *param_4) * 0.33333334;
  param_1[1] = (fVar1 + fVar4 + fVar7) * 0.33333334;
  param_1[2] = (fVar2 + fVar5 + fVar8) * 0.33333334;
  param_1[3] = (fVar3 + fVar6 + fVar9) * 0.33333334;
  return;
}

// 0108E2D0  FUN_0108e2d0  size=45  [run]
void FUN_0108e2d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  *param_1 = (*param_4 + *param_5 + *param_2 + *param_3) * 0.25;
  param_1[1] = (fVar1 + fVar4 + fVar7 + fVar10) * 0.25;
  param_1[2] = (fVar2 + fVar5 + fVar8 + fVar11) * 0.25;
  param_1[3] = (fVar3 + fVar6 + fVar9 + fVar12) * 0.25;
  return;
}

// 0108E300  FUN_0108e300  size=69  [run]
void FUN_0108e300(undefined4 param_1)

{
  hkgpMesh::hkgpMesh();
  FUN_010a2dc0(param_1,&DAT_01701ca0,0xffffffff,0,0);
  FUN_010238c0();
  FUN_01099f90(param_1,0);
  hkBaseObject::hkBaseObject_69();
  return;
}

// 0108E350  FUN_0108e350  size=23  [run]
void FUN_0108e350(void)

{
  return;
}

// 0108E370  FUN_0108e370  size=20  [run]
void FUN_0108e370(void)

{
  return;
}

// 0108E3A0  FUN_0108e3a0  size=420  [run]
uint FUN_0108e3a0(float *param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_1[2];
  fVar3 = *param_1;
  uVar4 = 0;
  fVar7 = 0.0;
  fVar6 = 0.0;
  fVar8 = 0.0;
  if ((fVar5 != fVar3) && (fVar3 * fVar5 <= 0.0)) {
    fVar8 = fVar5 / (fVar5 - fVar3);
    uVar4 = 4;
    if (0.0 <= fVar8) {
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
    }
    else {
      fVar8 = 0.0;
    }
  }
  fVar1 = param_1[1];
  if ((fVar3 != fVar1) && (fVar1 * fVar3 <= 0.0)) {
    uVar4 = uVar4 | 1;
    fVar7 = fVar3 / (fVar3 - fVar1);
    if (0.0 <= fVar7) {
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = 0.0;
    }
  }
  if ((fVar1 != fVar5) && (fVar1 * fVar5 <= 0.0)) {
    uVar4 = uVar4 | 2;
    fVar6 = fVar1 / (fVar1 - fVar5);
    if (0.0 <= fVar6) {
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = 0.0;
    }
  }
  if (uVar4 == 3) {
    param_2[2] = 1;
    uVar2 = 0;
    *param_2 = 0;
    param_2[1] = fVar7;
    param_2[3] = fVar6;
    fVar5 = param_1[1];
    fVar3 = fVar7;
  }
  else if (uVar4 == 5) {
    param_2[2] = 0;
    uVar2 = 2;
    *param_2 = 2;
    param_2[1] = fVar8;
    param_2[3] = fVar7;
    fVar5 = *param_1;
    fVar3 = fVar8;
    fVar6 = fVar7;
  }
  else {
    if (uVar4 != 6) {
      return 0;
    }
    param_2[2] = 2;
    uVar2 = 1;
    *param_2 = 1;
    param_2[1] = fVar6;
    param_2[3] = fVar8;
    fVar5 = param_1[2];
    fVar3 = fVar6;
    fVar6 = fVar8;
  }
  if (fVar5 * param_3 < 0.0) {
    *param_2 = param_2[2];
    param_2[1] = fVar6;
    param_2[2] = uVar2;
    param_2[3] = fVar3;
  }
  return uVar4;
}

// 0108E550  FUN_0108e550  size=41  [run]
int __thiscall FUN_0108e550(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    piVar2 = (int *)(*param_1 + 0x44);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x14;
    } while (iVar1 < param_1[1]);
  }
  return -1;
}

// 0108E580  FUN_0108e580  size=123  [run]
void __thiscall FUN_0108e580(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar2 = -1;
  iVar5 = param_1[1] + -1;
  do {
    iVar4 = iVar5 + iVar7 >> 1;
    iVar3 = iVar4;
    iVar6 = iVar5;
    if (((iVar7 < iVar5) &&
        (fVar1 = *(float *)(*param_1 + 0x40 + iVar4 * 0x50), iVar3 = iVar2, iVar6 = iVar4,
        fVar1 <= param_2)) && (iVar3 = iVar4, iVar6 = iVar5, fVar1 < param_2)) {
      iVar7 = iVar4 + 1;
      iVar3 = iVar2;
    }
    iVar2 = iVar3;
    iVar5 = iVar6;
  } while (iVar3 < 0);
  fVar1 = *(float *)(*param_1 + 0x40 + iVar3 * 0x50);
  iVar7 = *param_1 + 0x40 + iVar3 * 0x50;
  for (; (param_2 < fVar1 && (iVar3 != 0)); iVar3 = iVar3 + -1) {
    fVar1 = *(float *)(iVar7 + -0x50);
    iVar7 = iVar7 + -0x50;
  }
  return;
}

// 0108E600  FUN_0108e600  size=408  [run]
void __thiscall FUN_0108e600(int *param_1,int *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float10 extraout_ST0;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar5 = param_2[1] << 5 ^ param_2[1];
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x16 ^ uVar5;
  uVar6 = param_2[3] + param_2[4] + param_2[2];
  param_2[2] = param_2[3];
  uVar9 = (uint)((int)uVar6 < 0);
  *param_2 = *param_2 + 0x542023ab;
  uVar6 = uVar6 & 0x7fffffff;
  param_2[1] = uVar5;
  param_2[3] = uVar6;
  param_2[4] = uVar9;
  iVar8 = *param_2 + uVar5 + uVar6;
  fVar1 = (float)iVar8;
  if (iVar8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar8 = FUN_0108e580(fVar1 * 2.3283064e-10 * (float)param_1[3]);
  pfVar7 = (float *)(iVar8 * 0x50 + *param_1);
  uVar5 = uVar5 << 5 ^ uVar5;
  uVar9 = uVar6 + uVar9 + param_2[2];
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x16 ^ uVar5;
  uVar10 = uVar9 & 0x7fffffff;
  iVar8 = *param_2 + 0x542023ab + uVar5 + uVar10;
  fVar11 = (float10)iVar8;
  param_2[1] = uVar5;
  param_2[3] = uVar10;
  if (iVar8 < 0) {
    fVar11 = fVar11 + (float10)4.2949673e+09;
  }
  uVar5 = uVar5 << 5 ^ uVar5;
  fVar11 = SQRT(fVar11 * extraout_ST0);
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x16 ^ uVar5;
  param_2[2] = uVar10;
  param_2[1] = uVar5;
  uVar6 = ((int)uVar9 < 0) + uVar10 + uVar6;
  iVar8 = *param_2;
  *param_2 = iVar8 + -0x57bfb8aa;
  param_2[4] = (uint)((int)uVar6 < 0);
  uVar6 = uVar6 & 0x7fffffff;
  iVar8 = iVar8 + -0x57bfb8aa + uVar5 + uVar6;
  param_2[3] = uVar6;
  fVar12 = (float10)iVar8;
  if (iVar8 < 0) {
    fVar12 = fVar12 + (float10)4.2949673e+09;
  }
  fVar1 = (float)((float10)1 - fVar11);
  fVar3 = *pfVar7;
  fVar4 = pfVar7[1];
  fVar15 = pfVar7[2];
  fVar16 = pfVar7[3];
  *param_3 = fVar3 * fVar1;
  param_3[1] = fVar4 * fVar1;
  param_3[2] = fVar15 * fVar1;
  param_3[3] = fVar16 * fVar1;
  fVar2 = (float)(((float10)1 - fVar12 * extraout_ST0) * fVar11);
  fVar13 = fVar2 * pfVar7[4] + fVar3 * fVar1;
  fVar14 = fVar2 * pfVar7[5] + fVar4 * fVar1;
  fVar15 = fVar2 * pfVar7[6] + fVar15 * fVar1;
  fVar16 = fVar2 * pfVar7[7] + fVar16 * fVar1;
  *param_3 = fVar13;
  param_3[1] = fVar14;
  param_3[2] = fVar15;
  param_3[3] = fVar16;
  fVar1 = (float)(fVar11 * fVar12 * extraout_ST0);
  fVar2 = pfVar7[9];
  fVar3 = pfVar7[10];
  fVar4 = pfVar7[0xb];
  *param_3 = fVar1 * pfVar7[8] + fVar13;
  param_3[1] = fVar1 * fVar2 + fVar14;
  param_3[2] = fVar1 * fVar3 + fVar15;
  param_3[3] = fVar1 * fVar4 + fVar16;
  fVar1 = pfVar7[0xd];
  fVar2 = pfVar7[0xe];
  fVar3 = pfVar7[0xf];
  *param_4 = pfVar7[0xc];
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  return;
}

// 0108E890  FUN_0108e890  size=130  [run]
undefined4 FUN_0108e890(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (param_2[1] - param_1[1]) * param_3[1] + (*param_2 - *param_1) * *param_3 +
          (param_2[2] - param_1[2]) * param_3[2];
  if (1.1920929e-07 < fVar1 * fVar1) {
    *param_4 = -((param_3[2] * param_1[2] + param_3[1] * param_1[1] + *param_3 * *param_1 +
                 param_3[3]) / fVar1);
    return 1;
  }
  return 0;
}

// 0108E920  FUN_0108e920  size=300  [run]
undefined4 FUN_0108e920(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar1 = *param_3 - fVar10;
  fVar2 = param_3[1] - fVar11;
  fVar3 = param_3[2] - fVar12;
  fVar4 = *param_4 - fVar10;
  fVar6 = param_4[1] - fVar11;
  fVar8 = param_4[2] - fVar12;
  fVar5 = fVar8 * fVar2 - fVar6 * fVar3;
  fVar7 = fVar4 * fVar3 - fVar8 * fVar1;
  fVar9 = fVar6 * fVar1 - fVar4 * fVar2;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar10 = fVar10 - fVar1;
  fVar11 = fVar11 - fVar2;
  fVar12 = fVar12 - fVar3;
  fVar4 = *param_3 - fVar1;
  fVar6 = param_3[1] - fVar2;
  fVar8 = param_3[2] - fVar3;
  if (param_5 <=
      (fVar4 * fVar12 - fVar8 * fVar10) * fVar7 + (fVar8 * fVar11 - fVar6 * fVar12) * fVar5 +
      (fVar6 * fVar10 - fVar4 * fVar11) * fVar9) {
    fVar1 = *param_4 - fVar1;
    fVar2 = param_4[1] - fVar2;
    fVar3 = param_4[2] - fVar3;
    if ((param_5 <=
         (fVar2 * fVar4 - fVar1 * fVar6) * fVar9 +
         (fVar1 * fVar8 - fVar3 * fVar4) * fVar7 + (fVar3 * fVar6 - fVar2 * fVar8) * fVar5) &&
       (param_5 <=
        (fVar11 * fVar1 - fVar10 * fVar2) * fVar9 +
        (fVar10 * fVar3 - fVar12 * fVar1) * fVar7 + (fVar12 * fVar2 - fVar11 * fVar3) * fVar5)) {
      return 1;
    }
  }
  return 0;
}

// 0108EA80  FUN_0108ea80  size=78  [run]
void __thiscall FUN_0108ea80(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0108e550(param_2);
  if (iVar1 != -1) {
    param_1[1] = param_1[1] + -1;
    if (param_1[1] != iVar1) {
      puVar2 = (undefined4 *)(iVar1 * 0x50 + *param_1);
      iVar1 = (param_1[1] * 0x50 + *param_1) - (int)puVar2;
      iVar3 = 10;
      do {
        *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
        puVar2[1] = *(undefined4 *)(iVar1 + 4 + (int)puVar2);
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

// 0108EAD0  FUN_0108ead0  size=211  [run]
float10 FUN_0108ead0(float *param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar9 = *param_2 - *param_1;
  fVar10 = param_2[1] - param_1[1];
  fVar11 = param_2[2] - param_1[2];
  fVar6 = *param_3 - *param_2;
  fVar7 = param_3[1] - param_2[1];
  fVar8 = param_3[2] - param_2[2];
  fVar1 = fVar6 * fVar6;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar3 + fVar1 + fVar4;
  fVar2 = fVar6 * fVar9;
  auVar12._4_4_ = fVar2;
  auVar12._0_4_ = fVar2;
  auVar12._8_4_ = fVar2;
  auVar12._12_4_ = fVar2;
  auVar13._4_4_ = fVar3 + fVar1 + fVar4;
  auVar13._0_4_ = fVar5;
  auVar13._8_4_ = fVar3 + fVar1 + fVar4;
  auVar13._12_4_ = fVar3 + fVar1 + fVar4;
  auVar13 = rcpps(auVar12,auVar13);
  fVar1 = -((2.0 - auVar13._0_4_ * fVar5) * auVar13._0_4_ *
           (fVar7 * fVar10 + fVar2 + fVar8 * fVar11));
  *param_4 = fVar1;
  if (param_5 != '\0') {
    fVar2 = 0.0;
    if ((fVar1 < 0.0) || (fVar2 = 1.0, 1.0 < fVar1)) {
      fVar1 = fVar2;
    }
    *param_4 = fVar1;
  }
  fVar1 = *param_4;
  fVar9 = fVar1 * fVar6 + fVar9;
  fVar10 = fVar1 * fVar7 + fVar10;
  fVar11 = fVar1 * fVar8 + fVar11;
  return (float10)(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
}

// 0108EBB0  FUN_0108ebb0  size=220  [run]
float10 FUN_0108ebb0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar1 = param_2[3];
  fVar2 = param_3[3];
  fVar3 = param_1[3];
  fVar14 = *param_2 - *param_1;
  fVar15 = param_2[1] - param_1[1];
  fVar16 = param_2[2] - param_1[2];
  fVar11 = *param_3 - *param_2;
  fVar12 = param_3[1] - param_2[1];
  fVar13 = param_3[2] - param_2[2];
  fVar4 = fVar11 * fVar11;
  fVar6 = fVar12 * fVar12;
  fVar8 = fVar13 * fVar13;
  fVar10 = fVar6 + fVar4 + fVar8;
  fVar5 = fVar11 * fVar14;
  fVar7 = fVar12 * fVar15;
  fVar9 = fVar13 * fVar16;
  auVar17._0_4_ = fVar7 + fVar5 + fVar9;
  auVar17._4_4_ = fVar7 + fVar5 + fVar9;
  auVar17._8_4_ = fVar7 + fVar5 + fVar9;
  auVar17._12_4_ = fVar7 + fVar5 + fVar9;
  auVar18._4_4_ = fVar6 + fVar4 + fVar8;
  auVar18._0_4_ = fVar10;
  auVar18._8_4_ = fVar6 + fVar4 + fVar8;
  auVar18._12_4_ = fVar6 + fVar4 + fVar8;
  auVar18 = rcpps(auVar17,auVar18);
  fVar5 = (2.0 - auVar18._0_4_ * fVar10) * auVar18._0_4_ * (0.0 - auVar17._0_4_);
  fVar4 = 0.0;
  if ((0.0 <= fVar5) && (fVar4 = 1.0, fVar5 <= 1.0)) {
    fVar4 = fVar5;
  }
  fVar14 = fVar4 * fVar11 + fVar14;
  fVar15 = fVar4 * fVar12 + fVar15;
  fVar16 = fVar4 * fVar13 + fVar16;
  *param_4 = fVar14 * -1.0;
  param_4[1] = fVar15 * -1.0;
  param_4[2] = fVar16 * -1.0;
  param_4[3] = (fVar4 * (fVar2 - fVar1) + (fVar1 - fVar3)) * -1.0;
  if (param_5 != (float *)0x0) {
    *param_5 = fVar4;
  }
  return (float10)(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16);
}

// 0108EF00  FUN_0108ef00  size=497  [run]
void FUN_0108ef00(int *param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  pfVar4 = (float *)*param_1;
  fVar18 = *(float *)*(undefined1 (*) [16])(pfVar4 + 4);
  fVar20 = pfVar4[5];
  fVar21 = pfVar4[6];
  fVar22 = pfVar4[7];
  _local_30 = *(undefined1 (*) [16])(pfVar4 + 4);
  fVar28 = *pfVar4;
  fVar29 = pfVar4[1];
  fVar30 = pfVar4[2];
  fVar31 = pfVar4[3];
  local_40 = *(undefined1 (*) [16])(pfVar4 + 8);
  uVar23 = 0x3f000000;
  uVar24 = 0x3f000001;
  uVar25 = 0x3f000002;
  uVar26 = 0x3f000003;
  local_20 = 0x3f000000;
  uStack_1c = 0x3f000001;
  uStack_18 = 0x3f000002;
  uStack_14 = 0x3f000003;
  fVar14 = fVar28 * fVar1 + fVar18 * fVar2 + local_40._0_4_ * fVar3;
  fVar15 = fVar29 * fVar1 + fVar20 * fVar2 + local_40._4_4_ * fVar3;
  fVar16 = fVar30 * fVar1 + fVar21 * fVar2 + local_40._8_4_ * fVar3;
  fVar17 = fVar31 * fVar1 + fVar22 * fVar2 + local_40._12_4_ * fVar3;
  if (param_1[1] < 2) {
    local_20 = 0x3f000000;
    uStack_1c = 0x3f000001;
    uStack_18 = 0x3f000002;
    uStack_14 = 0x3f000003;
  }
  else {
    pfVar4 = pfVar4 + 0x14;
    iVar5 = param_1[1] + -1;
    do {
      uVar23 = uVar23 + 4;
      uVar24 = uVar24 + 4;
      uVar25 = uVar25 + 4;
      uVar26 = uVar26 + 4;
      fVar18 = pfVar4[-4] * fVar2 + pfVar4[-8] * fVar1 + *pfVar4 * fVar3;
      fVar20 = pfVar4[-3] * fVar2 + pfVar4[-7] * fVar1 + pfVar4[1] * fVar3;
      fVar21 = pfVar4[-2] * fVar2 + pfVar4[-6] * fVar1 + pfVar4[2] * fVar3;
      fVar22 = pfVar4[-1] * fVar2 + pfVar4[-5] * fVar1 + pfVar4[3] * fVar3;
      uVar6 = -(uint)(fVar14 < fVar18);
      uVar7 = -(uint)(fVar15 < fVar20);
      uVar8 = -(uint)(fVar16 < fVar21);
      uVar10 = -(uint)(fVar17 < fVar22);
      fVar14 = (float)(uVar6 & (uint)fVar18 | ~uVar6 & (uint)fVar14);
      fVar15 = (float)(uVar7 & (uint)fVar20 | ~uVar7 & (uint)fVar15);
      fVar16 = (float)(uVar8 & (uint)fVar21 | ~uVar8 & (uint)fVar16);
      fVar17 = (float)(uVar10 & (uint)fVar22 | ~uVar10 & (uint)fVar17);
      fVar28 = (float)(~uVar6 & (uint)fVar28 | (uint)pfVar4[-8] & uVar6);
      fVar29 = (float)(~uVar7 & (uint)fVar29 | (uint)pfVar4[-7] & uVar7);
      fVar30 = (float)(~uVar8 & (uint)fVar30 | (uint)pfVar4[-6] & uVar8);
      fVar31 = (float)(~uVar10 & (uint)fVar31 | (uint)pfVar4[-5] & uVar10);
      fVar18 = (float)((uint)pfVar4[-4] & uVar6 | ~uVar6 & local_30._0_4_);
      fVar20 = (float)((uint)pfVar4[-3] & uVar7 | ~uVar7 & local_30._4_4_);
      fVar21 = (float)((uint)pfVar4[-2] & uVar8 | ~uVar8 & (uint)fStack_28);
      fVar22 = (float)((uint)pfVar4[-1] & uVar10 | ~uVar10 & (uint)fStack_24);
      auVar27._0_4_ = (uint)*pfVar4 & uVar6;
      auVar27._4_4_ = (uint)pfVar4[1] & uVar7;
      auVar27._8_4_ = (uint)pfVar4[2] & uVar8;
      auVar27._12_4_ = (uint)pfVar4[3] & uVar10;
      auVar19._0_4_ = ~uVar6 & local_40._0_4_;
      auVar19._4_4_ = ~uVar7 & local_40._4_4_;
      auVar19._8_4_ = ~uVar8 & local_40._8_4_;
      auVar19._12_4_ = ~uVar10 & local_40._12_4_;
      local_40 = auVar19 | auVar27;
      pfVar4 = pfVar4 + 0xc;
      iVar5 = iVar5 + -1;
      local_20 = uVar6 & uVar23 | ~uVar6 & local_20;
      uStack_1c = uVar7 & uVar24 | ~uVar7 & uStack_1c;
      uStack_18 = uVar8 & uVar25 | ~uVar8 & uStack_18;
      uStack_14 = uVar10 & uVar26 | ~uVar10 & uStack_14;
      local_30._4_4_ = fVar20;
      local_30._0_4_ = fVar18;
      fStack_28 = fVar21;
      fStack_24 = fVar22;
    } while (iVar5 != 0);
  }
  uVar23 = -(uint)(fVar14 < fVar15);
  uVar26 = -(uint)(fVar14 < fVar15);
  uVar8 = -(uint)(fVar14 < fVar15);
  uVar11 = -(uint)(fVar14 < fVar15);
  uVar24 = -(uint)(fVar16 < fVar17);
  uVar6 = -(uint)(fVar16 < fVar17);
  uVar10 = -(uint)(fVar16 < fVar17);
  uVar12 = -(uint)(fVar16 < fVar17);
  uVar25 = -(uint)((float)(uVar23 & (uint)fVar15 | ~uVar23 & (uint)fVar14) <
                  (float)(uVar24 & (uint)fVar17 | ~uVar24 & (uint)fVar16));
  uVar7 = -(uint)((float)(uVar26 & (uint)fVar15 | ~uVar26 & (uint)fVar14) <
                 (float)(uVar6 & (uint)fVar17 | ~uVar6 & (uint)fVar16));
  uVar9 = -(uint)((float)(uVar8 & (uint)fVar15 | ~uVar8 & (uint)fVar14) <
                 (float)(uVar10 & (uint)fVar17 | ~uVar10 & (uint)fVar16));
  uVar13 = -(uint)((float)(uVar11 & (uint)fVar15 | ~uVar11 & (uint)fVar14) <
                  (float)(uVar12 & (uint)fVar17 | ~uVar12 & (uint)fVar16));
  local_30._0_4_ = local_40._8_4_;
  local_30._4_4_ = local_40._12_4_;
  *param_3 = ~uVar25 & (~uVar23 & (uint)fVar28 | (uint)fVar29 & uVar23) |
             (~uVar24 & (uint)fVar30 | (uint)fVar31 & uVar24) & uVar25;
  param_3[1] = ~uVar7 & (~uVar26 & (uint)fVar18 | (uint)fVar20 & uVar26) |
               (~uVar6 & (uint)fVar21 | (uint)fVar22 & uVar6) & uVar7;
  param_3[2] = ~uVar9 & (~uVar8 & local_40._0_4_ | local_40._4_4_ & uVar8) |
               (~uVar10 & local_30._0_4_ | local_30._4_4_ & uVar10) & uVar9;
  param_3[3] = ~uVar13 & (~uVar11 & local_20 | uStack_1c & uVar11) |
               (~uVar12 & uStack_18 | uStack_14 & uVar12) & uVar13;
  return;
}

// 0108F1C0  FUN_0108f1c0  size=267  [run]
bool FUN_0108f1c0(undefined4 param_1,int param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  char local_11;
  
  FUN_01098ed0(&local_80);
  iVar2 = 0;
  local_18 = param_2 * 8;
  local_40 = local_70 - local_80;
  fStack_3c = fStack_6c - fStack_7c;
  fStack_38 = fStack_68 - fStack_78;
  fStack_34 = fStack_64 - fStack_74;
  local_50 = local_80;
  fStack_4c = fStack_7c;
  fStack_48 = fStack_78;
  fStack_44 = fStack_74;
  do {
    while( true ) {
      if (param_2 == 0) goto LAB_0108f2c4;
      local_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      fStack_24 = 0.0;
      local_11 = '\x01';
      FUN_010770a0(&local_30);
      local_30 = local_30 * local_40 + local_50;
      fStack_2c = fStack_2c * fStack_3c + fStack_4c;
      fStack_28 = fStack_28 * fStack_38 + fStack_48;
      fStack_24 = fStack_24 * fStack_34 + fStack_44;
      FUN_0109f610(&local_30,local_60,&local_11);
      if (local_11 == '\0') break;
      fStack_24 = 1.0;
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_3,0x10);
      }
      pfVar1 = (float *)(param_3[1] * 0x10 + *param_3);
      *pfVar1 = local_30;
      pfVar1[1] = fStack_2c;
      pfVar1[2] = fStack_28;
      pfVar1[3] = fStack_24;
      param_3[1] = param_3[1] + 1;
      param_2 = param_2 + -1;
      iVar2 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 <= local_18);
LAB_0108f2c4:
  return param_2 == 0;
}

// 0108F520  FUN_0108f520  size=380  [run]
void FUN_0108f520(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_60 [19];
  int local_14;
  
  local_60[0x12] = param_2[1];
  iVar7 = param_1[1] + 3 >> 2;
  local_14 = local_60[0x12] + iVar7;
  iVar6 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  if ((int)(param_2[2] & 0x3fffffffU) < local_14) {
    iVar3 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar3 <= local_14) {
      iVar3 = local_14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar3,0x30);
  }
  param_2[1] = param_2[1] + iVar7;
  piVar4 = (int *)(local_60[0x12] * 0x30 + *param_2);
  local_14 = param_1[1];
  if (0 < local_14) {
    iVar7 = 0;
    do {
      piVar5 = (int *)(*param_1 + iVar7);
      iVar3 = piVar5[1];
      iVar1 = piVar5[2];
      iVar2 = piVar5[3];
      local_60[iVar6 * 4] = *piVar5;
      local_60[iVar6 * 4 + 1] = iVar3;
      local_60[iVar6 * 4 + 2] = iVar1;
      local_60[iVar6 * 4 + 3] = iVar2;
      iVar6 = iVar6 + 1;
      if (iVar6 == 4) {
        piVar4[4] = local_60[1];
        piVar4[5] = local_60[5];
        piVar4[6] = local_60[9];
        piVar4[7] = local_60[0xd];
        *piVar4 = local_60[0];
        piVar4[1] = local_60[4];
        piVar4[2] = local_60[8];
        piVar4[3] = local_60[0xc];
        piVar4[8] = local_60[2];
        piVar4[9] = local_60[6];
        piVar4[10] = local_60[10];
        piVar4[0xb] = local_60[0xe];
        iVar6 = 0;
        piVar4 = piVar4 + 0xc;
      }
      iVar7 = iVar7 + 0x10;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (iVar6 != 0) {
      if (iVar6 < 4) {
        iVar7 = 4 - iVar6;
        piVar5 = local_60 + iVar6 * 4;
        do {
          iVar1 = local_60[3];
          iVar3 = local_60[2];
          iVar6 = local_60[1];
          iVar7 = iVar7 + -1;
          *piVar5 = local_60[0];
          piVar5[1] = iVar6;
          piVar5[2] = iVar3;
          piVar5[3] = iVar1;
          piVar5 = piVar5 + 4;
        } while (iVar7 != 0);
      }
      *piVar4 = local_60[0];
      piVar4[1] = local_60[4];
      piVar4[2] = local_60[8];
      piVar4[3] = local_60[0xc];
      piVar4[4] = local_60[1];
      piVar4[5] = local_60[5];
      piVar4[6] = local_60[9];
      piVar4[7] = local_60[0xd];
      piVar4[8] = local_60[2];
      piVar4[9] = local_60[6];
      piVar4[10] = local_60[10];
      piVar4[0xb] = local_60[0xe];
    }
  }
  return;
}

// 0108F6A0  FUN_0108f6a0  size=797  [run]
void FUN_0108f6a0(int *param_1,int *param_2,uint param_3,int *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM3 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  float fStack_48;
  float fStack_44;
  float *local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar12 = param_1[1];
  local_14 = iVar12;
  if ((int)(param_4[2] & 0x3fffffffU) < iVar12) {
    iVar8 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar8 <= iVar12) {
      iVar8 = iVar12;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar8,4);
  }
  param_4[1] = iVar12;
  iVar8 = 0;
  if (0 < iVar12) {
    do {
      iVar11 = iVar8 % (int)param_3;
      iVar8 = iVar8 + 1;
      *(int *)(*param_4 + -4 + iVar8 * 4) = iVar11;
    } while (iVar8 < iVar12);
  }
  local_3c = (float *)0x0;
  local_38 = 0;
  local_34 = -0x80000000;
  uVar10 = 0;
  if (0 < (int)param_3) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_3c,((int)param_3 < 0) - 1 & param_3,0x10);
    uVar10 = local_38;
  }
  iVar8 = param_3 - uVar10;
  pfVar6 = local_3c + uVar10 * 4;
  if (0 < iVar8) {
    do {
      *pfVar6 = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[3] = 0.0;
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_38 = param_3;
  local_30 = 0;
  local_2c = 0;
  local_28 = -0x80000000;
  local_50 = 0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  uVar10 = 0;
  if (0 < (int)param_3) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_30,((int)param_3 < 0) - 1 & param_3,0x10);
    uVar10 = local_2c;
  }
  iVar8 = param_3 - uVar10;
  puVar7 = (undefined4 *)(uVar10 * 0x10 + local_30);
  if (0 < iVar8) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = (float)local_50;
        puVar7[1] = local_50._4_4_;
        puVar7[2] = fStack_48;
        puVar7[3] = fStack_44;
      }
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_2c = param_3;
  local_24 = 0;
  if (0 < param_5) {
    while( true ) {
      iVar8 = 0;
      local_20 = 0;
      if (0 < iVar12) {
        iVar11 = 0;
        do {
          iVar12 = *(int *)(*param_4 + iVar8 * 4);
          if (param_2 == (int *)0x0) {
            local_60 = 0x3f800000;
            uStack_5c = 0x3f800000;
            uStack_58 = 0x3f800000;
            uStack_54 = 0x3f800000;
            puVar9 = (undefined8 *)&local_60;
          }
          else {
            puVar9 = (undefined8 *)(*param_2 + iVar11);
          }
          local_50 = *puVar9;
          uVar5 = local_50;
          fStack_48 = *(float *)(puVar9 + 1);
          fStack_44 = *(float *)((int)puVar9 + 0xc);
          pfVar6 = (float *)(local_30 + iVar12 * 0x10);
          fVar17 = pfVar6[1];
          fVar13 = pfVar6[2];
          fVar14 = pfVar6[3];
          local_50._4_4_ = (float)((ulonglong)local_50 >> 0x20);
          pfVar1 = (float *)(local_30 + iVar12 * 0x10);
          *pfVar1 = *pfVar6 + (float)local_50;
          pfVar1[1] = fVar17 + local_50._4_4_;
          pfVar1[2] = fVar13 + fStack_48;
          pfVar1[3] = fVar14 + fStack_44;
          pfVar6 = (float *)(*param_1 + iVar11);
          fVar17 = pfVar6[1];
          fVar13 = pfVar6[2];
          fVar14 = pfVar6[3];
          pfVar1 = local_3c + iVar12 * 4;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar4 = pfVar1[3];
          iVar8 = iVar8 + 1;
          iVar11 = iVar11 + 0x10;
          pfVar2 = local_3c + iVar12 * 4;
          *pfVar2 = *pfVar6 * (float)local_50 + *pfVar1;
          pfVar2[1] = fVar17 * local_50._4_4_ + fVar15;
          pfVar2[2] = fVar13 * fStack_48 + fVar16;
          pfVar2[3] = fVar14 * fStack_44 + fVar4;
          iVar12 = local_14;
          local_50 = uVar5;
        } while (iVar8 < local_14);
      }
      if (0 < (int)param_3) {
        iVar8 = 0;
        uVar10 = param_3;
        do {
          auVar3 = *(undefined1 (*) [16])(iVar8 + local_30);
          in_XMM3 = rcpps(in_XMM3,auVar3);
          pfVar6 = (float *)(iVar8 + (int)local_3c);
          fVar17 = pfVar6[1];
          fVar13 = pfVar6[2];
          fVar14 = pfVar6[3];
          pfVar1 = (float *)(iVar8 + (int)local_3c);
          *pfVar1 = (float)(~-(uint)(auVar3._0_4_ == 0.0) &
                           (uint)((2.0 - auVar3._0_4_ * in_XMM3._0_4_) * in_XMM3._0_4_)) * *pfVar6;
          pfVar1[1] = (float)(~-(uint)(auVar3._4_4_ == 0.0) &
                             (uint)((2.0 - auVar3._4_4_ * in_XMM3._4_4_) * in_XMM3._4_4_)) * fVar17;
          pfVar1[2] = (float)(~-(uint)(auVar3._8_4_ == 0.0) &
                             (uint)((2.0 - auVar3._8_4_ * in_XMM3._8_4_) * in_XMM3._8_4_)) * fVar13;
          pfVar1[3] = (float)(~-(uint)(auVar3._12_4_ == 0.0) &
                             (uint)((2.0 - auVar3._12_4_ * in_XMM3._12_4_) * in_XMM3._12_4_)) *
                      fVar14;
          puVar7 = (undefined4 *)(iVar8 + local_30);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          iVar8 = iVar8 + 0x10;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_18 = 0;
      if (iVar12 < 1) break;
      local_1c = 0;
      do {
        fVar17 = 3.40282e+38;
        iVar8 = -1;
        iVar11 = 0;
        if (0 < (int)param_3) {
          in_XMM3 = *(undefined1 (*) [16])(*param_1 + local_1c);
          pfVar6 = local_3c;
          do {
            fVar13 = in_XMM3._0_4_ - *pfVar6;
            fVar14 = in_XMM3._4_4_ - pfVar6[1];
            fVar15 = in_XMM3._8_4_ - pfVar6[2];
            fVar16 = in_XMM3._12_4_ - pfVar6[3];
            fVar13 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13;
            if (fVar13 < fVar17) {
              iVar8 = iVar11;
              fVar17 = fVar13;
            }
            iVar11 = iVar11 + 1;
            pfVar6 = pfVar6 + 4;
          } while (iVar11 < (int)param_3);
          iVar12 = local_14;
          if (-1 < iVar8) {
            if (*(int *)(*param_4 + local_18 * 4) != iVar8) {
              local_20 = local_20 + 1;
            }
            *(int *)(*param_4 + local_18 * 4) = iVar8;
          }
        }
        local_1c = local_1c + 0x10;
        local_18 = local_18 + 1;
      } while (local_18 < iVar12);
      if ((local_20 == 0) || (local_24 = local_24 + 1, param_5 <= local_24)) break;
    }
  }
  local_2c = 0;
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 << 4);
  }
  local_30 = 0;
  local_38 = 0;
  local_28 = 0x80000000;
  if (-1 < local_34) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,local_34 << 4);
  }
  return;
}

// 0108F9D0  FUN_0108f9d0  size=208  [run]
void FUN_0108f9d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[1];
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  uVar2 = 0;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)uVar1 < 0) - 1 & uVar1,0x10);
    uVar2 = local_c;
  }
  iVar4 = uVar1 - uVar2;
  puVar3 = (undefined4 *)(uVar2 * 0x10 + local_10);
  if (0 < iVar4) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (0 < param_1[1]) {
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar5 + local_10) = *(undefined4 *)(*param_1 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < param_1[1]);
  }
  local_c = uVar1;
  FUN_0108f6a0(&local_10,param_2,param_3,param_4,param_5);
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
  }
  return;
}

// 0108FAA0  FUN_0108faa0  size=228  [run]
void __thiscall
FUN_0108faa0(int *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x50);
  }
  pfVar5 = (float *)(param_1[1] * 0x50 + *param_1);
  param_1[1] = param_1[1] + 1;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *pfVar5 = *param_2;
  pfVar5[1] = fVar1;
  pfVar5[2] = fVar2;
  pfVar5[3] = fVar3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  pfVar5[4] = *param_3;
  pfVar5[5] = fVar1;
  pfVar5[6] = fVar2;
  pfVar5[7] = fVar3;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  pfVar5[8] = *param_4;
  pfVar5[9] = fVar1;
  pfVar5[10] = fVar2;
  pfVar5[0xb] = fVar3;
  pfVar5[0x10] = 0.0;
  pfVar5[0x11] = param_5;
  fVar1 = param_4[3];
  fVar2 = param_2[3];
  fVar3 = param_3[3];
  fVar4 = param_2[3];
  fVar9 = (param_4[2] - param_2[2]) * (param_3[1] - param_2[1]) -
          (param_4[1] - param_2[1]) * (param_3[2] - param_2[2]);
  fVar10 = (*param_4 - *param_2) * (param_3[2] - param_2[2]) -
           (param_4[2] - param_2[2]) * (*param_3 - *param_2);
  fVar11 = (param_4[1] - param_2[1]) * (*param_3 - *param_2) -
           (*param_4 - *param_2) * (param_3[1] - param_2[1]);
  fVar6 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fVar8 = fVar11 * fVar11;
  fVar12 = fVar7 + fVar6 + fVar8;
  fVar13 = fVar7 + fVar6 + fVar8;
  fVar14 = fVar7 + fVar6 + fVar8;
  fVar8 = fVar7 + fVar6 + fVar8;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16._4_4_ = fVar13;
  auVar16._0_4_ = fVar12;
  auVar16._8_4_ = fVar14;
  auVar16._12_4_ = fVar8;
  auVar16 = rsqrtps(auVar15,auVar16);
  fVar6 = auVar16._0_4_;
  fVar7 = auVar16._4_4_;
  fVar17 = auVar16._8_4_;
  fVar18 = auVar16._12_4_;
  pfVar5[0xc] = (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5)) * fVar9;
  pfVar5[0xd] = (float)(~-(uint)(fVar13 <= 0.0) &
                       (uint)((3.0 - fVar7 * fVar13 * fVar7) * fVar7 * 0.5)) * fVar10;
  pfVar5[0xe] = (float)(~-(uint)(fVar14 <= 0.0) &
                       (uint)((3.0 - fVar17 * fVar14 * fVar17) * fVar17 * 0.5)) * fVar11;
  pfVar5[0xf] = (float)(~-(uint)(fVar8 <= 0.0) &
                       (uint)((3.0 - fVar18 * fVar8 * fVar18) * fVar18 * 0.5)) *
                ((fVar1 - fVar2) * (fVar3 - fVar4) - (fVar1 - fVar2) * (fVar3 - fVar4));
  return;
}

// 0108FB90  FUN_0108fb90  size=1127  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall
FUN_0108fb90(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar7;
  float fVar8;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  float local_c0 [10];
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 local_80 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar34 = *param_3;
  fVar36 = param_3[1];
  fVar38 = param_3[2];
  fVar27 = *param_4;
  fVar28 = param_4[1];
  fVar30 = param_4[2];
  fVar9 = *param_6 - fVar27;
  fVar11 = param_6[1] - fVar28;
  fVar13 = param_6[2] - fVar30;
  fVar3 = *param_5 - fVar27;
  fVar7 = param_5[1] - fVar28;
  fVar8 = param_5[2] - fVar30;
  fVar10 = fVar13 * fVar7 - fVar11 * fVar8;
  fVar8 = fVar9 * fVar8 - fVar13 * fVar3;
  fVar11 = fVar11 * fVar3 - fVar9 * fVar7;
  fVar3 = fVar10 * fVar10;
  fVar7 = fVar8 * fVar8;
  fVar9 = fVar11 * fVar11;
  local_80._0_12_ = ZEXT812(0);
  local_80._12_4_ = 0;
  auVar22._0_4_ = fVar7 + fVar3 + fVar9;
  auVar22._4_4_ = fVar7 + fVar3 + fVar9;
  auVar22._8_4_ = fVar7 + fVar3 + fVar9;
  auVar22._12_4_ = fVar7 + fVar3 + fVar9;
  auVar35 = rsqrtps(local_80,auVar22);
  fVar3 = auVar35._0_4_;
  fVar7 = auVar35._4_4_;
  fVar9 = auVar35._8_4_;
  fVar10 = (float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar3 * auVar22._0_4_ * fVar3) * fVar3 * 0.5)) * fVar10;
  fVar8 = (float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                 (uint)((3.0 - fVar7 * auVar22._4_4_ * fVar7) * fVar7 * 0.5)) * fVar8;
  fVar11 = (float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar9 * auVar22._8_4_ * fVar9) * fVar9 * 0.5)) * fVar11;
  fVar16 = 0.0 - (fVar8 * fVar28 + fVar10 * fVar27 + fVar11 * fVar30);
  fVar9 = fVar11 * fVar38 + fVar10 * fVar34;
  fVar3 = fVar16 * 1.0 + fVar8 * fVar36;
  fVar14 = fVar10 * fVar34 + fVar11 * fVar38;
  fVar7 = fVar8 * fVar36 + fVar16 * 1.0;
  fVar33 = fVar3 + fVar9;
  fVar9 = fVar9 + fVar3;
  fVar37 = fVar7 + fVar14;
  fVar14 = fVar14 + fVar7;
  fVar13 = fVar34 - fVar33 * fVar10;
  fVar12 = fVar36 - fVar9 * fVar8;
  fVar15 = fVar38 - fVar37 * fVar11;
  fVar7 = 1.0 - fVar14 * fVar16;
  fVar20 = *param_6 - fVar13;
  fVar25 = param_6[1] - fVar12;
  fVar26 = param_6[2] - fVar15;
  fVar27 = fVar27 - fVar13;
  fVar28 = fVar28 - fVar12;
  fVar30 = fVar30 - fVar15;
  fVar13 = *param_5 - fVar13;
  fVar12 = param_5[1] - fVar12;
  fVar15 = param_5[2] - fVar15;
  fVar39 = param_5[3] - fVar7;
  fVar3 = (fVar15 * fVar10 - fVar13 * fVar11) * fVar28;
  fVar7 = (fVar39 * fVar16 - fVar39 * fVar16) * (param_4[3] - fVar7);
  fVar39 = (fVar20 * fVar8 - fVar25 * fVar10) * fVar15 +
           (fVar25 * fVar11 - fVar26 * fVar8) * fVar13 +
           (fVar26 * fVar10 - fVar20 * fVar11) * fVar12;
  fVar28 = (fVar27 * fVar8 - fVar28 * fVar10) * fVar26 +
           (fVar28 * fVar11 - fVar30 * fVar8) * fVar20 +
           (fVar30 * fVar10 - fVar27 * fVar11) * fVar25;
  fVar27 = (fVar13 * fVar8 - fVar12 * fVar10) * fVar30 +
           (fVar12 * fVar11 - fVar15 * fVar8) * fVar27 + fVar3;
  fVar7 = fVar7 + fVar3 + fVar7;
  if (param_8 != (float *)0x0) {
    auVar21._4_4_ = fVar27;
    auVar21._0_4_ = fVar27;
    auVar21._8_4_ = fVar27;
    auVar21._12_4_ = fVar27;
    auVar35._0_4_ = fVar28 + fVar39 + fVar27;
    auVar35._4_4_ = fVar28 + fVar39 + fVar27;
    auVar35._8_4_ = fVar28 + fVar39 + fVar27;
    auVar35._12_4_ = fVar28 + fVar39 + fVar27;
    auVar22 = rcpps(auVar21,auVar35);
    *param_8 = (2.0 - auVar22._0_4_ * auVar35._0_4_) * auVar22._0_4_ * fVar39;
    param_8[1] = (2.0 - auVar22._4_4_ * auVar35._4_4_) * auVar22._4_4_ * fVar28;
    param_8[2] = (2.0 - auVar22._8_4_ * auVar35._8_4_) * auVar22._8_4_ * fVar27;
    param_8[3] = (2.0 - auVar22._12_4_ * auVar35._12_4_) * auVar22._12_4_ * fVar7;
  }
  auVar4._4_4_ = -(uint)(1.1920929e-07 < fVar28);
  auVar4._0_4_ = -(uint)(1.1920929e-07 < fVar39);
  auVar4._8_4_ = -(uint)(1.1920929e-07 < fVar27);
  auVar4._12_4_ = -(uint)(1.1920929e-07 < fVar7);
  uVar2 = movmskps(param_2,auVar4);
  if (((byte)uVar2 & 7) == 7) {
    *param_7 = (float)((uint)fVar33 & 0x80000000 ^ (uint)fVar10);
    param_7[1] = (float)((uint)fVar9 & 0x80000000 ^ (uint)fVar8);
    param_7[2] = (float)((uint)fVar37 & 0x80000000 ^ (uint)fVar11);
    param_7[3] = (float)((uint)fVar14 & 0x80000000 ^ (uint)fVar16);
    return (float10)(fVar33 * fVar33);
  }
  fVar27 = *param_4;
  fVar28 = param_4[1];
  fVar30 = param_4[2];
  fVar3 = param_4[3];
  fVar10 = *param_6;
  fVar7 = param_6[1];
  fVar8 = param_6[2];
  fVar9 = param_6[3];
  fVar11 = *param_5;
  fVar13 = param_5[1];
  fVar39 = param_5[2];
  fVar12 = param_5[3];
  fVar20 = fVar11 - fVar27;
  fVar25 = fVar13 - fVar28;
  fVar26 = fVar39 - fVar30;
  fVar33 = fVar12 - fVar3;
  fVar37 = fVar27 - fVar10;
  fVar29 = fVar28 - fVar7;
  fVar31 = fVar30 - fVar8;
  fVar32 = fVar3 - fVar9;
  local_60 = fVar34 - fVar10;
  fStack_5c = fVar36 - fVar7;
  fStack_58 = fVar38 - fVar8;
  fStack_54 = 1.0 - fVar9;
  fVar10 = fVar10 - fVar11;
  fVar7 = fVar7 - fVar13;
  fVar8 = fVar8 - fVar39;
  fVar9 = fVar9 - fVar12;
  local_70 = (fVar38 - fVar30) * fVar26 + (fVar34 - fVar27) * fVar20 + (fVar36 - fVar28) * fVar25;
  fStack_6c = (fVar38 - fVar39) * fVar8 + (fVar34 - fVar11) * fVar10 + (fVar36 - fVar13) * fVar7;
  fStack_68 = fStack_58 * fVar31 + local_60 * fVar37 + fStack_5c * fVar29;
  fStack_64 = fStack_54 * fVar32 + fStack_5c * fVar29 + fStack_54 * fVar32;
  fStack_1c = fVar29 * fVar29;
  fStack_14 = fVar32 * fVar32;
  local_20 = fVar37 * fVar37;
  fStack_18 = fVar31 * fVar31;
  local_40 = fVar26 * fVar26;
  fStack_3c = fVar8 * fVar8;
  fStack_38 = fVar33 * fVar33;
  fStack_34 = fVar9 * fVar9;
  local_50 = fVar25 * fVar25;
  fStack_4c = fVar7 * fVar7;
  fStack_48 = fStack_1c;
  fStack_44 = fStack_14;
  auVar17._0_4_ = fVar20 * fVar20 + fVar25 * fVar25;
  auVar17._4_4_ = fVar10 * fVar10 + fVar7 * fVar7;
  auVar17._8_4_ = fVar37 * fVar37 + fStack_1c;
  auVar17._12_4_ = fStack_1c + fStack_14;
  auVar5._0_4_ = fVar26 * fVar26 + auVar17._0_4_;
  auVar5._4_4_ = fVar8 * fVar8 + auVar17._4_4_;
  auVar5._8_4_ = fVar31 * fVar31 + auVar17._8_4_;
  auVar5._12_4_ = fStack_14 + auVar17._12_4_;
  auVar22 = maxps(auVar5,_DAT_01701cf0);
  auVar35 = rcpps(auVar17,auVar22);
  auVar6._0_4_ = (2.0 - auVar35._0_4_ * auVar22._0_4_) * auVar35._0_4_ * local_70;
  auVar6._4_4_ = (2.0 - auVar35._4_4_ * auVar22._4_4_) * auVar35._4_4_ * fStack_6c;
  auVar6._8_4_ = (2.0 - auVar35._8_4_ * auVar22._8_4_) * auVar35._8_4_ * fStack_68;
  auVar6._12_4_ = (2.0 - auVar35._12_4_ * auVar22._12_4_) * auVar35._12_4_ * fStack_64;
  auVar22 = maxps(auVar6,_DAT_01701b10);
  auVar22 = minps(auVar22,_DAT_01701b20);
  fVar14 = auVar22._0_4_;
  fVar15 = auVar22._4_4_;
  fVar16 = auVar22._8_4_;
  local_c0[4] = (fVar34 - fVar27) - fVar14 * fVar20;
  local_c0[5] = (fVar36 - fVar28) - fVar14 * fVar25;
  local_c0[6] = (fVar38 - fVar30) - fVar14 * fVar26;
  local_c0[7] = (1.0 - fVar3) - fVar14 * fVar33;
  local_c0[8] = (fVar34 - fVar11) - fVar15 * fVar10;
  local_c0[9] = (fVar36 - fVar13) - fVar15 * fVar7;
  fStack_98 = (fVar38 - fVar39) - fVar15 * fVar8;
  local_90 = local_60 - fVar16 * fVar37;
  fStack_8c = fStack_5c - fVar16 * fVar29;
  fStack_88 = fStack_58 - fVar16 * fVar31;
  fStack_84 = fStack_54 - fVar16 * fVar32;
  fStack_94 = (1.0 - fVar12) - fVar15 * fVar9;
  fVar34 = local_c0[6] * local_c0[6] + local_c0[4] * local_c0[4] + local_c0[5] * local_c0[5];
  fVar36 = fStack_98 * fStack_98 + local_c0[8] * local_c0[8] + local_c0[9] * local_c0[9];
  fVar38 = fStack_88 * fStack_88 + local_90 * local_90 + fStack_8c * fStack_8c;
  auVar23._4_4_ = fVar36;
  auVar23._0_4_ = fVar36;
  auVar23._8_4_ = fVar36;
  auVar23._12_4_ = fVar36;
  auVar18._4_4_ = fVar34;
  auVar18._0_4_ = fVar34;
  auVar18._8_4_ = fVar34;
  auVar18._12_4_ = fVar34;
  auVar22 = minps(auVar23,auVar18);
  auVar19._4_4_ = fVar38;
  auVar19._0_4_ = fVar38;
  auVar19._8_4_ = fVar38;
  auVar19._12_4_ = fVar38;
  auVar22 = minps(auVar19,auVar22);
  auVar24._4_4_ = -(uint)(auVar22._4_4_ == fVar36);
  auVar24._0_4_ = -(uint)(auVar22._0_4_ == fVar34);
  auVar24._8_4_ = -(uint)(auVar22._8_4_ == fVar38);
  auVar24._12_4_ =
       -(uint)(auVar22._12_4_ ==
              fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_84 * fStack_84);
  uVar1 = movmskps(param_4,auVar24);
  if ((uVar1 & 7) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)(byte)(&DAT_0182bb80)[uVar1];
  }
  fVar34 = local_c0[uVar1 * 4 + 4];
  fVar36 = local_c0[uVar1 * 4 + 5];
  fVar38 = local_c0[uVar1 * 4 + 6];
  fVar27 = local_c0[uVar1 * 4 + 7];
  if (param_8 != (float *)0x0) {
    local_c0[4] = (float)DAT_01701b20 - fVar14;
    local_c0[5] = fVar14;
    local_c0[6] = 0.0;
    local_c0[7] = 0.0;
    local_c0[8] = 0.0;
    local_c0[9] = DAT_01701b20._4_4_ - fVar15;
    fStack_98 = fVar15;
    fStack_94 = 0.0;
    local_90 = fVar16;
    fStack_8c = 0.0;
    fStack_88 = DAT_01701b20._8_4_ - fVar16;
    fStack_84 = 0.0;
    fVar28 = local_c0[uVar1 * 4 + 5];
    fVar30 = local_c0[uVar1 * 4 + 6];
    fVar3 = local_c0[uVar1 * 4 + 7];
    *param_8 = local_c0[uVar1 * 4 + 4];
    param_8[1] = fVar28;
    param_8[2] = fVar30;
    param_8[3] = fVar3;
  }
  *param_7 = fVar34;
  param_7[1] = fVar36;
  param_7[2] = fVar38;
  param_7[3] = fVar27;
  return (float10)auVar22._0_4_;
}

// 01090000  hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>_2  size=2902  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::
ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>_2
          (undefined4 param_1,uint param_2,int *param_3,int param_4,undefined4 param_5,int *param_6)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_210 [16];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [128];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int local_a8 [4];
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int local_6c;
  float *local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  float *local_54;
  float *local_50;
  float *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  float *local_3c;
  float *local_38;
  int local_34;
  int local_30 [3];
  float *local_24;
  int local_20;
  undefined4 local_1c;
  float *local_18;
  undefined1 (*local_14) [16];
  
  if ((_DAT_0209a9a0 & 1) == 0) {
    _DAT_0209a9a0 = _DAT_0209a9a0 | 1;
    DAT_0209a998 = vftable;
    _DAT_0209a99c = 0x3f800000;
    _atexit((_func_4879 *)&LAB_015fc3f0);
  }
  local_98 = param_5;
  local_94 = param_5;
  if (param_6 == (int *)0x0) {
    param_6 = (int *)&DAT_0209a998;
  }
  hkgpMesh::hkgpMesh();
  FUN_010a2dc0(param_1,&DAT_01701ca0,0xffffffff,0,1);
  FUN_010995b0();
  FUN_010a2ea0(0);
  iVar10 = param_3[1];
  cVar4 = FUN_0108f1c0(local_160,param_2,param_3,local_a8 + 4);
  if (cVar4 == '\0') {
LAB_01090b4d:
    ::hkBaseObject::hkBaseObject_69();
    return 0;
  }
  if (param_4 < 1) goto LAB_01090aa8;
  local_68 = (float *)(iVar10 * 0x10 + *param_3);
  local_5c = 0x80000000;
  local_30[2] = 0x80000000;
  local_64 = 0;
  local_60 = 0;
  local_30[1] = 0;
  local_30[0] = 0;
  local_24 = (float *)0x0;
  local_18 = (float *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (0 < (int)param_2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_64,((int)param_2 < 0) - 1 & param_2,4);
  }
  local_60 = param_2;
  local_34 = 0;
  pfVar11 = local_68;
  if (0 < (int)param_2) {
    do {
      local_d0 = *pfVar11 - 0.0;
      fStack_cc = pfVar11[1] - 0.0;
      fStack_c8 = pfVar11[2] - 0.0;
      local_c0 = *pfVar11 + 0.0;
      fStack_bc = pfVar11[1] + 0.0;
      fStack_b8 = pfVar11[2] + 0.0;
      fStack_c4 = 0.0;
      fStack_b4 = 0.0;
      pfVar5 = local_24;
      local_4c = pfVar11;
      if (local_24 == (float *)0x0) {
        FUN_010948a0(1);
        pfVar5 = local_24;
      }
      local_50 = (float *)((int)pfVar5 * 0x30);
      local_24 = *(float **)((int)local_50 + local_30[0]);
      pfVar1 = (float *)((int)local_50 + local_30[0]);
      *pfVar1 = local_d0;
      pfVar1[1] = fStack_cc;
      pfVar1[2] = fStack_c8;
      pfVar1[3] = fStack_c4;
      pfVar1[9] = 0.0;
      pfVar1[10] = (float)pfVar11;
      pfVar1[4] = local_c0;
      pfVar1[5] = fStack_bc;
      pfVar1[6] = fStack_b8;
      pfVar1[7] = fStack_b4;
      local_90 = *(undefined1 (*) [16])((int)local_50 + local_30[0]);
      pfVar1 = (float *)((int)local_50 + local_30[0] + 0x10);
      local_80 = *pfVar1;
      fStack_7c = pfVar1[1];
      fStack_78 = pfVar1[2];
      fStack_74 = pfVar1[3];
      local_38 = local_18;
      local_3c = pfVar5;
      if (local_18 == (float *)0x0) {
        *(undefined4 *)((int)local_50 + local_30[0] + 0x20) = 0;
        local_18 = pfVar5;
      }
      else {
        if (local_24 == (float *)0x0) {
          FUN_010948a0(1);
        }
        pfVar5 = *(float **)(local_30[0] + (int)local_24 * 0x30);
        pauVar9 = (undefined1 (*) [16])((int)local_38 * 0x30 + local_30[0]);
        local_14 = (undefined1 (*) [16])(local_30[0] + (int)local_24 * 0x30);
        if (*(int *)(pauVar9[2] + 4) != 0) {
          fVar22 = local_80 + local_90._0_4_;
          fVar23 = fStack_7c + local_90._4_4_;
          fVar24 = fStack_78 + local_90._8_4_;
          fVar25 = local_80 - local_90._0_4_;
          fVar26 = fStack_7c - local_90._4_4_;
          fVar27 = fStack_78 - local_90._8_4_;
          do {
            iVar10 = *(int *)(pauVar9[2] + 8);
            iVar6 = *(int *)(pauVar9[2] + 4);
            auVar13 = minps(*pauVar9,local_90);
            auVar15._4_4_ = fStack_7c;
            auVar15._0_4_ = local_80;
            auVar15._8_4_ = fStack_78;
            auVar15._12_4_ = fStack_74;
            auVar15 = maxps(pauVar9[1],auVar15);
            pauVar9[1] = auVar15;
            *pauVar9 = auVar13;
            iVar10 = iVar10 * 0x30;
            pfVar11 = (float *)(iVar10 + local_30[0]);
            local_1e0 = *pfVar11;
            fStack_1dc = pfVar11[1];
            fStack_1d8 = pfVar11[2];
            fStack_1d4 = pfVar11[3];
            pfVar11 = (float *)(iVar10 + 0x10 + local_30[0]);
            local_1d0 = *pfVar11;
            fStack_1cc = pfVar11[1];
            fStack_1c8 = pfVar11[2];
            fStack_1c4 = pfVar11[3];
            iVar6 = iVar6 * 0x30;
            pfVar11 = (float *)(iVar6 + local_30[0]);
            local_200 = *pfVar11;
            fStack_1fc = pfVar11[1];
            fStack_1f8 = pfVar11[2];
            fStack_1f4 = pfVar11[3];
            pfVar11 = (float *)(iVar6 + 0x10 + local_30[0]);
            local_1f0 = *pfVar11;
            fStack_1ec = pfVar11[1];
            fStack_1e8 = pfVar11[2];
            fStack_1e4 = pfVar11[3];
            fVar19 = (local_1e0 + local_1d0) - fVar22;
            fVar20 = (fStack_1dc + fStack_1cc) - fVar23;
            fVar21 = (fStack_1d8 + fStack_1c8) - fVar24;
            fVar16 = (local_200 + local_1f0) - fVar22;
            fVar17 = (fStack_1fc + fStack_1ec) - fVar23;
            fVar18 = (fStack_1f8 + fStack_1e8) - fVar24;
            local_a8[3] = iVar10 + local_30[0];
            local_a8[2] = iVar6 + local_30[0];
            pauVar9 = (undefined1 (*) [16])
                      local_a8[((fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21) *
                                ((local_1d0 - local_1e0) + fVar25 +
                                 (fStack_1cc - fStack_1dc) + fVar26 +
                                (fStack_1c8 - fStack_1d8) + fVar27) <
                               (fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) *
                               ((local_1f0 - local_200) + fVar25 +
                                (fStack_1ec - fStack_1fc) + fVar26 +
                               (fStack_1e8 - fStack_1f8) + fVar27)) + 2];
          } while (*(int *)(pauVar9[2] + 4) != 0);
        }
        pfVar11 = (float *)(((int)local_14 - local_30[0]) / 0x30);
        pfVar1 = pfVar11;
        if (*(int *)pauVar9[2] != 0) {
          local_38 = (float *)(local_30[0] + *(int *)pauVar9[2] * 0x30);
          local_38[(local_38[10] == (float)(((int)pauVar9 - local_30[0]) / 0x30)) + 9] =
               (float)pfVar11;
          pfVar1 = local_18;
        }
        local_18 = pfVar1;
        *(undefined4 *)local_14[2] = *(undefined4 *)pauVar9[2];
        *(float **)(local_14[2] + 8) = local_3c;
        *(int *)(local_14[2] + 4) = ((int)pauVar9 - local_30[0]) / 0x30;
        *(float **)pauVar9[2] = pfVar11;
        *(float **)((int)local_50 + local_30[0] + 0x20) = pfVar11;
        auVar15 = minps(*pauVar9,local_90);
        auVar13._4_4_ = fStack_7c;
        auVar13._0_4_ = local_80;
        auVar13._8_4_ = fStack_78;
        auVar13._12_4_ = fStack_74;
        auVar13 = maxps(pauVar9[1],auVar13);
        *local_14 = auVar15;
        local_14[1] = auVar13;
        pfVar11 = local_4c;
        local_24 = pfVar5;
      }
      iVar10 = local_34;
      local_20 = local_20 + 1;
      *(float **)(local_64 + local_34 * 4) = local_3c;
      fVar12 = (float10)(**(code **)(*param_6 + 4))(pfVar11);
      local_38 = (float *)(float)fVar12;
      *pfVar11 = (float)local_38 * *pfVar11;
      pfVar11[1] = (float)local_38 * pfVar11[1];
      pfVar11[2] = (float)local_38 * pfVar11[2];
      pfVar11[3] = (float)local_38 * pfVar11[3];
      pfVar11[3] = (float)fVar12;
      local_34 = iVar10 + 1;
      pfVar11 = pfVar11 + 4;
      local_4c = pfVar11;
    } while (local_34 < (int)param_2);
  }
  FUN_010974b0(local_18,1,0x20,0x10);
  FUN_01096ea0();
  local_58 = param_2 * 2;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x80000000;
  if (local_58 < 0x100) {
    local_58 = 0x100;
LAB_010904a3:
    FUN_0100a210(&PTR_vftable_018e9b94,&local_48,local_58,0x10);
  }
  else {
    if (0x2000 < local_58) {
      local_58 = 0x2000;
      goto LAB_010904a3;
    }
    if (0 < local_58) goto LAB_010904a3;
  }
  local_38 = (float *)0x0;
  if (0 < param_4) {
    do {
      iVar10 = 0;
      local_44 = 0;
      cVar4 = FUN_0108f1c0(local_160,local_58,&local_48,local_a8 + 4);
      if (cVar4 == '\0') {
        local_44 = 0;
        if ((local_40 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_48,local_40 << 4);
        }
        local_48 = 0;
        local_40 = 0x80000000;
        local_30[1] = 0;
        if ((local_30[2] & 0x80000000U) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30[0],(local_30[2] & 0x3fffffffU) * 0x30)
          ;
        }
        local_30[0] = 0;
        local_30[2] = 0x80000000;
        local_60 = 0;
        if ((local_5c & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_64,local_5c * 4);
        }
        local_64 = 0;
        local_5c = 0x80000000;
        goto LAB_01090b4d;
      }
      local_34 = 0;
      if (0 < local_44) {
        do {
          local_6c = 0;
          local_e0 = 0x7f7fffee;
          uStack_dc = 0x7f7fffee;
          uStack_d8 = 0x7f7fffee;
          uStack_d4 = 0x7f7fffee;
          FUN_01096d60(local_210,local_30,iVar10 + local_48,&local_6c,&local_e0);
          if (local_6c != 0) {
            pfVar5 = *(float **)(local_6c + 0x28);
            fVar12 = (float10)(**(code **)(*param_6 + 4))(iVar10 + local_48);
            local_14 = (undefined1 (*) [16])(float)fVar12;
            pfVar11 = (float *)(iVar10 + local_48);
            *pfVar11 = (float)local_14 * *pfVar11;
            pfVar11[1] = (float)local_14 * pfVar11[1];
            pfVar11[2] = (float)local_14 * pfVar11[2];
            pfVar11[3] = (float)local_14 * pfVar11[3];
            *(float *)(iVar10 + 0xc + local_48) = (float)fVar12;
            pfVar11 = (float *)(iVar10 + local_48);
            fVar22 = pfVar11[1];
            fVar23 = pfVar11[2];
            fVar24 = pfVar11[3];
            *pfVar5 = *pfVar11 + *pfVar5;
            pfVar5[1] = fVar22 + pfVar5[1];
            pfVar5[2] = fVar23 + pfVar5[2];
            pfVar5[3] = fVar24 + pfVar5[3];
          }
          local_34 = local_34 + 1;
          iVar10 = iVar10 + 0x10;
        } while (local_34 < local_44);
      }
      local_34 = 0;
      if (0 < (int)param_2) {
        local_3c = local_68;
        do {
          fVar22 = 1.0 / local_3c[3];
          *local_3c = fVar22 * *local_3c;
          local_3c[1] = fVar22 * local_3c[1];
          local_3c[2] = fVar22 * local_3c[2];
          local_3c[3] = fVar22 * local_3c[3];
          local_50 = *(float **)(local_64 + local_34 * 4);
          local_170 = *local_3c + 0.0;
          fStack_16c = local_3c[1] + 0.0;
          fStack_168 = local_3c[2] + 0.0;
          local_180 = *local_3c - 0.0;
          fStack_17c = local_3c[1] - 0.0;
          fStack_178 = local_3c[2] - 0.0;
          local_4c = (float *)((int)local_50 * 0x30);
          pfVar11 = (float *)(local_30[0] + (int)local_4c);
          fVar22 = *pfVar11;
          fVar23 = pfVar11[1];
          fVar24 = pfVar11[2];
          fVar25 = pfVar11[3];
          pfVar11 = (float *)(local_30[0] + 0x10 + (int)local_4c);
          fVar26 = *pfVar11;
          fVar27 = pfVar11[1];
          fVar16 = pfVar11[2];
          fVar17 = pfVar11[3];
          uStack_174 = 0;
          uStack_164 = 0;
          if (local_50 == local_18) {
            local_18 = (float *)0x0;
          }
          else {
            local_14 = (undefined1 (*) [16])(local_30[0] + 0x20 + (int)local_4c);
            iVar6 = *(int *)*local_14 * 0x30 + local_30[0];
            iVar10 = *(int *)(iVar6 + (10 - (uint)(*(float **)(iVar6 + 0x28) == local_50)) * 4) *
                     0x30 + local_30[0];
            if (*(int *)(iVar6 + 0x20) == 0) {
              *(float **)(local_30[0] + (int)local_18 * 0x30) = local_24;
              local_24 = local_18;
              local_18 = (float *)((iVar10 - local_30[0]) / 0x30);
              *(undefined4 *)(iVar10 + 0x20) = 0;
            }
            else {
              *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
              local_54 = *(float **)(iVar6 + 0x20);
              *(int *)(local_30[0] + 0x24 +
                      ((uint)(*(int *)(local_30[0] + 0x28 + (int)local_54 * 0x30) ==
                             *(int *)*local_14) + (int)local_54 * 0xc) * 4) =
                   (iVar10 - local_30[0]) / 0x30;
              pfVar11 = *(float **)*local_14;
              *(float **)(local_30[0] + (int)pfVar11 * 0x30) = local_24;
              iVar10 = *(int *)(iVar10 + 0x20) * 0x30 + local_30[0];
              do {
                iVar6 = *(int *)(iVar10 + 0x20);
                iVar7 = ((iVar10 - local_30[0]) / 0x30) * 0x30;
                iVar10 = *(int *)(iVar7 + 0x24 + local_30[0]);
                pauVar9 = (undefined1 (*) [16])(iVar7 + local_30[0]);
                auVar15 = minps(*(undefined1 (*) [16])(local_30[0] + iVar10 * 0x30),
                                *(undefined1 (*) [16])
                                 (local_30[0] + *(int *)(pauVar9[2] + 8) * 0x30));
                auVar13 = maxps(*(undefined1 (*) [16])(local_30[0] + 0x10 + iVar10 * 0x30),
                                *(undefined1 (*) [16])
                                 (local_30[0] + 0x10 + *(int *)(pauVar9[2] + 8) * 0x30));
                *pauVar9 = auVar15;
                pauVar9[1] = auVar13;
                auVar14._0_4_ = -(uint)(fVar26 <= auVar13._0_4_ && auVar15._0_4_ <= fVar22);
                auVar14._4_4_ = -(uint)(fVar27 <= auVar13._4_4_ && auVar15._4_4_ <= fVar23);
                auVar14._8_4_ = -(uint)(auVar15._8_4_ <= fVar24 && fVar16 <= auVar13._8_4_);
                auVar14._12_4_ = -(uint)(fVar17 <= auVar13._12_4_ && auVar15._12_4_ <= fVar25);
                uVar8 = movmskps(pauVar9,auVar14);
                local_24 = pfVar11;
                if ((((byte)uVar8 & 7) == 7) || (iVar6 == 0)) break;
                iVar10 = iVar6 * 0x30 + local_30[0];
              } while (iVar10 != 0);
            }
          }
          pfVar5 = local_18;
          pfVar11 = (float *)(local_30[0] + (int)local_4c);
          *pfVar11 = local_180;
          pfVar11[1] = fStack_17c;
          pfVar11[2] = fStack_178;
          pfVar11[3] = 0.0;
          pfVar11 = (float *)(local_30[0] + 0x10 + (int)local_4c);
          *pfVar11 = local_170;
          pfVar11[1] = fStack_16c;
          pfVar11[2] = fStack_168;
          pfVar11[3] = 0.0;
          local_90 = *(undefined1 (*) [16])(local_30[0] + (int)local_4c);
          pfVar11 = (float *)(local_30[0] + 0x10 + (int)local_4c);
          local_80 = *pfVar11;
          fStack_7c = pfVar11[1];
          fStack_78 = pfVar11[2];
          fStack_74 = pfVar11[3];
          if (local_18 == (float *)0x0) {
            *(undefined4 *)(local_30[0] + 0x20 + (int)local_4c) = 0;
            local_18 = local_50;
          }
          else {
            if (local_24 == (float *)0x0) {
              FUN_010948a0(1);
            }
            iVar10 = (int)local_24 * 0x30;
            local_24 = *(float **)(iVar10 + local_30[0]);
            local_14 = (undefined1 (*) [16])(iVar10 + local_30[0]);
            pauVar9 = (undefined1 (*) [16])((int)pfVar5 * 0x30 + local_30[0]);
            if (*(int *)(pauVar9[2] + 4) != 0) {
              fVar22 = local_90._0_4_ + local_80;
              fVar23 = local_90._4_4_ + fStack_7c;
              fVar24 = local_90._8_4_ + fStack_78;
              fVar25 = local_80 - local_90._0_4_;
              fVar26 = fStack_7c - local_90._4_4_;
              fVar27 = fStack_78 - local_90._8_4_;
              do {
                iVar10 = *(int *)(pauVar9[2] + 4);
                iVar6 = *(int *)(pauVar9[2] + 8);
                auVar15 = minps(*pauVar9,local_90);
                *pauVar9 = auVar15;
                auVar2._4_4_ = fStack_7c;
                auVar2._0_4_ = local_80;
                auVar2._8_4_ = fStack_78;
                auVar2._12_4_ = fStack_74;
                auVar15 = maxps(pauVar9[1],auVar2);
                pauVar9[1] = auVar15;
                iVar6 = iVar6 * 0x30;
                pfVar11 = (float *)(iVar6 + local_30[0]);
                local_1a0 = *pfVar11;
                fStack_19c = pfVar11[1];
                fStack_198 = pfVar11[2];
                fStack_194 = pfVar11[3];
                pfVar11 = (float *)(iVar6 + 0x10 + local_30[0]);
                local_190 = *pfVar11;
                fStack_18c = pfVar11[1];
                fStack_188 = pfVar11[2];
                fStack_184 = pfVar11[3];
                iVar10 = iVar10 * 0x30;
                pfVar11 = (float *)(iVar10 + local_30[0]);
                local_1c0 = *pfVar11;
                fStack_1bc = pfVar11[1];
                fStack_1b8 = pfVar11[2];
                fStack_1b4 = pfVar11[3];
                pfVar11 = (float *)(iVar10 + 0x10 + local_30[0]);
                local_1b0 = *pfVar11;
                fStack_1ac = pfVar11[1];
                fStack_1a8 = pfVar11[2];
                fStack_1a4 = pfVar11[3];
                fVar19 = (local_1c0 + local_1b0) - fVar22;
                fVar20 = (fStack_1bc + fStack_1ac) - fVar23;
                fVar21 = (fStack_1b8 + fStack_1a8) - fVar24;
                fVar16 = (local_1a0 + local_190) - fVar22;
                fVar17 = (fStack_19c + fStack_18c) - fVar23;
                fVar18 = (fStack_198 + fStack_188) - fVar24;
                local_a8[1] = iVar6 + local_30[0];
                local_a8[0] = iVar10 + local_30[0];
                pauVar9 = (undefined1 (*) [16])
                          local_a8[((fStack_18c - fStack_19c) + fVar26 +
                                    (local_190 - local_1a0) + fVar25 +
                                   (fStack_188 - fStack_198) + fVar27) *
                                   (fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18) <
                                   ((fStack_1ac - fStack_1bc) + fVar26 +
                                    (local_1b0 - local_1c0) + fVar25 +
                                   (fStack_1a8 - fStack_1b8) + fVar27) *
                                   (fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21)];
              } while (*(int *)(pauVar9[2] + 4) != 0);
            }
            local_54 = (float *)(((int)local_14 - local_30[0]) / 0x30);
            pfVar11 = local_54;
            if (*(int *)pauVar9[2] != 0) {
              *(float **)
               (local_30[0] + 0x24 +
               ((uint)(*(int *)(local_30[0] + 0x28 + *(int *)pauVar9[2] * 0x30) ==
                      ((int)pauVar9 - local_30[0]) / 0x30) + *(int *)pauVar9[2] * 0xc) * 4) =
                   local_54;
              pfVar11 = local_18;
            }
            local_18 = pfVar11;
            *(undefined4 *)local_14[2] = *(undefined4 *)pauVar9[2];
            *(float **)(local_14[2] + 8) = local_50;
            *(int *)(local_14[2] + 4) = ((int)pauVar9 - local_30[0]) / 0x30;
            *(float **)pauVar9[2] = local_54;
            *(float **)(local_30[0] + 0x20 + (int)local_4c) = local_54;
            auVar15 = minps(*pauVar9,local_90);
            auVar3._4_4_ = fStack_7c;
            auVar3._0_4_ = local_80;
            auVar3._8_4_ = fStack_78;
            auVar3._12_4_ = fStack_74;
            auVar13 = maxps(pauVar9[1],auVar3);
            *local_14 = auVar15;
            local_14[1] = auVar13;
          }
          fVar12 = (float10)(**(code **)(*param_6 + 4))(local_3c);
          local_54 = (float *)(float)fVar12;
          *local_3c = (float)local_54 * *local_3c;
          local_3c[1] = (float)local_54 * local_3c[1];
          local_3c[2] = (float)local_54 * local_3c[2];
          local_3c[3] = (float)local_54 * local_3c[3];
          local_3c[3] = (float)fVar12;
          local_34 = local_34 + 1;
          local_3c = local_3c + 4;
        } while (local_34 < (int)param_2);
      }
      local_38 = (float *)((int)local_38 + 1);
    } while ((int)local_38 < param_4);
  }
  local_44 = 0;
  if (-1 < (int)local_40) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_48,local_40 << 4);
  }
  local_48 = 0;
  local_40 = 0x80000000;
  local_30[1] = 0;
  if (-1 < local_30[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30[0],(local_30[2] & 0x3fffffffU) * 0x30);
  }
  local_30[0] = 0;
  local_30[2] = 0x80000000;
  local_60 = 0;
  if (-1 < (int)local_5c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_64,local_5c * 4);
  }
LAB_01090aa8:
  ::hkBaseObject::hkBaseObject_69();
  return 1;
}

// 01090B70  FUN_01090b70  size=33  [run]
void FUN_01090b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::
  ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>_2
            (param_1,param_2,param_3,param_4,0,0);
  return;
}

// 01090EF0  FUN_01090ef0  size=31  [run]
void __thiscall FUN_01090ef0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_1 = *param_2 - *param_3 * *param_4;
  param_1[1] = fVar7 - fVar1 * fVar4;
  param_1[2] = fVar8 - fVar2 * fVar5;
  param_1[3] = fVar9 - fVar3 * fVar6;
  return;
}

// 01090F10  FUN_01090f10  size=24  [run]
void __thiscall FUN_01090f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01090F80  FUN_01090f80  size=104  [run]
float10 __fastcall FUN_01090f80(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar1 = param_1[1] << 5 ^ param_1[1];
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x16 ^ uVar1;
  uVar3 = param_1[3] + param_1[4] + param_1[2];
  param_1[2] = param_1[3];
  *param_1 = *param_1 + 0x542023ab;
  uVar4 = uVar3 & 0x7fffffff;
  param_1[1] = uVar1;
  param_1[3] = uVar4;
  param_1[4] = (uint)((int)uVar3 < 0);
  iVar2 = uVar1 + *param_1 + uVar4;
  fVar5 = (float10)iVar2;
  if (iVar2 < 0) {
    fVar5 = fVar5 + (float10)4.2949673e+09;
  }
  return fVar5 * (float10)2.3283064e-10;
}

// 01090FF0  FUN_01090ff0  size=29  [run]
bool __thiscall FUN_01090ff0(float *param_1,float *param_2)

{
  return *param_1 < *param_2 || *param_1 == *param_2;
}

// 01091020  FUN_01091020  size=22  [run]
void __thiscall FUN_01091020(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  return;
}

// 01091040  FUN_01091040  size=19  [run]
void __thiscall FUN_01091040(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 + *param_1;
  param_1[1] = fVar1 + param_1[1];
  param_1[2] = fVar2 + param_1[2];
  param_1[3] = fVar3 + param_1[3];
  return;
}

// 01091060  FUN_01091060  size=31  [run]
void __thiscall FUN_01091060(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_1,*param_2);
  *param_1 = auVar1;
  auVar1 = maxps(param_1[1],param_2[1]);
  param_1[1] = auVar1;
  return;
}

// 01091080  FUN_01091080  size=31  [run]
uint __thiscall FUN_01091080(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8));
}

// 010910A0  FUN_010910a0  size=17  [run]
void FUN_010910a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 010910C0  FUN_010910c0  size=13  [run]
undefined4 __thiscall FUN_010910c0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}

// 010910D0  FUN_010910d0  size=25  [run]
void __thiscall FUN_010910d0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_3[1];
  iVar5 = param_3[2];
  iVar6 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = iVar1 + iVar4;
  param_1[2] = iVar2 + iVar5;
  param_1[3] = iVar3 + iVar6;
  return;
}

// 010910F0  FUN_010910f0  size=36  [run]
void __thiscall FUN_010910f0(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = (int)*param_2 ^ -(uint)(2.1474836e+09 <= *param_2);
  param_1[1] = (int)fVar1 ^ -(uint)(2.1474836e+09 <= fVar1);
  param_1[2] = (int)fVar2 ^ -(uint)(2.1474836e+09 <= fVar2);
  param_1[3] = (int)fVar3 ^ -(uint)(2.1474836e+09 <= fVar3);
  return;
}

// 01091120  FUN_01091120  size=48  [run]
void __thiscall FUN_01091120(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *param_1 = *param_2 & *param_3 | ~*param_2 & *param_4;
  param_1[1] = uVar1 & uVar7 | ~uVar1 & uVar4;
  param_1[2] = uVar2 & uVar8 | ~uVar2 & uVar5;
  param_1[3] = uVar3 & uVar9 | ~uVar3 & uVar6;
  return;
}

// 01091180  FUN_01091180  size=20  [run]
void __thiscall FUN_01091180(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010911C0  FUN_010911c0  size=20  [run]
void __thiscall FUN_010911c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 010911F0  hkGeometryProcessing::IFunction<hkVector4,float>::vf00  size=34  [run]
undefined4 * __thiscall
hkGeometryProcessing::IFunction<hkVector4,float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01091220  FUN_01091220  size=14  [run]
int __thiscall FUN_01091220(int param_1,int param_2)

{
  return param_1 + 8 + param_2 * 4;
}

// 01091230  FUN_01091230  size=14  [run]
int __thiscall FUN_01091230(int param_1,int param_2)

{
  return param_1 + 0x14 + param_2 * 4;
}

// 01091260  FUN_01091260  size=36  [run]
uint FUN_01091260(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(uint *)(param_2 + 8) <= uVar1) &&
     (uVar1 = (uint)(*(uint *)(param_2 + 8) < uVar1), -1 < (int)uVar1)) {
    return (uint)(uVar1 == 0);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// 01091290  FUN_01091290  size=20  [run]
void __thiscall FUN_01091290(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 010912B0  FUN_010912b0  size=20  [run]
void __thiscall FUN_010912b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 010912D0  FUN_010912d0  size=20  [run]
void __thiscall FUN_010912d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 01091320  FUN_01091320  size=18  [run]
int __thiscall FUN_01091320(int *param_1,int param_2)

{
  return param_2 * 0x50 + *param_1;
}

// 01091340  FUN_01091340  size=18  [run]
int __thiscall FUN_01091340(int *param_1,int param_2)

{
  return param_2 * 0x50 + *param_1;
}

// 01091370  FUN_01091370  size=20  [run]
void __thiscall FUN_01091370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *param_1 = param_2[2];
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 01091390  FUN_01091390  size=20  [run]
void __thiscall FUN_01091390(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2._8_4_ = auVar1._0_4_;
  auVar2._0_8_ = auVar1._4_8_;
  auVar2._12_4_ = auVar1._12_4_;
  *param_1 = auVar2;
  return;
}

// 010913C0  FUN_010913c0  size=20  [run]
uint FUN_010913c0(char param_1)

{
  return 9 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010913F0  FUN_010913f0  size=20  [run]
void __thiscall FUN_010913f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 01091410  FUN_01091410  size=20  [run]
void __thiscall FUN_01091410(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2._8_4_ = auVar1._0_4_;
  auVar2._0_8_ = auVar1._4_8_;
  auVar2._12_4_ = auVar1._8_4_;
  *param_1 = auVar2;
  return;
}

// 01091450  FUN_01091450  size=35  [run]
void FUN_01091450(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 010914F0  FUN_010914f0  size=15  [run]
int __thiscall FUN_010914f0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01091500  FUN_01091500  size=15  [run]
int __thiscall FUN_01091500(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01091510  FUN_01091510  size=15  [run]
int __thiscall FUN_01091510(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01091520  FUN_01091520  size=17  [run]
void __thiscall FUN_01091520(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24 + param_2 * 4) = param_3;
  return;
}

// 01091560  FUN_01091560  size=49  [run]
void FUN_01091560(uint *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2 = rcpps(in_XMM3,auVar1);
  *param_1 = ~-(uint)(auVar1._0_4_ == 0.0) &
             (uint)((2.0 - auVar1._0_4_ * auVar2._0_4_) * auVar2._0_4_);
  param_1[1] = ~-(uint)(auVar1._4_4_ == 0.0) &
               (uint)((2.0 - auVar1._4_4_ * auVar2._4_4_) * auVar2._4_4_);
  param_1[2] = ~-(uint)(auVar1._8_4_ == 0.0) &
               (uint)((2.0 - auVar1._8_4_ * auVar2._8_4_) * auVar2._8_4_);
  param_1[3] = ~-(uint)(auVar1._12_4_ == 0.0) &
               (uint)((2.0 - auVar1._12_4_ * auVar2._12_4_) * auVar2._12_4_);
  return;
}

// 010915A0  FUN_010915a0  size=26  [run]
void __thiscall FUN_010915a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 010915C0  FUN_010915c0  size=24  [run]
void __thiscall FUN_010915c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return;
}

// 010915E0  FUN_010915e0  size=14  [run]
void __thiscall FUN_010915e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010915F0  FUN_010915f0  size=18  [run]
int __thiscall FUN_010915f0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01091630  FUN_01091630  size=52  [run]
undefined4 __thiscall FUN_01091630(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x30);
    return uVar3;
  }
  return 0;
}

// 01091670  FUN_01091670  size=45  [run]
undefined4 __thiscall FUN_01091670(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0x30);
    return uVar1;
  }
  return 0;
}

// 010916B0  FUN_010916b0  size=28  [run]
void __thiscall FUN_010916b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 010916F0  FUN_010916f0  size=38  [run]
void FUN_010916f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 10;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 01091770  FUN_01091770  size=26  [run]
void FUN_01091770(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 01091790  FUN_01091790  size=14  [run]
undefined4 __thiscall FUN_01091790(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x24 + param_2 * 4);
}

// 010917B0  FUN_010917b0  size=13  [run]
void __thiscall FUN_010917b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// 010917D0  FUN_010917d0  size=30  [run]
void __thiscall FUN_010917d0(int *param_1,int param_2)

{
  *(int *)(*param_1 + param_2 * 0x30) = param_1[3];
  param_1[3] = param_2;
  return;
}

// 01091810  FUN_01091810  size=20  [run]
void __thiscall FUN_01091810(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01091830  FUN_01091830  size=20  [run]
void __thiscall FUN_01091830(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 010918A0  FUN_010918a0  size=15  [run]
int __thiscall FUN_010918a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01091900  FUN_01091900  size=13  [run]
void __thiscall FUN_01091900(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01091950  FUN_01091950  size=15  [run]
int __thiscall FUN_01091950(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 01091980  FUN_01091980  size=29  [run]
void __thiscall FUN_01091980(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010919B0  FUN_010919b0  size=29  [run]
void __thiscall FUN_010919b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010919D0  FUN_010919d0  size=26  [run]
void __thiscall FUN_010919d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01091A10  FUN_01091a10  size=25  [run]
void __thiscall FUN_01091a10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01091A30  FUN_01091a30  size=11  [run]
int FUN_01091a30(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01091A40  FUN_01091a40  size=44  [run]
void __thiscall FUN_01091a40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01091A70  FUN_01091a70  size=21  [run]
void FUN_01091a70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 01091A90  FUN_01091a90  size=38  [run]
void __thiscall FUN_01091a90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return;
}

// 01091AC0  FUN_01091ac0  size=34  [run]
void __thiscall
FUN_01091ac0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  auVar1 = maxps(param_2[1],param_3[1]);
  param_1[1] = auVar1;
  return;
}

// 01091B70  FUN_01091b70  size=18  [run]
void FUN_01091b70(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return;
}

// 01091BA0  FUN_01091ba0  size=52  [run]
undefined4 __thiscall FUN_01091ba0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01091BF0  FUN_01091bf0  size=34  [run]
void FUN_01091bf0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01091C20  FUN_01091c20  size=33  [run]
void FUN_01091c20(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01091C50  FUN_01091c50  size=32  [run]
void __thiscall FUN_01091c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01091C70  FUN_01091c70  size=51  [run]
int __thiscall FUN_01091c70(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01091CB0  FUN_01091cb0  size=34  [run]
void FUN_01091cb0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01091CE0  FUN_01091ce0  size=33  [run]
void FUN_01091ce0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01091D10  FUN_01091d10  size=85  [run]
void __thiscall FUN_01091d10(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x604) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x608);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x604) + 0x608) = *(undefined4 *)(param_2 + 0x608);
  }
  if (*(int *)(param_2 + 0x608) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x608) + 0x604) = *(undefined4 *)(param_2 + 0x604);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0x610);
  return;
}

// 01091D70  FUN_01091d70  size=85  [run]
void __thiscall FUN_01091d70(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xa04) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xa08);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xa04) + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  }
  if (*(int *)(param_2 + 0xa08) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xa08) + 0xa04) = *(undefined4 *)(param_2 + 0xa04);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0xa10);
  return;
}

// 01091DE0  FUN_01091de0  size=26  [run]
void __thiscall FUN_01091de0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01091E10  FUN_01091e10  size=25  [run]
void __thiscall FUN_01091e10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 01091EA0  FUN_01091ea0  size=28  [run]
void __thiscall FUN_01091ea0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01091ED0  FUN_01091ed0  size=64  [run]
void FUN_01091ed0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  *param_3 = *param_1 - fVar1;
  param_3[1] = fVar5 - fVar2;
  param_3[2] = fVar6 - fVar3;
  param_3[3] = fVar7 - fVar4;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  param_3[4] = *param_1 + fVar1;
  param_3[5] = fVar5 + fVar2;
  param_3[6] = fVar6 + fVar3;
  param_3[7] = fVar7 + fVar4;
  *param_3 = *param_3;
  param_3[1] = param_3[1];
  param_3[2] = param_3[2];
  param_3[3] = 0.0;
  param_3[4] = param_3[4];
  param_3[5] = param_3[5];
  param_3[6] = param_3[6];
  param_3[7] = 0.0;
  return;
}

// 01091FF0  FUN_01091ff0  size=42  [run]
void __thiscall FUN_01091ff0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  uVar1 = param_2[1];
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  uVar1 = param_2[2];
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  return;
}

// 01092020  FUN_01092020  size=44  [run]
void __thiscall FUN_01092020(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar9 = param_2[0xb];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar15 = param_1[3];
  fVar16 = param_1[9];
  fVar17 = param_1[10];
  fVar18 = param_1[0xb];
  *param_3 = param_2[4] * param_1[4] + *param_2 * *param_1 + param_2[8] * param_1[8];
  param_3[1] = fVar1 * fVar10 + fVar4 * fVar13 + fVar7 * fVar16;
  param_3[2] = fVar2 * fVar11 + fVar5 * fVar14 + fVar8 * fVar17;
  param_3[3] = fVar3 * fVar12 + fVar6 * fVar15 + fVar9 * fVar18;
  return;
}

// 01092060  FUN_01092060  size=34  [run]
void FUN_01092060(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  *param_2 = *param_1 + param_1[4];
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  param_2[4] = param_1[4] - *param_1;
  param_2[5] = fVar1 - fVar4;
  param_2[6] = fVar2 - fVar5;
  param_2[7] = fVar3 - fVar6;
  return;
}

// 01092090  FUN_01092090  size=26  [run]
void __thiscall FUN_01092090(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 < *param_1);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return;
}

// 010920B0  FUN_010920b0  size=40  [run]
void __thiscall FUN_010920b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_2 = fVar2 + fVar1 + fVar3;
  param_2[1] = fVar2 + fVar1 + fVar3;
  param_2[2] = fVar2 + fVar1 + fVar3;
  param_2[3] = fVar2 + fVar1 + fVar3;
  return;
}

// 010920E0  FUN_010920e0  size=40  [run]
void __thiscall FUN_010920e0(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  auVar5._4_4_ = uVar2;
  auVar5._0_4_ = uVar2;
  auVar5._8_4_ = uVar2;
  auVar5._12_4_ = uVar2;
  auVar6._4_4_ = uVar1;
  auVar6._0_4_ = uVar1;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = uVar1;
  auVar6 = minps(auVar5,auVar6);
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = uVar3;
  auVar4._8_4_ = uVar3;
  auVar4._12_4_ = uVar3;
  auVar6 = minps(auVar4,auVar6);
  *param_2 = auVar6;
  return;
}

// 01092110  FUN_01092110  size=50  [run]
void __thiscall FUN_01092110(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_3 = param_3 * 0x10;
  uVar1 = *(uint *)(&UNK_017d5c08 + param_3) & param_1[2] |
          *(uint *)(&DAT_017d5c00 + param_3) & *param_1;
  uVar2 = *(uint *)(&UNK_017d5c0c + param_3) & param_1[3] |
          *(uint *)(&UNK_017d5c04 + param_3) & param_1[1];
  uVar3 = *(uint *)(&DAT_017d5c00 + param_3) & *param_1 |
          *(uint *)(&UNK_017d5c08 + param_3) & param_1[2];
  uVar4 = *(uint *)(&UNK_017d5c04 + param_3) & param_1[1] |
          *(uint *)(&UNK_017d5c0c + param_3) & param_1[3];
  *param_2 = uVar2 | uVar1;
  param_2[1] = uVar1 | uVar2;
  param_2[2] = uVar4 | uVar3;
  param_2[3] = uVar3 | uVar4;
  return;
}

// 01092150  FUN_01092150  size=41  [run]
uint __thiscall FUN_01092150(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  
  auVar1._4_4_ = -(uint)(param_2[1] == param_1[1]);
  auVar1._0_4_ = -(uint)(*param_2 == *param_1);
  auVar1._8_4_ = -(uint)(param_2[2] == param_1[2]);
  auVar1._12_4_ = -(uint)(param_2[3] == param_1[3]);
  uVar2 = movmskps(param_2,auVar1);
  if ((uVar2 & 7) != 0) {
    return (uint)(byte)(&DAT_0182bb80)[uVar2];
  }
  return 0xffffffff;
}

// 01092180  FUN_01092180  size=27  [run]
void __thiscall FUN_01092180(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = (param_1[4] + *param_1) * 0.5;
  param_2[1] = (fVar1 + fVar4) * 0.5;
  param_2[2] = (fVar2 + fVar5) * 0.5;
  param_2[3] = (fVar3 + fVar6) * 0.5;
  return;
}

// 010921A0  FUN_010921a0  size=27  [run]
void __thiscall FUN_010921a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = (param_1[4] - *param_1) * 0.5;
  param_2[1] = (fVar1 - fVar4) * 0.5;
  param_2[2] = (fVar2 - fVar5) * 0.5;
  param_2[3] = (fVar3 - fVar6) * 0.5;
  return;
}

// 010921C0  FUN_010921c0  size=17  [run]
void FUN_010921c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 010921E0  FUN_010921e0  size=20  [run]
void __thiscall FUN_010921e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01092200  FUN_01092200  size=39  [run]
void FUN_01092200(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01092330  hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>  size=23  [run]
void __thiscall
hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::
ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>
          (undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = vftable;
  param_1[1] = *param_2;
  return;
}

// 01092350  hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::vf04  size=6  [run]
float10 __fastcall
hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::vf04
          (int param_1)

{
  return (float10)*(float *)(param_1 + 4);
}

// 010923B0  hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::vf00  size=34  [run]
undefined4 * __thiscall
hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4,float>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = IFunction<hkVector4,float>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01092400  FUN_01092400  size=71  [run]
void __thiscall FUN_01092400(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x50 + *param_1);
    iVar2 = (param_1[1] * 0x50 + *param_1) - (int)puVar1;
    iVar3 = 10;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01092450  FUN_01092450  size=54  [run]
int __thiscall FUN_01092450(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x50);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x50 + *param_1;
}

// 01092490  FUN_01092490  size=48  [run]
void __thiscall FUN_01092490(uint *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2 = rcpps(in_XMM3,auVar1);
  *param_1 = ~-(uint)(auVar1._0_4_ == 0.0) &
             (uint)((2.0 - auVar1._0_4_ * auVar2._0_4_) * auVar2._0_4_);
  param_1[1] = ~-(uint)(auVar1._4_4_ == 0.0) &
               (uint)((2.0 - auVar1._4_4_ * auVar2._4_4_) * auVar2._4_4_);
  param_1[2] = ~-(uint)(auVar1._8_4_ == 0.0) &
               (uint)((2.0 - auVar1._8_4_ * auVar2._8_4_) * auVar2._8_4_);
  param_1[3] = ~-(uint)(auVar1._12_4_ == 0.0) &
               (uint)((2.0 - auVar1._12_4_ * auVar2._12_4_) * auVar2._12_4_);
  return;
}

// 010924C0  FUN_010924c0  size=26  [run]
void FUN_010924c0(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 010924E0  FUN_010924e0  size=24  [run]
void __thiscall FUN_010924e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 01092500  FUN_01092500  size=32  [run]
void __thiscall FUN_01092500(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 9 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 01092520  FUN_01092520  size=14  [run]
void __thiscall FUN_01092520(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01092540  FUN_01092540  size=53  [run]
undefined4 __thiscall FUN_01092540(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x30);
    return uVar3;
  }
  return 0;
}

// 01092580  FUN_01092580  size=46  [run]
undefined4 __thiscall FUN_01092580(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0x30);
    return uVar1;
  }
  return 0;
}

// 010925C0  FUN_010925c0  size=52  [run]
undefined4 __thiscall FUN_010925c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x30);
    return uVar3;
  }
  return 0;
}

// 01092600  FUN_01092600  size=61  [run]
void __thiscall FUN_01092600(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01092640  FUN_01092640  size=60  [run]
void __thiscall FUN_01092640(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01092680  FUN_01092680  size=52  [run]
undefined4 __thiscall FUN_01092680(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 010926C0  FUN_010926c0  size=46  [run]
void FUN_010926c0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010926F0  FUN_010926f0  size=34  [run]
void __thiscall FUN_010926f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_01091a40(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 01092720  FUN_01092720  size=53  [run]
undefined4 __thiscall FUN_01092720(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01092780  FUN_01092780  size=31  [run]
void FUN_01092780(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010927A0  FUN_010927a0  size=39  [run]
void FUN_010927a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return;
}

// 01092840  FUN_01092840  size=13  [run]
void __thiscall FUN_01092840(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01092850  FUN_01092850  size=57  [run]
void __thiscall FUN_01092850(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01092890  FUN_01092890  size=92  [run]
void __thiscall FUN_01092890(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,4);
  }
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      *puVar2 = *(undefined4 *)(param_3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 010928F0  FUN_010928f0  size=28  [run]
void __thiscall FUN_010928f0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01092910  FUN_01092910  size=57  [run]
void __thiscall FUN_01092910(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01092950  FUN_01092950  size=92  [run]
void __thiscall FUN_01092950(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,4);
  }
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      *puVar2 = *(undefined4 *)(param_3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 010929B0  FUN_010929b0  size=94  [run]
void __fastcall FUN_010929b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x604) == 0) {
      *param_1 = *(int *)(iVar1 + 0x608);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x604) + 0x608) = *(undefined4 *)(iVar1 + 0x608);
    }
    if (*(int *)(iVar1 + 0x608) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x608) + 0x604) = *(undefined4 *)(iVar1 + 0x604);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x610);
    iVar1 = *param_1;
  }
  return;
}

// 01092A20  FUN_01092a20  size=94  [run]
void __fastcall FUN_01092a20(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  return;
}

// 01092A90  FUN_01092a90  size=62  [run]
void FUN_01092a90(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01092AD0  FUN_01092ad0  size=73  [run]
void FUN_01092ad0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01092B20  FUN_01092b20  size=31  [run]
void __thiscall FUN_01092b20(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = minps(*param_1,*param_2);
  auVar2 = maxps(param_1[1],param_2[1]);
  *param_1 = auVar1;
  param_1[1] = auVar2;
  return;
}

// 01092B50  FUN_01092b50  size=32  [run]
void __thiscall FUN_01092b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01092B70  FUN_01092b70  size=46  [run]
int __fastcall FUN_01092b70(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01092BA0  FUN_01092ba0  size=18  [run]
int __thiscall FUN_01092ba0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01092BC0  FUN_01092bc0  size=49  [run]
void __thiscall FUN_01092bc0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  param_3[9] = *param_2;
  puVar4 = (undefined4 *)(*param_1 + *param_2 * 0x30);
  param_3[8] = puVar4;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_3 = *puVar4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_3[4] = puVar4[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  return;
}

// 01092C00  FUN_01092c00  size=178  [run]
bool FUN_01092c00(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (*param_2 + param_2[4]) - *param_1;
  fVar5 = (param_2[1] + param_2[5]) - param_1[1];
  fVar6 = (param_2[2] + param_2[6]) - param_1[2];
  fVar1 = (param_3[4] + *param_3) - *param_1;
  fVar2 = (param_3[5] + param_3[1]) - param_1[1];
  fVar3 = (param_3[6] + param_3[2]) - param_1[2];
  return (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) *
         ((param_3[5] - param_3[1]) + param_1[5] + (param_3[4] - *param_3) + param_1[4] +
         (param_3[6] - param_3[2]) + param_1[6]) <
         (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6) *
         ((param_2[5] - param_2[1]) + param_1[5] + (param_2[4] - *param_2) + param_1[4] +
         (param_2[6] - param_2[2]) + param_1[6]);
}

// 01092CC0  FUN_01092cc0  size=61  [run]
void __thiscall FUN_01092cc0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01092D00  FUN_01092d00  size=88  [run]
void __thiscall FUN_01092d00(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 01092D60  FUN_01092d60  size=52  [run]
undefined4 __thiscall FUN_01092d60(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x40);
    return uVar3;
  }
  return 0;
}

// 01092DA0  FUN_01092da0  size=31  [run]
void FUN_01092da0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    piVar1 = (int *)(iVar2 + 0x60c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_01091d10(iVar2);
    }
  }
  return;
}

// 01092DC0  FUN_01092dc0  size=31  [run]
void FUN_01092dc0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    piVar1 = (int *)(iVar2 + 0xa0c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_01091d70(iVar2);
    }
  }
  return;
}

// 01092E20  FUN_01092e20  size=128  [run]
bool __thiscall FUN_01092e20(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  iVar5 = *(int *)param_1[1];
  pfVar1 = (float *)(iVar5 + param_2 * 0x30);
  pfVar3 = (float *)(iVar5 + 0x10 + param_2 * 0x30);
  pfVar2 = (float *)(iVar5 + param_3 * 0x30);
  pfVar4 = (float *)(iVar5 + 0x10 + param_3 * 0x30);
  iVar5 = *param_1 * 0x10;
  return (float)((uint)((pfVar3[3] + pfVar1[3]) * 0.5) & *(uint *)(&UNK_017d5c0c + iVar5) |
                 (uint)((pfVar3[1] + pfVar1[1]) * 0.5) & *(uint *)(&UNK_017d5c04 + iVar5) |
                (uint)((pfVar3[2] + pfVar1[2]) * 0.5) & *(uint *)(&UNK_017d5c08 + iVar5) |
                (uint)((*pfVar3 + *pfVar1) * 0.5) & *(uint *)(&DAT_017d5c00 + iVar5)) <
         (float)((uint)((pfVar2[3] + pfVar4[3]) * 0.5) & *(uint *)(&UNK_017d5c0c + iVar5) |
                 (uint)((pfVar2[1] + pfVar4[1]) * 0.5) & *(uint *)(&UNK_017d5c04 + iVar5) |
                (uint)((pfVar2[2] + pfVar4[2]) * 0.5) & *(uint *)(&UNK_017d5c08 + iVar5) |
                (uint)((*pfVar2 + *pfVar4) * 0.5) & *(uint *)(&DAT_017d5c00 + iVar5));
}

// 01092EA0  FUN_01092ea0  size=39  [run]
void FUN_01092ea0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return;
}

// 01092ED0  FUN_01092ed0  size=39  [run]
void FUN_01092ed0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01092F00  FUN_01092f00  size=11  [run]
undefined4 FUN_01092f00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// 01092F10  FUN_01092f10  size=46  [run]
void __thiscall FUN_01092f10(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  param_2[9] = param_1[6];
  puVar4 = (undefined4 *)(*param_1 + param_1[6] * 0x30);
  param_2[8] = puVar4;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_2[4] = puVar4[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return;
}

// 01092F50  FUN_01092f50  size=255  [run]
bool FUN_01092f50(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar7 = param_1[2];
  fVar17 = *param_4 - fVar4;
  fVar18 = param_4[1] - fVar5;
  fVar19 = param_4[2] - fVar7;
  fVar12 = *param_2 - fVar4;
  fVar15 = param_2[1] - fVar5;
  fVar16 = param_2[2] - fVar7;
  fVar4 = *param_3 - fVar4;
  fVar5 = param_3[1] - fVar5;
  fVar7 = param_3[2] - fVar7;
  fVar9 = param_3[3] - param_1[3];
  fVar8 = *param_5;
  fVar11 = param_5[1];
  fVar2 = param_5[2];
  fVar6 = (fVar7 * fVar8 - fVar4 * fVar2) * fVar15;
  fVar10 = (fVar9 * param_5[3] - fVar9 * param_5[3]) * (param_2[3] - param_1[3]);
  fVar9 = (fVar17 * fVar11 - fVar18 * fVar8) * fVar7 +
          (fVar18 * fVar2 - fVar19 * fVar11) * fVar4 + (fVar19 * fVar8 - fVar17 * fVar2) * fVar5;
  fVar15 = (fVar12 * fVar11 - fVar15 * fVar8) * fVar19 +
           (fVar15 * fVar2 - fVar16 * fVar11) * fVar17 + (fVar16 * fVar8 - fVar12 * fVar2) * fVar18;
  fVar4 = (fVar4 * fVar11 - fVar5 * fVar8) * fVar16 +
          (fVar5 * fVar2 - fVar7 * fVar11) * fVar12 + fVar6;
  fVar10 = fVar10 + fVar6 + fVar10;
  if (param_7 != (float *)0x0) {
    auVar13._4_4_ = fVar4;
    auVar13._0_4_ = fVar4;
    auVar13._8_4_ = fVar4;
    auVar13._12_4_ = fVar4;
    fVar5 = fVar15 + fVar9 + fVar4;
    fVar7 = fVar15 + fVar9 + fVar4;
    fVar8 = fVar15 + fVar9 + fVar4;
    fVar11 = fVar15 + fVar9 + fVar4;
    auVar14._4_4_ = fVar7;
    auVar14._0_4_ = fVar5;
    auVar14._8_4_ = fVar8;
    auVar14._12_4_ = fVar11;
    auVar14 = rcpps(auVar13,auVar14);
    *param_7 = (2.0 - auVar14._0_4_ * fVar5) * auVar14._0_4_ * fVar9;
    param_7[1] = (2.0 - auVar14._4_4_ * fVar7) * auVar14._4_4_ * fVar15;
    param_7[2] = (2.0 - auVar14._8_4_ * fVar8) * auVar14._8_4_ * fVar4;
    param_7[3] = (2.0 - auVar14._12_4_ * fVar11) * auVar14._12_4_ * fVar10;
  }
  auVar1._4_4_ = -(uint)(param_6[1] < fVar15);
  auVar1._0_4_ = -(uint)(*param_6 < fVar9);
  auVar1._8_4_ = -(uint)(param_6[2] < fVar4);
  auVar1._12_4_ = -(uint)(param_6[3] < fVar10);
  uVar3 = movmskps(param_7,auVar1);
  return ((byte)uVar3 & 7) == 7;
}

// 01093250  FUN_01093250  size=81  [run]
undefined4 __thiscall FUN_01093250(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3 - (param_2[4] + *param_2) * 0.5;
  fVar2 = param_3[1] - (param_2[5] + param_2[1]) * 0.5;
  fVar3 = param_3[2] - (param_2[6] + param_2[2]) * 0.5;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar2 + fVar1 + fVar3;
  if (fVar4 < *param_4) {
    *param_4 = fVar4;
    param_4[1] = fVar2 + fVar1 + fVar3;
    param_4[2] = fVar2 + fVar1 + fVar3;
    param_4[3] = fVar2 + fVar1 + fVar3;
    *param_1 = param_2[8];
  }
  return 1;
}

// 010932B0  FUN_010932b0  size=49  [run]
int __fastcall FUN_010932b0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x50);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x50 + *param_1;
}

// 010932F0  FUN_010932f0  size=27  [run]
void __thiscall FUN_010932f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[1] = uVar1 & 3;
  *param_1 = uVar1 & 0xfffffffc;
  return;
}

// 01093310  FUN_01093310  size=63  [run]
void __thiscall FUN_01093310(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093350  FUN_01093350  size=71  [run]
int __thiscall FUN_01093350(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = iVar1 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x30);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar1 * 0x30 + *param_1;
}

// 010933A0  FUN_010933a0  size=102  [run]
void __thiscall FUN_010933a0(int *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  iVar2 = param_3 - param_1[1];
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (0 < iVar2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_4;
        puVar1[1] = param_4[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01093410  FUN_01093410  size=18  [run]
int __thiscall FUN_01093410(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01093430  FUN_01093430  size=61  [run]
void __fastcall FUN_01093430(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093470  FUN_01093470  size=60  [run]
void __fastcall FUN_01093470(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010934B0  FUN_010934b0  size=71  [run]
int __thiscall FUN_010934b0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x30);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x30 + *param_1;
}

// 01093500  FUN_01093500  size=29  [run]
int __thiscall FUN_01093500(int *param_1,int param_2)

{
  return (param_2 - *param_1) / 0x30;
}

// 01093520  FUN_01093520  size=58  [run]
void __thiscall FUN_01093520(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01093560  FUN_01093560  size=25  [run]
void FUN_01093560(undefined4 param_1,undefined4 param_2)

{
  FUN_01092950(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01093580  FUN_01093580  size=58  [run]
void __thiscall FUN_01093580(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010935C0  FUN_010935c0  size=25  [run]
void FUN_010935c0(undefined4 param_1,undefined4 param_2)

{
  FUN_01092890(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010935E0  FUN_010935e0  size=67  [run]
void __thiscall FUN_010935e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar1 = *param_1;
  iVar2 = *(int *)(param_2 * 0x30 + 0x24 + iVar1);
  pauVar3 = (undefined1 (*) [16])(param_2 * 0x30 + iVar1);
  auVar4 = minps(*(undefined1 (*) [16])(iVar1 + iVar2 * 0x30),
                 *(undefined1 (*) [16])(iVar1 + *(int *)(pauVar3[2] + 8) * 0x30));
  auVar5 = maxps(*(undefined1 (*) [16])(iVar1 + 0x10 + iVar2 * 0x30),
                 *(undefined1 (*) [16])(iVar1 + 0x10 + *(int *)(pauVar3[2] + 8) * 0x30));
  *pauVar3 = auVar4;
  pauVar3[1] = auVar5;
  return;
}

// 01093630  FUN_01093630  size=98  [run]
bool __thiscall FUN_01093630(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = *param_1;
  iVar2 = *(int *)(param_2 * 0x30 + 0x24 + iVar1);
  pauVar4 = (undefined1 (*) [16])(param_2 * 0x30 + iVar1);
  auVar7 = maxps(*(undefined1 (*) [16])(iVar1 + 0x10 + iVar2 * 0x30),
                 *(undefined1 (*) [16])(iVar1 + 0x10 + *(int *)(pauVar4[2] + 8) * 0x30));
  auVar6 = minps(*(undefined1 (*) [16])(iVar1 + iVar2 * 0x30),
                 *(undefined1 (*) [16])(iVar1 + *(int *)(pauVar4[2] + 8) * 0x30));
  *pauVar4 = auVar6;
  pauVar4[1] = auVar7;
  auVar3._4_4_ = -(uint)(param_3[5] <= auVar7._4_4_ && auVar6._4_4_ <= param_3[1]);
  auVar3._0_4_ = -(uint)(param_3[4] <= auVar7._0_4_ && auVar6._0_4_ <= *param_3);
  auVar3._8_4_ = -(uint)(param_3[6] <= auVar7._8_4_ && auVar6._8_4_ <= param_3[2]);
  auVar3._12_4_ = -(uint)(param_3[7] <= auVar7._12_4_ && auVar6._12_4_ <= param_3[3]);
  uVar5 = movmskps(param_3,auVar3);
  return ((byte)uVar5 & 7) == 7;
}

// 010936A0  FUN_010936a0  size=31  [run]
bool __thiscall FUN_010936a0(int *param_1,int param_2,int param_3)

{
  return *(int *)(*param_1 + 0x28 + param_2 * 0x30) == param_3;
}

// 010936C0  FUN_010936c0  size=619  [run]
void FUN_010936c0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int local_10c [32];
  int local_8c [32];
  int *local_c;
  int *local_8;
  
  if (1 < param_2) {
    local_8c[0] = param_1;
    local_10c[0] = param_1 + -4 + param_2 * 4;
    param_2 = 0;
    do {
      local_8 = (int *)local_8c[param_2];
      local_c = (int *)local_10c[param_2];
LAB_01093717:
      iVar6 = local_8[(int)local_c - (int)local_8 >> 3];
      piVar13 = local_8;
      piVar14 = local_c;
      do {
        iVar7 = *param_4;
        pfVar2 = (float *)(iVar7 + iVar6 * 0x30);
        pfVar4 = (float *)(iVar7 + 0x10 + iVar6 * 0x30);
        pfVar3 = (float *)(iVar7 + *piVar13 * 0x30);
        pfVar5 = (float *)(iVar7 + 0x10 + *piVar13 * 0x30);
        iVar12 = param_3 * 0x10;
        uVar8 = *(uint *)(&DAT_017d5c00 + iVar12);
        uVar9 = *(uint *)(&UNK_017d5c04 + iVar12);
        uVar10 = *(uint *)(&UNK_017d5c08 + iVar12);
        uVar11 = *(uint *)(&UNK_017d5c0c + iVar12);
        if ((float)((uint)((pfVar3[3] + pfVar5[3]) * 0.5) & uVar11 |
                    (uint)((pfVar3[1] + pfVar5[1]) * 0.5) & uVar9 |
                   (uint)((pfVar3[2] + pfVar5[2]) * 0.5) & uVar10 |
                   (uint)((*pfVar3 + *pfVar5) * 0.5) & uVar8) <
            (float)((uint)((pfVar2[3] + pfVar4[3]) * 0.5) & uVar11 |
                    (uint)((pfVar2[1] + pfVar4[1]) * 0.5) & uVar9 |
                   (uint)((pfVar2[2] + pfVar4[2]) * 0.5) & uVar10 |
                   (uint)((*pfVar2 + *pfVar4) * 0.5) & uVar8)) {
          pfVar3 = (float *)(iVar7 + 0x10 + iVar6 * 0x30);
          pfVar2 = (float *)(iVar7 + iVar6 * 0x30);
          do {
            piVar1 = piVar13 + 1;
            piVar13 = piVar13 + 1;
            pfVar5 = (float *)(iVar7 + 0x10 + *piVar1 * 0x30);
            pfVar4 = (float *)(iVar7 + *piVar1 * 0x30);
          } while ((float)((uint)((pfVar5[3] + pfVar4[3]) * 0.5) & uVar11 |
                           (uint)((pfVar5[1] + pfVar4[1]) * 0.5) & uVar9 |
                          (uint)((pfVar5[2] + pfVar4[2]) * 0.5) & uVar10 |
                          (uint)((*pfVar5 + *pfVar4) * 0.5) & uVar8) <
                   (float)((uint)((pfVar3[3] + pfVar2[3]) * 0.5) & uVar11 |
                           (uint)((pfVar3[1] + pfVar2[1]) * 0.5) & uVar9 |
                          (uint)((pfVar3[2] + pfVar2[2]) * 0.5) & uVar10 |
                          (uint)((*pfVar3 + *pfVar2) * 0.5) & uVar8));
        }
        pfVar4 = (float *)(iVar7 + 0x10 + iVar6 * 0x30);
        pfVar2 = (float *)(iVar7 + iVar6 * 0x30);
        pfVar3 = (float *)(iVar7 + *piVar14 * 0x30);
        pfVar5 = (float *)(iVar7 + 0x10 + *piVar14 * 0x30);
        if ((float)((uint)((pfVar4[3] + pfVar2[3]) * 0.5) & uVar11 |
                    (uint)((pfVar4[1] + pfVar2[1]) * 0.5) & uVar9 |
                   (uint)((pfVar4[2] + pfVar2[2]) * 0.5) & uVar10 |
                   (uint)((*pfVar4 + *pfVar2) * 0.5) & uVar8) <
            (float)((uint)((pfVar3[3] + pfVar5[3]) * 0.5) & uVar11 |
                    (uint)((pfVar3[1] + pfVar5[1]) * 0.5) & uVar9 |
                   (uint)((pfVar3[2] + pfVar5[2]) * 0.5) & uVar10 |
                   (uint)((*pfVar3 + *pfVar5) * 0.5) & uVar8)) {
          pfVar3 = (float *)(iVar7 + 0x10 + iVar6 * 0x30);
          pfVar2 = (float *)(iVar7 + iVar6 * 0x30);
          do {
            piVar1 = piVar14 + -1;
            piVar14 = piVar14 + -1;
            pfVar4 = (float *)(iVar7 + *piVar1 * 0x30);
            pfVar5 = (float *)(iVar7 + 0x10 + *piVar1 * 0x30);
          } while ((float)((uint)((pfVar3[3] + pfVar2[3]) * 0.5) & uVar11 |
                           (uint)((pfVar3[1] + pfVar2[1]) * 0.5) & uVar9 |
                          (uint)((pfVar3[2] + pfVar2[2]) * 0.5) & uVar10 |
                          (uint)((*pfVar3 + *pfVar2) * 0.5) & uVar8) <
                   (float)((uint)((pfVar4[3] + pfVar5[3]) * 0.5) & uVar11 |
                           (uint)((pfVar4[1] + pfVar5[1]) * 0.5) & uVar9 |
                          (uint)((pfVar4[2] + pfVar5[2]) * 0.5) & uVar10 |
                          (uint)((*pfVar4 + *pfVar5) * 0.5) & uVar8));
        }
        if (piVar14 < piVar13) break;
        if (piVar14 != piVar13) {
          iVar7 = *piVar14;
          *piVar14 = *piVar13;
          *piVar13 = iVar7;
        }
        piVar14 = piVar14 + -1;
        piVar13 = piVar13 + 1;
      } while (piVar13 <= piVar14);
      if (local_8 < piVar14) {
        if (piVar13 < local_c) {
          if ((int)((int)piVar14 - (int)local_8 & 0xfffffffcU) <
              (int)((int)local_c - (int)piVar13 & 0xfffffffcU)) {
            local_8c[param_2] = (int)piVar13;
            local_10c[param_2] = (int)local_c;
            param_2 = param_2 + 1;
            goto LAB_010938fe;
          }
          local_8c[param_2] = (int)local_8;
          local_10c[param_2] = (int)piVar14;
          param_2 = param_2 + 1;
          local_8 = piVar13;
        }
        else {
LAB_010938fe:
          local_c = piVar14;
        }
        goto LAB_01093717;
      }
      if (piVar13 < local_c) {
        local_8 = piVar13;
        goto LAB_01093717;
      }
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 01093940  FUN_01093940  size=58  [run]
void __thiscall FUN_01093940(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  else {
    *piVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = param_2[8];
  piVar2 = (int *)(iVar1 + 0x60c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_01091d10(iVar1);
  }
  return;
}

// 01093980  FUN_01093980  size=94  [run]
void __fastcall FUN_01093980(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x604) == 0) {
      *param_1 = *(int *)(iVar1 + 0x608);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x604) + 0x608) = *(undefined4 *)(iVar1 + 0x608);
    }
    if (*(int *)(iVar1 + 0x608) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x608) + 0x604) = *(undefined4 *)(iVar1 + 0x604);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x610);
    iVar1 = *param_1;
  }
  return;
}

// 010939F0  FUN_010939f0  size=58  [run]
void __thiscall FUN_010939f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
  }
  if (piVar2 == (int *)0x0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  else {
    *piVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = param_2[0x10];
  piVar2 = (int *)(iVar1 + 0xa0c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_01091d70(iVar1);
  }
  return;
}

// 01093A30  FUN_01093a30  size=94  [run]
void __fastcall FUN_01093a30(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  return;
}

// 01093AA0  FUN_01093aa0  size=89  [run]
void __thiscall FUN_01093aa0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 01093B00  FUN_01093b00  size=61  [run]
void __fastcall FUN_01093b00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093B40  FUN_01093b40  size=46  [run]
int __fastcall FUN_01093b40(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01093B70  FUN_01093b70  size=86  [run]
int __thiscall FUN_01093b70(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    iVar3 = *(int *)(iVar1 + 0x20 + param_2 * 0x30);
    while ((iVar2 = iVar3, iVar2 != param_3 && (*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == param_2)))
    {
      param_2 = iVar2;
      iVar3 = *(int *)(iVar1 + 0x20 + iVar2 * 0x30);
    }
    iVar3 = param_2;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar1 + 0x28 + iVar2 * 0x30);
    }
    if (iVar2 != param_3) {
      return iVar3;
    }
    if (iVar3 != param_2) {
      return iVar3;
    }
  }
  return 0;
}

// 01093BD0  FUN_01093bd0  size=88  [run]
void __thiscall FUN_01093bd0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x24);
  param_3[9] = iVar1;
  puVar5 = (undefined4 *)(iVar1 * 0x30 + *param_1);
  param_3[8] = puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_3 = *puVar5;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  uVar2 = puVar5[5];
  uVar3 = puVar5[6];
  uVar4 = puVar5[7];
  param_3[4] = puVar5[4];
  param_3[5] = uVar2;
  param_3[6] = uVar3;
  param_3[7] = uVar4;
  iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x28);
  param_3[0x15] = iVar1;
  puVar5 = (undefined4 *)(*param_1 + iVar1 * 0x30);
  param_3[0x14] = puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  param_3[0xc] = *puVar5;
  param_3[0xd] = uVar2;
  param_3[0xe] = uVar3;
  param_3[0xf] = uVar4;
  uVar2 = puVar5[5];
  uVar3 = puVar5[6];
  uVar4 = puVar5[7];
  param_3[0x10] = puVar5[4];
  param_3[0x11] = uVar2;
  param_3[0x12] = uVar3;
  param_3[0x13] = uVar4;
  return;
}

// 01093C30  FUN_01093c30  size=11  [run]
undefined4 FUN_01093c30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// 01093C40  FUN_01093c40  size=63  [run]
void FUN_01093c40(float *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  auVar1 = *param_2;
  auVar5 = maxps(*param_3,auVar1);
  auVar5 = minps(param_3[1],auVar5);
  fVar2 = auVar1._0_4_ - auVar5._0_4_;
  fVar3 = auVar1._4_4_ - auVar5._4_4_;
  fVar4 = auVar1._8_4_ - auVar5._8_4_;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  *param_1 = fVar3 + fVar2 + fVar4;
  param_1[1] = fVar3 + fVar2 + fVar4;
  param_1[2] = fVar3 + fVar2 + fVar4;
  param_1[3] = fVar3 + fVar2 + fVar4;
  return;
}

// 01093C80  FUN_01093c80  size=47  [run]
void FUN_01093c80(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  param_4[9] = param_3[6];
  puVar4 = (undefined4 *)(*param_3 + param_3[6] * 0x30);
  param_4[8] = puVar4;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_4 = *puVar4;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_4[4] = puVar4[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  return;
}

// 01093CB0  FUN_01093cb0  size=63  [run]
void __thiscall FUN_01093cb0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093CF0  FUN_01093cf0  size=151  [run]
void __thiscall FUN_01093cf0(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar3 = maxps(*param_2,auVar1);
  auVar3 = minps(param_2[1],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  auVar3 = maxps(param_2[3],auVar1);
  auVar3 = minps(param_2[4],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  if (((*(float *)(param_1 + 0x20) <= fVar2 && fVar2 != *(float *)(param_1 + 0x20)) - 1U & 2 |
      (fVar6 < *(float *)(param_1 + 0x20) || fVar6 == *(float *)(param_1 + 0x20))) == 3) {
    *(uint *)(param_1 + 0x30) = (uint)(fVar2 < fVar6);
  }
  return;
}

// 01093D90  FUN_01093d90  size=75  [run]
void __thiscall FUN_01093d90(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)param_1[4] - (param_2[4] + *param_2) * 0.5;
  fVar2 = (float)param_1[5] - (param_2[5] + param_2[1]) * 0.5;
  fVar3 = (float)param_1[6] - (param_2[6] + param_2[2]) * 0.5;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar2 + fVar1 + fVar3;
  if (fVar4 < (float)param_1[8]) {
    param_1[8] = fVar4;
    param_1[9] = fVar2 + fVar1 + fVar3;
    param_1[10] = fVar2 + fVar1 + fVar3;
    param_1[0xb] = fVar2 + fVar1 + fVar3;
    *(float *)*param_1 = param_2[8];
  }
  return;
}

// 01093DE0  FUN_01093de0  size=25  [run]
void __thiscall FUN_01093de0(uint *param_1,uint param_2)

{
  param_1[1] = param_2 & 3;
  *param_1 = param_2 & 0xfffffffc;
  return;
}

// 01093E00  FUN_01093e00  size=72  [run]
int __thiscall FUN_01093e00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x30);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x30 + *param_1;
}

// 01093E50  FUN_01093e50  size=32  [run]
void __thiscall FUN_01093e50(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  param_2[1] = uVar1 & 3;
  *param_2 = uVar1 & 0xfffffffc;
  return;
}

// 01093E70  FUN_01093e70  size=103  [run]
void __thiscall FUN_01093e70(int *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  iVar2 = param_2 - param_1[1];
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (0 < iVar2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 01093F50  FUN_01093f50  size=63  [run]
void __fastcall FUN_01093f50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093F90  FUN_01093f90  size=63  [run]
void __fastcall FUN_01093f90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01093FD0  FUN_01093fd0  size=61  [run]
void __fastcall FUN_01093fd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094010  FUN_01094010  size=60  [run]
void __fastcall FUN_01094010(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094050  FUN_01094050  size=221  [run]
void __fastcall FUN_01094050(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    while( true ) {
      uVar4 = param_1[1];
      do {
        *param_1 = iVar3;
        uVar4 = 9 >> ((char)uVar4 * '\x02' & 0x1fU) & 3;
        param_1[1] = uVar4;
        if (uVar4 == 0) goto LAB_010940e8;
        uVar1 = *(uint *)(*(int *)(iVar3 + 8 + uVar4 * 4) + 8);
        uVar2 = *(uint *)(*(int *)(iVar3 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4) + 8);
      } while (((uVar2 <= uVar1) && (uVar2 < uVar1)) &&
              ((*(uint *)(iVar3 + 0x14 + uVar4 * 4) & 0xfffffffc) != 0));
      if ((uVar4 != 0) &&
         (((uVar1 = *(uint *)(*(int *)(iVar3 + 8 + uVar4 * 4) + 8),
           uVar2 = *(uint *)(*(int *)(iVar3 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4) + 8),
           uVar1 < uVar2 || (uVar1 <= uVar2)) ||
          ((*(uint *)(iVar3 + 0x14 + uVar4 * 4) & 0xfffffffc) == 0)))) break;
LAB_010940e8:
      iVar3 = *(int *)*param_1;
      *param_1 = iVar3;
      param_1[1] = 0;
      if (iVar3 == 0) {
        return;
      }
      uVar4 = *(uint *)(*(int *)(iVar3 + 8) + 8);
      uVar1 = *(uint *)(*(int *)(iVar3 + 0xc) + 8);
      if (uVar4 < uVar1) {
        return;
      }
      if (uVar4 <= uVar1) {
        return;
      }
      if ((*(uint *)(iVar3 + 0x14) & 0xfffffffc) == 0) {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
    }
  }
  return;
}

// 01094140  FUN_01094140  size=72  [run]
int __thiscall FUN_01094140(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x30);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x30 + *param_1;
}

// 01094190  FUN_01094190  size=106  [run]
void __fastcall FUN_01094190(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x604) == 0) {
      *param_1 = *(int *)(iVar1 + 0x608);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x604) + 0x608) = *(undefined4 *)(iVar1 + 0x608);
    }
    if (*(int *)(iVar1 + 0x608) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x608) + 0x604) = *(undefined4 *)(iVar1 + 0x604);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x610);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 01094200  FUN_01094200  size=106  [run]
void __fastcall FUN_01094200(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xa04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xa04) + 0xa08) = *(undefined4 *)(iVar1 + 0xa08);
    }
    if (*(int *)(iVar1 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xa08) + 0xa04) = *(undefined4 *)(iVar1 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xa10);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 01094270  FUN_01094270  size=61  [run]
void __fastcall FUN_01094270(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010942B0  FUN_010942b0  size=41  [run]
void __thiscall FUN_010942b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}

// 010942E0  FUN_010942e0  size=61  [run]
void __fastcall FUN_010942e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094320  FUN_01094320  size=108  [run]
int * __thiscall FUN_01094320(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01094390  FUN_01094390  size=143  [run]
void __fastcall FUN_01094390(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01094420  FUN_01094420  size=44  [run]
void __thiscall FUN_01094420(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)
   (*param_1 + 0x24 +
   ((uint)(*(int *)(*param_1 + 0x28 + param_2 * 0x30) == param_3) + param_2 * 0xc) * 4) = param_4;
  return;
}

// 01094450  FUN_01094450  size=105  [run]
int __thiscall FUN_01094450(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  iVar3 = *(int *)(iVar1 + 0x24 + param_2 * 0x30);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x20 + param_2 * 0x30);
    while ((iVar2 = iVar3, iVar2 != param_3 && (*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == param_2)))
    {
      param_2 = iVar2;
      iVar3 = *(int *)(iVar1 + 0x20 + iVar2 * 0x30);
    }
    iVar3 = param_2;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar1 + 0x28 + iVar2 * 0x30);
    }
    if ((iVar2 == param_3) && (iVar3 == param_2)) {
      return 0;
    }
  }
  return iVar3;
}

// 010944C0  FUN_010944c0  size=61  [run]
void __fastcall FUN_010944c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094500  FUN_01094500  size=27  [run]
void __thiscall FUN_01094500(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 01094520  FUN_01094520  size=47  [run]
void FUN_01094520(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  param_4[9] = param_3[6];
  puVar4 = (undefined4 *)(*param_3 + param_3[6] * 0x30);
  param_4[8] = puVar4;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_4 = *puVar4;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_4[4] = puVar4[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  return;
}

// 01094550  FUN_01094550  size=74  [run]
bool __thiscall FUN_01094550(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar5 = maxps(*param_2,auVar1);
  auVar5 = minps(param_2[1],auVar5);
  fVar2 = auVar1._0_4_ - auVar5._0_4_;
  fVar3 = auVar1._4_4_ - auVar5._4_4_;
  fVar4 = auVar1._8_4_ - auVar5._8_4_;
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
  return fVar2 < *(float *)(param_1 + 0x20) || fVar2 == *(float *)(param_1 + 0x20);
}

// 010945C0  FUN_010945c0  size=61  [run]
void __fastcall FUN_010945c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094600  FUN_01094600  size=61  [run]
void __fastcall FUN_01094600(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094640  FUN_01094640  size=150  [run]
void FUN_01094640(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar3 = maxps(*param_2,auVar1);
  auVar3 = minps(param_2[1],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  auVar3 = maxps(param_2[3],auVar1);
  auVar3 = minps(param_2[4],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  if (((*(float *)(param_1 + 0x20) <= fVar2 && fVar2 != *(float *)(param_1 + 0x20)) - 1U & 2 |
      (fVar6 < *(float *)(param_1 + 0x20) || fVar6 == *(float *)(param_1 + 0x20))) == 3) {
    *(uint *)(param_1 + 0x30) = (uint)(fVar2 < fVar6);
  }
  return;
}

// 010946E0  FUN_010946e0  size=78  [run]
void FUN_010946e0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)param_1[4] - (param_2[4] + *param_2) * 0.5;
  fVar2 = (float)param_1[5] - (param_2[5] + param_2[1]) * 0.5;
  fVar3 = (float)param_1[6] - (param_2[6] + param_2[2]) * 0.5;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar2 + fVar1 + fVar3;
  if (fVar4 < (float)param_1[8]) {
    param_1[8] = fVar4;
    param_1[9] = fVar2 + fVar1 + fVar3;
    param_1[10] = fVar2 + fVar1 + fVar3;
    param_1[0xb] = fVar2 + fVar1 + fVar3;
    *(float *)*param_1 = param_2[8];
  }
  return;
}

// 01094730  FUN_01094730  size=63  [run]
void __fastcall FUN_01094730(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094770  FUN_01094770  size=63  [run]
void __fastcall FUN_01094770(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010947D0  FUN_010947d0  size=17  [run]
int * __fastcall FUN_010947d0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_01094050();
  }
  return param_1;
}

// 010947F0  FUN_010947f0  size=92  [run]
int * __thiscall FUN_010947f0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((((param_2 != 0) &&
       (uVar1 = *(uint *)(*(int *)(param_2 + 8 + param_3 * 4) + 8),
       uVar2 = *(uint *)(*(int *)(param_2 + 8 + (9 >> ((char)param_3 * '\x02' & 0x1fU) & 3U) * 4) +
                        8), uVar2 <= uVar1)) && (uVar2 < uVar1)) &&
     ((*(uint *)(param_2 + 0x14 + param_3 * 4) & 0xfffffffc) != 0)) {
    FUN_01094050();
  }
  return param_1;
}

// 01094850  FUN_01094850  size=70  [run]
void __fastcall FUN_01094850(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  return;
}

// 010948A0  FUN_010948a0  size=203  [run]
undefined4 __thiscall FUN_010948a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar2 = param_1[1];
    param_2 = iVar2;
    if (iVar2 < 1) {
      param_2 = 1;
    }
    iVar1 = iVar2 + 1 + iVar1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar2 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,0x30);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar4 = param_1[2] & 0x3fffffff;
    iVar1 = param_1[1];
    iVar2 = param_1[1] + (uVar4 - iVar1);
    if ((int)uVar4 < iVar2) {
      if (iVar2 < (int)(uVar4 * 2)) {
        iVar2 = uVar4 * 2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x30);
    }
    param_1[1] = param_1[1] + (uVar4 - iVar1);
    iVar1 = param_1[1] + -1;
    if (param_2 <= iVar1) {
      iVar5 = param_2 * 0x30;
      iVar2 = param_2 - iVar1;
      iVar3 = param_2;
      do {
        iVar6 = iVar3 + 1;
        if (SBORROW4(iVar3,iVar1) == iVar2 < 0) {
          iVar6 = param_1[3];
        }
        *(int *)(iVar5 + *param_1) = iVar6;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x30;
        iVar2 = iVar3 - iVar1;
      } while (iVar3 <= iVar1);
    }
    param_1[3] = param_2;
  }
  return 0;
}

// 01094970  FUN_01094970  size=416  [run]
int __thiscall FUN_01094970(int *param_1,int param_2,float *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar7 = param_1[6];
  if (param_2 == iVar7) {
    param_1[6] = 0;
LAB_01094b05:
    iVar6 = param_1[6];
  }
  else {
    iVar2 = *param_1;
    iVar6 = param_2 * 0x30 + iVar2;
    iVar2 = iVar2 + *(int *)(param_2 * 0x30 + 0x20 + iVar2) * 0x30;
    iVar5 = *(int *)(iVar2 + (10 - (uint)(*(int *)(iVar2 + 0x28) == param_2)) * 4) * 0x30 + *param_1
    ;
    if (*(int *)(iVar2 + 0x20) == 0) {
      *(int *)(*param_1 + iVar7 * 0x30) = param_1[3];
      param_1[3] = iVar7;
      param_1[6] = (iVar5 - *param_1) / 0x30;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      return param_1[6];
    }
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
    *(int *)(*param_1 + 0x24 +
            ((uint)(*(int *)(*param_1 + 0x28 + *(int *)(iVar2 + 0x20) * 0x30) ==
                   *(int *)(iVar6 + 0x20)) + *(int *)(iVar2 + 0x20) * 0xc) * 4) =
         (iVar5 - *param_1) / 0x30;
    iVar7 = *(int *)(iVar6 + 0x20);
    *(int *)(*param_1 + iVar7 * 0x30) = param_1[3];
    param_1[3] = iVar7;
    iVar7 = *param_1;
    iVar2 = *(int *)(iVar5 + 0x20) * 0x30 + iVar7;
    while( true ) {
      iVar5 = *(int *)(iVar2 + 0x20);
      iVar6 = (iVar2 - iVar7) / 0x30;
      iVar2 = *(int *)(iVar6 * 0x30 + 0x24 + iVar7);
      pauVar3 = (undefined1 (*) [16])(iVar6 * 0x30 + iVar7);
      auVar9 = maxps(*(undefined1 (*) [16])(iVar7 + 0x10 + iVar2 * 0x30),
                     *(undefined1 (*) [16])(iVar7 + 0x10 + *(int *)(pauVar3[2] + 8) * 0x30));
      auVar8 = minps(*(undefined1 (*) [16])(iVar7 + iVar2 * 0x30),
                     *(undefined1 (*) [16])(iVar7 + *(int *)(pauVar3[2] + 8) * 0x30));
      *pauVar3 = auVar8;
      pauVar3[1] = auVar9;
      auVar1._4_4_ = -(uint)(param_3[5] <= auVar9._4_4_ && auVar8._4_4_ <= param_3[1]);
      auVar1._0_4_ = -(uint)(param_3[4] <= auVar9._0_4_ && auVar8._0_4_ <= *param_3);
      auVar1._8_4_ = -(uint)(param_3[6] <= auVar9._8_4_ && auVar8._8_4_ <= param_3[2]);
      auVar1._12_4_ = -(uint)(param_3[7] <= auVar9._12_4_ && auVar8._12_4_ <= param_3[3]);
      uVar4 = movmskps(param_3,auVar1);
      if (((byte)uVar4 & 7) == 7) break;
      if (iVar5 == 0) goto LAB_01094b05;
      iVar7 = *param_1;
      iVar2 = iVar5 * 0x30 + iVar7;
      if (iVar2 == 0) {
        return param_1[6];
      }
    }
  }
  return iVar6;
}

// 01094B10  FUN_01094b10  size=16  [run]
void FUN_01094b10(void)

{
  FUN_01094190();
  FUN_01093980();
  return;
}

// 01094B20  FUN_01094b20  size=16  [run]
void FUN_01094b20(void)

{
  FUN_01094200();
  FUN_01093a30();
  return;
}

// 01094B30  FUN_01094b30  size=101  [run]
undefined4 * __thiscall FUN_01094b30(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return param_1;
}

// 01094BA0  FUN_01094ba0  size=118  [run]
int * __thiscall FUN_01094ba0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  if ((int)param_2 < 0x41) {
    param_2 = 0x40;
  }
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01094C20  FUN_01094c20  size=143  [run]
void __fastcall FUN_01094c20(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01094CB0  FUN_01094cb0  size=19  [run]
void FUN_01094cb0(int param_1)

{
  FUN_010948a0(param_1 * 2);
  return;
}

// 01094CD0  FUN_01094cd0  size=46  [run]
void FUN_01094cd0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01094D00  FUN_01094d00  size=150  [run]
void FUN_01094d00(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar3 = maxps(*param_2,auVar1);
  auVar3 = minps(param_2[1],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  auVar3 = maxps(param_2[3],auVar1);
  auVar3 = minps(param_2[4],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  if (((*(float *)(param_1 + 0x20) <= fVar2 && fVar2 != *(float *)(param_1 + 0x20)) - 1U & 2 |
      (fVar6 < *(float *)(param_1 + 0x20) || fVar6 == *(float *)(param_1 + 0x20))) == 3) {
    *(uint *)(param_1 + 0x30) = (uint)(fVar2 < fVar6);
  }
  return;
}

// 01094DA0  FUN_01094da0  size=76  [run]
void FUN_01094da0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)param_3[4] - (param_4[4] + *param_4) * 0.5;
  fVar2 = (float)param_3[5] - (param_4[5] + param_4[1]) * 0.5;
  fVar3 = (float)param_3[6] - (param_4[6] + param_4[2]) * 0.5;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar2 + fVar1 + fVar3;
  if (fVar4 < (float)param_3[8]) {
    param_3[8] = fVar4;
    param_3[9] = fVar2 + fVar1 + fVar3;
    param_3[10] = fVar2 + fVar1 + fVar3;
    param_3[0xb] = fVar2 + fVar1 + fVar3;
    *(float *)*param_3 = param_4[8];
  }
  return;
}

// 01094DF0  FUN_01094df0  size=101  [run]
undefined4 * __thiscall FUN_01094df0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return param_1;
}

// 01094E60  FUN_01094e60  size=101  [run]
undefined4 * __thiscall FUN_01094e60(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01094ED0  FUN_01094ed0  size=63  [run]
void __fastcall FUN_01094ed0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094F10  FUN_01094f10  size=63  [run]
void __fastcall FUN_01094f10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01094F50  FUN_01094f50  size=63  [run]
void __fastcall FUN_01094f50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01095410  FUN_01095410  size=93  [run]
int * __thiscall FUN_01095410(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  param_2[1] = 0;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    uVar3 = *(uint *)(*(int *)(iVar1 + 8 + iVar2 * 4) + 8);
    uVar4 = *(uint *)(*(int *)(iVar1 + 8 + (9 >> ((char)iVar2 * '\x02' & 0x1fU) & 3U) * 4) + 8);
    if (((uVar4 <= uVar3) && (uVar4 < uVar3)) &&
       ((*(uint *)(iVar1 + 0x14 + iVar2 * 4) & 0xfffffffc) != 0)) {
      FUN_01094050();
    }
  }
  return param_2;
}

// 01095490  FUN_01095490  size=71  [run]
void __fastcall FUN_01095490(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0x80000000;
  return;
}

// 010954E0  hkBaseObject::hkBaseObject  size=51  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_01094200();
  FUN_01093a30();
  FUN_01094190();
  FUN_01093980();
  *param_1 = vftable;
  return;
}

// 01095520  FUN_01095520  size=38  [run]
void FUN_01095520(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01095550  hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::vf0C  size=20  [run]
void hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>
     ::vf0C(void)

{
  FUN_01094190();
  FUN_01094200();
  return;
}

// 01095570  hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::vf00  size=93  [run]
undefined4 * __thiscall
hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>
::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_01094200();
  FUN_01093a30();
  FUN_01094190();
  FUN_01093980();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010955D0  FUN_010955d0  size=34  [run]
void __fastcall FUN_010955d0(int *param_1)

{
  if (param_1[3] == 0) {
    FUN_010948a0(1);
  }
  param_1[3] = *(int *)(*param_1 + param_1[3] * 0x30);
  return;
}

// 01095600  FUN_01095600  size=420  [run]
int __thiscall FUN_01095600(int *param_1,int param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar11 = *param_1;
  iVar12 = param_2 * 0x30;
  pfVar1 = (float *)(iVar12 + iVar11);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  pfVar1 = (float *)(iVar12 + 0x10 + iVar11);
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  iVar12 = iVar12 + iVar11;
  iVar17 = param_1[6];
  if (param_2 == iVar17) {
    param_1[6] = 0;
LAB_01095799:
    iVar15 = param_1[6];
  }
  else {
    iVar16 = *(int *)(iVar12 + 0x20) * 0x30 + iVar11;
    iVar15 = *(int *)(iVar16 + (10 - (uint)(*(int *)(iVar16 + 0x28) == param_2)) * 4) * 0x30 +
             iVar11;
    if (*(int *)(iVar16 + 0x20) == 0) {
      *(int *)(iVar11 + iVar17 * 0x30) = param_1[3];
      param_1[3] = iVar17;
      param_1[6] = (iVar15 - *param_1) / 0x30;
      *(undefined4 *)(iVar15 + 0x20) = 0;
      return param_1[6];
    }
    *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar16 + 0x20);
    *(int *)(*param_1 + 0x24 +
            ((uint)(*(int *)(*param_1 + 0x28 + *(int *)(iVar16 + 0x20) * 0x30) ==
                   *(int *)(iVar12 + 0x20)) + *(int *)(iVar16 + 0x20) * 0xc) * 4) =
         (iVar15 - *param_1) / 0x30;
    iVar11 = *(int *)(iVar12 + 0x20);
    *(int *)(*param_1 + iVar11 * 0x30) = param_1[3];
    iVar17 = *param_1;
    param_1[3] = iVar11;
    iVar11 = *(int *)(iVar15 + 0x20) * 0x30 + iVar17;
    while( true ) {
      iVar12 = *(int *)(iVar11 + 0x20);
      iVar15 = (iVar11 - iVar17) / 0x30;
      iVar11 = *(int *)(iVar15 * 0x30 + 0x24 + iVar17);
      pauVar13 = (undefined1 (*) [16])(iVar15 * 0x30 + iVar17);
      auVar18 = minps(*(undefined1 (*) [16])(iVar17 + iVar11 * 0x30),
                      *(undefined1 (*) [16])(iVar17 + *(int *)(pauVar13[2] + 8) * 0x30));
      auVar19 = maxps(*(undefined1 (*) [16])(iVar17 + 0x10 + iVar11 * 0x30),
                      *(undefined1 (*) [16])(iVar17 + 0x10 + *(int *)(pauVar13[2] + 8) * 0x30));
      *pauVar13 = auVar18;
      pauVar13[1] = auVar19;
      auVar2._4_4_ = -(uint)(fVar8 <= auVar19._4_4_ && auVar18._4_4_ <= fVar4);
      auVar2._0_4_ = -(uint)(fVar7 <= auVar19._0_4_ && auVar18._0_4_ <= fVar3);
      auVar2._8_4_ = -(uint)(fVar9 <= auVar19._8_4_ && auVar18._8_4_ <= fVar5);
      auVar2._12_4_ = -(uint)(fVar10 <= auVar19._12_4_ && auVar18._12_4_ <= fVar6);
      uVar14 = movmskps(pauVar13,auVar2);
      if (((byte)uVar14 & 7) == 7) break;
      if (iVar12 == 0) goto LAB_01095799;
      iVar17 = *param_1;
      iVar11 = iVar12 * 0x30 + iVar17;
      if (iVar11 == 0) {
        return param_1[6];
      }
    }
  }
  return iVar15;
}

// 010957B0  FUN_010957b0  size=535  [run]
void __thiscall FUN_010957b0(int *param_1,int param_2,int param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *local_10 [3];
  
  if (param_3 != 0) {
    if (param_1[3] == 0) {
      FUN_010948a0(1);
    }
    iVar1 = param_1[3];
    iVar2 = *param_1;
    param_1[3] = *(int *)(iVar2 + iVar1 * 0x30);
    pauVar3 = (undefined1 (*) [16])(iVar1 * 0x30 + iVar2);
    pauVar4 = (undefined1 (*) [16])(param_3 * 0x30 + iVar2);
    if (*(int *)(pauVar4[2] + 4) != 0) {
      fVar13 = *(float *)*param_4 + *(float *)param_4[1];
      fVar14 = *(float *)(*param_4 + 4) + *(float *)(param_4[1] + 4);
      fVar15 = *(float *)(*param_4 + 8) + *(float *)(param_4[1] + 8);
      fVar16 = *(float *)param_4[1] - *(float *)*param_4;
      fVar17 = *(float *)(param_4[1] + 4) - *(float *)(*param_4 + 4);
      fVar18 = *(float *)(param_4[1] + 8) - *(float *)(*param_4 + 8);
      do {
        local_10[0] = (float *)(*(int *)(pauVar4[2] + 4) * 0x30 + *param_1);
        local_10[1] = (float *)(*(int *)(pauVar4[2] + 8) * 0x30 + *param_1);
        auVar5 = minps(*pauVar4,*param_4);
        auVar6 = maxps(pauVar4[1],param_4[1]);
        *pauVar4 = auVar5;
        pauVar4[1] = auVar6;
        fVar10 = (*local_10[0] + local_10[0][4]) - fVar13;
        fVar11 = (local_10[0][1] + local_10[0][5]) - fVar14;
        fVar12 = (local_10[0][2] + local_10[0][6]) - fVar15;
        fVar7 = (local_10[1][4] + *local_10[1]) - fVar13;
        fVar8 = (local_10[1][5] + local_10[1][1]) - fVar14;
        fVar9 = (local_10[1][6] + local_10[1][2]) - fVar15;
        pauVar4 = (undefined1 (*) [16])
                  local_10[((local_10[1][5] - local_10[1][1]) + fVar17 +
                            (local_10[1][4] - *local_10[1]) + fVar16 +
                           (local_10[1][6] - local_10[1][2]) + fVar18) *
                           (fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9) <
                           ((local_10[0][5] - local_10[0][1]) + fVar17 +
                            (local_10[0][4] - *local_10[0]) + fVar16 +
                           (local_10[0][6] - local_10[0][2]) + fVar18) *
                           (fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12)];
      } while (*(int *)(pauVar4[2] + 4) != 0);
    }
    iVar1 = ((int)pauVar3 - *param_1) / 0x30;
    if (*(int *)pauVar4[2] == 0) {
      param_1[6] = iVar1;
    }
    else {
      iVar2 = *param_1;
      *(int *)(iVar2 + 0x24 +
              ((uint)(*(int *)(iVar2 + 0x28 + *(int *)pauVar4[2] * 0x30) ==
                     ((int)pauVar4 - iVar2) / 0x30) + *(int *)pauVar4[2] * 0xc) * 4) = iVar1;
    }
    *(undefined4 *)pauVar3[2] = *(undefined4 *)pauVar4[2];
    *(int *)(pauVar3[2] + 4) = ((int)pauVar4 - *param_1) / 0x30;
    *(int *)(pauVar3[2] + 8) = param_2;
    *(int *)pauVar4[2] = iVar1;
    *(int *)(*param_1 + 0x20 + param_2 * 0x30) = iVar1;
    auVar5 = pauVar4[1];
    auVar6 = minps(*pauVar4,*param_4);
    *pauVar3 = auVar6;
    auVar5 = maxps(auVar5,param_4[1]);
    pauVar3[1] = auVar5;
    return;
  }
  param_1[6] = param_2;
  *(undefined4 *)(*param_1 + 0x20 + param_2 * 0x30) = 0;
  return;
}

// 010959D0  FUN_010959d0  size=678  [run]
void __thiscall FUN_010959d0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_160;
  uint local_15c;
  uint local_158;
  undefined4 local_154 [65];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  
  param_2[1] = 0;
  local_18 = param_1;
  if (-1 < param_2[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_2,(param_2[2] & 0x3fffffffU) * 0x30);
  }
  *param_2 = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = -0x80000000;
  FUN_010948a0(param_1[4] * 2);
  if (param_1[6] != 0) {
    uVar1 = param_1[1];
    local_24 = 0;
    local_20 = 0;
    local_1c = -0x80000000;
    uVar3 = 0;
    local_14 = uVar1;
    if (0 < (int)uVar1) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_24,((int)uVar1 < 0) - 1 & uVar1,4);
      uVar3 = local_20;
    }
    iVar5 = uVar1 - uVar3;
    puVar4 = (undefined4 *)(local_24 + uVar3 * 4);
    local_20 = uVar1;
    if (0 < iVar5) {
      for (; local_20 = local_14, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    local_160 = local_154;
    puVar4 = (undefined4 *)local_18[6];
    local_158 = 0x80000040;
    local_154[0] = 0;
    local_15c = 1;
    local_14 = 0;
    do {
      puVar6 = (undefined4 *)((int)puVar4 * 0x30 + *local_18);
      local_50 = *puVar6;
      uStack_4c = puVar6[1];
      uStack_48 = puVar6[2];
      uStack_44 = puVar6[3];
      local_30 = *(int *)(local_24 + (int)puVar4 * 4);
      local_40 = puVar6[4];
      uStack_3c = puVar6[5];
      uStack_38 = puVar6[6];
      uStack_34 = puVar6[7];
      local_2c = puVar6;
      if (param_2[3] == 0) {
        FUN_010948a0(1);
      }
      local_28 = param_2[3];
      iVar5 = *param_2;
      param_2[3] = *(int *)(iVar5 + local_28 * 0x30);
      puVar4 = (undefined4 *)(iVar5 + local_28 * 0x30);
      *puVar4 = local_50;
      puVar4[1] = uStack_4c;
      puVar4[2] = uStack_48;
      puVar4[3] = uStack_44;
      *(int *)(iVar5 + 0x20 + local_28 * 0x30) = local_30;
      puVar4 = (undefined4 *)(iVar5 + 0x10 + local_28 * 0x30);
      *puVar4 = local_40;
      puVar4[1] = uStack_3c;
      puVar4[2] = uStack_38;
      puVar4[3] = uStack_34;
      if (local_30 == 0) {
        param_2[6] = local_28;
      }
      else {
        *(int *)(*param_2 + 0x24 + (local_14 + local_30 * 0xc) * 4) = local_28;
        puVar6 = local_2c;
      }
      local_2c = (undefined4 *)puVar6[9];
      iVar2 = puVar6[10];
      if (local_2c == (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + 0x24 + local_28 * 0x30) = 0;
        *(int *)(iVar5 + 0x28 + local_28 * 0x30) = iVar2;
        puVar4 = (undefined4 *)local_160[local_15c - 1];
        local_15c = local_15c - 1;
        local_14 = 1;
      }
      else {
        *(int *)(local_24 + (int)local_2c * 4) = local_28;
        *(int *)(local_24 + iVar2 * 4) = local_28;
        if (local_15c == (local_158 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_160,4);
        }
        local_160[local_15c] = iVar2;
        local_15c = local_15c + 1;
        local_14 = 0;
        puVar4 = local_2c;
      }
    } while (puVar4 != (undefined4 *)0x0);
    local_15c = 0;
    if (-1 < (int)local_158) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_160,local_158 * 4);
    }
    local_160 = (undefined4 *)0x0;
    local_158 = 0x80000000;
    local_20 = 0;
    param_1 = local_18;
    if (-1 < local_1c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
      param_1 = local_18;
    }
  }
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  return;
}

// 01095C80  FUN_01095c80  size=485  [run]
void FUN_01095c80(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  
  if (param_1[6] != 0) {
    iVar2 = param_2[1];
    pauVar4 = (undefined1 (*) [16])(param_1[6] * 0x30 + *param_1);
    auVar17 = *pauVar4;
    fVar9 = auVar17._0_4_;
    fVar14 = auVar17._4_4_;
    fVar18 = auVar17._8_4_;
    auVar10 = *(undefined1 (*) [16])(param_3 + 4);
    auVar1 = pauVar4[1];
    fVar12 = auVar1._0_4_;
    fVar16 = auVar1._4_4_;
    fVar15 = auVar1._8_4_;
    auVar17 = maxps(auVar17,auVar10);
    auVar17 = minps(auVar1,auVar17);
    fVar8 = auVar10._0_4_ - auVar17._0_4_;
    fVar11 = auVar10._4_4_ - auVar17._4_4_;
    fVar13 = auVar10._8_4_ - auVar17._8_4_;
    fVar8 = fVar11 * fVar11 + fVar8 * fVar8 + fVar13 * fVar13;
    if (fVar8 < (float)param_3[8] || fVar8 == (float)param_3[8]) {
      do {
        if (*(int *)(pauVar4[2] + 4) == 0) {
          fVar9 = (float)param_3[4] - (fVar12 + fVar9) * 0.5;
          fVar12 = (float)param_3[5] - (fVar16 + fVar14) * 0.5;
          fVar14 = (float)param_3[6] - (fVar15 + fVar18) * 0.5;
          fVar9 = fVar9 * fVar9;
          fVar12 = fVar12 * fVar12;
          fVar14 = fVar14 * fVar14;
          fVar16 = fVar12 + fVar9 + fVar14;
          if (fVar16 < (float)param_3[8]) {
            param_3[8] = fVar16;
            param_3[9] = fVar12 + fVar9 + fVar14;
            param_3[10] = fVar12 + fVar9 + fVar14;
            param_3[0xb] = fVar12 + fVar9 + fVar14;
            *(undefined1 (**) [16])*param_3 = pauVar4;
          }
        }
        else {
          iVar3 = *param_1;
          iVar6 = *(int *)(pauVar4[2] + 4) * 0x30;
          auVar17 = *(undefined1 (*) [16])(param_3 + 4);
          auVar10 = maxps(*(undefined1 (*) [16])(iVar6 + iVar3),auVar17);
          iVar7 = *(int *)(pauVar4[2] + 8) * 0x30;
          auVar10 = minps(*(undefined1 (*) [16])(iVar6 + 0x10 + iVar3),auVar10);
          fVar9 = auVar17._0_4_ - auVar10._0_4_;
          fVar12 = auVar17._4_4_ - auVar10._4_4_;
          fVar14 = auVar17._8_4_ - auVar10._8_4_;
          fVar16 = fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14;
          auVar10 = maxps(*(undefined1 (*) [16])(iVar7 + iVar3),auVar17);
          auVar10 = minps(*(undefined1 (*) [16])(iVar7 + 0x10 + iVar3),auVar10);
          fVar9 = auVar17._0_4_ - auVar10._0_4_;
          fVar12 = auVar17._4_4_ - auVar10._4_4_;
          fVar14 = auVar17._8_4_ - auVar10._8_4_;
          fVar9 = fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14;
          uVar5 = ((float)param_3[8] < fVar9) - 1 & 2 | (uint)(fVar16 <= (float)param_3[8]);
          if (uVar5 == 3) {
            param_3[0xc] = (uint)(fVar9 < fVar16);
LAB_01095ded:
                    /* WARNING: Could not recover jumptable at 0x01095ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_01095ed4 + uVar5 * 4))();
            return;
          }
          if (uVar5 < 4) goto LAB_01095ded;
        }
        iVar3 = param_2[1];
        if (iVar3 <= iVar2) {
          return;
        }
        param_2[1] = iVar3 + -1;
        pauVar4 = (undefined1 (*) [16])(*(int *)(*param_2 + -4 + iVar3 * 4) * 0x30 + *param_1);
        fVar9 = *(float *)*pauVar4;
        fVar14 = *(float *)(*pauVar4 + 4);
        fVar18 = *(float *)(*pauVar4 + 8);
        fVar12 = *(float *)pauVar4[1];
        fVar16 = *(float *)(pauVar4[1] + 4);
        fVar15 = *(float *)(pauVar4[1] + 8);
      } while( true );
    }
  }
  return;
}

// 01095EF0  FUN_01095ef0  size=92  [run]
void FUN_01095ef0(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_2 * 0x40 + 8 + param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -0x10;
    } while (-1 < param_2);
  }
  return;
}

// 01095F50  FUN_01095f50  size=92  [run]
void FUN_01095f50(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 8 + param_2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 01095FC0  FUN_01095fc0  size=103  [run]
undefined4 * __thiscall FUN_01095fc0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01096030  FUN_01096030  size=113  [run]
void __fastcall FUN_01096030(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x40 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -0x10;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010960B0  FUN_010960b0  size=63  [run]
void __fastcall FUN_010960b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01096360  FUN_01096360  size=242  [run]
void FUN_01096360(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x100U))
  {
    local_18[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x100U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_01095c80(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
  }
  return;
}

// 01096460  FUN_01096460  size=194  [run]
void __thiscall FUN_01096460(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x40);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(iVar3 * 0x40 + 8 + param_3 * 0x40 + *param_1);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(param_1[1] * 0x40 + *param_1);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01096530  FUN_01096530  size=110  [run]
void __fastcall FUN_01096530(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010965B0  FUN_010965b0  size=149  [run]
void __thiscall FUN_010965b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x40 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01096650  FUN_01096650  size=94  [run]
void FUN_01096650(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 8 + param_2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 01096D60  FUN_01096d60  size=315  [run]
void FUN_01096d60(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_24 [4];
  int local_14;
  
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_70[0] = param_4;
  local_50 = *param_5;
  uStack_4c = param_5[1];
  uStack_48 = param_5[2];
  uStack_44 = param_5[3];
  local_40 = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0x100U))
  {
    local_24[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0x100U;
  }
  local_24[2] = -0x7fffffc0;
  local_24[0] = local_24[3];
  FUN_01095c80(param_2,local_24,local_70);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],local_24[2] * 4);
  }
  *param_1 = CONCAT44(uStack_4c,local_50);
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  return;
}

// 01096EA0  FUN_01096ea0  size=127  [run]
void __fastcall FUN_01096ea0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_1c = 0;
    local_20 = 0;
    local_18 = 0x80000000;
    local_14 = 0;
    local_8 = 0;
    local_10 = 0;
    local_c = 0;
    FUN_010959d0(&local_20);
    FUN_01091a40(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    *(undefined4 *)(param_1 + 0x18) = 1;
    local_1c = 0;
    if (-1 < (int)local_18) {
      local_14 = uVar1;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,(local_18 & 0x3fffffff) * 0x30);
    }
  }
  return;
}

// 01096F20  FUN_01096f20  size=147  [run]
void __thiscall FUN_01096f20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01096FC0  FUN_01096fc0  size=191  [run]
void __thiscall FUN_01096fc0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x40);
  }
  iVar3 = (param_1[1] - param_2) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(iVar3 * 0x40 + 8 + param_2 * 0x40 + *param_1);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(param_1[1] * 0x40 + *param_1);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 01097090  FUN_01097090  size=112  [run]
void __fastcall FUN_01097090(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01097110  FUN_01097110  size=144  [run]
void __fastcall FUN_01097110(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x40 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01097240  FUN_01097240  size=149  [run]
void __thiscall FUN_01097240(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010972E0  FUN_010972e0  size=144  [run]
void __fastcall FUN_010972e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x40 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010974B0  FUN_010974b0  size=5380  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_010974b0(int *param_1,int param_2,char param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LPVOID pvVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int *piVar17;
  int *piVar18;
  int **ppiVar19;
  int **ppiVar20;
  uint uVar21;
  float *pfVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  float fVar37;
  float fVar38;
  undefined1 in_XMM3 [16];
  undefined1 auVar39 [16];
  undefined1 *local_310;
  uint local_30c;
  uint local_308;
  undefined1 local_304 [260];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [4];
  float afStack_1dc [3];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [8];
  float fStack_128;
  float fStack_124;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  int local_b4;
  undefined1 local_b0 [16];
  int local_98;
  int local_94;
  int local_90;
  undefined1 (*local_8c) [16];
  undefined1 (*local_88) [16];
  undefined1 (*local_84) [16];
  int *local_80;
  int *local_7c;
  int local_78 [10];
  uint local_50;
  int *local_4c;
  uint local_48;
  uint local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  char local_29;
  int *local_28;
  int *local_24;
  int *local_20;
  int **local_1c;
  int *local_18;
  int *local_14;
  
  if (((param_2 != 0) && (2 < (uint)param_1[4])) &&
     (*(int *)(*param_1 + 0x24 + param_2 * 0x30) != 0)) {
    local_4c = (int *)0x0;
    local_48 = 0;
    local_44 = 0x80000000;
    local_20 = param_1;
    pvVar13 = TlsGetValue(DAT_01f8fc4c);
    local_1c = (int **)(**(code **)(**(int **)((int)pvVar13 + 0x2c) + 4))(0x14);
    if (local_1c == (int **)0x0) {
      local_1c = (int **)0x0;
    }
    else {
      *local_1c = (int *)0x0;
      local_1c[1] = (int *)0x0;
      local_1c[2] = (int *)0x80000000;
      local_1c[3] = (int *)0x0;
      local_1c[4] = (int *)0xffffffff;
    }
    if (local_48 == (local_44 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_4c,4);
    }
    local_4c[local_48] = (int)local_1c;
    local_48 = local_48 + 1;
    local_b4 = *(int *)(*param_1 + 0x20 + param_2 * 0x30);
    local_e0._8_4_ = 0x7f7fffee;
    local_e0._0_8_ = 0x7f7fffee7f7fffee;
    local_e0._12_4_ = 0x7f7fffee;
    local_d0._8_4_ = 0xff7fffee;
    local_d0._0_8_ = 0xff7fffeeff7fffee;
    local_d0._12_4_ = 0xff7fffee;
    if (local_b4 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = (uint)(*(int *)(*param_1 + 0x28 + local_b4 * 0x30) == param_2);
    }
    local_310 = local_304;
    local_38 = (int *)0x0;
    local_30c = 0;
    local_308 = 0x80000040;
    while( true ) {
      while (iVar23 = param_2 * 0x30 + *param_1, *(int *)(iVar23 + 0x24) != 0) {
        local_18 = *(int **)(iVar23 + 0x28);
        if (local_30c == (local_308 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_310,4);
        }
        *(int **)(local_310 + local_30c * 4) = local_18;
        local_30c = local_30c + 1;
        param_2 = *(int *)(iVar23 + 0x24);
        iVar23 = (iVar23 - *param_1) / 0x30;
        *(int *)(*param_1 + iVar23 * 0x30) = param_1[3];
        param_1[3] = iVar23;
      }
      piVar17 = (int *)*local_4c;
      if (piVar17[1] == (piVar17[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar17,4);
      }
      *(int *)(*piVar17 + piVar17[1] * 4) = param_2;
      piVar17[1] = piVar17[1] + 1;
      if (local_30c == 0) break;
      param_2 = *(int *)(local_310 + local_30c * 4 + -4);
      local_30c = local_30c - 1;
    }
    local_30c = 0;
    if ((local_308 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_310,local_308 * 4);
    }
    local_180 = 0.5;
    fStack_17c = 0.5;
    fStack_178 = 0.5;
    fStack_174 = 0.5;
    local_160 = (float)(int)param_4;
    local_78[0] = 0;
    local_78[2] = 0x80000000;
    local_78[3] = 0;
    local_78[4] = 0;
    local_f0._0_4_ = (float)(int)(param_4 - 1);
    local_78[1] = 0;
    local_78[5] = 0x80000000;
    local_78[6] = 0;
    local_78[7] = 0;
    local_f0._4_4_ = local_f0._0_4_;
    local_f0._8_4_ = local_f0._0_4_;
    local_f0._12_4_ = local_f0._0_4_;
    local_78[8] = 0x80000000;
    fStack_15c = local_160;
    fStack_158 = local_160;
    fStack_154 = local_160;
    if (0 < (int)param_4) {
      FUN_0100a210(&PTR_vftable_018e9b94,local_78,((int)param_4 < 0) - 1 & param_4,0x40);
    }
    local_24 = (int *)(param_4 * 0x40);
    local_1c = (int **)((local_78[1] - param_4) + -1);
    if (-1 < (int)local_1c) {
      piVar17 = (int *)((int)local_24 + (int)local_1c * 0x40 + 8 + local_78[0]);
      do {
        piVar17[-1] = 0;
        if (-1 < *piVar17) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar17[-2],*piVar17 * 4);
        }
        local_1c = (int **)((int)local_1c + -1);
        piVar17[-2] = 0;
        *piVar17 = -0x80000000;
        piVar17 = piVar17 + -0x10;
      } while (-1 < (int)local_1c);
    }
    iVar23 = param_4 - local_78[1];
    puVar14 = (undefined4 *)(local_78[1] * 0x40 + local_78[0]);
    if (0 < iVar23) {
      do {
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0x80000000;
        }
        puVar14 = puVar14 + 0x10;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    local_78[1] = param_4;
    if ((int)(local_78[5] & 0x3fffffffU) < (int)param_4) {
      uVar21 = (local_78[5] & 0x3fffffffU) * 2;
      uVar27 = param_4;
      if ((int)param_4 < (int)uVar21) {
        uVar27 = uVar21;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,local_78 + 3,uVar27,0x40);
    }
    iVar23 = (local_78[4] - param_4) + -1;
    if (-1 < iVar23) {
      piVar17 = (int *)((int)local_24 + iVar23 * 0x40 + 8 + local_78[3]);
      do {
        piVar17[-1] = 0;
        if (-1 < *piVar17) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar17[-2],*piVar17 * 4);
        }
        piVar17[-2] = 0;
        *piVar17 = -0x80000000;
        iVar23 = iVar23 + -1;
        piVar17 = piVar17 + -0x10;
      } while (-1 < iVar23);
    }
    iVar23 = param_4 - local_78[4];
    puVar14 = (undefined4 *)(local_78[4] * 0x40 + local_78[3]);
    if (0 < iVar23) {
      do {
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0x80000000;
        }
        puVar14 = puVar14 + 0x10;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    local_78[4] = param_4;
    if ((int)(local_78[8] & 0x3fffffffU) < (int)param_4) {
      uVar21 = (local_78[8] & 0x3fffffffU) * 2;
      if ((int)uVar21 <= (int)param_4) {
        uVar21 = param_4;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,local_78 + 6,uVar21,0x40);
    }
    iVar23 = (local_78[7] - param_4) + -1;
    if (-1 < iVar23) {
      piVar17 = (int *)((int)local_24 + iVar23 * 0x40 + 8 + local_78[6]);
      do {
        piVar17[-1] = 0;
        if (-1 < *piVar17) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar17[-2],*piVar17 * 4);
        }
        piVar17[-2] = 0;
        *piVar17 = -0x80000000;
        iVar23 = iVar23 + -1;
        piVar17 = piVar17 + -0x10;
      } while (-1 < iVar23);
    }
    iVar23 = param_4 - local_78[7];
    puVar14 = (undefined4 *)(local_78[7] * 0x40 + local_78[6]);
    if (0 < iVar23) {
      do {
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0x80000000;
        }
        puVar14 = puVar14 + 0x10;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    local_78[7] = param_4;
    do {
      piVar24 = local_20;
      piVar17 = (int *)local_4c[local_48 + -1];
      local_48 = local_48 + -1;
      iVar23 = piVar17[1];
      local_34 = piVar17;
      if ((param_5 < iVar23) || (piVar17[4] == -1)) {
        local_120._0_8_ = (ulonglong)DAT_01701ce0 ^ 0x8000000080000000;
        local_120._8_4_ = DAT_01701ce0._8_4_ ^ 0x80000000;
        local_120._12_4_ = DAT_01701ce0._12_4_ ^ 0x80000000;
        _local_130 = _DAT_01701ce0;
        if (0 < iVar23) {
          piVar18 = (int *)*piVar17;
          local_1c = (int **)iVar23;
          do {
            _local_130 = minps(_local_130,*(undefined1 (*) [16])(*local_20 + *piVar18 * 0x30));
            local_120 = maxps(local_120,*(undefined1 (*) [16])(*local_20 + 0x10 + *piVar18 * 0x30));
            piVar18 = piVar18 + 1;
            local_1c = (int **)((int)local_1c + -1);
          } while (local_1c != (int **)0x0);
          local_1c = (int **)0x0;
        }
        auVar32._0_4_ = local_120._0_4_ - local_130._0_4_;
        auVar32._4_4_ = local_120._4_4_ - local_130._4_4_;
        auVar32._8_4_ = local_120._8_4_ - local_130._8_4_;
        auVar32._12_4_ = local_120._12_4_ - local_130._12_4_;
        auVar29 = rcpps(in_XMM3,auVar32);
        local_170 = (2.0 - auVar29._0_4_ * auVar32._0_4_) * auVar29._0_4_ * local_160;
        fStack_16c = (2.0 - auVar29._4_4_ * auVar32._4_4_) * auVar29._4_4_ * fStack_15c;
        fStack_168 = (2.0 - auVar29._8_4_ * auVar32._8_4_) * auVar29._8_4_ * fStack_158;
        fStack_164 = fStack_154 * 0.0;
        if (local_20[3] == 0) {
          FUN_010948a0(1);
        }
        local_14 = (int *)piVar24[3];
        iVar23 = *piVar24;
        piVar24[3] = *(int *)(iVar23 + (int)local_14 * 0x30);
        *(undefined1 (*) [16])(iVar23 + (int)local_14 * 0x30) = _local_130;
        *(undefined1 (*) [16])(iVar23 + 0x10 + (int)local_14 * 0x30) = local_120;
        *(int *)(*piVar24 + 0x20 + (int)local_14 * 0x30) = piVar17[3];
        piVar18 = local_14;
        if (piVar17[4] != -1) {
          *(int **)(*piVar24 + 0x24 + (piVar17[4] + piVar17[3] * 0xc) * 4) = local_14;
          piVar18 = local_38;
        }
        local_38 = piVar18;
        pvVar13 = TlsGetValue(DAT_01f8fc4c);
        local_40 = (undefined4 *)(**(code **)(**(int **)((int)pvVar13 + 0x2c) + 4))(0x14);
        if (local_40 == (undefined4 *)0x0) {
          local_40 = (undefined4 *)0x0;
        }
        else {
          *local_40 = 0;
          local_40[1] = 0;
          local_40[2] = 0x80000000;
          local_40[3] = local_14;
          local_40[4] = 0;
        }
        pvVar13 = TlsGetValue(DAT_01f8fc4c);
        puVar26 = (undefined4 *)(**(code **)(**(int **)((int)pvVar13 + 0x2c) + 4))(0x14);
        puVar14 = (undefined4 *)0x0;
        if (puVar26 != (undefined4 *)0x0) {
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[2] = 0x80000000;
          puVar26[3] = local_14;
          puVar26[4] = 1;
          puVar14 = puVar26;
        }
        iVar23 = piVar17[1];
        local_3c = puVar14;
        if ((int)(local_40[2] & 0x3fffffff) < iVar23) {
          iVar25 = (local_40[2] & 0x3fffffff) * 2;
          if (iVar23 < iVar25) {
            iVar23 = iVar25;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_40,iVar23,4);
        }
        iVar23 = piVar17[1];
        if ((int)(puVar14[2] & 0x3fffffff) < iVar23) {
          iVar25 = (puVar14[2] & 0x3fffffff) * 2;
          if (iVar23 < iVar25) {
            iVar23 = iVar25;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,puVar14,iVar23,4);
        }
        FUN_01092890(&PTR_vftable_018e9b94,&local_40,2);
        if (0 < (int)param_4) {
          iVar23 = 0;
          uVar21 = param_4;
          do {
            *(undefined4 *)(local_78[0] + 4 + iVar23) = 0;
            puVar14 = (undefined4 *)(local_78[0] + 0x10 + iVar23);
            *puVar14 = 0x7f7fffee;
            puVar14[1] = 0x7f7fffee;
            puVar14[2] = 0x7f7fffee;
            puVar14[3] = 0x7f7fffee;
            puVar1 = (uint *)(local_78[0] + 0x10 + iVar23);
            uVar27 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (uint *)(local_78[0] + 0x20 + iVar23);
            *puVar2 = *puVar1 ^ 0x80000000;
            puVar2[1] = uVar27 ^ 0x80000000;
            puVar2[2] = uVar8 ^ 0x80000000;
            puVar2[3] = uVar9 ^ 0x80000000;
            *(undefined4 *)(local_78[0] + iVar23 + 0x30) = 0;
            *(undefined4 *)(local_78[3] + 4 + iVar23) = 0;
            iVar25 = local_78[3] + iVar23;
            *(undefined4 *)(iVar25 + 0x10) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x14) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x18) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x1c) = 0x7f7fffee;
            *(uint *)(iVar25 + 0x20) = *(uint *)(iVar25 + 0x10) ^ 0x80000000;
            *(uint *)(iVar25 + 0x24) = *(uint *)(iVar25 + 0x14) ^ 0x80000000;
            *(uint *)(iVar25 + 0x28) = *(uint *)(iVar25 + 0x18) ^ 0x80000000;
            *(uint *)(iVar25 + 0x2c) = *(uint *)(iVar25 + 0x1c) ^ 0x80000000;
            *(undefined4 *)(iVar25 + 0x30) = 0;
            iVar25 = local_78[6] + iVar23;
            *(undefined4 *)(iVar25 + 4) = 0;
            *(undefined4 *)(iVar25 + 0x10) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x14) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x18) = 0x7f7fffee;
            *(undefined4 *)(iVar25 + 0x1c) = 0x7f7fffee;
            auVar29._0_8_ = *(ulonglong *)(iVar25 + 0x10) ^ 0x8000000080000000;
            auVar29._8_4_ = *(uint *)(iVar25 + 0x18) ^ 0x80000000;
            auVar29._12_4_ = *(uint *)(iVar25 + 0x1c) ^ 0x80000000;
            iVar23 = iVar23 + 0x40;
            uVar21 = uVar21 - 1;
            *(undefined1 (*) [16])(iVar25 + 0x20) = auVar29;
            *(undefined4 *)(iVar25 + 0x30) = 0;
          } while (uVar21 != 0);
        }
        local_b0 = ZEXT816(0);
        local_110._4_4_ = fStack_15c;
        local_110._0_4_ = local_160;
        local_110._8_4_ = fStack_158;
        local_110._12_4_ = fStack_154;
        local_14 = (int *)0x0;
        if (0 < piVar17[1]) {
          do {
            pauVar15 = (undefined1 (*) [16])
                       (*(int *)((int)local_14 * 4 + *local_34) * 0x30 + *local_20);
            auVar32 = *pauVar15;
            auVar29 = pauVar15[1];
            auVar30._0_4_ =
                 ((auVar32._0_4_ + auVar29._0_4_) * 0.5 - (float)local_130._0_4_) * local_170 +
                 local_180;
            auVar30._4_4_ =
                 ((auVar32._4_4_ + auVar29._4_4_) * 0.5 - (float)local_130._4_4_) * fStack_16c +
                 fStack_17c;
            auVar30._8_4_ =
                 ((auVar32._8_4_ + auVar29._8_4_) * 0.5 - fStack_128) * fStack_168 + fStack_178;
            auVar30._12_4_ =
                 ((auVar32._12_4_ + auVar29._12_4_) * 0.5 - fStack_124) * fStack_164 + fStack_174;
            auVar30 = maxps(auVar30,_DAT_01701b10);
            auVar30 = minps(auVar30,local_f0);
            local_b0 = maxps(auVar30,local_b0);
            local_110 = minps(auVar30,local_110);
            local_100 = (int)auVar30._0_4_ ^ -(uint)(2.1474836e+09 <= auVar30._0_4_);
            uStack_fc = (int)auVar30._4_4_ ^ -(uint)(2.1474836e+09 <= auVar30._4_4_);
            uStack_f8 = (int)auVar30._8_4_ ^ -(uint)(2.1474836e+09 <= auVar30._8_4_);
            uStack_f4 = (int)auVar30._12_4_ ^ -(uint)(2.1474836e+09 <= auVar30._12_4_);
            iVar23 = local_100 * 0x40;
            pauVar15 = (undefined1 (*) [16])(local_78[0] + 0x10 + iVar23);
            auVar30 = minps(*(undefined1 (*) [16])(local_78[0] + 0x10 + iVar23),auVar32);
            *pauVar15 = auVar30;
            auVar30 = maxps(pauVar15[1],auVar29);
            pauVar15[1] = auVar30;
            iVar25 = uStack_fc * 0x40;
            pauVar15 = (undefined1 (*) [16])(iVar25 + 0x10 + local_78[3]);
            auVar30 = minps(*(undefined1 (*) [16])(iVar25 + 0x10 + local_78[3]),auVar32);
            *pauVar15 = auVar30;
            auVar30 = maxps(pauVar15[1],auVar29);
            pauVar15[1] = auVar30;
            local_1c = (int **)(uStack_f8 * 0x40);
            pauVar15 = (undefined1 (*) [16])((int)local_1c + 0x10 + local_78[6]);
            auVar32 = minps(*(undefined1 (*) [16])((int)local_1c + 0x10 + local_78[6]),auVar32);
            *pauVar15 = auVar32;
            auVar32 = maxps(pauVar15[1],auVar29);
            pauVar15[1] = auVar32;
            piVar17 = (int *)(local_78[0] + iVar23);
            local_18 = (undefined4 *)(*local_34 + (int)local_14 * 4);
            if (piVar17[1] == (piVar17[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar17,4);
            }
            *(int *)(*piVar17 + piVar17[1] * 4) = *local_18;
            piVar17[1] = piVar17[1] + 1;
            iVar23 = *local_34;
            piVar17 = (int *)(iVar25 + local_78[3]);
            iVar25 = (int)local_14 * 4;
            if (piVar17[1] == (piVar17[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar17,4);
            }
            *(undefined4 *)(*piVar17 + piVar17[1] * 4) = *(undefined4 *)(iVar23 + iVar25);
            piVar17[1] = piVar17[1] + 1;
            iVar23 = *local_34;
            piVar17 = (int *)((int)local_1c + local_78[6]);
            iVar25 = (int)local_14 * 4;
            if (piVar17[1] == (piVar17[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar17,4);
            }
            *(undefined4 *)(*piVar17 + piVar17[1] * 4) = *(undefined4 *)(iVar23 + iVar25);
            piVar17[1] = piVar17[1] + 1;
            local_14 = (int *)((int)local_14 + 1);
          } while ((int)local_14 < local_34[1]);
        }
        fVar28 = 3.40282e+38;
        local_14 = (int *)0x0;
        local_28 = (int *)0xffffffff;
        local_24 = (int *)0x0;
        local_1c = (int **)local_78;
        do {
          local_18 = *local_1c;
          piVar17 = (int *)(int)*(float *)(local_110 + (int)local_24 * 4);
          iVar23 = 0;
          local_84 = (undefined1 (*) [16])0x0;
          if ((int)piVar17 <= (int)*(float *)(local_b0 + (int)local_24 * 4)) {
            pauVar15 = (undefined1 (*) [16])
                       (local_18 + (int)*(float *)(local_b0 + (int)local_24 * 4) * 0x10 + 4);
            pauVar16 = (undefined1 (*) [16])(local_18 + (int)piVar17 * 0x10 + 4);
            local_30 = (int *)(((int)*(float *)(local_b0 + (int)local_24 * 4) - (int)piVar17) + 1);
            auVar32 = local_e0;
            auVar29 = local_d0;
            auVar30 = local_e0;
            auVar39 = local_d0;
            do {
              auVar29 = maxps(auVar29,pauVar16[1]);
              auVar32 = minps(auVar32,*pauVar16);
              iVar23 = iVar23 + *(int *)(pauVar16[-1] + 4);
              auVar30 = minps(auVar30,*pauVar15);
              auVar39 = maxps(auVar39,pauVar15[1]);
              iVar25 = *(int *)(pauVar15[-1] + 4);
              fVar33 = auVar29._0_4_ - auVar32._0_4_;
              fVar31 = auVar29._4_4_ - auVar32._4_4_;
              fVar35 = auVar29._8_4_ - auVar32._8_4_;
              *(float *)pauVar16[2] =
                   (float)iVar23 * (fVar33 * fVar35 + fVar35 * fVar31 + fVar31 * fVar33) +
                   *(float *)pauVar16[2];
              fVar33 = auVar39._0_4_ - auVar30._0_4_;
              fVar31 = auVar39._4_4_ - auVar30._4_4_;
              fVar35 = auVar39._8_4_ - auVar30._8_4_;
              *(float *)pauVar15[2] =
                   (float)(int)(*local_84 + iVar25) *
                   (fVar33 * fVar35 + fVar35 * fVar31 + fVar31 * fVar33) + *(float *)pauVar15[2];
              pauVar16 = pauVar16 + 4;
              pauVar15 = pauVar15 + -4;
              local_30 = (int *)((int)local_30 + -1);
              local_84 = (undefined1 (*) [16])(*local_84 + iVar25);
            } while (local_30 != (int *)0x0);
          }
          if ((int)piVar17 <= (int)*(float *)(local_b0 + (int)local_24 * 4)) {
            if (3 < ((int)*(float *)(local_b0 + (int)local_24 * 4) - (int)piVar17) + 1) {
              local_30 = (int *)((int)*(float *)(local_b0 + (int)local_24 * 4) + -3);
              piVar24 = (int *)((int)piVar17 + 2);
              pfVar22 = (float *)(local_18 + (int)piVar17 * 0x10 + 0xc);
              do {
                if ((pfVar22[-0xb] != 0.0) && (*pfVar22 < fVar28)) {
                  local_14 = local_24;
                  local_28 = piVar17;
                  fVar28 = *pfVar22;
                }
                if ((pfVar22[5] != 0.0) && (pfVar22[0x10] < fVar28)) {
                  local_14 = local_24;
                  local_28 = (int *)((int)piVar24 + -1);
                  fVar28 = pfVar22[0x10];
                }
                if ((pfVar22[0x15] != 0.0) && (pfVar22[0x20] < fVar28)) {
                  local_14 = local_24;
                  local_28 = piVar24;
                  fVar28 = pfVar22[0x20];
                }
                if ((pfVar22[0x25] != 0.0) && (pfVar22[0x30] < fVar28)) {
                  local_14 = local_24;
                  local_28 = (int *)((int)piVar24 + 1);
                  fVar28 = pfVar22[0x30];
                }
                piVar17 = piVar17 + 1;
                piVar24 = piVar24 + 1;
                pfVar22 = pfVar22 + 0x40;
              } while ((int)piVar17 <= (int)*(float *)(local_b0 + (int)local_24 * 4) + -3);
            }
            if ((int)piVar17 <= (int)*(float *)(local_b0 + (int)local_24 * 4)) {
              pfVar22 = (float *)(local_18 + (int)piVar17 * 0x10 + 0xc);
              do {
                if ((pfVar22[-0xb] != 0.0) && (*pfVar22 < fVar28)) {
                  local_14 = local_24;
                  local_28 = piVar17;
                  fVar28 = *pfVar22;
                }
                piVar17 = (int *)((int)piVar17 + 1);
                pfVar22 = pfVar22 + 0x10;
              } while ((int)piVar17 <= (int)*(float *)(local_b0 + (int)local_24 * 4));
            }
          }
          local_1c = local_1c + 3;
          local_24 = (int *)((int)local_24 + 1);
        } while ((int)local_24 < 3);
        piVar17 = local_78 + (int)local_14 * 3;
        in_XMM3 = local_d0;
        if (0 < (int)local_28) {
          iVar23 = 0;
          local_18 = local_28;
          do {
            FUN_01092950(&PTR_vftable_018e9b94,*(undefined4 *)(*piVar17 + iVar23),
                         *(undefined4 *)(*piVar17 + 4 + iVar23));
            iVar23 = iVar23 + 0x40;
            local_18 = (int *)((int)local_18 + -1);
          } while (local_18 != (int *)0x0);
        }
        iVar23 = (int)local_28 + 1;
        if (iVar23 < (int)param_4) {
          iVar25 = iVar23 * 0x40;
          local_18 = (int *)(param_4 - iVar23);
          do {
            FUN_01092950(&PTR_vftable_018e9b94,*(undefined4 *)(*piVar17 + iVar25),
                         *(undefined4 *)(*piVar17 + 4 + iVar25));
            iVar25 = iVar25 + 0x40;
            local_18 = (int *)((int)local_18 + -1);
          } while (local_18 != (int *)0x0);
        }
        if (((local_40[1] == 0) || (local_3c[1] == 0)) && (local_3c[1] != 0 || local_40[1] != 0)) {
          piVar17 = (int *)((int)local_28 * 0x40 + *piVar17);
          iVar23 = piVar17[1];
          piVar17 = (int *)*piVar17;
        }
        else {
          puVar14 = (undefined4 *)((int)local_28 * 0x40 + *piVar17);
          local_18 = (int *)*puVar14;
          iVar23 = puVar14[1];
          iVar25 = iVar23 >> 1;
          FUN_010936c0(local_18,iVar23,local_14,local_20);
          FUN_01092950(&PTR_vftable_018e9b94,local_18,iVar25);
          iVar23 = iVar23 - iVar25;
          piVar17 = local_18 + iVar25;
        }
        FUN_01092950(&PTR_vftable_018e9b94,piVar17,iVar23);
      }
      else {
        while (1 < iVar23) {
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
                    /* WARNING: Read-only address (ram,0x01701ce0) is written */
          iVar23 = local_34[1];
          local_140._0_8_ = (ulonglong)DAT_01701ce0 ^ 0x8000000080000000;
          local_140._8_4_ = DAT_01701ce0._8_4_ ^ 0x80000000;
          local_140._12_4_ = DAT_01701ce0._12_4_ ^ 0x80000000;
          local_80 = (int *)0xffffffff;
          local_7c = (int *)0xffffffff;
          local_24 = (int *)0x0;
          local_150 = _DAT_01701ce0;
          if (0 < iVar23) {
            local_14 = (int *)*local_34;
            auVar32 = _DAT_01701ce0;
            do {
              pauVar15 = (undefined1 (*) [16])(*local_14 * 0x30 + *piVar24);
              piVar17 = (int *)((int)local_24 + 1);
              if ((int)piVar17 < iVar23) {
                local_28 = local_14 + 1;
                piVar18 = piVar17;
                do {
                  pauVar16 = (undefined1 (*) [16])(*local_28 * 0x30 + *piVar24);
                  auVar29 = minps(*pauVar16,*pauVar15);
                  in_XMM3 = maxps(pauVar16[1],pauVar15[1]);
                  fVar31 = in_XMM3._0_4_ - auVar29._0_4_;
                  fVar33 = in_XMM3._4_4_ - auVar29._4_4_;
                  fVar35 = in_XMM3._8_4_ - auVar29._8_4_;
                  fVar28 = fVar33 * fVar31;
                  fVar33 = fVar35 * fVar33;
                  fVar31 = fVar31 * fVar35;
                  fVar35 = fVar33 + fVar28 + fVar31;
                  auVar39._4_4_ = 0;
                  auVar39._0_4_ = fVar35;
                  if (fVar35 < auVar32._0_4_) {
                    auVar39._8_4_ = fVar33 + fVar28 + fVar31;
                    auVar39._12_4_ = fVar33 + fVar28 + fVar31;
                    local_80 = local_24;
                    auVar32 = auVar39;
                    local_150 = auVar29;
                    local_140 = in_XMM3;
                    local_7c = piVar18;
                  }
                  local_28 = local_28 + 1;
                  piVar18 = (int *)((int)piVar18 + 1);
                } while ((int)piVar18 < iVar23);
              }
              local_14 = local_14 + 1;
              local_24 = piVar17;
            } while ((int)piVar17 < iVar23);
          }
          local_98 = *(int *)(*local_34 + (int)local_80 * 4);
          local_18 = (int *)((int)local_7c * 4);
          local_94 = *(int *)((int)local_18 + *local_34);
          if (piVar24[3] == 0) {
            FUN_010948a0(1);
          }
          iVar23 = piVar24[3];
          iVar25 = *piVar24;
          piVar24[3] = *(int *)(iVar25 + iVar23 * 0x30);
          puVar14 = (undefined4 *)(iVar25 + iVar23 * 0x30);
          *puVar14 = local_150._0_4_;
          puVar14[1] = local_150._4_4_;
          puVar14[2] = local_150._8_4_;
          puVar14[3] = local_150._12_4_;
          *(undefined1 (*) [16])(iVar25 + 0x10 + iVar23 * 0x30) = local_140;
          *(int *)(*piVar24 + 0x24 + iVar23 * 0x30) = local_98;
          *(int *)(*piVar24 + 0x28 + iVar23 * 0x30) = local_94;
          *(int *)(*piVar24 + 0x20 + local_98 * 0x30) = iVar23;
          *(int *)(*piVar24 + 0x20 + local_94 * 0x30) = iVar23;
          local_34[1] = local_34[1] + -1;
          if ((int *)local_34[1] != local_7c) {
            *(undefined4 *)((int)local_18 + *local_34) =
                 *(undefined4 *)(*local_34 + local_34[1] * 4);
          }
          *(int *)(*local_34 + (int)local_80 * 4) = iVar23;
          iVar23 = local_34[1];
        }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
                    /* WARNING: Read-only address (ram,0x01701ce0) is written */
        local_18 = *(int **)*local_34;
        *(int *)(*piVar24 + 0x20 + (int)local_18 * 0x30) = local_34[3];
        *(int **)(*piVar24 + 0x24 + (local_34[4] + local_34[3] * 0xc) * 4) = local_18;
      }
      piVar17 = local_34;
      local_34[1] = 0;
      if (-1 < local_34[2]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*local_34,local_34[2] * 4);
      }
      *piVar17 = 0;
      piVar17[2] = -0x80000000;
      pvVar13 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar13 + 0x2c) + 8))(piVar17,0x14);
    } while (local_48 != 0);
    if (param_3 != '\0') {
      local_24 = (int *)((int)local_38 * 0x30);
      piVar17 = local_24;
      do {
        local_1c = (int **)*local_20;
        local_14 = *(int **)((int)local_1c + 0x24 + (int)piVar17);
        local_29 = '\0';
        if (local_14 == (int *)0x0) break;
        do {
          local_30 = (int *)((int)local_14 * 0x30);
          iVar23 = *(int *)((int)local_1c + 0x24 + (int)local_30);
          if (iVar23 != 0) {
            iVar25 = *(int *)((int)local_1c + 0x28 + (int)local_30) * 0x30;
            pfVar3 = (float *)(iVar25 + 0x10 + (int)local_1c);
            pfVar22 = (float *)(iVar25 + (int)local_1c);
            puVar26 = (undefined4 *)(iVar25 + (int)local_1c);
            fVar28 = (pfVar3[1] - pfVar22[1]) * (*pfVar3 - *pfVar22);
            fVar33 = (pfVar3[2] - pfVar22[2]) * (pfVar3[1] - pfVar22[1]);
            fVar31 = (*pfVar3 - *pfVar22) * (pfVar3[2] - pfVar22[2]);
            iVar23 = iVar23 * 0x30;
            pfVar3 = (float *)(iVar23 + 0x10 + (int)local_1c);
            pfVar22 = (float *)(iVar23 + (int)local_1c);
            fVar35 = (pfVar3[1] - pfVar22[1]) * (*pfVar3 - *pfVar22);
            fVar34 = (pfVar3[2] - pfVar22[2]) * (pfVar3[1] - pfVar22[1]);
            fVar36 = (*pfVar3 - *pfVar22) * (pfVar3[2] - pfVar22[2]);
            puVar14 = (undefined4 *)(iVar23 + (int)local_1c);
            local_f0._0_4_ = fVar34 + fVar35 + fVar36 + fVar33 + fVar28 + fVar31;
            local_f0._4_4_ = fVar34 + fVar35 + fVar36 + fVar33 + fVar28 + fVar31;
            local_f0._8_4_ = fVar34 + fVar35 + fVar36 + fVar33 + fVar28 + fVar31;
            local_f0._12_4_ = fVar34 + fVar35 + fVar36 + fVar33 + fVar28 + fVar31;
            if ((puVar14[9] != 0) && (puVar26[9] != 0)) {
              iVar23 = *local_20;
              iVar25 = puVar14[9] * 0x30;
              auVar32 = *(undefined1 (*) [16])(iVar25 + 0x10 + iVar23);
              local_90 = iVar25 + iVar23;
              local_8c = (undefined1 (*) [16])(puVar14[10] * 0x30 + iVar23);
              local_88 = (undefined1 (*) [16])(puVar26[9] * 0x30 + iVar23);
              local_84 = (undefined1 (*) [16])(puVar26[10] * 0x30 + iVar23);
              local_1c0 = minps(*(undefined1 (*) [16])(iVar25 + iVar23),*local_84);
              local_200 = minps(*(undefined1 (*) [16])(iVar25 + iVar23),*local_88);
              _local_1e0 = minps(*local_8c,*local_84);
              local_1a0 = minps(*local_8c,*local_88);
              auVar29 = _local_1e0;
              local_1d0 = maxps(local_8c[1],local_84[1]);
              local_190 = maxps(local_8c[1],local_88[1]);
              fVar28 = local_1d0._0_4_ - (float)local_1e0;
              afStack_1dc[0] = local_1d0._4_4_ - afStack_1dc[0];
              afStack_1dc[1] = local_1d0._8_4_ - afStack_1dc[1];
              fVar33 = afStack_1dc[0] * fVar28;
              afStack_1dc[0] = afStack_1dc[1] * afStack_1dc[0];
              fVar28 = fVar28 * afStack_1dc[1];
              local_1f0 = maxps(auVar32,local_88[1]);
              local_1b0 = maxps(auVar32,local_84[1]);
              fVar31 = local_1f0._0_4_ - local_200._0_4_;
              fVar34 = local_1f0._4_4_ - local_200._4_4_;
              fVar36 = local_1f0._8_4_ - local_200._8_4_;
              fVar35 = fVar34 * fVar31;
              fVar34 = fVar36 * fVar34;
              fVar31 = fVar31 * fVar36;
              fVar37 = local_1b0._0_4_ - local_1c0._0_4_;
              fVar36 = local_1b0._4_4_ - local_1c0._4_4_;
              fVar38 = local_1b0._8_4_ - local_1c0._8_4_;
              local_e0._0_4_ = afStack_1dc[0] + fVar33 + fVar28 + fVar34 + fVar35 + fVar31;
              local_e0._4_4_ = afStack_1dc[0] + fVar33 + fVar28 + fVar34 + fVar35 + fVar31;
              local_e0._8_4_ = afStack_1dc[0] + fVar33 + fVar28 + fVar34 + fVar35 + fVar31;
              local_e0._12_4_ = afStack_1dc[0] + fVar33 + fVar28 + fVar34 + fVar35 + fVar31;
              fVar31 = local_190._0_4_ - local_1a0._0_4_;
              fVar33 = local_190._4_4_ - local_1a0._4_4_;
              fVar34 = local_190._8_4_ - local_1a0._8_4_;
              fVar35 = fVar36 * fVar37;
              fVar36 = fVar38 * fVar36;
              fVar37 = fVar37 * fVar38;
              fVar28 = fVar33 * fVar31;
              fVar33 = fVar34 * fVar33;
              fVar31 = fVar31 * fVar34;
              local_d0._0_4_ = fVar36 + fVar35 + fVar37 + fVar33 + fVar28 + fVar31;
              local_d0._4_4_ = fVar36 + fVar35 + fVar37 + fVar33 + fVar28 + fVar31;
              local_d0._8_4_ = fVar36 + fVar35 + fVar37 + fVar33 + fVar28 + fVar31;
              local_d0._12_4_ = fVar36 + fVar35 + fVar37 + fVar33 + fVar28 + fVar31;
              local_18 = (int *)(uint)(local_d0._0_4_ <= local_e0._0_4_);
              _local_1e0 = auVar29;
              if (SUB164(*(undefined1 (*) [16])(local_e0 + (int)local_18 * 0x10),0) < local_f0._0_4_
                 ) {
                iVar23 = (int)local_18 * 0xc;
                puVar14[10] = ((&local_90)[*(int *)(&DAT_017d5c60 + (int)local_18 * 0xc)] -
                              (int)local_1c) / 0x30;
                puVar26[9] = ((&local_90)[*(int *)(&DAT_017d5c64 + iVar23)] - *local_20) / 0x30;
                puVar26[10] = ((&local_90)[*(int *)(&DAT_017d5c68 + iVar23)] - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017d5c60 + iVar23)] + 0x20) =
                     ((int)puVar14 - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017d5c64 + iVar23)] + 0x20) =
                     ((int)puVar26 - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017d5c68 + iVar23)] + 0x20) =
                     ((int)puVar26 - *local_20) / 0x30;
                iVar23 = (int)local_18 * 0x40;
                uVar10 = *(undefined4 *)(local_200 + iVar23 + 4);
                uVar11 = *(undefined4 *)(local_200 + iVar23 + 8);
                uVar12 = *(undefined4 *)(local_200 + iVar23 + 0xc);
                *puVar14 = *(undefined4 *)(local_200 + iVar23);
                puVar14[1] = uVar10;
                puVar14[2] = uVar11;
                puVar14[3] = uVar12;
                uVar10 = *(undefined4 *)(local_1f0 + iVar23 + 4);
                uVar11 = *(undefined4 *)(local_1f0 + iVar23 + 8);
                uVar12 = *(undefined4 *)(local_1f0 + iVar23 + 0xc);
                puVar14[4] = *(undefined4 *)(local_1f0 + iVar23);
                puVar14[5] = uVar10;
                puVar14[6] = uVar11;
                puVar14[7] = uVar12;
                uVar10 = *(undefined4 *)(local_1e0 + iVar23 + 4);
                uVar11 = *(undefined4 *)(local_1e0 + iVar23 + 8);
                uVar12 = *(undefined4 *)(local_1e0 + iVar23 + 0xc);
                *puVar26 = *(undefined4 *)(local_1e0 + iVar23);
                puVar26[1] = uVar10;
                puVar26[2] = uVar11;
                puVar26[3] = uVar12;
                *(undefined1 (*) [16])(puVar26 + 4) = *(undefined1 (*) [16])(local_1d0 + iVar23);
                local_29 = '\x01';
              }
            }
          }
          local_1c = (int **)*local_20;
          piVar17 = *(int **)((int)local_1c + 0x24 + (int)local_30);
          if (piVar17 == (int *)0x0) {
            piVar17 = *(int **)((int)local_1c + 0x20 + (int)local_30);
            while ((piVar24 = piVar17, piVar24 != local_38 &&
                   (*(int **)((int)local_1c + 0x28 + (int)piVar24 * 0x30) == local_14))) {
              local_14 = piVar24;
              piVar17 = *(int **)((int)local_1c + 0x20 + (int)piVar24 * 0x30);
            }
            piVar17 = local_14;
            if (piVar24 != (int *)0x0) {
              piVar17 = *(int **)((int)local_1c + 0x28 + (int)piVar24 * 0x30);
            }
            if ((piVar24 == local_38) && (piVar17 == local_14)) {
              piVar17 = (int *)0x0;
            }
            local_14 = piVar17;
          }
          else {
            local_14 = piVar17;
          }
          local_14 = piVar17;
        } while (piVar17 != (int *)0x0);
        piVar17 = local_24;
      } while (local_29 != '\0');
      iVar23 = *local_20;
      local_14 = *(int **)(iVar23 + 0x24 + (int)piVar17);
      while (local_14 != (int *)0x0) {
        local_18 = (int *)(iVar23 + 0x24 + (int)local_14 * 0x30);
        if (*(int *)(iVar23 + 0x24 + (int)local_14 * 0x30) != 0) {
          iVar25 = *local_18;
          iVar6 = *(int *)(iVar23 + 0x28 + (int)local_14 * 0x30);
          local_30 = (int *)(iVar23 + 0x28 + (int)local_14 * 0x30);
          pfVar4 = (float *)(iVar23 + 0x10 + iVar25 * 0x30);
          pfVar22 = (float *)(iVar23 + iVar25 * 0x30);
          pfVar5 = (float *)(iVar23 + 0x10 + iVar6 * 0x30);
          pfVar3 = (float *)(iVar23 + iVar6 * 0x30);
          if ((pfVar4[2] - pfVar22[2]) * (pfVar4[1] - pfVar22[1]) +
              (pfVar4[1] - pfVar22[1]) * (*pfVar4 - *pfVar22) +
              (*pfVar4 - *pfVar22) * (pfVar4[2] - pfVar22[2]) <
              (pfVar5[2] - pfVar3[2]) * (pfVar5[1] - pfVar3[1]) +
              (pfVar5[1] - pfVar3[1]) * (*pfVar5 - *pfVar3) +
              (*pfVar5 - *pfVar3) * (pfVar5[2] - pfVar3[2])) {
            *local_18 = *local_30;
            *local_30 = iVar25;
          }
        }
        iVar23 = *local_20;
        piVar17 = *(int **)(iVar23 + 0x24 + (int)local_14 * 0x30);
        if (piVar17 == (int *)0x0) {
          piVar24 = *(int **)(iVar23 + 0x20 + (int)local_14 * 0x30);
          piVar17 = local_14;
          while ((piVar18 = piVar24, piVar18 != local_38 &&
                 (*(int **)(iVar23 + 0x28 + (int)piVar18 * 0x30) == piVar17))) {
            piVar17 = piVar18;
            piVar24 = *(int **)(iVar23 + 0x20 + (int)piVar18 * 0x30);
          }
          local_14 = piVar17;
          if (piVar18 != (int *)0x0) {
            local_14 = *(int **)(iVar23 + 0x28 + (int)piVar18 * 0x30);
          }
          if ((piVar18 == local_38) && (local_14 == piVar17)) {
            local_14 = (int *)0x0;
          }
        }
        else {
          local_14 = piVar17;
        }
      }
    }
    *(int *)(*local_20 + 0x20 + (int)local_38 * 0x30) = local_b4;
    if (local_b4 == 0) {
      local_20[6] = (int)local_38;
    }
    else {
      *(int **)(*local_20 + 0x24 + (local_50 + local_b4 * 0xc) * 4) = local_38;
      iVar23 = *local_20;
      iVar25 = local_b4;
      do {
        iVar6 = *(int *)(iVar23 + 0x24 + iVar25 * 0x30);
        iVar7 = *(int *)(iVar23 + 0x28 + iVar25 * 0x30);
        auVar32 = *(undefined1 (*) [16])(iVar23 + 0x10 + iVar6 * 0x30);
        auVar29 = *(undefined1 (*) [16])(iVar23 + 0x10 + iVar7 * 0x30);
        auVar30 = minps(*(undefined1 (*) [16])(iVar23 + iVar6 * 0x30),
                        *(undefined1 (*) [16])(iVar23 + iVar7 * 0x30));
        *(undefined1 (*) [16])(iVar23 + iVar25 * 0x30) = auVar30;
        auVar32 = maxps(auVar32,auVar29);
        *(undefined1 (*) [16])(iVar23 + 0x10 + iVar25 * 0x30) = auVar32;
        iVar23 = *local_20;
        iVar25 = *(int *)(iVar23 + 0x20 + iVar25 * 0x30);
      } while (iVar25 != 0);
    }
    local_50 = 2;
    ppiVar20 = &local_4c;
    do {
      ppiVar19 = ppiVar20 + -3;
      iVar23 = (int)ppiVar20[-4] + -1;
      local_1c = ppiVar19;
      if (-1 < iVar23) {
        piVar17 = ppiVar20[-5] + iVar23 * 0x10 + 2;
        do {
          piVar17[-1] = 0;
          if (-1 < *piVar17) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar17[-2],*piVar17 * 4);
            ppiVar19 = local_1c;
          }
          piVar17[-2] = 0;
          *piVar17 = -0x80000000;
          iVar23 = iVar23 + -1;
          piVar17 = piVar17 + -0x10;
        } while (-1 < iVar23);
      }
      ppiVar19[-1] = (int *)0x0;
      ppiVar20 = ppiVar19;
      if (-1 < (int)*ppiVar19) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c[-2],(int)*ppiVar19 << 6);
        ppiVar20 = local_1c;
      }
      iVar23 = local_50 + -1;
      local_50 = iVar23;
      ppiVar20[-2] = (int *)0x0;
      *ppiVar20 = (int *)0x80000000;
    } while (-1 < iVar23);
    local_48 = 0;
    if (-1 < (int)local_44) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,local_44 * 4);
    }
  }
  return;
}

// 010989D0  FUN_010989d0  size=43  [run]
void __thiscall FUN_010989d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010974b0(*(undefined4 *)(param_1 + 0x18),1,param_3,param_4);
  FUN_01096ea0();
  return;
}

// 01098B40  hkBaseObject::hkBaseObject_35  size=340  [run]
void __fastcall hkBaseObject::hkBaseObject_35(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[0x13] + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(param_1[0x12] + 8 + iVar1 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -3;
    } while (-1 < iVar1);
  }
  param_1[0x13] = 0;
  if (-1 < (int)param_1[0x14]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],(param_1[0x14] & 0x3fffffff) * 0xc);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  iVar1 = param_1[0xe] + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(param_1[0xd] + 8 + iVar1 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 8);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -3;
    } while (-1 < iVar1);
  }
  param_1[0xe] = 0;
  if (-1 < (int)param_1[0xf]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],(param_1[0xf] & 0x3fffffff) * 0xc);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_01094200();
  FUN_01093a30();
  FUN_01094190();
  FUN_01093980();
  *param_1 = vftable;
  return;
}

// 01098D60  FUN_01098d60  size=10  [run]
void FUN_01098d60(void)

{
  return;
}

// 01098E00  FUN_01098e00  size=4  [run]
undefined4 __fastcall FUN_01098e00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}

// 01098E20  FUN_01098e20  size=27  [run]
void __fastcall FUN_01098e20(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

// 01098E40  FUN_01098e40  size=7  [run]
void __fastcall FUN_01098e40(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}

// 01098E50  FUN_01098e50  size=7  [run]
void __fastcall FUN_01098e50(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}

// 01098E60  FUN_01098e60  size=7  [run]
void __fastcall FUN_01098e60(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}

// 01098E70  FUN_01098e70  size=7  [run]
void __fastcall FUN_01098e70(int param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}

// 01098EB0  FUN_01098eb0  size=23  [run]
void FUN_01098eb0(void)

{
  return;
}

// 01098ED0  FUN_01098ed0  size=54  [run]
void __thiscall FUN_01098ed0(int param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  piVar1 = *(int **)(param_1 + 0xc);
  auVar2 = *(undefined1 (*) [16])(piVar1 + 8);
  *param_2 = auVar2;
  param_2[1] = auVar2;
  if (piVar1 != (int *)0x0) {
    auVar3 = *param_2;
    do {
      auVar3 = minps(auVar3,*(undefined1 (*) [16])(piVar1 + 8));
      auVar2 = maxps(auVar2,*(undefined1 (*) [16])(piVar1 + 8));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    *param_2 = auVar3;
    param_2[1] = auVar2;
  }
  return;
}

// 01098F40  FUN_01098f40  size=29  [run]
void __thiscall FUN_01098f40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0xc] = param_2;
  }
  return;
}

// 01098F60  FUN_01098f60  size=34  [run]
void __thiscall FUN_01098f60(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[param_2 + 0x10] = param_3;
  }
  return;
}

// 01098F90  FUN_01098f90  size=29  [run]
void __thiscall FUN_01098f90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0x15] = param_2;
  }
  return;
}

// 01099020  FUN_01099020  size=87  [run]
undefined1 FUN_01099020(int param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while (((iVar1 = *piVar2, *(float *)(iVar1 + 0x20) != *param_2 ||
          (*(float *)(iVar1 + 0x24) != param_2[1])) || (*(float *)(iVar1 + 0x28) != param_2[2]))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (2 < iVar3) {
      return 0;
    }
  }
  return 1;
}

// 01099080  FUN_01099080  size=38  [run]
void __thiscall FUN_01099080(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    if (puVar1[0xd] == param_2) {
      puVar1[0xd] = param_3;
    }
  }
  return;
}

// 010990E0  FUN_010990e0  size=138  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_010990e0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if ((_DAT_0209a9ac & 1) == 0) {
        _DAT_0209a9ac = _DAT_0209a9ac | 1;
        DAT_0209a9a4 = 0;
        DAT_0209a9a8 = 0;
      }
      uVar2 = DAT_0209a9a8;
      *param_2 = DAT_0209a9a4;
      param_2[1] = uVar2;
      return;
    }
    iVar5 = 8;
    iVar3 = 0;
    iVar6 = 2;
    do {
      iVar4 = iVar3;
      if ((*(int *)(iVar5 + 8 + (int)puVar1) == param_3) && (puVar1[iVar4 + 2] == param_4)) {
        param_2[1] = iVar6;
        *param_2 = puVar1;
        return;
      }
      iVar5 = iVar4 * 4;
      iVar3 = iVar4 + 1;
      iVar6 = iVar4;
    } while (iVar4 + 1 < 3);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

// 01099170  FUN_01099170  size=309  [run]
void FUN_01099170(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < param_1[1]) {
    local_10 = 1;
    do {
      if (local_10 < param_1[1]) {
        iVar4 = *param_1;
        piVar2 = (int *)(iVar4 + local_10 * 8);
        local_8 = local_10;
LAB_010991a0:
        if ((*piVar2 != 0) &&
           ((*(int *)(*(int *)(iVar4 + local_c * 8) + 8 + *(int *)(iVar4 + 4 + local_c * 8) * 4) !=
             *(int *)(*piVar2 + 8 + (9 >> ((char)piVar2[1] * '\x02' & 0x1fU) & 3U) * 4) ||
            (*(int *)(*(int *)(iVar4 + local_c * 8) + 8 +
                     (9 >> ((char)*(undefined4 *)(iVar4 + 4 + local_c * 8) * '\x02' & 0x1fU) & 3U) *
                     4) != *(int *)(*piVar2 + 8 + piVar2[1] * 4))))) goto LAB_010991f0;
        piVar1 = (int *)(iVar4 + 4 + local_c * 8);
        *(int *)(*(int *)(iVar4 + local_c * 8) + 0x14 + *piVar1 * 4) = *piVar2 + piVar2[1];
        if (*piVar2 != 0) {
          *(int *)(*piVar2 + 0x14 + piVar2[1] * 4) = *(int *)(iVar4 + local_c * 8) + *piVar1;
        }
        param_1[1] = param_1[1] + -1;
        if (param_1[1] != local_8) {
          puVar3 = (undefined4 *)(*param_1 + local_8 * 8);
          iVar4 = (*param_1 + param_1[1] * 8) - (int)puVar3;
          iVar5 = 2;
          do {
            *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_1[1] = param_1[1] + -1;
        if (param_1[1] != local_c) {
          puVar3 = (undefined4 *)(*param_1 + local_c * 8);
          iVar4 = (*param_1 + param_1[1] * 8) - (int)puVar3;
          iVar5 = 2;
          do {
            *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
            puVar3 = puVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_c = local_c + -1;
        local_10 = local_10 + -1;
      }
LAB_01099205:
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (local_c < param_1[1]);
  }
  return;
LAB_010991f0:
  local_8 = local_8 + 1;
  piVar2 = piVar2 + 2;
  if (param_1[1] <= local_8) goto LAB_01099205;
  goto LAB_010991a0;
}

// 010992B0  FUN_010992b0  size=420  [run]
undefined4 __thiscall
FUN_010992b0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,char param_6)

{
  undefined4 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar3 = *(float *)(param_1 + 0x74);
  fVar8 = *param_3 - *param_2;
  fVar9 = param_3[1] - param_2[1];
  fVar10 = param_3[2] - param_2[2];
  fVar11 = param_3[3] - param_2[3];
  uVar1 = 1;
  cVar2 = param_6;
  if ((param_6 != '\0') && (fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 <= fVar3)) {
    FUN_01098e50(param_2,param_3);
    uVar1 = 0;
    param_1 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  fVar4 = *param_4 - *param_2;
  fVar5 = param_4[1] - param_2[1];
  fVar6 = param_4[2] - param_2[2];
  fVar7 = param_4[3] - param_2[3];
  if ((cVar2 != '\0') && (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6 <= fVar3)) {
    FUN_01098e50(param_2,param_4);
    uVar1 = 0;
    param_1 = extraout_ECX_00;
  }
  if ((param_6 != '\0') &&
     ((param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
      (*param_4 - *param_3) * (*param_4 - *param_3) +
      (param_4[2] - param_3[2]) * (param_4[2] - param_3[2]) <= fVar3)) {
    FUN_01098e50(param_4,param_3);
    uVar1 = 0;
    param_1 = extraout_ECX_01;
  }
  auVar12._4_4_ = fVar4;
  auVar12._0_4_ = fVar6;
  auVar12._8_4_ = fVar5;
  auVar12._12_4_ = fVar7;
  fVar3 = fVar9 * fVar6 - fVar10 * fVar5;
  fVar10 = fVar10 * fVar4 - fVar8 * fVar6;
  fVar8 = fVar8 * fVar5 - fVar9 * fVar4;
  *param_5 = fVar3;
  param_5[1] = fVar10;
  param_5[2] = fVar8;
  param_5[3] = fVar11 * fVar7 - fVar11 * fVar7;
  fVar3 = fVar3 * fVar3;
  fVar10 = fVar10 * fVar10;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar10 + fVar3 + fVar8;
  auVar13._4_4_ = fVar10 + fVar3 + fVar8;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar10 + fVar3 + fVar8;
  auVar13._12_4_ = fVar10 + fVar3 + fVar8;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar3 = auVar13._0_4_;
  fVar3 = (float)(~-(uint)(fVar9 <= 0.0) &
                 (uint)((3.0 - fVar3 * fVar9 * fVar3) * fVar3 * 0.5 * fVar9));
  param_5[3] = fVar3;
  if ((param_6 != '\0') && (fVar3 < *(float *)(param_1 + 0x78))) {
    FUN_01098e40(param_2,param_3,param_4);
    uVar1 = 0;
  }
  fVar10 = 1.0 / param_5[3];
  fVar3 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  *param_5 = fVar3 * fVar10;
  param_5[1] = fVar8 * fVar10;
  param_5[2] = fVar9 * fVar10;
  param_5[3] = param_5[3] * fVar10;
  param_5[3] = -(param_2[2] * fVar9 * fVar10 +
                param_2[1] * fVar8 * fVar10 + *param_2 * fVar3 * fVar10);
  return uVar1;
}

// 01099460  FUN_01099460  size=48  [run]
void FUN_01099460(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010992b0(*(int *)(param_1 + 8) + 0x20,*(int *)(param_1 + 0xc) + 0x20,
               *(int *)(param_1 + 0x10) + 0x20,param_2,param_3);
  return;
}

// 01099490  FUN_01099490  size=97  [run]
undefined4 FUN_01099490(int param_1)

{
  char cVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar1 = FUN_010992b0(*(int *)(param_1 + 8) + 0x20,*(int *)(param_1 + 0xc) + 0x20,
                       *(int *)(param_1 + 0x10) + 0x20,&local_20,1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = local_20;
    *(undefined4 *)(param_1 + 0x24) = uStack_1c;
    *(undefined4 *)(param_1 + 0x28) = uStack_18;
    *(undefined4 *)(param_1 + 0x2c) = uStack_14;
    return 1;
  }
  return 0;
}

// 01099500  FUN_01099500  size=122  [run]
undefined4 __thiscall FUN_01099500(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = param_2[1];
  iVar1 = iVar3 + iVar2;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar8 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar8 <= iVar1) {
      iVar8 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar8,0x10);
  }
  param_2[1] = param_2[1] + iVar2;
  puVar9 = (undefined4 *)(iVar3 * 0x10 + *param_2);
  for (puVar4 = *(undefined4 **)(param_1 + 0xc); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    uVar5 = puVar4[9];
    uVar6 = puVar4[10];
    uVar7 = puVar4[0xb];
    *puVar9 = puVar4[8];
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar9 = puVar9 + 4;
  }
  return *(undefined4 *)(param_1 + 0x10);
}

// 01099580  FUN_01099580  size=41  [run]
void __fastcall FUN_01099580(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    FUN_01099490(puVar1);
  }
  return;
}

// 010995B0  FUN_010995b0  size=909  [run]
void __fastcall FUN_010995b0(int param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *extraout_EDX;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar41;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  float fVar46;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_1c;
  int local_18;
  float *local_14;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  piVar9 = *(int **)(param_1 + 0x1c);
  local_a0 = 2.0;
  fStack_9c = 2.0;
  fStack_98 = 2.0;
  fStack_94 = 2.0;
  local_80 = 1.0;
  uStack_7c = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  if (piVar9 != (int *)0x0) {
    local_30 = 3.0;
    fStack_2c = 3.0;
    fStack_28 = 3.0;
    fStack_24 = 3.0;
    local_60 = 0.5;
    fStack_5c = 0.5;
    fStack_58 = 0.5;
    fStack_54 = 0.5;
    local_b0 = 2.0;
    fStack_ac = 2.0;
    fStack_a8 = 2.0;
    fStack_a4 = 2.0;
    local_70 = -1.0;
    uStack_6c = 0xbf800000;
    uStack_68 = 0xbf800000;
    uStack_64 = 0xbf800000;
    local_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    local_1c = param_1;
    do {
      iVar2 = piVar9[3];
      iVar3 = piVar9[2];
      iVar4 = piVar9[4];
      piVar10 = piVar9 + 2;
      fVar15 = *(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20);
      fVar17 = *(float *)(iVar3 + 0x24) - *(float *)(iVar2 + 0x24);
      fVar18 = *(float *)(iVar3 + 0x28) - *(float *)(iVar2 + 0x28);
      fVar15 = fVar15 * fVar15;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar30._4_4_ = fVar15;
      auVar30._0_4_ = fVar15;
      auVar30._8_4_ = fVar15;
      auVar30._12_4_ = fVar15;
      fVar20 = fVar17 + fVar15 + fVar18;
      fVar22 = fVar17 + fVar15 + fVar18;
      fVar24 = fVar17 + fVar15 + fVar18;
      fVar18 = fVar17 + fVar15 + fVar18;
      auVar31._4_4_ = fVar22;
      auVar31._0_4_ = fVar20;
      auVar31._8_4_ = fVar24;
      auVar31._12_4_ = fVar18;
      auVar31 = rsqrtps(auVar30,auVar31);
      fVar15 = auVar31._0_4_;
      fVar26 = auVar31._4_4_;
      fVar46 = auVar31._8_4_;
      fVar19 = auVar31._12_4_;
      fVar17 = *(float *)(iVar2 + 0x20) - *(float *)(iVar4 + 0x20);
      fVar41 = *(float *)(iVar2 + 0x24) - *(float *)(iVar4 + 0x24);
      fVar43 = *(float *)(iVar2 + 0x28) - *(float *)(iVar4 + 0x28);
      fVar15 = (float)(~-(uint)(fVar20 <= local_50) &
                      (uint)((local_30 - fVar15 * fVar20 * fVar15) * fVar15 * local_60 * fVar20));
      fVar20 = (float)(~-(uint)(fVar22 <= fStack_4c) &
                      (uint)((fStack_2c - fVar26 * fVar22 * fVar26) * fVar26 * fStack_5c * fVar22));
      fVar24 = (float)(~-(uint)(fVar24 <= fStack_48) &
                      (uint)((fStack_28 - fVar46 * fVar24 * fVar46) * fVar46 * fStack_58 * fVar24));
      fVar19 = (float)(~-(uint)(fVar18 <= fStack_44) &
                      (uint)((fStack_24 - fVar19 * fVar18 * fVar19) * fVar19 * fStack_54 * fVar18));
      fVar17 = fVar17 * fVar17;
      fVar41 = fVar41 * fVar41;
      auVar16._8_4_ = fVar43 * fVar43;
      auVar16._4_4_ = auVar16._8_4_;
      auVar16._0_4_ = auVar16._8_4_;
      auVar16._12_4_ = auVar16._8_4_;
      fVar21 = fVar41 + fVar17 + auVar16._8_4_;
      fVar23 = fVar41 + fVar17 + auVar16._8_4_;
      fVar25 = fVar41 + fVar17 + auVar16._8_4_;
      fVar27 = fVar41 + fVar17 + auVar16._8_4_;
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar21;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar27;
      auVar31 = rsqrtps(auVar16,auVar5);
      fVar41 = *(float *)(iVar4 + 0x20) - *(float *)(iVar3 + 0x20);
      fVar22 = *(float *)(iVar4 + 0x24) - *(float *)(iVar3 + 0x24);
      fVar46 = *(float *)(iVar4 + 0x28) - *(float *)(iVar3 + 0x28);
      fVar17 = auVar31._0_4_;
      fVar18 = auVar31._4_4_;
      fVar26 = auVar31._8_4_;
      fVar43 = auVar31._12_4_;
      fVar41 = fVar41 * fVar41;
      fVar22 = fVar22 * fVar22;
      fVar46 = fVar46 * fVar46;
      fVar29 = (float)(~-(uint)(fVar21 <= local_50) &
                      (uint)((local_30 - fVar17 * fVar21 * fVar17) * fVar17 * local_60 * fVar21));
      fVar34 = (float)(~-(uint)(fVar23 <= fStack_4c) &
                      (uint)((fStack_2c - fVar18 * fVar23 * fVar18) * fVar18 * fStack_5c * fVar23));
      fVar35 = (float)(~-(uint)(fVar25 <= fStack_48) &
                      (uint)((fStack_28 - fVar26 * fVar25 * fVar26) * fVar26 * fStack_58 * fVar25));
      fVar36 = (float)(~-(uint)(fVar27 <= fStack_44) &
                      (uint)((fStack_24 - fVar43 * fVar27 * fVar43) * fVar43 * fStack_54 * fVar27));
      auVar39._4_4_ = fVar41;
      auVar39._0_4_ = fVar41;
      auVar39._8_4_ = fVar41;
      auVar39._12_4_ = fVar41;
      fVar17 = fVar22 + fVar41 + fVar46;
      fVar18 = fVar22 + fVar41 + fVar46;
      fVar26 = fVar22 + fVar41 + fVar46;
      fVar46 = fVar22 + fVar41 + fVar46;
      auVar6._4_4_ = fVar18;
      auVar6._0_4_ = fVar17;
      auVar6._8_4_ = fVar26;
      auVar6._12_4_ = fVar46;
      auVar31 = rsqrtps(auVar39,auVar6);
      fVar41 = auVar31._0_4_;
      fVar22 = auVar31._4_4_;
      fVar43 = auVar31._8_4_;
      fVar21 = auVar31._12_4_;
      fVar17 = (float)(~-(uint)(fVar17 <= local_50) &
                      (uint)((local_30 - fVar41 * fVar17 * fVar41) * fVar41 * local_60 * fVar17));
      fVar18 = (float)(~-(uint)(fVar18 <= fStack_4c) &
                      (uint)((fStack_2c - fVar22 * fVar18 * fVar22) * fVar22 * fStack_5c * fVar18));
      fVar26 = (float)(~-(uint)(fVar26 <= fStack_48) &
                      (uint)((fStack_28 - fVar43 * fVar26 * fVar43) * fVar43 * fStack_58 * fVar26));
      fVar43 = (float)(~-(uint)(fVar46 <= fStack_44) &
                      (uint)((fStack_24 - fVar21 * fVar46 * fVar21) * fVar21 * fStack_54 * fVar46));
      fVar41 = fVar17 * fVar17;
      fVar22 = fVar18 * fVar18;
      fVar46 = fVar26 * fVar26;
      fVar21 = fVar43 * fVar43;
      fVar23 = fVar15 * fVar15;
      fVar25 = fVar20 * fVar20;
      fVar27 = fVar24 * fVar24;
      fVar28 = fVar19 * fVar19;
      fVar38 = fVar29 * fVar29;
      fVar42 = fVar34 * fVar34;
      fVar44 = fVar35 * fVar35;
      fVar45 = fVar36 * fVar36;
      auVar37._0_4_ = fVar15 * local_a0;
      auVar37._4_4_ = fVar20 * fStack_9c;
      auVar37._8_4_ = fVar24 * fStack_98;
      auVar37._12_4_ = fVar19 * fStack_94;
      auVar40._0_4_ = fVar29 * auVar37._0_4_;
      auVar40._4_4_ = fVar34 * auVar37._4_4_;
      auVar40._8_4_ = fVar35 * auVar37._8_4_;
      auVar40._12_4_ = fVar36 * auVar37._12_4_;
      auVar7._4_4_ = fVar18 * auVar37._4_4_;
      auVar7._0_4_ = fVar17 * auVar37._0_4_;
      auVar7._8_4_ = fVar26 * auVar37._8_4_;
      auVar7._12_4_ = fVar43 * auVar37._12_4_;
      auVar31 = rcpps(auVar37,auVar7);
      auVar32._0_4_ = fVar29 * local_a0 * fVar17;
      auVar32._4_4_ = fVar34 * fStack_9c * fVar18;
      auVar32._8_4_ = fVar35 * fStack_98 * fVar26;
      auVar32._12_4_ = fVar36 * fStack_94 * fVar43;
      local_e0 = (local_b0 - auVar31._0_4_ * fVar17 * auVar37._0_4_) * auVar31._0_4_ *
                 ((fVar41 + fVar23) - fVar38);
      fStack_dc = (fStack_ac - auVar31._4_4_ * fVar18 * auVar37._4_4_) * auVar31._4_4_ *
                  ((fVar22 + fVar25) - fVar42);
      fStack_d8 = (fStack_a8 - auVar31._8_4_ * fVar26 * auVar37._8_4_) * auVar31._8_4_ *
                  ((fVar46 + fVar27) - fVar44);
      fStack_d4 = (fStack_a4 - auVar31._12_4_ * fVar43 * auVar37._12_4_) * auVar31._12_4_ *
                  ((fVar21 + fVar28) - fVar45);
      auVar31 = rcpps(auVar31,auVar40);
      local_d0 = (local_b0 - auVar31._0_4_ * auVar40._0_4_) * auVar31._0_4_ *
                 ((fVar38 + fVar23) - fVar41);
      fStack_cc = (fStack_ac - auVar31._4_4_ * auVar40._4_4_) * auVar31._4_4_ *
                  ((fVar42 + fVar25) - fVar22);
      fStack_c8 = (fStack_a8 - auVar31._8_4_ * auVar40._8_4_) * auVar31._8_4_ *
                  ((fVar44 + fVar27) - fVar46);
      fStack_c4 = (fStack_a4 - auVar31._12_4_ * auVar40._12_4_) * auVar31._12_4_ *
                  ((fVar45 + fVar28) - fVar21);
      in_XMM3 = rcpps(auVar31,auVar32);
      local_40 = *(undefined8 *)(piVar9 + 8);
      local_c0 = (local_b0 - in_XMM3._0_4_ * auVar32._0_4_) * in_XMM3._0_4_ *
                 ((fVar41 + fVar38) - fVar23);
      fStack_bc = (fStack_ac - in_XMM3._4_4_ * auVar32._4_4_) * in_XMM3._4_4_ *
                  ((fVar22 + fVar42) - fVar25);
      fStack_b8 = (fStack_a8 - in_XMM3._8_4_ * auVar32._8_4_) * in_XMM3._8_4_ *
                  ((fVar46 + fVar44) - fVar27);
      fStack_b4 = (fStack_a4 - in_XMM3._12_4_ * auVar32._12_4_) * in_XMM3._12_4_ *
                  ((fVar21 + fVar45) - fVar28);
      uStack_38 = *(undefined8 *)(piVar9 + 10);
      param_2 = &local_e0;
      local_18 = 3;
      local_14 = param_2;
      do {
        fVar15 = *local_14;
        if ((local_70 < fVar15) && (fVar15 < local_80)) {
          local_90 = ABS(fVar15);
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          if (local_90 < 1.0) {
            FUN_014376e0();
            param_1 = local_1c;
            param_2 = extraout_EDX;
          }
          else if (fVar15 <= 0.0) {
            fVar15 = 3.1415927;
          }
          else {
            fVar15 = 0.0;
          }
          iVar2 = *piVar10;
          *(float *)(iVar2 + 0x30) = fVar15 * (float)local_40 + *(float *)(iVar2 + 0x30);
          *(float *)(iVar2 + 0x34) = fVar15 * local_40._4_4_ + *(float *)(iVar2 + 0x34);
          *(float *)(iVar2 + 0x38) = fVar15 * (float)uStack_38 + *(float *)(iVar2 + 0x38);
          *(float *)(iVar2 + 0x3c) = fVar15 * uStack_38._4_4_ + *(float *)(iVar2 + 0x3c);
        }
        local_14 = local_14 + 4;
        piVar10 = piVar10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fVar15 = (float)puVar1[0xc];
    fVar17 = (float)puVar1[0xd];
    fVar41 = (float)puVar1[0xe];
    fVar20 = fVar15 * fVar15;
    fVar18 = fVar17 * fVar17;
    fVar22 = fVar41 * fVar41;
    fVar24 = fVar18 + fVar20 + fVar22;
    fVar26 = fVar18 + fVar20 + fVar22;
    fVar46 = fVar18 + fVar20 + fVar22;
    fVar22 = fVar18 + fVar20 + fVar22;
    auVar8._4_4_ = fVar26;
    auVar8._0_4_ = fVar24;
    auVar8._8_4_ = fVar46;
    auVar8._12_4_ = fVar22;
    auVar31 = rsqrtps(in_XMM3,auVar8);
    fVar20 = auVar31._0_4_;
    fVar18 = auVar31._4_4_;
    fVar19 = auVar31._8_4_;
    fVar43 = auVar31._12_4_;
    in_XMM3._0_4_ = fVar20 * 0.5;
    in_XMM3._4_4_ = fVar18 * 0.5;
    in_XMM3._8_4_ = fVar19 * 0.5;
    in_XMM3._12_4_ = fVar43 * 0.5;
    uVar11 = -(uint)(0.0 - fVar24 < 0.0);
    uVar12 = -(uint)(0.0 - fVar26 < 0.0);
    uVar13 = -(uint)(0.0 - fVar46 < 0.0);
    uVar14 = -(uint)(0.0 - fVar22 < 0.0);
    auVar33._4_4_ = uVar12;
    auVar33._0_4_ = uVar11;
    auVar33._8_4_ = uVar13;
    auVar33._12_4_ = uVar14;
    param_2 = (float *)movmskps(param_2,auVar33);
    puVar1[0xc] = (uint)((float)(~-(uint)(fVar24 <= 0.0) &
                                (uint)((3.0 - fVar20 * fVar24 * fVar20) * in_XMM3._0_4_)) * fVar15)
                  & uVar11 | ~uVar11 & (uint)fVar15;
    puVar1[0xd] = (uint)((float)(~-(uint)(fVar26 <= 0.0) &
                                (uint)((3.0 - fVar18 * fVar26 * fVar18) * in_XMM3._4_4_)) * fVar17)
                  & uVar12 | ~uVar12 & (uint)fVar17;
    puVar1[0xe] = (uint)((float)(~-(uint)(fVar46 <= 0.0) &
                                (uint)((3.0 - fVar19 * fVar46 * fVar19) * in_XMM3._8_4_)) * fVar41)
                  & uVar13 | ~uVar13 & (uint)fVar41;
    puVar1[0xf] = (uint)((float)(~-(uint)(fVar22 <= 0.0) &
                                (uint)((3.0 - fVar43 * fVar22 * fVar43) * in_XMM3._12_4_)) *
                        (float)puVar1[0xf]) & uVar14 | ~uVar14 & puVar1[0xf];
    if (param_2 == (float *)0x0) {
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
    }
    puVar1[0xf] = 0;
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  return;
}

// 01099950  FUN_01099950  size=410  [run]
void __thiscall FUN_01099950(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  do {
    piVar8 = *(int **)(param_1 + 0x1c);
    iVar1 = piVar8[2];
    iVar2 = piVar8[3];
    iVar3 = piVar8[4];
    fVar12 = *(float *)(iVar3 + 0x20) - *(float *)(iVar1 + 0x20);
    fVar14 = *(float *)(iVar3 + 0x24) - *(float *)(iVar1 + 0x24);
    fVar15 = *(float *)(iVar3 + 0x28) - *(float *)(iVar1 + 0x28);
    fVar9 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
    fVar10 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
    fVar11 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
    auVar17._4_4_ = fVar9;
    auVar17._0_4_ = fVar11;
    auVar17._8_4_ = fVar10;
    auVar17._12_4_ = *(float *)(iVar2 + 0x2c) - *(float *)(iVar1 + 0x2c);
    fVar13 = fVar15 * fVar10 - fVar14 * fVar11;
    fVar11 = fVar12 * fVar11 - fVar15 * fVar9;
    fVar10 = fVar14 * fVar9 - fVar12 * fVar10;
    fVar13 = fVar13 * fVar13;
    fVar11 = fVar11 * fVar11;
    fVar10 = fVar10 * fVar10;
    fVar9 = fVar11 + fVar13 + fVar10;
    auVar18._4_4_ = fVar11 + fVar13 + fVar10;
    auVar18._0_4_ = fVar9;
    auVar18._8_4_ = fVar11 + fVar13 + fVar10;
    auVar18._12_4_ = fVar11 + fVar13 + fVar10;
    auVar18 = rsqrtps(auVar17,auVar18);
    fVar10 = auVar18._0_4_;
    bVar7 = false;
    fVar9 = (float)(~-(uint)(fVar9 <= 0.0) &
                   (uint)((3.0 - fVar10 * fVar9 * fVar10) * fVar10 * 0.5 * fVar9)) * param_2;
    if (*piVar8 == 0) {
      return;
    }
    do {
      piVar8 = (int *)*piVar8;
      iVar1 = piVar8[2];
      iVar2 = piVar8[3];
      iVar3 = piVar8[4];
      fVar13 = *(float *)(iVar3 + 0x20) - *(float *)(iVar1 + 0x20);
      fVar15 = *(float *)(iVar3 + 0x24) - *(float *)(iVar1 + 0x24);
      fVar16 = *(float *)(iVar3 + 0x28) - *(float *)(iVar1 + 0x28);
      fVar10 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
      fVar11 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
      fVar12 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
      auVar19._4_4_ = fVar10;
      auVar19._0_4_ = fVar12;
      auVar19._8_4_ = fVar11;
      auVar19._12_4_ = *(float *)(iVar2 + 0x2c) - *(float *)(iVar1 + 0x2c);
      fVar14 = fVar16 * fVar11 - fVar15 * fVar12;
      fVar12 = fVar13 * fVar12 - fVar16 * fVar10;
      fVar11 = fVar15 * fVar10 - fVar13 * fVar11;
      fVar14 = fVar14 * fVar14;
      fVar12 = fVar12 * fVar12;
      fVar11 = fVar11 * fVar11;
      fVar10 = fVar12 + fVar14 + fVar11;
      auVar6._4_4_ = fVar12 + fVar14 + fVar11;
      auVar6._0_4_ = fVar10;
      auVar6._8_4_ = fVar12 + fVar14 + fVar11;
      auVar6._12_4_ = fVar12 + fVar14 + fVar11;
      auVar18 = rsqrtps(auVar19,auVar6);
      fVar11 = auVar18._0_4_;
      fVar10 = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar10 * fVar11) * fVar11 * 0.5 * fVar10)) * param_2;
      if (fVar9 < fVar10) {
        piVar4 = (int *)piVar8[1];
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar8;
          puVar5 = (undefined4 *)piVar4[1];
          if (iVar1 == 0) {
            *piVar4 = 0;
          }
          else {
            *(int **)(iVar1 + 4) = piVar4;
            *piVar4 = iVar1;
          }
          if (puVar5 == (undefined4 *)0x0) {
            *(int **)(param_1 + 0x1c) = piVar8;
            piVar8[1] = 0;
          }
          else {
            *puVar5 = piVar8;
            piVar8[1] = (int)puVar5;
          }
          piVar4[1] = (int)piVar8;
          *piVar8 = (int)piVar4;
        }
        bVar7 = true;
      }
      fVar9 = fVar10;
    } while (*piVar8 != 0);
  } while (bVar7);
  return;
}

// 01099AF0  FUN_01099af0  size=256  [run]
int __fastcall FUN_01099af0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0x10] = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[3];
    *(undefined4 *)(puVar1[2] + 0x40) = 0x3f800000;
    iVar3 = puVar1[4];
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)(iVar2 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x40) = 0x3f800000;
  }
  piVar7 = *(int **)(param_1 + 0xc);
  if (piVar7 != (int *)0x0) {
    do {
      piVar4 = (int *)*piVar7;
      if ((float)piVar7[0x10] == 0.0) {
        iVar2 = *piVar7;
        piVar5 = (int *)piVar7[1];
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar5;
        }
        if (piVar5 == (int *)0x0) {
          *(int *)(param_1 + 0xc) = iVar2;
        }
        else {
          *piVar5 = iVar2;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        iVar2 = piVar7[0x18];
        piVar7 = (int *)(iVar2 + 0xe0c);
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          if (*(int *)(iVar2 + 0xe04) == 0) {
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xe08);
          }
          else {
            *(undefined4 *)(*(int *)(iVar2 + 0xe04) + 0xe08) = *(undefined4 *)(iVar2 + 0xe08);
          }
          if (*(int *)(iVar2 + 0xe08) != 0) {
            *(undefined4 *)(*(int *)(iVar2 + 0xe08) + 0xe04) = *(undefined4 *)(iVar2 + 0xe04);
          }
          (**(code **)(PTR_vftable_018e9b94 + 8))(iVar2,0xe10);
        }
        iVar6 = iVar6 + 1;
      }
      piVar7 = piVar4;
    } while (piVar4 != (int *)0x0);
    if (iVar6 != 0) {
      FUN_01098e20();
    }
  }
  return iVar6;
}

// 01099C00  hkgpMesh::vf0C  size=32  [run]
void __fastcall hkgpMesh::vf0C(int param_1)

{
  FUN_01098e20();
  FUN_010b0ba0();
  FUN_010b0c10();
  *(undefined2 *)(param_1 + 0x70) = 0;
  return;
}

// 01099C60  FUN_01099c60  size=548  [run]
int __fastcall FUN_01099c60(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar7 = 0;
  for (puVar6 = *(undefined4 **)(param_1 + 0x1c); puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)*puVar6) {
    puVar6[0xc] = 0xffffffff;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  uVar3 = 0x80000000;
  local_18 = 0;
  local_10 = 0x80000000;
  for (; local_8 = puVar6, puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
    if (puVar6[0xc] == -1) {
      local_14 = 0;
      if ((uVar3 & 0x3fffffff) == 0) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
        uVar3 = local_10;
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar6;
        puVar1[1] = 0;
        uVar3 = local_10;
      }
      local_14 = local_14 + 1;
      if (local_14 == (uVar3 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
        uVar3 = local_10;
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar6;
        puVar1[1] = 1;
        uVar3 = local_10;
      }
      local_14 = local_14 + 1;
      if (local_14 == (uVar3 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar6;
        puVar1[1] = 2;
      }
      local_14 = local_14 + 1;
      puVar6[0xc] = iVar7;
      local_c = iVar7 + 1;
      do {
        uVar3 = *(uint *)(*(int *)(local_18 + -8 + local_14 * 8) + 0x14 +
                         *(int *)(local_18 + -4 + local_14 * 8) * 4);
        uVar5 = uVar3 & 0xfffffffc;
        local_14 = local_14 - 1;
        if ((uVar5 != 0) && (*(int *)(uVar5 + 0x30) == -1)) {
          sVar4 = ((byte)uVar3 & 3) * '\x02';
          *(int *)(uVar5 + 0x30) = local_c + -1;
          if (local_14 == (local_10 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
          }
          puVar2 = (uint *)(local_18 + local_14 * 8);
          if (puVar2 != (uint *)0x0) {
            *puVar2 = uVar5;
            puVar2[1] = 9 >> sVar4 & 3;
          }
          local_14 = local_14 + 1;
          if (local_14 == (local_10 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
          }
          puVar2 = (uint *)(local_18 + local_14 * 8);
          if (puVar2 != (uint *)0x0) {
            *puVar2 = uVar5;
            puVar2[1] = 0x12 >> sVar4 & 3;
          }
          local_14 = local_14 + 1;
          puVar6 = local_8;
        }
        uVar3 = local_10;
        iVar7 = local_c;
      } while (local_14 != 0);
    }
  }
  local_14 = 0;
  if (-1 < (int)uVar3) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,uVar3 * 8);
  }
  return iVar7;
}

// 01099E90  FUN_01099e90  size=253  [run]
undefined4 __fastcall FUN_01099e90(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_20 [9];
  undefined2 local_17;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_01098e20();
  if (3 < *(int *)(param_1 + 0x10)) {
    FUN_01077490();
    local_17 = 0x101;
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
    *(undefined2 *)(iVar2 + 4) = 0x14;
    uVar3 = hkgpConvexHull::hkgpConvexHull();
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    local_10 = 0;
    local_c = 0;
    local_8 = -0x80000000;
    FUN_01099500(&local_10);
    FUN_01079630(local_10,local_c,local_20);
    iVar2 = FUN_01077610();
    if (iVar2 != 3) {
      if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      local_c = 0;
      if (-1 < local_8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
      }
      return 0;
    }
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
    }
  }
  return 1;
}

// 01099F90  FUN_01099f90  size=398  [run]
void __thiscall FUN_01099f90(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar1 = param_2[1];
    iVar2 = *(int *)(param_1 + 0x10);
    iVar9 = iVar1 + iVar2;
    if ((int)(param_2[2] & 0x3fffffffU) < iVar9) {
      iVar3 = (param_2[2] & 0x3fffffffU) * 2;
      if (iVar9 < iVar3) {
        iVar9 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar9,0x10);
    }
    param_2[1] = param_2[1] + iVar2;
    iVar2 = *(int *)(param_1 + 0x20);
    puVar11 = (undefined4 *)(iVar1 * 0x10 + *param_2);
    iVar3 = param_2[4];
    iVar9 = iVar3 + iVar2;
    if ((int)(param_2[5] & 0x3fffffffU) < iVar9) {
      iVar5 = (param_2[5] & 0x3fffffffU) * 2;
      if (iVar9 < iVar5) {
        iVar9 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_2 + 3,iVar9,0x10);
    }
    param_2[4] = param_2[4] + iVar2;
    iVar9 = param_2[3];
    FUN_01010c40(&PTR_vftable_018e9b94,*(int *)(param_1 + 0x10) + 1);
    for (puVar4 = *(undefined4 **)(param_1 + 0xc); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      FUN_010100a0(&PTR_vftable_018e9b94,puVar4,iVar1);
      uVar8 = puVar4[9];
      uVar6 = puVar4[10];
      uVar7 = puVar4[0xb];
      *puVar11 = puVar4[8];
      puVar11[1] = uVar8;
      puVar11[2] = uVar6;
      puVar11[3] = uVar7;
      puVar11 = puVar11 + 4;
    }
    piVar10 = *(int **)(param_1 + 0x1c);
    if (piVar10 != (int *)0x0) {
      puVar11 = (undefined4 *)(iVar3 * 0x10 + iVar9 + 8);
      do {
        uVar8 = FUN_01010160(piVar10[2],0xffffffff);
        puVar11[-2] = uVar8;
        uVar8 = FUN_01010160(piVar10[3],0xffffffff);
        puVar11[-1] = uVar8;
        uVar8 = FUN_01010160(piVar10[4],0xffffffff);
        *puVar11 = uVar8;
        puVar11[1] = piVar10[0xe];
        if (param_3 != '\0') {
          uVar8 = puVar11[-1];
          puVar11[-1] = *puVar11;
          *puVar11 = uVar8;
        }
        piVar10 = (int *)*piVar10;
        puVar11 = puVar11 + 4;
      } while (piVar10 != (int *)0x0);
    }
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
  }
  return;
}

// 0109A120  FUN_0109a120  size=171  [run]
float10 FUN_0109a120(int param_1,int param_2)

{
  float *pfVar1;
  undefined1 local_30 [32];
  
  if ((*(uint *)(param_1 + 0x14 + param_2 * 4) & 0xfffffffc) == 0) {
    return (float10)0;
  }
  pfVar1 = (float *)FUN_010141c0(local_30);
  return (float10)*pfVar1;
}

// 0109A1D0  FUN_0109a1d0  size=452  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0109a1d0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  sbyte sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar10 = *(uint *)(param_2 + 0x14 + param_3 * 4);
  uVar11 = uVar10 & 3;
  uVar10 = uVar10 & 0xfffffffc;
  if (uVar10 != 0) {
    cVar1 = (char)param_3;
    uVar15 = *(uint *)(param_2 + 0x14 + (9 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    uVar4 = uVar15 & 0xfffffffc;
    uVar15 = uVar15 & 3;
    uVar5 = *(uint *)(param_2 + 0x14 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    uVar8 = uVar5 & 3;
    sVar2 = (char)uVar11 * '\x02';
    uVar5 = uVar5 & 0xfffffffc;
    uVar16 = 9 >> sVar2 & 3;
    uVar12 = *(uint *)(uVar10 + 0x14 + uVar16 * 4);
    uVar6 = uVar12 & 0xfffffffc;
    uVar12 = uVar12 & 3;
    uVar7 = 0x12 >> sVar2 & 3;
    uVar13 = *(uint *)(uVar10 + 0x14 + uVar7 * 4);
    uVar9 = uVar13 & 0xfffffffc;
    uVar13 = uVar13 & 3;
    *(undefined4 *)(param_2 + 8 + param_3 * 4) = *(undefined4 *)(uVar10 + 8 + uVar7 * 4);
    *(undefined4 *)(uVar10 + 8 + uVar11 * 4) =
         *(undefined4 *)(param_2 + 8 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    uVar14 = 0x12 >> (cVar1 * '\x02' & 0x1fU) & 3;
    *(uint *)(param_2 + 0x14 + uVar14 * 4) = uVar7 + uVar10;
    *(uint *)(uVar10 + 0x14 + uVar7 * 4) = uVar14 + param_2;
    uVar7 = 9 >> (cVar1 * '\x02' & 0x1fU) & 3;
    *(uint *)(param_2 + 0x14 + uVar7 * 4) = uVar15 + uVar4;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 0x14 + uVar15 * 4) = uVar7 + param_2;
    }
    *(uint *)(param_2 + 0x14 + param_3 * 4) = uVar13 + uVar9;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x14 + uVar13 * 4) = param_2 + param_3;
    }
    *(uint *)(uVar10 + 0x14 + uVar16 * 4) = uVar12 + uVar6;
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x14 + uVar12 * 4) = uVar16 + uVar10;
    }
    *(uint *)(uVar10 + 0x14 + uVar11 * 4) = uVar8 + uVar5;
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 0x14 + uVar8 * 4) = uVar11 + uVar10;
    }
    *param_1 = param_2;
    param_1[1] = 0x12 >> (cVar1 * '\x02' & 0x1fU) & 3;
    return;
  }
  if ((_DAT_0209a9ac & 1) == 0) {
    _DAT_0209a9ac = _DAT_0209a9ac | 1;
    DAT_0209a9a4 = 0;
    DAT_0209a9a8 = 0;
  }
  iVar3 = DAT_0209a9a8;
  *param_1 = DAT_0209a9a4;
  param_1[1] = iVar3;
  return;
}

// 0109A3A0  FUN_0109a3a0  size=140  [run]
void __thiscall FUN_0109a3a0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = param_2[5];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)((uVar1 & 0xfffffffc) + 0x14 + (uVar1 & 3) * 4) = 0;
  }
  param_2[5] = 0;
  uVar1 = param_2[6];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)((uVar1 & 0xfffffffc) + 0x14 + (uVar1 & 3) * 4) = 0;
  }
  param_2[6] = 0;
  uVar1 = param_2[7];
  if ((uVar1 & 0xfffffffc) != 0) {
    *(undefined4 *)((uVar1 & 0xfffffffc) + 0x14 + (uVar1 & 3) * 4) = 0;
  }
  param_2[7] = 0;
  iVar2 = *param_2;
  piVar3 = (int *)param_2[1];
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  else {
    *piVar3 = iVar2;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  iVar2 = param_2[0x14];
  piVar3 = (int *)(iVar2 + 0xc0c);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    FUN_010a7e00(iVar2);
  }
  return;
}

// 0109A430  FUN_0109a430  size=146  [run]
uint FUN_0109a430(char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_210 [524];
  
  iVar2 = FUN_010b4aa0(1);
  if ((param_1 != '\0') && (iVar2 != 0)) {
    hkErrStream::hkErrStream(local_210,0x200);
    puVar5 = &DAT_017d5924;
    iVar3 = iVar2;
    FUN_01018d00("Invalid mesh topology (");
    FUN_01018dc0(iVar3);
    FUN_01018d00(puVar5);
    iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x4c5c2afa,local_210,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0x8f1);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    hkBaseObject::hkBaseObject_38();
  }
  return (uint)(iVar2 == 0);
}

// 0109A4D0  FUN_0109a4d0  size=270  [run]
undefined4 __thiscall FUN_0109a4d0(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_214 [524];
  int local_8;
  
  if ((*(uint *)(param_2 + 0x14 + param_3 * 4) & 0xfffffffc) != 0) {
    return 1;
  }
  local_8 = *(int *)(param_2 + 8 + (9 >> ((char)param_3 * '\x02' & 0x1fU) & 3U) * 4);
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if (param_5 != '\0') {
        hkErrStream::hkErrStream(local_214,0x200);
        FUN_01018d00("Unmatched edge");
        iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x1fb636c8,local_214,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0x90c);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        hkBaseObject::hkBaseObject_38();
      }
      return 0;
    }
    iVar3 = 0;
    piVar5 = puVar1 + 2;
    do {
      if ((((param_4 == '\0') || ((piVar5[3] & 0xfffffffcU) == 0)) &&
          (puVar1[(9 >> ((char)iVar3 * '\x02' & 0x1fU) & 3U) + 2] ==
           *(int *)(param_2 + 8 + param_3 * 4))) && (*piVar5 == local_8)) {
        puVar1[iVar3 + 5] = param_2 + param_3;
        if (param_2 != 0) {
          *(int *)(param_2 + 0x14 + param_3 * 4) = iVar3 + (int)puVar1;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < 3);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

// 0109A5E0  FUN_0109a5e0  size=587  [run]
void __fastcall FUN_0109a5e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_238 [524];
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  local_14 = 0;
  local_2c = param_1;
  FUN_0100a210(&PTR_vftable_018e9b94,&local_10,0x400,8);
  uVar4 = local_c;
  for (puVar3 = *(undefined4 **)(param_1 + 0x1c); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    iVar8 = 0;
    puVar7 = puVar3 + 5;
    do {
      if ((*puVar7 & 0xfffffffc) == 0) {
        if (uVar4 == (local_8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_10,8);
          uVar4 = local_c;
        }
        puVar1 = (undefined4 *)(local_10 + uVar4 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar3;
          puVar1[1] = iVar8;
          uVar4 = local_c;
        }
        uVar4 = uVar4 + 1;
        local_c = uVar4;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 3);
  }
  local_1c = 0;
  uVar6 = uVar4;
  if (0 < (int)uVar4) {
    do {
      local_18 = local_1c + 1;
      if ((int)local_18 < (int)uVar6) {
        local_20 = (int *)(local_10 + local_1c * 8);
        piVar2 = (int *)(local_10 + 8 + local_1c * 8);
        do {
          iVar8 = *piVar2;
          if (iVar8 == 0) {
LAB_0109a6fa:
            *(int *)(*local_20 + 0x14 + local_20[1] * 4) = iVar8 + piVar2[1];
            if (*piVar2 != 0) {
              *(int *)(*piVar2 + 0x14 + piVar2[1] * 4) = *local_20 + local_20[1];
            }
            local_c = local_c - 1;
            if (local_c != local_18) {
              puVar3 = (undefined4 *)(local_10 + local_18 * 8);
              iVar8 = (local_10 + local_c * 8) - (int)puVar3;
              iVar5 = 2;
              do {
                *puVar3 = *(undefined4 *)(iVar8 + (int)puVar3);
                puVar3 = puVar3 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            local_14 = local_14 + 1;
            local_1c = local_1c + -1;
            uVar6 = local_c;
            break;
          }
          local_24 = *local_20;
          if ((*(int *)(local_24 + 8 + local_20[1] * 4) ==
               *(int *)(iVar8 + 8 + (9 >> ((char)piVar2[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
             (*(int *)(*local_20 + 8 + (9 >> ((char)local_20[1] * '\x02' & 0x1fU) & 3U) * 4) ==
              *(int *)(iVar8 + 8 + piVar2[1] * 4))) goto LAB_0109a6fa;
          local_18 = local_18 + 1;
          piVar2 = piVar2 + 2;
          uVar6 = local_c;
        } while ((int)local_18 < (int)local_c);
      }
      local_1c = local_1c + 1;
    } while (local_1c < (int)uVar6);
  }
  local_28 = uVar4;
  if (uVar4 != 0) {
    hkErrStream::hkErrStream(local_238,0x200);
    iVar8 = local_14 * 2;
    pcVar9 = " fixed:";
    FUN_01018d00("Naked edges found: ");
    FUN_01018dc0(uVar4);
    FUN_01018d00(pcVar9);
    FUN_01018dc0(iVar8);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (0,0xffffffff,local_238,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0xa90);
    hkBaseObject::hkBaseObject_38();
  }
  *(undefined1 *)(local_2c + 0x71) = 0;
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
  }
  return;
}

// 0109A830  FUN_0109a830  size=50  [run]
void __thiscall FUN_0109a830(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar2[0xc] == param_2) {
      FUN_0109a3a0(puVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

// 0109A870  FUN_0109a870  size=50  [run]
void __thiscall FUN_0109a870(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar2[0xd] == param_2) {
      FUN_0109a3a0(puVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

// 0109A8B0  FUN_0109a8b0  size=294  [run]
void __thiscall FUN_0109a8b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  local_8 = param_1;
  for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    if (puVar3[0xc] == param_2) {
      puVar3[8] = (float)puVar3[8] * -1.0;
      puVar3[9] = (float)puVar3[9] * -1.0;
      puVar3[10] = (float)puVar3[10] * -1.0;
      puVar3[0xb] = (float)puVar3[0xb] * -1.0;
      iVar6 = 0;
      do {
        if (local_10 == (local_c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_14,8);
        }
        puVar1 = (undefined4 *)(local_14 + local_10 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar3;
          puVar1[1] = iVar6;
        }
        local_10 = local_10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      uVar4 = puVar3[2];
      puVar3[2] = puVar3[3];
      puVar3[3] = uVar4;
      param_1 = local_8;
    }
  }
  iVar6 = 0;
  if (0 < (int)local_10) {
    do {
      piVar2 = (int *)(local_14 + iVar6 * 8);
      uVar5 = *(uint *)(*piVar2 + 0x14 + *(int *)(local_14 + 4 + iVar6 * 8) * 4);
      if ((uVar5 & 0xfffffffc) != 0) {
        *(undefined4 *)((uVar5 & 0xfffffffc) + 0x14 + (uVar5 & 3) * 4) = 0;
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar2 + 0x14 + piVar2[1] * 4) = 0;
    } while (iVar6 < (int)local_10);
  }
  FUN_01099170(&local_14);
  *(undefined1 *)(param_1 + 0x71) = 0;
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  return;
}

// 0109A9E0  FUN_0109a9e0  size=415  [run]
void FUN_0109a9e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  
  if (param_1[1] == 0) {
    return;
  }
  uVar2 = param_1[1] * 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_20,((int)uVar2 < 0) - 1 & uVar2,0x10);
  }
  local_14 = 0.0;
  if (0 < param_1[1]) {
    do {
      iVar3 = (int)local_14 * 8;
      iVar1 = *(int *)(*(int *)(*param_1 + iVar3) + 8 + *(int *)(*param_1 + 4 + iVar3) * 4);
      if (local_1c == (local_18 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x24);
      uVar5 = *(undefined4 *)(iVar1 + 0x28);
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      puVar7 = (undefined4 *)(local_1c * 0x10 + local_20);
      *puVar7 = *(undefined4 *)(iVar1 + 0x20);
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      local_1c = local_1c + 1;
      iVar1 = *(int *)(*(int *)(*param_1 + iVar3) + 8 +
                      (9 >> ((char)*(undefined4 *)(*param_1 + 4 + iVar3) * '\x02' & 0x1fU) & 3U) * 4
                      );
      if (local_1c == (local_18 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x24);
      uVar5 = *(undefined4 *)(iVar1 + 0x28);
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      puVar7 = (undefined4 *)(local_1c * 0x10 + local_20);
      local_14 = (float)((int)local_14 + 1);
      *puVar7 = *(undefined4 *)(iVar1 + 0x20);
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      local_1c = local_1c + 1;
    } while ((int)local_14 < param_1[1]);
  }
  FUN_01441040(local_20,local_1c,&local_40);
  local_14 = (fStack_2c - fStack_3c) + (local_30 - local_40) + (fStack_28 - fStack_38);
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
  }
  return;
}

// 0109AB80  FUN_0109ab80  size=321  [run]
void FUN_0109ab80(undefined1 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_8;
  
  iVar1 = *(int *)(param_3 + 8 + (9 >> ((char)param_4 * '\x02' & 0x1fU) & 3U) * 4);
  local_8 = 0;
  if (0 < (int)param_2[1]) {
    puVar7 = (uint *)*param_2;
    do {
      uVar2 = *puVar7;
      if ((uVar2 != param_3) && (uVar2 != (*(uint *)(param_3 + 0x14 + param_4 * 4) & 0xfffffffc))) {
        iVar3 = *(int *)(uVar2 + 8 + puVar7[1] * 4);
        bVar6 = (char)puVar7[1] * '\x02';
        iVar4 = *(int *)(uVar2 + 8 + (9 >> (bVar6 & 0x1f) & 3U) * 4);
        iVar5 = *(int *)(uVar2 + 8 + (0x12 >> (bVar6 & 0x1f) & 3U) * 4);
        fVar14 = *(float *)(iVar5 + 0x20) - *(float *)(iVar3 + 0x20);
        fVar15 = *(float *)(iVar5 + 0x24) - *(float *)(iVar3 + 0x24);
        fVar16 = *(float *)(iVar5 + 0x28) - *(float *)(iVar3 + 0x28);
        fVar11 = *(float *)(iVar4 + 0x20) - *(float *)(iVar3 + 0x20);
        fVar12 = *(float *)(iVar4 + 0x24) - *(float *)(iVar3 + 0x24);
        fVar13 = *(float *)(iVar4 + 0x28) - *(float *)(iVar3 + 0x28);
        fVar8 = *(float *)(iVar5 + 0x20) - *(float *)(iVar1 + 0x20);
        fVar9 = *(float *)(iVar5 + 0x24) - *(float *)(iVar1 + 0x24);
        fVar10 = *(float *)(iVar5 + 0x28) - *(float *)(iVar1 + 0x28);
        fVar17 = *(float *)(iVar4 + 0x20) - *(float *)(iVar1 + 0x20);
        fVar18 = *(float *)(iVar4 + 0x24) - *(float *)(iVar1 + 0x24);
        fVar19 = *(float *)(iVar4 + 0x28) - *(float *)(iVar1 + 0x28);
        if ((fVar8 * fVar19 - fVar10 * fVar17) * (fVar14 * fVar13 - fVar16 * fVar11) +
            (fVar10 * fVar18 - fVar9 * fVar19) * (fVar16 * fVar12 - fVar15 * fVar13) +
            (fVar9 * fVar17 - fVar8 * fVar18) * (fVar15 * fVar11 - fVar14 * fVar12) < 0.0) {
          *param_1 = 0;
          return;
        }
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 2;
    } while (local_8 < (int)param_2[1]);
  }
  *param_1 = 1;
  return;
}

// 0109ACD0  FUN_0109acd0  size=728  [run]
undefined4 FUN_0109acd0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x80000000;
  local_18 = 0x40;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  local_1c = *(int *)((int)pvVar4 + 0xc);
  if ((*(int *)((int)pvVar4 + 8) < 0x100) || (*(uint *)((int)pvVar4 + 0x10) < local_1c + 0x100U)) {
    local_1c = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_1c + 0x100U;
  }
  uVar7 = 0x80000040;
  local_20 = 0x80000040;
  uVar9 = local_24;
  local_28 = local_1c;
  if (0 < param_2) {
    local_8 = param_1;
    local_c = param_2;
    do {
      piVar1 = (int *)*local_8;
      uVar5 = piVar1[1];
      uVar8 = piVar1[2];
      iVar2 = *piVar1;
      if (iVar2 == 1) {
        if (uVar9 == (uVar7 & 0x3fffffff)) {
LAB_0109ae38:
          FUN_0100a290(&PTR_vftable_018e9b94,&local_28,4);
          uVar9 = local_24;
        }
LAB_0109ae48:
        *(uint *)(local_28 + uVar9 * 4) = uVar5;
        uVar9 = local_24 + 1;
        uVar7 = local_20;
        local_24 = uVar9;
      }
      else if (iVar2 == 2) {
        if (uVar9 == (uVar7 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_28,4);
          uVar9 = local_24;
        }
        *(uint *)(local_28 + uVar9 * 4) = uVar5;
        uVar9 = local_24 + 1;
        uVar5 = *(uint *)(uVar5 + 0x14 + uVar8 * 4) & 0xfffffffc;
        uVar7 = local_20;
        local_24 = uVar9;
        if (uVar5 != 0) {
          if (uVar9 == (local_20 & 0x3fffffff)) goto LAB_0109ae38;
          goto LAB_0109ae48;
        }
      }
      else if (iVar2 == 3) {
        do {
          if (uVar9 == (uVar7 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_28,4);
            uVar9 = local_24;
          }
          *(uint *)(local_28 + uVar9 * 4) = uVar5;
          uVar9 = local_24 + 1;
          uVar5 = *(uint *)(uVar5 + 0x14 + (0x12 >> ((char)uVar8 * '\x02' & 0x1fU) & 3U) * 4);
          uVar8 = uVar5 & 3;
          uVar5 = uVar5 & 0xfffffffc;
          uVar7 = local_20;
          local_24 = uVar9;
          local_10 = uVar8;
        } while ((uVar5 != 0) && (uVar8 + uVar5 != *(int *)(*local_8 + 8) + *(int *)(*local_8 + 4)))
        ;
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
  }
  iVar3 = local_18;
  iVar2 = local_1c;
  iVar10 = 0;
  if (0 < param_2) {
    do {
      iVar6 = 0;
      if ((int)uVar9 < 1) {
LAB_0109ae9a:
        if (local_1c == local_28) {
          local_24 = 0;
        }
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        uVar7 = iVar3 * 4 + 0x7fU & 0xffffff80;
        if (((*(int *)((int)pvVar4 + 8) < (int)uVar7) ||
            (uVar7 + iVar2 != *(int *)((int)pvVar4 + 0xc))) ||
           (*(int *)((int)pvVar4 + 0x14) == iVar2)) {
          FUN_0100b9b0(iVar2,uVar7);
        }
        else {
          *(int *)((int)pvVar4 + 0xc) = iVar2;
        }
        local_24 = 0;
        if (-1 < (int)local_20) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
        }
        return 0;
      }
      while (*(int *)(local_28 + iVar6 * 4) != *(int *)(param_1[iVar10] + 4)) {
        iVar6 = iVar6 + 1;
        if ((int)uVar9 <= iVar6) goto LAB_0109ae9a;
      }
      if (iVar6 == -1) goto LAB_0109ae9a;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
  }
  if (local_1c == local_28) {
    local_24 = 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar7 = iVar3 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar7) || (uVar7 + iVar2 != *(int *)((int)pvVar4 + 0xc)))
     || (*(int *)((int)pvVar4 + 0x14) == iVar2)) {
    FUN_0100b9b0(iVar2,uVar7);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = iVar2;
  }
  local_24 = 0;
  if (-1 < (int)local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
  }
  return 1;
}

// 0109AFB0  FUN_0109afb0  size=575  [run]
int __fastcall FUN_0109afb0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  sbyte sVar7;
  uint uVar8;
  int iVar9;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar9 = 0;
  for (puVar3 = *(undefined4 **)(param_1 + 0x1c); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    puVar3[0xc] = 0xffffffff;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  uVar6 = 0x80000000;
  local_18 = 0;
  local_10 = 0x80000000;
  while (local_8 = puVar3, puVar3 != (undefined4 *)0x0) {
    if (puVar3[0xc] == -1) {
      local_14 = 0;
      if ((uVar6 & 0x3fffffff) == 0) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
        uVar6 = local_10;
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
        puVar1[1] = 0;
        uVar6 = local_10;
      }
      local_14 = local_14 + 1;
      if (local_14 == (uVar6 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
        uVar6 = local_10;
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
        puVar1[1] = 1;
        uVar6 = local_10;
      }
      local_14 = local_14 + 1;
      if (local_14 == (uVar6 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
      }
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
        puVar1[1] = 2;
      }
      local_14 = local_14 + 1;
      puVar3[0xc] = iVar9;
      local_c = iVar9 + 1;
      do {
        iVar9 = *(int *)(local_18 + -8 + local_14 * 8);
        iVar4 = *(int *)(local_18 + -4 + local_14 * 8);
        uVar6 = *(uint *)(iVar9 + 0x14 + iVar4 * 4);
        uVar8 = uVar6 & 0xfffffffc;
        local_14 = local_14 - 1;
        if (((uVar8 != 0) && (*(int *)(uVar8 + 0x30) == -1)) &&
           ((uVar5 = *(uint *)(iVar9 + 0x14 + iVar4 * 4), (uVar5 & 0xfffffffc) == 0 ||
            (*(int *)(iVar9 + 0x38) == *(int *)((uVar5 & 0xfffffffc) + 0x38))))) {
          sVar7 = ((byte)uVar6 & 3) * '\x02';
          *(int *)(uVar8 + 0x30) = local_c + -1;
          if (local_14 == (local_10 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
          }
          puVar2 = (uint *)(local_18 + local_14 * 8);
          if (puVar2 != (uint *)0x0) {
            *puVar2 = uVar8;
            puVar2[1] = 9 >> sVar7 & 3;
          }
          local_14 = local_14 + 1;
          if (local_14 == (local_10 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
          }
          puVar2 = (uint *)(local_18 + local_14 * 8);
          if (puVar2 != (uint *)0x0) {
            *puVar2 = uVar8;
            puVar2[1] = 0x12 >> sVar7 & 3;
          }
          local_14 = local_14 + 1;
        }
        uVar6 = local_10;
        iVar9 = local_c;
      } while (local_14 != 0);
    }
    puVar3 = (undefined4 *)*local_8;
  }
  local_14 = 0;
  if (-1 < (int)uVar6) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,uVar6 * 8);
  }
  return iVar9;
}

// 0109B1F0  FUN_0109b1f0  size=901  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0109b1f0(int param_1,int *param_2,uint param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  sbyte sVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_10;
  
  cVar4 = (char)param_3;
  iVar1 = param_2[(9 >> (cVar4 * '\x02' & 0x1fU) & 3U) + 2];
  piVar7 = param_2;
  uVar10 = param_3;
  while( true ) {
    piVar7[uVar10 + 2] = iVar1;
    if (param_4 != '\0') {
      FUN_01099490(piVar7);
    }
    cVar5 = (char)uVar10;
    uVar10 = piVar7[(0x12 >> (cVar5 * '\x02' & 0x1fU) & 3U) + 5] & 3;
    piVar7 = (int *)(piVar7[(0x12 >> (cVar5 * '\x02' & 0x1fU) & 3U) + 5] & 0xfffffffc);
    if (piVar7 == (int *)0x0) break;
    if (uVar10 + (int)piVar7 == param_3 + (int)param_2) goto LAB_0109b2b5;
  }
  uVar10 = param_2[param_3 + 5];
  bVar3 = (byte)uVar10;
  while (uVar10 = uVar10 & 0xfffffffc, uVar10 != 0) {
    uVar14 = 9 >> (bVar3 & 3) * '\x02' & 3;
    *(int *)(uVar10 + 8 + uVar14 * 4) = iVar1;
    if (param_4 != '\0') {
      FUN_01099490(uVar10);
    }
    uVar10 = *(uint *)(uVar10 + 0x14 + uVar14 * 4);
    bVar3 = (byte)uVar10;
  }
LAB_0109b2b5:
  uVar10 = param_2[param_3 + 5] & 3;
  piVar7 = (int *)(param_2[param_3 + 5] & 0xfffffffc);
  if (piVar7 != (int *)0x0) {
    sVar6 = (char)uVar10 * '\x02';
    uVar11 = 9 >> sVar6 & 3;
    uVar8 = piVar7[uVar11 + 5] & 0xfffffffc;
    uVar13 = piVar7[uVar11 + 5] & 3;
    uVar9 = 0x12 >> sVar6 & 3;
    uVar15 = piVar7[uVar9 + 5] & 3;
    local_10 = piVar7[uVar9 + 5] & 0xfffffffc;
    uVar14 = uVar8;
    uVar12 = uVar13;
    if (local_10 != 0) {
      uVar14 = local_10;
      uVar12 = uVar15;
      uVar15 = uVar13;
      local_10 = uVar8;
    }
    if (uVar14 != 0) {
      *(uint *)(uVar14 + 0x14 + uVar12 * 4) = local_10 + uVar15;
      if (local_10 != 0) {
        *(uint *)(local_10 + 0x14 + uVar15 * 4) = uVar12 + uVar14;
      }
      if ((_DAT_0209a9ac & 1) == 0) {
        _DAT_0209a9ac = _DAT_0209a9ac | 1;
        DAT_0209a9a4 = 0;
        DAT_0209a9a8 = 0;
      }
      piVar7[uVar11 + 5] = DAT_0209a9a8 + DAT_0209a9a4;
      if (DAT_0209a9a4 != 0) {
        *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = uVar11 + (int)piVar7;
      }
      if ((_DAT_0209a9ac & 1) == 0) {
        _DAT_0209a9ac = _DAT_0209a9ac | 1;
        DAT_0209a9a4 = 0;
        DAT_0209a9a8 = 0;
      }
      piVar7[uVar9 + 5] = DAT_0209a9a8 + DAT_0209a9a4;
      if (DAT_0209a9a4 != 0) {
        *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = uVar9 + (int)piVar7;
      }
    }
    uVar14 = piVar7[uVar10 + 5];
    if ((uVar14 & 0xfffffffc) != 0) {
      *(undefined4 *)((uVar14 & 0xfffffffc) + 0x14 + (uVar14 & 3) * 4) = 0;
    }
    piVar7[uVar10 + 5] = 0;
    iVar1 = *piVar7;
    piVar2 = (int *)piVar7[1];
    if (iVar1 != 0) {
      *(int **)(iVar1 + 4) = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    iVar1 = piVar7[0x14];
    piVar7 = (int *)(iVar1 + 0xc0c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_010a7e00(iVar1);
    }
  }
  uVar15 = param_2[(9 >> (cVar4 * '\x02' & 0x1fU) & 3U) + 5] & 3;
  uVar8 = param_2[(9 >> (cVar4 * '\x02' & 0x1fU) & 3U) + 5] & 0xfffffffc;
  uVar9 = param_2[(0x12 >> (cVar4 * '\x02' & 0x1fU) & 3U) + 5] & 3;
  uVar11 = param_2[(0x12 >> (cVar4 * '\x02' & 0x1fU) & 3U) + 5] & 0xfffffffc;
  uVar10 = uVar8;
  uVar14 = uVar9;
  uVar12 = 0;
  if (uVar11 != 0) {
    uVar10 = uVar11;
    uVar14 = uVar15;
    uVar12 = uVar8;
    uVar15 = uVar9;
  }
  if (uVar10 != 0) {
    *(uint *)(uVar10 + 0x14 + uVar15 * 4) = uVar14 + uVar12;
    if (uVar12 != 0) {
      *(uint *)(uVar12 + 0x14 + uVar14 * 4) = uVar15 + uVar10;
    }
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0;
    }
    uVar10 = 9 >> (cVar4 * '\x02' & 0x1fU) & 3;
    param_2[uVar10 + 5] = DAT_0209a9a8 + DAT_0209a9a4;
    if (DAT_0209a9a4 != 0) {
      *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = uVar10 + (int)param_2;
    }
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0;
    }
    uVar10 = 0x12 >> (cVar4 * '\x02' & 0x1fU) & 3;
    param_2[uVar10 + 5] = DAT_0209a9a8 + DAT_0209a9a4;
    if (DAT_0209a9a4 != 0) {
      *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = uVar10 + (int)param_2;
    }
  }
  iVar1 = *param_2;
  piVar7 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar7;
  }
  if (piVar7 == (int *)0x0) {
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  else {
    *piVar7 = iVar1;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  iVar1 = param_2[0x14];
  piVar7 = (int *)(iVar1 + 0xc0c);
  *piVar7 = *piVar7 + -1;
  if (*piVar7 == 0) {
    FUN_010a7e00(iVar1);
  }
  return;
}

// 0109B580  FUN_0109b580  size=697  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0109b580(uint *param_1,uint param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)(param_2 + 0x14 + param_3 * 4);
  cVar1 = (char)param_3;
  if ((uVar8 & 0xfffffffc) == 0) {
    iVar2 = FUN_010bb710(param_2);
    *(undefined4 *)(iVar2 + 8) = param_4;
    *(undefined4 *)(iVar2 + 0xc) =
         *(undefined4 *)(param_2 + 8 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 8 + param_3 * 4);
    *(undefined4 *)(param_2 + 8 + param_3 * 4) = param_4;
    uVar8 = *(uint *)(param_2 + 0x14 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    uVar6 = uVar8 & 3;
    uVar8 = uVar8 & 0xfffffffc;
    *(uint *)(iVar2 + 0x18) = uVar6 + uVar8;
    if (uVar8 != 0) {
      *(int *)(uVar8 + 0x14 + uVar6 * 4) = iVar2 + 1;
    }
    uVar8 = 0x12 >> (cVar1 * '\x02' & 0x1fU) & 3;
    *(uint *)(iVar2 + 0x14) = uVar8 + param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14 + uVar8 * 4) = iVar2;
    }
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0;
    }
    *(int *)(iVar2 + 0x1c) = DAT_0209a9a8 + DAT_0209a9a4;
    if (DAT_0209a9a4 != 0) {
      *(int *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = iVar2 + 2;
    }
    if (param_5 == '\0') goto LAB_0109b816;
    FUN_01099490(iVar2);
    uVar8 = param_2;
  }
  else {
    uVar9 = uVar8 & 3;
    uVar8 = uVar8 & 0xfffffffc;
    iVar2 = FUN_010bb710(param_2);
    iVar3 = FUN_010bb710(uVar8);
    sVar5 = (char)uVar9 * '\x02';
    *(undefined4 *)(iVar2 + 8) = param_4;
    *(undefined4 *)(iVar2 + 0xc) =
         *(undefined4 *)(param_2 + 8 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(uVar8 + 8 + (9 >> sVar5 & 3U) * 4);
    *(undefined4 *)(iVar3 + 8) = param_4;
    uVar4 = 0x12 >> sVar5 & 3;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar8 + 8 + uVar4 * 4);
    *(undefined4 *)(iVar3 + 0x10) =
         *(undefined4 *)(param_2 + 8 + (9 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    *(undefined4 *)(param_2 + 8 + param_3 * 4) = param_4;
    *(undefined4 *)(uVar8 + 8 + uVar9 * 4) = param_4;
    uVar6 = *(uint *)(param_2 + 0x14 + (0x12 >> (cVar1 * '\x02' & 0x1fU) & 3U) * 4);
    uVar7 = uVar6 & 3;
    uVar6 = uVar6 & 0xfffffffc;
    *(uint *)(iVar2 + 0x18) = uVar7 + uVar6;
    if (uVar6 != 0) {
      *(int *)(uVar6 + 0x14 + uVar7 * 4) = iVar2 + 1;
    }
    uVar6 = *(uint *)(uVar8 + 0x14 + uVar4 * 4);
    uVar7 = uVar6 & 3;
    uVar6 = uVar6 & 0xfffffffc;
    *(uint *)(iVar3 + 0x18) = uVar7 + uVar6;
    if (uVar6 != 0) {
      *(int *)(uVar6 + 0x14 + uVar7 * 4) = iVar3 + 1;
    }
    uVar6 = 0x12 >> (cVar1 * '\x02' & 0x1fU) & 3;
    *(uint *)(iVar2 + 0x14) = param_2 + uVar6;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14 + uVar6 * 4) = iVar2;
    }
    *(uint *)(iVar3 + 0x14) = uVar4 + uVar8;
    if (uVar8 != 0) {
      *(int *)(uVar8 + 0x14 + uVar4 * 4) = iVar3;
    }
    *(uint *)(iVar2 + 0x1c) = uVar9 + uVar8;
    if (uVar8 != 0) {
      *(int *)(uVar8 + 0x14 + uVar9 * 4) = iVar2 + 2;
    }
    *(uint *)(iVar3 + 0x1c) = param_3 + param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14 + param_3 * 4) = iVar3 + 2;
    }
    if (param_5 == '\0') goto LAB_0109b816;
    FUN_01099490(iVar2);
    FUN_01099490(iVar3);
    FUN_01099490(param_2);
  }
  FUN_01099490(uVar8);
LAB_0109b816:
  *param_1 = param_2;
  param_1[1] = 0x12 >> (cVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 0109B840  FUN_0109b840  size=68  [run]
undefined4
FUN_0109b840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_010bb6a0();
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(iVar4 + 0x20) = *param_4;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  FUN_0109b580(param_1,param_2,param_3,iVar4,param_5);
  return param_1;
}

// 0109B890  FUN_0109b890  size=183  [run]
void FUN_0109b890(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar4 = FUN_010bb6a0();
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(iVar4 + 0x20) = *param_2;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  iVar5 = FUN_010bb710(param_1);
  iVar6 = FUN_010bb710(param_1);
  *(int *)(param_1 + 8) = iVar4;
  *(int *)(iVar5 + 0xc) = iVar4;
  *(int *)(iVar6 + 0x10) = iVar4;
  uVar8 = *(uint *)(param_1 + 0x1c) & 3;
  uVar7 = *(uint *)(param_1 + 0x1c) & 0xfffffffc;
  *(uint *)(iVar5 + 0x1c) = uVar7 + uVar8;
  if (uVar7 != 0) {
    *(int *)(uVar7 + 0x14 + uVar8 * 4) = iVar5 + 2;
  }
  uVar8 = *(uint *)(param_1 + 0x14) & 3;
  uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffffc;
  *(uint *)(iVar6 + 0x14) = uVar7 + uVar8;
  if (uVar7 != 0) {
    *(int *)(uVar7 + 0x14 + uVar8 * 4) = iVar6;
  }
  *(int *)(param_1 + 0x14) = iVar6 + 1;
  *(int *)(iVar6 + 0x18) = param_1;
  *(int *)(iVar5 + 0x14) = iVar6 + 2;
  *(int *)(iVar6 + 0x1c) = iVar5;
  *(int *)(iVar5 + 0x18) = param_1 + 2;
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  return;
}

// 0109B950  FUN_0109b950  size=800  [run]
void __thiscall FUN_0109b950(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int local_14;
  uint *local_8;
  
  for (puVar1 = *(undefined4 **)((int)param_2 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar3 = *(int *)(param_1 + 8);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0xe00) == 0)) {
      iVar3 = FUN_010abc10();
    }
    if (iVar3 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = *(undefined4 **)(iVar3 + 0xe00);
      *(undefined4 *)(iVar3 + 0xe00) = *puVar9;
      puVar9[0x18] = iVar3;
      *(int *)(iVar3 + 0xe0c) = *(int *)(iVar3 + 0xe0c) + 1;
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar1 + 6);
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
      *(undefined8 *)(puVar9 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
      *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      *(undefined8 *)(puVar9 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
      puVar9[0x14] = puVar1[0x14];
      puVar9[0x15] = puVar1[0x15];
      puVar9[1] = 0;
      *puVar9 = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0xc) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0xc) + 4) = puVar9;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 **)(param_1 + 0xc) = puVar9;
    }
    FUN_010100a0(&PTR_vftable_018e9b94,puVar1,puVar9);
  }
  for (puVar1 = *(undefined4 **)((int)param_2 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar3 = *(int *)(param_1 + 0x18);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc00) == 0)) {
      iVar3 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
      if (iVar3 != 0) {
        iVar7 = 0x1f;
        piVar2 = (int *)(iVar3 + 0xba0);
        piVar10 = (int *)0;
        do {
          piVar8 = piVar2;
          *piVar8 = (int)piVar10;
          iVar7 = iVar7 + -1;
          piVar2 = piVar8 + -0x18;
          piVar10 = piVar8;
        } while (-1 < iVar7);
        *(undefined4 *)(iVar3 + 0xc0c) = 0;
        *(int **)(iVar3 + 0xc00) = piVar8;
        *(undefined4 *)(iVar3 + 0xc04) = 0;
        *(undefined4 *)(iVar3 + 0xc08) = *(undefined4 *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar3;
        if (*(int *)(iVar3 + 0xc08) != 0) {
          *(int *)(*(int *)(iVar3 + 0xc08) + 0xc04) = iVar3;
        }
      }
    }
    if (iVar3 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = *(undefined4 **)(iVar3 + 0xc00);
      *(undefined4 *)(iVar3 + 0xc00) = *puVar9;
      puVar9[0x14] = iVar3;
      *(int *)(iVar3 + 0xc0c) = *(int *)(iVar3 + 0xc0c) + 1;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar1 + 2);
      puVar9[4] = puVar1[4];
      *(undefined8 *)(puVar9 + 5) = *(undefined8 *)(puVar1 + 5);
      puVar9[7] = puVar1[7];
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar1 + 10);
      puVar9[0xc] = puVar1[0xc];
      puVar9[0xd] = puVar1[0xd];
      puVar9[0xe] = puVar1[0xe];
      puVar9[0xf] = puVar1[0xf];
      puVar9[0x10] = puVar1[0x10];
      puVar9[1] = 0;
      *puVar9 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x1c) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0x1c) + 4) = puVar9;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined4 **)(param_1 + 0x1c) = puVar9;
    }
    puVar11 = puVar9 + 2;
    param_2 = (undefined4 *)0x3;
    do {
      uVar4 = FUN_01010160(*puVar11,0);
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
    local_8 = puVar9 + 5;
    local_14 = 3;
    param_2 = puVar1;
    do {
      uVar5 = *local_8;
      if ((uVar5 & 0xfffffffc) != 0) {
        uVar5 = FUN_01010160((uVar5 & 3) + (uVar5 & 0xfffffffc),0);
        uVar6 = uVar5 & 0xfffffffc;
        if (uVar6 == 0) {
          FUN_010100a0(&PTR_vftable_018e9b94,param_2,((int)puVar9 - (int)puVar1) + (int)param_2);
        }
        else {
          FUN_01010c10(param_2);
          *local_8 = (uVar5 & 3) + uVar6;
          *(int *)(uVar6 + 0x14 + (uVar5 & 3) * 4) = ((int)puVar9 - (int)puVar1) + (int)param_2;
        }
      }
      local_8 = local_8 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_01098e20();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 0109BC70  FUN_0109bc70  size=132  [run]
void __thiscall FUN_0109bc70(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  param_2[1] = 0;
  if ((int)(param_2[2] & 0x3fffffffU) < *(int *)(param_1 + 0x20)) {
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,*(int *)(param_1 + 0x20),4);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((char)param_3 != '\0') {
      puVar1[0xd] = 0xffffffff;
    }
    *(undefined4 **)(*param_2 + param_2[1] * 4) = puVar1;
    param_2[1] = param_2[1] + 1;
  }
  param_3 = param_3 & 0xffffff00;
  if (1 < param_2[1]) {
    FUN_010b7b90(*param_2,0,param_2[1] + -1,param_3);
  }
  return;
}

// 0109C410  FUN_0109c410  size=43  [run]
undefined4 FUN_0109c410(undefined4 param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0109a120(param_1,param_2);
  if (fVar1 < (float10)param_3) {
    return 1;
  }
  return 0;
}

// 0109C440  FUN_0109c440  size=88  [run]
int FUN_0109c440(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_010bb780();
  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(int *)(iVar1 + 0x10) = param_3;
  *(int *)(iVar1 + 0xc) = param_2;
  *(int *)(iVar1 + 8) = param_1;
  FUN_010992b0(param_1 + 0x20,param_2 + 0x20,param_3 + 0x20,iVar1 + 0x20,1);
  return iVar1;
}

// 0109C880  FUN_0109c880  size=992  [run]
int __thiscall FUN_0109c880(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined1 local_2b0 [512];
  undefined1 *local_b0;
  uint local_ac;
  undefined1 *local_a8;
  undefined1 local_a4 [140];
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int *local_8;
  
  puVar10 = *(undefined4 **)(param_1 + 0xc);
  local_c = 0;
  for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
    puVar10[0x14] = 0;
  }
  for (puVar10 = *(undefined4 **)(param_1 + 0x1c); puVar10 != (undefined4 *)0x0;
      puVar10 = (undefined4 *)*puVar10) {
    *(int *)(puVar10[2] + 0x50) = *(int *)(puVar10[2] + 0x50) + 1;
    *(int *)(puVar10[3] + 0x50) = *(int *)(puVar10[3] + 0x50) + 1;
    *(int *)(puVar10[4] + 0x50) = *(int *)(puVar10[4] + 0x50) + 1;
  }
  local_8 = *(int **)(param_1 + 0x1c);
  local_14 = param_1;
  if (local_8 == (int *)0x0) {
    return 0;
  }
  do {
    local_10 = (uint *)(local_8 + 5);
    local_18 = 0;
    do {
      uVar3 = local_10[-3];
      local_b0 = local_a4;
      local_ac = 0;
      local_a8 = &DAT_80000010;
      piVar6 = local_8;
      uVar8 = local_18;
      while( true ) {
        if (local_ac == ((uint)local_a8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_b0,8);
        }
        puVar10 = (undefined4 *)(local_b0 + local_ac * 8);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = piVar6;
          puVar10[1] = uVar8;
        }
        local_ac = local_ac + 1;
        cVar5 = (char)uVar8;
        uVar8 = piVar6[(0x12 >> (cVar5 * '\x02' & 0x1fU) & 3U) + 5] & 3;
        piVar6 = (int *)(piVar6[(0x12 >> (cVar5 * '\x02' & 0x1fU) & 3U) + 5] & 0xfffffffc);
        if (piVar6 == (int *)0x0) break;
        if (uVar8 + (int)piVar6 == local_18 + (int)local_8) goto LAB_0109ca26;
      }
      uVar8 = *local_10;
      bVar4 = (byte)uVar8;
      while (uVar8 = uVar8 & 0xfffffffc, uVar8 != 0) {
        uVar13 = 9 >> (bVar4 & 3) * '\x02' & 3;
        if (local_ac == ((uint)local_a8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_b0,8);
        }
        puVar1 = (uint *)(local_b0 + local_ac * 8);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = uVar8;
          puVar1[1] = uVar13;
        }
        local_ac = local_ac + 1;
        uVar8 = *(uint *)(uVar8 + 0x14 + uVar13 * 4);
        bVar4 = (byte)uVar8;
      }
LAB_0109ca26:
      if ((int)local_ac < *(int *)(uVar3 + 0x50)) {
        iVar7 = *(int *)(local_14 + 8);
        if ((iVar7 == 0) || (*(int *)(iVar7 + 0xe00) == 0)) {
          iVar7 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xe10);
          if (iVar7 != 0) {
            iVar9 = 0x1f;
            piVar6 = (int *)(iVar7 + 0xd90);
            piVar12 = (int *)0;
            do {
              piVar11 = piVar6;
              *piVar11 = (int)piVar12;
              iVar9 = iVar9 + -1;
              piVar6 = piVar11 + -0x1c;
              piVar12 = piVar11;
            } while (-1 < iVar9);
            *(undefined4 *)(iVar7 + 0xe0c) = 0;
            *(int **)(iVar7 + 0xe00) = piVar11;
            *(undefined4 *)(iVar7 + 0xe04) = 0;
            *(undefined4 *)(iVar7 + 0xe08) = *(undefined4 *)(local_14 + 8);
            *(int *)(local_14 + 8) = iVar7;
            if (*(int *)(iVar7 + 0xe08) != 0) {
              *(int *)(*(int *)(iVar7 + 0xe08) + 0xe04) = iVar7;
            }
          }
        }
        if (iVar7 == 0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar10 = *(undefined4 **)(iVar7 + 0xe00);
          *(undefined4 *)(iVar7 + 0xe00) = *puVar10;
          puVar10[0x18] = iVar7;
          *(int *)(iVar7 + 0xe0c) = *(int *)(iVar7 + 0xe0c) + 1;
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(uVar3 + 0x10);
          *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(uVar3 + 0x18);
          *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(uVar3 + 0x20);
          *(undefined8 *)(puVar10 + 10) = *(undefined8 *)(uVar3 + 0x28);
          *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(uVar3 + 0x30);
          *(undefined8 *)(puVar10 + 0xe) = *(undefined8 *)(uVar3 + 0x38);
          *(undefined8 *)(puVar10 + 0x10) = *(undefined8 *)(uVar3 + 0x40);
          *(undefined8 *)(puVar10 + 0x12) = *(undefined8 *)(uVar3 + 0x48);
          puVar10[0x14] = *(undefined4 *)(uVar3 + 0x50);
          puVar10[0x15] = *(undefined4 *)(uVar3 + 0x54);
          puVar10[1] = 0;
          *puVar10 = *(undefined4 *)(local_14 + 0xc);
          if (*(int *)(local_14 + 0xc) != 0) {
            *(undefined4 **)(*(int *)(local_14 + 0xc) + 4) = puVar10;
          }
          *(int *)(local_14 + 0x10) = *(int *)(local_14 + 0x10) + 1;
          *(undefined4 **)(local_14 + 0xc) = puVar10;
        }
        *(int *)(uVar3 + 0x50) = *(int *)(uVar3 + 0x50) - local_ac;
        *(undefined4 *)(uVar3 + 0x54) = param_2;
        puVar10[0x15] = param_2;
        iVar7 = 0;
        puVar10[0x14] = local_ac;
        if (0 < (int)local_ac) {
          do {
            iVar2 = iVar7 * 8;
            iVar9 = iVar7 * 8;
            iVar7 = iVar7 + 1;
            *(undefined4 **)(*(int *)(local_b0 + iVar9) + 8 + *(int *)(local_b0 + iVar2 + 4) * 4) =
                 puVar10;
          } while (iVar7 < (int)local_ac);
        }
        local_c = local_c + 1;
      }
      local_ac = 0;
      if (-1 < (int)local_a8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_b0,(int)local_a8 * 8);
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + 1;
    } while ((int)local_18 < 3);
    local_8 = (int *)*local_8;
    if (local_8 == (int *)0x0) {
      if (local_c == 0) {
        return 0;
      }
      hkErrStream::hkErrStream(local_2b0,0x200);
      iVar7 = local_c;
      iVar9 = local_c;
      FUN_01018d00("Butterflies found: ");
      FUN_01018dc0(iVar9);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_2b0,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0x8d2);
      hkBaseObject::hkBaseObject_38();
      return iVar7;
    }
  } while( true );
}

// 0109CC80  FUN_0109cc80  size=977  [run]
uint __thiscall FUN_0109cc80(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  float in_XMM0_Da;
  undefined4 *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  piVar12 = *(int **)(param_1 + 0x1c);
  puVar4 = (undefined4 *)0x0;
  uVar7 = 0;
  uVar9 = 0x80000000;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (piVar12 != (int *)0x0) {
    do {
      if ((param_3 == -NAN) || ((float)piVar12[0xc] == param_3)) {
        local_c = (uint *)(piVar12 + 5);
        iVar8 = 0;
        do {
          if ((*local_c & 0xfffffffc) == 0) {
            pvVar5 = TlsGetValue(DAT_01f8fc4c);
            piVar6 = (int *)(**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xc);
            piVar10 = (int *)0x0;
            if (piVar6 != (int *)0x0) {
              *piVar6 = 0;
              piVar6[1] = 0;
              piVar6[2] = -0x80000000;
              piVar10 = piVar6;
            }
            if (piVar10[1] == (piVar10[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar10,8);
            }
            puVar4 = (undefined4 *)(*piVar10 + piVar10[1] * 8);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = piVar12;
              puVar4[1] = iVar8;
            }
            piVar10[1] = piVar10[1] + 1;
            if (local_20 == (local_1c & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
            }
            local_24[local_20] = piVar10;
            uVar7 = local_20 + 1;
            puVar4 = local_24;
            uVar9 = local_1c;
            local_20 = uVar7;
          }
          local_c = local_c + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 3);
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
    if (uVar7 != 0) {
      local_c = (uint *)0x0;
      do {
        if (0 < (int)uVar7) {
          param_3 = 0.0;
          local_10 = 1;
          do {
            uVar9 = local_10;
            local_8 = local_10;
            if ((int)local_10 < (int)uVar7) {
              do {
                piVar12 = *(int **)((int)param_3 + (int)puVar4);
                local_18 = *(int *)(*(int *)*piVar12 + 8 + ((int *)*piVar12)[1] * 4);
                piVar12 = (int *)(*piVar12 + -8 + piVar12[1] * 8);
                iVar8 = *(int *)(*piVar12 + 8 + (9 >> ((char)piVar12[1] * '\x02' & 0x1fU) & 3U) * 4)
                ;
                if (local_18 != iVar8) {
                  piVar12 = (int *)puVar4[uVar9];
                  iVar11 = *(int *)(*(int *)*piVar12 + 8 + ((int *)*piVar12)[1] * 4);
                  piVar12 = (int *)(*piVar12 + -8 + piVar12[1] * 8);
                  iVar1 = *(int *)(*piVar12 + 8 +
                                  (9 >> ((char)piVar12[1] * '\x02' & 0x1fU) & 3U) * 4);
                  if (iVar11 != iVar1) {
                    local_8 = uVar9;
                    if (iVar11 == iVar8) {
                      FUN_010aa800(&PTR_vftable_018e9b94,*(undefined4 *)puVar4[uVar9],
                                   ((undefined4 *)puVar4[uVar9])[1]);
                      puVar4 = (undefined4 *)local_24[uVar9];
                      if (puVar4 != (undefined4 *)0x0) {
                        puVar4[1] = 0;
                        if (-1 < (int)puVar4[2]) {
                          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,puVar4[2] * 8);
                        }
                        *puVar4 = 0;
                        puVar4[2] = 0x80000000;
LAB_0109cebe:
                        pvVar5 = TlsGetValue(DAT_01f8fc4c);
                        (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(puVar4,0xc);
                      }
                    }
                    else {
                      if (local_18 != iVar1) goto LAB_0109cf7d;
                      FUN_010aa800(&PTR_vftable_018e9b94,
                                   **(undefined4 **)((int)param_3 + (int)puVar4),
                                   (*(undefined4 **)((int)param_3 + (int)puVar4))[1]);
                      uVar2 = *(undefined4 *)((int)param_3 + (int)local_24);
                      *(undefined4 *)((int)param_3 + (int)local_24) = local_24[uVar9];
                      local_24[uVar9] = uVar2;
                      puVar4 = (undefined4 *)local_24[uVar9];
                      if (puVar4 != (undefined4 *)0x0) {
                        puVar4[1] = 0;
                        if (-1 < (int)puVar4[2]) {
                          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,puVar4[2] * 8);
                        }
                        *puVar4 = 0;
                        puVar4[2] = 0x80000000;
                        goto LAB_0109cebe;
                      }
                    }
                    local_20 = local_20 - 1;
                    if (local_20 != uVar9) {
                      local_24[uVar9] = local_24[local_20];
                    }
                    uVar9 = uVar9 - 1;
                    local_c = (uint *)0xffffffff;
                    puVar4 = local_24;
                  }
                }
LAB_0109cf7d:
                local_8 = uVar9 + 1;
                uVar7 = local_20;
                uVar9 = local_8;
              } while ((int)local_8 < (int)local_20);
            }
            param_3 = (float)((int)param_3 + 4);
            uVar9 = local_10 + 1;
            bVar3 = (int)local_10 < (int)uVar7;
            local_10 = uVar9;
          } while (bVar3);
        }
        local_c = (uint *)((int)local_c + 1);
        if (0 < (int)local_c) {
          iVar8 = 0;
          FUN_0109a9e0(*puVar4);
          iVar11 = 1;
          param_3 = in_XMM0_Da;
          if (1 < (int)local_20) {
            do {
              FUN_0109a9e0(local_24[iVar11]);
              if (param_3 < in_XMM0_Da) {
                iVar8 = iVar11;
                param_3 = in_XMM0_Da;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_20);
            if (iVar8 != 0) {
              uVar2 = *local_24;
              *local_24 = local_24[iVar8];
              local_24[iVar8] = uVar2;
            }
          }
          FUN_010ab0b0(&PTR_vftable_018e9b94,local_24,local_20);
          uVar7 = local_20;
          local_20 = 0;
          if (-1 < (int)local_1c) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
          }
          return uVar7;
        }
      } while( true );
    }
  }
  local_20 = 0;
  if (-1 < (int)uVar9) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar4,uVar9 * 4);
  }
  return 0;
}

// 0109D060  FUN_0109d060  size=520  [run]
uint FUN_0109d060(uint param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *local_9c;
  uint local_98;
  undefined1 *local_94;
  undefined1 local_90 [128];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_9c = local_90;
  local_98 = 0;
  local_94 = &DAT_80000010;
  local_8 = param_2;
  uVar3 = param_1;
  uVar5 = param_2;
  while( true ) {
    if (local_98 == ((uint)local_94 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_9c,8);
      param_2 = local_8;
    }
    puVar1 = (uint *)(local_9c + local_98 * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
    }
    local_98 = local_98 + 1;
    uVar3 = *(uint *)(uVar3 + 0x14 + (0x12 >> ((char)uVar5 * '\x02' & 0x1fU) & 3U) * 4);
    uVar5 = uVar3 & 3;
    uVar3 = uVar3 & 0xfffffffc;
    if (uVar3 == 0) break;
    if (uVar5 + uVar3 == param_2 + param_1) goto LAB_0109d1a6;
  }
  uVar3 = *(uint *)(param_1 + 0x14 + param_2 * 4);
  bVar2 = (byte)uVar3;
  while (uVar3 = uVar3 & 0xfffffffc, uVar3 != 0) {
    uVar5 = 9 >> (bVar2 & 3) * '\x02' & 3;
    if (local_98 == ((uint)local_94 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_9c,8);
    }
    puVar1 = (uint *)(local_9c + local_98 * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
    }
    local_98 = local_98 + 1;
    uVar3 = *(uint *)(uVar3 + 0x14 + uVar5 * 4);
    bVar2 = (byte)uVar3;
  }
LAB_0109d1a6:
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  FUN_01010c40(&PTR_vftable_018e9b94,0x10);
  iVar6 = 0;
  if (0 < (int)local_98) {
    do {
      iVar4 = FUN_01010160(*(undefined4 *)(*(int *)(local_9c + iVar6 * 8) + 0x34),0);
      if (iVar4 == 0) {
        FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*(int *)(local_9c + iVar6 * 8) + 0x34),1)
        ;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_98);
  }
  uVar3 = local_c & 0x7fffffff;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_98 = 0;
  if (-1 < (int)local_94) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_9c,(int)local_94 * 8);
  }
  return uVar3;
}

// 0109D270  FUN_0109d270  size=410  [run]
undefined4 __thiscall FUN_0109d270(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *local_9c;
  uint local_98;
  undefined1 *local_94;
  undefined1 local_90 [132];
  uint local_c;
  undefined4 local_8;
  
  local_9c = local_90;
  local_98 = 0;
  local_94 = &DAT_80000010;
  local_c = param_4;
  uVar5 = param_4;
  uVar3 = param_3;
  uVar4 = param_4;
  local_8 = param_1;
  while( true ) {
    if (local_98 == ((uint)local_94 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_9c,8);
      uVar5 = local_c;
    }
    puVar1 = (uint *)(local_9c + local_98 * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
    }
    local_98 = local_98 + 1;
    uVar3 = *(uint *)(uVar3 + 0x14 + (0x12 >> ((char)uVar4 * '\x02' & 0x1fU) & 3U) * 4);
    uVar4 = uVar3 & 3;
    uVar3 = uVar3 & 0xfffffffc;
    if (uVar3 == 0) break;
    if (uVar4 + uVar3 == param_3 + uVar5) goto LAB_0109d3b6;
  }
  uVar3 = *(uint *)(param_3 + 0x14 + uVar5 * 4);
  bVar2 = (byte)uVar3;
  while (uVar3 = uVar3 & 0xfffffffc, uVar3 != 0) {
    uVar5 = 9 >> (bVar2 & 3) * '\x02' & 3;
    if (local_98 == ((uint)local_94 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_9c,8);
    }
    puVar1 = (uint *)(local_9c + local_98 * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
    }
    local_98 = local_98 + 1;
    uVar3 = *(uint *)(uVar3 + 0x14 + uVar5 * 4);
    bVar2 = (byte)uVar3;
  }
LAB_0109d3b6:
  FUN_0109ab80(param_2,&local_9c,param_3,param_4);
  local_98 = 0;
  if (-1 < (int)local_94) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_9c,(int)local_94 * 8);
  }
  return param_2;
}

// 0109D420  FUN_0109d420  size=919  [run]
void FUN_0109d420(uint param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 local_160 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 *local_100;
  uint local_fc;
  undefined1 *local_f8;
  undefined1 local_f4 [132];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  float local_20;
  float local_1c;
  uint local_14;
  
  local_100 = local_f4;
  local_1c = 0.0;
  local_20 = 0.0;
  local_fc = 0;
  local_f8 = &DAT_80000010;
  uStack_28 = param_1;
  uStack_24 = param_2;
  local_14 = param_2;
  uVar17 = param_1;
  while( true ) {
    if (local_fc == ((uint)local_f8 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_100,8);
    }
    puVar1 = (uint *)(local_100 + local_fc * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar17;
      puVar1[1] = local_14;
    }
    local_fc = local_fc + 1;
    uVar17 = *(uint *)(uVar17 + 0x14 + (0x12 >> ((char)local_14 * '\x02' & 0x1fU) & 3U) * 4);
    local_14 = uVar17 & 3;
    uVar17 = uVar17 & 0xfffffffc;
    if (uVar17 == 0) break;
    if (local_14 + uVar17 == uStack_24 + uStack_28) goto LAB_0109d58e;
  }
  uVar17 = *(uint *)(uStack_28 + 0x14 + uStack_24 * 4);
  bVar16 = (byte)uVar17;
  while (uVar17 = uVar17 & 0xfffffffc, uVar17 != 0) {
    local_14 = 9 >> (bVar16 & 3) * '\x02' & 3;
    if (local_fc == ((uint)local_f8 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_100,8);
    }
    puVar1 = (uint *)(local_100 + local_fc * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar17;
      puVar1[1] = local_14;
    }
    local_fc = local_fc + 1;
    uVar17 = *(uint *)(uVar17 + 0x14 + local_14 * 4);
    bVar16 = (byte)uVar17;
  }
LAB_0109d58e:
  local_14 = 0;
  fVar20 = local_1c;
  if (0 < (int)local_fc) {
    local_30 = 0.0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_110 = 3.0;
    uStack_10c = 0x40400000;
    uStack_108 = 0x40400000;
    uStack_104 = 0x40400000;
    local_120 = 0.5;
    uStack_11c = 0x3f000000;
    uStack_118 = 0x3f000000;
    uStack_114 = 0x3f000000;
    uVar17 = local_fc;
    do {
      iVar10 = *(int *)(local_100 + local_14 * 8);
      iVar11 = *(int *)(iVar10 + 8);
      iVar12 = *(int *)(iVar10 + 0xc);
      iVar13 = *(int *)(iVar10 + 0x10);
      iVar14 = *(int *)(local_100 + local_14 * 8 + 4);
      fVar24 = *(float *)(iVar13 + 0x20) - *(float *)(iVar11 + 0x20);
      fVar26 = *(float *)(iVar13 + 0x24) - *(float *)(iVar11 + 0x24);
      fVar27 = *(float *)(iVar13 + 0x28) - *(float *)(iVar11 + 0x28);
      uVar15 = *(uint *)(iVar10 + 0x14 + iVar14 * 4);
      fVar19 = *(float *)(iVar12 + 0x20) - *(float *)(iVar11 + 0x20);
      fVar22 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
      fVar23 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
      fVar25 = fVar27 * fVar22 - fVar26 * fVar23;
      fVar23 = fVar24 * fVar23 - fVar27 * fVar19;
      fVar19 = fVar26 * fVar19 - fVar24 * fVar22;
      fVar25 = fVar25 * fVar25;
      fVar23 = fVar23 * fVar23;
      fVar19 = fVar19 * fVar19;
      auVar28._4_4_ = fVar25;
      auVar28._0_4_ = fVar25;
      auVar28._8_4_ = fVar25;
      auVar28._12_4_ = fVar25;
      auVar21._0_4_ = fVar23 + fVar25 + fVar19;
      auVar21._4_4_ = fVar23 + fVar25 + fVar19;
      auVar21._8_4_ = fVar23 + fVar25 + fVar19;
      auVar21._12_4_ = fVar23 + fVar25 + fVar19;
      auVar28 = rsqrtps(auVar28,auVar21);
      fVar19 = auVar28._0_4_;
      local_20 = (float)(~-(uint)(auVar21._0_4_ <= local_30) &
                        (uint)((local_110 - fVar19 * auVar21._0_4_ * fVar19) * fVar19 * local_120 *
                              auVar21._0_4_)) + local_20;
      if ((uVar15 & 0xfffffffc) != 0) {
        iVar11 = *(int *)(iVar10 + 8 + iVar14 * 4);
        uVar2 = *(undefined8 *)(iVar11 + 0x20);
        uVar3 = *(undefined8 *)(iVar11 + 0x28);
        bVar16 = (char)iVar14 * '\x02';
        iVar11 = *(int *)(iVar10 + 8 + (9 >> (bVar16 & 0x1f) & 3U) * 4);
        uVar4 = *(undefined8 *)(iVar11 + 0x20);
        uVar5 = *(undefined8 *)(iVar11 + 0x28);
        local_60._0_4_ = (float)uVar4;
        local_60._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        uStack_58._0_4_ = (float)uVar5;
        uStack_58._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        iVar10 = *(int *)(iVar10 + 8 + (0x12 >> (bVar16 & 0x1f) & 3U) * 4);
        uVar6 = *(undefined8 *)(iVar10 + 0x20);
        uVar7 = *(undefined8 *)(iVar10 + 0x28);
        iVar10 = *(int *)((uVar15 & 0xfffffffc) + 8 + (0x12 >> ((byte)uVar15 & 3) * '\x02' & 3U) * 4
                         );
        uVar8 = *(undefined8 *)(iVar10 + 0x20);
        uVar9 = *(undefined8 *)(iVar10 + 0x28);
        local_70._0_4_ = (float)uVar2;
        local_70._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        uStack_68._0_4_ = (float)uVar3;
        uStack_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        local_150 = (float)local_60 - (float)local_70;
        fStack_14c = local_60._4_4_ - local_70._4_4_;
        fStack_148 = (float)uStack_58 - (float)uStack_68;
        fStack_144 = uStack_58._4_4_ - uStack_68._4_4_;
        local_50._0_4_ = (float)uVar6;
        local_50._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        uStack_48._0_4_ = (float)uVar7;
        uStack_48._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        local_140 = (float)local_50 - (float)local_70;
        fStack_13c = local_50._4_4_ - local_70._4_4_;
        fStack_138 = (float)uStack_48 - (float)uStack_68;
        fStack_134 = uStack_48._4_4_ - uStack_68._4_4_;
        local_40._0_4_ = (float)uVar8;
        local_40._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        uStack_38._0_4_ = (float)uVar9;
        uStack_38._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        local_130 = (float)local_40 - (float)local_70;
        fStack_12c = local_40._4_4_ - local_70._4_4_;
        fStack_128 = (float)uStack_38 - (float)uStack_68;
        fStack_124 = uStack_38._4_4_ - uStack_68._4_4_;
        local_70 = uVar2;
        uStack_68 = uVar3;
        local_60 = uVar4;
        uStack_58 = uVar5;
        local_50 = uVar6;
        uStack_48 = uVar7;
        local_40 = uVar8;
        uStack_38 = uVar9;
        pfVar18 = (float *)FUN_010141c0(local_160);
        fVar20 = *pfVar18 * *pfVar18 + local_1c;
        uVar17 = local_fc;
        local_1c = fVar20;
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)uVar17);
  }
  *(float *)(*(int *)(param_1 + 8 + param_2 * 4) + 0x40) = fVar20 / local_20;
  local_fc = 0;
  if (-1 < (int)local_f8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_100,(int)local_f8 * 8);
  }
  return;
}

// 0109D7C0  hkBaseObject::hkBaseObject_69  size=254  [run]
void __fastcall hkBaseObject::hkBaseObject_69(undefined4 *param_1)

{
  *param_1 = hkgpMesh::vftable;
  hkgpMesh::vf0C();
  param_1[0x19] = 0;
  if ((param_1[0x1a] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x18],param_1[0x1a] * 4);
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x16] = 0;
  if ((param_1[0x17] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],param_1[0x17] << 4);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x13] = 0;
  if ((param_1[0x14] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],param_1[0x14] << 4);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0xc] = 0;
  if ((param_1[0xd] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],(param_1[0xd] & 0x3fffffff) * 0x30);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  *param_1 = hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_010b0c10();
  FUN_010b0360();
  FUN_010b0ba0();
  FUN_010b02f0();
  *param_1 = vftable;
  return;
}

// 0109E360  FUN_0109e360  size=517  [run]
int __thiscall FUN_0109e360(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = (uint)&local_8 & -(uint)(piVar1 != (int *)0x0);
  while (uVar3 != 0) {
    piVar1[0xc] = -1;
    piVar1 = (int *)*piVar1;
    uVar3 = (uint)&local_8 & -(uint)(piVar1 != (int *)0x0);
  }
  iVar15 = 0;
  local_8 = 0;
  local_10 = param_1;
  FUN_010bdc00(*(undefined4 *)(param_1 + 0x1c),0);
  uVar3 = (uint)&local_18 & -(uint)(local_18 != 0);
  iVar14 = local_18;
  while (uVar3 != 0) {
    uVar3 = *(uint *)(iVar14 + 0x14 + local_14 * 4);
    local_c = uVar3 & 0xfffffffc;
    if (((local_c != 0) && (*(int *)(iVar14 + 0x30) == -1)) && (*(int *)(local_c + 0x30) == -1)) {
      fVar5 = *(float *)(iVar14 + 0x20);
      fVar6 = *(float *)(iVar14 + 0x24);
      fVar7 = *(float *)(iVar14 + 0x28);
      if (param_2 <=
          *(float *)(local_c + 0x28) * fVar7 +
          *(float *)(local_c + 0x24) * fVar6 + *(float *)(local_c + 0x20) * fVar5) {
        bVar4 = (char)local_14 * '\x02';
        iVar15 = *(int *)(iVar14 + 8 + (9 >> (bVar4 & 0x1f) & 3U) * 4);
        iVar2 = *(int *)((uVar3 & 0xfffffffc) + 8 + (0x12 >> ((byte)uVar3 & 3) * '\x02' & 3U) * 4);
        fVar8 = *(float *)(iVar2 + 0x20);
        fVar9 = *(float *)(iVar2 + 0x24);
        fVar10 = *(float *)(iVar2 + 0x28);
        iVar2 = *(int *)(iVar14 + 8 + (0x12 >> (bVar4 & 0x1f) & 3U) * 4);
        fVar11 = *(float *)(iVar2 + 0x20);
        fVar12 = *(float *)(iVar2 + 0x24);
        fVar13 = *(float *)(iVar2 + 0x28);
        fVar17 = *(float *)(iVar15 + 0x20) - fVar11;
        fVar18 = *(float *)(iVar15 + 0x24) - fVar12;
        fVar19 = *(float *)(iVar15 + 0x28) - fVar13;
        iVar15 = local_8;
        if ((0.0 < (fVar18 * (fVar8 - fVar11) - fVar17 * (fVar9 - fVar12)) * fVar7 +
                   (fVar17 * (fVar10 - fVar13) - fVar19 * (fVar8 - fVar11)) * fVar6 +
                   (fVar19 * (fVar9 - fVar12) - fVar18 * (fVar10 - fVar13)) * fVar5) &&
           (iVar2 = *(int *)(iVar14 + 8 + local_14 * 4), fVar17 = *(float *)(iVar2 + 0x20) - fVar8,
           fVar18 = *(float *)(iVar2 + 0x24) - fVar9, fVar19 = *(float *)(iVar2 + 0x28) - fVar10,
           0.0 < (fVar18 * (fVar11 - fVar8) - fVar17 * (fVar12 - fVar9)) * fVar7 +
                 (fVar17 * (fVar13 - fVar10) - fVar19 * (fVar11 - fVar8)) * fVar6 +
                 (fVar19 * (fVar12 - fVar9) - fVar18 * (fVar13 - fVar10)) * fVar5)) {
          *(int *)(local_c + 0x30) = local_8;
          *(int *)(iVar14 + 0x30) = local_8;
          iVar15 = local_8 + 1;
          local_8 = iVar15;
        }
      }
    }
    bVar16 = iVar14 != 0;
    iVar14 = 0;
    if (bVar16) {
      FUN_010bc1e0();
      iVar14 = local_18;
    }
    uVar3 = (uint)&local_18 & -(uint)(iVar14 != 0);
  }
  piVar1 = *(int **)(local_10 + 0x1c);
  uVar3 = (uint)&param_2 & -(uint)(piVar1 != (int *)0x0);
  while (uVar3 != 0) {
    if (piVar1[0xc] == -1) {
      piVar1[0xc] = iVar15;
      iVar15 = iVar15 + 1;
    }
    piVar1 = (int *)*piVar1;
    uVar3 = (uint)&param_2 & -(uint)(piVar1 != (int *)0x0);
  }
  return iVar15;
}

// 0109EA90  FUN_0109ea90  size=94  [run]
void __fastcall FUN_0109ea90(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  undefined4 local_8;
  
  FUN_010bdc00(*(undefined4 *)(param_1 + 0x1c),0);
  uVar1 = (uint)&local_c & -(uint)(local_c != 0);
  iVar2 = local_c;
  while (uVar1 != 0) {
    FUN_0109d420(iVar2,local_8);
    bVar3 = iVar2 != 0;
    iVar2 = 0;
    if (bVar3) {
      FUN_010bc1e0();
      iVar2 = local_c;
    }
    uVar1 = (uint)&local_c & -(uint)(iVar2 != 0);
  }
  return;
}

// 0109EAF0  FUN_0109eaf0  size=460  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0109eaf0(int param_1,int param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined1 local_234 [528];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  local_1c = -1;
  local_18 = 0;
  if (0 < param_2) {
    local_c = 0;
    local_20 = param_1;
    do {
      local_8 = 3.40282e+38;
      if ((_DAT_0209a9ac & 1) == 0) {
        _DAT_0209a9ac = _DAT_0209a9ac | 1;
        DAT_0209a9a4 = 0;
        DAT_0209a9a8 = 0;
      }
      iVar5 = DAT_0209a9a4;
      local_24 = DAT_0209a9a8;
      iVar3 = local_c / param_2;
      if (iVar3 != local_1c) {
        local_1c = iVar3;
        hkErrStream::hkErrStream(local_234,0x200);
        puVar8 = &DAT_017d5ff4;
        FUN_01018d00("Progress: ");
        FUN_01018dc0(iVar3);
        FUN_01018d00(puVar8);
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (0,0xffffffff,local_234,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0xc47);
        hkBaseObject::hkBaseObject_38();
      }
      FUN_010bdc00(*(undefined4 *)(local_20 + 0x1c),0);
      uVar1 = (uint)&local_14 & -(uint)(local_14 != 0);
      iVar3 = local_14;
      iVar4 = local_10;
      fVar7 = local_8;
      while (uVar1 != 0) {
        if (((*(uint *)(iVar3 + 0x14 + iVar4 * 4) & 0xfffffffc) != 0) &&
           (fVar6 = *(float *)(*(int *)(iVar3 + 8 + (9 >> ((char)iVar4 * '\x02' & 0x1fU) & 3U) * 4)
                              + 0x40) + *(float *)(*(int *)(iVar3 + 8 + iVar4 * 4) + 0x40),
           fVar6 < fVar7)) {
          iVar5 = iVar3;
          fVar7 = fVar6;
          local_24 = iVar4;
          local_8 = fVar6;
        }
        if (iVar3 != 0) {
          FUN_010bc1e0();
          iVar3 = local_14;
          iVar4 = local_10;
          fVar7 = local_8;
        }
        uVar1 = (uint)&local_14 & -(uint)(iVar3 != 0);
      }
      if (iVar5 == 0) {
        return;
      }
      if (param_3 <= fVar7) {
        return;
      }
      iVar3 = *(int *)(iVar5 + 8 + local_24 * 4);
      iVar4 = *(int *)(iVar5 + 8 + (9 >> ((char)local_24 * '\x02' & 0x1fU) & 3U) * 4);
      *(float *)(iVar4 + 0x40) = fVar7;
      *(float *)(iVar3 + 0x40) = fVar7;
      fVar7 = *(float *)(iVar3 + 0x24);
      fVar6 = *(float *)(iVar3 + 0x28);
      fVar2 = *(float *)(iVar3 + 0x2c);
      *(float *)(iVar4 + 0x20) =
           (*(float *)(iVar3 + 0x20) - *(float *)(iVar4 + 0x20)) * 0.5 + *(float *)(iVar4 + 0x20);
      *(float *)(iVar4 + 0x24) = (fVar7 - *(float *)(iVar4 + 0x24)) * 0.5 + *(float *)(iVar4 + 0x24)
      ;
      *(float *)(iVar4 + 0x28) = (fVar6 - *(float *)(iVar4 + 0x28)) * 0.5 + *(float *)(iVar4 + 0x28)
      ;
      *(float *)(iVar4 + 0x2c) = (fVar2 - *(float *)(iVar4 + 0x2c)) * 0.5 + *(float *)(iVar4 + 0x2c)
      ;
      FUN_0109b1f0(iVar5,local_24,0);
      local_c = local_c + 100;
      local_18 = local_18 + 1;
    } while (local_18 < param_2);
  }
  return;
}

// 0109F0B0  hkgpMesh::hkgpMesh  size=162  [run]
undefined4 * __fastcall hkgpMesh::hkgpMesh(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0x14] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[10] = &PTR_vftable_01b1cd08;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x2edbe6ff;
  param_1[0x1e] = 0x2ebe70e5;
  vf0C();
  return param_1;
}

// 0109F160  FUN_0109f160  size=1169  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0109f160(int param_1,undefined4 param_2,float *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  int *piVar9;
  float10 fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 local_360 [704];
  undefined1 local_a0 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int *local_50;
  int local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(char *)(param_1 + 0x71) == '\0') {
    hkErrStream::hkErrStream(local_360,0x200);
    FUN_01018d00("assignVertexNormals not called");
    iVar6 = (**(code **)(*DAT_01f8fc58 + 0xc))
                      (3,0x672b48d7,local_360,"GeometryProcessing\\Mesh\\hkgpMesh.cpp",0x360);
    if (iVar6 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
  }
  local_20 = 3.40282e+38;
  fStack_1c = 3.40282e+38;
  fStack_18 = 3.40282e+38;
  fStack_14 = 3.40282e+38;
  local_50 = (int *)0x0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  if (param_4 == '\0') {
    piVar9 = *(int **)(param_1 + 0x1c);
    if (piVar9 == (int *)0x0) goto LAB_0109f53e;
    do {
      fVar10 = (float10)FUN_0108fb90(param_2,piVar9[2] + 0x20,piVar9[3] + 0x20,piVar9[4] + 0x20,
                                     &local_90,&local_80);
      local_24 = (float)fVar10;
      if (local_24 < local_20) {
        local_70 = local_90;
        fStack_6c = fStack_8c;
        fStack_68 = fStack_88;
        fStack_64 = fStack_84;
        local_60 = local_80;
        fStack_5c = fStack_7c;
        fStack_58 = fStack_78;
        fStack_54 = fStack_74;
        local_50 = piVar9;
        local_20 = local_24;
        fStack_1c = local_24;
        fStack_18 = local_24;
        fStack_14 = local_24;
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  else {
    pfVar7 = (float *)FUN_010c1490(local_a0,param_1 + 0x2c,param_2,&local_70,&local_20);
    local_20 = *pfVar7;
    fStack_1c = pfVar7[1];
    fStack_18 = pfVar7[2];
    fStack_14 = pfVar7[3];
  }
  if (local_50 == (int *)0x0) {
LAB_0109f53e:
    pfVar7 = (float *)FUN_010ace80();
    fVar8 = pfVar7[1];
    fVar15 = pfVar7[2];
    fVar16 = pfVar7[3];
    *param_3 = *pfVar7;
    param_3[1] = fVar8;
    param_3[2] = fVar15;
    param_3[3] = fVar16;
    fVar8 = pfVar7[5];
    fVar15 = pfVar7[6];
    fVar16 = pfVar7[7];
    param_3[4] = pfVar7[4];
    param_3[5] = fVar8;
    param_3[6] = fVar15;
    param_3[7] = fVar16;
    fVar8 = pfVar7[9];
    fVar15 = pfVar7[10];
    fVar16 = pfVar7[0xb];
    param_3[8] = pfVar7[8];
    param_3[9] = fVar8;
    param_3[10] = fVar15;
    param_3[0xb] = fVar16;
    fVar8 = pfVar7[0xd];
    fVar15 = pfVar7[0xe];
    fVar16 = pfVar7[0xf];
    param_3[0xc] = pfVar7[0xc];
    param_3[0xd] = fVar8;
    param_3[0xe] = fVar15;
    param_3[0xf] = fVar16;
    param_3[0x10] = pfVar7[0x10];
    *(undefined1 *)(param_3 + 0x11) = *(undefined1 *)(pfVar7 + 0x11);
    *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(pfVar7 + 0x12);
    param_3[0x14] = pfVar7[0x14];
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 0.0;
    param_3[0x10] = 3.40282e+38;
    *(undefined1 *)(param_3 + 0x11) = 0;
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0.0;
    }
    fVar8 = DAT_0209a9a8;
    *(ulonglong *)(param_3 + 0x12) = (ulonglong)DAT_0209a9a4 << 0x20;
    param_3[0x14] = fVar8;
    return;
  }
  pfVar7 = (float *)FUN_010ace80();
  fVar8 = pfVar7[1];
  fVar15 = pfVar7[2];
  fVar16 = pfVar7[3];
  *param_3 = *pfVar7;
  param_3[1] = fVar8;
  param_3[2] = fVar15;
  param_3[3] = fVar16;
  fVar8 = pfVar7[5];
  fVar15 = pfVar7[6];
  fVar16 = pfVar7[7];
  param_3[4] = pfVar7[4];
  param_3[5] = fVar8;
  param_3[6] = fVar15;
  param_3[7] = fVar16;
  fVar8 = pfVar7[9];
  fVar15 = pfVar7[10];
  fVar16 = pfVar7[0xb];
  param_3[8] = pfVar7[8];
  param_3[9] = fVar8;
  param_3[10] = fVar15;
  param_3[0xb] = fVar16;
  fVar8 = pfVar7[0xd];
  fVar15 = pfVar7[0xe];
  fVar16 = pfVar7[0xf];
  param_3[0xc] = pfVar7[0xc];
  param_3[0xd] = fVar8;
  param_3[0xe] = fVar15;
  param_3[0xf] = fVar16;
  param_3[0x10] = pfVar7[0x10];
  *(undefined1 *)(param_3 + 0x11) = *(undefined1 *)(pfVar7 + 0x11);
  *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(pfVar7 + 0x12);
  fVar8 = pfVar7[0x14];
  param_3[8] = local_60;
  param_3[9] = fStack_5c;
  param_3[10] = fStack_58;
  param_3[0xb] = fStack_54;
  param_3[0x10] = local_20;
  fVar15 = local_70 * local_70;
  fVar16 = fStack_6c * fStack_6c;
  fVar17 = fStack_68 * fStack_68;
  fVar18 = fVar16 + fVar15 + fVar17;
  fVar19 = fVar16 + fVar15 + fVar17;
  fVar20 = fVar16 + fVar15 + fVar17;
  fVar17 = fVar16 + fVar15 + fVar17;
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  uVar11 = -(uint)(0.0 - fVar18 < 0.0);
  uVar12 = -(uint)(0.0 - fVar19 < 0.0);
  uVar13 = -(uint)(0.0 - fVar20 < 0.0);
  uVar14 = -(uint)(0.0 - fVar17 < 0.0);
  auVar22._4_4_ = fVar19;
  auVar22._0_4_ = fVar18;
  auVar22._8_4_ = fVar20;
  auVar22._12_4_ = fVar17;
  auVar22 = rsqrtps(auVar21,auVar22);
  fVar15 = auVar22._0_4_;
  fVar16 = auVar22._4_4_;
  fVar23 = auVar22._8_4_;
  fVar24 = auVar22._12_4_;
  *param_3 = (float)((uint)((float)(~-(uint)(fVar18 <= 0.0) &
                                   (uint)((3.0 - fVar15 * fVar18 * fVar15) * fVar15 * 0.5)) *
                           local_70) & uVar11 | ~uVar11 & (uint)local_70);
  param_3[1] = (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                     (uint)((3.0 - fVar16 * fVar19 * fVar16) * fVar16 * 0.5)) *
                             fStack_6c) & uVar12 | ~uVar12 & (uint)fStack_6c);
  param_3[2] = (float)((uint)((float)(~-(uint)(fVar20 <= 0.0) &
                                     (uint)((3.0 - fVar23 * fVar20 * fVar23) * fVar23 * 0.5)) *
                             fStack_68) & uVar13 | ~uVar13 & (uint)fStack_68);
  param_3[3] = (float)((uint)((float)(~-(uint)(fVar17 <= 0.0) &
                                     (uint)((3.0 - fVar24 * fVar17 * fVar24) * fVar24 * 0.5)) *
                             fStack_64) & uVar14 | ~uVar14 & (uint)fStack_64);
  param_3[0x14] = fVar8;
  local_24 = (float)(uint)(local_60 != 0.0);
  local_28 = 0;
  if (fStack_5c != 0.0) {
    local_28 = 2;
  }
  if (fStack_58 == 0.0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 4;
  }
  iVar1 = local_50[3];
  iVar2 = local_50[2];
  fVar8 = param_3[8];
  fVar15 = *(float *)(iVar2 + 0x24);
  fVar16 = *(float *)(iVar2 + 0x28);
  fVar17 = *(float *)(iVar2 + 0x2c);
  iVar3 = local_50[4];
  param_3[0xc] = fVar8 * *(float *)(iVar2 + 0x20);
  param_3[0xd] = fVar8 * fVar15;
  param_3[0xe] = fVar8 * fVar16;
  param_3[0xf] = fVar8 * fVar17;
  fVar8 = param_3[9];
  iVar4 = local_50[3];
  fVar15 = *(float *)(iVar4 + 0x24);
  fVar16 = *(float *)(iVar4 + 0x28);
  fVar17 = *(float *)(iVar4 + 0x2c);
  param_3[0xc] = fVar8 * *(float *)(iVar4 + 0x20) + param_3[0xc];
  param_3[0xd] = fVar8 * fVar15 + param_3[0xd];
  param_3[0xe] = fVar8 * fVar16 + param_3[0xe];
  param_3[0xf] = fVar8 * fVar17 + param_3[0xf];
  iVar4 = local_50[4];
  fVar8 = param_3[10];
  fVar15 = *(float *)(iVar4 + 0x24);
  fVar16 = *(float *)(iVar4 + 0x28);
  fVar17 = *(float *)(iVar4 + 0x2c);
  param_3[0xc] = fVar8 * *(float *)(iVar4 + 0x20) + param_3[0xc];
  param_3[0xd] = fVar8 * fVar15 + param_3[0xd];
  param_3[0xe] = fVar8 * fVar16 + param_3[0xe];
  param_3[0xf] = fVar8 * fVar17 + param_3[0xf];
  *(undefined1 *)(param_3 + 0x11) = 0;
  fVar8 = (float)local_50[9];
  fVar15 = (float)local_50[10];
  fVar16 = (float)local_50[0xb];
  param_3[4] = (float)local_50[8];
  param_3[5] = fVar8;
  param_3[6] = fVar15;
  param_3[7] = fVar16;
  *(ulonglong *)(param_3 + 0x12) = CONCAT44(local_50,1);
  param_3[0x14] = 0.0;
  switch(iVar6 + local_28 + -1 + (int)local_24) {
  case 0:
    fVar8 = *(float *)(iVar2 + 0x34);
    fVar15 = *(float *)(iVar2 + 0x38);
    fVar16 = *(float *)(iVar2 + 0x3c);
    param_3[4] = *(float *)(iVar2 + 0x30);
    param_3[5] = fVar8;
    param_3[6] = fVar15;
    param_3[7] = fVar16;
    fVar8 = 0.0;
    fStack_1c = 4.2039e-45;
    break;
  case 1:
    fVar8 = *(float *)(iVar1 + 0x34);
    fVar15 = *(float *)(iVar1 + 0x38);
    fVar16 = *(float *)(iVar1 + 0x3c);
    param_3[4] = *(float *)(iVar1 + 0x30);
    param_3[5] = fVar8;
    param_3[6] = fVar15;
    param_3[7] = fVar16;
    fVar8 = 1.4013e-45;
    fStack_1c = 4.2039e-45;
    break;
  case 2:
    if ((local_50[5] & 0xfffffffcU) != 0) {
      uVar11 = local_50[5] & 0xfffffffc;
      fVar8 = *(float *)(uVar11 + 0x24);
      fVar15 = *(float *)(uVar11 + 0x28);
      fVar16 = *(float *)(uVar11 + 0x2c);
      param_3[4] = *(float *)(uVar11 + 0x20) + param_3[4];
      param_3[5] = fVar8 + param_3[5];
      param_3[6] = fVar15 + param_3[6];
      param_3[7] = fVar16 + param_3[7];
    }
    fVar8 = 0.0;
    goto LAB_0109f4e3;
  case 3:
    fVar8 = *(float *)(iVar3 + 0x34);
    fVar15 = *(float *)(iVar3 + 0x38);
    fVar16 = *(float *)(iVar3 + 0x3c);
    param_3[4] = *(float *)(iVar3 + 0x30);
    param_3[5] = fVar8;
    param_3[6] = fVar15;
    param_3[7] = fVar16;
    fVar8 = 2.8026e-45;
    fStack_1c = 4.2039e-45;
    break;
  case 4:
    if ((local_50[7] & 0xfffffffcU) != 0) {
      uVar11 = local_50[7] & 0xfffffffc;
      fVar8 = *(float *)(uVar11 + 0x24);
      fVar15 = *(float *)(uVar11 + 0x28);
      fVar16 = *(float *)(uVar11 + 0x2c);
      param_3[4] = *(float *)(uVar11 + 0x20) + param_3[4];
      param_3[5] = fVar8 + param_3[5];
      param_3[6] = fVar15 + param_3[6];
      param_3[7] = fVar16 + param_3[7];
    }
    fVar8 = 2.8026e-45;
    fStack_1c = 2.8026e-45;
    break;
  case 5:
    if ((local_50[6] & 0xfffffffcU) != 0) {
      uVar11 = local_50[6] & 0xfffffffc;
      fVar8 = *(float *)(uVar11 + 0x24);
      fVar15 = *(float *)(uVar11 + 0x28);
      fVar16 = *(float *)(uVar11 + 0x2c);
      param_3[4] = *(float *)(uVar11 + 0x20) + param_3[4];
      param_3[5] = fVar8 + param_3[5];
      param_3[6] = fVar15 + param_3[6];
      param_3[7] = fVar16 + param_3[7];
    }
    fVar8 = 1.4013e-45;
LAB_0109f4e3:
    fStack_1c = 2.8026e-45;
    break;
  default:
    goto switchD_0109f433_default;
  }
  *(ulonglong *)(param_3 + 0x12) = CONCAT44(local_50,fStack_1c);
  param_3[0x14] = fVar8;
switchD_0109f433_default:
  if (0.0 <= param_3[2] * param_3[6] + param_3[1] * param_3[5] + *param_3 * param_3[4]) {
    *(undefined1 *)(param_3 + 0x11) = 0;
    return;
  }
  *(undefined1 *)(param_3 + 0x11) = 1;
  return;
}

// 0109F610  FUN_0109f610  size=112  [run]
float10 FUN_0109f610(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_30;
  char local_2c;
  
  FUN_010ace80();
  FUN_0109f160(param_1,&local_70,1);
  if (param_3 != 0) {
    *(bool *)param_3 = local_2c != '\0';
    *param_2 = local_70;
    param_2[1] = uStack_6c;
    param_2[2] = uStack_68;
    param_2[3] = uStack_64;
    return (float10)local_30;
  }
  *param_2 = local_70;
  param_2[1] = uStack_6c;
  param_2[2] = uStack_68;
  param_2[3] = uStack_64;
  return (float10)local_30;
}

// 0109F680  FUN_0109f680  size=902  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0109f680(int param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int local_14;
  undefined4 *local_c;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x7c);
  *(undefined2 *)(iVar3 + 4) = 0x7c;
  iVar3 = hkgpMesh::hkgpMesh();
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar4 = *(int *)(iVar3 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xe00) == 0)) {
      iVar4 = FUN_010abc10();
    }
    if (iVar4 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = *(undefined4 **)(iVar4 + 0xe00);
      *(undefined4 *)(iVar4 + 0xe00) = *puVar9;
      puVar9[0x18] = iVar4;
      *(int *)(iVar4 + 0xe0c) = *(int *)(iVar4 + 0xe0c) + 1;
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar1 + 6);
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
      *(undefined8 *)(puVar9 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
      *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      *(undefined8 *)(puVar9 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
      puVar9[0x14] = puVar1[0x14];
      puVar9[0x15] = puVar1[0x15];
      puVar9[1] = 0;
      *puVar9 = *(undefined4 *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) != 0) {
        *(undefined4 **)(*(int *)(iVar3 + 0xc) + 4) = puVar9;
      }
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      *(undefined4 **)(iVar3 + 0xc) = puVar9;
    }
    FUN_010100a0(&PTR_vftable_018e9b94,puVar1,puVar9);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar4 = *(int *)(iVar3 + 0x18);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc00) == 0)) {
      iVar4 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
      if (iVar4 != 0) {
        iVar8 = 0x1f;
        piVar11 = (int *)(iVar4 + 0xba0);
        piVar12 = (int *)0;
        do {
          piVar10 = piVar11;
          *piVar10 = (int)piVar12;
          iVar8 = iVar8 + -1;
          piVar11 = piVar10 + -0x18;
          piVar12 = piVar10;
        } while (-1 < iVar8);
        *(int **)(iVar4 + 0xc00) = piVar10;
        *(undefined4 *)(iVar4 + 0xc0c) = 0;
        *(undefined4 *)(iVar4 + 0xc04) = 0;
        *(undefined4 *)(iVar4 + 0xc08) = *(undefined4 *)(iVar3 + 0x18);
        *(int *)(iVar3 + 0x18) = iVar4;
        if (*(int *)(iVar4 + 0xc08) != 0) {
          *(int *)(*(int *)(iVar4 + 0xc08) + 0xc04) = iVar4;
        }
      }
    }
    if (iVar4 == 0) {
      local_c = (undefined4 *)0x0;
    }
    else {
      local_c = *(undefined4 **)(iVar4 + 0xc00);
      *(undefined4 *)(iVar4 + 0xc00) = *local_c;
      local_c[0x14] = iVar4;
      *(int *)(iVar4 + 0xc0c) = *(int *)(iVar4 + 0xc0c) + 1;
      *(undefined8 *)(local_c + 2) = *(undefined8 *)(puVar1 + 2);
      local_c[4] = puVar1[4];
      *(undefined8 *)(local_c + 5) = *(undefined8 *)(puVar1 + 5);
      local_c[7] = puVar1[7];
      *(undefined8 *)(local_c + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(local_c + 10) = *(undefined8 *)(puVar1 + 10);
      local_c[0xc] = puVar1[0xc];
      local_c[0xd] = puVar1[0xd];
      local_c[0xe] = puVar1[0xe];
      local_c[0xf] = puVar1[0xf];
      local_c[0x10] = puVar1[0x10];
      local_c[1] = 0;
      *local_c = *(undefined4 *)(iVar3 + 0x1c);
      if (*(int *)(iVar3 + 0x1c) != 0) {
        *(undefined4 **)(*(int *)(iVar3 + 0x1c) + 4) = local_c;
      }
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      *(undefined4 **)(iVar3 + 0x1c) = local_c;
    }
    iVar4 = (int)puVar1 - (int)local_c;
    puVar9 = local_c + 2;
    local_14 = 3;
    do {
      uVar5 = FUN_01010160(*(undefined4 *)(iVar4 + (int)puVar9),0);
      *puVar9 = uVar5;
      puVar9 = puVar9 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    piVar11 = local_c + 5;
    local_14 = 3;
    do {
      uVar6 = *(uint *)((int)piVar11 + iVar4);
      if ((uVar6 & 0xfffffffc) == 0) {
        if ((_DAT_0209a9ac & 1) == 0) {
          _DAT_0209a9ac = _DAT_0209a9ac | 1;
          DAT_0209a9a4 = 0;
          DAT_0209a9a8 = 0;
        }
        *piVar11 = DAT_0209a9a8 + DAT_0209a9a4;
        if (DAT_0209a9a4 != 0) {
          *(undefined4 **)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = local_c;
        }
      }
      else {
        uVar6 = FUN_01010160((uVar6 & 3) + (uVar6 & 0xfffffffc),0);
        uVar7 = uVar6 & 0xfffffffc;
        if (uVar7 == 0) {
          FUN_010100a0(&PTR_vftable_018e9b94,(int)local_c + iVar4,local_c);
        }
        else {
          *piVar11 = (uVar6 & 3) + uVar7;
          *(undefined4 **)(uVar7 + 0x14 + (uVar6 & 3) * 4) = local_c;
          FUN_01010c10((int)local_c + iVar4);
        }
      }
      piVar11 = piVar11 + 1;
      local_c = (undefined4 *)((int)local_c + 1);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return iVar3;
}

// 0109FCC0  FUN_0109fcc0  size=579  [run]
uint FUN_0109fcc0(float param_1,float *param_2,float *param_3,int param_4,char param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined3 uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar25;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float local_90;
  char local_8c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  local_60 = param_1 * 0.99;
  local_30 = param_1 * 4.0;
  local_70 = local_60 * local_60;
  fStack_6c = local_60 * local_60;
  fStack_68 = local_60 * local_60;
  fStack_64 = local_60 * local_60;
  fStack_5c = local_60;
  fStack_58 = local_60;
  fStack_54 = local_60;
  fStack_2c = local_30;
  fStack_28 = local_30;
  fStack_24 = local_30;
  FUN_010ace80();
  iVar9 = 0;
  bVar4 = false;
  uVar6 = extraout_var;
  if (0 < param_4) {
    do {
      uVar25 = FUN_0109f160(param_3,&local_d0,CONCAT31(uVar6,1));
      uVar6 = (undefined3)((uint)extraout_ECX >> 8);
      uVar5 = (uint)uVar25 & 0xffffff00;
      bVar4 = param_5 != '\0' && local_8c != '\0';
      if (local_70 <= local_90 + 1.1920929e-07) break;
      if ((iVar9 != 0) && (bVar4)) {
        return uVar5;
      }
      if ((local_90 <= 1.1920929e-07) ||
         (pfVar7 = (float *)((ulonglong)uVar25 >> 0x20), fVar14 = local_d0, fVar17 = fStack_cc,
         fVar21 = fStack_c8,
         fStack_c8 * fStack_c8 + fStack_cc * fStack_cc + local_d0 * local_d0 <= 1.1920929e-07)) {
        fVar14 = *param_2;
        fVar17 = param_2[1];
        fVar21 = param_2[2];
        pfVar7 = param_2;
      }
      fVar13 = fVar14 * fVar14;
      fVar15 = fVar17 * fVar17;
      fVar16 = fVar21 * fVar21;
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      fVar18 = fVar15 + fVar13 + fVar16;
      fVar19 = fVar15 + fVar13 + fVar16;
      fVar20 = fVar15 + fVar13 + fVar16;
      fVar16 = fVar15 + fVar13 + fVar16;
      uVar10 = -(uint)(0.0 - fVar18 < 0.0);
      uVar11 = -(uint)(0.0 - fVar19 < 0.0);
      uVar12 = -(uint)(0.0 - fVar20 < 0.0);
      auVar1._4_4_ = fVar19;
      auVar1._0_4_ = fVar18;
      auVar1._8_4_ = fVar20;
      auVar1._12_4_ = fVar16;
      auVar23 = rsqrtps(auVar22,auVar1);
      fVar13 = auVar23._0_4_;
      fVar15 = auVar23._4_4_;
      fVar24 = auVar23._8_4_;
      auVar23._4_4_ = uVar11;
      auVar23._0_4_ = uVar10;
      auVar23._8_4_ = uVar12;
      auVar23._12_4_ = -(uint)(0.0 - fVar16 < 0.0);
      iVar8 = movmskps(pfVar7,auVar23);
      if (iVar8 == 0) {
        return uVar5;
      }
      fVar16 = param_2[1];
      fVar2 = param_2[2];
      fVar3 = param_2[3];
      fVar17 = (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                     (uint)((3.0 - fVar15 * fVar19 * fVar15) * fVar15 * 0.5)) *
                             fVar17) & uVar11 | ~uVar11 & (uint)fVar17) * fVar16 +
               (float)((uint)((float)(~-(uint)(fVar18 <= 0.0) &
                                     (uint)((3.0 - fVar13 * fVar18 * fVar13) * fVar13 * 0.5)) *
                             fVar14) & uVar10 | ~uVar10 & (uint)fVar14) * *param_2 +
               (float)((uint)((float)(~-(uint)(fVar20 <= 0.0) &
                                     (uint)((3.0 - fVar24 * fVar20 * fVar24) * fVar24 * 0.5)) *
                             fVar21) & uVar12 | ~uVar12 & (uint)fVar21) * fVar2;
      fVar14 = (local_40 - SQRT(local_90) * (float)(int)((uint)(local_8c == '\0') * 2 + -1)) /
               fVar17;
      if (fVar17 < 1.1920929e-07) break;
      local_50 = ABS(fVar14);
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if (local_30 < local_50) break;
      iVar9 = iVar9 + 1;
      *param_3 = fVar14 * *param_2 + *param_3;
      param_3[1] = fVar14 * fVar16 + param_3[1];
      param_3[2] = fVar14 * fVar2 + param_3[2];
      param_3[3] = fVar14 * fVar3 + param_3[3];
    } while (iVar9 < param_4);
  }
  local_90 = SQRT(local_90);
  param_3[3] = local_90;
  if (((!bVar4) && (local_60 <= local_90)) && (local_90 < local_30)) {
    return 1;
  }
  return 0;
}

// 010A0BD0  FUN_010a0bd0  size=353  [run]
undefined1 __thiscall FUN_010a0bd0(int param_1,int *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [40];
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  int local_24 [4];
  int local_14;
  
  local_2c = 0;
  local_28 = 0;
  local_34 = *(undefined4 *)(param_1 + 0x28);
  local_27 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0xc))(local_60);
  local_80 = *puVar3;
  uStack_7c = puVar3[1];
  uStack_78 = puVar3[2];
  uStack_74 = puVar3[3];
  local_70 = puVar3[4];
  uStack_6c = puVar3[5];
  uStack_68 = puVar3[6];
  uStack_64 = puVar3[7];
  local_90 = &local_38;
  local_8c = 1;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar4 + 0xc);
  if ((*(int *)((int)pvVar4 + 8) < 0x100) || (*(uint *)((int)pvVar4 + 0x10) < local_24[3] + 0x100U))
  {
    local_24[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_24[3] + 0x100U;
  }
  local_24[2] = -0x7fffffc0;
  local_24[0] = local_24[3];
  hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape(param_1 + 0x2c,local_24,&local_90);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar5) || (uVar5 + iVar1 != *(int *)((int)pvVar4 + 0xc)))
     || (*(int *)((int)pvVar4 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar5);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],local_24[2] * 4);
  }
  return local_28;
}

// 010A1140  FUN_010a1140  size=2963  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_010a1140(int param_1,int *param_2,float *param_3,undefined4 param_4,char param_5,char param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 extraout_EDX;
  int iVar16;
  undefined4 *puVar17;
  float fVar18;
  uint *puVar19;
  int *piVar20;
  float fVar21;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_98;
  float *local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int local_70;
  int local_6c;
  int local_68;
  float *local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  float local_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  
  local_58 = -0x80000000;
  local_34 = 0x80000000;
  uVar10 = param_2[1];
  local_60 = 0;
  local_5c = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  uVar9 = 0;
  local_18 = param_1;
  if (0 < (int)uVar10) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_60,((int)uVar10 < 0) - 1 & uVar10,4);
    uVar9 = local_5c;
  }
  iVar14 = uVar10 - uVar9;
  puVar17 = (undefined4 *)(local_60 + uVar9 * 4);
  if (0 < iVar14) {
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
    }
  }
  iVar14 = local_38 + -1;
  local_5c = uVar10;
  if (-1 < iVar14) {
    puVar19 = (uint *)(local_3c + 8 + iVar14 * 0xc);
    do {
      uVar10 = *puVar19;
      puVar19[-1] = 0;
      if (-1 < (int)uVar10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar19[-2],((uVar10 & 0x3fffffff) + uVar10 * 4) * 4);
      }
      puVar19[-2] = 0;
      *puVar19 = 0x80000000;
      iVar14 = iVar14 + -1;
      puVar19 = puVar19 + -3;
    } while (-1 < iVar14);
  }
  local_38 = 0;
  local_30 = 0;
  if ((local_34 & 0x3fffffff) < 0x2011) {
    uVar10 = (local_34 & 0x3fffffff) * 2;
    if (uVar10 < 0x2012) {
      uVar10 = 0x2011;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_3c,uVar10,0xc);
  }
  iVar14 = local_38 + -0x2012;
  if (-1 < iVar14) {
    puVar19 = (uint *)(local_3c + 0x180d4 + iVar14 * 0xc);
    do {
      uVar10 = *puVar19;
      puVar19[-1] = 0;
      if (-1 < (int)uVar10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar19[-2],((uVar10 & 0x3fffffff) + uVar10 * 4) * 4);
      }
      puVar19[-2] = 0;
      *puVar19 = 0x80000000;
      iVar14 = iVar14 + -1;
      puVar19 = puVar19 + -3;
    } while (-1 < iVar14);
  }
  iVar14 = 0x2011 - local_38;
  puVar17 = (undefined4 *)(local_3c + local_38 * 0xc);
  if (0 < iVar14) {
    do {
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0x80000000;
      }
      puVar17 = puVar17 + 3;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  local_38 = 0x2011;
  iVar14 = 0;
  do {
    *(undefined4 *)(iVar14 + 4 + local_3c) = 0;
    iVar14 = iVar14 + 0xc;
  } while (iVar14 < 0x180cc);
  local_50 = 0.0;
  uStack_4c = 0;
  iStack_44 = 0;
  uStack_48 = 0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b94,&local_50,0x2011,0xc);
  iVar14 = uStack_4c + -0x2012;
  if (-1 < iVar14) {
    piVar13 = (int *)((int)local_50 + 0x180d4 + iVar14 * 0xc);
    do {
      piVar13[-1] = 0;
      if (-1 < *piVar13) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar13[-2],*piVar13 * 8);
      }
      piVar13[-2] = 0;
      *piVar13 = -0x80000000;
      iVar14 = iVar14 + -1;
      piVar13 = piVar13 + -3;
    } while (-1 < iVar14);
  }
  iVar14 = 0x2011 - uStack_4c;
  puVar17 = (undefined4 *)((int)local_50 + uStack_4c * 0xc);
  if (0 < iVar14) {
    do {
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0x80000000;
      }
      puVar17 = puVar17 + 3;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  iVar14 = 0;
  uStack_4c = 0x2011;
  do {
    *(undefined4 *)(iVar14 + 4 + (int)local_50) = 0;
    iVar14 = iVar14 + 0xc;
  } while (iVar14 < 0x180cc);
  local_54 = param_2[1];
  local_1c = 0;
  if (0 < local_54) {
    local_14 = (undefined4 *)0x0;
    do {
      iVar16 = local_18;
      pfVar11 = (float *)(*param_2 + (int)local_14);
      fVar18 = *pfVar11;
      fVar21 = pfVar11[1];
      fVar5 = pfVar11[2];
      local_90 = fVar18 * *param_3 + param_3[0xc] + fVar21 * param_3[4] + fVar5 * param_3[8];
      fStack_8c = fVar18 * param_3[1] + param_3[0xd] + fVar21 * param_3[5] + fVar5 * param_3[9];
      fStack_88 = fVar18 * param_3[2] + param_3[0xe] + fVar21 * param_3[6] + fVar5 * param_3[10];
      fStack_84 = fVar18 * param_3[3] + param_3[0xf] + fVar21 * param_3[7] + fVar5 * param_3[0xb];
      uVar10 = (uint)((int)fStack_88 * 0x728eebf3 ^ (int)fStack_8c * 0x4037bad5 ^
                     (int)local_90 * 0x402e2f4b) % uStack_4c;
      iVar14 = *(int *)((int)local_50 + 4 + uVar10 * 0xc);
      iVar12 = 0;
      local_28 = local_90;
      local_24 = fStack_8c;
      local_20 = fStack_88;
      if (0 < iVar14) {
        piVar13 = *(int **)((int)local_50 + uVar10 * 0xc);
        piVar20 = piVar13;
        do {
          pfVar11 = (float *)*piVar20;
          auVar3._4_4_ = -(uint)(pfVar11[1] == fStack_8c);
          auVar3._0_4_ = -(uint)(*pfVar11 == local_90);
          auVar3._8_4_ = -(uint)(pfVar11[2] == fStack_88);
          auVar3._12_4_ = -(uint)(pfVar11[3] == fStack_84);
          uVar15 = movmskps(pfVar11,auVar3);
          if (((byte)uVar15 & 7) == 7) {
            if ((iVar12 != -1) && (piVar13 = piVar13 + iVar12 * 2, piVar13 != (int *)0x0)) {
              *(int *)(local_60 + local_1c * 4) = piVar13[1];
              goto LAB_010a15c2;
            }
            break;
          }
          iVar12 = iVar12 + 1;
          piVar20 = piVar20 + 2;
        } while (iVar12 < iVar14);
      }
      iVar14 = *(int *)(local_18 + 8);
      if ((iVar14 == 0) || (*(int *)(iVar14 + 0xe00) == 0)) {
        iVar14 = FUN_010abc10();
      }
      if (iVar14 == 0) {
        local_2c = (undefined4 *)0x0;
      }
      else {
        local_2c = *(undefined4 **)(iVar14 + 0xe00);
        *(undefined4 *)(iVar14 + 0xe00) = *local_2c;
        local_2c[0x18] = iVar14;
        *(int *)(iVar14 + 0xe0c) = *(int *)(iVar14 + 0xe0c) + 1;
        local_2c[0x14] = 0xffffffff;
        local_2c[0x15] = 0xffffffff;
        local_2c[1] = 0;
        *local_2c = *(undefined4 *)(iVar16 + 0xc);
        if (*(int *)(iVar16 + 0xc) != 0) {
          *(undefined4 **)(*(int *)(iVar16 + 0xc) + 4) = local_2c;
        }
        *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
        *(undefined4 **)(iVar16 + 0xc) = local_2c;
      }
      puVar17 = (undefined4 *)(*param_2 + (int)local_14);
      uVar15 = puVar17[1];
      uVar6 = puVar17[2];
      uVar7 = puVar17[3];
      local_2c[4] = *puVar17;
      local_2c[5] = uVar15;
      local_2c[6] = uVar6;
      local_2c[7] = uVar7;
      local_2c[8] = local_90;
      local_2c[9] = fStack_8c;
      local_2c[10] = fStack_88;
      local_2c[0xb] = fStack_84;
      local_2c[0x10] = 0;
      local_2c[0x11] = 0;
      local_2c[0x12] = 0;
      local_2c[0x13] = 0;
      local_70 = local_2c[8];
      *(undefined4 **)(local_60 + local_1c * 4) = local_2c;
      puVar17 = local_2c + 8;
      local_6c = local_2c[9];
      local_68 = local_2c[10];
      iStack_44 = iStack_44 + 1;
      piVar13 = (int *)((int)local_50 +
                       ((uint)(local_68 * 0x728eebf3 ^ local_6c * 0x4037bad5 ^ local_70 * 0x402e2f4b
                              ) % uStack_4c) * 0xc);
      if (piVar13[1] == (piVar13[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar13,8);
      }
      piVar20 = (int *)(*piVar13 + piVar13[1] * 8);
      piVar13[1] = piVar13[1] + 1;
      *piVar20 = (int)puVar17;
      piVar20[1] = (int)local_2c;
LAB_010a15c2:
      local_14 = local_14 + 4;
      local_1c = local_1c + 1;
    } while (local_1c < local_54);
  }
  iVar14 = uStack_4c - 1;
  if (-1 < iVar14) {
    piVar13 = (int *)((int)local_50 + 8 + iVar14 * 0xc);
    do {
      piVar13[-1] = 0;
      if (-1 < *piVar13) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar13[-2],*piVar13 * 8);
      }
      piVar13[-2] = 0;
      *piVar13 = -0x80000000;
      iVar14 = iVar14 + -1;
      piVar13 = piVar13 + -3;
    } while (-1 < iVar14);
  }
  uStack_4c = 0;
  if (-1 < (int)uStack_48) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(uStack_48 & 0x3fffffff) * 0xc);
  }
  local_54 = 0;
  if (0 < param_2[4]) {
    local_1c = 0;
    iVar14 = local_60;
    do {
      piVar13 = (int *)(param_2[3] + local_1c);
      local_70 = *(int *)(iVar14 + *piVar13 * 4);
      iVar16 = *(int *)(iVar14 + piVar13[2] * 4);
      iVar12 = *(int *)(iVar14 + piVar13[1] * 4);
      local_68 = iVar16;
      if (param_5 != '\0') {
        local_68 = iVar12;
        iVar12 = iVar16;
      }
      if (((local_70 != iVar12) && (iVar12 != local_68)) && (local_68 != local_70)) {
        local_d0 = *(undefined8 *)(local_70 + 0x20);
        local_c8 = *(undefined8 *)(local_70 + 0x28);
        local_c0 = *(undefined8 *)(iVar12 + 0x20);
        local_b8 = *(undefined8 *)(iVar12 + 0x28);
        local_b0 = *(undefined8 *)(local_68 + 0x20);
        local_a8 = *(undefined4 *)(local_68 + 0x28);
        uStack_a4 = *(undefined4 *)(local_68 + 0x2c);
        iVar14 = *(int *)(local_18 + 0x18);
        if ((iVar14 == 0) || (*(int *)(iVar14 + 0xc00) == 0)) {
          iVar14 = FUN_010abc80();
        }
        if (iVar14 == 0) {
          puVar17 = (undefined4 *)0x0;
        }
        else {
          puVar17 = *(undefined4 **)(iVar14 + 0xc00);
          *(undefined4 *)(iVar14 + 0xc00) = *puVar17;
          puVar17[0x14] = iVar14;
          *(int *)(iVar14 + 0xc0c) = *(int *)(iVar14 + 0xc0c) + 1;
          puVar17[1] = 0;
          *puVar17 = *(undefined4 *)(local_18 + 0x1c);
          if (*(int *)(local_18 + 0x1c) != 0) {
            *(undefined4 **)(*(int *)(local_18 + 0x1c) + 4) = puVar17;
          }
          *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + 1;
          *(undefined4 **)(local_18 + 0x1c) = puVar17;
        }
        puVar17[0xc] = param_4;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[0xf] = 0;
        uVar15 = *(undefined4 *)(local_1c + 0xc + param_2[3]);
        puVar17[3] = iVar12;
        puVar17[0xe] = uVar15;
        puVar17[2] = local_70;
        puVar17[4] = local_68;
        cVar8 = FUN_010992b0(&local_d0,&local_c0,&local_b0,puVar17 + 8,1);
        if (cVar8 == '\0') {
          puVar17[8] = 0;
          puVar17[9] = 0;
          puVar17[10] = 0;
          puVar17[0xb] = 0;
        }
        local_14 = (undefined4 *)0x2;
        local_2c = (undefined4 *)0x0;
        do {
          local_90 = (float)puVar17[(int)local_14 + 2];
          fStack_8c = (float)puVar17[(int)local_2c + 2];
          fStack_88 = 0.0;
          fStack_84 = 0.0;
          fVar18 = local_90;
          fVar21 = fStack_8c;
          if ((int)fStack_8c < (int)local_90) {
            fVar18 = fStack_8c;
            fVar21 = local_90;
          }
          uVar10 = (uint)(((int)fVar18 * 0x2b743e5 ^ (int)fVar21 * 0x5b23451) % 0x54e9d7) % local_38
          ;
          local_98 = *(int *)(local_3c + 4 + uVar10 * 0xc);
          iVar14 = 0;
          if (0 < local_98) {
            local_64 = *(float **)(local_3c + uVar10 * 0xc);
            local_94 = local_64;
            do {
              if (((local_90 == *local_94) && (fStack_8c == local_94[1])) ||
                 ((local_90 == local_94[1] && (fStack_8c == *local_94)))) {
                if ((iVar14 != -1) && (pfVar11 = local_64 + iVar14 * 5, pfVar11 != (float *)0x0))
                goto LAB_010a1933;
                break;
              }
              iVar14 = iVar14 + 1;
              local_94 = local_94 + 5;
            } while (iVar14 < local_98);
          }
          fVar18 = local_90;
          fVar21 = fStack_8c;
          if ((int)fStack_8c < (int)local_90) {
            fVar18 = fStack_8c;
            fVar21 = local_90;
          }
          local_30 = local_30 + 1;
          uVar10 = (uint)(((int)fVar18 * 0x2b743e5 ^ (int)fVar21 * 0x5b23451) % 0x54e9d7) % local_38
          ;
          piVar13 = (int *)(local_3c + uVar10 * 0xc);
          if (piVar13[1] == (*(uint *)(local_3c + 8 + uVar10 * 0xc) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar13,0x14);
          }
          puVar1 = (undefined4 *)(*piVar13 + piVar13[1] * 0x14);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
          }
          iVar14 = piVar13[1];
          piVar13[1] = iVar14 + 1;
          puVar2 = (undefined8 *)(*piVar13 + iVar14 * 0x14);
          *puVar2 = CONCAT44(fStack_8c,local_90);
          *(float *)(puVar2 + 1) = fStack_88;
          *(float *)((int)puVar2 + 0xc) = fStack_84;
          *(undefined4 *)(puVar2 + 2) = 0;
          pfVar11 = (float *)(*piVar13 + -0x14 + piVar13[1] * 0x14);
LAB_010a1933:
          pfVar11[4] = (float)((int)pfVar11[4] + 1);
          if (pfVar11[4] == 1.4013e-45) {
            pfVar11[2] = (float)puVar17;
            pfVar11[3] = (float)local_14;
          }
          else if (pfVar11[4] == 2.8026e-45) {
            if ((local_90 == pfVar11[1]) && (fStack_8c == *pfVar11)) {
              puVar17[(int)local_14 + 5] = (int)pfVar11[2] + (int)pfVar11[3];
              if (pfVar11[2] != 0.0) {
                *(int *)((int)pfVar11[2] + 0x14 + (int)pfVar11[3] * 4) =
                     (int)local_14 + (int)puVar17;
              }
              if ((_DAT_0209a9ac & 1) == 0) {
                _DAT_0209a9ac = _DAT_0209a9ac | 1;
                DAT_0209a9a4 = 0.0;
                DAT_0209a9a8 = 0.0;
              }
              pfVar11[2] = DAT_0209a9a4;
              pfVar11[3] = DAT_0209a9a8;
            }
            else {
              FUN_01098e70((int)local_90 + 0x20,(int)fStack_8c + 0x20);
            }
          }
          else {
            FUN_01098e60((int)local_90 + 0x20,(int)fStack_8c + 0x20);
          }
          local_14 = local_2c;
          local_2c = (undefined4 *)((int)local_2c + 1);
          iVar14 = local_60;
        } while ((int)local_2c < 3);
      }
      local_1c = local_1c + 0x10;
      local_54 = local_54 + 1;
    } while (local_54 < param_2[4]);
  }
  if (param_6 != '\0') {
    local_14 = *(undefined4 **)(local_18 + 0x1c);
    fVar18 = 0.0;
    fVar21 = -0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_20 = -0.0;
    iVar14 = local_18;
    for (; local_18 = iVar14, local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      cVar8 = FUN_01099460(local_14,&local_90,1);
      if ((cVar8 == '\0') ||
         (auVar4._4_4_ = -(uint)NAN(fStack_8c), auVar4._0_4_ = -(uint)NAN(local_90),
         auVar4._8_4_ = -(uint)NAN(fStack_88), auVar4._12_4_ = -(uint)NAN(fStack_84),
         uVar10 = movmskps(extraout_EDX,auVar4), (uVar10 & 7) != 0)) {
LAB_010a1a92:
        if (fVar18 == (float)((uint)fVar21 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_28,4);
          fVar18 = local_24;
        }
        *(undefined4 **)((int)local_28 + (int)fVar18 * 4) = local_14;
        fVar18 = (float)((int)local_24 + 1);
        fVar21 = local_20;
        local_24 = fVar18;
      }
      else {
        local_50 = ABS((fStack_88 * fStack_88 + fStack_8c * fStack_8c + local_90 * local_90) - 1.0);
        uStack_4c = 0;
        uStack_48 = 0;
        iStack_44 = 0;
        if (0.0001 <= local_50) goto LAB_010a1a92;
      }
      iVar14 = local_18;
    }
    iVar16 = 0;
    if (0 < (int)fVar18) {
      do {
        iVar12 = *(int *)((int)local_28 + iVar16 * 4);
        uVar10 = *(uint *)(iVar12 + 0x14);
        if ((uVar10 & 0xfffffffc) != 0) {
          *(undefined4 *)((uVar10 & 0xfffffffc) + 0x14 + (uVar10 & 3) * 4) = 0;
        }
        *(undefined4 *)(iVar12 + 0x14) = 0;
        iVar12 = *(int *)((int)local_28 + iVar16 * 4);
        uVar10 = *(uint *)(iVar12 + 0x18);
        if ((uVar10 & 0xfffffffc) != 0) {
          *(undefined4 *)((uVar10 & 0xfffffffc) + 0x14 + (uVar10 & 3) * 4) = 0;
        }
        *(undefined4 *)(iVar12 + 0x18) = 0;
        iVar12 = *(int *)((int)local_28 + iVar16 * 4);
        uVar10 = *(uint *)(iVar12 + 0x1c);
        if ((uVar10 & 0xfffffffc) != 0) {
          *(undefined4 *)((uVar10 & 0xfffffffc) + 0x14 + (uVar10 & 3) * 4) = 0;
        }
        *(undefined4 *)(iVar12 + 0x1c) = 0;
        iVar16 = iVar16 + 1;
        fVar18 = local_24;
        fVar21 = local_20;
      } while (iVar16 < (int)local_24);
    }
    local_64 = (float *)0x0;
    local_14 = (undefined4 *)0x0;
    if (0 < (int)fVar18) {
      iVar16 = 0;
      do {
        piVar13 = *(int **)((int)local_28 + iVar16 * 4);
        iVar12 = *piVar13;
        piVar20 = (int *)piVar13[1];
        if (iVar12 != 0) {
          *(int **)(iVar12 + 4) = piVar20;
        }
        if (piVar20 == (int *)0x0) {
          *(int *)(iVar14 + 0x1c) = iVar12;
        }
        else {
          *piVar20 = iVar12;
        }
        *(int *)(iVar14 + 0x20) = *(int *)(iVar14 + 0x20) + -1;
        iVar12 = piVar13[0x14];
        piVar13 = (int *)(iVar12 + 0xc0c);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          if (*(int *)(iVar12 + 0xc04) == 0) {
            *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(iVar12 + 0xc08);
          }
          else {
            *(undefined4 *)(*(int *)(iVar12 + 0xc04) + 0xc08) = *(undefined4 *)(iVar12 + 0xc08);
          }
          if (*(int *)(iVar12 + 0xc08) != 0) {
            *(undefined4 *)(*(int *)(iVar12 + 0xc08) + 0xc04) = *(undefined4 *)(iVar12 + 0xc04);
          }
          (**(code **)(PTR_vftable_018e9b94 + 8))(iVar12,0xc10);
        }
        iVar16 = iVar16 + 1;
        fVar21 = local_20;
      } while (iVar16 < (int)local_24);
    }
    local_24 = 0.0;
    if (-1 < (int)fVar21) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,(int)fVar21 * 4);
    }
    FUN_01099af0();
  }
  FUN_01098e20();
  iVar14 = local_38 - 1;
  if (-1 < iVar14) {
    puVar19 = (uint *)(local_3c + 8 + iVar14 * 0xc);
    do {
      uVar10 = *puVar19;
      puVar19[-1] = 0;
      if (-1 < (int)uVar10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar19[-2],((uVar10 & 0x3fffffff) + uVar10 * 4) * 4);
      }
      puVar19[-2] = 0;
      *puVar19 = 0x80000000;
      iVar14 = iVar14 + -1;
      puVar19 = puVar19 + -3;
    } while (-1 < iVar14);
  }
  local_38 = 0;
  if (-1 < (int)local_34) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,(local_34 & 0x3fffffff) * 0xc);
  }
  local_3c = 0;
  local_34 = 0x80000000;
  local_5c = 0;
  if (-1 < local_58) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_60,local_58 * 4);
  }
  return;
}

// 010A2DC0  FUN_010a2dc0  size=123  [run]
void FUN_010a2dc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_2[0xc];
  uStack_1c = param_2[0xd];
  uStack_18 = param_2[0xe];
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  local_30 = param_2[8];
  uStack_2c = param_2[9];
  uStack_28 = param_2[10];
  local_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_24 = 0;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_14 = 0x3f800000;
  FUN_010a1140(param_1,&local_50,param_3,param_4,param_5);
  return;
}

// 010A2E40  FUN_010a2e40  size=87  [run]
void FUN_010a2e40(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0x80000000;
  local_8 = 0x80000000;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_01078bd0(0,&local_1c,0xffffffff);
  FUN_010a2dc0(&local_1c,&DAT_01701ca0,0xffffffff,0,1);
  FUN_009211c0();
  return;
}

// 010A2EA0  FUN_010a2ea0  size=1135  [run]
void __thiscall FUN_010a2ea0(int param_1,float param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM5 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [4];
  int local_1c;
  undefined1 (*local_18) [16];
  int *local_14;
  
  piVar1 = (int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*piVar1,(*(uint *)(param_1 + 0x34) & 0x3fffffff) * 0x30);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_010948a0(*(int *)(param_1 + 0x20) * 2);
  local_14 = *(int **)(param_1 + 0x1c);
  if (local_14 != (int *)0x0) {
    local_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    do {
      fVar26 = (float)local_14[8];
      fVar27 = (float)local_14[9];
      fVar28 = (float)local_14[10];
      local_38 = local_14[2] + 0x20;
      local_34 = local_14[3] + 0x20;
      auVar15._4_4_ = -(uint)(NAN(fVar27) || NAN(fStack_4c));
      auVar15._0_4_ = -(uint)(NAN(fVar26) || NAN(local_50));
      auVar15._8_4_ = -(uint)(NAN(fVar28) || NAN(fStack_48));
      auVar15._12_4_ = -(uint)(NAN((float)local_14[0xb]) || NAN(fStack_44));
      local_30 = local_14[4] + 0x20;
      uVar11 = movmskps(local_34,auVar15);
      if (((uVar11 & 7) != 0) ||
         (fVar26 = ABS((fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26) - 1.0),
         _local_60 = ZEXT416((uint)fVar26), 0.0001 <= fVar26)) {
        local_14[0x10] = 0;
      }
      else {
        FUN_01441350(&local_38,3,&local_70);
        if (param_2 <= 0.0) {
          fVar26 = (local_70 - (float)local_60._0_4_) * (local_70 - (float)local_60._0_4_);
          fVar27 = (fStack_6c - (float)local_60._4_4_) * (fStack_6c - (float)local_60._4_4_);
          fVar28 = (fStack_68 - fStack_58) * (fStack_68 - fStack_58);
          fVar23 = fVar26 + fVar27 + fVar28;
          fVar24 = fVar26 + fVar27 + fVar28;
          fVar25 = fVar26 + fVar27 + fVar28;
          fVar28 = fVar26 + fVar27 + fVar28;
          auVar8._4_4_ = fVar24;
          auVar8._0_4_ = fVar23;
          auVar8._8_4_ = fVar25;
          auVar8._12_4_ = fVar28;
          auVar15 = rsqrtps(in_XMM5,auVar8);
          fVar26 = auVar15._0_4_;
          fVar27 = auVar15._4_4_;
          fVar16 = auVar15._8_4_;
          fVar18 = auVar15._12_4_;
          in_XMM5._0_4_ = (3.0 - fVar26 * fVar23 * fVar26) * fVar26 * 0.5 * fVar23;
          in_XMM5._4_4_ = (3.0 - fVar27 * fVar24 * fVar27) * fVar27 * 0.5 * fVar24;
          in_XMM5._8_4_ = (3.0 - fVar16 * fVar25 * fVar16) * fVar16 * 0.5 * fVar25;
          in_XMM5._12_4_ = (3.0 - fVar18 * fVar28 * fVar18) * fVar18 * 0.5 * fVar28;
          fVar26 = (float)(~-(uint)(fVar23 <= local_50) & (uint)in_XMM5._0_4_) * 0.5 * 0.01;
          local_60._0_4_ = (float)local_60._0_4_ + fVar26;
          local_60._4_4_ = (float)local_60._4_4_ + fVar26;
          fStack_58 = fStack_58 + fVar26;
          fStack_54 = fStack_54 + fVar26;
        }
        else {
          local_60._4_4_ = (float)local_60._4_4_ + param_2;
          local_60._0_4_ = (float)local_60._0_4_ + param_2;
          fStack_58 = fStack_58 + param_2;
          fStack_54 = fStack_54 + param_2;
          fVar26 = param_2;
        }
        fStack_64 = fStack_64 - fVar26;
        fStack_68 = fStack_68 - fVar26;
        fStack_6c = fStack_6c - fVar26;
        local_70 = local_70 - fVar26;
        if (*(int *)(param_1 + 0x38) == 0) {
          FUN_010948a0(1);
        }
        local_1c = *(int *)(param_1 + 0x38);
        iVar13 = *piVar1;
        local_2c[2] = local_1c * 0x30;
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar13 + local_2c[2]);
        *(undefined4 *)(local_2c[2] + 0x24 + iVar13) = 0;
        *(int **)(local_2c[2] + 0x28 + iVar13) = local_14;
        pfVar2 = (float *)(local_2c[2] + iVar13);
        *pfVar2 = local_70;
        pfVar2[1] = fStack_6c;
        pfVar2[2] = fStack_68;
        pfVar2[3] = fStack_64;
        puVar4 = (undefined4 *)(local_2c[2] + 0x10 + iVar13);
        *puVar4 = local_60._0_4_;
        puVar4[1] = local_60._4_4_;
        puVar4[2] = fStack_58;
        puVar4[3] = fStack_54;
        iVar13 = *piVar1;
        iVar10 = *(int *)(param_1 + 0x44);
        auVar15 = *(undefined1 (*) [16])(iVar13 + local_1c * 0x30);
        pauVar12 = (undefined1 (*) [16])(iVar13 + (local_1c * 3 + 1) * 0x10);
        fVar26 = *(float *)*pauVar12;
        fVar27 = *(float *)(*pauVar12 + 4);
        fVar28 = *(float *)(*pauVar12 + 8);
        auVar7 = *pauVar12;
        auVar8 = *pauVar12;
        if (iVar10 == 0) {
          *(int *)(param_1 + 0x44) = local_1c;
          *(undefined4 *)(iVar13 + (local_1c * 3 + 2) * 0x10) = 0;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          local_14[0x10] = local_1c;
        }
        else {
          if (*(int *)(param_1 + 0x38) == 0) {
            FUN_010948a0(1);
          }
          iVar13 = *piVar1;
          iVar9 = *(int *)(param_1 + 0x38) * 0x30;
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar13 + iVar9);
          local_18 = (undefined1 (*) [16])(iVar9 + iVar13);
          pauVar12 = (undefined1 (*) [16])(iVar10 * 0x30 + iVar13);
          if (*(int *)(pauVar12[2] + 4) != 0) {
            fVar23 = auVar15._0_4_ + fVar26;
            fVar24 = auVar15._4_4_ + fVar27;
            fVar25 = auVar15._8_4_ + fVar28;
            fVar26 = fVar26 - auVar15._0_4_;
            fVar27 = fVar27 - auVar15._4_4_;
            fVar28 = fVar28 - auVar15._8_4_;
            do {
              iVar13 = *(int *)(pauVar12[2] + 8);
              iVar10 = *(int *)(pauVar12[2] + 4);
              iVar9 = *piVar1;
              auVar14 = minps(*pauVar12,auVar15);
              auVar17 = maxps(pauVar12[1],auVar7);
              pauVar12[1] = auVar17;
              *pauVar12 = auVar14;
              iVar13 = iVar13 * 0x30;
              pfVar2 = (float *)(iVar13 + iVar9);
              pfVar5 = (float *)(iVar13 + 0x10 + iVar9);
              iVar10 = iVar10 * 0x30;
              pfVar3 = (float *)(iVar10 + iVar9);
              pfVar6 = (float *)(iVar10 + 0x10 + iVar9);
              fVar16 = (*pfVar5 - *pfVar2) + fVar26;
              fVar18 = (pfVar5[1] - pfVar2[1]) + fVar27;
              fVar19 = (pfVar5[2] - pfVar2[2]) + fVar28;
              fVar20 = (*pfVar2 + *pfVar5) - fVar23;
              fVar21 = (pfVar2[1] + pfVar5[1]) - fVar24;
              fVar22 = (pfVar2[2] + pfVar5[2]) - fVar25;
              in_XMM5._0_4_ = fVar16 + fVar18 + fVar19;
              in_XMM5._4_4_ = fVar16 + fVar18 + fVar19;
              in_XMM5._8_4_ = fVar16 + fVar18 + fVar19;
              in_XMM5._12_4_ = fVar16 + fVar18 + fVar19;
              fVar16 = (*pfVar3 + *pfVar6) - fVar23;
              fVar18 = (pfVar3[1] + pfVar6[1]) - fVar24;
              fVar19 = (pfVar3[2] + pfVar6[2]) - fVar25;
              local_2c[1] = iVar13 + iVar9;
              local_2c[0] = iVar10 + iVar9;
              pauVar12 = (undefined1 (*) [16])
                         local_2c[(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22) *
                                  in_XMM5._0_4_ <
                                  (fVar19 * fVar19 + fVar18 * fVar18 + fVar16 * fVar16) *
                                  ((*pfVar6 - *pfVar3) + fVar26 + (pfVar6[1] - pfVar3[1]) + fVar27 +
                                  (pfVar6[2] - pfVar3[2]) + fVar28)];
            } while (*(int *)(pauVar12[2] + 4) != 0);
          }
          local_2c[3] = ((int)local_18 - *piVar1) / 0x30;
          if (*(int *)pauVar12[2] == 0) {
            *(int *)(param_1 + 0x44) = local_2c[3];
          }
          else {
            *(int *)(*piVar1 + 0x24 +
                    ((uint)(*(int *)(*piVar1 + 0x28 + *(int *)pauVar12[2] * 0x30) ==
                           ((int)pauVar12 - *piVar1) / 0x30) + *(int *)pauVar12[2] * 0xc) * 4) =
                 local_2c[3];
          }
          *(undefined4 *)local_18[2] = *(undefined4 *)pauVar12[2];
          *(int *)(local_18[2] + 4) = ((int)pauVar12 - *piVar1) / 0x30;
          *(int *)(local_18[2] + 8) = local_1c;
          *(int *)pauVar12[2] = local_2c[3];
          *(int *)(local_2c[2] + 0x20 + *piVar1) = local_2c[3];
          auVar7 = pauVar12[1];
          auVar15 = minps(*pauVar12,auVar15);
          *local_18 = auVar15;
          auVar15 = maxps(auVar7,auVar8);
          local_18[1] = auVar15;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          local_14[0x10] = local_1c;
        }
      }
      local_14 = (int *)*local_14;
    } while (local_14 != (int *)0x0);
  }
  FUN_010974b0(*(undefined4 *)(param_1 + 0x44),1,0x20,0x10);
  FUN_01096ea0();
  return;
}

// 010A6720  FUN_010a6720  size=9  [run]
void FUN_010a6720(void)

{
  FUN_01123230();
  return;
}

// 010A6740  FUN_010a6740  size=62  [run]
void __thiscall FUN_010a6740(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)(param_1[2] * param_2 + *param_1);
  if (param_1[2] < 0x10) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar3[3];
  }
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_3 = *puVar3;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar4;
  return;
}

// 010A6780  FUN_010a6780  size=8  [run]
undefined4 FUN_010a6780(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A6790  FUN_010a6790  size=66  [run]
undefined4 __thiscall FUN_010a6790(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = 0;
  pfVar3 = (float *)(param_2 + 0x20);
  while( true ) {
    fVar1 = *(float *)((param_1 - param_2) + (int)pfVar3);
    if (fVar1 < *pfVar3) {
      return 0xffffffff;
    }
    if (*pfVar3 < fVar1) break;
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 010A67E0  FUN_010a67e0  size=8  [run]
undefined4 FUN_010a67e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A67F0  FUN_010a67f0  size=14  [run]
void __thiscall FUN_010a67f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A6870  FUN_010a6870  size=26  [run]
void __thiscall
FUN_010a6870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 010A6890  FUN_010a6890  size=31  [run]
float10 __fastcall FUN_010a6890(int param_1)

{
  return SQRT((float10)*(float *)(param_1 + 0x40)) *
         (float10)(int)((uint)(*(char *)(param_1 + 0x44) == '\0') * 2 + -1);
}

// 010A68B0  hkgpMesh::IConvexOverlap::IConvexShape::vf00  size=34  [run]
undefined4 * __thiscall
hkgpMesh::IConvexOverlap::IConvexShape::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 010A68E0  hkgpMesh::IConvexOverlap::vf00  size=34  [run]
undefined4 * __thiscall hkgpMesh::IConvexOverlap::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 010A6940  FUN_010a6940  size=52  [run]
undefined4 __thiscall FUN_010a6940(int *param_1,int *param_2)

{
  if (((*param_2 != *param_1) || (param_2[1] != param_1[1])) &&
     ((*param_2 != param_1[1] || (param_2[1] != *param_1)))) {
    return 0;
  }
  return 1;
}

// 010A6980  FUN_010a6980  size=62  [run]
void __thiscall FUN_010a6980(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = *param_3;
  *(undefined8 *)(param_1 + 6) = param_3[1];
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

// 010A69C0  FUN_010a69c0  size=28  [run]
void __thiscall FUN_010a69c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_1 = *param_3 * *param_4 + *param_2;
  param_1[1] = fVar1 * fVar4 + fVar7;
  param_1[2] = fVar2 * fVar5 + fVar8;
  param_1[3] = fVar3 * fVar6 + fVar9;
  return;
}

// 010A69E0  FUN_010a69e0  size=63  [run]
void FUN_010a69e0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  fVar13 = *param_1;
  fVar14 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *param_4 = (fVar11 - fVar15) * (fVar2 - fVar6) - (fVar10 - fVar14) * (fVar3 - fVar7);
  param_4[1] = (fVar9 - fVar13) * (fVar3 - fVar7) - (fVar11 - fVar15) * (fVar1 - fVar5);
  param_4[2] = (fVar10 - fVar14) * (fVar1 - fVar5) - (fVar9 - fVar13) * (fVar2 - fVar6);
  param_4[3] = (fVar12 - fVar16) * (fVar4 - fVar8) - (fVar12 - fVar16) * (fVar4 - fVar8);
  return;
}

// 010A6A20  FUN_010a6a20  size=33  [run]
void __thiscall FUN_010a6a20(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  param_1[4] = param_1[4] + fVar1;
  param_1[5] = param_1[5] + fVar2;
  param_1[6] = param_1[6] + fVar3;
  param_1[7] = param_1[7] + fVar4;
  *param_1 = *param_1 - fVar1;
  param_1[1] = param_1[1] - fVar2;
  param_1[2] = param_1[2] - fVar3;
  param_1[3] = param_1[3] - fVar4;
  return;
}

// 010A6A60  hkgpJobQueue::IJob::vf00  size=34  [run]
undefined4 * __thiscall hkgpJobQueue::IJob::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 010A6AA0  FUN_010a6aa0  size=20  [run]
void __thiscall FUN_010a6aa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010A6AC0  FUN_010a6ac0  size=72  [run]
uint __fastcall FUN_010a6ac0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  return piVar1[1] * 0x4037bad5 ^ *piVar1 * 0x402e2f4b ^ piVar1[2] * 0x728eebf3;
}

// 010A6B20  FUN_010a6b20  size=74  [run]
void __thiscall
FUN_010a6b20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[8] = *param_3;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0x18] = param_4;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_1[4] = *param_5;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  param_1[0xc] = *param_6;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x19] = param_7;
  param_1[0x1b] = param_8;
  return;
}

// 010A6B80  FUN_010a6b80  size=14  [run]
void __thiscall FUN_010a6b80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A6B90  FUN_010a6b90  size=98  [run]
void __thiscall FUN_010a6b90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((int)param_1 + 0x69) = *(undefined1 *)((int)param_2 + 0x69);
  *(undefined1 *)((int)param_1 + 0x6a) = *(undefined1 *)((int)param_2 + 0x6a);
  param_1[0x1b] = param_2[0x1b];
  return;
}

// 010A6C20  FUN_010a6c20  size=15  [run]
int __thiscall FUN_010a6c20(int param_1,int param_2)

{
  return param_2 * 0x10 + param_1;
}

// 010A6C30  FUN_010a6c30  size=22  [run]
void __thiscall FUN_010a6c30(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

// 010A6C50  FUN_010a6c50  size=17  [run]
void __thiscall FUN_010a6c50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return;
}

// 010A6C70  FUN_010a6c70  size=17  [run]
void __thiscall FUN_010a6c70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return;
}

// 010A6C90  FUN_010a6c90  size=16  [run]
void __thiscall FUN_010a6c90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 010A6CA0  FUN_010a6ca0  size=19  [run]
int __thiscall FUN_010a6ca0(int param_1,int param_2,int param_3)

{
  return param_1 + (param_2 + param_3 * 4) * 4;
}

// 010A6CC0  FUN_010a6cc0  size=72  [run]
void __thiscall FUN_010a6cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  return;
}

// 010A6D30  FUN_010a6d30  size=31  [run]
void __thiscall
FUN_010a6d30(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  return;
}

// 010A6D50  FUN_010a6d50  size=14  [run]
undefined4 __thiscall FUN_010a6d50(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 8 + param_2 * 4);
}

// 010A6D60  FUN_010a6d60  size=14  [run]
int __thiscall FUN_010a6d60(int param_1,int param_2)

{
  return param_1 + 8 + param_2 * 4;
}

// 010A6D70  FUN_010a6d70  size=14  [run]
int __thiscall FUN_010a6d70(int param_1,int param_2)

{
  return param_1 + 0x14 + param_2 * 4;
}

// 010A6DA0  FUN_010a6da0  size=20  [run]
void __thiscall FUN_010a6da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010A6E00  FUN_010a6e00  size=27  [run]
undefined4 __thiscall FUN_010a6e00(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)(param_1[1] + *param_1) >> 8),
                  param_1[1] + *param_1 != param_2[1] + *param_2);
}

// 010A6E80  FUN_010a6e80  size=9  [run]
void FUN_010a6e80(void)

{
  FUN_01010160();
  return;
}

// 010A6E90  FUN_010a6e90  size=9  [run]
void FUN_010a6e90(void)

{
  FUN_01010160();
  return;
}

// 010A6ED0  FUN_010a6ed0  size=20  [run]
void __thiscall FUN_010a6ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 010A6F00  FUN_010a6f00  size=20  [run]
void __thiscall FUN_010a6f00(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010A6F20  FUN_010a6f20  size=20  [run]
void __thiscall FUN_010a6f20(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 010A6F40  FUN_010a6f40  size=14  [run]
int __thiscall FUN_010a6f40(int param_1,int param_2)

{
  return param_1 + 8 + param_2 * 4;
}

// 010A6F60  FUN_010a6f60  size=55  [run]
uint FUN_010a6f60(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  
  uVar2 = 0;
  pfVar3 = (float *)(param_2 + 0x20);
  do {
    fVar1 = *(float *)((param_1 - param_2) + (int)pfVar3);
    if (fVar1 < *pfVar3) break;
    if (*pfVar3 < fVar1) {
      return uVar2 & 0xffffff00;
    }
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while ((int)uVar2 < 3);
  return CONCAT31((int3)(uVar2 >> 8),1);
}

// 010A6FC0  FUN_010a6fc0  size=20  [run]
void __thiscall FUN_010a6fc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010A6FE0  FUN_010a6fe0  size=20  [run]
void __thiscall FUN_010a6fe0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 010A7000  FUN_010a7000  size=14  [run]
void __thiscall FUN_010a7000(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A7020  FUN_010a7020  size=14  [run]
int __thiscall FUN_010a7020(int param_1,int param_2)

{
  return param_1 + 0x14 + param_2 * 4;
}

// 010A7040  FUN_010a7040  size=20  [run]
uint FUN_010a7040(char param_1)

{
  return 9 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010A7060  FUN_010a7060  size=20  [run]
uint FUN_010a7060(char param_1)

{
  return 0x12 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010A7080  FUN_010a7080  size=46  [run]
void __thiscall FUN_010a7080(int *param_1,int *param_2)

{
  *(int *)(*param_1 + 0x14 + param_1[1] * 4) = *param_2 + param_2[1];
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x14 + param_2[1] * 4) = param_1[1] + *param_1;
  }
  return;
}

// 010A70E0  FUN_010a70e0  size=15  [run]
int __thiscall FUN_010a70e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010A70F0  FUN_010a70f0  size=15  [run]
int __thiscall FUN_010a70f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010A7160  FUN_010a7160  size=15  [run]
int __thiscall FUN_010a7160(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A7180  FUN_010a7180  size=52  [run]
int __thiscall FUN_010a7180(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010A71F0  FUN_010a71f0  size=15  [run]
int __thiscall FUN_010a71f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010A7220  FUN_010a7220  size=20  [run]
uint FUN_010a7220(char param_1)

{
  return 9 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010A7270  FUN_010a7270  size=15  [run]
int __thiscall FUN_010a7270(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 010A72D0  FUN_010a72d0  size=15  [run]
int __thiscall FUN_010a72d0(int *param_1,int param_2)

{
  return param_2 * 0x70 + *param_1;
}

// 010A7350  FUN_010a7350  size=15  [run]
int __thiscall FUN_010a7350(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A7360  FUN_010a7360  size=15  [run]
int __thiscall FUN_010a7360(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A7370  FUN_010a7370  size=21  [run]
void FUN_010a7370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 010A73C0  FUN_010a73c0  size=15  [run]
int __thiscall FUN_010a73c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A7440  FUN_010a7440  size=21  [run]
void FUN_010a7440(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 010A7490  FUN_010a7490  size=15  [run]
int __thiscall FUN_010a7490(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A74E0  FUN_010a74e0  size=15  [run]
int __thiscall FUN_010a74e0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 010A7540  FUN_010a7540  size=18  [run]
int __thiscall FUN_010a7540(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010A75A0  FUN_010a75a0  size=15  [run]
int __thiscall FUN_010a75a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010A75D0  FUN_010a75d0  size=21  [run]
void FUN_010a75d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 010A76B0  FUN_010a76b0  size=12  [run]
void __thiscall FUN_010a76b0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A76D0  FUN_010a76d0  size=25  [run]
void FUN_010a76d0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010A7770  FUN_010a7770  size=14  [run]
void __thiscall FUN_010a7770(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A7780  FUN_010a7780  size=14  [run]
void __thiscall FUN_010a7780(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A7790  FUN_010a7790  size=14  [run]
void __thiscall FUN_010a7790(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A77A0  FUN_010a77a0  size=14  [run]
void __thiscall FUN_010a77a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A77B0  FUN_010a77b0  size=14  [run]
void __thiscall FUN_010a77b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A77C0  FUN_010a77c0  size=61  [run]
uint __thiscall FUN_010a77c0(int param_1,int param_2)

{
  if (*(int *)(param_2 + 8) <= *(int *)(param_1 + 8)) {
    if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
      return 1;
    }
    if (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) {
      return (uint)(*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc));
    }
  }
  return 0xffffffff;
}

// 010A7800  FUN_010a7800  size=32  [run]
void __thiscall FUN_010a7800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010A7840  FUN_010a7840  size=44  [run]
void FUN_010a7840(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *(undefined4 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined4 *)(param_3 + 4 + (int)param_1);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010A7890  FUN_010a7890  size=34  [run]
void FUN_010a7890(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010A78E0  FUN_010a78e0  size=20  [run]
uint FUN_010a78e0(char param_1)

{
  return 0x12 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010A7920  FUN_010a7920  size=21  [run]
void FUN_010a7920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 010A79E0  FUN_010a79e0  size=52  [run]
undefined4 __thiscall FUN_010a79e0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010A7A30  FUN_010a7a30  size=34  [run]
void FUN_010a7a30(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010A7A70  FUN_010a7a70  size=18  [run]
int __thiscall FUN_010a7a70(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010A7AA0  FUN_010a7aa0  size=18  [run]
int __thiscall FUN_010a7aa0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x14;
}

// 010A7AD0  FUN_010a7ad0  size=81  [run]
int __thiscall FUN_010a7ad0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 0x14);
    do {
      if ((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) {
        return param_3;
      }
      if ((*param_2 == piVar1[1]) && (param_2[1] == *piVar1)) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 5;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010A7B30  FUN_010a7b30  size=18  [run]
int __thiscall FUN_010a7b30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010A7B60  FUN_010a7b60  size=15  [run]
int __thiscall FUN_010a7b60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010A7B90  FUN_010a7b90  size=34  [run]
void FUN_010a7b90(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010A7C00  FUN_010a7c00  size=52  [run]
undefined4 __thiscall FUN_010a7c00(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010A7C50  FUN_010a7c50  size=34  [run]
void FUN_010a7c50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010A7C80  FUN_010a7c80  size=33  [run]
void FUN_010a7c80(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010A7CB0  FUN_010a7cb0  size=26  [run]
void FUN_010a7cb0(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 010A7CD0  FUN_010a7cd0  size=26  [run]
void FUN_010a7cd0(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 010A7D80  FUN_010a7d80  size=20  [run]
void __thiscall FUN_010a7d80(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 010A7DA0  FUN_010a7da0  size=85  [run]
void __thiscall FUN_010a7da0(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xe04) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xe08);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xe04) + 0xe08) = *(undefined4 *)(param_2 + 0xe08);
  }
  if (*(int *)(param_2 + 0xe08) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xe08) + 0xe04) = *(undefined4 *)(param_2 + 0xe04);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0xe10);
  return;
}

// 010A7E00  FUN_010a7e00  size=85  [run]
void __thiscall FUN_010a7e00(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc04) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc08);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xc04) + 0xc08) = *(undefined4 *)(param_2 + 0xc08);
  }
  if (*(int *)(param_2 + 0xc08) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc08) + 0xc04) = *(undefined4 *)(param_2 + 0xc04);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0xc10);
  return;
}

// 010A7E60  FUN_010a7e60  size=28  [run]
void __thiscall FUN_010a7e60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010A7E80  FUN_010a7e80  size=11  [run]
int FUN_010a7e80(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010A7E90  FUN_010a7e90  size=26  [run]
void __thiscall FUN_010a7e90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010A7EB0  FUN_010a7eb0  size=28  [run]
void __thiscall FUN_010a7eb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010A7ED0  FUN_010a7ed0  size=46  [run]
void __thiscall FUN_010a7ed0(int *param_1,int *param_2)

{
  *(int *)(*param_1 + 0x14 + param_1[1] * 4) = *param_2 + param_2[1];
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x14 + param_2[1] * 4) = param_1[1] + *param_1;
  }
  return;
}

// 010A7F00  FUN_010a7f00  size=41  [run]
int FUN_010a7f00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return (param_3 - param_1) * (param_6 - param_2) - (param_5 - param_1) * (param_4 - param_2);
}

// 010A7F30  FUN_010a7f30  size=24  [run]
int FUN_010a7f30(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 <= param_3)) {
    param_2 = param_1;
  }
  return param_2;
}

// 010A7F50  FUN_010a7f50  size=44  [run]
int FUN_010a7f50(float param_1)

{
  if (param_1 < 0.0) {
    return (int)(param_1 - 0.5);
  }
  return (int)(param_1 + 0.5);
}

// 010A7F80  FUN_010a7f80  size=32  [run]
void __thiscall FUN_010a7f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010A7FD0  FUN_010a7fd0  size=18  [run]
int __thiscall FUN_010a7fd0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010A8000  FUN_010a8000  size=25  [run]
void __thiscall FUN_010a8000(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 010A8030  FUN_010a8030  size=25  [run]
void __thiscall FUN_010a8030(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x70);
  return;
}

// 010A8050  FUN_010a8050  size=11  [run]
int FUN_010a8050(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010A8090  FUN_010a8090  size=26  [run]
void __thiscall FUN_010a8090(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010A80E0  FUN_010a80e0  size=26  [run]
void __thiscall FUN_010a80e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010A8110  FUN_010a8110  size=52  [run]
undefined4 __thiscall FUN_010a8110(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 010A8150  FUN_010a8150  size=29  [run]
void __thiscall FUN_010a8150(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010A81A0  FUN_010a81a0  size=52  [run]
undefined4 __thiscall FUN_010a81a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 010A81E0  FUN_010a81e0  size=29  [run]
void __thiscall FUN_010a81e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010A8230  FUN_010a8230  size=26  [run]
void __thiscall FUN_010a8230(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010A8260  FUN_010a8260  size=25  [run]
void __thiscall FUN_010a8260(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 010A8280  FUN_010a8280  size=11  [run]
int FUN_010a8280(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010A82A0  FUN_010a82a0  size=29  [run]
void __thiscall FUN_010a82a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010A82D0  FUN_010a82d0  size=26  [run]
void __thiscall FUN_010a82d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010A82F0  FUN_010a82f0  size=34  [run]
undefined4 __thiscall FUN_010a82f0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 8) == param_2) && (*(int *)(param_1 + 0xc) == param_3)) {
    return 1;
  }
  return 0;
}

// 010A8370  FUN_010a8370  size=20  [run]
void __thiscall FUN_010a8370(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 010A8390  FUN_010a8390  size=8  [run]
undefined4 FUN_010a8390(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A83A0  FUN_010a83a0  size=8  [run]
undefined4 FUN_010a83a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A83B0  FUN_010a83b0  size=23  [run]
int __thiscall FUN_010a83b0(int *param_1,uint param_2)

{
  return *param_1 + (param_2 % (uint)param_1[1]) * 0xc;
}

// 010A83D0  FUN_010a83d0  size=24  [run]
void __thiscall FUN_010a83d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return;
}

// 010A8470  FUN_010a8470  size=14  [run]
void __thiscall FUN_010a8470(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A8480  FUN_010a8480  size=14  [run]
void __thiscall FUN_010a8480(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A84A0  FUN_010a84a0  size=85  [run]
void __thiscall FUN_010a84a0(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x604) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x608);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x604) + 0x608) = *(undefined4 *)(param_2 + 0x608);
  }
  if (*(int *)(param_2 + 0x608) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x608) + 0x604) = *(undefined4 *)(param_2 + 0x604);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0x610);
  return;
}

// 010A8500  FUN_010a8500  size=85  [run]
void __thiscall FUN_010a8500(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x804) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x808);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x804) + 0x808) = *(undefined4 *)(param_2 + 0x808);
  }
  if (*(int *)(param_2 + 0x808) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x808) + 0x804) = *(undefined4 *)(param_2 + 0x804);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0x810);
  return;
}

// 010A8560  FUN_010a8560  size=49  [run]
int FUN_010a8560(int param_1,int param_2,int param_3,int param_4)

{
  return (*(int *)(param_2 + 8) - *(int *)(param_1 + 8)) * (param_4 - *(int *)(param_1 + 0xc)) -
         (*(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc)) * (param_3 - *(int *)(param_1 + 8));
}

// 010A85A0  FUN_010a85a0  size=44  [run]
int FUN_010a85a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (param_2 - *(int *)(param_1 + 8)) * (param_5 - *(int *)(param_1 + 0xc)) -
         (param_4 - *(int *)(param_1 + 8)) * (param_3 - *(int *)(param_1 + 0xc));
}

// 010A85D0  FUN_010a85d0  size=87  [run]
undefined4 FUN_010a85d0(int param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == param_1) {
    if (param_3 == 0) {
      if (param_4 < param_2) {
        return 0;
      }
    }
    else if ((param_3 == 0x7fff) && (param_2 < param_4)) {
      return 0;
    }
  }
  if (param_4 == param_2) {
    if (param_4 == 0) {
      if (param_1 < param_3) {
        return 0;
      }
    }
    else if ((param_4 == 0x7fff) && (param_3 < param_1)) {
      return 0;
    }
  }
  return 1;
}

// 010A8630  FUN_010a8630  size=22  [run]
int FUN_010a8630(int param_1,int param_2)

{
  return (param_2 >> 0xb) * 0x10 + (param_1 >> 0xb);
}

// 010A8650  FUN_010a8650  size=58  [run]
undefined4 FUN_010a8650(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != *(int *)(param_2 + 8)) || ((iVar1 != 0 && (iVar1 != 0x7fff)))) &&
     ((iVar1 = *(int *)(param_1 + 0xc), iVar1 != *(int *)(param_2 + 0xc) ||
      ((iVar1 != 0 && (iVar1 != 0x7fff)))))) {
    return 0;
  }
  return 1;
}

// 010A8690  FUN_010a8690  size=60  [run]
void FUN_010a8690(int param_1,int param_2)

{
  *(ushort *)(param_2 + 0x22) =
       *(ushort *)(param_2 + 0x22) ^
       (*(ushort *)(param_2 + 0x22) ^ *(ushort *)(param_1 + 0x22)) & 0x10;
  *(ushort *)(param_2 + 0x22) =
       (*(ushort *)(param_1 + 0x22) ^ *(ushort *)(param_2 + 0x22)) & 0x1f ^
       *(ushort *)(param_1 + 0x22);
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(param_1 + 0x24);
  return;
}

// 010A8700  FUN_010a8700  size=28  [run]
void __thiscall FUN_010a8700(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010A8720  FUN_010a8720  size=11  [run]
int FUN_010a8720(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010A8730  FUN_010a8730  size=85  [run]
void __thiscall FUN_010a8730(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x604) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x608);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x604) + 0x608) = *(undefined4 *)(param_2 + 0x608);
  }
  if (*(int *)(param_2 + 0x608) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x608) + 0x604) = *(undefined4 *)(param_2 + 0x604);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(param_2,0x610);
  return;
}

// 010A87A0  FUN_010a87a0  size=15  [run]
int __thiscall FUN_010a87a0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010A87B0  FUN_010a87b0  size=25  [run]
uint FUN_010a87b0(int param_1,int param_2)

{
  return param_2 * 0x1958e9 ^ param_1 * 0x3442a5;
}

// 010A87D0  FUN_010a87d0  size=15  [run]
int __thiscall FUN_010a87d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010A8880  FUN_010a8880  size=31  [run]
void __thiscall
FUN_010a8880(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  return;
}

// 010A88A0  FUN_010a88a0  size=35  [run]
undefined4 __thiscall FUN_010a88a0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// 010A88D0  FUN_010a88d0  size=8  [run]
undefined4 FUN_010a88d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A88E0  FUN_010a88e0  size=192  [run]
undefined4
FUN_010a88e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  longlong lVar1;
  
  param_2 = param_2 - param_8;
  param_5 = param_5 - param_7;
  param_1 = param_1 - param_7;
  param_4 = param_4 - param_8;
  param_3 = param_3 - param_7;
  param_6 = param_6 - param_8;
  lVar1 = (longlong)(param_1 * param_1 + param_2 * param_2) *
          (longlong)(param_3 * param_6 - param_4 * param_5) +
          (longlong)(param_3 * param_3 + param_4 * param_4) *
          (longlong)(param_2 * param_5 - param_1 * param_6) +
          (longlong)(param_1 * param_4 - param_2 * param_3) *
          (longlong)(param_5 * param_5 + param_6 * param_6);
  if ((int)-((int)((ulonglong)lVar1 >> 0x20) + (uint)((int)lVar1 != 0)) < 0) {
    return 0;
  }
  return 1;
}

// 010A89B0  FUN_010a89b0  size=29  [run]
void __thiscall FUN_010a89b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010A89E0  FUN_010a89e0  size=28  [run]
void __thiscall FUN_010a89e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010A8B80  FUN_010a8b80  size=8  [run]
undefined4 FUN_010a8b80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8B90  FUN_010a8b90  size=8  [run]
undefined4 FUN_010a8b90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8BC0  FUN_010a8bc0  size=29  [run]
void __thiscall FUN_010a8bc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x14);
  return;
}

// 010A8BE0  FUN_010a8be0  size=28  [run]
void __thiscall FUN_010a8be0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010A8C00  FUN_010a8c00  size=52  [run]
int __thiscall FUN_010a8c00(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010A8C40  FUN_010a8c40  size=8  [run]
undefined4 FUN_010a8c40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8C50  FUN_010a8c50  size=8  [run]
undefined4 FUN_010a8c50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8C90  FUN_010a8c90  size=8  [run]
undefined4 FUN_010a8c90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8CA0  FUN_010a8ca0  size=8  [run]
undefined4 FUN_010a8ca0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010A8CD0  FUN_010a8cd0  size=33  [run]
void FUN_010a8cd0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010A8D00  FUN_010a8d00  size=50  [run]
undefined4 __thiscall FUN_010a8d00(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 010A8D50  FUN_010a8d50  size=25  [run]
void __thiscall FUN_010a8d50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010A8D70  FUN_010a8d70  size=31  [run]
void FUN_010a8d70(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 4;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 010A8D90  FUN_010a8d90  size=52  [run]
undefined4 __thiscall FUN_010a8d90(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 010A8DF0  FUN_010a8df0  size=17  [run]
int __thiscall FUN_010a8df0(int param_1,int param_2)

{
  return *(int *)(param_1 + 8 + param_2 * 4) + 0x20;
}

// 010A8E10  FUN_010a8e10  size=17  [run]
int __thiscall FUN_010a8e10(int param_1,int param_2)

{
  return *(int *)(param_1 + 8 + param_2 * 4) + 0x20;
}

// 010A8E40  FUN_010a8e40  size=20  [run]
void __thiscall FUN_010a8e40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010A8E70  FUN_010a8e70  size=37  [run]
void FUN_010a8e70(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010A8EC0  FUN_010a8ec0  size=31  [run]
void __thiscall FUN_010a8ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

