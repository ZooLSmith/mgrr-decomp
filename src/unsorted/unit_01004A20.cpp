// src/unsorted/unit_01004A20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01004A20..010058B0, 25 functions

#include "types.h"

// 01004A20  FUN_01004a20  size=17  [run]
void FUN_01004a20(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 01004A50  FUN_01004a50  size=195  [run]
void __thiscall FUN_01004a50(float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  param_2[4] = (double)param_1[4];
  param_2[5] = (double)param_1[5];
  param_2[6] = (double)param_1[6];
  param_2[8] = (double)param_1[8];
  param_2[9] = (double)param_1[9];
  fVar2 = param_1[10];
  *param_2 = (double)fVar1;
  fVar1 = param_1[1];
  param_2[10] = (double)fVar2;
  fVar2 = param_1[0xc];
  param_2[1] = (double)fVar1;
  fVar1 = param_1[2];
  param_2[0xc] = (double)fVar2;
  fVar2 = param_1[0xd];
  param_2[2] = (double)fVar1;
  param_2[0xd] = (double)fVar2;
  fVar1 = param_1[0xe];
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xe] = (double)fVar1;
  param_2[0xf] = 1.0;
  return;
}

// 01004B20  FUN_01004b20  size=207  [run]
void __thiscall FUN_01004b20(float *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *param_2;
  param_1[4] = (float)param_2[4];
  param_1[5] = (float)param_2[5];
  param_1[6] = (float)param_2[6];
  param_1[8] = (float)param_2[8];
  param_1[9] = (float)param_2[9];
  dVar2 = param_2[10];
  *param_1 = (float)dVar1;
  dVar1 = param_2[1];
  param_1[10] = (float)dVar2;
  dVar2 = param_2[0xc];
  param_1[1] = (float)dVar1;
  dVar1 = param_2[2];
  param_1[0xc] = (float)dVar2;
  dVar2 = param_2[0xd];
  param_1[2] = (float)dVar1;
  param_1[0xd] = (float)dVar2;
  dVar1 = param_2[0xe];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xe] = (float)dVar1;
  param_1[0xf] = 1.0;
  return;
}

// 01004C20  FUN_01004c20  size=199  [run]
void __thiscall FUN_01004c20(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = (float)*param_2;
  fStack_1c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_18 = (float)param_2[1];
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  local_40 = (float)param_2[4];
  fStack_3c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_38 = (float)param_2[5];
  fStack_34 = (float)((ulonglong)param_2[5] >> 0x20);
  param_1[4] = fStack_1c;
  param_1[5] = fStack_2c;
  param_1[6] = fStack_3c;
  param_1[7] = fStack_34;
  *param_1 = local_20;
  param_1[1] = local_30;
  param_1[2] = local_40;
  param_1[3] = fStack_3c;
  param_1[8] = fStack_18;
  param_1[9] = fStack_28;
  param_1[10] = fStack_38;
  param_1[0xb] = fStack_34;
  fVar1 = -*(float *)(param_2 + 6);
  fVar2 = -*(float *)((int)param_2 + 0x34);
  fVar3 = -*(float *)(param_2 + 7);
  param_1[0xc] = fVar2 * fStack_1c + fVar1 * local_20 + fVar3 * fStack_18;
  param_1[0xd] = fVar2 * fStack_2c + fVar1 * local_30 + fVar3 * fStack_28;
  param_1[0xe] = fVar2 * fStack_3c + fVar1 * local_40 + fVar3 * fStack_38;
  param_1[0xf] = fVar2 * fStack_34 + fVar1 * fStack_3c + fVar3 * fStack_34;
  return;
}

