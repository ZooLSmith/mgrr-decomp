// lib/havok/unit_0105FAA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0105FAA0..01065520, 143 functions

#include "types.h"

// 0105FAA0  hkBaseObject::hkBaseObject_48  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_48(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[5];
  *param_1 = hkPackfileReader::vftable;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 0105FAF0  hkPackfileReader::vf2C  size=53  [run]
void __thiscall hkPackfileReader::vf2C(int param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),uVar2);
  uVar2 = FUN_01016080(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

// 0105FB30  hkPackfileReader::hkPackfileReader  size=36  [run]
void __fastcall hkPackfileReader::hkPackfileReader(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  return;
}

// 0105FB60  FUN_0105fb60  size=38  [run]
void FUN_0105fb60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0105FB90  hkPackfileReader::vf00  size=52  [run]
int __thiscall hkPackfileReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_48();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0105FBD0  FUN_0105fbd0  size=30  [run]
void __thiscall
FUN_0105fbd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 0105FD10  FUN_0105fd10  size=156  [run]
float10 FUN_0105fd10(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 <= 0.0) {
    return (float10)1;
  }
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  param_2 = param_2 * 0.33333334;
  *param_3 = (fVar1 * fVar1 + fVar3 * fVar3) * param_2;
  param_3[2] = (fVar2 * fVar2 + fVar1 * fVar1) * param_2;
  param_3[1] = (fVar2 * fVar2 + fVar3 * fVar3) * param_2;
  param_3[3] = 1.0;
  return (float10)fVar1 * (float10)fVar2 * (float10)fVar3 * (float10)8.0;
}

// 0105FDB0  FUN_0105fdb0  size=212  [run]
void FUN_0105fdb0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  *param_3 = *param_3 - (param_1[1] * param_1[1] + param_1[2] * param_1[2]) * param_2;
  param_3[5] = param_3[5] - (*param_1 * *param_1 + param_1[2] * param_1[2]) * param_2;
  param_3[10] = param_3[10] - (*param_1 * *param_1 + param_1[1] * param_1[1]) * param_2;
  fVar1 = *param_1 * param_2 * param_1[1] + param_3[1];
  param_3[1] = fVar1;
  param_3[4] = fVar1;
  fVar1 = param_2 * param_1[1] * param_1[2] + param_3[6];
  param_3[6] = fVar1;
  param_3[9] = fVar1;
  fVar1 = param_2 * param_1[2] * *param_1 + param_3[8];
  param_3[8] = fVar1;
  param_3[2] = fVar1;
  return;
}

// 0105FE90  FUN_0105fe90  size=212  [run]
void FUN_0105fe90(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  *param_3 = (param_1[1] * param_1[1] + param_1[2] * param_1[2]) * param_2 + *param_3;
  param_3[5] = (*param_1 * *param_1 + param_1[2] * param_1[2]) * param_2 + param_3[5];
  param_3[10] = (*param_1 * *param_1 + param_1[1] * param_1[1]) * param_2 + param_3[10];
  fVar1 = param_3[1] - *param_1 * param_2 * param_1[1];
  param_3[1] = fVar1;
  param_3[4] = fVar1;
  fVar1 = param_3[6] - param_2 * param_1[1] * param_1[2];
  param_3[6] = fVar1;
  param_3[9] = fVar1;
  fVar1 = param_3[8] - param_2 * param_1[2] * *param_1;
  param_3[8] = fVar1;
  param_3[2] = fVar1;
  return;
}

// 0105FFC0  FUN_0105ffc0  size=66  [run]
void FUN_0105ffc0(float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (*param_1 <= param_1[5]) {
    fVar1 = param_1[5];
  }
  if (fVar1 <= param_1[10]) {
    fVar1 = param_1[10];
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = fVar1;
  param_1[5] = fVar1;
  param_1[10] = fVar1;
  return;
}

// 01060010  FUN_01060010  size=1205  [run]
void __thiscall FUN_01060010(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
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
  float fVar19;
  float fVar20;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_38;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_14;
  float *local_10;
  
  local_10 = (float *)(param_2 + param_1[1] * 4);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  local_60 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_64 = 0.0;
  local_50 = 0.0;
  local_48 = 0.0;
  local_2c = 0.0;
  local_38 = 0.0;
  local_54 = 0.0;
  local_58 = 0.0;
  local_14 = 1;
  pfVar6 = (float *)(param_2 + *param_1 * 4);
  local_28 = 3;
  do {
    fVar1 = *local_10;
    fVar2 = *pfVar6;
    fVar14 = fVar2 * fVar2;
    iVar5 = (local_14 % 3) * 4;
    fVar3 = *(float *)(param_2 + (*param_1 + iVar5) * 4);
    fVar4 = *(float *)(param_2 + (iVar5 + param_1[1]) * 4);
    fVar7 = fVar3 - fVar2;
    fVar13 = fVar4 * fVar4;
    fVar8 = fVar4 - fVar1;
    fVar9 = fVar14 * fVar2;
    fVar19 = (fVar3 + fVar2) * fVar3 + fVar14;
    fVar10 = fVar1 * fVar1;
    fVar15 = (fVar4 + fVar1) * fVar4 + fVar10;
    fVar11 = fVar10 * fVar1;
    fVar16 = fVar15 * fVar4 + fVar11;
    fVar17 = fVar3 * 2.0 * fVar2;
    fVar20 = fVar19 * fVar3 + fVar9;
    fVar12 = fVar3 * fVar3;
    fVar18 = fVar12 * 3.0 + fVar17 + fVar14;
    fVar14 = fVar17 + fVar12 + fVar14 * 3.0;
    local_58 = (fVar3 + fVar2) * fVar8 + local_58;
    param_1[3] = (int)local_58;
    local_54 = fVar19 * fVar8 + local_54;
    param_1[4] = (int)local_54;
    local_2c = fVar20 * fVar8 + local_2c;
    param_1[6] = (int)local_2c;
    local_64 = (fVar20 * fVar3 + fVar9 * fVar2) * fVar8 + local_64;
    param_1[9] = (int)local_64;
    local_38 = fVar15 * fVar7 + local_38;
    param_1[5] = (int)local_38;
    local_50 = fVar16 * fVar7 + local_50;
    param_1[8] = (int)local_50;
    local_60 = (fVar16 * fVar4 + fVar11 * fVar1) * fVar7 + local_60;
    param_1[0xc] = (int)local_60;
    local_48 = (fVar18 * fVar4 + fVar14 * fVar1) * fVar8 + local_48;
    param_1[7] = (int)local_48;
    local_20 = ((fVar12 * fVar3 * 4.0 + fVar18 * fVar2) * fVar4 +
               (fVar14 * fVar3 + fVar9 * 4.0) * fVar1) * fVar8 + local_20;
    param_1[10] = (int)local_20;
    local_10 = local_10 + 4;
    local_14 = local_14 + 1;
    local_24 = ((fVar4 * 3.0 * fVar10 + fVar13 * 2.0 * fVar1 + fVar13 * fVar4 + fVar11 * 4.0) *
                fVar2 + (fVar13 * 3.0 * fVar1 + fVar13 * fVar4 * 4.0 + fVar4 * 2.0 * fVar10 + fVar11
                        ) * fVar3) * fVar7 + local_24;
    pfVar6 = pfVar6 + 4;
    local_28 = local_28 + -1;
    param_1[0xb] = (int)local_24;
  } while (local_28 != 0);
  param_1[3] = (int)(local_58 * 0.5);
  param_1[4] = (int)(local_54 * 0.16666667);
  param_1[6] = (int)(local_2c * 0.083333336);
  param_1[9] = (int)(local_64 * 0.05);
  param_1[5] = (int)(local_38 * -0.16666667);
  param_1[8] = (int)(local_50 * -0.083333336);
  param_1[0xc] = (int)(local_60 * -0.05);
  param_1[7] = (int)(local_48 * 0.041666668);
  param_1[10] = (int)(local_20 * 0.016666668);
  param_1[0xb] = (int)(local_24 * -0.016666668);
  return;
}

// 010604D0  FUN_010604d0  size=843  [run]
void FUN_010604d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *extraout_ECX;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  FUN_01060010(param_1);
  fVar9 = (-(*param_1 * *param_2) - param_1[1] * param_2[1]) - param_1[2] * param_2[2];
  fVar10 = 1.0 / param_2[extraout_ECX[2]];
  fVar11 = fVar10 * fVar10;
  fVar12 = fVar11 * fVar10;
  fVar2 = (float)extraout_ECX[4];
  extraout_ECX[0xd] = (int)(fVar2 * fVar10);
  pfVar1 = param_2 + extraout_ECX[1];
  extraout_ECX[0xe] = (int)((float)extraout_ECX[5] * fVar10);
  fVar3 = *pfVar1;
  fVar4 = param_2[*extraout_ECX];
  param_2 = param_2 + *extraout_ECX;
  fVar13 = (float)extraout_ECX[3] * fVar9;
  fVar5 = (float)extraout_ECX[6];
  extraout_ECX[0x10] = (int)(fVar5 * fVar10);
  fVar6 = (float)extraout_ECX[8];
  extraout_ECX[0x11] = (int)(fVar6 * fVar10);
  extraout_ECX[0xf] = (int)-((fVar4 * fVar2 + (float)extraout_ECX[5] * fVar3 + fVar13) * fVar11);
  fVar3 = *param_2;
  fVar4 = *pfVar1;
  fVar7 = (float)extraout_ECX[7];
  extraout_ECX[0x12] =
       (int)((fVar3 * 2.0 * fVar4 * fVar7 + fVar3 * fVar3 * fVar5 + fVar4 * fVar4 * fVar6 +
             ((fVar4 * (float)extraout_ECX[5] + fVar3 * fVar2) * 2.0 + fVar13) * fVar9) * fVar12);
  extraout_ECX[0x13] = (int)((float)extraout_ECX[9] * fVar10);
  fVar3 = (float)extraout_ECX[0xc];
  extraout_ECX[0x14] = (int)(fVar3 * fVar10);
  fVar4 = *param_2;
  fVar8 = *pfVar1;
  extraout_ECX[0x15] =
       (int)-((fVar4 * fVar4 * 3.0 * fVar8 * (float)extraout_ECX[10] +
               fVar4 * fVar4 * fVar4 * (float)extraout_ECX[9] +
               fVar8 * fVar8 * fVar4 * 3.0 * (float)extraout_ECX[0xb] +
               fVar8 * fVar8 * fVar8 * fVar3 +
               (fVar4 * 2.0 * fVar8 * fVar7 + fVar4 * fVar4 * fVar5 + fVar8 * fVar8 * fVar6) *
               fVar9 * 3.0 +
              ((fVar8 * (float)extraout_ECX[5] + fVar4 * fVar2) * 3.0 + fVar13) * fVar9 * fVar9) *
             fVar12 * fVar10);
  extraout_ECX[0x16] = (int)((float)extraout_ECX[10] * fVar10);
  extraout_ECX[0x17] =
       (int)-((*param_2 * (float)extraout_ECX[0xb] + fVar3 * *pfVar1 + fVar6 * fVar9) * fVar11);
  fVar3 = *param_2;
  fVar4 = *pfVar1;
  extraout_ECX[0x18] =
       (int)((fVar3 * 2.0 * fVar4 * (float)extraout_ECX[10] + fVar3 * fVar3 * (float)extraout_ECX[9]
              + fVar4 * fVar4 * (float)extraout_ECX[0xb] +
             ((fVar7 * fVar4 + fVar5 * fVar3) * 2.0 + fVar2 * fVar9) * fVar9) * fVar12);
  return;
}

// 01060820  FUN_01060820  size=417  [run]
void __thiscall FUN_01060820(int param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  *param_4 = *(float *)(param_1 + 0x68) / *(float *)(param_1 + 100);
  param_4[1] = *(float *)(param_1 + 0x6c) / *(float *)(param_1 + 100);
  param_4[2] = *(float *)(param_1 + 0x70) / *(float *)(param_1 + 100);
  *param_5 = (*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x7c)) * param_3;
  param_5[5] = (*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c)) * param_3;
  param_5[10] = (*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78)) * param_3;
  fVar1 = -(*(float *)(param_1 + 0x80) * param_3);
  param_5[4] = fVar1;
  param_5[1] = fVar1;
  fVar1 = -(*(float *)(param_1 + 0x84) * param_3);
  param_5[6] = fVar1;
  param_5[9] = fVar1;
  fVar1 = -(*(float *)(param_1 + 0x88) * param_3);
  param_5[8] = fVar1;
  param_5[2] = fVar1;
  *param_5 = *param_5 - (param_4[1] * param_4[1] + param_4[2] * param_4[2]) * param_2;
  param_5[5] = param_5[5] - (*param_4 * *param_4 + param_4[2] * param_4[2]) * param_2;
  param_5[10] = param_5[10] - (*param_4 * *param_4 + param_4[1] * param_4[1]) * param_2;
  fVar1 = *param_4 * param_2 * param_4[1] + param_5[1];
  param_5[1] = fVar1;
  param_5[4] = fVar1;
  fVar1 = param_4[1] * param_2 * param_4[2] + param_5[6];
  param_5[6] = fVar1;
  param_5[9] = fVar1;
  fVar1 = param_4[2] * param_2 * *param_4 + param_5[8];
  param_5[8] = fVar1;
  param_5[2] = fVar1;
  return;
}

