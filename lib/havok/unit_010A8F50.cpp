// lib/havok/unit_010A8F50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010A8F50..010BC750, 371 functions

#include "mgrr.h"
#include "IConvexOverlapImpl.h"
#include "hkBaseObject.h"
#include "hkgpMesh.h"
#include "hkgpTriangulatorBase.h"

// 010A8F50  hkgpMesh::TriangleShape::TriangleShape  size=21  [run]
void __thiscall hkgpMesh::TriangleShape::TriangleShape(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  param_1[1] = param_2;
  return;
}

// 010A8F70  FUN_010a8f70  size=39  [run]
void FUN_010a8f70(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010A8FA0  hkgpMesh::ExternShape::ExternShape  size=27  [run]
void __thiscall
hkgpMesh::ExternShape::ExternShape(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}

// 010A8FC0  hkgpMesh::ExternShape::vf0C  size=31  [run]
undefined4 __thiscall hkgpMesh::ExternShape::vf0C(int param_1,undefined4 param_2)

{
  FUN_01441040(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  return param_2;
}

// 010A8FE0  FUN_010a8fe0  size=39  [run]
void FUN_010a8fe0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010A9010  FUN_010a9010  size=45  [run]
undefined4 FUN_010a9010(undefined4 param_1,int param_2)

{
  FUN_0108e2a0(param_1,*(int *)(param_2 + 8) + 0x20,*(int *)(param_2 + 0xc) + 0x20,
               *(int *)(param_2 + 0x10) + 0x20);
  return param_1;
}

// 010A9040  hkgpMesh::TriangleShape::vf00  size=50  [run]
undefined4 * __thiscall hkgpMesh::TriangleShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = IConvexOverlap::IConvexShape::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010A9080  hkgpMesh::ExternShape::vf00  size=50  [run]
undefined4 * __thiscall hkgpMesh::ExternShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = IConvexOverlap::IConvexShape::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010A90F0  hkgpMesh::TriangleShape::vf08  size=166  [run]
void __thiscall hkgpMesh::TriangleShape::vf08(int param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar13 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  iVar2 = *(int *)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 0xc);
  iVar4 = *(int *)(iVar1 + 0x10);
  fVar11 = *(float *)(iVar2 + 0x24) * fVar5 + *(float *)(iVar2 + 0x20) * fVar13 +
           *(float *)(iVar2 + 0x28) * fVar6;
  fVar12 = *(float *)(iVar3 + 0x24) * fVar5 + *(float *)(iVar3 + 0x20) * fVar13 +
           *(float *)(iVar3 + 0x28) * fVar6;
  fVar13 = *(float *)(iVar4 + 0x24) * fVar5 + *(float *)(iVar4 + 0x20) * fVar13 +
           *(float *)(iVar4 + 0x28) * fVar6;
  if (fVar11 <= fVar12) {
    uVar10 = (fVar12 <= fVar13) + 1;
  }
  else {
    uVar10 = (fVar13 < fVar11) - 1 & 2;
  }
  iVar1 = *(int *)(iVar1 + 8 + uVar10 * 4);
  uVar7 = *(undefined4 *)(iVar1 + 0x24);
  uVar8 = *(undefined4 *)(iVar1 + 0x28);
  uVar9 = *(undefined4 *)(iVar1 + 0x2c);
  *param_3 = *(undefined4 *)(iVar1 + 0x20);
  param_3[1] = uVar7;
  param_3[2] = uVar8;
  param_3[3] = uVar9;
  param_3[3] = uVar10 | 0x3f000000;
  return;
}

// 010A91A0  hkgpMesh::TriangleShape::vf0C  size=128  [run]
undefined4 __thiscall hkgpMesh::TriangleShape::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  local_40 = *(undefined8 *)(*(int *)(iVar1 + 8) + 0x20);
  local_38 = *(undefined8 *)(*(int *)(iVar1 + 8) + 0x28);
  local_30 = *(undefined8 *)(*(int *)(iVar1 + 0xc) + 0x20);
  local_28 = *(undefined8 *)(*(int *)(iVar1 + 0xc) + 0x28);
  local_20 = *(undefined8 *)(*(int *)(iVar1 + 0x10) + 0x20);
  local_18 = *(undefined8 *)(*(int *)(iVar1 + 0x10) + 0x28);
  FUN_01441040(&local_40,3,param_2);
  return param_2;
}

// 010A9220  hkgpMesh::ExternShape::vf08  size=138  [run]
void __thiscall hkgpMesh::ExternShape::vf08(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = *(float **)(param_1 + 4);
  uVar5 = 0;
  uVar4 = 1;
  fVar7 = pfVar1[1] * param_2[1] + *pfVar1 * *param_2 + pfVar1[2] * param_2[2];
  pfVar2 = pfVar1;
  if (1 < *(int *)(param_1 + 8)) {
    do {
      fVar6 = pfVar2[5] * param_2[1] + pfVar2[4] * *param_2 + pfVar2[6] * param_2[2];
      if (fVar7 < fVar6) {
        uVar5 = uVar4;
        fVar7 = fVar6;
      }
      uVar4 = uVar4 + 1;
      pfVar2 = pfVar2 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 8));
  }
  pfVar1 = pfVar1 + uVar5 * 4;
  fVar7 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar3 = pfVar1[3];
  *param_3 = *pfVar1;
  param_3[1] = fVar7;
  param_3[2] = fVar6;
  param_3[3] = fVar3;
  param_3[3] = (float)(uVar5 | 0x3f000000);
  return;
}

// 010A9340  FUN_010a9340  size=38  [run]
void FUN_010a9340(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010A9370  FUN_010a9370  size=50  [run]
bool __thiscall FUN_010a9370(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_2[1] <= param_1[5] && param_1[1] <= param_2[5]);
  auVar1._0_4_ = -(uint)(*param_2 <= param_1[4] && *param_1 <= param_2[4]);
  auVar1._8_4_ = -(uint)(param_2[2] <= param_1[6] && param_1[2] <= param_2[6]);
  auVar1._12_4_ = -(uint)(param_2[3] <= param_1[7] && param_1[3] <= param_2[7]);
  uVar2 = movmskps(param_2,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 010A93B0  FUN_010a93b0  size=112  [run]
void FUN_010a93b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = (param_3[2] - fVar3) * (param_2[1] - fVar2) - (param_3[1] - fVar2) * (param_2[2] - fVar3);
  fVar5 = (*param_3 - fVar1) * (param_2[2] - fVar3) - (param_3[2] - fVar3) * (*param_2 - fVar1);
  fVar6 = (param_3[1] - fVar2) * (*param_2 - fVar1) - (*param_3 - fVar1) * (param_2[1] - fVar2);
  *param_4 = fVar4;
  param_4[1] = fVar5;
  param_4[2] = fVar6;
  param_4[3] = 0.0 - (fVar2 * fVar5 + fVar1 * fVar4 + fVar3 * fVar6);
  return;
}

// 010A9420  FUN_010a9420  size=38  [run]
bool __thiscall FUN_010a9420(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)*param_1;
  auVar3._4_4_ = -(uint)(pfVar1[1] == pfVar2[1]);
  auVar3._0_4_ = -(uint)(*pfVar1 == *pfVar2);
  auVar3._8_4_ = -(uint)(pfVar1[2] == pfVar2[2]);
  auVar3._12_4_ = -(uint)(pfVar1[3] == pfVar2[3]);
  uVar4 = movmskps(param_1,auVar3);
  return ((byte)uVar4 & 7) == 7;
}

// 010A9450  FUN_010a9450  size=31  [run]
void FUN_010a9450(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010A9470  FUN_010a9470  size=39  [run]
void FUN_010a9470(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010A9540  FUN_010a9540  size=24  [run]
bool FUN_010a9540(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x20) < *(int *)(param_2 + 0x20);
}

// 010A9560  FUN_010a9560  size=31  [run]
void FUN_010a9560(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010A9580  FUN_010a9580  size=39  [run]
void FUN_010a9580(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 010A95C0  FUN_010a95c0  size=16  [run]
uint __thiscall FUN_010a95c0(undefined1 (*param_1) [16],uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = movmskps(in_EAX,*param_1);
  return uVar1 & param_2;
}

// 010A95D0  FUN_010a95d0  size=26  [run]
void __thiscall FUN_010a95d0(float *param_1,int *param_2,float *param_3)

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
  *param_2 = -(uint)(*param_1 <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return;
}

// 010A9600  FUN_010a9600  size=22  [run]
void __thiscall FUN_010a9600(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  return;
}

// 010A9620  FUN_010a9620  size=19  [run]
void __thiscall FUN_010a9620(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar2 * param_1[2];
  param_1[3] = fVar3 * param_1[3];
  return;
}

// 010A9640  FUN_010a9640  size=50  [run]
void __thiscall
FUN_010a9640(undefined1 (*param_1) [16],float *param_2,undefined1 (*param_3) [16],float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = -(uint)(*param_2 < *param_4);
  uVar2 = -(uint)(param_2[1] < param_4[1]);
  uVar3 = -(uint)(param_2[2] < param_4[2]);
  uVar4 = -(uint)(param_2[3] < param_4[3]);
  auVar5._0_4_ = (uint)*param_2 & uVar1;
  auVar5._4_4_ = (uint)param_2[1] & uVar2;
  auVar5._8_4_ = (uint)param_2[2] & uVar3;
  auVar5._12_4_ = (uint)param_2[3] & uVar4;
  auVar6._0_4_ = ~uVar1 & (uint)*param_4;
  auVar6._4_4_ = ~uVar2 & (uint)param_4[1];
  auVar6._8_4_ = ~uVar3 & (uint)param_4[2];
  auVar6._12_4_ = ~uVar4 & (uint)param_4[3];
  auVar5 = maxps(*param_3,auVar6 | auVar5);
  *param_1 = auVar5;
  return;
}

// 010A9680  FUN_010a9680  size=26  [run]
void __thiscall FUN_010a9680(int param_1,char param_2,byte param_3,byte param_4)

{
  *(byte *)(param_1 + 4) = (param_2 << 4 | param_4) * '\x04' | param_3;
  return;
}

// 010A96B0  FUN_010a96b0  size=28  [run]
void __thiscall FUN_010a96b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return;
}

// 010A96D0  FUN_010a96d0  size=85  [run]
void __thiscall
FUN_010a96d0(undefined1 *param_1,int param_2,byte param_3,byte param_4,int param_5,int param_6)

{
  param_1[param_2 - 2U & 3] = *(undefined1 *)(param_6 + 0x2c);
  *param_1 = *(undefined1 *)(param_5 + 0xc);
  param_1[1] = *(undefined1 *)(param_5 + 0x1c);
  param_1[2] = *(undefined1 *)(param_5 + 0x2c);
  param_1[param_2] = *(undefined1 *)(param_6 + 0xc);
  param_1[param_2 + 1] = *(undefined1 *)(param_6 + 0x1c);
  param_1[4] = ((char)param_2 << 4 | param_4) * '\x04' | param_3;
  return;
}

// 010A9740  FUN_010a9740  size=18  [run]
void __thiscall FUN_010a9740(undefined4 *param_1,undefined4 *param_2)

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

// 010A9760  FUN_010a9760  size=102  [run]
void FUN_010a9760(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = *param_6;
  fVar11 = param_6[1];
  fVar12 = param_6[2];
  fVar13 = *param_7;
  fVar14 = param_7[1];
  fVar15 = param_7[2];
  fVar16 = *param_8;
  fVar17 = param_8[1];
  fVar18 = param_8[2];
  *param_9 = param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2;
  param_9[1] = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4;
  param_9[2] = fVar9 * fVar12 + fVar8 * fVar11 + fVar7 * fVar10;
  param_9[3] = fVar15 * fVar18 + fVar14 * fVar17 + fVar13 * fVar16;
  return;
}

// 010A97D0  IConvexOverlapImpl::vf08  size=44  [run]
undefined4 __thiscall
IConvexOverlapImpl::vf08(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 4))(param_2,param_3,1);
  if (fVar1 <= (float10)param_4) {
    return 1;
  }
  return 0;
}

// 010A9820  FUN_010a9820  size=14  [run]
void __thiscall FUN_010a9820(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A9830  FUN_010a9830  size=12  [run]
void __thiscall FUN_010a9830(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A9840  FUN_010a9840  size=18  [run]
void __thiscall FUN_010a9840(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A98C0  FUN_010a98c0  size=14  [run]
void __thiscall FUN_010a98c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010A9920  FUN_010a9920  size=20  [run]
void __thiscall FUN_010a9920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = param_2[1];
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 010A9950  FUN_010a9950  size=23  [run]
void __thiscall FUN_010a9950(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return;
}

// 010A99A0  FUN_010a99a0  size=39  [run]
void FUN_010a99a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010A99D0  hkcdGskBase::ShapeInterface::vf00  size=50  [run]
undefined4 * __thiscall hkcdGskBase::ShapeInterface::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010A9A10  FUN_010a9a10  size=361  [run]
undefined4 FUN_010a9a10(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 4;
  local_8 = 0x10;
  local_10 = 8;
  iVar6 = 0;
  iVar8 = 0x20;
  iVar7 = 0;
  do {
    iVar10 = iVar7;
    iVar9 = iVar8;
    iVar8 = iVar6;
    if ((0.0 <= *(float *)(iVar10 + (int)param_3)) && (0.0 <= *(float *)(local_c + (int)param_3))) {
      pfVar1 = (float *)(local_8 + param_2);
      pfVar2 = (float *)(iVar9 + param_2);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      pfVar2 = (float *)(iVar8 + param_2);
      fVar11 = *(float *)(param_2 + 0x30) - fVar3;
      fVar12 = *(float *)(param_2 + 0x34) - fVar4;
      fVar13 = *(float *)(param_2 + 0x38) - fVar5;
      if ((fVar12 * (pfVar2[1] - fVar4) + fVar11 * (*pfVar2 - fVar3) + fVar13 * (pfVar2[2] - fVar5))
          * ((param_1[1] - fVar4) * (pfVar1[1] - fVar4) + (*param_1 - fVar3) * (*pfVar1 - fVar3) +
            (param_1[2] - fVar5) * (pfVar1[2] - fVar5)) <=
          ((param_1[1] - fVar4) * (pfVar2[1] - fVar4) + (*param_1 - fVar3) * (*pfVar2 - fVar3) +
          (param_1[2] - fVar5) * (pfVar2[2] - fVar5)) *
          (fVar12 * (pfVar1[1] - fVar4) + fVar11 * (*pfVar1 - fVar3) + fVar13 * (pfVar1[2] - fVar5))
         ) {
        *(undefined4 *)(iVar10 + (int)param_3) = 0xbf800000;
      }
      else {
        *(undefined4 *)(local_c + (int)param_3) = 0xbf800000;
      }
    }
    local_c = local_10;
    iVar6 = iVar8 + 0x10;
    iVar7 = iVar10 + 4;
    local_10 = iVar10;
    local_8 = iVar9;
  } while (iVar8 + 0x10 < 0x30);
  if (0.0 < *param_3) {
    return 0;
  }
  if (0.0 < param_3[1]) {
    return 1;
  }
  if (0.0 < param_3[2]) {
    return 2;
  }
  return 0xffffffff;
}

// 010A9F60  IConvexOverlapImpl::ShapeInterface::vf04  size=272  [run]
void IConvexOverlapImpl::ShapeInterface::vf04
               (int *param_1,float *param_2,int *param_3,float *param_4,undefined4 param_5,
               float *param_6,float *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar12 = -*param_2;
  fVar13 = -param_2[1];
  fVar14 = -param_2[2];
  uVar1 = *(undefined8 *)param_4;
  uStack_18 = *(undefined8 *)(param_4 + 2);
  uVar2 = *(undefined8 *)(param_4 + 4);
  local_20._0_4_ = (float)uVar1;
  local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_28 = *(undefined8 *)(param_4 + 6);
  local_30._0_4_ = (float)uVar2;
  local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_40 = (float)*(undefined8 *)(param_4 + 8);
  fStack_3c = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fStack_38 = (float)*(undefined8 *)(param_4 + 10);
  fStack_34 = (float)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20);
  fVar17 = fVar13 * fStack_3c;
  fVar15 = fVar12 * local_40;
  fVar16 = fVar12 * fStack_3c;
  _local_40 = CONCAT44(fVar13 * local_30._4_4_ + fVar12 * (float)local_30 +
                       (float)uStack_28 * fVar14,
                       fVar13 * local_20._4_4_ + fVar12 * (float)local_20 +
                       (float)uStack_18 * fVar14);
  _fStack_38 = CONCAT44(fVar13 * fStack_34 + fVar16 + fStack_34 * fVar14,
                        fVar17 + fVar15 + fStack_38 * fVar14);
  local_30 = uVar2;
  local_20 = uVar1;
  (**(code **)(*param_1 + 8))(param_2,param_5);
  (**(code **)(*param_3 + 8))(&local_40,param_6);
  fVar12 = *param_6;
  fVar13 = param_6[1];
  fVar14 = param_6[2];
  fVar15 = param_4[1];
  fVar16 = param_4[2];
  fVar17 = param_4[3];
  fVar3 = param_4[5];
  fVar4 = param_4[6];
  fVar5 = param_4[7];
  fVar6 = param_4[9];
  fVar7 = param_4[10];
  fVar8 = param_4[0xb];
  fVar9 = param_4[0xd];
  fVar10 = param_4[0xe];
  fVar11 = param_4[0xf];
  *param_7 = fVar12 * *param_4 + fVar13 * param_4[4] + fVar14 * param_4[8] + param_4[0xc];
  param_7[1] = fVar12 * fVar15 + fVar13 * fVar3 + fVar14 * fVar6 + fVar9;
  param_7[2] = fVar12 * fVar16 + fVar13 * fVar4 + fVar14 * fVar7 + fVar10;
  param_7[3] = fVar12 * fVar17 + fVar13 * fVar5 + fVar14 * fVar8 + fVar11;
  return;
}

// 010AA0E0  IConvexOverlapImpl::vf00  size=34  [run]
undefined4 * __thiscall IConvexOverlapImpl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = hkgpMesh::IConvexOverlap::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 010AA120  IConvexOverlapImpl::ShapeInterface::vf00  size=50  [run]
undefined4 * __thiscall IConvexOverlapImpl::ShapeInterface::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdGskBase::ShapeInterface::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010AA190  FUN_010aa190  size=108  [run]
void __thiscall FUN_010aa190(undefined4 *param_1,undefined4 *param_2)

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
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = 0;
  param_1[4] = param_1[4];
  param_1[5] = param_1[5];
  param_1[6] = param_1[6];
  param_1[7] = 0;
  param_1[8] = param_1[8];
  param_1[9] = param_1[9];
  param_1[10] = param_1[10];
  param_1[0xb] = 0;
  param_1[0xc] = param_1[0xc];
  param_1[0xd] = param_1[0xd];
  param_1[0xe] = param_1[0xe];
  param_1[0xf] = 0x3f800000;
  return;
}

// 010AA250  FUN_010aa250  size=32  [run]
void __thiscall FUN_010aa250(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 9 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010AA270  FUN_010aa270  size=32  [run]
void __thiscall FUN_010aa270(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 0x12 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010AA2D0  FUN_010aa2d0  size=89  [run]
undefined4 __thiscall FUN_010aa2d0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if ((*(int *)(*param_1 + 8 + param_1[1] * 4) !=
         *(int *)(iVar1 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) ||
       (*(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4) !=
        *(int *)(iVar1 + 8 + param_2[1] * 4))) {
      return 0;
    }
  }
  return 1;
}

// 010AA330  FUN_010aa330  size=125  [run]
undefined4 __thiscall FUN_010aa330(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((iVar1 != 0) &&
     ((*(int *)(*param_1 + 8 + param_1[1] * 4) !=
       *(int *)(iVar1 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4) ||
      (*(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4) !=
       *(int *)(iVar1 + 8 + param_2[1] * 4))))) {
    return 0;
  }
  *(int *)(*param_1 + 0x14 + param_1[1] * 4) = param_2[1] + iVar1;
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x14 + param_2[1] * 4) = *param_1 + param_1[1];
  }
  return 1;
}

// 010AA3B0  FUN_010aa3b0  size=15  [run]
void __thiscall FUN_010aa3b0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// 010AA3E0  FUN_010aa3e0  size=31  [run]
void FUN_010aa3e0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010AA400  FUN_010aa400  size=39  [run]
void FUN_010aa400(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010AA480  FUN_010aa480  size=21  [run]
void FUN_010aa480(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010AA4A0  FUN_010aa4a0  size=20  [run]
void __thiscall FUN_010aa4a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010AA550  FUN_010aa550  size=31  [run]
void FUN_010aa550(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010AA570  FUN_010aa570  size=39  [run]
void FUN_010aa570(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010AA5A0  FUN_010aa5a0  size=25  [run]
void FUN_010aa5a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010AA5C0  FUN_010aa5c0  size=25  [run]
void FUN_010aa5c0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010AA5F0  FUN_010aa5f0  size=21  [run]
void FUN_010aa5f0(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010AA700  FUN_010aa700  size=27  [run]
void __thiscall FUN_010aa700(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AA720  FUN_010aa720  size=78  [run]
void __thiscall FUN_010aa720(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)param_2[1];
  if (piVar1 != (int *)0x0) {
    iVar2 = *param_2;
    puVar3 = (undefined4 *)piVar1[1];
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
      *piVar1 = iVar2;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_2;
      param_2[1] = (int)puVar3;
      piVar1[1] = (int)param_2;
      *param_2 = (int)piVar1;
      return;
    }
    *(int **)(param_1 + 4) = param_2;
    param_2[1] = 0;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
  }
  return;
}

// 010AA780  FUN_010aa780  size=48  [run]
void __thiscall FUN_010aa780(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 8);
    iVar2 = (*param_1 + param_1[1] * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 010AA7B0  FUN_010aa7b0  size=13  [run]
void __thiscall FUN_010aa7b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010AA7C0  FUN_010aa7c0  size=52  [run]
undefined4 __thiscall FUN_010aa7c0(int param_1,undefined4 param_2,int param_3)

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

// 010AA800  FUN_010aa800  size=103  [run]
void __thiscall FUN_010aa800(int *param_1,undefined4 param_2,int param_3,int param_4)

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
    FUN_0100a210(param_2,param_1,iVar1,8);
  }
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(param_3 + (int)puVar2);
        puVar2[1] = *(undefined4 *)(param_3 + 4 + (int)puVar2);
      }
      puVar2 = puVar2 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 010AA880  FUN_010aa880  size=57  [run]
void __thiscall FUN_010aa880(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AA8C0  FUN_010aa8c0  size=25  [run]
void __thiscall FUN_010aa8c0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AA8E0  FUN_010aa8e0  size=45  [run]
undefined4 __thiscall FUN_010aa8e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 010AA910  FUN_010aa910  size=51  [run]
int __thiscall FUN_010aa910(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010AAE20  FUN_010aae20  size=13  [run]
void __thiscall FUN_010aae20(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010AAE30  FUN_010aae30  size=53  [run]
int __thiscall FUN_010aae30(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x70);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x70 + *param_1;
}

// 010AAE70  FUN_010aae70  size=28  [run]
void __thiscall FUN_010aae70(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 010AAEA0  FUN_010aaea0  size=57  [run]
void __thiscall FUN_010aaea0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AAEE0  FUN_010aaee0  size=88  [run]
void __thiscall FUN_010aaee0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

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

// 010AAF40  FUN_010aaf40  size=55  [run]
void __thiscall FUN_010aaf40(int param_1,undefined4 param_2,int param_3)

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

// 010AAF80  FUN_010aaf80  size=57  [run]
void __thiscall FUN_010aaf80(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AAFC0  FUN_010aafc0  size=57  [run]
void __thiscall FUN_010aafc0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AB000  FUN_010ab000  size=13  [run]
void __thiscall FUN_010ab000(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010AB010  FUN_010ab010  size=53  [run]
int __thiscall FUN_010ab010(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x20);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x20 + *param_1;
}

// 010AB050  FUN_010ab050  size=28  [run]
void __thiscall FUN_010ab050(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 010AB070  FUN_010ab070  size=57  [run]
void __thiscall FUN_010ab070(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AB0B0  FUN_010ab0b0  size=92  [run]
void __thiscall FUN_010ab0b0(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 010AB110  FUN_010ab110  size=26  [run]
void FUN_010ab110(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 010AB130  FUN_010ab130  size=62  [run]
void FUN_010ab130(int param_1)

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

// 010AB170  FUN_010ab170  size=73  [run]
void FUN_010ab170(int param_1,int param_2)

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

// 010AB1C0  FUN_010ab1c0  size=26  [run]
void FUN_010ab1c0(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 & 3;
  *param_2 = param_1 & 0xfffffffc;
  return;
}

// 010AB1E0  hkgpTriangulatorBase::vf00  size=53  [run]
undefined4 * __thiscall hkgpTriangulatorBase::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010AB220  FUN_010ab220  size=20  [run]
void __thiscall FUN_010ab220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 010AB240  FUN_010ab240  size=32  [run]
void __thiscall FUN_010ab240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010AB260  FUN_010ab260  size=32  [run]
void __thiscall FUN_010ab260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 9 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010AB280  FUN_010ab280  size=32  [run]
void __thiscall FUN_010ab280(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 0x12 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010AB2A0  FUN_010ab2a0  size=23  [run]
int __thiscall FUN_010ab2a0(int *param_1,uint param_2)

{
  return *param_1 + (param_2 % (uint)param_1[1]) * 0xc;
}

// 010AB2C0  FUN_010ab2c0  size=23  [run]
int __thiscall FUN_010ab2c0(int *param_1,uint param_2)

{
  return *param_1 + (param_2 % (uint)param_1[1]) * 0xc;
}

// 010AB300  FUN_010ab300  size=14  [run]
void __thiscall FUN_010ab300(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010AB310  FUN_010ab310  size=14  [run]
void __thiscall FUN_010ab310(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010AB320  FUN_010ab320  size=21  [run]
void __thiscall FUN_010ab320(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 010AB340  FUN_010ab340  size=31  [run]
void FUN_010ab340(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010AB360  hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>_2  size=23  [run]
void __thiscall
hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::
Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>_2(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = vftable;
  param_1[1] = *param_2;
  return;
}

// 010AB390  FUN_010ab390  size=21  [run]
void __thiscall FUN_010ab390(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 010AB3B0  FUN_010ab3b0  size=21  [run]
void __thiscall FUN_010ab3b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 010AB3F0  FUN_010ab3f0  size=44  [run]
void __thiscall FUN_010ab3f0(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

// 010AB420  FUN_010ab420  size=39  [run]
void FUN_010ab420(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010AB450  FUN_010ab450  size=44  [run]
uint FUN_010ab450(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (*(int *)(param_2 + 8) <= (int)uVar1) {
    if ((int)uVar1 <= *(int *)(param_2 + 8)) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if (((int)uVar1 < *(int *)(param_2 + 0xc)) || ((int)uVar1 <= *(int *)(param_2 + 0xc)))
      goto LAB_010ab477;
    }
    return uVar1 & 0xffffff00;
  }
LAB_010ab477:
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// 010AB480  FUN_010ab480  size=31  [run]
void FUN_010ab480(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    piVar1 = (int *)(iVar2 + 0xe0c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_010a7da0(iVar2);
    }
  }
  return;
}

// 010AB4A0  FUN_010ab4a0  size=94  [run]
void __fastcall FUN_010ab4a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xe04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xe08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xe04) + 0xe08) = *(undefined4 *)(iVar1 + 0xe08);
    }
    if (*(int *)(iVar1 + 0xe08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xe08) + 0xe04) = *(undefined4 *)(iVar1 + 0xe04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xe10);
    iVar1 = *param_1;
  }
  return;
}

// 010AB510  FUN_010ab510  size=31  [run]
void FUN_010ab510(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    piVar1 = (int *)(iVar2 + 0xc0c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_010a7e00(iVar2);
    }
  }
  return;
}

// 010AB530  FUN_010ab530  size=94  [run]
void __fastcall FUN_010ab530(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  return;
}

// 010AB5A0  FUN_010ab5a0  size=63  [run]
void __thiscall FUN_010ab5a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB5E0  FUN_010ab5e0  size=40  [run]
void FUN_010ab5e0(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 010AB610  FUN_010ab610  size=61  [run]
void __thiscall FUN_010ab610(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB650  FUN_010ab650  size=71  [run]
void __thiscall FUN_010ab650(int param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *(float *)(param_1 + 0x694);
  fVar5 = *(float *)(param_1 + 0x698);
  fVar6 = *(float *)(param_1 + 0x69c);
  fVar7 = *(float *)(param_1 + 0x6c4);
  fVar8 = *(float *)(param_1 + 0x6c8);
  fVar9 = *(float *)(param_1 + 0x6cc);
  fVar10 = *(float *)(param_1 + 0x6a4);
  fVar11 = *(float *)(param_1 + 0x6a8);
  fVar12 = *(float *)(param_1 + 0x6ac);
  fVar13 = *(float *)(param_1 + 0x6b4);
  fVar14 = *(float *)(param_1 + 0x6b8);
  fVar15 = *(float *)(param_1 + 0x6bc);
  *param_2 = fVar1 * *(float *)(param_1 + 0x690) + *(float *)(param_1 + 0x6c0) +
             fVar2 * *(float *)(param_1 + 0x6a0) + fVar3 * *(float *)(param_1 + 0x6b0);
  param_2[1] = fVar1 * fVar4 + fVar7 + fVar2 * fVar10 + fVar3 * fVar13;
  param_2[2] = fVar1 * fVar5 + fVar8 + fVar2 * fVar11 + fVar3 * fVar14;
  param_2[3] = fVar1 * fVar6 + fVar9 + fVar2 * fVar12 + fVar3 * fVar15;
  return;
}

// 010AB6A0  FUN_010ab6a0  size=54  [run]
int FUN_010ab6a0(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_2 + 8) - *(int *)(param_1 + 8)) *
         (*(int *)(param_3 + 0xc) - *(int *)(param_1 + 0xc)) -
         (*(int *)(param_3 + 8) - *(int *)(param_1 + 8)) *
         (*(int *)(param_2 + 0xc) - *(int *)(param_1 + 0xc));
}

// 010AB6F0  FUN_010ab6f0  size=13  [run]
void __thiscall FUN_010ab6f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010AB700  FUN_010ab700  size=52  [run]
undefined4 __thiscall FUN_010ab700(int param_1,undefined4 param_2,int param_3)

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

// 010AB740  FUN_010ab740  size=60  [run]
void __thiscall FUN_010ab740(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB780  FUN_010ab780  size=60  [run]
void __thiscall FUN_010ab780(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB7C0  FUN_010ab7c0  size=47  [run]
void FUN_010ab7c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar2 = param_3;
        puVar3 = param_1;
        for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = param_1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010AB7F0  FUN_010ab7f0  size=52  [run]
undefined4 __thiscall FUN_010ab7f0(int param_1,undefined4 param_2,int param_3)

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

// 010AB830  FUN_010ab830  size=61  [run]
void __thiscall FUN_010ab830(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB870  FUN_010ab870  size=52  [run]
undefined4 __thiscall FUN_010ab870(int param_1,undefined4 param_2,int param_3)

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

// 010AB8B0  FUN_010ab8b0  size=157  [run]
void FUN_010ab8b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar1 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar5 = param_3;
    iVar6 = param_2;
    do {
      iVar2 = *(int *)(iVar1 + 0x20);
      for (iVar3 = *(int *)(*(int *)(param_1 + iVar6 * 4) + 0x20); iVar3 < iVar2;
          iVar3 = *(int *)(*(int *)(param_1 + 4 + iVar3) + 0x20)) {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
      }
      for (iVar3 = *(int *)(*(int *)(param_1 + iVar5 * 4) + 0x20); iVar2 < iVar3;
          iVar3 = *(int *)(*(int *)(param_1 + -4 + iVar3) + 0x20)) {
        iVar3 = iVar5 * 4;
        iVar5 = iVar5 + -1;
      }
      if (iVar5 < iVar6) break;
      if (iVar5 != iVar6) {
        uVar4 = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = uVar4;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar5);
    if (param_2 < iVar5) {
      FUN_010ab8b0(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 010AB950  FUN_010ab950  size=61  [run]
void __thiscall FUN_010ab950(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AB9B0  FUN_010ab9b0  size=72  [run]
int __thiscall FUN_010ab9b0(uint *param_1,int *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int *piVar5;
  
  if ((int)param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < (int)param_4) {
    pfVar1 = (float *)*param_2;
    uVar4 = *param_1;
    piVar5 = (int *)(uVar4 + param_3 * 8);
    do {
      pfVar2 = (float *)*piVar5;
      auVar3._4_4_ = -(uint)(pfVar2[1] == pfVar1[1]);
      auVar3._0_4_ = -(uint)(*pfVar2 == *pfVar1);
      auVar3._8_4_ = -(uint)(pfVar2[2] == pfVar1[2]);
      auVar3._12_4_ = -(uint)(pfVar2[3] == pfVar1[3]);
      uVar4 = movmskps(uVar4,auVar3);
      uVar4 = uVar4 & 7;
      if ((char)uVar4 == '\a') {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar5 = piVar5 + 2;
    } while (param_3 < (int)param_4);
  }
  return -1;
}

// 010ABA00  FUN_010aba00  size=51  [run]
int __thiscall FUN_010aba00(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010ABA40  FUN_010aba40  size=60  [run]
void __thiscall FUN_010aba40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010ABA80  FUN_010aba80  size=66  [run]
void FUN_010aba80(undefined8 *param_1,int param_2,undefined8 *param_3)

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

// 010ABAD0  FUN_010abad0  size=52  [run]
undefined4 __thiscall FUN_010abad0(int param_1,undefined4 param_2,int param_3)

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

// 010ABB10  FUN_010abb10  size=46  [run]
void FUN_010abb10(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010ABB40  FUN_010abb40  size=61  [run]
void __thiscall FUN_010abb40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010ABB90  FUN_010abb90  size=32  [run]
void __thiscall FUN_010abb90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010ABBB0  FUN_010abbb0  size=39  [run]
void FUN_010abbb0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 010ABC10  FUN_010abc10  size=102  [run]
void __fastcall FUN_010abc10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xe10);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0xd90);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x1c;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0xe00) = piVar3;
    *(undefined4 *)(iVar2 + 0xe0c) = 0;
    *(undefined4 *)(iVar2 + 0xe04) = 0;
    *(int *)(iVar2 + 0xe08) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0xe08) != 0) {
      *(int *)(*(int *)(iVar2 + 0xe08) + 0xe04) = iVar2;
    }
  }
  return;
}

// 010ABC80  FUN_010abc80  size=102  [run]
void __fastcall FUN_010abc80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc10);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0xba0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x18;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0xc00) = piVar3;
    *(undefined4 *)(iVar2 + 0xc0c) = 0;
    *(undefined4 *)(iVar2 + 0xc04) = 0;
    *(int *)(iVar2 + 0xc08) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0xc08) != 0) {
      *(int *)(*(int *)(iVar2 + 0xc08) + 0xc04) = iVar2;
    }
  }
  return;
}

// 010ABD00  FUN_010abd00  size=94  [run]
void __fastcall FUN_010abd00(int *param_1)

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

// 010ABD70  FUN_010abd70  size=94  [run]
void __fastcall FUN_010abd70(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x804) == 0) {
      *param_1 = *(int *)(iVar1 + 0x808);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x804) + 0x808) = *(undefined4 *)(iVar1 + 0x808);
    }
    if (*(int *)(iVar1 + 0x808) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x808) + 0x804) = *(undefined4 *)(iVar1 + 0x804);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x810);
    iVar1 = *param_1;
  }
  return;
}

// 010ABDE0  FUN_010abde0  size=38  [run]
int __thiscall FUN_010abde0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244 + ((param_3 >> 0xb) * 0x10 + (param_2 >> 0xb)) * 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return iVar1;
}

// 010ABE10  FUN_010abe10  size=63  [run]
void __thiscall FUN_010abe10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010ABE50  FUN_010abe50  size=40  [run]
void FUN_010abe50(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 010ABE80  FUN_010abe80  size=94  [run]
void __fastcall FUN_010abe80(int *param_1)

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

// 010ABEF0  FUN_010abef0  size=105  [run]
void __thiscall FUN_010abef0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  param_1[3] = 0;
  *param_1 = *(undefined4 *)(param_2 + 8 + param_3 * 4);
  piVar1 = (int *)(param_2 + 8 + (9 >> ((char)param_3 * '\x02' & 0x1fU) & 3U) * 4);
  param_1[1] = *piVar1;
  iVar2 = *(int *)(param_2 + 8 + param_3 * 4);
  iVar3 = *piVar1;
  param_1[2] = *(int *)(iVar2 + 0xc) * 0x3442a5 + *(int *)(iVar2 + 8) * 0x21528000 ^
               *(int *)(iVar3 + 0xc) * 0x1958e9 + *(int *)(iVar3 + 8) * -0x538b8000;
  return;
}

// 010ABF70  FUN_010abf70  size=49  [run]
void FUN_010abf70(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000004) {
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010ABFD0  FUN_010abfd0  size=62  [run]
void FUN_010abfd0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 010AC010  FUN_010ac010  size=73  [run]
void FUN_010ac010(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 010AC090  FUN_010ac090  size=28  [run]
void __thiscall FUN_010ac090(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  return;
}

// 010AC0B0  FUN_010ac0b0  size=28  [run]
void __thiscall FUN_010ac0b0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  return;
}

// 010AC0F0  FUN_010ac0f0  size=39  [run]
void FUN_010ac0f0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010AC140  FUN_010ac140  size=39  [run]
void FUN_010ac140(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010AC1A0  FUN_010ac1a0  size=31  [run]
void FUN_010ac1a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    piVar1 = (int *)(iVar2 + 0x60c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_010a84a0(iVar2);
    }
  }
  return;
}

// 010AC1C0  FUN_010ac1c0  size=31  [run]
void FUN_010ac1c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    piVar1 = (int *)(iVar2 + 0x80c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_010a8500(iVar2);
    }
  }
  return;
}

