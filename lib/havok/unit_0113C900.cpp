// lib/havok/unit_0113C900.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0113C900..01150560, 568 functions

#include "types.h"

// 0113C900  FUN_0113c900  size=44  [run]
void __thiscall FUN_0113c900(undefined4 *param_1,undefined4 *param_2)

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

// 0113C930  FUN_0113c930  size=44  [run]
void __thiscall FUN_0113c930(undefined4 *param_1,undefined4 *param_2)

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

// 0113C960  FUN_0113c960  size=44  [run]
void __thiscall FUN_0113c960(undefined4 *param_1,undefined4 *param_2)

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

// 0113C990  FUN_0113c990  size=44  [run]
void __thiscall FUN_0113c990(undefined4 *param_1,undefined4 *param_2)

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

// 0113C9C0  FUN_0113c9c0  size=21  [run]
void FUN_0113c9c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0113C9E0  FUN_0113c9e0  size=37  [run]
void FUN_0113c9e0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0113CA90  FUN_0113ca90  size=38  [run]
void FUN_0113ca90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113CAC0  hkBaseObject::hkBaseObject_74  size=109  [run]
void __fastcall hkBaseObject::hkBaseObject_74(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] & 0x3fffffff);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 2);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0113CB30  hkpConvexVerticesConnectivity::vf00  size=52  [run]
int __thiscall hkpConvexVerticesConnectivity::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_74();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0113CC10  hkpConvexTransformShape::vf38  size=4  [run]
int __fastcall hkpConvexTransformShape::vf38(int param_1)

{
  return param_1 + 0x14;
}

// 0113CC20  hkpConvexTransformShape::vf40  size=83  [run]
int __thiscall hkpConvexTransformShape::vf40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(param_2,param_3 + -0x60);
  if ((-1 < iVar1) && (iVar1 <= param_3 + -0x60)) {
    if (*(int *)(param_1 + 0x18) == param_1 + 0x60) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return iVar1 + 0x60;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    return 0x60;
  }
  return -1;
}

// 0113CC80  hkpConvexTransformShape::hkpConvexTransformShape_2  size=72  [run]
undefined4 * __thiscall
hkpConvexTransformShape::hkpConvexTransformShape_2
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  hkpSingleShapeContainer::hkpSingleShapeContainer_14
            (0xb,*(undefined4 *)(param_2 + 0x10),param_2,param_4);
  *param_1 = vftable;
  FUN_0100a410(param_3);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

// 0113CCD0  hkpSingleShapeContainer::hkpSingleShapeContainer_9  size=39  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_9(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  param_1[5] = vftable;
  *param_1 = hkpConvexTransformShape::vftable;
  *(undefined1 *)(param_1 + 2) = 0xb;
  return param_1;
}

// 0113CD00  hkpConvexTransformShape::vf10  size=300  [run]
void __thiscall
hkpConvexTransformShape::vf10(int param_1,undefined4 param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(&DAT_01701ca0,0,&local_40);
  local_20 = (local_30 - local_40) * 0.5 * *(float *)(param_1 + 0x40);
  fStack_1c = (fStack_2c - fStack_3c) * 0.5 * *(float *)(param_1 + 0x44);
  fStack_18 = (fStack_28 - fStack_38) * 0.5 * *(float *)(param_1 + 0x48);
  fStack_14 = (fStack_24 - fStack_34) * 0.5 * *(float *)(param_1 + 0x4c);
  local_30 = (local_40 + local_30) * 0.5 * *(float *)(param_1 + 0x40);
  fStack_2c = (fStack_3c + fStack_2c) * 0.5 * *(float *)(param_1 + 0x44);
  fStack_28 = (fStack_38 + fStack_28) * 0.5 * *(float *)(param_1 + 0x48);
  fStack_24 = (fStack_34 + fStack_24) * 0.5 * *(float *)(param_1 + 0x4c);
  FUN_0100a440(&local_80);
  FUN_01004cf0(param_2,&local_80);
  fVar1 = ABS(local_20 * local_80) + ABS(fStack_1c * local_70) + ABS(fStack_18 * local_60) + param_3
  ;
  fVar2 = ABS(local_20 * fStack_7c) + ABS(fStack_1c * fStack_6c) +
          ABS(fStack_18 * fStack_5c) + param_3;
  fVar3 = ABS(local_20 * fStack_78) + ABS(fStack_1c * fStack_68) +
          ABS(fStack_18 * fStack_58) + param_3;
  fVar4 = ABS(local_20 * fStack_74) + ABS(fStack_1c * fStack_64) +
          ABS(fStack_18 * fStack_54) + param_3;
  local_50 = local_30 * local_80 + fStack_2c * local_70 + fStack_28 * local_60 + local_50;
  fStack_4c = local_30 * fStack_7c + fStack_2c * fStack_6c + fStack_28 * fStack_5c + fStack_4c;
  fStack_48 = local_30 * fStack_78 + fStack_2c * fStack_68 + fStack_28 * fStack_58 + fStack_48;
  fStack_44 = local_30 * fStack_74 + fStack_2c * fStack_64 + fStack_28 * fStack_54 + fStack_44;
  param_4[4] = local_50 + fVar1;
  param_4[5] = fStack_4c + fVar2;
  param_4[6] = fStack_48 + fVar3;
  param_4[7] = fStack_44 + fVar4;
  *param_4 = -fVar1 + local_50;
  param_4[1] = -fVar2 + fStack_4c;
  param_4[2] = -fVar3 + fStack_48;
  param_4[3] = -fVar4 + fStack_44;
  return;
}

// 0113CE30  hkpConvexTransformShape::vf18  size=270  [run]
void __thiscall
hkpConvexTransformShape::vf18(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_40;
  int local_28 [2];
  float *local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcCxTransform";
    uVar2 = rdtsc();
    local_18 = (undefined4)uVar2;
    puVar1[1] = local_18;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_6c = 0xffffffff;
  local_60 = 0xffffffff;
  local_70 = 0x3f800000;
  local_40 = 0;
  pcVar4 = (char *)(**(code **)(*param_1 + 0x14))(&local_11,param_2,&local_80);
  if (*pcVar4 != '\0') {
    local_28[0] = param_1[6];
    local_1c = param_3;
    local_20 = *(float **)(param_3 + 8);
    local_28[1] = 0;
    fVar5 = fStack_7c * local_20[6];
    fVar6 = fStack_7c * local_20[7];
    fVar7 = local_80 * local_20[1];
    fVar8 = local_80 * local_20[2];
    fVar9 = local_80 * local_20[3];
    fStack_74 = fStack_78 * local_20[0xb];
    local_80 = fStack_7c * local_20[4] + local_80 * *local_20 + fStack_78 * local_20[8];
    fStack_7c = fStack_7c * local_20[5] + fVar7 + fStack_78 * local_20[9];
    fStack_78 = fVar5 + fVar8 + fStack_78 * local_20[10];
    fStack_74 = fVar6 + fVar9 + fStack_74;
    (**(code **)*param_4)(local_28,&local_80);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 0113CF40  hkpConvexTransformShape::vf20  size=391  [run]
void __thiscall hkpConvexTransformShape::vf20(int param_1,float *param_2,float *param_3)

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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar11 = *param_2;
  fVar13 = param_2[1];
  fVar12 = param_2[2];
  fVar1 = param_2[3];
  fVar3 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x34);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x3c);
  fVar2 = fVar3 * fVar11;
  fVar4 = fVar5 * fVar13;
  fVar6 = fVar7 * fVar12;
  fVar9 = (fVar4 + fVar2 + fVar6) * fVar3 + (fVar8 * fVar8 + -0.5) * fVar11 +
          (fVar7 * fVar13 - fVar5 * fVar12) * fVar8;
  fVar10 = (fVar4 + fVar2 + fVar6) * fVar5 + (fVar8 * fVar8 + -0.5) * fVar13 +
           (fVar3 * fVar12 - fVar7 * fVar11) * fVar8;
  fVar11 = (fVar4 + fVar2 + fVar6) * fVar7 + (fVar8 * fVar8 + -0.5) * fVar12 +
           (fVar5 * fVar11 - fVar3 * fVar13) * fVar8;
  fVar13 = (fVar4 + fVar2 + fVar6) * fVar8 + (fVar8 * fVar8 + -0.5) * fVar1 +
           (fVar8 * fVar1 - fVar8 * fVar1) * fVar8;
  local_20 = (fVar9 + fVar9) * *(float *)(param_1 + 0x40);
  fStack_1c = (fVar10 + fVar10) * *(float *)(param_1 + 0x44);
  fStack_18 = (fVar11 + fVar11) * *(float *)(param_1 + 0x48);
  fStack_14 = (fVar13 + fVar13) * *(float *)(param_1 + 0x4c);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(&local_20,&local_30);
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar13 = *(float *)(param_1 + 0x2c);
  fVar12 = *(float *)(param_1 + 0x5c);
  fVar3 = *(float *)(param_1 + 0x40) * local_30;
  fVar5 = *(float *)(param_1 + 0x44) * fStack_2c;
  fVar7 = *(float *)(param_1 + 0x48) * fStack_28;
  fVar8 = fVar11 * fStack_24;
  *param_3 = fVar3;
  param_3[1] = fVar5;
  param_3[2] = fVar7;
  param_3[3] = fVar8;
  fVar3 = (local_30 - fVar13) * *(float *)(param_1 + 0x50) + fVar3;
  fVar5 = (fStack_2c - fVar11) * *(float *)(param_1 + 0x54) + fVar5;
  fVar7 = (fStack_28 - fVar12) * *(float *)(param_1 + 0x58) + fVar7;
  fVar8 = (fStack_24 - 0.0) * *(float *)(param_1 + 0x5c) + fVar8;
  *param_3 = fVar3;
  param_3[1] = fVar5;
  param_3[2] = fVar7;
  param_3[3] = fVar8;
  fVar11 = *(float *)(param_1 + 0x30);
  fVar13 = *(float *)(param_1 + 0x34);
  fVar12 = *(float *)(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x3c);
  fVar6 = fVar3 * fVar11;
  fVar9 = fVar5 * fVar13;
  fVar10 = fVar7 * fVar12;
  fVar2 = (fVar9 + fVar6 + fVar10) * fVar11 + (fVar1 * fVar1 + -0.5) * fVar3 +
          (fVar13 * fVar7 - fVar12 * fVar5) * fVar1;
  fVar4 = (fVar9 + fVar6 + fVar10) * fVar13 + (fVar1 * fVar1 + -0.5) * fVar5 +
          (fVar12 * fVar3 - fVar11 * fVar7) * fVar1;
  fVar12 = (fVar9 + fVar6 + fVar10) * fVar12 + (fVar1 * fVar1 + -0.5) * fVar7 +
           (fVar11 * fVar5 - fVar13 * fVar3) * fVar1;
  fVar11 = (fVar9 + fVar6 + fVar10) * fVar1 + (fVar1 * fVar1 + -0.5) * fVar8 +
           (fVar1 * fVar8 - fVar1 * fVar8) * fVar1;
  fVar2 = fVar2 + fVar2;
  fVar4 = fVar4 + fVar4;
  fVar12 = fVar12 + fVar12;
  *param_3 = fVar2;
  param_3[1] = fVar4;
  param_3[2] = fVar12;
  param_3[3] = fVar11 + fVar11;
  fVar11 = *(float *)(param_1 + 0x24);
  fVar13 = *(float *)(param_1 + 0x28);
  *param_3 = fVar2 + *(float *)(param_1 + 0x20);
  param_3[1] = fVar4 + fVar11;
  param_3[2] = fVar12 + fVar13;
  param_3[3] = fStack_24;
  return;
}

// 0113D0D0  hkpConvexTransformShape::vf24  size=266  [run]
void __thiscall
hkpConvexTransformShape::vf24(int param_1,undefined4 param_2,int param_3,float *param_4)

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
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(param_2,param_3,param_4);
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(param_1 + 0x28);
      fVar6 = (*param_4 - *(float *)(param_1 + 0x2c)) * *(float *)(param_1 + 0x50) +
              *param_4 * *(float *)(param_1 + 0x40);
      fVar7 = (param_4[1] - *(float *)(param_1 + 0x4c)) * *(float *)(param_1 + 0x54) +
              param_4[1] * *(float *)(param_1 + 0x44);
      fVar8 = (param_4[2] - *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x58) +
              param_4[2] * *(float *)(param_1 + 0x48);
      fVar14 = *(float *)(param_1 + 0x30);
      fVar3 = *(float *)(param_1 + 0x34);
      fVar4 = *(float *)(param_1 + 0x38);
      fVar5 = *(float *)(param_1 + 0x3c);
      fVar9 = fVar14 * fVar6;
      fVar10 = fVar3 * fVar7;
      fVar11 = fVar4 * fVar8;
      fVar12 = (fVar10 + fVar9 + fVar11) * fVar14 + (fVar5 * fVar5 + -0.5) * fVar6 +
               (fVar8 * fVar3 - fVar7 * fVar4) * fVar5;
      fVar13 = (fVar10 + fVar9 + fVar11) * fVar3 + (fVar5 * fVar5 + -0.5) * fVar7 +
               (fVar6 * fVar4 - fVar8 * fVar14) * fVar5;
      fVar14 = (fVar10 + fVar9 + fVar11) * fVar4 + (fVar5 * fVar5 + -0.5) * fVar8 +
               (fVar7 * fVar14 - fVar6 * fVar3) * fVar5;
      *param_4 = fVar12 + fVar12 + *(float *)(param_1 + 0x20);
      param_4[1] = fVar13 + fVar13 + fVar1;
      param_4[2] = fVar14 + fVar14 + fVar2;
      param_4[3] = param_4[3];
      param_4 = param_4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0113D1E0  hkpConvexTransformShape::vf28  size=247  [run]
void __thiscall hkpConvexTransformShape::vf28(int param_1,float *param_2)

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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(&local_20);
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar7 = *(float *)(param_1 + 0x40) * local_20;
  fVar8 = *(float *)(param_1 + 0x44) * fStack_1c;
  fVar9 = *(float *)(param_1 + 0x48) * fStack_18;
  fVar10 = fVar1 * fStack_14;
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  fVar7 = (local_20 - fVar2) * *(float *)(param_1 + 0x50) + fVar7;
  fVar8 = (fStack_1c - fVar1) * *(float *)(param_1 + 0x54) + fVar8;
  fVar9 = (fStack_18 - fVar3) * *(float *)(param_1 + 0x58) + fVar9;
  fVar10 = (fStack_14 - 0.0) * *(float *)(param_1 + 0x5c) + fVar10;
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c);
  fVar11 = fVar7 * fVar1;
  fVar12 = fVar8 * fVar2;
  fVar13 = fVar9 * fVar3;
  fVar4 = (fVar12 + fVar11 + fVar13) * fVar1 + (fVar6 * fVar6 + -0.5) * fVar7 +
          (fVar9 * fVar2 - fVar8 * fVar3) * fVar6;
  fVar5 = (fVar12 + fVar11 + fVar13) * fVar2 + (fVar6 * fVar6 + -0.5) * fVar8 +
          (fVar7 * fVar3 - fVar9 * fVar1) * fVar6;
  fVar7 = (fVar12 + fVar11 + fVar13) * fVar3 + (fVar6 * fVar6 + -0.5) * fVar9 +
          (fVar8 * fVar1 - fVar7 * fVar2) * fVar6;
  fVar6 = (fVar12 + fVar11 + fVar13) * fVar6 + (fVar6 * fVar6 + -0.5) * fVar10 +
          (fVar10 * fVar6 - fVar10 * fVar6) * fVar6;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  fVar6 = fVar6 + fVar6;
  *param_2 = fVar4;
  param_2[1] = fVar5;
  param_2[2] = fVar7;
  param_2[3] = fVar6;
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  *param_2 = *(float *)(param_1 + 0x20) + fVar4;
  param_2[1] = fVar1 + fVar5;
  param_2[2] = fVar2 + fVar7;
  param_2[3] = fVar3 + fVar6;
  return;
}

// 0113D2E0  FUN_0113d2e0  size=510  [run]
void __thiscall FUN_0113d2e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 extraout_ECX;
  float fVar12;
  float fVar13;
  float fVar14;
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
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar10 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  uVar10 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(param_1 + 0x30) = param_2[4];
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  uVar10 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x40) = param_2[8];
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  auVar30._4_4_ = -(uint)(ABS((float)param_2[9] - 1.0) < 1.1920929e-07);
  auVar30._0_4_ = -(uint)(ABS((float)param_2[8] - 1.0) < 1.1920929e-07);
  auVar30._8_4_ = -(uint)(ABS((float)param_2[10] - 1.0) < 1.1920929e-07);
  auVar30._12_4_ = -(uint)(ABS((float)param_2[0xb] - 1.0) < 1.1920929e-07);
  uVar10 = movmskps(param_2,auVar30);
  if (((byte)uVar10 & 7) != 7) {
    piVar1 = *(int **)(param_1 + 0x18);
    iVar11 = (**(code **)(*piVar1 + 0x2c))();
    if (2 < iVar11) {
      (**(code **)(*piVar1 + 0x10))(&DAT_01701ca0,0,&local_30);
      fVar13 = -(float)piVar1[4];
      fVar12 = local_20 + fVar13;
      fVar4 = (float)param_2[8];
      fVar5 = (float)param_2[9];
      fVar6 = (float)param_2[10];
      fVar7 = (float)param_2[0xb];
      fVar16 = (fVar12 - (local_30 - fVar13)) * 0.5;
      fVar17 = ((fStack_1c + fVar13) - (fStack_2c - fVar13)) * 0.5;
      fVar18 = ((fStack_18 + fVar13) - (fStack_28 - fVar13)) * 0.5;
      fVar19 = ((fStack_14 + fVar13) - (fStack_24 - fVar13)) * 0.5;
      fVar14 = ABS(fVar6);
      fVar15 = ABS(fVar7);
      fVar25 = ABS(fVar4);
      fVar27 = ABS(fVar5);
      fVar24 = *(float *)(param_1 + 0x10);
      fVar20 = (fVar24 + fVar16) * fVar25;
      fVar23 = (fVar24 + fVar17) * fVar27;
      auVar21._8_4_ = (fVar24 + fVar18) * fVar14;
      auVar28._4_4_ = -(uint)(fVar24 < fVar23);
      auVar28._0_4_ = -(uint)(fVar24 < fVar20);
      auVar28._8_4_ = -(uint)(fVar24 < auVar21._8_4_);
      auVar28._12_4_ = -(uint)(fVar24 < (fVar24 + fVar19) * fVar15);
      uVar10 = movmskps(extraout_ECX,auVar28);
      if (((byte)uVar10 & 7) == 7) {
        auVar22._4_4_ = fVar24;
        auVar22._0_4_ = fVar24;
        auVar22._8_4_ = fVar24;
        auVar22._12_4_ = fVar24;
      }
      else {
        auVar29._4_4_ = fVar23;
        auVar29._0_4_ = fVar23;
        auVar29._8_4_ = fVar23;
        auVar29._12_4_ = fVar23;
        auVar3._4_4_ = fVar20;
        auVar3._0_4_ = fVar20;
        auVar3._8_4_ = fVar20;
        auVar3._12_4_ = fVar20;
        auVar30 = minps(auVar29,auVar3);
        auVar21._4_4_ = auVar21._8_4_;
        auVar21._0_4_ = auVar21._8_4_;
        auVar21._12_4_ = auVar21._8_4_;
        auVar22 = minps(auVar21,auVar30);
        local_20 = auVar22._0_4_;
        *(float *)(param_1 + 0x10) = local_20;
      }
      auVar26._0_12_ = ZEXT812(0);
      auVar26._12_4_ = 0;
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar16;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = fVar19;
      auVar30 = rcpps(auVar26,auVar2);
      fVar16 = (float)(~-(uint)(fVar16 == 0.0) &
                      (uint)((2.0 - auVar30._0_4_ * fVar16) * auVar30._0_4_)) *
               (fVar24 * fVar25 - auVar22._0_4_);
      fVar17 = (float)(~-(uint)(fVar17 == 0.0) &
                      (uint)((2.0 - auVar30._4_4_ * fVar17) * auVar30._4_4_)) *
               (fVar24 * fVar27 - auVar22._4_4_);
      fVar14 = (float)(~-(uint)(fVar18 == 0.0) &
                      (uint)((2.0 - auVar30._8_4_ * fVar18) * auVar30._8_4_)) *
               (fVar24 * fVar14 - auVar22._8_4_);
      fVar24 = (float)(~-(uint)(fVar19 == 0.0) &
                      (uint)((2.0 - auVar30._12_4_ * fVar19) * auVar30._12_4_)) *
               (fVar24 * fVar15 - auVar22._12_4_);
      *(float *)(param_1 + 0x50) = fVar16;
      *(float *)(param_1 + 0x54) = fVar17;
      *(float *)(param_1 + 0x58) = fVar14;
      *(float *)(param_1 + 0x5c) = fVar24;
      *(uint *)(param_1 + 0x50) =
           -(uint)(((uint)fVar4 & 0x80000000) == 0x80000000) & 0x80000000 ^ (uint)fVar16;
      *(uint *)(param_1 + 0x54) =
           -(uint)(((uint)fVar5 & 0x80000000) == 0x80000000) & 0x80000000 ^ (uint)fVar17;
      *(uint *)(param_1 + 0x58) =
           -(uint)(((uint)fVar6 & 0x80000000) == 0x80000000) & 0x80000000 ^ (uint)fVar14;
      *(uint *)(param_1 + 0x5c) =
           -(uint)(((uint)fVar7 & 0x80000000) == 0x80000000) & 0x80000000 ^ (uint)fVar24;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = (fVar12 + (local_30 - fVar13)) * 0.5;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = (fStack_1c + fVar13 + (fStack_2c - fVar13)) * 0.5;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(float *)(param_1 + 0x5c) = (fStack_18 + fVar13 + (fStack_28 - fVar13)) * 0.5;
      return;
    }
    *(float *)(param_1 + 0x10) = (float)piVar1[4] * ABS((float)param_2[8]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

// 0113D4E0  hkpConvexTransformShape::vf44  size=247  [run]
void __thiscall hkpConvexTransformShape::vf44(int param_1,float *param_2)

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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(&local_20);
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar7 = *(float *)(param_1 + 0x40) * local_20;
  fVar8 = *(float *)(param_1 + 0x44) * fStack_1c;
  fVar9 = *(float *)(param_1 + 0x48) * fStack_18;
  fVar10 = fVar1 * fStack_14;
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  fVar7 = (local_20 - fVar2) * *(float *)(param_1 + 0x50) + fVar7;
  fVar8 = (fStack_1c - fVar1) * *(float *)(param_1 + 0x54) + fVar8;
  fVar9 = (fStack_18 - fVar3) * *(float *)(param_1 + 0x58) + fVar9;
  fVar10 = (fStack_14 - 0.0) * *(float *)(param_1 + 0x5c) + fVar10;
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c);
  fVar11 = fVar7 * fVar1;
  fVar12 = fVar8 * fVar2;
  fVar13 = fVar9 * fVar3;
  fVar4 = (fVar12 + fVar11 + fVar13) * fVar1 + (fVar6 * fVar6 + -0.5) * fVar7 +
          (fVar9 * fVar2 - fVar8 * fVar3) * fVar6;
  fVar5 = (fVar12 + fVar11 + fVar13) * fVar2 + (fVar6 * fVar6 + -0.5) * fVar8 +
          (fVar7 * fVar3 - fVar9 * fVar1) * fVar6;
  fVar7 = (fVar12 + fVar11 + fVar13) * fVar3 + (fVar6 * fVar6 + -0.5) * fVar9 +
          (fVar8 * fVar1 - fVar7 * fVar2) * fVar6;
  fVar6 = (fVar12 + fVar11 + fVar13) * fVar6 + (fVar6 * fVar6 + -0.5) * fVar10 +
          (fVar10 * fVar6 - fVar10 * fVar6) * fVar6;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  fVar6 = fVar6 + fVar6;
  *param_2 = fVar4;
  param_2[1] = fVar5;
  param_2[2] = fVar7;
  param_2[3] = fVar6;
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  *param_2 = *(float *)(param_1 + 0x20) + fVar4;
  param_2[1] = fVar1 + fVar5;
  param_2[2] = fVar2 + fVar7;
  param_2[3] = fVar3 + fVar6;
  return;
}

// 0113D5E0  hkpConvexTransformShape::vf30  size=301  [run]
int __thiscall hkpConvexTransformShape::vf30(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar8 = (**(code **)(**(int **)(param_1 + 0x18) + 0x30))(param_2);
  iVar9 = (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
  iVar9 = iVar9 + -1;
  if (-1 < iVar9) {
    pfVar10 = (float *)(iVar9 * 0x10 + iVar8);
    do {
      fVar3 = *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(param_1 + 0x28);
      fVar11 = (*pfVar10 - *(float *)(param_1 + 0x2c)) * *(float *)(param_1 + 0x50) +
               *pfVar10 * *(float *)(param_1 + 0x40);
      fVar12 = (pfVar10[1] - *(float *)(param_1 + 0x4c)) * *(float *)(param_1 + 0x54) +
               pfVar10[1] * *(float *)(param_1 + 0x44);
      fVar13 = (pfVar10[2] - *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x58) +
               pfVar10[2] * *(float *)(param_1 + 0x48);
      fVar19 = *(float *)(param_1 + 0x30);
      fVar5 = *(float *)(param_1 + 0x34);
      fVar6 = *(float *)(param_1 + 0x38);
      fVar7 = *(float *)(param_1 + 0x3c);
      fVar14 = fVar19 * fVar11;
      fVar15 = fVar5 * fVar12;
      fVar16 = fVar6 * fVar13;
      fVar2 = *(float *)(param_1 + 0x10);
      fVar17 = (fVar15 + fVar14 + fVar16) * fVar19 + (fVar7 * fVar7 + -0.5) * fVar11 +
               (fVar13 * fVar5 - fVar12 * fVar6) * fVar7;
      fVar18 = (fVar15 + fVar14 + fVar16) * fVar5 + (fVar7 * fVar7 + -0.5) * fVar12 +
               (fVar11 * fVar6 - fVar13 * fVar19) * fVar7;
      fVar19 = (fVar15 + fVar14 + fVar16) * fVar6 + (fVar7 * fVar7 + -0.5) * fVar13 +
               (fVar12 * fVar19 - fVar11 * fVar5) * fVar7;
      pfVar1 = (float *)((param_2 - iVar8) + (int)pfVar10);
      *pfVar1 = fVar17 + fVar17 + *(float *)(param_1 + 0x20);
      pfVar1[1] = fVar18 + fVar18 + fVar3;
      pfVar1[2] = fVar19 + fVar19 + fVar4;
      pfVar1[3] = fVar2;
      pfVar10 = pfVar10 + -4;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    return param_2;
  }
  return param_2;
}

// 0113D710  hkpConvexTransformShape::hkpConvexTransformShape  size=64  [run]
undefined4 * __thiscall
hkpConvexTransformShape::hkpConvexTransformShape
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  hkpSingleShapeContainer::hkpSingleShapeContainer_14
            (0xb,*(undefined4 *)(param_2 + 0x10),param_2,param_4);
  *param_1 = vftable;
  FUN_0113d2e0(param_3);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

// 0113D750  hkpConvexTransformShape::vf14  size=713  [run]
char * __thiscall
hkpConvexTransformShape::vf14(int param_1,char *param_2,undefined8 *param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcCxTransform";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x40);
  auVar5 = rcpps(in_XMM1,auVar15);
  local_80 = (float)*param_3;
  fStack_7c = (float)((ulonglong)*param_3 >> 0x20);
  fStack_78 = (float)param_3[1];
  fStack_74 = (float)((ulonglong)param_3[1] >> 0x20);
  local_80 = local_80 - *(float *)(param_1 + 0x20);
  fStack_7c = fStack_7c - *(float *)(param_1 + 0x24);
  fStack_78 = fStack_78 - *(float *)(param_1 + 0x28);
  fStack_74 = fStack_74 - *(float *)(param_1 + 0x2c);
  local_60 = param_3[4];
  local_50 = (2.0 - auVar15._0_4_ * auVar5._0_4_) * auVar5._0_4_;
  fStack_4c = (2.0 - auVar15._4_4_ * auVar5._4_4_) * auVar5._4_4_;
  fStack_48 = (2.0 - auVar15._8_4_ * auVar5._8_4_) * auVar5._8_4_;
  fStack_44 = (2.0 - auVar15._12_4_ * auVar5._12_4_) * auVar5._12_4_;
  local_58 = param_3[5];
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x30);
  fStack_24 = auVar15._12_4_;
  fStack_2c = auVar15._0_4_;
  fStack_28 = auVar15._4_4_;
  local_30 = auVar15._8_4_;
  local_40._8_4_ = fStack_2c;
  local_40._0_8_ = auVar15._4_8_;
  local_40._12_4_ = fStack_24;
  fVar4 = local_80 * fStack_2c;
  fVar6 = fStack_7c * fStack_28;
  fVar7 = fStack_78 * local_30;
  local_70 = (float)param_3[2];
  fStack_6c = (float)((ulonglong)param_3[2] >> 0x20);
  fStack_68 = (float)param_3[3];
  fStack_64 = (float)((ulonglong)param_3[3] >> 0x20);
  local_70 = local_70 - *(float *)(param_1 + 0x20);
  fStack_6c = fStack_6c - *(float *)(param_1 + 0x24);
  fStack_68 = fStack_68 - *(float *)(param_1 + 0x28);
  fStack_64 = fStack_64 - *(float *)(param_1 + 0x2c);
  fVar8 = (fVar6 + fVar4 + fVar7) * fStack_2c + (fStack_24 * fStack_24 + -0.5) * local_80 +
          (fStack_7c * local_30 - fStack_78 * fStack_28) * fStack_24;
  fVar10 = (fVar6 + fVar4 + fVar7) * fStack_28 + (fStack_24 * fStack_24 + -0.5) * fStack_7c +
           (fStack_78 * fStack_2c - local_80 * local_30) * fStack_24;
  fVar12 = (fVar6 + fVar4 + fVar7) * local_30 + (fStack_24 * fStack_24 + -0.5) * fStack_78 +
           (local_80 * fStack_28 - fStack_7c * fStack_2c) * fStack_24;
  fVar4 = (fVar6 + fVar4 + fVar7) * fStack_24 + (fStack_24 * fStack_24 + -0.5) * fStack_74 +
          (fStack_74 * fStack_24 - fStack_74 * fStack_24) * fStack_24;
  _local_80 = CONCAT44((fVar10 + fVar10) * fStack_4c,(fVar8 + fVar8) * local_50);
  _fStack_78 = CONCAT44((fVar4 + fVar4) * fStack_44,(fVar12 + fVar12) * fStack_48);
  fVar4 = local_70 * fStack_2c;
  fVar6 = fStack_6c * fStack_28;
  fVar7 = fStack_68 * local_30;
  param_4[0x10] = (float)((int)param_4[0x10] + 1);
  fVar8 = (fVar6 + fVar4 + fVar7) * fStack_2c + (fStack_24 * fStack_24 + -0.5) * local_70 +
          (fStack_6c * local_30 - fStack_68 * fStack_28) * fStack_24;
  fVar10 = (fVar6 + fVar4 + fVar7) * fStack_28 + (fStack_24 * fStack_24 + -0.5) * fStack_6c +
           (fStack_68 * fStack_2c - local_70 * local_30) * fStack_24;
  fVar12 = (fVar6 + fVar4 + fVar7) * local_30 + (fStack_24 * fStack_24 + -0.5) * fStack_68 +
           (local_70 * fStack_28 - fStack_6c * fStack_2c) * fStack_24;
  fVar4 = (fVar6 + fVar4 + fVar7) * fStack_24 + (fStack_24 * fStack_24 + -0.5) * fStack_64 +
          (fStack_64 * fStack_24 - fStack_64 * fStack_24) * fStack_24;
  _local_70 = CONCAT44((fVar10 + fVar10) * fStack_4c,(fVar8 + fVar8) * local_50);
  _fStack_68 = CONCAT44((fVar4 + fVar4) * fStack_44,(fVar12 + fVar12) * fStack_48);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(param_2,&local_80,param_4);
  param_4[0x10] = (float)((int)param_4[0x10] + -1);
  if (*param_2 != '\0') {
    fVar4 = *(float *)(param_1 + 0x30);
    fVar6 = *(float *)(param_1 + 0x34);
    fVar7 = *(float *)(param_1 + 0x38);
    fVar8 = *(float *)(param_1 + 0x3c);
    fVar14 = *param_4 * local_50;
    fVar16 = param_4[1] * fStack_4c;
    fVar17 = param_4[2] * fStack_48;
    fVar18 = param_4[3] * fStack_44;
    fVar9 = fVar14 * fVar4;
    fVar11 = fVar16 * fVar6;
    fVar13 = fVar17 * fVar7;
    fVar10 = (fVar11 + fVar9 + fVar13) * fVar4 + (fVar8 * fVar8 + -0.5) * fVar14 +
             (fVar17 * fVar6 - fVar16 * fVar7) * fVar8;
    fVar12 = (fVar11 + fVar9 + fVar13) * fVar6 + (fVar8 * fVar8 + -0.5) * fVar16 +
             (fVar14 * fVar7 - fVar17 * fVar4) * fVar8;
    fVar4 = (fVar11 + fVar9 + fVar13) * fVar7 + (fVar8 * fVar8 + -0.5) * fVar17 +
            (fVar16 * fVar4 - fVar14 * fVar6) * fVar8;
    fVar6 = (fVar11 + fVar9 + fVar13) * fVar8 + (fVar8 * fVar8 + -0.5) * fVar18 +
            (fVar18 * fVar8 - fVar18 * fVar8) * fVar8;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar4 = fVar4 + fVar4;
    fVar7 = fVar10 * fVar10;
    fVar8 = fVar12 * fVar12;
    fVar9 = fVar4 * fVar4;
    fVar11 = fVar8 + fVar7 + fVar9;
    fVar13 = fVar8 + fVar7 + fVar9;
    fVar14 = fVar8 + fVar7 + fVar9;
    fVar9 = fVar8 + fVar7 + fVar9;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar15._4_4_ = fVar13;
    auVar15._0_4_ = fVar11;
    auVar15._8_4_ = fVar14;
    auVar15._12_4_ = fVar9;
    auVar15 = rsqrtps(auVar5,auVar15);
    fVar7 = auVar15._0_4_;
    fVar8 = auVar15._4_4_;
    fVar16 = auVar15._8_4_;
    fVar17 = auVar15._12_4_;
    *param_4 = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5)) * fVar10;
    param_4[1] = (float)(~-(uint)(fVar13 <= 0.0) &
                        (uint)((3.0 - fVar8 * fVar13 * fVar8) * fVar8 * 0.5)) * fVar12;
    param_4[2] = (float)(~-(uint)(fVar14 <= 0.0) &
                        (uint)((3.0 - fVar16 * fVar14 * fVar16) * fVar16 * 0.5)) * fVar4;
    param_4[3] = (float)(~-(uint)(fVar9 <= 0.0) &
                        (uint)((3.0 - fVar17 * fVar9 * fVar17) * fVar17 * 0.5)) * (fVar6 + fVar6);
    param_4[(int)param_4[0x10] + 8] = 0.0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 0113DA60  FUN_0113da60  size=29  [run]
void __thiscall FUN_0113da60(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = uVar1;
  return;
}

// 0113DA80  FUN_0113da80  size=29  [run]
void __thiscall FUN_0113da80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_1[3];
  return;
}

// 0113DAB0  FUN_0113dab0  size=30  [run]
void __thiscall FUN_0113dab0(int param_1,undefined4 param_2)

{
  FUN_0100a410(param_2);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

// 0113DAD0  hkpConvexTransformShape::vf2C  size=10  [run]
void __fastcall hkpConvexTransformShape::vf2C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0113dad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
  return;
}

// 0113DAE0  hkBaseObject::hkBaseObject_64  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_64(undefined4 *param_1)

{
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 0113DB10  FUN_0113db10  size=55  [run]
void FUN_0113db10(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM3,auVar1);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = (float)(~-(uint)(auVar1._0_4_ == 0.0) &
                    (uint)((2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_)) * *param_2;
  param_1[1] = (float)(~-(uint)(auVar1._4_4_ == 0.0) &
                      (uint)((2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_)) * fVar2;
  param_1[2] = (float)(~-(uint)(auVar1._8_4_ == 0.0) &
                      (uint)((2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_)) * fVar3;
  param_1[3] = (float)(~-(uint)(auVar1._12_4_ == 0.0) &
                      (uint)((2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_)) * fVar4;
  return;
}

// 0113DB50  FUN_0113db50  size=30  [run]
void __thiscall FUN_0113db50(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = -(uint)((*param_1 & 0x80000000) == 0x80000000);
  param_2[1] = -(uint)((uVar1 & 0x80000000) == 0x80000000);
  param_2[2] = -(uint)((uVar2 & 0x80000000) == 0x80000000);
  param_2[3] = -(uint)((uVar3 & 0x80000000) == 0x80000000);
  return;
}

// 0113DB70  FUN_0113db70  size=34  [run]
bool __thiscall FUN_0113db70(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_1[1] < param_2[1]);
  auVar1._0_4_ = -(uint)(*param_1 < *param_2);
  auVar1._8_4_ = -(uint)(param_1[2] < param_2[2]);
  auVar1._12_4_ = -(uint)(param_1[3] < param_2[3]);
  uVar2 = movmskps(param_1,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 0113DBA0  FUN_0113dba0  size=20  [run]
void __thiscall FUN_0113dba0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0113DBC0  FUN_0113dbc0  size=38  [run]
void FUN_0113dbc0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113DBF0  hkpConvexTransformShape::vf00  size=79  [run]
undefined4 * __thiscall hkpConvexTransformShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0113DC40  FUN_0113dc40  size=40  [run]
void __thiscall FUN_0113dc40(undefined1 (*param_1) [16],undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
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
  *param_1 = auVar6;
  return;
}

// 0113DC70  FUN_0113dc70  size=54  [run]
void __thiscall FUN_0113dc70(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM3,auVar1);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = (float)(~-(uint)(auVar1._0_4_ == 0.0) &
                    (uint)((2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_)) * *param_2;
  param_1[1] = (float)(~-(uint)(auVar1._4_4_ == 0.0) &
                      (uint)((2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_)) * fVar2;
  param_1[2] = (float)(~-(uint)(auVar1._8_4_ == 0.0) &
                      (uint)((2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_)) * fVar3;
  param_1[3] = (float)(~-(uint)(auVar1._12_4_ == 0.0) &
                      (uint)((2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_)) * fVar4;
  return;
}

// 0113DCB0  FUN_0113dcb0  size=202  [run]
void __thiscall FUN_0113dcb0(int param_1,float *param_2,float *param_3)

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
  
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar7 = (*param_2 - fVar4) * *(float *)(param_1 + 0x50) + *param_2 * *(float *)(param_1 + 0x40);
  fVar8 = (param_2[1] - *(float *)(param_1 + 0x4c)) * *(float *)(param_1 + 0x54) +
          param_2[1] * *(float *)(param_1 + 0x44);
  fVar9 = (param_2[2] - *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x58) +
          param_2[2] * *(float *)(param_1 + 0x48);
  fVar10 = (param_2[3] - 0.0) * *(float *)(param_1 + 0x5c) + param_2[3] * *(float *)(param_1 + 0x4c)
  ;
  fVar16 = *(float *)(param_1 + 0x30);
  fVar17 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x3c);
  fVar11 = fVar7 * fVar16;
  fVar12 = fVar8 * fVar17;
  fVar13 = fVar9 * fVar5;
  *param_3 = fVar7;
  param_3[1] = fVar8;
  param_3[2] = fVar9;
  param_3[3] = fVar10;
  fVar14 = (fVar12 + fVar11 + fVar13) * fVar16 + (fVar6 * fVar6 + -0.5) * fVar7 +
           (fVar9 * fVar17 - fVar8 * fVar5) * fVar6;
  fVar15 = (fVar12 + fVar11 + fVar13) * fVar17 + (fVar6 * fVar6 + -0.5) * fVar8 +
           (fVar7 * fVar5 - fVar9 * fVar16) * fVar6;
  fVar16 = (fVar12 + fVar11 + fVar13) * fVar5 + (fVar6 * fVar6 + -0.5) * fVar9 +
           (fVar8 * fVar16 - fVar7 * fVar17) * fVar6;
  fVar17 = (fVar12 + fVar11 + fVar13) * fVar6 + (fVar6 * fVar6 + -0.5) * fVar10 +
           (fVar10 * fVar6 - fVar10 * fVar6) * fVar6;
  *param_3 = fVar14 + fVar14 + fVar1;
  param_3[1] = fVar15 + fVar15 + fVar2;
  param_3[2] = fVar16 + fVar16 + fVar3;
  param_3[3] = fVar17 + fVar17 + fVar4;
  return;
}

// 0113DE10  hkpMoppBvTreeShape::vf10  size=36  [run]
void __thiscall
hkpMoppBvTreeShape::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(param_2,param_3,param_4);
  return;
}

// 0113DE40  hkMoppBvTreeShapeBase::vf50  size=69  [run]
void __thiscall
hkMoppBvTreeShapeBase::vf50
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_01209cb0(*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5);
  return;
}

// 0113DE90  hkMoppBvTreeShapeBase::vf44  size=102  [run]
void __thiscall
hkMoppBvTreeShapeBase::vf44(int param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x20);
  local_30 = maxps(auVar1,*param_2);
  fVar2 = 16777216.0 / *(float *)(param_1 + 0x2c);
  auVar3._0_4_ = fVar2 + auVar1._0_4_;
  auVar3._4_4_ = fVar2 + auVar1._4_4_;
  auVar3._8_4_ = fVar2 + auVar1._8_4_;
  auVar3._12_4_ = fVar2 + auVar1._12_4_;
  local_20 = minps(auVar3,param_2[1]);
  FUN_01209e60(*(undefined4 *)(param_1 + 0x14),local_30,param_3);
  return;
}

// 0113DF00  hkBaseObject::hkBaseObject_67  size=57  [run]
void __fastcall hkBaseObject::hkBaseObject_67(undefined4 *param_1)

{
  *param_1 = hkpMoppBvTreeShape::vftable;
  param_1[0xc] = hkpSingleShapeContainer::vftable;
  if (param_1[0xd] != 0) {
    FUN_010060a0();
  }
  param_1[0xc] = hkpShapeContainer::vftable;
  *param_1 = hkMoppBvTreeShapeBase::vftable;
  FUN_010060a0();
  *param_1 = vftable;
  return;
}

// 0113DF40  hkpMoppBvTreeShape::vf40  size=71  [run]
undefined4 __thiscall hkpMoppBvTreeShape::vf40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((*(char *)(*(int *)(param_1 + 0x14) + 0x2c) == '\0') &&
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x40))(param_2,0x100), -1 < iVar1)) &&
     (iVar1 < 0x101)) {
    *(int *)(param_1 + 0x38) = iVar1;
    return 0x40;
  }
  return 0xffffffff;
}

// 0113DF90  hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase_2  size=86  [run]
undefined4 * __thiscall
hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase_2(undefined4 *param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = vftable;
  param_1[5] = param_3;
  FUN_01006000();
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x1c);
  param_1[8] = *(undefined4 *)(param_3 + 0x10);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[6] = *(undefined4 *)(param_3 + 0x20);
  param_1[7] = *(undefined4 *)(param_3 + 0x24);
  return param_1;
}

// 0113DFF0  hkpSingleShapeContainer::hkpSingleShapeContainer_8  size=48  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_8
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase_2(9,param_3);
  *param_1 = hkpMoppBvTreeShape::vftable;
  param_1[0xc] = vftable;
  param_1[0xd] = param_2;
  FUN_01006000();
  return param_1;
}

// 0113E020  hkpMoppBvTreeShape::vf14  size=218  [run]
undefined4 __thiscall
hkpMoppBvTreeShape::vf14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_2c = *(undefined4 *)(param_1 + 0x1c);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  local_24 = 2;
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34) + 0x10;
  }
  local_28 = local_2c;
  FUN_0120b2a0(param_2,iVar4,auStack_50,param_3,param_4);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 0113E100  hkpMoppBvTreeShape::vf1C  size=211  [run]
undefined4 __thiscall
hkpMoppBvTreeShape::vf1C
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcBundleMopp";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_2c = *(undefined4 *)(param_1 + 0x1c);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  local_24 = 2;
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34) + 0x10;
  }
  local_28 = local_2c;
  FUN_0120ce30(param_2,iVar4,auStack_50,param_3,param_4,param_5);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 0113E1E0  hkpMoppBvTreeShape::vf18  size=216  [run]
void __thiscall
hkpMoppBvTreeShape::vf18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_2c = *(undefined4 *)(param_1 + 0x1c);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  local_24 = 2;
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x34) + 0x10;
  }
  local_28 = local_2c;
  FUN_0120b390(iVar4,auStack_50,param_2,param_3,param_4);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 0113E2C0  hkMoppBvTreeShapeBase::vf4C  size=213  [run]
undefined4 __thiscall
hkMoppBvTreeShapeBase::vf4C(int param_1,undefined1 (*param_2) [16],undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  int local_80;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_9c = *(undefined4 *)(param_1 + 0x1c);
  local_b0 = *(undefined1 (*) [16])(param_1 + 0x20);
  local_40 = maxps(local_b0,*param_2);
  fVar2 = 16777216.0 / *(float *)(param_1 + 0x2c);
  local_a0 = *(undefined4 *)(param_1 + 0x18);
  local_1c = param_3;
  auVar3._0_4_ = fVar2 + local_b0._0_4_;
  auVar3._4_4_ = fVar2 + local_b0._4_4_;
  auVar3._8_4_ = fVar2 + local_b0._8_4_;
  auVar3._12_4_ = fVar2 + local_b0._12_4_;
  local_30 = minps(auVar3,param_2[1]);
  local_14 = param_4 | 0x80000000;
  local_94 = 2;
  local_18 = 0;
  local_98 = local_9c;
  FUN_01209e60(auStack_c0,local_40,&local_1c);
  uVar1 = *(undefined4 *)(local_80 + 4);
  local_18 = 0;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
  }
  return uVar1;
}

// 0113E3A0  FUN_0113e3a0  size=12  [run]
void __thiscall FUN_0113e3a0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0113E3B0  FUN_0113e3b0  size=20  [run]
void __thiscall FUN_0113e3b0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 0113E3D0  FUN_0113e3d0  size=20  [run]
void __thiscall FUN_0113e3d0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 0113E3F0  FUN_0113e3f0  size=14  [run]
void __thiscall FUN_0113e3f0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0113E420  FUN_0113e420  size=32  [run]
void __thiscall FUN_0113e420(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0113E440  FUN_0113e440  size=18  [run]
void __thiscall FUN_0113e440(undefined4 *param_1,undefined4 *param_2)

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

// 0113E490  hkBaseObject::hkBaseObject_59  size=25  [run]
void __fastcall hkBaseObject::hkBaseObject_59(undefined4 *param_1)

{
  *param_1 = hkMoppBvTreeShapeBase::vftable;
  FUN_010060a0();
  *param_1 = vftable;
  return;
}

// 0113E4B0  FUN_0113e4b0  size=38  [run]
void FUN_0113e4b0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113E4E0  hkMoppBvTreeShapeBase::vf00  size=67  [run]
undefined4 * __thiscall hkMoppBvTreeShapeBase::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_010060a0();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0113E550  hkpMoppBvTreeShape::vf38  size=10  [run]
void __fastcall hkpMoppBvTreeShape::vf38(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0113e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x34) + 0x38))();
  return;
}

// 0113E560  FUN_0113e560  size=38  [run]
void FUN_0113e560(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113E590  FUN_0113e590  size=32  [run]
void __thiscall FUN_0113e590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0113E5B0  hkpBvTreeShape::hkpBvTreeShape  size=50  [run]
void __thiscall
hkpBvTreeShape::hkpBvTreeShape(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 4) = param_3;
  return;
}

// 0113E5F0  FUN_0113e5f0  size=38  [run]
void FUN_0113e5f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113E620  hkpBvTreeShape::vf00  size=53  [run]
undefined4 * __thiscall hkpBvTreeShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0113E660  hkpMoppBvTreeShape::vf00  size=52  [run]
int __thiscall hkpMoppBvTreeShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_67();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0113E6A0  FUN_0113e6a0  size=24  [run]
void __thiscall
FUN_0113e6a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0113E6C0  FUN_0113e6c0  size=38  [run]
void __thiscall
FUN_0113e6c0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

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
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x2c) = param_5;
  return;
}

// 0113E770  FUN_0113e770  size=11  [run]
void __fastcall FUN_0113e770(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0113e779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

// 0113E790  FUN_0113e790  size=52  [run]
undefined4 __thiscall FUN_0113e790(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 0113E7D0  FUN_0113e7d0  size=28  [run]
void __thiscall FUN_0113e7d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0113E800  FUN_0113e800  size=44  [run]
void FUN_0113e800(undefined4 *param_1,int param_2,int param_3)

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

// 0113E840  FUN_0113e840  size=28  [run]
void __thiscall FUN_0113e840(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0113E8F0  FUN_0113e8f0  size=31  [run]
void FUN_0113e8f0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x28) + 4))(param_1);
  return;
}

// 0113E910  FUN_0113e910  size=35  [run]
void FUN_0113e910(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x28) + 8))(param_1,param_2);
  return;
}

// 0113E940  FUN_0113e940  size=157  [run]
void __thiscall
FUN_0113e940(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 8,*param_1 + (param_4 + param_3) * 8,
               ((iVar1 - param_3) - param_4) * 8);
  puVar3 = (undefined4 *)(*param_1 + param_3 * 8);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(param_5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(param_5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 0113EA00  FUN_0113ea00  size=30  [run]
void FUN_0113ea00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0113e940(param_1,param_2,0,param_3,param_4);
  return;
}

// 0113EA20  FUN_0113ea20  size=63  [run]
void __thiscall FUN_0113ea20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EA60  FUN_0113ea60  size=63  [run]
void __thiscall FUN_0113ea60(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EAA0  FUN_0113eaa0  size=29  [run]
void FUN_0113eaa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0113ea00(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 0113EAC0  FUN_0113eac0  size=63  [run]
void __fastcall FUN_0113eac0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EB00  FUN_0113eb00  size=63  [run]
void __fastcall FUN_0113eb00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EB40  FUN_0113eb40  size=63  [run]
void __fastcall FUN_0113eb40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EB80  FUN_0113eb80  size=63  [run]
void __fastcall FUN_0113eb80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113EBC0  FUN_0113ebc0  size=49  [run]
void __thiscall FUN_0113ebc0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0x14;
  return;
}

// 0113EC00  FUN_0113ec00  size=113  [run]
void __fastcall FUN_0113ec00(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc) * 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 0113EC80  FUN_0113ec80  size=608  [run]
undefined4 FUN_0113ec80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_18;
  bool local_11;
  
  FUN_0120d620(0);
  FUN_0120dce0(0);
  local_40 = 0x3f800000;
  if ((*(char *)(param_3 + 0x1c) == '\0') || (*(char *)(param_3 + 0x1e) != '\0')) {
    local_30 = 0;
  }
  FUN_0120d560(&local_40);
  local_11 = *(char *)(param_3 + 0x1e) == '\0' && *(char *)(param_3 + 0x1f) != '\0';
  local_a0 = 0.5;
  local_9c = 0.2;
  local_98 = 1.0;
  local_80 = 5;
  local_90 = 0x3e4ccccd;
  uStack_8c = 0x3e4ccccd;
  uStack_88 = 0x3d4ccccd;
  uStack_84 = 0;
  local_7c = 1;
  fVar5 = (float10)FUN_0113efd0();
  local_a0 = (float)fVar5;
  fVar5 = (float10)FUN_0113f000();
  local_9c = (float)fVar5;
  fVar5 = (float10)FUN_0113ef80();
  local_98 = (float)fVar5;
  puVar1 = (undefined4 *)FUN_0113ef90(&local_40);
  local_90 = *puVar1;
  uStack_8c = puVar1[1];
  uStack_88 = puVar1[2];
  uStack_84 = puVar1[3];
  local_7c = local_11;
  FUN_0120d690(&local_a0);
  FUN_0120dc80(0);
  if (*(char *)(param_3 + 0x1d) == '\0') {
    local_3c = 0;
    local_38 = 0;
  }
  else {
    local_38 = 0x32;
  }
  local_2c = local_11;
  local_34 = 5;
  FUN_0120d530(&local_40);
  uVar2 = FUN_0120d5a0(param_1);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18 = (**(code **)(**(int **)((int)pvVar3 + 0x28) + 4))(uVar2);
  local_68 = 0x200;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x80000000;
  local_4c = 0;
  local_48 = 0x14;
  (**(code **)(*DAT_01f8fc58 + 0x14))(&local_44,0x7dd65995);
  (**(code **)(*DAT_01f8fc58 + 0x10))(0x7dd65995,(uint)DAT_01f8fc58 & 0xffffff00);
  uVar4 = hkBaseObject::hkBaseObject_197(param_1,local_18,uVar2);
  (**(code **)(*DAT_01f8fc58 + 0x10))(0x7dd65995,local_44);
  if (param_4 != 0) {
    FUN_0113ea00(&PTR_vftable_018e9b94,0,local_64,local_60);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar3 + 0x28) + 8))(local_18,uVar2);
  FUN_0113ec00();
  FUN_0120d520();
  return uVar4;
}

// 0113EEE0  FUN_0113eee0  size=117  [run]
int FUN_0113eee0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_30 [28];
  undefined1 local_14 [16];
  
  if (*(char *)(param_2 + 0x20) == '\0') {
    hkpMoppShapeMediator::hkpMoppShapeMediator(param_1);
    iVar1 = FUN_0113ec80(local_14,param_1,param_2,param_3);
    hkBaseObject::hkBaseObject_190();
  }
  else {
    hkpMoppCachedShapeMediator::hkpMoppCachedShapeMediator(param_1);
    iVar1 = FUN_0113ec80(local_30,param_1,param_2,param_3);
    hkBaseObject::hkBaseObject_182();
  }
  if (iVar1 != 0) {
    *(bool *)(iVar1 + 0x2c) = *(char *)(param_2 + 0x1e) == '\0';
  }
  return iVar1;
}

// 0113EF60  FUN_0113ef60  size=17  [run]
void __thiscall FUN_0113ef60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// 0113EF80  FUN_0113ef80  size=4  [run]
float10 __fastcall FUN_0113ef80(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}

// 0113EF90  FUN_0113ef90  size=28  [run]
void __thiscall FUN_0113ef90(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return;
}

// 0113EFB0  FUN_0113efb0  size=17  [run]
void __thiscall FUN_0113efb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 0113EFD0  FUN_0113efd0  size=4  [run]
float10 __fastcall FUN_0113efd0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x10);
}

// 0113EFE0  FUN_0113efe0  size=17  [run]
void __thiscall FUN_0113efe0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// 0113F000  FUN_0113f000  size=4  [run]
float10 __fastcall FUN_0113f000(int param_1)

{
  return (float10)*(float *)(param_1 + 0x14);
}

// 0113F010  FUN_0113f010  size=71  [run]
void __fastcall FUN_0113f010(undefined4 *param_1)

{
  param_1[6] = 0x3e99999a;
  param_1[4] = 0x3ecccccd;
  param_1[5] = 0x3dcccccd;
  *param_1 = 0x3d4ccccd;
  param_1[1] = 0x3d4ccccd;
  param_1[2] = 0x3d4ccccd;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x101;
  *(undefined1 *)((int)param_1 + 0x1f) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  return;
}

// 0113F060  FUN_0113f060  size=16  [run]
void __thiscall FUN_0113f060(undefined4 *param_1,undefined4 *param_2)

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

// 0113F070  FUN_0113f070  size=8  [run]
undefined4 FUN_0113f070(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F0A0  FUN_0113f0a0  size=16  [run]
void FUN_0113f0a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F0B0  hkpSingleShapeContainer::hkpSingleShapeContainer_6  size=18  [run]
void hkpSingleShapeContainer::hkpSingleShapeContainer_6(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 0113F0D0  FUN_0113f0d0  size=6  [run]
undefined ** FUN_0113f0d0(void)

{
  return hkpSingleShapeContainer::vftable;
}

// 0113F190  FUN_0113f190  size=8  [run]
undefined4 FUN_0113f190(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F1C0  FUN_0113f1c0  size=16  [run]
void FUN_0113f1c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F1D0  hkpSingleShapeContainer::hkpSingleShapeContainer_5  size=86  [run]
void hkpSingleShapeContainer::hkpSingleShapeContainer_5(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    hkpBvTreeShape::hkpBvTreeShape_2(param_2);
    *param_1 = hkMoppBvTreeShapeBase::vftable;
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    *param_1 = hkpMoppBvTreeShape::vftable;
    param_1[0xc] = vftable;
    if (param_2 == 1) {
      iVar1 = param_1[5];
      *(undefined1 *)(param_1 + 2) = 9;
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      uVar3 = *(undefined4 *)(iVar1 + 0x18);
      uVar4 = *(undefined4 *)(iVar1 + 0x1c);
      param_1[8] = *(undefined4 *)(iVar1 + 0x10);
      param_1[9] = uVar2;
      param_1[10] = uVar3;
      param_1[0xb] = uVar4;
      param_1[6] = *(undefined4 *)(iVar1 + 0x20);
      param_1[7] = *(undefined4 *)(iVar1 + 0x24);
    }
  }
  return;
}

// 0113F230  FUN_0113f230  size=48  [run]
undefined ** FUN_0113f230(void)

{
  hkpBvTreeShape::hkpBvTreeShape_2(0);
  return hkpMoppBvTreeShape::vftable;
}

// 0113F260  FUN_0113f260  size=12  [run]
void __thiscall FUN_0113f260(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0113F270  hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase  size=38  [run]
undefined4 * __thiscall
hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(undefined4 *param_1,int param_2)

{
  hkpBvTreeShape::hkpBvTreeShape_2(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return param_1;
}

// 0113F2A0  hkpSingleShapeContainer::hkpSingleShapeContainer_7  size=84  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_7(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  hkpBvTreeShape::hkpBvTreeShape_2(param_2);
  *param_1 = hkMoppBvTreeShapeBase::vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  *param_1 = hkpMoppBvTreeShape::vftable;
  param_1[0xc] = vftable;
  if (param_2 == 1) {
    iVar1 = param_1[5];
    *(undefined1 *)(param_1 + 2) = 9;
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x10);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[6] = *(undefined4 *)(iVar1 + 0x20);
    param_1[7] = *(undefined4 *)(iVar1 + 0x24);
  }
  return param_1;
}

// 0113F300  FUN_0113f300  size=8  [run]
undefined4 FUN_0113f300(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F340  FUN_0113f340  size=21  [run]
void FUN_0113f340(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSimpleMeshShape::hkpSimpleMeshShape_2(param_2);
  }
  return;
}

// 0113F360  FUN_0113f360  size=16  [run]
void FUN_0113f360(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F370  FUN_0113f370  size=46  [run]
undefined4 FUN_0113f370(void)

{
  undefined4 local_60;
  
  hkpSimpleMeshShape::hkpSimpleMeshShape_2(0);
  return local_60;
}

// 0113F3A0  FUN_0113f3a0  size=8  [run]
undefined4 FUN_0113f3a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F3E0  FUN_0113f3e0  size=21  [run]
void FUN_0113f3e0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpMeshShape::hkpMeshShape(param_2);
  }
  return;
}

// 0113F400  FUN_0113f400  size=16  [run]
void FUN_0113f400(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F410  FUN_0113f410  size=46  [run]
undefined4 FUN_0113f410(void)

{
  undefined4 local_70;
  
  hkpMeshShape::hkpMeshShape(0);
  return local_70;
}

// 0113F440  FUN_0113f440  size=8  [run]
undefined4 FUN_0113f440(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F450  FUN_0113f450  size=8  [run]
undefined4 FUN_0113f450(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F460  FUN_0113f460  size=8  [run]
undefined4 FUN_0113f460(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F4A0  FUN_0113f4a0  size=21  [run]
void FUN_0113f4a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(param_2);
  }
  return;
}

// 0113F4C0  FUN_0113f4c0  size=16  [run]
void FUN_0113f4c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F4D0  FUN_0113f4d0  size=46  [run]
undefined4 FUN_0113f4d0(void)

{
  undefined4 local_80;
  
  hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(0);
  return local_80;
}

// 0113F510  FUN_0113f510  size=21  [run]
void FUN_0113f510(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(param_2);
  }
  return;
}

// 0113F530  FUN_0113f530  size=16  [run]
void FUN_0113f530(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F540  FUN_0113f540  size=46  [run]
undefined4 FUN_0113f540(void)

{
  undefined4 local_40;
  
  hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(0);
  return local_40;
}

// 0113F580  FUN_0113f580  size=21  [run]
void FUN_0113f580(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(param_2);
  }
  return;
}

// 0113F5A0  FUN_0113f5a0  size=16  [run]
void FUN_0113f5a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F5B0  FUN_0113f5b0  size=55  [run]
undefined4 FUN_0113f5b0(void)

{
  undefined4 local_120;
  
  hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(0);
  return local_120;
}

// 0113F5F0  FUN_0113f5f0  size=8  [run]
undefined4 FUN_0113f5f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F600  FUN_0113f600  size=8  [run]
undefined4 FUN_0113f600(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F610  FUN_0113f610  size=8  [run]
undefined4 FUN_0113f610(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F680  FUN_0113f680  size=21  [run]
void FUN_0113f680(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_01136350(param_2);
  }
  return;
}

// 0113F6B0  FUN_0113f6b0  size=21  [run]
void FUN_0113f6b0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpExtendedMeshShape::hkpExtendedMeshShape_2(param_2);
  }
  return;
}

// 0113F6D0  FUN_0113f6d0  size=16  [run]
void FUN_0113f6d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F6E0  FUN_0113f6e0  size=55  [run]
undefined4 FUN_0113f6e0(void)

{
  undefined4 local_100;
  
  hkpExtendedMeshShape::hkpExtendedMeshShape_2(0);
  return local_100;
}

// 0113F730  FUN_0113f730  size=12  [run]
void FUN_0113f730(void)

{
  FUN_011366c0();
  return;
}

// 0113F740  FUN_0113f740  size=8  [run]
undefined4 FUN_0113f740(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F750  FUN_0113f750  size=8  [run]
undefined4 FUN_0113f750(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F760  FUN_0113f760  size=8  [run]
undefined4 FUN_0113f760(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F7C0  FUN_0113f7c0  size=21  [run]
void FUN_0113f7c0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpCompressedMeshShape::hkpCompressedMeshShape_2(param_2);
  }
  return;
}

// 0113F7E0  FUN_0113f7e0  size=16  [run]
void FUN_0113f7e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113F7F0  FUN_0113f7f0  size=55  [run]
undefined4 FUN_0113f7f0(void)

{
  undefined4 local_f0;
  
  hkpCompressedMeshShape::hkpCompressedMeshShape_2(0);
  return local_f0;
}

// 0113F850  FUN_0113f850  size=12  [run]
void FUN_0113f850(void)

{
  FUN_01134690();
  return;
}

// 0113F860  FUN_0113f860  size=66  [run]
void FUN_0113f860(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),(*(uint *)(param_1 + 0x18) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 0113F930  FUN_0113f930  size=8  [run]
undefined4 FUN_0113f930(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F950  FUN_0113f950  size=8  [run]
undefined4 FUN_0113f950(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113F960  FUN_0113f960  size=25  [run]
undefined4 __thiscall FUN_0113f960(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 0113F990  FUN_0113f990  size=24  [run]
void FUN_0113f990(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 0113F9B0  FUN_0113f9b0  size=15  [run]
void FUN_0113f9b0(void)

{
  FUN_01006770();
  return;
}

// 0113F9C0  FUN_0113f9c0  size=8  [run]
undefined4 FUN_0113f9c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113FA00  FUN_0113fa00  size=21  [run]
void FUN_0113fa00(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpMultiRayShape::hkpMultiRayShape(param_2);
  }
  return;
}

// 0113FA20  FUN_0113fa20  size=16  [run]
void FUN_0113fa20(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113FA30  FUN_0113fa30  size=46  [run]
undefined4 FUN_0113fa30(void)

{
  undefined4 local_30;
  
  hkpMultiRayShape::hkpMultiRayShape(0);
  return local_30;
}

// 0113FA80  FUN_0113fa80  size=8  [run]
undefined4 FUN_0113fa80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113FAC0  FUN_0113fac0  size=21  [run]
void FUN_0113fac0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpListShape::hkpListShape(param_2);
  }
  return;
}

// 0113FAE0  FUN_0113fae0  size=16  [run]
void FUN_0113fae0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0113FAF0  FUN_0113faf0  size=46  [run]
undefined4 FUN_0113faf0(void)

{
  undefined4 local_80;
  
  hkpListShape::hkpListShape(0);
  return local_80;
}

// 0113FB20  FUN_0113fb20  size=8  [run]
undefined4 FUN_0113fb20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113FB40  FUN_0113fb40  size=65  [run]
void FUN_0113fb40(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x19) = 0xec;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  }
  return;
}

// 0113FB90  FUN_0113fb90  size=70  [run]
void FUN_0113fb90(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < *(int *)(param_1 + 0x58)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x58) * 8);
  }
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 0113FC20  FUN_0113fc20  size=28  [run]
void __thiscall FUN_0113fc20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0113FC60  FUN_0113fc60  size=15  [run]
void __thiscall FUN_0113fc60(int param_1,char param_2)

{
  *(char *)(param_1 + 5) = param_2 - (char)param_1;
  return;
}

// 0113FC80  FUN_0113fc80  size=41  [run]
void __thiscall FUN_0113fc80(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)((int)param_1 + 0x22) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *param_1 = 1;
    param_1[4] = 0;
  }
  return;
}

// 0113FCC0  FUN_0113fcc0  size=39  [run]
void FUN_0113fcc0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x5c);
  }
  return;
}

// 0113FD20  FUN_0113fd20  size=52  [run]
void __thiscall FUN_0113fd20(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0xec;
  }
  return;
}

// 0113FD60  FUN_0113fd60  size=63  [run]
void __thiscall FUN_0113fd60(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113FDA0  FUN_0113fda0  size=63  [run]
void __fastcall FUN_0113fda0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113FDE0  FUN_0113fde0  size=63  [run]
void __fastcall FUN_0113fde0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113FE20  FUN_0113fe20  size=62  [run]
void __thiscall FUN_0113fe20(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0xec;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  return;
}

// 0113FE60  FUN_0113fe60  size=65  [run]
void __fastcall FUN_0113fe60(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < *(int *)(param_1 + 0x58)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x58) * 8);
  }
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 0113FEB0  FUN_0113feb0  size=109  [run]
int __thiscall FUN_0113feb0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < *(int *)(param_1 + 0x58)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x50),*(int *)(param_1 + 0x58) * 8);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x5c);
  }
  return param_1;
}

// 0113FF50  FUN_0113ff50  size=44  [run]
void FUN_0113ff50(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)((int)param_1 + 0x22) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *param_1 = 1;
    param_1[4] = 0;
  }
  return;
}

// 0113FF80  FUN_0113ff80  size=53  [run]
void FUN_0113ff80(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0xec;
  }
  return;
}

// 0113FFD0  FUN_0113ffd0  size=8  [run]
undefined4 FUN_0113ffd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113FFE0  FUN_0113ffe0  size=8  [run]
undefined4 FUN_0113ffe0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0113FFF0  FUN_0113fff0  size=39  [run]
void FUN_0113fff0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x50);
  }
  return;
}

// 01140020  FUN_01140020  size=48  [run]
int __thiscall FUN_01140020(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x50);
  }
  return param_1;
}

// 011400A0  FUN_011400a0  size=8  [run]
undefined4 FUN_011400a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011400E0  FUN_011400e0  size=8  [run]
undefined4 FUN_011400e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140100  FUN_01140100  size=8  [run]
undefined4 FUN_01140100(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140110  FUN_01140110  size=8  [run]
undefined4 FUN_01140110(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140130  FUN_01140130  size=21  [run]
void FUN_01140130(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpStorageMeshShape::SubpartStorage::SubpartStorage(param_2);
  }
  return;
}

// 01140150  FUN_01140150  size=16  [run]
void FUN_01140150(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140160  FUN_01140160  size=46  [run]
undefined4 FUN_01140160(void)

{
  undefined4 local_60;
  
  hkpStorageMeshShape::SubpartStorage::SubpartStorage(0);
  return local_60;
}

// 011401A0  FUN_011401a0  size=21  [run]
void FUN_011401a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpStorageMeshShape::hkpStorageMeshShape_2(param_2);
  }
  return;
}

// 011401C0  FUN_011401c0  size=16  [run]
void FUN_011401c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011401D0  FUN_011401d0  size=46  [run]
undefined4 FUN_011401d0(void)

{
  undefined4 local_80;
  
  hkpStorageMeshShape::hkpStorageMeshShape_2(0);
  return local_80;
}

// 01140200  FUN_01140200  size=8  [run]
undefined4 FUN_01140200(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140220  FUN_01140220  size=21  [run]
void FUN_01140220(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpFastMeshShape::hkpFastMeshShape(param_2);
  }
  return;
}

// 01140240  FUN_01140240  size=16  [run]
void FUN_01140240(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140250  FUN_01140250  size=46  [run]
undefined4 FUN_01140250(void)

{
  undefined4 local_70;
  
  hkpFastMeshShape::hkpFastMeshShape(0);
  return local_70;
}

// 01140280  FUN_01140280  size=8  [run]
undefined4 FUN_01140280(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011402A0  FUN_011402a0  size=21  [run]
void FUN_011402a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpConvexPieceMeshShape::hkpConvexPieceMeshShape_2(param_2);
  }
  return;
}

// 011402C0  FUN_011402c0  size=16  [run]
void FUN_011402c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011402D0  FUN_011402d0  size=46  [run]
undefined4 FUN_011402d0(void)

{
  undefined4 local_40;
  
  hkpConvexPieceMeshShape::hkpConvexPieceMeshShape_2(0);
  return local_40;
}

// 01140310  FUN_01140310  size=21  [run]
void FUN_01140310(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpTriangleShape::hkpTriangleShape(param_2);
  }
  return;
}

// 01140330  FUN_01140330  size=16  [run]
void FUN_01140330(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140340  FUN_01140340  size=46  [run]
undefined4 FUN_01140340(void)

{
  undefined4 local_70;
  
  hkpTriangleShape::hkpTriangleShape(0);
  return local_70;
}

// 01140370  FUN_01140370  size=8  [run]
undefined4 FUN_01140370(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140390  FUN_01140390  size=21  [run]
void FUN_01140390(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSingleShapeContainer::hkpSingleShapeContainer_12(param_2);
  }
  return;
}

// 011403B0  FUN_011403b0  size=16  [run]
void FUN_011403b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011403C0  FUN_011403c0  size=46  [run]
undefined4 FUN_011403c0(void)

{
  undefined4 local_80;
  
  hkpSingleShapeContainer::hkpSingleShapeContainer_12(0);
  return local_80;
}

// 011403F0  FUN_011403f0  size=8  [run]
undefined4 FUN_011403f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140410  FUN_01140410  size=21  [run]
void FUN_01140410(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSphereShape::hkpSphereShape_2(param_2);
  }
  return;
}

// 01140430  FUN_01140430  size=16  [run]
void FUN_01140430(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140440  FUN_01140440  size=46  [run]
undefined4 FUN_01140440(void)

{
  undefined4 local_30;
  
  hkpSphereShape::hkpSphereShape_2(0);
  return local_30;
}

// 01140470  FUN_01140470  size=8  [run]
undefined4 FUN_01140470(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140490  FUN_01140490  size=16  [run]
void FUN_01140490(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011404A0  hkpSphereRepShape::hkpSphereRepShape_2  size=35  [run]
void hkpSphereRepShape::hkpSphereRepShape_2(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    hkpShape::hkpShape(param_2);
    *param_1 = vftable;
    *(undefined1 *)(param_1 + 2) = 0x1d;
  }
  return;
}

// 011404D0  FUN_011404d0  size=48  [run]
undefined ** FUN_011404d0(void)

{
  hkpShape::hkpShape(0);
  return hkpSphereRepShape::vftable;
}

// 01140500  FUN_01140500  size=8  [run]
undefined4 FUN_01140500(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140520  FUN_01140520  size=16  [run]
void FUN_01140520(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140530  hkpShapeInfo::hkpShapeInfo  size=18  [run]
void hkpShapeInfo::hkpShapeInfo(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01140550  FUN_01140550  size=6  [run]
undefined ** FUN_01140550(void)

{
  return hkpShapeInfo::vftable;
}

// 01140580  FUN_01140580  size=22  [run]
void __fastcall FUN_01140580(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 011405C0  FUN_011405c0  size=25  [run]
void __thiscall FUN_011405c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 01140610  FUN_01140610  size=60  [run]
void __thiscall FUN_01140610(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01140650  FUN_01140650  size=60  [run]
void __fastcall FUN_01140650(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01140690  FUN_01140690  size=60  [run]
void __fastcall FUN_01140690(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011406E0  FUN_011406e0  size=38  [run]
void FUN_011406e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01140710  hkBaseObject::hkBaseObject_226  size=170  [run]
void __fastcall hkBaseObject::hkBaseObject_226(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = hkpShapeInfo::vftable;
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] << 6);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  iVar1 = param_1[5];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 011407C0  hkpShapeInfo::vf00  size=52  [run]
int __thiscall hkpShapeInfo::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_226();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01140810  FUN_01140810  size=16  [run]
void FUN_01140810(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140820  FUN_01140820  size=21  [run]
void FUN_01140820(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpShapeBase::hkpShapeBase(param_2);
  }
  return;
}

// 01140840  FUN_01140840  size=46  [run]
undefined4 FUN_01140840(void)

{
  undefined4 local_20;
  
  hkpShapeBase::hkpShapeBase(0);
  return local_20;
}

// 01140870  FUN_01140870  size=8  [run]
undefined4 FUN_01140870(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140890  FUN_01140890  size=16  [run]
void FUN_01140890(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011408A0  FUN_011408a0  size=21  [run]
void FUN_011408a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpShape::hkpShape(param_2);
  }
  return;
}

// 011408C0  FUN_011408c0  size=46  [run]
undefined4 FUN_011408c0(void)

{
  undefined4 local_20;
  
  hkpShape::hkpShape(0);
  return local_20;
}

// 011408F0  FUN_011408f0  size=8  [run]
undefined4 FUN_011408f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140910  hkpMoppModifier::vf00  size=34  [run]
undefined4 * __thiscall hkpMoppModifier::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01140940  FUN_01140940  size=8  [run]
undefined4 FUN_01140940(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140970  FUN_01140970  size=16  [run]
void FUN_01140970(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140980  hkpMoppModifier::hkpMoppModifier_2  size=32  [run]
void hkpMoppModifier::hkpMoppModifier_2(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    *param_1 = hkpRemoveTerminalsMoppModifier::vftable;
    param_1[2] = hkpRemoveTerminalsMoppModifier::vftable;
  }
  return;
}

// 011409A0  FUN_011409a0  size=6  [run]
undefined ** FUN_011409a0(void)

{
  return hkpRemoveTerminalsMoppModifier::vftable;
}

// 011409D0  hkpRemoveTerminalsMoppModifier::vf00  size=8  [run]
void hkpRemoveTerminalsMoppModifier::vf00(void)

{
  vf00();
  return;
}

// 011409E0  FUN_011409e0  size=38  [run]
void FUN_011409e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01140A10  hkpRemoveTerminalsMoppModifier::vf00  size=52  [run]
int __thiscall hkpRemoveTerminalsMoppModifier::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_123();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01140A50  FUN_01140a50  size=8  [run]
undefined4 FUN_01140a50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140A70  FUN_01140a70  size=16  [run]
void FUN_01140a70(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140A80  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_9  size=87  [run]
void hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_9(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    *param_1 = hkpNullCollisionFilter::vftable;
    param_1[2] = hkpNullCollisionFilter::vftable;
    param_1[3] = hkpNullCollisionFilter::vftable;
    param_1[4] = hkpNullCollisionFilter::vftable;
    param_1[5] = hkpNullCollisionFilter::vftable;
    if (param_2 != 0) {
      param_1[8] = 1;
    }
  }
  return;
}

// 01140AE0  FUN_01140ae0  size=6  [run]
undefined ** FUN_01140ae0(void)

{
  return hkpNullCollisionFilter::vftable;
}

// 01140B50  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_8  size=84  [run]
void __thiscall
hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_8(undefined4 *param_1,int param_2)

{
  param_1[2] = vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  *param_1 = hkpNullCollisionFilter::vftable;
  param_1[2] = hkpNullCollisionFilter::vftable;
  param_1[3] = hkpNullCollisionFilter::vftable;
  param_1[4] = hkpNullCollisionFilter::vftable;
  param_1[5] = hkpNullCollisionFilter::vftable;
  if (param_2 != 0) {
    param_1[8] = 1;
  }
  return;
}

// 01140BB0  hkpNullCollisionFilter::vf04  size=13  [run]
void hkpNullCollisionFilter::vf04(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01140BC0  hkpNullCollisionFilter::vf04  size=13  [run]
void hkpNullCollisionFilter::vf04(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01140BD0  hkpNullCollisionFilter::vf00  size=13  [run]
void hkpNullCollisionFilter::vf00(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01140BE0  hkpNullCollisionFilter::vf00  size=13  [run]
void hkpNullCollisionFilter::vf00(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01140BF0  hkpNullCollisionFilter::vf04  size=13  [run]
void hkpNullCollisionFilter::vf04(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01140C00  hkpNullCollisionFilter::vf00  size=8  [run]
void hkpNullCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01140C10  hkpNullCollisionFilter::vf00  size=8  [run]
void hkpNullCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01140C20  hkpNullCollisionFilter::vf0C  size=8  [run]
void hkpNullCollisionFilter::vf0C(void)

{
  vf00();
  return;
}

// 01140C30  hkpNullCollisionFilter::vf04  size=8  [run]
void hkpNullCollisionFilter::vf04(void)

{
  vf00();
  return;
}

// 01140C40  FUN_01140c40  size=38  [run]
void FUN_01140c40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01140C70  hkpNullCollisionFilter::vf00  size=52  [run]
int __thiscall hkpNullCollisionFilter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_40();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01140CB0  FUN_01140cb0  size=8  [run]
undefined4 FUN_01140cb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140CD0  FUN_01140cd0  size=21  [run]
void FUN_01140cd0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpMultiSphereShape::hkpMultiSphereShape_2(param_2);
  }
  return;
}

// 01140CF0  FUN_01140cf0  size=16  [run]
void FUN_01140cf0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140D00  FUN_01140d00  size=55  [run]
undefined4 FUN_01140d00(void)

{
  undefined4 local_b0;
  
  hkpMultiSphereShape::hkpMultiSphereShape_2(0);
  return local_b0;
}

// 01140D40  FUN_01140d40  size=8  [run]
undefined4 FUN_01140d40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140D60  FUN_01140d60  size=16  [run]
void FUN_01140d60(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140D70  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_10  size=87  [run]
void hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_10
               (undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    *param_1 = hkpGroupFilter::vftable;
    param_1[2] = hkpGroupFilter::vftable;
    param_1[3] = hkpGroupFilter::vftable;
    param_1[4] = hkpGroupFilter::vftable;
    param_1[5] = hkpGroupFilter::vftable;
    if (param_2 != 0) {
      param_1[8] = 2;
    }
  }
  return;
}

// 01140DD0  FUN_01140dd0  size=6  [run]
undefined ** FUN_01140dd0(void)

{
  return hkpGroupFilter::vftable;
}

// 01140DE0  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_11  size=84  [run]
void __thiscall
hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_11(undefined4 *param_1,int param_2)

{
  param_1[2] = vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  *param_1 = hkpGroupFilter::vftable;
  param_1[2] = hkpGroupFilter::vftable;
  param_1[3] = hkpGroupFilter::vftable;
  param_1[4] = hkpGroupFilter::vftable;
  param_1[5] = hkpGroupFilter::vftable;
  if (param_2 != 0) {
    param_1[8] = 2;
  }
  return;
}

// 01140E60  FUN_01140e60  size=8  [run]
undefined4 FUN_01140e60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140EA0  hkpDefaultConvexListFilter::hkpDefaultConvexListFilter  size=18  [run]
void hkpDefaultConvexListFilter::hkpDefaultConvexListFilter(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01140EC0  FUN_01140ec0  size=16  [run]
void FUN_01140ec0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01140ED0  FUN_01140ed0  size=6  [run]
undefined ** FUN_01140ed0(void)

{
  return hkpDefaultConvexListFilter::vftable;
}

// 01140EE0  FUN_01140ee0  size=38  [run]
void FUN_01140ee0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01140F10  hkpConvexListFilter::vf00  size=53  [run]
undefined4 * __thiscall hkpConvexListFilter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01140F50  FUN_01140f50  size=38  [run]
void FUN_01140f50(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01140F80  hkpDefaultConvexListFilter::vf00  size=53  [run]
undefined4 * __thiscall hkpDefaultConvexListFilter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01140FC0  FUN_01140fc0  size=8  [run]
undefined4 FUN_01140fc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01140FE0  FUN_01140fe0  size=21  [run]
void FUN_01140fe0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpCylinderShape::hkpCylinderShape_2(param_2);
  }
  return;
}

// 01141000  FUN_01141000  size=16  [run]
void FUN_01141000(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01141010  FUN_01141010  size=46  [run]
undefined4 FUN_01141010(void)

{
  undefined4 local_70;
  
  hkpCylinderShape::hkpCylinderShape_2(0);
  return local_70;
}

// 01141050  FUN_01141050  size=21  [run]
void FUN_01141050(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpConvexVerticesShape::hkpConvexVerticesShape_2(param_2);
  }
  return;
}

// 01141070  FUN_01141070  size=16  [run]
void FUN_01141070(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01141080  FUN_01141080  size=46  [run]
undefined4 FUN_01141080(void)

{
  undefined4 local_80;
  
  hkpConvexVerticesShape::hkpConvexVerticesShape_2(0);
  return local_80;
}

// 011410B0  FUN_011410b0  size=8  [run]
undefined4 FUN_011410b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011410D0  FUN_011410d0  size=16  [run]
void FUN_011410d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011410E0  hkpConvexVerticesConnectivity::hkpConvexVerticesConnectivity_3  size=18  [run]
void hkpConvexVerticesConnectivity::hkpConvexVerticesConnectivity_3(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01141100  FUN_01141100  size=6  [run]
undefined ** FUN_01141100(void)

{
  return hkpConvexVerticesConnectivity::vftable;
}

// 01141130  FUN_01141130  size=21  [run]
void FUN_01141130(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSingleShapeContainer::hkpSingleShapeContainer_3(param_2);
  }
  return;
}

// 01141150  FUN_01141150  size=16  [run]
void FUN_01141150(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01141160  FUN_01141160  size=46  [run]
undefined4 FUN_01141160(void)

{
  undefined4 local_40;
  
  hkpSingleShapeContainer::hkpSingleShapeContainer_3(0);
  return local_40;
}

// 011411A0  FUN_011411a0  size=21  [run]
void FUN_011411a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSingleShapeContainer::hkpSingleShapeContainer_9(param_2);
  }
  return;
}

// 011411C0  FUN_011411c0  size=16  [run]
void FUN_011411c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011411D0  FUN_011411d0  size=46  [run]
undefined4 FUN_011411d0(void)

{
  undefined4 local_70;
  
  hkpSingleShapeContainer::hkpSingleShapeContainer_9(0);
  return local_70;
}

// 01141200  FUN_01141200  size=8  [run]
undefined4 FUN_01141200(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01141220  FUN_01141220  size=21  [run]
void FUN_01141220(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpShapeContainer::hkpShapeContainer_2(param_2);
  }
  return;
}

// 01141240  FUN_01141240  size=16  [run]
void FUN_01141240(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01141250  FUN_01141250  size=46  [run]
undefined4 FUN_01141250(void)

{
  undefined4 local_60;
  
  hkpShapeContainer::hkpShapeContainer_2(0);
  return local_60;
}

// 01141280  FUN_01141280  size=8  [run]
undefined4 FUN_01141280(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011412A0  FUN_011412a0  size=16  [run]
void FUN_011412a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011412B0  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_6  size=87  [run]
void hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_6(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    *param_1 = hkpCollisionFilterList::vftable;
    param_1[2] = hkpCollisionFilterList::vftable;
    param_1[3] = hkpCollisionFilterList::vftable;
    param_1[4] = hkpCollisionFilterList::vftable;
    param_1[5] = hkpCollisionFilterList::vftable;
    if (param_2 != 0) {
      param_1[8] = 3;
    }
  }
  return;
}

// 01141310  FUN_01141310  size=6  [run]
undefined ** FUN_01141310(void)

{
  return hkpCollisionFilterList::vftable;
}

// 01141350  FUN_01141350  size=26  [run]
void __thiscall FUN_01141350(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 011413A0  FUN_011413a0  size=61  [run]
void __thiscall FUN_011413a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011413E0  FUN_011413e0  size=61  [run]
void __fastcall FUN_011413e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01141420  FUN_01141420  size=61  [run]
void __fastcall FUN_01141420(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01141460  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_7  size=84  [run]
void __thiscall
hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_7(undefined4 *param_1,int param_2)

{
  param_1[2] = vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  *param_1 = hkpCollisionFilterList::vftable;
  param_1[2] = hkpCollisionFilterList::vftable;
  param_1[3] = hkpCollisionFilterList::vftable;
  param_1[4] = hkpCollisionFilterList::vftable;
  param_1[5] = hkpCollisionFilterList::vftable;
  if (param_2 != 0) {
    param_1[8] = 3;
  }
  return;
}

// 011414C0  hkpCollisionFilterList::vf00  size=8  [run]
void hkpCollisionFilterList::vf00(void)

{
  vf00();
  return;
}

// 011414D0  hkpCollisionFilterList::vf0C  size=8  [run]
void hkpCollisionFilterList::vf0C(void)

{
  vf00();
  return;
}

// 011414E0  hkpCollisionFilterList::vf04  size=8  [run]
void hkpCollisionFilterList::vf04(void)

{
  vf00();
  return;
}

// 011414F0  hkpCollisionFilterList::vf00  size=8  [run]
void hkpCollisionFilterList::vf00(void)

{
  vf00();
  return;
}

// 01141500  FUN_01141500  size=38  [run]
void FUN_01141500(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01141530  hkpCollisionFilterList::vf00  size=52  [run]
int __thiscall hkpCollisionFilterList::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_18();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01141570  FUN_01141570  size=8  [run]
undefined4 FUN_01141570(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01141590  FUN_01141590  size=21  [run]
void FUN_01141590(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpCapsuleShape::hkpCapsuleShape_2(param_2);
  }
  return;
}

// 011415B0  FUN_011415b0  size=16  [run]
void FUN_011415b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011415C0  FUN_011415c0  size=46  [run]
undefined4 FUN_011415c0(void)

{
  undefined4 local_50;
  
  hkpCapsuleShape::hkpCapsuleShape_2(0);
  return local_50;
}

// 011415F0  FUN_011415f0  size=8  [run]
undefined4 FUN_011415f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01141610  FUN_01141610  size=21  [run]
void FUN_01141610(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpSingleShapeContainer::hkpSingleShapeContainer_2(param_2);
  }
  return;
}

// 01141630  FUN_01141630  size=16  [run]
void FUN_01141630(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01141640  FUN_01141640  size=46  [run]
undefined4 FUN_01141640(void)

{
  undefined4 local_30;
  
  hkpSingleShapeContainer::hkpSingleShapeContainer_2(0);
  return local_30;
}

// 01141670  FUN_01141670  size=8  [run]
undefined4 FUN_01141670(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01141690  FUN_01141690  size=21  [run]
void FUN_01141690(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpBoxShape::hkpBoxShape_2(param_2);
  }
  return;
}

// 011416B0  FUN_011416b0  size=16  [run]
void FUN_011416b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 011416C0  FUN_011416c0  size=46  [run]
undefined4 FUN_011416c0(void)

{
  undefined4 local_40;
  
  hkpBoxShape::hkpBoxShape_2(0);
  return local_40;
}

// 011416F0  FUN_011416f0  size=8  [run]
undefined4 FUN_011416f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01141700  FUN_01141700  size=31  [run]
int __thiscall FUN_01141700(int param_1,int param_2)

{
  if (param_2 == 0) {
    return param_1 + 8;
  }
  if (param_2 != 1) {
    param_1 = param_1 + 2;
  }
  return param_1;
}

// 01141720  FUN_01141720  size=32  [run]
int __thiscall FUN_01141720(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return param_1 + 10;
  }
  iVar1 = param_1 + 4;
  if (param_2 != 1) {
    iVar1 = param_1 + 6;
  }
  return iVar1;
}

// 01141760  FUN_01141760  size=11  [run]
uint FUN_01141760(uint param_1)

{
  return param_1 & 1;
}

// 01141770  FUN_01141770  size=54  [run]
void __thiscall FUN_01141770(ushort *param_1,undefined1 *param_2,ushort *param_3)

{
  if ((*param_3 <= *param_1) && ((*param_1 != *param_3 || (param_3[1] <= param_1[1])))) {
    *param_2 = 0;
    return;
  }
  *param_2 = 1;
  return;
}

// 011417B0  FUN_011417b0  size=8  [run]
undefined4 FUN_011417b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011417F0  hkp3AxisSweep::vf0C  size=3  [run]
undefined4 hkp3AxisSweep::vf0C(void)

{
  return 0;
}

// 01141840  FUN_01141840  size=26  [run]
uint __fastcall FUN_01141840(undefined4 param_1,int param_2,int param_3)

{
  return 1 << ((byte)param_2 & 0x1f) & *(uint *)(param_3 + (param_2 >> 5) * 4);
}

// 011418D0  FUN_011418d0  size=83  [run]
void FUN_011418d0(ushort *param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  uVar2 = (int)param_2 - (int)param_1;
  while (0x40 < (int)(uVar2 & 0xfffffffc)) {
    puVar3 = param_1 + ((int)uVar2 >> 3) * 2;
    if (param_1[((int)uVar2 >> 3) * 2] < param_3) {
      param_1 = puVar3;
      puVar3 = param_2;
    }
    param_2 = puVar3;
    uVar2 = (int)puVar3 - (int)param_1;
  }
  uVar1 = *param_1;
  while (uVar1 < param_3) {
    param_1 = param_1 + 2;
    uVar1 = *param_1;
  }
  return;
}

// 01141940  hkp3AxisSweep::vf38  size=1  [run]
void hkp3AxisSweep::vf38(void)

{
  return;
}

// 011419B0  hkp3AxisSweep::vf78  size=203  [run]
void __thiscall
hkp3AxisSweep::vf78(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x70) = *param_2;
  *(float *)(param_1 + 0x74) = fVar1;
  *(float *)(param_1 + 0x78) = fVar2;
  *(float *)(param_1 + 0x7c) = fVar3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)(param_1 + 0x80) = *param_3;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(undefined4 *)(param_1 + 0x90) = *param_4;
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar8 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20);
  fVar9 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24);
  fVar10 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x40) = fVar1;
  *(float *)(param_1 + 0x44) = fVar2;
  *(float *)(param_1 + 0x48) = fVar3;
  *(float *)(param_1 + 0x4c) = fVar4;
  *(float *)(param_1 + 0x50) = fVar8 * 1.525972e-05 + fVar1;
  *(float *)(param_1 + 0x54) = fVar9 * 1.525972e-05 + fVar2;
  *(float *)(param_1 + 0x58) = fVar10 * 1.525972e-05 + fVar3;
  *(float *)(param_1 + 0x5c) =
       (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c)) * 1.525972e-05 + fVar4;
  *(float *)(param_1 + 0x60) = (1.0 / fVar8) * 65532.0;
  *(float *)(param_1 + 100) = (1.0 / fVar9) * 65532.0;
  *(float *)(param_1 + 0x68) = (1.0 / fVar10) * 65532.0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

// 01141A80  FUN_01141a80  size=413  [run]
void __thiscall
FUN_01141a80(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar6 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_6 + iVar6 * 4) = *(undefined4 *)(*param_1 + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  puVar8 = (uint *)(param_6 + 4);
  puVar3 = (uint *)(param_6 + -4 + param_3 * 4);
  puVar7 = (uint *)(*param_1 + 4);
  puVar9 = (uint *)(*param_1 + param_3 * 4);
  puVar2 = (uint *)(*param_1 + (param_4 + param_3) * 4);
  uVar4 = *(ushort *)puVar8;
  while (uVar4 < (ushort)*puVar9) {
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    uVar4 = (ushort)*puVar8;
  }
  if (puVar8 < puVar3) {
    for (; puVar9 < puVar2; puVar9 = puVar9 + 1) {
      while (((ushort)*puVar8 < (ushort)*puVar9 ||
             (((ushort)*puVar8 == (ushort)*puVar9 &&
              (*(ushort *)((int)puVar8 + 2) < *(ushort *)((int)puVar9 + 2)))))) {
        *puVar7 = *puVar8;
        iVar6 = (int)puVar7 - *param_1;
        uVar5 = *puVar7;
        puVar1 = (ushort *)((int)puVar7 + 2);
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *(short *)((uint)*puVar1 * 0x10 +
                   *(int *)(&DAT_01b214fc + (((ushort)uVar5 & 1) + param_5 * 2) * 4) + param_2) =
             (short)(iVar6 >> 2);
        if (puVar3 <= puVar8) goto joined_r0x01141b84;
      }
      *puVar7 = *puVar9;
      *(short *)((uint)*(ushort *)((int)puVar7 + 2) * 0x10 +
                 *(int *)(&DAT_01b214fc + (((ushort)*puVar7 & 1) + param_5 * 2) * 4) + param_2) =
           (short)((int)puVar7 - *param_1 >> 2);
      puVar7 = puVar7 + 1;
    }
  }
  else {
joined_r0x01141b84:
    for (; puVar9 < puVar2; puVar9 = puVar9 + 1) {
      uVar5 = *puVar9;
      *puVar7 = uVar5;
      *(short *)((uint)*(ushort *)((int)puVar7 + 2) * 0x10 +
                 *(int *)(&DAT_01b214fc + ((uVar5 & 1) + param_5 * 2) * 4) + param_2) =
           (short)((int)puVar7 - *param_1 >> 2);
      puVar7 = puVar7 + 1;
    }
  }
  if (puVar8 <= puVar3) {
    do {
      *puVar7 = *puVar8;
      uVar5 = *puVar7;
      puVar1 = (ushort *)((int)puVar7 + 2);
      iVar6 = (int)puVar7 - *param_1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      *(short *)((uint)*puVar1 * 0x10 +
                 *(int *)(&DAT_01b214fc + (((ushort)uVar5 & 1) + param_5 * 2) * 4) + param_2) =
           (short)(iVar6 >> 2);
    } while (puVar8 <= puVar3);
  }
  return;
}

// 01141C20  FUN_01141c20  size=245  [run]
void FUN_01141c20(undefined8 *param_1,int param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined8 *puVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  
  sVar3 = param_3[4];
  sVar4 = *param_3;
  sVar5 = param_3[1];
  sVar6 = param_3[5];
  sVar7 = param_3[2];
  sVar8 = param_3[3];
  puVar9 = param_1 + param_2 * 2;
  for (; param_1 < puVar9; param_1 = param_1 + 2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    sVar10 = (short)uVar1;
    sVar11 = (short)((ulonglong)uVar1 >> 0x10);
    sVar12 = (short)((ulonglong)uVar1 >> 0x20);
    sVar13 = (short)((ulonglong)uVar1 >> 0x30);
    *param_1 = CONCAT26(sVar13 - (-(ushort)((short)(sVar8 + -2) < sVar13) -
                                 (ushort)((short)(sVar5 + -1) < sVar13)),
                        CONCAT24(sVar12 - (-(ushort)((short)(sVar7 + -2) < sVar12) -
                                          (ushort)((short)(sVar4 + -1) < sVar12)),
                                 CONCAT22(sVar11 - (-(ushort)((short)(sVar8 + -2) < sVar11) -
                                                   (ushort)((short)(sVar5 + -1) < sVar11)),
                                          sVar10 - (-(ushort)((short)(sVar7 + -2) < sVar10) -
                                                   (ushort)((short)(sVar4 + -1) < sVar10)))));
    sVar10 = (short)uVar2;
    sVar11 = (short)((ulonglong)uVar2 >> 0x10);
    param_1[1] = CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar2 >> 0x20),
                                   CONCAT22(sVar11 - (-(ushort)((short)(sVar6 + -2) < sVar11) -
                                                     (ushort)((short)(sVar3 + -1) < sVar11)),
                                            sVar10 - (-(ushort)((short)(sVar6 + -2) < sVar10) -
                                                     (ushort)((short)(sVar3 + -1) < sVar10)))));
  }
  return;
}

// 01141DE0  FUN_01141de0  size=239  [run]
void FUN_01141de0(undefined8 *param_1,int param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  
  sVar3 = param_3[4];
  sVar4 = *param_3;
  sVar5 = param_3[1];
  uVar9 = *(undefined4 *)param_3;
  sVar6 = param_3[5];
  sVar7 = param_3[2];
  sVar8 = param_3[3];
  uVar10 = *(undefined4 *)(param_3 + 2);
  puVar11 = param_1 + param_2 * 2;
  for (; param_1 != puVar11; param_1 = param_1 + 2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    sVar12 = (short)uVar1;
    sVar13 = (short)((ulonglong)uVar1 >> 0x10);
    sVar14 = (short)((ulonglong)uVar1 >> 0x20);
    sVar15 = (short)((ulonglong)uVar1 >> 0x30);
    *param_1 = CONCAT26(sVar15 + (-(ushort)(sVar8 < sVar15) - (ushort)(sVar5 < sVar15)),
                        CONCAT24(sVar14 + (-(ushort)(sVar7 < sVar14) - (ushort)(sVar4 < sVar14)),
                                 CONCAT22(sVar13 + (-(ushort)((short)((uint)uVar10 >> 0x10) < sVar13
                                                             ) -
                                                   (ushort)((short)((uint)uVar9 >> 0x10) < sVar13)),
                                          sVar12 + (-(ushort)((short)uVar10 < sVar12) -
                                                   (ushort)((short)uVar9 < sVar12)))));
    sVar12 = (short)uVar2;
    sVar13 = (short)((ulonglong)uVar2 >> 0x10);
    param_1[1] = CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar2 >> 0x20),
                                   CONCAT22(sVar13 + (-(ushort)(sVar6 < sVar13) -
                                                     (ushort)(sVar3 < sVar13)),
                                            sVar12 + (-(ushort)(sVar6 < sVar12) -
                                                     (ushort)(sVar3 < sVar12)))));
  }
  return;
}

// 01141ED0  FUN_01141ed0  size=436  [run]
void __thiscall
FUN_01141ed0(int param_1,int param_2,int param_3,int param_4,ushort param_5,undefined4 *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  uVar2 = *(ushort *)(param_4 + 10);
  uVar3 = *(ushort *)(param_4 + 8);
  puVar7 = param_6;
  for (param_2 = param_2 >> 7; -1 < param_2; param_2 = param_2 + -1) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7 = puVar7 + 4;
  }
  pbVar9 = (byte *)(*(int *)(param_1 + 0xac) + 4);
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (param_3 = param_3 >> (0x10U - (char)*(undefined4 *)(param_1 + 0xd4) & 0x1f), 0 < param_3)) {
    uVar4 = *(ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + param_3 * 0x10);
    puVar1 = (ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + param_3 * 0x10);
    param_6[(int)(uint)uVar4 >> 5] = param_6[(int)(uint)uVar4 >> 5] ^ 1 << ((byte)uVar4 & 0x1f);
    puVar5 = *(ushort **)(puVar1 + 2);
    iVar6 = *(int *)(puVar1 + 4);
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      uVar4 = *puVar5;
      if (uVar4 != param_5) {
        param_6[(int)(uint)uVar4 >> 5] = param_6[(int)(uint)uVar4 >> 5] ^ 1 << ((byte)uVar4 & 0x1f);
      }
      puVar5 = puVar5 + 1;
    }
    iVar10 = (uint)*puVar1 * 0x10 + *(int *)(param_1 + 0xa0);
    iVar6 = *(int *)(param_1 + 0xac);
    uVar4 = *(ushort *)(iVar10 + 10);
    for (pbVar9 = (byte *)(iVar6 + 4 + (uint)*(ushort *)(iVar10 + 8) * 4);
        pbVar9 < (byte *)(iVar6 + (uint)uVar4 * 4); pbVar9 = pbVar9 + 4) {
      if ((*pbVar9 & 1) == 0) {
        param_6[(int)(uint)*(ushort *)(pbVar9 + 2) >> 5] =
             param_6[(int)(uint)*(ushort *)(pbVar9 + 2) >> 5] &
             ~(1 << ((byte)*(ushort *)(pbVar9 + 2) & 0x1f));
      }
    }
    pbVar9 = (byte *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)(iVar10 + 8) * 4);
  }
  iVar6 = *(int *)(param_1 + 0xac);
  for (; pbVar9 < (byte *)(iVar6 + (uint)uVar3 * 4); pbVar9 = pbVar9 + 4) {
    param_6[(int)(uint)*(ushort *)(pbVar9 + 2) >> 5] =
         param_6[(int)(uint)*(ushort *)(pbVar9 + 2) >> 5] ^
         1 << ((byte)*(ushort *)(pbVar9 + 2) & 0x1f);
  }
  iVar6 = *(int *)(param_1 + 0xac);
  while (pbVar8 = pbVar9, pbVar9 = pbVar8 + 4, pbVar9 < (byte *)(iVar6 + (uint)uVar2 * 4)) {
    if ((*pbVar9 & 1) == 0) {
      uVar3 = *(ushort *)(pbVar8 + 6);
      param_6[(int)(uint)uVar3 >> 5] = param_6[(int)(uint)uVar3 >> 5] ^ 1 << ((byte)uVar3 & 0x1f);
    }
  }
  return;
}

// 01142090  hkp3AxisSweep::vf54  size=114  [run]
uint __thiscall hkp3AxisSweep::vf54(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  piVar3 = (int *)(*param_3 * 0x10 + iVar1);
  piVar2 = (int *)(*param_2 * 0x10 + iVar1);
  if ((((*(short *)((int)piVar2 + 10) - (short)piVar3[2] |
         *(short *)(*param_3 * 0x10 + 10 + iVar1) - *(short *)(*param_2 * 0x10 + 8 + iVar1) |
         (short)piVar3[1] - (short)*piVar2 | (short)piVar2[1] - (short)*piVar3) & 0x8000U) == 0) &&
     (iVar1 = *piVar2, piVar2 = (int *)(piVar2[1] - *piVar3),
     ((piVar3[1] - iVar1 | (uint)piVar2) & 0x80008000) == 0)) {
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  return (uint)piVar2 & 0xffffff00;
}

// 01142110  hkp3AxisSweep::vf14  size=227  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkp3AxisSweep::vf14(int *param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = (float)param_1[0x24];
  fStack_1c = (float)param_1[0x25];
  fStack_18 = (float)param_1[0x26];
  fStack_14 = (float)param_1[0x27];
  auVar2._0_4_ = ((float)param_1[0x1c] + *param_3) * local_20;
  auVar2._4_4_ = ((float)param_1[0x1d] + param_3[1]) * fStack_1c;
  auVar2._8_4_ = ((float)param_1[0x1e] + param_3[2]) * fStack_18;
  auVar2._12_4_ = ((float)param_1[0x1f] + param_3[3]) * fStack_14;
  auVar2 = minps(auVar2,_DAT_01b34420);
  auVar2 = maxps(auVar2,ZEXT816(0));
  fVar1 = auVar2._0_4_;
  fVar4 = auVar2._4_4_;
  fVar5 = auVar2._8_4_;
  fVar6 = auVar2._12_4_;
  auVar7._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar7._4_4_ = fVar4 - (float)(-(uint)(2.1474836e+09 <= fVar4) & 0x4f000000);
  auVar7._8_4_ = fVar5 - (float)(-(uint)(2.1474836e+09 <= fVar5) & 0x4f000000);
  auVar7._12_4_ = fVar6 - (float)(-(uint)(2.1474836e+09 <= fVar6) & 0x4f000000);
  auVar8 = maxps(auVar7,ZEXT816(0));
  auVar3._0_4_ = ((float)param_1[0x20] + param_3[4]) * local_20;
  auVar3._4_4_ = ((float)param_1[0x21] + param_3[5]) * fStack_1c;
  auVar3._8_4_ = ((float)param_1[0x22] + param_3[6]) * fStack_18;
  auVar3._12_4_ = ((float)param_1[0x23] + param_3[7]) * fStack_14;
  auVar2 = minps(auVar3,_DAT_01b34420);
  local_40 = (int)auVar8._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  uStack_3c = (int)auVar8._4_4_ + (uint)(2.1474836e+09 <= fVar4) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar4);
  uStack_38 = (int)auVar8._8_4_ + (uint)(2.1474836e+09 <= fVar5) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar5);
  uStack_34 = (int)auVar8._12_4_ + (uint)(2.1474836e+09 <= fVar6) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar6);
  auVar2 = maxps(auVar2,ZEXT816(0));
  fVar1 = auVar2._0_4_;
  fVar4 = auVar2._4_4_;
  fVar5 = auVar2._8_4_;
  fVar6 = auVar2._12_4_;
  auVar8._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar8._4_4_ = fVar4 - (float)(-(uint)(2.1474836e+09 <= fVar4) & 0x4f000000);
  auVar8._8_4_ = fVar5 - (float)(-(uint)(2.1474836e+09 <= fVar5) & 0x4f000000);
  auVar8._12_4_ = fVar6 - (float)(-(uint)(2.1474836e+09 <= fVar6) & 0x4f000000);
  auVar2 = maxps(auVar8,ZEXT816(0));
  local_30 = (int)auVar2._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  uStack_2c = (int)auVar2._4_4_ + (uint)(2.1474836e+09 <= fVar4) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar4);
  uStack_28 = (int)auVar2._8_4_ + (uint)(2.1474836e+09 <= fVar5) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar5);
  uStack_24 = (int)auVar2._12_4_ + (uint)(2.1474836e+09 <= fVar6) * -0x80000000 |
              -(uint)(4.2949673e+09 <= fVar6);
  (**(code **)(*param_1 + 0x18))(param_2,&local_40,param_4);
  return;
}

// 01142200  hkp3AxisSweep::vf28  size=8  [run]
int __fastcall hkp3AxisSweep::vf28(int param_1)

{
  return *(int *)(param_1 + 0xa4) + -1;
}

// 01142210  hkp3AxisSweep::vf68  size=23  [run]
int __fastcall hkp3AxisSweep::vf68(int param_1)

{
  return (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xd0)) * 0x18 + 0x24;
}

// 01142230  FUN_01142230  size=221  [run]
void __thiscall FUN_01142230(int param_1,ushort *param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = *(float *)(param_1 + 0x40);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 0x48);
  fVar9 = *(float *)(param_1 + 0x4c);
  fVar11 = 1.0 / *(float *)(param_1 + 0x60);
  fVar10 = 1.0 / *(float *)(param_1 + 0x68);
  fVar12 = 1.0 / *(float *)(param_1 + 100);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + (uint)param_2[2] * 4);
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + (uint)param_2[3] * 4);
  uVar3 = *(ushort *)(*(int *)(param_1 + 0xac) + (uint)param_2[4] * 4);
  uVar4 = *(ushort *)(*(int *)(param_1 + 0xb8) + (uint)*param_2 * 4);
  uVar5 = *(ushort *)(*(int *)(param_1 + 0xc4) + (uint)param_2[1] * 4);
  param_3[4] = (float)*(ushort *)(*(int *)(param_1 + 0xac) + (uint)param_2[5] * 4) * fVar11 - fVar6;
  param_3[5] = (float)uVar1 * fVar12 - fVar7;
  param_3[6] = (float)uVar2 * fVar10 - fVar8;
  param_3[7] = 0.0 - fVar9;
  *param_3 = (float)uVar3 * fVar11 - fVar6;
  param_3[1] = (float)uVar4 * fVar12 - fVar7;
  param_3[2] = (float)uVar5 * fVar10 - fVar8;
  param_3[3] = 0.0 - fVar9;
  return;
}

// 01142310  FUN_01142310  size=460  [run]
void __thiscall FUN_01142310(int param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  ushort *puVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  puVar6 = (ushort *)(param_2 * 0x10 + iVar2);
  uVar8 = puVar6[4];
  uVar9 = (uint)uVar8;
  psVar4 = (short *)(*(int *)(param_1 + 0xac) + uVar9 * 4);
  psVar5 = psVar4;
  if (*psVar4 == psVar4[-2]) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + 8 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  sVar7 = (short)param_2;
  psVar5[1] = sVar7;
  puVar6[4] = uVar8;
  uVar8 = puVar6[5];
  uVar9 = (uint)uVar8;
  psVar4 = (short *)(*(int *)(param_1 + 0xac) + uVar9 * 4);
  psVar5 = psVar4;
  if (*psVar4 == psVar4[-2]) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + 10 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  psVar5[1] = sVar7;
  puVar6[5] = uVar8;
  uVar8 = *puVar6;
  uVar9 = (uint)uVar8;
  psVar4 = (short *)(*(int *)(param_1 + 0xb8) + uVar9 * 4);
  psVar5 = psVar4;
  if (*psVar4 == psVar4[-2]) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  psVar5[1] = sVar7;
  *puVar6 = uVar8;
  uVar8 = puVar6[2];
  uVar9 = (uint)uVar8;
  psVar4 = (short *)(*(int *)(param_1 + 0xb8) + uVar9 * 4);
  psVar5 = psVar4;
  if (*psVar4 == psVar4[-2]) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + 4 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  psVar5[1] = sVar7;
  puVar6[2] = uVar8;
  uVar8 = puVar6[1];
  uVar9 = (uint)uVar8;
  psVar4 = (short *)(*(int *)(param_1 + 0xc4) + uVar9 * 4);
  psVar5 = psVar4;
  if (*psVar4 == psVar4[-2]) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + 2 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  psVar5[1] = sVar7;
  puVar6[1] = uVar8;
  uVar8 = puVar6[3];
  uVar9 = (uint)uVar8;
  iVar3 = *(int *)(param_1 + 0xc4);
  psVar4 = (short *)(iVar3 + uVar9 * 4);
  psVar5 = psVar4;
  if (*(short *)(iVar3 + uVar9 * 4) == *(short *)(iVar3 + -4 + uVar9 * 4)) {
    do {
      uVar8 = (ushort)uVar9;
      psVar5 = psVar4;
      if ((ushort)psVar4[-1] <= param_2) break;
      *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 + -2);
      psVar5 = psVar4 + -2;
      *(ushort *)(iVar2 + 6 + (uint)(ushort)psVar4[-1] * 0x10) = uVar8;
      uVar9 = uVar9 - 1;
      uVar8 = (ushort)uVar9;
      psVar1 = psVar4 + -4;
      psVar4 = psVar5;
    } while (*psVar5 == *psVar1);
  }
  psVar5[1] = sVar7;
  puVar6[3] = uVar8;
  return;
}

// 011424E0  FUN_011424e0  size=88  [run]
void __thiscall FUN_011424e0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)(*param_1 + param_2 * 4);
  puVar5 = (undefined4 *)(*param_1 + -4 + param_3 * 4);
  puVar1 = puVar4;
  if (puVar4 < puVar5) {
    uVar3 = (uint)((int)puVar5 + (-1 - (int)puVar4)) >> 2;
    puVar1 = puVar4 + uVar3 + 1;
    puVar5 = puVar4;
    for (iVar2 = uVar3 + 1; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
    }
  }
  puVar4 = (undefined4 *)(*param_1 + (param_1[1] + -2) * 4);
  param_1[1] = param_1[1] + -2;
  if (puVar1 < puVar4) {
    iVar2 = ((uint)((int)puVar4 + (-1 - (int)puVar1)) >> 2) + 1;
    puVar4 = puVar1 + 2;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

// 01142540  hkp3AxisSweep::vf40  size=31  [run]
void __thiscall hkp3AxisSweep::vf40(int param_1,int *param_2,undefined4 param_3)

{
  FUN_01142230(*param_2 * 0x10 + *(int *)(param_1 + 0xa0),param_3);
  return;
}

// 01142560  hkp3AxisSweep::vf44  size=89  [run]
void __thiscall hkp3AxisSweep::vf44(int param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x4c);
  *param_2 = -*(float *)(param_1 + 0x40);
  param_2[1] = -fVar2;
  param_2[2] = -fVar3;
  param_2[3] = -fVar4;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar8 = rcpps(in_XMM2,auVar1);
  fVar5 = (2.0 - auVar1._0_4_ * auVar8._0_4_) * auVar8._0_4_;
  fVar6 = (2.0 - auVar1._4_4_ * auVar8._4_4_) * auVar8._4_4_;
  fVar7 = (2.0 - auVar1._8_4_ * auVar8._8_4_) * auVar8._8_4_;
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar7;
  param_3[3] = (2.0 - auVar1._12_4_ * auVar8._12_4_) * auVar8._12_4_;
  fVar5 = fVar5 * 65532.0;
  fVar6 = fVar6 * 65532.0;
  fVar7 = fVar7 * 65532.0;
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar7;
  param_3[3] = 65532.0;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_3 = *param_2 + fVar5;
  param_3[1] = fVar2 + fVar6;
  param_3[2] = fVar3 + fVar7;
  param_3[3] = fVar4 + 65532.0;
  return;
}

// 011425C0  hkp3AxisSweep::vf5C  size=216  [run]
void __thiscall hkp3AxisSweep::vf5C(int *param_1,uint *param_2,float *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar3 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  local_20 = *param_2 ^ 0x80000000;
  uStack_1c = param_2[1] ^ 0x80000000;
  uStack_18 = param_2[2] ^ 0x80000000;
  uStack_14 = param_2[3] ^ 0x80000000;
  (**(code **)(*param_1 + 0x58))(&local_20,&local_30,param_4);
  param_1[0x10] = (int)(local_30 + (float)param_1[0x10]);
  param_1[0x11] = (int)(fStack_2c + (float)param_1[0x11]);
  param_1[0x12] = (int)(fStack_28 + (float)param_1[0x12]);
  param_1[0x13] = (int)(fStack_24 + (float)param_1[0x13]);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x18);
  auVar3 = rcpps(in_XMM4,auVar1);
  auVar2._0_4_ = (2.0 - auVar1._0_4_ * auVar3._0_4_) * auVar3._0_4_ + (float)param_1[0x10];
  auVar2._4_4_ = (2.0 - auVar1._4_4_ * auVar3._4_4_) * auVar3._4_4_ + (float)param_1[0x11];
  auVar2._8_4_ = (2.0 - auVar1._8_4_ * auVar3._8_4_) * auVar3._8_4_ + (float)param_1[0x12];
  auVar2._12_4_ = (float)param_1[0x13] + 1.0;
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar2;
  param_1[0x1c] = (int)(local_30 + (float)param_1[0x1c]);
  param_1[0x1d] = (int)(fStack_2c + (float)param_1[0x1d]);
  param_1[0x1e] = (int)(fStack_28 + (float)param_1[0x1e]);
  param_1[0x1f] = (int)(fStack_24 + (float)param_1[0x1f]);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x24);
  auVar2 = rcpps(auVar2,auVar1);
  param_1[0x20] = (int)((2.0 - auVar1._0_4_ * auVar2._0_4_) * auVar2._0_4_ + (float)param_1[0x1c]);
  param_1[0x21] = (int)((2.0 - auVar1._4_4_ * auVar2._4_4_) * auVar2._4_4_ + (float)param_1[0x1d]);
  param_1[0x22] = (int)((2.0 - auVar1._8_4_ * auVar2._8_4_) * auVar2._8_4_ + (float)param_1[0x1e]);
  param_1[0x23] = (int)((float)param_1[0x1f] + 1.0);
  *param_3 = -local_30;
  param_3[1] = -fStack_2c;
  param_3[2] = -fStack_28;
  param_3[3] = -fStack_24;
  return;
}

// 011426A0  FUN_011426a0  size=72  [run]
void __fastcall FUN_011426a0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
  }
  puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
  param_3[1] = param_3[1] + 1;
  *puVar1 = *(undefined4 *)(param_1 + 0xc);
  puVar1[1] = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 011426F0  FUN_011426f0  size=72  [run]
void __fastcall FUN_011426f0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
  }
  puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
  param_3[1] = param_3[1] + 1;
  *puVar1 = *(undefined4 *)(param_1 + 0xc);
  puVar1[1] = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 01142740  FUN_01142740  size=142  [run]
void __fastcall FUN_01142740(int param_1,int param_2,undefined2 param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if ((*(uint *)(param_4 + 0xc) & 1) == 0) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
    }
    puVar1 = (undefined4 *)(*param_5 + param_5[1] * 8);
    param_5[1] = param_5[1] + 1;
    *puVar1 = *(undefined4 *)(param_2 + 0xc);
    puVar1[1] = *(undefined4 *)(param_4 + 0xc);
    return;
  }
  piVar2 = (int *)((*(uint *)(param_4 + 0xc) & 0xfffffffe) + 4 + param_1);
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,2);
  }
  *(undefined2 *)(*piVar2 + piVar2[1] * 2) = param_3;
  piVar2[1] = piVar2[1] + 1;
  return;
}

// 011427D0  FUN_011427d0  size=145  [run]
void __fastcall FUN_011427d0(int param_1,int param_2,short param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  if ((*(uint *)(param_4 + 0xc) & 1) == 0) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
    }
    puVar1 = (undefined4 *)(*param_5 + param_5[1] * 8);
    param_5[1] = param_5[1] + 1;
    *puVar1 = *(undefined4 *)(param_2 + 0xc);
    puVar1[1] = *(undefined4 *)(param_4 + 0xc);
    return;
  }
  uVar3 = *(uint *)(param_4 + 0xc) & 0xfffffffe;
  iVar2 = *(int *)(uVar3 + 8 + param_1);
  param_1 = uVar3 + param_1;
  iVar4 = 0;
  if (0 < iVar2) {
    psVar5 = *(short **)(param_1 + 4);
    do {
      if (*psVar5 == param_3) goto LAB_01142845;
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = -1;
LAB_01142845:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) != iVar4) {
    *(undefined2 *)(*(int *)(param_1 + 4) + iVar4 * 2) =
         *(undefined2 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 2);
  }
  return;
}

// 01142870  FUN_01142870  size=214  [run]
void __thiscall
FUN_01142870(int *param_1,undefined4 param_2,uint param_3,ushort param_4,ushort param_5,
            short *param_6,short *param_7)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = param_1[1] + 2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  puVar1 = (undefined4 *)(*param_1 + -0xc + iVar5 * 4);
  param_1[1] = iVar5;
  puVar1[2] = *puVar1;
  puVar4 = (ushort *)(puVar1 + -1);
  uVar2 = *puVar4;
  while (param_5 < uVar2) {
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)puVar4;
    puVar4 = puVar4 + -2;
    uVar2 = *puVar4;
  }
  while ((param_5 == uVar2 && (param_3 < puVar4[1]))) {
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)puVar4;
    puVar4 = puVar4 + -2;
    uVar2 = *puVar4;
  }
  puVar4[4] = param_5;
  puVar4[5] = (ushort)param_3;
  *param_7 = (short)((int)puVar4 - *param_1 >> 2) + 2;
  uVar2 = *puVar4;
  while (param_4 < uVar2) {
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)puVar4;
    puVar4 = puVar4 + -2;
    uVar2 = *puVar4;
  }
  while ((param_4 == uVar2 && (param_3 < puVar4[1]))) {
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)puVar4;
    puVar4 = puVar4 + -2;
    uVar2 = *puVar4;
  }
  puVar4[3] = (ushort)param_3;
  puVar4[2] = param_4;
  *param_6 = (short)((int)puVar4 - *param_1 >> 2) + 1;
  return;
}

// 01142950  FUN_01142950  size=273  [run]
int __thiscall FUN_01142950(int *param_1,int param_2,int param_3,int param_4,ushort *param_5)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  
  iVar3 = param_1[1];
  iVar1 = iVar3 + (int)param_5;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,4);
  }
  param_1[1] = iVar1;
  uVar2 = *(ushort *)(param_4 + -4 + (int)param_5 * 4);
  iVar4 = *param_1;
  *(undefined4 *)(iVar4 + -4 + iVar1 * 4) = *(undefined4 *)(iVar4 + -4 + iVar3 * 4);
  iVar1 = iVar4 + -4 + iVar1 * 4;
  param_5 = (ushort *)(iVar4 + -4 + iVar3 * 4);
  *(short *)((uint)param_5[1] * 0x10 + *(int *)(&DAT_01b214fc + ((*param_5 & 1) + param_3 * 2) * 4)
            + param_2) = (short)(iVar1 - *param_1 >> 2);
  puVar6 = param_5 + -2;
  puVar5 = (undefined4 *)(iVar1 + -4);
  if (uVar2 < *puVar6) {
    param_5 = param_5 + -0x102;
    do {
      *puVar5 = *(undefined4 *)puVar6;
      *(short *)((uint)param_5[0x101] * 0x10 +
                 *(int *)(&DAT_01b214fc + ((*puVar6 & 1) + param_3 * 2) * 4) + param_2) =
           (short)((int)puVar5 - *param_1 >> 2);
      puVar6 = puVar6 + -2;
      param_5 = param_5 + -2;
      puVar5 = puVar5 + -1;
    } while (uVar2 < *puVar6);
  }
  return ((int)puVar5 - *param_1 >> 2) + 1;
}

// 01142A70  hkp3AxisSweep::vf3C  size=144  [run]
void __thiscall hkp3AxisSweep::vf3C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xd0);
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar1,0x20);
  }
  iVar1 = 0;
  param_2[1] = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xd0);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xa0) + iVar1;
      if ((*(byte *)(iVar2 + 0xc) & 1) == 0) {
        FUN_01142230(iVar2,*param_2 + iVar3);
        iVar3 = iVar3 + 0x20;
      }
      local_8 = local_8 + 1;
      iVar1 = iVar1 + 0x10;
    } while (local_8 < *(int *)(param_1 + 0xa4));
  }
  return;
}

// 01142B00  hkp3AxisSweep::vf2C  size=2843  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkp3AxisSweep::vf2C(int param_1,undefined4 *param_2,float *param_3,int param_4,undefined4 param_5,
                   undefined4 param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ushort *puVar20;
  short *psVar21;
  ushort *puVar22;
  undefined4 *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined2 local_90;
  undefined2 local_8c;
  undefined2 local_88;
  ushort local_20;
  undefined2 local_14;
  
  puVar1 = param_2 + param_4;
  do {
    if (puVar1 <= param_2) {
      return;
    }
    auVar24._0_4_ = (*param_3 + *(float *)(param_1 + 0x40)) * *(float *)(param_1 + 0x60);
    auVar24._4_4_ = (param_3[1] + *(float *)(param_1 + 0x44)) * *(float *)(param_1 + 100);
    auVar24._8_4_ = (param_3[2] + *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x68);
    auVar24._12_4_ = (param_3[3] + *(float *)(param_1 + 0x4c)) * *(float *)(param_1 + 0x6c);
    auVar24 = minps(auVar24,_DAT_01b214d0);
    auVar24 = maxps(auVar24,ZEXT816(0));
    auVar25._0_4_ = (param_3[4] + *(float *)(param_1 + 0x50)) * *(float *)(param_1 + 0x60);
    auVar25._4_4_ = (param_3[5] + *(float *)(param_1 + 0x54)) * *(float *)(param_1 + 100);
    auVar25._8_4_ = (param_3[6] + *(float *)(param_1 + 0x58)) * *(float *)(param_1 + 0x68);
    auVar25._12_4_ = (param_3[7] + *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x6c);
    auVar25 = minps(auVar25,_DAT_01b214d0);
    uVar14 = (uint)(auVar24._4_4_ + fRam01b214e4) >> 7 & 0xfffe;
    uVar15 = (uint)(auVar24._8_4_ + fRam01b214e8) >> 7 & 0xfffe;
    auVar25 = maxps(auVar25,ZEXT816(0));
    uVar6 = *(uint *)*param_2;
    uVar16 = (uint)(auVar25._0_4_ + _DAT_01b214e0) >> 7 & 0xffff | 1;
    uVar17 = (uint)(auVar25._4_4_ + fRam01b214e4) >> 7 & 0xffff | 1;
    uVar18 = (uint)(auVar25._8_4_ + fRam01b214e8) >> 7 & 0xffff | 1;
    iVar7 = *(int *)(param_1 + 0xa0);
    puVar22 = (ushort *)(uVar6 * 0x10 + iVar7);
    uVar19 = (uint)puVar22[4];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar19 * 4);
    uVar12 = (uint)(auVar24._0_4_ + _DAT_01b214e0) >> 7 & 0xfffe;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar13 = (ushort)uVar19, uVar12 < uVar2) {
      piVar10 = (int *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        *(ushort *)(piVar10 + 2) = uVar13;
      }
      else {
        iVar8 = *(int *)(puVar22 + 2);
        iVar9 = *(int *)puVar22;
        *(ushort *)((int)piVar10 + 10) = uVar13;
        if (((piVar10[1] - iVar9 | iVar8 - *piVar10) & 0x80008000U) == 0) {
          FUN_01142740(uVar6,piVar10,param_5);
        }
      }
      uVar19 = uVar19 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar12 == uVar2) {
      uVar13 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar7 + 8 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar13;
      uVar19 = uVar19 - 1;
      uVar13 = (ushort)uVar19;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_14 = (undefined2)uVar6;
    local_90 = (undefined2)uVar12;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_90;
    puVar22[4] = uVar13;
    uVar19 = (uint)puVar22[5];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar19 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar19 * 4);
    while (uVar2 < uVar16) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      piVar10 = (int *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      if ((uVar2 & 1) == 0) {
        iVar8 = *(int *)(puVar22 + 2);
        iVar9 = *(int *)puVar22;
        *(short *)(piVar10 + 2) = (short)piVar10[2] + -1;
        if (((piVar10[1] - iVar9 | iVar8 - *piVar10) & 0x80008000U) == 0) {
          FUN_01142740(uVar6,piVar10,param_5);
        }
      }
      else {
        *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar16 == uVar2 && (uVar11 = (uint)*(ushort *)((int)puVar23 + 6), uVar11 < uVar6)) &&
           (uVar11 != 0)); puVar23 = puVar23 + 1) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      psVar21 = (short *)(iVar7 + 10 + uVar11 * 0x10);
      *psVar21 = *psVar21 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar16 < uVar2) {
      uVar19 = uVar19 - 1;
      piVar10 = (int *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        iVar8 = *(int *)(puVar22 + 2);
        iVar9 = *(int *)puVar22;
        *(short *)(piVar10 + 2) = (short)piVar10[2] + 1;
        if (((iVar8 - *piVar10 | piVar10[1] - iVar9) & 0x80008000U) == 0) {
          FUN_011427d0(uVar6,piVar10,param_6);
        }
      }
      else {
        *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar16 == uVar2) {
      local_20 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      uVar19 = uVar19 - 1;
      local_20 = (ushort)uVar19;
      *puVar23 = puVar23[-1];
      psVar21 = (short *)(iVar7 + 10 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar21 = *psVar21 + 1;
      puVar20 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar20;
    }
    puVar22[5] = local_20;
    *(short *)puVar23 = (short)uVar16;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar19 = (uint)puVar22[4];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar19 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar19 * 4);
    while (uVar2 < uVar12) {
      piVar10 = (int *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      *puVar23 = puVar23[1];
      uVar19 = uVar19 + 1;
      if ((uVar2 & 1) == 0) {
        *(short *)(piVar10 + 2) = (short)piVar10[2] + -1;
      }
      else {
        iVar8 = *(int *)(puVar22 + 2);
        iVar9 = *(int *)puVar22;
        *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
        if (((piVar10[1] - iVar9 | iVar8 - *piVar10) & 0x80008000U) == 0) {
          FUN_011427d0(uVar6,piVar10,param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar13 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar12 == uVar2) {
      uVar13 = (ushort)uVar19;
      if (uVar6 <= *(ushort *)((int)puVar23 + 6)) break;
      *puVar23 = puVar23[1];
      psVar21 = (short *)(iVar7 + 8 + (uint)*(ushort *)((int)puVar23 + 6) * 0x10);
      *psVar21 = *psVar21 + -1;
      uVar19 = uVar19 + 1;
      uVar13 = (ushort)uVar19;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    puVar22[4] = uVar13;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_90;
    uVar19 = (uint)*puVar22;
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xb8) + -4 + uVar19 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar19 * 4);
    while (uVar13 = (ushort)uVar19, uVar14 < uVar2) {
      puVar20 = (ushort *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        *puVar20 = uVar13;
      }
      else {
        uVar2 = puVar22[1];
        uVar3 = puVar22[3];
        uVar4 = puVar22[5];
        uVar5 = puVar22[4];
        puVar20[2] = uVar13;
        if (((uVar3 - puVar20[1] | puVar20[3] - uVar2 | uVar4 - puVar20[4] | puVar20[5] - uVar5) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      uVar19 = uVar19 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar14 == uVar2) {
      uVar13 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar7 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar13;
      uVar19 = uVar19 - 1;
      uVar13 = (ushort)uVar19;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_8c = (undefined2)uVar14;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_8c;
    *puVar22 = uVar13;
    uVar19 = (uint)puVar22[2];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar19 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar17) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar22[1];
        uVar13 = puVar22[3];
        uVar3 = puVar22[5];
        uVar4 = puVar22[4];
        *psVar21 = *psVar21 + -1;
        if (((uVar13 - psVar21[1] | psVar21[3] - uVar2 | uVar3 - psVar21[4] | psVar21[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      else {
        psVar21[2] = psVar21[2] + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar17 == uVar2 && (uVar12 = (uint)*(ushort *)((int)puVar23 + 6), uVar12 < uVar6)) &&
           (uVar12 != 0)); puVar23 = puVar23 + 1) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      psVar21 = (short *)(iVar7 + 4 + uVar12 * 0x10);
      *psVar21 = *psVar21 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar17 < uVar2) {
      uVar19 = uVar19 - 1;
      *puVar23 = puVar23[-1];
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar22[1];
        uVar13 = puVar22[3];
        uVar3 = puVar22[5];
        uVar4 = puVar22[4];
        *psVar21 = *psVar21 + 1;
        if (((uVar13 - psVar21[1] | psVar21[3] - uVar2 | uVar3 - psVar21[4] | psVar21[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      else {
        psVar21[2] = psVar21[2] + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar17 == uVar2) {
      local_20 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      uVar19 = uVar19 - 1;
      local_20 = (ushort)uVar19;
      *puVar23 = puVar23[-1];
      psVar21 = (short *)(iVar7 + 4 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar21 = *psVar21 + 1;
      puVar20 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar20;
    }
    puVar22[2] = local_20;
    *(short *)puVar23 = (short)uVar17;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar19 = (uint)*puVar22;
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar19 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar14) {
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      *puVar23 = puVar23[1];
      uVar19 = uVar19 + 1;
      if ((uVar2 & 1) == 0) {
        *psVar21 = *psVar21 + -1;
      }
      else {
        uVar2 = puVar22[3];
        uVar13 = puVar22[1];
        uVar3 = puVar22[5];
        uVar4 = puVar22[4];
        psVar21[2] = psVar21[2] + -1;
        if (((psVar21[3] - uVar13 | uVar2 - psVar21[1] | uVar3 - psVar21[4] | psVar21[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar13 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar14 == uVar2) {
      uVar13 = (ushort)uVar19;
      if (uVar6 <= *(ushort *)((int)puVar23 + 6)) break;
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      *puVar23 = puVar23[1];
      *psVar21 = *psVar21 + -1;
      uVar19 = uVar19 + 1;
      uVar13 = (ushort)uVar19;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    *puVar22 = uVar13;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_8c;
    uVar19 = (uint)puVar22[1];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + -4 + uVar19 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar19 * 4);
    while (uVar13 = (ushort)uVar19, uVar15 < uVar2) {
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        psVar21[1] = uVar13;
      }
      else {
        uVar2 = puVar22[4];
        uVar3 = puVar22[5];
        uVar4 = *puVar22;
        uVar5 = puVar22[2];
        psVar21[3] = uVar13;
        if (((uVar3 - psVar21[4] | psVar21[5] - uVar2 | psVar21[2] - uVar4 | uVar5 - *psVar21) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      uVar19 = uVar19 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar15 == uVar2) {
      uVar13 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar7 + 2 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar13;
      uVar19 = uVar19 - 1;
      uVar13 = (ushort)uVar19;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_88 = (undefined2)uVar15;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_88;
    puVar22[1] = uVar13;
    uVar19 = (uint)puVar22[3];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar19 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar18) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar22[4];
        uVar13 = puVar22[5];
        uVar3 = *puVar22;
        uVar4 = puVar22[2];
        psVar21[1] = psVar21[1] + -1;
        if (((uVar13 - psVar21[4] | psVar21[5] - uVar2 | psVar21[2] - uVar3 | uVar4 - *psVar21) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      else {
        psVar21[3] = psVar21[3] + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar18 == uVar2 && (uVar12 = (uint)*(ushort *)((int)puVar23 + 6), uVar12 < uVar6)) &&
           (uVar12 != 0)); puVar23 = puVar23 + 1) {
      uVar19 = uVar19 + 1;
      *puVar23 = puVar23[1];
      psVar21 = (short *)(iVar7 + 6 + uVar12 * 0x10);
      *psVar21 = *psVar21 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar18 < uVar2) {
      uVar19 = uVar19 - 1;
      *puVar23 = puVar23[-1];
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar7);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar22[4];
        uVar13 = puVar22[5];
        uVar3 = *puVar22;
        uVar4 = puVar22[2];
        psVar21[1] = psVar21[1] + 1;
        if (((uVar13 - psVar21[4] | psVar21[5] - uVar2 | psVar21[2] - uVar3 | uVar4 - *psVar21) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      else {
        psVar21[3] = psVar21[3] + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar18 == uVar2) {
      local_20 = (ushort)uVar19;
      if (*(ushort *)((int)puVar23 + -2) <= uVar6) break;
      uVar19 = uVar19 - 1;
      local_20 = (ushort)uVar19;
      *puVar23 = puVar23[-1];
      psVar21 = (short *)(iVar7 + 6 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar21 = *psVar21 + 1;
      puVar20 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar20;
    }
    puVar22[3] = local_20;
    *(short *)puVar23 = (short)uVar18;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar19 = (uint)puVar22[1];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar19 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar15) {
      uVar19 = uVar19 + 1;
      psVar21 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar7);
      *puVar23 = puVar23[1];
      if ((uVar2 & 1) == 0) {
        psVar21[1] = psVar21[1] + -1;
      }
      else {
        uVar2 = puVar22[4];
        uVar13 = puVar22[5];
        uVar3 = *puVar22;
        uVar4 = puVar22[2];
        psVar21[3] = psVar21[3] + -1;
        if (((uVar13 - psVar21[4] | psVar21[5] - uVar2 | psVar21[2] - uVar3 | uVar4 - *psVar21) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    local_20 = (ushort)uVar19;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar15 == uVar2) {
      local_20 = (ushort)uVar19;
      if (uVar6 <= *(ushort *)((int)puVar23 + 6)) break;
      uVar19 = uVar19 + 1;
      local_20 = (ushort)uVar19;
      *puVar23 = puVar23[1];
      psVar21 = (short *)(iVar7 + 2 + (uint)*(ushort *)((int)puVar23 + 6) * 0x10);
      *psVar21 = *psVar21 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    param_3 = param_3 + 8;
    puVar22[1] = local_20;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    param_2 = param_2 + 1;
    *(undefined2 *)puVar23 = local_88;
  } while( true );
}

// 01143620  hkp3AxisSweep::vf30  size=2752  [run]
void __thiscall
hkp3AxisSweep::vf30(int param_1,undefined4 *param_2,uint *param_3,int param_4,undefined4 param_5,
                   undefined4 param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  short *psVar19;
  uint uVar20;
  ushort *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined2 local_50;
  undefined2 local_4c;
  undefined2 local_48;
  ushort local_20;
  undefined2 local_14;
  
  puVar1 = param_2 + param_4;
  do {
    if (puVar1 <= param_2) {
      return;
    }
    uVar10 = param_3[4] >> 0xf;
    if (uVar10 != 0xffff) {
      uVar10 = uVar10 + 1;
    }
    uVar10 = uVar10 | 1;
    uVar11 = param_3[5] >> 0xf;
    if (uVar11 != 0xffff) {
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 | 1;
    uVar12 = param_3[6] >> 0xf;
    if (uVar12 != 0xffff) {
      uVar12 = uVar12 + 1;
    }
    uVar12 = uVar12 | 1;
    uVar20 = param_3[1] >> 0xf & 0xfffe;
    iVar6 = *(int *)(param_1 + 0xa0);
    uVar7 = *(uint *)*param_2;
    uVar16 = (uint)*(ushort *)(uVar7 * 0x10 + 8 + iVar6);
    puVar21 = (ushort *)(uVar7 * 0x10 + iVar6);
    uVar22 = param_3[2] >> 0xf & 0xfffe;
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar16 * 4);
    uVar17 = *param_3 >> 0xf & 0xfffe;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar15 = (ushort)uVar16, uVar17 < uVar2) {
      piVar13 = (int *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        *(ushort *)(piVar13 + 2) = uVar15;
      }
      else {
        iVar8 = *(int *)(puVar21 + 2);
        iVar9 = *(int *)puVar21;
        *(ushort *)((int)piVar13 + 10) = uVar15;
        if (((iVar8 - *piVar13 | piVar13[1] - iVar9) & 0x80008000U) == 0) {
          FUN_01142740(uVar7,piVar13,param_5);
        }
      }
      uVar16 = uVar16 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar17 == uVar2) {
      uVar15 = (ushort)uVar16;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar6 + 8 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar15;
      uVar16 = uVar16 - 1;
      uVar15 = (ushort)uVar16;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_14 = (undefined2)uVar7;
    local_50 = (undefined2)uVar17;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_50;
    puVar21[4] = uVar15;
    uVar16 = (uint)puVar21[5];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar16 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar16 * 4);
    while (uVar2 < uVar10) {
      uVar16 = uVar16 + 1;
      *puVar23 = puVar23[1];
      piVar13 = (int *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      if ((uVar2 & 1) == 0) {
        iVar8 = *(int *)(puVar21 + 2);
        iVar9 = *(int *)puVar21;
        *(short *)(piVar13 + 2) = (short)piVar13[2] + -1;
        if (((piVar13[1] - iVar9 | iVar8 - *piVar13) & 0x80008000U) == 0) {
          FUN_01142740(uVar7,piVar13,param_5);
        }
      }
      else {
        *(short *)((int)piVar13 + 10) = *(short *)((int)piVar13 + 10) + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar10 == uVar2 && (uVar14 = (uint)*(ushort *)((int)puVar23 + 6), uVar14 < uVar7)) &&
           (uVar14 != 0)); puVar23 = puVar23 + 1) {
      uVar16 = uVar16 + 1;
      *puVar23 = puVar23[1];
      psVar19 = (short *)(iVar6 + 10 + uVar14 * 0x10);
      *psVar19 = *psVar19 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar10 < uVar2) {
      uVar16 = uVar16 - 1;
      piVar13 = (int *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        iVar8 = *(int *)(puVar21 + 2);
        iVar9 = *(int *)puVar21;
        *(short *)(piVar13 + 2) = (short)piVar13[2] + 1;
        if (((iVar8 - *piVar13 | piVar13[1] - iVar9) & 0x80008000U) == 0) {
          FUN_011427d0(uVar7,piVar13,param_6);
        }
      }
      else {
        *(short *)((int)piVar13 + 10) = *(short *)((int)piVar13 + 10) + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar16;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar10 == uVar2) {
      local_20 = (ushort)uVar16;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      uVar16 = uVar16 - 1;
      local_20 = (ushort)uVar16;
      *puVar23 = puVar23[-1];
      psVar19 = (short *)(iVar6 + 10 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar19 = *psVar19 + 1;
      puVar18 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar18;
    }
    puVar21[5] = local_20;
    *(short *)puVar23 = (short)uVar10;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar10 = (uint)puVar21[4];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar10 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar10 * 4);
    while (uVar2 < uVar17) {
      piVar13 = (int *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      *puVar23 = puVar23[1];
      uVar10 = uVar10 + 1;
      if ((uVar2 & 1) == 0) {
        *(short *)(piVar13 + 2) = (short)piVar13[2] + -1;
      }
      else {
        iVar8 = *(int *)(puVar21 + 2);
        iVar9 = *(int *)puVar21;
        *(short *)((int)piVar13 + 10) = *(short *)((int)piVar13 + 10) + -1;
        if (((iVar8 - *piVar13 | piVar13[1] - iVar9) & 0x80008000U) == 0) {
          FUN_011427d0(uVar7,piVar13,param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar15 = (ushort)uVar10;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar17 == uVar2) {
      uVar15 = (ushort)uVar10;
      if (uVar7 <= *(ushort *)((int)puVar23 + 6)) break;
      *puVar23 = puVar23[1];
      psVar19 = (short *)(iVar6 + 8 + (uint)*(ushort *)((int)puVar23 + 6) * 0x10);
      *psVar19 = *psVar19 + -1;
      uVar10 = uVar10 + 1;
      uVar15 = (ushort)uVar10;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    puVar21[4] = uVar15;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_50;
    uVar10 = (uint)*puVar21;
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xb8) + -4 + uVar10 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar10 * 4);
    while (uVar15 = (ushort)uVar10, uVar20 < uVar2) {
      puVar18 = (ushort *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        *puVar18 = uVar15;
      }
      else {
        uVar2 = puVar21[1];
        uVar3 = puVar21[3];
        uVar4 = puVar21[5];
        uVar5 = puVar21[4];
        puVar18[2] = uVar15;
        if (((uVar3 - puVar18[1] | puVar18[3] - uVar2 | uVar4 - puVar18[4] | puVar18[5] - uVar5) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      uVar10 = uVar10 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar20 == uVar2) {
      uVar15 = (ushort)uVar10;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar6 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar15;
      uVar10 = uVar10 - 1;
      uVar15 = (ushort)uVar10;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_4c = (undefined2)uVar20;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_4c;
    *puVar21 = uVar15;
    uVar10 = (uint)puVar21[2];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar10 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar11) {
      uVar10 = uVar10 + 1;
      *puVar23 = puVar23[1];
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar21[1];
        uVar15 = puVar21[3];
        uVar3 = puVar21[5];
        uVar4 = puVar21[4];
        *psVar19 = *psVar19 + -1;
        if (((uVar15 - psVar19[1] | psVar19[3] - uVar2 | uVar3 - psVar19[4] | psVar19[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      else {
        psVar19[2] = psVar19[2] + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar11 == uVar2 && (uVar16 = (uint)*(ushort *)((int)puVar23 + 6), uVar16 < uVar7)) &&
           (uVar16 != 0)); puVar23 = puVar23 + 1) {
      uVar10 = uVar10 + 1;
      *puVar23 = puVar23[1];
      psVar19 = (short *)(iVar6 + 4 + uVar16 * 0x10);
      *psVar19 = *psVar19 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar11 < uVar2) {
      uVar10 = uVar10 - 1;
      *puVar23 = puVar23[-1];
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar21[1];
        uVar15 = puVar21[3];
        uVar3 = puVar21[5];
        uVar4 = puVar21[4];
        *psVar19 = *psVar19 + 1;
        if (((uVar15 - psVar19[1] | psVar19[3] - uVar2 | uVar3 - psVar19[4] | psVar19[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      else {
        psVar19[2] = psVar19[2] + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar10;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar11 == uVar2) {
      local_20 = (ushort)uVar10;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      uVar10 = uVar10 - 1;
      local_20 = (ushort)uVar10;
      *puVar23 = puVar23[-1];
      psVar19 = (short *)(iVar6 + 4 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar19 = *psVar19 + 1;
      puVar18 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar18;
    }
    puVar21[2] = local_20;
    *(short *)puVar23 = (short)uVar11;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar10 = (uint)*puVar21;
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar10 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar20) {
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      *puVar23 = puVar23[1];
      uVar10 = uVar10 + 1;
      if ((uVar2 & 1) == 0) {
        *psVar19 = *psVar19 + -1;
      }
      else {
        uVar2 = puVar21[3];
        uVar15 = puVar21[1];
        uVar3 = puVar21[5];
        uVar4 = puVar21[4];
        psVar19[2] = psVar19[2] + -1;
        if (((psVar19[3] - uVar15 | uVar2 - psVar19[1] | uVar3 - psVar19[4] | psVar19[5] - uVar4) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar15 = (ushort)uVar10;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar20 == uVar2) {
      uVar15 = (ushort)uVar10;
      if (uVar7 <= *(ushort *)((int)puVar23 + 6)) break;
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      *puVar23 = puVar23[1];
      *psVar19 = *psVar19 + -1;
      uVar10 = uVar10 + 1;
      uVar15 = (ushort)uVar10;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    *puVar21 = uVar15;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_4c;
    uVar10 = (uint)puVar21[1];
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + -4 + uVar10 * 4);
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
    while (uVar15 = (ushort)uVar10, uVar22 < uVar2) {
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      *puVar23 = puVar23[-1];
      if ((uVar2 & 1) == 0) {
        psVar19[1] = uVar15;
      }
      else {
        uVar2 = puVar21[4];
        uVar3 = puVar21[5];
        uVar4 = *puVar21;
        uVar5 = puVar21[2];
        psVar19[3] = uVar15;
        if (((uVar3 - psVar19[4] | psVar19[5] - uVar2 | psVar19[2] - uVar4 | uVar5 - *psVar19) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      uVar10 = uVar10 - 1;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar22 == uVar2) {
      uVar15 = (ushort)uVar10;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      *puVar23 = puVar23[-1];
      *(ushort *)(iVar6 + 2 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10) = uVar15;
      uVar10 = uVar10 - 1;
      uVar15 = (ushort)uVar10;
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_48 = (undefined2)uVar22;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    *(undefined2 *)puVar23 = local_48;
    puVar21[1] = uVar15;
    uVar10 = (uint)puVar21[3];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar12) {
      uVar10 = uVar10 + 1;
      *puVar23 = puVar23[1];
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar21[4];
        uVar15 = puVar21[5];
        uVar3 = *puVar21;
        uVar4 = puVar21[2];
        psVar19[1] = psVar19[1] + -1;
        if (((uVar15 - psVar19[4] | psVar19[5] - uVar2 | psVar19[2] - uVar3 | uVar4 - *psVar19) &
            0x8000) == 0) {
          FUN_011426a0(param_5);
        }
      }
      else {
        psVar19[3] = psVar19[3] + -1;
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    uVar2 = *(ushort *)(puVar23 + 1);
    for (; ((uVar12 == uVar2 && (uVar11 = (uint)*(ushort *)((int)puVar23 + 6), uVar11 < uVar7)) &&
           (uVar11 != 0)); puVar23 = puVar23 + 1) {
      uVar10 = uVar10 + 1;
      *puVar23 = puVar23[1];
      psVar19 = (short *)(iVar6 + 6 + uVar11 * 0x10);
      *psVar19 = *psVar19 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
    }
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar12 < uVar2) {
      uVar10 = uVar10 - 1;
      *puVar23 = puVar23[-1];
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + -2) * 0x10 + iVar6);
      if ((uVar2 & 1) == 0) {
        uVar2 = puVar21[4];
        uVar15 = puVar21[5];
        uVar3 = *puVar21;
        uVar4 = puVar21[2];
        psVar19[1] = psVar19[1] + 1;
        if (((uVar15 - psVar19[4] | psVar19[5] - uVar2 | psVar19[2] - uVar3 | uVar4 - *psVar19) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      else {
        psVar19[3] = psVar19[3] + 1;
      }
      uVar2 = *(ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
    }
    local_20 = (ushort)uVar10;
    uVar2 = *(ushort *)(puVar23 + -1);
    while (uVar12 == uVar2) {
      local_20 = (ushort)uVar10;
      if (*(ushort *)((int)puVar23 + -2) <= uVar7) break;
      uVar10 = uVar10 - 1;
      local_20 = (ushort)uVar10;
      *puVar23 = puVar23[-1];
      psVar19 = (short *)(iVar6 + 6 + (uint)*(ushort *)((int)puVar23 + -2) * 0x10);
      *psVar19 = *psVar19 + 1;
      puVar18 = (ushort *)(puVar23 + -2);
      puVar23 = puVar23 + -1;
      uVar2 = *puVar18;
    }
    puVar21[3] = local_20;
    *(short *)puVar23 = (short)uVar12;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    uVar10 = (uint)puVar21[1];
    puVar23 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar2 < uVar22) {
      uVar10 = uVar10 + 1;
      psVar19 = (short *)((uint)*(ushort *)((int)puVar23 + 6) * 0x10 + iVar6);
      *puVar23 = puVar23[1];
      if ((uVar2 & 1) == 0) {
        psVar19[1] = psVar19[1] + -1;
      }
      else {
        uVar2 = puVar21[4];
        uVar15 = puVar21[5];
        uVar3 = *puVar21;
        uVar4 = puVar21[2];
        psVar19[3] = psVar19[3] + -1;
        if (((uVar15 - psVar19[4] | psVar19[5] - uVar2 | psVar19[2] - uVar3 | uVar4 - *psVar19) &
            0x8000) == 0) {
          FUN_011426f0(param_6);
        }
      }
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    local_20 = (ushort)uVar10;
    uVar2 = *(ushort *)(puVar23 + 1);
    while (uVar22 == uVar2) {
      local_20 = (ushort)uVar10;
      if (uVar7 <= *(ushort *)((int)puVar23 + 6)) break;
      uVar10 = uVar10 + 1;
      local_20 = (ushort)uVar10;
      *puVar23 = puVar23[1];
      psVar19 = (short *)(iVar6 + 2 + (uint)*(ushort *)((int)puVar23 + 6) * 0x10);
      *psVar19 = *psVar19 + -1;
      uVar2 = *(ushort *)(puVar23 + 2);
      puVar23 = puVar23 + 1;
    }
    param_3 = param_3 + 8;
    puVar21[1] = local_20;
    *(undefined2 *)((int)puVar23 + 2) = local_14;
    param_2 = param_2 + 1;
    *(undefined2 *)puVar23 = local_48;
  } while( true );
}

// 011440F0  FUN_011440f0  size=622  [run]
void __thiscall
FUN_011440f0(int param_1,ushort *param_2,int param_3,uint *param_4,int param_5,int param_6,
            int *param_7)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  short *psVar10;
  ushort *puVar11;
  uint *puVar12;
  ushort *puVar13;
  
  iVar5 = *(int *)(param_1 + 0xd8);
  puVar9 = (uint *)((int)param_4 + 0xc);
  puVar13 = (ushort *)((int)param_2 + 8);
  param_2 = puVar13;
  param_4 = puVar9;
  do {
    uVar3 = (ushort)puVar9[-1];
    if (uVar3 < *puVar13) {
      uVar3 = *(ushort *)((int)puVar9 + -2);
      if (*puVar13 < uVar3) {
        puVar11 = puVar13 + 2;
        do {
          if (((*(int *)(puVar11 + -4) - puVar9[-3] | puVar9[-2] - *(int *)(puVar11 + -6)) &
              0x80008000) == 0) {
            if ((*puVar9 & 1) == 0) {
              if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_7,8);
                puVar9 = param_4;
              }
              puVar2 = (undefined4 *)(*param_7 + param_7[1] * 8);
              param_7[1] = param_7[1] + 1;
              *puVar2 = *(undefined4 *)puVar11;
              puVar2[1] = *puVar9;
            }
            else if (param_6 != 1) {
              uVar6 = **(undefined4 **)puVar11;
              iVar7 = (*puVar9 & 0xfffffffe) + iVar5;
              if (param_6 == 0) {
                if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar7 + 4),2);
                }
                *(short *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2) = (short)uVar6;
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              }
              else {
                iVar8 = 0;
                if (0 < *(int *)(iVar7 + 8)) {
                  psVar10 = *(short **)(iVar7 + 4);
                  do {
                    if (*psVar10 == (short)uVar6) goto LAB_011441c0;
                    iVar8 = iVar8 + 1;
                    psVar10 = psVar10 + 1;
                  } while (iVar8 < *(int *)(iVar7 + 8));
                }
                iVar8 = -1;
LAB_011441c0:
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
                if (*(int *)(iVar7 + 8) != iVar8) {
                  *(undefined2 *)(*(int *)(iVar7 + 4) + iVar8 * 2) =
                       *(undefined2 *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2);
                }
              }
            }
          }
          puVar1 = puVar11 + 6;
          puVar11 = puVar11 + 8;
          puVar9 = param_4;
          puVar13 = param_2;
        } while (*puVar1 < uVar3);
      }
      puVar9 = puVar9 + 4;
      iVar7 = param_5 + -1;
      param_4 = puVar9;
      param_5 = iVar7;
    }
    else {
      uVar4 = puVar13[1];
      puVar12 = puVar9;
      while (uVar3 < uVar4) {
        if (((puVar12[-2] - *(int *)(puVar13 + -4) | *(int *)(puVar13 + -2) - puVar12[-3]) &
            0x80008000) == 0) {
          if ((*puVar12 & 1) == 0) {
            if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_7,8);
            }
            puVar2 = (undefined4 *)(*param_7 + param_7[1] * 8);
            param_7[1] = param_7[1] + 1;
            *puVar2 = *(undefined4 *)(puVar13 + 2);
            puVar2[1] = *puVar12;
          }
          else if (param_6 != 1) {
            uVar6 = **(undefined4 **)(puVar13 + 2);
            iVar7 = (*puVar12 & 0xfffffffe) + iVar5;
            if (param_6 == 0) {
              if (*(uint *)(iVar7 + 8) == (*(uint *)(iVar7 + 0xc) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar7 + 4),2);
              }
              *(short *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2) = (short)uVar6;
              *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
            }
            else {
              iVar8 = 0;
              if (0 < *(int *)(iVar7 + 8)) {
                psVar10 = *(short **)(iVar7 + 4);
                do {
                  if (*psVar10 == (short)uVar6) goto LAB_011442e0;
                  iVar8 = iVar8 + 1;
                  psVar10 = psVar10 + 1;
                } while (iVar8 < *(int *)(iVar7 + 8));
              }
              iVar8 = -1;
LAB_011442e0:
              *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
              if (*(int *)(iVar7 + 8) != iVar8) {
                *(undefined2 *)(*(int *)(iVar7 + 4) + iVar8 * 2) =
                     *(undefined2 *)(*(int *)(iVar7 + 4) + *(int *)(iVar7 + 8) * 2);
              }
            }
          }
        }
        puVar9 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        uVar3 = (ushort)*puVar9;
        puVar9 = param_4;
        puVar13 = param_2;
      }
      puVar13 = puVar13 + 8;
      iVar7 = param_3 + -1;
      param_2 = puVar13;
      param_3 = iVar7;
    }
    if (iVar7 < 1) {
      return;
    }
  } while( true );
}

// 01144370  FUN_01144370  size=167  [run]
void FUN_01144370(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int *piVar6;
  
  while (piVar5 = param_2, param_3 = param_3 + -1, 0 < param_3) {
    uVar3 = *(ushort *)((int)piVar5 + 10);
    uVar4 = *(ushort *)(piVar5 + 6);
    piVar6 = piVar5 + 4;
    while (param_2 = piVar5 + 4, uVar4 < uVar3) {
      if ((((piVar6[1] - *piVar5 | piVar5[1] - *piVar6) & 0x80008000U) == 0) &&
         ((*(byte *)(piVar6 + 3) & 1) == 0)) {
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
        }
        piVar2 = (int *)(*param_4 + param_4[1] * 8);
        param_4[1] = param_4[1] + 1;
        *piVar2 = piVar5[3];
        piVar2[1] = piVar6[3];
      }
      puVar1 = (ushort *)(piVar6 + 6);
      piVar6 = piVar6 + 4;
      uVar4 = *puVar1;
    }
  }
  return;
}

// 01144420  FUN_01144420  size=604  [run]
void __thiscall FUN_01144420(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *local_c;
  int local_8;
  
  piVar6 = param_3 + 9;
  uVar4 = param_2[1] * 2 + 2;
  if (param_3 != (int *)0x0) {
    *param_3 = (int)piVar6;
    param_3[1] = 0;
    param_3[2] = uVar4 | 0x80000000;
  }
  piVar1 = param_3 + 3;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)(piVar6 + uVar4);
    param_3[4] = 0;
    param_3[5] = uVar4 | 0x80000000;
  }
  piVar2 = param_3 + 6;
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)(piVar6 + uVar4 * 2);
    param_3[7] = 0;
    param_3[8] = uVar4 | 0x80000000;
  }
  puVar3 = (undefined4 *)(*param_3 + param_3[1] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  param_3[1] = param_3[1] + 1;
  puVar3 = (undefined4 *)(*piVar1 + param_3[4] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  param_3[4] = param_3[4] + 1;
  puVar3 = (undefined4 *)(*piVar2 + param_3[7] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  param_3[7] = param_3[7] + 1;
  piVar6 = (int *)*param_2;
  iVar5 = param_2[1];
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    puVar3 = (undefined4 *)(*param_3 + param_3[1] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0xac) + (uint)*(ushort *)(*piVar6 + 8) * 4);
    }
    param_3[1] = param_3[1] + 1;
    puVar3 = (undefined4 *)(*param_3 + param_3[1] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0xac) + (uint)*(ushort *)(*piVar6 + 10) * 4);
    }
    param_3[1] = param_3[1] + 1;
    puVar3 = (undefined4 *)(*piVar1 + param_3[4] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0xb8) + (uint)*(ushort *)*piVar6 * 4);
    }
    param_3[4] = param_3[4] + 1;
    puVar3 = (undefined4 *)(*piVar1 + param_3[4] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0xb8) + (uint)*(ushort *)(*piVar6 + 4) * 4);
    }
    param_3[4] = param_3[4] + 1;
    puVar3 = (undefined4 *)(*piVar2 + param_3[7] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc4) + (uint)*(ushort *)(*piVar6 + 2) * 4);
    }
    param_3[7] = param_3[7] + 1;
    local_c = (undefined4 *)(*(int *)(param_1 + 0xc4) + (uint)*(ushort *)(*piVar6 + 6) * 4);
    puVar3 = (undefined4 *)(*piVar2 + param_3[7] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *local_c;
    }
    param_3[7] = param_3[7] + 1;
    piVar6 = piVar6 + 1;
  }
  local_8 = 3;
  piVar6 = param_3;
  do {
    local_c = (undefined4 *)((uint)local_c & 0xffffff00);
    if (1 < piVar6[1] + -1) {
      FUN_0114c160(*piVar6 + 4,0,piVar6[1] + -2,local_c);
    }
    piVar6 = piVar6 + 3;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)(*param_3 + param_3[1] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0xfffc;
  }
  param_3[1] = param_3[1] + 1;
  puVar3 = (undefined4 *)(*piVar1 + param_3[4] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0xfffc;
  }
  param_3[4] = param_3[4] + 1;
  puVar3 = (undefined4 *)(*piVar2 + param_3[7] * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0xfffc;
  }
  param_3[7] = param_3[7] + 1;
  return;
}

// 01144680  hkp3AxisSweep::hkp3AxisSweep  size=1269  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
hkp3AxisSweep::hkp3AxisSweep
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  LPVOID pvVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_20;
  int local_1c;
  undefined4 local_14;
  
  hkpBroadPhase::hkpBroadPhase(0,0xe0,0x101b);
  *param_1 = vftable;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  piVar1 = param_1 + 0x2b;
  param_1[0x2a] = 0x80000000;
  param_1[0x2d] = 0x80000000;
  param_1[0x30] = 0x80000000;
  param_1[0x33] = 0x80000000;
  *piVar1 = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  uVar15 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_1[8] = *param_2;
  param_1[9] = uVar15;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  uVar15 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar15;
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar8;
  if (param_4 == 0) {
    param_4 = 1;
  }
  iVar17 = -1;
  for (; 0 < param_4; param_4 = param_4 >> 1) {
    iVar17 = iVar17 + 1;
  }
  if ((param_1[0x2a] & 0x3fffffff) < 0xff) {
    uVar10 = (param_1[0x2a] & 0x3fffffff) * 2;
    if (uVar10 < 0x100) {
      uVar10 = 0xff;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x28,uVar10,0x10);
  }
  fVar23 = 10.0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  iVar11 = 0x17;
  fVar22 = 11.0;
  do {
    fVar21 = (fVar22 + fVar23) * 0.5;
    fVar19 = fVar21 + 1.0;
    auVar20._0_4_ = (fVar19 + 0.0) * (float)param_1[0x18];
    auVar20._4_4_ = (fVar19 + 0.0) * (float)param_1[0x19];
    auVar20._8_4_ = (fVar19 + 0.0) * (float)param_1[0x1a];
    auVar20._12_4_ = (fVar19 + 0.0) * (float)param_1[0x1b];
    auVar20 = minps(auVar20,_DAT_01b214d0);
    auVar20 = maxps(auVar20,ZEXT816(0));
    fVar19 = fVar21;
    if ((ushort)((ushort)((uint)(auVar20._0_4_ + _DAT_01b214e0) >> 7) | 1) < 0xc) {
      fVar19 = fVar22;
      fVar23 = fVar21;
    }
    iVar11 = iVar11 + -1;
    fVar22 = fVar19;
  } while (iVar11 != 0);
  param_1[0x37] = (fVar19 + fVar23) * 0.5 - 11.0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_1[0x29] == (param_1[0x2a] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0x28,0x10);
  }
  iVar11 = param_1[0x29];
  param_1[0x29] = iVar11 + 1;
  puVar12 = (undefined8 *)(iVar11 * 0x10 + param_1[0x28]);
  *(undefined4 *)puVar12 = 0;
  *(undefined2 *)(puVar12 + 1) = 0;
  *(undefined4 *)((int)puVar12 + 0xc) = 0;
  iVar18 = 1 << ((byte)iVar17 & 0x1f);
  iVar11 = iVar18 * 2 + 0x1fe;
  if ((int)(param_1[0x2d] & 0x3fffffff) < iVar11) {
    iVar6 = (param_1[0x2d] & 0x3fffffff) * 2;
    if (iVar11 < iVar6) {
      iVar11 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar11,4);
  }
  if ((param_1[0x30] & 0x3fffffff) < 0x200) {
    uVar10 = (param_1[0x30] & 0x3fffffff) * 2;
    if (uVar10 < 0x201) {
      uVar10 = 0x200;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x2e,uVar10,4);
  }
  uVar10 = param_1[0x33] & 0x3fffffff;
  if (uVar10 < 0x200) {
    uVar13 = uVar10 * 2;
    if (uVar10 == 0x100 || uVar13 < 0x200) {
      uVar13 = 0x200;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x31,uVar13,4);
  }
  puVar2 = (undefined4 *)(*piVar1 + param_1[0x2c] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  param_1[0x2c] = param_1[0x2c] + 1;
  puVar2 = (undefined4 *)(param_1[0x2e] + param_1[0x2f] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  param_1[0x2f] = param_1[0x2f] + 1;
  puVar2 = (undefined4 *)(param_1[0x31] + param_1[0x32] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  param_1[0x32] = param_1[0x32] + 1;
  param_1[0x35] = iVar17;
  iVar18 = iVar18 + -1;
  param_1[0x34] = iVar18;
  param_1[0x36] = 0;
  if (iVar18 != 0) {
    pvVar14 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = FUN_01005cb0(*(undefined4 *)((int)pvVar14 + 0x2c),iVar18 * 0x10);
    param_1[0x36] = uVar15;
  }
  local_1c = 0;
  if (0 < (int)param_1[0x34]) {
    local_20 = 0;
    do {
      puVar16 = (undefined2 *)(param_1[0x36] + local_20);
      if (puVar16 == (undefined2 *)0x0) {
        puVar16 = (undefined2 *)0x0;
      }
      else {
        *(undefined4 *)(puVar16 + 2) = 0;
        *(undefined4 *)(puVar16 + 4) = 0;
        *(undefined4 *)(puVar16 + 6) = 0x80000000;
      }
      uVar4 = *(undefined2 *)(param_1 + 0x29);
      sVar9 = (short)local_1c + 1 << (0x10U - (char)param_1[0x35] & 0x1f);
      *puVar16 = uVar4;
      puVar16[1] = sVar9;
      local_14 = CONCAT22(uVar4,sVar9);
      if (param_1[0x29] == (param_1[0x2a] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0x28,0x10);
      }
      iVar17 = param_1[0x29];
      param_1[0x29] = iVar17 + 1;
      puVar16 = (undefined2 *)(iVar17 * 0x10 + param_1[0x28]);
      puVar16[4] = *(undefined2 *)(param_1 + 0x2c);
      puVar2 = (undefined4 *)(*piVar1 + param_1[0x2c] * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_14;
      }
      param_1[0x2c] = param_1[0x2c] + 1;
      local_14 = CONCAT22(uVar4,sVar9) | 1;
      puVar16[5] = *(undefined2 *)(param_1 + 0x2c);
      puVar3 = (uint *)(*piVar1 + param_1[0x2c] * 4);
      if (puVar3 != (uint *)0x0) {
        *puVar3 = local_14;
      }
      param_1[0x2c] = param_1[0x2c] + 1;
      *(uint *)(puVar16 + 6) = local_20 | 1;
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[3] = 1;
      puVar16[2] = 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x10;
    } while (local_1c < (int)param_1[0x34]);
  }
  puVar5 = (undefined8 *)param_1[0x28];
  *puVar12 = *puVar5;
  puVar12[1] = puVar5[1];
  *(undefined2 *)((int)puVar12 + 10) = *(undefined2 *)(param_1 + 0x2c);
  *(undefined2 *)((int)puVar12 + 4) = *(undefined2 *)(param_1 + 0x2f);
  *(undefined2 *)((int)puVar12 + 6) = *(undefined2 *)(param_1 + 0x32);
  puVar2 = (undefined4 *)(*piVar1 + param_1[0x2c] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0xfffd;
  }
  param_1[0x2c] = param_1[0x2c] + 1;
  puVar2 = (undefined4 *)(param_1[0x2e] + param_1[0x2f] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0xfffd;
  }
  param_1[0x2f] = param_1[0x2f] + 1;
  puVar2 = (undefined4 *)(param_1[0x31] + param_1[0x32] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0xfffd;
  }
  param_1[0x32] = param_1[0x32] + 1;
  return param_1;
}

// 01144B80  hkp3AxisSweep::vf4C  size=398  [run]
void __thiscall hkp3AxisSweep::vf4C(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int local_18;
  int local_14;
  uint *local_10;
  uint *local_c;
  int *local_8;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar7 = (iVar2 >> 5) + 8;
  if (iVar7 == 0) {
    local_10 = (uint *)0x0;
  }
  else {
    local_14 = iVar7 * 4;
    local_10 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_14);
    local_18 = (int)(local_14 + (local_14 >> 0x1f & 3U)) >> 2;
    if (local_18 != 0) goto LAB_01144bd9;
  }
  local_18 = -0x80000000;
LAB_01144bd9:
  puVar6 = local_10;
  piVar8 = (int *)(*param_2 * 0x10 + *(int *)(param_1 + 0xa0));
  local_c = local_10;
  FUN_01141ed0(iVar2,*(undefined2 *)(*(int *)(param_1 + 0xac) + (uint)*(ushort *)(piVar8 + 2) * 4),
               piVar8,*param_2,local_10);
  iVar2 = *(int *)(param_1 + 0xa4);
  local_8 = *(int **)(param_1 + 0xa0);
  puVar4 = puVar6;
  puVar5 = puVar6;
  while (puVar5 < puVar6 + (iVar2 >> 5) + 1) {
    uVar9 = *local_c;
    piVar10 = local_8;
    while (uVar9 != 0) {
      if ((char)uVar9 == '\0') {
        piVar10 = piVar10 + 0x20;
        uVar9 = uVar9 >> 8;
      }
      else {
        if ((((uVar9 & 1) != 0) &&
            (((piVar10[1] - *piVar8 | piVar8[1] - *piVar10) & 0x80008000U) == 0)) &&
           (uVar3 = piVar10[3], (uVar3 & 1) == 0)) {
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
          }
          puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = param_2;
            puVar1[1] = uVar3;
          }
          param_3[1] = param_3[1] + 1;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 >> 1;
      }
    }
    local_8 = local_8 + 0x80;
    local_c = local_c + 1;
    puVar4 = local_10;
    puVar5 = local_c;
  }
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(puVar4,local_18 * 4);
  }
  return;
}

// 01144D10  hkp3AxisSweep::vf18  size=790  [run]
void __thiscall hkp3AxisSweep::vf18(int param_1,undefined4 *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_EDX;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int local_34;
  int local_28;
  uint *local_24;
  uint local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  
  uVar3 = param_3[2];
  uVar4 = param_3[1];
  uVar6 = param_3[4] >> 0xf;
  if (uVar6 != 0xffff) {
    uVar6 = uVar6 + 1;
  }
  uVar7 = param_3[5] >> 0xf;
  if (uVar7 != 0xffff) {
    uVar7 = uVar7 + 1;
  }
  uVar8 = param_3[6] >> 0xf;
  if (uVar8 != 0xffff) {
    uVar8 = uVar8 + 1;
  }
  local_18 = *(undefined4 *)(param_1 + 0xa4);
  piVar13 = (int *)(param_1 + 0xa0);
  uVar11 = *param_3 >> 0xf & 0xfffe;
  local_14 = param_1;
  if (*(uint *)(param_1 + 0xa4) == (*(uint *)(param_1 + 0xa8) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar13,0x10);
  }
  piVar12 = (int *)(*(int *)(param_1 + 0xa4) * 0x10 + *piVar13);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  local_24 = (uint *)*piVar13;
  FUN_01142870(local_24,local_18,uVar11,uVar6 | 1,piVar12 + 2,(int)piVar12 + 10);
  FUN_01142870(local_24,local_18,uVar4 >> 0xf & 0xfffe,uVar7 | 1,piVar12,piVar12 + 1);
  FUN_01142870(local_24,local_18,uVar3 >> 0xf & 0xfffe,uVar8 | 1,(int)piVar12 + 2,(int)piVar12 + 6);
  FUN_01141c20(local_24,local_18,piVar12);
  piVar12[3] = (int)param_2;
  *param_2 = extraout_EDX;
  iVar5 = *(int *)(local_14 + 0xa4);
  iVar9 = (iVar5 >> 5) + 8;
  if (iVar9 == 0) {
    local_24 = (uint *)0x0;
  }
  else {
    local_28 = iVar9 * 4;
    local_24 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_28);
    local_34 = (int)(local_28 + (local_28 >> 0x1f & 3U)) >> 2;
    if (local_34 != 0) goto LAB_01144eb1;
  }
  local_34 = -0x80000000;
LAB_01144eb1:
  FUN_01141ed0(iVar5,uVar11,piVar12,local_18,local_24);
  piVar13 = (int *)*piVar13;
  puVar2 = local_24 + (*(int *)(local_14 + 0xa4) >> 5) + 1;
  for (puVar10 = local_24; puVar10 < puVar2; puVar10 = puVar10 + 1) {
    local_20 = *puVar10;
    local_1c = piVar13;
    if (local_20 != 0) {
      do {
        if ((char)local_20 == '\0') {
          local_1c = local_1c + 0x20;
          local_20 = local_20 >> 8;
        }
        else {
          if (((local_20 & 1) != 0) &&
             (((local_1c[1] - *piVar12 | piVar12[1] - *local_1c) & 0x80008000U) == 0)) {
            uVar3 = local_1c[3];
            if ((uVar3 & 1) == 0) {
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
              }
              piVar1 = (int *)(*param_4 + param_4[1] * 8);
              piVar14 = param_4;
              if (piVar1 != (int *)0x0) {
                *piVar1 = (int)param_2;
                piVar1[1] = uVar3;
              }
            }
            else {
              piVar14 = (int *)((uVar3 & 0xfffffffe) + 4 + *(int *)(local_14 + 0xd8));
              if (piVar14[1] == (piVar14[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar14,2);
              }
              *(undefined2 *)(*piVar14 + piVar14[1] * 2) = (undefined2)local_18;
            }
            piVar14[1] = piVar14[1] + 1;
          }
          local_1c = local_1c + 4;
          local_20 = local_20 >> 1;
        }
      } while (local_20 != 0);
      local_20 = 0;
    }
    piVar13 = piVar13 + 0x80;
  }
  if (-1 < local_34) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_34 * 4);
  }
  return;
}

// 01145030  hkp3AxisSweep::vf20  size=1054  [run]
void __thiscall hkp3AxisSweep::vf20(int param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  int iVar9;
  undefined2 uVar10;
  short *psVar11;
  uint *puVar12;
  ushort *puVar13;
  int local_30;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *param_2;
  uVar6 = *(uint *)(param_1 + 0xa4);
  local_10 = (int *)(param_1 + 0xa0);
  puVar13 = (ushort *)(local_8 * 0x10 + *local_10);
  iVar5 = (uVar6 >> 5) + 8;
  local_1c = param_1;
  local_18 = uVar6;
  if (iVar5 == 0) {
    local_14 = (uint *)0x0;
  }
  else {
    local_28 = iVar5 * 4;
    local_14 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_28);
    local_30 = (int)(local_28 + (local_28 >> 0x1f & 3U)) >> 2;
    if (local_30 != 0) goto LAB_011450a5;
  }
  local_30 = -0x80000000;
LAB_011450a5:
  FUN_01141ed0(uVar6,*(undefined2 *)(*(int *)(param_1 + 0xac) + (uint)puVar13[4] * 4),puVar13,
               local_8,local_14);
  puVar2 = local_14 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  piVar4 = (int *)*local_10;
  piVar3 = local_20;
  puVar12 = local_14;
  for (puVar8 = local_14; local_20 = piVar4, local_24 = local_20, puVar8 < puVar2;
      puVar8 = puVar8 + 1) {
    local_c = *puVar8;
    if (local_c != 0) {
      do {
        if ((char)local_c == '\0') {
          local_20 = local_20 + 0x20;
          local_c = local_c >> 8;
        }
        else {
          if (((local_c & 1) != 0) &&
             (((local_20[1] - *(int *)puVar13 | *(int *)(puVar13 + 2) - *local_20) & 0x80008000U) ==
              0)) {
            uVar6 = local_20[3];
            if ((uVar6 & 1) == 0) {
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
              }
              puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = param_2;
                puVar1[1] = uVar6;
              }
              param_3[1] = param_3[1] + 1;
              param_1 = local_1c;
            }
            else {
              iVar9 = (uVar6 & 0xfffffffe) + *(int *)(param_1 + 0xd8);
              iVar5 = 0;
              if (0 < *(int *)(iVar9 + 8)) {
                psVar11 = *(short **)(iVar9 + 4);
                do {
                  if (*psVar11 == (short)local_8) goto LAB_011451bb;
                  iVar5 = iVar5 + 1;
                  psVar11 = psVar11 + 1;
                } while (iVar5 < *(int *)(iVar9 + 8));
              }
              iVar5 = -1;
LAB_011451bb:
              *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + -1;
              param_1 = local_1c;
              if (*(int *)(iVar9 + 8) != iVar5) {
                *(undefined2 *)(*(int *)(iVar9 + 4) + iVar5 * 2) =
                     *(undefined2 *)(*(int *)(iVar9 + 4) + *(int *)(iVar9 + 8) * 2);
              }
            }
          }
          local_20 = local_20 + 4;
          local_c = local_c >> 1;
        }
      } while (local_c != 0);
      local_c = 0;
      puVar12 = local_14;
    }
    piVar4 = local_24 + 0x80;
    piVar3 = local_20;
  }
  if (-1 < local_30) {
    local_20 = piVar3;
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(puVar12,local_30 * 4);
    piVar3 = local_20;
  }
  local_20 = piVar3;
  iVar5 = *local_10;
  FUN_011424e0(puVar13[4],puVar13[5]);
  FUN_011424e0(*puVar13,puVar13[2]);
  FUN_011424e0(puVar13[1],puVar13[3]);
  FUN_01141de0(iVar5,local_18,puVar13);
  if (local_8 < local_18 - 1) {
    iVar5 = *local_10;
    *(undefined8 *)puVar13 = *(undefined8 *)(iVar5 + -0x10 + local_18 * 0x10);
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(iVar5 + local_18 * 0x10 + -8);
    uVar10 = (undefined2)local_8;
    *(undefined2 *)(*(int *)(param_1 + 0xac) + 2 + (uint)puVar13[4] * 4) = uVar10;
    *(undefined2 *)(*(int *)(param_1 + 0xac) + 2 + (uint)puVar13[5] * 4) = uVar10;
    if ((*(uint *)(puVar13 + 6) & 1) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xb8) + 2 + (uint)*puVar13 * 4) = uVar10;
      *(undefined2 *)(*(int *)(param_1 + 0xb8) + 2 + (uint)puVar13[2] * 4) = uVar10;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2 + (uint)puVar13[1] * 4) = uVar10;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2 + (uint)puVar13[3] * 4) = uVar10;
      **(uint **)(puVar13 + 6) = local_8;
    }
    else {
      *(undefined2 *)((*(uint *)(puVar13 + 6) & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = uVar10;
    }
    if ((*(int *)(param_1 + 0xd0) != 0) && ((puVar13[6] & 1) == 0)) {
      bVar7 = 0x10 - (char)*(undefined2 *)(param_1 + 0xd4);
      uVar6 = (uint)(*(ushort *)(*(int *)(param_1 + 0xac) + (uint)puVar13[4] * 4) >> (bVar7 & 0x1f))
      ;
      if ((uVar6 != 0) &&
         (puVar13[4] <
          *(ushort *)
           (*local_10 + 10 +
           (uint)*(ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + uVar6 * 0x10) * 0x10))) {
        uVar6 = uVar6 - 1;
      }
      iVar5 = (*(ushort *)(*(int *)(param_1 + 0xac) + (uint)puVar13[5] * 4) >> (bVar7 & 0x1f)) - 1;
      if ((int)uVar6 <= iVar5) {
        param_2 = (uint *)(uVar6 << 4);
        param_3 = (int *)((iVar5 - uVar6) + 1);
        do {
          iVar9 = *(int *)(param_1 + 0xd8) + (int)param_2;
          iVar5 = 0;
          if (0 < *(int *)(iVar9 + 8)) {
            psVar11 = *(short **)(iVar9 + 4);
            do {
              if (*psVar11 == (short)((short)local_18 + -1)) goto LAB_011453e8;
              iVar5 = iVar5 + 1;
              psVar11 = psVar11 + 1;
            } while (iVar5 < *(int *)(iVar9 + 8));
          }
          iVar5 = -1;
LAB_011453e8:
          param_2 = (uint *)((int)param_2 + 0x10);
          param_3 = (int *)((int)param_3 + -1);
          *(undefined2 *)(*(int *)(iVar9 + 4) + iVar5 * 2) = uVar10;
        } while (param_3 != (int *)0x0);
      }
    }
    FUN_01142310(local_8);
  }
  piVar3 = local_10;
  iVar5 = local_18 - 1;
  if ((int)(local_10[2] & 0x3fffffffU) < iVar5) {
    iVar9 = (local_10[2] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar5) {
      iVar9 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_10,iVar9,0x10);
  }
  iVar9 = 0;
  if (iVar5 != piVar3[1] && -1 < iVar5 - piVar3[1]) {
    do {
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5 - piVar3[1]);
  }
  piVar3[1] = iVar5;
  return;
}

// 01145460  FUN_01145460  size=1126  [run]
void __thiscall FUN_01145460(int param_1,int param_2,int *param_3,char param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  short sVar9;
  undefined1 **ppuVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *local_434;
  uint local_430;
  uint local_42c;
  undefined1 local_428 [512];
  undefined1 *local_228;
  uint local_224;
  uint local_220;
  undefined1 local_21c [512];
  uint local_1c;
  byte *local_18;
  uint local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  local_434 = local_428;
  local_c = param_1;
  local_18 = (byte *)(*(int *)(param_1 + 0xac) + -4 + *(int *)(param_1 + 0xb0) * 4);
  local_10 = (byte *)(*(int *)(param_1 + 0xac) + 4);
  local_228 = local_21c;
  local_430 = 0;
  local_42c = 0x80000100;
  local_224 = 0;
  local_220 = 0x80000100;
  if (local_10 < local_18) {
    do {
      uVar1 = *(ushort *)(local_10 + 2);
      local_14 = (uint)uVar1;
      local_1c = 1 << ((byte)uVar1 & 0x1f) & *(uint *)(param_2 + ((int)local_14 >> 5) * 4);
      if ((*local_10 & 1) == 0) {
        piVar13 = (int *)(local_14 * 0x10 + *(int *)(local_c + 0xa0));
        local_8 = 0;
        if (0 < (int)local_430) {
          do {
            iVar6 = *(int *)(local_c + 0xa0);
            iVar11 = (uint)*(ushort *)(local_434 + local_8 * 2) * 0x10;
            piVar12 = (int *)(iVar11 + iVar6);
            if (((*(int *)(iVar11 + 4 + iVar6) - *piVar13 | piVar13[1] - *(int *)(iVar11 + iVar6)) &
                0x80008000U) == 0) {
              piVar4 = piVar12;
              piVar5 = piVar13;
              if (((*(byte *)(piVar13 + 3) & 1) == 0) &&
                 (piVar4 = piVar13, piVar5 = piVar12, (*(byte *)(piVar12 + 3) & 1) == 0)) {
                if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
                }
                piVar4 = (int *)(*param_3 + param_3[1] * 8);
                param_3[1] = param_3[1] + 1;
                *piVar4 = piVar12[3];
                piVar4[1] = piVar13[3];
              }
              else {
                iVar11 = (piVar5[3] & 0xfffffffeU) + *(int *)(local_c + 0xd8);
                sVar9 = (short)((int)piVar4 - iVar6 >> 4);
                if (param_4 == '\0') {
                  iVar6 = 0;
                  if (0 < *(int *)(iVar11 + 8)) {
                    psVar8 = *(short **)(iVar11 + 4);
                    do {
                      if (*psVar8 == sVar9) goto LAB_01145650;
                      iVar6 = iVar6 + 1;
                      psVar8 = psVar8 + 1;
                    } while (iVar6 < *(int *)(iVar11 + 8));
                  }
                  iVar6 = -1;
LAB_01145650:
                  *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + -1;
                  if (*(int *)(iVar11 + 8) != iVar6) {
                    *(undefined2 *)(*(int *)(iVar11 + 4) + iVar6 * 2) =
                         *(undefined2 *)(*(int *)(iVar11 + 4) + *(int *)(iVar11 + 8) * 2);
                  }
                }
                else {
                  if (*(uint *)(iVar11 + 8) == (*(uint *)(iVar11 + 0xc) & 0x3fffffff)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar11 + 4),2);
                  }
                  *(short *)(*(int *)(iVar11 + 4) + *(int *)(iVar11 + 8) * 2) = sVar9;
                  *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + 1;
                }
              }
            }
            local_8 = local_8 + 1;
          } while (local_8 < (int)local_430);
        }
        if (local_1c == 0) {
          if (local_224 == (local_220 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_228,2);
          }
          *(undefined2 *)(local_228 + local_224 * 2) = (undefined2)local_14;
          local_224 = local_224 + 1;
        }
        else {
          local_8 = 0;
          if (0 < (int)local_224) {
            do {
              iVar6 = *(int *)(local_c + 0xa0);
              iVar11 = (uint)*(ushort *)(local_228 + local_8 * 2) * 0x10;
              piVar12 = (int *)(iVar11 + iVar6);
              if (((*(int *)(iVar11 + 4 + iVar6) - *piVar13 | piVar13[1] - *(int *)(iVar11 + iVar6))
                  & 0x80008000U) == 0) {
                piVar4 = piVar12;
                piVar5 = piVar13;
                if (((*(byte *)(piVar13 + 3) & 1) == 0) &&
                   (piVar4 = piVar13, piVar5 = piVar12, (*(byte *)(piVar12 + 3) & 1) == 0)) {
                  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
                  }
                  piVar4 = (int *)(*param_3 + param_3[1] * 8);
                  param_3[1] = param_3[1] + 1;
                  *piVar4 = piVar12[3];
                  piVar4[1] = piVar13[3];
                }
                else {
                  iVar11 = (piVar5[3] & 0xfffffffeU) + *(int *)(local_c + 0xd8);
                  sVar9 = (short)((int)piVar4 - iVar6 >> 4);
                  if (param_4 == '\0') {
                    iVar6 = 0;
                    if (0 < *(int *)(iVar11 + 8)) {
                      psVar8 = *(short **)(iVar11 + 4);
                      do {
                        if (*psVar8 == sVar9) goto LAB_01145790;
                        iVar6 = iVar6 + 1;
                        psVar8 = psVar8 + 1;
                      } while (iVar6 < *(int *)(iVar11 + 8));
                    }
                    iVar6 = -1;
LAB_01145790:
                    *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + -1;
                    if (*(int *)(iVar11 + 8) != iVar6) {
                      *(undefined2 *)(*(int *)(iVar11 + 4) + iVar6 * 2) =
                           *(undefined2 *)(*(int *)(iVar11 + 4) + *(int *)(iVar11 + 8) * 2);
                    }
                  }
                  else {
                    if (*(uint *)(iVar11 + 8) == (*(uint *)(iVar11 + 0xc) & 0x3fffffff)) {
                      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar11 + 4),2);
                    }
                    *(short *)(*(int *)(iVar11 + 4) + *(int *)(iVar11 + 8) * 2) = sVar9;
                    *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + 1;
                  }
                }
              }
              local_8 = local_8 + 1;
            } while (local_8 < (int)local_224);
          }
          if (local_430 == (local_42c & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_434,2);
          }
          *(undefined2 *)(local_434 + local_430 * 2) = (undefined2)local_14;
          local_430 = local_430 + 1;
        }
      }
      else {
        ppuVar10 = &local_434;
        if (local_1c == 0) {
          ppuVar10 = &local_228;
        }
        puVar2 = ppuVar10[1];
        puVar3 = (undefined1 *)0x0;
        if (0 < (int)puVar2) {
          puVar7 = (ushort *)*ppuVar10;
          do {
            if (*puVar7 == uVar1) goto LAB_01145527;
            puVar3 = puVar3 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)puVar3 < (int)puVar2);
        }
        puVar3 = (undefined1 *)0xffffffff;
LAB_01145527:
        puVar2 = puVar2 + -1;
        ppuVar10[1] = puVar2;
        if (puVar2 != puVar3) {
          *(undefined2 *)(*ppuVar10 + (int)puVar3 * 2) =
               *(undefined2 *)(*ppuVar10 + (int)puVar2 * 2);
        }
      }
      local_10 = local_10 + 4;
    } while (local_10 < local_18);
  }
  local_224 = 0;
  if (-1 < (int)local_220) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_228,(local_220 & 0x3fffffff) * 2);
  }
  local_228 = (undefined1 *)0x0;
  local_220 = 0x80000000;
  local_430 = 0;
  if (-1 < (int)local_42c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_434,(local_42c & 0x3fffffff) * 2);
  }
  return;
}

// 011458D0  hkp3AxisSweep::vf48  size=1423  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkp3AxisSweep::vf48(int param_1,float *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_28;
  int local_20;
  int *local_1c;
  uint *local_18;
  uint local_14;
  
  local_1c = *(int **)(param_1 + 0xa4);
  iVar6 = ((int)local_1c >> 5) + 8;
  if (iVar6 == 0) {
    local_18 = (uint *)0x0;
  }
  else {
    local_20 = iVar6 * 4;
    local_18 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_20);
    local_28 = (int)(local_20 + (local_20 >> 0x1f & 3U)) >> 2;
    if (local_28 != 0) goto LAB_01145941;
  }
  local_28 = -0x80000000;
LAB_01145941:
  puVar2 = local_18;
  for (iVar6 = (int)local_1c >> 7; -1 < iVar6; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  auVar17._0_4_ = (*(float *)(param_1 + 0x40) + *param_2) * *(float *)(param_1 + 0x60);
  auVar17._4_4_ = (*(float *)(param_1 + 0x44) + param_2[1]) * *(float *)(param_1 + 100);
  auVar17._8_4_ = (*(float *)(param_1 + 0x48) + param_2[2]) * *(float *)(param_1 + 0x68);
  auVar17._12_4_ = (*(float *)(param_1 + 0x4c) + param_2[3]) * *(float *)(param_1 + 0x6c);
  auVar17 = minps(auVar17,_DAT_01b214d0);
  auVar17 = maxps(auVar17,ZEXT816(0));
  fVar19 = auVar17._4_4_ + fRam01b214e4;
  fVar21 = auVar17._8_4_ + fRam01b214e8;
  auVar18._0_4_ = (*(float *)(param_1 + 0x50) + param_2[4]) * *(float *)(param_1 + 0x60);
  auVar18._4_4_ = (*(float *)(param_1 + 0x54) + param_2[5]) * *(float *)(param_1 + 100);
  auVar18._8_4_ = (*(float *)(param_1 + 0x58) + param_2[6]) * *(float *)(param_1 + 0x68);
  auVar18._12_4_ = (*(float *)(param_1 + 0x5c) + param_2[7]) * *(float *)(param_1 + 0x6c);
  auVar18 = minps(auVar18,_DAT_01b214d0);
  auVar18 = maxps(auVar18,ZEXT816(0));
  fVar16 = auVar18._0_4_ + _DAT_01b214e0;
  fVar20 = auVar18._4_4_ + fRam01b214e4;
  fVar22 = auVar18._8_4_ + fRam01b214e8;
  uVar13 = (uint)(auVar17._0_4_ + _DAT_01b214e0) >> 7 & 0xfffe;
  puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4);
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (iVar6 = (int)uVar13 >> (0x10U - (char)*(undefined4 *)(param_1 + 0xd4) & 0x1f), 0 < iVar6)) {
    puVar7 = (ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + iVar6 * 0x10);
    local_18[(int)(uint)*puVar7 >> 5] =
         local_18[(int)(uint)*puVar7 >> 5] ^ 1 << ((byte)*puVar7 & 0x1f);
    puVar4 = *(ushort **)(puVar7 + 2);
    iVar6 = *(int *)(puVar7 + 4);
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      local_18[(int)(uint)uVar3 >> 5] = local_18[(int)(uint)uVar3 >> 5] ^ 1 << ((byte)uVar3 & 0x1f);
    }
    iVar6 = *(int *)(param_1 + 0xac);
    local_14 = (uint)*puVar7 * 0x10 + *(int *)(param_1 + 0xa0);
    uVar3 = *(ushort *)(local_14 + 10);
    for (pbVar8 = (byte *)(iVar6 + 4 + (uint)*(ushort *)(local_14 + 8) * 4);
        pbVar8 < (byte *)(iVar6 + (uint)uVar3 * 4); pbVar8 = pbVar8 + 4) {
      if ((*pbVar8 & 1) == 0) {
        local_18[(int)(uint)*(ushort *)(pbVar8 + 2) >> 5] =
             local_18[(int)(uint)*(ushort *)(pbVar8 + 2) >> 5] &
             ~(1 << ((byte)*(ushort *)(pbVar8 + 2) & 0x1f));
      }
    }
    puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)(local_14 + 8) * 4);
  }
  uVar3 = *puVar7;
  while (uVar3 < uVar13) {
    puVar4 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    local_18[(int)(uint)*puVar4 >> 5] =
         local_18[(int)(uint)*puVar4 >> 5] ^ 1 << ((byte)*puVar4 & 0x1f);
    uVar3 = *puVar7;
  }
  uVar3 = *puVar7;
  while ((uint)uVar3 < ((uint)fVar16 >> 7 & 0xffff | 1)) {
    if ((*puVar7 & 1) == 0) {
      local_18[(int)(uint)puVar7[1] >> 5] =
           local_18[(int)(uint)puVar7[1] >> 5] ^ 1 << ((byte)puVar7[1] & 0x1f);
    }
    puVar4 = puVar7 + 2;
    puVar7 = puVar7 + 2;
    uVar3 = *puVar4;
  }
  iVar6 = *(int *)(param_1 + 0xb8);
  local_1c = (int *)(iVar6 + -8 + *(int *)(param_1 + 0xbc) * 4);
  iVar9 = FUN_011418d0(iVar6 + 4,local_1c,(uint)fVar19 >> 7 & 0xfffe);
  iVar10 = FUN_011418d0(iVar6 + 4,local_1c,(uint)fVar20 >> 7 & 0xffff | 1);
  iVar5 = *(int *)(param_1 + 0xc4);
  local_1c = (int *)(iVar5 + -8 + *(int *)(param_1 + 200) * 4);
  iVar11 = FUN_011418d0(iVar5 + 4,local_1c,(uint)fVar21 >> 7 & 0xfffe);
  local_50 = CONCAT22((short)(iVar11 - iVar5 >> 2),(short)(iVar9 - iVar6 >> 2));
  iVar9 = FUN_011418d0(iVar5 + 4,local_1c,(uint)fVar22 >> 7 & 0xffff | 1);
  uStack_4c = CONCAT22((short)(iVar9 + (-4 - iVar5) >> 2),(short)(iVar10 + (-4 - iVar6) >> 2));
  puVar2 = local_18 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  puVar12 = local_18;
  if (local_18 < puVar2) {
    local_1c = (int *)(*(int *)(param_1 + 0xa0) + 0x24);
    puVar14 = local_18;
    do {
      local_14 = *puVar14;
      piVar15 = local_1c;
      if (local_14 != 0) {
        do {
          if ((local_14 & 0xf) != 0) {
            if ((((local_14 & 1) != 0) &&
                (((uStack_4c - piVar15[-9] | piVar15[-8] - local_50) & 0x80008000U) == 0)) &&
               (uVar13 = piVar15[-6], (uVar13 & 1) == 0)) {
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
              }
              puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = uVar13;
              }
              param_3[1] = param_3[1] + 1;
            }
            if ((((local_14 & 2) != 0) &&
                (((uStack_4c - piVar15[-5] | piVar15[-4] - local_50) & 0x80008000U) == 0)) &&
               (uVar13 = piVar15[-2], (uVar13 & 1) == 0)) {
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
              }
              puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = uVar13;
              }
              param_3[1] = param_3[1] + 1;
            }
            if ((((local_14 & 4) != 0) &&
                (((uStack_4c - piVar15[-1] | *piVar15 - local_50) & 0x80008000U) == 0)) &&
               (uVar13 = piVar15[2], (uVar13 & 1) == 0)) {
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
              }
              puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = uVar13;
              }
              param_3[1] = param_3[1] + 1;
            }
            if ((((local_14 & 8) != 0) &&
                (((uStack_4c - piVar15[3] | piVar15[4] - local_50) & 0x80008000U) == 0)) &&
               (uVar13 = piVar15[6], (uVar13 & 1) == 0)) {
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
              }
              puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = 0;
                puVar1[1] = uVar13;
              }
              param_3[1] = param_3[1] + 1;
            }
          }
          local_14 = local_14 >> 4;
          piVar15 = piVar15 + 0x10;
        } while (local_14 != 0);
        local_14 = 0;
        puVar12 = local_18;
      }
      local_1c = local_1c + 0x80;
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar2);
  }
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(puVar12,local_28 * 4);
  }
  return;
}

// 01145E60  hkp3AxisSweep::vf50  size=1254  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkp3AxisSweep::vf50(int param_1,float *param_2,int *param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_30;
  int local_2c;
  undefined2 local_26;
  uint *local_24;
  int *local_1c;
  uint *local_18;
  uint local_14;
  
  local_24 = *(uint **)(param_1 + 0xa4);
  iVar4 = ((int)local_24 >> 5) + 8;
  if (iVar4 == 0) {
    local_18 = (uint *)0x0;
  }
  else {
    local_2c = iVar4 * 4;
    local_18 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_2c);
    local_30 = (int)(local_2c + (local_2c >> 0x1f & 3U)) >> 2;
    if (local_30 != 0) goto LAB_01145ed1;
  }
  local_30 = -0x80000000;
LAB_01145ed1:
  puVar1 = local_18;
  for (iVar4 = (int)local_24 >> 7; -1 < iVar4; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  }
  auVar16._0_4_ = (*(float *)(param_1 + 0x40) + *param_2) * *(float *)(param_1 + 0x60);
  auVar16._4_4_ = (*(float *)(param_1 + 0x44) + param_2[1]) * *(float *)(param_1 + 100);
  auVar16._8_4_ = (*(float *)(param_1 + 0x48) + param_2[2]) * *(float *)(param_1 + 0x68);
  auVar16._12_4_ = (*(float *)(param_1 + 0x4c) + param_2[3]) * *(float *)(param_1 + 0x6c);
  auVar16 = minps(auVar16,_DAT_01b214d0);
  auVar16 = maxps(auVar16,ZEXT816(0));
  fVar18 = auVar16._4_4_ + fRam01b214e4;
  fVar19 = auVar16._8_4_ + fRam01b214e8;
  auVar17._0_4_ = (*(float *)(param_1 + 0x50) + param_2[4]) * *(float *)(param_1 + 0x60);
  auVar17._4_4_ = (*(float *)(param_1 + 0x54) + param_2[5]) * *(float *)(param_1 + 100);
  auVar17._8_4_ = (*(float *)(param_1 + 0x58) + param_2[6]) * *(float *)(param_1 + 0x68);
  auVar17._12_4_ = (*(float *)(param_1 + 0x5c) + param_2[7]) * *(float *)(param_1 + 0x6c);
  auVar17 = minps(auVar17,_DAT_01b214d0);
  auVar17 = maxps(auVar17,ZEXT816(0));
  fVar15 = auVar17._0_4_ + _DAT_01b214e0;
  local_24 = (uint *)((uint)(auVar17._8_4_ + fRam01b214e8) >> 7 & 0xffff);
  uVar10 = (uint)(auVar17._4_4_ + fRam01b214e4) >> 7;
  local_26 = (undefined2)uVar10;
  uVar5 = (uint)local_24 | 1;
  uVar11 = (uint)(auVar16._0_4_ + _DAT_01b214e0) >> 7 & 0xfffe;
  puVar6 = (ushort *)(*(int *)(param_1 + 0xac) + 4);
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (iVar4 = (int)uVar11 >> (0x10U - (char)*(undefined4 *)(param_1 + 0xd4) & 0x1f), 0 < iVar4)) {
    puVar6 = (ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + iVar4 * 0x10);
    local_18[(int)(uint)*puVar6 >> 5] =
         local_18[(int)(uint)*puVar6 >> 5] ^ 1 << ((byte)*puVar6 & 0x1f);
    puVar3 = *(ushort **)(puVar6 + 2);
    iVar4 = *(int *)(puVar6 + 4);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      local_18[(int)(uint)uVar2 >> 5] = local_18[(int)(uint)uVar2 >> 5] ^ 1 << ((byte)uVar2 & 0x1f);
    }
    iVar4 = *(int *)(param_1 + 0xac);
    local_14 = (uint)*puVar6 * 0x10 + *(int *)(param_1 + 0xa0);
    uVar2 = *(ushort *)(local_14 + 10);
    for (pbVar7 = (byte *)(iVar4 + 4 + (uint)*(ushort *)(local_14 + 8) * 4);
        pbVar7 < (byte *)(iVar4 + (uint)uVar2 * 4); pbVar7 = pbVar7 + 4) {
      if ((*pbVar7 & 1) == 0) {
        local_18[(int)(uint)*(ushort *)(pbVar7 + 2) >> 5] =
             local_18[(int)(uint)*(ushort *)(pbVar7 + 2) >> 5] &
             ~(1 << ((byte)*(ushort *)(pbVar7 + 2) & 0x1f));
      }
    }
    puVar6 = (ushort *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)(local_14 + 8) * 4);
  }
  uVar2 = *puVar6;
  while (uVar2 < uVar11) {
    puVar3 = puVar6 + 1;
    puVar6 = puVar6 + 2;
    local_18[(int)(uint)*puVar3 >> 5] =
         local_18[(int)(uint)*puVar3 >> 5] ^ 1 << ((byte)*puVar3 & 0x1f);
    uVar2 = *puVar6;
  }
  uVar2 = *puVar6;
  while ((uint)uVar2 < ((uint)fVar15 >> 7 & 0xffff | 1)) {
    if ((*puVar6 & 1) == 0) {
      local_18[(int)(uint)puVar6[1] >> 5] =
           local_18[(int)(uint)puVar6[1] >> 5] ^ 1 << ((byte)puVar6[1] & 0x1f);
    }
    puVar3 = puVar6 + 2;
    puVar6 = puVar6 + 2;
    uVar2 = *puVar3;
  }
  local_24 = *(uint **)(param_1 + 0xb8);
  local_1c = (int *)((int)local_24 + -8 + *(int *)(param_1 + 0xbc) * 4);
  iVar4 = FUN_011418d0((int)local_24 + 4,local_1c,(uint)fVar18 >> 7 & 0xfffe);
  iVar4 = iVar4 - (int)local_24;
  iVar8 = FUN_011418d0((int)local_24 + 4,local_1c,uVar10 & 0xffff | 1);
  iVar12 = -4 - (int)local_24;
  local_24 = *(uint **)(param_1 + 0xc4);
  local_1c = (int *)((int)local_24 + -8 + *(int *)(param_1 + 200) * 4);
  iVar9 = FUN_011418d0((int)local_24 + 4,local_1c,(uint)fVar19 >> 7 & 0xfffe);
  local_50 = CONCAT22((short)(iVar9 - (int)local_24 >> 2),(short)(iVar4 >> 2));
  iVar4 = FUN_011418d0((int)local_24 + 4,local_1c,uVar5);
  uStack_4c = CONCAT22((short)(iVar4 + (-4 - (int)local_24) >> 2),(short)(iVar8 + iVar12 >> 2));
  puVar1 = local_18 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  local_24 = local_18;
  puVar13 = local_18;
  if (local_18 < puVar1) {
    local_1c = (int *)(*(int *)(param_1 + 0xa0) + 0x24);
    do {
      local_14 = *local_24;
      piVar14 = local_1c;
      if (local_14 != 0) {
        do {
          if ((local_14 & 0xf) != 0) {
            if ((((local_14 & 1) != 0) &&
                (((uStack_4c - piVar14[-9] | piVar14[-8] - local_50) & 0x80008000U) == 0)) &&
               ((piVar14[-6] & 1U) == 0)) {
              (**(code **)(*param_3 + 4))(piVar14[-6],0);
            }
            if ((((local_14 & 2) != 0) &&
                (((uStack_4c - piVar14[-5] | piVar14[-4] - local_50) & 0x80008000U) == 0)) &&
               ((piVar14[-2] & 1U) == 0)) {
              (**(code **)(*param_3 + 4))(piVar14[-2],0);
            }
            if ((((local_14 & 4) != 0) &&
                (((uStack_4c - piVar14[-1] | *piVar14 - local_50) & 0x80008000U) == 0)) &&
               ((piVar14[2] & 1U) == 0)) {
              (**(code **)(*param_3 + 4))(piVar14[2],0);
            }
            if ((((local_14 & 8) != 0) &&
                (((uStack_4c - piVar14[3] | piVar14[4] - local_50) & 0x80008000U) == 0)) &&
               ((piVar14[6] & 1U) == 0)) {
              (**(code **)(*param_3 + 4))(piVar14[6],0);
            }
          }
          local_14 = local_14 >> 4;
          piVar14 = piVar14 + 0x10;
        } while (local_14 != 0);
        local_14 = 0;
        puVar13 = local_18;
      }
      local_1c = local_1c + 0x80;
      local_24 = local_24 + 1;
    } while (local_24 < puVar1);
  }
  if (-1 < local_30) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(puVar13,local_30 * 4);
  }
  return;
}

// 01146350  hkp3AxisSweep::vf70  size=1323  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkp3AxisSweep::vf70(int param_1,float *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  int *piStack_2c;
  undefined2 local_26;
  uint *local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  uint *local_14;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = -0x80000000;
  local_1c = param_1;
  if (0 < *(int *)(param_1 + 0xa4)) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_40,*(int *)(param_1 + 0xa4),4);
  }
  local_18 = *(uint **)(param_1 + 0xa4);
  iVar5 = ((int)local_18 >> 5) + 8;
  if (iVar5 == 0) {
    local_14 = (uint *)0x0;
  }
  else {
    local_20 = iVar5 * 4;
    local_14 = (uint *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_20);
    local_34 = (int)(local_20 + (local_20 >> 0x1f & 3U)) >> 2;
    if (local_34 != 0) goto LAB_011463f3;
  }
  local_34 = -0x80000000;
LAB_011463f3:
  puVar4 = local_14;
  for (iVar5 = (int)local_18 >> 7; -1 < iVar5; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
  }
  auVar17._0_4_ = (*(float *)(param_1 + 0x40) + *param_2) * *(float *)(param_1 + 0x60);
  auVar17._4_4_ = (*(float *)(param_1 + 0x44) + param_2[1]) * *(float *)(param_1 + 100);
  auVar17._8_4_ = (*(float *)(param_1 + 0x48) + param_2[2]) * *(float *)(param_1 + 0x68);
  auVar17._12_4_ = (*(float *)(param_1 + 0x4c) + param_2[3]) * *(float *)(param_1 + 0x6c);
  auVar17 = minps(auVar17,_DAT_01b214d0);
  auVar17 = maxps(auVar17,ZEXT816(0));
  fVar19 = auVar17._8_4_ + fRam01b214e8;
  auVar18._0_4_ = (*(float *)(param_1 + 0x50) + param_2[4]) * *(float *)(param_1 + 0x60);
  auVar18._4_4_ = (*(float *)(param_1 + 0x54) + param_2[5]) * *(float *)(param_1 + 100);
  auVar18._8_4_ = (*(float *)(param_1 + 0x58) + param_2[6]) * *(float *)(param_1 + 0x68);
  auVar18._12_4_ = (*(float *)(param_1 + 0x5c) + param_2[7]) * *(float *)(param_1 + 0x6c);
  auVar18 = minps(auVar18,_DAT_01b214d0);
  uVar13 = (uint)(auVar17._0_4_ + _DAT_01b214e0) >> 7;
  local_30 = (undefined2)uVar13;
  uVar14 = (uint)(auVar17._4_4_ + fRam01b214e4) >> 7;
  auVar17 = maxps(auVar18,ZEXT816(0));
  fVar16 = auVar17._0_4_ + _DAT_01b214e0;
  uVar6 = (uint)(auVar17._8_4_ + fRam01b214e8) >> 7;
  local_24 = (uint *)CONCAT22(local_24._2_2_,(short)uVar6);
  uStack_2e = (undefined2)uVar14;
  uVar15 = (uint)(auVar17._4_4_ + fRam01b214e4) >> 7;
  local_26 = (undefined2)uVar15;
  uVar13 = uVar13 & 0xfffe;
  puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4);
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (iVar5 = (int)uVar13 >> (0x10U - (char)*(undefined4 *)(param_1 + 0xd4) & 0x1f), 0 < iVar5)) {
    puVar7 = (ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + iVar5 * 0x10);
    local_14[(int)(uint)*puVar7 >> 5] =
         local_14[(int)(uint)*puVar7 >> 5] ^ 1 << ((byte)*puVar7 & 0x1f);
    puVar2 = *(ushort **)(puVar7 + 2);
    iVar5 = *(int *)(puVar7 + 4);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      local_14[(int)(uint)uVar1 >> 5] = local_14[(int)(uint)uVar1 >> 5] ^ 1 << ((byte)uVar1 & 0x1f);
    }
    local_18 = (uint *)((uint)*puVar7 * 0x10 + *(int *)(param_1 + 0xa0));
    local_24 = (uint *)(*(int *)(param_1 + 0xac) + (uint)*(ushort *)((int)local_18 + 10) * 4);
    for (pbVar8 = (byte *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)((int)local_18 + 8) * 4);
        pbVar8 < local_24; pbVar8 = pbVar8 + 4) {
      if ((*pbVar8 & 1) == 0) {
        local_14[(int)(uint)*(ushort *)(pbVar8 + 2) >> 5] =
             local_14[(int)(uint)*(ushort *)(pbVar8 + 2) >> 5] &
             ~(1 << ((byte)*(ushort *)(pbVar8 + 2) & 0x1f));
      }
    }
    puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)((int)local_18 + 8) * 4);
  }
  uVar1 = *puVar7;
  while (uVar1 < uVar13) {
    puVar2 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    local_14[(int)(uint)*puVar2 >> 5] =
         local_14[(int)(uint)*puVar2 >> 5] ^ 1 << ((byte)*puVar2 & 0x1f);
    uVar1 = *puVar7;
  }
  uVar1 = *puVar7;
  while ((uint)uVar1 < ((uint)fVar16 >> 7 & 0xffff | 1)) {
    if ((*puVar7 & 1) == 0) {
      local_14[(int)(uint)puVar7[1] >> 5] =
           local_14[(int)(uint)puVar7[1] >> 5] ^ 1 << ((byte)puVar7[1] & 0x1f);
    }
    puVar2 = puVar7 + 2;
    puVar7 = puVar7 + 2;
    uVar1 = *puVar2;
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  piStack_2c = (int *)(iVar5 + -8 + *(int *)(param_1 + 0xbc) * 4);
  iVar9 = FUN_011418d0(iVar5 + 4,piStack_2c,uVar14 & 0xfffe);
  iVar10 = FUN_011418d0(iVar5 + 4,piStack_2c,uVar15 & 0xffff | 1);
  iVar3 = *(int *)(param_1 + 0xc4);
  piStack_2c = (int *)(iVar3 + -8 + *(int *)(param_1 + 200) * 4);
  iVar11 = FUN_011418d0(iVar3 + 4,piStack_2c,(uint)fVar19 >> 7 & 0xfffe);
  local_50 = CONCAT22((short)(iVar11 - iVar3 >> 2),(short)(iVar9 - iVar5 >> 2));
  iVar9 = FUN_011418d0(iVar3 + 4,piStack_2c,uVar6 & 0xffff | 1);
  uStack_4c = CONCAT22((short)(iVar9 + (-4 - iVar3) >> 2),(short)(iVar10 + (-4 - iVar5) >> 2));
  local_18 = local_14 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  local_24 = local_14;
  if (local_14 < local_18) {
    piStack_2c = (int *)(*(int *)(param_1 + 0xa0) + 0x24);
    do {
      piVar12 = piStack_2c;
      for (uVar6 = *local_24; uVar6 != 0; uVar6 = uVar6 >> 4) {
        if ((uVar6 & 0xf) != 0) {
          if ((((uVar6 & 1) != 0) &&
              (((piVar12[-8] - local_50 | uStack_4c - piVar12[-9]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar12 + -6) & 1) == 0)) {
            *(int **)(local_40 + local_3c * 4) = piVar12 + -9;
            local_3c = local_3c + 1;
          }
          if ((((uVar6 & 2) != 0) &&
              (((piVar12[-4] - local_50 | uStack_4c - piVar12[-5]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar12 + -2) & 1) == 0)) {
            *(int **)(local_40 + local_3c * 4) = piVar12 + -5;
            local_3c = local_3c + 1;
          }
          if ((((uVar6 & 4) != 0) &&
              (((uStack_4c - piVar12[-1] | *piVar12 - local_50) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar12 + 2) & 1) == 0)) {
            *(int **)(local_40 + local_3c * 4) = piVar12 + -1;
            local_3c = local_3c + 1;
          }
          if ((((uVar6 & 8) != 0) &&
              (((piVar12[4] - local_50 | uStack_4c - piVar12[3]) & 0x80008000U) == 0)) &&
             ((*(byte *)(piVar12 + 6) & 1) == 0)) {
            *(int **)(local_40 + local_3c * 4) = piVar12 + 3;
            local_3c = local_3c + 1;
          }
        }
        piVar12 = piVar12 + 0x10;
      }
      local_24 = local_24 + 1;
      piStack_2c = piStack_2c + 0x80;
    } while (local_24 < local_18);
  }
  if (-1 < local_34) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_34 * 4);
  }
  FUN_01144420(&local_40,param_3);
  local_3c = 0;
  if (-1 < local_38) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_40,local_38 * 4);
  }
  return;
}

// 01146890  hkp3AxisSweep::vf6C  size=269  [run]
void __thiscall hkp3AxisSweep::vf6C(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar5 = param_2[1];
  iVar6 = 0;
  local_18 = 0;
  local_c = uVar5;
  local_8 = param_1;
  if (uVar5 == 0) {
    iVar3 = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = *(int *)((int)pvVar2 + 0xc);
    uVar4 = uVar5 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < iVar3 + uVar4))
    {
      iVar3 = FUN_0100b780(uVar4);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar3 + uVar4;
    }
  }
  local_14 = uVar5 | 0x80000000;
  if (0 < param_2[1]) {
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(int *)(iVar3 + -4 + iVar6 * 4) =
           *(int *)(*(int *)(*param_2 + iVar1) + 0x14) * 0x10 + *(int *)(local_8 + 0xa0);
      local_18 = iVar6;
    } while (iVar6 < param_2[1]);
  }
  local_1c = iVar3;
  local_10 = iVar3;
  FUN_01144420(&local_1c,param_3);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar5) || (uVar5 + iVar3 != *(int *)((int)pvVar2 + 0xc)))
     || (*(int *)((int)pvVar2 + 0x14) == iVar3)) {
    FUN_0100b9b0(iVar3,uVar5);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = iVar3;
  }
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar3,local_14 * 4);
  }
  return;
}

// 011469A0  hkp3AxisSweep::vf34  size=774  [run]
void __fastcall hkp3AxisSweep::vf34(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0xa4);
  if (iVar6 == 0) {
    local_10 = 0;
LAB_011469ed:
    local_2c = -0x80000000;
  }
  else {
    local_14 = iVar6 << 4;
    local_10 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_14);
    local_2c = (int)(local_14 + (local_14 >> 0x1f & 0xfU)) >> 4;
    if (local_2c == 0) goto LAB_011469ed;
  }
  if (iVar6 == 0) {
    local_c = 0;
LAB_01146a2f:
    local_28 = -0x80000000;
  }
  else {
    local_18 = iVar6 * 4;
    local_c = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_18);
    local_28 = (int)(local_18 + (local_18 >> 0x1f & 3U)) >> 2;
    if (local_28 == 0) goto LAB_01146a2f;
  }
  if (iVar6 == 0) {
    local_8 = 0;
  }
  else {
    local_1c = iVar6 * 4;
    local_8 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_1c);
    local_24 = (int)(local_1c + (local_1c >> 0x1f & 3U)) >> 2;
    if (local_24 != 0) goto LAB_01146a7b;
  }
  local_24 = -0x80000000;
LAB_01146a7b:
  iVar9 = local_8;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xa0);
      *(undefined8 *)(local_10 + iVar5) = *(undefined8 *)(iVar2 + iVar5);
      *(undefined8 *)(local_10 + 8 + iVar5) = *(undefined8 *)(iVar2 + 8 + iVar5);
      *(undefined2 *)(local_c + iVar3 * 4) = *(undefined2 *)(*(int *)(param_1 + 0xa0) + 8 + iVar5);
      *(short *)(local_c + 2 + iVar3 * 4) = (short)iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xa4));
  }
  local_20 = local_20 & 0xffffff00;
  if (1 < iVar6 + -1) {
    FUN_0114cb80(local_c + 4,0,iVar6 + -2,local_20);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar3 = 0;
    puVar8 = (ushort *)(local_c + 2);
    do {
      uVar1 = *puVar8;
      *(int *)(local_8 + (uint)uVar1 * 4) = iVar6;
      iVar9 = *(int *)(param_1 + 0xa0);
      puVar4 = (undefined8 *)((uint)uVar1 * 0x10 + local_10);
      iVar6 = iVar6 + 1;
      *(undefined8 *)(iVar9 + iVar3) = *puVar4;
      *(undefined8 *)(iVar9 + 8 + iVar3) = puVar4[1];
      puVar8 = puVar8 + 2;
      iVar3 = iVar3 + 0x10;
      iVar9 = local_8;
    } while (iVar6 < *(int *)(param_1 + 0xa4));
  }
  if (1 < *(int *)(param_1 + 0xa4)) {
    iVar3 = 0x10;
    iVar6 = 1;
    do {
      piVar7 = *(int **)(*(int *)(param_1 + 0xa0) + 0xc + iVar3);
      if (((uint)piVar7 & 1) == 0) {
        *piVar7 = iVar6;
      }
      else {
        *(short *)(((uint)piVar7 & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = (short)iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0xa4));
  }
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    local_8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0xd8) + local_8;
      iVar6 = *(int *)(iVar3 + 8);
      while (iVar6 = iVar6 + -1, -1 < iVar6) {
        iVar5 = *(int *)(iVar3 + 4);
        *(undefined2 *)(iVar5 + iVar6 * 2) =
             *(undefined2 *)(iVar9 + (uint)*(ushort *)(iVar5 + iVar6 * 2) * 4);
      }
      local_8 = local_8 + 0x10;
      local_20 = local_20 + 1;
    } while ((int)local_20 < *(int *)(param_1 + 0xd0));
  }
  piVar7 = (int *)(param_1 + 0xb0);
  local_20 = 3;
  do {
    iVar6 = 0;
    if (0 < *piVar7) {
      puVar8 = (ushort *)(piVar7[-1] + 2);
      do {
        *puVar8 = *(ushort *)(iVar9 + (uint)*puVar8 * 4);
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 2;
      } while (iVar6 < *piVar7);
    }
    piVar7 = piVar7 + 3;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 0xa4)) {
    do {
      FUN_01142310(iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xa4));
  }
  if (-1 < local_24) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar9,local_24 * 4);
  }
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_c,local_28 * 4);
  }
  if (-1 < local_2c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_2c << 4);
  }
  return;
}

// 01146CC0  hkp3AxisSweep::vf64  size=2247  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkp3AxisSweep::vf64(int param_1,float *param_2,undefined1 (*param_3) [16],int param_4)

{
  byte *pbVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined1 (*pauVar8) [16];
  LPVOID pvVar9;
  float *pfVar10;
  byte bVar11;
  float *pfVar12;
  uint uVar13;
  ushort *puVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int local_dc [3];
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0 [4];
  float local_b0 [5];
  ushort *local_9c [3];
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  uint local_78;
  uint local_74;
  ushort *local_70 [3];
  uint local_64;
  undefined1 (*local_60) [16];
  undefined1 (*local_5c) [16];
  undefined1 (*local_58) [16];
  undefined1 (*local_54) [16];
  float local_50 [3];
  uint uStack_44;
  undefined1 (*local_3c) [16];
  int local_38;
  byte local_31;
  undefined1 (*local_30) [16];
  int local_2c;
  byte *local_28;
  byte *local_24;
  undefined1 (*local_20) [16];
  byte *local_1c;
  undefined1 (*local_18) [16];
  undefined1 (*local_14) [16];
  
  local_38 = param_1;
  auVar18._0_4_ = (*(float *)(param_1 + 0x40) + *param_2) * *(float *)(param_1 + 0x60);
  auVar18._4_4_ = (*(float *)(param_1 + 0x44) + param_2[1]) * *(float *)(param_1 + 100);
  auVar18._8_4_ = (*(float *)(param_1 + 0x48) + param_2[2]) * *(float *)(param_1 + 0x68);
  auVar18._12_4_ = (*(float *)(param_1 + 0x4c) + param_2[3]) * *(float *)(param_1 + 0x6c);
  auVar18 = minps(auVar18,_DAT_01b214d0);
  auVar18 = maxps(auVar18,ZEXT816(0));
  local_50[0] = (float)((uint)(auVar18._0_4_ + _DAT_01b214e0) >> 7 & 0xffff);
  uStack_44 = (uint)(auVar18._12_4_ + fRam01b214ec) >> 7 & 0xffff;
  uVar5 = *(int *)(param_1 + 0xa4) + 0x10;
  _local_90 = ZEXT816(0);
  local_50[1] = (float)((uint)(auVar18._4_4_ + fRam01b214e4) >> 7 & 0xffff);
  local_50[2] = (float)((uint)(auVar18._8_4_ + fRam01b214e8) >> 7 & 0xffff);
  if (uVar5 == 0) {
    pauVar6 = (undefined1 (*) [16])0x0;
  }
  else {
    local_74 = uVar5;
    pauVar6 = (undefined1 (*) [16])(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_74);
    local_64 = local_74;
    if (local_74 != 0) goto LAB_01146d7d;
  }
  local_64 = 0x80000000;
LAB_01146d7d:
  pauVar8 = pauVar6;
  for (iVar7 = *(int *)(param_1 + 0xa4) >> 4; -1 < iVar7; iVar7 = iVar7 + -1) {
    *pauVar8 = _local_90;
    pauVar8 = pauVar8 + 1;
  }
  local_1c = (byte *)param_2[7];
  if (local_1c == (byte *)0x0) {
    local_1c = (byte *)(param_1 + 0xac);
  }
  bVar11 = 0x11;
  local_20 = (undefined1 (*) [16])0x0;
  do {
    local_18 = *(undefined1 (**) [16])((int)local_1c + 4);
    iVar7 = *(int *)local_1c;
    uVar5 = *(uint *)((int)local_50 + (int)local_20);
    if (uVar5 < *(ushort *)(iVar7 + ((int)local_18 >> 1) * 4)) {
      local_14 = (undefined1 (*) [16])(iVar7 + -0x10 + (int)local_18 * 4);
      pauVar8 = (undefined1 (*) [16])(iVar7 + 4);
      while ((pauVar8 < local_14 && (*(ushort *)(*pauVar8 + 0xc) <= uVar5))) {
        (*pauVar6)[*(ushort *)(*pauVar8 + 2)] = (*pauVar6)[*(ushort *)(*pauVar8 + 2)] ^ bVar11;
        (*pauVar6)[*(ushort *)(*pauVar8 + 6)] = (*pauVar6)[*(ushort *)(*pauVar8 + 6)] ^ bVar11;
        (*pauVar6)[*(ushort *)(*pauVar8 + 10)] = (*pauVar6)[*(ushort *)(*pauVar8 + 10)] ^ bVar11;
        (*pauVar6)[*(ushort *)(*pauVar8 + 0xe)] = (*pauVar6)[*(ushort *)(*pauVar8 + 0xe)] ^ bVar11;
        pauVar8 = pauVar8 + 1;
      }
      uVar2 = *(ushort *)*pauVar8;
      while (uVar2 <= uVar5) {
        (*pauVar6)[*(ushort *)(*pauVar8 + 2)] = (*pauVar6)[*(ushort *)(*pauVar8 + 2)] ^ bVar11;
        puVar3 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
        uVar2 = *(ushort *)(puVar3 + 4);
      }
    }
    else {
      local_14 = (undefined1 (*) [16])(iVar7 + 0x10U);
      pauVar8 = (undefined1 (*) [16])(iVar7 + -8 + (int)local_18 * 4);
      while (((undefined1 (*) [16])(iVar7 + 0x10U) <= pauVar8 &&
             (uVar5 < *(ushort *)(pauVar8[-1] + 4)))) {
        (*pauVar6)[*(ushort *)(*pauVar8 + 2)] = (*pauVar6)[*(ushort *)(*pauVar8 + 2)] ^ bVar11;
        (*pauVar6)[*(ushort *)(pauVar8[-1] + 0xe)] =
             (*pauVar6)[*(ushort *)(pauVar8[-1] + 0xe)] ^ bVar11;
        (*pauVar6)[*(ushort *)(pauVar8[-1] + 10)] =
             (*pauVar6)[*(ushort *)(pauVar8[-1] + 10)] ^ bVar11;
        (*pauVar6)[*(ushort *)(pauVar8[-1] + 6)] = (*pauVar6)[*(ushort *)(pauVar8[-1] + 6)] ^ bVar11
        ;
        pauVar8 = pauVar8 + -1;
      }
      uVar2 = *(ushort *)*pauVar8;
      while (uVar5 < uVar2) {
        (*pauVar6)[*(ushort *)(*pauVar8 + 2)] = (*pauVar6)[*(ushort *)(*pauVar8 + 2)] ^ bVar11;
        pauVar4 = pauVar8 + -1;
        pauVar8 = (undefined1 (*) [16])(pauVar8[-1] + 0xc);
        uVar2 = *(ushort *)(*pauVar4 + 0xc);
      }
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
    }
    *(undefined1 (**) [16])((int)local_9c + (int)local_20) = pauVar8;
    local_20 = (undefined1 (*) [16])((int)local_20 + 4);
    local_1c = (byte *)((int)local_1c + 0xc);
    bVar11 = bVar11 * '\x02';
  } while ((int)local_20 < 0xc);
  fVar16 = param_2[4];
  pvVar9 = TlsGetValue(DAT_01f8fc4c);
  local_2c = *(int *)((int)pvVar9 + 0xc);
  local_78 = (int)fVar16 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar9 + 8) < (int)local_78) ||
     (*(uint *)((int)pvVar9 + 0x10) < local_2c + local_78)) {
    local_2c = FUN_0100b780(local_78);
  }
  else {
    *(uint *)((int)pvVar9 + 0xc) = local_2c + local_78;
  }
  iVar7 = 0;
  if (0 < (int)param_2[4]) {
    do {
      *(undefined4 *)(local_2c + iVar7 * 4) = 0x3f800000;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_2[4]);
  }
  iVar7 = *(int *)(local_38 + 0xa0);
  pauVar8 = (undefined1 (*) [16])(*pauVar6 + (*(int *)(local_38 + 0xa4) >> 2) * 4 + 4);
  local_58 = pauVar8;
  local_18 = pauVar6;
  if (pauVar6 < pauVar8) {
    local_1c = (byte *)(iVar7 + 0x3c);
    local_20 = (undefined1 (*) [16])(iVar7 + 0x2c);
    local_28 = (byte *)(iVar7 + 0x1c);
    local_24 = (byte *)(iVar7 + 0xc);
    do {
      if ((*(int *)*local_18 + 0x1010101U & 0x8080808) == 0) {
        if ((*(int *)(*local_18 + 4) + 0x1010101U & 0x8080808) == 0) {
          if ((*(int *)(*local_18 + 8) + 0x1010101U & 0x8080808) == 0) {
            local_24 = local_24 + 0xc0;
            local_28 = local_28 + 0xc0;
            local_20 = (undefined1 (*) [16])((int)local_20 + 0xc0);
            local_1c = local_1c + 0xc0;
            local_18 = (undefined1 (*) [16])(*local_18 + 0xc);
          }
          else {
            local_24 = local_24 + 0x80;
            local_28 = local_28 + 0x80;
            local_20 = (undefined1 (*) [16])((int)local_20 + 0x80);
            local_1c = local_1c + 0x80;
            local_18 = (undefined1 (*) [16])(*local_18 + 8);
          }
        }
        else {
          local_24 = local_24 + 0x40;
          local_28 = local_28 + 0x40;
          local_20 = (undefined1 (*) [16])((int)local_20 + 0x40);
          local_1c = local_1c + 0x40;
          local_18 = (undefined1 (*) [16])(*local_18 + 4);
        }
      }
      else {
        if (((*local_18)[0] == 'w') && ((*local_24 & 1) == 0)) {
          iVar7 = 0;
          local_14 = param_3;
          if (0 < (int)param_2[4]) {
            do {
              local_3c = *(undefined1 (**) [16])(local_2c + iVar7 * 4);
              fVar15 = (float10)(**(code **)(*(int *)*local_14 + 4))(*(undefined4 *)local_24,iVar7);
              local_30 = (undefined1 (*) [16])(float)fVar15;
              pauVar8 = local_3c;
              if ((float)local_30 <= (float)local_3c) {
                pauVar8 = local_30;
              }
              local_14 = (undefined1 (*) [16])(*local_14 + param_4);
              *(undefined1 (**) [16])(local_2c + iVar7 * 4) = pauVar8;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)param_2[4]);
          }
        }
        if (((*local_18)[1] == 'w') && ((*local_28 & 1) == 0)) {
          iVar7 = 0;
          local_14 = param_3;
          if (0 < (int)param_2[4]) {
            do {
              local_54 = *(undefined1 (**) [16])(local_2c + iVar7 * 4);
              fVar15 = (float10)(**(code **)(*(int *)*local_14 + 4))(*(undefined4 *)local_28,iVar7);
              local_30 = (undefined1 (*) [16])(float)fVar15;
              pauVar8 = local_54;
              if ((float)local_30 <= (float)local_54) {
                pauVar8 = local_30;
              }
              local_14 = (undefined1 (*) [16])(*local_14 + param_4);
              *(undefined1 (**) [16])(local_2c + iVar7 * 4) = pauVar8;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)param_2[4]);
          }
        }
        if (((*local_18)[2] == 'w') && ((*(byte *)local_20 & 1) == 0)) {
          iVar7 = 0;
          local_14 = param_3;
          if (0 < (int)param_2[4]) {
            do {
              local_5c = *(undefined1 (**) [16])(local_2c + iVar7 * 4);
              fVar15 = (float10)(**(code **)(*(int *)*local_14 + 4))(*(undefined4 *)local_20,iVar7);
              local_30 = (undefined1 (*) [16])(float)fVar15;
              pauVar8 = local_5c;
              if ((float)local_30 <= (float)local_5c) {
                pauVar8 = local_30;
              }
              local_14 = (undefined1 (*) [16])(*local_14 + param_4);
              *(undefined1 (**) [16])(local_2c + iVar7 * 4) = pauVar8;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)param_2[4]);
          }
        }
        if (((*local_18)[3] == 'w') && ((*local_1c & 1) == 0)) {
          iVar7 = 0;
          local_14 = param_3;
          if (0 < (int)param_2[4]) {
            do {
              local_60 = *(undefined1 (**) [16])(local_2c + iVar7 * 4);
              fVar15 = (float10)(**(code **)(*(int *)*local_14 + 4))(*(undefined4 *)local_1c,iVar7);
              local_30 = (undefined1 (*) [16])(float)fVar15;
              pauVar8 = local_60;
              if ((float)local_30 <= (float)local_60) {
                pauVar8 = local_30;
              }
              local_14 = (undefined1 (*) [16])(*local_14 + param_4);
              *(undefined1 (**) [16])(local_2c + iVar7 * 4) = pauVar8;
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)param_2[4]);
          }
        }
        local_24 = local_24 + 0x40;
        local_28 = local_28 + 0x40;
        local_20 = (undefined1 (*) [16])((int)local_20 + 0x40);
        local_1c = local_1c + 0x40;
        local_18 = (undefined1 (*) [16])(*local_18 + 4);
        pauVar8 = local_58;
      }
    } while (local_18 < pauVar8);
  }
  (*pauVar6)[0] = 0x88;
  local_20 = param_3;
  local_30 = (undefined1 (*) [16])*(int *)(local_38 + 0xa4);
  local_1c = (byte *)0x0;
  if ((int)param_2[4] < 1) {
LAB_01147538:
    pvVar9 = TlsGetValue(DAT_01f8fc4c);
    uVar5 = local_78 + 0xf & 0xfffffff0;
    if (((*(int *)((int)pvVar9 + 8) < (int)local_78) ||
        (uVar5 + local_2c != *(int *)((int)pvVar9 + 0xc))) ||
       (*(int *)((int)pvVar9 + 0x14) == local_2c)) {
      FUN_0100b9b0(local_2c,uVar5);
    }
    else {
      *(int *)((int)pvVar9 + 0xc) = local_2c;
    }
    if (-1 < (int)local_64) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(pauVar6,local_64 & 0x3fffffff);
    }
    return;
  }
  local_58 = (undefined1 (*) [16])((int)&local_f0 - (int)param_2);
  local_60 = (undefined1 (*) [16])(local_90 + -(int)param_2);
  local_5c = (undefined1 (*) [16])((int)local_dc - (int)param_2);
  local_54 = (undefined1 (*) [16])((int)local_70 - (int)param_2);
  local_28 = (byte *)((int)local_c0 - (int)param_2);
  local_24 = (byte *)((int)local_b0 - (int)param_2);
LAB_01147238:
  local_70[0] = local_9c[0];
  local_70[1] = local_9c[1];
  local_70[2] = local_9c[2];
  pauVar8 = (undefined1 (*) [16])((int)param_2[6] * (int)local_1c + (int)param_2[5]);
  local_14 = *(undefined1 (**) [16])(local_2c + (int)local_1c * 4);
  _local_90 = *pauVar8;
  auVar18 = _local_90;
  local_90._0_4_ = (undefined4)*(undefined8 *)*pauVar8;
  local_90._4_4_ = (undefined4)((ulonglong)*(undefined8 *)*pauVar8 >> 0x20);
  fStack_88 = (float)*(undefined8 *)(*pauVar8 + 8);
  fStack_84 = (float)((ulonglong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
  local_f0 = (float)local_90._0_4_ - *param_2;
  fStack_ec = (float)local_90._4_4_ - param_2[1];
  fStack_e8 = fStack_88 - param_2[2];
  fStack_e4 = fStack_84 - param_2[3];
  pfVar12 = (float *)(local_38 + 0x60);
  local_18 = (undefined1 (*) [16])0x3;
  pfVar10 = param_2;
  do {
    fVar17 = *(float *)(*local_58 + (int)pfVar10) * *pfVar12;
    local_d0 = ABS(fVar17);
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    fVar16 = (pfVar12[-8] + *pfVar10) * *pfVar12;
    if ((local_d0 < fVar16 * 1.1920929e-07) ||
       (local_d0 < (*(float *)(*local_60 + (int)pfVar10) + pfVar12[-8]) * *pfVar12 * 1.1920929e-07))
    {
      fVar16 = -2.0;
      pbVar1 = local_28 + (int)pfVar10;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
    }
    else {
      *(undefined4 *)(*local_5c + (int)pfVar10) = 4;
      if (fVar17 < 0.0) {
        *(undefined4 *)(*local_5c + (int)pfVar10) = 0xfffffffc;
        *(int *)(*local_54 + (int)pfVar10) = *(int *)(*local_54 + (int)pfVar10) + -4;
      }
      *(float *)(local_28 + (int)pfVar10) = 1.0 / fVar17;
      fVar16 = (fVar16 - *(float *)(local_38 + 0xdc)) * (1.0 / fVar17);
    }
    *(float *)(local_24 + (int)pfVar10) = fVar16;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
    local_18 = (undefined1 (*) [16])((int)local_18 + -1);
  } while (local_18 != (undefined1 (*) [16])0x0);
  local_50[0] = (float)*local_9c[0] * local_c0[0] - local_b0[0];
  local_50[1] = (float)*local_9c[1] * local_c0[1] - local_b0[1];
  local_50[2] = (float)*local_9c[2] * local_c0[2] - local_b0[2];
  _local_90 = auVar18;
  do {
    if (local_50[1] <= local_50[0]) {
      if (local_50[2] <= local_50[1]) goto LAB_011473fd;
      pauVar8 = (undefined1 (*) [16])0x1;
      fVar16 = local_50[1];
    }
    else if (local_50[2] <= local_50[0]) {
LAB_011473fd:
      pauVar8 = (undefined1 (*) [16])0x2;
      fVar16 = local_50[2];
    }
    else {
      pauVar8 = (undefined1 (*) [16])0x0;
      fVar16 = local_50[0];
    }
    local_18 = pauVar8;
    if ((float)local_14 < fVar16) break;
    local_31 = '\x01' << (char)pauVar8 + 4;
    do {
      puVar14 = local_70[(int)pauVar8];
      uVar5 = (uint)puVar14[1];
      (*pauVar6)[uVar5] = (*pauVar6)[uVar5] ^ local_31;
      if (0x6f < (byte)(*pauVar6)[uVar5]) {
        if (uVar5 == 0) {
          fVar16 = 2.0;
          goto LAB_011474ba;
        }
        uVar5 = *(uint *)(uVar5 * 0x10 + *(int *)(local_38 + 0xa0) + 0xc);
        if ((uVar5 & 1) == 0) {
          fVar15 = (float10)(**(code **)(*(int *)*local_20 + 4))(uVar5,local_1c);
          local_3c = (undefined1 (*) [16])(float)fVar15;
          if (fVar15 <= (float10)(float)local_14) {
            local_14 = (undefined1 (*) [16])(float)fVar15;
          }
        }
      }
      pauVar8 = local_18;
      uVar2 = *puVar14;
      puVar14 = (ushort *)((int)puVar14 + local_dc[(int)local_18]);
      local_70[(int)local_18] = puVar14;
    } while (uVar2 == *puVar14);
    fVar16 = (float)*puVar14 * local_c0[(int)pauVar8] - local_b0[(int)pauVar8];
    local_18 = pauVar8;
LAB_011474ba:
    local_50[(int)local_18] = fVar16;
  } while( true );
  if ((int)local_1c < (int)param_2[4] + -1) {
    local_3c = (undefined1 (*) [16])(*pauVar6 + ((int)local_30 >> 2) * 4 + 4);
    for (pauVar8 = pauVar6; pauVar8 < (undefined1 (*) [16])(*pauVar6 + ((int)local_30 >> 2) * 4 + 4)
        ; pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8)) {
      uVar5 = *(uint *)*pauVar8 & 0xf0f0f0f;
      uVar13 = *(uint *)(*pauVar8 + 4) & 0xf0f0f0f;
      *(uint *)*pauVar8 = uVar5 << 4 | uVar5;
      *(uint *)(*pauVar8 + 4) = uVar13 << 4 | uVar13;
    }
  }
  local_20 = (undefined1 (*) [16])(*local_20 + param_4);
  local_1c = (byte *)((int)local_1c + 1);
  if ((int)param_2[4] <= (int)local_1c) goto LAB_01147538;
  goto LAB_01147238;
}

// 011475A0  hkp3AxisSweep::vf74  size=2451  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkp3AxisSweep::vf74(int param_1,float *param_2,int *param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  ushort *puVar17;
  float10 fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_130 [4];
  float local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint auStack_10c [3];
  float local_100 [6];
  byte abStack_e8 [12];
  int aiStack_dc [3];
  float local_d0 [7];
  int *local_b4;
  float local_b0 [5];
  ushort *apuStack_9c [6];
  uint local_84;
  ushort *local_80 [3];
  uint local_74;
  float local_70 [4];
  float local_60 [3];
  uint local_54;
  int local_50;
  ushort *local_4c [3];
  float local_40 [3];
  uint local_34;
  byte local_25;
  float *local_24;
  float *local_20;
  ushort *local_1c;
  uint local_18;
  float *local_14;
  
  local_50 = param_1;
  local_100[0] = *param_2 + param_2[8];
  local_100[1] = param_2[1] + param_2[9];
  local_100[2] = param_2[2] + param_2[10];
  local_100[3] = param_2[3] + param_2[0xb];
  local_b0[4] = *param_2 - param_2[8];
  apuStack_9c[0] = (ushort *)(param_2[1] - param_2[9]);
  apuStack_9c[1] = (ushort *)(param_2[2] - param_2[10]);
  apuStack_9c[2] = (ushort *)(param_2[3] - param_2[0xb]);
  auVar21._0_4_ = (*(float *)(param_1 + 0x40) + local_b0[4]) * *(float *)(param_1 + 0x60);
  auVar21._4_4_ = (*(float *)(param_1 + 0x44) + (float)apuStack_9c[0]) * *(float *)(param_1 + 100);
  auVar21._8_4_ = (*(float *)(param_1 + 0x48) + (float)apuStack_9c[1]) * *(float *)(param_1 + 0x68);
  auVar21._12_4_ = (*(float *)(param_1 + 0x4c) + (float)apuStack_9c[2]) * *(float *)(param_1 + 0x6c)
  ;
  auVar20 = minps(auVar21,_DAT_01b214d0);
  auVar21 = maxps(auVar20,ZEXT816(0));
  local_60[0] = (float)((uint)(auVar21._0_4_ + _DAT_01b214e0) >> 7 & 0xffff);
  auVar20._0_4_ = (*(float *)(param_1 + 0x40) + local_100[0]) * *(float *)(param_1 + 0x60);
  auVar20._4_4_ = (*(float *)(param_1 + 0x44) + local_100[1]) * *(float *)(param_1 + 100);
  auVar20._8_4_ = (*(float *)(param_1 + 0x48) + local_100[2]) * *(float *)(param_1 + 0x68);
  auVar20._12_4_ = (*(float *)(param_1 + 0x4c) + local_100[3]) * *(float *)(param_1 + 0x6c);
  auVar20 = minps(auVar20,_DAT_01b214d0);
  local_54 = (uint)(auVar21._12_4_ + fRam01b214ec) >> 7 & 0xffff;
  auVar20 = maxps(auVar20,ZEXT816(0));
  local_70[0] = auVar20._0_4_ + _DAT_01b214e0;
  local_70[1] = auVar20._4_4_ + fRam01b214e4;
  local_70[2] = auVar20._8_4_ + fRam01b214e8;
  local_70[3] = auVar20._12_4_ + fRam01b214ec;
  local_60[1] = (float)((uint)(auVar21._4_4_ + fRam01b214e4) >> 7 & 0xffff);
  local_60[2] = (float)((uint)(auVar21._8_4_ + fRam01b214e8) >> 7 & 0xffff);
  local_40[0] = (float)((uint)local_70[0] >> 7 & 0xffff);
  local_34 = (uint)local_70[3] >> 7 & 0xffff;
  uVar13 = *(int *)(param_1 + 0xa4) + 0x10;
  local_b0[0] = 0.0;
  local_b0[1] = 0.0;
  local_b0[2] = 0.0;
  local_b0[3] = 0.0;
  local_40[1] = (float)((uint)local_70[1] >> 7 & 0xffff);
  local_40[2] = (float)((uint)local_70[2] >> 7 & 0xffff);
  if (uVar13 == 0) {
    pfVar14 = (float *)0x0;
LAB_011476c8:
    local_74 = 0x80000000;
  }
  else {
    local_84 = uVar13;
    pfVar14 = (float *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_84);
    local_74 = local_84;
    if (local_84 == 0) goto LAB_011476c8;
  }
  pfVar16 = pfVar14;
  for (iVar15 = *(int *)(param_1 + 0xa4) >> 4; -1 < iVar15; iVar15 = iVar15 + -1) {
    *pfVar16 = local_b0[0];
    pfVar16[1] = local_b0[1];
    pfVar16[2] = local_b0[2];
    pfVar16[3] = local_b0[3];
    pfVar16 = pfVar16 + 4;
  }
  local_20 = (float *)param_2[0xc];
  if (local_20 == (float *)0x0) {
    local_20 = (float *)(param_1 + 0xac);
  }
  bVar12 = 1;
  local_14 = (float *)0x0;
  do {
    pfVar16 = local_14;
    local_24 = (float *)local_20[1];
    iVar15 = (int)*local_20;
    local_1c = (ushort *)iVar15;
    local_18 = *(uint *)((int)local_60 + (int)local_14);
    if (local_18 < *(ushort *)(iVar15 + ((int)local_24 >> 1) * 4)) {
      local_24 = (float *)(iVar15 + -0x10 + (int)local_24 * 4);
      for (puVar17 = (ushort *)(iVar15 + 4); (puVar17 < local_24 && (puVar17[6] <= local_18));
          puVar17 = puVar17 + 8) {
        *(byte *)((uint)puVar17[1] + (int)pfVar14) =
             *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ bVar12;
        *(byte *)((uint)puVar17[3] + (int)pfVar14) =
             *(byte *)((uint)puVar17[3] + (int)pfVar14) ^ bVar12;
        *(byte *)((uint)puVar17[5] + (int)pfVar14) =
             *(byte *)((uint)puVar17[5] + (int)pfVar14) ^ bVar12;
        *(byte *)((uint)puVar17[7] + (int)pfVar14) =
             *(byte *)((uint)puVar17[7] + (int)pfVar14) ^ bVar12;
      }
      uVar8 = *puVar17;
      while (uVar8 <= local_18) {
        *(byte *)((uint)puVar17[1] + (int)pfVar14) =
             *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ bVar12;
        puVar1 = puVar17 + 2;
        puVar17 = puVar17 + 2;
        uVar8 = *puVar1;
      }
      uVar8 = *puVar17;
      *(ushort **)((int)local_4c + (int)local_14) = puVar17;
      local_24 = *(float **)((int)local_40 + (int)pfVar16);
      while ((uint)uVar8 <= local_24) {
        *(byte *)((uint)puVar17[1] + (int)pfVar14) =
             *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ ((byte)*puVar17 & 1) - 1 & bVar12;
        puVar1 = puVar17 + 2;
        puVar17 = puVar17 + 2;
        uVar8 = *puVar1;
      }
      *(ushort **)((int)local_80 + (int)local_14) = puVar17;
    }
    else {
      local_1c = (ushort *)(iVar15 + 0x10);
      puVar17 = (ushort *)(iVar15 + -8 + (int)local_24 * 4);
      if (local_1c <= puVar17) {
        uVar13 = *(uint *)((int)local_40 + (int)local_14);
        do {
          if (puVar17[-6] <= uVar13) break;
          *(byte *)((uint)puVar17[1] + (int)pfVar14) =
               *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ bVar12;
          *(byte *)((uint)puVar17[-1] + (int)pfVar14) =
               *(byte *)((uint)puVar17[-1] + (int)pfVar14) ^ bVar12;
          *(byte *)((uint)puVar17[-3] + (int)pfVar14) =
               *(byte *)((uint)puVar17[-3] + (int)pfVar14) ^ bVar12;
          *(byte *)((uint)puVar17[-5] + (int)pfVar14) =
               *(byte *)((uint)puVar17[-5] + (int)pfVar14) ^ bVar12;
          puVar17 = puVar17 + -8;
        } while (local_1c <= puVar17);
      }
      uVar13 = *(uint *)((int)local_40 + (int)local_14);
      uVar8 = *puVar17;
      while (uVar13 < uVar8) {
        *(byte *)((uint)puVar17[1] + (int)pfVar14) =
             *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ bVar12;
        puVar1 = puVar17 + -2;
        puVar17 = puVar17 + -2;
        uVar8 = *puVar1;
      }
      *(ushort **)((int)local_80 + (int)local_14) = puVar17 + 2;
      uVar8 = *puVar17;
      while (local_18 < uVar8) {
        *(byte *)((uint)puVar17[1] + (int)pfVar14) =
             *(byte *)((uint)puVar17[1] + (int)pfVar14) ^ -((byte)*puVar17 & 1) & bVar12;
        puVar1 = puVar17 + -2;
        puVar17 = puVar17 + -2;
        uVar8 = *puVar1;
      }
      *(ushort **)((int)local_4c + (int)local_14) = puVar17 + 2;
    }
    local_14 = (float *)((int)local_14 + 4);
    local_20 = local_20 + 3;
    bVar12 = bVar12 * '\x02';
  } while ((int)local_14 < 0xc);
  local_1c = (ushort *)0x3f800000;
  local_24 = pfVar14 + (*(int *)(local_50 + 0xa4) >> 2) + 1;
  if (pfVar14 < pfVar14 + (*(int *)(local_50 + 0xa4) >> 2) + 1) {
    local_14 = (float *)(*(int *)(local_50 + 0xa0) + 0x1c);
    pfVar16 = pfVar14;
    do {
      if (((int)*pfVar16 + 0x1010101U & 0x8080808) != 0) {
        if ((*(char *)pfVar16 == '\a') && (((uint)local_14[-4] & 1) == 0)) {
          fVar18 = (float10)(**(code **)(*param_3 + 4))(local_14[-4],0);
          local_20 = (float *)(float)fVar18;
          if (fVar18 <= (float10)(float)local_1c) {
            local_1c = (ushort *)(float)fVar18;
          }
        }
        if ((*(char *)((int)pfVar16 + 1) == '\a') && (((uint)*local_14 & 1) == 0)) {
          fVar18 = (float10)(**(code **)(*param_3 + 4))(*local_14,0);
          local_20 = (float *)(float)fVar18;
          if (fVar18 <= (float10)(float)local_1c) {
            local_1c = (ushort *)(float)fVar18;
          }
        }
        if ((*(char *)((int)pfVar16 + 2) == '\a') && (((uint)local_14[4] & 1) == 0)) {
          fVar18 = (float10)(**(code **)(*param_3 + 4))(local_14[4],0);
          local_20 = (float *)(float)fVar18;
          if (fVar18 <= (float10)(float)local_1c) {
            local_1c = (ushort *)(float)fVar18;
          }
        }
        if ((*(char *)((int)pfVar16 + 3) == '\a') && (((uint)local_14[8] & 1) == 0)) {
          fVar18 = (float10)(**(code **)(*param_3 + 4))(local_14[8],0);
          local_20 = (float *)(float)fVar18;
          if (fVar18 <= (float10)(float)local_1c) {
            local_1c = (ushort *)(float)fVar18;
          }
        }
      }
      local_14 = local_14 + 0x10;
      pfVar16 = pfVar16 + 1;
    } while (pfVar16 < local_24);
  }
  local_130[3] = param_2[7] - param_2[3];
  local_14 = param_2 + 4;
  local_130[0] = param_2[4] - *param_2;
  local_130[1] = param_2[5] - param_2[1];
  local_130[2] = param_2[6] - param_2[2];
  pfVar16 = (float *)(local_50 + 0x60);
  iVar15 = 0;
  do {
    fVar19 = *(float *)((int)local_130 + iVar15) * *pfVar16;
    local_120 = ABS(fVar19);
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    if (fVar19 <= 0.0) {
      uVar9 = *(undefined4 *)((int)local_4c + iVar15);
      uVar10 = *(undefined4 *)((int)local_80 + iVar15);
      uVar3 = *(undefined4 *)((int)local_b0 + iVar15 + 0x10);
      *(undefined4 *)((int)local_b0 + iVar15 + 0x10) = *(undefined4 *)((int)local_100 + iVar15);
      *(undefined4 *)((int)local_80 + iVar15) = uVar9;
      *(undefined4 *)((int)local_4c + iVar15) = uVar10;
      uVar9 = *(undefined4 *)((int)local_40 + iVar15);
      *(undefined4 *)((int)local_40 + iVar15) = *(undefined4 *)((int)local_60 + iVar15);
      *(int *)((int)local_4c + iVar15) = *(int *)((int)local_4c + iVar15) + -4;
      *(int *)((int)local_80 + iVar15) = *(int *)((int)local_80 + iVar15) + -4;
      *(undefined4 *)((int)aiStack_dc + iVar15) = 0xfffffffc;
      *(undefined4 *)((int)local_100 + iVar15) = uVar3;
      *(undefined4 *)((int)local_60 + iVar15) = uVar9;
      pbVar2 = abStack_e8 + iVar15;
      pbVar2[0] = 1;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      *(undefined4 *)((int)auStack_10c + iVar15) = 0;
    }
    else {
      *(undefined4 *)((int)aiStack_dc + iVar15) = 4;
      pbVar2 = abStack_e8 + iVar15;
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      *(undefined4 *)((int)auStack_10c + iVar15) = 1;
    }
    fVar4 = *(float *)((int)local_b0 + iVar15 + 0x10);
    if ((local_120 < (pfVar16[-8] + fVar4) * *pfVar16 * 1.1920929e-07) ||
       (local_120 < (pfVar16[-8] + *local_14) * *pfVar16 * 1.1920929e-07)) {
      *(undefined4 *)((int)local_d0 + iVar15) = 0;
      *(undefined4 *)((int)local_70 + iVar15) = 0xc0000000;
      *(undefined4 *)((int)local_b0 + iVar15) = 0xc0000000;
    }
    else {
      fVar5 = pfVar16[-8];
      fVar6 = *(float *)(local_50 + 0xdc);
      fVar19 = 1.0 / fVar19;
      fVar7 = *pfVar16;
      *(float *)((int)local_d0 + iVar15) = fVar19;
      *(float *)((int)local_70 + iVar15) = ((fVar5 + fVar4) * fVar7 - fVar6) * fVar19;
      *(float *)((int)local_b0 + iVar15) =
           ((fVar5 + *(float *)((int)local_100 + iVar15)) * fVar7 - fVar6) * fVar19;
    }
    local_14 = local_14 + 1;
    iVar15 = iVar15 + 4;
    pfVar16 = pfVar16 + 1;
  } while (iVar15 < 0xc);
  apuStack_9c[0] = local_4c[0];
  apuStack_9c[1] = local_4c[1];
  local_40[0] = (float)*local_4c[0] * local_d0[0] - local_70[0];
  apuStack_9c[2] = local_4c[2];
  local_40[1] = (float)*local_4c[1] * local_d0[1] - local_70[1];
  local_4c[0] = local_80[0];
  local_40[2] = (float)*local_4c[2] * local_d0[2] - local_70[2];
  local_4c[1] = local_80[1];
  local_60[0] = (float)*local_80[0] * local_d0[0] - local_b0[0];
  local_60[1] = (float)*local_80[1] * local_d0[1] - local_b0[1];
  local_60[2] = (float)*local_80[2] * local_d0[2] - local_b0[2];
  local_4c[2] = local_80[2];
  *(char *)pfVar14 = '\b';
  if (local_40[1] <= local_40[0]) {
    local_18 = 1;
    if (local_40[1] < local_40[2]) goto LAB_01147c85;
  }
  else if (local_40[0] < local_40[2]) {
    local_18 = 0;
    goto LAB_01147c85;
  }
  local_18 = 2;
LAB_01147c85:
  if (local_60[1] <= local_60[0]) {
    local_14 = (float *)0x1;
    if (local_60[2] <= local_60[1]) goto LAB_01147ca7;
  }
  else {
    if (local_60[2] <= local_60[0]) goto LAB_01147ca7;
    local_14 = (float *)0x0;
  }
LAB_01147cb0:
  local_20 = local_60 + (int)local_14;
  local_24 = local_40 + local_18;
  if (local_40[local_18] <= local_60[(int)local_14]) {
    if ((float)local_1c < local_40[local_18]) goto LAB_01147f06;
    local_25 = abStack_e8[local_18 * 4];
    uVar13 = local_18;
    do {
      uVar11 = local_18;
      puVar17 = apuStack_9c[uVar13];
      uVar8 = puVar17[1];
      pbVar2 = (byte *)((int)pfVar14 + (uint)uVar8);
      *pbVar2 = *pbVar2 ^ ((byte)*puVar17 & 1 ^ local_25) << ((byte)local_18 & 0x1f);
      if (8 < *(byte *)((int)pfVar14 + (uint)uVar8)) {
        *local_24 = 2.0;
        if (local_40[0] < local_40[1]) goto LAB_01147e99;
        if (local_40[2] <= local_40[1]) goto LAB_01147ef9;
        local_18 = 1;
        goto LAB_01147cb0;
      }
      uVar8 = *puVar17;
      puVar17 = (ushort *)((int)puVar17 + aiStack_dc[local_18]);
      apuStack_9c[local_18] = puVar17;
      uVar13 = uVar11;
    } while (uVar8 == *puVar17);
    *local_24 = (float)*puVar17 * local_d0[uVar11] - local_70[uVar11];
    if (local_40[1] <= local_40[0]) {
      if (local_40[1] < local_40[2]) {
        local_18 = 1;
        goto LAB_01147cb0;
      }
    }
    else {
LAB_01147e99:
      if (local_40[0] < local_40[2]) {
        local_18 = 0;
        goto LAB_01147cb0;
      }
    }
LAB_01147ef9:
    local_18 = 2;
    goto LAB_01147cb0;
  }
  if ((float)local_1c < local_60[(int)local_14]) {
LAB_01147f06:
    if ((local_74 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(pfVar14,local_74 & 0x3fffffff);
    }
    return;
  }
  local_24 = (float *)auStack_10c[(int)local_14];
  do {
    uVar13 = (uint)local_4c[(int)local_14][1];
    iVar15 = (*local_4c[(int)local_14] & 1 ^ (uint)local_24) << ((byte)local_14 & 0x1f);
    *(byte *)((int)pfVar14 + uVar13) = *(byte *)((int)pfVar14 + uVar13) ^ (byte)iVar15;
    if (6 < *(byte *)((int)pfVar14 + uVar13)) {
      if (uVar13 == 0) {
        *local_20 = 2.0;
        if (local_60[0] < local_60[1]) goto LAB_01147da9;
        if (local_60[2] <= local_60[1]) goto LAB_01147ca7;
        local_14 = (float *)0x1;
        goto LAB_01147cb0;
      }
      if ((iVar15 != 0) &&
         (uVar13 = *(uint *)(uVar13 * 0x10 + *(int *)(local_50 + 0xa0) + 0xc), (uVar13 & 1) == 0)) {
        fVar18 = (float10)(**(code **)(*param_3 + 4))(uVar13,0);
        local_b4 = (int *)(float)fVar18;
        if (fVar18 <= (float10)(float)local_1c) {
          local_1c = (ushort *)(float)fVar18;
        }
      }
    }
    pfVar16 = local_14;
    uVar8 = *local_4c[(int)local_14];
    puVar17 = (ushort *)((int)local_4c[(int)local_14] + aiStack_dc[(int)local_14]);
    local_4c[(int)local_14] = puVar17;
  } while (uVar8 == *puVar17);
  *local_20 = (float)*puVar17 * local_d0[(int)pfVar16] - local_b0[(int)pfVar16];
  if (local_60[1] <= local_60[0]) {
    if (local_60[1] < local_60[2]) {
      local_14 = (float *)0x1;
      goto LAB_01147cb0;
    }
  }
  else {
LAB_01147da9:
    if (local_60[0] < local_60[2]) {
      local_14 = (float *)0x0;
      goto LAB_01147cb0;
    }
  }
LAB_01147ca7:
  local_14 = (float *)0x2;
  goto LAB_01147cb0;
}

// 01147F40  hkp3AxisSweep::vf58  size=3043  [run]
void hkp3AxisSweep::vf58(ulonglong *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  int *piVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ushort *puVar23;
  float10 extraout_ST0;
  undefined8 uVar24;
  uint auStack_68 [5];
  float fStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  int iStack_44;
  uint local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_50 = *param_1;
  uStack_48 = (undefined4)param_1[1];
  iStack_44 = *(undefined4 *)((int)param_1 + 0xc);
  iVar19 = 0;
  do {
    uVar24 = FUN_00fdbc96();
    auStack_68[iVar19 * 2] = (uint)uVar24 & 0xfffffffe;
    auStack_68[iVar19 * 2 + 1] = (uint)((ulonglong)uVar24 >> 0x20);
    iVar15 = iVar19 * 2;
    iVar19 = iVar19 + 1;
    (&fStack_54)[iVar19] = (float)((float10)*(longlong *)(auStack_68 + iVar15) / extraout_ST0);
  } while (iVar19 < 3);
  *param_2 = (undefined4)local_50;
  param_2[1] = local_50._4_4_;
  param_2[2] = uStack_48;
  param_2[3] = iStack_44;
  local_50 = local_50 & 0xffffffff;
  uStack_48 = 0;
  iStack_44 = -0x80000000;
  local_28 = 0;
  iVar19 = local_1c;
  do {
    local_38 = (int *)(iVar19 + 0xac + local_28 * 0xc);
    local_3c = auStack_68[local_28 * 2];
    if ((int)auStack_68[local_28 * 2] < 0) {
      local_34 = 1;
      iVar15 = local_38[1] + -1;
      local_30 = 1;
    }
    else {
      local_34 = local_38[1] + -2;
      iVar15 = 0;
      local_30 = -1;
    }
    local_24 = iVar15;
    if (local_34 != iVar15) {
      do {
        puVar23 = (ushort *)(*local_38 + local_34 * 4);
        uVar12 = (uint)*puVar23;
        if (uVar12 - 2 < 0xfffa) {
          puVar8 = (ushort *)((uint)puVar23[1] * 0x10 + *(int *)(iVar19 + 0xa0));
          uVar16 = uVar12 & 1;
          uVar13 = uVar12 + local_3c & 0xfffffffe | uVar16;
          uVar12 = uVar16;
          if ((-1 < (int)uVar13) && (uVar12 = uVar13, 0xfffb < (int)uVar13)) {
            uVar12 = uVar16 | 0xfffc;
          }
          *puVar23 = (ushort)uVar12;
          if ((uVar12 == 0) || (iVar15 = local_24, uVar12 == 0xfffd)) {
            uVar1 = *(ushort *)(*(int *)(local_1c + 0xac) + (uint)puVar8[4] * 4);
            uVar20 = (uint)uVar1;
            uVar7 = *(ushort *)(*(int *)(local_1c + 0xb8) + (uint)*puVar8 * 4);
            uVar21 = (uint)uVar7;
            uVar2 = *(ushort *)(*(int *)(local_1c + 0xc4) + (uint)puVar8[1] * 4);
            uVar22 = (uint)uVar2;
            uVar6 = *(ushort *)(*(int *)(local_1c + 0xac) + (uint)puVar8[5] * 4);
            uVar12 = (uint)uVar6;
            uVar3 = *(ushort *)(*(int *)(local_1c + 0xb8) + (uint)puVar8[2] * 4);
            uVar13 = (uint)uVar3;
            uVar4 = *(ushort *)(*(int *)(local_1c + 0xc4) + (uint)puVar8[3] * 4);
            uVar16 = (uint)uVar4;
            local_14 = **(uint **)(puVar8 + 6);
            puVar8 = (ushort *)(**(uint **)(puVar8 + 6) * 0x10 + *(int *)(local_1c + 0xa0));
            local_18 = *(int *)(local_1c + 0xa0);
            local_20 = (uint)puVar8[4];
            puVar23 = (ushort *)(*(int *)(local_1c + 0xac) + local_20 * 4);
            uVar11 = puVar23[-2];
            while (uVar14 = (ushort)local_20, uVar20 < uVar11) {
              piVar9 = (int *)((uint)puVar23[-1] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              if ((uVar11 & 1) == 0) {
                *(ushort *)(piVar9 + 2) = uVar14;
              }
              else {
                iVar19 = *(int *)(puVar8 + 2);
                iVar15 = *(int *)puVar8;
                *(ushort *)((int)piVar9 + 10) = uVar14;
                if (((iVar19 - *piVar9 | piVar9[1] - iVar15) & 0x80008000U) == 0) {
                  FUN_01142740(local_14,piVar9,param_3);
                }
              }
              local_20 = local_20 - 1;
              uVar11 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            uVar11 = puVar23[-2];
            while (uVar20 == uVar11) {
              uVar14 = (ushort)local_20;
              if (puVar23[-1] <= local_14) break;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              *(ushort *)(local_18 + 8 + (uint)puVar23[-1] * 0x10) = uVar14;
              local_20 = local_20 - 1;
              uVar14 = (ushort)local_20;
              uVar11 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar1;
            puVar8[4] = uVar14;
            local_20 = (uint)puVar8[5];
            uVar11 = *(ushort *)(*(int *)(local_1c + 0xac) + 4 + local_20 * 4);
            puVar23 = (ushort *)(*(int *)(local_1c + 0xac) + local_20 * 4);
            while (uVar11 < uVar12) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              piVar9 = (int *)((uint)puVar23[3] * 0x10 + local_18);
              if ((uVar11 & 1) == 0) {
                iVar19 = *(int *)(puVar8 + 2);
                iVar15 = *(int *)puVar8;
                *(short *)(piVar9 + 2) = (short)piVar9[2] + -1;
                if (((piVar9[1] - iVar15 | iVar19 - *piVar9) & 0x80008000U) == 0) {
                  FUN_01142740(local_14,piVar9,param_3);
                }
              }
              else {
                *(short *)((int)piVar9 + 10) = *(short *)((int)piVar9 + 10) + -1;
              }
              uVar11 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            uVar11 = puVar23[2];
            for (; ((uVar12 == uVar11 && (uVar10 = (uint)puVar23[3], uVar10 < local_14)) &&
                   (uVar10 != 0)); puVar23 = puVar23 + 2) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)(local_18 + 10 + uVar10 * 0x10);
              *psVar18 = *psVar18 + -1;
              uVar11 = puVar23[4];
            }
            uVar11 = puVar23[-2];
            while (local_2c = (uint)uVar11, uVar12 < local_2c) {
              local_20 = local_20 - 1;
              piVar9 = (int *)((uint)puVar23[-1] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              if ((uVar11 & 1) == 0) {
                iVar19 = *(int *)(puVar8 + 2);
                iVar15 = *(int *)puVar8;
                *(short *)(piVar9 + 2) = (short)piVar9[2] + 1;
                if (((iVar19 - *piVar9 | piVar9[1] - iVar15) & 0x80008000U) == 0) {
                  FUN_011427d0(local_14,piVar9,(int)&local_50 + 4);
                }
              }
              else {
                *(short *)((int)piVar9 + 10) = *(short *)((int)piVar9 + 10) + 1;
              }
              uVar11 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            uVar11 = puVar23[-2];
            while (uVar12 == uVar11) {
              if (puVar23[-1] <= local_14) break;
              local_20 = local_20 - 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              psVar18 = (short *)(local_18 + 10 + (uint)puVar23[-1] * 0x10);
              *psVar18 = *psVar18 + 1;
              puVar17 = puVar23 + -4;
              puVar23 = puVar23 + -2;
              uVar11 = *puVar17;
            }
            puVar8[5] = (ushort)local_20;
            *puVar23 = uVar6;
            puVar23[1] = (ushort)local_14;
            local_2c = (uint)puVar8[4];
            uVar6 = *(ushort *)(*(int *)(local_1c + 0xac) + 4 + local_2c * 4);
            puVar23 = (ushort *)(*(int *)(local_1c + 0xac) + local_2c * 4);
            while (local_20 = (uint)uVar6, local_20 < uVar20) {
              piVar9 = (int *)((uint)puVar23[3] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              local_2c = local_2c + 1;
              if ((uVar6 & 1) == 0) {
                *(short *)(piVar9 + 2) = (short)piVar9[2] + -1;
              }
              else {
                iVar19 = *(int *)(puVar8 + 2);
                iVar15 = *(int *)puVar8;
                *(short *)((int)piVar9 + 10) = *(short *)((int)piVar9 + 10) + -1;
                if (((iVar19 - *piVar9 | piVar9[1] - iVar15) & 0x80008000U) == 0) {
                  FUN_011427d0(local_14,piVar9,(int)&local_50 + 4);
                }
              }
              uVar6 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            uVar11 = (ushort)local_2c;
            uVar6 = puVar23[2];
            while (uVar20 == uVar6) {
              uVar11 = (ushort)local_2c;
              if (local_14 <= puVar23[3]) break;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)(local_18 + 8 + (uint)puVar23[3] * 0x10);
              *psVar18 = *psVar18 + -1;
              local_2c = local_2c + 1;
              uVar11 = (ushort)local_2c;
              uVar6 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            puVar8[4] = uVar11;
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar1;
            local_20 = (uint)*puVar8;
            uVar1 = *(ushort *)(*(int *)(local_1c + 0xb8) + -4 + local_20 * 4);
            puVar23 = (ushort *)(*(int *)(local_1c + 0xb8) + local_20 * 4);
            while( true ) {
              local_2c = (uint)uVar1;
              uVar6 = (ushort)local_20;
              if (local_2c <= uVar21) break;
              puVar17 = (ushort *)((uint)puVar23[-1] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              if ((uVar1 & 1) == 0) {
                *puVar17 = uVar6;
              }
              else {
                uVar1 = puVar8[3];
                uVar11 = puVar8[1];
                uVar14 = puVar8[5];
                uVar5 = puVar8[4];
                puVar17[2] = uVar6;
                if (((puVar17[3] - uVar11 | uVar1 - puVar17[1] | uVar14 - puVar17[4] |
                     puVar17[5] - uVar5) & 0x8000) == 0) {
                  FUN_011426a0(param_3);
                }
              }
              uVar1 = puVar23[-4];
              local_20 = local_20 - 1;
              puVar23 = puVar23 + -2;
            }
            uVar1 = puVar23[-2];
            while (uVar21 == uVar1) {
              uVar6 = (ushort)local_20;
              if (puVar23[-1] <= local_14) break;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              *(ushort *)(local_18 + (uint)puVar23[-1] * 0x10) = uVar6;
              local_20 = local_20 - 1;
              uVar6 = (ushort)local_20;
              uVar1 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar7;
            *puVar8 = uVar6;
            local_20 = (uint)puVar8[2];
            puVar23 = (ushort *)(*(int *)(local_1c + 0xb8) + local_20 * 4);
            uVar1 = puVar23[2];
            while (uVar1 < uVar13) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)((uint)puVar23[3] * 0x10 + local_18);
              if ((uVar1 & 1) == 0) {
                uVar1 = puVar8[3];
                uVar6 = puVar8[1];
                uVar11 = puVar8[5];
                uVar14 = puVar8[4];
                *psVar18 = *psVar18 + -1;
                if (((psVar18[3] - uVar6 | uVar1 - psVar18[1] | uVar11 - psVar18[4] |
                     psVar18[5] - uVar14) & 0x8000) == 0) {
                  FUN_011426a0(param_3);
                }
              }
              else {
                psVar18[2] = psVar18[2] + -1;
              }
              uVar1 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            uVar1 = puVar23[2];
            for (; ((uVar13 == uVar1 && (uVar12 = (uint)puVar23[3], uVar12 < local_14)) &&
                   (uVar12 != 0)); puVar23 = puVar23 + 2) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)(local_18 + 4 + uVar12 * 0x10);
              *psVar18 = *psVar18 + -1;
              uVar1 = puVar23[4];
            }
            uVar1 = puVar23[-2];
            while (local_2c = (uint)uVar1, uVar13 < local_2c) {
              local_20 = local_20 - 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              psVar18 = (short *)((uint)puVar23[-1] * 0x10 + local_18);
              if ((uVar1 & 1) == 0) {
                uVar1 = puVar8[3];
                uVar6 = puVar8[1];
                uVar11 = puVar8[5];
                uVar14 = puVar8[4];
                *psVar18 = *psVar18 + 1;
                if (((psVar18[3] - uVar6 | uVar1 - psVar18[1] | uVar11 - psVar18[4] |
                     psVar18[5] - uVar14) & 0x8000) == 0) {
                  FUN_011426f0((int)&local_50 + 4);
                }
              }
              else {
                psVar18[2] = psVar18[2] + 1;
              }
              uVar1 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            uVar1 = puVar23[-2];
            while (uVar13 == uVar1) {
              if (puVar23[-1] <= local_14) break;
              local_20 = local_20 - 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              psVar18 = (short *)(local_18 + 4 + (uint)puVar23[-1] * 0x10);
              *psVar18 = *psVar18 + 1;
              puVar17 = puVar23 + -4;
              puVar23 = puVar23 + -2;
              uVar1 = *puVar17;
            }
            puVar8[2] = (ushort)local_20;
            *puVar23 = uVar3;
            puVar23[1] = (ushort)local_14;
            local_2c = (uint)*puVar8;
            puVar23 = (ushort *)(*(int *)(local_1c + 0xb8) + local_2c * 4);
            uVar1 = puVar23[2];
            while (local_20 = (uint)uVar1, local_20 < uVar21) {
              psVar18 = (short *)((uint)puVar23[3] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              local_2c = local_2c + 1;
              if ((uVar1 & 1) == 0) {
                *psVar18 = *psVar18 + -1;
              }
              else {
                uVar1 = puVar8[3];
                uVar6 = puVar8[1];
                uVar3 = puVar8[5];
                uVar11 = puVar8[4];
                psVar18[2] = psVar18[2] + -1;
                if (((psVar18[3] - uVar6 | uVar1 - psVar18[1] | uVar3 - psVar18[4] |
                     psVar18[5] - uVar11) & 0x8000) == 0) {
                  FUN_011426f0((int)&local_50 + 4);
                }
              }
              uVar1 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            uVar6 = (ushort)local_2c;
            uVar1 = puVar23[2];
            while (uVar21 == uVar1) {
              uVar6 = (ushort)local_2c;
              if (local_14 <= puVar23[3]) break;
              psVar18 = (short *)((uint)puVar23[3] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              *psVar18 = *psVar18 + -1;
              local_2c = local_2c + 1;
              uVar6 = (ushort)local_2c;
              uVar1 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            *puVar8 = uVar6;
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar7;
            local_20 = (uint)puVar8[1];
            uVar1 = *(ushort *)(*(int *)(local_1c + 0xc4) + -4 + local_20 * 4);
            puVar23 = (ushort *)(*(int *)(local_1c + 0xc4) + local_20 * 4);
            while( true ) {
              local_2c = (uint)uVar1;
              uVar7 = (ushort)local_20;
              if (local_2c <= uVar22) break;
              psVar18 = (short *)((uint)puVar23[-1] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              if ((uVar1 & 1) == 0) {
                psVar18[1] = uVar7;
              }
              else {
                uVar1 = *puVar8;
                uVar6 = puVar8[5];
                uVar3 = puVar8[4];
                uVar11 = puVar8[2];
                psVar18[3] = uVar7;
                if (((uVar6 - psVar18[4] | psVar18[2] - uVar1 | psVar18[5] - uVar3 |
                     uVar11 - *psVar18) & 0x8000) == 0) {
                  FUN_011426a0(param_3);
                }
              }
              uVar1 = puVar23[-4];
              local_20 = local_20 - 1;
              puVar23 = puVar23 + -2;
            }
            uVar1 = puVar23[-2];
            while (uVar22 == uVar1) {
              uVar7 = (ushort)local_20;
              if (puVar23[-1] <= local_14) break;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              *(ushort *)(local_18 + 2 + (uint)puVar23[-1] * 0x10) = uVar7;
              local_20 = local_20 - 1;
              uVar7 = (ushort)local_20;
              uVar1 = puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar2;
            puVar8[1] = uVar7;
            local_20 = (uint)puVar8[3];
            puVar23 = (ushort *)(*(int *)(local_1c + 0xc4) + local_20 * 4);
            uVar1 = puVar23[2];
            while (uVar1 < uVar16) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)((uint)puVar23[3] * 0x10 + local_18);
              if ((uVar1 & 1) == 0) {
                uVar1 = *puVar8;
                uVar7 = puVar8[5];
                uVar6 = puVar8[4];
                uVar3 = puVar8[2];
                psVar18[1] = psVar18[1] + -1;
                if (((uVar7 - psVar18[4] | psVar18[2] - uVar1 | psVar18[5] - uVar6 |
                     uVar3 - *psVar18) & 0x8000) == 0) {
                  FUN_011426a0(param_3);
                }
              }
              else {
                psVar18[3] = psVar18[3] + -1;
              }
              uVar1 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            uVar1 = puVar23[2];
            for (; ((uVar16 == uVar1 && (uVar12 = (uint)puVar23[3], uVar12 < local_14)) &&
                   (uVar12 != 0)); puVar23 = puVar23 + 2) {
              local_20 = local_20 + 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)(local_18 + 6 + uVar12 * 0x10);
              *psVar18 = *psVar18 + -1;
              uVar1 = puVar23[4];
            }
            local_2c = (uint)puVar23[-2];
            while (uVar16 < local_2c) {
              local_20 = local_20 - 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              psVar18 = (short *)((uint)puVar23[-1] * 0x10 + local_18);
              if ((local_2c & 1) == 0) {
                uVar1 = *puVar8;
                uVar7 = puVar8[5];
                uVar6 = puVar8[4];
                uVar3 = puVar8[2];
                psVar18[1] = psVar18[1] + 1;
                if (((uVar7 - psVar18[4] | psVar18[2] - uVar1 | psVar18[5] - uVar6 |
                     uVar3 - *psVar18) & 0x8000) == 0) {
                  FUN_011426f0((int)&local_50 + 4);
                }
              }
              else {
                psVar18[3] = psVar18[3] + 1;
              }
              local_2c = (uint)puVar23[-4];
              puVar23 = puVar23 + -2;
            }
            uVar1 = puVar23[-2];
            while (uVar16 == uVar1) {
              if (puVar23[-1] <= local_14) break;
              local_20 = local_20 - 1;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + -2);
              psVar18 = (short *)(local_18 + 6 + (uint)puVar23[-1] * 0x10);
              *psVar18 = *psVar18 + 1;
              puVar17 = puVar23 + -4;
              puVar23 = puVar23 + -2;
              uVar1 = *puVar17;
            }
            puVar8[3] = (ushort)local_20;
            *puVar23 = uVar4;
            puVar23[1] = (ushort)local_14;
            puVar23 = (ushort *)(*(int *)(local_1c + 0xc4) + (uint)puVar8[1] * 4);
            local_20 = (uint)puVar23[2];
            uVar12 = (uint)puVar8[1];
            iVar15 = local_24;
            iVar19 = local_1c;
            while (local_24 = iVar15, local_1c = iVar19, local_20 < uVar22) {
              psVar18 = (short *)((uint)puVar23[3] * 0x10 + local_18);
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              local_2c = uVar12 + 1;
              if ((local_20 & 1) == 0) {
                psVar18[1] = psVar18[1] + -1;
              }
              else {
                uVar1 = puVar8[4];
                uVar7 = puVar8[5];
                uVar6 = *puVar8;
                uVar3 = puVar8[2];
                psVar18[3] = psVar18[3] + -1;
                if (((uVar7 - psVar18[4] | psVar18[5] - uVar1 | psVar18[2] - uVar6 |
                     uVar3 - *psVar18) & 0x8000) == 0) {
                  FUN_011426f0((int)&local_50 + 4);
                }
              }
              local_20 = (uint)puVar23[4];
              uVar12 = local_2c;
              puVar23 = puVar23 + 2;
              iVar15 = local_24;
              iVar19 = local_1c;
            }
            uVar7 = (ushort)uVar12;
            uVar1 = puVar23[2];
            while (uVar22 == uVar1) {
              uVar7 = (ushort)uVar12;
              if (local_14 <= puVar23[3]) break;
              *(undefined4 *)puVar23 = *(undefined4 *)(puVar23 + 2);
              psVar18 = (short *)(local_18 + 2 + (uint)puVar23[3] * 0x10);
              *psVar18 = *psVar18 + -1;
              uVar12 = uVar12 + 1;
              uVar7 = (ushort)uVar12;
              uVar1 = puVar23[4];
              puVar23 = puVar23 + 2;
            }
            puVar8[1] = uVar7;
            puVar23[1] = (ushort)local_14;
            *puVar23 = uVar2;
          }
        }
        local_34 = local_34 + local_30;
      } while (local_34 != iVar15);
    }
    local_28 = local_28 + 1;
    if (2 < local_28) {
      uStack_48 = 0;
      if (-1 < iStack_44) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50._4_4_,iStack_44 * 8);
      }
      return;
    }
  } while( true );
}

// 01148B30  FUN_01148b30  size=86  [run]
void FUN_01148b30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  
  DAT_01b214f8 = 1;
  if (DAT_01b214f9 == '\0') {
    FUN_01446db0();
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xe0);
  *(undefined2 *)(iVar2 + 4) = 0xe0;
  hkp3AxisSweep::hkp3AxisSweep(param_1,param_2,param_3);
  return;
}

// 01148B90  FUN_01148b90  size=21  [run]
void FUN_01148b90(void)

{
  FUN_01446db0();
  DAT_0209e910 = FUN_01148b30;
  return;
}

// 01148BB0  hkp3AxisSweep::~hkp3AxisSweep  size=295  [run]
void __fastcall hkp3AxisSweep::~hkp3AxisSweep(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  iVar3 = 0;
  *param_1 = vftable;
  if (0 < (int)param_1[0x34]) {
    local_8 = 0;
    do {
      iVar4 = param_1[0x36] + local_8;
      *(undefined4 *)(iVar4 + 8) = 0;
      if (-1 < (int)*(uint *)(iVar4 + 0xc)) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (*(undefined4 *)(iVar4 + 4),(*(uint *)(iVar4 + 0xc) & 0x3fffffff) * 2);
      }
      local_8 = local_8 + 0x10;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0x80000000;
    } while (iVar3 < (int)param_1[0x34]);
  }
  uVar1 = param_1[0x36];
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  iVar3 = 2;
  puVar5 = param_1 + 0x34;
  do {
    puVar6 = puVar5 + -3;
    puVar5[-2] = 0;
    if (-1 < (int)puVar5[-1]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar6,puVar5[-1] * 4);
    }
    iVar3 = iVar3 + -1;
    *puVar6 = 0;
    puVar5[-1] = 0x80000000;
    puVar5 = puVar6;
  } while (-1 < iVar3);
  param_1[0x29] = 0;
  if (-1 < (int)param_1[0x2a]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x28],param_1[0x2a] << 4);
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0x80000000;
  hkBaseObject::hkBaseObject_25();
  return;
}

// 01148CE0  hkp3AxisSweep::vf1C  size=3850  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkp3AxisSweep::vf1C(uint param_1,int *param_2,int *param_3,undefined4 param_4)

{
  short *psVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  ushort *puVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ushort local_f0;
  ushort local_ec;
  ushort local_e8;
  ushort local_e0;
  ushort local_dc;
  ushort local_d8;
  int local_c4 [4];
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  ushort local_7e;
  int local_7c;
  ushort local_78;
  ushort uStack_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_66;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 *local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined8 *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  ushort *local_18;
  byte *local_14;
  
  if (param_3[1] < 1) {
    return;
  }
  iVar5 = param_2[1];
  local_28 = *(undefined8 **)(param_1 + 0xa4);
  iVar8 = iVar5 * 2;
  local_2c = param_1;
  local_24 = iVar5;
  if (iVar8 == 0) {
    local_5c = 0;
LAB_01148d6d:
    local_a8 = -0x80000000;
  }
  else {
    local_c4[3] = iVar5 << 3;
    local_5c = (**(code **)(PTR_vftable_018e9b8c + 0xc))(local_c4 + 3);
    local_a8 = (int)(local_c4[3] + (local_c4[3] >> 0x1f & 3U)) >> 2;
    if (local_a8 == 0) goto LAB_01148d6d;
  }
  if (iVar8 == 0) {
    local_50 = 0;
LAB_01148dbe:
    local_b4 = -0x80000000;
  }
  else {
    local_ac = iVar5 << 3;
    local_50 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_ac);
    local_b4 = (int)(local_ac + (local_ac >> 0x1f & 3U)) >> 2;
    if (local_b4 == 0) goto LAB_01148dbe;
  }
  if (iVar8 == 0) {
    local_4c = 0;
LAB_01148e10:
    local_a4 = -0x80000000;
  }
  else {
    local_b0 = iVar5 << 3;
    local_4c = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_b0);
    local_a4 = (int)(local_b0 + (local_b0 >> 0x1f & 3U)) >> 2;
    if (local_a4 == 0) goto LAB_01148e10;
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = -0x80000000;
  if (0 < (int)local_28) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_38,local_28,4);
  }
  iVar5 = *(int *)(param_1 + 0xa4) + local_24;
  uVar17 = *(uint *)(param_1 + 0xa8) & 0x3fffffff;
  if ((int)uVar17 < iVar5) {
    iVar8 = uVar17 * 2;
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xa0,iVar5,0x10);
  }
  puVar13 = local_28;
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + local_24;
  local_c4[0] = local_5c;
  local_c4[2] = local_4c;
  auVar18._0_8_ = (ulonglong)DAT_01701ce0 ^ 0x8000000080000000;
  auVar18._8_4_ = DAT_01701ce0._8_4_ ^ 0x80000000;
  auVar18._12_4_ = DAT_01701ce0._12_4_ ^ 0x80000000;
  iVar5 = 0;
  local_c4[1] = local_50;
  auVar19 = _DAT_01701ce0;
  if (0 < local_24) {
    local_20 = (undefined4 *)local_28;
    local_14 = (byte *)((int)local_28 << 4);
    local_18 = (ushort *)(local_50 + 6);
    local_40 = (undefined4 *)(local_50 - local_5c);
    local_64 = local_4c - local_5c;
    puVar7 = (ushort *)(local_5c + 4);
    local_54 = local_4c - local_50;
    local_1c = (undefined4 *)0x0;
    do {
      pauVar15 = (undefined1 (*) [16])(*param_3 + (int)local_1c);
      auVar22._0_4_ =
           (*(float *)*pauVar15 + *(float *)(param_1 + 0x40)) * *(float *)(param_1 + 0x60);
      auVar22._4_4_ =
           (*(float *)(*pauVar15 + 4) + *(float *)(param_1 + 0x44)) * *(float *)(param_1 + 100);
      auVar22._8_4_ =
           (*(float *)(*pauVar15 + 8) + *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x68);
      auVar22._12_4_ =
           (*(float *)(*pauVar15 + 0xc) + *(float *)(param_1 + 0x4c)) * *(float *)(param_1 + 0x6c);
      auVar19 = minps(auVar19,*pauVar15);
      auVar18 = maxps(auVar18,pauVar15[1]);
      auVar22 = minps(auVar22,_DAT_01b214d0);
      auVar22 = maxps(auVar22,ZEXT816(0));
      auVar23._0_4_ =
           (*(float *)pauVar15[1] + *(float *)(param_1 + 0x50)) * *(float *)(param_1 + 0x60);
      auVar23._4_4_ =
           (*(float *)(pauVar15[1] + 4) + *(float *)(param_1 + 0x54)) * *(float *)(param_1 + 100);
      auVar23._8_4_ =
           (*(float *)(pauVar15[1] + 8) + *(float *)(param_1 + 0x58)) * *(float *)(param_1 + 0x68);
      auVar23._12_4_ =
           (*(float *)(pauVar15[1] + 0xc) + *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x6c)
      ;
      auVar23 = minps(auVar23,_DAT_01b214d0);
      local_78 = (ushort)((uint)(auVar22._0_4_ + _DAT_01b214e0) >> 7);
      auVar23 = maxps(auVar23,ZEXT816(0));
      local_90 = auVar23._0_4_ + _DAT_01b214e0;
      fStack_8c = auVar23._4_4_ + fRam01b214e4;
      fStack_88 = auVar23._8_4_ + fRam01b214e8;
      fStack_84 = auVar23._12_4_ + fRam01b214ec;
      local_7e = (ushort)((uint)fStack_8c >> 7);
      local_d8 = (ushort)((uint)fStack_88 >> 7);
      local_7c = CONCAT22(local_7c._2_2_,local_d8);
      uStack_76 = (ushort)((uint)(auVar22._4_4_ + fRam01b214e4) >> 7);
      local_f0 = local_78 & 0xfffe;
      local_74._0_2_ = (ushort)((uint)(auVar22._8_4_ + fRam01b214e8) >> 7);
      local_ec = uStack_76 & 0xfffe;
      local_e8 = (ushort)local_74 & 0xfffe;
      local_e0 = (ushort)((uint)local_90 >> 7) | 1;
      local_dc = local_7e | 1;
      local_d8 = local_d8 | 1;
      piVar3 = *(int **)(*param_2 + iVar5 * 4);
      *(int **)(local_14 + *(int *)(param_1 + 0xa0) + 0xc) = piVar3;
      *piVar3 = (int)local_20;
      puVar7[-2] = local_f0;
      uVar2 = (ushort)local_20;
      *puVar7 = local_e0;
      puVar7[-1] = uVar2;
      puVar7[1] = uVar2;
      local_18[-3] = local_ec;
      local_18[-2] = uVar2;
      *(ushort *)((int)local_40 + (int)puVar7) = local_dc;
      *local_18 = uVar2;
      *(ushort *)(local_4c + iVar5 * 8) = local_e8;
      local_1c = (undefined4 *)((int)local_1c + 0x20);
      local_20 = (undefined4 *)((int)local_20 + 1);
      local_14 = local_14 + 0x10;
      *(ushort *)(local_4c + 2 + iVar5 * 8) = uVar2;
      *(ushort *)(local_64 + (int)puVar7) = local_d8;
      *(ushort *)(local_54 + (int)local_18) = uVar2;
      local_18 = local_18 + 4;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 4;
      param_1 = local_2c;
    } while (iVar5 < local_24);
  }
  iVar5 = 0;
  if (0 < (int)local_28 - *(int *)(param_1 + 0xa4)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_28 - *(int *)(param_1 + 0xa4));
  }
  iVar5 = ((int)local_28 >> 5) + 8;
  *(undefined8 **)(param_1 + 0xa4) = local_28;
  if (iVar5 == 0) {
    local_1c = (undefined4 *)0x0;
LAB_01149118:
    local_60 = -0x80000000;
  }
  else {
    local_2c = iVar5 * 4;
    local_1c = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_2c);
    local_60 = (int)(local_2c + ((int)local_2c >> 0x1f & 3U)) >> 2;
    if (local_60 == 0) goto LAB_01149118;
  }
  puVar4 = local_1c;
  for (iVar5 = (int)puVar13 >> 7; -1 < iVar5; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
  }
  auVar20._0_4_ = (*(float *)(param_1 + 0x40) + auVar19._0_4_) * *(float *)(param_1 + 0x60);
  auVar20._4_4_ = (*(float *)(param_1 + 0x44) + auVar19._4_4_) * *(float *)(param_1 + 100);
  auVar20._8_4_ = (*(float *)(param_1 + 0x48) + auVar19._8_4_) * *(float *)(param_1 + 0x68);
  auVar20._12_4_ = (*(float *)(param_1 + 0x4c) + auVar19._12_4_) * *(float *)(param_1 + 0x6c);
  auVar19 = minps(auVar20,_DAT_01b214d0);
  auVar19 = maxps(auVar19,ZEXT816(0));
  local_9c = (uint)(auVar19._4_4_ + fRam01b214e4) >> 7;
  uStack_46 = (undefined2)local_9c;
  local_a0 = (uint)(auVar19._0_4_ + _DAT_01b214e0) >> 7;
  auVar21._0_4_ = (*(float *)(param_1 + 0x50) + auVar18._0_4_) * *(float *)(param_1 + 0x60);
  auVar21._4_4_ = (*(float *)(param_1 + 0x54) + auVar18._4_4_) * *(float *)(param_1 + 100);
  auVar21._8_4_ = (*(float *)(param_1 + 0x58) + auVar18._8_4_) * *(float *)(param_1 + 0x68);
  auVar21._12_4_ = (*(float *)(param_1 + 0x5c) + auVar18._12_4_) * *(float *)(param_1 + 0x6c);
  auVar18 = minps(auVar21,_DAT_01b214d0);
  local_48 = (undefined2)local_a0;
  auVar18 = maxps(auVar18,ZEXT816(0));
  fStack_84 = auVar18._12_4_ + fRam01b214ec;
  uVar17 = (uint)(auVar18._4_4_ + fRam01b214e4) >> 7;
  local_66 = (undefined2)uVar17;
  uVar6 = (uint)(auVar18._8_4_ + fRam01b214e8) >> 7;
  local_64 = CONCAT22(local_64._2_2_,(short)uVar6);
  local_98 = (uint)(auVar19._8_4_ + fRam01b214e8) >> 7;
  uStack_44 = (undefined2)local_98;
  local_9c = local_9c & 0xfffe;
  local_98 = local_98 & 0xfffe;
  local_90 = (float)((uint)(auVar18._0_4_ + _DAT_01b214e0) >> 7 & 0xffff | 1);
  fStack_8c = (float)(uVar17 & 0xffff | 1);
  fStack_88 = (float)(uVar6 & 0xffff | 1);
  local_a0 = local_a0 & 0xfffe;
  puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4);
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (iVar5 = (int)local_a0 >> (0x10U - (char)*(undefined4 *)(param_1 + 0xd4) & 0x1f), 0 < iVar5)) {
    local_18 = (ushort *)(*(int *)(param_1 + 0xd8) + -0x10 + iVar5 * 0x10);
    local_1c[(int)(uint)*local_18 >> 5] =
         local_1c[(int)(uint)*local_18 >> 5] ^ 1 << ((byte)*local_18 & 0x1f);
    puVar7 = *(ushort **)(local_18 + 2);
    local_20 = *(undefined4 **)(local_18 + 4);
    while (local_20 = (undefined4 *)((int)local_20 + -1), -1 < (int)local_20) {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      local_1c[(int)(uint)uVar2 >> 5] = local_1c[(int)(uint)uVar2 >> 5] ^ 1 << ((byte)uVar2 & 0x1f);
    }
    iVar5 = *(int *)(param_1 + 0xac);
    local_64 = (uint)*local_18 * 0x10 + *(int *)(param_1 + 0xa0);
    uVar2 = *(ushort *)(local_64 + 10);
    for (local_14 = (byte *)(iVar5 + 4 + (uint)*(ushort *)(local_64 + 8) * 4);
        local_14 < (byte *)(iVar5 + (uint)uVar2 * 4); local_14 = local_14 + 4) {
      if ((*local_14 & 1) == 0) {
        local_1c[(int)(uint)*(ushort *)(local_14 + 2) >> 5] =
             local_1c[(int)(uint)*(ushort *)(local_14 + 2) >> 5] &
             ~(1 << ((byte)*(ushort *)(local_14 + 2) & 0x1f));
      }
    }
    puVar7 = (ushort *)(*(int *)(param_1 + 0xac) + 4 + (uint)*(ushort *)(local_64 + 8) * 4);
  }
  uVar2 = *puVar7;
  while (uVar2 < local_a0) {
    puVar16 = puVar7 + 1;
                    /* WARNING: Read-only address (ram,0x01701ce0) is written */
    puVar7 = puVar7 + 2;
    local_1c[(int)(uint)*puVar16 >> 5] =
         local_1c[(int)(uint)*puVar16 >> 5] ^ 1 << ((byte)*puVar16 & 0x1f);
    uVar2 = *puVar7;
  }
                    /* WARNING: Read-only address (ram,0x01701ce0) is written */
  uVar2 = *puVar7;
  while ((uint)uVar2 < (uint)local_90) {
    if ((uVar2 & 1) == 0) {
      local_1c[(int)(uint)puVar7[1] >> 5] =
           local_1c[(int)(uint)puVar7[1] >> 5] ^ 1 << ((byte)puVar7[1] & 0x1f);
    }
    puVar16 = puVar7 + 2;
    puVar7 = puVar7 + 2;
    uVar2 = *puVar16;
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  local_40 = (undefined4 *)(iVar5 + -8 + *(int *)(param_1 + 0xbc) * 4);
  iVar8 = FUN_011418d0(iVar5 + 4,local_40,local_9c);
  local_70 = CONCAT22(local_70._2_2_,(short)(iVar8 - iVar5 >> 2));
  iVar9 = FUN_011418d0(iVar5 + 4,local_40,fStack_8c);
  iVar8 = *(int *)(param_1 + 0xc4);
  local_6c = CONCAT22(local_6c._2_2_,(short)(iVar9 + (-4 - iVar5) >> 2));
  local_40 = (undefined4 *)(iVar8 + -8 + *(int *)(param_1 + 200) * 4);
  iVar5 = FUN_011418d0(iVar8 + 4,local_40,local_98);
  local_70 = CONCAT22((short)(iVar5 - iVar8 >> 2),(undefined2)local_70);
  iVar5 = FUN_011418d0(iVar8 + 4,local_40,fStack_88);
  local_6c = CONCAT22((short)(iVar5 + (-4 - iVar8) >> 2),(undefined2)local_6c);
  local_40 = local_1c + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  local_20 = local_1c;
  if (local_1c < local_40) {
    local_14 = (byte *)(*(int *)(param_1 + 0xa0) + 0x24);
    do {
      local_18 = (ushort *)*local_20;
      pbVar10 = local_14;
      if (local_18 != (ushort *)0x0) {
        do {
          if (((uint)local_18 & 0xf) != 0) {
            if (((((uint)local_18 & 1) != 0) &&
                (((*(int *)(pbVar10 + -0x20) - local_70 | local_6c - *(int *)(pbVar10 + -0x24)) &
                 0x80008000U) == 0)) && ((pbVar10[-0x18] & 1) == 0)) {
              *(byte **)(local_38 + local_34 * 4) = pbVar10 + -0x24;
              local_34 = local_34 + 1;
            }
            if (((((uint)local_18 & 2) != 0) &&
                (((*(int *)(pbVar10 + -0x10) - local_70 | local_6c - *(int *)(pbVar10 + -0x14)) &
                 0x80008000U) == 0)) && ((pbVar10[-8] & 1) == 0)) {
              *(byte **)(local_38 + local_34 * 4) = pbVar10 + -0x14;
              local_34 = local_34 + 1;
            }
            if (((((uint)local_18 & 4) != 0) &&
                (((local_6c - *(int *)(pbVar10 + -4) | *(int *)pbVar10 - local_70) & 0x80008000U) ==
                 0)) && ((pbVar10[8] & 1) == 0)) {
              *(byte **)(local_38 + local_34 * 4) = pbVar10 + -4;
              local_34 = local_34 + 1;
            }
            if (((((uint)local_18 & 8) != 0) &&
                (((*(int *)(pbVar10 + 0x10) - local_70 | local_6c - *(int *)(pbVar10 + 0xc)) &
                 0x80008000U) == 0)) && ((pbVar10[0x18] & 1) == 0)) {
              *(byte **)(local_38 + local_34 * 4) = pbVar10 + 0xc;
              local_34 = local_34 + 1;
            }
          }
          local_18 = (ushort *)((uint)local_18 >> 4);
          pbVar10 = pbVar10 + 0x40;
        } while (local_18 != (ushort *)0x0);
        local_18 = (ushort *)0x0;
      }
      local_20 = local_20 + 1;
      local_14 = local_14 + 0x200;
    } while (local_20 < local_40);
  }
  if (-1 < local_60) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1c,local_60 * 4);
  }
  iVar5 = *(int *)(param_1 + 0xa4) + local_24;
  uVar17 = *(uint *)(param_1 + 0xa8) & 0x3fffffff;
  if ((int)uVar17 < iVar5) {
    iVar8 = uVar17 * 2;
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(undefined4 *)(param_1 + 0xa0),iVar5,0x10);
  }
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + local_24;
  local_18 = (ushort *)*(undefined4 *)(param_1 + 0xa0);
  local_14 = (byte *)0x0;
  do {
    iVar5 = local_24 * 2;
    local_40 = (undefined4 *)((uint)local_40 & 0xffffff00);
    if (1 < iVar5) {
      FUN_0114c160(local_c4[(int)local_14],0,iVar5 + -1,local_40);
    }
    local_14 = (byte *)((int)local_14 + 1);
  } while ((int)local_14 < 3);
  local_14 = (byte *)0x0;
  local_20 = (undefined4 *)(param_1 + 0xac);
  do {
    uVar11 = FUN_01142950(local_18,local_14,local_c4[(int)local_14],iVar5);
    local_20 = (undefined4 *)((int)local_20 + 0xc);
    *(undefined4 *)(&local_48 + (int)local_14 * 2) = uVar11;
    local_14 = (byte *)((int)local_14 + 1);
  } while ((int)local_14 < 3);
  FUN_0114bb10(local_18,CONCAT22(uStack_46,local_48),local_5c,iVar5);
  FUN_0114bbb0(local_18,CONCAT22(uStack_42,uStack_44),local_50,iVar5);
  FUN_0114bc50(local_18,local_40,local_4c,iVar5);
  if ((*(int *)(param_1 + 0xd0) != 0) && (iVar8 = 0, 0 < *(int *)(param_1 + 0xd0))) {
    iVar9 = 0;
    do {
      iVar12 = (uint)*(ushort *)(iVar9 + *(int *)(param_1 + 0xd8)) * 0x10 + *(int *)(param_1 + 0xa0)
      ;
      iVar8 = iVar8 + 1;
      psVar1 = (short *)(iVar12 + 4);
      *psVar1 = *psVar1 + (short)iVar5;
      psVar1 = (short *)(iVar12 + 6);
      *psVar1 = *psVar1 + (short)iVar5;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 0xd0));
  }
  if (local_24 + 1 == 0) {
    local_18 = (ushort *)0x0;
LAB_011496f1:
    local_40 = (undefined4 *)0x80000000;
  }
  else {
    local_60 = (local_24 + 1) * 0x10;
    local_18 = (ushort *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_60);
    local_40 = (undefined4 *)((int)(local_60 + (local_60 >> 0x1f & 0xfU)) >> 4);
    if (local_40 == (undefined4 *)0x0) goto LAB_011496f1;
  }
  if (local_24 == -4) {
    iVar5 = 0;
LAB_01149739:
    local_1c = (undefined4 *)0x80000000;
  }
  else {
    local_2c = local_24 * 4 + 0x10;
    iVar5 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_2c);
    local_1c = (undefined4 *)((int)(local_2c + ((int)local_2c >> 0x1f & 3U)) >> 2);
    if (local_1c == (undefined4 *)0x0) goto LAB_01149739;
  }
  if (local_24 == -4) {
    local_20 = (undefined4 *)0x0;
LAB_01149783:
    local_14 = (byte *)0x80000000;
  }
  else {
    local_58 = (local_24 + 4) * 4;
    local_20 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_58);
    local_14 = (byte *)((int)(local_58 + (local_58 >> 0x1f & 3U)) >> 2);
    if (local_14 == (byte *)0x0) goto LAB_01149783;
  }
  iVar8 = 0;
  if (0 < local_24) {
    iVar9 = (int)local_28 << 4;
    do {
      *(short *)(iVar5 + 2 + iVar8 * 4) = (short)local_28 + (short)iVar8;
      *(undefined2 *)(iVar5 + iVar8 * 4) = *(undefined2 *)(iVar9 + 8 + *(int *)(param_1 + 0xa0));
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < local_24);
  }
  *(undefined2 *)(iVar5 + 4 + local_24 * 4) = 0xffff;
  *(undefined2 *)(iVar5 + local_24 * 4) = 0xffff;
  *(undefined2 *)(iVar5 + 8 + local_24 * 4) = 0xffff;
  FUN_01447bf0(iVar5,local_24 + 3U & 0xfffffffc,local_20);
  if (0 < local_24) {
    puVar7 = (ushort *)(iVar5 + 2);
    local_28 = (undefined8 *)local_24;
    puVar16 = local_18;
    do {
      puVar13 = (undefined8 *)((uint)*puVar7 * 0x10 + *(int *)(param_1 + 0xa0));
      puVar7 = puVar7 + 2;
      *(undefined8 *)puVar16 = *puVar13;
      *(undefined8 *)((int)puVar16 + 8) = puVar13[1];
      puVar16 = (ushort *)((int)puVar16 + 0x10);
      local_28 = (undefined8 *)((int)local_28 + -1);
    } while (local_28 != (undefined8 *)0x0);
  }
  *(undefined2 *)((int)local_18 + (local_24 * 2 + 1) * 8) = 0xffff;
  if (((uint)local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,(int)local_14 * 4);
  }
  if (((uint)local_1c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar5,(int)local_1c * 4);
  }
  iVar5 = local_34;
  local_1c = (undefined4 *)local_34;
  if (local_34 + 1 == 0) {
    local_28 = (undefined8 *)0x0;
LAB_011498cb:
    local_64 = -0x80000000;
  }
  else {
    local_58 = (local_34 + 1) * 0x10;
    local_28 = (undefined8 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_58);
    local_64 = (int)(local_58 + (local_58 >> 0x1f & 0xfU)) >> 4;
    if (local_64 == 0) goto LAB_011498cb;
  }
  if (iVar5 == -4) {
    iVar5 = 0;
LAB_01149911:
    local_2c = 0x80000000;
  }
  else {
    local_7c = iVar5 * 4 + 0x10;
    iVar5 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_7c);
    local_2c = (int)(local_7c + (local_7c >> 0x1f & 3U)) >> 2;
    if (local_2c == 0) goto LAB_01149911;
  }
  if (local_1c == (undefined4 *)0xfffffffc) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_74 = ((int)local_1c + 4) * 4;
    local_20 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_74);
    local_14 = (byte *)((int)(local_74 + (local_74 >> 0x1f & 3U)) >> 2);
    if (local_14 != (byte *)0x0) goto LAB_01149962;
  }
  local_14 = (byte *)0x80000000;
LAB_01149962:
  iVar8 = *(int *)(param_1 + 0xa0);
  iVar9 = 0;
  if (0 < (int)local_1c) {
    do {
      local_54 = *(int *)(local_38 + iVar9 * 4);
      *(short *)(iVar5 + 2 + iVar9 * 4) = (short)(local_54 - iVar8 >> 4);
      *(undefined2 *)(iVar5 + iVar9 * 4) = *(undefined2 *)(local_54 + 8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)local_1c);
  }
  *(undefined2 *)(iVar5 + 4 + (int)local_1c * 4) = 0xffff;
  *(undefined2 *)(iVar5 + (int)local_1c * 4) = 0xffff;
  *(undefined2 *)(iVar5 + 8 + (int)local_1c * 4) = 0xffff;
  FUN_01447bf0(iVar5,(int)local_1c + 3U & 0xfffffffc,local_20);
  if (0 < (int)local_1c) {
    puVar7 = (ushort *)(iVar5 + 2);
    local_54 = (int)local_1c;
    puVar13 = local_28;
    do {
      puVar14 = (undefined8 *)((uint)*puVar7 * 0x10 + *(int *)(param_1 + 0xa0));
      puVar7 = puVar7 + 2;
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      puVar13 = puVar13 + 2;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  *(undefined2 *)(local_28 + (int)local_1c * 2 + 1) = 0xffff;
  if (((uint)local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,(int)local_14 * 4);
  }
  if ((local_2c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar5,local_2c * 4);
  }
  FUN_01144370(param_1,local_18,local_24,param_4);
  puVar13 = local_28;
  FUN_011440f0(local_18,local_24,local_28,local_1c,0,param_4);
  if (-1 < local_64) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(puVar13,local_64 << 4);
  }
  if (-1 < (int)local_40) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,(int)local_40 << 4);
  }
  local_34 = 0;
  if (-1 < local_30) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_38,local_30 * 4);
  }
  local_38 = 0;
  local_30 = 0x80000000;
  if (-1 < local_a4) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_4c,local_a4 * 4);
  }
  if (-1 < local_b4) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_50,local_b4 * 4);
  }
  if (-1 < local_a8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_5c,local_a8 * 4);
  }
                    /* WARNING: Read-only address (ram,0x01701ce0) is written */
  return;
}

// 01149C00  hkp3AxisSweep::vf24  size=2157  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall hkp3AxisSweep::vf24(int param_1,int *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  short *local_40;
  ushort *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28 [5];
  ushort *local_14;
  undefined8 *local_10;
  undefined8 *local_c;
  int local_8;
  
  local_14 = *(ushort **)(param_1 + 0xa4);
  uVar12 = param_2[1];
  local_28[1] = 0;
  local_28[4] = uVar12;
  local_8 = param_1;
  if (uVar12 + 1 == 0) {
    local_c = (undefined8 *)0x0;
LAB_01149c5e:
    local_4c = -0x80000000;
  }
  else {
    local_2c = (uVar12 + 1) * 0x10;
    local_c = (undefined8 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_2c);
    local_4c = (int)(local_2c + (local_2c >> 0x1f & 0xfU)) >> 4;
    if (local_4c == 0) goto LAB_01149c5e;
  }
  puVar4 = (undefined8 *)(**(int **)*param_2 * 0x10 + *(int *)(param_1 + 0xa0));
  local_74 = *puVar4;
  local_6c = puVar4[1];
  if (uVar12 + 4 == 0) {
    local_30 = 0;
LAB_01149cc8:
    local_28[3] = 0x80000000;
  }
  else {
    local_28[0] = (uVar12 + 4) * 4;
    local_30 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(local_28);
    local_28[3] = (int)(local_28[0] + ((int)local_28[0] >> 0x1f & 3U)) >> 2;
    if (local_28[3] == 0) goto LAB_01149cc8;
  }
  iVar7 = local_30;
  iVar10 = 0;
  if (0 < (int)uVar12) {
    do {
      iVar9 = **(int **)(*param_2 + iVar10 * 4);
      puVar5 = (ushort *)(iVar9 * 0x10 + *(int *)(local_8 + 0xa0));
      *(short *)(local_30 + 2 + iVar10 * 4) = (short)iVar9;
      *(ushort *)(local_30 + iVar10 * 4) = puVar5[4];
      if (puVar5[4] <= (ushort)local_6c) {
        local_6c = CONCAT62(local_6c._2_6_,puVar5[4]);
      }
      if (*puVar5 <= (ushort)local_74) {
        local_74 = CONCAT62(local_74._2_6_,*puVar5);
      }
      if (puVar5[1] <= local_74._2_2_) {
        local_74._0_4_ = CONCAT22(puVar5[1],(ushort)local_74);
      }
      if (local_6c._2_2_ <= puVar5[5]) {
        local_6c._0_4_ = CONCAT22(puVar5[5],(ushort)local_6c);
        local_6c = (ulonglong)(uint)local_6c;
      }
      if (local_74._4_2_ <= puVar5[2]) {
        local_74._0_6_ = CONCAT24(puVar5[2],(int)local_74);
      }
      if (local_74._6_2_ <= puVar5[3]) {
        local_74 = CONCAT26(puVar5[3],(undefined6)local_74);
      }
      iVar10 = iVar10 + 1;
      uVar12 = local_28[4];
    } while (iVar10 < (int)local_28[4]);
  }
  if (uVar12 + 4 == 0) {
    local_28[2] = 0;
LAB_01149d9f:
    param_2 = (int *)0x80000000;
  }
  else {
    local_10 = (undefined8 *)((uVar12 + 4) * 4);
    local_28[2] = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_10);
    param_2 = (int *)((int)((int)local_10 + ((int)local_10 >> 0x1f & 3U)) >> 2);
    if (param_2 == (int *)0x0) goto LAB_01149d9f;
  }
  *(undefined2 *)(iVar7 + 4 + uVar12 * 4) = 0xffff;
  *(undefined2 *)(iVar7 + uVar12 * 4) = 0xffff;
  *(undefined2 *)(iVar7 + 8 + uVar12 * 4) = 0xffff;
  FUN_01447bf0(iVar7,uVar12 + 3 & 0xfffffffc,local_28[2]);
  uVar14 = uVar12;
  if (0 < (int)uVar12) {
    puVar5 = (ushort *)(iVar7 + 2);
    puVar4 = local_c;
    do {
      puVar6 = (undefined8 *)((uint)*puVar5 * 0x10 + *(int *)(local_8 + 0xa0));
      puVar5 = puVar5 + 2;
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      **(undefined4 **)((int)puVar6 + 0xc) = 0;
      puVar4 = puVar4 + 2;
      uVar12 = uVar12 + -1;
      *(uint **)((int)puVar6 + 0xc) = local_28 + 1;
      iVar7 = local_30;
      uVar14 = local_28[4];
    } while (uVar12 != 0);
  }
  *(undefined2 *)(local_c + uVar14 * 2 + 1) = 0xffff;
  if (((uint)param_2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28[2],(int)param_2 * 4);
  }
  if ((local_28[3] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar7,local_28[3] * 4);
  }
  iVar7 = *(int *)(local_8 + 0xd0) + uVar14;
  local_58 = 0;
  local_54 = 0;
  local_50 = -0x80000000;
  if (0 < iVar7) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_58,iVar7,4);
  }
  puVar5 = local_14;
  if (local_14 == (ushort *)0x0) {
    param_2 = (undefined4 *)0x0;
LAB_01149ef2:
    local_5c = -0x80000000;
  }
  else {
    param_2 = (int *)((int)local_14 * 4);
    puVar8 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    local_5c = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
    param_2 = puVar8;
    if (local_5c == 0) goto LAB_01149ef2;
  }
  local_64 = param_2;
  iVar7 = ((int)puVar5 - uVar14) + 4;
  local_60 = (int)puVar5;
  local_14 = (ushort *)0x0;
  local_48 = local_5c;
  if (iVar7 == 0) {
    local_28[3] = 0;
LAB_01149f4c:
    local_44 = -0x80000000;
  }
  else {
    local_30 = iVar7 * 4;
    local_28[3] = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_30);
    local_44 = (int)(local_30 + (local_30 >> 0x1f & 3U)) >> 2;
    if (local_44 == 0) goto LAB_01149f4c;
  }
  iVar7 = local_8;
  local_10 = (undefined8 *)((int)puVar5 + -1);
  *param_2 = 0;
  local_28[0] = 1;
  if (0 < (int)local_10) {
    local_28[2] = (int)local_10 * 0x10;
    iVar10 = 0x10;
    do {
      iVar9 = *(int *)(local_8 + 0xa0);
      if (*(uint **)(local_28[2] + 0xc + iVar9) == local_28 + 1) {
        param_2[(int)local_10] = 0xffffffff;
        local_10 = (undefined8 *)((int)local_10 + -1);
        local_28[0] = local_28[0] - 1;
        iVar10 = iVar10 + -0x10;
        local_28[2] = local_28[2] + -0x10;
      }
      else {
        if (*(uint **)(iVar10 + 0xc + iVar9) == local_28 + 1) {
          *(undefined8 *)(iVar10 + iVar9) = *(undefined8 *)(local_28[2] + iVar9);
          *(undefined8 *)(iVar10 + 8 + iVar9) = *(undefined8 *)(local_28[2] + 8 + iVar9);
          param_2[(int)local_10] = local_28[0];
          local_10 = (undefined8 *)((int)local_10 + -1);
          param_2[local_28[0]] = 0xffffffff;
          *(uint *)(local_58 + local_54 * 4) = local_28[0];
          local_54 = local_54 + 1;
          puVar3 = *(uint **)(iVar10 + 0xc + iVar9);
          if (((uint)puVar3 & 1) != 0) {
            *(short *)(((uint)puVar3 & 0xfffffffe) + *(int *)(local_8 + 0xd8)) = (short)local_28[0];
            local_28[2] = local_28[2] + -0x10;
            goto LAB_0114a0b9;
          }
          *puVar3 = local_28[0];
          local_28[2] = local_28[2] + -0x10;
        }
        else {
          param_2[local_28[0]] = local_28[0];
        }
        local_40 = (short *)(iVar10 + 4 + iVar9);
        if (((*(int *)(iVar10 + 4 + iVar9) - (int)local_74 |
             local_74._4_4_ - *(int *)(iVar10 + iVar9)) & 0x80008000U) == 0) {
          sVar2 = *(short *)(iVar10 + 8 + iVar9);
          if (((*(short *)(iVar10 + 10 + iVar9) - (ushort)local_6c |
                (short)((uint)local_6c >> 0x10) - sVar2 |
                local_74._4_2_ - *(short *)(iVar10 + iVar9) | *local_40 - (ushort)local_74) & 0x8000
              ) == 0) {
            *(short *)(local_28[3] + (int)local_14 * 4) = sVar2;
            *(short *)(local_28[3] + 2 + (int)local_14 * 4) = (short)local_28[0];
            local_14 = (ushort *)((int)local_14 + 1);
          }
        }
      }
LAB_0114a0b9:
      local_28[0] = local_28[0] + 1;
      iVar10 = iVar10 + 0x10;
    } while ((int)local_28[0] <= (int)local_10);
  }
  piVar13 = (int *)(local_8 + 0xa0);
  iVar10 = (int)local_10 + 1;
  uVar12 = *(uint *)(local_8 + 0xa8) & 0x3fffffff;
  if ((int)uVar12 < iVar10) {
    iVar9 = uVar12 * 2;
    if (iVar9 <= iVar10) {
      iVar9 = iVar10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar13,iVar9,0x10);
  }
  iVar9 = 0;
  if (iVar10 != *(int *)(iVar7 + 0xa4) && -1 < iVar10 - *(int *)(iVar7 + 0xa4)) {
    do {
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10 - *(int *)(iVar7 + 0xa4));
  }
  *(int *)(iVar7 + 0xa4) = iVar10;
  if ((int)local_14 + 1 == 0) {
    local_10 = (undefined8 *)0x0;
LAB_0114a157:
    local_40 = (short *)0x80000000;
  }
  else {
    local_34 = ((int)local_14 + 1) * 0x10;
    local_10 = (undefined8 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_34);
    local_40 = (short *)((int)(local_34 + (local_34 >> 0x1f & 0xfU)) >> 4);
    if (local_40 == (short *)0x0) goto LAB_0114a157;
  }
  puVar5 = local_14;
  if (local_14 + 2 == (ushort *)0x0) {
    local_28[2] = 0;
  }
  else {
    local_38 = (int)(local_14 + 2) * 4;
    local_28[2] = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_38);
    local_28[0] = (int)(local_38 + (local_38 >> 0x1f & 3U)) >> 2;
    if (local_28[0] != 0) goto LAB_0114a1a6;
  }
  local_28[0] = 0x80000000;
LAB_0114a1a6:
  *(undefined2 *)(local_28[3] + (int)puVar5 * 4) = 0xffff;
  *(undefined2 *)(local_28[3] + 8 + (int)puVar5 * 4) = 0xffff;
  *(undefined2 *)(local_28[3] + 4 + (int)puVar5 * 4) = 0xffff;
  FUN_01447bf0(local_28[3],(int)puVar5 + 3U & 0xfffffffc,local_28[2]);
  if (0 < (int)puVar5) {
    puVar11 = (ushort *)(local_28[3] + 2);
    local_3c = puVar5;
    puVar4 = local_10;
    do {
      puVar6 = (undefined8 *)((uint)*puVar11 * 0x10 + *piVar13);
      puVar11 = puVar11 + 2;
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4 = puVar4 + 2;
      local_3c = (ushort *)((int)local_3c + -1);
    } while (local_3c != (ushort *)0x0);
  }
  *(undefined2 *)(local_10 + (int)puVar5 * 2 + 1) = 0xffff;
  if ((local_28[0] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28[2],local_28[0] * 4);
  }
  iVar7 = local_8;
  FUN_01144370(local_8,local_c,local_28[4],param_3);
  FUN_011440f0(local_c,local_28[4],local_10,local_14,1,param_3);
  FUN_0114c4f0(*piVar13,&local_64);
  FUN_0114c580(*piVar13,&local_64);
  FUN_0114c610(*piVar13,&local_64);
  if (*(int *)(iVar7 + 0xd0) != 0) {
    local_28[0] = local_28[4] * 2;
    local_38 = 0;
    if (0 < *(int *)(iVar7 + 0xd0)) {
      param_3 = 0;
      do {
        puVar5 = (ushort *)(*(int *)(iVar7 + 0xd8) + param_3);
        iVar10 = (uint)*puVar5 * 0x10 + *(int *)(iVar7 + 0xa0);
        iVar9 = 0;
        psVar1 = (short *)(iVar10 + 4);
        *psVar1 = *psVar1 - (short)local_28[0];
        psVar1 = (short *)(iVar10 + 6);
        *psVar1 = *psVar1 - (short)local_28[0];
        local_3c = (ushort *)0x0;
        if (0 < *(int *)(puVar5 + 4)) {
          do {
            if (-1 < param_2[*(ushort *)(*(int *)(puVar5 + 2) + (int)local_3c * 2)]) {
              *(short *)(*(int *)(puVar5 + 2) + iVar9 * 2) =
                   (short)param_2[*(ushort *)(*(int *)(puVar5 + 2) + (int)local_3c * 2)];
              iVar9 = iVar9 + 1;
            }
            local_3c = (ushort *)((int)local_3c + 1);
            iVar7 = local_8;
          } while ((int)local_3c < *(int *)(puVar5 + 4));
        }
        local_3c = puVar5 + 2;
        if ((int)(*(uint *)(puVar5 + 6) & 0x3fffffff) < iVar9) {
          iVar10 = (*(uint *)(puVar5 + 6) & 0x3fffffff) * 2;
          if (iVar10 <= iVar9) {
            iVar10 = iVar9;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_3c,iVar10,2);
        }
        param_3 = param_3 + 0x10;
        local_38 = local_38 + 1;
        *(int *)(local_3c + 2) = iVar9;
      } while (local_38 < *(int *)(iVar7 + 0xd0));
    }
  }
  iVar7 = 0;
  if (0 < local_54) {
    do {
      FUN_01142310(*(undefined4 *)(local_58 + iVar7 * 4));
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_54);
  }
  if (-1 < (int)local_40) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,(int)local_40 << 4);
  }
  if (-1 < local_44) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_28[3],local_44 * 4);
  }
  if (-1 < local_48) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(param_2,local_48 * 4);
  }
  local_54 = 0;
  if (-1 < local_50) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_58,local_50 * 4);
  }
  local_58 = 0;
  local_50 = 0x80000000;
  if (-1 < local_4c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_c,local_4c << 4);
  }
  return;
}

// 0114A480  FUN_0114a480  size=114  [run]
void FUN_0114a480(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_2 = *param_1 >> 0xf;
  param_2[1] = param_1[1] >> 0xf;
  param_2[2] = param_1[2] >> 0xf;
  uVar1 = param_1[4] >> 0xf;
  if (uVar1 != 0xffff) {
    uVar1 = uVar1 + 1;
  }
  param_2[4] = uVar1 | 1;
  uVar1 = param_1[5] >> 0xf;
  if (uVar1 != 0xffff) {
    uVar1 = uVar1 + 1;
  }
  param_2[5] = uVar1 | 1;
  uVar1 = param_1[6] >> 0xf;
  if (uVar1 != 0xffff) {
    uVar1 = uVar1 + 1;
  }
  param_2[6] = uVar1 | 1;
  *param_2 = *param_2 & 0xfffe;
  param_2[1] = param_2[1] & 0xfffe;
  param_2[2] = param_2[2] & 0xfffe;
  return;
}

// 0114A520  FUN_0114a520  size=27  [run]
uint __thiscall FUN_0114a520(int *param_1,int *param_2)

{
  return (param_1[1] - *param_2 | param_2[1] - *param_1) & 0x80008000;
}

// 0114A540  FUN_0114a540  size=53  [run]
ushort __thiscall FUN_0114a540(short *param_1,short *param_2)

{
  return (param_1[5] - param_2[4] | param_2[5] - param_1[4] | param_1[2] - *param_2 |
         param_2[2] - *param_1) & 0x8000;
}

// 0114A580  FUN_0114a580  size=55  [run]
ushort __thiscall FUN_0114a580(int param_1,int param_2)

{
  return (*(short *)(param_1 + 10) - *(short *)(param_2 + 8) |
          *(short *)(param_2 + 10) - *(short *)(param_1 + 8) |
          *(short *)(param_1 + 6) - *(short *)(param_2 + 2) |
         *(short *)(param_2 + 6) - *(short *)(param_1 + 2)) & 0x8000;
}

// 0114A5C0  FUN_0114a5c0  size=45  [run]
void FUN_0114a5c0(int param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  *(float *)(param_2 + param_1 * 4) =
       (float)*param_3 * *(float *)(param_4 + param_1 * 4) - *(float *)(param_5 + param_1 * 4);
  return;
}

// 0114A5F0  FUN_0114a5f0  size=74  [run]
undefined4 FUN_0114a5f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (fVar2 <= fVar1) {
    if (fVar2 < fVar3) {
      *param_2 = fVar2;
      return 1;
    }
  }
  else if (fVar1 < fVar3) {
    *param_2 = fVar1;
    return 0;
  }
  *param_2 = fVar3;
  return 2;
}

// 0114A640  FUN_0114a640  size=18  [run]
void __thiscall FUN_0114a640(undefined4 *param_1,undefined4 *param_2)

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

// 0114A660  FUN_0114a660  size=20  [run]
void __thiscall FUN_0114a660(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0114A680  FUN_0114a680  size=53  [run]
int __thiscall FUN_0114a680(int *param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    psVar1 = (short *)(*param_1 + param_3 * 2);
    do {
      if (*psVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      psVar1 = psVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0114A6C0  FUN_0114a6c0  size=32  [run]
void __thiscall FUN_0114a6c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0114A710  FUN_0114a710  size=15  [run]
int __thiscall FUN_0114a710(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114A720  FUN_0114a720  size=15  [run]
int __thiscall FUN_0114a720(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114A7B0  FUN_0114a7b0  size=15  [run]
int __thiscall FUN_0114a7b0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0114A7C0  FUN_0114a7c0  size=15  [run]
int __thiscall FUN_0114a7c0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0114A7E0  FUN_0114a7e0  size=73  [run]
void __thiscall FUN_0114a7e0(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  auVar5._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar5._4_4_ = fVar2 - (float)(-(uint)(2.1474836e+09 <= fVar2) & 0x4f000000);
  auVar5._8_4_ = fVar3 - (float)(-(uint)(2.1474836e+09 <= fVar3) & 0x4f000000);
  auVar5._12_4_ = fVar4 - (float)(-(uint)(2.1474836e+09 <= fVar4) & 0x4f000000);
  auVar5 = maxps(auVar5,ZEXT816(0));
  *param_1 = (int)auVar5._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  param_1[1] = (int)auVar5._4_4_ + (uint)(2.1474836e+09 <= fVar2) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar2);
  param_1[2] = (int)auVar5._8_4_ + (uint)(2.1474836e+09 <= fVar3) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar3);
  param_1[3] = (int)auVar5._12_4_ + (uint)(2.1474836e+09 <= fVar4) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar4);
  return;
}

// 0114A850  FUN_0114a850  size=11  [run]
int FUN_0114a850(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0114A920  FUN_0114a920  size=98  [run]
void FUN_0114a920(float *param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],uint *param_6)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  undefined1 auVar6 [16];
  
  auVar2._0_4_ = (*param_1 + *param_2) * *param_3;
  auVar2._4_4_ = (param_1[1] + param_2[1]) * param_3[1];
  auVar2._8_4_ = (param_1[2] + param_2[2]) * param_3[2];
  auVar2._12_4_ = (param_1[3] + param_2[3]) * param_3[3];
  auVar2 = minps(auVar2,*param_5);
  auVar2 = maxps(auVar2,*param_4);
  fVar1 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  fVar5 = auVar2._12_4_;
  auVar6._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar6._4_4_ = fVar3 - (float)(-(uint)(2.1474836e+09 <= fVar3) & 0x4f000000);
  auVar6._8_4_ = fVar4 - (float)(-(uint)(2.1474836e+09 <= fVar4) & 0x4f000000);
  auVar6._12_4_ = fVar5 - (float)(-(uint)(2.1474836e+09 <= fVar5) & 0x4f000000);
  auVar2 = maxps(auVar6,ZEXT816(0));
  *param_6 = (int)auVar2._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  param_6[1] = (int)auVar2._4_4_ + (uint)(2.1474836e+09 <= fVar3) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar3);
  param_6[2] = (int)auVar2._8_4_ + (uint)(2.1474836e+09 <= fVar4) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar4);
  param_6[3] = (int)auVar2._12_4_ + (uint)(2.1474836e+09 <= fVar5) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar5);
  return;
}

// 0114A990  FUN_0114a990  size=176  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0114a990(float *param_1,float *param_2,float *param_3,float *param_4,uint *param_5)

{
  float fVar1;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar4 = _DAT_01b34420;
  auVar2._0_4_ = (*param_1 + *param_2) * *param_4;
  auVar2._4_4_ = (param_1[1] + param_2[1]) * param_4[1];
  auVar2._8_4_ = (param_1[2] + param_2[2]) * param_4[2];
  auVar2._12_4_ = (param_1[3] + param_2[3]) * param_4[3];
  auVar2 = minps(auVar2,_DAT_01b34420);
  auVar8 = ZEXT816(0);
  auVar2 = maxps(auVar2,auVar8);
  fVar1 = auVar2._0_4_;
  fVar5 = auVar2._4_4_;
  fVar6 = auVar2._8_4_;
  fVar7 = auVar2._12_4_;
  auVar9._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar9._4_4_ = fVar5 - (float)(-(uint)(2.1474836e+09 <= fVar5) & 0x4f000000);
  auVar9._8_4_ = fVar6 - (float)(-(uint)(2.1474836e+09 <= fVar6) & 0x4f000000);
  auVar9._12_4_ = fVar7 - (float)(-(uint)(2.1474836e+09 <= fVar7) & 0x4f000000);
  auVar2 = maxps(auVar9,auVar8);
  *param_5 = (int)auVar2._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  param_5[1] = (int)auVar2._4_4_ + (uint)(2.1474836e+09 <= fVar5) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar5);
  param_5[2] = (int)auVar2._8_4_ + (uint)(2.1474836e+09 <= fVar6) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar6);
  param_5[3] = (int)auVar2._12_4_ + (uint)(2.1474836e+09 <= fVar7) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar7);
  auVar3._0_4_ = (param_1[4] + *param_3) * *param_4;
  auVar3._4_4_ = (param_1[5] + param_3[1]) * param_4[1];
  auVar3._8_4_ = (param_1[6] + param_3[2]) * param_4[2];
  auVar3._12_4_ = (param_1[7] + param_3[3]) * param_4[3];
  auVar4 = minps(auVar3,auVar4);
  auVar4 = maxps(auVar4,auVar8);
  fVar1 = auVar4._0_4_;
  fVar5 = auVar4._4_4_;
  fVar6 = auVar4._8_4_;
  fVar7 = auVar4._12_4_;
  auVar4._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar4._4_4_ = fVar5 - (float)(-(uint)(2.1474836e+09 <= fVar5) & 0x4f000000);
  auVar4._8_4_ = fVar6 - (float)(-(uint)(2.1474836e+09 <= fVar6) & 0x4f000000);
  auVar4._12_4_ = fVar7 - (float)(-(uint)(2.1474836e+09 <= fVar7) & 0x4f000000);
  auVar4 = maxps(auVar4,auVar8);
  param_5[4] = (int)auVar4._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar1);
  param_5[5] = (int)auVar4._4_4_ + (uint)(2.1474836e+09 <= fVar5) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar5);
  param_5[6] = (int)auVar4._8_4_ + (uint)(2.1474836e+09 <= fVar6) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar6);
  param_5[7] = (int)auVar4._12_4_ + (uint)(2.1474836e+09 <= fVar7) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar7);
  return;
}

// 0114AA40  FUN_0114aa40  size=15  [run]
int __thiscall FUN_0114aa40(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0114AA50  FUN_0114aa50  size=15  [run]
int __thiscall FUN_0114aa50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114AAA0  FUN_0114aaa0  size=15  [run]
int __thiscall FUN_0114aaa0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114AAD0  FUN_0114aad0  size=15  [run]
int __thiscall FUN_0114aad0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114AAF0  FUN_0114aaf0  size=21  [run]
void FUN_0114aaf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0114AB10  FUN_0114ab10  size=15  [run]
int __thiscall FUN_0114ab10(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114AB30  FUN_0114ab30  size=15  [run]
int __thiscall FUN_0114ab30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114AB40  FUN_0114ab40  size=11  [run]
int FUN_0114ab40(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0114AB50  FUN_0114ab50  size=11  [run]
int FUN_0114ab50(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0114AB60  FUN_0114ab60  size=21  [run]
void FUN_0114ab60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0114AB80  FUN_0114ab80  size=21  [run]
void FUN_0114ab80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0114ABA0  FUN_0114aba0  size=12  [run]
void __thiscall FUN_0114aba0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0114ABE0  FUN_0114abe0  size=17  [run]
void FUN_0114abe0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 0114AC20  FUN_0114ac20  size=24  [run]
void __thiscall
FUN_0114ac20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0114AC40  FUN_0114ac40  size=34  [run]
void FUN_0114ac40(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0114ACA0  FUN_0114aca0  size=24  [run]
void __thiscall
FUN_0114aca0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0114AD60  FUN_0114ad60  size=24  [run]
void __thiscall
FUN_0114ad60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0114AD80  FUN_0114ad80  size=50  [run]
undefined4 __thiscall FUN_0114ad80(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0114ADE0  FUN_0114ade0  size=34  [run]
void FUN_0114ade0(int param_1,int param_2,undefined4 *param_3)

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

// 0114AE10  FUN_0114ae10  size=49  [run]
undefined4 __thiscall FUN_0114ae10(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

// 0114AE80  FUN_0114ae80  size=24  [run]
void __thiscall
FUN_0114ae80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0114AEA0  FUN_0114aea0  size=50  [run]
undefined4 __thiscall FUN_0114aea0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0114AF20  FUN_0114af20  size=24  [run]
void __thiscall
FUN_0114af20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0114AF40  FUN_0114af40  size=50  [run]
undefined4 __thiscall FUN_0114af40(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0114AFA0  FUN_0114afa0  size=26  [run]
void __thiscall FUN_0114afa0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0114AFD0  FUN_0114afd0  size=25  [run]
void __thiscall FUN_0114afd0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 0114AFF0  FUN_0114aff0  size=28  [run]
void __thiscall FUN_0114aff0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0114B010  FUN_0114b010  size=11  [run]
int FUN_0114b010(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0114B020  FUN_0114b020  size=26  [run]
void __thiscall FUN_0114b020(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0114B050  FUN_0114b050  size=26  [run]
void __thiscall FUN_0114b050(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0114B080  FUN_0114b080  size=26  [run]
void __thiscall FUN_0114b080(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0114B0A0  FUN_0114b0a0  size=65  [run]
undefined4 FUN_0114b0a0(ushort *param_1,ushort *param_2)

{
  if ((*param_2 <= *param_1) && ((*param_1 != *param_2 || (param_2[1] <= param_1[1])))) {
    return 0;
  }
  return 1;
}

// 0114B0F0  FUN_0114b0f0  size=24  [run]
void __thiscall FUN_0114b0f0(ushort *param_1,undefined4 param_2,ushort *param_3)

{
  *(bool *)param_2 = *param_1 < *param_3;
  return;
}

// 0114B150  FUN_0114b150  size=37  [run]
void FUN_0114b150(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0114B180  FUN_0114b180  size=39  [run]
void FUN_0114b180(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 0114B1B0  FUN_0114b1b0  size=31  [run]
void __thiscall FUN_0114b1b0(int param_1,int param_2,int param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + *(int *)(&DAT_01b214fc + (param_3 + param_2 * 2) * 4)) = param_4;
  return;
}

// 0114B1D0  FUN_0114b1d0  size=16  [run]
int __thiscall FUN_0114b1d0(int param_1,int param_2)

{
  return (*(uint *)(param_1 + 0xc) & 0xfffffffe) + param_2;
}

// 0114B450  FUN_0114b450  size=32  [run]
void __thiscall FUN_0114b450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0114B4F0  FUN_0114b4f0  size=30  [run]
void __thiscall FUN_0114b4f0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined2 *)(*param_1 + param_2 * 2) = *(undefined2 *)(*param_1 + param_1[1] * 2);
  }
  return;
}

// 0114B510  FUN_0114b510  size=29  [run]
void __thiscall FUN_0114b510(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0114B530  FUN_0114b530  size=52  [run]
undefined4 __thiscall FUN_0114b530(int param_1,undefined4 param_2,int param_3)

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

// 0114B570  FUN_0114b570  size=55  [run]
void __thiscall FUN_0114b570(int param_1,undefined4 param_2,int param_3)

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

// 0114B5B0  FUN_0114b5b0  size=13  [run]
void __thiscall FUN_0114b5b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0114B5C0  FUN_0114b5c0  size=52  [run]
undefined4 __thiscall FUN_0114b5c0(int param_1,undefined4 param_2,int param_3)

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

// 0114B600  FUN_0114b600  size=55  [run]
void __thiscall FUN_0114b600(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0114B640  FUN_0114b640  size=13  [run]
void __thiscall FUN_0114b640(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0114B650  FUN_0114b650  size=53  [run]
int __thiscall FUN_0114b650(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0114B690  FUN_0114b690  size=70  [run]
int __thiscall FUN_0114b690(int *param_1,undefined4 param_2,int param_3)

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

// 0114B6E0  FUN_0114b6e0  size=51  [run]
int __thiscall FUN_0114b6e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0114B720  FUN_0114b720  size=161  [run]
void FUN_0114b720(int param_1,int param_2,int param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = *(ushort *)(param_3 + 8);
  uVar6 = (uint)uVar5;
  psVar3 = (short *)(*(int *)(param_1 + 0xac) + uVar6 * 4);
  psVar4 = psVar3;
  if (*psVar3 == psVar3[-2]) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + 8 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  *(ushort *)(param_3 + 8) = uVar5;
  uVar5 = *(ushort *)(param_3 + 10);
  uVar6 = (uint)uVar5;
  iVar2 = *(int *)(param_1 + 0xac);
  psVar3 = (short *)(iVar2 + uVar6 * 4);
  psVar4 = psVar3;
  if (*(short *)(iVar2 + uVar6 * 4) == *(short *)(iVar2 + -4 + uVar6 * 4)) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + 10 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  *(ushort *)(param_3 + 10) = uVar5;
  return;
}

// 0114B7D0  FUN_0114b7d0  size=161  [run]
void FUN_0114b7d0(int param_1,int param_2,ushort *param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = *param_3;
  uVar6 = (uint)uVar5;
  psVar3 = (short *)(*(int *)(param_1 + 0xb8) + uVar6 * 4);
  psVar4 = psVar3;
  if (*psVar3 == psVar3[-2]) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  *param_3 = uVar5;
  uVar5 = param_3[2];
  uVar6 = (uint)uVar5;
  iVar2 = *(int *)(param_1 + 0xb8);
  psVar3 = (short *)(iVar2 + uVar6 * 4);
  psVar4 = psVar3;
  if (*(short *)(iVar2 + uVar6 * 4) == *(short *)(iVar2 + -4 + uVar6 * 4)) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + 4 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  param_3[2] = uVar5;
  return;
}

// 0114B880  FUN_0114b880  size=161  [run]
void FUN_0114b880(int param_1,int param_2,int param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = *(ushort *)(param_3 + 2);
  uVar6 = (uint)uVar5;
  psVar3 = (short *)(*(int *)(param_1 + 0xc4) + uVar6 * 4);
  psVar4 = psVar3;
  if (*psVar3 == psVar3[-2]) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + 2 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  *(ushort *)(param_3 + 2) = uVar5;
  uVar5 = *(ushort *)(param_3 + 6);
  uVar6 = (uint)uVar5;
  iVar2 = *(int *)(param_1 + 0xc4);
  psVar3 = (short *)(iVar2 + uVar6 * 4);
  psVar4 = psVar3;
  if (*(short *)(iVar2 + uVar6 * 4) == *(short *)(iVar2 + -4 + uVar6 * 4)) {
    do {
      uVar5 = (ushort)uVar6;
      psVar4 = psVar3;
      if ((ushort)psVar3[-1] <= param_4) break;
      *(undefined4 *)psVar3 = *(undefined4 *)(psVar3 + -2);
      psVar4 = psVar3 + -2;
      *(ushort *)(param_2 + 6 + (uint)(ushort)psVar3[-1] * 0x10) = uVar5;
      uVar6 = uVar6 - 1;
      uVar5 = (ushort)uVar6;
      psVar1 = psVar3 + -4;
      psVar3 = psVar4;
    } while (*psVar4 == *psVar1);
  }
  psVar4[1] = (short)param_4;
  *(ushort *)(param_3 + 6) = uVar5;
  return;
}

// 0114B930  FUN_0114b930  size=36  [run]
void FUN_0114b930(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 << 4);
  return;
}

// 0114B960  FUN_0114b960  size=33  [run]
void FUN_0114b960(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 0114B990  FUN_0114b990  size=106  [run]
undefined4 * __thiscall FUN_0114b990(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0114b9e6;
  }
  iVar3 = -0x80000000;
LAB_0114b9e6:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BA00  FUN_0114ba00  size=45  [run]
undefined4 __thiscall FUN_0114ba00(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0x20);
    return uVar1;
  }
  return 0;
}

// 0114BA30  FUN_0114ba30  size=13  [run]
void __thiscall FUN_0114ba30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0114BA40  FUN_0114ba40  size=106  [run]
undefined4 * __thiscall FUN_0114ba40(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0114ba96;
  }
  iVar3 = -0x80000000;
LAB_0114ba96:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BAC0  FUN_0114bac0  size=25  [run]
void __thiscall FUN_0114bac0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0114BAE0  FUN_0114bae0  size=45  [run]
undefined4 __thiscall FUN_0114bae0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 0114BB10  FUN_0114bb10  size=152  [run]
void __thiscall FUN_0114bb10(int *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (ushort *)(*param_1 + -4 + (param_3 - param_5) * 4);
  puVar4 = param_4 + param_5 * 2 + -2;
  uVar2 = *puVar5;
  param_3 = param_3 + -1;
  puVar6 = (undefined4 *)(*param_1 + param_3 * 4);
  do {
    uVar3 = *puVar4;
    while (uVar3 < uVar2) {
      *puVar6 = *(undefined4 *)puVar5;
      uVar2 = *puVar5;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + -2;
      *(short *)((uint)*puVar1 * 0x10 + *(int *)(&DAT_01b214fc + (uVar2 & 1) * 4) + param_2) =
           (short)param_3;
      puVar6 = puVar6 + -1;
      param_3 = param_3 + -1;
      uVar2 = *puVar5;
    }
    *puVar6 = *(undefined4 *)puVar4;
    *(short *)((uint)puVar4[1] * 0x10 + *(int *)(&DAT_01b214fc + (*puVar4 & 1) * 4) + param_2) =
         (short)param_3;
    puVar4 = puVar4 + -2;
    puVar6 = puVar6 + -1;
    param_3 = param_3 + -1;
  } while (param_4 <= puVar4);
  return;
}

// 0114BBB0  FUN_0114bbb0  size=152  [run]
void __thiscall FUN_0114bbb0(int *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (ushort *)(*param_1 + -4 + (param_3 - param_5) * 4);
  puVar4 = param_4 + param_5 * 2 + -2;
  uVar2 = *puVar5;
  param_3 = param_3 + -1;
  puVar6 = (undefined4 *)(*param_1 + param_3 * 4);
  do {
    uVar3 = *puVar4;
    while (uVar3 < uVar2) {
      *puVar6 = *(undefined4 *)puVar5;
      uVar2 = *puVar5;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + -2;
      *(short *)((uint)*puVar1 * 0x10 + *(int *)(&DAT_01b21504 + (uVar2 & 1) * 4) + param_2) =
           (short)param_3;
      puVar6 = puVar6 + -1;
      param_3 = param_3 + -1;
      uVar2 = *puVar5;
    }
    *puVar6 = *(undefined4 *)puVar4;
    *(short *)((uint)puVar4[1] * 0x10 + *(int *)(&DAT_01b21504 + (*puVar4 & 1) * 4) + param_2) =
         (short)param_3;
    puVar4 = puVar4 + -2;
    puVar6 = puVar6 + -1;
    param_3 = param_3 + -1;
  } while (param_4 <= puVar4);
  return;
}

// 0114BC50  FUN_0114bc50  size=152  [run]
void __thiscall FUN_0114bc50(int *param_1,int param_2,int param_3,ushort *param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (ushort *)(*param_1 + -4 + (param_3 - param_5) * 4);
  puVar4 = param_4 + param_5 * 2 + -2;
  uVar2 = *puVar5;
  param_3 = param_3 + -1;
  puVar6 = (undefined4 *)(*param_1 + param_3 * 4);
  do {
    uVar3 = *puVar4;
    while (uVar3 < uVar2) {
      *puVar6 = *(undefined4 *)puVar5;
      uVar2 = *puVar5;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + -2;
      *(short *)((uint)*puVar1 * 0x10 + *(int *)(&DAT_01b2150c + (uVar2 & 1) * 4) + param_2) =
           (short)param_3;
      puVar6 = puVar6 + -1;
      param_3 = param_3 + -1;
      uVar2 = *puVar5;
    }
    *puVar6 = *(undefined4 *)puVar4;
    *(short *)((uint)puVar4[1] * 0x10 + *(int *)(&DAT_01b2150c + (*puVar4 & 1) * 4) + param_2) =
         (short)param_3;
    puVar4 = puVar4 + -2;
    puVar6 = puVar6 + -1;
    param_3 = param_3 + -1;
  } while (param_4 <= puVar4);
  return;
}

// 0114BCF0  FUN_0114bcf0  size=105  [run]
undefined4 * __thiscall FUN_0114bcf0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 << 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_0114bd45;
  }
  iVar3 = -0x80000000;
LAB_0114bd45:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BD60  FUN_0114bd60  size=106  [run]
undefined4 * __thiscall FUN_0114bd60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0114bdb6;
  }
  iVar3 = -0x80000000;
LAB_0114bdb6:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BDD0  FUN_0114bdd0  size=45  [run]
undefined4 __thiscall FUN_0114bdd0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 0114BE00  FUN_0114be00  size=106  [run]
undefined4 * __thiscall FUN_0114be00(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0114be56;
  }
  iVar3 = -0x80000000;
LAB_0114be56:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BE70  FUN_0114be70  size=55  [run]
void __thiscall FUN_0114be70(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_2;
  auVar5 = rcpps(in_XMM2,auVar1);
  fVar2 = (2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_;
  fVar3 = (2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_;
  fVar4 = (2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_;
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = (2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_;
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = 1.0;
  return;
}

// 0114BEB0  FUN_0114beb0  size=106  [run]
undefined4 * __thiscall FUN_0114beb0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0114bf06;
  }
  iVar3 = -0x80000000;
LAB_0114bf06:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0114BF20  FUN_0114bf20  size=15  [run]
int __thiscall FUN_0114bf20(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0114BF30  FUN_0114bf30  size=62  [run]
void FUN_0114bf30(int param_1)

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

// 0114BF70  FUN_0114bf70  size=73  [run]
void FUN_0114bf70(int param_1,int param_2)

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

// 0114BFD0  FUN_0114bfd0  size=61  [run]
void __thiscall FUN_0114bfd0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C010  FUN_0114c010  size=60  [run]
void __thiscall FUN_0114c010(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C050  FUN_0114c050  size=40  [run]
void FUN_0114c050(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 0114C080  FUN_0114c080  size=61  [run]
void __thiscall FUN_0114c080(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C0C0  FUN_0114c0c0  size=62  [run]
void FUN_0114c0c0(int param_1)

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

// 0114C100  FUN_0114c100  size=73  [run]
void FUN_0114c100(int param_1,int param_2)

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

// 0114C160  FUN_0114c160  size=173  [run]
void FUN_0114c160(int param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  
  do {
    uVar2 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar7 = param_2;
    do {
      while( true ) {
        uVar1 = *(ushort *)(param_1 + iVar7 * 4);
        uVar5 = (ushort)uVar2;
        if ((uVar5 <= uVar1) &&
           ((uVar6 = (ushort)((uint)uVar2 >> 0x10), uVar1 != uVar5 ||
            (uVar6 <= *(ushort *)(param_1 + 2 + iVar7 * 4))))) break;
        iVar7 = iVar7 + 1;
      }
      for (; (uVar1 = *(ushort *)(param_1 + iVar4 * 4), uVar5 < uVar1 ||
             ((uVar5 == uVar1 && (uVar6 < *(ushort *)(param_1 + 2 + iVar4 * 4)))));
          iVar4 = iVar4 + -1) {
      }
      if (iVar4 < iVar7) break;
      if (iVar4 != iVar7) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
        *(undefined4 *)(param_1 + iVar7 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar4);
    if (param_2 < iVar4) {
      FUN_0114c160(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 0114C240  FUN_0114c240  size=23  [run]
bool FUN_0114c240(ushort *param_1,ushort *param_2)

{
  return *param_1 < *param_2;
}

// 0114C260  FUN_0114c260  size=53  [run]
undefined4 __thiscall FUN_0114c260(int param_1,int param_2)

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

// 0114C2A0  FUN_0114c2a0  size=56  [run]
void __thiscall FUN_0114c2a0(int param_1,int param_2)

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

// 0114C2E0  FUN_0114c2e0  size=53  [run]
undefined4 __thiscall FUN_0114c2e0(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 0114C320  FUN_0114c320  size=56  [run]
void __thiscall FUN_0114c320(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0114C360  FUN_0114c360  size=48  [run]
int __fastcall FUN_0114c360(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0114C390  FUN_0114c390  size=71  [run]
int __thiscall FUN_0114c390(int *param_1,int param_2)

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

// 0114C3E0  FUN_0114c3e0  size=46  [run]
int __fastcall FUN_0114c3e0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0114C410  FUN_0114c410  size=46  [run]
undefined4 __thiscall FUN_0114c410(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 0114C440  FUN_0114c440  size=46  [run]
undefined4 __thiscall FUN_0114c440(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 0114C470  FUN_0114c470  size=46  [run]
undefined4 __thiscall FUN_0114c470(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0x20);
    return uVar1;
  }
  return 0;
}

// 0114C4A0  FUN_0114c4a0  size=67  [run]
void __thiscall FUN_0114c4a0(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 0114C4F0  FUN_0114c4f0  size=140  [run]
void __thiscall FUN_0114c4f0(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  puVar3 = (ushort *)*param_1;
  puVar1 = puVar3 + param_1[1] * 2;
  iVar5 = 0;
  puVar4 = puVar3;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 2) {
    iVar2 = *(int *)(*param_3 + (uint)puVar3[1] * 4);
    if (-1 < iVar2) {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
      puVar4[1] = (ushort)iVar2;
      *(short *)(iVar2 * 0x10 + *(int *)(&DAT_01b214fc + (*puVar3 & 1) * 4) + param_2) =
           (short)iVar5;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + 1;
    }
  }
  if ((int)(param_1[2] & 0x3fffffff) < iVar5) {
    iVar2 = (param_1[2] & 0x3fffffff) * 2;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  param_1[1] = iVar5;
  return;
}

// 0114C580  FUN_0114c580  size=140  [run]
void __thiscall FUN_0114c580(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  puVar3 = (ushort *)*param_1;
  puVar1 = puVar3 + param_1[1] * 2;
  iVar5 = 0;
  puVar4 = puVar3;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 2) {
    iVar2 = *(int *)(*param_3 + (uint)puVar3[1] * 4);
    if (-1 < iVar2) {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
      puVar4[1] = (ushort)iVar2;
      *(short *)(iVar2 * 0x10 + *(int *)(&DAT_01b21504 + (*puVar3 & 1) * 4) + param_2) =
           (short)iVar5;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + 1;
    }
  }
  if ((int)(param_1[2] & 0x3fffffff) < iVar5) {
    iVar2 = (param_1[2] & 0x3fffffff) * 2;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  param_1[1] = iVar5;
  return;
}

// 0114C610  FUN_0114c610  size=140  [run]
void __thiscall FUN_0114c610(undefined4 *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  puVar3 = (ushort *)*param_1;
  puVar1 = puVar3 + param_1[1] * 2;
  iVar5 = 0;
  puVar4 = puVar3;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 2) {
    iVar2 = *(int *)(*param_3 + (uint)puVar3[1] * 4);
    if (-1 < iVar2) {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
      puVar4[1] = (ushort)iVar2;
      *(short *)(iVar2 * 0x10 + *(int *)(&DAT_01b2150c + (*puVar3 & 1) * 4) + param_2) =
           (short)iVar5;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + 1;
    }
  }
  if ((int)(param_1[2] & 0x3fffffff) < iVar5) {
    iVar2 = (param_1[2] & 0x3fffffff) * 2;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  param_1[1] = iVar5;
  return;
}

// 0114C6A0  FUN_0114c6a0  size=90  [run]
int * __thiscall FUN_0114c6a0(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 0114C750  FUN_0114c750  size=61  [run]
void __fastcall FUN_0114c750(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C790  FUN_0114c790  size=60  [run]
void __fastcall FUN_0114c790(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C7D0  FUN_0114c7d0  size=61  [run]
void __fastcall FUN_0114c7d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C810  FUN_0114c810  size=61  [run]
void __fastcall FUN_0114c810(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C850  FUN_0114c850  size=61  [run]
void __fastcall FUN_0114c850(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C890  FUN_0114c890  size=60  [run]
void __fastcall FUN_0114c890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C8D0  FUN_0114c8d0  size=63  [run]
void __thiscall FUN_0114c8d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114C910  FUN_0114c910  size=215  [run]
void FUN_0114c910(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
    }
    puVar1 = (undefined4 *)(*param_5 + param_5[1] * 8);
    param_5[1] = param_5[1] + 1;
    *puVar1 = *(undefined4 *)(param_2 + 0xc);
    puVar1[1] = *(undefined4 *)(param_1 + 0xc);
  }
  else if (param_4 != 1) {
    param_3 = (*(uint *)(param_1 + 0xc) & 0xfffffffe) + param_3;
    sVar4 = (short)**(undefined4 **)(param_2 + 0xc);
    if (param_4 == 0) {
      if (*(uint *)(param_3 + 8) == (*(uint *)(param_3 + 0xc) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_3 + 4),2);
      }
      *(short *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 2) = sVar4;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      return;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      psVar3 = *(short **)(param_3 + 4);
      do {
        if (*psVar3 == sVar4) goto LAB_0114c990;
        iVar2 = iVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar2 < *(int *)(param_3 + 8));
    }
    iVar2 = -1;
LAB_0114c990:
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    if (*(int *)(param_3 + 8) != iVar2) {
      *(undefined2 *)(*(int *)(param_3 + 4) + iVar2 * 2) =
           *(undefined2 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 2);
      return;
    }
  }
  return;
}

// 0114C9F0  FUN_0114c9f0  size=215  [run]
void FUN_0114c9f0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  
  if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
    }
    puVar1 = (undefined4 *)(*param_5 + param_5[1] * 8);
    param_5[1] = param_5[1] + 1;
    *puVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar1[1] = *(undefined4 *)(param_2 + 0xc);
  }
  else if (param_4 != 1) {
    param_3 = (*(uint *)(param_2 + 0xc) & 0xfffffffe) + param_3;
    sVar4 = (short)**(undefined4 **)(param_1 + 0xc);
    if (param_4 == 0) {
      if (*(uint *)(param_3 + 8) == (*(uint *)(param_3 + 0xc) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_3 + 4),2);
      }
      *(short *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 2) = sVar4;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      return;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      psVar3 = *(short **)(param_3 + 4);
      do {
        if (*psVar3 == sVar4) goto LAB_0114ca70;
        iVar2 = iVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar2 < *(int *)(param_3 + 8));
    }
    iVar2 = -1;
LAB_0114ca70:
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    if (*(int *)(param_3 + 8) != iVar2) {
      *(undefined2 *)(*(int *)(param_3 + 4) + iVar2 * 2) =
           *(undefined2 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 2);
      return;
    }
  }
  return;
}

// 0114CAD0  FUN_0114cad0  size=33  [run]
void FUN_0114cad0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0114c160(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0114CB00  FUN_0114cb00  size=61  [run]
void __thiscall FUN_0114cb00(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114CB40  FUN_0114cb40  size=61  [run]
void __thiscall FUN_0114cb40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114CB80  FUN_0114cb80  size=147  [run]
void FUN_0114cb80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  
  do {
    uVar2 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar6 = param_2;
    do {
      uVar5 = (ushort)uVar2;
      uVar1 = *(ushort *)(param_1 + iVar6 * 4);
      while (uVar1 < uVar5) {
        iVar6 = iVar6 + 1;
        uVar1 = *(ushort *)(param_1 + iVar6 * 4);
      }
      uVar1 = *(ushort *)(param_1 + iVar4 * 4);
      while (uVar5 < uVar1) {
        iVar4 = iVar4 + -1;
        uVar1 = *(ushort *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar6) break;
      if (iVar4 != iVar6) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar4);
    if (param_2 < iVar4) {
      FUN_0114cb80(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 0114CC20  FUN_0114cc20  size=236  [run]
void __thiscall FUN_0114cc20(int param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  
  iVar3 = param_2;
  iVar2 = param_3;
  if (((*(byte *)(param_3 + 0xc) & 1) == 0) &&
     (iVar3 = param_3, iVar2 = param_2, (*(byte *)(param_2 + 0xc) & 1) == 0)) {
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
    }
    puVar1 = (undefined4 *)(*param_4 + param_4[1] * 8);
    param_4[1] = param_4[1] + 1;
    *puVar1 = *(undefined4 *)(param_2 + 0xc);
    puVar1[1] = *(undefined4 *)(param_3 + 0xc);
    return;
  }
  iVar2 = (*(uint *)(iVar2 + 0xc) & 0xfffffffe) + *(int *)(param_1 + 0xd8);
  sVar5 = (short)(iVar3 - *(int *)(param_1 + 0xa0) >> 4);
  if (param_5 != '\0') {
    if (*(uint *)(iVar2 + 8) == (*(uint *)(iVar2 + 0xc) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 4),2);
    }
    *(short *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 2) = sVar5;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    psVar4 = *(short **)(iVar2 + 4);
    do {
      if (*psVar4 == sVar5) goto LAB_0114ccf0;
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < *(int *)(iVar2 + 8));
  }
  iVar3 = -1;
LAB_0114ccf0:
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  if (*(int *)(iVar2 + 8) != iVar3) {
    *(undefined2 *)(*(int *)(iVar2 + 4) + iVar3 * 2) =
         *(undefined2 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 2);
  }
  return;
}

// 0114CD10  FUN_0114cd10  size=68  [run]
void __thiscall FUN_0114cd10(int *param_1,undefined4 *param_2)

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

// 0114CD60  FUN_0114cd60  size=61  [run]
void __fastcall FUN_0114cd60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114CDA0  FUN_0114cda0  size=60  [run]
void __fastcall FUN_0114cda0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114CDE0  FUN_0114cde0  size=742  [run]
void FUN_0114cde0(int param_1,int param_2,int *param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = (uint)*(ushort *)(param_3 + 2);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar9 * 4);
  uVar3 = *(ushort *)(puVar10 + -1);
  while (uVar8 = (undefined2)uVar9, param_5 < uVar3) {
    piVar6 = (int *)((uint)*(ushort *)((int)puVar10 + -2) * 0x10 + param_2);
    *puVar10 = puVar10[-1];
    if ((uVar3 & 1) == 0) {
      *(undefined2 *)(piVar6 + 2) = uVar8;
    }
    else {
      iVar4 = param_3[1];
      iVar5 = *param_3;
      *(undefined2 *)((int)piVar6 + 10) = uVar8;
      if (((piVar6[1] - iVar5 | iVar4 - *piVar6) & 0x80008000U) == 0) {
        FUN_01142740(param_4,piVar6,param_7);
      }
    }
    uVar9 = uVar9 - 1;
    uVar3 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  uVar3 = *(ushort *)(puVar10 + -1);
  while (param_5 == uVar3) {
    uVar8 = (undefined2)uVar9;
    if (*(ushort *)((int)puVar10 + -2) <= param_4) break;
    *puVar10 = puVar10[-1];
    *(undefined2 *)(param_2 + 8 + (uint)*(ushort *)((int)puVar10 + -2) * 0x10) = uVar8;
    uVar9 = uVar9 - 1;
    uVar8 = (undefined2)uVar9;
    uVar3 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  *(undefined2 *)puVar10 = (undefined2)param_5;
  *(undefined2 *)(param_3 + 2) = uVar8;
  uVar9 = (uint)*(ushort *)((int)param_3 + 10);
  uVar3 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar9 * 4);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar9 * 4);
  while (uVar3 < param_6) {
    *puVar10 = puVar10[1];
    piVar6 = (int *)((uint)*(ushort *)((int)puVar10 + 6) * 0x10 + param_2);
    uVar9 = uVar9 + 1;
    if ((uVar3 & 1) == 0) {
      iVar4 = param_3[1];
      iVar5 = *param_3;
      *(short *)(piVar6 + 2) = (short)piVar6[2] + -1;
      if (((piVar6[1] - iVar5 | iVar4 - *piVar6) & 0x80008000U) == 0) {
        FUN_01142740(param_4,piVar6,param_7);
      }
    }
    else {
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + -1;
    }
    uVar3 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  uVar3 = *(ushort *)(puVar10 + 1);
  for (; ((param_6 == uVar3 && (uVar7 = (uint)*(ushort *)((int)puVar10 + 6), uVar7 < param_4)) &&
         (uVar7 != 0)); puVar10 = puVar10 + 1) {
    *puVar10 = puVar10[1];
    psVar2 = (short *)(param_2 + 10 + uVar7 * 0x10);
    *psVar2 = *psVar2 + -1;
    uVar3 = *(ushort *)(puVar10 + 2);
    uVar9 = uVar9 + 1;
  }
  uVar3 = *(ushort *)(puVar10 + -1);
  while (param_6 < uVar3) {
    *puVar10 = puVar10[-1];
    piVar6 = (int *)((uint)*(ushort *)((int)puVar10 + -2) * 0x10 + param_2);
    uVar9 = uVar9 - 1;
    if ((uVar3 & 1) == 0) {
      iVar4 = param_3[1];
      iVar5 = *param_3;
      *(short *)(piVar6 + 2) = (short)piVar6[2] + 1;
      if (((piVar6[1] - iVar5 | iVar4 - *piVar6) & 0x80008000U) == 0) {
        FUN_011427d0(param_4,piVar6,param_8);
      }
    }
    else {
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + 1;
    }
    uVar3 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  uVar8 = (undefined2)uVar9;
  uVar3 = *(ushort *)(puVar10 + -1);
  while (param_6 == uVar3) {
    uVar8 = (undefined2)uVar9;
    if (*(ushort *)((int)puVar10 + -2) <= param_4) break;
    *puVar10 = puVar10[-1];
    psVar2 = (short *)(param_2 + 10 + (uint)*(ushort *)((int)puVar10 + -2) * 0x10);
    *psVar2 = *psVar2 + 1;
    puVar1 = (ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
    uVar9 = uVar9 - 1;
    uVar8 = (undefined2)uVar9;
    uVar3 = *puVar1;
  }
  *(undefined2 *)((int)param_3 + 10) = uVar8;
  *(short *)puVar10 = (short)param_6;
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  uVar9 = (uint)*(ushort *)(param_3 + 2);
  uVar3 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar9 * 4);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar9 * 4);
  while (uVar3 < param_5) {
    piVar6 = (int *)((uint)*(ushort *)((int)puVar10 + 6) * 0x10 + param_2);
    *puVar10 = puVar10[1];
    uVar9 = uVar9 + 1;
    if ((uVar3 & 1) == 0) {
      *(short *)(piVar6 + 2) = (short)piVar6[2] + -1;
    }
    else {
      iVar4 = param_3[1];
      iVar5 = *param_3;
      *(short *)((int)piVar6 + 10) = *(short *)((int)piVar6 + 10) + -1;
      if (((piVar6[1] - iVar5 | iVar4 - *piVar6) & 0x80008000U) == 0) {
        FUN_011427d0(param_4,piVar6,param_8);
      }
    }
    uVar3 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  uVar8 = (undefined2)uVar9;
  uVar3 = *(ushort *)(puVar10 + 1);
  while (param_5 == uVar3) {
    uVar8 = (undefined2)uVar9;
    if (param_4 <= *(ushort *)((int)puVar10 + 6)) break;
    *puVar10 = puVar10[1];
    psVar2 = (short *)(param_2 + 8 + (uint)*(ushort *)((int)puVar10 + 6) * 0x10);
    *psVar2 = *psVar2 + -1;
    uVar9 = uVar9 + 1;
    uVar8 = (undefined2)uVar9;
    uVar3 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)(param_3 + 2) = uVar8;
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  *(undefined2 *)puVar10 = (undefined2)param_5;
  return;
}

// 0114D0D0  FUN_0114d0d0  size=828  [run]
void FUN_0114d0d0(int param_1,int param_2,ushort *param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  short *psVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = (uint)*param_3;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + -4 + uVar9 * 4);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar9 * 4);
  while (uVar8 = (ushort)uVar9, param_5 < uVar1) {
    puVar6 = (ushort *)((uint)*(ushort *)((int)puVar10 + -2) * 0x10 + param_2);
    *puVar10 = puVar10[-1];
    if ((uVar1 & 1) == 0) {
      *puVar6 = uVar8;
    }
    else {
      uVar1 = param_3[3];
      uVar2 = param_3[5];
      uVar3 = param_3[4];
      uVar4 = param_3[1];
      puVar6[2] = uVar8;
      if (((uVar2 - puVar6[4] | uVar1 - puVar6[1] | puVar6[5] - uVar3 | puVar6[3] - uVar4) & 0x8000)
          == 0) {
        FUN_011426a0(param_7);
      }
    }
    uVar9 = uVar9 - 1;
    uVar1 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  uVar1 = *(ushort *)(puVar10 + -1);
  while (param_5 == uVar1) {
    uVar8 = (ushort)uVar9;
    if (*(ushort *)((int)puVar10 + -2) <= param_4) break;
    *puVar10 = puVar10[-1];
    *(ushort *)(param_2 + (uint)*(ushort *)((int)puVar10 + -2) * 0x10) = uVar8;
    uVar9 = uVar9 - 1;
    uVar8 = (ushort)uVar9;
    uVar1 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  *(short *)puVar10 = (short)param_5;
  *param_3 = uVar8;
  uVar9 = (uint)param_3[2];
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + 4 + uVar9 * 4);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar9 * 4);
  while (uVar1 < param_6) {
    *puVar10 = puVar10[1];
    psVar7 = (short *)((uint)*(ushort *)((int)puVar10 + 6) * 0x10 + param_2);
    uVar9 = uVar9 + 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3[3];
      uVar8 = param_3[5];
      uVar2 = param_3[4];
      uVar3 = param_3[1];
      *psVar7 = *psVar7 + -1;
      if (((uVar8 - psVar7[4] | uVar1 - psVar7[1] | psVar7[5] - uVar2 | psVar7[3] - uVar3) & 0x8000)
          == 0) {
        FUN_011426a0(param_7);
      }
    }
    else {
      psVar7[2] = psVar7[2] + -1;
    }
    uVar1 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  uVar1 = *(ushort *)(puVar10 + 1);
  for (; ((param_6 == uVar1 && (uVar5 = (uint)*(ushort *)((int)puVar10 + 6), uVar5 < param_4)) &&
         (uVar5 != 0)); puVar10 = puVar10 + 1) {
    *puVar10 = puVar10[1];
    psVar7 = (short *)(param_2 + 4 + uVar5 * 0x10);
    *psVar7 = *psVar7 + -1;
    uVar1 = *(ushort *)(puVar10 + 2);
    uVar9 = uVar9 + 1;
  }
  uVar1 = *(ushort *)(puVar10 + -1);
  while (param_6 < uVar1) {
    *puVar10 = puVar10[-1];
    psVar7 = (short *)((uint)*(ushort *)((int)puVar10 + -2) * 0x10 + param_2);
    uVar9 = uVar9 - 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3[3];
      uVar8 = param_3[5];
      uVar2 = param_3[4];
      uVar3 = param_3[1];
      *psVar7 = *psVar7 + 1;
      if (((uVar8 - psVar7[4] | uVar1 - psVar7[1] | psVar7[5] - uVar2 | psVar7[3] - uVar3) & 0x8000)
          == 0) {
        FUN_011426f0(param_8);
      }
    }
    else {
      psVar7[2] = psVar7[2] + 1;
    }
    uVar1 = *(ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
  }
  uVar8 = (ushort)uVar9;
  uVar1 = *(ushort *)(puVar10 + -1);
  while (param_6 == uVar1) {
    uVar8 = (ushort)uVar9;
    if (*(ushort *)((int)puVar10 + -2) <= param_4) break;
    *puVar10 = puVar10[-1];
    psVar7 = (short *)(param_2 + 4 + (uint)*(ushort *)((int)puVar10 + -2) * 0x10);
    *psVar7 = *psVar7 + 1;
    puVar6 = (ushort *)(puVar10 + -2);
    puVar10 = puVar10 + -1;
    uVar9 = uVar9 - 1;
    uVar8 = (ushort)uVar9;
    uVar1 = *puVar6;
  }
  param_3[2] = uVar8;
  *(short *)puVar10 = (short)param_6;
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  uVar9 = (uint)*param_3;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + 4 + uVar9 * 4);
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar9 * 4);
  while (uVar1 < param_5) {
    psVar7 = (short *)((uint)*(ushort *)((int)puVar10 + 6) * 0x10 + param_2);
    *puVar10 = puVar10[1];
    uVar9 = uVar9 + 1;
    if ((uVar1 & 1) == 0) {
      *psVar7 = *psVar7 + -1;
    }
    else {
      uVar1 = param_3[3];
      uVar8 = param_3[5];
      uVar2 = param_3[4];
      uVar3 = param_3[1];
      psVar7[2] = psVar7[2] + -1;
      if (((uVar8 - psVar7[4] | uVar1 - psVar7[1] | psVar7[5] - uVar2 | psVar7[3] - uVar3) & 0x8000)
          == 0) {
        FUN_011426f0(param_8);
      }
    }
    uVar1 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  uVar8 = (ushort)uVar9;
  uVar1 = *(ushort *)(puVar10 + 1);
  while (param_5 == uVar1) {
    uVar8 = (ushort)uVar9;
    if (param_4 <= *(ushort *)((int)puVar10 + 6)) break;
    psVar7 = (short *)((uint)*(ushort *)((int)puVar10 + 6) * 0x10 + param_2);
    *puVar10 = puVar10[1];
    *psVar7 = *psVar7 + -1;
    uVar9 = uVar9 + 1;
    uVar8 = (ushort)uVar9;
    uVar1 = *(ushort *)(puVar10 + 2);
    puVar10 = puVar10 + 1;
  }
  *param_3 = uVar8;
  *(undefined2 *)((int)puVar10 + 2) = (undefined2)param_4;
  *(short *)puVar10 = (short)param_5;
  return;
}

// 0114D420  FUN_0114d420  size=828  [run]
void FUN_0114d420(int param_1,int param_2,short *param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8)

{
  ushort *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  short *psVar8;
  short sVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  uVar10 = (uint)(ushort)param_3[1];
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + -4 + uVar10 * 4);
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
  while (sVar9 = (short)uVar10, param_5 < uVar2) {
    psVar8 = (short *)((uint)*(ushort *)((int)puVar11 + -2) * 0x10 + param_2);
    *puVar11 = puVar11[-1];
    if ((uVar2 & 1) == 0) {
      psVar8[1] = sVar9;
    }
    else {
      sVar3 = param_3[4];
      sVar4 = param_3[5];
      sVar5 = *param_3;
      sVar6 = param_3[2];
      psVar8[3] = sVar9;
      if (((sVar4 - psVar8[4] | psVar8[5] - sVar3 | psVar8[2] - sVar5 | sVar6 - *psVar8) & 0x8000U)
          == 0) {
        FUN_011426a0(param_7);
      }
    }
    uVar10 = uVar10 - 1;
    uVar2 = *(ushort *)(puVar11 + -2);
    puVar11 = puVar11 + -1;
  }
  uVar2 = *(ushort *)(puVar11 + -1);
  while (param_5 == uVar2) {
    sVar9 = (short)uVar10;
    if (*(ushort *)((int)puVar11 + -2) <= param_4) break;
    *puVar11 = puVar11[-1];
    *(short *)(param_2 + 2 + (uint)*(ushort *)((int)puVar11 + -2) * 0x10) = sVar9;
    uVar10 = uVar10 - 1;
    sVar9 = (short)uVar10;
    uVar2 = *(ushort *)(puVar11 + -2);
    puVar11 = puVar11 + -1;
  }
  *(undefined2 *)((int)puVar11 + 2) = (undefined2)param_4;
  *(short *)puVar11 = (short)param_5;
  param_3[1] = sVar9;
  uVar10 = (uint)(ushort)param_3[3];
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + 4 + uVar10 * 4);
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
  while (uVar2 < param_6) {
    *puVar11 = puVar11[1];
    psVar8 = (short *)((uint)*(ushort *)((int)puVar11 + 6) * 0x10 + param_2);
    uVar10 = uVar10 + 1;
    if ((uVar2 & 1) == 0) {
      sVar9 = param_3[4];
      sVar3 = param_3[5];
      sVar4 = *param_3;
      sVar5 = param_3[2];
      psVar8[1] = psVar8[1] + -1;
      if (((sVar3 - psVar8[4] | psVar8[5] - sVar9 | psVar8[2] - sVar4 | sVar5 - *psVar8) & 0x8000U)
          == 0) {
        FUN_011426a0(param_7);
      }
    }
    else {
      psVar8[3] = psVar8[3] + -1;
    }
    uVar2 = *(ushort *)(puVar11 + 2);
    puVar11 = puVar11 + 1;
  }
  uVar2 = *(ushort *)(puVar11 + 1);
  for (; ((param_6 == uVar2 && (uVar7 = (uint)*(ushort *)((int)puVar11 + 6), uVar7 < param_4)) &&
         (uVar7 != 0)); puVar11 = puVar11 + 1) {
    *puVar11 = puVar11[1];
    psVar8 = (short *)(param_2 + 6 + uVar7 * 0x10);
    *psVar8 = *psVar8 + -1;
    uVar2 = *(ushort *)(puVar11 + 2);
    uVar10 = uVar10 + 1;
  }
  uVar2 = *(ushort *)(puVar11 + -1);
  while (param_6 < uVar2) {
    *puVar11 = puVar11[-1];
    psVar8 = (short *)((uint)*(ushort *)((int)puVar11 + -2) * 0x10 + param_2);
    uVar10 = uVar10 - 1;
    if ((uVar2 & 1) == 0) {
      sVar9 = param_3[4];
      sVar3 = param_3[5];
      sVar4 = *param_3;
      sVar5 = param_3[2];
      psVar8[1] = psVar8[1] + 1;
      if (((sVar3 - psVar8[4] | psVar8[5] - sVar9 | psVar8[2] - sVar4 | sVar5 - *psVar8) & 0x8000U)
          == 0) {
        FUN_011426f0(param_8);
      }
    }
    else {
      psVar8[3] = psVar8[3] + 1;
    }
    uVar2 = *(ushort *)(puVar11 + -2);
    puVar11 = puVar11 + -1;
  }
  sVar9 = (short)uVar10;
  uVar2 = *(ushort *)(puVar11 + -1);
  while (param_6 == uVar2) {
    sVar9 = (short)uVar10;
    if (*(ushort *)((int)puVar11 + -2) <= param_4) break;
    *puVar11 = puVar11[-1];
    psVar8 = (short *)(param_2 + 6 + (uint)*(ushort *)((int)puVar11 + -2) * 0x10);
    *psVar8 = *psVar8 + 1;
    puVar1 = (ushort *)(puVar11 + -2);
    puVar11 = puVar11 + -1;
    uVar10 = uVar10 - 1;
    sVar9 = (short)uVar10;
    uVar2 = *puVar1;
  }
  param_3[3] = sVar9;
  *(short *)puVar11 = (short)param_6;
  *(undefined2 *)((int)puVar11 + 2) = (undefined2)param_4;
  uVar10 = (uint)(ushort)param_3[1];
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xc4) + 4 + uVar10 * 4);
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar10 * 4);
  while (uVar2 < param_5) {
    psVar8 = (short *)((uint)*(ushort *)((int)puVar11 + 6) * 0x10 + param_2);
    *puVar11 = puVar11[1];
    uVar10 = uVar10 + 1;
    if ((uVar2 & 1) == 0) {
      psVar8[1] = psVar8[1] + -1;
    }
    else {
      sVar9 = param_3[4];
      sVar3 = param_3[5];
      sVar4 = *param_3;
      sVar5 = param_3[2];
      psVar8[3] = psVar8[3] + -1;
      if (((sVar3 - psVar8[4] | psVar8[5] - sVar9 | psVar8[2] - sVar4 | sVar5 - *psVar8) & 0x8000U)
          == 0) {
        FUN_011426f0(param_8);
      }
    }
    uVar2 = *(ushort *)(puVar11 + 2);
    puVar11 = puVar11 + 1;
  }
  sVar9 = (short)uVar10;
  uVar2 = *(ushort *)(puVar11 + 1);
  while (param_5 == uVar2) {
    sVar9 = (short)uVar10;
    if (param_4 <= *(ushort *)((int)puVar11 + 6)) break;
    *puVar11 = puVar11[1];
    psVar8 = (short *)(param_2 + 2 + (uint)*(ushort *)((int)puVar11 + 6) * 0x10);
    *psVar8 = *psVar8 + -1;
    uVar10 = uVar10 + 1;
    sVar9 = (short)uVar10;
    uVar2 = *(ushort *)(puVar11 + 2);
    puVar11 = puVar11 + 1;
  }
  param_3[1] = sVar9;
  *(undefined2 *)((int)puVar11 + 2) = (undefined2)param_4;
  *(short *)puVar11 = (short)param_5;
  return;
}

// 0114D770  FUN_0114d770  size=267  [run]
void FUN_0114d770(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  
  uVar3 = *(ushort *)((int)param_1 + 10);
  if (*(ushort *)(param_2 + 8) < uVar3) {
    puVar8 = (undefined4 *)(param_2 + 0xc);
    do {
      if (((param_1[1] - puVar8[-3] | puVar8[-2] - *param_1) & 0x80008000U) == 0) {
        if ((param_1[3] & 1U) == 0) {
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
          }
          uVar4 = *puVar8;
          puVar2 = (undefined4 *)(*param_5 + param_5[1] * 8);
          param_5[1] = param_5[1] + 1;
          *puVar2 = uVar4;
          puVar2[1] = param_1[3];
        }
        else if (param_4 != 1) {
          uVar4 = *(undefined4 *)*puVar8;
          iVar5 = (param_1[3] & 0xfffffffeU) + param_3;
          if (param_4 == 0) {
            if (*(uint *)(iVar5 + 8) == (*(uint *)(iVar5 + 0xc) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar5 + 4),2);
            }
            *(short *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8) * 2) = (short)uVar4;
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          else {
            iVar6 = 0;
            if (0 < *(int *)(iVar5 + 8)) {
              psVar7 = *(short **)(iVar5 + 4);
              do {
                if (*psVar7 == (short)uVar4) goto LAB_0114d825;
                iVar6 = iVar6 + 1;
                psVar7 = psVar7 + 1;
              } while (iVar6 < *(int *)(iVar5 + 8));
            }
            iVar6 = -1;
LAB_0114d825:
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
            if (*(int *)(iVar5 + 8) != iVar6) {
              *(undefined2 *)(*(int *)(iVar5 + 4) + iVar6 * 2) =
                   *(undefined2 *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8) * 2);
            }
          }
        }
      }
      puVar1 = (ushort *)(puVar8 + 3);
      puVar8 = puVar8 + 4;
    } while (*puVar1 < uVar3);
  }
  return;
}

// 0114D880  FUN_0114d880  size=284  [run]
void FUN_0114d880(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint *puVar9;
  
  uVar3 = *(ushort *)((int)param_1 + 10);
  if (*(ushort *)(param_2 + 8) < uVar3) {
    puVar9 = (uint *)(param_2 + 0xc);
    do {
      if (((param_1[1] - puVar9[-3] | puVar9[-2] - *param_1) & 0x80008000) == 0) {
        if ((*puVar9 & 1) == 0) {
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_5,8);
          }
          piVar2 = (int *)(*param_5 + param_5[1] * 8);
          param_5[1] = param_5[1] + 1;
          uVar5 = *puVar9;
          *piVar2 = param_1[3];
          piVar2[1] = uVar5;
        }
        else if (param_4 != 1) {
          uVar4 = *(undefined4 *)param_1[3];
          iVar6 = (*puVar9 & 0xfffffffe) + param_3;
          if (param_4 == 0) {
            if (*(uint *)(iVar6 + 8) == (*(uint *)(iVar6 + 0xc) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar6 + 4),2);
            }
            *(short *)(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 8) * 2) = (short)uVar4;
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          else {
            iVar7 = 0;
            if (0 < *(int *)(iVar6 + 8)) {
              psVar8 = *(short **)(iVar6 + 4);
              do {
                if (*psVar8 == (short)uVar4) goto LAB_0114d950;
                iVar7 = iVar7 + 1;
                psVar8 = psVar8 + 1;
              } while (iVar7 < *(int *)(iVar6 + 8));
            }
            iVar7 = -1;
LAB_0114d950:
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
            if (*(int *)(iVar6 + 8) != iVar7) {
              *(undefined2 *)(*(int *)(iVar6 + 4) + iVar7 * 2) =
                   *(undefined2 *)(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 8) * 2);
            }
          }
        }
      }
      puVar1 = puVar9 + 3;
      puVar9 = puVar9 + 4;
    } while ((ushort)*puVar1 < uVar3);
  }
  return;
}

// 0114D9A0  FUN_0114d9a0  size=61  [run]
void __fastcall FUN_0114d9a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114D9E0  FUN_0114d9e0  size=61  [run]
void __fastcall FUN_0114d9e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DA20  FUN_0114da20  size=61  [run]
void __fastcall FUN_0114da20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DA60  FUN_0114da60  size=40  [run]
void FUN_0114da60(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0114c160(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0114DA90  FUN_0114da90  size=60  [run]
void __fastcall FUN_0114da90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DAD0  FUN_0114dad0  size=27  [run]
void __thiscall FUN_0114dad0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff00;
  return;
}

// 0114DAF0  FUN_0114daf0  size=63  [run]
void __fastcall FUN_0114daf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DB30  FUN_0114db30  size=61  [run]
void __fastcall FUN_0114db30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DB70  FUN_0114db70  size=61  [run]
void __fastcall FUN_0114db70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DBB0  FUN_0114dbb0  size=61  [run]
void __fastcall FUN_0114dbb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114DBF0  FUN_0114dbf0  size=33  [run]
void FUN_0114dbf0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0114cb80(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0114DC40  FUN_0114dc40  size=33  [run]
void __thiscall FUN_0114dc40(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3 | 0x80000000;
  return;
}

// 0114DC70  FUN_0114dc70  size=2390  [run]
void __thiscall
FUN_0114dc70(int param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  ushort *puVar12;
  short *psVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  
  iVar5 = *(int *)(param_1 + 0xa0);
  uVar6 = *param_2;
  uVar15 = (uint)*(ushort *)(uVar6 * 0x10 + 8 + iVar5);
  puVar17 = (ushort *)(uVar6 * 0x10 + iVar5);
  uVar16 = param_3[4];
  uVar7 = *param_3;
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar15 * 4);
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar14 = (ushort)uVar15, uVar7 < uVar1) {
    piVar10 = (int *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    *puVar18 = puVar18[-1];
    if ((uVar1 & 1) == 0) {
      *(ushort *)(piVar10 + 2) = uVar14;
    }
    else {
      iVar8 = *(int *)(puVar17 + 2);
      iVar9 = *(int *)puVar17;
      *(ushort *)((int)piVar10 + 10) = uVar14;
      if (((iVar8 - *piVar10 | piVar10[1] - iVar9) & 0x80008000U) == 0) {
        FUN_01142740(uVar6,piVar10,param_4);
      }
    }
    uVar15 = uVar15 - 1;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    *(ushort *)(iVar5 + 8 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10) = uVar14;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  param_2._0_2_ = (undefined2)uVar6;
  *(short *)puVar18 = (short)uVar7;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  puVar17[4] = uVar14;
  uVar15 = (uint)puVar17[5];
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar15 * 4);
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar1 < uVar16) {
    *puVar18 = puVar18[1];
    piVar10 = (int *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    uVar15 = uVar15 + 1;
    if ((uVar1 & 1) == 0) {
      iVar8 = *(int *)(puVar17 + 2);
      iVar9 = *(int *)puVar17;
      *(short *)(piVar10 + 2) = (short)piVar10[2] + -1;
      if (((piVar10[1] - iVar9 | iVar8 - *piVar10) & 0x80008000U) == 0) {
        FUN_01142740(uVar6,piVar10,param_4);
      }
    }
    else {
      *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + 1);
  for (; ((uVar16 == uVar1 && (uVar11 = (uint)*(ushort *)((int)puVar18 + 6), uVar11 < uVar6)) &&
         (uVar11 != 0)); puVar18 = puVar18 + 1) {
    *puVar18 = puVar18[1];
    psVar13 = (short *)(iVar5 + 10 + uVar11 * 0x10);
    *psVar13 = *psVar13 + -1;
    uVar1 = *(ushort *)(puVar18 + 2);
    uVar15 = uVar15 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 < uVar1) {
    *puVar18 = puVar18[-1];
    piVar10 = (int *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    uVar15 = uVar15 - 1;
    if ((uVar1 & 1) == 0) {
      iVar8 = *(int *)(puVar17 + 2);
      iVar9 = *(int *)puVar17;
      *(short *)(piVar10 + 2) = (short)piVar10[2] + 1;
      if (((iVar8 - *piVar10 | piVar10[1] - iVar9) & 0x80008000U) == 0) {
        FUN_011427d0(uVar6,piVar10,param_5);
      }
    }
    else {
      *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + 1;
    }
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar14 = (ushort)uVar15;
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    psVar13 = (short *)(iVar5 + 10 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10);
    *psVar13 = *psVar13 + 1;
    puVar12 = (ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *puVar12;
  }
  puVar17[5] = uVar14;
  *(short *)puVar18 = (short)uVar16;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  uVar16 = (uint)puVar17[4];
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xac) + 4 + uVar16 * 4);
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xac) + uVar16 * 4);
  while (uVar1 < uVar7) {
    piVar10 = (int *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    *puVar18 = puVar18[1];
    uVar16 = uVar16 + 1;
    if ((uVar1 & 1) == 0) {
      *(short *)(piVar10 + 2) = (short)piVar10[2] + -1;
    }
    else {
      iVar8 = *(int *)(puVar17 + 2);
      iVar9 = *(int *)puVar17;
      *(short *)((int)piVar10 + 10) = *(short *)((int)piVar10 + 10) + -1;
      if (((iVar8 - *piVar10 | piVar10[1] - iVar9) & 0x80008000U) == 0) {
        FUN_011427d0(uVar6,piVar10,param_5);
      }
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar14 = (ushort)uVar16;
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar16;
    if (uVar6 <= *(ushort *)((int)puVar18 + 6)) break;
    *puVar18 = puVar18[1];
    psVar13 = (short *)(iVar5 + 8 + (uint)*(ushort *)((int)puVar18 + 6) * 0x10);
    *psVar13 = *psVar13 + -1;
    uVar16 = uVar16 + 1;
    uVar14 = (ushort)uVar16;
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  puVar17[4] = uVar14;
  *(short *)puVar18 = (short)uVar7;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  uVar16 = param_3[5];
  uVar15 = (uint)*puVar17;
  uVar7 = param_3[1];
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar15 * 4);
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar14 = (ushort)uVar15, uVar7 < uVar1) {
    puVar12 = (ushort *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    *puVar18 = puVar18[-1];
    if ((uVar1 & 1) == 0) {
      *puVar12 = uVar14;
    }
    else {
      uVar1 = puVar17[1];
      uVar2 = puVar17[3];
      uVar3 = puVar17[5];
      uVar4 = puVar17[4];
      puVar12[2] = uVar14;
      if (((uVar2 - puVar12[1] | puVar12[3] - uVar1 | uVar3 - puVar12[4] | puVar12[5] - uVar4) &
          0x8000) == 0) {
        FUN_011426a0(param_4);
      }
    }
    uVar15 = uVar15 - 1;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    *(ushort *)(iVar5 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10) = uVar14;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  *(short *)puVar18 = (short)uVar7;
  *puVar17 = uVar14;
  uVar15 = (uint)puVar17[2];
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + 4 + uVar15 * 4);
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar15 * 4);
  while (uVar1 < uVar16) {
    *puVar18 = puVar18[1];
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    uVar15 = uVar15 + 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = puVar17[1];
      uVar14 = puVar17[3];
      uVar2 = puVar17[5];
      uVar3 = puVar17[4];
      *psVar13 = *psVar13 + -1;
      if (((uVar14 - psVar13[1] | psVar13[3] - uVar1 | uVar2 - psVar13[4] | psVar13[5] - uVar3) &
          0x8000) == 0) {
        FUN_011426a0(param_4);
      }
    }
    else {
      psVar13[2] = psVar13[2] + -1;
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + 1);
  for (; ((uVar16 == uVar1 && (uVar11 = (uint)*(ushort *)((int)puVar18 + 6), uVar11 < uVar6)) &&
         (uVar11 != 0)); puVar18 = puVar18 + 1) {
    *puVar18 = puVar18[1];
    psVar13 = (short *)(iVar5 + 4 + uVar11 * 0x10);
    *psVar13 = *psVar13 + -1;
    uVar1 = *(ushort *)(puVar18 + 2);
    uVar15 = uVar15 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 < uVar1) {
    *puVar18 = puVar18[-1];
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    uVar15 = uVar15 - 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = puVar17[1];
      uVar14 = puVar17[3];
      uVar2 = puVar17[5];
      uVar3 = puVar17[4];
      *psVar13 = *psVar13 + 1;
      if (((uVar14 - psVar13[1] | psVar13[3] - uVar1 | uVar2 - psVar13[4] | psVar13[5] - uVar3) &
          0x8000) == 0) {
        FUN_011426f0(param_5);
      }
    }
    else {
      psVar13[2] = psVar13[2] + 1;
    }
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar14 = (ushort)uVar15;
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    psVar13 = (short *)(iVar5 + 4 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10);
    *psVar13 = *psVar13 + 1;
    puVar12 = (ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *puVar12;
  }
  puVar17[2] = uVar14;
  *(short *)puVar18 = (short)uVar16;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  uVar16 = (uint)*puVar17;
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar16 * 4);
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar1 < uVar7) {
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    *puVar18 = puVar18[1];
    uVar16 = uVar16 + 1;
    if ((uVar1 & 1) == 0) {
      *psVar13 = *psVar13 + -1;
    }
    else {
      uVar1 = puVar17[1];
      uVar14 = puVar17[3];
      uVar2 = puVar17[5];
      uVar3 = puVar17[4];
      psVar13[2] = psVar13[2] + -1;
      if (((uVar14 - psVar13[1] | psVar13[3] - uVar1 | uVar2 - psVar13[4] | psVar13[5] - uVar3) &
          0x8000) == 0) {
        FUN_011426f0(param_5);
      }
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar14 = (ushort)uVar16;
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar16;
    if (uVar6 <= *(ushort *)((int)puVar18 + 6)) break;
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    *puVar18 = puVar18[1];
    *psVar13 = *psVar13 + -1;
    uVar16 = uVar16 + 1;
    uVar14 = (ushort)uVar16;
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  *puVar17 = uVar14;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  *(short *)puVar18 = (short)uVar7;
  uVar16 = param_3[6];
  uVar15 = (uint)puVar17[1];
  uVar7 = param_3[2];
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar15 * 4);
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar14 = (ushort)uVar15, uVar7 < uVar1) {
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    *puVar18 = puVar18[-1];
    if ((uVar1 & 1) == 0) {
      psVar13[1] = uVar14;
    }
    else {
      uVar1 = *puVar17;
      uVar2 = puVar17[5];
      uVar3 = puVar17[4];
      uVar4 = puVar17[2];
      psVar13[3] = uVar14;
      if (((uVar2 - psVar13[4] | psVar13[2] - uVar1 | psVar13[5] - uVar3 | uVar4 - *psVar13) &
          0x8000) == 0) {
        FUN_011426a0(param_4);
      }
    }
    uVar15 = uVar15 - 1;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    *(ushort *)(iVar5 + 2 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10) = uVar14;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  *(short *)puVar18 = (short)uVar7;
  puVar17[1] = uVar14;
  uVar15 = (uint)puVar17[3];
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xc4) + 4 + uVar15 * 4);
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar15 * 4);
  while (uVar1 < uVar16) {
    *puVar18 = puVar18[1];
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    uVar15 = uVar15 + 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = *puVar17;
      uVar14 = puVar17[5];
      uVar2 = puVar17[4];
      uVar3 = puVar17[2];
      psVar13[1] = psVar13[1] + -1;
      if (((uVar14 - psVar13[4] | psVar13[2] - uVar1 | psVar13[5] - uVar2 | uVar3 - *psVar13) &
          0x8000) == 0) {
        FUN_011426a0(param_4);
      }
    }
    else {
      psVar13[3] = psVar13[3] + -1;
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + 1);
  for (; ((uVar16 == uVar1 && (uVar11 = (uint)*(ushort *)((int)puVar18 + 6), uVar11 < uVar6)) &&
         (uVar11 != 0)); puVar18 = puVar18 + 1) {
    *puVar18 = puVar18[1];
    psVar13 = (short *)(iVar5 + 6 + uVar11 * 0x10);
    *psVar13 = *psVar13 + -1;
    uVar1 = *(ushort *)(puVar18 + 2);
    uVar15 = uVar15 + 1;
  }
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 < uVar1) {
    *puVar18 = puVar18[-1];
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + -2) * 0x10 + iVar5);
    uVar15 = uVar15 - 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = *puVar17;
      uVar14 = puVar17[5];
      uVar2 = puVar17[4];
      uVar3 = puVar17[2];
      psVar13[1] = psVar13[1] + 1;
      if (((uVar14 - psVar13[4] | psVar13[2] - uVar1 | psVar13[5] - uVar2 | uVar3 - *psVar13) &
          0x8000) == 0) {
        FUN_011426f0(param_5);
      }
    }
    else {
      psVar13[3] = psVar13[3] + 1;
    }
    uVar1 = *(ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
  }
  uVar14 = (ushort)uVar15;
  uVar1 = *(ushort *)(puVar18 + -1);
  while (uVar16 == uVar1) {
    uVar14 = (ushort)uVar15;
    if (*(ushort *)((int)puVar18 + -2) <= uVar6) break;
    *puVar18 = puVar18[-1];
    psVar13 = (short *)(iVar5 + 6 + (uint)*(ushort *)((int)puVar18 + -2) * 0x10);
    *psVar13 = *psVar13 + 1;
    puVar12 = (ushort *)(puVar18 + -2);
    puVar18 = puVar18 + -1;
    uVar15 = uVar15 - 1;
    uVar14 = (ushort)uVar15;
    uVar1 = *puVar12;
  }
  puVar17[3] = uVar14;
  *(short *)puVar18 = (short)uVar16;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  uVar16 = (uint)puVar17[1];
  puVar18 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar16 * 4);
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar1 < uVar7) {
    psVar13 = (short *)((uint)*(ushort *)((int)puVar18 + 6) * 0x10 + iVar5);
    *puVar18 = puVar18[1];
    uVar16 = uVar16 + 1;
    if ((uVar1 & 1) == 0) {
      psVar13[1] = psVar13[1] + -1;
    }
    else {
      uVar1 = *puVar17;
      uVar14 = puVar17[5];
      uVar2 = puVar17[4];
      uVar3 = puVar17[2];
      psVar13[3] = psVar13[3] + -1;
      if (((uVar14 - psVar13[4] | psVar13[2] - uVar1 | psVar13[5] - uVar2 | uVar3 - *psVar13) &
          0x8000) == 0) {
        FUN_011426f0(param_5);
      }
    }
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  uVar14 = (ushort)uVar16;
  uVar1 = *(ushort *)(puVar18 + 1);
  while (uVar7 == uVar1) {
    uVar14 = (ushort)uVar16;
    if (uVar6 <= *(ushort *)((int)puVar18 + 6)) break;
    *puVar18 = puVar18[1];
    psVar13 = (short *)(iVar5 + 2 + (uint)*(ushort *)((int)puVar18 + 6) * 0x10);
    *psVar13 = *psVar13 + -1;
    uVar16 = uVar16 + 1;
    uVar14 = (ushort)uVar16;
    uVar1 = *(ushort *)(puVar18 + 2);
    puVar18 = puVar18 + 1;
  }
  puVar17[1] = uVar14;
  *(undefined2 *)((int)puVar18 + 2) = param_2._0_2_;
  *(short *)puVar18 = (short)uVar7;
  return;
}

// 0114E5E0  FUN_0114e5e0  size=61  [run]
void __fastcall FUN_0114e5e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114E640  FUN_0114e640  size=61  [run]
void __fastcall FUN_0114e640(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),(*(uint *)(param_1 + 0xc) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 0114E680  FUN_0114e680  size=306  [run]
void __thiscall
FUN_0114e680(int param_1,undefined4 param_2,undefined2 param_3,uint *param_4,int *param_5,
            int *param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  puVar2 = param_4 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  piVar7 = *(int **)(param_1 + 0xa0);
  for (; param_4 < puVar2; param_4 = param_4 + 1) {
    uVar4 = *param_4;
    piVar6 = piVar7;
    while (uVar4 != 0) {
      if ((char)uVar4 == '\0') {
        piVar6 = piVar6 + 0x20;
        uVar4 = uVar4 >> 8;
      }
      else {
        if (((uVar4 & 1) != 0) &&
           (((piVar6[1] - *param_5 | param_5[1] - *piVar6) & 0x80008000U) == 0)) {
          uVar3 = piVar6[3];
          if ((uVar3 & 1) == 0) {
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
            }
            puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
            piVar5 = param_6;
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = param_2;
              puVar1[1] = uVar3;
            }
          }
          else {
            piVar5 = (int *)((uVar3 & 0xfffffffe) + 4 + *(int *)(param_1 + 0xd8));
            if (piVar5[1] ==
                (*(uint *)((uVar3 & 0xfffffffe) + 0xc + *(int *)(param_1 + 0xd8)) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar5,2);
            }
            *(undefined2 *)(*piVar5 + piVar5[1] * 2) = param_3;
          }
          piVar5[1] = piVar5[1] + 1;
        }
        piVar6 = piVar6 + 4;
        uVar4 = uVar4 >> 1;
      }
    }
    piVar7 = piVar7 + 0x80;
  }
  return;
}

// 0114E7C0  FUN_0114e7c0  size=326  [run]
void __thiscall
FUN_0114e7c0(int param_1,undefined4 param_2,short param_3,uint *param_4,int *param_5,int *param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  int *piVar9;
  
  puVar2 = param_4 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  piVar9 = *(int **)(param_1 + 0xa0);
  do {
    if (puVar2 <= param_4) {
      return;
    }
    uVar5 = *param_4;
    piVar7 = piVar9;
    while (uVar5 != 0) {
      if ((char)uVar5 == '\0') {
        piVar7 = piVar7 + 0x20;
        uVar5 = uVar5 >> 8;
      }
      else {
        if (((uVar5 & 1) != 0) &&
           (((piVar7[1] - *param_5 | param_5[1] - *piVar7) & 0x80008000U) == 0)) {
          uVar3 = piVar7[3];
          if ((uVar3 & 1) == 0) {
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
            }
            puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = param_2;
              puVar1[1] = uVar3;
            }
            param_6[1] = param_6[1] + 1;
          }
          else {
            iVar6 = (uVar3 & 0xfffffffe) + *(int *)(param_1 + 0xd8);
            iVar4 = 0;
            if (0 < *(int *)(iVar6 + 8)) {
              psVar8 = *(short **)(iVar6 + 4);
              do {
                if (*psVar8 == param_3) goto LAB_0114e8aa;
                iVar4 = iVar4 + 1;
                psVar8 = psVar8 + 1;
              } while (iVar4 < *(int *)(iVar6 + 8));
            }
            iVar4 = -1;
LAB_0114e8aa:
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
            if (*(int *)(iVar6 + 8) != iVar4) {
              *(undefined2 *)(*(int *)(iVar6 + 4) + iVar4 * 2) =
                   *(undefined2 *)(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 8) * 2);
            }
          }
        }
        piVar7 = piVar7 + 4;
        uVar5 = uVar5 >> 1;
      }
    }
    param_4 = param_4 + 1;
    piVar9 = piVar9 + 0x80;
  } while( true );
}

// 0114E910  FUN_0114e910  size=723  [run]
void __thiscall
FUN_0114e910(int param_1,undefined4 param_2,uint *param_3,int *param_4,int param_5,int *param_6,
            int *param_7,int *param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *local_8;
  
  puVar2 = param_3 + (*(int *)(param_1 + 0xa4) >> 5) + 1;
  if (param_3 < puVar2) {
    local_8 = (int *)(*(int *)(param_1 + 0xa0) + 0x24);
    do {
      piVar5 = local_8;
      for (uVar4 = *param_3; uVar4 != 0; uVar4 = uVar4 >> 4) {
        if ((uVar4 & 0xf) != 0) {
          if ((((uVar4 & 1) != 0) &&
              (((piVar5[-8] - *param_4 | param_4[1] - piVar5[-9]) & 0x80008000U) == 0)) &&
             (uVar3 = piVar5[-6], (uVar3 & 1) == 0)) {
            if (param_5 == 0) {
              if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
              }
              puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = param_2;
                puVar1[1] = uVar3;
              }
              param_6[1] = param_6[1] + 1;
            }
            else if (param_5 == 1) {
              *(int **)(*param_7 + param_7[1] * 4) = piVar5 + -9;
              param_7[1] = param_7[1] + 1;
            }
            else {
              (**(code **)(*param_8 + 4))(uVar3,0);
            }
          }
          if ((((uVar4 & 2) != 0) &&
              (((piVar5[-4] - *param_4 | param_4[1] - piVar5[-5]) & 0x80008000U) == 0)) &&
             (uVar3 = piVar5[-2], (uVar3 & 1) == 0)) {
            if (param_5 == 0) {
              if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
              }
              puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = param_2;
                puVar1[1] = uVar3;
              }
              param_6[1] = param_6[1] + 1;
            }
            else if (param_5 == 1) {
              *(int **)(*param_7 + param_7[1] * 4) = piVar5 + -5;
              param_7[1] = param_7[1] + 1;
            }
            else {
              (**(code **)(*param_8 + 4))(uVar3,0);
            }
          }
          if ((((uVar4 & 4) != 0) &&
              (((param_4[1] - piVar5[-1] | *piVar5 - *param_4) & 0x80008000U) == 0)) &&
             (uVar3 = piVar5[2], (uVar3 & 1) == 0)) {
            if (param_5 == 0) {
              if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
              }
              puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = param_2;
                puVar1[1] = uVar3;
              }
              param_6[1] = param_6[1] + 1;
            }
            else if (param_5 == 1) {
              *(int **)(*param_7 + param_7[1] * 4) = piVar5 + -1;
              param_7[1] = param_7[1] + 1;
            }
            else {
              (**(code **)(*param_8 + 4))(uVar3,0);
            }
          }
          if ((((uVar4 & 8) != 0) &&
              (((piVar5[4] - *param_4 | param_4[1] - piVar5[3]) & 0x80008000U) == 0)) &&
             (uVar3 = piVar5[6], (uVar3 & 1) == 0)) {
            if (param_5 == 0) {
              if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
              }
              puVar1 = (undefined4 *)(*param_6 + param_6[1] * 8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = param_2;
                puVar1[1] = uVar3;
              }
              param_6[1] = param_6[1] + 1;
            }
            else if (param_5 == 1) {
              *(int **)(*param_7 + param_7[1] * 4) = piVar5 + 3;
              param_7[1] = param_7[1] + 1;
            }
            else {
              (**(code **)(*param_8 + 4))(uVar3,0);
            }
          }
        }
        piVar5 = piVar5 + 0x10;
      }
      local_8 = local_8 + 0x80;
      param_3 = param_3 + 1;
    } while (param_3 < puVar2);
  }
  return;
}

// 0114EBF0  FUN_0114ebf0  size=59  [run]
void __fastcall FUN_0114ebf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114EC30  FUN_0114ec30  size=108  [run]
int * __thiscall FUN_0114ec30(int *param_1,uint param_2)

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

// 0114ECA0  FUN_0114eca0  size=143  [run]
void __fastcall FUN_0114eca0(int *param_1)

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

// 0114ED30  FUN_0114ed30  size=63  [run]
void __fastcall FUN_0114ed30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114ED70  FUN_0114ed70  size=61  [run]
void __fastcall FUN_0114ed70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114EDB0  FUN_0114edb0  size=61  [run]
void __fastcall FUN_0114edb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114EDF0  FUN_0114edf0  size=61  [run]
void __fastcall FUN_0114edf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0114EE30  FUN_0114ee30  size=40  [run]
void FUN_0114ee30(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0114cb80(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0114EE60  hkp3AxisSweep::vf10  size=19  [run]
uint __thiscall hkp3AxisSweep::vf10(uint param_1,uint param_2)

{
  return -(uint)((*(uint *)(param_1 + 0xc) & param_2) != 0) & param_1;
}

// 0114EE80  FUN_0114ee80  size=38  [run]
void FUN_0114ee80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0114EEB0  hkp3AxisSweep::vf60  size=30  [run]
void __thiscall hkp3AxisSweep::vf60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *param_2 = *(undefined4 *)(param_1 + 0x70);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  *param_3 = *(undefined4 *)(param_1 + 0x80);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  return;
}

// 0114EED0  FUN_0114eed0  size=105  [run]
int __thiscall FUN_0114eed0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),(*(uint *)(param_1 + 0xc) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 0114F5C0  hkp3AxisSweep::vf00  size=52  [run]
int __thiscall hkp3AxisSweep::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkp3AxisSweep();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0114F600  FUN_0114f600  size=80  [run]
void FUN_0114f600(undefined4 param_1)

{
  FUN_01162980(0);
  FUN_01160720(param_1);
  FUN_0115e670(param_1);
  FUN_0115cc10(param_1);
  FUN_0115c1e0(param_1);
  FUN_0115b890(param_1);
  FUN_0115ae60(param_1);
  FUN_0115a770(param_1);
  FUN_01162980(1);
  return;
}

// 0114F650  FUN_0114f650  size=85  [run]
void FUN_0114f650(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  FUN_01169c40(param_1);
  FUN_01162980(uVar1 & 0xffffff00);
  FUN_01169760(param_1);
  FUN_011689e0(param_1);
  FUN_01162980(1);
  FUN_01166760(param_1);
  FUN_01164cd0(param_1);
  if (DAT_0209e920 != (code *)0x0) {
    (*DAT_0209e920)(param_1);
  }
  return;
}

// 0114F6B0  FUN_0114f6b0  size=95  [run]
void FUN_0114f6b0(undefined4 param_1)

{
  FUN_01174a80(param_1);
  FUN_01174860(param_1,0x17,0x17);
  FUN_01173f10(param_1);
  FUN_01173100(param_1);
  FUN_01172830(param_1);
  FUN_011722b0(param_1);
  FUN_01171230(param_1);
  FUN_0116ffc0(param_1);
  FUN_0116edf0(param_1);
  FUN_0116e060(param_1);
  FUN_0116cbb0(param_1);
  FUN_0116bb20(param_1);
  FUN_0116ad30(param_1);
  return;
}

// 0114F710  FUN_0114f710  size=94  [run]
void FUN_0114f710(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  FUN_01179d80(param_1);
  FUN_01179750(param_1);
  FUN_011780f0(param_1);
  FUN_0114f600(param_1);
  FUN_01162980(uVar1 & 0xffffff00);
  FUN_01177340(param_1);
  FUN_01162980(1);
  FUN_0114f650(param_1);
  FUN_01175da0(param_1);
  FUN_01175340(param_1);
  FUN_0114f6b0(param_1);
  return;
}

// 0114F770  hkpClosestRayHitCollector::vf00  size=104  [run]
void __thiscall hkpClosestRayHitCollector::vf00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((float)param_3[4] <= *(float *)(param_1 + 0x20) &&
      *(float *)(param_1 + 0x20) != (float)param_3[4]) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = param_3[4];
    *(undefined4 *)(param_1 + 0x24) = param_3[5];
    *(undefined4 *)(param_1 + 0x28) = param_3[6];
    *(undefined4 *)(param_1 + 0x2c) = param_3[7];
    FUN_0114f7e0(param_1 + 0x30,8,param_2);
    iVar5 = *(int *)(param_2 + 0xc);
    while (iVar4 = iVar5, iVar4 != 0) {
      param_2 = iVar4;
      iVar5 = *(int *)(iVar4 + 0xc);
    }
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 4) = param_3[4];
  }
  return;
}

// 0114F7E0  FUN_0114f7e0  size=84  [run]
int FUN_0114f7e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24 [8];
  
  iVar2 = 0;
  iVar3 = *(int *)(param_3 + 0xc);
  while (iVar1 = iVar3, iVar1 != 0) {
    local_24[iVar2] = param_3;
    iVar2 = iVar2 + 1;
    param_3 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (param_2 + -1 <= iVar3) break;
      iVar1 = iVar2 + -1;
      iVar2 = iVar2 + -1;
      *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(local_24[iVar1] + 4);
      iVar3 = iVar3 + 1;
    } while (0 < iVar2);
  }
  *(undefined4 *)(param_1 + iVar3 * 4) = 0xffffffff;
  return iVar3 + 1;
}

// 0114F840  hkpCompressedMeshShape::vf38  size=11  [run]
int __fastcall hkpCompressedMeshShape::vf38(int param_1)

{
  if (param_1 != 0) {
    return param_1 + 0x10;
  }
  return 0;
}

// 0114F850  hkpListShape::vf48  size=3  [run]
void hkpListShape::vf48(void)

{
  return;
}

// 0114F860  hkpListShape::vf44  size=3  [run]
void hkpListShape::vf44(void)

{
  return;
}

// 0114F880  hkpShapeContainer::hkpShapeContainer_9  size=67  [run]
void __thiscall
hkpShapeContainer::hkpShapeContainer_9(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = vftable;
  *param_1 = hkpShapeCollection::vftable;
  param_1[4] = hkpShapeCollection::vftable;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = param_3;
  return;
}

// 0114F8D0  hkpShapeContainer::hkpShapeContainer_10  size=56  [run]
undefined4 * __thiscall hkpShapeContainer::hkpShapeContainer_10(undefined4 *param_1,int param_2)

{
  hkpShape::hkpShape(param_2);
  param_1[4] = vftable;
  *param_1 = hkpShapeCollection::vftable;
  param_1[4] = hkpShapeCollection::vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x12;
    *(undefined1 *)((int)param_1 + 0x15) = 3;
  }
  return param_1;
}

// 0114F910  hkpCompressedMeshShape::vf14  size=390  [run]
void __thiscall hkpCompressedMeshShape::vf14(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 local_220 [516];
  int local_1c;
  undefined1 local_16;
  undefined1 local_15;
  int local_14;
  
  local_1c = param_1;
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  piVar7 = (int *)(param_1 + 0x10);
  local_14 = -1;
  if (*(int *)(param_3 + 0x28) == 0) {
    for (iVar4 = (**(code **)(*piVar7 + 8))(); iVar4 != -1;
        iVar4 = (**(code **)(*piVar7 + 0xc))(iVar4)) {
      piVar5 = (int *)(**(code **)(*piVar7 + 0x14))(iVar4,local_220);
      pcVar6 = (char *)(**(code **)(*piVar5 + 0x14))(&local_15,param_3,param_4);
      if (*pcVar6 != '\0') {
        local_14 = iVar4;
      }
    }
  }
  else {
    for (iVar4 = (**(code **)(*piVar7 + 8))(); iVar4 != -1;
        iVar4 = (**(code **)(*piVar7 + 0xc))(iVar4)) {
      pcVar6 = (char *)(**(code **)**(undefined4 **)(param_3 + 0x28))
                                 (&local_15,param_3,local_1c,piVar7,iVar4);
      if (*pcVar6 != '\0') {
        piVar5 = (int *)(**(code **)(*piVar7 + 0x14))(iVar4,local_220);
        pcVar6 = (char *)(**(code **)(*piVar5 + 0x14))(&local_16,param_3,param_4);
        if (*pcVar6 != '\0') {
          local_14 = iVar4;
        }
      }
    }
  }
  iVar4 = local_14;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (local_14 != -1) {
    *(int *)(param_4 + 0x20 + *(int *)(param_4 + 0x40) * 4) = local_14;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  *(bool *)param_2 = iVar4 != -1;
  return;
}

// 0114FAA0  TthkpShapeCollection::getAabb  size=273  [run]
void __thiscall
TthkpShapeCollection::getAabb
          (int param_1,undefined4 param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 local_240 [512];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  int local_14;
  
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar1 = "TthkpShapeCollection::getAabb";
    uVar2 = rdtsc();
    local_14 = (int)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
  }
  *(undefined4 *)*param_4 = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 0xc) = 0x7f7fffee;
  uVar3 = *(uint *)(*param_4 + 4);
  uVar4 = *(uint *)(*param_4 + 8);
  uVar5 = *(uint *)(*param_4 + 0xc);
  piVar8 = (int *)(param_1 + 0x10);
  *(uint *)param_4[1] = *(uint *)*param_4 ^ 0x80000000;
  *(uint *)(param_4[1] + 4) = uVar3 ^ 0x80000000;
  *(uint *)(param_4[1] + 8) = uVar4 ^ 0x80000000;
  *(uint *)(param_4[1] + 0xc) = uVar5 ^ 0x80000000;
  for (local_14 = (**(code **)(*piVar8 + 8))(); local_14 != -1;
      local_14 = (**(code **)(*piVar8 + 0xc))(local_14)) {
    piVar7 = (int *)(**(code **)(*piVar8 + 0x14))(local_14,local_240);
    (**(code **)(*piVar7 + 0x10))(param_2,param_3,local_40);
    auVar9 = minps(*param_4,local_40);
    *param_4 = auVar9;
    auVar9 = maxps(param_4[1],local_30);
    param_4[1] = auVar9;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
  }
  return;
}

// 0114FBC0  TthkpShapeCollection::getMaximumProjection  size=240  [run]
float10 __thiscall TthkpShapeCollection::getMaximumProjection(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined1 local_220 [520];
  float local_18;
  float local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TthkpShapeCollection::getMaximumProjection";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_14 = -3.40282e+38;
  for (iVar4 = (**(code **)(*(int *)(param_1 + 0x10) + 8))(); iVar4 != -1;
      iVar4 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(iVar4)) {
    piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x10) + 0x14))(iVar4,local_220);
    fVar6 = (float10)(**(code **)(*piVar5 + 0x3c))(param_2);
    local_18 = (float)fVar6;
    if ((float10)local_14 <= fVar6) {
      local_14 = local_18;
    }
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return (float10)local_14;
}

// 0114FCB0  hkpCompressedMeshShape::vf18  size=368  [run]
void __thiscall hkpCompressedMeshShape::vf18(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined1 local_230 [516];
  int local_2c;
  int *local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_15;
  undefined4 local_14;
  
  local_2c = param_1;
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  piVar6 = (int *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x28) == 0) {
    for (iVar4 = (**(code **)(*piVar6 + 8))(); iVar4 != -1;
        iVar4 = (**(code **)(*piVar6 + 0xc))(iVar4)) {
      local_28 = (int *)(**(code **)(*piVar6 + 0x14))(iVar4,local_230);
      local_1c = param_3;
      local_20 = *(undefined4 *)(param_3 + 8);
      local_24 = iVar4;
      (**(code **)(*local_28 + 0x18))(param_2,&local_28,param_4);
    }
  }
  else {
    for (iVar4 = (**(code **)(*piVar6 + 8))(); iVar4 != -1;
        iVar4 = (**(code **)(*piVar6 + 0xc))(iVar4)) {
      pcVar5 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x28))
                                 (&local_15,param_2,local_2c,piVar6,iVar4);
      if (*pcVar5 != '\0') {
        local_28 = (int *)(**(code **)(*piVar6 + 0x14))(iVar4,local_230);
        local_1c = param_3;
        local_20 = *(undefined4 *)(param_3 + 8);
        local_24 = iVar4;
        (**(code **)(*local_28 + 0x18))(param_2,&local_28,param_4);
      }
    }
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 0114FE30  hkpShapeCollection::vf00  size=8  [run]
void hkpShapeCollection::vf00(void)

{
  vf00();
  return;
}

// 0114FE40  FUN_0114fe40  size=38  [run]
void FUN_0114fe40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0114FE70  hkpShapeCollection::vf00  size=60  [run]
undefined4 * __thiscall hkpShapeCollection::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0114FEB0  FUN_0114feb0  size=9  [run]
void FUN_0114feb0(void)

{
  FUN_01010120();
  return;
}

// 0114FEC0  FUN_0114fec0  size=16  [run]
undefined4 __thiscall FUN_0114fec0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0114FED0  FUN_0114fed0  size=19  [run]
void __thiscall FUN_0114fed0(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 0114FEF0  FUN_0114fef0  size=21  [run]
void __thiscall FUN_0114fef0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0114FF10  hkpConvexVerticesConnectivity::vf0C  size=9  [run]
void __fastcall hkpConvexVerticesConnectivity::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0114FF20  FUN_0114ff20  size=129  [run]
void __thiscall FUN_0114ff20(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x18) == (*(uint *)(param_1 + 0x1c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x14),1);
  }
  *(char *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) = (char)param_3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (0 < param_3) {
    iVar2 = 0;
    do {
      uVar1 = *(undefined2 *)(param_2 + iVar2 * 4);
      if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),2);
      }
      *(undefined2 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 2) = uVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

// 0114FFB0  FUN_0114ffb0  size=328  [run]
/* WARNING: Removing unreachable block (ram,0x011500a2) */
/* WARNING: Removing unreachable block (ram,0x011500a8) */
/* WARNING: Removing unreachable block (ram,0x011500b1) */
/* WARNING: Removing unreachable block (ram,0x011500b6) */
/* WARNING: Removing unreachable block (ram,0x011500bc) */
/* WARNING: Removing unreachable block (ram,0x011500c1) */
/* WARNING: Removing unreachable block (ram,0x011500c7) */
/* WARNING: Removing unreachable block (ram,0x011500cc) */

undefined1 * __thiscall FUN_0114ffb0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  local_c = 0;
  local_14 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = (uint)*(byte *)(local_14 + *(int *)(param_1 + 0x14));
      iVar1 = *(int *)(param_1 + 8) + local_c * 2;
      local_8 = 0;
      uVar6 = (uint)*(ushort *)(iVar1 + -2 + uVar3 * 2);
      if (uVar3 != 0) {
        do {
          uVar7 = (uint)*(ushort *)(iVar1 + local_8 * 2);
          if (uVar6 < uVar7) {
            uVar4 = uVar6 << 0x10 | uVar7;
          }
          else {
            uVar4 = uVar7 << 0x10 | uVar6;
          }
          uVar6 = (uVar6 < uVar7) + 1;
          iVar5 = FUN_01010120(uVar4 + 1);
          if (iVar5 < 0) {
            uVar4 = *(uint *)(iVar5 * 8 + 4);
            if ((uVar6 & uVar4) != 0) {
              *param_2 = 0;
              goto LAB_011500d6;
            }
            *(uint *)(iVar5 * 8 + 4) = uVar4 | uVar6;
          }
          else {
            FUN_010100a0(&PTR_vftable_018e9b94,uVar4 + 1,uVar6);
          }
          local_8 = local_8 + 1;
          uVar6 = uVar7;
        } while (local_8 < (int)uVar3);
      }
      local_c = local_c + uVar3;
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  *param_2 = 1;
LAB_011500d6:
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return param_2;
}

// 01150120  FUN_01150120  size=25  [run]
void FUN_01150120(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01150160  FUN_01150160  size=36  [run]
void __thiscall FUN_01150160(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01150250  FUN_01150250  size=10  [run]
void FUN_01150250(void)

{
  return;
}

// 01150370  FUN_01150370  size=138  [run]
void __fastcall FUN_01150370(undefined4 param_1,float *param_2)

{
  undefined4 *in_EAX;
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = in_EAX[1];
  fVar3 = 3.40282e+38;
  if (0 < iVar2) {
    puVar1 = (undefined8 *)*in_EAX;
    do {
      local_20 = (float)*puVar1;
      fStack_1c = (float)((ulonglong)*puVar1 >> 0x20);
      fStack_18 = (float)puVar1[1];
      fStack_14 = (float)((ulonglong)puVar1[1] >> 0x20);
      fVar4 = -(param_2[2] * fStack_18 + *param_2 * local_20 + fStack_14 + param_2[1] * fStack_1c);
      if (fVar4 <= fVar3) {
        fVar3 = fVar4;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01150560  FUN_01150560  size=671  [run]
void FUN_01150560(int param_1,int *param_2,float param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((int)(param_4[2] & 0x3fffffffU) < *(int *)(param_1 + 0x18)) {
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,*(int *)(param_1 + 0x18),0x10);
  }
  local_14 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar12 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + local_18);
      if (uVar12 < 3) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        iVar6 = *(int *)(param_1 + 0x18) - local_18;
        puVar10 = (undefined1 *)(local_18 + *(int *)(param_1 + 0x14));
        if (0 < iVar6) {
          do {
            *puVar10 = puVar10[1];
            puVar10 = puVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_18 = local_18 + -1;
      }
      else {
        iVar6 = 0;
        local_1c = local_14 * 2;
        local_40 = 0.0;
        fStack_3c = 0.0;
        fStack_38 = 0.0;
        bVar16 = true;
        local_60 = 0.0;
        fStack_5c = 0.0;
        fStack_58 = 0.0;
        do {
          if ((int)uVar12 <= iVar6) break;
          iVar6 = iVar6 + 1;
          iVar11 = iVar6;
          iVar14 = local_1c;
          if (bVar16) {
            do {
              iVar14 = iVar14 + 2;
              if ((int)uVar12 <= iVar11) break;
              iVar15 = iVar14;
              local_20 = iVar11 + 1;
              if (bVar16) {
                do {
                  if ((int)uVar12 <= local_20) break;
                  iVar8 = *(int *)(param_1 + 8);
                  uVar7 = (uint)*(ushort *)(local_1c + iVar8);
                  iVar4 = *param_2;
                  uVar13 = (uint)*(ushort *)(iVar15 + 2 + iVar8);
                  uVar1 = *(undefined8 *)(iVar4 + uVar7 * 0x10);
                  uVar2 = *(undefined8 *)(iVar4 + 8 + uVar7 * 0x10);
                  local_60 = (float)uVar1;
                  fStack_5c = (float)((ulonglong)uVar1 >> 0x20);
                  fStack_58 = (float)uVar2;
                  fStack_54 = (float)((ulonglong)uVar2 >> 0x20);
                  uVar1 = *(undefined8 *)(iVar4 + (uint)*(ushort *)(iVar14 + iVar8) * 0x10);
                  uVar2 = *(undefined8 *)(iVar4 + 8 + (uint)*(ushort *)(iVar14 + iVar8) * 0x10);
                  uVar3 = *(undefined8 *)(iVar4 + uVar13 * 0x10);
                  local_50 = (float)uVar1;
                  fStack_4c = (float)((ulonglong)uVar1 >> 0x20);
                  fStack_48 = (float)uVar2;
                  fStack_44 = (float)((ulonglong)uVar2 >> 0x20);
                  local_70 = (float)uVar3;
                  fStack_6c = (float)((ulonglong)uVar3 >> 0x20);
                  fStack_68 = (float)*(undefined8 *)(iVar4 + 8 + uVar13 * 0x10);
                  local_50 = local_50 - local_60;
                  fStack_4c = fStack_4c - fStack_5c;
                  fStack_48 = fStack_48 - fStack_58;
                  auVar28._4_4_ = local_50;
                  auVar28._0_4_ = fStack_48;
                  auVar28._8_4_ = fStack_4c;
                  auVar28._12_4_ = fStack_44 - fStack_54;
                  fVar22 = (fStack_68 - fStack_58) * fStack_4c - (fStack_6c - fStack_5c) * fStack_48
                  ;
                  fVar23 = (local_70 - local_60) * fStack_48 - (fStack_68 - fStack_58) * local_50;
                  fVar24 = (fStack_6c - fStack_5c) * local_50 - (local_70 - local_60) * fStack_4c;
                  fVar19 = fVar22 * fVar22;
                  fVar20 = fVar23 * fVar23;
                  fVar21 = fVar24 * fVar24;
                  fVar25 = fVar20 + fVar19 + fVar21;
                  fVar26 = fVar20 + fVar19 + fVar21;
                  fVar27 = fVar20 + fVar19 + fVar21;
                  fVar21 = fVar20 + fVar19 + fVar21;
                  auVar29._4_4_ = fVar26;
                  auVar29._0_4_ = fVar25;
                  auVar29._8_4_ = fVar27;
                  auVar29._12_4_ = fVar21;
                  auVar29 = rsqrtps(auVar28,auVar29);
                  uVar13 = -(uint)(0.0 - fVar25 < 0.0);
                  uVar17 = -(uint)(0.0 - fVar26 < 0.0);
                  uVar18 = -(uint)(0.0 - fVar27 < 0.0);
                  fVar19 = auVar29._0_4_;
                  fVar20 = auVar29._4_4_;
                  fVar30 = auVar29._8_4_;
                  auVar5._4_4_ = uVar17;
                  auVar5._0_4_ = uVar13;
                  auVar5._8_4_ = uVar18;
                  auVar5._12_4_ = -(uint)(0.0 - fVar21 < 0.0);
                  iVar8 = movmskps(uVar7 * 2,auVar5);
                  bVar16 = iVar8 == 0;
                  local_40 = (float)((uint)((float)(~-(uint)(fVar25 <= 0.0) &
                                                   (uint)((3.0 - fVar19 * fVar25 * fVar19) *
                                                         fVar19 * 0.5)) * fVar22) & uVar13 |
                                    ~uVar13 & (uint)fVar22);
                  fStack_3c = (float)((uint)((float)(~-(uint)(fVar26 <= 0.0) &
                                                    (uint)((3.0 - fVar20 * fVar26 * fVar20) *
                                                          fVar20 * 0.5)) * fVar23) & uVar17 |
                                     ~uVar17 & (uint)fVar23);
                  fStack_38 = (float)((uint)((float)(~-(uint)(fVar27 <= 0.0) &
                                                    (uint)((3.0 - fVar30 * fVar27 * fVar30) *
                                                          fVar30 * 0.5)) * fVar24) & uVar18 |
                                     ~uVar18 & (uint)fVar24);
                  iVar15 = iVar15 + 2;
                  local_20 = local_20 + 1;
                } while (bVar16);
              }
              iVar11 = iVar11 + 1;
            } while (bVar16);
          }
          local_1c = local_1c + 2;
        } while (bVar16);
        if (bVar16) {
          local_40 = 0.0;
          fStack_3c = 0.0;
          fStack_38 = 0.0;
          local_60 = 0.0;
          fStack_5c = 0.0;
          fStack_58 = 0.0;
        }
        pfVar9 = (float *)(param_4[1] * 0x10 + *param_4);
        *pfVar9 = local_40;
        pfVar9[1] = fStack_3c;
        pfVar9[2] = fStack_38;
        pfVar9[3] = -(fStack_5c * fStack_3c + local_60 * local_40 + fStack_58 * fStack_38 + param_3)
        ;
        param_4[1] = param_4[1] + 1;
      }
      local_14 = local_14 + uVar12;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x18));
  }
  return;
}