// 010609D0  FUN_010609d0  size=103  [run]
void FUN_010609d0(undefined1 (*param_1) [16],int param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  fVar8 = 3.40282e+38;
  fVar9 = 3.40282e+38;
  fVar10 = 3.40282e+38;
  fVar11 = 3.40282e+38;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  fVar4 = -3.40282e+38;
  fVar5 = -3.40282e+38;
  fVar6 = -3.40282e+38;
  fVar7 = -3.40282e+38;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      auVar3 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = fVar10;
      auVar12._12_4_ = fVar11;
      auVar12 = minps(auVar3,auVar12);
      auVar1._4_4_ = fVar5;
      auVar1._0_4_ = fVar4;
      auVar1._8_4_ = fVar6;
      auVar1._12_4_ = fVar7;
      auVar3 = maxps(auVar3,auVar1);
      fVar8 = auVar12._0_4_;
      fVar9 = auVar12._4_4_;
      fVar10 = auVar12._8_4_;
      fVar11 = auVar12._12_4_;
      fVar4 = auVar3._0_4_;
      fVar5 = auVar3._4_4_;
      fVar6 = auVar3._8_4_;
      fVar7 = auVar3._12_4_;
    } while (iVar2 != 0);
  }
  if (param_2 != 0) {
    *param_3 = (fVar4 - fVar8) * 0.5 + fVar8;
    param_3[1] = (fVar5 - fVar9) * 0.5 + fVar9;
    param_3[2] = (fVar6 - fVar10) * 0.5 + fVar10;
    param_3[3] = (fVar7 - fVar11) * 0.5 + fVar11;
    *param_4 = fVar4 - fVar8;
    param_4[1] = fVar5 - fVar9;
    param_4[2] = fVar6 - fVar10;
    param_4[3] = fVar7 - fVar11;
  }
  return;
}

// 01060A40  FUN_01060a40  size=72  [run]
void __thiscall FUN_01060a40(int param_1,float param_2)

{
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = param_2 / *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = param_2;
  fStack_1c = local_20;
  fStack_18 = local_20;
  fStack_14 = local_20;
  FUN_010136a0(&local_20);
  return;
}

// 01060A90  FUN_01060a90  size=27  [run]
void __thiscall FUN_01060a90(float *param_1,float param_2)

{
  FUN_01060a40(*param_1 * param_2);
  return;
}

// 01060AB0  FUN_01060ab0  size=142  [run]
undefined4 FUN_01060ab0(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if ((0.0 < param_2) && (0.0 < param_1)) {
    param_3[8] = 1.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 1.0;
    param_3[0xe] = 0.0;
    param_3[0xf] = 0.0;
    param_3[0x10] = 0.0;
    param_3[0x11] = 0.0;
    param_3[0x12] = 1.0;
    param_3[0x13] = 0.0;
    fVar1 = param_1 * param_2 * param_1 * 0.4;
    param_3[8] = fVar1;
    param_3[0xd] = fVar1;
    param_3[0x12] = fVar1;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    *param_3 = param_1 * 4.1887903 * param_1 * param_1;
    param_3[1] = param_2;
    return 0;
  }
  return 1;
}

// 01060CB0  FUN_01060cb0  size=191  [run]
undefined4 FUN_01060cb0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 <= 0.0) {
    return 1;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_2 * 0.33333334;
  param_3[8] = 1.0;
  param_3[9] = 0.0;
  param_3[10] = 0.0;
  param_3[0xb] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xd] = 1.0;
  param_3[0xe] = 0.0;
  param_3[0xf] = 0.0;
  param_3[0x10] = 0.0;
  param_3[0x11] = 0.0;
  param_3[0x12] = 1.0;
  param_3[0x13] = 0.0;
  param_3[8] = (fVar2 * fVar2 + fVar3 * fVar3) * fVar4;
  param_3[0x12] = (fVar1 * fVar1 + fVar2 * fVar2) * fVar4;
  *param_3 = fVar2 * fVar1 * fVar3 * 8.0;
  param_3[0xd] = (fVar1 * fVar1 + fVar3 * fVar3) * fVar4;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[1] = param_2;
  return 0;
}

// 01060D70  FUN_01060d70  size=95  [run]
undefined4
FUN_01060d70(undefined4 param_1,undefined4 param_2,int param_3,float param_4,undefined4 param_5)

{
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if ((0.0 < param_4) && (0 < param_3)) {
    local_c = param_3;
    local_8 = param_2;
    local_10 = param_1;
    (*(code *)PTR_FUN_01b1c010)(&local_10,0,param_5);
    FUN_01060a40(param_4);
    return 0;
  }
  return 1;
}

// 01060DD0  FUN_01060dd0  size=405  [run]
undefined4 FUN_01060dd0(int *param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
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
  float *local_18;
  int local_14;
  
  iVar7 = param_1[1];
  iVar8 = 0;
  local_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  local_40 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (0 < iVar7) {
    pfVar6 = (float *)*param_1;
    do {
      fVar3 = pfVar6[4];
      fVar4 = pfVar6[5];
      fVar5 = pfVar6[6];
      fVar2 = pfVar6[1];
      in_XMM5._0_4_ =
           (fVar4 * pfVar6[0x18] + fVar3 * pfVar6[0x14] + fVar5 * pfVar6[0x1c] + pfVar6[0x20]) *
           fVar2;
      in_XMM5._4_4_ =
           (fVar4 * pfVar6[0x19] + fVar3 * pfVar6[0x15] + fVar5 * pfVar6[0x1d] + pfVar6[0x21]) *
           fVar2;
      in_XMM5._8_4_ =
           (fVar4 * pfVar6[0x1a] + fVar3 * pfVar6[0x16] + fVar5 * pfVar6[0x1e] + pfVar6[0x22]) *
           fVar2;
      in_XMM5._12_4_ =
           (fVar4 * pfVar6[0x1b] + fVar3 * pfVar6[0x17] + fVar5 * pfVar6[0x1f] + pfVar6[0x23]) *
           fVar2;
      fVar9 = fVar9 + fVar2;
      fVar10 = fVar10 + fVar2;
      fVar11 = fVar11 + fVar2;
      fVar12 = fVar12 + fVar2;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + 0x24;
      iVar7 = iVar7 + -1;
      local_40 = local_40 + in_XMM5._0_4_;
      fStack_3c = fStack_3c + in_XMM5._4_4_;
      fStack_38 = fStack_38 + in_XMM5._8_4_;
      fStack_34 = fStack_34 + in_XMM5._12_4_;
      fVar13 = fVar13 + fVar2;
    } while (iVar7 != 0);
  }
  if (0.0 < fVar9) {
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar9;
    auVar14._8_4_ = fVar11;
    auVar14._12_4_ = fVar12;
    auVar14 = rcpps(in_XMM5,auVar14);
    local_40 = (2.0 - auVar14._0_4_ * fVar9) * auVar14._0_4_ * local_40;
    fStack_3c = (2.0 - auVar14._4_4_ * fVar10) * auVar14._4_4_ * fStack_3c;
    fStack_38 = (2.0 - auVar14._8_4_ * fVar11) * auVar14._8_4_ * fStack_38;
    fStack_34 = (2.0 - auVar14._12_4_ * fVar12) * auVar14._12_4_ * fStack_34;
    param_2[4] = local_40;
    param_2[5] = fStack_3c;
    param_2[6] = fStack_38;
    param_2[7] = fStack_34;
    param_2[1] = fVar9;
    *param_2 = fVar13;
    local_18 = param_2 + 8;
    *local_18 = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 0.0;
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    local_14 = 0;
    if (0 < param_1[1]) {
      do {
        puVar1 = (undefined4 *)(*param_1 + 0x20 + iVar8);
        local_70 = *puVar1;
        uStack_6c = puVar1[1];
        uStack_68 = puVar1[2];
        uStack_64 = puVar1[3];
        iVar7 = *param_1 + iVar8;
        local_60 = *(undefined4 *)(iVar7 + 0x30);
        uStack_5c = *(undefined4 *)(iVar7 + 0x34);
        uStack_58 = *(undefined4 *)(iVar7 + 0x38);
        uStack_54 = *(undefined4 *)(iVar7 + 0x3c);
        local_50 = *(undefined4 *)(iVar7 + 0x40);
        uStack_4c = *(undefined4 *)(iVar7 + 0x44);
        uStack_48 = *(undefined4 *)(iVar7 + 0x48);
        uStack_44 = *(undefined4 *)(iVar7 + 0x4c);
        FUN_01014430(iVar7 + 0x50);
        FUN_01007050(iVar8 + *param_1 + 0x50,iVar8 + *param_1 + 0x10);
        local_30 = local_30 - local_40;
        fStack_2c = fStack_2c - fStack_3c;
        fStack_28 = fStack_28 - fStack_38;
        fStack_24 = fStack_24 - fStack_34;
        FUN_0105fe90(&local_30,*(undefined4 *)(iVar8 + 4 + *param_1),&local_70);
        FUN_01013760(&local_70);
        local_14 = local_14 + 1;
        iVar8 = iVar8 + 0x90;
      } while (local_14 < param_1[1]);
    }
    return 0;
  }
  return 1;
}

// 01060F70  FUN_01060f70  size=136  [run]
void FUN_01060f70(undefined4 *param_1,float param_2,undefined4 param_3)

{
  int extraout_ECX;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_010609d0(*param_1,param_1[1],&local_30,&local_20);
  local_20 = local_20 * 0.5 + param_2;
  fStack_1c = fStack_1c * 0.5 + param_2;
  fStack_18 = fStack_18 * 0.5 + param_2;
  fStack_14 = fStack_14 * 0.5 + param_2;
  FUN_01060cb0(&local_20,0x3f800000,param_3);
  *(undefined4 *)(extraout_ECX + 0x10) = local_30;
  *(undefined4 *)(extraout_ECX + 0x14) = uStack_2c;
  *(undefined4 *)(extraout_ECX + 0x18) = uStack_28;
  *(undefined4 *)(extraout_ECX + 0x1c) = uStack_24;
  *(undefined4 *)(extraout_ECX + 4) = 0x3f800000;
  return;
}