// 010AC1E0  FUN_010ac1e0  size=81  [run]
void __thiscall FUN_010ac1e0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x244 +
          ((*(int *)(*(int *)(param_2 + 0xc) + 0xc) + *(int *)(*(int *)(param_2 + 8) + 0xc) * 2 +
            *(int *)(*(int *)(param_2 + 0x10) + 0xc) >> 0xd) * 0x10 +
          (*(int *)(*(int *)(param_2 + 0xc) + 8) + *(int *)(*(int *)(param_2 + 8) + 8) * 2 +
           *(int *)(*(int *)(param_2 + 0x10) + 8) >> 0xd)) * 4) = param_2;
  *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 8;
  return;
}

// 010AC240  FUN_010ac240  size=72  [run]
int FUN_010ac240(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*param_1 + 8 + param_1[1] * 4);
  iVar2 = *(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  iVar3 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 8);
  return (*(int *)(iVar2 + 8) - iVar1) * (param_3 - iVar3) -
         (*(int *)(iVar2 + 0xc) - iVar3) * (param_2 - iVar1);
}

// 010AC290  FUN_010ac290  size=209  [run]
undefined4 FUN_010ac290(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_5 + 0xc);
  iVar3 = *(int *)(param_5 + 8);
  iVar6 = *(int *)(param_2 + 8) - iVar3;
  iVar5 = *(int *)(param_2 + 0xc) - iVar4;
  iVar7 = *(int *)(param_3 + 8) - iVar3;
  iVar2 = *(int *)(param_3 + 0xc) - iVar4;
  iVar3 = *(int *)(param_4 + 8) - iVar3;
  iVar4 = *(int *)(param_4 + 0xc) - iVar4;
  lVar1 = (longlong)(iVar7 * iVar7 + iVar2 * iVar2) * (longlong)(iVar5 * iVar3 - iVar6 * iVar4) +
          (longlong)(iVar6 * iVar6 + iVar5 * iVar5) * (longlong)(iVar7 * iVar4 - iVar2 * iVar3) +
          (longlong)(iVar6 * iVar2 - iVar5 * iVar7) * (longlong)(iVar3 * iVar3 + iVar4 * iVar4);
  if ((int)-((int)((ulonglong)lVar1 >> 0x20) + (uint)((int)lVar1 != 0)) < 0) {
    return 0;
  }
  return 1;
}

// 010AC370  FUN_010ac370  size=65  [run]
int __thiscall FUN_010ac370(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(param_3 * 0x10 + *param_1);
    do {
      if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 4;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010AC3C0  FUN_010ac3c0  size=63  [run]
void __thiscall FUN_010ac3c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AC400  FUN_010ac400  size=13  [run]
void __thiscall FUN_010ac400(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010AC410  FUN_010ac410  size=53  [run]
bool FUN_010ac410(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_1[1] <= param_2[5] && param_2[1] <= param_1[5]);
  auVar1._0_4_ = -(uint)(*param_1 <= param_2[4] && *param_2 <= param_1[4]);
  auVar1._8_4_ = -(uint)(param_1[2] <= param_2[6] && param_2[2] <= param_1[6]);
  auVar1._12_4_ = -(uint)(param_1[3] <= param_2[7] && param_2[3] <= param_1[7]);
  uVar2 = movmskps(param_2,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 010AC4B0  FUN_010ac4b0  size=63  [run]
undefined4 __thiscall FUN_010ac4b0(int param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x14) <= param_2[5] &&
                          param_2[1] <= *(float *)(param_1 + 0x24));
    auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x10) <= param_2[4] &&
                          *param_2 <= *(float *)(param_1 + 0x20));
    auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x18) <= param_2[6] &&
                          param_2[2] <= *(float *)(param_1 + 0x28));
    auVar1._12_4_ =
         -(uint)(*(float *)(param_1 + 0x1c) <= param_2[7] &&
                param_2[3] <= *(float *)(param_1 + 0x2c));
    uVar2 = movmskps(param_2,auVar1);
    if (((byte)uVar2 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

// 010AC540  FUN_010ac540  size=63  [run]
undefined4 __thiscall FUN_010ac540(int param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x14) <= param_2[5] &&
                          param_2[1] <= *(float *)(param_1 + 0x24));
    auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x10) <= param_2[4] &&
                          *param_2 <= *(float *)(param_1 + 0x20));
    auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x18) <= param_2[6] &&
                          param_2[2] <= *(float *)(param_1 + 0x28));
    auVar1._12_4_ =
         -(uint)(*(float *)(param_1 + 0x1c) <= param_2[7] &&
                param_2[3] <= *(float *)(param_1 + 0x2c));
    uVar2 = movmskps(param_2,auVar1);
    if (((byte)uVar2 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

// 010AC5D0  FUN_010ac5d0  size=63  [run]
undefined4 __thiscall FUN_010ac5d0(int param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x14) <= param_2[5] &&
                          param_2[1] <= *(float *)(param_1 + 0x24));
    auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x10) <= param_2[4] &&
                          *param_2 <= *(float *)(param_1 + 0x20));
    auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x18) <= param_2[6] &&
                          param_2[2] <= *(float *)(param_1 + 0x28));
    auVar1._12_4_ =
         -(uint)(*(float *)(param_1 + 0x1c) <= param_2[7] &&
                param_2[3] <= *(float *)(param_1 + 0x2c));
    uVar2 = movmskps(param_2,auVar1);
    if (((byte)uVar2 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

// 010AC660  FUN_010ac660  size=11  [run]
undefined4 FUN_010ac660(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// 010AC670  FUN_010ac670  size=64  [run]
void __thiscall FUN_010ac670(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AC6B0  FUN_010ac6b0  size=63  [run]
void __thiscall FUN_010ac6b0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010AC6F0  FUN_010ac6f0  size=153  [run]
byte __fastcall FUN_010ac6f0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010AC790  FUN_010ac790  size=153  [run]
byte __fastcall FUN_010ac790(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010AC830  FUN_010ac830  size=153  [run]
byte __fastcall FUN_010ac830(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010AC8E0  FUN_010ac8e0  size=102  [run]
void __fastcall FUN_010ac8e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0x610);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x5d0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0xc;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0x600) = piVar3;
    *(undefined4 *)(iVar2 + 0x60c) = 0;
    *(undefined4 *)(iVar2 + 0x604) = 0;
    *(int *)(iVar2 + 0x608) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0x608) != 0) {
      *(int *)(*(int *)(iVar2 + 0x608) + 0x604) = iVar2;
    }
  }
  return;
}

// 010ACA10  FUN_010aca10  size=39  [run]
void FUN_010aca10(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010ACA60  FUN_010aca60  size=102  [run]
void __fastcall FUN_010aca60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0x610);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x5d0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0xc;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0x600) = piVar3;
    *(undefined4 *)(iVar2 + 0x60c) = 0;
    *(undefined4 *)(iVar2 + 0x604) = 0;
    *(int *)(iVar2 + 0x608) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0x608) != 0) {
      *(int *)(*(int *)(iVar2 + 0x608) + 0x604) = iVar2;
    }
  }
  return;
}

// 010ACAD0  FUN_010acad0  size=102  [run]
void __fastcall FUN_010acad0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0x810);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x7c0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x10;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0x800) = piVar3;
    *(undefined4 *)(iVar2 + 0x80c) = 0;
    *(undefined4 *)(iVar2 + 0x804) = 0;
    *(int *)(iVar2 + 0x808) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0x808) != 0) {
      *(int *)(*(int *)(iVar2 + 0x808) + 0x804) = iVar2;
    }
  }
  return;
}

// 010ACB40  FUN_010acb40  size=128  [run]
int * __thiscall FUN_010acb40(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 4);
    }
    param_3 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 010ACBD0  FUN_010acbd0  size=39  [run]
void FUN_010acbd0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return;
}

// 010ACC00  FUN_010acc00  size=60  [run]
void __thiscall FUN_010acc00(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010ACC40  FUN_010acc40  size=52  [run]
void __thiscall FUN_010acc40(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + *param_1);
    iVar2 = (*param_1 + param_1[1] * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 010ACC80  FUN_010acc80  size=36  [run]
void FUN_010acc80(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        param_1[3] = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010ACCD0  FUN_010accd0  size=255  [run]
void FUN_010accd0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(param_2) {
  case 0:
    fVar5 = param_1[1];
    break;
  case 1:
    fVar4 = param_1[1];
    fVar5 = param_1[2];
    *param_3 = param_1[4];
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = 0.0;
    return;
  case 2:
    fVar4 = param_1[5];
    fVar5 = param_1[2];
    goto LAB_010acd3e;
  case 3:
    fVar5 = param_1[5];
    break;
  case 4:
    fVar4 = param_1[1];
    goto LAB_010acd69;
  case 5:
    fVar4 = param_1[1];
    fVar5 = param_1[6];
LAB_010acd3e:
    *param_3 = param_1[4];
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = 0.0;
    return;
  case 6:
    fVar4 = param_1[4];
    fVar5 = param_1[5];
    fVar6 = param_1[6];
    goto LAB_010accf7;
  case 7:
    fVar4 = param_1[5];
LAB_010acd69:
    fVar5 = param_1[6];
    *param_3 = *param_1;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = 0.0;
    return;
  default:
    fVar4 = param_1[5];
    fVar5 = param_1[6];
    fVar6 = param_1[7];
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    *param_3 = (param_1[4] + *param_1) * 0.5;
    param_3[1] = (fVar4 + fVar1) * 0.5;
    param_3[2] = (fVar5 + fVar2) * 0.5;
    param_3[3] = (fVar6 + fVar3) * 0.5;
    return;
  }
  fVar4 = *param_1;
  fVar6 = param_1[2];
LAB_010accf7:
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = 0.0;
  return;
}

// 010ACE40  FUN_010ace40  size=61  [run]
void __thiscall FUN_010ace40(undefined1 (*param_1) [16],uint *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *param_1;
  auVar3 = rsqrtps(in_XMM3,auVar1);
  fVar2 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  *param_2 = ~-(uint)(auVar1._0_4_ <= 0.0) &
             (uint)((3.0 - auVar1._0_4_ * fVar2 * fVar2) * fVar2 * 0.5);
  param_2[1] = ~-(uint)(auVar1._4_4_ <= 0.0) &
               (uint)((3.0 - auVar1._4_4_ * fVar4 * fVar4) * fVar4 * 0.5);
  param_2[2] = ~-(uint)(auVar1._8_4_ <= 0.0) &
               (uint)((3.0 - auVar1._8_4_ * fVar5 * fVar5) * fVar5 * 0.5);
  param_2[3] = ~-(uint)(auVar1._12_4_ <= 0.0) &
               (uint)((3.0 - auVar1._12_4_ * fVar6 * fVar6) * fVar6 * 0.5);
  return;
}

// 010ACE80  FUN_010ace80  size=150  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_010ace80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f7fffee;
  *(undefined1 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((_DAT_0209a9ac & 1) == 0) {
    _DAT_0209a9ac = _DAT_0209a9ac | 1;
    DAT_0209a9a4 = 0;
    DAT_0209a9a8 = 0;
  }
  *(undefined4 *)((int)param_1 + 0x4c) = DAT_0209a9a4;
  *(undefined4 *)(param_1 + 10) = DAT_0209a9a8;
  return;
}

// 010ACF20  FUN_010acf20  size=60  [run]
void __thiscall FUN_010acf20(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = (int *)(*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
      *(undefined4 *)
       (*(int *)(*piVar1 + 8 + (9 >> ((char)piVar1[1] * '\x02' & 0x1fU) & 3U) * 4) + 0x54) = param_2
      ;
    } while (iVar2 < param_1[1]);
  }
  return;
}

// 010ACF60  FUN_010acf60  size=60  [run]
void __thiscall FUN_010acf60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = (int *)(*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(*(int *)(*piVar1 + 8 + (9 >> ((char)piVar1[1] * '\x02' & 0x1fU) & 3U) * 4) +
                      0x54);
      *piVar1 = *piVar1 + param_2;
    } while (iVar2 < param_1[1]);
  }
  return;
}

// 010ACFA0  FUN_010acfa0  size=60  [run]
int __thiscall FUN_010acfa0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = (int *)*param_1;
    do {
      if (*(int *)(*(int *)(*piVar2 + 8 + (9 >> ((char)piVar2[1] * '\x02' & 0x1fU) & 3U) * 4) + 0x54
                  ) == param_2) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

// 010AD070  FUN_010ad070  size=294  [run]
bool FUN_010ad070(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
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
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar12 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  fVar7 = param_2[3];
  fVar3 = *param_4 - fVar12;
  fVar5 = param_4[1] - fVar15;
  fVar6 = param_4[2] - fVar16;
  fVar8 = *param_3 - fVar12;
  fVar9 = param_3[1] - fVar15;
  fVar10 = param_3[2] - fVar16;
  fVar11 = param_3[3] - fVar7;
  fVar21 = *param_1;
  fVar22 = param_1[1];
  fVar23 = param_1[2];
  fVar12 = fVar12 - fVar21;
  fVar15 = fVar15 - fVar22;
  fVar16 = fVar16 - fVar23;
  fVar17 = *param_3 - fVar21;
  fVar18 = param_3[1] - fVar22;
  fVar19 = param_3[2] - fVar23;
  fVar20 = param_3[3] - param_1[3];
  fVar21 = *param_4 - fVar21;
  fVar22 = param_4[1] - fVar22;
  fVar23 = param_4[2] - fVar23;
  fVar4 = fVar6 * fVar9 - fVar5 * fVar10;
  fVar6 = fVar3 * fVar10 - fVar6 * fVar8;
  fVar5 = fVar5 * fVar8 - fVar3 * fVar9;
  fVar8 = (param_4[3] - fVar7) * fVar11 - (param_4[3] - fVar7) * fVar11;
  fVar3 = (fVar19 * fVar4 - fVar17 * fVar5) * fVar15;
  fVar7 = (fVar20 * fVar8 - fVar20 * fVar8) * (fVar7 - param_1[3]);
  fVar8 = (fVar21 * fVar6 - fVar22 * fVar4) * fVar19 +
          (fVar22 * fVar5 - fVar23 * fVar6) * fVar17 + (fVar23 * fVar4 - fVar21 * fVar5) * fVar18;
  fVar15 = (fVar12 * fVar6 - fVar15 * fVar4) * fVar23 +
           (fVar15 * fVar5 - fVar16 * fVar6) * fVar21 + (fVar16 * fVar4 - fVar12 * fVar5) * fVar22;
  fVar12 = (fVar17 * fVar6 - fVar18 * fVar4) * fVar16 +
           (fVar18 * fVar5 - fVar19 * fVar6) * fVar12 + fVar3;
  fVar7 = fVar7 + fVar3 + fVar7;
  if (param_6 != (float *)0x0) {
    auVar13._4_4_ = fVar12;
    auVar13._0_4_ = fVar12;
    auVar13._8_4_ = fVar12;
    auVar13._12_4_ = fVar12;
    fVar16 = fVar15 + fVar8 + fVar12;
    fVar21 = fVar15 + fVar8 + fVar12;
    fVar22 = fVar15 + fVar8 + fVar12;
    fVar23 = fVar15 + fVar8 + fVar12;
    auVar14._4_4_ = fVar21;
    auVar14._0_4_ = fVar16;
    auVar14._8_4_ = fVar22;
    auVar14._12_4_ = fVar23;
    auVar14 = rcpps(auVar13,auVar14);
    *param_6 = (2.0 - auVar14._0_4_ * fVar16) * auVar14._0_4_ * fVar8;
    param_6[1] = (2.0 - auVar14._4_4_ * fVar21) * auVar14._4_4_ * fVar15;
    param_6[2] = (2.0 - auVar14._8_4_ * fVar22) * auVar14._8_4_ * fVar12;
    param_6[3] = (2.0 - auVar14._12_4_ * fVar23) * auVar14._12_4_ * fVar7;
  }
  auVar1._4_4_ = -(uint)(param_5[1] < fVar15);
  auVar1._0_4_ = -(uint)(*param_5 < fVar8);
  auVar1._8_4_ = -(uint)(param_5[2] < fVar12);
  auVar1._12_4_ = -(uint)(param_5[3] < fVar7);
  uVar2 = movmskps(param_4,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 010AFEB0  FUN_010afeb0  size=65  [run]
int __thiscall FUN_010afeb0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010AFF00  FUN_010aff00  size=27  [run]
void __thiscall FUN_010aff00(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[1] = uVar1 & 3;
  *param_1 = uVar1 & 0xfffffffc;
  return;
}

// 010AFF20  FUN_010aff20  size=53  [run]
undefined4 __thiscall FUN_010aff20(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010AFF60  FUN_010aff60  size=25  [run]
void FUN_010aff60(undefined4 param_1,undefined4 param_2)

{
  FUN_010aa800(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010AFF80  FUN_010aff80  size=58  [run]
void __thiscall FUN_010aff80(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010AFFC0  FUN_010affc0  size=46  [run]
undefined4 __thiscall FUN_010affc0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 010AFFF0  FUN_010afff0  size=46  [run]
int __fastcall FUN_010afff0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010B0020  FUN_010b0020  size=48  [run]
int __fastcall FUN_010b0020(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x70);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x70 + *param_1;
}

// 010B0090  FUN_010b0090  size=58  [run]
void __thiscall FUN_010b0090(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B00D0  FUN_010b00d0  size=56  [run]
void __thiscall FUN_010b00d0(int param_1,int param_2)

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

// 010B0110  FUN_010b0110  size=89  [run]
void __thiscall FUN_010b0110(int *param_1,int param_2,undefined4 *param_3)

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

// 010B0170  FUN_010b0170  size=58  [run]
void __thiscall FUN_010b0170(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B01B0  FUN_010b01b0  size=53  [run]
undefined4 __thiscall FUN_010b01b0(int param_1,int param_2)

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

// 010B01F0  FUN_010b01f0  size=58  [run]
void __thiscall FUN_010b01f0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B0230  FUN_010b0230  size=48  [run]
int __fastcall FUN_010b0230(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x20);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x20 + *param_1;
}

// 010B0270  FUN_010b0270  size=58  [run]
void __thiscall FUN_010b0270(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B02B0  FUN_010b02b0  size=25  [run]
void FUN_010b02b0(undefined4 param_1,undefined4 param_2)

{
  FUN_010ab0b0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010B02D0  FUN_010b02d0  size=27  [run]
void __thiscall FUN_010b02d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  param_1[1] = uVar1 & 3;
  *param_1 = uVar1 & 0xfffffffc;
  return;
}

// 010B02F0  FUN_010b02f0  size=94  [run]
void __fastcall FUN_010b02f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xe04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xe08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xe04) + 0xe08) = *(undefined4 *)(iVar1 + 0xe08);
    }
    if (*(int *)(iVar1 + 0xe08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xe08) + 0xe04) = *(undefined4 *)(iVar1 + 0xe04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xe10);
    iVar1 = *param_1;
  }
  return;
}

// 010B0360  FUN_010b0360  size=94  [run]
void __fastcall FUN_010b0360(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  return;
}

// 010B03D0  FUN_010b03d0  size=58  [run]
void __thiscall FUN_010b03d0(int param_1,int *param_2)

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
  iVar1 = param_2[0x18];
  piVar2 = (int *)(iVar1 + 0xe0c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_010a7da0(iVar1);
  }
  return;
}

// 010B0410  FUN_010b0410  size=58  [run]
void __thiscall FUN_010b0410(int param_1,int *param_2)

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
  iVar1 = param_2[0x14];
  piVar2 = (int *)(iVar1 + 0xc0c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_010a7e00(iVar1);
  }
  return;
}

// 010B0450  FUN_010b0450  size=67  [run]
void __thiscall FUN_010b0450(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 010B04A0  FUN_010b04a0  size=66  [run]
void __thiscall FUN_010b04a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x70);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x70 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B04F0  FUN_010b04f0  size=68  [run]
int __thiscall FUN_010b04f0(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 4;
}

// 010B0540  FUN_010b0540  size=55  [run]
void __thiscall FUN_010b0540(int param_1,undefined4 param_2,int param_3)

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

// 010B0580  FUN_010b0580  size=33  [run]
void FUN_010b0580(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_010ab8b0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010B05B0  FUN_010b05b0  size=122  [run]
int * __thiscall FUN_010b05b0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*param_1 + 4 + (param_2 % (uint)param_1[1]) * 0xc);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
    piVar3 = piVar2;
    while (((*param_3 != *piVar3 || (param_3[1] != piVar3[1])) &&
           ((*param_3 != piVar3[1] || (param_3[1] != *piVar3))))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 5;
      if (iVar1 <= iVar4) {
        return (int *)0x0;
      }
    }
    if (iVar4 != -1) {
      return piVar2 + iVar4 * 5;
    }
  }
  return (int *)0x0;
}

// 010B0630  FUN_010b0630  size=103  [run]
int * __thiscall FUN_010b0630(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  iVar1 = *(int *)(*param_1 + 4 + (param_2 % (uint)param_1[1]) * 0xc);
  iVar6 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
    pfVar3 = (float *)*param_3;
    piVar8 = piVar2;
    while( true ) {
      pfVar4 = (float *)*piVar8;
      auVar5._4_4_ = -(uint)(pfVar4[1] == pfVar3[1]);
      auVar5._0_4_ = -(uint)(*pfVar4 == *pfVar3);
      auVar5._8_4_ = -(uint)(pfVar4[2] == pfVar3[2]);
      auVar5._12_4_ = -(uint)(pfVar4[3] == pfVar3[3]);
      uVar7 = movmskps(pfVar4,auVar5);
      if (((byte)uVar7 & 7) == 7) break;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 2;
      if (iVar1 <= iVar6) {
        return (int *)0x0;
      }
    }
    if (iVar6 != -1) {
      return piVar2 + iVar6 * 2;
    }
  }
  return (int *)0x0;
}

