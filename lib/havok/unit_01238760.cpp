// lib/havok/unit_01238760.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01238760..0123C9E0, 52 functions

#include "mgrr.h"
#include "hkpBvCompressedMeshShape.h"

// 01238760  FUN_01238760  size=119  [run]
void __fastcall FUN_01238760(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012387E0  hkpBvCompressedMeshShape::vf38  size=11  [run]
int __fastcall hkpBvCompressedMeshShape::vf38(int param_1)

{
  if (param_1 != 0) {
    return param_1 + 0x14;
  }
  return 0;
}

// 012387F0  hkpBvCompressedMeshShape::vf00  size=8  [run]
void hkpBvCompressedMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01238800  FUN_01238800  size=38  [run]
void FUN_01238800(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01238830  FUN_01238830  size=51  [run]
undefined4 * __thiscall FUN_01238830(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_01235c20(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 01238870  FUN_01238870  size=61  [run]
void __fastcall FUN_01238870(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012388B0  hkGeometryUtils::IVertices::~IVertices  size=115  [run]
void __fastcall hkGeometryUtils::IVertices::~IVertices(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01238930  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>  size=187  [run]
undefined4 * __thiscall
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::
BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>
          (undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[7] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  iVar2 = (**(code **)(**(int **)(param_2 + 4) + 4))();
  if ((int)(param_1[4] & 0x3fffffff) < iVar2) {
    iVar1 = (param_1[4] & 0x3fffffff) * 2;
    iVar3 = iVar2;
    if (iVar2 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 2,iVar3,4);
  }
  param_1[3] = iVar2;
  iVar2 = 0;
  if (0 < (int)param_1[3]) {
    do {
      *(int *)(param_1[2] + iVar2 * 4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[3]);
  }
  uVar5 = 0;
  uVar4 = (**(code **)(**(int **)(param_2 + 4) + 8))(0);
  FUN_01446c40(uVar4,uVar5);
  iVar2 = 0;
  if (0 < (int)param_1[6]) {
    do {
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[6]);
  }
  return param_1;
}

// 012389F0  FUN_012389f0  size=14  [run]
void __fastcall FUN_012389f0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x012389fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  return;
}

// 01238A00  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf04  size=13  [run]
void __fastcall
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf04(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01238a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 4))();
  return;
}

// 01238A10  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf08  size=17  [run]
void __fastcall
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf08(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01238a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 0xc))();
  return;
}

// 01238A30  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf00  size=53  [run]
int __thiscall
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::vf00
          (int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkGeometryUtils::IVertices::~IVertices();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01238A70  FUN_01238a70  size=1155  [run]
/* WARNING: Removing unreachable block (ram,0x01238dc3) */
/* WARNING: Removing unreachable block (ram,0x01238d1b) */
/* WARNING: Removing unreachable block (ram,0x01238c76) */
/* WARNING: Removing unreachable block (ram,0x01238bd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01238a70(undefined4 param_1,uint param_2,float *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_2f0 [512];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0 [4];
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
  uint local_98;
  uint local_94;
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
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_18;
  uint local_14;
  
  local_94 = param_2 & 1;
  uVar8 = param_2 >> 1 & 0x7f;
  param_2 = param_2 >> 8;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  local_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  local_98 = uVar8;
  FUN_01234610(param_1);
  if ((param_2 != local_30) || (local_2c != param_2)) {
    iVar6 = param_2 * 0x60 + *(int *)(local_50 + 0x3c);
    local_44 = *(int *)(local_50 + 0x60) + *(int *)(iVar6 + 0x48) * 4;
    local_34 = *(uint *)(iVar6 + 0x4c) & 0xff;
    local_40 = (uint)*(byte *)(iVar6 + 0x5c) * 0x80000 + *(int *)(local_50 + 0x6c);
    local_70 = *(float *)(iVar6 + 0x30);
    fStack_6c = *(float *)(iVar6 + 0x34);
    fStack_68 = *(float *)(iVar6 + 0x38);
    fStack_64 = *(float *)(iVar6 + 0x3c);
    local_48 = *(int *)(local_50 + 0x48) + (*(uint *)(iVar6 + 0x50) >> 8) * 4;
    local_60 = (float)*(undefined8 *)(iVar6 + 0x3c);
    fStack_5c = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x3c) >> 0x20);
    fStack_58 = *(float *)(iVar6 + 0x44);
    fStack_54 = 0.0;
    local_3c = *(int *)(local_50 + 0x54) + (*(uint *)(iVar6 + 0x4c) >> 8) * 2 + local_34 * -2;
    uVar8 = local_98;
  }
  local_14 = (uint)*(byte *)(local_48 + 1 + uVar8 * 4);
  uVar7 = (uint)*(byte *)(local_48 + 2 + uVar8 * 4);
  local_18 = (uint)*(byte *)(local_48 + 3 + uVar8 * 4);
  if ((local_18 == uVar7) && (uVar7 == local_14)) {
    local_f0 = local_b0;
    fStack_ec = fStack_ac;
    fStack_e8 = fStack_a8;
    fStack_e4 = fStack_a4;
    local_e0[0] = local_b0;
    local_e0[1] = fStack_ac;
    local_e0[2] = fStack_a8;
    local_e0[3] = fStack_a4;
    local_d0 = local_b0;
    fStack_cc = fStack_ac;
    fStack_c8 = fStack_a8;
    fStack_c4 = fStack_a4;
    local_c0 = local_b0;
    fStack_bc = fStack_ac;
    fStack_b8 = fStack_a8;
    fStack_b4 = fStack_a4;
    hkErrStream::hkErrStream(local_2f0,0x200);
    FUN_01018d00("Primitve type not implemented");
    (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_2f0,0,0);
    hkBaseObject::hkBaseObject_38();
  }
  else {
    uVar8 = (uint)*(byte *)(local_48 + uVar8 * 4);
    if ((int)uVar8 < (int)local_34) {
      uVar8 = *(uint *)(local_44 + uVar8 * 4);
      local_f0 = (float)(uVar8 & 0x7ff) * local_60 + local_70;
      fStack_ec = (float)(uVar8 >> 0xb & 0x7ff) * fStack_5c + fStack_6c;
      fStack_e8 = (float)(uVar8 >> 0x16) * fStack_58 + fStack_68;
      fStack_e4 = fStack_54 * 0.0 + fStack_64;
    }
    else {
      uVar1 = *(ulonglong *)(local_40 + (uint)*(ushort *)(local_3c + uVar8 * 2) * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar1;
      auVar18._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar18._0_4_ = auVar18._4_4_;
      auVar18._8_4_ = auVar18._4_4_;
      auVar18._12_4_ = auVar18._4_4_;
      auVar10._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar10._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar10._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar10._10_6_ = 0;
      auVar9 = auVar9 & _DAT_017e9c20 | auVar18 & _DAT_017e9c10 | auVar10 & _DAT_017e9c00;
      local_f0 = (float)auVar9._0_4_ * local_80 + local_90;
      fStack_ec = (float)auVar9._4_4_ * fStack_7c + fStack_8c;
      fStack_e8 = (float)auVar9._8_4_ * fStack_78 + fStack_88;
      fStack_e4 = (float)auVar9._12_4_ * fStack_74 + fStack_84;
    }
    if ((int)local_14 < (int)local_34) {
      uVar8 = *(uint *)(local_44 + local_14 * 4);
      local_e0[0] = (float)(uVar8 & 0x7ff) * local_60 + local_70;
      local_e0[1] = (float)(uVar8 >> 0xb & 0x7ff) * fStack_5c + fStack_6c;
      local_e0[2] = (float)(uVar8 >> 0x16) * fStack_58 + fStack_68;
      local_e0[3] = fStack_54 * 0.0 + fStack_64;
    }
    else {
      uVar1 = *(ulonglong *)(local_40 + (uint)*(ushort *)(local_3c + local_14 * 2) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar1;
      auVar19._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar12._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar12._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar12._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar12._10_6_ = 0;
      auVar19._0_4_ = auVar19._4_4_;
      auVar19._8_4_ = auVar19._4_4_;
      auVar19._12_4_ = auVar19._4_4_;
      auVar9 = auVar11 & _DAT_017e9c20 | auVar19 & _DAT_017e9c10 | auVar12 & _DAT_017e9c00;
      local_e0[0] = (float)auVar9._0_4_ * local_80 + local_90;
      local_e0[1] = (float)auVar9._4_4_ * fStack_7c + fStack_8c;
      local_e0[2] = (float)auVar9._8_4_ * fStack_78 + fStack_88;
      local_e0[3] = (float)auVar9._12_4_ * fStack_74 + fStack_84;
    }
    if ((int)uVar7 < (int)local_34) {
      uVar8 = *(uint *)(local_44 + uVar7 * 4);
      local_d0 = (float)(uVar8 & 0x7ff) * local_60 + local_70;
      fStack_cc = (float)(uVar8 >> 0xb & 0x7ff) * fStack_5c + fStack_6c;
      fStack_c8 = (float)(uVar8 >> 0x16) * fStack_58 + fStack_68;
      fStack_c4 = fStack_54 * 0.0 + fStack_64;
    }
    else {
      uVar1 = *(ulonglong *)(local_40 + (uint)*(ushort *)(local_3c + uVar7 * 2) * 8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar1;
      auVar20._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar14._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar14._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar14._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar14._10_6_ = 0;
      auVar20._0_4_ = auVar20._4_4_;
      auVar20._8_4_ = auVar20._4_4_;
      auVar20._12_4_ = auVar20._4_4_;
      auVar9 = auVar13 & _DAT_017e9c20 | auVar20 & _DAT_017e9c10 | auVar14 & _DAT_017e9c00;
      local_d0 = (float)auVar9._0_4_ * local_80 + local_90;
      fStack_cc = (float)auVar9._4_4_ * fStack_7c + fStack_8c;
      fStack_c8 = (float)auVar9._8_4_ * fStack_78 + fStack_88;
      fStack_c4 = (float)auVar9._12_4_ * fStack_74 + fStack_84;
    }
    if ((int)local_18 < (int)local_34) {
      uVar8 = *(uint *)(local_44 + local_18 * 4);
      local_c0 = (float)(uVar8 & 0x7ff) * local_60 + local_70;
      fStack_bc = (float)(uVar8 >> 0xb & 0x7ff) * fStack_5c + fStack_6c;
      fStack_b8 = (float)(uVar8 >> 0x16) * fStack_58 + fStack_68;
      fStack_b4 = fStack_54 * 0.0 + fStack_64;
    }
    else {
      uVar1 = *(ulonglong *)(local_40 + (uint)*(ushort *)(local_3c + local_18 * 2) * 8);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar1;
      auVar17._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar16._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar16._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar16._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar16._10_6_ = 0;
      auVar17._0_4_ = auVar17._4_4_;
      auVar17._8_4_ = auVar17._4_4_;
      auVar17._12_4_ = auVar17._4_4_;
      auVar9 = auVar15 & _DAT_017e9c20 | auVar17 & _DAT_017e9c10 | auVar16 & _DAT_017e9c00;
      local_c0 = (float)auVar9._0_4_ * local_80 + local_90;
      fStack_bc = (float)auVar9._4_4_ * fStack_7c + fStack_8c;
      fStack_b8 = (float)auVar9._8_4_ * fStack_78 + fStack_88;
      fStack_b4 = (float)auVar9._12_4_ * fStack_74 + fStack_84;
    }
  }
  fVar2 = local_e0[local_94 * 4 + 1];
  fVar3 = local_e0[local_94 * 4 + 2];
  fVar4 = local_e0[local_94 * 4 + 3];
  param_3[4] = local_e0[local_94 * 4];
  param_3[5] = fVar2;
  param_3[6] = fVar3;
  param_3[7] = fVar4;
  fVar2 = local_e0[local_94 * 4 + 4];
  fVar3 = local_e0[local_94 * 4 + 5];
  fVar4 = local_e0[local_94 * 4 + 6];
  fVar5 = local_e0[local_94 * 4 + 7];
  *param_3 = local_f0;
  param_3[1] = fStack_ec;
  param_3[2] = fStack_e8;
  param_3[3] = fStack_e4;
  param_3[8] = fVar2;
  param_3[9] = fVar3;
  param_3[10] = fVar4;
  param_3[0xb] = fVar5;
  return;
}

// 01238F00  FUN_01238f00  size=1255  [run]
/* WARNING: Removing unreachable block (ram,0x012392a7) */
/* WARNING: Removing unreachable block (ram,0x012391e1) */
/* WARNING: Removing unreachable block (ram,0x0123911b) */
/* WARNING: Removing unreachable block (ram,0x01239056) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_01238f00(undefined4 param_1,uint param_2,float *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar13;
  float fVar14;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar15;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_2b0 [512];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
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
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_24;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  uVar3 = param_2 >> 1 & 0x7f;
  param_2 = param_2 >> 8;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  local_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_24 = uVar3;
  FUN_01234610(param_1);
  if ((param_2 != local_40) ||
     (fVar16 = local_70, fVar17 = fStack_6c, fVar18 = fStack_68, fVar19 = fStack_64,
     fVar20 = local_80, fVar22 = fStack_7c, fVar23 = fStack_78, fVar24 = fStack_74,
     local_3c != param_2)) {
    iVar2 = param_2 * 0x60 + *(int *)(local_60 + 0x3c);
    local_54 = *(int *)(local_60 + 0x60) + *(int *)(iVar2 + 0x48) * 4;
    local_44 = *(uint *)(iVar2 + 0x4c) & 0xff;
    local_50 = (uint)*(byte *)(iVar2 + 0x5c) * 0x80000 + *(int *)(local_60 + 0x6c);
    local_4c = *(int *)(local_60 + 0x54) + (*(uint *)(iVar2 + 0x4c) >> 8) * 2 + local_44 * -2;
    local_58 = *(int *)(local_60 + 0x48) + (*(uint *)(iVar2 + 0x50) >> 8) * 4;
    uVar3 = local_24;
    fVar16 = (float)*(undefined8 *)(iVar2 + 0x3c);
    fVar17 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x3c) >> 0x20);
    fVar18 = *(float *)(iVar2 + 0x44);
    fVar19 = 0.0;
    fVar20 = *(float *)(iVar2 + 0x30);
    fVar22 = *(float *)(iVar2 + 0x34);
    fVar23 = *(float *)(iVar2 + 0x38);
    fVar24 = *(float *)(iVar2 + 0x3c);
  }
  local_18 = (byte *)(local_58 + 1 + uVar3 * 4);
  local_1c = (byte *)(local_58 + 2 + uVar3 * 4);
  local_14 = (byte *)(local_58 + 3 + uVar3 * 4);
  if ((*local_14 == *local_1c) && (*local_1c == *local_18)) {
    *param_3 = local_b0;
    param_3[1] = fStack_ac;
    param_3[2] = fStack_a8;
    param_3[3] = fStack_a4;
    param_3[4] = local_b0;
    param_3[5] = fStack_ac;
    param_3[6] = fStack_a8;
    param_3[7] = fStack_a4;
    param_3[8] = local_b0;
    param_3[9] = fStack_ac;
    param_3[10] = fStack_a8;
    param_3[0xb] = fStack_a4;
    param_3[0xc] = local_b0;
    param_3[0xd] = fStack_ac;
    param_3[0xe] = fStack_a8;
    param_3[0xf] = fStack_a4;
    hkErrStream::hkErrStream(local_2b0,0x200);
    FUN_01018d00("Primitve type not implemented");
    (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_2b0,0,0);
    hkBaseObject::hkBaseObject_38();
  }
  else {
    uVar3 = (uint)*(byte *)(local_58 + uVar3 * 4);
    if ((int)uVar3 < (int)local_44) {
      uVar3 = *(uint *)(local_54 + uVar3 * 4);
      fVar4 = (float)(uVar3 & 0x7ff) * fVar16 + fVar20;
      fVar13 = (float)(uVar3 >> 0xb & 0x7ff) * fVar17 + fVar22;
      fVar14 = (float)(uVar3 >> 0x16) * fVar18 + fVar23;
      fVar15 = fVar19 * 0.0 + fVar24;
    }
    else {
      uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar3 * 2) * 8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar1;
      auVar25._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar25._0_4_ = auVar25._4_4_;
      auVar25._8_4_ = auVar25._4_4_;
      auVar25._12_4_ = auVar25._4_4_;
      auVar6._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar6._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar6._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar6._10_6_ = 0;
      auVar5 = auVar5 & _DAT_017e9c20 | auVar25 & _DAT_017e9c10 | auVar6 & _DAT_017e9c00;
      fVar4 = (float)auVar5._0_4_ * local_90 + local_a0;
      fVar13 = (float)auVar5._4_4_ * fStack_8c + fStack_9c;
      fVar14 = (float)auVar5._8_4_ * fStack_88 + fStack_98;
      fVar15 = (float)auVar5._12_4_ * fStack_84 + fStack_94;
    }
    *param_3 = fVar4;
    param_3[1] = fVar13;
    param_3[2] = fVar14;
    param_3[3] = fVar15;
    uVar3 = (uint)*local_18;
    if ((int)uVar3 < (int)local_44) {
      uVar3 = *(uint *)(local_54 + uVar3 * 4);
      fVar4 = (float)(uVar3 & 0x7ff) * fVar16 + fVar20;
      fVar13 = (float)(uVar3 >> 0xb & 0x7ff) * fVar17 + fVar22;
      fVar14 = (float)(uVar3 >> 0x16) * fVar18 + fVar23;
      fVar15 = fVar19 * 0.0 + fVar24;
    }
    else {
      uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar3 * 2) * 8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar1;
      auVar26._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar26._0_4_ = auVar26._4_4_;
      auVar26._8_4_ = auVar26._4_4_;
      auVar26._12_4_ = auVar26._4_4_;
      auVar8._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar8._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar8._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar8._10_6_ = 0;
      auVar5 = auVar7 & _DAT_017e9c20 | auVar26 & _DAT_017e9c10 | auVar8 & _DAT_017e9c00;
      fVar4 = (float)auVar5._0_4_ * local_90 + local_a0;
      fVar13 = (float)auVar5._4_4_ * fStack_8c + fStack_9c;
      fVar14 = (float)auVar5._8_4_ * fStack_88 + fStack_98;
      fVar15 = (float)auVar5._12_4_ * fStack_84 + fStack_94;
    }
    param_3[4] = fVar4;
    param_3[5] = fVar13;
    param_3[6] = fVar14;
    param_3[7] = fVar15;
    uVar3 = (uint)*local_1c;
    if ((int)uVar3 < (int)local_44) {
      uVar3 = *(uint *)(local_54 + uVar3 * 4);
      fVar4 = (float)(uVar3 & 0x7ff) * fVar16 + fVar20;
      fVar13 = (float)(uVar3 >> 0xb & 0x7ff) * fVar17 + fVar22;
      fVar14 = (float)(uVar3 >> 0x16) * fVar18 + fVar23;
      fVar15 = fVar19 * 0.0 + fVar24;
    }
    else {
      uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar3 * 2) * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar1;
      auVar27._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar27._0_4_ = auVar27._4_4_;
      auVar27._8_4_ = auVar27._4_4_;
      auVar27._12_4_ = auVar27._4_4_;
      auVar10._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar10._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar10._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar10._10_6_ = 0;
      auVar5 = auVar9 & _DAT_017e9c20 | auVar27 & _DAT_017e9c10 | auVar10 & _DAT_017e9c00;
      fVar4 = (float)auVar5._0_4_ * local_90 + local_a0;
      fVar13 = (float)auVar5._4_4_ * fStack_8c + fStack_9c;
      fVar14 = (float)auVar5._8_4_ * fStack_88 + fStack_98;
      fVar15 = (float)auVar5._12_4_ * fStack_84 + fStack_94;
    }
    param_3[8] = fVar4;
    param_3[9] = fVar13;
    param_3[10] = fVar14;
    param_3[0xb] = fVar15;
    uVar3 = (uint)*local_14;
    if ((int)uVar3 < (int)local_44) {
      uVar3 = *(uint *)(local_54 + uVar3 * 4);
      param_3[0xc] = (float)(uVar3 & 0x7ff) * fVar16 + fVar20;
      param_3[0xd] = (float)(uVar3 >> 0xb & 0x7ff) * fVar17 + fVar22;
      param_3[0xe] = (float)(uVar3 >> 0x16) * fVar18 + fVar23;
      param_3[0xf] = fVar19 * 0.0 + fVar24;
    }
    else {
      uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar3 * 2) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar1;
      auVar21._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar21._0_4_ = auVar21._4_4_;
      auVar21._8_4_ = auVar21._4_4_;
      auVar21._12_4_ = auVar21._4_4_;
      auVar12._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar12._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar12._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar12._10_6_ = 0;
      auVar5 = auVar11 & _DAT_017e9c20 | auVar21 & _DAT_017e9c10 | auVar12 & _DAT_017e9c00;
      param_3[0xc] = (float)auVar5._0_4_ * local_90 + local_a0;
      param_3[0xd] = (float)auVar5._4_4_ * fStack_8c + fStack_9c;
      param_3[0xe] = (float)auVar5._8_4_ * fStack_88 + fStack_98;
      param_3[0xf] = (float)auVar5._12_4_ * fStack_84 + fStack_94;
    }
  }
  if (*local_14 != *local_1c) {
    return 2;
  }
  return *(undefined4 *)(&DAT_017dc4c8 + ((uint)(*local_1c == *local_18) * 2 + 1) * 4);
}

// 012393F0  FUN_012393f0  size=64  [run]
void __fastcall FUN_012393f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01239430  FUN_01239430  size=238  [run]
undefined4 * __thiscall FUN_01239430(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_01234610(param_2);
  if ((*(int *)(param_2 + 0x40) != 0) && (*(undefined1 *)(param_1 + 0x1f) = 1, param_1[0x18] != 0))
  {
    iVar1 = param_1[0x10];
    iVar2 = *(int *)(iVar1 + 0x3c);
    param_1[0x11] = iVar2;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x13] = *(int *)(iVar1 + 0x60) + *(int *)(iVar2 + 0x48) * 4;
    param_1[0x14] = (uint)*(byte *)(iVar2 + 0x5c) * 0x80000 + *(int *)(iVar1 + 0x6c);
    param_1[0x15] = *(int *)(iVar1 + 0x54) + (*(uint *)(iVar2 + 0x4c) >> 8) * 2;
    param_1[0x16] = *(int *)(iVar1 + 0x78) + (*(uint *)(iVar2 + 0x54) >> 8) * 8;
    param_1[0x17] = *(uint *)(iVar2 + 0x4c) & 0xff;
    param_1[0x12] = *(int *)(iVar1 + 0x48) + (*(uint *)(iVar2 + 0x50) >> 8) * 4;
    uVar3 = *(undefined4 *)(iVar2 + 0x34);
    uVar4 = *(undefined4 *)(iVar2 + 0x38);
    uVar5 = *(undefined4 *)(iVar2 + 0x3c);
    param_1[8] = *(undefined4 *)(iVar2 + 0x30);
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    uVar3 = *(undefined4 *)(iVar2 + 0x40);
    uVar4 = *(undefined4 *)(iVar2 + 0x44);
    param_1[0xc] = *(undefined4 *)(iVar2 + 0x3c);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = 0;
    param_1[0xc] = param_1[0xc];
    param_1[0xd] = param_1[0xd];
    param_1[0xe] = param_1[0xe];
    param_1[0xf] = 0;
    param_1[0x15] = param_1[0x15] + (*(uint *)(param_1[0x11] + 0x4c) & 0xff) * -2;
  }
  return param_1;
}

// 01239520  FUN_01239520  size=344  [run]
undefined4 __fastcall FUN_01239520(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x78) + 1;
  iVar6 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x74) * 4;
  *(int *)(param_1 + 0x78) = iVar5;
  if (*(char *)(iVar6 + 3) == *(char *)(iVar6 + 2)) {
    iVar6 = (uint)(*(char *)(iVar6 + 2) == *(char *)(iVar6 + 1)) * 2 + 1;
  }
  else {
    iVar6 = 2;
  }
  if (iVar5 < *(int *)(&DAT_017dc4c8 + iVar6 * 4)) {
    return 1;
  }
  iVar6 = *(int *)(param_1 + 0x74) + 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x74) = iVar6;
  if (iVar6 < (int)(*(uint *)(*(int *)(param_1 + 0x44) + 0x50) & 0xff)) {
    return 2;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  iVar6 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(int *)(iVar5 + 0x40) <= iVar6) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0;
  }
  if ((iVar6 != *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != iVar6)) {
    iVar4 = iVar6 * 0x60 + *(int *)(iVar5 + 0x3c);
    *(int *)(param_1 + 100) = iVar6;
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x44) = iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(iVar5 + 0x60) + *(int *)(iVar4 + 0x48) * 4;
    *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar4 + 0x5c) * 0x80000 + *(int *)(iVar5 + 0x6c);
    *(uint *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (*(uint *)(iVar4 + 0x4c) >> 8) * 2;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar5 + 0x78) + (*(uint *)(iVar4 + 0x54) >> 8) * 8;
    *(uint *)(param_1 + 0x5c) = *(uint *)(iVar4 + 0x4c) & 0xff;
    *(uint *)(param_1 + 0x48) = *(int *)(iVar5 + 0x48) + (*(uint *)(iVar4 + 0x50) >> 8) * 4;
    uVar1 = *(undefined4 *)(iVar4 + 0x34);
    uVar2 = *(undefined4 *)(iVar4 + 0x38);
    uVar3 = *(undefined4 *)(iVar4 + 0x3c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar1 = *(undefined4 *)(iVar4 + 0x40);
    uVar2 = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (*(uint *)(*(int *)(param_1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 3;
}

// 01239680  FUN_01239680  size=345  [run]
void __thiscall FUN_01239680(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x74) * 4;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x78) = iVar5;
    if (*(char *)(iVar4 + 3) == *(char *)(iVar4 + 2)) {
      iVar6 = (uint)(*(char *)(iVar4 + 2) == *(char *)(iVar4 + 1)) * 2 + 1;
    }
    else {
      iVar6 = 2;
    }
    if (*(int *)(&DAT_017dc4c8 + iVar6 * 4) <= iVar5) break;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      *param_2 = 0;
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 0x74) + 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x74) = iVar4;
  if ((int)(*(uint *)(*(int *)(param_1 + 0x44) + 0x50) & 0xff) <= iVar4) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    iVar4 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar4 < *(int *)(iVar5 + 0x40)) {
      if ((iVar4 != *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != iVar4)) {
        iVar6 = iVar4 * 0x60 + *(int *)(iVar5 + 0x3c);
        *(int *)(param_1 + 100) = iVar4;
        *(int *)(param_1 + 0x44) = iVar6;
        *(int *)(param_1 + 0x60) = iVar4;
        *(int *)(param_1 + 0x4c) = *(int *)(iVar5 + 0x60) + *(int *)(iVar6 + 0x48) * 4;
        *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar6 + 0x5c) * 0x80000 + *(int *)(iVar5 + 0x6c)
        ;
        *(uint *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (*(uint *)(iVar6 + 0x4c) >> 8) * 2;
        *(uint *)(param_1 + 0x58) = *(int *)(iVar5 + 0x78) + (*(uint *)(iVar6 + 0x54) >> 8) * 8;
        *(uint *)(param_1 + 0x5c) = *(uint *)(iVar6 + 0x4c) & 0xff;
        *(uint *)(param_1 + 0x48) = *(int *)(iVar5 + 0x48) + (*(uint *)(iVar6 + 0x50) >> 8) * 4;
        uVar1 = *(undefined4 *)(iVar6 + 0x34);
        uVar2 = *(undefined4 *)(iVar6 + 0x38);
        uVar3 = *(undefined4 *)(iVar6 + 0x3c);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar6 + 0x30);
        *(undefined4 *)(param_1 + 0x24) = uVar1;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        uVar1 = *(undefined4 *)(iVar6 + 0x40);
        uVar2 = *(undefined4 *)(iVar6 + 0x44);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x3c);
        *(undefined4 *)(param_1 + 0x34) = uVar1;
        *(undefined4 *)(param_1 + 0x38) = uVar2;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + (*(uint *)(*(int *)(param_1 + 0x44) + 0x4c) & 0xff) * -2;
        *param_2 = 1;
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
  }
  *param_2 = 1;
  return;
}

// 012397E0  FUN_012397e0  size=12  [run]
void FUN_012397e0(void)

{
  hkpSingleShapeContainer::hkpSingleShapeContainer_11();
  return;
}

// 012397F0  FUN_012397f0  size=56  [run]
void __thiscall FUN_012397f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01239830  FUN_01239830  size=49  [run]
int __fastcall FUN_01239830(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01239870  FUN_01239870  size=118  [run]
int * __thiscall FUN_01239870(int *param_1,uint param_2)

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

// 012398F0  FUN_012398f0  size=143  [run]
void __fastcall FUN_012398f0(int *param_1)

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

// 01239980  FUN_01239980  size=64  [run]
void __fastcall FUN_01239980(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012399C0  FUN_012399c0  size=40  [run]
void FUN_012399c0(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_01236b40(param_1,0,param_2 + -1,0);
  }
  return;
}

// 012399F0  FUN_012399f0  size=40  [run]
void FUN_012399f0(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_01236c40(param_1,0,param_2 + -1,0);
  }
  return;
}

// 01239A20  FUN_01239a20  size=253  [run]
int __thiscall FUN_01239a20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (param_2 != 0) {
    iVar1 = *param_1;
    iVar4 = *(int *)(iVar1 + 0x20 + param_2 * 0x30);
    for (iVar5 = iVar4; iVar5 != 0; iVar5 = *(int *)(iVar1 + 0x20 + iVar5 * 0x30)) {
      iVar2 = iVar2 + 1;
    }
    iVar5 = *(int *)(iVar1 + 0x24 + param_2 * 0x30);
    if (iVar5 != 0) {
      do {
        iVar4 = *(int *)(iVar1 + 0x24 + iVar5 * 0x30);
        if (iVar4 == 0) {
          iVar3 = 0;
          for (iVar4 = *(int *)(iVar1 + 0x20 + iVar5 * 0x30); iVar4 != 0;
              iVar4 = *(int *)(iVar1 + 0x20 + iVar4 * 0x30)) {
            iVar3 = iVar3 + 1;
          }
          if (local_8 <= iVar3 - iVar2) {
            local_8 = iVar3 - iVar2;
          }
          iVar4 = *(int *)(iVar1 + 0x20 + iVar5 * 0x30);
          while ((iVar3 = iVar4, iVar3 != param_2 &&
                 (*(int *)(iVar1 + 0x28 + iVar3 * 0x30) == iVar5))) {
            iVar5 = iVar3;
            iVar4 = *(int *)(iVar1 + 0x20 + iVar3 * 0x30);
          }
          iVar4 = iVar5;
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar1 + 0x28 + iVar3 * 0x30);
          }
          if ((iVar3 == param_2) && (iVar4 == iVar5)) {
            iVar4 = 0;
          }
        }
        iVar5 = iVar4;
      } while (iVar4 != 0);
      return local_8;
    }
    iVar5 = 0;
    for (; iVar4 != 0; iVar4 = *(int *)(iVar1 + 0x20 + iVar4 * 0x30)) {
      iVar5 = iVar5 + 1;
    }
    iVar2 = iVar5 - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

// 01239B20  FUN_01239b20  size=170  [run]
int __thiscall FUN_01239b20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (param_2 != 0) {
    iVar2 = *param_1;
    iVar3 = *(int *)(iVar2 + 0x24 + param_2 * 0x30);
    if (iVar3 != 0) {
      do {
        iVar4 = *(int *)(iVar2 + 0x24 + iVar3 * 0x30);
        local_8 = local_8 + (uint)(iVar4 == 0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar2 + 0x20 + iVar3 * 0x30);
          while ((iVar1 = iVar4, iVar1 != param_2 &&
                 (*(int *)(iVar2 + 0x28 + iVar1 * 0x30) == iVar3))) {
            iVar3 = iVar1;
            iVar4 = *(int *)(iVar2 + 0x20 + iVar1 * 0x30);
          }
          iVar4 = iVar3;
          if (iVar1 != 0) {
            iVar4 = *(int *)(iVar2 + 0x28 + iVar1 * 0x30);
          }
          if ((iVar1 == param_2) && (iVar4 == iVar3)) {
            iVar4 = 0;
          }
        }
        iVar3 = iVar4;
      } while (iVar4 != 0);
      return local_8;
    }
    iVar2 = 1;
  }
  return iVar2;
}

// 01239BD0  FUN_01239bd0  size=64  [run]
void __fastcall FUN_01239bd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01239C10  FUN_01239c10  size=63  [run]
void __fastcall FUN_01239c10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01239C50  FUN_01239c50  size=63  [run]
void __fastcall FUN_01239c50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x230);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01239C90  FUN_01239c90  size=210  [run]
void __thiscall FUN_01239c90(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar3 = *param_1;
    iVar5 = *(int *)(iVar3 + 0x24 + param_2 * 0x30);
    if (iVar5 == 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x28 + param_2 * 0x30);
      iVar5 = *param_3;
      iVar3 = *(int *)(iVar5 + 0x200);
      *(int *)(iVar5 + 0x200) = iVar3 + 1;
      *(undefined4 *)(iVar5 + iVar3 * 4) = uVar2;
      return;
    }
    do {
      if (*(int *)(iVar3 + 0x24 + iVar5 * 0x30) == 0) {
        iVar4 = *param_3;
        iVar1 = *(int *)(iVar4 + 0x200);
        uVar2 = *(undefined4 *)(iVar3 + 0x28 + iVar5 * 0x30);
        *(int *)(iVar4 + 0x200) = iVar1 + 1;
        *(undefined4 *)(iVar4 + iVar1 * 4) = uVar2;
      }
      iVar3 = *param_1;
      iVar4 = *(int *)(iVar3 + 0x24 + iVar5 * 0x30);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar3 + 0x20 + iVar5 * 0x30);
        while ((iVar1 = iVar4, iVar1 != param_2 && (*(int *)(iVar3 + 0x28 + iVar1 * 0x30) == iVar5))
              ) {
          iVar5 = iVar1;
          iVar4 = *(int *)(iVar3 + 0x20 + iVar1 * 0x30);
        }
        iVar4 = iVar5;
        if (iVar1 != 0) {
          iVar4 = *(int *)(iVar3 + 0x28 + iVar1 * 0x30);
        }
        if ((iVar1 == param_2) && (iVar4 == iVar5)) {
          iVar4 = 0;
        }
      }
      iVar5 = iVar4;
    } while (iVar4 != 0);
  }
  return;
}

// 01239D70  FUN_01239d70  size=170  [run]
void __thiscall FUN_01239d70(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *param_1;
    iVar3 = *(int *)(iVar4 + 0x24 + param_2 * 0x30);
    if (iVar3 == 0) {
      iVar3 = *param_3;
      *param_3 = iVar3 + 1;
      *(int *)(*param_1 + 0x28 + param_2 * 0x30) = iVar3;
      return;
    }
    do {
      if (*(int *)(iVar4 + 0x24 + iVar3 * 0x30) == 0) {
        iVar4 = *param_3;
        *param_3 = iVar4 + 1;
        *(int *)(*param_1 + 0x28 + iVar3 * 0x30) = iVar4;
      }
      iVar4 = *param_1;
      iVar2 = *(int *)(iVar4 + 0x24 + iVar3 * 0x30);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar4 + 0x20 + iVar3 * 0x30);
        while ((iVar1 = iVar2, iVar1 != param_2 && (*(int *)(iVar4 + 0x28 + iVar1 * 0x30) == iVar3))
              ) {
          iVar3 = iVar1;
          iVar2 = *(int *)(iVar4 + 0x20 + iVar1 * 0x30);
        }
        iVar2 = iVar3;
        if (iVar1 != 0) {
          iVar2 = *(int *)(iVar4 + 0x28 + iVar1 * 0x30);
        }
        if ((iVar1 == param_2) && (iVar2 == iVar3)) {
          iVar2 = 0;
        }
      }
      iVar3 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}

// 01239E20  FUN_01239e20  size=721  [run]
float * __thiscall FUN_01239e20(int *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
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
  float fVar23;
  undefined1 in_XMM5 [16];
  float fVar24;
  float fVar25;
  float local_1c;
  int local_18;
  
  local_1c = (float)param_1[6];
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  if (local_1c != 0.0) {
    iVar3 = *param_1;
    do {
      iVar4 = *(int *)((int)local_1c * 0x30 + 0x24 + iVar3);
      pfVar11 = (float *)((int)local_1c * 0x30 + iVar3);
      if (iVar4 != 0) {
        fVar12 = (pfVar11[5] - pfVar11[1]) * (pfVar11[4] - *pfVar11);
        fVar14 = (pfVar11[6] - pfVar11[2]) * (pfVar11[5] - pfVar11[1]);
        fVar17 = (pfVar11[4] - *pfVar11) * (pfVar11[6] - pfVar11[2]);
        fVar20 = fVar14 + fVar12 + fVar17;
        fVar21 = fVar14 + fVar12 + fVar17;
        fVar22 = fVar14 + fVar12 + fVar17;
        fVar17 = fVar14 + fVar12 + fVar17;
        if (1e-07 < fVar20) {
          pfVar2 = (float *)(iVar3 + 0x10 + iVar4 * 0x30);
          pfVar1 = (float *)(iVar3 + iVar4 * 0x30);
          fVar12 = (pfVar2[1] - pfVar1[1]) * (*pfVar2 - *pfVar1);
          fVar15 = (pfVar2[2] - pfVar1[2]) * (pfVar2[1] - pfVar1[1]);
          fVar18 = (*pfVar2 - *pfVar1) * (pfVar2[2] - pfVar1[2]);
          pfVar2 = (float *)(iVar3 + 0x10 + (int)pfVar11[10] * 0x30);
          pfVar1 = (float *)(iVar3 + (int)pfVar11[10] * 0x30);
          fVar14 = (pfVar2[1] - pfVar1[1]) * (*pfVar2 - *pfVar1);
          fVar16 = (pfVar2[2] - pfVar1[2]) * (pfVar2[1] - pfVar1[1]);
          fVar19 = (*pfVar2 - *pfVar1) * (pfVar2[2] - pfVar1[2]);
          iVar7 = *(int *)(iVar3 + 0x24 + iVar4 * 0x30);
          local_18 = 0;
          if (iVar7 == 0) {
            local_18 = 1;
          }
          else {
            do {
              iVar8 = *(int *)(iVar7 * 0x30 + 0x24 + iVar3);
              local_18 = local_18 + (uint)(iVar8 == 0);
              if (iVar8 == 0) {
                iVar8 = *(int *)(iVar7 * 0x30 + iVar3 + 0x20);
                while ((iVar6 = iVar8, iVar6 != iVar4 &&
                       (*(int *)(iVar3 + 0x28 + iVar6 * 0x30) == iVar7))) {
                  iVar7 = iVar6;
                  iVar8 = *(int *)(iVar3 + 0x20 + iVar6 * 0x30);
                }
                iVar8 = iVar7;
                if (iVar6 != 0) {
                  iVar8 = *(int *)(iVar3 + 0x28 + iVar6 * 0x30);
                }
                if ((iVar6 == iVar4) && (iVar8 == iVar7)) {
                  iVar8 = 0;
                }
              }
              iVar7 = iVar8;
            } while (iVar8 != 0);
          }
          fVar23 = pfVar11[10];
          fVar13 = (float)local_18;
          local_18 = 0;
          if (fVar23 != 0.0) {
            fVar9 = *(float *)(iVar3 + 0x24 + (int)fVar23 * 0x30);
            if (fVar9 == 0.0) {
              local_18 = 1;
            }
            else {
              do {
                fVar10 = *(float *)((int)fVar9 * 0x30 + 0x24 + iVar3);
                local_18 = local_18 + (uint)(fVar10 == 0.0);
                if (fVar10 == 0.0) {
                  fVar10 = *(float *)((int)fVar9 * 0x30 + iVar3 + 0x20);
                  while ((fVar24 = fVar10, fVar24 != fVar23 &&
                         (*(float *)(iVar3 + 0x28 + (int)fVar24 * 0x30) == fVar9))) {
                    fVar9 = fVar24;
                    fVar10 = *(float *)(iVar3 + 0x20 + (int)fVar24 * 0x30);
                  }
                  fVar10 = fVar9;
                  if (fVar24 != 0.0) {
                    fVar10 = *(float *)(iVar3 + 0x28 + (int)fVar24 * 0x30);
                  }
                  if ((fVar24 == fVar23) && (fVar10 == fVar9)) {
                    fVar10 = 0.0;
                  }
                }
                fVar9 = fVar10;
              } while (fVar10 != 0.0);
            }
          }
          auVar5._4_4_ = fVar21;
          auVar5._0_4_ = fVar20;
          auVar5._8_4_ = fVar22;
          auVar5._12_4_ = fVar17;
          in_XMM5 = rcpps(in_XMM5,auVar5);
          fVar23 = in_XMM5._0_4_;
          fVar9 = in_XMM5._4_4_;
          fVar10 = in_XMM5._8_4_;
          fVar24 = in_XMM5._12_4_;
          fVar25 = (float)local_18;
          *param_2 = (2.0 - fVar23 * fVar20) * fVar23 * (fVar15 + fVar12 + fVar18) * fVar13 +
                     *param_2 +
                     (2.0 - fVar23 * fVar20) * fVar23 * (fVar16 + fVar14 + fVar19) * fVar25;
          param_2[1] = (2.0 - fVar9 * fVar21) * fVar9 * (fVar15 + fVar12 + fVar18) * fVar13 +
                       param_2[1] +
                       (2.0 - fVar9 * fVar21) * fVar9 * (fVar16 + fVar14 + fVar19) * fVar25;
          param_2[2] = (2.0 - fVar10 * fVar22) * fVar10 * (fVar15 + fVar12 + fVar18) * fVar13 +
                       param_2[2] +
                       (2.0 - fVar10 * fVar22) * fVar10 * (fVar16 + fVar14 + fVar19) * fVar25;
          param_2[3] = (2.0 - fVar24 * fVar17) * fVar24 * (fVar15 + fVar12 + fVar18) * fVar13 +
                       param_2[3] +
                       (2.0 - fVar24 * fVar17) * fVar24 * (fVar16 + fVar14 + fVar19) * fVar25;
        }
      }
      fVar12 = pfVar11[9];
      if (fVar12 == 0.0) {
        fVar12 = pfVar11[8];
        while (fVar14 = fVar12, fVar12 = local_1c, fVar14 != 0.0) {
          if (*(float *)(iVar3 + 0x28 + (int)fVar14 * 0x30) != local_1c) {
            if (fVar14 != 0.0) {
              fVar12 = *(float *)(iVar3 + 0x28 + (int)fVar14 * 0x30);
            }
            break;
          }
          local_1c = fVar14;
          fVar12 = *(float *)(iVar3 + 0x20 + (int)fVar14 * 0x30);
        }
        if ((fVar14 == 0.0) && (fVar12 == local_1c)) {
          fVar12 = 0.0;
        }
      }
      local_1c = fVar12;
    } while (fVar12 != 0.0);
  }
  return param_2;
}

// 0123A100  FUN_0123a100  size=247  [run]
void __thiscall FUN_0123a100(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
    }
    *(int *)(*param_3 + param_3[1] * 4) = param_2;
    param_3[1] = param_3[1] + 1;
    iVar4 = *(int *)(*param_1 + 0x24 + param_2 * 0x30);
    if (iVar4 != 0) {
joined_r0x0123a15d:
      iVar3 = iVar4;
      if (iVar3 != 0) {
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(int *)(*param_3 + param_3[1] * 4) = iVar3;
        param_3[1] = param_3[1] + 1;
        if (iVar3 != 0) goto code_r0x0123a192;
        goto LAB_0123a1e2;
      }
    }
  }
  return;
code_r0x0123a192:
  iVar1 = *param_1;
  iVar4 = *(int *)(iVar1 + 0x24 + iVar3 * 0x30);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar1 + 0x20 + iVar3 * 0x30);
    while ((iVar2 = iVar4, iVar2 != param_2 && (*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == iVar3))) {
      iVar3 = iVar2;
      iVar4 = *(int *)(iVar1 + 0x20 + iVar2 * 0x30);
    }
    iVar4 = iVar3;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar1 + 0x28 + iVar2 * 0x30);
    }
    if ((iVar2 == param_2) && (iVar4 == iVar3)) {
LAB_0123a1e2:
      iVar4 = 0;
    }
  }
  goto joined_r0x0123a15d;
}

// 0123A550  FUN_0123a550  size=100  [run]
void FUN_0123a550(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x28);
    if (iVar1 != *(int *)*param_1) {
      piVar2 = (int *)((int *)*param_1)[1];
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      *(int *)(*piVar2 + piVar2[1] * 4) = iVar1;
      piVar2[1] = piVar2[1] + 1;
    }
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 0123A5C0  FUN_0123a5c0  size=106  [run]
int __thiscall FUN_0123a5c0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) << 4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 0123A670  FUN_0123a670  size=188  [run]
int * __thiscall FUN_0123a670(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3;
  *param_1 = param_3;
  param_3 = 0;
  if (iVar3 != 0) {
    iVar1 = *param_2;
    iVar4 = *(int *)(iVar1 + 0x24 + iVar3 * 0x30);
    if (iVar4 == 0) {
      param_3 = 1;
    }
    else {
      do {
        iVar5 = *(int *)(iVar1 + 0x24 + iVar4 * 0x30);
        param_3 = param_3 + (uint)(iVar5 == 0);
        if (iVar5 == 0) {
          iVar5 = *(int *)(iVar1 + iVar4 * 0x30 + 0x20);
          while ((iVar2 = iVar5, iVar2 != iVar3 && (*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == iVar4))
                ) {
            iVar4 = iVar2;
            iVar5 = *(int *)(iVar1 + 0x20 + iVar2 * 0x30);
          }
          iVar5 = iVar4;
          if (iVar2 != 0) {
            iVar5 = *(int *)(iVar1 + 0x28 + iVar2 * 0x30);
          }
          if ((iVar2 == iVar3) && (iVar5 == iVar4)) {
            iVar5 = 0;
          }
        }
        iVar4 = iVar5;
      } while (iVar5 != 0);
    }
  }
  param_1[1] = param_3;
  param_1[2] = -1;
  return param_1;
}

// 0123A730  FUN_0123a730  size=626  [run]
void __thiscall FUN_0123a730(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_c;
  int local_8;
  
  if ((param_3 != 0) || (param_3 = param_1[6], param_3 != 0)) {
    iVar8 = param_3 * 0x30 + *param_1;
    iVar2 = *(int *)(iVar8 + 0x24);
    if (iVar2 != 0) {
      FUN_0123a730(param_2,iVar2);
      FUN_0123a730(param_2,*(undefined4 *)(iVar8 + 0x28));
      local_14 = 0;
      while (param_3 != 0) {
        iVar2 = *param_1;
        iVar1 = param_3 * 0x30 + iVar2;
        iVar8 = *(int *)(iVar1 + 0x24);
        iVar7 = 0;
        local_8 = 0;
        if (iVar8 != 0) {
          iVar9 = *(int *)(iVar2 + 0x20 + iVar8 * 0x30);
          for (iVar6 = iVar9; iVar6 != 0; iVar6 = *(int *)(iVar2 + 0x20 + iVar6 * 0x30)) {
            iVar7 = iVar7 + 1;
          }
          iVar6 = *(int *)(iVar2 + 0x24 + iVar8 * 0x30);
          if (iVar6 == 0) {
            iVar8 = 0;
            for (; iVar9 != 0; iVar9 = *(int *)(iVar2 + 0x20 + iVar9 * 0x30)) {
              iVar8 = iVar8 + 1;
            }
            if (-1 < iVar8 - iVar7) {
              local_8 = iVar8 - iVar7;
            }
          }
          else {
            do {
              iVar9 = iVar6 * 0x30 + iVar2;
              if (*(int *)(iVar9 + 0x24) == 0) {
                iVar4 = 0;
                for (iVar5 = *(int *)(iVar9 + 0x20); iVar5 != 0;
                    iVar5 = *(int *)(iVar2 + 0x20 + iVar5 * 0x30)) {
                  iVar4 = iVar4 + 1;
                }
                if (local_8 <= iVar4 - iVar7) {
                  local_8 = iVar4 - iVar7;
                }
              }
              iVar5 = *(int *)(iVar9 + 0x24);
              if (iVar5 == 0) {
                iVar9 = *(int *)(iVar9 + 0x20);
                while ((iVar4 = iVar9, iVar4 != iVar8 &&
                       (*(int *)(iVar2 + 0x28 + iVar4 * 0x30) == iVar6))) {
                  iVar6 = iVar4;
                  iVar9 = *(int *)(iVar2 + 0x20 + iVar4 * 0x30);
                }
                iVar5 = iVar6;
                if (iVar4 != 0) {
                  iVar5 = *(int *)(iVar2 + 0x28 + iVar4 * 0x30);
                }
                if ((iVar4 == iVar8) && (iVar5 == iVar6)) {
                  iVar5 = 0;
                }
              }
              iVar6 = iVar5;
            } while (iVar5 != 0);
          }
        }
        iVar8 = *(int *)(iVar1 + 0x28);
        iVar7 = 0;
        local_c = 0;
        if (iVar8 != 0) {
          iVar1 = *(int *)(iVar2 + 0x20 + iVar8 * 0x30);
          for (iVar9 = iVar1; iVar9 != 0; iVar9 = *(int *)(iVar2 + 0x20 + iVar9 * 0x30)) {
            iVar7 = iVar7 + 1;
          }
          iVar9 = *(int *)(iVar2 + 0x24 + iVar8 * 0x30);
          if (iVar9 == 0) {
            iVar8 = 0;
            for (; iVar1 != 0; iVar1 = *(int *)(iVar2 + 0x20 + iVar1 * 0x30)) {
              iVar8 = iVar8 + 1;
            }
            if (-1 < iVar8 - iVar7) {
              local_c = iVar8 - iVar7;
            }
          }
          else {
            do {
              iVar1 = iVar9 * 0x30 + iVar2;
              if (*(int *)(iVar1 + 0x24) == 0) {
                iVar5 = 0;
                for (iVar6 = *(int *)(iVar1 + 0x20); iVar6 != 0;
                    iVar6 = *(int *)(iVar2 + 0x20 + iVar6 * 0x30)) {
                  iVar5 = iVar5 + 1;
                }
                if (local_c <= iVar5 - iVar7) {
                  local_c = iVar5 - iVar7;
                }
              }
              iVar6 = *(int *)(iVar1 + 0x24);
              if (iVar6 == 0) {
                iVar1 = *(int *)(iVar1 + 0x20);
                while ((iVar5 = iVar1, iVar5 != iVar8 &&
                       (*(int *)(iVar2 + 0x28 + iVar5 * 0x30) == iVar9))) {
                  iVar9 = iVar5;
                  iVar1 = *(int *)(iVar2 + 0x20 + iVar5 * 0x30);
                }
                iVar6 = iVar9;
                if (iVar5 != 0) {
                  iVar6 = *(int *)(iVar2 + 0x28 + iVar5 * 0x30);
                }
                if ((iVar5 == iVar8) && (iVar6 == iVar9)) {
                  iVar6 = 0;
                }
              }
              iVar9 = iVar6;
            } while (iVar6 != 0);
          }
        }
        uVar3 = local_8 - local_c;
        iVar2 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        if (iVar2 <= local_14) {
          return;
        }
        if (iVar2 <= param_2) {
          return;
        }
        local_14 = iVar2;
        if ((int)uVar3 < 0) {
          param_3 = FUN_01237880(param_3);
        }
        else {
          param_3 = FUN_01237a50(param_3);
        }
      }
    }
  }
  return;
}

// 0123B0D0  FUN_0123b0d0  size=678  [run]
void __thiscall FUN_0123b0d0(int *param_1,int *param_2)

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

// 0123B380  FUN_0123b380  size=96  [run]
void FUN_0123b380(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_3[1] != 0) {
    iVar1 = *(int *)(*(int *)(param_4 + 0x20) + 0x28);
    if (iVar1 != *(int *)*param_3) {
      piVar2 = (int *)((int *)*param_3)[1];
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      *(int *)(*piVar2 + piVar2[1] * 4) = iVar1;
      piVar2[1] = piVar2[1] + 1;
    }
    param_3[1] = 1;
    return;
  }
  param_3[1] = 0;
  return;
}

// 0123B420  FUN_0123b420  size=172  [run]
void __fastcall FUN_0123b420(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
        if (-1 < *(int *)(iVar1 + 0x28)) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))
                    (*(undefined4 *)(iVar1 + 0x20),*(int *)(iVar1 + 0x28) << 4);
        }
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0x80000000;
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x30);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0x10) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0123B550  FUN_0123b550  size=63  [run]
void __fastcall FUN_0123b550(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0123B590  FUN_0123b590  size=763  [run]
void __thiscall FUN_0123b590(int *param_1,int param_2,undefined4 param_3,int *param_4)

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
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  param_4[1] = 0;
  local_8 = param_1;
  if (-1 < param_4[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_4,(param_4[2] & 0x3fffffffU) * 0x30);
  }
  *param_4 = 0;
  param_4[3] = 0;
  param_4[6] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  local_24 = 0;
  local_20 = 0;
  param_4[2] = -0x80000000;
  local_1c = 0x80000000;
  if (param_2 != 0) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
    *(int *)(local_24 + local_20 * 4) = param_2;
    iVar16 = *(int *)(*local_8 + 0x24 + param_2 * 0x30);
joined_r0x0123b622:
    iVar12 = iVar16;
    local_20 = local_20 + 1;
    if (iVar12 != 0) {
      if (local_20 == (local_1c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
      }
      *(int *)(local_24 + local_20 * 4) = iVar12;
      if (iVar12 != 0) goto code_r0x0123b661;
      goto LAB_0123b6b4;
    }
  }
  iVar16 = 0;
  uVar17 = 0;
  uVar18 = 0xffffffff;
  FUN_01010c40(&PTR_vftable_018e9b94,local_20);
  param_2 = 0;
  if (0 < (int)local_20) {
    do {
      iVar12 = *(int *)(local_24 + param_2 * 4);
      local_14 = iVar12;
      if (param_4[3] == 0) {
        FUN_010948a0(1);
      }
      local_18 = param_4[3];
      iVar14 = local_18 * 0x30;
      param_4[3] = *(int *)(iVar14 + *param_4);
      local_10 = iVar12 * 0x30;
      puVar15 = (undefined4 *)(*local_8 + local_10);
      local_c = (uint)(puVar15[9] == 0);
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(local_24 + param_2 * 4),local_18);
      uVar13 = puVar15[9];
      puVar11 = (undefined4 *)(*param_4 + iVar14);
      uVar2 = *puVar15;
      uVar3 = puVar15[1];
      uVar4 = puVar15[2];
      uVar5 = puVar15[3];
      uVar6 = puVar15[4];
      uVar7 = puVar15[5];
      uVar8 = puVar15[6];
      uVar9 = puVar15[7];
      uVar1 = puVar15[10];
      puVar11[8] = puVar15[8];
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      puVar11[6] = uVar8;
      puVar11[7] = uVar9;
      puVar11[9] = uVar13;
      puVar11[10] = uVar1;
      param_4[4] = param_4[4] + local_c;
      local_8[4] = local_8[4] - local_c;
      if (param_2 == 0) {
        local_8[4] = local_8[4] + 1;
        puVar15[9] = 0;
        puVar15[10] = param_3;
        param_4[6] = local_18;
      }
      else {
        *(int *)(local_10 + *local_8) = local_8[3];
        local_8[3] = local_14;
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)local_20);
  }
  param_2 = 0;
  if (0 < (int)local_20) {
    do {
      iVar12 = FUN_01010120(*(undefined4 *)(local_24 + param_2 * 4));
      iVar12 = *(int *)(iVar16 + 4 + iVar12 * 8) * 0x30 + *param_4;
      uVar13 = FUN_01010160(*(undefined4 *)(iVar12 + 0x20),0);
      *(undefined4 *)(iVar12 + 0x20) = uVar13;
      if (*(int *)(iVar12 + 0x24) != 0) {
        iVar14 = FUN_01010120(*(undefined4 *)(iVar12 + 0x24));
        *(undefined4 *)(iVar12 + 0x24) = *(undefined4 *)(iVar16 + 4 + iVar14 * 8);
        iVar14 = FUN_01010120(*(undefined4 *)(iVar12 + 0x28));
        *(undefined4 *)(iVar12 + 0x28) = *(undefined4 *)(iVar16 + 4 + iVar14 * 8);
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)local_20);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4,iVar16,uVar17,uVar18);
  }
  return;
code_r0x0123b661:
  iVar14 = *local_8;
  iVar16 = *(int *)(iVar14 + 0x24 + iVar12 * 0x30);
  if (iVar16 == 0) {
    iVar16 = *(int *)(iVar14 + 0x20 + iVar12 * 0x30);
    while ((iVar10 = iVar16, iVar10 != param_2 &&
           (*(int *)(iVar14 + 0x28 + iVar10 * 0x30) == iVar12))) {
      iVar12 = iVar10;
      iVar16 = *(int *)(iVar14 + 0x20 + iVar10 * 0x30);
    }
    iVar16 = iVar12;
    if (iVar10 != 0) {
      iVar16 = *(int *)(iVar14 + 0x28 + iVar10 * 0x30);
    }
    if ((iVar10 == param_2) && (iVar16 == iVar12)) {
LAB_0123b6b4:
      iVar16 = 0;
    }
  }
  goto joined_r0x0123b622;
}

// 0123B8A0  FUN_0123b8a0  size=1812  [run]
int __thiscall FUN_0123b8a0(int *param_1,int *param_2,int param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_4b8 [256];
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_68 [4];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38 [5];
  uint local_24;
  int local_20 [3];
  int *local_14;
  
  if (-1 < param_1[2]) {
    return param_1[2];
  }
  local_3c = *param_1;
  local_b8 = 0;
  if (local_3c != 0) {
    iVar5 = *param_2;
    iVar6 = local_3c * 0x30 + iVar5;
    local_40 = *(int *)(iVar6 + 0x24);
    local_44 = param_1;
    if (local_40 != 0) {
      do {
        local_38[4] = local_40 * 0x30;
        if ((*(int *)(iVar5 + 0x24 + local_38[4]) == 0) && (local_b8 != 0x100)) {
          iVar5 = *(int *)(iVar5 + 0x28 + local_38[4]);
          local_38[0] = 0;
          local_38[1] = 0;
          local_38[2] = 0;
          local_38[3] = 0;
          local_24 = 0;
          local_14 = (int *)param_4[1];
          if (iVar5 < (int)local_14) {
            uVar3 = *(uint *)(*param_4 + iVar5 * 0xc);
            puVar1 = (uint *)(*param_4 + iVar5 * 0xc);
            local_24 = uVar3 >> 0x1e;
            local_14 = *(int **)(*(int *)(param_3 + 4) + 4);
            (**(code **)(*local_14 + 0x10))(uVar3 & 0x3fffffff,local_68 + 6);
            iVar5 = *(int *)(param_3 + 8);
            local_50 = *(int *)(iVar5 + local_50 * 4);
            local_4c = *(int *)(iVar5 + local_4c * 4);
            local_48 = *(int *)(iVar5 + local_48 * 4);
            local_38[0] = local_68[local_24 + 6];
            local_24 = ((puVar1[1] >> 0x1e) + 2) % 3;
            (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))
                      (puVar1[1] & 0x3fffffff,local_68);
            iVar5 = *(int *)(param_3 + 8);
            local_68[0] = *(int *)(iVar5 + local_68[0] * 4);
            local_68[1] = *(int *)(iVar5 + local_68[1] * 4);
            local_68[2] = *(int *)(iVar5 + local_68[2] * 4);
            local_38[1] = local_68[local_24];
            local_24 = puVar1[1] >> 0x1e;
            local_14 = *(int **)(*(int *)(param_3 + 4) + 4);
            (**(code **)(*local_14 + 0x10))(puVar1[1] & 0x3fffffff,local_68 + 3);
            iVar5 = *(int *)(param_3 + 8);
            local_68[3] = *(int *)(iVar5 + local_68[3] * 4);
            local_58 = *(int *)(iVar5 + local_58 * 4);
            local_54 = *(int *)(iVar5 + local_54 * 4);
            local_38[2] = local_68[local_24 + 3];
            local_14 = (int *)(((*puVar1 >> 0x1e) + 2) % 3);
            (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))
                      (*puVar1 & 0x3fffffff,local_20);
            iVar5 = *(int *)(param_3 + 8);
            local_20[0] = *(int *)(iVar5 + local_20[0] * 4);
            local_20[1] = *(int *)(iVar5 + local_20[1] * 4);
            local_20[2] = *(int *)(iVar5 + local_20[2] * 4);
            local_38[3] = local_20[(int)local_14];
            local_24 = 4;
          }
          else {
            iVar6 = (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 8))();
            if (iVar5 < iVar6 + (int)local_14) {
              (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))
                        (iVar5 - param_4[1],local_38);
              local_38[0] = *(int *)(*(int *)(param_3 + 8) + local_38[0] * 4);
              local_38[1] = *(undefined4 *)(*(int *)(param_3 + 8) + local_38[1] * 4);
              local_38[2] = *(undefined4 *)(*(int *)(param_3 + 8) + local_38[2] * 4);
              local_24 = 3;
            }
            else {
              local_14 = (int *)param_4[1];
              local_90 = 0;
              local_8c = 0;
              local_80 = 0;
              local_7c = 0x7f7fffee;
              local_b0 = 0x7f7fffee;
              uStack_ac = 0x7f7fffee;
              uStack_a8 = 0x7f7fffee;
              uStack_a4 = 0x7f7fffee;
              local_a0 = 0xff7fffee;
              uStack_9c = 0xff7fffee;
              uStack_98 = 0xff7fffee;
              uStack_94 = 0xff7fffee;
              local_78 = 1;
              iVar6 = (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 8))();
              hkpSingleShapeContainer::hkpSingleShapeContainer_11
                        ((iVar5 - iVar6) - (int)local_14,&local_b0);
              iVar6 = local_80 + 2;
              iVar5 = 0;
              if (0 < iVar6) {
                do {
                  if (local_b8 == 0x100) break;
                  piVar2 = aiStack_4b8 + local_b8;
                  iVar5 = iVar5 + 1;
                  local_b8 = local_b8 + 1;
                  *piVar2 = -1;
                } while (iVar5 < iVar6);
              }
            }
          }
          iVar5 = 0;
          if (0 < (int)local_24) {
            do {
              iVar6 = 0;
              if (0 < local_b8) {
                do {
                  if (aiStack_4b8[iVar6] == local_38[iVar5]) {
                    if (iVar6 != -1) goto LAB_0123bc38;
                    break;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < local_b8);
              }
              piVar2 = aiStack_4b8 + local_b8;
              local_b8 = local_b8 + 1;
              *piVar2 = local_38[iVar5];
              if (local_b8 == 0x100) break;
LAB_0123bc38:
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)local_24);
          }
        }
        iVar5 = *param_2;
        iVar6 = *(int *)(iVar5 + 0x24 + local_38[4]);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar5 + 0x20 + local_38[4]);
          while ((iVar4 = iVar6, iVar4 != local_3c &&
                 (*(int *)(iVar5 + 0x28 + iVar4 * 0x30) == local_40))) {
            local_40 = iVar4;
            iVar6 = *(int *)(iVar5 + 0x20 + iVar4 * 0x30);
          }
          iVar6 = local_40;
          if (iVar4 != 0) {
            iVar6 = *(int *)(iVar5 + 0x28 + iVar4 * 0x30);
          }
          if ((iVar4 == local_3c) && (iVar6 == local_40)) {
            iVar6 = 0;
          }
        }
        local_40 = iVar6;
        if (iVar6 == 0) {
          local_44[2] = local_b8;
          return local_b8;
        }
      } while( true );
    }
    iVar5 = *(int *)(iVar6 + 0x28);
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_3c = 0;
    local_14 = (int *)param_4[1];
    if (iVar5 < (int)local_14) {
      uVar3 = *(uint *)(*param_4 + iVar5 * 0xc);
      puVar1 = (uint *)(*param_4 + iVar5 * 0xc);
      local_38[4] = uVar3 >> 0x1e;
      local_14 = *(int **)(*(int *)(param_3 + 4) + 4);
      (**(code **)(*local_14 + 0x10))(uVar3 & 0x3fffffff,local_20);
      iVar5 = *(int *)(param_3 + 8);
      local_20[0] = *(int *)(iVar5 + local_20[0] * 4);
      local_20[1] = *(int *)(iVar5 + local_20[1] * 4);
      local_20[2] = *(int *)(iVar5 + local_20[2] * 4);
      local_38[0] = local_20[local_38[4]];
      local_38[4] = ((puVar1[1] >> 0x1e) + 2) % 3;
      (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))(puVar1[1] & 0x3fffffff,local_20);
      iVar5 = *(int *)(param_3 + 8);
      local_20[0] = *(int *)(iVar5 + local_20[0] * 4);
      local_20[1] = *(int *)(iVar5 + local_20[1] * 4);
      local_20[2] = *(int *)(iVar5 + local_20[2] * 4);
      local_38[1] = local_20[local_38[4]];
      local_38[4] = puVar1[1] >> 0x1e;
      local_14 = *(int **)(*(int *)(param_3 + 4) + 4);
      (**(code **)(*local_14 + 0x10))(puVar1[1] & 0x3fffffff,local_20);
      iVar5 = *(int *)(param_3 + 8);
      local_20[0] = *(int *)(iVar5 + local_20[0] * 4);
      local_20[1] = *(int *)(iVar5 + local_20[1] * 4);
      local_20[2] = *(int *)(iVar5 + local_20[2] * 4);
      local_38[2] = local_20[local_38[4]];
      local_14 = (int *)(((*puVar1 >> 0x1e) + 2) % 3);
      (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))(*puVar1 & 0x3fffffff,local_20);
      iVar5 = *(int *)(param_3 + 8);
      local_20[0] = *(int *)(iVar5 + local_20[0] * 4);
      local_20[1] = *(undefined4 *)(iVar5 + local_20[1] * 4);
      local_20[2] = *(undefined4 *)(iVar5 + local_20[2] * 4);
      local_38[3] = local_20[(int)local_14];
      local_3c = 4;
    }
    else {
      iVar6 = (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 8))();
      if (iVar5 < iVar6 + (int)local_14) {
        (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 0x10))(iVar5 - param_4[1],local_38);
        local_38[0] = *(int *)(*(int *)(param_3 + 8) + local_38[0] * 4);
        local_38[1] = *(undefined4 *)(*(int *)(param_3 + 8) + local_38[1] * 4);
        local_38[2] = *(undefined4 *)(*(int *)(param_3 + 8) + local_38[2] * 4);
        local_3c = 3;
      }
      else {
        local_14 = (int *)param_4[1];
        local_90 = 0;
        local_8c = 0;
        local_80 = 0;
        local_7c = 0x7f7fffee;
        local_b0 = 0x7f7fffee;
        uStack_ac = 0x7f7fffee;
        uStack_a8 = 0x7f7fffee;
        uStack_a4 = 0x7f7fffee;
        local_a0 = 0xff7fffee;
        uStack_9c = 0xff7fffee;
        uStack_98 = 0xff7fffee;
        uStack_94 = 0xff7fffee;
        local_78 = 1;
        iVar6 = (**(code **)(**(int **)(*(int *)(param_3 + 4) + 4) + 8))();
        hkpSingleShapeContainer::hkpSingleShapeContainer_11
                  ((iVar5 - iVar6) - (int)local_14,&local_b0);
        iVar5 = 0;
        if (0 < local_80 + 2) {
          do {
            if (local_b8 == 0x100) break;
            piVar2 = aiStack_4b8 + local_b8;
            iVar5 = iVar5 + 1;
            local_b8 = local_b8 + 1;
            *piVar2 = -1;
          } while (iVar5 < local_80 + 2);
        }
      }
    }
    iVar5 = 0;
    param_1 = local_44;
    if (0 < local_3c) {
      do {
        iVar6 = 0;
        if (0 < local_b8) {
          do {
            if (aiStack_4b8[iVar6] == local_38[iVar5]) {
              if (iVar6 != -1) goto LAB_0123bf95;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_b8);
        }
        piVar2 = aiStack_4b8 + local_b8;
        local_b8 = local_b8 + 1;
        *piVar2 = local_38[iVar5];
        param_1 = local_44;
        if (local_b8 == 0x100) break;
LAB_0123bf95:
        iVar5 = iVar5 + 1;
        param_1 = local_44;
      } while (iVar5 < local_3c);
    }
  }
  param_1[2] = local_b8;
  return local_b8;
}

// 0123BFD0  FUN_0123bfd0  size=470  [run]
void FUN_0123bfd0(int *param_1,int *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  byte bVar13;
  float *pfVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  
  if (param_1[6] != 0) {
    iVar5 = param_2[1];
    pfVar14 = (float *)(param_1[6] * 0x30 + *param_1);
    if ((param_3[1] != 0) &&
       (auVar10._4_4_ = -(uint)((float)param_3[5] <= pfVar14[5] && pfVar14[1] <= (float)param_3[9]),
       auVar10._0_4_ = -(uint)((float)param_3[4] <= pfVar14[4] && *pfVar14 <= (float)param_3[8]),
       auVar10._8_4_ = -(uint)((float)param_3[6] <= pfVar14[6] && pfVar14[2] <= (float)param_3[10]),
       auVar10._12_4_ =
            -(uint)((float)param_3[7] <= pfVar14[7] && pfVar14[3] <= (float)param_3[0xb]),
       uVar16 = movmskps(param_1,auVar10), ((byte)uVar16 & 7) == 7)) {
LAB_0123c030:
      while (pfVar14[9] != 0.0) {
        fVar6 = pfVar14[10];
        iVar7 = *param_1;
        iVar17 = (int)pfVar14[9] * 0x30;
        pfVar1 = (float *)(iVar17 + iVar7);
        pfVar3 = (float *)(iVar17 + 0x10 + iVar7);
        iVar15 = (int)fVar6 * 0x30;
        pfVar2 = (float *)(iVar15 + iVar7);
        pfVar4 = (float *)(iVar15 + 0x10 + iVar7);
        pfVar14 = (float *)(iVar17 + iVar7);
        if ((param_3[1] == 0) ||
           (auVar11._4_4_ =
                 -(uint)((float)param_3[5] <= pfVar3[1] && pfVar1[1] <= (float)param_3[9]),
           auVar11._0_4_ = -(uint)((float)param_3[4] <= *pfVar3 && *pfVar1 <= (float)param_3[8]),
           auVar11._8_4_ =
                -(uint)((float)param_3[6] <= pfVar3[2] && pfVar1[2] <= (float)param_3[10]),
           auVar11._12_4_ =
                -(uint)((float)param_3[7] <= pfVar3[3] && pfVar1[3] <= (float)param_3[0xb]),
           uVar16 = movmskps(iVar7,auVar11), ((byte)uVar16 & 7) != 7)) {
          bVar13 = 0;
        }
        else {
          bVar13 = 1;
        }
        if ((param_3[1] == 0) ||
           (auVar9._4_4_ = -(uint)((float)param_3[5] <= pfVar4[1] && pfVar2[1] <= (float)param_3[9])
           , auVar9._0_4_ = -(uint)((float)param_3[4] <= *pfVar4 && *pfVar2 <= (float)param_3[8]),
           auVar9._8_4_ = -(uint)((float)param_3[6] <= pfVar4[2] && pfVar2[2] <= (float)param_3[10])
           , auVar9._12_4_ =
                  -(uint)((float)param_3[7] <= pfVar4[3] && pfVar2[3] <= (float)param_3[0xb]),
           uVar16 = movmskps(param_3,auVar9), ((byte)uVar16 & 7) != 7)) {
          cVar12 = '\0';
        }
        else {
          cVar12 = '\x01';
        }
        pfVar1 = (float *)(iVar15 + iVar7);
        switch(-cVar12 & 2U | bVar13) {
        default:
          goto LAB_0123c179;
        case 1:
          pfVar1 = pfVar14;
        case 2:
          pfVar14 = pfVar1;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
          }
          iVar7 = param_2[1];
          param_2[1] = iVar7 + 1;
          *(float *)(*param_2 + iVar7 * 4) = fVar6;
        }
      }
      if (param_3[1] == 0) {
        param_3[1] = 0;
      }
      else {
        fVar6 = pfVar14[10];
        if (fVar6 != *(float *)*param_3) {
          piVar8 = (int *)((float *)*param_3)[1];
          if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar8,4);
          }
          *(float *)(*piVar8 + piVar8[1] * 4) = fVar6;
          piVar8[1] = piVar8[1] + 1;
        }
        param_3[1] = 1;
      }
LAB_0123c179:
      iVar7 = param_2[1];
      if (iVar5 < iVar7) {
        param_2[1] = iVar7 + -1;
        pfVar14 = (float *)(*(int *)(*param_2 + -4 + iVar7 * 4) * 0x30 + *param_1);
        goto LAB_0123c030;
      }
    }
  }
  return;
}

// 0123C220  FUN_0123c220  size=242  [run]
void FUN_0123c220(undefined4 param_1,undefined4 param_2)

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
  FUN_0123bfd0(param_1,local_18,param_2);
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

// 0123C320  FUN_0123c320  size=513  [run]
void __thiscall FUN_0123c320(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_4c [7];
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  param_1[1] = 0;
  param_1[4] = 0x7f7fffee;
  param_1[5] = 0x7f7fffee;
  param_1[6] = 0x7f7fffee;
  param_1[7] = 0x7f7fffee;
  param_1[8] = param_1[4] ^ 0x80000000;
  param_1[9] = param_1[5] ^ 0x80000000;
  param_1[10] = param_1[6] ^ 0x80000000;
  param_1[0xb] = param_1[7] ^ 0x80000000;
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  local_4c[1] = 0;
  local_4c[0] = 0;
  local_4c[2] = 0x80000000;
  local_4c[3] = 0;
  local_4c[6] = 0;
  local_4c[4] = 0;
  local_4c[5] = 0;
  FUN_0123b0d0(local_4c);
  local_18 = local_4c[4] * 2 + -1;
  if (local_4c[4] * 2 == 0) {
    local_1c = (int *)0x0;
  }
  else {
    local_2c = local_4c[4] << 6;
    local_1c = (int *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_2c);
    local_20 = (int)(local_2c + (local_2c >> 0x1f & 0x1fU)) >> 5;
    if (local_20 != 0) goto LAB_0123c3e1;
  }
  local_20 = -0x80000000;
LAB_0123c3e1:
  piVar5 = local_1c;
  iVar1 = *(int *)(local_4c[0] + 0x34);
  iVar3 = *(int *)(local_4c[0] + 0x38);
  iVar2 = *(int *)(local_4c[0] + 0x3c);
  *local_1c = *(int *)(local_4c[0] + 0x30);
  local_1c[1] = iVar1;
  local_1c[2] = iVar3;
  local_1c[3] = iVar2;
  iVar1 = *(int *)(local_4c[0] + 0x44);
  iVar3 = *(int *)(local_4c[0] + 0x48);
  iVar2 = *(int *)(local_4c[0] + 0x4c);
  local_1c[4] = *(int *)(local_4c[0] + 0x40);
  local_1c[5] = iVar1;
  local_1c[6] = iVar3;
  local_1c[7] = iVar2;
  if ((int)(param_1[2] & 0x3fffffffU) < local_18) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    iVar3 = local_18;
    if (local_18 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  param_1[1] = local_18;
  iVar1 = piVar5[1];
  iVar3 = piVar5[2];
  iVar2 = piVar5[3];
  param_1[4] = *piVar5;
  param_1[5] = iVar1;
  param_1[6] = iVar3;
  param_1[7] = iVar2;
  iVar1 = piVar5[5];
  iVar3 = piVar5[6];
  iVar2 = piVar5[7];
  param_1[8] = piVar5[4];
  param_1[9] = iVar1;
  param_1[10] = iVar3;
  param_1[0xb] = iVar2;
  local_24 = 0;
  if (0 < local_18) {
    local_28 = piVar5 + 8;
    piVar4 = (int *)(local_4c[0] + 0x50);
    local_14 = *param_1;
    do {
      local_70 = piVar4[-8];
      iStack_6c = piVar4[-7];
      iStack_68 = piVar4[-6];
      iStack_64 = piVar4[-5];
      local_30 = piVar4[2];
      piVar5 = local_1c + *piVar4 * 8;
      local_60 = piVar4[-4];
      iStack_5c = piVar4[-3];
      iStack_58 = piVar4[-2];
      iStack_54 = piVar4[-1];
      FUN_0146c190(piVar5,&local_70,local_14);
      FUN_0146c120(piVar5,local_14,local_28);
      if (piVar4[1] == 0) {
        *(char *)(local_14 + 3) = (char)local_30 * '\x02';
      }
      else {
        *(byte *)(local_14 + 3) = ((char)local_30 - (char)local_24) - 1U | 1;
      }
      local_28 = local_28 + 8;
      local_14 = local_14 + 4;
      local_24 = local_24 + 1;
      piVar4 = piVar4 + 0xc;
      piVar5 = local_1c;
    } while (local_24 < local_18);
  }
  if (-1 < local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar5,local_20 << 5);
  }
  local_4c[1] = 0;
  if (-1 < local_4c[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c[0],(local_4c[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 0123C530  FUN_0123c530  size=546  [run]
void __thiscall FUN_0123c530(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_4c [8];
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined1 *local_14;
  
  param_1[1] = 0;
  param_1[4] = 0x7f7fffee;
  param_1[5] = 0x7f7fffee;
  param_1[6] = 0x7f7fffee;
  param_1[7] = 0x7f7fffee;
  param_1[8] = param_1[4] ^ 0x80000000;
  param_1[9] = param_1[5] ^ 0x80000000;
  param_1[10] = param_1[6] ^ 0x80000000;
  param_1[0xb] = param_1[7] ^ 0x80000000;
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  local_4c[1] = 0;
  local_4c[0] = 0;
  local_4c[2] = 0x80000000;
  local_4c[3] = 0;
  local_4c[6] = 0;
  local_4c[4] = 0;
  local_4c[5] = 0;
  FUN_0123b0d0(local_4c);
  local_18 = local_4c[4] * 2 + -1;
  if (local_4c[4] * 2 == 0) {
    local_1c = (int *)0x0;
  }
  else {
    local_2c = local_4c[4] << 6;
    local_1c = (int *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_2c);
    local_20 = (int)(local_2c + (local_2c >> 0x1f & 0x1fU)) >> 5;
    if (local_20 != 0) goto LAB_0123c5f1;
  }
  local_20 = -0x80000000;
LAB_0123c5f1:
  piVar5 = local_1c;
  iVar2 = *(int *)(local_4c[0] + 0x34);
  iVar3 = *(int *)(local_4c[0] + 0x38);
  iVar1 = *(int *)(local_4c[0] + 0x3c);
  *local_1c = *(int *)(local_4c[0] + 0x30);
  local_1c[1] = iVar2;
  local_1c[2] = iVar3;
  local_1c[3] = iVar1;
  iVar2 = *(int *)(local_4c[0] + 0x44);
  iVar3 = *(int *)(local_4c[0] + 0x48);
  iVar1 = *(int *)(local_4c[0] + 0x4c);
  local_1c[4] = *(int *)(local_4c[0] + 0x40);
  local_1c[5] = iVar2;
  local_1c[6] = iVar3;
  local_1c[7] = iVar1;
  if ((int)(param_1[2] & 0x3fffffffU) < local_18) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    iVar3 = local_18;
    if (local_18 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,5);
  }
  param_1[1] = local_18;
  iVar2 = piVar5[1];
  iVar3 = piVar5[2];
  iVar1 = piVar5[3];
  param_1[4] = *piVar5;
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = iVar1;
  iVar2 = piVar5[5];
  iVar3 = piVar5[6];
  iVar1 = piVar5[7];
  param_1[8] = piVar5[4];
  param_1[9] = iVar2;
  param_1[10] = iVar3;
  param_1[0xb] = iVar1;
  local_24 = 0;
  if (0 < local_18) {
    local_28 = piVar5 + 8;
    local_14 = (undefined1 *)(*param_1 + 4);
    piVar4 = (int *)(local_4c[0] + 0x50);
    do {
      local_70 = piVar4[-8];
      iStack_6c = piVar4[-7];
      iStack_68 = piVar4[-6];
      iStack_64 = piVar4[-5];
      local_4c[7] = piVar4[2];
      piVar5 = local_1c + *piVar4 * 8;
      local_60 = piVar4[-4];
      iStack_5c = piVar4[-3];
      iStack_58 = piVar4[-2];
      iStack_54 = piVar4[-1];
      FUN_0146c190(piVar5,&local_70,local_14 + -4);
      FUN_0146c120(piVar5,local_14 + -4,local_28);
      if (piVar4[1] == 0) {
        local_14[-1] = (byte)((uint)local_4c[7] >> 8) & 0x7f;
        *local_14 = (char)local_4c[7];
      }
      else {
        iVar2 = (local_4c[7] - local_24) + -1 >> 1;
        local_14[-1] = (byte)((uint)iVar2 >> 8) | 0x80;
        *local_14 = (char)iVar2;
      }
      local_28 = local_28 + 8;
      local_14 = local_14 + 5;
      local_24 = local_24 + 1;
      piVar4 = piVar4 + 0xc;
      piVar5 = local_1c;
    } while (local_24 < local_18);
  }
  if (-1 < local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar5,local_20 << 5);
  }
  local_4c[1] = 0;
  if (-1 < local_4c[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c[0],(local_4c[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 0123C760  FUN_0123c760  size=80  [run]
void FUN_0123c760(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000004) {
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0x80000000;
        puVar1[3] = 0x7f7fffee;
        puVar1[4] = 0x7f7fffee;
        puVar1[5] = 0x7f7fffee;
        puVar1[6] = 0x7f7fffee;
        puVar1[7] = puVar1[3] ^ 0x80000000;
        puVar1[8] = puVar1[4] ^ 0x80000000;
        puVar1[9] = puVar1[5] ^ 0x80000000;
        puVar1[10] = puVar1[6] ^ 0x80000000;
      }
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0123C8E0  FUN_0123c8e0  size=255  [run]
void __thiscall FUN_0123c8e0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x60);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(iVar3 * 0x60 + 8 + param_3 * 0x60 + *param_1);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -0x18;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  if (0 < iVar3) {
    puVar1 = (undefined4 *)(param_1[1] * 0x60 + *param_1 + 4);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000004) {
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0x80000000;
        puVar1[3] = 0x7f7fffee;
        puVar1[4] = 0x7f7fffee;
        puVar1[5] = 0x7f7fffee;
        puVar1[6] = 0x7f7fffee;
        puVar1[7] = puVar1[3] ^ 0x80000000;
        puVar1[8] = puVar1[4] ^ 0x80000000;
        puVar1[9] = puVar1[5] ^ 0x80000000;
        puVar1[10] = puVar1[6] ^ 0x80000000;
      }
      puVar1 = puVar1 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[1] = param_3;
    return;
  }
  param_1[1] = param_3;
  return;
}

// 0123C9E0  FUN_0123c9e0  size=252  [run]
void __thiscall FUN_0123c9e0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x60);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(iVar4 * 0x60 + 8 + param_2 * 0x60 + *param_1);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -0x18;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  if (0 < iVar4) {
    puVar1 = (undefined4 *)(param_1[1] * 0x60 + *param_1 + 4);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000004) {
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0x80000000;
        puVar1[3] = 0x7f7fffee;
        puVar1[4] = 0x7f7fffee;
        puVar1[5] = 0x7f7fffee;
        puVar1[6] = 0x7f7fffee;
        puVar1[7] = puVar1[3] ^ 0x80000000;
        puVar1[8] = puVar1[4] ^ 0x80000000;
        puVar1[9] = puVar1[5] ^ 0x80000000;
        puVar1[10] = puVar1[6] ^ 0x80000000;
      }
      puVar1 = puVar1 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[1] = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}