// 010611C0  FUN_010611c0  size=1014  [run]
void __thiscall FUN_010611c0(int *param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int *extraout_ECX;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM4 [16];
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
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_34;
  undefined8 local_2c;
  int local_24;
  float local_20 [4];
  
  local_24 = param_2[4];
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  if (0 < local_24) {
    local_80 = 0.0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_a0 = 3.0;
    uStack_9c = 0x40400000;
    uStack_98 = 0x40400000;
    uStack_94 = 0x40400000;
    local_90 = 0.5;
    uStack_8c = 0x3f000000;
    uStack_88 = 0x3f000000;
    uStack_84 = 0x3f000000;
    iVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_2[3] + iVar5);
      local_b0 = *param_3;
      fStack_ac = param_3[1];
      fStack_a8 = param_3[2];
      fStack_a4 = param_3[3];
      local_2c = *(undefined8 *)(param_2[3] + 8 + iVar5);
      iVar4 = *param_2;
      local_34._0_4_ = (int)uVar2;
      pfVar1 = (float *)(iVar4 + (int)local_34 * 0x10);
      local_34._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
      local_d0 = *pfVar1 + local_b0;
      fStack_cc = pfVar1[1] + fStack_ac;
      fStack_c8 = pfVar1[2] + fStack_a8;
      fStack_c4 = pfVar1[3] + fStack_a4;
      pfVar1 = (float *)(iVar4 + local_34._4_4_ * 0x10);
      local_c0 = *pfVar1 + local_b0;
      fStack_bc = pfVar1[1] + fStack_ac;
      fStack_b8 = pfVar1[2] + fStack_a8;
      fStack_b4 = pfVar1[3] + fStack_a4;
      pfVar1 = (float *)(iVar4 + (int)local_2c * 0x10);
      local_b0 = *pfVar1 + local_b0;
      fStack_ac = pfVar1[1] + fStack_ac;
      fStack_a8 = pfVar1[2] + fStack_a8;
      fStack_a4 = pfVar1[3] + fStack_a4;
      local_20[0] = (fStack_a8 - fStack_c8) * (fStack_bc - fStack_cc) -
                    (fStack_ac - fStack_cc) * (fStack_b8 - fStack_c8);
      local_20[1] = (local_b0 - local_d0) * (fStack_b8 - fStack_c8) -
                    (fStack_a8 - fStack_c8) * (local_c0 - local_d0);
      local_20[2] = (fStack_ac - fStack_cc) * (local_c0 - local_d0) -
                    (local_b0 - local_d0) * (fStack_bc - fStack_cc);
      fVar6 = local_20[0] * local_20[0];
      fVar7 = local_20[1] * local_20[1];
      fVar8 = local_20[2] * local_20[2];
      fVar9 = fVar7 + fVar6 + fVar8;
      auVar3._4_4_ = fVar7 + fVar6 + fVar8;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = fVar7 + fVar6 + fVar8;
      auVar3._12_4_ = fVar7 + fVar6 + fVar8;
      in_XMM4 = rsqrtps(in_XMM4,auVar3);
      fVar6 = in_XMM4._0_4_;
      local_20[3] = (float)(~-(uint)(fVar9 <= local_80) &
                           (uint)((local_a0 - fVar6 * fVar9 * fVar6) * local_90 * fVar6 * fVar9));
      if (0.0 < local_20[3]) {
        local_20[3] = 1.0 / local_20[3];
        local_20[0] = local_20[3] * local_20[0];
        local_20[1] = local_20[3] * local_20[1];
        local_20[2] = local_20[3] * local_20[2];
        local_20[3] = local_20[3] *
                      ((fStack_a4 - fStack_c4) * (fStack_b4 - fStack_c4) -
                      (fStack_a4 - fStack_c4) * (fStack_b4 - fStack_c4));
        local_60 = ABS(local_20[0]);
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        local_50 = ABS(local_20[1]);
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        local_70 = ABS(local_20[2]);
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        if ((local_60 <= local_50) || (local_60 <= local_70)) {
          iVar4 = 1;
          if (local_50 <= local_70) {
            iVar4 = 2;
          }
          param_1[2] = iVar4;
        }
        else {
          param_1[2] = 0;
        }
        iVar4 = (param_1[2] + 1) % 3;
        *param_1 = iVar4;
        param_1[1] = (iVar4 + 1) % 3;
        local_34 = uVar2;
        FUN_010604d0(&local_d0,local_20);
        iVar4 = *extraout_ECX;
        if (iVar4 == 0) {
          fVar6 = (float)extraout_ECX[0xd];
        }
        else if (extraout_ECX[1] == 0) {
          fVar6 = (float)extraout_ECX[0xe];
        }
        else {
          fVar6 = (float)extraout_ECX[0xf];
        }
        fVar7 = local_20[iVar4];
        extraout_ECX[0x19] = (int)(local_20[0] * fVar6 + (float)extraout_ECX[0x19]);
        extraout_ECX[iVar4 + 0x1a] =
             (int)(fVar7 * (float)extraout_ECX[0x10] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x1a] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x11] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x1a] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x12] + (float)extraout_ECX[iVar4 + 0x1a]);
        iVar4 = *extraout_ECX;
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x13] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x14] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x1d] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x15] + (float)extraout_ECX[iVar4 + 0x1d]);
        iVar4 = *extraout_ECX;
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x16] + (float)extraout_ECX[iVar4 + 0x20]);
        iVar4 = extraout_ECX[1];
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x17] + (float)extraout_ECX[iVar4 + 0x20]);
        iVar4 = extraout_ECX[2];
        extraout_ECX[iVar4 + 0x20] =
             (int)(local_20[iVar4] * (float)extraout_ECX[0x18] + (float)extraout_ECX[iVar4 + 0x20]);
        param_1 = extraout_ECX;
      }
      iVar5 = iVar5 + 0x10;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  param_1[0x1a] = (int)((float)param_1[0x1a] * 0.5);
  param_1[0x1b] = (int)((float)param_1[0x1b] * 0.5);
  param_1[0x1c] = (int)((float)param_1[0x1c] * 0.5);
  param_1[0x1d] = (int)((float)param_1[0x1d] * 0.33333334);
  param_1[0x1e] = (int)((float)param_1[0x1e] * 0.33333334);
  param_1[0x20] = (int)((float)param_1[0x20] * 0.5);
  param_1[0x21] = (int)((float)param_1[0x21] * 0.5);
  param_1[0x1f] = (int)((float)param_1[0x1f] * 0.33333334);
  param_1[0x22] = (int)((float)param_1[0x22] * 0.5);
  return;
}

// 010615C0  FUN_010615c0  size=558  [run]
void FUN_010615c0(undefined4 *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_ac;
  float local_80;
  float local_7c;
  undefined4 local_70;
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
  
  fVar4 = 0.0;
  if (param_2 <= 0.0) {
    param_2 = 1.0;
  }
  fVar3 = param_2;
  FUN_010609d0(*param_1,param_1[1],&local_20,&local_30);
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  local_50 = 0.0;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  local_40 = 0.0;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  local_80 = fVar4;
  local_7c = fVar4;
  FUN_01060cb0(&local_30,fVar3,&local_80);
  local_30 = -local_20;
  fStack_2c = -fStack_1c;
  fStack_28 = -fStack_18;
  fStack_24 = -fStack_14;
  FUN_010611c0(param_1,&local_30);
  fVar4 = 0.0;
  if (local_ac <= 0.0) {
    *param_3 = local_80;
    param_3[1] = local_7c;
    param_3[4] = local_20;
    param_3[5] = fStack_1c;
    param_3[6] = fStack_18;
    param_3[7] = fStack_14;
    param_3[8] = local_60;
    param_3[9] = fStack_5c;
    param_3[10] = fStack_58;
    param_3[0xb] = fStack_54;
    param_3[0xc] = local_50;
    param_3[0xd] = fStack_4c;
    param_3[0xe] = fStack_48;
    param_3[0xf] = fStack_44;
    param_3[0x10] = local_40;
    param_3[0x11] = fStack_3c;
    param_3[0x12] = fStack_38;
    param_3[0x13] = fStack_34;
    return;
  }
  pfVar1 = param_3 + 8;
  *param_3 = local_ac;
  param_3[1] = param_2;
  pfVar2 = param_3 + 4;
  FUN_01060820(param_2,param_2 / local_ac,pfVar2,pfVar1);
  *pfVar2 = *pfVar2 + local_20;
  param_3[5] = param_3[5] + fStack_1c;
  param_3[6] = param_3[6] + fStack_18;
  param_3[7] = param_3[7] + fStack_14;
  local_60 = local_60 * 0.1;
  if (*pfVar1 <= local_60 && local_60 != *pfVar1) {
    *pfVar1 = local_60;
    *pfVar2 = local_20;
    fVar3 = param_3[9];
    if (param_3[9] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[0xc] = fVar3;
    param_3[9] = fVar3;
    fVar3 = param_3[10];
    if (param_3[10] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[0x10] = fVar3;
    param_3[10] = fVar3;
  }
  fStack_4c = fStack_4c * 0.1;
  if (param_3[0xd] <= fStack_4c && fStack_4c != param_3[0xd]) {
    param_3[0xd] = fStack_4c;
    param_3[5] = fStack_1c;
    fVar3 = param_3[0xc];
    if (param_3[0xc] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[9] = fVar3;
    param_3[0xc] = fVar3;
    fVar3 = param_3[0xe];
    if (param_3[0xe] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[0x11] = fVar3;
    param_3[0xe] = fVar3;
  }
  fStack_38 = fStack_38 * 0.1;
  if (param_3[0x12] <= fStack_38 && fStack_38 != param_3[0x12]) {
    param_3[0x12] = fStack_38;
    param_3[6] = fStack_18;
    fVar3 = param_3[0x10];
    if (param_3[0x10] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[10] = fVar3;
    param_3[0x10] = fVar3;
    fVar3 = param_3[0x11];
    if (param_3[0x11] < fVar4) {
      fVar3 = fVar4;
    }
    param_3[0xe] = fVar3;
    param_3[0x11] = fVar3;
  }
  return;
}

// 010619E0  FUN_010619e0  size=1695  [run]
undefined4 FUN_010619e0(undefined4 *param_1,int param_2,int param_3,float param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar7 = param_3;
  if (param_3 < 1) {
    return 1;
  }
  local_14 = (float *)0x0;
  local_10 = 0;
  local_c = -0x80000000;
  if (0 < param_3) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_14,param_3,0x10);
  }
  param_3 = 0;
  if (3 < iVar7) {
    local_8 = (iVar7 - 4U >> 2) + 1;
    param_3 = local_8 * 4;
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + (int)local_14) = *param_1;
      *(undefined4 *)(iVar2 + 4 + (int)local_14) = param_1[1];
      puVar3 = (undefined4 *)((int)param_1 + param_2);
      *(undefined4 *)(iVar2 + 8 + (int)local_14) = param_1[2];
      *(undefined4 *)(iVar2 + 0xc + (int)local_14) = 0;
      *(undefined4 *)(iVar2 + 0x10 + (int)local_14) = *puVar3;
      *(undefined4 *)(iVar2 + 0x14 + (int)local_14) = puVar3[1];
      puVar4 = (undefined4 *)((int)puVar3 + param_2);
      *(undefined4 *)(iVar2 + 0x18 + (int)local_14) = puVar3[2];
      *(undefined4 *)(iVar2 + 0x1c + (int)local_14) = 0;
      *(undefined4 *)(iVar2 + 0x20 + (int)local_14) = *puVar4;
      *(undefined4 *)(iVar2 + 0x24 + (int)local_14) = puVar4[1];
      puVar3 = (undefined4 *)((int)puVar4 + param_2);
      *(undefined4 *)(iVar2 + 0x28 + (int)local_14) = puVar4[2];
      *(undefined4 *)(iVar2 + 0x2c + (int)local_14) = 0;
      *(undefined4 *)(iVar2 + 0x30 + (int)local_14) = *puVar3;
      *(undefined4 *)(iVar2 + 0x34 + (int)local_14) = puVar3[1];
      param_1 = (undefined4 *)((int)puVar3 + param_2);
      local_8 = local_8 + -1;
      *(undefined4 *)(iVar2 + 0x38 + (int)local_14) = puVar3[2];
      *(undefined4 *)(iVar2 + 0x3c + (int)local_14) = 0;
      iVar2 = iVar2 + 0x40;
    } while (local_8 != 0);
    local_8 = 0;
  }
  if (param_3 < iVar7) {
    iVar2 = param_3 << 4;
    param_1 = param_1 + 2;
    param_3 = iVar7 - param_3;
    do {
      *(undefined4 *)(iVar2 + (int)local_14) = param_1[-2];
      *(undefined4 *)(iVar2 + 4 + (int)local_14) = param_1[-1];
      uVar1 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + param_2);
      param_3 = param_3 + -1;
      *(undefined4 *)(iVar2 + 8 + (int)local_14) = uVar1;
      *(undefined4 *)(iVar2 + 0xc + (int)local_14) = 0;
      iVar2 = iVar2 + 0x10;
    } while (param_3 != 0);
  }
  *(float *)(param_5 + 4) = param_4;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0;
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined4 *)(param_5 + 0x34) = 0;
  *(undefined4 *)(param_5 + 0x38) = 0;
  *(undefined4 *)(param_5 + 0x3c) = 0;
  *(undefined4 *)(param_5 + 0x40) = 0;
  *(undefined4 *)(param_5 + 0x44) = 0;
  *(undefined4 *)(param_5 + 0x48) = 0;
  *(undefined4 *)(param_5 + 0x4c) = 0;
  *(undefined4 *)(param_5 + 0x10) = 0;
  *(undefined4 *)(param_5 + 0x14) = 0;
  *(undefined4 *)(param_5 + 0x18) = 0;
  *(undefined4 *)(param_5 + 0x1c) = 0;
  fVar8 = 1.0 / (float)iVar7;
  param_4 = fVar8 * param_4;
  if (0 < iVar7) {
    fVar9 = *(float *)(param_5 + 0x10);
    fVar10 = *(float *)(param_5 + 0x14);
    fVar11 = *(float *)(param_5 + 0x18);
    fVar12 = *(float *)(param_5 + 0x1c);
    pfVar5 = local_14;
    iVar2 = iVar7;
    do {
      fVar9 = fVar9 + *pfVar5;
      fVar10 = fVar10 + pfVar5[1];
      fVar11 = fVar11 + pfVar5[2];
      fVar12 = fVar12 + pfVar5[3];
      pfVar5 = pfVar5 + 4;
      iVar2 = iVar2 + -1;
      *(float *)(param_5 + 0x10) = fVar9;
      *(float *)(param_5 + 0x14) = fVar10;
      *(float *)(param_5 + 0x18) = fVar11;
      *(float *)(param_5 + 0x1c) = fVar12;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  *(float *)(param_5 + 0x10) = fVar8 * *(float *)(param_5 + 0x10);
  *(float *)(param_5 + 0x14) = fVar8 * *(float *)(param_5 + 0x14);
  *(float *)(param_5 + 0x18) = fVar8 * *(float *)(param_5 + 0x18);
  *(float *)(param_5 + 0x1c) = fVar8 * *(float *)(param_5 + 0x1c);
  if (3 < iVar7) {
    pfVar5 = local_14 + 2;
    iVar6 = (iVar7 - 4U >> 2) + 1;
    iVar2 = iVar6 * 4;
    do {
      fVar11 = pfVar5[-1] - *(float *)(param_5 + 0x14);
      fVar8 = *pfVar5 - *(float *)(param_5 + 0x18);
      fVar10 = pfVar5[-2] - *(float *)(param_5 + 0x10);
      *(float *)(param_5 + 0x20) =
           (fVar11 * fVar11 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 0x34) =
           (fVar10 * fVar10 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x48) =
           (fVar10 * fVar10 + fVar11 * fVar11) * param_4 + *(float *)(param_5 + 0x48);
      fVar9 = fVar11 * fVar10 * param_4;
      *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) - fVar9;
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) - fVar9;
      fVar9 = fVar8 * fVar10 * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) - fVar9;
      *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) - fVar9;
      fVar8 = fVar8 * fVar11 * param_4;
      *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) - fVar8;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) - fVar8;
      fVar11 = pfVar5[3] - *(float *)(param_5 + 0x14);
      fVar8 = pfVar5[4] - *(float *)(param_5 + 0x18);
      fVar10 = pfVar5[2] - *(float *)(param_5 + 0x10);
      *(float *)(param_5 + 0x20) =
           (fVar11 * fVar11 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 0x34) =
           (fVar10 * fVar10 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x48) =
           (fVar10 * fVar10 + fVar11 * fVar11) * param_4 + *(float *)(param_5 + 0x48);
      fVar9 = fVar11 * fVar10 * param_4;
      *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) - fVar9;
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) - fVar9;
      fVar9 = fVar8 * fVar10 * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) - fVar9;
      *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) - fVar9;
      fVar8 = fVar8 * fVar11 * param_4;
      *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) - fVar8;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) - fVar8;
      fVar11 = pfVar5[7] - *(float *)(param_5 + 0x14);
      fVar8 = pfVar5[8] - *(float *)(param_5 + 0x18);
      fVar10 = pfVar5[6] - *(float *)(param_5 + 0x10);
      *(float *)(param_5 + 0x20) =
           (fVar11 * fVar11 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 0x34) =
           (fVar10 * fVar10 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x48) =
           (fVar10 * fVar10 + fVar11 * fVar11) * param_4 + *(float *)(param_5 + 0x48);
      fVar9 = fVar11 * fVar10 * param_4;
      *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) - fVar9;
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) - fVar9;
      fVar9 = fVar8 * fVar10 * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) - fVar9;
      *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) - fVar9;
      fVar8 = fVar8 * fVar11 * param_4;
      *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) - fVar8;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) - fVar8;
      fVar10 = pfVar5[10] - *(float *)(param_5 + 0x10);
      fVar11 = pfVar5[0xb] - *(float *)(param_5 + 0x14);
      fVar8 = pfVar5[0xc] - *(float *)(param_5 + 0x18);
      *(float *)(param_5 + 0x20) =
           (fVar11 * fVar11 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 0x34) =
           (fVar10 * fVar10 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x48) =
           (fVar10 * fVar10 + fVar11 * fVar11) * param_4 + *(float *)(param_5 + 0x48);
      fVar9 = fVar11 * fVar10 * param_4;
      *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) - fVar9;
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) - fVar9;
      fVar9 = fVar8 * fVar10 * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) - fVar9;
      *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) - fVar9;
      fVar8 = fVar8 * fVar11 * param_4;
      *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) - fVar8;
      pfVar5 = pfVar5 + 0x10;
      iVar6 = iVar6 + -1;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) - fVar8;
    } while (iVar6 != 0);
  }
  if (iVar2 < iVar7) {
    pfVar5 = local_14 + iVar2 * 4 + 2;
    iVar7 = iVar7 - iVar2;
    do {
      fVar11 = pfVar5[-1] - *(float *)(param_5 + 0x14);
      fVar8 = *pfVar5 - *(float *)(param_5 + 0x18);
      fVar10 = pfVar5[-2] - *(float *)(param_5 + 0x10);
      *(float *)(param_5 + 0x20) =
           (fVar11 * fVar11 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x20);
      *(float *)(param_5 + 0x34) =
           (fVar10 * fVar10 + fVar8 * fVar8) * param_4 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x48) =
           (fVar10 * fVar10 + fVar11 * fVar11) * param_4 + *(float *)(param_5 + 0x48);
      fVar9 = fVar11 * fVar10 * param_4;
      *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) - fVar9;
      *(float *)(param_5 + 0x24) = *(float *)(param_5 + 0x24) - fVar9;
      fVar9 = fVar8 * fVar10 * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) - fVar9;
      *(float *)(param_5 + 0x28) = *(float *)(param_5 + 0x28) - fVar9;
      fVar8 = fVar8 * fVar11 * param_4;
      *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) - fVar8;
      pfVar5 = pfVar5 + 4;
      iVar7 = iVar7 + -1;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) - fVar8;
    } while (iVar7 != 0);
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 4);
  }
  return 0;
}