// 010B06A0  hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>  size=76  [run]
void hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::
     Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = vftable;
    puVar2[1] = *param_1;
    FUN_010cbd00(puVar2);
    return;
  }
  FUN_010cbd00(0);
  return;
}

// 010B06F0  FUN_010b06f0  size=93  [run]
void __thiscall FUN_010b06f0(int *param_1,undefined4 param_2,undefined8 *param_3)

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

// 010B0750  FUN_010b0750  size=63  [run]
void __fastcall FUN_010b0750(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0790  FUN_010b0790  size=61  [run]
void __fastcall FUN_010b0790(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B07D0  FUN_010b07d0  size=53  [run]
undefined4 __thiscall FUN_010b07d0(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010B0810  FUN_010b0810  size=60  [run]
void __fastcall FUN_010b0810(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0850  FUN_010b0850  size=60  [run]
void __fastcall FUN_010b0850(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0890  FUN_010b0890  size=61  [run]
void __fastcall FUN_010b0890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B08D0  FUN_010b08d0  size=31  [run]
void __thiscall FUN_010b08d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010B08F0  FUN_010b08f0  size=61  [run]
void __fastcall FUN_010b08f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0930  FUN_010b0930  size=60  [run]
void __fastcall FUN_010b0930(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0970  FUN_010b0970  size=61  [run]
void __fastcall FUN_010b0970(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B09B0  FUN_010b09b0  size=31  [run]
void __thiscall FUN_010b09b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010B09D0  FUN_010b09d0  size=46  [run]
int __fastcall FUN_010b09d0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010B0A00  FUN_010b0a00  size=104  [run]
void __thiscall FUN_010b0a00(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return;
}

// 010B0A80  FUN_010b0a80  size=94  [run]
void __thiscall FUN_010b0a80(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return;
}

// 010B0AE0  hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::vf00  size=50  [run]
undefined4 * __thiscall
hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = IJob::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010B0BA0  FUN_010b0ba0  size=106  [run]
void __fastcall FUN_010b0ba0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xe04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xe08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xe04) + 0xe08) = *(undefined4 *)(iVar1 + 0xe08);
    }
    if (*(int *)(iVar1 + 0xe08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xe08) + 0xe04) = *(undefined4 *)(iVar1 + 0xe04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xe10);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 010B0C10  FUN_010b0c10  size=106  [run]
void __fastcall FUN_010b0c10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0xc04) == 0) {
      *param_1 = *(int *)(iVar1 + 0xc08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0xc04) + 0xc08) = *(undefined4 *)(iVar1 + 0xc08);
    }
    if (*(int *)(iVar1 + 0xc08) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xc08) + 0xc04) = *(undefined4 *)(iVar1 + 0xc04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0xc10);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 010B0C80  FUN_010b0c80  size=63  [run]
void __thiscall FUN_010b0c80(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B0CC0  FUN_010b0cc0  size=67  [run]
void __thiscall FUN_010b0cc0(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 010B0D10  FUN_010b0d10  size=94  [run]
void __fastcall FUN_010b0d10(int *param_1)

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

// 010B3170  FUN_010b3170  size=85  [run]
int __thiscall FUN_010b3170(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x14);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0x14;
}

// 010B31D0  FUN_010b31d0  size=61  [run]
void __thiscall FUN_010b31d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B3210  FUN_010b3210  size=94  [run]
void __fastcall FUN_010b3210(int *param_1)

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

// 010B3280  FUN_010b3280  size=94  [run]
void __fastcall FUN_010b3280(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x804) == 0) {
      *param_1 = *(int *)(iVar1 + 0x808);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x804) + 0x808) = *(undefined4 *)(iVar1 + 0x808);
    }
    if (*(int *)(iVar1 + 0x808) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x808) + 0x804) = *(undefined4 *)(iVar1 + 0x804);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x810);
    iVar1 = *param_1;
  }
  return;
}

// 010B32F0  FUN_010b32f0  size=68  [run]
void __thiscall FUN_010b32f0(int param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x10) =
       *(uint *)(param_1 + 0x10) ^ (*(uint *)(param_1 + 0x10) ^ *(uint *)(param_2 + 0x10)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x10) ^ *(uint *)(param_1 + 0x10)) & 2 ^ *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x10) = (*(uint *)(param_2 + 0x10) ^ uVar1) & 3 ^ *(uint *)(param_2 + 0x10);
  return;
}

// 010B3350  FUN_010b3350  size=63  [run]
void __fastcall FUN_010b3350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B33C0  FUN_010b33c0  size=58  [run]
void __thiscall FUN_010b33c0(int param_1,int *param_2)

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
    FUN_010a84a0(iVar1);
  }
  return;
}

// 010B3400  FUN_010b3400  size=58  [run]
void __thiscall FUN_010b3400(int param_1,int *param_2)

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
  iVar1 = param_2[0xc];
  piVar2 = (int *)(iVar1 + 0x80c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_010a8500(iVar1);
  }
  return;
}

// 010B3440  FUN_010b3440  size=209  [run]
undefined4 FUN_010b3440(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_4 + 0xc);
  iVar3 = *(int *)(param_4 + 8);
  iVar6 = *(int *)(param_1 + 8) - iVar3;
  iVar5 = *(int *)(param_1 + 0xc) - iVar4;
  iVar7 = *(int *)(param_2 + 8) - iVar3;
  iVar2 = *(int *)(param_2 + 0xc) - iVar4;
  iVar3 = *(int *)(param_3 + 8) - iVar3;
  iVar4 = *(int *)(param_3 + 0xc) - iVar4;
  lVar1 = (longlong)(iVar7 * iVar7 + iVar2 * iVar2) * (longlong)(iVar5 * iVar3 - iVar6 * iVar4) +
          (longlong)(iVar6 * iVar6 + iVar5 * iVar5) * (longlong)(iVar7 * iVar4 - iVar2 * iVar3) +
          (longlong)(iVar6 * iVar2 - iVar5 * iVar7) * (longlong)(iVar3 * iVar3 + iVar4 * iVar4);
  if ((int)-((int)((ulonglong)lVar1 >> 0x20) + (uint)((int)lVar1 != 0)) < 0) {
    return 0;
  }
  return 1;
}

// 010B3520  FUN_010b3520  size=96  [run]
int * __thiscall FUN_010b3520(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(*param_1 + 4 + (param_2 % (uint)param_1[1]) * 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
    piVar4 = piVar2;
    while ((*piVar4 != *param_3 || (piVar4[1] != param_3[1]))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
      if (iVar1 <= iVar3) {
        return (int *)0x0;
      }
    }
    if (iVar3 != -1) {
      return piVar2 + iVar3 * 4;
    }
  }
  return (int *)0x0;
}

// 010B3580  FUN_010b3580  size=46  [run]
void FUN_010b3580(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010B35B0  FUN_010b35b0  size=46  [run]
void FUN_010b35b0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010B3650  FUN_010b3650  size=63  [run]
void __fastcall FUN_010b3650(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B3690  FUN_010b3690  size=77  [run]
int FUN_010b3690(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*param_1 + 8 + param_1[1] * 4);
  iVar2 = *(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  iVar3 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 8);
  return (*(int *)(iVar2 + 8) - iVar1) * (*(int *)(param_2 + 0xc) - iVar3) -
         (*(int *)(iVar2 + 0xc) - iVar3) * (*(int *)(param_2 + 8) - iVar1);
}

// 010B36E0  FUN_010b36e0  size=51  [run]
int __thiscall FUN_010b36e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010B3720  FUN_010b3720  size=11  [run]
undefined4 FUN_010b3720(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// 010B3730  FUN_010b3730  size=153  [run]
byte __fastcall FUN_010b3730(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010B37D0  FUN_010b37d0  size=153  [run]
byte __fastcall FUN_010b37d0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010B3870  FUN_010b3870  size=153  [run]
byte __fastcall FUN_010b3870(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (auVar1._4_4_ = -(uint)(param_4[1] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[5]),
     auVar1._0_4_ = -(uint)(*param_4 <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[4]),
     auVar1._8_4_ = -(uint)(param_4[2] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[6]),
     auVar1._12_4_ =
          -(uint)(param_4[3] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[7]), uVar4 = movmskps(param_1,auVar1),
     ((byte)uVar4 & 7) != 7)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((*(int *)(param_3 + 4) != 0) &&
     (auVar2._4_4_ = -(uint)(param_4[0xd] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x11]),
     auVar2._0_4_ = -(uint)(param_4[0xc] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x10]),
     auVar2._8_4_ = -(uint)(param_4[0xe] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x12]),
     auVar2._12_4_ =
          -(uint)(param_4[0xf] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x13]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 010B3910  FUN_010b3910  size=63  [run]
void FUN_010b3910(float *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

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

// 010B3950  FUN_010b3950  size=64  [run]
void __fastcall FUN_010b3950(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B3990  FUN_010b3990  size=63  [run]
void __fastcall FUN_010b3990(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B3A10  FUN_010b3a10  size=47  [run]
void FUN_010b3a10(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B3A40  FUN_010b3a40  size=47  [run]
void FUN_010b3a40(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B3A70  FUN_010b3a70  size=47  [run]
void FUN_010b3a70(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B3AA0  FUN_010b3aa0  size=47  [run]
void FUN_010b3aa0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B3B90  FUN_010b3b90  size=123  [run]
void __thiscall FUN_010b3b90(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2[1]) {
    do {
      uVar1 = param_1[1];
      iVar2 = 0;
      if (0 < (int)uVar1) {
        piVar3 = (int *)*param_1;
        do {
          if (*piVar3 == *(int *)(*param_2 + iVar4 * 4)) {
            if (iVar2 != -1) goto LAB_010b3bfb;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < (int)uVar1);
      }
      iVar2 = *param_2;
      if (uVar1 == (param_1[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
      }
      *(undefined4 *)(*param_1 + param_1[1] * 4) = *(undefined4 *)(iVar2 + iVar4 * 4);
      param_1[1] = param_1[1] + 1;
LAB_010b3bfb:
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2[1]);
  }
  return;
}

// 010B3CA0  FUN_010b3ca0  size=151  [run]
void __thiscall FUN_010b3ca0(int param_1,undefined1 (*param_2) [16])

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

// 010B3DD0  FUN_010b3dd0  size=134  [run]
int * __thiscall FUN_010b3dd0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 010B3E60  FUN_010b3e60  size=168  [run]
void __thiscall FUN_010b3e60(int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  param_1[3] = param_1[3] + -1;
  piVar3 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  iVar4 = piVar3[1];
  iVar5 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)*piVar3;
    piVar2 = piVar1;
    while ((*piVar2 != *param_3 || (piVar2[1] != param_3[1]))) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 4;
      if (iVar4 <= iVar5) {
        return;
      }
    }
    if (-1 < iVar5) {
      iVar5 = 0;
      if (0 < iVar4) {
        piVar2 = piVar1;
        do {
          if ((*piVar2 == *param_3) && (piVar2[1] == param_3[1])) goto LAB_010b3ed8;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 4;
        } while (iVar5 < iVar4);
      }
      iVar5 = -1;
LAB_010b3ed8:
      iVar4 = iVar4 + -1;
      piVar3[1] = iVar4;
      if (iVar4 != iVar5) {
        piVar3 = piVar1 + iVar5 * 4;
        iVar4 = iVar4 * 0x10 - (int)piVar3;
        iVar5 = 4;
        do {
          *piVar3 = *(int *)((int)piVar1 + iVar4 + (int)piVar3);
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

// 010B3F10  FUN_010b3f10  size=73  [run]
int __thiscall FUN_010b3f10(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 010B3F60  FUN_010b3f60  size=60  [run]
void __fastcall FUN_010b3f60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B3FA0  FUN_010b3fa0  size=46  [run]
void FUN_010b3fa0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010B3FD0  FUN_010b3fd0  size=107  [run]
float10 FUN_010b3fd0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  
  fVar1 = (*param_1 - param_1[4]) * (*param_1 - param_1[4]);
  fVar2 = (param_1[1] - param_1[5]) * (param_1[1] - param_1[5]);
  fVar3 = (param_1[2] - param_1[6]) * (param_1[2] - param_1[6]);
  fVar4 = fVar2 + fVar1 + fVar3;
  auVar5._4_4_ = fVar2 + fVar1 + fVar3;
  auVar5._0_4_ = fVar4;
  auVar5._8_4_ = fVar2 + fVar1 + fVar3;
  auVar5._12_4_ = fVar2 + fVar1 + fVar3;
  auVar5 = rsqrtps(in_XMM3,auVar5);
  fVar1 = auVar5._0_4_;
  return (float10)(float)(~-(uint)(fVar4 <= 0.0) &
                         (uint)((3.0 - fVar1 * fVar4 * fVar1) * fVar1 * 0.5 * fVar4)) * (float10)0.5
  ;
}

// 010B4040  FUN_010b4040  size=25  [run]
void __thiscall FUN_010b4040(uint *param_1,uint param_2)

{
  param_1[1] = param_2 & 3;
  *param_1 = param_2 & 0xfffffffc;
  return;
}

// 010B4060  FUN_010b4060  size=80  [run]
undefined4 __thiscall FUN_010b4060(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_1 = (int *)*param_1;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  param_1[1] = param_1[1] + 1;
  *puVar1 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x28);
  puVar1[1] = *(undefined4 *)(*(int *)(param_3 + 0x20) + 0x28);
  return 1;
}

// 010B40B0  FUN_010b40b0  size=293  [run]
undefined4 FUN_010b40b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar15 [16];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  fVar8 = *(float *)(iVar3 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar10 = *(float *)(iVar3 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar11 = *(float *)(iVar3 + 0x28) - *(float *)(iVar1 + 0x28);
  fVar5 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar6 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar7 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  fVar9 = fVar11 * fVar6 - fVar10 * fVar7;
  fVar7 = fVar8 * fVar7 - fVar11 * fVar5;
  fVar6 = fVar10 * fVar5 - fVar8 * fVar6;
  fVar9 = fVar9 * fVar9;
  fVar7 = fVar7 * fVar7;
  fVar6 = fVar6 * fVar6;
  fVar5 = fVar7 + fVar9 + fVar6;
  auVar15._4_4_ = fVar7 + fVar9 + fVar6;
  auVar15._0_4_ = fVar5;
  auVar15._8_4_ = fVar7 + fVar9 + fVar6;
  auVar15._12_4_ = fVar7 + fVar9 + fVar6;
  auVar15 = rsqrtps(in_XMM5,auVar15);
  fVar14 = auVar15._0_4_;
  iVar3 = *(int *)(param_2 + 0x10);
  fVar9 = *(float *)(iVar3 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar11 = *(float *)(iVar3 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar12 = *(float *)(iVar3 + 0x28) - *(float *)(iVar1 + 0x28);
  fVar6 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar7 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar8 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
  fVar10 = fVar12 * fVar7 - fVar11 * fVar8;
  fVar8 = fVar9 * fVar8 - fVar12 * fVar6;
  fVar7 = fVar11 * fVar6 - fVar9 * fVar7;
  fVar10 = fVar10 * fVar10;
  fVar8 = fVar8 * fVar8;
  fVar7 = fVar7 * fVar7;
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar10;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar10;
  fVar6 = fVar8 + fVar10 + fVar7;
  auVar4._4_4_ = fVar8 + fVar10 + fVar7;
  auVar4._0_4_ = fVar6;
  auVar4._8_4_ = fVar8 + fVar10 + fVar7;
  auVar4._12_4_ = fVar8 + fVar10 + fVar7;
  auVar15 = rsqrtps(auVar13,auVar4);
  fVar7 = auVar15._0_4_;
  if ((float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar7 * fVar6 * fVar7) * fVar7 * 0.5 * fVar6))
      < (float)(~-(uint)(fVar5 <= 0.0) &
               (uint)((3.0 - fVar14 * fVar5 * fVar14) * fVar14 * 0.5 * fVar5))) {
    return 1;
  }
  return 0;
}

// 010B41E0  FUN_010b41e0  size=144  [run]
undefined4 __fastcall FUN_010b41e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01010c40(&PTR_vftable_018e9b94,0x10);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = FUN_01010160(*(undefined4 *)(*(int *)(*param_1 + iVar2 * 8) + 0x34),0);
      if (iVar1 == 0) {
        FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*(int *)(*param_1 + iVar2 * 8) + 0x34),1)
        ;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return 0;
}

// 010B4270  FUN_010b4270  size=150  [run]
float10 FUN_010b4270(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
  fVar7 = *(float *)(iVar3 + 0x20) - *(float *)(iVar1 + 0x20);
  fVar9 = *(float *)(iVar3 + 0x24) - *(float *)(iVar1 + 0x24);
  fVar10 = *(float *)(iVar3 + 0x28) - *(float *)(iVar1 + 0x28);
  auVar11._4_4_ = fVar4;
  auVar11._0_4_ = fVar6;
  auVar11._8_4_ = fVar5;
  auVar11._12_4_ = *(float *)(iVar2 + 0x2c) - *(float *)(iVar1 + 0x2c);
  fVar8 = fVar10 * fVar5 - fVar9 * fVar6;
  fVar6 = fVar7 * fVar6 - fVar10 * fVar4;
  fVar5 = fVar9 * fVar4 - fVar7 * fVar5;
  fVar8 = fVar8 * fVar8;
  fVar6 = fVar6 * fVar6;
  fVar5 = fVar5 * fVar5;
  fVar4 = fVar6 + fVar8 + fVar5;
  auVar12._4_4_ = fVar6 + fVar8 + fVar5;
  auVar12._0_4_ = fVar4;
  auVar12._8_4_ = fVar6 + fVar8 + fVar5;
  auVar12._12_4_ = fVar6 + fVar8 + fVar5;
  auVar12 = rsqrtps(auVar11,auVar12);
  fVar5 = auVar12._0_4_;
  return (float10)(float)(~-(uint)(fVar4 <= 0.0) &
                         (uint)((3.0 - fVar5 * fVar4 * fVar5) * fVar5 * 0.5 * fVar4));
}

// 010B4480  FUN_010b4480  size=70  [run]
void __thiscall FUN_010b4480(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *(undefined4 *)(iVar1 + 0x28);
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B44D0  FUN_010b44d0  size=91  [run]
void __thiscall FUN_010b44d0(float *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * param_1[1];
  fVar3 = param_1[2] * param_1[2];
  fVar4 = fVar2 + fVar1 + fVar3;
  fVar5 = fVar2 + fVar1 + fVar3;
  fVar6 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar5;
  auVar8._0_4_ = fVar4;
  auVar8._8_4_ = fVar6;
  auVar8._12_4_ = fVar3;
  auVar8 = rsqrtps(auVar7,auVar8);
  fVar1 = auVar8._0_4_;
  fVar2 = auVar8._4_4_;
  fVar9 = auVar8._8_4_;
  fVar10 = auVar8._12_4_;
  *param_2 = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar1 * fVar4 * fVar1) * fVar1 * 0.5);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar9 * fVar6 * fVar9) * fVar9 * 0.5);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar10 * fVar3 * fVar10) * fVar10 * 0.5);
  return;
}

// 010B4530  FUN_010b4530  size=89  [run]
void __thiscall FUN_010b4530(int *param_1,int param_2,undefined4 *param_3)

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

// 010B4590  FUN_010b4590  size=32  [run]
void __thiscall FUN_010b4590(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  param_2[1] = uVar1 & 3;
  *param_2 = uVar1 & 0xfffffffc;
  return;
}

// 010B45B0  FUN_010b45b0  size=45  [run]
void __thiscall FUN_010b45b0(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 010B4640  FUN_010b4640  size=68  [run]
void __thiscall FUN_010b4640(int *param_1,undefined4 *param_2)

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

// 010B4690  FUN_010b4690  size=67  [run]
void __thiscall FUN_010b4690(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x70);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x70 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010B46E0  FUN_010b46e0  size=69  [run]
int __thiscall FUN_010b46e0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 4;
}

// 010B4730  FUN_010b4730  size=56  [run]
void __thiscall FUN_010b4730(int param_1,int param_2)

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

// 010B4770  FUN_010b4770  size=167  [run]
int * __thiscall FUN_010b4770(int *param_1,undefined4 *param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  
  pfVar1 = (float *)*param_2;
  uVar7 = (uint)((int)pfVar1[1] * 0x4037bad5 ^ (int)*pfVar1 * 0x402e2f4b ^
                (int)pfVar1[2] * 0x728eebf3) % (uint)param_1[1];
  iVar2 = *(int *)(*param_1 + 4 + uVar7 * 0xc);
  iVar6 = 0;
  if (0 < iVar2) {
    piVar3 = *(int **)(*param_1 + uVar7 * 0xc);
    piVar9 = piVar3;
    while( true ) {
      pfVar4 = (float *)*piVar9;
      auVar5._4_4_ = -(uint)(pfVar4[1] == pfVar1[1]);
      auVar5._0_4_ = -(uint)(*pfVar4 == *pfVar1);
      auVar5._8_4_ = -(uint)(pfVar4[2] == pfVar1[2]);
      auVar5._12_4_ = -(uint)(pfVar4[3] == pfVar1[3]);
      uVar8 = movmskps(pfVar4,auVar5);
      if (((byte)uVar8 & 7) == 7) break;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 2;
      if (iVar2 <= iVar6) {
        return (int *)0x0;
      }
    }
    if (iVar6 != -1) {
      return piVar3 + iVar6 * 2;
    }
  }
  return (int *)0x0;
}

// 010B4820  FUN_010b4820  size=94  [run]
void __thiscall FUN_010b4820(int *param_1,undefined8 *param_2)

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

// 010B4880  FUN_010b4880  size=25  [run]
void __thiscall FUN_010b4880(uint *param_1,uint param_2)

{
  param_1[1] = param_2 & 3;
  *param_1 = param_2 & 0xfffffffc;
  return;
}

// 010B48A0  FUN_010b48a0  size=283  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_010b48a0(int *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar2 = (char)param_1[1] * '\x02';
  uVar3 = *(uint *)(*param_1 + 0x14 + (9 >> (bVar2 & 0x1f) & 3U) * 4);
  uVar7 = *(uint *)(*param_1 + 0x14 + (0x12 >> (bVar2 & 0x1f) & 3U) * 4);
  uVar9 = uVar3 & 3;
  uVar3 = uVar3 & 0xfffffffc;
  uVar5 = uVar7 & 3;
  uVar7 = uVar7 & 0xfffffffc;
  uVar4 = uVar3;
  uVar6 = uVar5;
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar7;
    uVar6 = uVar9;
    uVar8 = uVar3;
    uVar9 = uVar5;
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x14 + uVar9 * 4) = uVar6 + uVar8;
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 0x14 + uVar6 * 4) = uVar4 + uVar9;
    }
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0;
    }
    iVar1 = *param_1;
    uVar3 = 9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
    *(int *)(iVar1 + 0x14 + uVar3 * 4) = DAT_0209a9a8 + DAT_0209a9a4;
    if (DAT_0209a9a4 != 0) {
      *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = uVar3 + iVar1;
    }
    if ((_DAT_0209a9ac & 1) == 0) {
      _DAT_0209a9ac = _DAT_0209a9ac | 1;
      DAT_0209a9a4 = 0;
      DAT_0209a9a8 = 0;
    }
    iVar1 = *param_1;
    uVar3 = 0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
    *(int *)(iVar1 + 0x14 + uVar3 * 4) = DAT_0209a9a8 + DAT_0209a9a4;
    if (DAT_0209a9a4 != 0) {
      *(uint *)(DAT_0209a9a4 + 0x14 + DAT_0209a9a8 * 4) = iVar1 + uVar3;
    }
  }
  return;
}

// 010B49F0  FUN_010b49f0  size=16  [run]
void FUN_010b49f0(void)

{
  FUN_010b0ba0();
  FUN_010b02f0();
  return;
}

// 010B4A00  FUN_010b4a00  size=16  [run]
void FUN_010b4a00(void)

{
  FUN_010b0c10();
  FUN_010b0360();
  return;
}

// 010B4A10  hkBaseObject::hkBaseObject_143  size=51  [run]
void __fastcall hkBaseObject::hkBaseObject_143(undefined4 *param_1)

{
  *param_1 = hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_010b0c10();
  FUN_010b0360();
  FUN_010b0ba0();
  FUN_010b02f0();
  *param_1 = vftable;
  return;
}

// 010B4A50  FUN_010b4a50  size=38  [run]
void FUN_010b4a50(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010B4A80  hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::vf0C  size=20  [run]
void hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>
     ::vf0C(void)

{
  FUN_010b0ba0();
  FUN_010b0c10();
  return;
}

// 010B4AA0  FUN_010b4aa0  size=816  [run]
undefined4 __thiscall FUN_010b4aa0(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  sbyte sVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int local_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      if ((param_2 != '\0') && (*(int *)(param_1 + 0x10) != 0)) {
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        return 1;
      }
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      return 0;
    }
    local_c = 0;
    piVar8 = puVar1 + 2;
    do {
      puVar5 = (undefined4 *)(piVar8[3] & 0xfffffffc);
      uVar7 = piVar8[3] & 3;
      iVar6 = FUN_01010120(*piVar8);
      if (-1 < iVar6) {
        puVar2 = *(undefined4 **)(param_1 + 0xc);
        puVar3 = (undefined4 *)*piVar8;
        while( true ) {
          if (puVar2 == (undefined4 *)0x0) {
            FUN_01010310(&PTR_vftable_018e9b94);
            FUN_0100fd10();
            FUN_01010310(&PTR_vftable_018e9b94);
            FUN_0100fd10();
            return 2;
          }
          if (puVar3 == puVar2) break;
          puVar2 = (undefined4 *)*puVar2;
        }
        FUN_010100a0(&PTR_vftable_018e9b94,puVar3,puVar3);
      }
      if (*piVar8 == puVar1[(9 >> ((char)local_c * '\x02' & 0x1fU) & 3U) + 2]) {
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        return 7;
      }
      if (puVar5 != (undefined4 *)0x0) {
        if (puVar1 == puVar5) {
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          return 6;
        }
        iVar6 = FUN_01010120(puVar5);
        if (-1 < iVar6) {
          puVar2 = *(undefined4 **)(param_1 + 0x1c);
          while( true ) {
            if (puVar2 == (undefined4 *)0x0) {
              FUN_01010310(&PTR_vftable_018e9b94);
              FUN_0100fd10();
              FUN_01010310(&PTR_vftable_018e9b94);
              FUN_0100fd10();
              return 3;
            }
            if (puVar2 == puVar5) break;
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_010100a0(&PTR_vftable_018e9b94,puVar5,puVar5);
        }
        sVar4 = (char)uVar7 * '\x02';
        if ((*piVar8 != puVar5[(9 >> sVar4 & 3U) + 2]) ||
           (puVar5[uVar7 + 2] != puVar1[(9 >> ((char)local_c * '\x02' & 0x1fU) & 3U) + 2])) {
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          return 5;
        }
        if (puVar1[(0x12 >> ((char)local_c * '\x02' & 0x1fU) & 3U) + 2] ==
            puVar5[(0x12 >> sVar4 & 3U) + 2]) {
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          FUN_01010310(&PTR_vftable_018e9b94);
          FUN_0100fd10();
          return 4;
        }
      }
      local_c = local_c + 1;
      piVar8 = piVar8 + 1;
    } while (local_c < 3);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

// 010B4DD0  FUN_010b4dd0  size=63  [run]
void __fastcall FUN_010b4dd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B4E10  FUN_010b4e10  size=27  [run]
void __thiscall FUN_010b4e10(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 010B4E30  FUN_010b4e30  size=61  [run]
void __fastcall FUN_010b4e30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B4E70  FUN_010b4e70  size=60  [run]
void __fastcall FUN_010b4e70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B4EB0  FUN_010b4eb0  size=60  [run]
void __fastcall FUN_010b4eb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7380  FUN_010b7380  size=550  [run]
int __fastcall FUN_010b7380(int param_1)

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

// 010B75B0  FUN_010b75b0  size=61  [run]
void __fastcall FUN_010b75b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B75F0  FUN_010b75f0  size=61  [run]
void __fastcall FUN_010b75f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7630  FUN_010b7630  size=93  [run]
int __thiscall FUN_010b7630(int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + (param_2 % (uint)param_1[1]) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar2 = (undefined4 *)(*piVar1 + piVar1[1] * 8);
  piVar1[1] = piVar1[1] + 1;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  return *piVar1 + -8 + piVar1[1] * 8;
}

// 010B7690  FUN_010b7690  size=27  [run]
void __thiscall FUN_010b7690(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 010B76B0  FUN_010b76b0  size=60  [run]
void __fastcall FUN_010b76b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B76F0  FUN_010b76f0  size=61  [run]
void __fastcall FUN_010b76f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7770  FUN_010b7770  size=62  [run]
undefined4 __fastcall FUN_010b7770(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xe00) == 0)) {
    iVar2 = FUN_010abc10();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xe00);
    *(undefined4 *)(iVar2 + 0xe00) = *puVar1;
    puVar1[0x18] = iVar2;
    *(int *)(iVar2 + 0xe0c) = *(int *)(iVar2 + 0xe0c) + 1;
    uVar3 = FUN_010b0a00();
    return uVar3;
  }
  return 0;
}

// 010B77F0  FUN_010b77f0  size=62  [run]
undefined4 __fastcall FUN_010b77f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_010abc80();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xc00);
    *(undefined4 *)(iVar2 + 0xc00) = *puVar1;
    puVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    uVar3 = FUN_010b0a80();
    return uVar3;
  }
  return 0;
}