// 01004CF0  FUN_01004cf0  size=186  [run]
void __thiscall FUN_01004cf0(int param_1,undefined8 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = (float)*param_2;
  fStack_3c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_38 = (float)param_2[1];
  fStack_34 = (float)((ulonglong)param_2[1] >> 0x20);
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  fStack_24 = (float)((ulonglong)param_2[3] >> 0x20);
  local_20 = (float)param_2[4];
  fStack_1c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_18 = (float)param_2[5];
  fStack_14 = (float)((ulonglong)param_2[5] >> 0x20);
  pfVar5 = (float *)(param_3 + 0x30);
  iVar6 = 3;
  do {
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    pfVar1 = (float *)((param_1 - param_3) + (int)pfVar5);
    *pfVar1 = fVar2 * local_40 + fVar3 * local_30 + fVar4 * local_20;
    pfVar1[1] = fVar2 * fStack_3c + fVar3 * fStack_2c + fVar4 * fStack_1c;
    pfVar1[2] = fVar2 * fStack_38 + fVar3 * fStack_28 + fVar4 * fStack_18;
    pfVar1[3] = fVar2 * fStack_34 + fVar3 * fStack_24 + fVar4 * fStack_14;
    pfVar5 = pfVar5 + -4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  fVar2 = *(float *)((int)param_2 + 0x34);
  fVar3 = *(float *)(param_2 + 7);
  fVar4 = *(float *)((int)param_2 + 0x3c);
  *(float *)(param_1 + 0x30) = *(float *)(param_2 + 6) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = fVar2 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = fVar3 + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = fVar4 + *(float *)(param_1 + 0x3c);
  return;
}

// 01004E90  FUN_01004e90  size=373  [run]
void __thiscall FUN_01004e90(float *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = (float)*param_2;
  fStack_1c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_18 = (float)param_2[1];
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  local_40 = (float)param_2[4];
  fVar4 = local_40;
  fStack_3c = (float)((ulonglong)param_2[4] >> 0x20);
  fVar5 = fStack_3c;
  fStack_38 = (float)param_2[5];
  fVar6 = fStack_38;
  fStack_34 = (float)((ulonglong)param_2[5] >> 0x20);
  iVar3 = 3;
  pfVar2 = param_1;
  do {
    uVar1 = *(undefined8 *)((param_3 - (int)param_1) + (int)pfVar2);
    local_40 = (float)uVar1;
    fStack_3c = (float)((ulonglong)uVar1 >> 0x20);
    fStack_38 = (float)*(undefined8 *)((param_3 - (int)param_1) + 8 + (int)pfVar2);
    *pfVar2 = fStack_3c * fStack_1c + local_40 * local_20 + fStack_38 * fStack_18;
    pfVar2[1] = fStack_3c * fStack_2c + local_40 * local_30 + fStack_38 * fStack_28;
    pfVar2[2] = fStack_3c * fVar5 + local_40 * fVar4 + fStack_38 * fVar6;
    pfVar2[3] = fStack_3c * fStack_34 + local_40 * fVar5 + fStack_38 * fStack_34;
    pfVar2 = pfVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar4 = *(float *)(param_3 + 0x30) - *(float *)(param_2 + 6);
  fVar5 = *(float *)(param_3 + 0x34) - *(float *)((int)param_2 + 0x34);
  fVar6 = *(float *)(param_3 + 0x38) - *(float *)(param_2 + 7);
  local_40 = (float)*param_2;
  fStack_3c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_38 = (float)param_2[1];
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  local_20 = (float)param_2[4];
  fStack_1c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_18 = (float)param_2[5];
  fStack_14 = (float)((ulonglong)param_2[5] >> 0x20);
  param_1[0xc] = fVar5 * fStack_3c + fVar4 * local_40 + fStack_38 * fVar6;
  param_1[0xd] = fVar5 * fStack_2c + fVar4 * local_30 + fStack_28 * fVar6;
  param_1[0xe] = fVar5 * fStack_1c + fVar4 * local_20 + fStack_18 * fVar6;
  param_1[0xf] = fVar5 * fStack_14 + fVar4 * fStack_1c + fStack_14 * fVar6;
  return;
}

// 010050E0  FUN_010050e0  size=82  [run]
undefined4 __thiscall FUN_010050e0(int param_1,int param_2,float *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  cVar2 = FUN_01013e60(param_2,param_3);
  if (cVar2 != '\0') {
    auVar1._4_4_ = -(uint)(ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) < param_3[1]
                          );
    auVar1._0_4_ = -(uint)(ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) < *param_3);
    auVar1._8_4_ = -(uint)(ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) < param_3[2]
                          );
    auVar1._12_4_ =
         -(uint)(ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)) < param_3[3]);
    uVar3 = movmskps(extraout_EDX,auVar1);
    if (((byte)uVar3 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

// 01005140  FUN_01005140  size=70  [run]
void __thiscall FUN_01005140(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar9 = param_1[0xc];
  uVar10 = param_1[0xd];
  uVar11 = param_1[0xe];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[8];
  uVar7 = param_1[9];
  uVar8 = param_1[10];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = 0;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = 0;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = 0;
  param_2[0xc] = uVar9;
  param_2[0xd] = uVar10;
  param_2[0xe] = uVar11;
  param_2[0xf] = 0x3f800000;
  return;
}

// 01005190  FUN_01005190  size=70  [run]
void __thiscall FUN_01005190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar9 = param_2[0xc];
  uVar10 = param_2[0xd];
  uVar11 = param_2[0xe];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = 0;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = 0;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar11;
  param_1[0xf] = 0x3f800000;
  return;
}

// 010051E0  FUN_010051e0  size=29  [run]
void __thiscall FUN_010051e0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = uVar1;
  return;
}

// 01005220  FUN_01005220  size=21  [run]
void __thiscall FUN_01005220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 01005240  FUN_01005240  size=19  [run]
int __thiscall FUN_01005240(int param_1,int param_2,int param_3)

{
  return param_1 + (param_2 + param_3 * 4) * 4;
}

// 01005270  FUN_01005270  size=20  [run]
void __thiscall FUN_01005270(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01005290  FUN_01005290  size=20  [run]
void __thiscall FUN_01005290(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 010052B0  FUN_010052b0  size=18  [run]
void FUN_010052b0(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  return;
}

// 010052D0  FUN_010052d0  size=20  [run]
void __thiscall FUN_010052d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01005300  FUN_01005300  size=17  [run]
void FUN_01005300(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 01005320  FUN_01005320  size=26  [run]
void __thiscall FUN_01005320(float *param_1,int *param_2,float *param_3)

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
  *param_2 = -(uint)(*param_1 < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return;
}

// 01005340  FUN_01005340  size=54  [run]
void __thiscall FUN_01005340(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}

// 01005440  FUN_01005440  size=50  [run]
bool __fastcall FUN_01005440(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(ABS(param_1[1] - param_3[1]) < param_4[1]);
  auVar1._0_4_ = -(uint)(ABS(*param_1 - *param_3) < *param_4);
  auVar1._8_4_ = -(uint)(ABS(param_1[2] - param_3[2]) < param_4[2]);
  auVar1._12_4_ = -(uint)(ABS(param_1[3] - param_3[3]) < param_4[3]);
  uVar2 = movmskps(param_2,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 010057A0  FUN_010057a0  size=17  [run]
void FUN_010057a0(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 010057C0  FUN_010057c0  size=16  [run]
void __thiscall FUN_010057c0(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 01005850  FUN_01005850  size=39  [run]
void FUN_01005850(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01005880  FUN_01005880  size=39  [run]
void FUN_01005880(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010058B0  FUN_010058b0  size=39  [run]
void FUN_010058b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