// 01062240  FUN_01062240  size=2283  [run]
/* WARNING: Removing unreachable block (ram,0x01062abe) */

undefined4
FUN_01062240(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float *param_6
            )

{
  undefined1 auVar1 [16];
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
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
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float *pfStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float *pfStack_28;
  float fStack_24;
  undefined1 local_20 [8];
  float fStack_18;
  float fStack_14;
  
  if ((0.0 < param_4) && (0.0 <= param_5)) {
    local_60 = *param_2;
    fStack_5c = param_2[1];
    fStack_58 = param_2[2];
    fStack_54 = param_2[3];
    local_a0 = *param_3;
    fStack_9c = param_3[1];
    fStack_98 = param_3[2];
    fStack_94 = param_3[3];
    local_160 = *param_1;
    fStack_15c = param_1[1];
    fStack_158 = param_1[2];
    fStack_154 = param_1[3];
    local_140 = (fStack_158 - fStack_58) * (fStack_9c - fStack_5c) -
                (fStack_15c - fStack_5c) * (fStack_98 - fStack_58);
    fStack_13c = (local_160 - local_60) * (fStack_98 - fStack_58) -
                 (fStack_158 - fStack_58) * (local_a0 - local_60);
    fStack_138 = (fStack_15c - fStack_5c) * (local_a0 - local_60) -
                 (local_160 - local_60) * (fStack_9c - fStack_5c);
    fVar9 = local_140 * local_140;
    fVar10 = fStack_13c * fStack_13c;
    fVar11 = fStack_138 * fStack_138;
    local_b0 = 0x40400000;
    uStack_ac = 0x40400000;
    uStack_a8 = 0x40400000;
    uStack_a4 = 0x40400000;
    fVar12 = fVar10 + fVar9 + fVar11;
    fVar13 = fVar10 + fVar9 + fVar11;
    fVar14 = fVar10 + fVar9 + fVar11;
    fVar15 = fVar10 + fVar9 + fVar11;
    local_c0 = 0x3f000000;
    uStack_bc = 0x3f000000;
    uStack_b8 = 0x3f000000;
    uStack_b4 = 0x3f000000;
    fStack_14 = (float)-(uint)(fVar15 <= 0.0);
    auVar19._0_8_ = CONCAT44(-(uint)(fVar13 <= 0.0),-(uint)(fVar12 <= 0.0));
    auVar19._8_4_ = -(uint)(fVar14 <= 0.0);
    auVar19._12_4_ = fStack_14;
    auVar20._4_4_ = fVar13;
    auVar20._0_4_ = fVar12;
    auVar20._8_4_ = fVar14;
    auVar20._12_4_ = fVar15;
    auVar20 = rsqrtps(auVar19,auVar20);
    fVar13 = auVar20._0_4_;
    local_64 = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar13 * fVar12 * fVar13) * fVar13 * 0.5 * fVar12));
    if (1e-05 <= param_5) {
      if (local_64 < 1e-05) {
        local_60 = (local_160 + local_60 + local_a0) * 0.33333334;
        fStack_5c = (fStack_15c + fStack_5c + fStack_9c) * 0.33333334;
        fStack_58 = (fStack_158 + fStack_58 + fStack_98) * 0.33333334;
        fStack_54 = (fStack_154 + fStack_54 + fStack_94) * 0.33333334;
        local_40 = (fStack_5c * fStack_5c + fStack_58 * fStack_58) * param_4;
        fStack_18 = (local_60 * local_60 + fStack_5c * fStack_5c) * param_4;
        local_20 = (undefined1  [8])auVar19._0_8_;
        fStack_3c = -(fStack_5c * local_60 * param_4);
        fStack_38 = -(fStack_58 * local_60 * param_4);
        pfStack_28 = (float *)-(fStack_58 * fStack_5c * param_4);
        fStack_2c = (local_60 * local_60 + fStack_58 * fStack_58) * param_4;
        local_20._4_4_ = pfStack_28;
        local_20._0_4_ = fStack_38;
        local_30 = fStack_3c;
      }
      else {
        auVar16._4_4_ = fVar9;
        auVar16._0_4_ = fVar9;
        auVar16._8_4_ = fVar9;
        auVar16._12_4_ = fVar9;
        fVar12 = fVar10 + fVar9 + fVar11;
        fVar13 = fVar10 + fVar9 + fVar11;
        fVar14 = fVar10 + fVar9 + fVar11;
        fVar11 = fVar10 + fVar9 + fVar11;
        auVar1._4_4_ = fVar13;
        auVar1._0_4_ = fVar12;
        auVar1._8_4_ = fVar14;
        auVar1._12_4_ = fVar11;
        auVar20 = rsqrtps(auVar16,auVar1);
        fVar9 = auVar20._0_4_;
        fVar15 = auVar20._4_4_;
        fVar17 = auVar20._8_4_;
        fVar18 = auVar20._12_4_;
        fVar10 = param_5 * 0.5;
        local_140 = local_140 *
                    (float)(~-(uint)(fVar12 <= 0.0) &
                           (uint)((3.0 - fVar9 * fVar12 * fVar9) * fVar9 * 0.5));
        fStack_13c = fStack_13c *
                     (float)(~-(uint)(fVar13 <= 0.0) &
                            (uint)((3.0 - fVar15 * fVar13 * fVar15) * fVar15 * 0.5));
        fStack_138 = fStack_138 *
                     (float)(~-(uint)(fVar14 <= 0.0) &
                            (uint)((3.0 - fVar17 * fVar14 * fVar17) * fVar17 * 0.5));
        fStack_134 = ((fStack_154 - fStack_54) * (fStack_94 - fStack_54) -
                     (fStack_154 - fStack_54) * (fStack_94 - fStack_54)) *
                     (float)(~-(uint)(fVar11 <= 0.0) &
                            (uint)((3.0 - fVar18 * fVar11 * fVar18) * fVar18 * 0.5));
        local_130 = fVar10 * local_140;
        fStack_12c = fVar10 * fStack_13c;
        fStack_128 = fVar10 * fStack_138;
        fStack_124 = fVar10 * fStack_134;
        local_170 = local_130 + local_160;
        fStack_16c = fStack_12c + fStack_15c;
        fStack_168 = fStack_128 + fStack_158;
        fStack_164 = fStack_124 + fStack_154;
        local_140 = (0.0 - fVar10) * local_140;
        fStack_13c = (0.0 - fVar10) * fStack_13c;
        fStack_138 = (0.0 - fVar10) * fStack_138;
        fStack_134 = (0.0 - fVar10) * fStack_134;
        local_160 = local_140 + local_160;
        fStack_15c = fStack_13c + fStack_15c;
        fStack_158 = fStack_138 + fStack_158;
        fStack_154 = fStack_134 + fStack_154;
        local_150 = local_130 + local_60;
        fStack_14c = fStack_12c + fStack_5c;
        fStack_148 = fStack_128 + fStack_58;
        fStack_144 = fStack_124 + fStack_54;
        local_130 = local_130 + local_a0;
        fStack_12c = fStack_12c + fStack_9c;
        fStack_128 = fStack_128 + fStack_98;
        fStack_124 = fStack_124 + fStack_94;
        pfVar3 = &local_170;
        local_120 = local_140 + local_a0;
        fStack_11c = fStack_13c + fStack_9c;
        fStack_118 = fStack_138 + fStack_98;
        fStack_114 = fStack_134 + fStack_94;
        local_140 = local_140 + local_60;
        fStack_13c = fStack_13c + fStack_5c;
        fStack_138 = fStack_138 + fStack_58;
        fStack_134 = fStack_134 + fStack_54;
        local_110 = 0;
        local_10c = 0;
        local_100 = 0.0;
        fStack_fc = 0.0;
        fStack_f8 = 0.0;
        fStack_f4 = 0.0;
        local_f0 = 0.0;
        fStack_ec = 0.0;
        fStack_e8 = 0.0;
        fStack_e4 = 0.0;
        local_e0 = 0.0;
        fStack_dc = 0.0;
        pfStack_d8 = (float *)0x0;
        fStack_d4 = 0.0;
        local_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        pfStack_28 = (float *)0x0;
        fStack_24 = 0.0;
        _local_20 = ZEXT812(0x80000000);
        fStack_14 = -0.0;
        local_44 = 1.34525e-43;
        pfStack_28 = (float *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_44);
        auVar20 = _local_20;
        iVar7 = 6;
        local_20._0_4_ = (int)((int)local_44 + ((int)local_44 >> 0x1f & 0xfU)) >> 4;
        auVar19 = _local_20;
        fStack_24 = 8.40779e-45;
        pfVar5 = pfStack_28;
        do {
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          *pfVar5 = *pfVar3;
          pfVar5[1] = fVar9;
          pfVar5[2] = fVar10;
          pfVar5[3] = fVar11;
          pfVar3 = pfVar3 + 4;
          pfVar5 = pfVar5 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        fStack_18 = auVar20._8_4_;
        fVar9 = fStack_18;
        fStack_14 = auVar20._12_4_;
        iVar7 = (int)fStack_18 + 1;
        uVar4 = (uint)fStack_14 & 0x3fffffff;
        _local_20 = auVar19;
        if ((int)uVar4 < iVar7) {
          iVar6 = uVar4 * 2;
          if (iVar7 < iVar6) {
            iVar7 = iVar6;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar7,0x10);
        }
        puVar8 = (undefined4 *)((int)fVar9 * 0x10 + local_20._4_4_);
        fVar9 = fStack_18;
        iVar7 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar7;
        *puVar8 = 0;
        puVar8[1] = 2;
        puVar8[2] = 4;
        puVar8[3] = 0xffffffff;
        iVar6 = (int)fVar9 + 2;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar6) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar6,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar6 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar6;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar7 * 0x10 + local_20._4_4_);
        *puVar8 = 1;
        puVar8[1] = 5;
        puVar8[2] = 3;
        puVar8[3] = 0xffffffff;
        iVar7 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar7) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar7,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar7 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar7;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar6 * 0x10 + local_20._4_4_);
        *puVar8 = 0;
        puVar8[1] = 3;
        puVar8[2] = 2;
        puVar8[3] = 0xffffffff;
        iVar6 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar6) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar6,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar6 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar6;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar7 * 0x10 + local_20._4_4_);
        *puVar8 = 0;
        puVar8[1] = 1;
        puVar8[2] = 3;
        puVar8[3] = 0xffffffff;
        iVar7 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar7) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar7,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar7 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar7;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar6 * 0x10 + local_20._4_4_);
        *puVar8 = 1;
        puVar8[1] = 0;
        puVar8[2] = 4;
        puVar8[3] = 0xffffffff;
        iVar6 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar6) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar6,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar6 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar6;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar7 * 0x10 + local_20._4_4_);
        *puVar8 = 1;
        puVar8[1] = 4;
        puVar8[2] = 5;
        puVar8[3] = 0xffffffff;
        iVar7 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar7) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar7,0x10);
        }
        auVar19 = _local_20;
        fVar9 = fStack_18;
        iVar7 = (int)fStack_18 + 1;
        fStack_18 = (float)iVar7;
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar6 * 0x10 + local_20._4_4_);
        *puVar8 = 2;
        puVar8[1] = 5;
        puVar8[2] = 4;
        puVar8[3] = 0xffffffff;
        iVar6 = (int)fVar9 + 2;
        _local_20 = auVar20;
        if ((int)((uint)fStack_14 & 0x3fffffff) < iVar6) {
          iVar2 = ((uint)fStack_14 & 0x3fffffff) * 2;
          if (iVar6 < iVar2) {
            iVar6 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_20 + 4,iVar6,0x10);
        }
        auVar19 = _local_20;
        fStack_18 = (float)((int)fStack_18 + 1);
        auVar20 = _local_20;
        local_20._4_4_ = auVar19._4_4_;
        puVar8 = (undefined4 *)(iVar7 * 0x10 + local_20._4_4_);
        *puVar8 = 2;
        puVar8[1] = 3;
        puVar8[2] = 5;
        puVar8[3] = 0xffffffff;
        _local_20 = auVar20;
        FUN_010615c0(&pfStack_28,param_4,&local_110);
        FUN_009211c0();
        local_20._4_4_ = uStack_cc;
        local_20._0_4_ = local_d0;
        fStack_18 = (float)uStack_c8;
        fStack_14 = (float)uStack_c4;
        fStack_24 = fStack_d4;
        pfStack_28 = pfStack_d8;
        fStack_2c = fStack_dc;
        local_30 = local_e0;
        fStack_34 = fStack_e4;
        fStack_38 = fStack_e8;
        fStack_3c = fStack_ec;
        local_40 = local_f0;
        fStack_54 = fStack_f4;
        fStack_58 = fStack_f8;
        fStack_5c = fStack_fc;
        local_60 = local_100;
      }
    }
    else {
      local_60 = (local_160 + local_60 + local_a0) * 0.33333334;
      fStack_5c = (fStack_15c + fStack_5c + fStack_9c) * 0.33333334;
      fStack_58 = (fStack_158 + fStack_58 + fStack_98) * 0.33333334;
      fStack_54 = (fStack_154 + fStack_54 + fStack_94) * 0.33333334;
      local_88 = *param_2;
      local_70 = *param_3;
      local_74 = param_2[1];
      local_8c = *param_1;
      local_80 = local_60 * 9.0;
      local_44 = param_3[1];
      fVar9 = param_4 * 0.083333336;
      local_68 = param_1[1];
      local_7c = fStack_5c * 9.0;
      local_6c = param_2[2];
      local_78 = param_1[2];
      local_84 = param_3[2];
      local_40 = (fStack_58 * 9.0 * fStack_58 + local_78 * local_78 + local_6c * local_6c +
                 local_84 * local_84) * fVar9;
      fVar11 = (local_60 * local_80 + local_8c * local_8c + local_88 * local_88 +
               local_70 * local_70) * fVar9;
      fStack_2c = local_40 + fVar11;
      fVar10 = (fStack_5c * local_7c + local_68 * local_68 + local_74 * local_74 +
               local_44 * local_44) * fVar9;
      local_40 = local_40 + fVar10;
      fStack_3c = -((fStack_5c * local_80 + local_68 * local_8c + local_74 * local_88 +
                    local_44 * local_70) * fVar9);
      fStack_18 = fVar10 + fVar11;
      local_20 = (undefined1  [8])auVar19._0_8_;
      fVar10 = (fStack_58 * local_80 + local_78 * local_8c + local_6c * local_88 +
               local_84 * local_70) * fVar9;
      fStack_38 = -fVar10;
      fVar9 = (fStack_58 * local_7c + local_78 * local_68 + local_6c * local_74 +
              local_84 * local_44) * fVar9;
      pfStack_28 = (float *)-fVar9;
      local_20 = (undefined1  [8])(CONCAT44(fVar9,fVar10) ^ 0x8000000080000000);
      local_30 = fStack_3c;
      FUN_0105fdb0(&local_60,param_4,&local_40);
    }
    param_6[1] = param_4;
    param_6[8] = local_40;
    param_6[9] = fStack_3c;
    param_6[10] = fStack_38;
    param_6[0xb] = fStack_34;
    param_6[0xc] = local_30;
    param_6[0xd] = fStack_2c;
    param_6[0xe] = (float)pfStack_28;
    param_6[0xf] = fStack_24;
    param_6[0x10] = (float)local_20._0_4_;
    param_6[0x11] = (float)local_20._4_4_;
    param_6[0x12] = fStack_18;
    param_6[0x13] = fStack_14;
    param_6[4] = local_60;
    param_6[5] = fStack_5c;
    param_6[6] = fStack_58;
    param_6[7] = fStack_54;
    *param_6 = local_64 * 0.5 * param_5;
    return 0;
  }
  return 1;
}