// 010B7830  FUN_010b7830  size=45  [run]
void __thiscall FUN_010b7830(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 010B7860  FUN_010b7860  size=46  [run]
uint * __thiscall FUN_010b7860(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + (0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = uVar1 & 3;
  return param_2;
}

// 010B7890  FUN_010b7890  size=63  [run]
void __fastcall FUN_010b7890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7900  FUN_010b7900  size=68  [run]
void __thiscall FUN_010b7900(int *param_1,undefined4 *param_2)

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

// 010B7950  FUN_010b7950  size=61  [run]
void __fastcall FUN_010b7950(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7990  FUN_010b7990  size=80  [run]
int __fastcall FUN_010b7990(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x14);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0x14;
}

// 010B79E0  FUN_010b79e0  size=106  [run]
void __fastcall FUN_010b79e0(int *param_1)

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

// 010B7A50  FUN_010b7a50  size=106  [run]
void __fastcall FUN_010b7a50(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x804) == 0) {
      *param_1 = *(int *)(iVar1 + 0x808);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x804) + 0x808) = *(undefined4 *)(iVar1 + 0x808);
    }
    if (*(int *)(iVar1 + 0x808) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x808) + 0x804) = *(undefined4 *)(iVar1 + 0x804);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x810);
    iVar1 = *param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 010B7AC0  FUN_010b7ac0  size=134  [run]
void __thiscall FUN_010b7ac0(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x644);
  fVar5 = *param_3;
  iVar2 = 0x7fff - iVar1;
  if (0.0 <= fVar5) {
    fVar5 = fVar5 + 0.5;
  }
  else {
    fVar5 = fVar5 - 0.5;
  }
  iVar3 = (int)fVar5;
  iVar4 = iVar1;
  if ((iVar1 <= iVar3) && (iVar4 = iVar3, iVar2 < iVar3)) {
    iVar4 = iVar2;
  }
  *(int *)(param_2 + 8) = iVar4;
  fVar5 = param_3[1];
  if (0.0 <= fVar5) {
    fVar5 = fVar5 + 0.5;
  }
  else {
    fVar5 = fVar5 - 0.5;
  }
  iVar4 = (int)fVar5;
  if (iVar1 <= iVar4) {
    if (iVar4 <= iVar2) {
      *(int *)(param_2 + 0xc) = iVar4;
      return;
    }
    *(int *)(param_2 + 0xc) = iVar2;
    return;
  }
  *(int *)(param_2 + 0xc) = iVar1;
  return;
}

// 010B7B50  FUN_010b7b50  size=63  [run]
void __fastcall FUN_010b7b50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7B90  FUN_010b7b90  size=732  [run]
void FUN_010b7b90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 local_20;
  
  local_20 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
  iVar10 = param_3;
  iVar11 = param_2;
LAB_010b7be8:
  iVar1 = *(int *)(local_20 + 0xc);
  iVar2 = *(int *)(local_20 + 8);
  iVar3 = *(int *)(local_20 + 0x10);
  fVar15 = *(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20);
  fVar17 = *(float *)(iVar3 + 0x24) - *(float *)(iVar2 + 0x24);
  fVar19 = *(float *)(iVar3 + 0x28) - *(float *)(iVar2 + 0x28);
  fVar12 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
  fVar13 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
  fVar14 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
  auVar21._4_4_ = fVar12;
  auVar21._0_4_ = fVar14;
  auVar21._8_4_ = fVar13;
  auVar21._12_4_ = *(float *)(iVar1 + 0x2c) - *(float *)(iVar2 + 0x2c);
  fVar16 = fVar19 * fVar13 - fVar17 * fVar14;
  fVar14 = fVar15 * fVar14 - fVar19 * fVar12;
  fVar13 = fVar17 * fVar12 - fVar15 * fVar13;
  fVar16 = fVar16 * fVar16;
  fVar14 = fVar14 * fVar14;
  fVar13 = fVar13 * fVar13;
  fVar12 = fVar14 + fVar16 + fVar13;
  auVar22._4_4_ = fVar14 + fVar16 + fVar13;
  auVar22._0_4_ = fVar12;
  auVar22._8_4_ = fVar14 + fVar16 + fVar13;
  auVar22._12_4_ = fVar14 + fVar16 + fVar13;
  auVar22 = rsqrtps(auVar21,auVar22);
  fVar13 = auVar22._0_4_;
  while( true ) {
    iVar2 = *(int *)(param_1 + iVar11 * 4);
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    fVar17 = *(float *)(iVar2 + 0x20) - *(float *)(iVar4 + 0x20);
    fVar18 = *(float *)(iVar2 + 0x24) - *(float *)(iVar4 + 0x24);
    fVar20 = *(float *)(iVar2 + 0x28) - *(float *)(iVar4 + 0x28);
    fVar14 = *(float *)(iVar5 + 0x20) - *(float *)(iVar4 + 0x20);
    fVar15 = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
    fVar16 = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
    auVar23._4_4_ = fVar14;
    auVar23._0_4_ = fVar16;
    auVar23._8_4_ = fVar15;
    auVar23._12_4_ = *(float *)(iVar5 + 0x2c) - *(float *)(iVar4 + 0x2c);
    fVar19 = fVar20 * fVar15 - fVar18 * fVar16;
    fVar16 = fVar17 * fVar16 - fVar20 * fVar14;
    fVar15 = fVar18 * fVar14 - fVar17 * fVar15;
    fVar19 = fVar19 * fVar19;
    fVar16 = fVar16 * fVar16;
    fVar15 = fVar15 * fVar15;
    fVar14 = fVar16 + fVar19 + fVar15;
    auVar7._4_4_ = fVar16 + fVar19 + fVar15;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fVar16 + fVar19 + fVar15;
    auVar7._12_4_ = fVar16 + fVar19 + fVar15;
    auVar22 = rsqrtps(auVar23,auVar7);
    fVar15 = auVar22._0_4_;
    if ((float)(~-(uint)(fVar14 <= 0.0) &
               (uint)((3.0 - fVar15 * fVar14 * fVar15) * fVar15 * 0.5 * fVar14)) <=
        (float)(~-(uint)(fVar12 <= 0.0) &
               (uint)((3.0 - fVar13 * fVar12 * fVar13) * fVar13 * 0.5 * fVar12))) break;
    iVar11 = iVar11 + 1;
  }
  iVar2 = *(int *)(local_20 + 8);
  fVar12 = *(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20);
  fVar14 = *(float *)(iVar3 + 0x24) - *(float *)(iVar2 + 0x24);
  fVar15 = *(float *)(iVar3 + 0x28) - *(float *)(iVar2 + 0x28);
  fVar16 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
  fVar17 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
  fVar19 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
  auVar24._4_4_ = fVar16;
  auVar24._0_4_ = fVar19;
  auVar24._8_4_ = fVar17;
  auVar24._12_4_ = *(float *)(iVar1 + 0x2c) - *(float *)(iVar2 + 0x2c);
  fVar13 = fVar15 * fVar17 - fVar14 * fVar19;
  fVar15 = fVar12 * fVar19 - fVar15 * fVar16;
  fVar12 = fVar14 * fVar16 - fVar12 * fVar17;
  fVar13 = fVar13 * fVar13;
  fVar15 = fVar15 * fVar15;
  fVar12 = fVar12 * fVar12;
  fVar14 = fVar15 + fVar13 + fVar12;
  auVar9._4_4_ = fVar15 + fVar13 + fVar12;
  auVar9._0_4_ = fVar14;
  auVar9._8_4_ = fVar15 + fVar13 + fVar12;
  auVar9._12_4_ = fVar15 + fVar13 + fVar12;
  auVar22 = rsqrtps(auVar24,auVar9);
  fVar12 = auVar22._0_4_;
  while( true ) {
    iVar1 = *(int *)(param_1 + iVar10 * 4);
    iVar2 = *(int *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    fVar13 = *(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20);
    fVar15 = *(float *)(iVar3 + 0x24) - *(float *)(iVar2 + 0x24);
    fVar16 = *(float *)(iVar3 + 0x28) - *(float *)(iVar2 + 0x28);
    fVar17 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
    fVar18 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
    fVar20 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
    auVar25._4_4_ = fVar13;
    auVar25._0_4_ = fVar16;
    auVar25._8_4_ = fVar15;
    auVar25._12_4_ = *(float *)(iVar3 + 0x2c) - *(float *)(iVar2 + 0x2c);
    fVar19 = fVar20 * fVar15 - fVar18 * fVar16;
    fVar16 = fVar17 * fVar16 - fVar20 * fVar13;
    fVar15 = fVar18 * fVar13 - fVar17 * fVar15;
    fVar19 = fVar19 * fVar19;
    fVar16 = fVar16 * fVar16;
    fVar15 = fVar15 * fVar15;
    fVar13 = fVar16 + fVar19 + fVar15;
    auVar8._4_4_ = fVar16 + fVar19 + fVar15;
    auVar8._0_4_ = fVar13;
    auVar8._8_4_ = fVar16 + fVar19 + fVar15;
    auVar8._12_4_ = fVar16 + fVar19 + fVar15;
    auVar22 = rsqrtps(auVar25,auVar8);
    fVar15 = auVar22._0_4_;
    if ((float)(~-(uint)(fVar14 <= 0.0) &
               (uint)((3.0 - fVar12 * fVar14 * fVar12) * fVar12 * 0.5 * fVar14)) <=
        (float)(~-(uint)(fVar13 <= 0.0) &
               (uint)((3.0 - fVar15 * fVar13 * fVar15) * fVar15 * 0.5 * fVar13))) break;
    iVar10 = iVar10 + -1;
  }
  if (iVar11 <= iVar10) goto code_r0x010b7e14;
  goto LAB_010b7e2c;
code_r0x010b7e14:
  if (iVar10 != iVar11) {
    uVar6 = *(undefined4 *)(param_1 + iVar10 * 4);
    *(undefined4 *)(param_1 + iVar10 * 4) = *(undefined4 *)(param_1 + iVar11 * 4);
    *(undefined4 *)(param_1 + iVar11 * 4) = uVar6;
  }
  iVar10 = iVar10 + -1;
  iVar11 = iVar11 + 1;
  if (iVar10 < iVar11) {
LAB_010b7e2c:
    if (param_2 < iVar10) {
      FUN_010b7b90(param_1,param_2,iVar10,param_4);
    }
    if (param_3 <= iVar11) {
      return;
    }
    local_20 = *(int *)(param_1 + (iVar11 + param_3 >> 1) * 4);
    iVar10 = param_3;
    param_2 = iVar11;
  }
  goto LAB_010b7be8;
}

// 010B7E90  FUN_010b7e90  size=144  [run]
void __fastcall FUN_010b7e90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    if (*(int *)(iVar1 + 0x604) == 0) {
      param_1[1] = *(int *)(iVar1 + 0x608);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x604) + 0x608) = *(undefined4 *)(iVar1 + 0x608);
    }
    if (*(int *)(iVar1 + 0x608) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x608) + 0x604) = *(undefined4 *)(iVar1 + 0x604);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,0x610);
    iVar1 = param_1[1];
  }
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < param_1[1]) {
      iVar2 = 0;
      do {
        *(undefined4 *)(*param_1 + 4 + iVar2) = 0;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar1 < param_1[1]);
    }
    param_1[3] = 0;
  }
  return;
}

// 010B7F20  FUN_010b7f20  size=96  [run]
int * __thiscall FUN_010b7f20(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(*param_1 + 4 + ((uint)param_2[2] % (uint)param_1[1]) * 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(*param_1 + ((uint)param_2[2] % (uint)param_1[1]) * 0xc);
    piVar4 = piVar2;
    while ((*piVar4 != *param_2 || (piVar4[1] != param_2[1]))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
      if (iVar1 <= iVar3) {
        return (int *)0x0;
      }
    }
    if (iVar3 != -1) {
      return piVar2 + iVar3 * 4;
    }
  }
  return (int *)0x0;
}

// 010B7F80  FUN_010b7f80  size=63  [run]
void __fastcall FUN_010b7f80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B7FC0  FUN_010b7fc0  size=46  [run]
int __fastcall FUN_010b7fc0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010B7FF0  FUN_010b7ff0  size=47  [run]
void FUN_010b7ff0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B8020  FUN_010b8020  size=74  [run]
bool __thiscall FUN_010b8020(int param_1,undefined1 (*param_2) [16])

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

// 010B8070  FUN_010b8070  size=64  [run]
void __fastcall FUN_010b8070(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B80B0  FUN_010b80b0  size=63  [run]
void __fastcall FUN_010b80b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B80F0  FUN_010b80f0  size=47  [run]
void FUN_010b80f0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B8120  FUN_010b8120  size=47  [run]
void FUN_010b8120(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B8150  FUN_010b8150  size=47  [run]
void FUN_010b8150(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 010B8270  FUN_010b8270  size=78  [run]
void __thiscall FUN_010b8270(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)*param_1;
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,8);
  }
  puVar1 = (undefined4 *)(*piVar2 + piVar2[1] * 8);
  piVar2[1] = piVar2[1] + 1;
  *puVar1 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x28);
  puVar1[1] = *(undefined4 *)(*(int *)(param_3 + 0x20) + 0x28);
  return;
}

// 010B82C0  FUN_010b82c0  size=150  [run]
void FUN_010b82c0(int param_1,undefined1 (*param_2) [16])

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