// 01062B30  FUN_01062b30  size=2255  [run]
undefined4
FUN_01062b30(float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 *local_350;
  uint local_34c;
  uint local_348;
  undefined1 local_340 [64];
  undefined1 local_300 [368];
  undefined1 local_190 [32];
  float local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0 [4];
  float local_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [16];
  float local_48;
  float local_44;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((param_4 <= 0.0) || (param_3 <= 0.0)) {
    return 1;
  }
  fVar20 = *param_2 - *param_1;
  fVar21 = param_2[1] - param_1[1];
  fVar22 = param_2[2] - param_1[2];
  fVar7 = fVar20 * fVar20;
  fVar8 = fVar21 * fVar21;
  fVar9 = fVar22 * fVar22;
  fVar13 = fVar8 + fVar7 + fVar9;
  fVar14 = fVar8 + fVar7 + fVar9;
  fVar15 = fVar8 + fVar7 + fVar9;
  fVar17 = fVar8 + fVar7 + fVar9;
  local_60._0_12_ = ZEXT812(0);
  local_60._12_4_ = 0;
  auVar10._4_4_ = -(uint)(fVar14 <= 0.0);
  auVar10._0_4_ = -(uint)(fVar13 <= 0.0);
  auVar10._8_4_ = -(uint)(fVar15 <= 0.0);
  auVar10._12_4_ = -(uint)(fVar17 <= 0.0);
  auVar12._4_4_ = fVar14;
  auVar12._0_4_ = fVar13;
  auVar12._8_4_ = fVar15;
  auVar12._12_4_ = fVar17;
  _local_40 = rsqrtps(auVar10,auVar12);
  fVar18 = local_40._0_4_;
  local_140 = 3.0 - fVar18 * fVar13 * fVar18;
  fStack_13c = 3.0 - local_40._4_4_ * fVar14 * local_40._4_4_;
  fStack_138 = 3.0 - local_40._8_4_ * fVar15 * local_40._8_4_;
  fStack_134 = 3.0 - local_40._12_4_ * fVar17 * local_40._12_4_;
  fVar18 = (float)(~-(uint)(fVar13 <= 0.0) & (uint)(local_140 * fVar18 * 0.5 * fVar13));
  if (0.0 < fVar18) {
    auVar11._4_4_ = fVar7;
    auVar11._0_4_ = fVar7;
    auVar11._8_4_ = fVar7;
    auVar11._12_4_ = fVar7;
    fVar15 = fVar8 + fVar7 + fVar9;
    fVar17 = fVar8 + fVar7 + fVar9;
    fVar16 = fVar8 + fVar7 + fVar9;
    fVar9 = fVar8 + fVar7 + fVar9;
    auVar1._4_4_ = fVar17;
    auVar1._0_4_ = fVar15;
    auVar1._8_4_ = fVar16;
    auVar1._12_4_ = fVar9;
    auVar12 = rsqrtps(auVar11,auVar1);
    fVar7 = auVar12._0_4_;
    fVar8 = auVar12._4_4_;
    fVar13 = auVar12._8_4_;
    fVar14 = auVar12._12_4_;
    fVar20 = (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar7 * fVar15 * fVar7) * fVar7 * 0.5))
             * fVar20;
    fVar21 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar8 * fVar17 * fVar8) * fVar8 * 0.5))
             * fVar21;
    fVar22 = (float)(~-(uint)(fVar16 <= 0.0) &
                    (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * 0.5)) * fVar22;
    fVar7 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar14 * fVar9 * fVar14) * fVar14 * 0.5))
            * (param_2[3] - param_1[3]);
    if (ABS(fVar21 * 0.0 + fVar20 * 0.0 + fVar22 * 1.0) < 0.99999) {
      local_140 = fVar22 * 0.0 - fVar21 * 1.0;
      fStack_13c = fVar20 * 1.0 - fVar22 * 0.0;
      fStack_138 = fVar21 * 0.0 - fVar20 * 0.0;
      fVar8 = local_140 * local_140;
      fVar9 = fStack_13c * fStack_13c;
      fVar13 = fStack_138 * fStack_138;
      fVar14 = fVar9 + fVar8 + fVar13;
      fVar15 = fVar9 + fVar8 + fVar13;
      fVar17 = fVar9 + fVar8 + fVar13;
      fVar13 = fVar9 + fVar8 + fVar13;
      auVar2._4_4_ = fVar15;
      auVar2._0_4_ = fVar14;
      auVar2._8_4_ = fVar17;
      auVar2._12_4_ = fVar13;
      auVar12 = rsqrtps(local_60,auVar2);
      fVar8 = auVar12._0_4_;
      fVar9 = auVar12._4_4_;
      fVar16 = auVar12._8_4_;
      fVar19 = auVar12._12_4_;
      local_140 = (float)(~-(uint)(fVar14 <= 0.0) &
                         (uint)((3.0 - fVar8 * fVar14 * fVar8) * fVar8 * 0.5)) * local_140;
      fStack_13c = (float)(~-(uint)(fVar15 <= 0.0) &
                          (uint)((3.0 - fVar9 * fVar15 * fVar9) * fVar9 * 0.5)) * fStack_13c;
      fStack_138 = (float)(~-(uint)(fVar17 <= 0.0) &
                          (uint)((3.0 - fVar16 * fVar17 * fVar16) * fVar16 * 0.5)) * fStack_138;
      fStack_134 = (float)(~-(uint)(fVar13 <= 0.0) &
                          (uint)((3.0 - fVar19 * fVar13 * fVar19) * fVar19 * 0.5)) *
                   (fVar7 * 0.0 - fVar7 * 0.0);
      fVar7 = fVar22 * 1.0 + fVar21 * 0.0 + fVar20 * 0.0;
      _local_30 = ZEXT416((uint)ABS(fVar7));
      local_14 = fVar18;
      if (ABS(fVar7) < 1.0) {
        FUN_014376e0();
        fVar18 = fVar7;
      }
      else {
        fVar18 = 0.0;
        if (fVar7 <= 0.0) {
          fVar18 = 3.1415927;
        }
      }
      FUN_01007e80(&local_140,fVar18);
      FUN_0100ac20(local_30);
      fVar18 = local_14;
      goto LAB_01062db1;
    }
  }
  local_130 = 0x3f800000;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_120 = 0;
  uStack_11c = 0x3f800000;
  uStack_118 = 0;
  uStack_114 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0x3f800000;
  uStack_104 = 0;