// 010B83F0  FUN_010b83f0  size=134  [run]
int * __thiscall FUN_010b83f0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 010B8650  FUN_010b8650  size=93  [run]
void __thiscall FUN_010b8650(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    piVar2 = (int *)*param_1;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    *(undefined4 *)(*piVar2 + piVar2[1] * 4) = *(undefined4 *)(iVar1 + 0x28);
    piVar2[1] = piVar2[1] + 1;
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010B86B0  FUN_010b86b0  size=168  [run]
void __thiscall FUN_010b86b0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = param_2[2];
  param_1[3] = param_1[3] + -1;
  piVar4 = (int *)(*param_1 + (uVar1 % (uint)param_1[1]) * 0xc);
  iVar5 = piVar4[1];
  iVar3 = 0;
  if (0 < iVar5) {
    piVar2 = (int *)*piVar4;
    piVar6 = piVar2;
    while ((*piVar6 != *param_2 || (piVar6[1] != param_2[1]))) {
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 4;
      if (iVar5 <= iVar3) {
        return;
      }
    }
    if (-1 < iVar3) {
      iVar3 = 0;
      if (0 < iVar5) {
        piVar6 = piVar2;
        do {
          if ((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) goto LAB_010b8728;
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 4;
        } while (iVar3 < iVar5);
      }
      iVar3 = -1;
LAB_010b8728:
      iVar5 = iVar5 + -1;
      piVar4[1] = iVar5;
      if (iVar5 != iVar3) {
        piVar4 = piVar2 + iVar3 * 4;
        iVar5 = iVar5 * 0x10 - (int)piVar4;
        iVar3 = 4;
        do {
          *piVar4 = *(int *)((int)piVar2 + iVar5 + (int)piVar4);
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

// 010B8760  FUN_010b8760  size=68  [run]
int __fastcall FUN_010b8760(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 010B87B0  FUN_010b87b0  size=60  [run]
void __fastcall FUN_010b87b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B87F0  FUN_010b87f0  size=48  [run]
undefined4 FUN_010b87f0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_2 + 0x14 + param_2[1] * 4);
  if (((uVar1 & 0xfffffffc) != 0) &&
     (*(int *)(*param_2 + 0x38) != *(int *)((uVar1 & 0xfffffffc) + 0x38))) {
    return 0;
  }
  return 1;
}

// 010B8820  FUN_010b8820  size=44  [run]
undefined4 __thiscall FUN_010b8820(int param_1,int *param_2)

{
  *(undefined4 *)(*param_2 + 8 + param_2[1] * 4) = *(undefined4 *)(param_1 + 4);
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_01099490(*param_2);
  }
  return 1;
}

// 010B8850  FUN_010b8850  size=73  [run]
void __thiscall FUN_010b8850(int *param_1,undefined4 *param_2)

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

// 010B88A0  FUN_010b88a0  size=89  [run]
uint __fastcall FUN_010b88a0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  iVar4 = 0;
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    piVar3 = (int *)*param_1;
    do {
      uVar2 = piVar3[1];
      if (((*(uint *)(*piVar3 + 0x14 + uVar2 * 4) & 0xfffffffc) == 0) ||
         (uVar2 = 9 >> ((char)uVar2 * '\x02' & 0x1fU) & 3,
         (*(uint *)(*piVar3 + 0x14 + uVar2 * 4) & 0xfffffffc) == 0)) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 < (int)uVar1);
  }
  return uVar2 & 0xffffff00;
}

// 010B8AF0  FUN_010b8af0  size=39  [run]
void __thiscall FUN_010b8af0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  return;
}

// 010B8B40  FUN_010b8b40  size=60  [run]
void __fastcall FUN_010b8b40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010B8B80  IConvexOverlapImpl::vf04  size=9178  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 IConvexOverlapImpl::vf04(int *param_1,int *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  LPVOID pvVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar36;
  float fVar40;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar44;
  undefined1 auVar35 [16];
  float fVar45;
  float fVar61;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar73;
  float fVar74;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar75;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  float afStackY_910 [132];
  float local_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float local_620;
  float fStack_61c;
  float fStack_618;
  float fStack_614;
  float local_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  float local_600;
  float fStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  uint local_5f0;
  uint uStack_5ec;
  uint uStack_5e8;
  uint uStack_5e4;
  float local_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float local_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float local_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  uint local_5b0;
  uint uStack_5ac;
  uint uStack_5a8;
  uint uStack_5a4;
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float local_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float local_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float local_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float local_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  uint local_540;
  uint uStack_53c;
  uint uStack_538;
  uint uStack_534;
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float local_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float local_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float local_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  undefined1 local_4b0 [16];
  float local_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float local_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float local_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float local_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float local_420 [12];
  float local_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3d4;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 uStack_368;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float local_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float local_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float local_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  uint local_290;
  float local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  float local_270;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 local_220 [16];
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200 [4];
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
  float *local_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float *local_1a0;
  uint local_19c;
  float local_190 [6];
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_150 [3];
  float afStack_144 [4];
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_dc;
  int local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined **local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 *local_84;
  undefined1 local_80 [8];
  float fStack_78;
  float fStack_74;
  int local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_31;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  local_290 = (uint)param_3;
  local_270 = 1.4;
  local_280 = 3.40282e+38;
  uStack_27c = 0x7f7fffee;
  uStack_278 = 0x7f7fffee;
  uStack_274 = 0x7f7fffee;
  local_2c0 = 0.0;
  fStack_2bc = 1.0;
  fStack_2b8 = 0.0;
  uStack_2b4 = 0;
  local_2b0 = 0.0;
  fStack_2ac = 0.0;
  fStack_2a8 = 1.0;
  fStack_2a4 = 0.0;
  local_2d0 = 1.0;
  fStack_2cc = 0.0;
  fStack_2c8 = 0.0;
  uStack_2c4 = 0;
  local_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  local_2a0 = 0.0;
  fStack_29c = 0.0;
  fStack_298 = 0.0;
  uStack_294 = 0;
  local_bc = ShapeInterface::vftable;
  local_b8 = 0;
  local_b4 = 0x41;
  local_380 = 0x3f800000;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  (**(code **)(*param_1 + 8))(&local_380,local_190);
  (**(code **)(*param_2 + 8))(&local_380,&local_3f0);
  local_150[0] = fStack_3ec * local_2c0 + local_3f0 * local_2d0 + fStack_3e8 * local_2b0 + local_2a0
  ;
  local_150[1] = fStack_3ec * fStack_2bc + local_3f0 * fStack_2cc + fStack_3e8 * fStack_2ac +
                 fStack_29c;
  local_150[2] = fStack_3ec * fStack_2b8 + local_3f0 * fStack_2c8 + fStack_3e8 * fStack_2a8 +
                 fStack_298;
  afStack_144[0] = fStack_3e4;
  fStack_134 = fStack_3d4;
  local_340 = 1e-05;
  fStack_33c = 1e-05;
  fStack_338 = 1e-05;
  fStack_334 = 1e-05;
  fStack_124 = fStack_3c4;
  local_5e0 = 3.0;
  fStack_5dc = 3.0;
  fStack_5d8 = 3.0;
  fStack_5d4 = 3.0;
  local_14 = (float *)0x1;
  local_18 = (float *)0x1;
  local_a0 = local_d0;
  fStack_9c = fStack_cc;
  fStack_98 = fStack_c8;
  fStack_94 = fStack_c4;
  local_64 = 0;
  local_19c = 1;
  local_600 = 0.5;
  fStack_5fc = 0.5;
  fStack_5f8 = 0.5;
  fStack_5f4 = 0.5;
  fVar24 = local_d0;
  fVar37 = fStack_cc;
  fVar41 = fStack_c8;
  fVar102 = fStack_c4;
  do {
                    /* WARNING (jumptable): Read-only address (ram,0x01701b20) is written */
    pfVar16 = (float *)((int)local_18 + (int)local_14);
    uVar8 = (int)local_14 * 8 | (uint)local_18;
    local_340 = local_270 * local_340;
    fStack_33c = local_270 * fStack_33c;
    fStack_338 = local_270 * fStack_338;
    fStack_334 = local_270 * fStack_334;
    local_1b4 = pfVar16;
    fVar23 = local_1b0;
    fVar36 = fStack_1ac;
    fVar40 = fStack_1a8;
    fVar38 = local_190[0];
    fVar42 = local_190[1];
    fVar43 = local_190[2];
    pfVar18 = local_18;
joined_r0x010b8d6a:
    uVar8 = uVar8 - 9;
    local_19c = 1;
    local_1b0 = fVar23;
    fStack_1ac = fVar36;
    fStack_1a8 = fVar40;
    local_190[0] = fVar38;
    local_190[1] = fVar42;
    local_190[2] = fVar43;
    if (0x18 < uVar8) goto switchD_010b8d87_caseD_d;
    local_19c = 1;
    iVar12 = 1;
    uVar9 = (uint)(&switchD_010b8d87::switchdataD_010baf98)[uVar8];
    fVar61 = (float)DAT_01701b20;
    fVar62 = DAT_01701b20._4_4_;
    fVar75 = DAT_01701b20._8_4_;
    fVar73 = DAT_01701b20._12_4_;
    switch(uVar8) {
    case 9:
      goto switchD_010b8d87_caseD_9;
    case 10:
      goto switchD_010b8d87_caseD_a;
    case 0xb:
      goto switchD_010b8d87_caseD_b;
    case 0xc:
      local_1c = local_150;
      _local_300 = _DAT_01701b20;
      local_260 = fVar38;
      fStack_25c = fVar42;
      fStack_258 = fVar43;
      fStack_254 = local_190[3];
      break;
    default:
      goto switchD_010b8d87_caseD_d;
    case 0x11:
      goto switchD_010b8d87_caseD_11;
    case 0x12:
      goto switchD_010b8d87_caseD_12;
    case 0x13:
      pfVar19 = local_190;
      pfVar10 = local_150;
      goto LAB_010b8da8;
    case 0x19:
      goto switchD_010b8d87_caseD_19;
    case 0x1a:
                    /* WARNING: This code block may not be properly labeled as switch case */
      pfVar19 = local_150;
      pfVar10 = local_190;
LAB_010b8da8:
      fVar102 = fStack_94;
      if (local_1a0 == (float *)0x2) {
        local_f0 = pfVar10[8];
        fStack_ec = pfVar10[9];
        fStack_e8 = pfVar10[10];
        fStack_e4 = pfVar10[0xb];
        fVar24 = *pfVar10;
        fVar37 = pfVar10[1];
        fVar41 = pfVar10[2];
        fVar23 = pfVar10[3];
        fVar36 = pfVar10[4];
        fVar40 = pfVar10[5];
        fVar79 = pfVar10[6];
        fVar25 = pfVar10[7];
        local_4f0 = fVar36 - local_f0;
        fStack_4ec = fVar40 - fStack_ec;
        fStack_4e8 = fVar79 - fStack_e8;
        fStack_4e4 = fVar25 - fStack_e4;
        auVar80._0_4_ = fVar24 - local_f0;
        auVar80._4_4_ = fVar37 - fStack_ec;
        auVar80._8_4_ = fVar41 - fStack_e8;
        auVar80._12_4_ = fVar23 - fStack_e4;
        local_60 = auVar80._8_4_ * fStack_4ec - auVar80._4_4_ * fStack_4e8;
        fStack_5c = auVar80._0_4_ * fStack_4e8 - auVar80._8_4_ * local_4f0;
        fStack_58 = auVar80._4_4_ * local_4f0 - auVar80._0_4_ * fStack_4ec;
        fVar39 = *pfVar19;
        fVar44 = pfVar19[1];
        fVar45 = pfVar19[2];
        fVar76 = pfVar19[3];
        local_4a0 = fVar39 - fVar24;
        fStack_49c = fVar44 - fVar37;
        fStack_498 = fVar45 - fVar41;
        fStack_494 = fVar76 - fVar23;
        fVar77 = local_60 * local_4a0;
        fVar78 = fStack_5c * fStack_49c;
        fStack_234 = fStack_58 * fStack_498;
        local_50 = pfVar19[4];
        fStack_4c = pfVar19[5];
        fStack_48 = pfVar19[6];
        fStack_44 = pfVar19[7];
        local_430 = local_50 - fVar24;
        fStack_42c = fStack_4c - fVar37;
        fStack_428 = fStack_48 - fVar41;
        fStack_424 = fStack_44 - fVar23;
        local_240 = fVar78 + fVar77 + fStack_234;
        fStack_23c = fVar78 + fVar77 + fStack_234;
        fStack_238 = fVar78 + fVar77 + fStack_234;
        fStack_234 = fVar78 + fVar77 + fStack_234;
        local_60 = local_430 * local_60;
        fStack_5c = fStack_42c * fStack_5c;
        fStack_58 = fStack_428 * fStack_58;
        fStack_54 = fStack_424 * (auVar80._12_4_ * fStack_4e4 - auVar80._12_4_ * fStack_4e4);
        local_350 = fStack_5c + local_60 + fStack_58;
        fStack_34c = fStack_5c + local_60 + fStack_58;
        fStack_348 = fStack_5c + local_60 + fStack_58;
        fStack_344 = fStack_5c + local_60 + fStack_58;
        local_590 = local_240 * local_240;
        fStack_58c = fStack_23c * fStack_23c;
        fStack_588 = fStack_238 * fStack_238;
        fStack_584 = fStack_234 * fStack_234;
        local_470 = local_350 * local_350;
        fStack_46c = fStack_34c * fStack_34c;
        fStack_468 = fStack_348 * fStack_348;
        fStack_464 = fStack_344 * fStack_344;
        auVar94._0_4_ = local_350 * local_240;
        auVar94._4_4_ = fStack_34c * fStack_23c;
        auVar94._8_4_ = fStack_348 * fStack_238;
        auVar94._12_4_ = fStack_344 * fStack_234;
        iVar12 = movmskps(pfVar16,auVar94);
        if (iVar12 == 0) {
          local_390 = (float)((uint)fVar39 & -(uint)(local_590 < local_470) |
                             ~-(uint)(local_590 < local_470) & (uint)local_50);
          fStack_38c = (float)((uint)fVar44 & -(uint)(fStack_58c < fStack_46c) |
                              ~-(uint)(fStack_58c < fStack_46c) & (uint)fStack_4c);
          fStack_388 = (float)((uint)fVar45 & -(uint)(fStack_588 < fStack_468) |
                              ~-(uint)(fStack_588 < fStack_468) & (uint)fStack_48);
          fStack_384 = (float)((uint)fVar76 & -(uint)(fStack_584 < fStack_464) |
                              ~-(uint)(fStack_584 < fStack_464) & (uint)fStack_44);
          fStack_28 = local_f0 - fVar36;
          local_30._0_4_ = fStack_ec - fVar40;
          local_30._4_4_ = fStack_e8 - fVar79;
          fStack_24 = fStack_e4 - fVar25;
          local_b0 = auVar80._4_4_;
          fStack_ac = auVar80._8_4_;
          fStack_a8 = auVar80._0_4_;
          fStack_a4 = auVar80._12_4_;
          local_60 = (float)local_30._4_4_;
          fStack_5c = fStack_28;
          fStack_58 = (float)local_30._0_4_;
          fStack_54 = fStack_24;
          local_1f0 = (float)local_30._0_4_ * auVar80._8_4_ - (float)local_30._4_4_ * auVar80._4_4_;
          fStack_1ec = (float)local_30._4_4_ * auVar80._0_4_ - fStack_28 * auVar80._8_4_;
          fStack_1e8 = fStack_28 * auVar80._4_4_ - (float)local_30._0_4_ * auVar80._0_4_;
          fStack_1e4 = fStack_24 * auVar80._12_4_ - fStack_24 * auVar80._12_4_;
          local_50 = auVar80._8_4_;
          fStack_4c = auVar80._0_4_;
          fStack_48 = auVar80._4_4_;
          fStack_44 = auVar80._12_4_;
          fVar39 = ((fStack_388 - fVar41) * (fVar36 - fVar24) -
                   (local_390 - fVar24) * (fVar79 - fVar41)) * fStack_1ec;
          fStack_1a4 = ((fStack_384 - fVar23) * (fVar25 - fVar23) -
                       (fStack_384 - fVar23) * (fVar25 - fVar23)) * fStack_1e4;
          fVar102 = ((local_390 - fVar36) * (float)local_30._0_4_ -
                    (fStack_38c - fVar40) * fStack_28) * fStack_1e8 +
                    ((fStack_38c - fVar40) * (float)local_30._4_4_ -
                    (fStack_388 - fVar79) * (float)local_30._0_4_) * local_1f0 +
                    ((fStack_388 - fVar79) * fStack_28 -
                    (local_390 - fVar36) * (float)local_30._4_4_) * fStack_1ec;
          fStack_1ac = ((local_390 - local_f0) * auVar80._4_4_ -
                       (fStack_38c - fStack_ec) * auVar80._0_4_) * fStack_1e8 +
                       ((fStack_38c - fStack_ec) * auVar80._8_4_ -
                       (fStack_388 - fStack_e8) * auVar80._4_4_) * local_1f0 +
                       ((fStack_388 - fStack_e8) * auVar80._0_4_ -
                       (local_390 - local_f0) * auVar80._8_4_) * fStack_1ec;
          fStack_1a8 = ((local_390 - fVar24) * (fVar40 - fVar37) -
                       (fStack_38c - fVar37) * (fVar36 - fVar24)) * fStack_1e8 +
                       ((fStack_38c - fVar37) * (fVar79 - fVar41) -
                       (fStack_388 - fVar41) * (fVar40 - fVar37)) * local_1f0 + fVar39;
          fStack_1a4 = fStack_1a4 + fVar39 + fStack_1a4;
          auVar46._4_4_ = -(uint)(fStack_1ac < fStack_cc);
          auVar46._0_4_ = -(uint)(fVar102 < local_d0);
          auVar46._8_4_ = -(uint)(fStack_1a8 < fStack_c8);
          auVar46._12_4_ = -(uint)(fStack_1a4 < fStack_c4);
          uVar8 = movmskps(0,auVar46);
          pfVar16 = (float *)(uVar8 & 7);
          local_1c = pfVar16;
          local_1b0 = fVar102;
          if (pfVar16 == (float *)&DAT_00000007) {
            fVar24 = (fVar38 - local_150[0]) * local_1f0;
            fVar37 = (fVar42 - local_150[1]) * fStack_1ec;
            fVar41 = (fVar43 - local_150[2]) * fStack_1e8;
            auVar81._0_4_ = fVar37 + fVar24 + fVar41;
            auVar81._4_4_ = fVar37 + fVar24 + fVar41;
            auVar81._8_4_ = fVar37 + fVar24 + fVar41;
            auVar81._12_4_ = fVar37 + fVar24 + fVar41;
            iVar12 = movmskps(7,auVar81);
            if (iVar12 != 0) {
              uVar4 = *(undefined8 *)pfVar10;
              uVar2 = *(undefined8 *)(pfVar10 + 2);
              *pfVar10 = pfVar10[4];
              pfVar10[1] = pfVar10[5];
              pfVar10[2] = pfVar10[6];
              pfVar10[3] = pfVar10[7];
              local_370._0_4_ = (float)uVar4;
              local_370._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
              uStack_368._0_4_ = (float)uVar2;
              uStack_368._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              pfVar10[4] = (float)local_370;
              pfVar10[5] = local_370._4_4_;
              pfVar10[6] = (float)uStack_368;
              pfVar10[7] = uStack_368._4_4_;
              local_1f0 = -local_1f0;
              fStack_1ec = -fStack_1ec;
              fStack_1e8 = -fStack_1e8;
              fStack_1e4 = -fStack_1e4;
              local_19c = 1;
              local_1b0 = fStack_1ac;
              fStack_1ac = fVar102;
              local_370 = uVar4;
              uStack_368 = uVar2;
            }
          }
          local_a0 = local_1f0;
          fStack_9c = fStack_1ec;
          fStack_98 = fStack_1e8;
          fStack_94 = fStack_1e4;
          if (pfVar16 != (float *)&DAT_00000007) goto LAB_010b9211;
          *pfVar19 = local_390;
          pfVar19[1] = fStack_38c;
          pfVar19[2] = fStack_388;
          pfVar19[3] = fStack_384;
          iVar12 = 0;
          fVar24 = local_1f0;
          fVar37 = fStack_1ec;
          fVar41 = fStack_1e8;
          fVar102 = fStack_1e4;
        }
        else {
          auVar63._0_4_ = local_240 - local_350;
          auVar63._4_4_ = fStack_23c - fStack_34c;
          auVar63._8_4_ = fStack_238 - fStack_348;
          auVar63._12_4_ = fStack_234 - fStack_344;
          auVar69 = rcpps(auVar80,auVar63);
          fVar39 = (2.0 - auVar69._0_4_ * auVar63._0_4_) * auVar69._0_4_ * local_240 *
                   (local_50 - fVar39) + fVar39;
          fVar44 = (2.0 - auVar69._4_4_ * auVar63._4_4_) * auVar69._4_4_ * fStack_23c *
                   (fStack_4c - fVar44) + fVar44;
          fVar45 = (2.0 - auVar69._8_4_ * auVar63._8_4_) * auVar69._8_4_ * fStack_238 *
                   (fStack_48 - fVar45) + fVar45;
          fVar76 = (2.0 - auVar69._12_4_ * auVar63._12_4_) * auVar69._12_4_ * fStack_234 *
                   (fStack_44 - fVar76) + fVar76;
          fVar42 = fVar24 - fVar39;
          fVar43 = fVar37 - fVar44;
          fVar77 = fVar41 - fVar45;
          fVar38 = fVar23 - fVar76;
          fVar78 = fVar36 - fVar39;
          fVar90 = fVar40 - fVar44;
          fVar91 = fVar79 - fVar45;
          fVar76 = fVar25 - fVar76;
          fStack_6b8 = (fStack_e8 - fVar41) * (fVar40 - fVar37) -
                       (fStack_ec - fVar37) * (fVar79 - fVar41);
          local_6c0 = (local_f0 - fVar24) * (fVar79 - fVar41) -
                      (fStack_e8 - fVar41) * (fVar36 - fVar24);
          fStack_6bc = (fStack_ec - fVar37) * (fVar36 - fVar24) -
                       (local_f0 - fVar24) * (fVar40 - fVar37);
          fStack_6b4 = (fStack_e4 - fVar23) * (fVar25 - fVar23) -
                       (fStack_e4 - fVar23) * (fVar25 - fVar23);
          fVar39 = local_f0 - fVar39;
          fVar44 = fStack_ec - fVar44;
          fVar45 = fStack_e8 - fVar45;
          local_30._4_4_ = fVar42 * fStack_6bc;
          local_30._0_4_ = fVar77 * local_6c0;
          fStack_28 = fVar43 * fStack_6b8;
          fStack_24 = fVar38 * fStack_6b4;
          fVar24 = (fVar91 * fStack_6b8 - fVar78 * fStack_6bc) * fVar43;
          fVar38 = (fVar76 * fStack_6b4 - fVar76 * fStack_6b4) * fVar38;
          auVar26._4_4_ =
               -(uint)(fStack_cc <
                      (fVar42 * local_6c0 - fVar43 * fStack_6b8) * fVar45 +
                      (fVar43 * fStack_6bc - fVar77 * local_6c0) * fVar39 +
                      (fVar77 * fStack_6b8 - fVar42 * fStack_6bc) * fVar44);
          auVar26._0_4_ =
               -(uint)(local_d0 <
                      (fVar39 * local_6c0 - fVar44 * fStack_6b8) * fVar91 +
                      (fVar44 * fStack_6bc - fVar45 * local_6c0) * fVar78 +
                      (fVar45 * fStack_6b8 - fVar39 * fStack_6bc) * fVar90);
          auVar26._8_4_ =
               -(uint)(fStack_c8 <
                      (fVar78 * local_6c0 - fVar90 * fStack_6b8) * fVar77 +
                      (fVar90 * fStack_6bc - fVar91 * local_6c0) * fVar42 + fVar24);
          auVar26._12_4_ = -(uint)(fStack_c4 < fVar38 + fVar24 + fVar38);
          uVar8 = movmskps(iVar12,auVar26);
          pfVar16 = (float *)(uVar8 & 7);
          local_450 = fStack_6bc;
          fStack_44c = fStack_6b8;
          fStack_448 = local_6c0;
          fStack_444 = fStack_6b4;
          if ((char)pfVar16 == '\a') {
            iVar12 = 1;
            fVar24 = local_a0;
            fVar37 = fStack_9c;
            fVar41 = fStack_98;
          }
          else {
LAB_010b9211:
            local_b0 = *pfVar19;
            fStack_ac = pfVar19[1];
            fStack_a8 = pfVar19[2];
            local_f0 = pfVar10[8];
            fStack_ec = pfVar10[9];
            fStack_e8 = pfVar10[10];
            fStack_e4 = pfVar10[0xb];
            local_60 = local_f0 - local_b0;
            fStack_5c = fStack_ec - fStack_ac;
            fStack_58 = fStack_e8 - fStack_a8;
            fStack_a4 = pfVar19[3];
            fVar39 = pfVar19[4] - local_b0;
            fVar44 = pfVar19[5] - fStack_ac;
            fVar45 = pfVar19[6] - fStack_a8;
            fVar24 = fVar39 * local_4f0;
            fVar37 = fVar44 * fStack_4ec;
            fVar41 = fVar45 * fStack_4e8;
            fVar23 = fVar37 + fVar24 + fVar41;
            fVar36 = fVar37 + fVar24 + fVar41;
            fVar40 = fVar37 + fVar24 + fVar41;
            fVar41 = fVar37 + fVar24 + fVar41;
            fVar24 = local_60 * fVar39;
            fVar37 = fStack_5c * fVar44;
            fStack_3a4 = fStack_58 * fVar45;
            fStack_54 = fStack_e4 - pfVar19[3];
            local_3b0 = fVar37 + fVar24 + fStack_3a4;
            fStack_3ac = fVar37 + fVar24 + fStack_3a4;
            fStack_3a8 = fVar37 + fVar24 + fStack_3a4;
            fStack_3a4 = fVar37 + fVar24 + fStack_3a4;
            fVar24 = local_60 * local_4f0;
            fVar37 = fStack_5c * fStack_4ec;
            fStack_354 = fStack_58 * fStack_4e8;
            local_360 = fVar37 + fVar24 + fStack_354;
            fStack_35c = fVar37 + fVar24 + fStack_354;
            fStack_358 = fVar37 + fVar24 + fStack_354;
            fStack_354 = fVar37 + fVar24 + fStack_354;
            fVar38 = local_4f0 * local_4f0;
            fVar42 = fStack_4ec * fStack_4ec;
            fVar43 = fStack_4e8 * fStack_4e8;
            fVar24 = fVar39 * fVar39;
            fVar37 = fVar44 * fVar44;
            fVar102 = fVar45 * fVar45;
            local_490 = fVar37 + fVar24 + fVar102;
            fStack_48c = fVar37 + fVar24 + fVar102;
            fStack_488 = fVar37 + fVar24 + fVar102;
            fStack_484 = fVar37 + fVar24 + fVar102;
            auVar64._0_4_ = fVar42 + fVar38 + fVar43;
            auVar64._4_4_ = fVar42 + fVar38 + fVar43;
            auVar64._8_4_ = fVar42 + fVar38 + fVar43;
            auVar64._12_4_ = fVar42 + fVar38 + fVar43;
            auVar95._0_4_ = fVar23 * fVar23;
            auVar95._4_4_ = fVar36 * fVar36;
            auVar95._8_4_ = fVar40 * fVar40;
            auVar95._12_4_ = fVar41 * fVar41;
            auVar84._0_4_ = auVar64._0_4_ * local_490 - auVar95._0_4_;
            auVar84._4_4_ = auVar64._4_4_ * fStack_48c - auVar95._4_4_;
            auVar84._8_4_ = auVar64._8_4_ * fStack_488 - auVar95._8_4_;
            auVar84._12_4_ = auVar64._12_4_ * fStack_484 - auVar95._12_4_;
            auVar69 = maxps(auVar84,_DAT_01701cf0);
            local_50 = 2.0;
            fStack_4c = 2.0;
            fStack_48 = 2.0;
            fStack_44 = 2.0;
            auVar99 = rcpps(auVar95,auVar69);
            fVar25 = auVar69._0_4_;
            fVar76 = auVar69._4_4_;
            fVar77 = auVar69._8_4_;
            fVar78 = auVar69._12_4_;
            local_4b0._0_4_ = (2.0 - auVar99._0_4_ * fVar25) * auVar99._0_4_;
            local_4b0._4_4_ = (2.0 - auVar99._4_4_ * fVar76) * auVar99._4_4_;
            local_4b0._8_4_ = (2.0 - auVar99._8_4_ * fVar77) * auVar99._8_4_;
            local_4b0._12_4_ = (2.0 - auVar99._12_4_ * fVar78) * auVar99._12_4_;
            auVar69 = rcpps(local_4b0,auVar64);
            auVar96._0_4_ = auVar69._0_4_ * auVar64._0_4_;
            auVar96._4_4_ = auVar69._4_4_ * auVar64._4_4_;
            auVar96._8_4_ = auVar69._8_4_ * auVar64._8_4_;
            auVar96._12_4_ = auVar69._12_4_ * auVar64._12_4_;
            local_4d0 = (2.0 - auVar96._0_4_) * auVar69._0_4_;
            fStack_4cc = (2.0 - auVar96._4_4_) * auVar69._4_4_;
            fStack_4c8 = (2.0 - auVar96._8_4_) * auVar69._8_4_;
            fStack_4c4 = (2.0 - auVar96._12_4_) * auVar69._12_4_;
            auVar5._4_4_ = fStack_48c;
            auVar5._0_4_ = local_490;
            auVar5._8_4_ = fStack_488;
            auVar5._12_4_ = fStack_484;
            auVar69 = rcpps(auVar96,auVar5);
            local_5d0 = (2.0 - auVar69._0_4_ * local_490) * auVar69._0_4_;
            fStack_5cc = (2.0 - auVar69._4_4_ * fStack_48c) * auVar69._4_4_;
            fStack_5c8 = (2.0 - auVar69._8_4_ * fStack_488) * auVar69._8_4_;
            fStack_5c4 = (2.0 - auVar69._12_4_ * fStack_484) * auVar69._12_4_;
            fVar38 = auVar64._0_4_ * local_3b0 - fVar23 * local_360;
            fVar42 = auVar64._4_4_ * fStack_3ac - fVar36 * fStack_35c;
            fVar43 = auVar64._8_4_ * fStack_3a8 - fVar40 * fStack_358;
            fVar79 = auVar64._12_4_ * fStack_3a4 - fVar41 * fStack_354;
            local_5b0 = -(uint)(fVar38 < fVar25);
            uStack_5ac = -(uint)(fVar42 < fVar76);
            uStack_5a8 = -(uint)(fVar43 < fVar77);
            uStack_5a4 = -(uint)(fVar79 < fVar78);
            local_30._4_4_ = ~uStack_5ac & (uint)fVar76 | (uint)fVar42 & uStack_5ac;
            local_30._0_4_ = ~local_5b0 & (uint)fVar25 | (uint)fVar38 & local_5b0;
            fStack_28 = (float)(~uStack_5a8 & (uint)fVar77 | (uint)fVar43 & uStack_5a8);
            fStack_24 = (float)(~uStack_5a4 & (uint)fVar78 | (uint)fVar79 & uStack_5a4);
            auVar69 = maxps(_DAT_01701b10,_local_30);
            fVar38 = (float)(~-(uint)(fVar25 <= 1.1920929e-07) &
                             (uint)(auVar69._0_4_ * local_4b0._0_4_) |
                            -(uint)(fVar25 <= 1.1920929e-07) & (uint)fVar61) * fVar23 * local_4d0 -
                     local_4d0 * local_360;
            fVar42 = (float)(~-(uint)(fVar76 <= 1.1920929e-07) &
                             (uint)(auVar69._4_4_ * local_4b0._4_4_) |
                            -(uint)(fVar76 <= 1.1920929e-07) & (uint)fVar62) * fVar36 * fStack_4cc -
                     fStack_4cc * fStack_35c;
            fVar43 = (float)(~-(uint)(fVar77 <= 1.1920929e-07) &
                             (uint)(auVar69._8_4_ * local_4b0._8_4_) |
                            -(uint)(fVar77 <= 1.1920929e-07) & (uint)fVar75) * fVar40 * fStack_4c8 -
                     fStack_4c8 * fStack_358;
            fVar79 = (float)(~-(uint)(fVar78 <= 1.1920929e-07) &
                             (uint)(auVar69._12_4_ * local_4b0._12_4_) |
                            -(uint)(fVar78 <= 1.1920929e-07) & (uint)fVar73) * fVar41 * fStack_4c4 -
                     fStack_4c4 * fStack_354;
            uVar8 = -(uint)(fVar38 < fVar61);
            uVar9 = -(uint)(fVar42 < fVar62);
            uVar21 = -(uint)(fVar43 < fVar75);
            uVar22 = -(uint)(fVar79 < fVar73);
            auVar88._0_4_ = (uint)fVar38 & uVar8;
            auVar88._4_4_ = (uint)fVar42 & uVar9;
            auVar88._8_4_ = (uint)fVar43 & uVar21;
            auVar88._12_4_ = (uint)fVar79 & uVar22;
            auVar85._0_4_ = ~uVar8 & (uint)fVar61;
            auVar85._4_4_ = ~uVar9 & (uint)fVar62;
            auVar85._8_4_ = ~uVar21 & (uint)fVar75;
            auVar85._12_4_ = ~uVar22 & (uint)fVar73;
            auVar99 = maxps(_DAT_01701b10,auVar85 | auVar88);
            fVar23 = fVar23 * local_5d0 * auVar99._0_4_ + local_5d0 * local_3b0;
            fVar36 = fVar36 * fStack_5cc * auVar99._4_4_ + fStack_5cc * fStack_3ac;
            fVar40 = fVar40 * fStack_5c8 * auVar99._8_4_ + fStack_5c8 * fStack_3a8;
            fVar41 = fVar41 * fStack_5c4 * auVar99._12_4_ + fStack_5c4 * fStack_3a4;
            uVar8 = -(uint)(fVar23 < fVar61);
            uVar9 = -(uint)(fVar36 < fVar62);
            uVar21 = -(uint)(fVar40 < fVar75);
            uVar22 = -(uint)(fVar41 < fVar73);
            auVar47._0_4_ = (uint)fVar23 & uVar8;
            auVar47._4_4_ = (uint)fVar36 & uVar9;
            auVar47._8_4_ = (uint)fVar40 & uVar21;
            auVar47._12_4_ = (uint)fVar41 & uVar22;
            auVar89._0_4_ = ~uVar8 & (uint)fVar61;
            auVar89._4_4_ = ~uVar9 & (uint)fVar62;
            auVar89._8_4_ = ~uVar21 & (uint)fVar75;
            auVar89._12_4_ = ~uVar22 & (uint)fVar73;
            auVar69 = maxps(_DAT_01701b10,auVar89 | auVar47);
            fVar41 = (auVar69._0_4_ * fVar39 + local_b0) - (local_f0 + auVar99._0_4_ * local_4f0);
            fVar23 = (auVar69._4_4_ * fVar44 + fStack_ac) - (fStack_ec + auVar99._4_4_ * fStack_4ec)
            ;
            fStack_564 = (auVar69._8_4_ * fVar45 + fStack_a8) -
                         (fStack_e8 + auVar99._8_4_ * fStack_4e8);
            fVar41 = fVar41 * fVar41;
            fVar23 = fVar23 * fVar23;
            fStack_564 = fStack_564 * fStack_564;
            local_570 = fVar23 + fVar41 + fStack_564;
            fStack_56c = fVar23 + fVar41 + fStack_564;
            fStack_568 = fVar23 + fVar41 + fStack_564;
            fStack_564 = fVar23 + fVar41 + fStack_564;
            fVar41 = fVar39 * auVar80._0_4_;
            fVar23 = fVar44 * auVar80._4_4_;
            fVar40 = fVar45 * auVar80._8_4_;
            fVar43 = fVar23 + fVar41 + fVar40;
            fVar79 = fVar23 + fVar41 + fVar40;
            fVar25 = fVar23 + fVar41 + fVar40;
            fVar40 = fVar23 + fVar41 + fVar40;
            fVar41 = fVar39 * local_60;
            fVar23 = fVar44 * fStack_5c;
            fStack_3b4 = fVar45 * fStack_58;
            local_3c0 = fVar23 + fVar41 + fStack_3b4;
            fStack_3bc = fVar23 + fVar41 + fStack_3b4;
            fStack_3b8 = fVar23 + fVar41 + fStack_3b4;
            fStack_3b4 = fVar23 + fVar41 + fStack_3b4;
            fVar41 = auVar80._0_4_ * local_60;
            fVar23 = auVar80._4_4_ * fStack_5c;
            fStack_304 = auVar80._8_4_ * fStack_58;
            local_310 = fVar23 + fVar41 + fStack_304;
            fStack_30c = fVar23 + fVar41 + fStack_304;
            fStack_308 = fVar23 + fVar41 + fStack_304;
            fStack_304 = fVar23 + fVar41 + fStack_304;
            local_510._0_4_ = fVar37 + fVar24 + fVar102;
            local_510._4_4_ = fVar37 + fVar24 + fVar102;
            local_510._8_4_ = fVar37 + fVar24 + fVar102;
            local_510._12_4_ = fVar37 + fVar24 + fVar102;
            fVar24 = auVar80._0_4_ * auVar80._0_4_;
            fVar37 = auVar80._4_4_ * auVar80._4_4_;
            fVar41 = auVar80._8_4_ * auVar80._8_4_;
            auVar27._0_4_ = fVar37 + fVar24 + fVar41;
            auVar27._4_4_ = fVar37 + fVar24 + fVar41;
            auVar27._8_4_ = fVar37 + fVar24 + fVar41;
            auVar27._12_4_ = fVar37 + fVar24 + fVar41;
            auVar48._0_4_ = auVar27._0_4_ * local_510._0_4_ - fVar43 * fVar43;
            auVar48._4_4_ = auVar27._4_4_ * local_510._4_4_ - fVar79 * fVar79;
            auVar48._8_4_ = auVar27._8_4_ * local_510._8_4_ - fVar25 * fVar25;
            auVar48._12_4_ = auVar27._12_4_ * local_510._12_4_ - fVar40 * fVar40;
            auVar69 = maxps(auVar48,_DAT_01701cf0);
            auVar99 = rcpps(local_510,auVar69);
            fVar23 = auVar69._0_4_;
            fVar36 = auVar69._4_4_;
            fVar38 = auVar69._8_4_;
            fVar42 = auVar69._12_4_;
            local_530._0_4_ = (2.0 - auVar99._0_4_ * fVar23) * auVar99._0_4_;
            local_530._4_4_ = (2.0 - auVar99._4_4_ * fVar36) * auVar99._4_4_;
            local_530._8_4_ = (2.0 - auVar99._8_4_ * fVar38) * auVar99._8_4_;
            local_530._12_4_ = (2.0 - auVar99._12_4_ * fVar42) * auVar99._12_4_;
            auVar69 = rcpps(local_530,auVar27);
            auVar97._0_4_ = auVar69._0_4_ * auVar27._0_4_;
            auVar97._4_4_ = auVar69._4_4_ * auVar27._4_4_;
            auVar97._8_4_ = auVar69._8_4_ * auVar27._8_4_;
            auVar97._12_4_ = auVar69._12_4_ * auVar27._12_4_;
            local_550 = (2.0 - auVar97._0_4_) * auVar69._0_4_;
            fStack_54c = (2.0 - auVar97._4_4_) * auVar69._4_4_;
            fStack_548 = (2.0 - auVar97._8_4_) * auVar69._8_4_;
            fStack_544 = (2.0 - auVar97._12_4_) * auVar69._12_4_;
            auVar69 = rcpps(auVar97,local_510);
            local_610 = (2.0 - auVar69._0_4_ * local_510._0_4_) * auVar69._0_4_;
            fStack_60c = (2.0 - auVar69._4_4_ * local_510._4_4_) * auVar69._4_4_;
            fStack_608 = (2.0 - auVar69._8_4_ * local_510._8_4_) * auVar69._8_4_;
            fStack_604 = (2.0 - auVar69._12_4_ * local_510._12_4_) * auVar69._12_4_;
            fVar24 = auVar27._0_4_ * local_3c0 - local_310 * fVar43;
            fVar37 = auVar27._4_4_ * fStack_3bc - fStack_30c * fVar79;
            fVar41 = auVar27._8_4_ * fStack_3b8 - fStack_308 * fVar25;
            fVar102 = auVar27._12_4_ * fStack_3b4 - fStack_304 * fVar40;
            local_5f0 = -(uint)(fVar24 < fVar23);
            uStack_5ec = -(uint)(fVar37 < fVar36);
            uStack_5e8 = -(uint)(fVar41 < fVar38);
            uStack_5e4 = -(uint)(fVar102 < fVar42);
            local_30._4_4_ = uStack_5ec & (uint)fVar37 | ~uStack_5ec & (uint)fVar36;
            local_30._0_4_ = local_5f0 & (uint)fVar24 | ~local_5f0 & (uint)fVar23;
            fStack_28 = (float)(uStack_5e8 & (uint)fVar41 | ~uStack_5e8 & (uint)fVar38);
            fStack_24 = (float)(uStack_5e4 & (uint)fVar102 | ~uStack_5e4 & (uint)fVar42);
            auVar69 = maxps(_DAT_01701b10,_local_30);
            fVar24 = (float)(~-(uint)(fVar23 <= 1.1920929e-07) &
                             (uint)(auVar69._0_4_ * local_530._0_4_) |
                            -(uint)(fVar23 <= 1.1920929e-07) & (uint)fVar61) * local_550 * fVar43 -
                     local_550 * local_310;
            fVar37 = (float)(~-(uint)(fVar36 <= 1.1920929e-07) &
                             (uint)(auVar69._4_4_ * local_530._4_4_) |
                            -(uint)(fVar36 <= 1.1920929e-07) & (uint)fVar62) * fStack_54c * fVar79 -
                     fStack_54c * fStack_30c;
            fVar41 = (float)(~-(uint)(fVar38 <= 1.1920929e-07) &
                             (uint)(auVar69._8_4_ * local_530._8_4_) |
                            -(uint)(fVar38 <= 1.1920929e-07) & (uint)fVar75) * fStack_548 * fVar25 -
                     fStack_548 * fStack_308;
            fVar102 = (float)(~-(uint)(fVar42 <= 1.1920929e-07) &
                              (uint)(auVar69._12_4_ * local_530._12_4_) |
                             -(uint)(fVar42 <= 1.1920929e-07) & (uint)fVar73) * fStack_544 * fVar40
                      - fStack_544 * fStack_304;
            uVar8 = -(uint)(fVar24 < fVar61);
            uVar9 = -(uint)(fVar37 < fVar62);
            uVar21 = -(uint)(fVar41 < fVar75);
            uVar22 = -(uint)(fVar102 < fVar73);
            auVar28._0_4_ = ~uVar8 & (uint)fVar61;
            auVar28._4_4_ = ~uVar9 & (uint)fVar62;
            auVar28._8_4_ = ~uVar21 & (uint)fVar75;
            auVar28._12_4_ = ~uVar22 & (uint)fVar73;
            auVar49._0_4_ = uVar8 & (uint)fVar24;
            auVar49._4_4_ = uVar9 & (uint)fVar37;
            auVar49._8_4_ = uVar21 & (uint)fVar41;
            auVar49._12_4_ = uVar22 & (uint)fVar102;
            auVar99 = maxps(_DAT_01701b10,auVar49 | auVar28);
            fVar24 = local_610 * fVar43 * auVar99._0_4_ + local_610 * local_3c0;
            fVar37 = fStack_60c * fVar79 * auVar99._4_4_ + fStack_60c * fStack_3bc;
            fVar41 = fStack_608 * fVar25 * auVar99._8_4_ + fStack_608 * fStack_3b8;
            fVar102 = fStack_604 * fVar40 * auVar99._12_4_ + fStack_604 * fStack_3b4;
            uVar8 = -(uint)(fVar24 < fVar61);
            uVar9 = -(uint)(fVar37 < fVar62);
            uVar21 = -(uint)(fVar41 < fVar75);
            uVar22 = -(uint)(fVar102 < fVar73);
            auVar50._0_4_ = uVar8 & (uint)fVar24;
            auVar50._4_4_ = uVar9 & (uint)fVar37;
            auVar50._8_4_ = uVar21 & (uint)fVar41;
            auVar50._12_4_ = uVar22 & (uint)fVar102;
            auVar65._0_4_ = ~uVar8 & (uint)fVar61;
            auVar65._4_4_ = ~uVar9 & (uint)fVar62;
            auVar65._8_4_ = ~uVar21 & (uint)fVar75;
            auVar65._12_4_ = ~uVar22 & (uint)fVar73;
            auVar69 = maxps(_DAT_01701b10,auVar65 | auVar50);
            fVar24 = (local_b0 + auVar69._0_4_ * fVar39) -
                     (local_f0 + auVar80._0_4_ * auVar99._0_4_);
            fVar37 = (fStack_ac + auVar69._4_4_ * fVar44) -
                     (fStack_ec + auVar80._4_4_ * auVar99._4_4_);
            fVar41 = (fStack_a8 + auVar69._8_4_ * fVar45) -
                     (fStack_e8 + auVar80._8_4_ * auVar99._8_4_);
            fVar24 = fVar24 * fVar24;
            fVar37 = fVar37 * fVar37;
            fVar41 = fVar41 * fVar41;
            uVar8 = -(uint)(fVar37 + fVar24 + fVar41 < local_570);
            uVar9 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_56c);
            uVar21 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_568);
            uVar22 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_564);
            *pfVar10 = (float)(uVar8 & (uint)*pfVar10 | ~uVar8 & (uint)pfVar10[4]);
            pfVar10[1] = (float)(uVar9 & (uint)pfVar10[1] | ~uVar9 & (uint)pfVar10[5]);
            pfVar10[2] = (float)(uVar21 & (uint)pfVar10[2] | ~uVar21 & (uint)pfVar10[6]);
            pfVar10[3] = (float)(uVar22 & (uint)pfVar10[3] | ~uVar22 & (uint)pfVar10[7]);
            pfVar10[4] = local_f0;
            pfVar10[5] = fStack_ec;
            pfVar10[6] = fStack_e8;
            pfVar10[7] = fStack_e4;
LAB_010b9a5a:
            iVar12 = 2;
            fVar24 = local_a0;
            fVar37 = fStack_9c;
            fVar41 = fStack_98;
            fVar102 = fStack_94;
          }
        }
      }
      else {
        local_b0 = *pfVar19;
        fStack_ac = pfVar19[1];
        fStack_a8 = pfVar19[2];
        fStack_a4 = pfVar19[3];
        fVar38 = *pfVar10;
        fVar42 = pfVar10[1];
        fVar43 = pfVar10[2];
        fVar79 = pfVar10[3];
        fVar25 = pfVar19[4];
        fVar39 = pfVar19[5];
        fVar44 = pfVar19[6];
        fVar45 = pfVar19[7];
        fVar76 = (local_b0 - fVar38) * fVar24;
        fVar77 = (fStack_ac - fVar42) * fVar37;
        fVar78 = (fStack_a8 - fVar43) * fVar41;
        local_30._0_4_ = fVar25 - fVar38;
        local_30._4_4_ = fVar39 - fVar42;
        fStack_28 = fVar44 - fVar43;
        fStack_24 = fVar45 - fVar79;
        fVar90 = fVar77 + fVar76 + fVar78;
        fVar91 = fVar77 + fVar76 + fVar78;
        fVar74 = fVar77 + fVar76 + fVar78;
        fVar78 = fVar77 + fVar76 + fVar78;
        fVar24 = (float)local_30._0_4_ * fVar24;
        fVar37 = (float)local_30._4_4_ * fVar37;
        fVar41 = fStack_28 * fVar41;
        auVar69._0_4_ = fVar37 + fVar24 + fVar41;
        auVar69._4_4_ = fVar37 + fVar24 + fVar41;
        auVar69._8_4_ = fVar37 + fVar24 + fVar41;
        auVar69._12_4_ = fVar37 + fVar24 + fVar41;
        local_60 = fVar38;
        fStack_5c = fVar42;
        fStack_58 = fVar43;
        fStack_54 = fVar79;
        local_50 = fVar25;
        fStack_4c = fVar39;
        fStack_48 = fVar44;
        fStack_44 = fVar45;
        local_230 = fVar23;
        fStack_22c = fVar36;
        fStack_228 = fVar40;
        fStack_224 = fStack_1a4;
        if (auVar69._0_4_ * fVar90 < 0.0) {
          auVar99._0_4_ = fVar90 - auVar69._0_4_;
          auVar99._4_4_ = fVar91 - auVar69._4_4_;
          auVar99._8_4_ = fVar74 - auVar69._8_4_;
          auVar99._12_4_ = fVar78 - auVar69._12_4_;
          auVar69 = rcpps(auVar69,auVar99);
          fVar24 = (fVar25 - local_b0) *
                   (2.0 - auVar69._0_4_ * auVar99._0_4_) * auVar69._0_4_ * fVar90 + local_b0;
          fVar41 = (fVar39 - fStack_ac) *
                   (2.0 - auVar69._4_4_ * auVar99._4_4_) * auVar69._4_4_ * fVar91 + fStack_ac;
          fVar77 = (fVar44 - fStack_a8) *
                   (2.0 - auVar69._8_4_ * auVar99._8_4_) * auVar69._8_4_ * fVar74 + fStack_a8;
          fVar90 = (fVar45 - fStack_a4) *
                   (2.0 - auVar69._12_4_ * auVar99._12_4_) * auVar69._12_4_ * fVar78 + fStack_a4;
          local_f0 = pfVar10[8];
          fStack_ec = pfVar10[9];
          fStack_e8 = pfVar10[10];
          fStack_e4 = pfVar10[0xb];
          fVar37 = pfVar10[4] - fVar38;
          fVar76 = pfVar10[5] - fVar42;
          fVar78 = pfVar10[6] - fVar43;
          fVar91 = pfVar10[7] - fVar79;
          fStack_45c = (fStack_e8 - fVar43) * fVar76 - (fStack_ec - fVar42) * fVar78;
          fStack_458 = (local_f0 - fVar38) * fVar78 - (fStack_e8 - fVar43) * fVar37;
          local_460 = (fStack_ec - fVar42) * fVar37 - (local_f0 - fVar38) * fVar76;
          fStack_454 = (fStack_e4 - fVar79) * fVar91 - (fStack_e4 - fVar79) * fVar91;
          fVar78 = fVar38 - fVar24;
          fVar91 = fVar42 - fVar41;
          fVar74 = fVar43 - fVar77;
          local_440 = local_f0 - fVar24;
          fStack_43c = fStack_ec - fVar41;
          fStack_438 = fStack_e8 - fVar77;
          fStack_434 = fStack_e4 - fVar90;
          fVar24 = pfVar10[4] - fVar24;
          fVar41 = pfVar10[5] - fVar41;
          fVar77 = pfVar10[6] - fVar77;
          fVar76 = pfVar10[7] - fVar90;
          fVar37 = (fVar77 * fStack_45c - fVar24 * local_460) * fVar91;
          fVar76 = (fVar76 * fStack_454 - fVar76 * fStack_454) * (fVar79 - fVar90);
          auVar29._4_4_ =
               -(uint)(fStack_cc <
                      (fVar78 * fStack_458 - fVar91 * fStack_45c) * fStack_438 +
                      (fVar91 * local_460 - fVar74 * fStack_458) * local_440 +
                      (fVar74 * fStack_45c - fVar78 * local_460) * fStack_43c);
          auVar29._0_4_ =
               -(uint)(local_d0 <
                      (local_440 * fStack_458 - fStack_43c * fStack_45c) * fVar77 +
                      (fStack_43c * local_460 - fStack_438 * fStack_458) * fVar24 +
                      (fStack_438 * fStack_45c - local_440 * local_460) * fVar41);
          auVar29._8_4_ =
               -(uint)(fStack_c8 <
                      (fVar24 * fStack_458 - fVar41 * fStack_45c) * fVar74 +
                      (fVar41 * local_460 - fVar77 * fStack_458) * fVar78 + fVar37);
          auVar29._12_4_ = -(uint)(fStack_c4 < fVar76 + fVar37 + fVar76);
          uVar8 = movmskps(pfVar18,auVar29);
          pfVar18 = (float *)(uVar8 & 7);
          fVar24 = local_a0;
          fVar37 = fStack_9c;
          fVar41 = fStack_98;
          local_330 = fStack_458;
          fStack_32c = local_460;
          fStack_328 = fStack_45c;
          fStack_324 = fStack_454;
          if ((char)pfVar18 == '\a') goto LAB_010b9a74;
        }
        local_f0 = pfVar10[8];
        fStack_ec = pfVar10[9];
        fStack_e8 = pfVar10[10];
        fStack_e4 = pfVar10[0xb];
        local_b0 = pfVar10[4];
        fStack_ac = pfVar10[5];
        fStack_a8 = pfVar10[6];
        fStack_a4 = pfVar10[7];
        fStack_5c = fVar38 - local_f0;
        fStack_58 = fVar42 - fStack_ec;
        local_60 = fVar43 - fStack_e8;
        fStack_54 = fVar79 - fStack_e4;
        fStack_48 = local_f0 - local_b0;
        local_50 = fStack_ec - fStack_ac;
        fStack_4c = fStack_e8 - fStack_a8;
        fStack_44 = fStack_e4 - fStack_a4;
        local_80._4_4_ = local_60;
        local_80._0_4_ = fStack_58;
        fStack_78 = fStack_5c;
        fStack_74 = fStack_54;
        local_4c0 = local_50 * local_60 - fStack_4c * fStack_58;
        fStack_4bc = fStack_4c * fStack_5c - fStack_48 * local_60;
        fStack_4b8 = fStack_48 * fStack_58 - local_50 * fStack_5c;
        fStack_4b4 = fStack_44 * fStack_54 - fStack_44 * fStack_54;
        local_480 = fVar25 - local_f0;
        fStack_47c = fVar39 - fStack_ec;
        fStack_478 = fVar44 - fStack_e8;
        fStack_474 = fVar45 - fStack_e4;
        fVar24 = (fStack_28 * (local_b0 - fVar38) - (float)local_30._0_4_ * (fStack_a8 - fVar43)) *
                 fStack_4bc;
        fStack_1a4 = (fStack_24 * (fStack_a4 - fVar79) - fStack_24 * (fStack_a4 - fVar79)) *
                     fStack_4b4;
        local_1b0 = ((fVar25 - local_b0) * local_50 - (fVar39 - fStack_ac) * fStack_48) * fStack_4b8
                    + ((fVar39 - fStack_ac) * fStack_4c - (fVar44 - fStack_a8) * local_50) *
                      local_4c0 +
                      ((fVar44 - fStack_a8) * fStack_48 - (fVar25 - local_b0) * fStack_4c) *
                      fStack_4bc;
        fStack_1ac = (local_480 * fStack_58 - fStack_47c * fStack_5c) * fStack_4b8 +
                     (fStack_47c * local_60 - fStack_478 * fStack_58) * local_4c0 +
                     (fStack_478 * fStack_5c - local_480 * local_60) * fStack_4bc;
        fStack_1a8 = ((float)local_30._0_4_ * (fStack_ac - fVar42) -
                     (float)local_30._4_4_ * (local_b0 - fVar38)) * fStack_4b8 +
                     ((float)local_30._4_4_ * (fStack_a8 - fVar43) -
                     fStack_28 * (fStack_ac - fVar42)) * local_4c0 + fVar24;
        fStack_1a4 = fStack_1a4 + fVar24 + fStack_1a4;
        auVar51._4_4_ = -(uint)(fStack_1ac < fStack_cc);
        auVar51._0_4_ = -(uint)(local_1b0 < local_d0);
        auVar51._8_4_ = -(uint)(fStack_1a8 < fStack_c8);
        auVar51._12_4_ = -(uint)(fStack_1a4 < fStack_c4);
        uVar8 = movmskps(pfVar18,auVar51);
        pfVar18 = (float *)(uVar8 & 7);
        if (pfVar18 == (float *)&DAT_00000007) {
          *pfVar19 = pfVar19[4];
          pfVar19[1] = pfVar19[5];
          pfVar19[2] = pfVar19[6];
          pfVar19[3] = pfVar19[7];
          iVar12 = 0;
          fVar24 = local_a0;
          fVar37 = fStack_9c;
          fVar41 = fStack_98;
          goto LAB_010b9a74;
        }
        if (pfVar18 == (float *)0x6) goto LAB_010b9a53;
        if (pfVar18 == (float *)0x5) {
LAB_010b9c0b:
          pfVar10[4] = pfVar10[8];
          pfVar10[5] = pfVar10[9];
          pfVar10[6] = pfVar10[10];
          pfVar10[7] = pfVar10[0xb];
        }
        else if (pfVar18 != (float *)0x3) {
          if (pfVar18 != (float *)0x1) {
            if (pfVar18 == (float *)0x2) {
              if ((fStack_1a8 - fVar40) * fVar23 <= (local_1b0 - fVar23) * fVar40)
              goto LAB_010b9c21;
            }
            else if ((pfVar18 == (float *)&DAT_00000004) &&
                    ((fStack_1ac - fVar36) * fVar23 < (local_1b0 - fVar23) * fVar36))
            goto LAB_010b9c0b;
LAB_010b9a53:
            *pfVar10 = pfVar10[8];
            pfVar10[1] = pfVar10[9];
            pfVar10[2] = pfVar10[10];
            pfVar10[3] = pfVar10[0xb];
            goto LAB_010b9a5a;
          }
          if ((fStack_1ac - fVar36) * fVar40 <= (fStack_1a8 - fVar40) * fVar36) goto LAB_010b9c0b;
        }
LAB_010b9c21:
        iVar12 = 2;
        fVar24 = local_a0;
        fVar37 = fStack_9c;
        fVar41 = fStack_98;
      }
LAB_010b9a74:
      local_19c = 1;
      fVar38 = local_190[0];
      fVar42 = local_190[1];
      fVar43 = local_190[2];
      if (iVar12 == 0) {
        if (local_14 == (float *)0x2) {
          local_14 = (float *)0x1;
          bVar6 = false;
          local_1a0 = local_18;
        }
        else {
          local_18 = (float *)0x1;
          local_1a0 = (float *)0x1;
          bVar6 = false;
        }
        goto LAB_010b9ea0;
      }
      if (iVar12 == 1) goto switchD_010b8d87_caseD_d;
      if (iVar12 != 2) goto LAB_010bad64;
      uVar9 = 2;
      local_14 = (float *)0x2;
      local_18 = (float *)0x2;
switchD_010b8d87_caseD_12:
      local_19c = 1;
      local_30._4_4_ = afStack_144[1] - local_150[0];
      fStack_28 = afStack_144[2] - local_150[1];
      local_30._0_4_ = afStack_144[3] - local_150[2];
      fStack_24 = fStack_134 - afStack_144[0];
      fVar40 = local_190[4] - local_190[0];
      fVar79 = local_190[5] - local_190[1];
      fVar25 = fStack_178 - local_190[2];
      fVar39 = fStack_174 - local_190[3];
      fVar24 = fVar79 * (float)local_30._0_4_ - fVar25 * fStack_28;
      fVar37 = fVar25 * (float)local_30._4_4_ - fVar40 * (float)local_30._0_4_;
      fVar41 = fVar40 * fStack_28 - fVar79 * (float)local_30._4_4_;
      fVar102 = fVar39 * fStack_24 - fVar39 * fStack_24;
      local_b0 = fStack_28;
      fStack_ac = (float)local_30._0_4_;
      fStack_a8 = (float)local_30._4_4_;
      fStack_a4 = fStack_24;
      local_a0 = fVar24;
      fStack_9c = fVar37;
      fStack_98 = fVar41;
      fStack_94 = fVar102;
      local_60 = fVar41;
      fStack_5c = fVar24;
      fStack_58 = fVar37;
      fStack_54 = fVar102;
      fVar38 = fVar37 * fVar25 - fVar41 * fVar79;
      fVar42 = fVar41 * fVar40 - fVar24 * fVar25;
      fVar43 = fVar24 * fVar79 - fVar37 * fVar40;
      local_80._0_4_ = fVar37 * (float)local_30._0_4_ - fVar41 * fStack_28;
      local_80._4_4_ = fVar41 * (float)local_30._4_4_ - fVar24 * (float)local_30._0_4_;
      fVar23 = fVar24 * fStack_28 - fVar37 * (float)local_30._4_4_;
      local_250 = local_190[0] - local_150[0];
      fStack_24c = local_190[1] - local_150[1];
      fStack_248 = local_190[2] - local_150[2];
      fStack_244 = local_190[3] - afStack_144[0];
      local_2e0 = (local_150[0] - local_190[4]) * (float)local_80._0_4_;
      fStack_2dc = (local_150[1] - local_190[5]) * (float)local_80._4_4_;
      fStack_2d8 = (local_150[2] - fStack_178) * fVar23;
      fStack_2d4 = (afStack_144[0] - fStack_174) * (fVar102 * fStack_24 - fVar102 * fStack_24);
      local_80._0_4_ = local_250 * (float)local_80._0_4_;
      local_80._4_4_ = fStack_24c * (float)local_80._4_4_;
      local_4e0 = (afStack_144[1] - local_190[0]) * fVar38;
      fStack_4dc = (afStack_144[2] - local_190[1]) * fVar42;
      fStack_4d8 = (afStack_144[3] - local_190[2]) * fVar43;
      fStack_4d4 = (fStack_134 - local_190[3]) * (fVar102 * fVar39 - fVar102 * fVar39);
      fStack_78 = local_2e0;
      fStack_74 = fStack_2dc;
      fVar23 = fStack_248 * fVar23 + (float)local_80._4_4_ + (float)local_80._0_4_;
      fVar36 = fStack_2d8 + fStack_2dc + local_2e0;
      auVar66._4_4_ = -(uint)(fStack_cc < fVar36);
      auVar66._0_4_ = -(uint)(local_d0 < fVar23);
      auVar66._8_4_ =
           -(uint)(fStack_c8 < fStack_248 * fVar43 + fStack_24c * fVar42 + local_250 * fVar38);
      auVar66._12_4_ = -(uint)(fStack_c4 < fStack_4d8 + fStack_4dc + local_4e0);
      iVar12 = movmskps(uVar9,auVar66);
      fVar38 = local_190[0];
      fVar42 = local_190[1];
      fVar43 = local_190[2];
      if (iVar12 == 0xf) {
        auVar34._0_4_ = fVar36 + fVar23;
        auVar34._4_4_ = fVar36 + fVar23;
        auVar34._8_4_ = fVar36 + fVar23;
        auVar34._12_4_ = fVar36 + fVar23;
        auVar69 = rcpps(_DAT_01701b20,auVar34);
        fVar36 = fVar24 * local_250;
        fVar40 = fVar37 * fStack_24c;
        fVar61 = fVar41 * fStack_248;
        local_100 = (2.0 - auVar69._0_4_ * auVar34._0_4_) * auVar69._0_4_ * fVar23 *
                    (local_190[4] - local_190[0]) + local_190[0];
        fStack_fc = (2.0 - auVar69._4_4_ * auVar34._4_4_) * auVar69._4_4_ * fVar23 *
                    (local_190[5] - local_190[1]) + local_190[1];
        fStack_f8 = (2.0 - auVar69._8_4_ * auVar34._8_4_) * auVar69._8_4_ * fVar23 *
                    (fStack_178 - local_190[2]) + local_190[2];
        fStack_f4 = (2.0 - auVar69._12_4_ * auVar34._12_4_) * auVar69._12_4_ * fVar23 *
                    (fStack_174 - local_190[3]) + local_190[3];
        fVar24 = (float)((uint)(fVar40 + fVar36 + fVar61) & 0x80000000 ^ (uint)fVar24);
        fVar37 = (float)((uint)(fVar40 + fVar36 + fVar61) & 0x80000000 ^ (uint)fVar37);
        fVar41 = (float)((uint)(fVar40 + fVar36 + fVar61) & 0x80000000 ^ (uint)fVar41);
        fVar102 = (float)((uint)(fVar40 + fVar36 + fVar61) & 0x80000000 ^ (uint)fVar102);
        local_1a0 = local_18;
        bVar6 = false;
        goto LAB_010b9ea0;
      }
      switch(iVar12 + -7) {
      case 0:
        local_150[0] = afStack_144[1];
        local_150[1] = afStack_144[2];
        local_150[2] = afStack_144[3];
        afStack_144[0] = fStack_134;
      case 4:
        local_18 = (float *)0x1;
        goto switchD_010b8d87_caseD_11;
      default:
        fVar23 = (float)local_30._4_4_ * fVar40;
        fVar36 = fStack_28 * fVar79;
        fVar44 = (float)local_30._0_4_ * fVar25;
        fVar90 = fVar36 + fVar23 + fVar44;
        fVar91 = fVar36 + fVar23 + fVar44;
        fVar74 = fVar36 + fVar23 + fVar44;
        fVar44 = fVar36 + fVar23 + fVar44;
        fVar23 = (local_150[0] - local_190[0]) * fVar40;
        fVar36 = (local_150[1] - local_190[1]) * fVar79;
        fStack_2e4 = (local_150[2] - local_190[2]) * fVar25;
        fVar45 = (local_150[0] - local_190[0]) * (float)local_30._4_4_;
        fVar76 = (local_150[1] - local_190[1]) * fStack_28;
        fStack_394 = (local_150[2] - local_190[2]) * (float)local_30._0_4_;
        auVar98._4_4_ = fVar23;
        auVar98._0_4_ = fVar23;
        auVar98._8_4_ = fVar23;
        auVar98._12_4_ = fVar23;
        local_2f0 = fVar36 + fVar23 + fStack_2e4;
        fStack_2ec = fVar36 + fVar23 + fStack_2e4;
        fStack_2e8 = fVar36 + fVar23 + fStack_2e4;
        fStack_2e4 = fVar36 + fVar23 + fStack_2e4;
        local_3a0 = fVar76 + fVar45 + fStack_394;
        fStack_39c = fVar76 + fVar45 + fStack_394;
        fStack_398 = fVar76 + fVar45 + fStack_394;
        fStack_394 = fVar76 + fVar45 + fStack_394;
        fVar76 = (float)local_30._4_4_ * (float)local_30._4_4_;
        fVar77 = fStack_28 * fStack_28;
        fVar78 = (float)local_30._0_4_ * (float)local_30._0_4_;
        fVar23 = fVar40 * fVar40;
        fVar36 = fVar79 * fVar79;
        fVar45 = fVar25 * fVar25;
        auVar86._0_4_ = fVar36 + fVar23 + fVar45;
        auVar86._4_4_ = fVar36 + fVar23 + fVar45;
        auVar86._8_4_ = fVar36 + fVar23 + fVar45;
        auVar86._12_4_ = fVar36 + fVar23 + fVar45;
        auVar30._0_4_ = fVar77 + fVar76 + fVar78;
        auVar30._4_4_ = fVar77 + fVar76 + fVar78;
        auVar30._8_4_ = fVar77 + fVar76 + fVar78;
        auVar30._12_4_ = fVar77 + fVar76 + fVar78;
        auVar52._0_4_ = auVar30._0_4_ * auVar86._0_4_ - fVar90 * fVar90;
        auVar52._4_4_ = auVar30._4_4_ * auVar86._4_4_ - fVar91 * fVar91;
        auVar52._8_4_ = auVar30._8_4_ * auVar86._8_4_ - fVar74 * fVar74;
        auVar52._12_4_ = auVar30._12_4_ * auVar86._12_4_ - fVar44 * fVar44;
        auVar69 = maxps(auVar52,_DAT_01701cf0);
        local_50 = 2.0;
        fStack_4c = 2.0;
        fStack_48 = 2.0;
        fStack_44 = 2.0;
        auVar99 = rcpps(auVar98,auVar69);
        fVar23 = auVar69._0_4_;
        fVar36 = auVar69._4_4_;
        fVar45 = auVar69._8_4_;
        fVar76 = auVar69._12_4_;
        local_520._0_4_ = (2.0 - auVar99._0_4_ * fVar23) * auVar99._0_4_;
        local_520._4_4_ = (2.0 - auVar99._4_4_ * fVar36) * auVar99._4_4_;
        local_520._8_4_ = (2.0 - auVar99._8_4_ * fVar45) * auVar99._8_4_;
        local_520._12_4_ = (2.0 - auVar99._12_4_ * fVar76) * auVar99._12_4_;
        auVar69 = rcpps(local_520,auVar30);
        auVar100._0_4_ = auVar69._0_4_ * auVar30._0_4_;
        auVar100._4_4_ = auVar69._4_4_ * auVar30._4_4_;
        auVar100._8_4_ = auVar69._8_4_ * auVar30._8_4_;
        auVar100._12_4_ = auVar69._12_4_ * auVar30._12_4_;
        fVar77 = (2.0 - auVar100._0_4_) * auVar69._0_4_;
        fVar78 = (2.0 - auVar100._4_4_) * auVar69._4_4_;
        fVar92 = (2.0 - auVar100._8_4_) * auVar69._8_4_;
        fVar93 = (2.0 - auVar100._12_4_) * auVar69._12_4_;
        _local_80 = rcpps(auVar100,auVar86);
        local_560 = (2.0 - local_80._0_4_ * auVar86._0_4_) * local_80._0_4_;
        fStack_55c = (2.0 - local_80._4_4_ * auVar86._4_4_) * local_80._4_4_;
        fStack_558 = (2.0 - local_80._8_4_ * auVar86._8_4_) * local_80._8_4_;
        fStack_554 = (2.0 - local_80._12_4_ * auVar86._12_4_) * local_80._12_4_;
        local_500 = auVar30._0_4_ * local_2f0 - local_3a0 * fVar90;
        fStack_4fc = auVar30._4_4_ * fStack_2ec - fStack_39c * fVar91;
        fStack_4f8 = auVar30._8_4_ * fStack_2e8 - fStack_398 * fVar74;
        fStack_4f4 = auVar30._12_4_ * fStack_2e4 - fStack_394 * fVar44;
        local_540 = -(uint)(fVar23 <= 1.1920929e-07);
        uStack_53c = -(uint)(fVar36 <= 1.1920929e-07);
        uStack_538 = -(uint)(fVar45 <= 1.1920929e-07);
        uStack_534 = -(uint)(fVar76 <= 1.1920929e-07);
        auVar101._0_4_ = -(uint)(local_500 < fVar23) & (uint)local_500;
        auVar101._4_4_ = -(uint)(fStack_4fc < fVar36) & (uint)fStack_4fc;
        auVar101._8_4_ = -(uint)(fStack_4f8 < fVar45) & (uint)fStack_4f8;
        auVar101._12_4_ = -(uint)(fStack_4f4 < fVar76) & (uint)fStack_4f4;
        auVar31._0_4_ = ~-(uint)(local_500 < fVar23) & (uint)fVar23;
        auVar31._4_4_ = ~-(uint)(fStack_4fc < fVar36) & (uint)fVar36;
        auVar31._8_4_ = ~-(uint)(fStack_4f8 < fVar45) & (uint)fVar45;
        auVar31._12_4_ = ~-(uint)(fStack_4f4 < fVar76) & (uint)fVar76;
        auVar69 = maxps(_DAT_01701b10,auVar31 | auVar101);
        fVar23 = (float)(~local_540 & (uint)(auVar69._0_4_ * local_520._0_4_) |
                        local_540 & (uint)fVar61) * fVar77 * fVar90 - fVar77 * local_3a0;
        fVar36 = (float)(~uStack_53c & (uint)(auVar69._4_4_ * local_520._4_4_) |
                        uStack_53c & (uint)fVar62) * fVar78 * fVar91 - fVar78 * fStack_39c;
        fVar45 = (float)(~uStack_538 & (uint)(auVar69._8_4_ * local_520._8_4_) |
                        uStack_538 & (uint)fVar75) * fVar92 * fVar74 - fVar92 * fStack_398;
        fVar76 = (float)(~uStack_534 & (uint)(auVar69._12_4_ * local_520._12_4_) |
                        uStack_534 & (uint)fVar73) * fVar93 * fVar44 - fVar93 * fStack_394;
        uVar8 = -(uint)(fVar23 < fVar61);
        uVar9 = -(uint)(fVar36 < fVar62);
        uVar21 = -(uint)(fVar45 < fVar75);
        uVar22 = -(uint)(fVar76 < fVar73);
        auVar32._0_4_ = uVar8 & (uint)fVar23;
        auVar32._4_4_ = uVar9 & (uint)fVar36;
        auVar32._8_4_ = uVar21 & (uint)fVar45;
        auVar32._12_4_ = uVar22 & (uint)fVar76;
        auVar53._0_4_ = ~uVar8 & (uint)fVar61;
        auVar53._4_4_ = ~uVar9 & (uint)fVar62;
        auVar53._8_4_ = ~uVar21 & (uint)fVar75;
        auVar53._12_4_ = ~uVar22 & (uint)fVar73;
        auVar69 = maxps(_DAT_01701b10,auVar53 | auVar32);
        fVar23 = auVar69._0_4_;
        fVar36 = local_560 * fVar90 * fVar23 + local_560 * local_2f0;
        fVar45 = fStack_55c * fVar91 * auVar69._4_4_ + fStack_55c * fStack_2ec;
        fVar76 = fStack_558 * fVar74 * auVar69._8_4_ + fStack_558 * fStack_2e8;
        fVar44 = fStack_554 * fVar44 * auVar69._12_4_ + fStack_554 * fStack_2e4;
        uVar8 = -(uint)(fVar36 < fVar61);
        uVar9 = -(uint)(fVar45 < fVar62);
        uVar21 = -(uint)(fVar76 < fVar75);
        uVar22 = -(uint)(fVar44 < fVar73);
        auVar67._0_4_ = uVar8 & (uint)fVar36;
        auVar67._4_4_ = uVar9 & (uint)fVar45;
        auVar67._8_4_ = uVar21 & (uint)fVar76;
        auVar67._12_4_ = uVar22 & (uint)fVar44;
        auVar87._0_4_ = ~uVar8 & (uint)fVar61;
        auVar87._4_4_ = ~uVar9 & (uint)fVar62;
        auVar87._8_4_ = ~uVar21 & (uint)fVar75;
        auVar87._12_4_ = ~uVar22 & (uint)fVar73;
        auVar69 = maxps(_DAT_01701b10,auVar87 | auVar67);
        fVar36 = auVar69._0_4_;
        auVar54._4_4_ = -(uint)(fVar36 == 0.0);
        auVar54._0_4_ = -(uint)(fVar36 == 1.0);
        auVar54._8_4_ = -(uint)(fVar23 == 1.0);
        auVar54._12_4_ = -(uint)(fVar23 == 0.0);
        uVar8 = movmskps(iVar12 + -7,auVar54);
        local_100 = fVar36 * fVar40 + local_190[0];
        fStack_fc = auVar69._4_4_ * fVar79 + local_190[1];
        fStack_f8 = auVar69._8_4_ * fVar25 + local_190[2];
        fStack_f4 = auVar69._12_4_ * fVar39 + local_190[3];
        if (uVar8 == 0) {
          fVar23 = fVar24 * local_250;
          fVar36 = fVar37 * fStack_24c;
          fVar40 = fVar41 * fStack_248;
          fVar24 = (float)((uint)(fVar36 + fVar23 + fVar40) & 0x80000000 ^ (uint)fVar24);
          fVar37 = (float)((uint)(fVar36 + fVar23 + fVar40) & 0x80000000 ^ (uint)fVar37);
          fVar41 = (float)((uint)(fVar36 + fVar23 + fVar40) & 0x80000000 ^ (uint)fVar41);
          fVar102 = (float)((uint)(fVar36 + fVar23 + fVar40) & 0x80000000 ^ (uint)fVar102);
          local_1a0 = local_18;
          bVar6 = false;
          goto LAB_010b9ea0;
        }
        if ((uVar8 & 1) == 0) {
          if ((uVar8 & 2) != 0) goto LAB_010b9e5e;
        }
        else {
          local_190[0] = local_190[4];
          local_190[1] = local_190[5];
          local_190[2] = fStack_178;
          local_190[3] = fStack_174;
LAB_010b9e5e:
          local_14 = (float *)0x1;
        }
        if ((uVar8 & 4) == 0) {
          if ((uVar8 & 8) != 0) goto LAB_010b9e79;
        }
        else {
          local_150[0] = afStack_144[1];
          local_150[1] = afStack_144[2];
          local_150[2] = afStack_144[3];
          afStack_144[0] = fStack_134;
LAB_010b9e79:
          local_18 = (float *)0x1;
        }
        uVar8 = (int)local_14 * 8 | (uint)local_18;
        fVar23 = local_1b0;
        fVar36 = fStack_1ac;
        fVar40 = fStack_1a8;
        fVar38 = local_190[0];
        fVar42 = local_190[1];
        fVar43 = local_190[2];
        break;
      case 6:
        local_190[0] = local_190[4];
        local_190[1] = local_190[5];
        local_190[2] = fStack_178;
        local_190[3] = fStack_174;
      case 7:
        local_14 = (float *)0x1;
        goto switchD_010b8d87_caseD_a;
      }
      goto joined_r0x010b8d6a;
    case 0x21:
      fStack_2f8 = -1.0;
      local_300 = (undefined1  [8])0xbf800000bf800000;
                    /* WARNING: This code block may not be properly labeled as switch case */
      fStack_2f4 = -1.0;
      local_1c = local_190;
      local_260 = local_150[0];
      fStack_25c = local_150[1];
      fStack_258 = local_150[2];
      fStack_254 = afStack_144[0];
    }
    fVar23 = local_1c[8];
    fVar36 = local_1c[9];
    fVar40 = local_1c[10];
    fVar61 = local_1c[0xb];
    fVar62 = *local_1c;
    fVar75 = local_1c[1];
    fVar73 = local_1c[2];
    fVar79 = local_1c[3];
    local_50 = local_1c[0xc];
    fStack_4c = local_1c[0xd];
    fStack_48 = local_1c[0xe];
    fStack_44 = local_1c[0xf];
    local_b0 = local_1c[4];
    fStack_ac = local_1c[5];
    fStack_a8 = local_1c[6];
    fStack_a4 = local_1c[7];
    local_5a0 = local_50 - fVar62;
    fStack_59c = fStack_4c - fVar75;
    fStack_598 = fStack_48 - fVar73;
    fStack_594 = fStack_44 - fVar79;
    local_580 = local_50 - fVar23;
    fStack_57c = fStack_4c - fVar36;
    fStack_578 = fStack_48 - fVar40;
    fStack_574 = fStack_44 - fVar61;
    fVar25 = (fStack_48 - fStack_a8) * (fVar36 - fStack_ac) -
             (fStack_4c - fStack_ac) * (fVar40 - fStack_a8);
    fVar39 = (local_50 - local_b0) * (fVar40 - fStack_a8) -
             (fStack_48 - fStack_a8) * (fVar23 - local_b0);
    fVar44 = (fStack_4c - fStack_ac) * (fVar23 - local_b0) -
             (local_50 - local_b0) * (fVar36 - fStack_ac);
    fVar45 = fStack_578 * (fVar75 - fVar36) - fStack_57c * (fVar73 - fVar40);
    fVar40 = local_580 * (fVar73 - fVar40) - fStack_578 * (fVar62 - fVar23);
    fVar23 = fStack_57c * (fVar62 - fVar23) - local_580 * (fVar75 - fVar36);
    fVar76 = (local_260 - local_50) * (float)local_300._0_4_;
    fStack_5bc = (fStack_25c - fStack_4c) * (float)local_300._4_4_;
    fVar77 = (fStack_258 - fStack_48) * fStack_2f8;
    fVar78 = (fStack_254 - fStack_44) * fStack_2f4;
    fVar36 = fStack_598 * (fStack_ac - fVar75) - fStack_59c * (fStack_a8 - fVar73);
    fVar73 = local_5a0 * (fStack_a8 - fVar73) - fStack_598 * (local_b0 - fVar62);
    fVar62 = fStack_59c * (local_b0 - fVar62) - local_5a0 * (fStack_ac - fVar75);
    fVar75 = fStack_594 * (fStack_a4 - fVar79) - fStack_594 * (fStack_a4 - fVar79);
    local_5c0 = fStack_5bc * fVar39;
    local_320 = fVar76 * fVar36;
    fStack_5b8 = fStack_5bc * fVar73;
    fStack_318 = fVar77 * fVar62;
    fStack_5b4 = fVar78 * fVar75;
    fStack_5bc = fStack_5bc * fVar40;
    local_80._4_4_ = fVar76 * fVar45;
    local_80._0_4_ = fVar76 * fVar25;
    local_30._4_4_ = fVar77 * fVar23;
    local_30._0_4_ = fVar77 * fVar44;
    fStack_28 = fVar78 * ((fStack_44 - fStack_a4) * (fVar61 - fStack_a4) -
                         (fStack_44 - fStack_a4) * (fVar61 - fStack_a4));
    fStack_24 = fVar78 * (fStack_574 * (fVar79 - fVar61) - fStack_574 * (fVar79 - fVar61));
    fStack_78 = local_5c0;
    fStack_74 = fStack_5bc;
    fVar79 = fVar77 * fVar44 + fVar76 * fVar25 + local_5c0;
    fVar76 = fVar77 * fVar23 + fVar76 * fVar45 + fStack_5bc;
    fVar77 = fStack_318 + local_320 + fStack_5b8;
    auVar35._0_4_ = fVar25 * fVar25 + fVar39 * fVar39;
    auVar35._4_4_ = fVar45 * fVar45 + fVar40 * fVar40;
    auVar35._8_4_ = fVar36 * fVar36 + fVar73 * fVar73;
    auVar35._12_4_ = fVar73 * fVar73 + fVar75 * fVar75;
    auVar83._0_4_ = fVar44 * fVar44 + auVar35._0_4_;
    auVar83._4_4_ = fVar23 * fVar23 + auVar35._4_4_;
    auVar83._8_4_ = fVar62 * fVar62 + auVar35._8_4_;
    auVar83._12_4_ = fVar75 * fVar75 + auVar35._12_4_;
    auVar69 = rcpps(auVar35,auVar83);
    fVar61 = (float)(~-(uint)(auVar83._0_4_ == local_d0) &
                     (uint)(ABS(fVar79) * fVar79 *
                           (2.0 - auVar69._0_4_ * auVar83._0_4_) * auVar69._0_4_) |
                    -(uint)(auVar83._0_4_ == local_d0) & 0x7f7fffee);
    fVar62 = (float)(~-(uint)(auVar83._4_4_ == fStack_cc) &
                     (uint)(ABS(fVar76) * fVar76 *
                           (2.0 - auVar69._4_4_ * auVar83._4_4_) * auVar69._4_4_) |
                    -(uint)(auVar83._4_4_ == fStack_cc) & 0x7f7fffee);
    fVar40 = (float)(~-(uint)(auVar83._8_4_ == fStack_c8) &
                     (uint)(ABS(fVar77) * fVar77 *
                           (2.0 - auVar69._8_4_ * auVar83._8_4_) * auVar69._8_4_) |
                    -(uint)(auVar83._8_4_ == fStack_c8) & 0x7f7fffee);
    fVar23 = fVar62;
    fVar36 = fVar61;
    if (fVar62 < fVar61) {
      fVar23 = fVar61;
      fVar36 = fVar62;
    }
    uVar8 = (uint)(fVar62 >= fVar61);
    if (fVar23 <= fVar40) {
      uVar8 = 2;
      fVar61 = fVar40;
      fVar40 = fVar23;
    }
    else {
      fVar61 = fVar23;
      if (fVar40 < fVar36) {
        fVar40 = fVar36;
      }
    }
    fStack_31c = fStack_5b8;
    fStack_314 = fStack_5b4;
    if (fVar61 < 1.0000001e-06) goto switchD_010b8d87_caseD_d;
    if (fVar61 <= fVar40 * 1.1) {
      iVar20 = 0;
      local_84 = (undefined4 *)&DAT_00000004;
      iVar12 = 4;
      local_200[0] = fVar79;
      local_200[1] = fVar76;
      local_200[2] = fVar77;
      local_200[3] = fStack_5b4 + fStack_5b8 + fStack_5b4;
      local_d4 = 8;
      iVar7 = 0;
      iVar13 = 0x20;
      iVar17 = 0x10;
      do {
        iVar15 = iVar13;
        iVar13 = iVar7;
        if (0.0 <= *(float *)((int)local_200 + iVar20)) {
          local_84 = (undefined4 *)((int)local_200 + iVar12);
          if (0.0 <= *(float *)((int)local_200 + iVar12)) {
            pfVar16 = (float *)((int)local_1c + iVar15);
            fVar23 = *pfVar16;
            fVar36 = pfVar16[1];
            fVar40 = pfVar16[2];
            pfVar16 = (float *)((int)local_1c + iVar13);
            pfVar18 = (float *)((int)local_1c + iVar17);
            if (((local_1c[0xd] - fVar36) * (pfVar16[1] - fVar36) +
                 (local_1c[0xc] - fVar23) * (*pfVar16 - fVar23) +
                (local_1c[0xe] - fVar40) * (pfVar16[2] - fVar40)) *
                ((fStack_25c - fVar36) * (pfVar18[1] - fVar36) +
                 (local_260 - fVar23) * (*pfVar18 - fVar23) +
                (fStack_258 - fVar40) * (pfVar18[2] - fVar40)) <=
                ((fStack_25c - fVar36) * (pfVar16[1] - fVar36) +
                 (local_260 - fVar23) * (*pfVar16 - fVar23) +
                (fStack_258 - fVar40) * (pfVar16[2] - fVar40)) *
                ((local_1c[0xd] - fVar36) * (pfVar18[1] - fVar36) +
                 (local_1c[0xc] - fVar23) * (*pfVar18 - fVar23) +
                (local_1c[0xe] - fVar40) * (pfVar18[2] - fVar40))) {
              *(undefined4 *)((int)local_200 + iVar20) = 0xbf800000;
            }
            else {
              *(undefined4 *)((int)local_200 + iVar12) = 0xbf800000;
            }
          }
        }
        iVar12 = local_d4;
        local_d4 = iVar20;
        iVar20 = iVar20 + 4;
        iVar7 = iVar13 + 0x10;
        iVar17 = iVar15;
      } while (iVar13 + 0x10 < 0x30);
      if (local_200[0] <= 0.0) {
        if (local_200[1] <= 0.0) {
          if (local_200[2] <= 0.0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    if ((int)uVar8 < 0) {
switchD_010b8d87_caseD_d:
                    /* WARNING: This code block may not be properly labeled as switch case */
      bVar6 = true;
      goto LAB_010b9ea0;
    }
    fVar24 = local_1c[0xd];
    fVar37 = local_1c[0xe];
    fVar41 = local_1c[0xf];
    uVar9 = uVar8 * 2;
    pfVar16 = local_1c + uVar8 * 4;
    *pfVar16 = local_1c[0xc];
    pfVar16[1] = fVar24;
    pfVar16[2] = fVar37;
    pfVar16[3] = fVar41;
    pfVar18 = local_1c;
    if (local_14 == (float *)&DAT_00000004) {
      local_14 = (float *)0x3;
switchD_010b8d87_caseD_19:
                    /* WARNING: This code block may not be properly labeled as switch case */
      fVar61 = fStack_164;
      fVar43 = fStack_168;
      fVar42 = fStack_16c;
      fVar38 = local_190[3];
      fVar40 = local_190[2];
      fVar36 = local_190[1];
      fVar23 = local_190[0];
      local_80._4_4_ = local_170 - local_190[4];
      fStack_78 = fStack_16c - local_190[5];
      local_80._0_4_ = fStack_168 - fStack_178;
      fStack_74 = fStack_164 - fStack_174;
      local_30._4_4_ = local_190[0] - local_170;
      fStack_28 = local_190[1] - fStack_16c;
      local_30._0_4_ = local_190[2] - fStack_168;
      fStack_24 = local_190[3] - fStack_164;
      fVar24 = fStack_78 * (float)local_30._0_4_ - (float)local_80._0_4_ * fStack_28;
      fVar37 = (float)local_80._0_4_ * (float)local_30._4_4_ -
               (float)local_80._4_4_ * (float)local_30._0_4_;
      fVar41 = (float)local_80._4_4_ * fStack_28 - fStack_78 * (float)local_30._4_4_;
      fVar102 = fStack_74 * fStack_24 - fStack_74 * fStack_24;
      local_60 = fStack_28;
      fStack_5c = (float)local_30._0_4_;
      fStack_58 = (float)local_30._4_4_;
      fStack_54 = fStack_24;
      fVar75 = ((local_190[4] - local_190[0]) * (local_150[2] - local_190[2]) -
               (fStack_178 - local_190[2]) * (local_150[0] - local_190[0])) * fVar37;
      fStack_1a4 = ((fStack_174 - local_190[3]) * (afStack_144[0] - local_190[3]) -
                   (fStack_174 - local_190[3]) * (afStack_144[0] - local_190[3])) * fVar102;
      fVar62 = ((local_150[0] - local_190[4]) * fStack_78 -
               (local_150[1] - local_190[5]) * (float)local_80._4_4_) * fVar41 +
               ((local_150[1] - local_190[5]) * (float)local_80._0_4_ -
               (local_150[2] - fStack_178) * fStack_78) * fVar24 +
               ((local_150[2] - fStack_178) * (float)local_80._4_4_ -
               (local_150[0] - local_190[4]) * (float)local_80._0_4_) * fVar37;
      fStack_1ac = ((local_150[0] - local_170) * fStack_28 -
                   (local_150[1] - fStack_16c) * (float)local_30._4_4_) * fVar41 +
                   ((local_150[1] - fStack_16c) * (float)local_30._0_4_ -
                   (local_150[2] - fStack_168) * fStack_28) * fVar24 +
                   ((local_150[2] - fStack_168) * (float)local_30._4_4_ -
                   (local_150[0] - local_170) * (float)local_30._0_4_) * fVar37;
      fStack_1a8 = ((local_190[5] - local_190[1]) * (local_150[0] - local_190[0]) -
                   (local_190[4] - local_190[0]) * (local_150[1] - local_190[1])) * fVar41 +
                   ((fStack_178 - local_190[2]) * (local_150[1] - local_190[1]) -
                   (local_190[5] - local_190[1]) * (local_150[2] - local_190[2])) * fVar24 + fVar75;
      fStack_1a4 = fStack_1a4 + fVar75 + fStack_1a4;
      auVar56._4_4_ = -(uint)(fStack_1ac < fStack_cc);
      auVar56._0_4_ = -(uint)(fVar62 < local_d0);
      auVar56._8_4_ = -(uint)(fStack_1a8 < fStack_c8);
      auVar56._12_4_ = -(uint)(fStack_1a4 < fStack_c4);
      uVar8 = movmskps(uVar9,auVar56);
      uVar8 = uVar8 & 7;
      local_1b0 = fVar62;
      if (uVar8 == 7) {
        fVar75 = (local_190[0] - local_150[0]) * fVar24;
        fVar73 = (local_190[1] - local_150[1]) * fVar37;
        fVar79 = (local_190[2] - local_150[2]) * fVar41;
        auVar70._0_4_ = fVar73 + fVar75 + fVar79;
        auVar70._4_4_ = fVar73 + fVar75 + fVar79;
        auVar70._8_4_ = fVar73 + fVar75 + fVar79;
        auVar70._12_4_ = fVar73 + fVar75 + fVar79;
        iVar12 = movmskps(pfVar18,auVar70);
        if (iVar12 != 0) {
          fVar24 = -fVar24;
          fVar37 = -fVar37;
          fVar41 = -fVar41;
          fVar102 = -fVar102;
          local_190[0] = local_190[4];
          local_190[1] = local_190[5];
          local_190[2] = fStack_178;
          local_190[3] = fStack_174;
          local_190[4] = fVar23;
          local_190[5] = fVar36;
          fStack_178 = fVar40;
          fStack_174 = fVar38;
          local_19c = 1;
          local_1b0 = fStack_1ac;
          fStack_1ac = fVar62;
        }
      }
      if (uVar8 != 7) {
        iVar12 = (int)(char)(&DAT_017dc474)[uVar8];
        local_14 = (float *)0x2;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 8;
          if (2 < iVar12) {
            fVar24 = local_190[0] - local_150[0];
            fVar37 = local_190[1] - local_150[1];
            fVar41 = local_190[2] - local_150[2];
            fVar102 = local_190[3] - afStack_144[0];
            local_1a0 = (float *)0x1;
            bVar6 = false;
            fVar38 = local_190[0];
            fVar42 = local_190[1];
            fVar43 = local_190[2];
            local_18 = (float *)0x1;
            local_14 = (float *)0x1;
            goto LAB_010b9ea0;
          }
          local_190[iVar12 * 4] = local_170;
          local_190[iVar12 * 4 + 1] = fVar42;
          local_190[iVar12 * 4 + 2] = fVar43;
          local_190[iVar12 * 4 + 3] = fVar61;
        }
        else {
          pfVar18 = (float *)(int)(char)(&DAT_017dc47c)[iVar12];
          pfVar16 = (float *)(int)(char)(&DAT_017dc47e)[iVar12];
          fVar24 = local_190[iVar12 * 4];
          fVar37 = local_190[iVar12 * 4 + 1];
          fVar41 = local_190[iVar12 * 4 + 2];
          fVar102 = (local_190[(int)pfVar18 * 4] - fVar24) * (local_150[0] - fVar24);
          fVar23 = (local_190[(int)pfVar18 * 4 + 1] - fVar37) * (local_150[1] - fVar37);
          fVar36 = (local_190[(int)pfVar18 * 4 + 2] - fVar41) * (local_150[2] - fVar41);
          auVar71._0_4_ = fVar23 + fVar102 + fVar36;
          auVar71._4_4_ = fVar23 + fVar102 + fVar36;
          auVar71._8_4_ = fVar23 + fVar102 + fVar36;
          auVar71._12_4_ = fVar23 + fVar102 + fVar36;
          iVar12 = movmskps(1,auVar71);
          if (iVar12 == 0) {
            local_190[(int)pfVar16 * 4] = local_170;
            local_190[(int)pfVar16 * 4 + 1] = fVar42;
            local_190[(int)pfVar16 * 4 + 2] = fVar43;
            local_190[(int)pfVar16 * 4 + 3] = fVar61;
          }
          else {
            fVar102 = (local_190[(int)pfVar16 * 4] - fVar24) * (local_150[0] - fVar24);
            fVar23 = (local_190[(int)pfVar16 * 4 + 1] - fVar37) * (local_150[1] - fVar37);
            fVar36 = (local_190[(int)pfVar16 * 4 + 2] - fVar41) * (local_150[2] - fVar41);
            local_190[(int)pfVar18 * 4] = local_170;
            local_190[(int)pfVar18 * 4 + 1] = fVar42;
            local_190[(int)pfVar18 * 4 + 2] = fVar43;
            local_190[(int)pfVar18 * 4 + 3] = fVar61;
            fVar41 = fStack_174;
            fVar37 = fStack_178;
            fVar24 = local_190[5];
            auVar57._0_4_ = fVar23 + fVar102 + fVar36;
            auVar57._4_4_ = fVar23 + fVar102 + fVar36;
            auVar57._8_4_ = fVar23 + fVar102 + fVar36;
            auVar57._12_4_ = fVar23 + fVar102 + fVar36;
            iVar12 = movmskps(local_190 + (int)pfVar16 * 4,auVar57);
            if (iVar12 != 0) {
              if (pfVar16 == local_14) {
                pfVar16 = pfVar18;
              }
              local_14 = (float *)0x1;
              local_190[(int)pfVar16 * 4] = local_190[4];
              local_190[(int)pfVar16 * 4 + 1] = fVar24;
              local_190[(int)pfVar16 * 4 + 2] = fVar37;
              local_190[(int)pfVar16 * 4 + 3] = fVar41;
              fVar24 = local_190[0] - local_150[0];
              fVar37 = local_190[1] - local_150[1];
              fVar41 = local_190[2] - local_150[2];
              fVar102 = local_190[3] - afStack_144[0];
              local_1a0 = local_18;
              bVar6 = false;
              fVar38 = local_190[0];
              fVar42 = local_190[1];
              fVar43 = local_190[2];
              goto LAB_010b9ea0;
            }
          }
        }
switchD_010b8d87_caseD_11:
        fVar23 = local_190[4] - local_150[0];
        fVar36 = local_190[5] - local_150[1];
        fVar40 = fStack_178 - local_150[2];
        fVar61 = local_190[4] - local_190[0];
        fVar62 = local_190[5] - local_190[1];
        fVar75 = fStack_178 - local_190[2];
        fVar24 = fVar23 * fVar61;
        fVar37 = fVar36 * fVar62;
        fVar41 = fVar40 * fVar75;
        fVar102 = fVar37 + fVar24 + fVar41;
        fVar38 = local_190[0] - local_150[0];
        fVar42 = local_190[1] - local_150[1];
        fVar43 = local_190[2] - local_150[2];
        if (0.0 <= (fVar42 * fVar62 + fVar38 * fVar61 + fVar43 * fVar75) * fVar102) {
          uVar8 = -(uint)(fVar102 < local_d0);
          uVar9 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_cc);
          uVar21 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_c8);
          uVar22 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_c4);
          local_190[0] = (float)((uint)local_190[4] & uVar8 | ~uVar8 & (uint)local_190[0]);
          local_190[1] = (float)((uint)local_190[5] & uVar9 | ~uVar9 & (uint)local_190[1]);
          local_190[2] = (float)((uint)fStack_178 & uVar21 | ~uVar21 & (uint)local_190[2]);
          local_190[3] = (float)((uint)fStack_174 & uVar22 | ~uVar22 & (uint)local_190[3]);
          fVar24 = local_190[0] - local_150[0];
          fVar37 = local_190[1] - local_150[1];
          fVar41 = local_190[2] - local_150[2];
          fVar102 = local_190[3] - afStack_144[0];
          local_14 = (float *)0x1;
          local_1a0 = local_18;
          bVar6 = false;
          fVar38 = local_190[0];
          fVar42 = local_190[1];
          fVar43 = local_190[2];
        }
        else {
          fVar41 = fVar43 * fVar36 - fVar42 * fVar40;
          fVar102 = fVar38 * fVar40 - fVar43 * fVar23;
          fVar37 = fVar42 * fVar23 - fVar38 * fVar36;
          fVar23 = (local_190[3] - afStack_144[0]) * (fStack_174 - afStack_144[0]) -
                   (local_190[3] - afStack_144[0]) * (fStack_174 - afStack_144[0]);
          fVar24 = fVar75 * fVar102 - fVar62 * fVar37;
          fVar37 = fVar61 * fVar37 - fVar75 * fVar41;
          fVar41 = fVar62 * fVar41 - fVar61 * fVar102;
          fVar102 = (fStack_174 - local_190[3]) * fVar23 - (fStack_174 - local_190[3]) * fVar23;
          local_1a0 = local_18;
          bVar6 = false;
          fVar38 = local_190[0];
          fVar42 = local_190[1];
          fVar43 = local_190[2];
        }
        goto LAB_010b9ea0;
      }
LAB_010bad64:
      local_1a0 = local_18;
      bVar6 = false;
      fVar38 = local_190[0];
      fVar42 = local_190[1];
      fVar43 = local_190[2];
    }
    else {
      local_18 = (float *)0x3;
switchD_010b8d87_caseD_b:
      fVar61 = fStack_124;
      fVar43 = fStack_128;
      fVar42 = fStack_12c;
      fVar38 = afStack_144[0];
      fVar40 = local_150[2];
      fVar36 = local_150[1];
      fVar23 = local_150[0];
      fStack_58 = local_150[0] - local_130;
      local_60 = local_150[1] - fStack_12c;
      fStack_5c = local_150[2] - fStack_128;
      fStack_54 = afStack_144[0] - fStack_124;
      local_80._4_4_ = local_130 - afStack_144[1];
      fStack_78 = fStack_12c - afStack_144[2];
      local_80._0_4_ = fStack_128 - afStack_144[3];
      fStack_74 = fStack_124 - fStack_134;
      local_30._4_4_ = fStack_58;
      local_30._0_4_ = fStack_5c;
      fStack_28 = local_60;
      fStack_24 = fStack_54;
      fVar24 = fStack_78 * fStack_5c - (float)local_80._0_4_ * local_60;
      fVar37 = (float)local_80._0_4_ * fStack_58 - (float)local_80._4_4_ * fStack_5c;
      fVar41 = (float)local_80._4_4_ * local_60 - fStack_78 * fStack_58;
      fVar102 = fStack_74 * fStack_54 - fStack_74 * fStack_54;
      fVar73 = local_190[0] - local_150[0];
      fVar79 = local_190[1] - local_150[1];
      fVar25 = local_190[2] - local_150[2];
      fVar75 = (fVar25 * (afStack_144[1] - local_150[0]) - fVar73 * (afStack_144[3] - local_150[2]))
               * fVar37;
      fStack_1a4 = ((local_190[3] - afStack_144[0]) * (fStack_134 - afStack_144[0]) -
                   (local_190[3] - afStack_144[0]) * (fStack_134 - afStack_144[0])) * fVar102;
      fVar62 = ((local_190[0] - afStack_144[1]) * fStack_78 -
               (local_190[1] - afStack_144[2]) * (float)local_80._4_4_) * fVar41 +
               ((local_190[1] - afStack_144[2]) * (float)local_80._0_4_ -
               (local_190[2] - afStack_144[3]) * fStack_78) * fVar24 +
               ((local_190[2] - afStack_144[3]) * (float)local_80._4_4_ -
               (local_190[0] - afStack_144[1]) * (float)local_80._0_4_) * fVar37;
      fStack_1ac = ((local_190[0] - local_130) * local_60 - (local_190[1] - fStack_12c) * fStack_58)
                   * fVar41 +
                   ((local_190[1] - fStack_12c) * fStack_5c - (local_190[2] - fStack_128) * local_60
                   ) * fVar24 +
                   ((local_190[2] - fStack_128) * fStack_58 - (local_190[0] - local_130) * fStack_5c
                   ) * fVar37;
      fStack_1a8 = (fVar73 * (afStack_144[2] - local_150[1]) -
                   fVar79 * (afStack_144[1] - local_150[0])) * fVar41 +
                   (fVar79 * (afStack_144[3] - local_150[2]) -
                   fVar25 * (afStack_144[2] - local_150[1])) * fVar24 + fVar75;
      fStack_1a4 = fStack_1a4 + fVar75 + fStack_1a4;
      auVar58._4_4_ = -(uint)(fStack_1ac < fStack_cc);
      auVar58._0_4_ = -(uint)(fVar62 < local_d0);
      auVar58._8_4_ = -(uint)(fStack_1a8 < fStack_c8);
      auVar58._12_4_ = -(uint)(fStack_1a4 < fStack_c4);
      uVar8 = movmskps(uVar9,auVar58);
      uVar8 = uVar8 & 7;
      local_1b0 = fVar62;
      if (uVar8 == 7) {
        fVar73 = fVar73 * fVar24;
        fVar79 = fVar79 * fVar37;
        fVar25 = fVar25 * fVar41;
        auVar59._0_4_ = fVar79 + fVar73 + fVar25;
        auVar59._4_4_ = fVar79 + fVar73 + fVar25;
        auVar59._8_4_ = fVar79 + fVar73 + fVar25;
        auVar59._12_4_ = fVar79 + fVar73 + fVar25;
        iVar12 = movmskps(pfVar18,auVar59);
        if (iVar12 != 0) {
          fVar24 = -fVar24;
          fVar37 = -fVar37;
          fVar41 = -fVar41;
          fVar102 = -fVar102;
          local_150[0] = afStack_144[1];
          local_150[1] = afStack_144[2];
          local_150[2] = afStack_144[3];
          afStack_144[0] = fStack_134;
          afStack_144[1] = fVar23;
          afStack_144[2] = fVar36;
          afStack_144[3] = fVar40;
          fStack_134 = fVar38;
          local_19c = 1;
          local_1b0 = fStack_1ac;
          fStack_1ac = fVar62;
        }
      }
      if (uVar8 == 7) goto LAB_010bad64;
      iVar12 = (int)(char)(&DAT_017dc474)[uVar8];
      local_18 = (float *)0x2;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 8;
        if (iVar12 < 3) {
          local_150[iVar12 * 4] = local_130;
          local_150[iVar12 * 4 + 1] = fVar42;
          local_150[iVar12 * 4 + 2] = fVar43;
          afStack_144[iVar12 * 4] = fVar61;
          goto switchD_010b8d87_caseD_a;
        }
        fVar24 = local_190[0] - local_150[0];
        fVar37 = local_190[1] - local_150[1];
        fVar41 = local_190[2] - local_150[2];
        fVar102 = local_190[3] - afStack_144[0];
        local_14 = (float *)0x1;
        local_18 = (float *)0x1;
        local_1a0 = (float *)0x1;
        bVar6 = false;
        fVar38 = local_190[0];
        fVar42 = local_190[1];
        fVar43 = local_190[2];
      }
      else {
        pfVar18 = (float *)(int)(char)(&DAT_017dc47c)[iVar12];
        pfVar16 = (float *)(int)(char)(&DAT_017dc47e)[iVar12];
        fVar24 = local_150[iVar12 * 4];
        fVar37 = local_150[iVar12 * 4 + 1];
        fVar41 = local_150[iVar12 * 4 + 2];
        fVar102 = (local_150[(int)pfVar18 * 4] - fVar24) * (local_190[0] - fVar24);
        fVar23 = (local_150[(int)pfVar18 * 4 + 1] - fVar37) * (local_190[1] - fVar37);
        fVar36 = (local_150[(int)pfVar18 * 4 + 2] - fVar41) * (local_190[2] - fVar41);
        auVar72._0_4_ = fVar23 + fVar102 + fVar36;
        auVar72._4_4_ = fVar23 + fVar102 + fVar36;
        auVar72._8_4_ = fVar23 + fVar102 + fVar36;
        auVar72._12_4_ = fVar23 + fVar102 + fVar36;
        iVar12 = movmskps(1,auVar72);
        if (iVar12 == 0) {
          local_150[(int)pfVar16 * 4] = local_130;
          local_150[(int)pfVar16 * 4 + 1] = fVar42;
          local_150[(int)pfVar16 * 4 + 2] = fVar43;
          afStack_144[(int)pfVar16 * 4] = fVar61;
        }
        else {
          fVar102 = (local_150[(int)pfVar16 * 4] - fVar24) * (local_190[0] - fVar24);
          fVar23 = (local_150[(int)pfVar16 * 4 + 1] - fVar37) * (local_190[1] - fVar37);
          fVar36 = (local_150[(int)pfVar16 * 4 + 2] - fVar41) * (local_190[2] - fVar41);
          local_150[(int)pfVar18 * 4] = local_130;
          local_150[(int)pfVar18 * 4 + 1] = fVar42;
          local_150[(int)pfVar18 * 4 + 2] = fVar43;
          afStack_144[(int)pfVar18 * 4] = fVar61;
          fVar41 = fStack_134;
          fVar37 = afStack_144[3];
          fVar24 = afStack_144[2];
          auVar60._0_4_ = fVar23 + fVar102 + fVar36;
          auVar60._4_4_ = fVar23 + fVar102 + fVar36;
          auVar60._8_4_ = fVar23 + fVar102 + fVar36;
          auVar60._12_4_ = fVar23 + fVar102 + fVar36;
          iVar12 = movmskps(local_150 + (int)pfVar16 * 4,auVar60);
          if (iVar12 != 0) {
            if (pfVar16 == local_18) {
              pfVar16 = pfVar18;
            }
            local_18 = (float *)0x1;
            local_150[(int)pfVar16 * 4] = afStack_144[1];
            local_150[(int)pfVar16 * 4 + 1] = fVar24;
            local_150[(int)pfVar16 * 4 + 2] = fVar37;
            afStack_144[(int)pfVar16 * 4] = fVar41;
switchD_010b8d87_caseD_9:
            fVar24 = local_190[0] - local_150[0];
            fVar37 = local_190[1] - local_150[1];
            fVar41 = local_190[2] - local_150[2];
            fVar102 = local_190[3] - afStack_144[0];
            bVar6 = false;
            fVar38 = local_190[0];
            fVar42 = local_190[1];
            fVar43 = local_190[2];
            local_1a0 = local_18;
            goto LAB_010b9ea0;
          }
        }
switchD_010b8d87_caseD_a:
        fVar23 = afStack_144[1] - local_150[0];
        fVar36 = afStack_144[2] - local_150[1];
        fVar40 = afStack_144[3] - local_150[2];
        fVar38 = afStack_144[1] - local_190[0];
        fVar42 = afStack_144[2] - local_190[1];
        fVar43 = afStack_144[3] - local_190[2];
        fVar24 = fVar38 * fVar23;
        fVar37 = fVar42 * fVar36;
        fVar41 = fVar43 * fVar40;
        fVar102 = fVar37 + fVar24 + fVar41;
        fVar61 = local_150[0] - local_190[0];
        fVar62 = local_150[1] - local_190[1];
        fVar75 = local_150[2] - local_190[2];
        if (0.0 <= (fVar62 * fVar36 + fVar61 * fVar23 + fVar75 * fVar40) * fVar102) {
          uVar8 = -(uint)(fVar102 < local_d0);
          uVar9 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_cc);
          uVar21 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_c8);
          uVar22 = -(uint)(fVar37 + fVar24 + fVar41 < fStack_c4);
          local_150[0] = (float)(uVar8 & (uint)afStack_144[1] | ~uVar8 & (uint)local_150[0]);
          local_150[1] = (float)(uVar9 & (uint)afStack_144[2] | ~uVar9 & (uint)local_150[1]);
          local_150[2] = (float)(uVar21 & (uint)afStack_144[3] | ~uVar21 & (uint)local_150[2]);
          afStack_144[0] = (float)(uVar22 & (uint)fStack_134 | ~uVar22 & (uint)afStack_144[0]);
          fVar24 = local_190[0] - local_150[0];
          fVar37 = local_190[1] - local_150[1];
          fVar41 = local_190[2] - local_150[2];
          fVar102 = local_190[3] - afStack_144[0];
          local_18 = (float *)0x1;
          goto LAB_010bad64;
        }
        fVar41 = fVar75 * fVar42 - fVar62 * fVar43;
        fVar102 = fVar61 * fVar43 - fVar75 * fVar38;
        fVar37 = fVar62 * fVar38 - fVar61 * fVar42;
        fVar38 = (afStack_144[0] - local_190[3]) * (fStack_134 - local_190[3]) -
                 (afStack_144[0] - local_190[3]) * (fStack_134 - local_190[3]);
        fVar24 = fVar37 * fVar36 - fVar102 * fVar40;
        fVar37 = fVar41 * fVar40 - fVar37 * fVar23;
        fVar41 = fVar102 * fVar23 - fVar41 * fVar36;
        fVar102 = fVar38 * (fStack_134 - afStack_144[0]) - fVar38 * (fStack_134 - afStack_144[0]);
        local_1a0 = local_18;
        bVar6 = false;
        fVar38 = local_190[0];
        fVar42 = local_190[1];
        fVar43 = local_190[2];
      }
    }
LAB_010b9ea0:
    fVar23 = fVar24 * fVar24;
    fVar36 = fVar37 * fVar37;
    fVar40 = fVar41 * fVar41;
    auVar68._4_4_ = fVar23;
    auVar68._0_4_ = fVar23;
    auVar68._8_4_ = fVar23;
    auVar68._12_4_ = fVar23;
    auVar55._0_4_ = fVar36 + fVar23 + fVar40;
    auVar55._4_4_ = fVar36 + fVar23 + fVar40;
    auVar55._8_4_ = fVar36 + fVar23 + fVar40;
    auVar55._12_4_ = fVar36 + fVar23 + fVar40;
    auVar69 = rsqrtps(auVar68,auVar55);
    fVar23 = auVar69._0_4_;
    fVar36 = auVar69._4_4_;
    fVar40 = auVar69._8_4_;
    fVar61 = auVar69._12_4_;
    local_19c = local_19c | (uint)(((int)local_18 - (int)local_1b4) + (int)local_14);
    fVar23 = (float)(~-(uint)(auVar55._0_4_ <= local_d0) &
                    (uint)((local_5e0 - fVar23 * auVar55._0_4_ * fVar23) * fVar23 * local_600));
    local_a0 = fVar23 * fVar24;
    fStack_9c = (float)(~-(uint)(auVar55._4_4_ <= fStack_cc) &
                       (uint)((fStack_5dc - fVar36 * auVar55._4_4_ * fVar36) * fVar36 * fStack_5fc))
                * fVar37;
    fStack_98 = (float)(~-(uint)(auVar55._8_4_ <= fStack_c8) &
                       (uint)((fStack_5d8 - fVar40 * auVar55._8_4_ * fVar40) * fVar40 * fStack_5f8))
                * fVar41;
    fStack_94 = (float)(~-(uint)(auVar55._12_4_ <= fStack_c4) &
                       (uint)((fStack_5d4 - fVar61 * auVar55._12_4_ * fVar61) * fVar61 * fStack_5f4)
                       ) * fVar102;
    if (((bVar6) ||
        (((fVar42 - local_150[1]) * fVar37 + (fVar38 - local_150[0]) * fVar24 +
         (fVar43 - local_150[2]) * fVar41) * fVar23 < local_340)) ||
       (auVar55._0_4_ < local_340 * local_340)) {
      local_19c = 1;
      if (local_290 == 0) {
        if (4 < (int)((int)local_18 + (int)local_14)) {
          local_14 = (float *)((uint)((int)local_18 < (int)local_14) * 2 + 1);
        }
        local_64 = 6;
      }
      else {
        pvVar14 = TlsGetValue(DAT_01f8fc54);
        puVar3 = *(undefined4 **)((int)pvVar14 + 4);
        puVar1 = (undefined4 *)((int)pvVar14 + 4);
        if (puVar3 < *(undefined4 **)((int)pvVar14 + 0xc)) {
          *puVar3 = "Ttpenetration";
          uVar4 = rdtsc();
          local_dc = (undefined4)uVar4;
          puVar3[1] = local_dc;
          *puVar1 = puVar3 + 3;
        }
        local_64 = FUN_01125220(&local_bc,param_1,param_2,&local_2d0,&local_14,&local_18,local_420,
                                local_220);
        puVar3 = (undefined4 *)*puVar1;
        if (puVar3 < *(undefined4 **)((int)pvVar14 + 0xc)) {
          *puVar3 = &DAT_0164b09c;
          uVar4 = rdtsc();
          puVar3[1] = (int)uVar4;
          *puVar1 = puVar3 + 3;
        }
      }
      goto LAB_010baef9;
    }
    local_1d0 = -local_a0;
    fStack_1cc = -fStack_9c;
    fStack_1c8 = -fStack_98;
    fStack_1c4 = -fStack_94;
    fVar24 = -local_1d0;
    fVar37 = -fStack_1cc;
    fVar41 = -fStack_1c8;
    local_620 = fVar37 * fStack_2cc + fVar24 * local_2d0 + fVar41 * fStack_2c8;
    fStack_61c = fVar37 * fStack_2bc + fVar24 * local_2c0 + fVar41 * fStack_2b8;
    fStack_618 = fVar37 * fStack_2ac + fVar24 * local_2b0 + fVar41 * fStack_2a8;
    fStack_614 = fVar37 * fStack_2a4 + fVar24 * fStack_2ac + fVar41 * fStack_2a4;
    (**(code **)(*param_1 + 8))(&local_1d0,&local_1e0);
    uVar11 = (**(code **)(*param_2 + 8))(&stack0xfffff9e0,&local_210);
    pfVar18 = local_14;
    pfVar16 = local_18;
    fVar102 = fStack_94;
    fVar41 = fStack_98;
    fVar37 = fStack_9c;
    fVar24 = local_a0;
    fVar23 = fStack_20c * local_2c0 + local_210 * local_2d0 + fStack_208 * local_2b0 + local_2a0;
    fVar40 = fStack_20c * fStack_2bc + local_210 * fStack_2cc + fStack_208 * fStack_2ac + fStack_29c
    ;
    fVar42 = fStack_20c * fStack_2b8 + local_210 * fStack_2c8 + fStack_208 * fStack_2a8 + fStack_298
    ;
    fVar61 = (fVar40 - local_150[1]) * fStack_9c;
    fVar62 = (fStack_204 - afStack_144[0]) * fStack_94;
    fVar36 = (fStack_1d8 - fVar42) * fStack_98 +
             (local_1e0 - fVar23) * local_a0 + (fStack_1dc - fVar40) * fStack_9c;
    fVar38 = (fStack_1d8 - local_190[2]) * fStack_1c8 +
             (local_1e0 - local_190[0]) * local_1d0 + (fStack_1dc - local_190[1]) * fStack_1cc;
    fVar43 = (fVar42 - local_150[2]) * fStack_98 + (fVar23 - local_150[0]) * local_a0 + fVar61;
    auVar82._4_4_ = -(uint)(local_340 < fVar38);
    auVar82._0_4_ = -(uint)(local_280 < fVar36);
    auVar82._8_4_ = -(uint)(local_340 < fVar43);
    auVar82._12_4_ = -(uint)(local_340 < fVar62 + fVar61 + fVar62);
    uVar8 = movmskps(uVar11,auVar82);
    iVar12 = (uVar8 & 7) - 1;
    auVar33._4_4_ =
         -(uint)((fStack_1d8 - fStack_168) * fStack_1c8 +
                 (fStack_1dc - fStack_16c) * fStack_1cc + (local_1e0 - local_170) * local_1d0 <
                fStack_33c);
    auVar33._0_4_ =
         -(uint)((fStack_1d8 - fStack_178) * fStack_1c8 +
                 (fStack_1dc - local_190[5]) * fStack_1cc + (local_1e0 - local_190[4]) * local_1d0 <
                local_340);
    auVar33._8_4_ =
         -(uint)((fVar42 - afStack_144[3]) * fStack_98 +
                 (fVar40 - afStack_144[2]) * fStack_9c + (fVar23 - afStack_144[1]) * local_a0 <
                fStack_338);
    auVar33._12_4_ =
         -(uint)((fVar42 - fStack_128) * fStack_98 +
                 (fVar40 - fStack_12c) * fStack_9c + (fVar23 - local_130) * local_a0 < fStack_334);
    switch(iVar12) {
    case 0:
    case 2:
    case 4:
    case 6:
      local_64 = 5;
      local_420[0] = fVar36;
      goto LAB_010baef9;
    case 1:
      goto switchD_010ba141_caseD_1;
    case 3:
switchD_010ba141_caseD_3:
      uVar8 = movmskps(local_14,auVar33);
      if ((*(uint *)(&UNK_017dc464 + (int)local_18 * 4) & uVar8) != 0)
      goto switchD_010ba141_default;
      local_150[(int)local_18 * 4] = fVar23;
      local_150[(int)pfVar16 * 4 + 1] = fVar40;
      local_150[(int)pfVar16 * 4 + 2] = fVar42;
      afStack_144[(int)pfVar16 * 4] = fStack_204;
      local_18 = (float *)((int)local_18 + 1);
      local_19c = 1;
      break;
    case 5:
      if (fVar38 < fVar43) goto switchD_010ba141_caseD_3;
switchD_010ba141_caseD_1:
      uVar8 = movmskps(iVar12,auVar33);
      if ((*(uint *)(&UNK_017dc454 + (int)local_14 * 4) & uVar8) != 0)
      goto switchD_010ba141_default;
      local_190[(int)local_14 * 4] = local_1e0;
      local_190[(int)pfVar18 * 4 + 1] = fStack_1dc;
      local_190[(int)pfVar18 * 4 + 2] = fStack_1d8;
      local_190[(int)pfVar18 * 4 + 3] = fStack_1d4;
      local_14 = (float *)((int)local_14 + 1);
      local_19c = 1;
      break;
    default:
switchD_010ba141_default:
      local_420[0] = (local_190[1] - local_150[1]) * fStack_9c +
                     (local_190[0] - local_150[0]) * local_a0 +
                     (local_190[2] - local_150[2]) * fStack_98;
LAB_010baef9:
      local_31 = fStack_134._0_1_;
      *(undefined1 *)((int)&local_b8 + ((uint)((int)local_14 + -2) & 3)) = fStack_124._0_1_;
      *(undefined1 *)((int)&local_b8 + (int)local_14) = afStack_144[0]._0_1_;
      *(undefined1 *)((int)&local_b8 + 1 + (int)local_14) = local_31;
      if (local_64 < 5) {
        return (float10)local_420[0];
      }
      return (float10)-3.40282e+38;
    }
  } while( true );
}