LAB_01062db1:
  auVar12 = local_60;
  fVar8 = (*param_1 + *param_2) * 0.5;
  fVar9 = (param_1[1] + param_2[1]) * 0.5;
  fVar13 = (param_1[2] + param_2[2]) * 0.5;
  fVar14 = (param_1[3] + param_2[3]) * 0.5;
  local_48 = param_3 * 3.1415927 * param_3 * fVar18;
  local_1c = param_3 * 4.1887903 * param_3 * param_3;
  fVar7 = 1.0 / (local_48 + local_1c);
  local_14 = local_1c * param_4 * fVar7;
  fVar7 = local_48 * param_4 * fVar7;
  local_350 = local_340;
  local_34c = 0;
  local_348 = 0x80000003;
  iVar4 = 2;
  pauVar3 = (undefined1 (*) [16])local_300;
  local_100 = fVar8;
  fStack_fc = fVar9;
  fStack_f8 = fVar13;
  fStack_f4 = fVar14;
  local_18 = fVar7;
  do {
    *(undefined4 *)pauVar3[-4] = 0;
    *(undefined4 *)(pauVar3[-4] + 4) = 0;
    pauVar3[-3] = auVar12;
    pauVar3[-2] = auVar12;
    pauVar3[-1] = auVar12;
    *pauVar3 = auVar12;
    *(undefined4 *)pauVar3[1] = 0x3f800000;
    *(undefined4 *)(pauVar3[1] + 4) = 0;
    *(undefined4 *)(pauVar3[1] + 8) = 0;
    *(undefined4 *)(pauVar3[1] + 0xc) = 0;
    *(undefined4 *)pauVar3[2] = 0;
    *(undefined4 *)(pauVar3[2] + 4) = 0x3f800000;
    *(undefined4 *)(pauVar3[2] + 8) = 0;
    *(undefined4 *)(pauVar3[2] + 0xc) = 0;
    *(undefined4 *)pauVar3[3] = 0;
    *(undefined4 *)(pauVar3[3] + 4) = 0;
    *(undefined4 *)(pauVar3[3] + 8) = 0x3f800000;
    *(undefined4 *)(pauVar3[3] + 0xc) = 0;
    pauVar3[4] = auVar12;
    pauVar3 = pauVar3 + 9;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  local_a0 = local_130;
  uStack_9c = uStack_12c;
  uStack_98 = uStack_128;
  uStack_94 = uStack_124;
  local_90 = local_120;
  uStack_8c = uStack_11c;
  uStack_88 = uStack_118;
  uStack_84 = uStack_114;
  local_80 = local_110;
  uStack_7c = uStack_10c;
  uStack_78 = uStack_108;
  uStack_74 = uStack_104;
  local_e0 = 0.0;
  uStack_dc = 0;
  fStack_d8 = 0.0;
  uStack_d4 = 0;
  local_b0 = 0.0;
  uStack_ac = 0;
  uStack_a4 = 0;
  local_44 = fVar18 * 0.5;
  local_d0 = local_44 * fVar18 * 0.5 * 0.33333334 + param_3 * param_3 * 0.25;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0.0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  fStack_a8 = param_3 * param_3 * 0.5;
  local_30._4_4_ = fVar7;
  local_30._0_4_ = fVar7;
  fStack_28 = fVar7;
  fStack_24 = fVar7;
  fStack_bc = local_d0;
  local_70 = fVar8;
  fStack_6c = fVar9;
  fStack_68 = fVar13;
  fStack_64 = fVar14;
  FUN_010136a0(local_30);
  local_f0[0] = local_48;
  local_e0 = (float)local_60._0_4_;
  uStack_dc = local_60._4_4_;
  fStack_d8 = (float)local_60._8_4_;
  uStack_d4 = local_60._12_4_;
  local_f0[1] = local_18;
  if (local_34c == (local_348 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_350,0x90);
  }
  if ((float *)(local_350 + local_34c * 0x90) != (float *)0x0) {
    pfVar5 = local_f0;
    pfVar6 = (float *)(local_350 + local_34c * 0x90);
    for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  local_34c = local_34c + 1;
  local_a0 = local_130;
  uStack_9c = uStack_12c;
  uStack_98 = uStack_128;
  uStack_94 = uStack_124;
  local_90 = local_120;
  uStack_8c = uStack_11c;
  uStack_88 = uStack_118;
  uStack_84 = uStack_114;
  local_80 = local_110;
  uStack_7c = uStack_10c;
  uStack_78 = uStack_108;
  uStack_74 = uStack_104;
  local_70 = local_100;
  fStack_6c = fStack_fc;
  fStack_68 = fStack_f8;
  fStack_64 = fStack_f4;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  _local_40 = ZEXT416((uint)local_44) << 0x40;
  local_e0 = (float)local_60._0_4_;
  uStack_dc = local_60._4_4_;
  fStack_d8 = (float)local_60._8_4_;
  uStack_d4 = local_60._12_4_;
  local_d0 = (float)local_60._0_4_;
  uStack_cc = local_60._4_4_;
  uStack_c8 = local_60._8_4_;
  uStack_c4 = local_60._12_4_;
  local_c0 = (float)local_60._0_4_;
  fStack_bc = (float)local_60._4_4_;
  uStack_b8 = local_60._8_4_;
  uStack_b4 = local_60._12_4_;
  local_b0 = (float)local_60._0_4_;
  uStack_ac = local_60._4_4_;
  fStack_a8 = (float)local_60._8_4_;
  uStack_a4 = local_60._12_4_;
  FUN_01006f50(&local_130,local_40);
  local_70 = local_70 + (float)local_40._0_4_;
  fStack_6c = fStack_6c + (float)local_40._4_4_;
  fStack_68 = fStack_68 + fStack_38;
  fStack_64 = fStack_64 + fStack_34;
  local_40._4_4_ = fStack_6c;
  local_40._0_4_ = local_70;
  fStack_38 = fStack_68;
  fStack_34 = fStack_64;
  fStack_d8 = param_3 * 0.375;
  local_170 = (float)local_60._0_4_;
  uStack_16c = local_60._4_4_;
  uStack_168 = local_60._8_4_;
  uStack_164 = local_60._12_4_;
  local_160 = (float)local_60._0_4_;
  uStack_15c = local_60._4_4_;
  uStack_158 = local_60._8_4_;
  uStack_154 = local_60._12_4_;
  local_150 = (float)local_60._0_4_;
  uStack_14c = local_60._4_4_;
  uStack_148 = local_60._8_4_;
  uStack_144 = local_60._12_4_;
  local_e0 = 0.0;
  uStack_dc = 0;
  uStack_d4 = 0;
  FUN_01060ab0(param_3,local_14,local_190);
  local_d0 = local_170;
  uStack_cc = uStack_16c;
  uStack_c8 = uStack_168;
  uStack_c4 = uStack_164;
  local_c0 = local_160;
  fStack_bc = (float)uStack_15c;
  uStack_b8 = uStack_158;
  uStack_b4 = uStack_154;
  local_b0 = local_150;
  uStack_ac = uStack_14c;
  fStack_a8 = (float)uStack_148;
  uStack_a4 = uStack_144;
  fStack_28 = 0.5;
  local_30 = (undefined1  [8])0x3f0000003f000000;
  fStack_24 = 0.5;
  FUN_010136a0(local_30);
  fVar7 = 0.5;
  fVar18 = local_14 * 0.5;
  local_18 = fVar18;
  FUN_0105fdb0(&local_e0,fVar18,&local_d0);
  local_1c = local_1c * fVar7;
  local_f0[0] = local_1c;
  local_f0[1] = fVar18;
  if (local_34c == (local_348 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_350,0x90);
  }
  if ((float *)(local_350 + local_34c * 0x90) != (float *)0x0) {
    pfVar5 = local_f0;
    pfVar6 = (float *)(local_350 + local_34c * 0x90);
    for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  local_34c = local_34c + 1;
  local_e0 = (float)local_60._0_4_;
  uStack_dc = local_60._4_4_;
  fStack_d8 = (float)local_60._8_4_;
  uStack_d4 = local_60._12_4_;
  local_d0 = (float)local_60._0_4_;
  uStack_cc = local_60._4_4_;
  uStack_c8 = local_60._8_4_;
  uStack_c4 = local_60._12_4_;
  local_c0 = (float)local_60._0_4_;
  fStack_bc = (float)local_60._4_4_;
  uStack_b8 = local_60._8_4_;
  uStack_b4 = local_60._12_4_;
  local_b0 = (float)local_60._0_4_;
  uStack_ac = local_60._4_4_;
  fStack_a8 = (float)local_60._8_4_;
  uStack_a4 = local_60._12_4_;
  local_a0 = local_130;
  uStack_9c = uStack_12c;
  uStack_98 = uStack_128;
  uStack_94 = uStack_124;
  local_90 = local_120;
  uStack_8c = uStack_11c;
  uStack_88 = uStack_118;
  uStack_84 = uStack_114;
  local_80 = local_110;
  uStack_7c = uStack_10c;
  uStack_78 = uStack_108;
  uStack_74 = uStack_104;
  local_70 = local_100;
  fStack_6c = fStack_fc;
  fStack_68 = fStack_f8;
  fStack_64 = fStack_f4;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  _local_40 = ZEXT416((uint)-local_44) << 0x40;
  FUN_01006f50(&local_130,local_40);
  local_70 = local_70 + (float)local_40._0_4_;
  fStack_6c = fStack_6c + (float)local_40._4_4_;
  fStack_68 = fStack_68 + fStack_38;
  fStack_64 = fStack_64 + fStack_34;
  local_40._4_4_ = fStack_6c;
  local_40._0_4_ = local_70;
  fStack_38 = fStack_68;
  fStack_34 = fStack_64;
  fStack_d8 = param_3 * -0.375;
  local_170 = (float)local_60._0_4_;
  uStack_16c = local_60._4_4_;
  uStack_168 = local_60._8_4_;
  uStack_164 = local_60._12_4_;
  local_160 = (float)local_60._0_4_;
  uStack_15c = local_60._4_4_;
  uStack_158 = local_60._8_4_;
  uStack_154 = local_60._12_4_;
  local_150 = (float)local_60._0_4_;
  uStack_14c = local_60._4_4_;
  uStack_148 = local_60._8_4_;
  uStack_144 = local_60._12_4_;
  local_e0 = 0.0;
  uStack_dc = 0;
  uStack_d4 = 0;
  FUN_01060ab0(param_3,local_14,local_190);
  local_d0 = local_170;
  uStack_cc = uStack_16c;
  uStack_c8 = uStack_168;
  uStack_c4 = uStack_164;
  local_c0 = local_160;
  fStack_bc = (float)uStack_15c;
  uStack_b8 = uStack_158;
  uStack_b4 = uStack_154;
  local_b0 = local_150;
  uStack_ac = uStack_14c;
  fStack_a8 = (float)uStack_148;
  uStack_a4 = uStack_144;
  fStack_28 = 0.5;
  local_30 = (undefined1  [8])0x3f0000003f000000;
  fStack_24 = 0.5;
  FUN_010136a0(local_30);
  fVar18 = local_18;
  FUN_0105fdb0(&local_e0,local_18,&local_d0);
  local_f0[0] = local_1c;
  local_f0[1] = fVar18;
  if (local_34c == (local_348 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_350,0x90);
  }
  if ((float *)(local_350 + local_34c * 0x90) != (float *)0x0) {
    pfVar5 = local_f0;
    pfVar6 = (float *)(local_350 + local_34c * 0x90);
    for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  local_34c = local_34c + 1;
  FUN_01060dd0(&local_350,param_5);
  local_34c = 0;
  if (-1 < (int)local_348) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (local_350,((local_348 & 0x3fffffff) + local_348 * 8) * 0x10);
  }
  return 0;
}

// 01063410  FUN_01063410  size=1045  [run]
undefined4
FUN_01063410(float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float *local_f0;
  undefined4 local_ec;
  uint local_e8;
  float local_e0;
  float local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  if ((0.0 < param_4) && (0.0 < param_3)) {
    fVar13 = *param_2 - *param_1;
    fVar14 = param_2[1] - param_1[1];
    fVar16 = param_2[2] - param_1[2];
    fVar3 = fVar13 * fVar13;
    fVar4 = fVar14 * fVar14;
    fVar5 = fVar16 * fVar16;
    fVar9 = fVar4 + fVar3 + fVar5;
    local_50._0_12_ = ZEXT812(0);
    local_50._12_4_ = 0;
    auVar7._4_4_ = fVar4 + fVar3 + fVar5;
    auVar7._0_4_ = fVar9;
    auVar7._8_4_ = fVar4 + fVar3 + fVar5;
    auVar7._12_4_ = fVar4 + fVar3 + fVar5;
    _local_40 = rsqrtps(local_50,auVar7);
    fVar8 = local_40._0_4_;
    local_14 = (float)(~-(uint)(fVar9 <= 0.0) &
                      (uint)((3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5 * fVar9));
    if (0.0 < local_14) {
      auVar6._4_4_ = fVar3;
      auVar6._0_4_ = fVar3;
      auVar6._8_4_ = fVar3;
      auVar6._12_4_ = fVar3;
      fVar10 = fVar4 + fVar3 + fVar5;
      fVar11 = fVar4 + fVar3 + fVar5;
      fVar12 = fVar4 + fVar3 + fVar5;
      fVar5 = fVar4 + fVar3 + fVar5;
      auVar1._4_4_ = fVar11;
      auVar1._0_4_ = fVar10;
      auVar1._8_4_ = fVar12;
      auVar1._12_4_ = fVar5;
      auVar7 = rsqrtps(auVar6,auVar1);
      fVar3 = auVar7._0_4_;
      fVar4 = auVar7._4_4_;
      fVar8 = auVar7._8_4_;
      fVar9 = auVar7._12_4_;
      fVar13 = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar3 * fVar10 * fVar3) * fVar3 * 0.5)) * fVar13;
      fVar14 = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar4 * fVar11 * fVar4) * fVar4 * 0.5)) * fVar14;
      fVar16 = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar8 * fVar12 * fVar8) * fVar8 * 0.5)) * fVar16;
      fVar3 = (float)(~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar9 * fVar5 * fVar9) * fVar9 * 0.5))
              * (param_2[3] - param_1[3]);
      if (0.99999 <= ABS(fVar14 * 0.0 + fVar13 * 0.0 + fVar16 * 1.0)) {
        local_130 = 0x3f800000;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        local_120 = 0;
        uStack_11c = 0x3f800000;
        uStack_118 = 0;
        uStack_114 = 0;
        local_110 = 0;
        uStack_10c = 0;
        uStack_108 = 0x3f800000;
        uStack_104 = 0;
      }
      else {
        fVar12 = fVar16 * 0.0 - fVar14 * 1.0;
        fVar15 = fVar13 * 1.0 - fVar16 * 0.0;
        fVar17 = fVar14 * 0.0 - fVar13 * 0.0;
        fVar4 = fVar12 * fVar12;
        fVar5 = fVar15 * fVar15;
        fVar8 = fVar17 * fVar17;
        auVar18._4_4_ = fVar4;
        auVar18._0_4_ = fVar4;
        auVar18._8_4_ = fVar4;
        auVar18._12_4_ = fVar4;
        fVar9 = fVar5 + fVar4 + fVar8;
        fVar10 = fVar5 + fVar4 + fVar8;
        fVar11 = fVar5 + fVar4 + fVar8;
        fVar8 = fVar5 + fVar4 + fVar8;
        auVar2._4_4_ = fVar10;
        auVar2._0_4_ = fVar9;
        auVar2._8_4_ = fVar11;
        auVar2._12_4_ = fVar8;
        auVar7 = rsqrtps(auVar18,auVar2);
        fVar4 = auVar7._0_4_;
        fVar5 = auVar7._4_4_;
        fVar19 = auVar7._8_4_;
        fVar20 = auVar7._12_4_;
        local_40._4_4_ =
             (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5))
             * fVar15;
        local_40._0_4_ =
             (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar4) * fVar4 * 0.5)) *
             fVar12;
        fStack_38 = (float)(~-(uint)(fVar11 <= 0.0) &
                           (uint)((3.0 - fVar19 * fVar11 * fVar19) * fVar19 * 0.5)) * fVar17;
        fStack_34 = (float)(~-(uint)(fVar8 <= 0.0) &
                           (uint)((3.0 - fVar20 * fVar8 * fVar20) * fVar20 * 0.5)) *
                    (fVar3 * 0.0 - fVar3 * 0.0);
        fVar3 = fVar16 * 1.0 + fVar14 * 0.0 + fVar13 * 0.0;
        local_30 = ABS(fVar3);
        fStack_2c = 0.0;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
        if (local_30 < 1.0) {
          FUN_014376e0();
          fVar13 = fVar3;
        }
        else {
          fVar13 = 0.0;
          if (fVar3 <= 0.0) {
            fVar13 = 3.1415927;
          }
        }
        FUN_01007e80(local_40,fVar13);
        FUN_0100ac20(&local_30);
      }
      local_60 = (*param_1 + *param_2) * 0.5;
      fStack_5c = (param_1[1] + param_2[1]) * 0.5;
      fStack_58 = (param_1[2] + param_2[2]) * 0.5;
      fStack_54 = (param_1[3] + param_2[3]) * 0.5;
      local_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_e0 = 0.0;
      local_dc = 0.0;
      local_a0 = 0;
      uStack_9c = 0;
      uStack_94 = 0;
      local_90 = local_130;
      uStack_8c = uStack_12c;
      uStack_88 = uStack_128;
      uStack_84 = uStack_124;
      local_80 = local_120;
      uStack_7c = uStack_11c;
      uStack_78 = uStack_118;
      uStack_74 = uStack_114;
      local_70 = local_110;
      uStack_6c = uStack_10c;
      uStack_68 = uStack_108;
      uStack_64 = uStack_104;
      local_c0 = local_14 * 0.5 * local_14 * 0.5 * 0.33333334 + param_3 * param_3 * 0.25;
      local_f0 = &local_e0;
      fStack_98 = param_3 * param_3 * 0.5;
      local_e8 = 0x80000001;
      local_ec = 1;
      local_30 = param_4;
      fStack_2c = param_4;
      fStack_28 = param_4;
      fStack_24 = param_4;
      fStack_ac = local_c0;
      local_14 = param_3 * 3.1415927 * param_3 * local_14;
      FUN_010136a0(&local_30);
      local_d0 = local_50._0_4_;
      uStack_cc = local_50._4_4_;
      uStack_c8 = local_50._8_4_;
      uStack_c4 = local_50._12_4_;
      local_e0 = local_14;
      local_dc = param_4;
      FUN_01060dd0(&local_f0,param_5);
      local_ec = 0;
      if (-1 < (int)local_e8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (local_f0,((local_e8 & 0x3fffffff) + local_e8 * 8) * 0x10);
      }
      return 0;
    }
  }
  return 1;
}