// 010BB030  hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::vf00  size=93  [run]
undefined4 * __thiscall
hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>
::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_010b0c10();
  FUN_010b0360();
  FUN_010b0ba0();
  FUN_010b02f0();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010BB250  FUN_010bb250  size=107  [run]
void __fastcall FUN_010bb250(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) << 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),(*(uint *)(param_1 + 0xc) & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 010BB2E0  FUN_010bb2e0  size=61  [run]
void __fastcall FUN_010bb2e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BB320  FUN_010bb320  size=103  [run]
undefined4 * __thiscall FUN_010bb320(undefined4 *param_1,byte param_2)

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

// 010BB3F0  FUN_010bb3f0  size=63  [run]
void __fastcall FUN_010bb3f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BB430  FUN_010bb430  size=32  [run]
void __thiscall FUN_010bb430(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  param_2[1] = uVar1 & 3;
  *param_2 = uVar1 & 0xfffffffc;
  return;
}

// 010BB450  FUN_010bb450  size=108  [run]
int * __thiscall FUN_010bb450(int *param_1,uint param_2)

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

// 010BB4C0  FUN_010bb4c0  size=143  [run]
void __fastcall FUN_010bb4c0(int *param_1)

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

// 010BB550  FUN_010bb550  size=159  [run]
int __thiscall FUN_010bb550(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_2;
  uVar3 = (uint)(piVar2[1] * 0x4037bad5 ^ *piVar2 * 0x402e2f4b ^ piVar2[2] * 0x728eebf3) %
          (uint)param_1[1];
  param_1[3] = param_1[3] + 1;
  piVar2 = (int *)(*param_1 + uVar3 * 0xc);
  if (piVar2[1] == (*(uint *)(*param_1 + 8 + uVar3 * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,8);
  }
  puVar1 = (undefined4 *)(*piVar2 + piVar2[1] * 8);
  piVar2[1] = piVar2[1] + 1;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return *piVar2 + -8 + piVar2[1] * 8;
}

// 010BB5F0  FUN_010bb5f0  size=60  [run]
void __fastcall FUN_010bb5f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BB630  FUN_010bb630  size=106  [run]
int * __thiscall FUN_010bb630(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xe00) == 0)) {
    iVar2 = FUN_010abc10();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xe00);
    *(undefined4 *)(iVar2 + 0xe00) = *puVar1;
    puVar1[0x18] = iVar2;
    *(int *)(iVar2 + 0xe0c) = *(int *)(iVar2 + 0xe0c) + 1;
    piVar3 = (int *)FUN_010b0a00(param_2);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = param_1[1];
      if (param_1[1] != 0) {
        *(int **)(param_1[1] + 4) = piVar3;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = (int)piVar3;
    }
    return piVar3;
  }
  return (int *)0x0;
}

// 010BB6A0  FUN_010bb6a0  size=102  [run]
int * __fastcall FUN_010bb6a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xe00) == 0)) {
    iVar2 = FUN_010abc10();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xe00);
    *(int *)(iVar2 + 0xe00) = *piVar1;
    piVar1[0x18] = iVar2;
    *(int *)(iVar2 + 0xe0c) = *(int *)(iVar2 + 0xe0c) + 1;
    piVar1[0x14] = -1;
    piVar1[0x15] = -1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010BB710  FUN_010bb710  size=106  [run]
int * __thiscall FUN_010bb710(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_010abc80();
  }
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0xc00);
    *(undefined4 *)(iVar2 + 0xc00) = *puVar1;
    puVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    piVar3 = (int *)FUN_010b0a80(param_2);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = param_1[1];
      if (param_1[1] != 0) {
        *(int **)(param_1[1] + 4) = piVar3;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = (int)piVar3;
    }
    return piVar3;
  }
  return (int *)0x0;
}

// 010BB780  FUN_010bb780  size=93  [run]
int * __fastcall FUN_010bb780(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc00) == 0)) {
    iVar2 = FUN_010abc80();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xc00);
    *(int *)(iVar2 + 0xc00) = *piVar1;
    piVar1[0x14] = iVar2;
    *(int *)(iVar2 + 0xc0c) = *(int *)(iVar2 + 0xc0c) + 1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010BB7E0  FUN_010bb7e0  size=63  [run]
void __fastcall FUN_010bb7e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BB910  FUN_010bb910  size=577  [run]
int __fastcall FUN_010bb910(int param_1)

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

// 010BBB60  FUN_010bbb60  size=191  [run]
void __thiscall FUN_010bbb60(uint *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar5 = *param_1;
  uVar3 = uVar5;
  uVar4 = uVar1;
  while( true ) {
    *(undefined4 *)(uVar3 + 8 + uVar4 * 4) = *(undefined4 *)(param_2 + 4);
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_01099490(uVar3);
    }
    uVar3 = *(uint *)(uVar3 + 0x14 + (0x12 >> ((char)uVar4 * '\x02' & 0x1fU) & 3U) * 4);
    uVar4 = uVar3 & 3;
    uVar3 = uVar3 & 0xfffffffc;
    if (uVar3 == 0) break;
    if (uVar3 + uVar4 == uVar5 + uVar1) {
      return;
    }
  }
  uVar1 = *(uint *)(uVar5 + 0x14 + uVar1 * 4);
  bVar2 = (byte)uVar1;
  while (uVar1 = uVar1 & 0xfffffffc, uVar1 != 0) {
    uVar5 = 9 >> (bVar2 & 3) * '\x02' & 3;
    *(undefined4 *)(uVar1 + 8 + uVar5 * 4) = *(undefined4 *)(param_2 + 4);
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_01099490(uVar1);
    }
    uVar1 = *(uint *)(uVar1 + 0x14 + uVar5 * 4);
    bVar2 = (byte)uVar1;
  }
  return;
}

// 010BC040  FUN_010bc040  size=266  [run]
void __thiscall FUN_010bc040(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar5 = uVar6;
  uVar4 = uVar2;
  while( true ) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,8);
    }
    puVar1 = (uint *)(*param_2 + param_2[1] * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
    }
    param_2[1] = param_2[1] + 1;
    uVar4 = *(uint *)(uVar4 + 0x14 + (0x12 >> ((char)uVar5 * '\x02' & 0x1fU) & 3U) * 4);
    uVar5 = uVar4 & 3;
    uVar4 = uVar4 & 0xfffffffc;
    if (uVar4 == 0) break;
    if (uVar4 + uVar5 == uVar6 + uVar2) {
      return;
    }
  }
  uVar2 = *(uint *)(uVar2 + 0x14 + uVar6 * 4);
  bVar3 = (byte)uVar2;
  while (uVar2 = uVar2 & 0xfffffffc, uVar2 != 0) {
    uVar6 = 9 >> (bVar3 & 3) * '\x02' & 3;
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,8);
    }
    puVar1 = (uint *)(*param_2 + param_2[1] * 8);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar2;
      puVar1[1] = uVar6;
    }
    param_2[1] = param_2[1] + 1;
    uVar2 = *(uint *)(uVar2 + 0x14 + uVar6 * 4);
    bVar3 = (byte)uVar2;
  }
  return;
}

// 010BC150  FUN_010bc150  size=144  [run]
int __thiscall FUN_010bc150(int *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + (param_2 % (uint)param_1[1]) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x14);
  }
  puVar2 = (undefined4 *)(*piVar1 + piVar1[1] * 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  iVar4 = piVar1[1];
  piVar1[1] = iVar4 + 1;
  puVar3 = (undefined8 *)(*piVar1 + iVar4 * 0x14);
  *puVar3 = *param_3;
  puVar3[1] = param_3[1];
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_3 + 2);
  return *piVar1 + -0x14 + piVar1[1] * 0x14;
}

// 010BC1E0  FUN_010bc1e0  size=319  [run]
void __fastcall FUN_010bc1e0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      return;
    }
    uVar4 = param_1[1];
    do {
      *param_1 = iVar2;
      uVar4 = 9 >> ((char)uVar4 * '\x02' & 0x1fU) & 3;
      param_1[1] = uVar4;
      if (uVar4 == 0) goto LAB_010bc2b4;
      iVar5 = *(int *)(iVar2 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4);
      pfVar3 = (float *)(iVar5 + 0x20);
      iVar6 = 0;
      while( true ) {
        fVar1 = *(float *)((*(int *)(iVar2 + 8 + uVar4 * 4) - iVar5) + (int)pfVar3);
        if (fVar1 < *pfVar3) goto LAB_010bc25a;
        if (*pfVar3 < fVar1) break;
        iVar6 = iVar6 + 1;
        pfVar3 = pfVar3 + 1;
        if (2 < iVar6) goto LAB_010bc25a;
      }
    } while ((*(uint *)(iVar2 + 0x14 + uVar4 * 4) & 0xfffffffc) != 0);
LAB_010bc25a:
    if (uVar4 != 0) {
      iVar6 = 0;
      iVar5 = *(int *)(iVar2 + 8 + (9 >> (char)uVar4 * '\x02' & 3U) * 4);
      pfVar3 = (float *)(iVar5 + 0x20);
      while( true ) {
        fVar1 = *(float *)((*(int *)(iVar2 + 8 + uVar4 * 4) - iVar5) + (int)pfVar3);
        if (fVar1 < *pfVar3) {
          return;
        }
        if (*pfVar3 < fVar1) break;
        iVar6 = iVar6 + 1;
        pfVar3 = pfVar3 + 1;
        if (2 < iVar6) {
          return;
        }
      }
      if ((*(uint *)(iVar2 + 0x14 + param_1[1] * 4) & 0xfffffffc) == 0) {
        return;
      }
    }
LAB_010bc2b4:
    iVar2 = *(int *)*param_1;
    *param_1 = iVar2;
    param_1[1] = 0;
    if (iVar2 == 0) {
      return;
    }
    iVar5 = 0;
    pfVar3 = (float *)(*(int *)(iVar2 + 0xc) + 0x20);
    while( true ) {
      fVar1 = *(float *)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc)) + (int)pfVar3);
      if (fVar1 < *pfVar3) {
        return;
      }
      if (*pfVar3 < fVar1) break;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
      if (2 < iVar5) {
        return;
      }
    }
    if ((*(uint *)(iVar2 + 0x14 + param_1[1] * 4) & 0xfffffffc) == 0) {
      return;
    }
  } while( true );
}

// 010BC320  FUN_010bc320  size=33  [run]
void FUN_010bc320(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_010b7b90(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010BC350  FUN_010bc350  size=61  [run]
void __fastcall FUN_010bc350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BC390  FUN_010bc390  size=27  [run]
void __thiscall FUN_010bc390(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffe;
  return;
}

// 010BC3B0  FUN_010bc3b0  size=63  [run]
void __fastcall FUN_010bc3b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BC480  FUN_010bc480  size=16  [run]
void FUN_010bc480(void)

{
  FUN_010b79e0();
  FUN_010b3210();
  return;
}

// 010BC490  FUN_010bc490  size=16  [run]
void FUN_010bc490(void)

{
  FUN_010b7a50();
  FUN_010b3280();
  return;
}

// 010BC4A0  FUN_010bc4a0  size=235  [run]
void __thiscall FUN_010bc4a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  uVar3 = *(uint *)(iVar2 + 0x14 + iVar1 * 4);
  uVar4 = uVar3 & 0xfffffffc;
  uVar3 = uVar3 & 3;
  uVar6 = 0x12 >> ((char)iVar1 * '\x02' & 0x1fU) & 3;
  uVar8 = 0x12 >> (char)uVar3 * '\x02' & 3;
  *(undefined4 *)(iVar2 + 8 + iVar1 * 4) = *(undefined4 *)(uVar4 + 8 + uVar8 * 4);
  *(undefined4 *)(uVar4 + 8 + uVar3 * 4) = *(undefined4 *)(iVar2 + 8 + uVar6 * 4);
  uVar5 = *(uint *)(iVar2 + 0x14 + uVar6 * 4);
  uVar7 = uVar5 & 3;
  uVar5 = uVar5 & 0xfffffffc;
  *(uint *)(uVar4 + 0x14 + uVar3 * 4) = uVar7 + uVar5;
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x14 + uVar7 * 4) = uVar4 + uVar3;
  }
  uVar3 = *(uint *)(uVar4 + 0x14 + uVar8 * 4);
  uVar5 = uVar3 & 3;
  uVar3 = uVar3 & 0xfffffffc;
  *(uint *)(*param_1 + 0x14 + param_1[1] * 4) = uVar5 + uVar3;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x14 + uVar5 * 4) = *param_1 + param_1[1];
  }
  *(uint *)(iVar2 + 0x14 + uVar6 * 4) = uVar8 + uVar4;
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x14 + uVar8 * 4) = uVar6 + iVar2;
  }
  iVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 0x12 >> ((char)iVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010BC590  FUN_010bc590  size=27  [run]
void __thiscall FUN_010bc590(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 010BC5B0  FUN_010bc5b0  size=183  [run]
int __thiscall FUN_010bc5b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if ((*param_2 == 0) || (param_1 = (int *)*param_1, param_1 == (int *)0x0)) {
    return 0;
  }
  iVar1 = *(int *)(*param_2 + 8 + param_2[1] * 4);
  iVar2 = *(int *)(*param_2 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4);
  piVar5 = (int *)(*param_1 +
                  ((uint)(*(int *)(iVar1 + 0xc) * 0x3442a5 + *(int *)(iVar1 + 8) * 0x21528000 ^
                         *(int *)(iVar2 + 0xc) * 0x1958e9 + *(int *)(iVar2 + 8) * -0x538b8000) %
                  (uint)param_1[1]) * 0xc);
  iVar3 = piVar5[1];
  iVar4 = 0;
  if (0 < iVar3) {
    piVar5 = (int *)*piVar5;
    piVar6 = piVar5;
    do {
      if ((*piVar6 == iVar1) && (piVar6[1] == iVar2)) {
        if (iVar4 == -1) {
          return 0;
        }
        piVar5 = piVar5 + iVar4 * 4;
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        return piVar5[3];
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar4 < iVar3);
  }
  return 0;
}

// 010BC680  FUN_010bc680  size=94  [run]
void FUN_010bc680(int param_1,int param_2)

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

// 010BC6E0  FUN_010bc6e0  size=108  [run]
int * __thiscall FUN_010bc6e0(int *param_1,uint param_2)

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
    uVar3 = param_2 * 8 + 0x7f & 0xffffff80;
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

// 010BC750  FUN_010bc750  size=145  [run]
void __fastcall FUN_010bc750(int *param_1)

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
  uVar4 = iVar2 * 8 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