// 01063C20  FUN_01063c20  size=12  [run]
float10 FUN_01063c20(float param_1)

{
  return (float10)param_1 * (float10)param_1;
}

// 01063C30  FUN_01063c30  size=16  [run]
float10 FUN_01063c30(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  return fVar1 * fVar1 * fVar1;
}

// 01063C40  FUN_01063c40  size=11  [run]
int FUN_01063c40(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01063C50  FUN_01063c50  size=18  [run]
int __thiscall FUN_01063c50(int *param_1,int param_2)

{
  return param_2 * 0x90 + *param_1;
}

// 01063C90  FUN_01063c90  size=32  [run]
void __thiscall FUN_01063c90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01063CD0  FUN_01063cd0  size=28  [run]
void __thiscall FUN_01063cd0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x90);
  return;
}

// 01063CF0  FUN_01063cf0  size=11  [run]
int FUN_01063cf0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01063D10  FUN_01063d10  size=22  [run]
void __thiscall
FUN_01063d10(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 01063D30  FUN_01063d30  size=25  [run]
void FUN_01063d30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&UNK_01701b04 + param_2);
  uVar2 = *(undefined4 *)(&UNK_01701b08 + param_2);
  uVar3 = *(undefined4 *)(&UNK_01701b0c + param_2);
  *param_1 = *(undefined4 *)(&DAT_01701b00 + param_2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 01063D50  FUN_01063d50  size=18  [run]
void FUN_01063d50(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01063D70  FUN_01063d70  size=18  [run]
void FUN_01063d70(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01063D90  FUN_01063d90  size=18  [run]
void FUN_01063d90(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01063DB0  FUN_01063db0  size=50  [run]
void __thiscall
FUN_01063db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = param_2;
  param_1[5] = param_3;
  param_1[10] = param_4;
  return;
}

// 01063DF0  FUN_01063df0  size=15  [run]
int __thiscall FUN_01063df0(int param_1,int param_2)

{
  return param_2 * 0x10 + param_1;
}

// 01063E00  FUN_01063e00  size=18  [run]
void FUN_01063e00(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01063E20  FUN_01063e20  size=17  [run]
void __thiscall FUN_01063e20(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return;
}

// 01063E40  FUN_01063e40  size=32  [run]
void __thiscall FUN_01063e40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01063E60  FUN_01063e60  size=49  [run]
void FUN_01063e60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar2 = param_3;
        puVar3 = param_1;
        for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = param_1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01063F00  FUN_01063f00  size=54  [run]
void __thiscall FUN_01063f00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
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
  return;
}

// 01063F40  FUN_01063f40  size=70  [run]
int __thiscall FUN_01063f40(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,0x10);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x10 + *param_1;
}

// 01063F90  FUN_01063f90  size=72  [run]
void __thiscall FUN_01063f90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x90);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01063FE0  FUN_01063fe0  size=55  [run]
void __thiscall FUN_01063fe0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01064020  FUN_01064020  size=63  [run]
void __thiscall FUN_01064020(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01064060  FUN_01064060  size=101  [run]
void FUN_01064060(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000040) {
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        puVar1[-0xc] = 0;
        puVar1[-0xb] = 0;
        puVar1[-10] = 0;
        puVar1[-9] = 0;
        puVar1[-8] = 0;
        puVar1[-7] = 0;
        puVar1[-6] = 0;
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x3f800000;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0x3f800000;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0x3f800000;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
      }
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010640D0  FUN_010640d0  size=71  [run]
int __thiscall FUN_010640d0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x10);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x10 + *param_1;
}

// 01064120  FUN_01064120  size=73  [run]
void __thiscall FUN_01064120(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01064170  FUN_01064170  size=56  [run]
void __thiscall FUN_01064170(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010641B0  FUN_010641b0  size=27  [run]
void __thiscall FUN_010641b0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffa;
  return;
}

// 010641D0  FUN_010641d0  size=141  [run]
int __thiscall FUN_010641d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x90);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0x3f800000;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0x3f800000;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0x3f800000;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x90 + *param_1;
}

// 01064260  FUN_01064260  size=63  [run]
void __fastcall FUN_01064260(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010642A0  FUN_010642a0  size=60  [run]
void __fastcall FUN_010642a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010642E0  FUN_010642e0  size=136  [run]
int __fastcall FUN_010642e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0x3f800000;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0x3f800000;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0x3f800000;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x90 + *param_1;
}

// 01064370  FUN_01064370  size=63  [run]
void __fastcall FUN_01064370(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010643B0  FUN_010643b0  size=121  [run]
void __thiscall FUN_010643b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 4;
  param_1[1] = param_2;
  *param_1 = puVar2;
  param_1[2] = 0x80000003;
  iVar1 = 2;
  param_1 = param_1 + 0x14;
  do {
    *puVar2 = 0;
    param_1[-0xf] = 0;
    param_1[-0xc] = 0;
    param_1[-0xb] = 0;
    param_1[-10] = 0;
    param_1[-9] = 0;
    param_1[-8] = 0;
    param_1[-7] = 0;
    param_1[-6] = 0;
    param_1[-5] = 0;
    param_1[-4] = 0;
    param_1[-3] = 0;
    param_1[-2] = 0;
    param_1[-1] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0x3f800000;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0x3f800000;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0x3f800000;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar2 = puVar2 + 0x24;
    param_1 = param_1 + 0x24;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 01064440  FUN_01064440  size=98  [run]
void __thiscall FUN_01064440(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_1 + 4;
  param_1[1] = param_2;
  param_1[2] = 0x80000001;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}

// 010644B0  FUN_010644b0  size=63  [run]
void __fastcall FUN_010644b0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010644F0  FUN_010644f0  size=63  [run]
void __fastcall FUN_010644f0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01064530  FUN_01064530  size=8  [run]
undefined4 FUN_01064530(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064540  FUN_01064540  size=8  [run]
undefined4 FUN_01064540(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064560  FUN_01064560  size=21  [run]
void FUN_01064560(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010652a0(param_2);
  }
  return;
}

// 010645C0  FUN_010645c0  size=21  [run]
void FUN_010645c0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape_2(param_2);
  }
  return;
}

// 010645E0  FUN_010645e0  size=16  [run]
void FUN_010645e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010645F0  FUN_010645f0  size=46  [run]
undefined4 FUN_010645f0(void)

{
  undefined4 local_40;
  
  hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape_2(0);
  return local_40;
}

// 01064620  FUN_01064620  size=27  [run]
void FUN_01064620(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01064640  FUN_01064640  size=22  [run]
void __fastcall FUN_01064640(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01064660  FUN_01064660  size=39  [run]
void FUN_01064660(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 01064690  FUN_01064690  size=22  [run]
void __fastcall FUN_01064690(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010646B0  FUN_010646b0  size=61  [run]
int * __thiscall FUN_010646b0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010646F0  FUN_010646f0  size=8  [run]
undefined4 FUN_010646f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010647A0  FUN_010647a0  size=42  [run]
void FUN_010647a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x104);
  }
  return;
}

// 010647E0  FUN_010647e0  size=51  [run]
int __thiscall FUN_010647e0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x104);
  }
  return param_1;
}

// 010648B0  FUN_010648b0  size=8  [run]
undefined4 FUN_010648b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064900  FUN_01064900  size=8  [run]
undefined4 FUN_01064900(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064910  FUN_01064910  size=8  [run]
undefined4 FUN_01064910(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064980  FUN_01064980  size=21  [run]
void FUN_01064980(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMultipleVertexBuffer::hkMultipleVertexBuffer(param_2);
  }
  return;
}

// 010649A0  FUN_010649a0  size=16  [run]
void FUN_010649a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010649B0  FUN_010649b0  size=55  [run]
undefined4 FUN_010649b0(void)

{
  undefined4 local_160;
  
  hkMultipleVertexBuffer::hkMultipleVertexBuffer(0);
  return local_160;
}

// 01064A00  FUN_01064a00  size=27  [run]
void FUN_01064a00(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01064A30  FUN_01064a30  size=22  [run]
void __fastcall FUN_01064a30(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01064A50  FUN_01064a50  size=39  [run]
void FUN_01064a50(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01064A90  FUN_01064a90  size=22  [run]
void __fastcall FUN_01064a90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01064AB0  FUN_01064ab0  size=61  [run]
int * __thiscall FUN_01064ab0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01064AF0  FUN_01064af0  size=8  [run]
undefined4 FUN_01064af0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064B00  FUN_01064b00  size=8  [run]
undefined4 FUN_01064b00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064B30  FUN_01064b30  size=21  [run]
void FUN_01064b30(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkIndexedTransformSet::hkIndexedTransformSet(param_2);
  }
  return;
}

// 01064B50  FUN_01064b50  size=16  [run]
void FUN_01064b50(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01064B60  FUN_01064b60  size=46  [run]
undefined4 FUN_01064b60(void)

{
  undefined4 local_60;
  
  hkIndexedTransformSet::hkIndexedTransformSet(0);
  return local_60;
}

// 01064BA0  FUN_01064ba0  size=64  [run]
void FUN_01064ba0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01064BF0  FUN_01064bf0  size=39  [run]
void FUN_01064bf0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01064C40  FUN_01064c40  size=59  [run]
void __fastcall FUN_01064c40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01064C80  FUN_01064c80  size=99  [run]
undefined4 * __thiscall FUN_01064c80(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01064CF0  FUN_01064cf0  size=8  [run]
undefined4 FUN_01064cf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064D10  FUN_01064d10  size=21  [run]
void FUN_01064d10(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkSkinnedRefMeshShape::hkSkinnedRefMeshShape(param_2);
  }
  return;
}

// 01064D30  FUN_01064d30  size=16  [run]
void FUN_01064d30(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01064D40  FUN_01064d40  size=46  [run]
undefined4 FUN_01064d40(void)

{
  undefined4 local_40;
  
  hkSkinnedRefMeshShape::hkSkinnedRefMeshShape(0);
  return local_40;
}

// 01064D70  FUN_01064d70  size=8  [run]
undefined4 FUN_01064d70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064D90  FUN_01064d90  size=21  [run]
void FUN_01064d90(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer_2(param_2);
  }
  return;
}

// 01064DB0  FUN_01064db0  size=16  [run]
void FUN_01064db0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01064DC0  FUN_01064dc0  size=55  [run]
undefined4 FUN_01064dc0(void)

{
  undefined4 local_1c0;
  
  hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer_2(0);
  return local_1c0;
}

// 01064E20  FUN_01064e20  size=8  [run]
undefined4 FUN_01064e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01064E40  FUN_01064e40  size=16  [run]
void FUN_01064e40(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01064E50  hkMemoryMeshTexture::hkMemoryMeshTexture_3  size=30  [run]
void hkMemoryMeshTexture::hkMemoryMeshTexture_3(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 01064E70  hkMemoryMeshTexture::hkMemoryMeshTexture_4  size=53  [run]
undefined ** hkMemoryMeshTexture::hkMemoryMeshTexture_4(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 01064EF0  FUN_01064ef0  size=38  [run]
void FUN_01064ef0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01064F20  hkMeshTexture::vf00  size=53  [run]
undefined4 * __thiscall hkMeshTexture::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01064F70  hkMemoryMeshTexture::hkMemoryMeshTexture_2  size=31  [run]
undefined4 * __thiscall
hkMemoryMeshTexture::hkMemoryMeshTexture_2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 01064F90  FUN_01064f90  size=38  [run]
void FUN_01064f90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01064FC0  hkBaseObject::hkBaseObject_245  size=73  [run]
void __fastcall hkBaseObject::hkBaseObject_245(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 01065010  hkMemoryMeshTexture::vf00  size=116  [run]
undefined4 * __thiscall hkMemoryMeshTexture::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  FUN_01006770();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01065090  FUN_01065090  size=8  [run]
undefined4 FUN_01065090(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010650B0  FUN_010650b0  size=21  [run]
void FUN_010650b0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryMeshShape::hkMemoryMeshShape_2(param_2);
  }
  return;
}

// 010650D0  FUN_010650d0  size=16  [run]
void FUN_010650d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010650E0  FUN_010650e0  size=46  [run]
undefined4 FUN_010650e0(void)

{
  undefined4 local_40;
  
  hkMemoryMeshShape::hkMemoryMeshShape_2(0);
  return local_40;
}

// 01065110  FUN_01065110  size=8  [run]
undefined4 FUN_01065110(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01065130  FUN_01065130  size=21  [run]
void FUN_01065130(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryMeshMaterial::hkMemoryMeshMaterial_2(param_2);
  }
  return;
}

// 01065150  FUN_01065150  size=16  [run]
void FUN_01065150(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01065160  FUN_01065160  size=46  [run]
undefined4 FUN_01065160(void)

{
  undefined4 local_70;
  
  hkMemoryMeshMaterial::hkMemoryMeshMaterial_2(0);
  return local_70;
}

// 01065190  FUN_01065190  size=8  [run]
undefined4 FUN_01065190(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010651B0  FUN_010651b0  size=21  [run]
void FUN_010651b0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkMemoryMeshBody::hkMemoryMeshBody_2(param_2);
  }
  return;
}

// 010651D0  FUN_010651d0  size=16  [run]
void FUN_010651d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010651E0  FUN_010651e0  size=46  [run]
undefined4 FUN_010651e0(void)

{
  undefined4 local_80;
  
  hkMemoryMeshBody::hkMemoryMeshBody_2(0);
  return local_80;
}

// 01065230  hkSkinnedMeshShape::hkSkinnedMeshShape  size=18  [run]
void __fastcall hkSkinnedMeshShape::hkSkinnedMeshShape(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  return;
}

// 01065250  hkSkinnedMeshShape::hkSkinnedMeshShape_2  size=11  [run]
void __fastcall hkSkinnedMeshShape::hkSkinnedMeshShape_2(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01065260  hkBaseObject::hkBaseObject_242  size=7  [run]
void __fastcall hkBaseObject::hkBaseObject_242(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01065270  hkStorageSkinnedMeshShape::vf08  size=6  [run]
undefined * hkStorageSkinnedMeshShape::vf08(void)

{
  return &DAT_0209a460;
}

// 01065280  hkStorageSkinnedMeshShape::vf24  size=12  [run]
void hkStorageSkinnedMeshShape::vf24(void)

{
  FUN_01006780();
  return;
}

// 01065290  FUN_01065290  size=14  [run]
void __fastcall FUN_01065290(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 010652A0  FUN_010652a0  size=5  [run]
undefined4 __fastcall FUN_010652a0(undefined4 param_1)

{
  return param_1;
}

// 010652B0  hkStorageSkinnedMeshShape::vf0C  size=4  [run]
undefined4 __fastcall hkStorageSkinnedMeshShape::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 010652C0  hkStorageSkinnedMeshShape::vf14  size=4  [run]
undefined4 __fastcall hkStorageSkinnedMeshShape::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 010652D0  hkStorageSkinnedMeshShape::vf20  size=7  [run]
uint __fastcall hkStorageSkinnedMeshShape::vf20(int param_1)

{
  return *(uint *)(param_1 + 0x20) & 0xfffffffe;
}

// 010652E0  hkStorageSkinnedMeshShape::vf10  size=65  [run]
void __thiscall hkStorageSkinnedMeshShape::vf10(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + param_2 * 8);
  if (*piVar1 != 0) {
    FUN_01006000();
  }
  if (*param_3 != 0) {
    FUN_010060a0();
  }
  *param_3 = *piVar1;
  *(short *)(param_3 + 1) = (short)piVar1[1];
  *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)piVar1 + 6);
  return;
}

// 01065330  hkStorageSkinnedMeshShape::vf18  size=68  [run]
void __thiscall hkStorageSkinnedMeshShape::vf18(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2 * 0x30 + *(int *)(param_1 + 0x14));
  *param_3 = *puVar4;
  param_3[1] = puVar4[1];
  param_3[2] = puVar4[2];
  param_3[3] = puVar4[3];
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(puVar4 + 4);
  *(undefined2 *)((int)param_3 + 0x12) = *(undefined2 *)((int)puVar4 + 0x12);
  uVar1 = puVar4[9];
  uVar2 = puVar4[10];
  uVar3 = puVar4[0xb];
  param_3[8] = puVar4[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  return;
}

// 01065380  hkStorageSkinnedMeshShape::vf30  size=268  [run]
void __fastcall hkStorageSkinnedMeshShape::vf30(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  iVar8 = *(int *)(param_1 + 0x18);
  do {
    iVar8 = iVar8 + -1;
    bVar7 = false;
    if (iVar8 < 1) {
      return;
    }
    iVar10 = 0;
    local_14 = iVar8;
    do {
      iVar6 = *(int *)(param_1 + 0x14);
      if (*(ushort *)(iVar6 + 0x40 + iVar10) < *(ushort *)(iVar6 + 0x10 + iVar10)) {
        uVar1 = *(undefined8 *)(iVar6 + iVar10);
        puVar9 = (undefined4 *)(iVar6 + iVar10);
        uVar2 = *(undefined8 *)(puVar9 + 2);
        uVar3 = *(undefined8 *)(puVar9 + 4);
        uVar4 = *(undefined8 *)(puVar9 + 8);
        uVar5 = *(undefined8 *)(puVar9 + 10);
        *puVar9 = *(undefined4 *)(iVar6 + 0x30 + iVar10);
        puVar9[1] = puVar9[0xd];
        puVar9[2] = puVar9[0xe];
        puVar9[3] = puVar9[0xf];
        *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar9 + 0x10);
        *(undefined2 *)((int)puVar9 + 0x12) = *(undefined2 *)((int)puVar9 + 0x42);
        local_50 = (undefined4)uVar1;
        puVar9[8] = puVar9[0x14];
        puVar9[9] = puVar9[0x15];
        puVar9[10] = puVar9[0x16];
        puVar9[0xb] = puVar9[0x17];
        local_30 = (undefined4)uVar4;
        uStack_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_28 = (undefined4)uVar5;
        uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar9[0xc] = local_50;
        uStack_4c = (undefined4)((ulonglong)uVar1 >> 0x20);
        puVar9[0xd] = uStack_4c;
        local_48 = (undefined4)uVar2;
        puVar9[0xe] = local_48;
        uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
        puVar9[0xf] = uStack_44;
        local_40 = (undefined2)uVar3;
        *(undefined2 *)(puVar9 + 0x10) = local_40;
        *(short *)((int)puVar9 + 0x42) = (short)((ulonglong)uVar3 >> 0x10);
        puVar9[0x14] = local_30;
        puVar9[0x15] = uStack_2c;
        puVar9[0x16] = uStack_28;
        puVar9[0x17] = uStack_24;
        bVar7 = true;
      }
      iVar10 = iVar10 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  } while (bVar7);
  return;
}

// 010654A0  hkStorageSkinnedMeshShape::vf28  size=115  [run]
void __thiscall
hkStorageSkinnedMeshShape::vf28(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  if (*piVar1 + *(int *)(param_1 + 0xc) * 8 != 0) {
    FUN_01065290();
  }
  piVar1 = (int *)(*piVar1 + *(int *)(param_1 + 0xc) * 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = param_2;
  *(undefined2 *)(piVar1 + 1) = param_3;
  *(undefined2 *)((int)piVar1 + 6) = param_4;
  return;
}

// 01065520  hkStorageSkinnedMeshShape::vf2C  size=118  [run]
void __thiscall hkStorageSkinnedMeshShape::vf2C(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_1 + 0x18) == (*(uint *)(param_1 + 0x1c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x14),0x30);
  }
  puVar1 = (undefined8 *)(*(int *)(param_1 + 0x18) * 0x30 + *(int *)(param_1 + 0x14));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

