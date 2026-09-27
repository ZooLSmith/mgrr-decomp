// lib/havok/unit_0121CA30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0121CA30..01237E30, 468 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkpAabbCastCollector.h"
#include "hkpBvCompressedMeshShape.h"
#include "hkpClosestRayHitCollector.h"
#include "hkpDefaultToiResourceMgr.h"
#include "hkpShapeContainer.h"
#include "hkpStaticCompoundShape.h"
#include "hkpToiResourceMgr.h"

// 0121CA30  FUN_0121ca30  size=318  [run]
void __thiscall FUN_0121ca30(int *param_1,undefined1 *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
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
  float fVar15;
  float fVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  
  if (param_1[0x10] != 0) {
    *(int *)(param_1[0x10] + 0x10) = param_1[0x11];
    if (-1 < param_1[0x18]) {
      iVar3 = param_1[0x18] * 0x40 + *(int *)(*param_1 + 0x20);
      if ((*(uint *)(iVar3 + 0xc) & 2) != 0) {
        if ((*(uint *)(iVar3 + 0xc) & 4) != 0) {
          auVar17 = *(undefined1 (*) [16])(iVar3 + 0x20);
          pfVar1 = (float *)param_1[0x10];
          auVar14 = rcpps(in_XMM2,auVar17);
          *pfVar1 = *pfVar1 * (2.0 - auVar17._0_4_ * auVar14._0_4_) * auVar14._0_4_;
          pfVar1[1] = pfVar1[1] * (2.0 - auVar17._4_4_ * auVar14._4_4_) * auVar14._4_4_;
          pfVar1[2] = pfVar1[2] * (2.0 - auVar17._8_4_ * auVar14._8_4_) * auVar14._8_4_;
          pfVar1[3] = pfVar1[3] * (2.0 - auVar17._12_4_ * auVar14._12_4_) * auVar14._12_4_;
          pfVar1 = (float *)param_1[0x10];
          fVar8 = *pfVar1;
          fVar9 = pfVar1[1];
          fVar2 = pfVar1[2];
          fVar4 = fVar8 * fVar8;
          fVar5 = fVar9 * fVar9;
          fVar7 = fVar2 * fVar2;
          fVar10 = fVar5 + fVar4 + fVar7;
          fVar11 = fVar5 + fVar4 + fVar7;
          fVar12 = fVar5 + fVar4 + fVar7;
          fVar7 = fVar5 + fVar4 + fVar7;
          auVar14._0_12_ = ZEXT812(0);
          auVar14._12_4_ = 0;
          auVar17._4_4_ = fVar11;
          auVar17._0_4_ = fVar10;
          auVar17._8_4_ = fVar12;
          auVar17._12_4_ = fVar7;
          auVar17 = rsqrtps(auVar14,auVar17);
          fVar4 = auVar17._0_4_;
          fVar5 = auVar17._4_4_;
          fVar6 = auVar17._8_4_;
          fVar13 = auVar17._12_4_;
          *pfVar1 = (float)(~-(uint)(fVar10 <= 0.0) &
                           (uint)((3.0 - fVar4 * fVar10 * fVar4) * fVar4 * 0.5)) * fVar8;
          pfVar1[1] = (float)(~-(uint)(fVar11 <= 0.0) &
                             (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5)) * fVar9;
          pfVar1[2] = (float)(~-(uint)(fVar12 <= 0.0) &
                             (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5)) * fVar2;
          pfVar1[3] = (float)(~-(uint)(fVar7 <= 0.0) &
                             (uint)((3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5)) * pfVar1[3];
        }
        fVar8 = *(float *)(iVar3 + 0x10);
        fVar9 = *(float *)(iVar3 + 0x14);
        fVar2 = *(float *)(iVar3 + 0x18);
        fVar4 = *(float *)(iVar3 + 0x1c);
        pfVar1 = (float *)param_1[0x10];
        fVar5 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        fVar13 = fVar5 * fVar8;
        fVar15 = fVar7 * fVar9;
        fVar16 = fVar10 * fVar2;
        fVar12 = (fVar15 + fVar13 + fVar16) * fVar8 + (fVar4 * fVar4 + -0.5) * fVar5 +
                 (fVar10 * fVar9 - fVar7 * fVar2) * fVar4;
        fVar6 = (fVar15 + fVar13 + fVar16) * fVar9 + (fVar4 * fVar4 + -0.5) * fVar7 +
                (fVar5 * fVar2 - fVar10 * fVar8) * fVar4;
        fVar8 = (fVar15 + fVar13 + fVar16) * fVar2 + (fVar4 * fVar4 + -0.5) * fVar10 +
                (fVar7 * fVar8 - fVar5 * fVar9) * fVar4;
        fVar9 = (fVar15 + fVar13 + fVar16) * fVar4 + (fVar4 * fVar4 + -0.5) * fVar11 +
                (fVar11 * fVar4 - fVar11 * fVar4) * fVar4;
        *pfVar1 = fVar12 + fVar12;
        pfVar1[1] = fVar6 + fVar6;
        pfVar1[2] = fVar8 + fVar8;
        pfVar1[3] = fVar9 + fVar9;
      }
      *param_2 = 1;
      return;
    }
  }
  *param_2 = 0;
  return;
}

// 0121CB70  hkpStaticCompoundShape::vf38  size=11  [run]
int __fastcall hkpStaticCompoundShape::vf38(int param_1)

{
  if (param_1 != 0) {
    return param_1 + 0x14;
  }
  return 0;
}

// 0121CB80  hkpStaticCompoundShape::vf00  size=8  [run]
void hkpStaticCompoundShape::vf00(void)

{
  vf00();
  return;
}

// 0121CB90  FUN_0121cb90  size=38  [run]
void FUN_0121cb90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0121CC20  FUN_0121cc20  size=71  [run]
void __fastcall FUN_0121cc20(undefined4 *param_1)

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

// 0121CC70  FUN_0121cc70  size=34  [run]
void __fastcall FUN_0121cc70(int *param_1)

{
  if (param_1[3] == 0) {
    FUN_0121b290(1);
  }
  param_1[3] = *(int *)(*param_1 + param_1[3] * 0x30);
  return;
}

// 0121CCA0  FUN_0121cca0  size=678  [run]
void __thiscall FUN_0121cca0(int *param_1,int *param_2)

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
  FUN_0121b290(param_1[4] * 2);
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
        FUN_0121b290(1);
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

// 0121D200  FUN_0121d200  size=101  [run]
undefined4 * __thiscall FUN_0121d200(undefined4 *param_1,byte param_2)

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

// 0121D270  FUN_0121d270  size=120  [run]
int * __thiscall FUN_0121d270(int *param_1,uint param_2)

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
    uVar3 = param_2 * 0x30 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  *param_1 = iVar1;
  param_1[3] = iVar1;
  param_1[2] = param_2 | 0x80000000;
  return param_1;
}

// 0121D2F0  FUN_0121d2f0  size=147  [run]
void __fastcall FUN_0121d2f0(int *param_1)

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
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x30);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0121D390  FUN_0121d390  size=535  [run]
void __thiscall FUN_0121d390(int *param_1,int param_2,int param_3,undefined1 (*param_4) [16])

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
      FUN_0121b290(1);
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

// 0121D5B0  hkpAabbCastCollector::hkpAabbCastCollector_2  size=1767  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkpAabbCastCollector::hkpAabbCastCollector_2(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint5 uVar18;
  unkbyte9 Var19;
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  char cVar22;
  float fVar23;
  LPVOID pvVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  undefined4 uVar35;
  float fVar37;
  undefined4 uVar38;
  float fVar40;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar39;
  float fVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 uVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar61;
  float fVar62;
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int local_190;
  undefined1 local_170 [64];
  undefined1 local_130 [16];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  int local_110;
  undefined4 *local_100;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int local_d0;
  int local_c0;
  undefined **local_b0 [4];
  undefined1 local_a0 [16];
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  byte local_11;
  
  if (param_1[1] != 0) {
    fVar37 = (float)param_1[4];
    fVar40 = (float)param_1[5];
    fVar42 = (float)param_1[6];
    fVar68 = (float)param_1[7];
    auVar34 = *(undefined1 (*) [16])(param_1 + 8);
    local_190 = *param_1;
    local_40 = param_2[1];
    auVar59._0_4_ =
         (float)param_3[0xc] * (((float)param_3[0x10] + auVar34._0_4_) - (float)param_3[4]);
    auVar59._4_4_ =
         (float)param_3[0xd] * (((float)param_3[0x11] + auVar34._4_4_) - (float)param_3[5]);
    auVar59._8_4_ =
         (float)param_3[0xe] * (((float)param_3[0x12] + auVar34._8_4_) - (float)param_3[6]);
    auVar59._12_4_ =
         (float)param_3[0xf] * (((float)param_3[0x13] + auVar34._12_4_) - (float)param_3[7]);
    auVar64._0_8_ =
         CONCAT44((float)param_3[0xd] * ((fVar40 - (float)param_3[0x11]) - (float)param_3[5]),
                  (float)param_3[0xc] * ((fVar37 - (float)param_3[0x10]) - (float)param_3[4]));
    auVar64._8_4_ = (float)param_3[0xe] * ((fVar42 - (float)param_3[0x12]) - (float)param_3[6]);
    auVar64._12_4_ = (float)param_3[0xf] * ((fVar68 - (float)param_3[0x13]) - (float)param_3[7]);
    auVar32._8_4_ = auVar64._8_4_;
    auVar32._0_8_ = auVar64._0_8_;
    auVar32._12_4_ = auVar64._12_4_;
    auVar45 = maxps(auVar64,auVar59);
    auVar32 = minps(auVar32,auVar59);
    iVar25 = param_3[0xb];
    uVar35 = auVar45._4_4_;
    uVar38 = auVar45._8_4_;
    auVar57._4_4_ = uVar38;
    auVar57._0_4_ = uVar38;
    auVar57._8_4_ = uVar38;
    auVar57._12_4_ = uVar38;
    auVar63._4_4_ = uVar35;
    auVar63._0_4_ = uVar35;
    auVar63._8_4_ = uVar35;
    auVar63._12_4_ = uVar35;
    auVar64 = minps(auVar63,auVar57);
    auVar50._4_4_ = iVar25;
    auVar50._0_4_ = iVar25;
    auVar50._8_4_ = iVar25;
    auVar50._12_4_ = iVar25;
    auVar45 = minps(auVar45,auVar50);
    uVar35 = auVar32._4_4_;
    uVar38 = auVar32._8_4_;
    auVar51._4_4_ = uVar38;
    auVar51._0_4_ = uVar38;
    auVar51._8_4_ = uVar38;
    auVar51._12_4_ = uVar38;
    auVar58._4_4_ = uVar35;
    auVar58._0_4_ = uVar35;
    auVar58._8_4_ = uVar35;
    auVar58._12_4_ = uVar35;
    auVar32 = maxps(auVar32,_DAT_01701b10);
    auVar59 = maxps(auVar58,auVar51);
    auVar64 = minps(auVar45,auVar64);
    auVar32 = maxps(auVar32,auVar59);
    auVar45._4_4_ = -(uint)(auVar32._4_4_ <= auVar64._4_4_);
    auVar45._0_4_ = -(uint)(auVar32._0_4_ <= auVar64._0_4_);
    auVar45._8_4_ = -(uint)(auVar32._8_4_ <= auVar64._8_4_);
    auVar45._12_4_ = -(uint)(auVar32._12_4_ <= auVar64._12_4_);
    fVar23 = 0.0;
    uVar27 = movmskps(param_2,auVar45);
    if ((uVar27 & 1) != 0) {
      do {
        if ((char)*(byte *)(local_190 + 3) < '\0') {
          local_110 = (int)fVar23 + 1;
          local_d0 = (int)fVar23 +
                     ((*(byte *)(local_190 + 3) & 0x7f) << 0x10 | (uint)*(ushort *)(local_190 + 4))
                     * 2;
          local_c0 = *param_1;
          local_100 = (undefined4 *)(local_c0 + local_110 * 6);
          uVar27 = *(uint *)(local_c0 + local_d0 * 6);
          auVar11[0xc] = (char)(uVar27 >> 0x18);
          auVar11._0_12_ = ZEXT712(0);
          uVar18 = CONCAT32(auVar11._10_3_,(ushort)(byte)(uVar27 >> 0x10));
          auVar21._5_8_ = 0;
          auVar21._0_5_ = uVar18;
          Var19 = CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar27 >> 8));
          auVar52._0_4_ = uVar27 & 0xff;
          auVar52._4_9_ = Var19;
          auVar52._13_3_ = 0;
          local_c0 = local_c0 + local_d0 * 6;
          uVar35 = *local_100;
          bVar26 = (byte)((uint)uVar35 >> 0x18);
          uVar49 = (undefined1)((uint)uVar35 >> 8);
          uVar15 = (ulonglong)CONCAT12(uVar49,(short)uVar35) & 0xffffffffffff00ff;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar15;
          auVar12[0xc] = bVar26;
          auVar13[8] = (char)((uint)uVar35 >> 0x10);
          auVar13._0_8_ = uVar15;
          auVar13[9] = 0;
          auVar13._10_3_ = auVar12._10_3_;
          auVar20._5_8_ = 0;
          auVar20._0_5_ = auVar13._8_5_;
          auVar14[4] = uVar49;
          auVar14._0_4_ = (uint)uVar15;
          auVar14[5] = 0;
          auVar14._6_7_ = SUB137(auVar20 << 0x40,6);
          auVar46._0_4_ = (uint)uVar15 & 0xffff;
          auVar46._4_9_ = auVar14._4_9_;
          auVar46._13_3_ = 0;
          auVar32 = auVar46 & _DAT_01b34560;
          auVar52 = auVar52 & _DAT_01b34560;
          local_e0 = auVar34._0_4_;
          fStack_dc = auVar34._4_4_;
          fStack_d4 = auVar34._12_4_;
          fStack_d8 = auVar34._8_4_;
          fVar31 = (local_e0 - fVar37) * 0.0044247787;
          fVar36 = (fStack_dc - fVar40) * 0.0044247787;
          fVar39 = (fStack_d8 - fVar42) * 0.0044247787;
          fVar41 = (fStack_d4 - fVar68) * 0.0044247787;
          local_120 = local_e0 - (float)auVar32._0_4_ * (float)auVar32._0_4_ * fVar31;
          fStack_11c = fStack_dc - (float)auVar32._4_4_ * (float)auVar32._4_4_ * fVar36;
          fStack_118 = fStack_d8 - (float)auVar32._8_4_ * (float)auVar32._8_4_ * fVar39;
          fStack_114 = fStack_d4 - (float)auVar32._12_4_ * (float)auVar32._12_4_ * fVar41;
          fVar23 = (float)(auVar14._4_4_ >> 4);
          fVar60 = (float)(auVar13._8_4_ >> 4);
          fVar61 = (float)(bVar26 >> 4);
          fVar62 = (float)(uVar27 >> 4 & 0xf);
          fVar65 = (float)((uint)Var19 >> 4);
          fVar66 = (float)((uint)uVar18 >> 4);
          fVar67 = (float)(uint3)(auVar11._10_3_ >> 0x14);
          local_130._0_4_ =
               (float)(auVar46._0_4_ >> 4) * (float)(auVar46._0_4_ >> 4) * fVar31 + fVar37;
          local_130._4_4_ = fVar23 * fVar23 * fVar36 + fVar40;
          local_130._8_4_ = fVar60 * fVar60 * fVar39 + fVar42;
          local_130._12_4_ = fVar61 * fVar61 * fVar41 + fVar68;
          local_f0 = fVar62 * fVar62 * fVar31 + fVar37;
          fStack_ec = fVar65 * fVar65 * fVar36 + fVar40;
          fStack_e8 = fVar66 * fVar66 * fVar39 + fVar42;
          fStack_e4 = fVar67 * fVar67 * fVar41 + fVar68;
          fVar23 = (float)param_3[0x10];
          fVar37 = (float)param_3[0x11];
          fVar40 = (float)param_3[0x12];
          fVar42 = (float)param_3[0x13];
          local_e0 = local_e0 - (float)auVar52._0_4_ * (float)auVar52._0_4_ * fVar31;
          fStack_dc = fStack_dc - (float)auVar52._4_4_ * (float)auVar52._4_4_ * fVar36;
          fStack_d8 = fStack_d8 - (float)auVar52._8_4_ * (float)auVar52._8_4_ * fVar39;
          fStack_d4 = fStack_d4 - (float)auVar52._12_4_ * (float)auVar52._12_4_ * fVar41;
          iVar25 = param_3[0xb];
          fVar68 = (float)param_3[0xc];
          fVar31 = (float)param_3[0xd];
          fVar36 = (float)param_3[0xe];
          fVar39 = (float)param_3[0xf];
          auVar47._0_8_ =
               CONCAT44(fVar31 * ((local_130._4_4_ - fVar37) - (float)param_3[5]),
                        fVar68 * ((local_130._0_4_ - fVar23) - (float)param_3[4]));
          auVar47._8_4_ = fVar36 * ((local_130._8_4_ - fVar40) - (float)param_3[6]);
          auVar47._12_4_ = fVar39 * ((local_130._12_4_ - fVar42) - (float)param_3[7]);
          fVar41 = fVar68 * ((fVar23 + local_120) - (float)param_3[4]);
          fVar60 = fVar31 * ((fVar37 + fStack_11c) - (float)param_3[5]);
          fVar61 = fVar36 * ((fVar40 + fStack_118) - (float)param_3[6]);
          fVar62 = fVar39 * ((fVar42 + fStack_114) - (float)param_3[7]);
          auVar33._8_4_ = auVar47._8_4_;
          auVar33._0_8_ = auVar47._0_8_;
          auVar33._12_4_ = auVar47._12_4_;
          auVar4._4_4_ = fVar60;
          auVar4._0_4_ = fVar41;
          auVar4._8_4_ = fVar61;
          auVar4._12_4_ = fVar62;
          auVar34 = minps(auVar33,auVar4);
          auVar5._4_4_ = fVar60;
          auVar5._0_4_ = fVar41;
          auVar5._8_4_ = fVar61;
          auVar5._12_4_ = fVar62;
          auVar45 = maxps(auVar47,auVar5);
          uVar35 = auVar34._4_4_;
          uVar38 = auVar34._8_4_;
          auVar69._4_4_ = uVar35;
          auVar69._0_4_ = uVar35;
          auVar69._8_4_ = uVar35;
          auVar69._12_4_ = uVar35;
          auVar34 = maxps(auVar34,_DAT_01701b10);
          auVar6._4_4_ = uVar38;
          auVar6._0_4_ = uVar38;
          auVar6._8_4_ = uVar38;
          auVar6._12_4_ = uVar38;
          auVar32 = maxps(auVar69,auVar6);
          auVar34 = maxps(auVar34,auVar32);
          fVar41 = ((fVar23 + local_e0) - (float)param_3[4]) * fVar68;
          fVar60 = ((fVar37 + fStack_dc) - (float)param_3[5]) * fVar31;
          fVar61 = ((fVar40 + fStack_d8) - (float)param_3[6]) * fVar36;
          fVar62 = ((fVar42 + fStack_d4) - (float)param_3[7]) * fVar39;
          auVar53._0_8_ =
               CONCAT44(fVar31 * ((fStack_ec - fVar37) - (float)param_3[5]),
                        fVar68 * ((local_f0 - fVar23) - (float)param_3[4]));
          auVar53._8_4_ = fVar36 * ((fStack_e8 - fVar40) - (float)param_3[6]);
          auVar53._12_4_ = fVar39 * ((fStack_e4 - fVar42) - (float)param_3[7]);
          auVar43._8_4_ = auVar53._8_4_;
          auVar43._0_8_ = auVar53._0_8_;
          auVar43._12_4_ = auVar53._12_4_;
          auVar7._4_4_ = fVar60;
          auVar7._0_4_ = fVar41;
          auVar7._8_4_ = fVar61;
          auVar7._12_4_ = fVar62;
          auVar64 = maxps(auVar53,auVar7);
          auVar8._4_4_ = fVar60;
          auVar8._0_4_ = fVar41;
          auVar8._8_4_ = fVar61;
          auVar8._12_4_ = fVar62;
          auVar32 = minps(auVar43,auVar8);
          uVar35 = auVar32._4_4_;
          uVar38 = auVar32._8_4_;
          auVar70._4_4_ = uVar35;
          auVar70._0_4_ = uVar35;
          auVar70._8_4_ = uVar35;
          auVar70._12_4_ = uVar35;
          auVar32 = maxps(auVar32,_DAT_01701b10);
          auVar9._4_4_ = uVar38;
          auVar9._0_4_ = uVar38;
          auVar9._8_4_ = uVar38;
          auVar9._12_4_ = uVar38;
          auVar59 = maxps(auVar70,auVar9);
          auVar32 = maxps(auVar32,auVar59);
          uVar35 = auVar64._4_4_;
          uVar38 = auVar64._8_4_;
          auVar71._4_4_ = uVar35;
          auVar71._0_4_ = uVar35;
          auVar71._8_4_ = uVar35;
          auVar71._12_4_ = uVar35;
          auVar16._4_4_ = iVar25;
          auVar16._0_4_ = iVar25;
          auVar16._8_4_ = iVar25;
          auVar16._12_4_ = iVar25;
          auVar64 = minps(auVar64,auVar16);
          auVar10._4_4_ = uVar38;
          auVar10._0_4_ = uVar38;
          auVar10._8_4_ = uVar38;
          auVar10._12_4_ = uVar38;
          auVar59 = minps(auVar71,auVar10);
          auVar64 = minps(auVar64,auVar59);
          auVar72._4_4_ = -(uint)(auVar32._4_4_ <= auVar64._4_4_);
          auVar72._0_4_ = -(uint)(auVar32._0_4_ <= auVar64._0_4_);
          auVar72._8_4_ = -(uint)(auVar32._8_4_ <= auVar64._8_4_);
          auVar72._12_4_ = -(uint)(auVar32._12_4_ <= auVar64._12_4_);
          uVar27 = movmskps(local_c0,auVar72);
          uVar35 = auVar45._4_4_;
          uVar38 = auVar45._8_4_;
          auVar54._4_4_ = uVar38;
          auVar54._0_4_ = uVar38;
          auVar54._8_4_ = uVar38;
          auVar54._12_4_ = uVar38;
          auVar73._4_4_ = uVar35;
          auVar73._0_4_ = uVar35;
          auVar73._8_4_ = uVar35;
          auVar73._12_4_ = uVar35;
          auVar17._4_4_ = iVar25;
          auVar17._0_4_ = iVar25;
          auVar17._8_4_ = iVar25;
          auVar17._12_4_ = iVar25;
          auVar45 = minps(auVar45,auVar17);
          auVar64 = minps(auVar73,auVar54);
          auVar45 = minps(auVar45,auVar64);
          auVar55._4_4_ = -(uint)(auVar34._4_4_ <= auVar45._4_4_);
          auVar55._0_4_ = -(uint)(auVar34._0_4_ <= auVar45._0_4_);
          auVar55._8_4_ = -(uint)(auVar34._8_4_ <= auVar45._8_4_);
          auVar55._12_4_ = -(uint)(auVar34._12_4_ <= auVar45._12_4_);
          uVar29 = movmskps(local_100,auVar55);
          uVar27 = (uVar27 & 1) * 2 | uVar29 & 1;
          if (uVar27 == 3) {
            param_3[0x14] = (uint)(auVar32._0_4_ < auVar34._0_4_);
LAB_0121d888:
                    /* WARNING: Could not recover jumptable at 0x0121d888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_0121dd50 + uVar27 * 4))();
            return;
          }
          if (uVar27 < 4) goto LAB_0121d888;
        }
        else {
          piVar2 = (int *)*param_3;
          local_18 = TlsGetValue(DAT_01f8fc54);
          puVar28 = (undefined4 *)local_18[1];
          if (puVar28 < (undefined4 *)local_18[3]) {
            *puVar28 = "TtAabbCastQuery::processLeaf";
            uVar3 = rdtsc();
            local_2c = (undefined4)uVar3;
            puVar28[1] = local_2c;
            local_18[1] = (int)(puVar28 + 3);
          }
          local_3c = (uint)CONCAT12(*(undefined1 *)(local_190 + 3),*(undefined2 *)(local_190 + 4));
          local_1c = local_3c * 0x40 + *(int *)(*piVar2 + 0x20);
          uVar27 = *(uint *)(local_1c + 0xc);
          local_20 = uVar27 & 0x7f;
          if ((uVar27 & 0x10) == 0) {
            if ((uVar27 & 1) == 0) {
              local_18 = *(int **)(local_1c + 0x30);
              local_24 = (int *)(uint)*(byte *)(local_18 + 2);
              if ((((local_24 == (int *)0x16) || (local_24 == (int *)0x9)) ||
                  (local_24 == (int *)0x10)) || (local_24 == (int *)0x11)) {
                FUN_0100a440(local_170);
                FUN_01004c20(local_170);
                local_11 = (byte)(local_20 >> 2) & 1;
                FUN_01007050(local_170,piVar2[0xe]);
                local_90 = *piVar2;
                local_8c = piVar2[0xf];
                local_a0 = _DAT_01701b20;
                local_b0[0] = hkpStaticCompoundShape_Internals::AabbCastQuery::
                              AabbCastCollectorWrapper::vftable;
                local_88 = local_3c;
                local_84 = local_1c;
                local_80 = local_20;
                if (piVar2[0xc] == 0) {
                  FUN_014411b0(local_170,piVar2 + 4,local_70);
                }
                else {
                  FUN_01004cf0(local_170,piVar2[0xd]);
                  if ((local_11 == 0) && (local_24 == (int *)0x10)) {
                    TtSCS::castAabb_2(piVar2[0xc],&local_f0,&local_50,piVar2[0xf],0);
                    local_b0[0] = vftable;
                    pvVar24 = TlsGetValue(DAT_01f8fc54);
                    puVar28 = *(undefined4 **)((int)pvVar24 + 4);
                    if (puVar28 < *(undefined4 **)((int)pvVar24 + 0xc)) {
                      *puVar28 = &DAT_0164b09c;
                      uVar3 = rdtsc();
                      local_34 = (undefined4)uVar3;
                      puVar28[1] = local_34;
                      *(undefined4 **)((int)pvVar24 + 4) = puVar28 + 3;
                    }
                    goto LAB_0121db67;
                  }
                  (**(code **)(*(int *)piVar2[0xc] + 0x10))(&local_f0,piVar2[0x10],local_70);
                }
                if (local_11 != 0) {
                  auVar32 = *(undefined1 (*) [16])(local_1c + 0x20);
                  auVar34 = rcpps(auVar34,auVar32);
                  fVar23 = (2.0 - auVar34._0_4_ * auVar32._0_4_) * auVar34._0_4_;
                  fVar37 = (2.0 - auVar34._4_4_ * auVar32._4_4_) * auVar34._4_4_;
                  fVar40 = (2.0 - auVar34._8_4_ * auVar32._8_4_) * auVar34._8_4_;
                  fVar42 = (2.0 - auVar34._12_4_ * auVar32._12_4_) * auVar34._12_4_;
                  auVar34._0_8_ =
                       CONCAT44((float)local_70._4_4_ * fVar37,(float)local_70._0_4_ * fVar23);
                  auVar34._8_4_ = fStack_68 * fVar40;
                  auVar34._12_4_ = fStack_64 * fVar42;
                  auVar56._8_4_ = auVar34._8_4_;
                  auVar56._0_8_ = auVar34._0_8_;
                  auVar56._12_4_ = auVar34._12_4_;
                  auVar48._0_4_ = (float)local_60._0_4_ * fVar23;
                  auVar48._4_4_ = (float)local_60._4_4_ * fVar37;
                  auVar48._8_4_ = fStack_58 * fVar40;
                  auVar48._12_4_ = fStack_54 * fVar42;
                  _local_60 = maxps(auVar34,auVar48);
                  _local_70 = minps(auVar56,auVar48);
                  local_50 = local_50 * fVar23;
                  fStack_4c = fStack_4c * fVar37;
                  fStack_48 = fStack_48 * fVar40;
                  fStack_44 = fStack_44 * fVar42;
                }
                (**(code **)(*local_18 + 0x48))(local_70,&local_50,local_b0);
              }
              else {
                local_24 = (int *)(**(code **)(*local_18 + 0x38))();
                for (uVar27 = (**(code **)(*local_24 + 8))(); uVar27 != 0xffffffff;
                    uVar27 = (**(code **)(*local_24 + 0xc))(uVar27)) {
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
                    /* WARNING: Read-only address (ram,0x01701b20) is written */
                  local_18 = (int *)(local_3c << (*(byte *)(*piVar2 + 0x18) & 0x1f) | uVar27);
                  if (uVar27 < 0x25) {
                    if ((local_20 & 0x20) == 0) goto LAB_0121dafb;
                    if (uVar27 < 0xd) {
                      bVar26 = (char)uVar27 + 0xb;
                      iVar25 = local_1c;
                    }
                    else {
                      iVar25 = local_1c + 0x20;
                      bVar26 = (char)uVar27 - 0xd;
                    }
                    bVar30 = (*(uint *)(iVar25 + 0xc) & 1 << (bVar26 & 0x1f) & 0xc0ffffff) == 0;
LAB_0121daf4:
                    if (bVar30) goto LAB_0121dafb;
                  }
                  else {
                    if ((local_20 & 0x40) != 0) {
                      cVar22 = FUN_01230510(local_18);
                      bVar30 = cVar22 == '\0';
                      goto LAB_0121daf4;
                    }
LAB_0121dafb:
                    (*(code *)**(undefined4 **)piVar2[0xf])(local_18);
                    auVar44._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 8),0);
                    auVar44._12_4_ = *(undefined4 *)(piVar2[0xf] + 0x1c);
                    *(undefined1 (*) [16])(param_3 + 8) = auVar44;
                  }
                }
              }
              pvVar24 = TlsGetValue(DAT_01f8fc54);
              puVar28 = *(undefined4 **)((int)pvVar24 + 4);
              if (puVar28 < *(undefined4 **)((int)pvVar24 + 0xc)) {
                *puVar28 = &DAT_0164b09c;
                uVar3 = rdtsc();
                local_28 = (undefined4)uVar3;
                puVar28[1] = local_28;
                goto LAB_0121db61;
              }
            }
            else {
              (*(code *)**(undefined4 **)piVar2[0xf])
                        (local_3c << (*(byte *)(*piVar2 + 0x18) & 0x1f));
              iVar25 = *(int *)(piVar2[0xf] + 0x1c);
              param_3[8] = param_3[8];
              param_3[9] = param_3[9];
              param_3[10] = param_3[10];
              param_3[0xb] = iVar25;
              pvVar24 = TlsGetValue(DAT_01f8fc54);
              puVar28 = *(undefined4 **)((int)pvVar24 + 4);
              if (puVar28 < *(undefined4 **)((int)pvVar24 + 0xc)) {
                *puVar28 = &DAT_0164b09c;
                uVar3 = rdtsc();
                local_38 = (undefined4)uVar3;
                puVar28[1] = local_38;
                *(undefined4 **)((int)pvVar24 + 4) = puVar28 + 3;
              }
            }
          }
          else {
            pvVar24 = TlsGetValue(DAT_01f8fc54);
            puVar28 = *(undefined4 **)((int)pvVar24 + 4);
            if (puVar28 < *(undefined4 **)((int)pvVar24 + 0xc)) {
              *puVar28 = &DAT_0164b09c;
              uVar3 = rdtsc();
              local_30 = (undefined4)uVar3;
              puVar28[1] = local_30;
LAB_0121db61:
              *(undefined4 **)((int)pvVar24 + 4) = puVar28 + 3;
            }
          }
        }
LAB_0121db67:
        iVar25 = param_2[1];
        if (iVar25 <= local_40) {
          return;
        }
        pfVar1 = (float *)(*param_2 + -0x30 + iVar25 * 0x30);
        param_2[1] = iVar25 + -1;
        fVar23 = pfVar1[8];
        fVar37 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar42 = pfVar1[2];
        fVar68 = pfVar1[3];
        auVar34 = *(undefined1 (*) [16])(pfVar1 + 4);
        local_190 = *param_1 + (int)fVar23 * 6;
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
                    /* WARNING: Read-only address (ram,0x01701b20) is written */
  return;
}

// 0121DDC0  hkpClosestRayHitCollector::hkpClosestRayHitCollector  size=1922  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkpClosestRayHitCollector::hkpClosestRayHitCollector(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint5 uVar16;
  unkbyte9 Var17;
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  float fVar20;
  LPVOID pvVar21;
  undefined4 uVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  int *piVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar37;
  undefined1 auVar31 [16];
  float fVar36;
  float fVar38;
  undefined1 auVar32 [16];
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 uVar51;
  byte bVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar68;
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined **local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 *local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 local_110 [16];
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int local_f0;
  int local_e0;
  int local_d0 [2];
  undefined8 *local_c8;
  undefined4 local_c4;
  int *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  int *local_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined **local_50;
  float fStack_4c;
  int *piStack_48;
  float fStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined ***pppuStack_38;
  int **ppiStack_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d;
  float local_1c;
  undefined1 local_15;
  undefined ***local_14;
  
  if (param_1[1] != 0) {
    local_30 = param_2[1];
    fVar30 = (float)param_1[4];
    fVar34 = (float)param_1[5];
    fVar37 = (float)param_1[6];
    fVar39 = (float)param_1[7];
    fVar40 = (float)param_1[8];
    fVar44 = (float)param_1[9];
    fVar45 = (float)param_1[10];
    fVar46 = (float)param_1[0xb];
    iVar28 = *param_1;
    auVar67._0_8_ =
         CONCAT44((fVar34 - (float)param_3[5]) * (float)param_3[0xd],
                  (fVar30 - (float)param_3[4]) * (float)param_3[0xc]);
    auVar67._8_4_ = (fVar37 - (float)param_3[6]) * (float)param_3[0xe];
    auVar67._12_4_ = (fVar39 - (float)param_3[7]) * (float)param_3[0xf];
    auVar31._8_4_ = auVar67._8_4_;
    auVar31._0_8_ = auVar67._0_8_;
    auVar31._12_4_ = auVar67._12_4_;
    auVar61._0_4_ = (fVar40 - (float)param_3[4]) * (float)param_3[0xc];
    auVar61._4_4_ = (fVar44 - (float)param_3[5]) * (float)param_3[0xd];
    auVar61._8_4_ = (fVar45 - (float)param_3[6]) * (float)param_3[0xe];
    auVar61._12_4_ = (fVar46 - (float)param_3[7]) * (float)param_3[0xf];
    auVar47 = maxps(auVar67,auVar61);
    auVar31 = minps(auVar31,auVar61);
    iVar10 = param_3[0xb];
    uVar22 = auVar47._4_4_;
    uVar35 = auVar47._8_4_;
    auVar59._4_4_ = uVar35;
    auVar59._0_4_ = uVar35;
    auVar59._8_4_ = uVar35;
    auVar59._12_4_ = uVar35;
    auVar66._4_4_ = uVar22;
    auVar66._0_4_ = uVar22;
    auVar66._8_4_ = uVar22;
    auVar66._12_4_ = uVar22;
    auVar67 = minps(auVar66,auVar59);
    auVar76._4_4_ = iVar10;
    auVar76._0_4_ = iVar10;
    auVar76._8_4_ = iVar10;
    auVar76._12_4_ = iVar10;
    auVar47 = minps(auVar47,auVar76);
    uVar22 = auVar31._4_4_;
    uVar35 = auVar31._8_4_;
    auVar53._4_4_ = uVar35;
    auVar53._0_4_ = uVar35;
    auVar53._8_4_ = uVar35;
    auVar53._12_4_ = uVar35;
    auVar60._4_4_ = uVar22;
    auVar60._0_4_ = uVar22;
    auVar60._8_4_ = uVar22;
    auVar60._12_4_ = uVar22;
    auVar31 = maxps(auVar31,_DAT_01701b10);
    auVar61 = maxps(auVar60,auVar53);
    auVar67 = minps(auVar47,auVar67);
    auVar31 = maxps(auVar31,auVar61);
    auVar47._4_4_ = -(uint)(auVar31._4_4_ <= auVar67._4_4_);
    auVar47._0_4_ = -(uint)(auVar31._0_4_ <= auVar67._0_4_);
    auVar47._8_4_ = -(uint)(auVar31._8_4_ <= auVar67._8_4_);
    auVar47._12_4_ = -(uint)(auVar31._12_4_ <= auVar67._12_4_);
    fVar20 = 0.0;
    uVar24 = movmskps(param_3,auVar47);
    if ((uVar24 & 1) != 0) {
      do {
        if ((char)*(byte *)(iVar28 + 3) < '\0') {
          local_f0 = (int)fVar20 +
                     ((*(byte *)(iVar28 + 3) & 0x7f) << 0x10 | (uint)*(ushort *)(iVar28 + 4)) * 2;
          local_130 = (int)fVar20 + 1;
          local_e0 = *param_1;
          local_120 = (undefined4 *)(local_e0 + local_130 * 6);
          uVar24 = *(uint *)(local_e0 + local_f0 * 6);
          auVar5[0xc] = (char)(uVar24 >> 0x18);
          auVar5._0_12_ = ZEXT712(0);
          uVar16 = CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar24 >> 0x10));
          auVar19._5_8_ = 0;
          auVar19._0_5_ = uVar16;
          Var17 = CONCAT72(SUB137(auVar19 << 0x40,6),(ushort)(byte)(uVar24 >> 8));
          auVar54._0_4_ = uVar24 & 0xff;
          auVar54._4_9_ = Var17;
          auVar54._13_3_ = 0;
          local_e0 = local_e0 + local_f0 * 6;
          uVar22 = *local_120;
          bVar52 = (byte)((uint)uVar22 >> 0x18);
          uVar51 = (undefined1)((uint)uVar22 >> 8);
          uVar9 = (ulonglong)CONCAT12(uVar51,(short)uVar22) & 0xffffffffffff00ff;
          auVar6._8_4_ = 0;
          auVar6._0_8_ = uVar9;
          auVar6[0xc] = bVar52;
          auVar7[8] = (char)((uint)uVar22 >> 0x10);
          auVar7._0_8_ = uVar9;
          auVar7[9] = 0;
          auVar7._10_3_ = auVar6._10_3_;
          auVar18._5_8_ = 0;
          auVar18._0_5_ = auVar7._8_5_;
          auVar8[4] = uVar51;
          auVar8._0_4_ = (uint)uVar9;
          auVar8[5] = 0;
          auVar8._6_7_ = SUB137(auVar18 << 0x40,6);
          auVar48._0_4_ = (uint)uVar9 & 0xffff;
          auVar48._4_9_ = auVar8._4_9_;
          auVar48._13_3_ = 0;
          fVar29 = (fVar40 - fVar30) * 0.0044247787;
          fVar33 = (fVar44 - fVar34) * 0.0044247787;
          fVar36 = (fVar45 - fVar37) * 0.0044247787;
          fVar38 = (fVar46 - fVar39) * 0.0044247787;
          auVar31 = auVar48 & _DAT_01b34560;
          auVar54 = auVar54 & _DAT_01b34560;
          local_40 = (float)auVar31._0_4_ * (float)auVar31._0_4_ * fVar29;
          uStack_3c = (float)auVar31._4_4_ * (float)auVar31._4_4_ * fVar33;
          pppuStack_38 = (undefined ***)((float)auVar31._8_4_ * (float)auVar31._8_4_ * fVar36);
          ppiStack_34 = (int **)((float)auVar31._12_4_ * (float)auVar31._12_4_ * fVar38);
          fVar62 = (float)(auVar8._4_4_ >> 4);
          fVar63 = (float)(auVar7._8_4_ >> 4);
          fVar64 = (float)(bVar52 >> 4);
          fVar65 = (float)(uVar24 >> 4 & 0xf);
          fVar68 = (float)((uint)Var17 >> 4);
          fVar69 = (float)((uint)uVar16 >> 4);
          fVar70 = (float)(uint3)(auVar5._10_3_ >> 0x14);
          fVar20 = (float)param_3[0xc];
          fVar11 = (float)param_3[0xd];
          fVar12 = (float)param_3[0xe];
          fVar13 = (float)param_3[0xf];
          local_140 = (undefined **)(fVar40 - local_40);
          fStack_13c = fVar44 - uStack_3c;
          fStack_138 = fVar45 - (float)pppuStack_38;
          fStack_134 = fVar46 - (float)ppiStack_34;
          iVar28 = param_3[0xb];
          local_100 = fVar40 - (float)auVar54._0_4_ * (float)auVar54._0_4_ * fVar29;
          fStack_fc = fVar44 - (float)auVar54._4_4_ * (float)auVar54._4_4_ * fVar33;
          fStack_f8 = fVar45 - (float)auVar54._8_4_ * (float)auVar54._8_4_ * fVar36;
          fStack_f4 = fVar46 - (float)auVar54._12_4_ * (float)auVar54._12_4_ * fVar38;
          fVar40 = (float)param_3[4];
          fVar44 = (float)param_3[5];
          fVar45 = (float)param_3[6];
          fVar46 = (float)param_3[7];
          auVar41._0_4_ = ((float)local_140 - fVar40) * fVar20;
          auVar41._4_4_ = (fStack_13c - fVar44) * fVar11;
          auVar41._8_4_ = (fStack_138 - fVar45) * fVar12;
          auVar41._12_4_ = (fStack_134 - fVar46) * fVar13;
          local_110._0_4_ = fVar65 * fVar65 * fVar29 + fVar30;
          local_110._4_4_ = fVar68 * fVar68 * fVar33 + fVar34;
          local_110._8_4_ = fVar69 * fVar69 * fVar36 + fVar37;
          local_110._12_4_ = fVar70 * fVar70 * fVar38 + fVar39;
          auVar32._0_8_ =
               CONCAT44(((fVar62 * fVar62 * fVar33 + fVar34) - fVar44) * fVar11,
                        (((float)(auVar48._0_4_ >> 4) * (float)(auVar48._0_4_ >> 4) * fVar29 +
                         fVar30) - fVar40) * fVar20);
          auVar32._8_4_ = ((fVar63 * fVar63 * fVar36 + fVar37) - fVar45) * fVar12;
          auVar32._12_4_ = ((fVar64 * fVar64 * fVar38 + fVar39) - fVar46) * fVar13;
          auVar49._8_4_ = auVar32._8_4_;
          auVar49._0_8_ = auVar32._0_8_;
          auVar49._12_4_ = auVar32._12_4_;
          auVar31 = minps(auVar32,auVar41);
          auVar67 = maxps(auVar49,auVar41);
          uVar22 = auVar31._4_4_;
          uVar35 = auVar31._8_4_;
          auVar42._4_4_ = uVar35;
          auVar42._0_4_ = uVar35;
          auVar42._8_4_ = uVar35;
          auVar42._12_4_ = uVar35;
          auVar71._4_4_ = uVar22;
          auVar71._0_4_ = uVar22;
          auVar71._8_4_ = uVar22;
          auVar71._12_4_ = uVar22;
          auVar31 = maxps(auVar31,_DAT_01701b10);
          auVar47 = maxps(auVar71,auVar42);
          auVar31 = maxps(auVar31,auVar47);
          auVar43._0_8_ =
               CONCAT44((local_110._4_4_ - fVar44) * fVar11,
                        ((float)local_110._0_4_ - fVar40) * fVar20);
          auVar43._8_4_ = (local_110._8_4_ - fVar45) * fVar12;
          auVar43._12_4_ = (local_110._12_4_ - fVar46) * fVar13;
          auVar72._0_4_ = (local_100 - fVar40) * fVar20;
          auVar72._4_4_ = (fStack_fc - fVar44) * fVar11;
          auVar72._8_4_ = (fStack_f8 - fVar45) * fVar12;
          auVar72._12_4_ = (fStack_f4 - fVar46) * fVar13;
          auVar55._8_4_ = auVar43._8_4_;
          auVar55._0_8_ = auVar43._0_8_;
          auVar55._12_4_ = auVar43._12_4_;
          auVar61 = maxps(auVar55,auVar72);
          auVar47 = minps(auVar43,auVar72);
          uVar22 = auVar47._4_4_;
          uVar35 = auVar47._8_4_;
          auVar73._4_4_ = uVar35;
          auVar73._0_4_ = uVar35;
          auVar73._8_4_ = uVar35;
          auVar73._12_4_ = uVar35;
          auVar75._4_4_ = uVar22;
          auVar75._0_4_ = uVar22;
          auVar75._8_4_ = uVar22;
          auVar75._12_4_ = uVar22;
          auVar47 = maxps(auVar47,_DAT_01701b10);
          auVar76 = maxps(auVar75,auVar73);
          auVar47 = maxps(auVar47,auVar76);
          uVar22 = auVar61._4_4_;
          uVar35 = auVar61._8_4_;
          auVar77._4_4_ = uVar22;
          auVar77._0_4_ = uVar22;
          auVar77._8_4_ = uVar22;
          auVar77._12_4_ = uVar22;
          auVar74._4_4_ = uVar35;
          auVar74._0_4_ = uVar35;
          auVar74._8_4_ = uVar35;
          auVar74._12_4_ = uVar35;
          auVar14._4_4_ = iVar28;
          auVar14._0_4_ = iVar28;
          auVar14._8_4_ = iVar28;
          auVar14._12_4_ = iVar28;
          auVar61 = minps(auVar61,auVar14);
          auVar76 = minps(auVar77,auVar74);
          auVar61 = minps(auVar61,auVar76);
          auVar78._4_4_ = -(uint)(auVar47._4_4_ <= auVar61._4_4_);
          auVar78._0_4_ = -(uint)(auVar47._0_4_ <= auVar61._0_4_);
          auVar78._8_4_ = -(uint)(auVar47._8_4_ <= auVar61._8_4_);
          auVar78._12_4_ = -(uint)(auVar47._12_4_ <= auVar61._12_4_);
          uVar24 = movmskps(param_3,auVar78);
          uVar22 = auVar67._4_4_;
          uVar35 = auVar67._8_4_;
          auVar56._4_4_ = uVar35;
          auVar56._0_4_ = uVar35;
          auVar56._8_4_ = uVar35;
          auVar56._12_4_ = uVar35;
          auVar79._4_4_ = uVar22;
          auVar79._0_4_ = uVar22;
          auVar79._8_4_ = uVar22;
          auVar79._12_4_ = uVar22;
          auVar15._4_4_ = iVar28;
          auVar15._0_4_ = iVar28;
          auVar15._8_4_ = iVar28;
          auVar15._12_4_ = iVar28;
          auVar67 = minps(auVar67,auVar15);
          auVar61 = minps(auVar79,auVar56);
          auVar67 = minps(auVar67,auVar61);
          auVar57._4_4_ = -(uint)(auVar31._4_4_ <= auVar67._4_4_);
          auVar57._0_4_ = -(uint)(auVar31._0_4_ <= auVar67._0_4_);
          auVar57._8_4_ = -(uint)(auVar31._8_4_ <= auVar67._8_4_);
          auVar57._12_4_ = -(uint)(auVar31._12_4_ <= auVar67._12_4_);
          uVar25 = movmskps(local_120,auVar57);
          uVar24 = (uVar24 & 1) * 2 | uVar25 & 1;
          if (uVar24 == 3) {
            param_3[0x10] = (uint)(auVar47._0_4_ < auVar31._0_4_);
LAB_0121e063:
                    /* WARNING: Could not recover jumptable at 0x0121e063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_0121e5ec + uVar24 * 4))();
            return;
          }
          if (uVar24 < 4) goto LAB_0121e063;
        }
        else {
          piVar2 = (int *)*param_3;
          pvVar21 = TlsGetValue(DAT_01f8fc54);
          puVar26 = *(undefined4 **)((int)pvVar21 + 4);
          if (puVar26 < *(undefined4 **)((int)pvVar21 + 0xc)) {
            *puVar26 = "TtRayCastQuery::processLeaf";
            uVar4 = rdtsc();
            local_24 = (undefined4)uVar4;
            puVar26[1] = local_24;
            *(undefined4 **)((int)pvVar21 + 4) = puVar26 + 3;
          }
          local_1c = (float)(uint)CONCAT12(*(undefined1 *)(iVar28 + 3),*(undefined2 *)(iVar28 + 4));
          fVar20 = (float)((int)local_1c * 0x40 + *(int *)(*piVar2 + 0x20));
          uVar24 = *(uint *)((int)fVar20 + 0xc);
          local_14 = (undefined ***)(uVar24 & 0x7f);
          if ((uVar24 & 0x10) == 0) {
            _local_a0 = *(undefined1 (*) [16])(piVar2 + 4);
            local_90 = *(undefined1 (*) [16])(piVar2 + 8);
            local_80 = *(undefined8 *)(piVar2 + 0xc);
            local_78 = *(undefined8 *)(piVar2 + 0xe);
            if ((uVar24 & 2) != 0) {
              FUN_0100a440(&local_70);
              fVar30 = (float)piVar2[4] - local_40;
              fVar34 = (float)piVar2[5] - uStack_3c;
              fVar37 = (float)piVar2[6] - (float)pppuStack_38;
              local_a0._0_4_ = fStack_6c * fVar34 + fVar30 * local_70 + fVar37 * fStack_68;
              local_a0._4_4_ = fStack_5c * fVar34 + fVar30 * local_60 + fVar37 * fStack_58;
              fStack_98 = fStack_4c * fVar34 + fVar30 * (float)local_50 + fVar37 * (float)piStack_48
              ;
              fStack_94 = fStack_44 * fVar34 + fVar30 * fStack_4c + fVar37 * fStack_44;
              fVar30 = (float)piVar2[8] - local_40;
              fVar34 = (float)piVar2[9] - uStack_3c;
              fVar37 = (float)piVar2[10] - (float)pppuStack_38;
              auVar58._0_4_ = fVar30 * local_70;
              auVar58._4_4_ = fVar30 * local_60;
              auVar58._8_4_ = fVar30 * (float)local_50;
              auVar58._12_4_ = fVar30 * fStack_4c;
              local_90._0_4_ = fStack_6c * fVar34 + auVar58._0_4_ + fStack_68 * fVar37;
              local_90._4_4_ = fStack_5c * fVar34 + auVar58._4_4_ + fStack_58 * fVar37;
              local_90._8_4_ = fStack_4c * fVar34 + auVar58._8_4_ + (float)piStack_48 * fVar37;
              local_90._12_4_ = fStack_44 * fVar34 + auVar58._12_4_ + fStack_44 * fVar37;
              if (((uint)local_14 & 4) != 0) {
                auVar31 = *(undefined1 (*) [16])((int)fVar20 + 0x20);
                auVar47 = rcpps(auVar58,auVar31);
                fVar30 = (2.0 - auVar47._0_4_ * auVar31._0_4_) * auVar47._0_4_;
                fVar34 = (2.0 - auVar47._4_4_ * auVar31._4_4_) * auVar47._4_4_;
                fVar37 = (2.0 - auVar47._8_4_ * auVar31._8_4_) * auVar47._8_4_;
                fVar39 = (2.0 - auVar47._12_4_ * auVar31._12_4_) * auVar47._12_4_;
                local_a0._0_4_ = fVar30 * (float)local_a0._0_4_;
                local_a0._4_4_ = fVar34 * (float)local_a0._4_4_;
                fStack_98 = fVar37 * fStack_98;
                fStack_94 = fVar39 * fStack_94;
                local_90._0_4_ = fVar30 * local_90._0_4_;
                local_90._4_4_ = fVar34 * local_90._4_4_;
                local_90._8_4_ = fVar37 * local_90._8_4_;
                local_90._12_4_ = fVar39 * local_90._12_4_;
              }
            }
            pppuVar3 = (undefined ***)piVar2[0x1a];
            piVar27 = *(int **)((int)fVar20 + 0x30);
            if (pppuVar3 == (undefined ***)0x0) {
              local_15 = ((uint)local_14 & 0x60) != 0;
              if (((int)local_78 != 0) || ((bool)local_15)) {
                local_11c = -1;
                local_110._0_4_ = 0xffffffff;
                local_d0[0] = *piVar2;
                local_a4 = local_d0;
                fStack_44 = local_1c;
                ppiStack_34 = &local_b0;
                local_e0 = 0;
                local_f0 = 0;
                local_c4 = 0;
                local_ac = 0;
                uStack_3c._0_2_ = (ushort)(byte)local_15;
                pppuStack_38 = &local_140;
                local_140 = vftable;
                local_120 = (undefined4 *)0x3f800000;
                fStack_13c = 1.0;
                local_c8 = &DAT_01701ca0;
                local_d0[1] = 0xffffffff;
                local_a8 = &DAT_01701ca0;
                fStack_4c = 1.0;
                local_50 = _anon_557D7FF8::hkpStaticCompoundShape_RayHitCollectorWrapper::vftable;
                local_b0 = piVar27;
                piStack_48 = piVar2;
                local_40 = fVar20;
                local_14 = pppuVar3;
                (**(code **)(*piVar27 + 0x18))(local_a0,&local_b0,&local_50);
                if (local_e0 != 0) {
                  piVar27 = (int *)piVar2[0x10];
                  if (piVar27[0x10] == 0) {
                    FUN_00907980(&local_130);
                  }
                  else {
                    *piVar27 = local_130;
                    piVar27[1] = iStack_12c;
                    piVar27[2] = iStack_128;
                    piVar27[3] = iStack_124;
                    piVar27[4] = (int)local_120;
                    piVar27[5] = local_11c;
                    piVar27[6] = local_118;
                    piVar27[7] = local_114;
                    local_14 = (undefined ***)0x0;
                    piVar27 = (int *)local_110;
                    do {
                      iVar28 = *piVar27;
                      local_14 = (undefined ***)((int)local_14 + 1);
                      *(int *)(piVar2[0x10] + 0x20 + *(int *)(piVar2[0x10] + 0x40) * 4) = iVar28;
                      *(int *)(piVar2[0x10] + 0x40) = *(int *)(piVar2[0x10] + 0x40) + 1;
                      piVar27 = piVar27 + 1;
                    } while (iVar28 != -1);
                    *(int *)(piVar2[0x10] + 0x40) = *(int *)(piVar2[0x10] + 0x40) - (int)local_14;
                  }
                  goto LAB_0121e4b2;
                }
              }
              else {
                local_14 = pppuVar3;
                pcVar23 = (char *)(**(code **)(*piVar27 + 0x14))(&local_1d,local_a0,piVar2[0x10]);
                if (*pcVar23 != '\0') {
                  iVar28 = piVar2[0x10];
                  uVar24 = *(uint *)(iVar28 + 0x20 + *(int *)(iVar28 + 0x40) * 4);
                  if (uVar24 == 0xffffffff) {
                    *(int *)(iVar28 + 0x20 + *(int *)(iVar28 + 0x40) * 4) =
                         (int)local_1c << (*(byte *)(*piVar2 + 0x18) & 0x1f);
                    *(int *)(piVar2[0x10] + 0x40) = *(int *)(piVar2[0x10] + 0x40) + 1;
                    *(undefined4 *)(piVar2[0x10] + 0x20 + *(int *)(piVar2[0x10] + 0x40) * 4) =
                         0xffffffff;
                    *(int *)(piVar2[0x10] + 0x40) = *(int *)(piVar2[0x10] + 0x40) + -1;
                  }
                  else {
                    *(uint *)(iVar28 + 0x20 + *(int *)(iVar28 + 0x40) * 4) =
                         (int)local_1c << (*(byte *)(*piVar2 + 0x18) & 0x1f) | uVar24;
                  }
LAB_0121e4b2:
                  fVar30 = (float)param_3[0xb];
                  fVar20 = *(float *)(piVar2[0x10] + 0x10);
                  piVar2[0x11] = (int)(fVar30 * fVar20);
                  auVar50._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 8),0);
                  auVar50._12_4_ = fVar30 * fVar20;
                  *(undefined1 (*) [16])(param_3 + 8) = auVar50;
                  fVar34 = (float)param_3[9];
                  fVar37 = (float)param_3[10];
                  fVar39 = (float)param_3[0xb];
                  fVar40 = (float)param_3[5];
                  fVar44 = (float)param_3[6];
                  fVar45 = (float)param_3[7];
                  piVar2[8] = (int)(fVar30 * fVar20 * (float)param_3[8] + (float)param_3[4]);
                  piVar2[9] = (int)(fVar30 * fVar20 * fVar34 + fVar40);
                  piVar2[10] = (int)(fVar30 * fVar20 * fVar37 + fVar44);
                  piVar2[0xb] = (int)(fVar30 * fVar20 * fVar39 + fVar45);
                  *(undefined4 *)(piVar2[0x10] + 0x10) = 0x3f800000;
                  piVar2[0x18] = (int)local_1c;
                }
              }
            }
            else {
              local_b4 = piVar2[0x19];
              local_b8 = *(undefined4 *)(local_b4 + 8);
              fStack_44 = local_1c;
              ppiStack_34 = &local_c0;
              uStack_3c = (float)(CONCAT22(uStack_3c._2_2_,
                                           CONCAT11((char)((uint)local_14 >> 1),
                                                    ((uint)local_14 & 0x60) != 0)) & 0xffff01ff);
              local_bc = 0;
              fStack_4c = 1.0;
              local_50 = _anon_557D7FF8::hkpStaticCompoundShape_RayHitCollectorWrapper::vftable;
              local_c0 = piVar27;
              piStack_48 = piVar2;
              local_40 = fVar20;
              pppuStack_38 = pppuVar3;
              local_14 = pppuVar3;
              (**(code **)(*piVar27 + 0x18))(local_a0,&local_c0,&local_50);
            }
            pvVar21 = TlsGetValue(DAT_01f8fc54);
            puVar26 = *(undefined4 **)((int)pvVar21 + 4);
            if (puVar26 < *(undefined4 **)((int)pvVar21 + 0xc)) {
              *puVar26 = &DAT_0164b09c;
              uVar4 = rdtsc();
              uVar22 = (undefined4)uVar4;
              local_2c = uVar22;
              goto LAB_0121e5a5;
            }
          }
          else {
            pvVar21 = TlsGetValue(DAT_01f8fc54);
            puVar26 = *(undefined4 **)((int)pvVar21 + 4);
            if (puVar26 < *(undefined4 **)((int)pvVar21 + 0xc)) {
              *puVar26 = &DAT_0164b09c;
              uVar4 = rdtsc();
              uVar22 = (undefined4)uVar4;
              local_28 = uVar22;
LAB_0121e5a5:
              puVar26[1] = uVar22;
              *(undefined4 **)((int)pvVar21 + 4) = puVar26 + 3;
            }
          }
        }
        iVar28 = param_2[1];
        if (iVar28 <= local_30) {
          return;
        }
        pfVar1 = (float *)(*param_2 + -0x30 + iVar28 * 0x30);
        param_2[1] = iVar28 + -1;
        fVar20 = pfVar1[8];
        fVar30 = *pfVar1;
        fVar34 = pfVar1[1];
        fVar37 = pfVar1[2];
        fVar39 = pfVar1[3];
        fVar40 = pfVar1[4];
        fVar44 = pfVar1[5];
        fVar45 = pfVar1[6];
        fVar46 = pfVar1[7];
        iVar28 = *param_1 + (int)fVar20 * 6;
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
  return;
}

// 0121E600  FUN_0121e600  size=112  [run]
void __fastcall FUN_0121e600(int *param_1)

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

// 0121F2A0  FUN_0121f2a0  size=246  [run]
void FUN_0121f2a0(undefined4 param_1,undefined4 param_2)

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
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  hkpAabbCastCollector::hkpAabbCastCollector_2(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 0121F3A0  FUN_0121f3a0  size=194  [run]
void __thiscall FUN_0121f3a0(int *param_1,undefined4 param_2,int param_3)

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

// 0121F470  FUN_0121f470  size=246  [run]
void FUN_0121f470(undefined4 param_1,undefined4 param_2)

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
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  hkpClosestRayHitCollector::hkpClosestRayHitCollector(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 0121F570  FUN_0121f570  size=149  [run]
void __thiscall FUN_0121f570(int *param_1,int *param_2)

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

// 0121FFC0  FUN_0121ffc0  size=127  [run]
void __fastcall FUN_0121ffc0(int param_1)

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
    FUN_0121cca0(&local_20);
    FUN_01215de0(param_1);
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

// 012202D0  FUN_012202d0  size=420  [run]
void FUN_012202d0(undefined4 *param_1,undefined4 param_2,float *param_3,float *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int local_24 [4];
  int local_14;
  
  local_90[0] = param_5;
  local_50 = (param_3[4] - *param_3) * 0.5;
  fStack_4c = (param_3[5] - param_3[1]) * 0.5;
  fStack_48 = (param_3[6] - param_3[2]) * 0.5;
  fStack_44 = (param_3[7] - param_3[3]) * 0.5;
  local_80 = (*param_3 + param_3[4]) * 0.5;
  fStack_7c = (param_3[1] + param_3[5]) * 0.5;
  fStack_78 = (param_3[2] + param_3[6]) * 0.5;
  fStack_74 = (param_3[3] + param_3[7]) * 0.5;
  fVar5 = *param_4 - local_80;
  fVar6 = param_4[1] - fStack_7c;
  fVar7 = param_4[2] - fStack_78;
  fVar8 = param_4[3] - fStack_74;
  local_70._4_4_ = fVar6;
  local_70._0_4_ = fVar5;
  local_70._8_4_ = fVar7;
  local_70._12_4_ = param_6;
  auVar9._4_4_ = fVar6;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar7;
  auVar9._12_4_ = fVar8;
  auVar9 = rcpps(local_70,auVar9);
  local_60 = -(uint)(fVar5 == 0.0) & 0x7f7fffee |
             ~-(uint)(fVar5 == 0.0) & (uint)((2.0 - auVar9._0_4_ * fVar5) * auVar9._0_4_);
  uStack_5c = -(uint)(fVar6 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar6 == 0.0) & (uint)((2.0 - auVar9._4_4_ * fVar6) * auVar9._4_4_);
  uStack_58 = -(uint)(fVar7 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar7 == 0.0) & (uint)((2.0 - auVar9._8_4_ * fVar7) * auVar9._8_4_);
  uStack_54 = -(uint)(fVar8 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar8 == 0.0) & (uint)((2.0 - auVar9._12_4_ * fVar8) * auVar9._12_4_);
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0xc00U))
  {
    local_24[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0xc00U;
  }
  local_24[2] = 0x80000040;
  local_24[0] = local_24[3];
  hkpAabbCastCollector::hkpAabbCastCollector_2(param_2,local_24,local_90);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],(local_24[2] & 0x3fffffffU) * 0x30);
  }
  *param_1 = local_70._12_4_;
  param_1[1] = local_70._12_4_;
  param_1[2] = local_70._12_4_;
  param_1[3] = local_70._12_4_;
  return;
}

// 01220480  FUN_01220480  size=322  [run]
void FUN_01220480(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_80 [4];
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
  undefined4 local_40;
  int local_24 [4];
  int local_14;
  
  local_80[0] = param_4;
  local_70 = *param_3;
  uStack_6c = param_3[1];
  uStack_68 = param_3[2];
  uStack_64 = param_3[3];
  local_60 = param_3[4];
  uStack_5c = param_3[5];
  uStack_58 = param_3[6];
  uStack_54 = param_3[7];
  local_50 = param_3[8];
  uStack_4c = param_3[9];
  uStack_48 = param_3[10];
  uStack_44 = param_3[0xb];
  local_40 = 0xffffffff;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0xc00U))
  {
    local_24[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0xc00U;
  }
  local_24[2] = 0x80000040;
  local_24[0] = local_24[3];
  hkpClosestRayHitCollector::hkpClosestRayHitCollector(param_2,local_24,local_80);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],(local_24[2] & 0x3fffffffU) * 0x30);
  }
  *param_1 = uStack_54;
  param_1[1] = uStack_54;
  param_1[2] = uStack_54;
  param_1[3] = uStack_54;
  return;
}

// 012205D0  FUN_012205d0  size=188  [run]
void __thiscall FUN_012205d0(int *param_1,int param_2)

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
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -0x10;
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

// 01220690  TtUnlimitedAabbQuery::processLeaf  size=1796  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TtUnlimitedAabbQuery::processLeaf(int *param_1,int *param_2,undefined4 *param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  ulonglong uVar13;
  uint5 uVar14;
  unkbyte9 Var15;
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  char cVar18;
  undefined4 uVar19;
  undefined1 (*pauVar20) [16];
  LPVOID pvVar21;
  uint uVar22;
  int iVar23;
  byte bVar24;
  undefined4 *puVar25;
  int iVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 local_180 [64];
  undefined1 local_140 [64];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 *local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 *local_90;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  
  if (param_1[1] != 0) {
    local_50 = param_2[1];
    local_4c = 0;
    do {
      fVar50 = (float)param_1[4];
      fVar52 = (float)param_1[5];
      fVar55 = (float)param_1[6];
      fVar56 = (float)param_1[7];
      auVar40 = *(undefined1 (*) [16])(param_1 + 8);
      puVar25 = (undefined4 *)*param_1;
      iVar26 = 0;
      if (param_3[1] != 0) {
        auVar49 = *(undefined1 (*) [16])(param_3 + 8);
        bVar27 = fVar50 <= auVar49._0_4_;
        bVar6 = fVar52 <= auVar49._4_4_;
        bVar7 = fVar55 <= auVar49._8_4_;
        bVar8 = fVar56 <= auVar49._12_4_;
        auVar49._4_4_ = (float)-(uint)bVar6;
        auVar49._0_4_ = (float)-(uint)bVar27;
        auVar49._8_4_ = (float)-(uint)bVar7;
        auVar49._12_4_ = (float)-(uint)bVar8;
        auVar45._0_4_ = -(uint)((float)param_3[4] <= auVar40._0_4_ && bVar27);
        auVar45._4_4_ = -(uint)((float)param_3[5] <= auVar40._4_4_ && bVar6);
        auVar45._8_4_ = -(uint)((float)param_3[6] <= auVar40._8_4_ && bVar7);
        auVar45._12_4_ = -(uint)((float)param_3[7] <= auVar40._12_4_ && bVar8);
        uVar19 = movmskps(param_1,auVar45);
        if (((byte)uVar19 & 7) == 7) {
LAB_01220710:
          while ((char)*(byte *)((int)puVar25 + 3) < '\0') {
            iVar23 = iVar26 + ((*(byte *)((int)puVar25 + 3) & 0x7f) << 0x10 |
                              (uint)*(ushort *)(puVar25 + 1)) * 2;
            iVar2 = *param_1;
            local_d0 = (undefined4 *)(iVar2 + (iVar26 * 3 + 3) * 2);
            uVar22 = *(uint *)(iVar2 + iVar23 * 6);
            auVar9[0xc] = (char)(uVar22 >> 0x18);
            auVar9._0_12_ = ZEXT712(0);
            uVar14 = CONCAT32(auVar9._10_3_,(ushort)(byte)(uVar22 >> 0x10));
            auVar17._5_8_ = 0;
            auVar17._0_5_ = uVar14;
            Var15 = CONCAT72(SUB137(auVar17 << 0x40,6),(ushort)(byte)(uVar22 >> 8));
            auVar48._0_4_ = uVar22 & 0xff;
            auVar48._4_9_ = Var15;
            auVar48._13_3_ = 0;
            local_90 = (undefined4 *)(iVar2 + iVar23 * 6);
            uVar19 = *local_d0;
            bVar24 = (byte)((uint)uVar19 >> 0x18);
            uVar47 = (undefined1)((uint)uVar19 >> 8);
            uVar13 = (ulonglong)CONCAT12(uVar47,(short)uVar19) & 0xffffffffffff00ff;
            auVar10._8_4_ = 0;
            auVar10._0_8_ = uVar13;
            auVar10[0xc] = bVar24;
            auVar11[8] = (char)((uint)uVar19 >> 0x10);
            auVar11._0_8_ = uVar13;
            auVar11[9] = 0;
            auVar11._10_3_ = auVar10._10_3_;
            auVar16._5_8_ = 0;
            auVar16._0_5_ = auVar11._8_5_;
            auVar12[4] = uVar47;
            auVar12._0_4_ = (uint)uVar13;
            auVar12[5] = 0;
            auVar12._6_7_ = SUB137(auVar16 << 0x40,6);
            auVar44._0_4_ = (uint)uVar13 & 0xffff;
            auVar44._4_9_ = auVar12._4_9_;
            auVar44._13_3_ = 0;
            auVar45 = auVar44 & _DAT_01b34560;
            auVar48 = auVar48 & _DAT_01b34560;
            fVar57 = (float)(uVar22 >> 4 & 0xf);
            fVar58 = (float)((uint)Var15 >> 4);
            fVar59 = (float)((uint)uVar14 >> 4);
            fVar60 = (float)(uint3)(auVar9._10_3_ >> 0x14);
            local_80 = (float)auVar48._0_4_;
            fStack_7c = (float)auVar48._4_4_;
            fStack_78 = (float)auVar48._8_4_;
            fStack_74 = (float)auVar48._12_4_;
            fVar51 = (float)(auVar12._4_4_ >> 4);
            fVar53 = (float)(auVar11._8_4_ >> 4);
            fVar54 = (float)(bVar24 >> 4);
            fVar39 = auVar40._0_4_;
            fVar42 = auVar40._4_4_;
            fVar43 = auVar40._12_4_;
            fVar36 = auVar40._8_4_;
            fVar31 = (fVar39 - fVar50) * 0.0044247787;
            fVar35 = (fVar42 - fVar52) * 0.0044247787;
            fVar37 = (fVar36 - fVar55) * 0.0044247787;
            fVar38 = (fVar43 - fVar56) * 0.0044247787;
            local_100._0_4_ =
                 (float)(auVar44._0_4_ >> 4) * (float)(auVar44._0_4_ >> 4) * fVar31 + fVar50;
            local_100._4_4_ = fVar51 * fVar51 * fVar35 + fVar52;
            local_100._8_4_ = fVar53 * fVar53 * fVar37 + fVar55;
            local_100._12_4_ = fVar54 * fVar54 * fVar38 + fVar56;
            auVar49._0_4_ = fVar57 * fVar57 * fVar31 + fVar50;
            auVar49._4_4_ = fVar58 * fVar58 * fVar35 + fVar52;
            auVar49._8_4_ = fVar59 * fVar59 * fVar37 + fVar55;
            auVar49._12_4_ = fVar60 * fVar60 * fVar38 + fVar56;
            fVar50 = fVar39 - (float)auVar45._0_4_ * (float)auVar45._0_4_ * fVar31;
            fVar52 = fVar42 - (float)auVar45._4_4_ * (float)auVar45._4_4_ * fVar35;
            local_f0._0_8_ = CONCAT44(fVar52,fVar50);
            local_f0._8_4_ = fVar36 - (float)auVar45._8_4_ * (float)auVar45._8_4_ * fVar37;
            local_f0._12_4_ = fVar43 - (float)auVar45._12_4_ * (float)auVar45._12_4_ * fVar38;
            local_b0._0_4_ = fVar39 - local_80 * local_80 * fVar31;
            local_b0._4_4_ = fVar42 - fStack_7c * fStack_7c * fVar35;
            local_b0._8_4_ = fVar36 - fStack_78 * fStack_78 * fVar37;
            local_b0._12_4_ = fVar43 - fStack_74 * fStack_74 * fVar38;
            if ((param_3[1] == 0) ||
               (auVar32._0_4_ =
                     -(uint)((float)param_3[4] <= fVar50 && local_100._0_4_ <= (float)param_3[8]),
               auVar32._4_4_ =
                    -(uint)((float)param_3[5] <= fVar52 && local_100._4_4_ <= (float)param_3[9]),
               auVar32._8_4_ =
                    -(uint)(local_100._8_4_ <= (float)param_3[10] &&
                           (float)param_3[6] <= local_f0._8_4_),
               auVar32._12_4_ =
                    -(uint)((float)param_3[7] <= local_f0._12_4_ &&
                           local_100._12_4_ <= (float)param_3[0xb]),
               uVar19 = movmskps(local_d0,auVar32), ((byte)uVar19 & 7) != 7)) {
              bVar24 = 0;
            }
            else {
              bVar24 = 1;
            }
            if ((param_3[1] == 0) ||
               (auVar33._0_4_ =
                     -(uint)(auVar49._0_4_ <= (float)param_3[8] &&
                            (float)param_3[4] <= local_b0._0_4_),
               auVar33._4_4_ =
                    -(uint)(auVar49._4_4_ <= (float)param_3[9] &&
                           (float)param_3[5] <= local_b0._4_4_),
               auVar33._8_4_ =
                    -(uint)((float)param_3[6] <= local_b0._8_4_ &&
                           auVar49._8_4_ <= (float)param_3[10]),
               auVar33._12_4_ =
                    -(uint)(auVar49._12_4_ <= (float)param_3[0xb] &&
                           (float)param_3[7] <= local_b0._12_4_), uVar19 = movmskps(param_3,auVar33)
               , ((byte)uVar19 & 7) != 7)) {
              cVar18 = '\0';
            }
            else {
              cVar18 = '\x01';
            }
            local_c0 = auVar49;
            switch(-cVar18 & 2U | bVar24) {
            default:
              goto LAB_01220d48;
            case 1:
              auVar40._8_4_ = local_f0._8_4_;
              auVar40._0_8_ = local_f0._0_8_;
              auVar40._12_4_ = local_f0._12_4_;
              iVar26 = iVar26 + 1;
              puVar25 = local_d0;
              fVar50 = local_100._0_4_;
              fVar52 = local_100._4_4_;
              fVar55 = local_100._8_4_;
              fVar56 = local_100._12_4_;
              break;
            case 2:
              iVar26 = iVar23;
              puVar25 = local_90;
              auVar40 = local_b0;
              fVar50 = auVar49._0_4_;
              fVar52 = auVar49._4_4_;
              fVar55 = auVar49._8_4_;
              fVar56 = auVar49._12_4_;
              break;
            case 3:
              if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
              }
              pauVar20 = (undefined1 (*) [16])(param_2[1] * 0x30 + *param_2);
              param_2[1] = param_2[1] + 1;
              pauVar20[1] = local_b0;
              *(int *)pauVar20[2] = iVar23;
              *pauVar20 = local_c0;
              iVar26 = iVar26 + 1;
              puVar25 = local_d0;
              auVar40 = local_f0;
              auVar49 = local_c0;
              fVar50 = local_100._0_4_;
              fVar52 = local_100._4_4_;
              fVar55 = local_100._8_4_;
              fVar56 = local_100._12_4_;
            }
          }
          if (param_3[1] == 0) {
            param_3[1] = 0;
          }
          else {
            local_18 = (int *)*param_3;
            pvVar21 = TlsGetValue(DAT_01f8fc54);
            puVar3 = *(undefined4 **)((int)pvVar21 + 4);
            if (puVar3 < *(undefined4 **)((int)pvVar21 + 0xc)) {
              *puVar3 = "TtUnlimitedAabbQuery::processLeaf";
              uVar5 = rdtsc();
              local_14 = (undefined4)uVar5;
              puVar3[1] = local_14;
              *(undefined4 **)((int)pvVar21 + 4) = puVar3 + 3;
            }
            local_48 = (uint)CONCAT12(*(undefined1 *)((int)puVar25 + 3),*(undefined2 *)(puVar25 + 1)
                                     );
            iVar26 = local_48 * 0x40 + *(int *)(*local_18 + 0x20);
            uVar22 = *(uint *)(iVar26 + 0xc);
            local_30 = uVar22 & 0x7f;
            local_3c = iVar26;
            if ((uVar22 & 0x10) == 0) {
              if ((uVar22 & 1) == 0) {
                piVar4 = *(int **)(iVar26 + 0x30);
                switch((char)piVar4[2]) {
                case '\a':
                case '\t':
                case '\x10':
                case '\x11':
                case '\x16':
                  if ((uVar22 & 2) == 0) {
                    _local_70 = *(undefined1 (*) [16])(local_18 + 4);
                    _local_60 = *(undefined1 (*) [16])(local_18 + 8);
                  }
                  else {
                    FUN_0100a440(local_140);
                    FUN_01004c20(local_140);
                    FUN_014411b0(local_180,local_18 + 4,local_70);
                    if ((local_30 & 4) != 0) {
                      auVar40 = *(undefined1 (*) [16])(iVar26 + 0x20);
                      uVar22 = -(uint)(auVar40._0_4_ == 0.0);
                      uVar28 = -(uint)(auVar40._4_4_ == 0.0);
                      uVar29 = -(uint)(auVar40._8_4_ == 0.0);
                      uVar30 = -(uint)(auVar40._12_4_ == 0.0);
                      auVar49 = rcpps(auVar49,auVar40);
                      fVar50 = (float)(uVar22 & 0x5f7ffff0 |
                                      ~uVar22 & (uint)((2.0 - auVar40._0_4_ * auVar49._0_4_) *
                                                      auVar49._0_4_));
                      fVar52 = (float)(uVar28 & 0x5f7ffff0 |
                                      ~uVar28 & (uint)((2.0 - auVar40._4_4_ * auVar49._4_4_) *
                                                      auVar49._4_4_));
                      fVar55 = (float)(uVar29 & 0x5f7ffff0 |
                                      ~uVar29 & (uint)((2.0 - auVar40._8_4_ * auVar49._8_4_) *
                                                      auVar49._8_4_));
                      fVar56 = (float)(uVar30 & 0x5f7ffff0 |
                                      ~uVar30 & (uint)((2.0 - auVar40._12_4_ * auVar49._12_4_) *
                                                      auVar49._12_4_));
                      auVar34._0_8_ =
                           CONCAT44((float)local_70._4_4_ * fVar52,(float)local_70._0_4_ * fVar50);
                      auVar34._8_4_ = fStack_68 * fVar55;
                      auVar34._12_4_ = fStack_64 * fVar56;
                      auVar46._0_4_ = (float)local_60._0_4_ * fVar50;
                      auVar46._4_4_ = (float)local_60._4_4_ * fVar52;
                      auVar46._8_4_ = fStack_58 * fVar55;
                      auVar46._12_4_ = fStack_54 * fVar56;
                      auVar41._8_4_ = auVar34._8_4_;
                      auVar41._0_8_ = auVar34._0_8_;
                      auVar41._12_4_ = auVar34._12_4_;
                      _local_70 = minps(auVar41,auVar46);
                      _local_60 = maxps(auVar34,auVar46);
                    }
                  }
                  local_28 = 0;
                  local_24 = (int *)0x0;
                  local_20 = -0x80000000;
                  (**(code **)(*piVar4 + 0x44))(local_70,&local_28);
                  piVar4 = local_24;
joined_r0x01220b1b:
                  while (piVar4 = (int *)((int)piVar4 + -1), local_34 = piVar4, -1 < (int)piVar4) {
                    uVar22 = *(uint *)(local_28 + (int)piVar4 * 4);
                    *(uint *)(local_28 + (int)piVar4 * 4) =
                         local_48 << (*(byte *)(*local_18 + 0x18) & 0x1f) | uVar22;
                    if (0x24 < uVar22) goto LAB_01220b77;
                    if ((local_30 & 0x20) != 0) {
                      if (uVar22 < 0xd) {
                        bVar24 = (char)uVar22 + 0xb;
                        iVar26 = local_3c;
                      }
                      else {
                        iVar26 = local_3c + 0x20;
                        bVar24 = (char)uVar22 - 0xd;
                      }
                      bVar27 = (*(uint *)(iVar26 + 0xc) & 1 << (bVar24 & 0x1f) & 0xc0ffffff) == 0;
                      goto LAB_01220b95;
                    }
                  }
                  FUN_01217510(&PTR_vftable_018e9b94,local_28,local_24);
                  local_24 = (int *)0x0;
                  if (-1 < local_20) {
                    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
                  }
                  local_28 = 0;
                  local_20 = 0x80000000;
                  pvVar21 = TlsGetValue(DAT_01f8fc54);
                  puVar25 = *(undefined4 **)((int)pvVar21 + 4);
                  if (puVar25 < *(undefined4 **)((int)pvVar21 + 0xc)) {
                    *puVar25 = &DAT_0164b09c;
                    uVar5 = rdtsc();
                    uVar19 = (undefined4)uVar5;
                    local_38 = uVar19;
LAB_01220d25:
                    puVar25[1] = uVar19;
                    *(undefined4 **)((int)pvVar21 + 4) = puVar25 + 3;
                  }
                  break;
                default:
                  local_34 = (int *)(**(code **)(*piVar4 + 0x38))();
                  for (uVar22 = (**(code **)(*local_34 + 8))(); uVar22 != 0xffffffff;
                      uVar22 = (**(code **)(*local_34 + 0xc))(uVar22)) {
                    local_40 = local_48 << (*(byte *)(*local_18 + 0x18) & 0x1f) | uVar22;
                    if (uVar22 < 0x25) {
                      if ((local_30 & 0x20) == 0) goto LAB_01220cb3;
                      if (uVar22 < 0xd) {
                        bVar24 = (char)uVar22 + 0xb;
                        iVar23 = iVar26;
                      }
                      else {
                        iVar23 = iVar26 + 0x20;
                        bVar24 = (char)uVar22 - 0xd;
                      }
                      bVar27 = (*(uint *)(iVar23 + 0xc) & 1 << (bVar24 & 0x1f) & 0xc0ffffff) == 0;
LAB_01220caf:
                      if (bVar27) goto LAB_01220cb3;
                    }
                    else {
                      if ((local_30 & 0x40) != 0) {
                        cVar18 = FUN_01230510(local_40);
                        bVar27 = cVar18 == '\0';
                        goto LAB_01220caf;
                      }
LAB_01220cb3:
                      piVar4 = (int *)local_18[0xc];
                      if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
                        FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
                      }
                      *(uint *)(*piVar4 + piVar4[1] * 4) = local_40;
                      piVar4[1] = piVar4[1] + 1;
                      iVar26 = local_3c;
                    }
                  }
                  pvVar21 = TlsGetValue(DAT_01f8fc54);
                  puVar25 = *(undefined4 **)((int)pvVar21 + 4);
                  if (puVar25 < *(undefined4 **)((int)pvVar21 + 0xc)) {
                    *puVar25 = &DAT_0164b09c;
                    uVar5 = rdtsc();
                    uVar19 = (undefined4)uVar5;
                    local_44 = uVar19;
                    goto LAB_01220d25;
                  }
                }
              }
              else {
                piVar4 = (int *)local_18[0xc];
                iVar26 = local_48 << (*(byte *)(*local_18 + 0x18) & 0x1f);
                if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
                }
                *(int *)(*piVar4 + piVar4[1] * 4) = iVar26;
                piVar4[1] = piVar4[1] + 1;
                pvVar21 = TlsGetValue(DAT_01f8fc54);
                puVar25 = *(undefined4 **)((int)pvVar21 + 4);
                if (puVar25 < *(undefined4 **)((int)pvVar21 + 0xc)) {
                  *puVar25 = &DAT_0164b09c;
                  uVar5 = rdtsc();
                  local_2c = (undefined4)uVar5;
                  puVar25[1] = local_2c;
                  *(undefined4 **)((int)pvVar21 + 4) = puVar25 + 3;
                  param_3[1] = 1;
                  goto LAB_01220d48;
                }
              }
            }
            else {
              pvVar21 = TlsGetValue(DAT_01f8fc54);
              puVar25 = *(undefined4 **)((int)pvVar21 + 4);
              if (puVar25 < *(undefined4 **)((int)pvVar21 + 0xc)) {
                *puVar25 = &DAT_0164b09c;
                uVar5 = rdtsc();
                uVar19 = (undefined4)uVar5;
                local_1c = uVar19;
                goto LAB_01220d25;
              }
            }
            param_3[1] = 1;
          }
LAB_01220d48:
          iVar23 = param_2[1];
          if (local_50 < iVar23) {
            iVar2 = *param_2;
            param_2[1] = iVar23 + -1;
            pfVar1 = (float *)(iVar2 + -0x30 + iVar23 * 0x30);
            iVar26 = *(int *)(iVar2 + iVar23 * 0x30 + -0x10);
            puVar25 = (undefined4 *)(*param_1 + iVar26 * 6);
            auVar40 = *(undefined1 (*) [16])(iVar2 + -0x20 + iVar23 * 0x30);
            fVar50 = *pfVar1;
            fVar52 = pfVar1[1];
            fVar55 = pfVar1[2];
            fVar56 = pfVar1[3];
            goto LAB_01220710;
          }
        }
      }
      local_4c = local_4c + 1;
    } while (local_4c < 1);
  }
  return;
LAB_01220b77:
  if ((local_30 & 0x40) != 0) {
    cVar18 = FUN_01230510(*(undefined4 *)(local_28 + (int)piVar4 * 4));
    bVar27 = cVar18 == '\0';
LAB_01220b95:
    if ((!bVar27) && (local_24 = (int *)((int)local_24 + -1), local_24 != piVar4)) {
      *(undefined4 *)(local_28 + (int)piVar4 * 4) = *(undefined4 *)(local_28 + (int)local_24 * 4);
    }
  }
  goto joined_r0x01220b1b;
}

// 01220DD0  TtLimitedAabbQuery::processLeaf  size=1888  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TtLimitedAabbQuery::processLeaf(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  ulonglong uVar15;
  uint5 uVar16;
  unkbyte9 Var17;
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  char cVar20;
  undefined4 uVar21;
  undefined1 (*pauVar22) [16];
  LPVOID pvVar23;
  uint *puVar24;
  uint uVar25;
  byte bVar26;
  int iVar27;
  undefined4 *puVar28;
  uint *puVar29;
  bool bVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar41;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 local_100 [64];
  undefined1 local_c0 [64];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  int local_50;
  uint *local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint *local_24;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auVar54 [16];
  
  if (param_1[1] != 0) {
    local_50 = param_2[1];
    local_40 = 0;
    do {
      fVar53 = (float)param_1[4];
      fVar56 = (float)param_1[5];
      fVar59 = (float)param_1[6];
      fVar60 = (float)param_1[7];
      auVar42 = *(undefined1 (*) [16])(param_1 + 8);
      puVar28 = (undefined4 *)*param_1;
      iVar27 = 0;
      if (param_3[1] != 0) {
        auVar52 = *(undefined1 (*) [16])(param_3 + 8);
        bVar30 = fVar53 <= auVar52._0_4_;
        bVar7 = fVar56 <= auVar52._4_4_;
        bVar8 = fVar59 <= auVar52._8_4_;
        bVar9 = fVar60 <= auVar52._12_4_;
        auVar52._4_4_ = (float)-(uint)bVar7;
        auVar52._0_4_ = (float)-(uint)bVar30;
        auVar52._8_4_ = (float)-(uint)bVar8;
        auVar52._12_4_ = (float)-(uint)bVar9;
        auVar48._0_4_ = -(uint)((float)param_3[4] <= auVar42._0_4_ && bVar30);
        auVar48._4_4_ = -(uint)((float)param_3[5] <= auVar42._4_4_ && bVar7);
        auVar48._8_4_ = -(uint)((float)param_3[6] <= auVar42._8_4_ && bVar8);
        auVar48._12_4_ = -(uint)((float)param_3[7] <= auVar42._12_4_ && bVar9);
        uVar21 = movmskps(param_1,auVar48);
        if (((byte)uVar21 & 7) == 7) {
LAB_01220e50:
          while ((char)*(byte *)((int)puVar28 + 3) < '\0') {
            iVar1 = iVar27 + ((*(byte *)((int)puVar28 + 3) & 0x7f) << 0x10 |
                             (uint)*(ushort *)(puVar28 + 1)) * 2;
            iVar3 = *param_1;
            puVar28 = (undefined4 *)(iVar3 + (iVar27 * 3 + 3) * 2);
            uVar25 = *(uint *)(iVar3 + iVar1 * 6);
            auVar11[0xc] = (char)(uVar25 >> 0x18);
            auVar11._0_12_ = ZEXT712(0);
            uVar16 = CONCAT32(auVar11._10_3_,(ushort)(byte)(uVar25 >> 0x10));
            auVar19._5_8_ = 0;
            auVar19._0_5_ = uVar16;
            Var17 = CONCAT72(SUB137(auVar19 << 0x40,6),(ushort)(byte)(uVar25 >> 8));
            auVar51._0_4_ = uVar25 & 0xff;
            auVar51._4_9_ = Var17;
            auVar51._13_3_ = 0;
            uVar21 = *puVar28;
            bVar26 = (byte)((uint)uVar21 >> 0x18);
            uVar50 = (undefined1)((uint)uVar21 >> 8);
            uVar15 = (ulonglong)CONCAT12(uVar50,(short)uVar21) & 0xffffffffffff00ff;
            auVar12._8_4_ = 0;
            auVar12._0_8_ = uVar15;
            auVar12[0xc] = bVar26;
            auVar13[8] = (char)((uint)uVar21 >> 0x10);
            auVar13._0_8_ = uVar15;
            auVar13[9] = 0;
            auVar13._10_3_ = auVar12._10_3_;
            auVar18._5_8_ = 0;
            auVar18._0_5_ = auVar13._8_5_;
            auVar14[4] = uVar50;
            auVar14._0_4_ = (uint)uVar15;
            auVar14[5] = 0;
            auVar14._6_7_ = SUB137(auVar18 << 0x40,6);
            auVar47._0_4_ = (uint)uVar15 & 0xffff;
            auVar47._4_9_ = auVar14._4_9_;
            auVar47._13_3_ = 0;
            auVar48 = auVar47 & _DAT_01b34560;
            auVar51 = auVar51 & _DAT_01b34560;
            fVar61 = (float)(uVar25 >> 4 & 0xf);
            fVar62 = (float)((uint)Var17 >> 4);
            fVar63 = (float)((uint)uVar16 >> 4);
            fVar64 = (float)(uint3)(auVar11._10_3_ >> 0x14);
            local_80 = (float)auVar51._0_4_;
            fStack_7c = (float)auVar51._4_4_;
            fStack_78 = (float)auVar51._8_4_;
            fStack_74 = (float)auVar51._12_4_;
            fVar55 = (float)(auVar14._4_4_ >> 4);
            fVar57 = (float)(auVar13._8_4_ >> 4);
            fVar58 = (float)(bVar26 >> 4);
            fVar41 = auVar42._0_4_;
            fVar44 = auVar42._4_4_;
            fVar45 = auVar42._12_4_;
            fVar38 = auVar42._8_4_;
            fVar34 = (fVar41 - fVar53) * 0.0044247787;
            fVar37 = (fVar44 - fVar56) * 0.0044247787;
            fVar39 = (fVar38 - fVar59) * 0.0044247787;
            fVar40 = (fVar45 - fVar60) * 0.0044247787;
            fVar46 = (float)(auVar47._0_4_ >> 4) * (float)(auVar47._0_4_ >> 4) * fVar34 + fVar53;
            fVar55 = fVar55 * fVar55 * fVar37 + fVar56;
            fVar57 = fVar57 * fVar57 * fVar39 + fVar59;
            fVar58 = fVar58 * fVar58 * fVar40 + fVar60;
            auVar52._0_4_ = fVar61 * fVar61 * fVar34 + fVar53;
            auVar52._4_4_ = fVar62 * fVar62 * fVar37 + fVar56;
            auVar52._8_4_ = fVar63 * fVar63 * fVar39 + fVar59;
            auVar52._12_4_ = fVar64 * fVar64 * fVar40 + fVar60;
            fVar53 = fVar41 - (float)auVar48._0_4_ * (float)auVar48._0_4_ * fVar34;
            fVar56 = fVar44 - (float)auVar48._4_4_ * (float)auVar48._4_4_ * fVar37;
            auVar54._0_8_ = CONCAT44(fVar56,fVar53);
            auVar54._8_4_ = fVar38 - (float)auVar48._8_4_ * (float)auVar48._8_4_ * fVar39;
            auVar54._12_4_ = fVar45 - (float)auVar48._12_4_ * (float)auVar48._12_4_ * fVar40;
            auVar42._0_4_ = fVar41 - local_80 * local_80 * fVar34;
            auVar42._4_4_ = fVar44 - fStack_7c * fStack_7c * fVar37;
            auVar42._8_4_ = fVar38 - fStack_78 * fStack_78 * fVar39;
            auVar42._12_4_ = fVar45 - fStack_74 * fStack_74 * fVar40;
            if ((param_3[1] == 0) ||
               (auVar10._4_4_ = -(uint)(fVar55 <= (float)param_3[9] && (float)param_3[5] <= fVar56),
               auVar10._0_4_ = -(uint)(fVar46 <= (float)param_3[8] && (float)param_3[4] <= fVar53),
               auVar10._8_4_ =
                    -(uint)(fVar57 <= (float)param_3[10] && (float)param_3[6] <= auVar54._8_4_),
               auVar10._12_4_ =
                    -(uint)(fVar58 <= (float)param_3[0xb] && (float)param_3[7] <= auVar54._12_4_),
               uVar21 = movmskps(puVar28,auVar10), ((byte)uVar21 & 7) != 7)) {
              bVar26 = 0;
            }
            else {
              bVar26 = 1;
            }
            if ((param_3[1] == 0) ||
               (auVar35._0_4_ =
                     -(uint)((float)param_3[4] <= auVar42._0_4_ &&
                            auVar52._0_4_ <= (float)param_3[8]),
               auVar35._4_4_ =
                    -(uint)((float)param_3[5] <= auVar42._4_4_ && auVar52._4_4_ <= (float)param_3[9]
                           ),
               auVar35._8_4_ =
                    -(uint)(auVar52._8_4_ <= (float)param_3[10] &&
                           (float)param_3[6] <= auVar42._8_4_),
               auVar35._12_4_ =
                    -(uint)((float)param_3[7] <= auVar42._12_4_ &&
                           auVar52._12_4_ <= (float)param_3[0xb]),
               uVar21 = movmskps(param_3,auVar35), ((byte)uVar21 & 7) != 7)) {
              cVar20 = '\0';
            }
            else {
              cVar20 = '\x01';
            }
            fVar53 = fVar46;
            fVar56 = fVar55;
            fVar59 = fVar57;
            fVar60 = fVar58;
            switch(-cVar20 & 2U | bVar26) {
            default:
              goto LAB_012214e4;
            case 1:
              auVar42._8_4_ = auVar54._8_4_;
              auVar42._0_8_ = auVar54._0_8_;
              auVar42._12_4_ = auVar54._12_4_;
              iVar27 = iVar27 + 1;
              break;
            case 2:
              iVar27 = iVar1;
              puVar28 = (undefined4 *)(iVar3 + iVar1 * 6);
              fVar53 = auVar52._0_4_;
              fVar56 = auVar52._4_4_;
              fVar59 = auVar52._8_4_;
              fVar60 = auVar52._12_4_;
              break;
            case 3:
              if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
              }
              pauVar22 = (undefined1 (*) [16])(param_2[1] * 0x30 + *param_2);
              param_2[1] = param_2[1] + 1;
              pauVar22[1] = auVar42;
              *(int *)pauVar22[2] = iVar1;
              *pauVar22 = auVar52;
              iVar27 = iVar27 + 1;
              auVar42 = auVar54;
            }
          }
          if (param_3[1] == 0) {
LAB_012214da:
            param_3[1] = 0;
          }
          else {
            piVar4 = (int *)*param_3;
            pvVar23 = TlsGetValue(DAT_01f8fc54);
            puVar5 = *(undefined4 **)((int)pvVar23 + 4);
            if (puVar5 < *(undefined4 **)((int)pvVar23 + 0xc)) {
              *puVar5 = "TtLimitedAabbQuery::processLeaf";
              uVar6 = rdtsc();
              local_14 = (undefined4)uVar6;
              puVar5[1] = local_14;
              *(undefined4 **)((int)pvVar23 + 4) = puVar5 + 3;
            }
            local_30 = (uint)CONCAT12(*(undefined1 *)((int)puVar28 + 3),*(undefined2 *)(puVar28 + 1)
                                     );
            iVar27 = local_30 * 0x40 + *(int *)(*piVar4 + 0x20);
            uVar25 = *(uint *)(iVar27 + 0xc);
            local_2c = uVar25 & 0x7f;
            local_38 = iVar27;
            if ((uVar25 & 0x10) == 0) {
              if ((uVar25 & 1) == 0) {
                local_24 = *(uint **)(iVar27 + 0x30);
                switch((char)local_24[2]) {
                case '\a':
                case '\t':
                case '\x10':
                case '\x11':
                case '\x16':
                  if ((uVar25 & 2) == 0) {
                    _local_70 = *(undefined1 (*) [16])(piVar4 + 4);
                    _local_60 = *(undefined1 (*) [16])(piVar4 + 8);
                  }
                  else {
                    FUN_0100a440(local_c0);
                    FUN_01004c20(local_c0);
                    FUN_014411b0(local_100,piVar4 + 4,local_70);
                    if ((local_2c & 4) != 0) {
                      auVar42 = *(undefined1 (*) [16])(iVar27 + 0x20);
                      uVar25 = -(uint)(auVar42._0_4_ == 0.0);
                      uVar31 = -(uint)(auVar42._4_4_ == 0.0);
                      uVar32 = -(uint)(auVar42._8_4_ == 0.0);
                      uVar33 = -(uint)(auVar42._12_4_ == 0.0);
                      auVar52 = rcpps(auVar52,auVar42);
                      fVar53 = (float)(uVar25 & 0x5f7ffff0 |
                                      ~uVar25 & (uint)((2.0 - auVar42._0_4_ * auVar52._0_4_) *
                                                      auVar52._0_4_));
                      fVar56 = (float)(uVar31 & 0x5f7ffff0 |
                                      ~uVar31 & (uint)((2.0 - auVar42._4_4_ * auVar52._4_4_) *
                                                      auVar52._4_4_));
                      fVar59 = (float)(uVar32 & 0x5f7ffff0 |
                                      ~uVar32 & (uint)((2.0 - auVar42._8_4_ * auVar52._8_4_) *
                                                      auVar52._8_4_));
                      fVar60 = (float)(uVar33 & 0x5f7ffff0 |
                                      ~uVar33 & (uint)((2.0 - auVar42._12_4_ * auVar52._12_4_) *
                                                      auVar52._12_4_));
                      auVar36._0_8_ =
                           CONCAT44((float)local_70._4_4_ * fVar56,(float)local_70._0_4_ * fVar53);
                      auVar36._8_4_ = fStack_68 * fVar59;
                      auVar36._12_4_ = fStack_64 * fVar60;
                      auVar49._0_4_ = (float)local_60._0_4_ * fVar53;
                      auVar49._4_4_ = (float)local_60._4_4_ * fVar56;
                      auVar49._8_4_ = fStack_58 * fVar59;
                      auVar49._12_4_ = fStack_54 * fVar60;
                      auVar43._8_4_ = auVar36._8_4_;
                      auVar43._0_8_ = auVar36._0_8_;
                      auVar43._12_4_ = auVar36._12_4_;
                      _local_70 = minps(auVar43,auVar49);
                      _local_60 = maxps(auVar36,auVar49);
                    }
                  }
                  puVar29 = (uint *)(piVar4[0xc] + piVar4[0xe] * 4);
                  local_20 = (uint *)(piVar4[0xd] - piVar4[0xe]);
                  puVar24 = (uint *)(**(code **)(*local_24 + 0x4c))(local_70,puVar29,local_20);
                  if (0 < (int)puVar24) {
                    if ((int)local_20 <= (int)puVar24) {
                      puVar24 = local_20;
                    }
                    if ((local_2c & 0x60) == 0) {
                      local_20 = puVar29 + (int)puVar24;
                      for (; puVar29 < local_20; puVar29 = puVar29 + 1) {
                        *puVar29 = *puVar29 | local_30 << (*(byte *)(*piVar4 + 0x18) & 0x1f);
                      }
                      piVar4[0xe] = piVar4[0xe] + (int)puVar24;
                    }
                    else {
                      local_44 = (uint)puVar24 | 0x80000000;
                      local_48 = puVar24;
                      local_24 = puVar24;
joined_r0x01221283:
                      while (local_24 = (uint *)((int)local_24 + -1), -1 < (int)local_24) {
                        uVar25 = puVar29[(int)local_24];
                        puVar29[(int)local_24] =
                             local_30 << (*(byte *)(*piVar4 + 0x18) & 0x1f) | uVar25;
                        if (0x24 < uVar25) goto LAB_012212dd;
                        if ((local_2c & 0x20) != 0) {
                          if (uVar25 < 0xd) {
                            bVar26 = (char)uVar25 + 0xb;
                            iVar27 = local_38;
                          }
                          else {
                            iVar27 = local_38 + 0x20;
                            bVar26 = (char)uVar25 - 0xd;
                          }
                          bVar30 = (*(uint *)(iVar27 + 0xc) & 1 << (bVar26 & 0x1f) & 0xc0ffffff) ==
                                   0;
                          goto LAB_012212f8;
                        }
                      }
                      piVar4[0xe] = piVar4[0xe] + (int)local_48;
                      if (-1 < (int)local_44) {
                        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar29,local_44 * 4);
                      }
                    }
                  }
                  bVar30 = piVar4[0xe] < piVar4[0xd];
                  pvVar23 = TlsGetValue(DAT_01f8fc54);
                  puVar28 = *(undefined4 **)((int)pvVar23 + 4);
                  if (puVar28 < *(undefined4 **)((int)pvVar23 + 0xc)) {
                    *puVar28 = &DAT_0164b09c;
                    uVar6 = rdtsc();
                    local_28 = (undefined4)uVar6;
                    puVar28[1] = local_28;
                    *(undefined4 **)((int)pvVar23 + 4) = puVar28 + 3;
                  }
                  break;
                default:
                  local_20 = (uint *)(**(code **)(*local_24 + 0x38))();
                  for (uVar25 = (**(code **)(*local_20 + 8))(); uVar25 != 0xffffffff;
                      uVar25 = (**(code **)(*local_20 + 0xc))(uVar25)) {
                    *(uint *)(piVar4[0xc] + piVar4[0xe] * 4) =
                         local_30 << (*(byte *)(*piVar4 + 0x18) & 0x1f) | uVar25;
                    if (uVar25 < 0x25) {
                      if ((local_2c & 0x20) == 0) goto LAB_01221444;
                      if (uVar25 < 0xd) {
                        bVar26 = (char)uVar25 + 0xb;
                        iVar27 = local_38;
                      }
                      else {
                        iVar27 = local_38 + 0x20;
                        bVar26 = (char)uVar25 - 0xd;
                      }
                      bVar30 = (*(uint *)(iVar27 + 0xc) & 1 << (bVar26 & 0x1f) & 0xc0ffffff) == 0;
LAB_01221440:
                      if (bVar30) goto LAB_01221444;
                    }
                    else {
                      if ((local_2c & 0x40) != 0) {
                        cVar20 = FUN_01230510(*(undefined4 *)(piVar4[0xc] + piVar4[0xe] * 4));
                        bVar30 = cVar20 == '\0';
                        goto LAB_01221440;
                      }
LAB_01221444:
                      piVar4[0xe] = piVar4[0xe] + 1;
                      if (piVar4[0xd] <= piVar4[0xe]) {
                        pvVar23 = TlsGetValue(DAT_01f8fc54);
                        puVar28 = *(undefined4 **)((int)pvVar23 + 4);
                        if (puVar28 < *(undefined4 **)((int)pvVar23 + 0xc)) {
                          *puVar28 = &DAT_0164b09c;
                          uVar6 = rdtsc();
                          local_34 = (undefined4)uVar6;
                          puVar28[1] = local_34;
                          *(undefined4 **)((int)pvVar23 + 4) = puVar28 + 3;
                        }
                        goto LAB_012214da;
                      }
                    }
                  }
                  pvVar23 = TlsGetValue(DAT_01f8fc54);
                  puVar28 = *(undefined4 **)((int)pvVar23 + 4);
                  if (*(undefined4 **)((int)pvVar23 + 0xc) <= puVar28) goto LAB_0122115b;
                  *puVar28 = &DAT_0164b09c;
                  uVar6 = rdtsc();
                  local_3c = (undefined4)uVar6;
                  puVar28[1] = local_3c;
                  *(undefined4 **)((int)pvVar23 + 4) = puVar28 + 3;
                  param_3[1] = 1;
                  goto LAB_012214e4;
                }
              }
              else {
                *(uint *)(piVar4[0xc] + piVar4[0xe] * 4) =
                     local_30 << (*(byte *)(*piVar4 + 0x18) & 0x1f);
                piVar4[0xe] = piVar4[0xe] + 1;
                bVar30 = piVar4[0xe] < piVar4[0xd];
                pvVar23 = TlsGetValue(DAT_01f8fc54);
                puVar28 = *(undefined4 **)((int)pvVar23 + 4);
                if (puVar28 < *(undefined4 **)((int)pvVar23 + 0xc)) {
                  *puVar28 = &DAT_0164b09c;
                  uVar6 = rdtsc();
                  local_1c = (undefined4)uVar6;
                  puVar28[1] = local_1c;
                  *(undefined4 **)((int)pvVar23 + 4) = puVar28 + 3;
                }
              }
              if (!bVar30) goto LAB_012214da;
            }
            else {
              pvVar23 = TlsGetValue(DAT_01f8fc54);
              puVar28 = *(undefined4 **)((int)pvVar23 + 4);
              if (puVar28 < *(undefined4 **)((int)pvVar23 + 0xc)) {
                *puVar28 = &DAT_0164b09c;
                uVar6 = rdtsc();
                local_18 = (undefined4)uVar6;
                puVar28[1] = local_18;
                *(undefined4 **)((int)pvVar23 + 4) = puVar28 + 3;
                param_3[1] = 1;
                goto LAB_012214e4;
              }
            }
LAB_0122115b:
            param_3[1] = 1;
          }
LAB_012214e4:
          iVar1 = param_2[1];
          if (local_50 < iVar1) {
            iVar3 = *param_2;
            param_2[1] = iVar1 + -1;
            pfVar2 = (float *)(iVar3 + -0x30 + iVar1 * 0x30);
            iVar27 = *(int *)(iVar3 + iVar1 * 0x30 + -0x10);
            puVar28 = (undefined4 *)(*param_1 + iVar27 * 6);
            auVar42 = *(undefined1 (*) [16])(iVar3 + -0x20 + iVar1 * 0x30);
            fVar53 = *pfVar2;
            fVar56 = pfVar2[1];
            fVar59 = pfVar2[2];
            fVar60 = pfVar2[3];
            goto LAB_01220e50;
          }
        }
      }
      local_40 = local_40 + 1;
    } while (local_40 < 1);
  }
  return;
LAB_012212dd:
  if ((local_2c & 0x40) != 0) {
    cVar20 = FUN_01230510(puVar29[(int)local_24]);
    bVar30 = cVar20 == '\0';
LAB_012212f8:
    if ((!bVar30) && (local_48 = (uint *)((int)local_48 + -1), local_48 != local_24)) {
      puVar29[(int)local_24] = puVar29[(int)local_48];
    }
  }
  goto joined_r0x01221283;
}

// 01221620  hkpStaticCompoundShape::vf00  size=52  [run]
int __thiscall hkpStaticCompoundShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_150();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01221930  FUN_01221930  size=246  [run]
void FUN_01221930(undefined4 param_1,undefined4 param_2)

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
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  TtUnlimitedAabbQuery::processLeaf(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01221A30  FUN_01221a30  size=246  [run]
void FUN_01221a30(undefined4 param_1,undefined4 param_2)

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
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  TtLimitedAabbQuery::processLeaf(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01221B30  FUN_01221b30  size=144  [run]
void __fastcall FUN_01221b30(int *param_1)

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

// 01222230  FUN_01222230  size=5380  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01222230(int *param_1,int param_2,char param_3,uint param_4,int param_5)

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
          FUN_0121b290(1);
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
        FUN_01217480(&PTR_vftable_018e9b94,&local_40,2);
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
            FUN_01217510(&PTR_vftable_018e9b94,*(undefined4 *)(*piVar17 + iVar23),
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
            FUN_01217510(&PTR_vftable_018e9b94,*(undefined4 *)(*piVar17 + iVar25),
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
          FUN_01218a80(local_18,iVar23,local_14,local_20);
          FUN_01217510(&PTR_vftable_018e9b94,local_18,iVar25);
          iVar23 = iVar23 - iVar25;
          piVar17 = local_18 + iVar25;
        }
        FUN_01217510(&PTR_vftable_018e9b94,piVar17,iVar23);
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
            FUN_0121b290(1);
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
                puVar14[10] = ((&local_90)[*(int *)(&DAT_017e9890 + (int)local_18 * 0xc)] -
                              (int)local_1c) / 0x30;
                puVar26[9] = ((&local_90)[*(int *)(&DAT_017e9894 + iVar23)] - *local_20) / 0x30;
                puVar26[10] = ((&local_90)[*(int *)(&DAT_017e9898 + iVar23)] - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017e9890 + iVar23)] + 0x20) =
                     ((int)puVar14 - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017e9894 + iVar23)] + 0x20) =
                     ((int)puVar26 - *local_20) / 0x30;
                *(int *)((&local_90)[*(int *)(&DAT_017e9898 + iVar23)] + 0x20) =
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

// 01223750  FUN_01223750  size=43  [run]
void __thiscall FUN_01223750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01222230(*(undefined4 *)(param_1 + 0x18),1,param_3,param_4);
  FUN_0121ffc0();
  return;
}

// 01223790  FUN_01223790  size=3520  [run]
void __thiscall FUN_01223790(int param_1,float *param_2,byte *param_3,float *param_4,int param_5)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  LPVOID pvVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  int *piVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint auStackY_200 [64];
  undefined8 *puStackY_100;
  int *piStackY_fc;
  int iStackY_f8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  int *local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  int *local_20;
  uint local_1c;
  float local_18;
  byte local_12;
  byte local_11;
  
  local_2c = param_1;
  pfVar16 = param_2;
  uVar14 = local_50;
  uVar15 = uStack_48;
LAB_012237ca:
  uStack_48 = uVar15;
  local_50 = uVar14;
  local_1c = (uint)*param_3;
  bVar2 = param_3[1];
  local_11 = param_3[2];
  bVar3 = param_3[3];
  local_12 = bVar3;
  local_20 = (int *)0x3e7;
  uVar14 = local_50;
  uVar15 = uStack_48;
  switch(local_1c) {
  case 0:
    goto switchD_012237fb_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    fVar23 = (float)bVar2;
    fVar25 = (float)local_11;
    fVar27 = (float)bVar3;
    fVar26 = (float)(1 << (*param_3 & 0x1f));
    *param_4 = *param_4 - fVar23;
    param_4[1] = param_4[1] - fVar25;
    param_4[2] = param_4[2] - fVar27;
    param_4[3] = param_4[3] - 0.0;
    param_4[4] = param_4[4] - fVar23;
    param_4[5] = param_4[5] - fVar25;
    param_4[6] = param_4[6] - fVar27;
    param_4[7] = param_4[7] - 0.0;
    *param_4 = fVar26 * *param_4;
    param_4[1] = fVar26 * param_4[1];
    param_4[2] = fVar26 * param_4[2];
    param_4[3] = param_4[3] * 0.0;
    param_4[4] = fVar26 * param_4[4];
    param_4[5] = fVar26 * param_4[5];
    param_4[6] = fVar26 * param_4[6];
    param_4[7] = param_4[7] * 0.0;
    local_90 = (fVar23 + *pfVar16) * fVar26;
    fStack_8c = (fVar25 + pfVar16[1]) * fVar26;
    fStack_88 = (fVar27 + pfVar16[2]) * fVar26;
    fStack_84 = (pfVar16[3] + 0.0) * 0.0;
    param_3 = param_3 + 4;
    local_6c = (float)((int)pfVar16[9] + local_1c);
    local_68 = pfVar16[10] * fVar26;
    local_80 = pfVar16[4] * fVar26;
    fStack_7c = pfVar16[5] * fVar26;
    fStack_78 = pfVar16[6] * fVar26;
    fStack_74 = pfVar16[7] * 0.0;
    local_70 = pfVar16[8] * fVar26;
    local_60 = pfVar16[0xc];
    local_64 = pfVar16[0xb];
    param_2 = &local_90;
    pfVar16 = param_2;
    goto LAB_012237ca;
  case 5:
    param_3 = param_3 + bVar2 + 2;
    goto LAB_012237ca;
  case 6:
    param_3 = param_3 + (uint)bVar2 * 0x100 + local_11 + 3;
    goto LAB_012237ca;
  case 7:
    param_3 = param_3 + (uint)CONCAT11(bVar2,local_11) * 0x100 + param_3[3] + 4;
    goto LAB_012237ca;
  case 8:
    param_3 = param_3 + (uint)CONCAT21(CONCAT11(bVar2,local_11),param_3[3]) * 0x100 + param_3[4] + 5
    ;
    goto LAB_012237ca;
  case 9:
    local_18 = (float)(uint)bVar2;
    if (pfVar16 != &local_90) {
      FUN_012247a0();
      pfVar16 = &local_90;
      param_2 = pfVar16;
    }
    local_64 = (float)((int)local_64 + (int)local_18);
    param_3 = param_3 + 2;
    uVar14 = local_50;
    uVar15 = uStack_48;
    goto LAB_012237ca;
  case 10:
    local_18 = (float)(uint)CONCAT11(bVar2,local_11);
    if (pfVar16 != &local_90) {
      FUN_012247a0();
      pfVar16 = &local_90;
      param_2 = pfVar16;
    }
    local_64 = (float)((int)local_64 + (int)local_18);
    param_3 = param_3 + 3;
    uVar14 = local_50;
    uVar15 = uStack_48;
    goto LAB_012237ca;
  case 0xb:
    local_18 = (float)CONCAT31(CONCAT21(CONCAT11(bVar2,local_11),param_3[3]),param_3[4]);
    if (pfVar16 != &local_90) {
      FUN_012247a0();
      pfVar16 = &local_90;
      param_2 = pfVar16;
    }
    local_64 = local_18;
  case 0xd:
    param_3 = param_3 + 5;
    uVar14 = local_50;
    uVar15 = uStack_48;
    goto LAB_012237ca;
  case 0xc:
    param_5 = (uint)CONCAT11(bVar2,local_11) * 0x200;
    param_3 = (byte *)(*(int *)(*(int *)(local_2c + 0x10) + 0x20) + param_5);
    goto LAB_012237ca;
  default:
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  case 0x10:
  case 0x11:
  case 0x12:
    local_20 = (int *)(local_1c - 0x10);
    fVar23 = param_4[local_1c - 0xc];
    local_24 = (float)local_11 - pfVar16[local_1c - 0xc];
    local_28 = (float)bVar2 + pfVar16[local_1c - 0xc];
    fVar25 = param_4[(int)local_20];
    break;
  case 0x13:
    fVar23 = param_4[6] + param_4[5];
    local_28 = (pfVar16[6] + pfVar16[5]) * 2.0;
    local_24 = (float)local_11 * 2.0 - local_28;
    local_28 = (float)bVar2 * 2.0 + local_28;
    fVar25 = param_4[2] + param_4[1];
    break;
  case 0x14:
    fVar23 = param_4[5] - param_4[6];
    local_28 = (pfVar16[6] + pfVar16[5]) * 2.0;
    local_24 = ((float)local_11 * 2.0 - 255.0) - local_28;
    local_28 = ((float)bVar2 * 2.0 - 255.0) + local_28;
    fVar25 = param_4[1] - param_4[2];
    break;
  case 0x15:
    fVar23 = param_4[6] + param_4[4];
    local_28 = (pfVar16[6] + pfVar16[4]) * 2.0;
    local_24 = (float)local_11 * 2.0 - local_28;
    local_28 = (float)bVar2 * 2.0 + local_28;
    fVar25 = param_4[2] + *param_4;
    break;
  case 0x16:
    fVar23 = param_4[4] - param_4[6];
    local_28 = (pfVar16[6] + pfVar16[4]) * 2.0;
    local_24 = ((float)local_11 * 2.0 - 255.0) - local_28;
    local_28 = ((float)bVar2 * 2.0 - 255.0) + local_28;
    fVar25 = *param_4 - param_4[2];
    break;
  case 0x17:
    fVar23 = param_4[5] + param_4[4];
    local_28 = (pfVar16[5] + pfVar16[4]) * 2.0;
    local_24 = (float)local_11 * 2.0 - local_28;
    local_28 = (float)bVar2 * 2.0 + local_28;
    fVar25 = param_4[1] + *param_4;
    break;
  case 0x18:
    fVar23 = param_4[4] - param_4[5];
    local_28 = (pfVar16[5] + pfVar16[4]) * 2.0;
    local_24 = ((float)local_11 * 2.0 - 255.0) - local_28;
    local_28 = ((float)bVar2 * 2.0 - 255.0) + local_28;
    fVar25 = *param_4 - param_4[1];
    break;
  case 0x19:
    fVar25 = param_4[1] + *param_4 + param_4[2];
    fVar23 = param_4[5] + param_4[4] + param_4[6];
    local_24 = (float)local_11 * 3.0 - pfVar16[8];
    local_28 = (float)bVar2 * 3.0 + pfVar16[8];
    break;
  case 0x1a:
    fVar25 = (param_4[1] + *param_4) - param_4[2];
    fVar23 = (param_4[5] + param_4[4]) - param_4[6];
    local_24 = ((float)local_11 * 3.0 - 255.0) - pfVar16[8];
    local_28 = ((float)bVar2 * 3.0 - 255.0) + pfVar16[8];
    break;
  case 0x1b:
    fVar25 = (*param_4 - param_4[1]) + param_4[2];
    fVar23 = (param_4[4] - param_4[5]) + param_4[6];
    local_24 = ((float)local_11 * 3.0 - 255.0) - pfVar16[8];
    local_28 = ((float)bVar2 * 3.0 - 255.0) + pfVar16[8];
    break;
  case 0x1c:
    fVar25 = (*param_4 - param_4[1]) - param_4[2];
    fVar23 = (param_4[4] - param_4[5]) - param_4[6];
    local_24 = ((float)local_11 * 3.0 - 510.0) - pfVar16[8];
    local_28 = ((float)bVar2 * 3.0 - 510.0) + pfVar16[8];
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    fVar23 = param_4[local_1c - 0x1c];
    local_20 = (int *)(local_1c - 0x20);
    local_24 = (float)bVar2 - pfVar16[local_1c - 0x1c];
    local_28 = pfVar16[local_1c - 0x1c] + (float)bVar2 + 1.0;
    fVar25 = param_4[(int)local_20];
    param_3 = param_3 + 3;
    bVar3 = local_11;
    goto LAB_01223c22;
  case 0x23:
  case 0x24:
  case 0x25:
    local_20 = (int *)(local_1c - 0x23);
    fVar23 = param_4[local_1c - 0x1f];
    local_24 = (float)local_11 - pfVar16[local_1c - 0x1f];
    local_28 = (float)bVar2 + pfVar16[local_1c - 0x1f];
    fVar25 = param_4[(int)local_20];
    local_1c = (uint)CONCAT11(bVar3,param_3[4]);
    local_18 = (float)(uint)CONCAT11(param_3[5],param_3[6]);
    param_3 = param_3 + 7;
    goto LAB_01223c29;
  case 0x26:
  case 0x27:
  case 0x28:
    local_20 = (int *)(local_1c - 0x26);
    fVar25 = (float)bVar2 - pfVar16[local_1c - 0x22];
    fVar23 = (float)local_11 + pfVar16[local_1c - 0x22];
    param_3 = param_3 + 3;
    goto LAB_01223f77;
  case 0x29:
  case 0x2a:
  case 0x2b:
    local_20 = (int *)(local_1c - 0x29);
    fVar25 = ((float)CONCAT21(CONCAT11(bVar2,local_11),param_3[3]) * *(float *)(local_2c + 0x14) *
              pfVar16[10] - pfVar16[(int)local_20]) - pfVar16[local_1c - 0x25];
    fVar23 = ((float)CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]) *
              *(float *)(local_2c + 0x14) * pfVar16[10] - pfVar16[(int)local_20]) +
             pfVar16[local_1c - 0x25];
    param_3 = param_3 + 7;
LAB_01223f77:
    fVar27 = param_4[(int)local_20];
    fVar26 = param_4[(int)local_20 + 4];
    if (fVar26 <= fVar27) {
      if (fVar27 < fVar25) {
        return;
      }
      if (fVar23 < fVar26) {
        return;
      }
      local_18 = 1.4013e-45;
    }
    else {
      if (fVar26 < fVar25) {
        return;
      }
      if (fVar23 < fVar27) {
        return;
      }
      local_18 = 0.0;
    }
    local_50 = *(undefined8 *)(param_4 + 4);
    uVar14 = local_50;
    uStack_48 = *(undefined8 *)(param_4 + 6);
    uVar15 = uStack_48;
    fVar24 = fVar27 - fVar23;
    local_c0 = (float)*(undefined8 *)param_4;
    fStack_bc = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    fStack_b8 = (float)*(undefined8 *)(param_4 + 2);
    fStack_b4 = (float)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
    local_50._4_4_ = (float)((ulonglong)local_50 >> 0x20);
    uStack_48._4_4_ = (float)((ulonglong)uStack_48 >> 0x20);
    if ((fVar26 - fVar23) * fVar24 < 0.0) {
      fVar24 = fVar24 / (fVar24 - (fVar26 - fVar23));
      param_4[(int)local_18 * -4 + 4] = fVar24 * ((float)local_50 - local_c0) + local_c0;
      param_4[(int)local_18 * -4 + 5] = fVar24 * (local_50._4_4_ - fStack_bc) + fStack_bc;
      param_4[(int)local_18 * -4 + 6] = fVar24 * ((float)uStack_48 - fStack_b8) + fStack_b8;
      param_4[(int)local_18 * -4 + 7] = fVar24 * (uStack_48._4_4_ - fStack_b4) + fStack_b4;
    }
    fVar27 = fVar27 - fVar25;
    if ((fVar26 - fVar25) * fVar27 < 0.0) {
      fVar27 = fVar27 / (fVar27 - (fVar26 - fVar25));
      pfVar1 = param_4 + (int)local_18 * 4;
      *pfVar1 = fVar27 * ((float)local_50 - local_c0) + local_c0;
      pfVar1[1] = fVar27 * (local_50._4_4_ - fStack_bc) + fStack_bc;
      pfVar1[2] = fVar27 * ((float)uStack_48 - fStack_b8) + fStack_b8;
      pfVar1[3] = fVar27 * (uStack_48._4_4_ - fStack_b4) + fStack_b4;
    }
    goto LAB_012237ca;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar20 = local_1c - 0x30;
    goto LAB_012243df;
  case 0x50:
    uVar20 = (uint)bVar2;
    goto LAB_012243df;
  case 0x51:
    uVar20 = (uint)CONCAT11(bVar2,local_11);
    goto LAB_012243df;
  case 0x52:
    uVar20 = (uint)CONCAT21(CONCAT11(bVar2,local_11),bVar3);
    goto LAB_012243df;
  case 0x53:
    uVar20 = (uint)CONCAT11(bVar2,local_11) * 0x10000 + (uint)param_3[4] + (uint)bVar3 * 0x100;
LAB_012243df:
    local_38 = (float)((param_5 >> 9) << 8 & *(uint *)(local_2c + 0x30) | (int)pfVar16[0xb] + uVar20
                      );
    iVar18 = *(int *)(**(int **)(*(int *)(local_2c + 0x2c) + 0x38) + 0x34);
    if (iVar18 == 0) {
      piVar21 = (int *)0x0;
    }
    else {
      piVar21 = (int *)(iVar18 + 0x10);
    }
    local_20 = piVar21;
    pvVar17 = TlsGetValue(DAT_01f8fc4c);
    iVar18 = *(int *)((int)pvVar17 + 0xc);
    if ((*(int *)((int)pvVar17 + 8) < 0x200) || (*(uint *)((int)pvVar17 + 0x10) < iVar18 + 0x200U))
    {
      iVar18 = FUN_0100b780();
    }
    else {
      *(uint *)((int)pvVar17 + 0xc) = iVar18 + 0x200U;
    }
    local_18 = (float)iVar18;
    local_30 = (float)(**(code **)(*piVar21 + 0x14))();
    iVar18 = local_2c;
    local_3c = (int *)(*(int *)(*(int *)(*(int *)(local_2c + 0x2c) + 0x30) + 0x10) + 0xc);
    pcVar19 = (char *)(**(code **)(*local_3c + 4))();
    if (*pcVar19 != '\0') {
      iVar4 = *(int *)(iVar18 + 0x2c);
      uStack_48 = CONCAT44(*(int *)(iVar4 + 0x38),*(undefined4 *)(*(int *)(iVar4 + 0x38) + 8));
      local_50 = CONCAT44(local_38,local_30);
      piStackY_fc = *(int **)(iVar4 + 0x30);
      local_2c = *piStackY_fc;
      auStackY_200[0x3f] = *(undefined4 *)(iVar4 + 0x34);
      iStackY_f8 = *(undefined4 *)(iVar18 + 0x24);
      puStackY_100 = &local_50;
      auStackY_200[0x3e] = 0x12244e9;
      (**(code **)(local_2c +
                  ((uint)*(byte *)(*(int *)(iVar18 + 0x18) * 0x23 + 0x1a0 +
                                  (uint)*(byte *)((int)local_30 + 8) + local_2c) * 5 + 0x2d0) * 4))
                ();
      fVar23 = *(float *)(*(int *)(iVar18 + 0x24) + 4);
      if (*(float *)(iVar18 + 0x1c) < fVar23) {
        fVar23 = *(float *)(iVar18 + 0x1c);
      }
      *(float *)(iVar18 + 0x1c) = fVar23;
    }
    iStackY_f8 = 0x1224513;
    pvVar17 = TlsGetValue(DAT_01f8fc4c);
    if (((0x1ff < *(int *)((int)pvVar17 + 8)) &&
        ((int)local_18 + 0x200 == *(int *)((int)pvVar17 + 0xc))) &&
       ((float)*(int *)((int)pvVar17 + 0x14) != local_18)) {
      *(float *)((int)pvVar17 + 0xc) = local_18;
      return;
    }
    iStackY_f8 = (int)local_18;
    piStackY_fc = (int *)0x122454a;
    FUN_0100b9b0();
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    auStackY_200[local_1c + 8] = (uint)bVar2;
    goto LAB_01224341;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStackY_200[local_1c + 4] = (uint)CONCAT11(bVar2,local_11);
    param_3 = param_3 + 3;
    goto LAB_01224341;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStackY_200[local_1c] = CONCAT31(CONCAT21(CONCAT11(bVar2,local_11),param_3[3]),param_3[4]);
    param_3 = param_3 + 5;
LAB_01224341:
    bVar22 = pfVar16 != &local_90;
    pfVar16 = param_2;
    uVar14 = local_50;
    uVar15 = uStack_48;
    if (bVar22) {
      local_90 = *param_2;
      fStack_8c = param_2[1];
      fStack_88 = param_2[2];
      fStack_84 = param_2[3];
      local_80 = param_2[4];
      fStack_7c = param_2[5];
      fStack_78 = param_2[6];
      fStack_74 = param_2[7];
      local_70 = param_2[8];
      local_6c = param_2[9];
      local_68 = param_2[10];
      pfVar16 = param_2 + 0xb;
      param_2 = &local_90;
      local_64 = *pfVar16;
      pfVar16 = param_2;
    }
    goto LAB_012237ca;
  case 0x70:
    param_5 = CONCAT31(CONCAT21(CONCAT11(bVar2,local_11),param_3[3]),param_3[4]);
    param_3 = (byte *)(*(int *)(*(int *)(local_2c + 0x10) + 0x20) + param_5);
    goto LAB_012237ca;
  }
  param_3 = param_3 + 4;
LAB_01223c22:
  local_18 = (float)(uint)bVar3;
  local_1c = 0;
LAB_01223c29:
  if ((local_24 <= fVar23) || (local_24 <= fVar25)) {
    param_3 = param_3 + (int)local_18;
    if ((fVar25 <= local_28) || (fVar23 <= local_28)) {
      local_3c = (int *)(fVar25 - local_28);
      local_34 = fVar23 - local_28;
      local_30 = fVar25 - local_24;
      local_38 = fVar23 - local_24;
      if (local_34 <= (float)local_3c) {
        FUN_01223790();
        if (local_34 * (float)local_3c < 0.0) {
          fVar23 = (float)local_3c / ((float)local_3c - local_34);
          *param_4 = fVar23 * (param_4[4] - *param_4) + *param_4;
          param_4[1] = fVar23 * (param_4[5] - param_4[1]) + param_4[1];
          param_4[2] = fVar23 * (param_4[6] - param_4[2]) + param_4[2];
          param_4[3] = fVar23 * (param_4[7] - param_4[3]) + param_4[3];
        }
        fVar23 = *(float *)(local_2c + 0x1c);
        if (fVar23 < *(float *)(local_2c + 0x20)) {
          pfVar16 = *(float **)(local_2c + 0x2c);
          *(float *)(local_2c + 0x20) = fVar23;
          fVar25 = pfVar16[5];
          fVar27 = pfVar16[6];
          fVar26 = pfVar16[7];
          fVar24 = pfVar16[1];
          fVar6 = pfVar16[2];
          fVar7 = pfVar16[3];
          iVar18 = *(int *)(local_2c + 0x10);
          fVar8 = pfVar16[1];
          fVar9 = pfVar16[2];
          fVar10 = pfVar16[3];
          fVar11 = *(float *)(iVar18 + 0x14);
          fVar12 = *(float *)(iVar18 + 0x18);
          fVar13 = *(float *)(iVar18 + 0x1c);
          param_4[4] = ((pfVar16[4] - *pfVar16) * fVar23 + *pfVar16) - *(float *)(iVar18 + 0x10);
          param_4[5] = ((fVar25 - fVar24) * fVar23 + fVar8) - fVar11;
          param_4[6] = ((fVar27 - fVar6) * fVar23 + fVar9) - fVar12;
          param_4[7] = ((fVar26 - fVar7) * fVar23 + fVar10) - fVar13;
          fVar23 = param_2[10];
          param_4[4] = fVar23 * param_4[4];
          param_4[5] = fVar23 * param_4[5];
          param_4[6] = fVar23 * param_4[6];
          param_4[7] = fVar23 * param_4[7];
          fVar23 = param_2[1];
          fVar25 = param_2[2];
          fVar27 = param_2[3];
          param_4[4] = param_4[4] - *param_2;
          param_4[5] = param_4[5] - fVar23;
          param_4[6] = param_4[6] - fVar25;
          param_4[7] = param_4[7] - fVar27;
          if (((int)local_20 < 3) && (local_28 < param_4[(int)local_20 + 4])) {
            return;
          }
        }
        param_3 = param_3 + (local_1c - (int)local_18);
        pfVar16 = param_2;
        uVar14 = local_50;
        uVar15 = uStack_48;
      }
      else {
        FUN_01223790();
        if (local_38 * local_30 < 0.0) {
          fVar23 = local_30 / (local_30 - local_38);
          *param_4 = fVar23 * (param_4[4] - *param_4) + *param_4;
          param_4[1] = fVar23 * (param_4[5] - param_4[1]) + param_4[1];
          param_4[2] = fVar23 * (param_4[6] - param_4[2]) + param_4[2];
          param_4[3] = fVar23 * (param_4[7] - param_4[3]) + param_4[3];
        }
        fVar23 = *(float *)(local_2c + 0x1c);
        pfVar16 = param_2;
        uVar14 = local_50;
        uVar15 = uStack_48;
        if (fVar23 < *(float *)(local_2c + 0x20)) {
          pfVar16 = *(float **)(local_2c + 0x2c);
          *(float *)(local_2c + 0x20) = fVar23;
          fVar25 = pfVar16[5];
          fVar27 = pfVar16[6];
          fVar26 = pfVar16[7];
          fVar24 = pfVar16[1];
          fVar6 = pfVar16[2];
          fVar7 = pfVar16[3];
          fVar8 = pfVar16[1];
          fVar9 = pfVar16[2];
          fVar10 = pfVar16[3];
          iVar18 = *(int *)(local_2c + 0x10);
          fVar11 = *(float *)(iVar18 + 0x14);
          fVar12 = *(float *)(iVar18 + 0x18);
          fVar13 = *(float *)(iVar18 + 0x1c);
          param_4[4] = ((pfVar16[4] - *pfVar16) * fVar23 + *pfVar16) - *(float *)(iVar18 + 0x10);
          param_4[5] = ((fVar25 - fVar24) * fVar23 + fVar8) - fVar11;
          param_4[6] = ((fVar27 - fVar6) * fVar23 + fVar9) - fVar12;
          param_4[7] = ((fVar26 - fVar7) * fVar23 + fVar10) - fVar13;
          fVar23 = param_2[10];
          param_4[4] = fVar23 * param_4[4];
          param_4[5] = fVar23 * param_4[5];
          param_4[6] = fVar23 * param_4[6];
          param_4[7] = fVar23 * param_4[7];
          fVar23 = param_2[1];
          fVar25 = param_2[2];
          fVar27 = param_2[3];
          param_4[4] = param_4[4] - *param_2;
          param_4[5] = param_4[5] - fVar23;
          param_4[6] = param_4[6] - fVar25;
          param_4[7] = param_4[7] - fVar27;
          pfVar16 = param_2;
          if (((int)local_20 < 3) &&
             (param_4[(int)local_20 + 4] <= local_24 && local_24 != param_4[(int)local_20 + 4])) {
switchD_012237fb_caseD_0:
            return;
          }
        }
      }
    }
  }
  else {
    param_3 = param_3 + local_1c;
  }
  goto LAB_012237ca;
}

// 01224660  FUN_01224660  size=305  [run]
void __thiscall FUN_01224660(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (DAT_020a0bb7 == '\0') {
    FUN_01496b30();
    FUN_01496920(&DAT_020a0bb7);
    if (DAT_020a0bb7 == '\0') {
      return;
    }
  }
  *(float **)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)param_2[0xe] + 0x14);
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 0x18) = (uint)*(byte *)(*(int *)param_2[0xd] + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  pcVar2 = *(char **)(iVar1 + 0x20);
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  *(float *)(param_1 + 0x14) = 1.0 / *(float *)(iVar1 + 0x1c);
  local_48 = *(float *)(iVar1 + 0x1c) * 1.5258789e-05;
  local_60 = param_2[8] * local_48;
  fStack_5c = param_2[9] * local_48;
  fStack_58 = param_2[10] * local_48;
  fStack_54 = param_2[0xb] * local_48;
  local_50 = (fStack_58 + fStack_5c + local_60) * 3.0;
  local_44 = 0;
  local_4c = 0;
  local_40 = 0;
  local_30 = local_48 * (*param_2 - *(float *)(iVar1 + 0x10));
  fStack_2c = local_48 * (param_2[1] - *(float *)(iVar1 + 0x14));
  fStack_28 = local_48 * (param_2[2] - *(float *)(iVar1 + 0x18));
  fStack_24 = local_48 * (param_2[3] - *(float *)(iVar1 + 0x1c));
  local_20 = local_48 * (param_2[4] - *(float *)(iVar1 + 0x10));
  fStack_1c = local_48 * (param_2[5] - *(float *)(iVar1 + 0x14));
  fStack_18 = local_48 * (param_2[6] - *(float *)(iVar1 + 0x18));
  fStack_14 = local_48 * (param_2[7] - *(float *)(iVar1 + 0x1c));
  *(uint *)(param_1 + 0x30) = (*pcVar2 != '\r') - 1;
  FUN_01223790(&local_70,pcVar2,&local_30,0);
  return;
}

// 012247A0  FUN_012247a0  size=56  [run]
void __thiscall FUN_012247a0(undefined4 *param_1,undefined4 *param_2)

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
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return;
}

// 012247E0  FUN_012247e0  size=40  [run]
void __thiscall FUN_012247e0(float *param_1,float *param_2)

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

// 01224810  FUN_01224810  size=338  [run]
void __thiscall FUN_01224810(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  char *pcVar4;
  int *piVar5;
  float fVar6;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 local_5;
  
  iVar1 = *(int *)(**(int **)(*(int *)(param_1 + 0x2c) + 0x38) + 0x34);
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar1 + 0x10);
  }
  local_10 = piVar5;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_c = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x200) || (*(uint *)((int)pvVar3 + 0x10) < local_c + 0x200U)) {
    local_c = FUN_0100b780(0x200);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_c + 0x200U;
  }
  local_14 = (**(code **)(*piVar5 + 0x14))(param_2,local_c);
  iVar1 = *(int *)(param_1 + 0x2c);
  pcVar4 = (char *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x30) + 0x10) + 0xc) + 4))
                             (&local_5,*(int *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                              *(undefined4 *)(iVar1 + 0x38),local_10,param_2);
  if (*pcVar4 != '\0') {
    iVar1 = *(int *)(param_1 + 0x2c);
    local_18 = *(int *)(iVar1 + 0x38);
    local_1c = *(undefined4 *)(local_18 + 8);
    local_24 = local_14;
    local_20 = param_2;
    iVar2 = **(int **)(iVar1 + 0x30);
    (**(code **)(iVar2 + ((uint)*(byte *)(*(int *)(param_1 + 0x18) * 0x23 + 0x1a0 +
                                         (uint)*(byte *)(local_14 + 8) + iVar2) * 5 + 0x2d0) * 4))
              (*(undefined4 *)(iVar1 + 0x34),&local_24,*(int **)(iVar1 + 0x30),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    fVar6 = *(float *)(*(int *)(param_1 + 0x24) + 4);
    if (*(float *)(param_1 + 0x1c) < fVar6) {
      fVar6 = *(float *)(param_1 + 0x1c);
    }
    *(float *)(param_1 + 0x1c) = fVar6;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  if (((0x1ff < *(int *)((int)pvVar3 + 8)) && (local_c + 0x200 == *(int *)((int)pvVar3 + 0xc))) &&
     (*(int *)((int)pvVar3 + 0x14) != local_c)) {
    *(int *)((int)pvVar3 + 0xc) = local_c;
    return;
  }
  FUN_0100b9b0(local_c,0x200);
  return;
}

// 01224A40  FUN_01224a40  size=223  [run]
void __thiscall FUN_01224a40(int *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  
  *(char *)(param_2 + 4) = (char)*param_1;
  *(char *)((int)param_2 + 9) = (char)param_1[1];
  uVar1 = *(ushort *)(param_1 + 0xb);
  if (1 < *param_1) {
    uVar2 = *(ushort *)(param_1 + 0xf);
    cVar5 = uVar1 < uVar2;
    uVar4 = uVar2;
    if ((bool)cVar5) {
      uVar4 = uVar1;
      uVar1 = uVar2;
    }
    if (2 < *param_1) {
      uVar2 = *(ushort *)(param_1 + 0x13);
      uVar3 = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = cVar5 + '\x01';
        uVar3 = uVar2;
        uVar2 = uVar1;
      }
      uVar1 = uVar3;
      uVar3 = uVar2;
      if (cVar5 == '\x01') {
        uVar3 = uVar4;
        uVar4 = uVar2;
      }
      param_2[2] = uVar3;
    }
    param_2[1] = uVar4;
  }
  *param_2 = uVar1;
  uVar1 = *(ushort *)(param_1 + 0x3b);
  if (1 < param_1[1]) {
    uVar2 = *(ushort *)(param_1 + 0x3f);
    uVar4 = uVar1;
    uVar3 = uVar2;
    if (uVar1 < uVar2) {
      uVar4 = uVar2;
      uVar3 = uVar1;
    }
    cVar5 = uVar1 < uVar2;
    if (2 < param_1[1]) {
      uVar1 = *(ushort *)(param_1 + 0x43);
      uVar2 = uVar4;
      if (uVar4 < uVar1) {
        cVar5 = cVar5 + '\x01';
        uVar2 = uVar1;
        uVar1 = uVar4;
      }
      uVar4 = uVar2;
      uVar2 = uVar3;
      if (cVar5 == '\x01') {
        uVar2 = uVar1;
        uVar1 = uVar3;
      }
      uVar3 = uVar2;
      param_2[*param_1 + 2] = uVar1;
    }
    param_2[*param_1 + 1] = uVar3;
    param_2[*param_1] = uVar4;
    return;
  }
  param_2[*param_1] = uVar1;
  return;
}

// 01224B20  FUN_01224b20  size=336  [run]
undefined4 FUN_01224b20(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *unaff_EDI;
  float *pfVar9;
  
  iVar6 = 0;
  pfVar9 = unaff_EDI;
  do {
    iVar7 = (int)(char)(&DAT_017e192a)[iVar6];
    iVar8 = (int)(char)(&DAT_017e1928)[iVar6];
    if ((0.0 <= param_2[iVar7]) && (0.0 <= param_2[iVar8])) {
      fVar3 = *pfVar9;
      fVar4 = pfVar9[1];
      fVar5 = pfVar9[2];
      pfVar1 = unaff_EDI + iVar7 * 4;
      pfVar2 = unaff_EDI + iVar8 * 4;
      if (0.0 <= ((param_1[1] - fVar4) * (pfVar1[1] - fVar4) +
                  (*param_1 - fVar3) * (*pfVar1 - fVar3) +
                 (param_1[2] - fVar5) * (pfVar1[2] - fVar5)) *
                 ((unaff_EDI[0xd] - fVar4) * (pfVar2[1] - fVar4) +
                  (unaff_EDI[0xc] - fVar3) * (*pfVar2 - fVar3) +
                 (unaff_EDI[0xe] - fVar5) * (pfVar2[2] - fVar5)) -
                 ((unaff_EDI[0xd] - fVar4) * (pfVar1[1] - fVar4) +
                  (unaff_EDI[0xc] - fVar3) * (*pfVar1 - fVar3) +
                 (unaff_EDI[0xe] - fVar5) * (pfVar1[2] - fVar5)) *
                 ((param_1[1] - fVar4) * (pfVar2[1] - fVar4) +
                  (*param_1 - fVar3) * (*pfVar2 - fVar3) +
                 (param_1[2] - fVar5) * (pfVar2[2] - fVar5))) {
        param_2[iVar7] = -1.0;
      }
      else {
        param_2[iVar8] = -1.0;
      }
    }
    pfVar9 = pfVar9 + 4;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  if (0.0 < *param_2) {
    return 0;
  }
  if (0.0 < param_2[1]) {
    return 1;
  }
  if (0.0 < param_2[2]) {
    return 2;
  }
  return 0xffffffff;
}

// 01224C80  FUN_01224c80  size=469  [run]
void __thiscall FUN_01224c80(int param_1,float *param_2,float *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar9 = param_3[4];
  fVar12 = param_3[5];
  fVar14 = param_3[6];
  fVar16 = *param_3 - param_3[8];
  fVar17 = param_3[1] - param_3[9];
  fVar18 = param_3[2] - param_3[10];
  fVar19 = param_3[3] - param_3[0xb];
  fVar8 = param_3[8] - fVar9;
  fVar11 = param_3[9] - fVar12;
  fVar13 = param_3[10] - fVar14;
  fVar15 = param_3[0xb] - param_3[7];
  fVar20 = fVar9 - *param_3;
  fVar21 = fVar12 - param_3[1];
  fVar22 = fVar14 - param_3[2];
  fVar23 = param_3[7] - param_3[3];
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar24 = fVar11 * fVar18 - fVar13 * fVar17;
  fVar25 = fVar13 * fVar16 - fVar8 * fVar18;
  fVar26 = fVar8 * fVar17 - fVar11 * fVar16;
  fVar27 = fVar15 * fVar19 - fVar15 * fVar19;
  fVar19 = ((fVar6 - param_3[2]) * fVar20 - (fVar4 - *param_3) * fVar22) * fVar25;
  fVar15 = ((param_2[3] - param_3[3]) * fVar23 - (param_2[3] - param_3[3]) * fVar23) * fVar27;
  fVar9 = ((fVar4 - fVar9) * fVar11 - (fVar5 - fVar12) * fVar8) * fVar26 +
          ((fVar5 - fVar12) * fVar13 - (fVar6 - fVar14) * fVar11) * fVar24 +
          ((fVar6 - fVar14) * fVar8 - (fVar4 - fVar9) * fVar13) * fVar25;
  fVar12 = ((fVar4 - param_3[8]) * fVar17 - (fVar5 - param_3[9]) * fVar16) * fVar26 +
           ((fVar5 - param_3[9]) * fVar18 - (fVar6 - param_3[10]) * fVar17) * fVar24 +
           ((fVar6 - param_3[10]) * fVar16 - (fVar4 - param_3[8]) * fVar18) * fVar25;
  fVar14 = ((fVar4 - *param_3) * fVar21 - (fVar5 - param_3[1]) * fVar20) * fVar26 +
           ((fVar5 - param_3[1]) * fVar22 - (fVar6 - param_3[2]) * fVar21) * fVar24 + fVar19;
  fVar15 = fVar15 + fVar19 + fVar15;
  *(float *)(param_1 + 0x180) = fVar9;
  *(float *)(param_1 + 0x184) = fVar12;
  *(float *)(param_1 + 0x188) = fVar14;
  *(float *)(param_1 + 0x18c) = fVar15;
  auVar10._4_4_ = -(uint)(fVar12 < 0.0);
  auVar10._0_4_ = -(uint)(fVar9 < 0.0);
  auVar10._8_4_ = -(uint)(fVar14 < 0.0);
  auVar10._12_4_ = -(uint)(fVar15 < 0.0);
  uVar7 = movmskps(param_2,auVar10);
  if (param_4 != 0) {
    *(float *)(param_1 + 0x120) = fVar24;
    *(float *)(param_1 + 0x124) = fVar25;
    *(float *)(param_1 + 0x128) = fVar26;
    *(float *)(param_1 + 300) = fVar27;
    if (((uVar7 & 7) == 7) &&
       ((*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xa8)) * fVar26 +
        (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0xa4)) * fVar25 +
        (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xa0)) * fVar24 < 0.0)) {
      *(float *)(param_1 + 0x120) = -fVar24;
      *(float *)(param_1 + 0x124) = -fVar25;
      *(float *)(param_1 + 0x128) = -fVar26;
      *(float *)(param_1 + 300) = -fVar27;
      uVar2 = *(undefined8 *)param_3;
      uVar3 = *(undefined8 *)(param_3 + 2);
      *param_3 = param_3[4];
      param_3[1] = param_3[5];
      param_3[2] = param_3[6];
      param_3[3] = param_3[7];
      local_20 = (float)uVar2;
      fStack_1c = (float)((ulonglong)uVar2 >> 0x20);
      fStack_18 = (float)uVar3;
      fStack_14 = (float)((ulonglong)uVar3 >> 0x20);
      param_3[4] = local_20;
      param_3[5] = fStack_1c;
      param_3[6] = fStack_18;
      param_3[7] = fStack_14;
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      uVar3 = *(undefined8 *)(param_3 + 0x12);
      param_3[0x10] = param_3[0x14];
      param_3[0x11] = param_3[0x15];
      param_3[0x12] = param_3[0x16];
      param_3[0x13] = param_3[0x17];
      local_20 = (float)uVar2;
      fStack_1c = (float)((ulonglong)uVar2 >> 0x20);
      fStack_18 = (float)uVar3;
      fStack_14 = (float)((ulonglong)uVar3 >> 0x20);
      param_3[0x14] = local_20;
      param_3[0x15] = fStack_1c;
      param_3[0x16] = fStack_18;
      param_3[0x17] = fStack_14;
      uVar1 = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x184) = uVar1;
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}

// 01224E60  FUN_01224e60  size=1076  [run]
undefined4 __thiscall
FUN_01224e60(int param_1,float *param_2,float *param_3,int *param_4,int *param_5,char param_6,
            undefined4 param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int extraout_ECX;
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar15;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_f0 [32];
  float local_d0;
  undefined1 local_a0 [32];
  float local_80;
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
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_6 != '\0') {
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    local_40 = param_3[4] - param_3[8];
    fStack_3c = param_3[5] - param_3[9];
    fStack_38 = param_3[6] - param_3[10];
    fStack_34 = param_3[7] - param_3[0xb];
    fVar10 = *param_2;
    fVar14 = param_2[1];
    fVar16 = param_2[2];
    local_30 = fVar5 - param_3[8];
    fStack_2c = fVar6 - param_3[9];
    fStack_28 = fVar7 - param_3[10];
    fStack_24 = param_3[3] - param_3[0xb];
    fVar20 = fStack_28 * fStack_3c - fStack_2c * fStack_38;
    fVar23 = local_30 * fStack_38 - fStack_28 * local_40;
    fVar24 = fStack_2c * local_40 - local_30 * fStack_3c;
    fVar9 = (fVar10 - fVar5) * fVar20;
    fVar13 = (fVar14 - fVar6) * fVar23;
    fVar15 = (fVar16 - fVar7) * fVar24;
    fVar17 = fVar13 + fVar9 + fVar15;
    fVar18 = fVar13 + fVar9 + fVar15;
    fVar19 = fVar13 + fVar9 + fVar15;
    fVar15 = fVar13 + fVar9 + fVar15;
    fVar20 = (param_2[4] - fVar5) * fVar20;
    fVar23 = (param_2[5] - fVar6) * fVar23;
    fVar24 = (param_2[6] - fVar7) * fVar24;
    auVar21._0_4_ = fVar23 + fVar20 + fVar24;
    auVar21._4_4_ = fVar23 + fVar20 + fVar24;
    auVar21._8_4_ = fVar23 + fVar20 + fVar24;
    auVar21._12_4_ = fVar23 + fVar20 + fVar24;
    if (fVar17 < 0.0 == auVar21._0_4_ < 0.0) {
      local_20 = (ulonglong)(uint)ABS(fVar17);
      uStack_18 = 0;
      local_50 = ABS(auVar21._0_4_);
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if (local_50 < ABS(fVar17)) {
        uVar2 = *(undefined8 *)param_2;
        uVar3 = *(undefined8 *)(param_2 + 2);
        *param_2 = param_2[4];
        param_2[1] = param_2[5];
        param_2[2] = param_2[6];
        param_2[3] = param_2[7];
        local_20._0_4_ = (float)uVar2;
        local_20._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        uStack_18._0_4_ = (float)uVar3;
        uStack_18._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        param_2[4] = (float)local_20;
        param_2[5] = local_20._4_4_;
        param_2[6] = (float)uStack_18;
        param_2[7] = uStack_18._4_4_;
        uVar4 = *(ulonglong *)(param_2 + 0x10);
        uVar2 = *(undefined8 *)(param_2 + 0x12);
        param_2[0x10] = param_2[0x14];
        param_2[0x11] = param_2[0x15];
        param_2[0x12] = param_2[0x16];
        param_2[0x13] = param_2[0x17];
        local_20._0_4_ = (float)uVar4;
        local_20._4_4_ = (float)(uVar4 >> 0x20);
        uStack_18._0_4_ = (float)uVar2;
        uStack_18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        param_2[0x14] = (float)local_20;
        param_2[0x15] = local_20._4_4_;
        param_2[0x16] = (float)uStack_18;
        param_2[0x17] = uStack_18._4_4_;
        local_20 = uVar4;
        uStack_18 = uVar2;
      }
      iVar8 = FUN_01224c80(param_2,param_3,1);
      if (iVar8 == 7) {
        *param_4 = *param_4 + -1;
        return 0;
      }
    }
    else {
      auVar11._0_4_ = fVar17 - auVar21._0_4_;
      auVar11._4_4_ = fVar18 - auVar21._4_4_;
      auVar11._8_4_ = fVar19 - auVar21._8_4_;
      auVar11._12_4_ = fVar15 - auVar21._12_4_;
      auVar21 = rcpps(auVar21,auVar11);
      local_20 = CONCAT44((2.0 - auVar21._4_4_ * auVar11._4_4_) * auVar21._4_4_ * fVar18 *
                          (param_2[5] - fVar14) + fVar14,
                          (2.0 - auVar21._0_4_ * auVar11._0_4_) * auVar21._0_4_ * fVar17 *
                          (param_2[4] - fVar10) + fVar10);
      uStack_18 = CONCAT44((2.0 - auVar21._12_4_ * auVar11._12_4_) * auVar21._12_4_ * fVar15 *
                           (param_2[7] - param_2[3]) + param_2[3],
                           (2.0 - auVar21._8_4_ * auVar11._8_4_) * auVar21._8_4_ * fVar19 *
                           (param_2[6] - fVar16) + fVar16);
      iVar8 = FUN_01224c80(&local_20,param_3,0);
      if (iVar8 == 7) {
        return 1;
      }
    }
    local_20 = CONCAT44(param_2[5] - param_2[1],param_2[4] - *param_2);
    uStack_18 = CONCAT44(param_2[7] - param_2[3],param_2[6] - param_2[2]);
    FUN_01445f10(param_2,&local_20,param_3 + 8,&local_40,local_a0);
    FUN_01445f10(param_2,&local_20,param_3 + 8,&local_30,local_f0);
    fVar5 = param_3[9];
    fVar6 = param_3[10];
    fVar7 = param_3[0xb];
    pfVar1 = param_3 + (uint)(local_d0 < local_80) * 4;
    *pfVar1 = param_3[8];
    pfVar1[1] = fVar5;
    pfVar1[2] = fVar6;
    pfVar1[3] = fVar7;
    fVar5 = param_3[0x19];
    fVar6 = param_3[0x1a];
    fVar7 = param_3[0x1b];
    pfVar1 = param_3 + ((local_d0 < local_80) + 4) * 4;
    *pfVar1 = param_3[0x18];
    pfVar1[1] = fVar5;
    pfVar1[2] = fVar6;
    pfVar1[3] = fVar7;
    *param_5 = *param_5 + -1;
    return 2;
  }
  local_20 = *(undefined8 *)(param_1 + 0x180);
  uStack_18 = *(undefined8 *)(param_1 + 0x188);
  fVar10 = (param_2[4] - *param_3) * *(float *)(param_1 + 0x120);
  fVar14 = (param_2[5] - param_3[1]) * *(float *)(param_1 + 0x124);
  fVar16 = (param_2[6] - param_3[2]) * *(float *)(param_1 + 0x128);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  auVar22._0_4_ = fVar14 + fVar10 + fVar16;
  auVar22._4_4_ = fVar14 + fVar10 + fVar16;
  auVar22._8_4_ = fVar14 + fVar10 + fVar16;
  auVar22._12_4_ = fVar14 + fVar10 + fVar16;
  fVar10 = (fVar5 - *param_3) * *(float *)(param_1 + 0x120);
  fVar14 = (fVar6 - param_3[1]) * *(float *)(param_1 + 0x124);
  fVar16 = (fVar7 - param_3[2]) * *(float *)(param_1 + 0x128);
  fVar9 = fVar14 + fVar10 + fVar16;
  fVar20 = fVar14 + fVar10 + fVar16;
  fVar13 = fVar14 + fVar10 + fVar16;
  fVar16 = fVar14 + fVar10 + fVar16;
  if (fVar9 * auVar22._0_4_ < 0.0) {
    auVar12._0_4_ = fVar9 - auVar22._0_4_;
    auVar12._4_4_ = fVar20 - auVar22._4_4_;
    auVar12._8_4_ = fVar13 - auVar22._8_4_;
    auVar12._12_4_ = fVar16 - auVar22._12_4_;
    auVar21 = rcpps(auVar22,auVar12);
    local_30 = (param_2[4] - fVar5) * (2.0 - auVar21._0_4_ * auVar12._0_4_) * auVar21._0_4_ * fVar9
               + fVar5;
    fStack_2c = (param_2[5] - fVar6) *
                (2.0 - auVar21._4_4_ * auVar12._4_4_) * auVar21._4_4_ * fVar20 + fVar6;
    fStack_28 = (param_2[6] - fVar7) *
                (2.0 - auVar21._8_4_ * auVar12._8_4_) * auVar21._8_4_ * fVar13 + fVar7;
    fStack_24 = (param_2[7] - param_2[3]) *
                (2.0 - auVar21._12_4_ * auVar12._12_4_) * auVar21._12_4_ * fVar16 + param_2[3];
    iVar8 = FUN_01224c80(&local_30,param_3,0);
    if (iVar8 == 7) {
      return 1;
    }
  }
  iVar8 = FUN_01224c80(param_2 + 4,param_3,0);
  if (iVar8 == 7) {
    *param_4 = *param_4 + -1;
    *param_2 = param_2[4];
    param_2[1] = param_2[5];
    param_2[2] = param_2[6];
    param_2[3] = param_2[7];
    param_2[0x10] = param_2[0x14];
    param_2[0x11] = param_2[0x15];
    param_2[0x12] = param_2[0x16];
    param_2[0x13] = param_2[0x17];
    *(undefined4 *)(extraout_ECX + 0x194) = param_7;
    return 0;
  }
  if (iVar8 != 6) {
    if (iVar8 == 5) {
LAB_0122526f:
      fVar5 = param_3[8];
      fVar6 = param_3[9];
      fVar7 = param_3[10];
      fVar10 = param_3[0xb];
      *param_5 = *param_5 + -1;
      param_3[4] = fVar5;
      param_3[5] = fVar6;
      param_3[6] = fVar7;
      param_3[7] = fVar10;
      param_3[0x14] = param_3[0x18];
      param_3[0x15] = param_3[0x19];
      param_3[0x16] = param_3[0x1a];
      param_3[0x17] = param_3[0x1b];
      return 2;
    }
    if (iVar8 == 3) goto LAB_0122522c;
    if (iVar8 == 1) {
      if ((*(float *)(extraout_ECX + 0x184) - local_20._4_4_) * (float)uStack_18 <=
          (*(float *)(extraout_ECX + 0x188) - (float)uStack_18) * local_20._4_4_) goto LAB_0122526f;
      goto LAB_0122522c;
    }
    if (iVar8 == 2) {
      if ((*(float *)(extraout_ECX + 0x188) - (float)uStack_18) * (float)local_20 <=
          (*(float *)(extraout_ECX + 0x180) - (float)local_20) * (float)uStack_18)
      goto LAB_0122522c;
    }
    else if ((iVar8 == 4) &&
            ((*(float *)(extraout_ECX + 0x184) - local_20._4_4_) * (float)local_20 <
             (*(float *)(extraout_ECX + 0x180) - (float)local_20) * local_20._4_4_))
    goto LAB_0122526f;
  }
  *param_3 = param_3[8];
  param_3[1] = param_3[9];
  param_3[2] = param_3[10];
  param_3[3] = param_3[0xb];
  param_3[0x10] = param_3[0x18];
  param_3[0x11] = param_3[0x19];
  param_3[0x12] = param_3[0x1a];
  param_3[0x13] = param_3[0x1b];
LAB_0122522c:
  *param_5 = *param_5 + -1;
  return 2;
}

// 01225310  FUN_01225310  size=107  [run]
void __thiscall FUN_01225310(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_3[8] = param_2[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = fVar1;
  param_3[2] = fVar2;
  param_3[3] = fVar3;
  if (*param_1 == 1) {
    fVar1 = (float)param_1[9];
    fVar2 = (float)param_1[10];
    fVar3 = (float)param_1[0xb];
    param_3[4] = (float)param_1[8];
    param_3[5] = fVar1;
    param_3[6] = fVar2;
    param_3[7] = fVar3;
    return;
  }
  if (param_1[1] == 1) {
    fVar1 = param_2[3];
    fVar2 = (float)param_1[0x29];
    fVar3 = (float)param_1[0x2a];
    fVar4 = (float)param_1[0x2b];
    param_3[4] = fVar1 * *param_3 + (float)param_1[0x28];
    param_3[5] = fVar1 * param_3[1] + fVar2;
    param_3[6] = fVar1 * param_3[2] + fVar3;
    param_3[7] = fVar1 * param_3[3] + fVar4;
    return;
  }
  fVar1 = (float)param_1[0x4d];
  fVar2 = (float)param_1[0x4e];
  fVar3 = (float)param_1[0x4f];
  param_3[4] = (float)param_1[0x4c];
  param_3[5] = fVar1;
  param_3[6] = fVar2;
  param_3[7] = fVar3;
  return;
}

// 01225380  FUN_01225380  size=568  [run]
void __fastcall FUN_01225380(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_a0 [32];
  float local_80;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  int *local_14;
  
  if ((param_1[1] == 3) && (local_14 = (int *)0x0, 0 < *param_1)) {
    piVar7 = param_1 + 8;
    do {
      iVar5 = FUN_01224c80(piVar7,param_1 + 0x28,0);
      if (iVar5 == 7) {
        piVar7 = param_1 + ((int)local_14 + 2) * 4;
        iVar5 = piVar7[1];
        iVar6 = piVar7[2];
        iVar8 = piVar7[3];
        param_1[8] = *piVar7;
        param_1[9] = iVar5;
        param_1[10] = iVar6;
        param_1[0xb] = iVar8;
        *param_1 = 1;
        return;
      }
      local_14 = (int *)((int)local_14 + 1);
      piVar7 = piVar7 + 4;
    } while ((int)local_14 < *param_1);
  }
  if ((*param_1 == 3) && (iVar5 = 0, 0 < param_1[1])) {
    local_14 = param_1 + 0x28;
    do {
      iVar6 = FUN_01224c80(local_14,param_1 + 8,0);
      if (iVar6 == 7) {
        piVar7 = param_1 + (iVar5 + 0xe) * 4;
        iVar6 = piVar7[1];
        iVar8 = piVar7[2];
        iVar4 = piVar7[3];
        param_1[0x38] = *piVar7;
        param_1[0x39] = iVar6;
        param_1[0x3a] = iVar8;
        param_1[0x3b] = iVar4;
        piVar7 = param_1 + (iVar5 + 10) * 4;
        iVar5 = piVar7[1];
        iVar6 = piVar7[2];
        iVar8 = piVar7[3];
        param_1[0x28] = *piVar7;
        param_1[0x29] = iVar5;
        param_1[0x2a] = iVar6;
        param_1[0x2b] = iVar8;
        param_1[1] = 1;
        return;
      }
      local_14 = local_14 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]);
  }
  local_24 = 3.40282e+38;
  local_20 = 0;
  iVar5 = (uint)(*param_1 == 3) * 2 + 1;
  local_2c = 0;
  local_14 = (int *)0x0;
  iVar6 = (uint)(param_1[1] == 3) * 2 + 1;
  if (iVar5 != 0) {
    local_1c = (float *)(param_1 + 8);
    local_30 = iVar5;
    local_28 = iVar6;
    do {
      iVar8 = 0;
      if (0 < iVar6) {
        local_18 = (float *)(param_1 + 0x28);
        do {
          pfVar1 = (float *)(param_1 + ((char)(&DAT_017e192a)[(int)local_14] + 2) * 4);
          local_40 = *pfVar1 - *local_1c;
          fStack_3c = pfVar1[1] - local_1c[1];
          fStack_38 = pfVar1[2] - local_1c[2];
          fStack_34 = pfVar1[3] - local_1c[3];
          pfVar1 = (float *)(param_1 + ((char)(&DAT_017e192a)[iVar8] + 10) * 4);
          local_50 = *pfVar1 - *local_18;
          fStack_4c = pfVar1[1] - local_18[1];
          fStack_48 = pfVar1[2] - local_18[2];
          fStack_44 = pfVar1[3] - local_18[3];
          FUN_01445f10(local_1c,&local_40,local_18,&local_50,local_a0);
          if (local_80 < local_24) {
            local_24 = local_80;
            local_20 = (int)local_14;
            local_2c = iVar8;
          }
          local_18 = local_18 + 4;
          iVar8 = iVar8 + 1;
          iVar5 = local_30;
          iVar6 = local_28;
        } while (iVar8 < local_28);
      }
      local_14 = (int *)((int)local_14 + 1);
      local_1c = local_1c + 4;
    } while ((int)local_14 < iVar5);
  }
  if (iVar5 == 3) {
    *param_1 = *param_1 + -1;
    piVar7 = param_1 + (*param_1 + 2) * 4;
    iVar5 = piVar7[1];
    iVar8 = piVar7[2];
    iVar4 = piVar7[3];
    piVar2 = param_1 + ((char)(&DAT_017e1928)[local_20] + 2) * 4;
    *piVar2 = *piVar7;
    piVar2[1] = iVar5;
    piVar2[2] = iVar8;
    piVar2[3] = iVar4;
  }
  if (iVar6 == 3) {
    param_1[1] = param_1[1] + -1;
    cVar3 = (&DAT_017e1928)[local_2c];
    piVar7 = param_1 + (param_1[1] + 0xe) * 4;
    iVar5 = piVar7[1];
    iVar6 = piVar7[2];
    iVar8 = piVar7[3];
    piVar2 = param_1 + (cVar3 + 0xe) * 4;
    *piVar2 = *piVar7;
    piVar2[1] = iVar5;
    piVar2[2] = iVar6;
    piVar2[3] = iVar8;
    piVar7 = param_1 + (param_1[1] + 10) * 4;
    iVar5 = piVar7[1];
    iVar6 = piVar7[2];
    iVar8 = piVar7[3];
    param_1 = param_1 + (cVar3 + 10) * 4;
    *param_1 = *piVar7;
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    param_1[3] = iVar8;
  }
  return;
}

// 012255C0  FUN_012255c0  size=56  [run]
void __thiscall FUN_012255c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar7 = param_3[3];
  *param_4 = fVar8;
  param_4[1] = fVar9;
  param_4[2] = fVar10;
  param_4[3] = fVar7;
  fVar8 = fVar8 * (fVar1 - fVar4);
  fVar9 = fVar9 * (fVar2 - fVar5);
  fVar10 = fVar10 * (fVar3 - fVar6);
  *in_EAX = fVar9 + fVar8 + fVar10;
  in_EAX[1] = fVar9 + fVar8 + fVar10;
  in_EAX[2] = fVar9 + fVar8 + fVar10;
  in_EAX[3] = fVar9 + fVar8 + fVar10;
  return;
}

// 01225600  FUN_01225600  size=627  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_01225600(float *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float *in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar15;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  float fVar31;
  float fVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  fVar12 = param_1[4];
  fVar14 = param_1[5];
  fVar11 = param_1[6];
  fVar15 = *param_1;
  fVar21 = param_1[1];
  fVar33 = param_1[2];
  fVar34 = param_1[0xc];
  fVar35 = param_1[0xd];
  fVar1 = param_1[0xe];
  fVar7 = param_1[8];
  fVar32 = param_1[9];
  fVar31 = param_1[10];
  fVar13 = param_1[0xf] - param_1[3];
  fVar38 = param_1[7] - param_1[3];
  fVar22 = (fVar1 - fVar11) * (fVar32 - fVar14) - (fVar35 - fVar14) * (fVar31 - fVar11);
  fVar24 = (fVar34 - fVar12) * (fVar31 - fVar11) - (fVar1 - fVar11) * (fVar7 - fVar12);
  fVar25 = (fVar35 - fVar14) * (fVar7 - fVar12) - (fVar34 - fVar12) * (fVar32 - fVar14);
  fVar26 = (fVar1 - fVar31) * (fVar21 - fVar32) - (fVar35 - fVar32) * (fVar33 - fVar31);
  fVar31 = (fVar34 - fVar7) * (fVar33 - fVar31) - (fVar1 - fVar31) * (fVar15 - fVar7);
  fVar32 = (fVar35 - fVar32) * (fVar15 - fVar7) - (fVar34 - fVar7) * (fVar21 - fVar32);
  fVar7 = (fVar1 - fVar33) * (fVar14 - fVar21) - (fVar35 - fVar21) * (fVar11 - fVar33);
  fVar11 = (fVar34 - fVar15) * (fVar11 - fVar33) - (fVar1 - fVar33) * (fVar12 - fVar15);
  fVar12 = (fVar35 - fVar21) * (fVar12 - fVar15) - (fVar34 - fVar15) * (fVar14 - fVar21);
  fVar14 = fVar13 * fVar38 - fVar13 * fVar38;
  fVar15 = (*in_EAX - param_1[0xc]) * param_3;
  fVar21 = (in_EAX[1] - param_1[0xd]) * param_3;
  param_3 = (in_EAX[2] - param_1[0xe]) * param_3;
  fVar33 = fVar21 * fVar24 + fVar15 * fVar22 + fVar25 * param_3;
  fVar34 = fVar21 * fVar31 + fVar15 * fVar26 + fVar32 * param_3;
  fVar35 = fVar21 * fVar11 + fVar15 * fVar7 + fVar12 * param_3;
  fVar15 = fVar21 * fVar14 + fVar15 * fVar11 + fVar14 * param_3;
  auVar27._0_4_ = fVar25 * fVar25 + fVar22 * fVar22 + fVar24 * fVar24;
  auVar27._4_4_ = fVar32 * fVar32 + fVar26 * fVar26 + fVar31 * fVar31;
  auVar27._8_4_ = fVar12 * fVar12 + fVar7 * fVar7 + fVar11 * fVar11;
  auVar27._12_4_ = fVar14 * fVar14 + fVar11 * fVar11 + fVar14 * fVar14;
  auVar28 = maxps(auVar27,_DAT_01701cf0);
  uVar3 = -(uint)(auVar27._0_4_ == (float)DAT_01701b10);
  uVar4 = -(uint)(auVar27._4_4_ == DAT_01701b10._4_4_);
  uVar5 = -(uint)(auVar27._8_4_ == DAT_01701b10._8_4_);
  uVar6 = -(uint)(auVar27._12_4_ == DAT_01701b10._12_4_);
  auVar8 = rcpps(_DAT_01701b10,auVar28);
  auVar40._0_8_ = CONCAT44(uVar4,uVar3) & 0x7f7fffee7f7fffee;
  auVar40._8_4_ = uVar5 & 0x7f7fffee;
  auVar40._12_4_ = uVar6 & 0x7f7fffee;
  auVar9._0_4_ = ~uVar3 & (uint)((2.0 - auVar8._0_4_ * auVar28._0_4_) * auVar8._0_4_ *
                                ABS(fVar33) * fVar33);
  auVar9._4_4_ = ~uVar4 & (uint)((2.0 - auVar8._4_4_ * auVar28._4_4_) * auVar8._4_4_ *
                                ABS(fVar34) * fVar34);
  auVar9._8_4_ = ~uVar5 & (uint)((2.0 - auVar8._8_4_ * auVar28._8_4_) * auVar8._8_4_ *
                                ABS(fVar35) * fVar35);
  auVar9._12_4_ =
       ~uVar6 & (uint)((2.0 - auVar8._12_4_ * auVar28._12_4_) * auVar8._12_4_ * ABS(fVar15) * fVar15
                      );
  auVar9 = auVar9 | auVar40;
  fVar14 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar12 = auVar9._0_4_;
  auVar16._4_4_ = 0xff7fffee;
  auVar16._0_4_ = fVar11;
  auVar16._8_4_ = fVar12;
  auVar16._12_4_ = fVar14;
  auVar8._12_4_ = 0xff7fffee;
  auVar8._0_12_ = auVar9._0_12_;
  auVar9 = maxps(auVar16,auVar8);
  auVar17._0_8_ = CONCAT44(fVar14,fVar14);
  auVar17._8_4_ = fVar14;
  auVar17._12_4_ = fVar14;
  auVar39._8_4_ = fVar14;
  auVar39._0_8_ = auVar17._0_8_;
  auVar39._12_4_ = fVar14;
  auVar36._4_4_ = fVar12;
  auVar36._0_4_ = fVar12;
  auVar36._8_4_ = fVar12;
  auVar36._12_4_ = fVar12;
  auVar8 = minps(auVar17,auVar36);
  auVar29._0_8_ = CONCAT44(fVar11,fVar11);
  auVar29._8_4_ = fVar11;
  auVar29._12_4_ = fVar11;
  auVar40 = maxps(auVar39,auVar36);
  auVar23._8_4_ = fVar11;
  auVar23._0_8_ = auVar29._0_8_;
  auVar23._12_4_ = fVar11;
  auVar28 = minps(auVar29,auVar8);
  auVar8 = maxps(auVar23,auVar40);
  fVar21 = auVar8._0_4_;
  uVar3 = -(uint)(auVar8._4_4_ <= fVar14);
  uVar4 = -(uint)(auVar8._8_4_ <= fVar11);
  uVar5 = ~-(uint)(fVar21 <= fVar12) & (uint)fVar12 | -(uint)(fVar21 <= fVar12) & auVar28._0_4_;
  uVar3 = ~uVar3 & (uint)fVar14 | uVar3 & auVar28._4_4_;
  auVar18._8_4_ = ~uVar4 & (uint)fVar11 | uVar4 & auVar28._8_4_;
  auVar28._4_4_ = uVar3;
  auVar28._0_4_ = uVar3;
  auVar28._8_4_ = uVar3;
  auVar28._12_4_ = uVar3;
  auVar37._4_4_ = uVar5;
  auVar37._0_4_ = uVar5;
  auVar37._8_4_ = uVar5;
  auVar37._12_4_ = uVar5;
  auVar8 = maxps(auVar28,auVar37);
  auVar18._4_4_ = auVar18._8_4_;
  auVar18._0_4_ = auVar18._8_4_;
  auVar18._12_4_ = auVar18._8_4_;
  auVar8 = maxps(auVar18,auVar8);
  fVar15 = auVar8._0_4_;
  auVar19._4_4_ = -(uint)(fVar21 < 1.1920929e-07);
  auVar19._0_4_ = -(uint)(fVar21 < 1.1920929e-07);
  auVar19._8_4_ = -(uint)(fVar21 < 1.1920929e-07);
  auVar19._12_4_ = -(uint)(fVar21 < 1.1920929e-07);
  iVar2 = movmskps(param_1,auVar19);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  auVar30._4_4_ = -(uint)(fVar15 * 1.1 < fVar21);
  auVar30._0_4_ = -(uint)(fVar15 * 1.1 < fVar21);
  auVar30._8_4_ = -(uint)(fVar15 * 1.1 < fVar21);
  auVar30._12_4_ = -(uint)(fVar15 * 1.1 < fVar21);
  iVar2 = movmskps(param_2,auVar30);
  if (iVar2 != 0) {
    auVar20._4_4_ = auVar9._0_4_;
    auVar20._0_4_ = auVar9._4_4_;
    auVar20._8_4_ = auVar9._12_4_;
    auVar20._12_4_ = auVar9._8_4_;
    auVar8 = maxps(auVar9,auVar20);
    auVar10._4_4_ = -(uint)(auVar8._4_4_ <= fVar14);
    auVar10._0_4_ = -(uint)(auVar8._0_4_ <= fVar12);
    auVar10._8_4_ = -(uint)(auVar8._8_4_ <= fVar11);
    auVar10._12_4_ = -(uint)(auVar8._12_4_ <= -3.40282e+38);
    iVar2 = movmskps(in_EAX,auVar10);
    return (uint)(byte)(&DAT_0182bb90)[iVar2];
  }
  uVar3 = FUN_01224b20();
  return uVar3;
}

// 01225880  FUN_01225880  size=302  [run]
void __thiscall FUN_01225880(float *param_1,float *param_2)

{
  bool bVar1;
  float *in_EAX;
  int *unaff_ESI;
  int unaff_EDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = *param_1;
  fVar5 = param_1[1];
  fVar7 = param_1[2];
  fVar9 = param_1[3];
  fVar16 = in_EAX[4] - *in_EAX;
  fVar17 = in_EAX[5] - in_EAX[1];
  fVar18 = in_EAX[6] - in_EAX[2];
  fVar2 = *in_EAX - fVar3;
  fVar4 = in_EAX[1] - fVar5;
  fVar6 = in_EAX[2] - fVar7;
  fVar8 = in_EAX[3] - fVar9;
  fVar12 = in_EAX[4] - fVar3;
  fVar13 = in_EAX[5] - fVar5;
  fVar14 = in_EAX[6] - fVar7;
  fVar15 = in_EAX[7] - fVar9;
  bVar1 = fVar13 * fVar17 + fVar12 * fVar16 + fVar14 * fVar18 < 0.0;
  if (bVar1 != fVar4 * fVar17 + fVar2 * fVar16 + fVar6 * fVar18 < 0.0) {
    fVar3 = fVar16 * fVar16;
    fVar5 = fVar17 * fVar17;
    fVar7 = fVar18 * fVar18;
    auVar10._0_4_ = fVar5 + fVar3 + fVar7;
    auVar10._4_4_ = fVar5 + fVar3 + fVar7;
    auVar10._8_4_ = fVar5 + fVar3 + fVar7;
    auVar10._12_4_ = fVar5 + fVar3 + fVar7;
    auVar10 = rsqrtps(auVar10,auVar10);
    fVar16 = auVar10._0_4_ * fVar16;
    fVar17 = auVar10._4_4_ * fVar17;
    fVar18 = auVar10._8_4_ * fVar18;
    fVar11 = auVar10._12_4_ * (in_EAX[7] - in_EAX[3]);
    fVar3 = fVar6 * fVar13 - fVar4 * fVar14;
    fVar7 = fVar2 * fVar14 - fVar6 * fVar12;
    fVar5 = fVar4 * fVar12 - fVar2 * fVar13;
    fVar9 = fVar8 * fVar15 - fVar8 * fVar15;
    fVar2 = fVar7 * fVar18;
    fVar4 = fVar5 * fVar16;
    fVar6 = fVar3 * fVar17;
    fVar8 = fVar9 * fVar11;
    fVar5 = fVar5 * fVar17;
    fVar3 = fVar3 * fVar18;
    fVar7 = fVar7 * fVar16;
    fVar9 = fVar9 * fVar11;
    if (unaff_EDI == 1) {
      *param_2 = fVar5 - fVar2;
      param_2[1] = fVar3 - fVar4;
      param_2[2] = fVar7 - fVar6;
      param_2[3] = fVar9 - fVar8;
      return;
    }
    *param_2 = fVar2 - fVar5;
    param_2[1] = fVar4 - fVar3;
    param_2[2] = fVar6 - fVar7;
    param_2[3] = fVar8 - fVar9;
    return;
  }
  if (bVar1) {
    *in_EAX = in_EAX[4];
    in_EAX[1] = in_EAX[5];
    in_EAX[2] = in_EAX[6];
    in_EAX[3] = in_EAX[7];
    in_EAX[0x10] = in_EAX[0x14];
    in_EAX[0x11] = in_EAX[0x15];
    in_EAX[0x12] = in_EAX[0x16];
    in_EAX[0x13] = in_EAX[0x17];
  }
  *unaff_ESI = *unaff_ESI + -1;
  if (unaff_EDI == 1) {
    fVar2 = in_EAX[1];
    fVar4 = in_EAX[2];
    fVar6 = in_EAX[3];
    *param_2 = fVar3 - *in_EAX;
    param_2[1] = fVar5 - fVar2;
    param_2[2] = fVar7 - fVar4;
    param_2[3] = fVar9 - fVar6;
    return;
  }
  fVar2 = in_EAX[1];
  fVar4 = in_EAX[2];
  fVar6 = in_EAX[3];
  *param_2 = *in_EAX - fVar3;
  param_2[1] = fVar2 - fVar5;
  param_2[2] = fVar4 - fVar7;
  param_2[3] = fVar6 - fVar9;
  return;
}

// 012259B0  FUN_012259b0  size=941  [run]
void __thiscall FUN_012259b0(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float local_100 [16];
  float local_c0 [4];
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
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int *local_38;
  int *local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  float *local_14;
  
  iVar13 = param_1[1];
  iVar14 = 4;
  if (iVar13 < 3) {
    iVar4 = *param_1;
    if (iVar4 < 3) {
      local_30._0_4_ = (int)*(undefined8 *)(param_1 + 8);
      local_30._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
      uStack_28._0_4_ = (int)*(undefined8 *)(param_1 + 10);
      uStack_28._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20);
      piVar1 = param_1 + (iVar4 + 2) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      piVar1 = param_1 + (*param_1 + 3) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      local_30._0_4_ = (int)*(undefined8 *)(param_1 + 0x38);
      local_30._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      uStack_28._0_4_ = (int)*(undefined8 *)(param_1 + 0x3a);
      uStack_28._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x3a) >> 0x20);
      piVar1 = param_1 + (param_1[1] + 0xe) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      piVar1 = param_1 + (param_1[1] + 0xf) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x2a);
      local_30._0_4_ = (int)uVar2;
      local_30._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
      uStack_28._0_4_ = (int)uVar3;
      uStack_28._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      piVar1 = param_1 + (param_1[1] + 10) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      piVar1 = param_1 + (param_1[1] + 0xb) * 4;
      *piVar1 = (int)local_30;
      piVar1[1] = local_30._4_4_;
      piVar1[2] = (int)uStack_28;
      piVar1[3] = uStack_28._4_4_;
      iVar14 = 1;
      local_30 = uVar2;
      uStack_28 = uVar3;
    }
    else {
      if (iVar4 < 4) {
        if (iVar13 < 2) {
          iVar14 = 3;
        }
        else {
          param_1[0x14] = param_1[8];
          param_1[0x15] = param_1[9];
          param_1[0x16] = param_1[10];
          param_1[0x17] = param_1[0xb];
          param_1[0x44] = param_1[0x3c];
          param_1[0x45] = param_1[0x3d];
          param_1[0x46] = param_1[0x3e];
          param_1[0x47] = param_1[0x3f];
          param_1[0x34] = param_1[0x2c];
          param_1[0x35] = param_1[0x2d];
          param_1[0x36] = param_1[0x2e];
          param_1[0x37] = param_1[0x2f];
        }
      }
      else {
        param_1[0x44] = param_1[0x38];
        param_1[0x45] = param_1[0x39];
        param_1[0x46] = param_1[0x3a];
        param_1[0x47] = param_1[0x3b];
        param_1[0x34] = param_1[0x28];
        param_1[0x35] = param_1[0x29];
        param_1[0x36] = param_1[0x2a];
        param_1[0x37] = param_1[0x2b];
      }
      param_1[0x3c] = param_1[0x38];
      param_1[0x3d] = param_1[0x39];
      param_1[0x3e] = param_1[0x3a];
      param_1[0x3f] = param_1[0x3b];
      param_1[0x2c] = param_1[0x28];
      param_1[0x2d] = param_1[0x29];
      param_1[0x2e] = param_1[0x2a];
      param_1[0x2f] = param_1[0x2b];
      param_1[0x40] = param_1[0x38];
      param_1[0x41] = param_1[0x39];
      param_1[0x42] = param_1[0x3a];
      param_1[0x43] = param_1[0x3b];
      param_1[0x30] = param_1[0x28];
      param_1[0x31] = param_1[0x29];
      param_1[0x32] = param_1[0x2a];
      param_1[0x33] = param_1[0x2b];
    }
  }
  else {
    if (iVar13 < 4) {
      if (*param_1 < 2) {
        iVar14 = 3;
      }
      else {
        param_1[0x14] = param_1[0xc];
        param_1[0x15] = param_1[0xd];
        param_1[0x16] = param_1[0xe];
        param_1[0x17] = param_1[0xf];
        param_1[0x44] = param_1[0x38];
        param_1[0x45] = param_1[0x39];
        param_1[0x46] = param_1[0x3a];
        param_1[0x47] = param_1[0x3b];
        param_1[0x34] = param_1[0x28];
        param_1[0x35] = param_1[0x29];
        param_1[0x36] = param_1[0x2a];
        param_1[0x37] = param_1[0x2b];
      }
    }
    else {
      param_1[0x14] = param_1[8];
      param_1[0x15] = param_1[9];
      param_1[0x16] = param_1[10];
      param_1[0x17] = param_1[0xb];
    }
    param_1[0xc] = param_1[8];
    param_1[0xd] = param_1[9];
    param_1[0xe] = param_1[10];
    param_1[0xf] = param_1[0xb];
    param_1[0x10] = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
  }
  local_34 = param_1;
  if (iVar14 != 0) {
    pfVar12 = local_100;
    pfVar11 = (float *)(param_1 + 8);
    iVar13 = iVar14;
    do {
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      fVar8 = pfVar11[0x21];
      fVar9 = pfVar11[0x22];
      fVar10 = pfVar11[0x23];
      *pfVar12 = *pfVar11 - pfVar11[0x20];
      pfVar12[1] = fVar5 - fVar8;
      pfVar12[2] = fVar6 - fVar9;
      pfVar12[3] = fVar7 - fVar10;
      pfVar11 = pfVar11 + 4;
      pfVar12 = pfVar12 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  local_38 = param_1 + 0x38;
  local_14 = (float *)(param_1 + 8);
  iVar13 = FUN_0122f3d0(param_2,param_3,param_4,0x38d1b717,local_14,local_38,local_100,iVar14,
                        &local_80);
  if (iVar13 == 1) {
    *param_1 = 1;
    param_1[1] = 1;
    param_1[0x48] = local_80;
    param_1[0x49] = iStack_7c;
    param_1[0x4a] = iStack_78;
    param_1[0x4b] = iStack_74;
    param_1[5] = 1;
    return;
  }
  *param_1 = 3;
  param_1[1] = 3;
  if (((short)param_1[0xf] == (short)param_1[0x13]) || ((short)param_1[0xb] == (short)param_1[0x13])
     ) {
    *param_1 = 2;
  }
  if ((short)param_1[0xb] == (short)param_1[0xf]) {
    *param_1 = *param_1 + -1;
    pfVar11 = (float *)(param_1 + (*param_1 + 2) * 4);
    fVar5 = pfVar11[1];
    fVar6 = pfVar11[2];
    fVar7 = pfVar11[3];
    *local_14 = *pfVar11;
    local_14[1] = fVar5;
    local_14[2] = fVar6;
    local_14[3] = fVar7;
  }
  if (((short)param_1[0x3f] == (short)param_1[0x43]) ||
     ((short)param_1[0x3b] == (short)param_1[0x43])) {
    param_1[1] = param_1[1] + -1;
  }
  iVar13 = param_1[1];
  if ((1 < iVar13) && ((short)param_1[0x3b] == (short)param_1[0x3f])) {
    param_1[1] = iVar13 + -1;
    param_1 = param_1 + (iVar13 + 0xd) * 4;
    iVar13 = param_1[1];
    iVar14 = param_1[2];
    iVar4 = param_1[3];
    *local_38 = *param_1;
    local_38[1] = iVar13;
    local_38[2] = iVar14;
    local_38[3] = iVar4;
  }
  pfVar11 = local_c0;
  for (iVar13 = 0x10; piVar1 = local_34, iVar13 != 0; iVar13 = iVar13 + -1) {
    *pfVar11 = *param_4;
    param_4 = param_4 + 1;
    pfVar11 = pfVar11 + 1;
  }
  iVar13 = local_34[1] + -1;
  pfVar11 = (float *)(local_34 + (local_34[1] + 0xd) * 4);
  do {
    fVar5 = *pfVar11;
    fVar6 = pfVar11[1];
    fVar7 = pfVar11[2];
    pfVar11[-0x10] = fVar5 * local_c0[0] + fVar6 * local_b0 + fVar7 * local_a0 + local_90;
    pfVar11[-0xf] = fVar5 * local_c0[1] + fVar6 * fStack_ac + fVar7 * fStack_9c + fStack_8c;
    pfVar11[-0xe] = fVar5 * local_c0[2] + fVar6 * fStack_a8 + fVar7 * fStack_98 + fStack_88;
    pfVar11[-0xd] = fVar5 * local_c0[3] + fVar6 * fStack_a4 + fVar7 * fStack_94 + fStack_84;
    pfVar11 = pfVar11 + -4;
    iVar13 = iVar13 + -1;
  } while (-1 < iVar13);
  if (4 < *local_34 + local_34[1]) {
    FUN_01225380();
  }
  if ((*piVar1 == 2) && (piVar1[1] == 2)) {
    local_50 = (float)piVar1[0xc] - *local_14;
    fStack_4c = (float)piVar1[0xd] - local_14[1];
    fStack_48 = (float)piVar1[0xe] - local_14[2];
    fStack_44 = (float)piVar1[0xf] - local_14[3];
    local_30 = CONCAT44((float)piVar1[0x2d] - (float)piVar1[0x29],
                        (float)piVar1[0x2c] - (float)piVar1[0x28]);
    uStack_28 = CONCAT44((float)piVar1[0x2f] - (float)piVar1[0x2b],
                         (float)piVar1[0x2e] - (float)piVar1[0x2a]);
    FUN_01445f10(local_14,&local_50,piVar1 + 0x28,&local_30,piVar1 + 0x4c);
  }
  piVar1[5] = 1;
  piVar1[0x48] = local_80;
  piVar1[0x49] = iStack_7c;
  piVar1[0x4a] = iStack_78;
  piVar1[0x4b] = iStack_74;
  return;
}

// 01225D70  FUN_01225d70  size=222  [run]
void __fastcall FUN_01225d70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *unaff_ESI;
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  
  fVar7 = *param_1 - param_1[8];
  fVar9 = param_1[1] - param_1[9];
  fVar11 = param_1[2] - param_1[10];
  fVar13 = param_1[3] - param_1[0xb];
  fVar1 = param_1[8] - param_1[4];
  fVar4 = param_1[9] - param_1[5];
  fVar5 = param_1[10] - param_1[6];
  fVar6 = param_1[0xb] - param_1[7];
  fVar8 = fVar11 * fVar4 - fVar9 * fVar5;
  fVar10 = fVar7 * fVar5 - fVar11 * fVar1;
  fVar12 = fVar9 * fVar1 - fVar7 * fVar4;
  fVar14 = fVar13 * fVar6 - fVar13 * fVar6;
  fVar1 = fVar8 * fVar8;
  fVar4 = fVar10 * fVar10;
  fVar7 = fVar12 * fVar12;
  fVar15 = fVar4 + fVar1 + fVar7;
  fVar16 = fVar4 + fVar1 + fVar7;
  fVar17 = fVar4 + fVar1 + fVar7;
  fVar7 = fVar4 + fVar1 + fVar7;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar15;
  auVar3._8_4_ = fVar17;
  auVar3._12_4_ = fVar7;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar1 = auVar3._0_4_;
  fVar5 = auVar3._4_4_;
  fVar9 = auVar3._8_4_;
  fVar13 = auVar3._12_4_;
  *param_2 = fVar8;
  param_2[1] = fVar10;
  param_2[2] = fVar12;
  param_2[3] = fVar14;
  fVar4 = fVar8 * *unaff_ESI;
  fVar6 = fVar10 * unaff_ESI[1];
  fVar11 = fVar12 * unaff_ESI[2];
  fVar1 = (float)((uint)(fVar6 + fVar4 + fVar11) & 0x80000000 ^ (uint)fVar8) *
          (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar1 * fVar15 * fVar1) * fVar1 * 0.5));
  fVar5 = (float)((uint)(fVar6 + fVar4 + fVar11) & 0x80000000 ^ (uint)fVar10) *
          (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar5 * fVar16 * fVar5) * fVar5 * 0.5));
  fVar9 = (float)((uint)(fVar6 + fVar4 + fVar11) & 0x80000000 ^ (uint)fVar12) *
          (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar9 * fVar17 * fVar9) * fVar9 * 0.5));
  *param_2 = fVar1;
  param_2[1] = fVar5;
  param_2[2] = fVar9;
  param_2[3] = (float)((uint)(fVar6 + fVar4 + fVar11) & 0x80000000 ^ (uint)fVar14) *
               (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5));
  fVar1 = (*param_4 - *param_1) * fVar1;
  fVar5 = (param_4[1] - param_1[1]) * fVar5;
  fVar9 = (param_4[2] - param_1[2]) * fVar9;
  *param_3 = fVar5 + fVar1 + fVar9;
  param_3[1] = fVar5 + fVar1 + fVar9;
  param_3[2] = fVar5 + fVar1 + fVar9;
  param_3[3] = fVar5 + fVar1 + fVar9;
  return;
}

// 01225E50  FUN_01225e50  size=3787  [run]
undefined4 __thiscall
FUN_01225e50(uint *param_1,int *param_2,int *param_3,float *param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
  float fVar26;
  undefined1 auVar21 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float *pfVar37;
  uint *puVar38;
  uint *puVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float local_110 [4];
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
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
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
  uint uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_48;
  uint local_44;
  float *local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float *local_1c;
  uint *local_18;
  uint *local_14;
  
  uVar11 = param_1[1];
  local_18 = param_1 + 1;
  pfVar10 = param_4;
  pfVar15 = local_110;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar15 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar15 = pfVar15 + 1;
  }
  iVar9 = uVar11 - 1;
  pfVar10 = (float *)(param_1 + (uVar11 + 0xd) * 4);
  do {
    fVar31 = *pfVar10;
    fVar32 = pfVar10[1];
    fVar17 = pfVar10[2];
    pfVar10[-0x10] = local_e0 + local_100 * fVar32 + local_110[0] * fVar31 + local_f0 * fVar17;
    pfVar10[-0xf] = fStack_dc + fStack_fc * fVar32 + local_110[1] * fVar31 + fStack_ec * fVar17;
    pfVar10[-0xe] = fStack_d8 + fStack_f8 * fVar32 + local_110[2] * fVar31 + fStack_e8 * fVar17;
    pfVar10[-0xd] = fStack_d4 + fStack_f4 * fVar32 + local_110[3] * fVar31 + fStack_e4 * fVar17;
    pfVar10 = pfVar10 + -4;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  local_1c = (float *)(param_1 + 0x28);
  pfVar10 = (float *)(param_1 + 8);
  local_3c = 0;
  local_34 = 1.192093e-10;
  local_40 = pfVar10;
  local_14 = param_1;
LAB_01225f11:
  uVar11 = *local_18;
  local_3c = local_3c + 1;
  local_34 = local_34 * 2.0;
  local_44 = uVar11 + *local_14;
  local_14[0x65] = 0;
  uVar11 = *local_14 * 8 | uVar11;
  do {
    pfVar15 = local_1c;
    switch(uVar11) {
    case 9:
      goto switchD_01225f58_caseD_9;
    case 10:
      goto LAB_012263c8;
    case 0xb:
      break;
    case 0xc:
      iVar9 = FUN_01225600(0x3f800000);
      if (iVar9 < 0) goto switchD_01225f58_caseD_d;
      *local_18 = *local_18 - 1;
      uVar11 = local_14[0x35];
      uVar7 = local_14[0x36];
      uVar8 = local_14[0x37];
      puVar38 = local_14 + (iVar9 + 10) * 4;
      *puVar38 = local_14[0x34];
      puVar38[1] = uVar11;
      puVar38[2] = uVar7;
      puVar38[3] = uVar8;
      uVar11 = local_14[0x45];
      uVar7 = local_14[0x46];
      uVar8 = local_14[0x47];
      puVar38 = local_14 + (iVar9 + 0xe) * 4;
      *puVar38 = local_14[0x44];
      puVar38[1] = uVar11;
      puVar38[2] = uVar7;
      puVar38[3] = uVar8;
      break;
    default:
      goto switchD_01225f58_caseD_d;
    case 0x11:
LAB_01226534:
      fVar31 = pfVar10[4];
      fVar32 = pfVar10[5];
      fVar17 = pfVar10[6];
      fVar18 = pfVar10[7];
      fVar30 = fVar31 - *pfVar10;
      fVar19 = fVar32 - pfVar10[1];
      fVar23 = fVar17 - pfVar10[2];
      fVar16 = *pfVar10 - *pfVar15;
      fVar22 = pfVar10[1] - pfVar15[1];
      fVar24 = pfVar10[2] - pfVar15[2];
      fVar26 = pfVar10[3] - pfVar15[3];
      fVar25 = fVar31 - *pfVar15;
      fVar27 = fVar32 - pfVar15[1];
      fVar28 = fVar17 - pfVar15[2];
      bVar6 = fVar27 * fVar19 + fVar25 * fVar30 + fVar28 * fVar23 < 0.0;
      if (bVar6 == fVar22 * fVar19 + fVar16 * fVar30 + fVar24 * fVar23 < 0.0) {
        if (bVar6) {
          *pfVar10 = fVar31;
          pfVar10[1] = fVar32;
          pfVar10[2] = fVar17;
          pfVar10[3] = fVar18;
          pfVar10[0x10] = pfVar10[0x14];
          pfVar10[0x11] = pfVar10[0x15];
          pfVar10[0x12] = pfVar10[0x16];
          pfVar10[0x13] = pfVar10[0x17];
        }
        *local_14 = *local_14 - 1;
        fVar31 = pfVar10[1];
        fVar32 = pfVar10[2];
        fVar17 = pfVar10[3];
        fVar18 = pfVar15[1];
        fVar16 = pfVar15[2];
        fVar22 = pfVar15[3];
        local_14[0x48] = (uint)(*pfVar10 - *pfVar15);
        local_14[0x49] = (uint)(fVar31 - fVar18);
        local_14[0x4a] = (uint)(fVar32 - fVar16);
        local_14[0x4b] = (uint)(fVar17 - fVar22);
      }
      else {
        fVar31 = fVar30 * fVar30;
        fVar32 = fVar19 * fVar19;
        auVar21._8_4_ = fVar23 * fVar23;
        auVar21._4_4_ = auVar21._8_4_;
        auVar21._0_4_ = auVar21._8_4_;
        auVar21._12_4_ = auVar21._8_4_;
        auVar34._4_4_ = fVar32 + fVar31 + auVar21._8_4_;
        auVar34._0_4_ = fVar32 + fVar31 + auVar21._8_4_;
        auVar34._8_4_ = fVar32 + fVar31 + auVar21._8_4_;
        auVar34._12_4_ = fVar32 + fVar31 + auVar21._8_4_;
        auVar34 = rsqrtps(auVar21,auVar34);
        fVar30 = fVar30 * auVar34._0_4_;
        fVar19 = fVar19 * auVar34._4_4_;
        fVar23 = fVar23 * auVar34._8_4_;
        fVar29 = (fVar18 - pfVar10[3]) * auVar34._12_4_;
        fVar31 = fVar24 * fVar27 - fVar22 * fVar28;
        fVar32 = fVar16 * fVar28 - fVar24 * fVar25;
        fVar17 = fVar22 * fVar25 - fVar16 * fVar27;
        fVar18 = fVar26 * (fVar18 - pfVar15[3]) - fVar26 * (fVar18 - pfVar15[3]);
        local_14[0x48] = (uint)(fVar32 * fVar23 - fVar17 * fVar19);
        local_14[0x49] = (uint)(fVar17 * fVar30 - fVar31 * fVar23);
        local_14[0x4a] = (uint)(fVar31 * fVar19 - fVar32 * fVar30);
        local_14[0x4b] = (uint)(fVar18 * fVar29 - fVar18 * fVar29);
      }
      goto LAB_01226640;
    case 0x12:
      goto switchD_01225f58_caseD_12;
    case 0x13:
      uVar41 = 1;
      uVar40 = CONCAT31((int3)(local_14[100] >> 8),local_14[100] == 2);
      pfVar15 = pfVar10;
      pfVar37 = local_1c;
      puVar38 = local_14;
      puVar39 = local_18;
      goto LAB_01225f9b;
    case 0x19:
LAB_01226216:
      iVar9 = FUN_01224c80(pfVar15,pfVar10,0xffffffff);
      if (iVar9 != 7) {
        iVar9 = (int)(char)(&DAT_017e1920)[iVar9];
        if (-1 < iVar9) {
          cVar3 = (&DAT_017e1928)[iVar9];
          uVar13 = (uint)(char)(&DAT_017e192a)[iVar9];
          pfVar10 = (float *)(local_14 + (iVar9 + 2) * 4);
          fVar31 = *pfVar10;
          fVar32 = pfVar10[1];
          fVar17 = pfVar10[2];
          fVar18 = *local_1c;
          fVar16 = local_1c[1];
          fVar22 = local_1c[2];
          iVar9 = (int)cVar3 + 2;
          pfVar10 = (float *)(local_14 + iVar9 * 4);
          fVar24 = *pfVar10;
          fVar26 = pfVar10[1];
          fVar30 = pfVar10[2];
          pfVar10 = (float *)(local_14 + (uVar13 + 2) * 4);
          fVar19 = *pfVar10;
          fVar23 = pfVar10[1];
          fVar25 = pfVar10[2];
          uVar11 = local_14[0x11];
          uVar7 = local_14[0x12];
          uVar8 = local_14[0x13];
          *local_14 = 2;
          if (0.0 <= (fVar26 - fVar32) * (fVar16 - fVar32) + (fVar24 - fVar31) * (fVar18 - fVar31) +
                     (fVar30 - fVar17) * (fVar22 - fVar17)) {
            puVar38 = local_14 + (uVar13 + 2) * 4;
            *puVar38 = local_14[0x10];
            puVar38[1] = uVar11;
            puVar38[2] = uVar7;
            puVar38[3] = uVar8;
          }
          else {
            puVar38 = local_14 + iVar9 * 4;
            *puVar38 = local_14[0x10];
            puVar38[1] = uVar11;
            puVar38[2] = uVar7;
            puVar38[3] = uVar8;
            if ((fVar25 - fVar17) * (fVar22 - fVar17) +
                (fVar23 - fVar32) * (fVar16 - fVar32) + (fVar19 - fVar31) * (fVar18 - fVar31) < 0.0)
            {
              uVar11 = *local_14;
              if (uVar13 == uVar11) {
                uVar13 = (int)cVar3;
              }
              *local_14 = uVar11 - 1;
              puVar38 = local_14 + (uVar11 + 1) * 4;
              uVar11 = puVar38[1];
              uVar7 = puVar38[2];
              uVar8 = puVar38[3];
              puVar39 = local_14 + (uVar13 + 2) * 4;
              *puVar39 = *puVar38;
              puVar39[1] = uVar11;
              puVar39[2] = uVar7;
              puVar39[3] = uVar8;
            }
          }
          goto LAB_012262ea;
        }
        if (iVar9 != -1) {
          *local_14 = *local_14 - 1;
          uVar11 = local_14[0x11];
          uVar7 = local_14[0x12];
          uVar8 = local_14[0x13];
          puVar38 = local_14 + (iVar9 + 10) * 4;
          *puVar38 = local_14[0x10];
          puVar38[1] = uVar11;
          puVar38[2] = uVar7;
          puVar38[3] = uVar8;
          goto LAB_01226534;
        }
        fVar31 = *pfVar10;
        fVar32 = pfVar10[1];
        fVar17 = pfVar10[2];
        fVar18 = pfVar10[3];
        fVar16 = *pfVar15;
        fVar22 = pfVar15[1];
        fVar24 = pfVar15[2];
        fVar26 = pfVar15[3];
        *local_14 = 1;
        *local_18 = 1;
        local_14[0x48] = (uint)(fVar31 - fVar16);
        local_14[0x49] = (uint)(fVar32 - fVar22);
        local_14[0x4a] = (uint)(fVar17 - fVar24);
        local_14[0x4b] = (uint)(fVar18 - fVar26);
      }
      goto LAB_01226640;
    case 0x1a:
      uVar41 = 0xffffffff;
      uVar40 = CONCAT31((int3)(local_14[100] >> 8),local_14[100] == 2);
      pfVar37 = pfVar10;
      puVar38 = local_18;
      puVar39 = local_14;
LAB_01225f9b:
      iVar9 = FUN_01224e60(pfVar15,pfVar37,puVar38,puVar39,uVar40,uVar41);
      if (iVar9 == 1) goto switchD_01225f58_caseD_d;
      if (iVar9 == 2) {
switchD_01225f58_caseD_12:
        pfVar15 = local_1c;
        local_b0 = (float)local_14[0xc] - *pfVar10;
        fStack_ac = (float)local_14[0xd] - pfVar10[1];
        fStack_a8 = (float)local_14[0xe] - pfVar10[2];
        fStack_a4 = (float)local_14[0xf] - pfVar10[3];
        local_c0 = (float)local_14[0x2c] - *local_1c;
        fStack_bc = (float)local_14[0x2d] - local_1c[1];
        fStack_b8 = (float)local_14[0x2e] - local_1c[2];
        fStack_b4 = (float)local_14[0x2f] - local_1c[3];
        uVar11 = FUN_01445f10(pfVar10,&local_b0,local_1c,&local_c0,local_14 + 0x4c);
        if (uVar11 != 0) {
          if ((uVar11 & 1) == 0) {
            if ((uVar11 & 2) != 0) goto LAB_01226012;
          }
          else {
            fVar31 = (float)local_14[0xd];
            fVar32 = (float)local_14[0xe];
            fVar17 = (float)local_14[0xf];
            *pfVar10 = (float)local_14[0xc];
            pfVar10[1] = fVar31;
            pfVar10[2] = fVar32;
            pfVar10[3] = fVar17;
LAB_01226012:
            *local_14 = 1;
          }
          if ((uVar11 & 4) == 0) {
            if ((uVar11 & 8) != 0) {
              *local_18 = 1;
            }
          }
          else {
            fVar31 = (float)local_14[0x2d];
            fVar32 = (float)local_14[0x2e];
            fVar17 = (float)local_14[0x2f];
            *pfVar15 = (float)local_14[0x2c];
            pfVar15[1] = fVar31;
            pfVar15[2] = fVar32;
            pfVar15[3] = fVar17;
            local_14[0x38] = local_14[0x3c];
            local_14[0x39] = local_14[0x3d];
            local_14[0x3a] = local_14[0x3e];
            local_14[0x3b] = local_14[0x3f];
            *local_18 = 1;
          }
          goto LAB_012262ea;
        }
        fVar18 = fStack_ac * fStack_b8 - fStack_a8 * fStack_bc;
        fVar16 = fStack_a8 * local_c0 - local_b0 * fStack_b8;
        fVar22 = local_b0 * fStack_bc - fStack_ac * local_c0;
        fVar24 = fStack_a4 * fStack_b4 - fStack_a4 * fStack_b4;
        fVar31 = (*pfVar10 - *pfVar15) * fVar18;
        fVar32 = (pfVar10[1] - pfVar15[1]) * fVar16;
        fVar17 = (pfVar10[2] - pfVar15[2]) * fVar22;
        local_14[0x48] = (uint)fVar18;
        local_14[0x49] = (uint)fVar16;
        local_14[0x4a] = (uint)fVar22;
        local_14[0x4b] = (uint)fVar24;
        local_14[0x48] = (uint)(fVar32 + fVar31 + fVar17) & 0x80000000 ^ (uint)fVar18;
        local_14[0x49] = (uint)(fVar32 + fVar31 + fVar17) & 0x80000000 ^ (uint)fVar16;
        local_14[0x4a] = (uint)(fVar32 + fVar31 + fVar17) & 0x80000000 ^ (uint)fVar22;
        local_14[0x4b] = (uint)(fVar32 + fVar31 + fVar17) & 0x80000000 ^ (uint)fVar24;
      }
      goto LAB_01226640;
    case 0x21:
      iVar9 = FUN_01225600(0xbf800000);
      if (-1 < iVar9) {
        *local_14 = *local_14 - 1;
        uVar11 = local_14[0x15];
        uVar7 = local_14[0x16];
        uVar8 = local_14[0x17];
        puVar38 = local_14 + (iVar9 + 2) * 4;
        *puVar38 = local_14[0x14];
        puVar38[1] = uVar11;
        puVar38[2] = uVar7;
        puVar38[3] = uVar8;
        goto LAB_01226216;
      }
      goto switchD_01225f58_caseD_d;
    }
    iVar9 = FUN_01224c80(pfVar10,pfVar15,1);
    if (iVar9 == 7) goto LAB_01226640;
    iVar9 = (int)(char)(&DAT_017e1920)[iVar9];
    if (iVar9 < 0) {
      if (iVar9 == -1) {
        fVar31 = *pfVar10;
        fVar32 = pfVar10[1];
        fVar17 = pfVar10[2];
        fVar18 = pfVar10[3];
        fVar16 = *pfVar15;
        fVar22 = pfVar15[1];
        fVar24 = pfVar15[2];
        fVar26 = pfVar15[3];
        *local_14 = 1;
        *local_18 = 1;
        local_14[0x48] = (uint)(fVar31 - fVar16);
        local_14[0x49] = (uint)(fVar32 - fVar22);
        local_14[0x4a] = (uint)(fVar17 - fVar24);
        local_14[0x4b] = (uint)(fVar18 - fVar26);
      }
      else {
        *local_18 = *local_18 - 1;
        uVar11 = local_14[0x31];
        uVar7 = local_14[0x32];
        uVar8 = local_14[0x33];
        puVar38 = local_14 + (iVar9 + 0x12) * 4;
        *puVar38 = local_14[0x30];
        puVar38[1] = uVar11;
        puVar38[2] = uVar7;
        puVar38[3] = uVar8;
        uVar11 = local_14[0x41];
        uVar7 = local_14[0x42];
        uVar8 = local_14[0x43];
        puVar38 = local_14 + (iVar9 + 0x16) * 4;
        *puVar38 = local_14[0x40];
        puVar38[1] = uVar11;
        puVar38[2] = uVar7;
        puVar38[3] = uVar8;
LAB_012263c8:
        fVar31 = pfVar15[4];
        fVar32 = pfVar15[5];
        fVar17 = pfVar15[6];
        fVar18 = pfVar15[7];
        fVar30 = fVar31 - *pfVar15;
        fVar19 = fVar32 - pfVar15[1];
        fVar23 = fVar17 - pfVar15[2];
        fVar16 = *pfVar15 - *pfVar10;
        fVar22 = pfVar15[1] - pfVar10[1];
        fVar24 = pfVar15[2] - pfVar10[2];
        fVar26 = pfVar15[3] - pfVar10[3];
        fVar25 = fVar31 - *pfVar10;
        fVar27 = fVar32 - pfVar10[1];
        fVar28 = fVar17 - pfVar10[2];
        bVar6 = fVar27 * fVar19 + fVar25 * fVar30 + fVar28 * fVar23 < 0.0;
        if (bVar6 == fVar22 * fVar19 + fVar16 * fVar30 + fVar24 * fVar23 < 0.0) {
          if (bVar6) {
            *pfVar15 = fVar31;
            pfVar15[1] = fVar32;
            pfVar15[2] = fVar17;
            pfVar15[3] = fVar18;
            pfVar15[0x10] = pfVar15[0x14];
            pfVar15[0x11] = pfVar15[0x15];
            pfVar15[0x12] = pfVar15[0x16];
            pfVar15[0x13] = pfVar15[0x17];
          }
          *local_18 = *local_18 - 1;
          fVar31 = pfVar10[1];
          fVar32 = pfVar10[2];
          fVar17 = pfVar10[3];
          fVar18 = pfVar15[1];
          fVar16 = pfVar15[2];
          fVar22 = pfVar15[3];
          local_14[0x48] = (uint)(*pfVar10 - *pfVar15);
          local_14[0x49] = (uint)(fVar31 - fVar18);
          local_14[0x4a] = (uint)(fVar32 - fVar16);
          local_14[0x4b] = (uint)(fVar17 - fVar22);
        }
        else {
          fVar31 = fVar30 * fVar30;
          fVar32 = fVar19 * fVar19;
          auVar20._8_4_ = fVar23 * fVar23;
          auVar20._4_4_ = auVar20._8_4_;
          auVar20._0_4_ = auVar20._8_4_;
          auVar20._12_4_ = auVar20._8_4_;
          auVar5._4_4_ = fVar32 + fVar31 + auVar20._8_4_;
          auVar5._0_4_ = fVar32 + fVar31 + auVar20._8_4_;
          auVar5._8_4_ = fVar32 + fVar31 + auVar20._8_4_;
          auVar5._12_4_ = fVar32 + fVar31 + auVar20._8_4_;
          auVar34 = rsqrtps(auVar20,auVar5);
          fVar30 = fVar30 * auVar34._0_4_;
          fVar19 = fVar19 * auVar34._4_4_;
          fVar23 = fVar23 * auVar34._8_4_;
          fVar29 = (fVar18 - pfVar15[3]) * auVar34._12_4_;
          fVar31 = fVar24 * fVar27 - fVar22 * fVar28;
          fVar32 = fVar16 * fVar28 - fVar24 * fVar25;
          fVar17 = fVar22 * fVar25 - fVar16 * fVar27;
          fVar18 = fVar26 * (fVar18 - pfVar10[3]) - fVar26 * (fVar18 - pfVar10[3]);
          local_14[0x48] = (uint)(fVar19 * fVar17 - fVar23 * fVar32);
          local_14[0x49] = (uint)(fVar23 * fVar31 - fVar30 * fVar17);
          local_14[0x4a] = (uint)(fVar30 * fVar32 - fVar19 * fVar31);
          local_14[0x4b] = (uint)(fVar29 * fVar18 - fVar29 * fVar18);
        }
      }
      goto LAB_01226640;
    }
    uVar14 = (uint)(char)(&DAT_017e1928)[iVar9];
    uVar12 = (uint)(char)(&DAT_017e192a)[iVar9];
    pfVar10 = (float *)(local_14 + (iVar9 + 10) * 4);
    fVar31 = *pfVar10;
    fVar32 = pfVar10[1];
    fVar17 = pfVar10[2];
    fVar18 = *local_40;
    fVar16 = local_40[1];
    fVar22 = local_40[2];
    pfVar10 = (float *)(local_14 + (uVar14 + 10) * 4);
    pfVar15 = (float *)(local_14 + (uVar12 + 10) * 4);
    fVar24 = *pfVar15;
    fVar26 = pfVar15[1];
    fVar30 = pfVar15[2];
    uVar11 = local_14[0x30];
    uVar7 = local_14[0x31];
    uVar8 = local_14[0x32];
    uVar13 = local_14[0x33];
    if (0.0 <= (pfVar10[1] - fVar32) * (fVar16 - fVar32) + (*pfVar10 - fVar31) * (fVar18 - fVar31) +
               (pfVar10[2] - fVar17) * (fVar22 - fVar17)) {
      *local_18 = 2;
      puVar38 = local_14 + (uVar12 + 10) * 4;
      *puVar38 = uVar11;
      puVar38[1] = uVar7;
      puVar38[2] = uVar8;
      puVar38[3] = uVar13;
      uVar11 = local_14[0x41];
      uVar7 = local_14[0x42];
      uVar8 = local_14[0x43];
      puVar38 = local_14 + (uVar12 + 0xe) * 4;
      *puVar38 = local_14[0x40];
      puVar38[1] = uVar11;
      puVar38[2] = uVar7;
      puVar38[3] = uVar8;
    }
    else {
      *local_18 = 2;
      puVar38 = local_14 + (uVar14 + 10) * 4;
      *puVar38 = uVar11;
      puVar38[1] = uVar7;
      puVar38[2] = uVar8;
      puVar38[3] = uVar13;
      uVar11 = local_14[0x41];
      uVar7 = local_14[0x42];
      uVar8 = local_14[0x43];
      puVar38 = local_14 + (uVar14 + 0xe) * 4;
      *puVar38 = local_14[0x40];
      puVar38[1] = uVar11;
      puVar38[2] = uVar7;
      puVar38[3] = uVar8;
      if ((fVar30 - fVar17) * (fVar22 - fVar17) +
          (fVar26 - fVar32) * (fVar16 - fVar32) + (fVar24 - fVar31) * (fVar18 - fVar31) < 0.0) {
        uVar11 = *local_18;
        if (uVar12 == uVar11) {
          uVar12 = uVar14;
        }
        *local_18 = uVar11 - 1;
        puVar38 = local_14 + (uVar11 + 9) * 4;
        uVar11 = puVar38[1];
        uVar7 = puVar38[2];
        uVar8 = puVar38[3];
        puVar39 = local_14 + (uVar12 + 10) * 4;
        *puVar39 = *puVar38;
        puVar39[1] = uVar11;
        puVar39[2] = uVar7;
        puVar39[3] = uVar8;
        puVar38 = local_14 + (*local_18 + 0xe) * 4;
        uVar11 = puVar38[1];
        uVar7 = puVar38[2];
        uVar8 = puVar38[3];
        puVar39 = local_14 + (uVar12 + 0xe) * 4;
        *puVar39 = *puVar38;
        puVar39[1] = uVar11;
        puVar39[2] = uVar7;
        puVar39[3] = uVar8;
      }
    }
LAB_012262ea:
    uVar11 = *local_14 * 8 | *local_18;
    pfVar10 = local_40;
  } while( true );
switchD_01225f58_caseD_d:
  local_48 = 1;
  goto LAB_0122665e;
switchD_01225f58_caseD_9:
  fVar31 = pfVar10[1];
  fVar32 = pfVar10[2];
  fVar17 = pfVar10[3];
  fVar18 = local_1c[1];
  fVar16 = local_1c[2];
  fVar22 = local_1c[3];
  local_14[0x48] = (uint)(*pfVar10 - *local_1c);
  local_14[0x49] = (uint)(fVar31 - fVar18);
  local_14[0x4a] = (uint)(fVar32 - fVar16);
  local_14[0x4b] = (uint)(fVar17 - fVar22);
LAB_01226640:
  local_14[100] = *local_18;
  local_48 = 0;
LAB_0122665e:
  uVar11 = *local_14;
  local_14[5] = local_14[5] | (uVar11 - local_44) + *local_18;
  fVar32 = (float)local_14[0x49] * (float)local_14[0x49] +
           (float)local_14[0x48] * (float)local_14[0x48] +
           (float)local_14[0x4a] * (float)local_14[0x4a];
  fVar31 = (pfVar10[1] - local_1c[1]) * (float)local_14[0x49] +
           (*pfVar10 - *local_1c) * (float)local_14[0x48] +
           (pfVar10[2] - local_1c[2]) * (float)local_14[0x4a];
  if (local_48 != 0) {
LAB_01226c02:
    if (local_14[4] != 0) {
      if (4 < (int)(*local_14 + *local_18)) {
        if ((int)*local_18 < (int)*local_14) {
          *local_14 = 3;
          *local_18 = 1;
          return 4;
        }
        *local_14 = 1;
        *local_18 = 3;
      }
      return 4;
    }
    FUN_012259b0(param_2,param_3,param_4);
LAB_01226c22:
    fVar31 = (float)local_14[0x48];
    fVar32 = (float)local_14[0x49];
    fVar17 = (float)local_14[0x4a];
    fVar18 = *pfVar10;
    fVar16 = pfVar10[1];
    fVar22 = pfVar10[2];
    fVar24 = *local_1c;
    fVar26 = local_1c[1];
    fVar30 = local_1c[2];
    fVar19 = fVar31 * fVar31;
    fVar23 = fVar32 * fVar32;
    fVar25 = fVar17 * fVar17;
    fVar27 = fVar23 + fVar19 + fVar25;
    fVar28 = fVar23 + fVar19 + fVar25;
    fVar29 = fVar23 + fVar19 + fVar25;
    fVar25 = fVar23 + fVar19 + fVar25;
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = 0;
    auVar4._4_4_ = fVar28;
    auVar4._0_4_ = fVar27;
    auVar4._8_4_ = fVar29;
    auVar4._12_4_ = fVar25;
    auVar34 = rsqrtps(auVar33,auVar4);
    fVar19 = auVar34._0_4_;
    fVar23 = auVar34._4_4_;
    fVar35 = auVar34._8_4_;
    fVar36 = auVar34._12_4_;
    local_14[0x48] =
         (uint)((float)(~-(uint)(fVar27 <= 0.0) &
                       (uint)((3.0 - fVar19 * fVar27 * fVar19) * fVar19 * 0.5)) * fVar31);
    local_14[0x49] =
         (uint)((float)(~-(uint)(fVar28 <= 0.0) &
                       (uint)((3.0 - fVar23 * fVar28 * fVar23) * fVar23 * 0.5)) * fVar32);
    local_14[0x4a] =
         (uint)((float)(~-(uint)(fVar29 <= 0.0) &
                       (uint)((3.0 - fVar35 * fVar29 * fVar35) * fVar35 * 0.5)) * fVar17);
    local_14[0x4b] =
         (uint)((float)(~-(uint)(fVar25 <= 0.0) &
                       (uint)((3.0 - fVar36 * fVar25 * fVar36) * fVar36 * 0.5)) *
               (float)local_14[0x4b]);
    uVar11 = local_14[0x49];
    uVar7 = local_14[0x4a];
    uVar8 = local_14[0x4b];
    *param_5 = local_14[0x48];
    param_5[1] = uVar11;
    param_5[2] = uVar7;
    param_5[3] = uVar8;
    fVar31 = (float)local_14[0x4a] * (fVar22 - fVar30) +
             (float)local_14[0x49] * (fVar16 - fVar26) + (float)local_14[0x48] * (fVar18 - fVar24);
    param_5[3] = (uint)fVar31;
    local_14[0x4b] = (uint)fVar31;
    return 0;
  }
  local_30 = ABS(fVar31);
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  fVar17 = fVar32 * local_34;
  if ((local_30 * fVar31 <= fVar17) || (fVar32 < local_34)) goto LAB_01226c02;
  local_44 = local_3c & 1;
  local_38 = fVar17;
  if (((local_44 != 0) && (uVar11 != local_14[2])) && (local_14[0x65] != 1)) {
    local_d0 = -(float)local_14[0x48];
    fStack_cc = -(float)local_14[0x49];
    fStack_c8 = -(float)local_14[0x4a];
    uStack_c4 = local_14[0x4b] ^ 0x80000000;
    (**(code **)(*param_2 + 0x20))(&local_d0,local_14 + (uVar11 + 2) * 4);
    uVar11 = *local_14;
    pfVar15 = (float *)(local_14 + (uVar11 + 2) * 4);
    fVar31 = *pfVar15;
    fVar32 = pfVar15[1];
    fVar17 = pfVar15[2];
    fVar18 = (fVar17 - pfVar10[2]) * fStack_c8 +
             (fVar32 - pfVar10[1]) * fStack_cc + (fVar31 - *pfVar10) * local_d0;
    local_30 = ABS(fVar18);
    if (local_38 < local_30 * fVar18) {
      if (uVar11 != 2) {
        if (uVar11 != 3) goto LAB_01226854;
        fVar18 = (fVar17 - (float)local_14[0x12]) * fStack_c8 +
                 (fVar32 - (float)local_14[0x11]) * fStack_cc +
                 (fVar31 - (float)local_14[0x10]) * local_d0;
        local_30 = ABS(fVar18);
        if (local_30 * fVar18 < local_38) goto LAB_01226873;
      }
      fVar31 = (fVar17 - (float)local_14[0xe]) * fStack_c8 +
               (fVar32 - (float)local_14[0xd]) * fStack_cc +
               (fVar31 - (float)local_14[0xc]) * local_d0;
      local_30 = ABS(fVar31);
      if (local_38 <= local_30 * fVar31) {
LAB_01226854:
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        *local_14 = uVar11 + 1;
        local_14[5] = 1;
        goto LAB_01225f11;
      }
    }
  }
LAB_01226873:
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  if ((*local_18 != local_14[3]) && (local_14[0x65] != 0xffffffff)) {
    local_60._0_4_ = (float)*(undefined8 *)param_4;
    local_60._4_4_ = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    uStack_58._0_4_ = (float)*(undefined8 *)(param_4 + 2);
    uVar1 = *(undefined8 *)(param_4 + 8);
    local_70 = (float)*(undefined8 *)(param_4 + 4);
    fVar18 = local_70;
    fStack_6c = (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
    fStack_68 = (float)*(undefined8 *)(param_4 + 6);
    fVar16 = fStack_68;
    uVar2 = *(undefined8 *)(param_4 + 10);
    local_80._0_4_ = (float)uVar1;
    local_80._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_78._0_4_ = (float)uVar2;
    uStack_78._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar31 = (float)local_14[0x48];
    fVar32 = (float)local_14[0x49];
    fVar17 = (float)local_14[0x4a];
    _local_70 = CONCAT44(fStack_6c,local_60._4_4_);
    _fStack_68 = CONCAT44(uStack_78._4_4_,local_80._4_4_);
    local_90 = fVar32 * local_60._4_4_ + fVar31 * (float)local_60 + fVar17 * (float)uStack_58;
    fStack_8c = fVar32 * fStack_6c + fVar31 * fVar18 + fVar17 * fVar16;
    fStack_88 = fVar32 * local_80._4_4_ + fVar31 * (float)local_80 + fVar17 * (float)uStack_78;
    fStack_84 = fVar32 * uStack_78._4_4_ + fVar31 * local_80._4_4_ + fVar17 * uStack_78._4_4_;
    local_60 = CONCAT44(fVar18,(float)local_60);
    local_80 = uVar1;
    uStack_78 = uVar2;
    uStack_58 = uVar1;
    (**(code **)(*param_3 + 0x20))(&local_90,local_14 + (*local_18 + 0xe) * 4);
    uVar11 = *local_18;
    pfVar15 = (float *)(local_14 + (uVar11 + 0xe) * 4);
    fVar31 = *pfVar15;
    fVar32 = pfVar15[1];
    fVar17 = pfVar15[2];
    pfVar15 = (float *)(local_14 + (uVar11 + 0xe) * 4);
    fVar18 = (fVar17 - (float)local_14[0x3a]) * fStack_88 +
             (fVar32 - (float)local_14[0x39]) * fStack_8c +
             (fVar31 - (float)local_14[0x38]) * local_90;
    local_30 = ABS(fVar18);
    if (local_38 < local_30 * fVar18) {
      if (uVar11 != 2) {
        if (uVar11 != 3) goto LAB_01226a4e;
        fVar18 = (fVar17 - (float)local_14[0x42]) * fStack_88 +
                 (fVar32 - (float)local_14[0x41]) * fStack_8c +
                 (fVar31 - (float)local_14[0x40]) * local_90;
        local_30 = ABS(fVar18);
        if (local_30 * fVar18 < local_38) goto LAB_01226aa1;
      }
      fVar31 = (fVar32 - (float)local_14[0x3d]) * fStack_8c +
               (fVar31 - (float)local_14[0x3c]) * local_90 +
               (fVar17 - (float)local_14[0x3e]) * fStack_88;
      local_30 = ABS(fVar31);
      if (local_38 <= local_30 * fVar31) {
LAB_01226a4e:
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        fVar31 = *pfVar15;
        fVar32 = pfVar15[1];
        fVar17 = pfVar15[2];
        fVar18 = param_4[5];
        fVar16 = param_4[6];
        fVar22 = param_4[7];
        fVar24 = param_4[1];
        fVar26 = param_4[2];
        fVar30 = param_4[3];
        fVar19 = param_4[9];
        fVar23 = param_4[10];
        fVar25 = param_4[0xb];
        fVar27 = param_4[0xd];
        fVar28 = param_4[0xe];
        fVar29 = param_4[0xf];
        pfVar15 = (float *)(local_14 + (uVar11 + 10) * 4);
        *pfVar15 = fVar31 * *param_4 + fVar32 * param_4[4] + fVar17 * param_4[8] + param_4[0xc];
        pfVar15[1] = fVar31 * fVar24 + fVar32 * fVar18 + fVar17 * fVar19 + fVar27;
        pfVar15[2] = fVar31 * fVar26 + fVar32 * fVar16 + fVar17 * fVar23 + fVar28;
        pfVar15[3] = fVar31 * fVar30 + fVar32 * fVar22 + fVar17 * fVar25 + fVar29;
        *local_18 = *local_18 + 1;
        local_14[5] = 1;
        goto LAB_01225f11;
      }
    }
  }
LAB_01226aa1:
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  if (((local_44 != 0) || (*local_14 == local_14[2])) || (local_14[0x65] == 1)) goto LAB_01226c22;
  local_a0 = -(float)local_14[0x48];
  fStack_9c = -(float)local_14[0x49];
  fStack_98 = -(float)local_14[0x4a];
  uStack_94 = local_14[0x4b] ^ 0x80000000;
  (**(code **)(*param_2 + 0x20))(&local_a0,local_14 + (*local_14 + 2) * 4);
  uVar11 = *local_14;
  pfVar15 = (float *)(local_14 + (uVar11 + 2) * 4);
  fVar31 = *pfVar15;
  fVar32 = pfVar15[1];
  fVar17 = pfVar15[2];
  fVar18 = (fVar17 - pfVar10[2]) * fStack_98 +
           (fVar32 - pfVar10[1]) * fStack_9c + (fVar31 - *pfVar10) * local_a0;
  local_30 = ABS(fVar18);
  if (local_30 * fVar18 <= local_38) goto LAB_01226c22;
  if (uVar11 != 2) {
    if (uVar11 != 3) goto LAB_01226bee;
    fVar18 = (fVar17 - (float)local_14[0x12]) * fStack_98 +
             (fVar32 - (float)local_14[0x11]) * fStack_9c +
             (fVar31 - (float)local_14[0x10]) * local_a0;
    if (ABS(fVar18) * fVar18 < local_38) goto LAB_01226c22;
  }
  fVar31 = (fVar17 - (float)local_14[0xe]) * fStack_98 +
           (fVar32 - (float)local_14[0xd]) * fStack_9c + (fVar31 - (float)local_14[0xc]) * local_a0;
  local_30 = ABS(fVar31);
  if (local_30 * fVar31 < local_38) goto LAB_01226c22;
LAB_01226bee:
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  *local_14 = uVar11 + 1;
  local_14[5] = 1;
  goto LAB_01225f11;
}

// 01226D70  FUN_01226d70  size=464  [run]
/* WARNING: Removing unreachable block (ram,0x01226e38) */

undefined4 FUN_01226d70(undefined4 *param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
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
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined1 local_f0 [80];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_14;
  
  local_14 = (int *)param_1[3];
  uVar15 = (uint)*(byte *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 9);
  (**(code **)(*(int *)param_1[2] + 0x24))(param_2,uVar15,&local_1b0);
  (**(code **)(*local_14 + 0x24))(param_2 + uVar15 * 2,cVar2,local_f0);
  FUN_01225e50(param_1[2],param_1[3],*param_1,&local_30);
  pfVar3 = (float *)param_1[1];
  fVar1 = pfVar3[5];
  fVar4 = pfVar3[6];
  fVar5 = pfVar3[7];
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  fVar9 = pfVar3[9];
  fVar10 = pfVar3[10];
  fVar11 = pfVar3[0xb];
  fVar16 = (fStack_24 - *(float *)(param_1[2] + 0x10)) - *(float *)(param_1[3] + 0x10);
  *param_3 = fStack_2c * pfVar3[4] + local_30 * *pfVar3 + fStack_28 * pfVar3[8];
  param_3[1] = fStack_2c * fVar1 + local_30 * fVar6 + fStack_28 * fVar9;
  param_3[2] = fStack_2c * fVar4 + local_30 * fVar7 + fStack_28 * fVar10;
  param_3[3] = fStack_2c * fVar5 + local_30 * fVar8 + fStack_28 * fVar11;
  param_3[3] = fVar16;
  uVar14 = 1;
  if (fVar16 < (float)param_1[4]) {
    if (uVar15 == 1) {
      fStack_24 = *(float *)(param_1[3] + 0x10) - fStack_24;
      local_1b0 = fStack_24 * local_30 + local_1b0;
      fStack_1ac = fStack_24 * fStack_2c + fStack_1ac;
      fStack_1a8 = fStack_24 * fStack_28 + fStack_1a8;
    }
    else if (cVar2 == '\x01') {
      fVar1 = *(float *)(param_1[3] + 0x10);
      local_1b0 = fVar1 * local_30 + local_130;
      fStack_1ac = fVar1 * fStack_2c + fStack_12c;
      fStack_1a8 = fVar1 * fStack_28 + fStack_128;
    }
    else {
      fStack_24 = *(float *)(param_1[3] + 0x10) - fStack_24;
      local_1b0 = fStack_24 * local_30 + local_a0;
      fStack_1ac = fStack_24 * fStack_2c + fStack_9c;
      fStack_1a8 = fStack_24 * fStack_28 + fStack_98;
    }
    pfVar3 = (float *)param_1[1];
    fVar1 = pfVar3[5];
    fVar4 = pfVar3[6];
    fVar5 = pfVar3[7];
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    fVar9 = pfVar3[9];
    fVar10 = pfVar3[10];
    fVar11 = pfVar3[0xb];
    fVar16 = pfVar3[0xd];
    fVar12 = pfVar3[0xe];
    fVar13 = pfVar3[0xf];
    *param_4 = fStack_1ac * pfVar3[4] + local_1b0 * *pfVar3 + fStack_1a8 * pfVar3[8] + pfVar3[0xc];
    param_4[1] = fStack_1ac * fVar1 + local_1b0 * fVar6 + fStack_1a8 * fVar9 + fVar16;
    param_4[2] = fStack_1ac * fVar4 + local_1b0 * fVar7 + fStack_1a8 * fVar10 + fVar12;
    param_4[3] = fStack_1ac * fVar5 + local_1b0 * fVar8 + fStack_1a8 * fVar11 + fVar13;
    uVar14 = 0;
  }
  return uVar14;
}

// 012270E0  FUN_012270e0  size=1192  [run]
void FUN_012270e0(float *param_1,float *param_2,int param_3,uint param_4,undefined1 (*param_5) [16],
                 float *param_6,undefined1 (*param_7) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar18;
  float fVar20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar19 [12];
  float *pfVar8;
  undefined1 auVar14 [16];
  float fVar9;
  undefined1 auVar15 [16];
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  param_4 = param_3 * 8 | param_4;
  switch(param_4) {
  case 9:
    fVar24 = *param_1 - *param_2;
    fVar26 = param_1[1] - param_2[1];
    fVar28 = param_1[2] - param_2[2];
    fVar25 = param_1[3] - param_2[3];
    *(float *)*param_7 = fVar24;
    *(float *)(*param_7 + 4) = fVar26;
    *(float *)(*param_7 + 8) = fVar28;
    *(float *)(*param_7 + 0xc) = fVar25;
    auVar17 = *param_5;
    fVar21 = auVar17._0_4_ * fVar24;
    fVar22 = auVar17._4_4_ * fVar26;
    fVar23 = auVar17._8_4_ * fVar28;
    fVar9 = fVar24 * fVar24;
    fVar18 = fVar26 * fVar26;
    fVar20 = fVar28 * fVar28;
    if (fVar18 + fVar9 + fVar20 <= (fVar23 + fVar22 + fVar21) * 1000.0) {
      fVar21 = fVar18 + fVar9 + fVar20;
      fVar22 = fVar18 + fVar9 + fVar20;
      fVar23 = fVar18 + fVar9 + fVar20;
      fVar20 = fVar18 + fVar9 + fVar20;
      auVar1._4_4_ = fVar22;
      auVar1._0_4_ = fVar21;
      auVar1._8_4_ = fVar23;
      auVar1._12_4_ = fVar20;
      auVar17 = rsqrtps(auVar17,auVar1);
      fVar9 = auVar17._0_4_;
      fVar18 = auVar17._4_4_;
      fVar27 = auVar17._8_4_;
      fVar29 = auVar17._12_4_;
      auVar14._0_4_ =
           (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - fVar9 * fVar21 * fVar9) * fVar9 * 0.5));
      auVar14._4_4_ =
           (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar18 * fVar22 * fVar18) * fVar18 * 0.5)
                  );
      auVar14._8_4_ =
           (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar27 * fVar23 * fVar27) * fVar27 * 0.5)
                  );
      auVar14._12_4_ =
           (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar29 * fVar20 * fVar29) * fVar29 * 0.5)
                  );
      *(float *)*param_7 = auVar14._0_4_ * fVar24;
      *(float *)(*param_7 + 4) = auVar14._4_4_ * fVar26;
      *(float *)(*param_7 + 8) = auVar14._8_4_ * fVar28;
      *(float *)(*param_7 + 0xc) = auVar14._12_4_ * fVar25;
      auVar19._4_8_ = auVar14._8_8_;
      auVar19._0_4_ = auVar14._4_4_ * fVar22;
      auVar15._0_8_ = auVar19._0_8_ << 0x20;
      auVar15._8_4_ = auVar14._8_4_ * fVar23;
      auVar15._12_4_ = auVar14._12_4_ * fVar20;
      auVar19 = auVar15._4_12_;
    }
    else {
      auVar10._4_4_ = fVar22;
      auVar10._0_4_ = fVar21;
      auVar10._8_4_ = fVar23;
      auVar10._12_4_ = auVar17._12_4_ * fVar25;
      auVar3._4_8_ = auVar10._8_8_;
      auVar3._0_4_ = fVar22;
      auVar11._0_8_ = auVar3._0_8_ << 0x20;
      auVar11._8_4_ = fVar22;
      auVar11._12_4_ = fVar22;
      auVar4._4_8_ = auVar11._8_8_;
      auVar4._0_4_ = fVar22 + fVar21;
      auVar12._0_8_ = auVar4._0_8_ << 0x20;
      auVar12._8_4_ = fVar22 + fVar21;
      auVar12._12_4_ = fVar22 + fVar21;
      auVar5._4_8_ = auVar12._8_8_;
      auVar5._0_4_ = fVar22 + fVar21 + fVar23;
      auVar13._0_8_ = auVar5._0_8_ << 0x20;
      auVar13._8_4_ = auVar12._8_4_ + fVar23;
      auVar13._12_4_ = auVar12._12_4_ + fVar23;
      auVar19 = auVar13._4_12_;
      *param_7 = auVar17;
    }
    uVar6 = *(undefined4 *)(*param_7 + 4);
    uVar7 = *(undefined4 *)(*param_7 + 8);
    *(undefined4 *)*param_7 = *(undefined4 *)*param_7;
    *(undefined4 *)(*param_7 + 4) = uVar6;
    *(undefined4 *)(*param_7 + 8) = uVar7;
    *(int *)(*param_7 + 0xc) = auVar19._8_4_;
    fVar9 = param_1[1];
    fVar18 = param_1[2];
    fVar20 = param_1[3];
    *param_6 = *param_1;
    param_6[1] = fVar9;
    param_6[2] = fVar18;
    param_6[3] = fVar20;
    return;
  case 10:
    fVar9 = *param_1;
    fVar18 = param_1[1];
    fVar20 = param_1[2];
    fVar21 = *param_2;
    fVar22 = param_2[1];
    fVar23 = param_2[2];
    fVar24 = *(float *)*param_5;
    fVar26 = *(float *)(*param_5 + 4);
    fVar28 = *(float *)(*param_5 + 8);
    *(float *)*param_7 = fVar24;
    *(float *)(*param_7 + 4) = fVar26;
    *(float *)(*param_7 + 8) = fVar28;
    *(float *)(*param_7 + 0xc) =
         (fVar20 - fVar23) * fVar28 + (fVar18 - fVar22) * fVar26 + (fVar9 - fVar21) * fVar24;
    fVar9 = param_1[1];
    fVar18 = param_1[2];
    fVar20 = param_1[3];
    *param_6 = *param_1;
    param_6[1] = fVar9;
    param_6[2] = fVar18;
    param_6[3] = fVar20;
    return;
  case 0xb:
    pfVar8 = param_2;
    param_2 = param_1;
    break;
  default:
    return;
  case 0x11:
    fVar9 = *(float *)(*param_5 + 4);
    fVar18 = *(float *)(*param_5 + 8);
    uVar6 = *(undefined4 *)(*param_5 + 0xc);
    fVar26 = (*param_2 - *param_1) * *(float *)*param_5;
    fVar28 = (param_2[1] - param_1[1]) * fVar9;
    fVar25 = (param_2[2] - param_1[2]) * fVar18;
    *(float *)*param_7 = *(float *)*param_5;
    *(float *)(*param_7 + 4) = fVar9;
    *(float *)(*param_7 + 8) = fVar18;
    *(undefined4 *)(*param_7 + 0xc) = uVar6;
    fVar27 = fVar28 + fVar26 + fVar25;
    fVar9 = *param_2;
    fVar18 = param_2[1];
    fVar20 = param_2[2];
    fVar21 = param_2[3];
    *param_6 = fVar9;
    param_6[1] = fVar18;
    param_6[2] = fVar20;
    param_6[3] = fVar21;
    fVar22 = *(float *)(*param_7 + 4);
    fVar23 = *(float *)(*param_7 + 8);
    fVar24 = *(float *)(*param_7 + 0xc);
    *param_6 = fVar9 - (fVar28 + fVar26 + fVar25) * *(float *)*param_7;
    param_6[1] = fVar18 - (fVar28 + fVar26 + fVar25) * fVar22;
    param_6[2] = fVar20 - (fVar28 + fVar26 + fVar25) * fVar23;
    param_6[3] = fVar21 - fVar27 * fVar24;
    uVar6 = *(undefined4 *)(*param_7 + 4);
    uVar7 = *(undefined4 *)(*param_7 + 8);
    *(undefined4 *)*param_7 = *(undefined4 *)*param_7;
    *(undefined4 *)(*param_7 + 4) = uVar6;
    *(undefined4 *)(*param_7 + 8) = uVar7;
    *(float *)(*param_7 + 0xc) = 0.0 - fVar27;
    return;
  case 0x12:
    local_30 = param_1[4] - *param_1;
    fStack_2c = param_1[5] - param_1[1];
    fStack_28 = param_1[6] - param_1[2];
    fStack_24 = param_1[7] - param_1[3];
    local_20 = param_2[4] - *param_2;
    fStack_1c = param_2[5] - param_2[1];
    fStack_18 = param_2[6] - param_2[2];
    fStack_14 = param_2[7] - param_2[3];
    FUN_01445f10(param_1,&local_30,param_2,&local_20,&local_80);
    fVar9 = fStack_18 * fStack_2c - fStack_1c * fStack_28;
    fVar18 = local_20 * fStack_28 - fStack_18 * local_30;
    fVar20 = fStack_1c * local_30 - local_20 * fStack_2c;
    fVar22 = fStack_14 * fStack_24 - fStack_14 * fStack_24;
    fVar21 = fStack_1c * fStack_1c + fStack_2c * fStack_2c +
             local_20 * local_20 + local_30 * local_30 +
             fStack_18 * fStack_18 + fStack_28 * fStack_28;
    *(float *)*param_7 = fVar9;
    *(float *)(*param_7 + 4) = fVar18;
    *(float *)(*param_7 + 8) = fVar20;
    *(float *)(*param_7 + 0xc) = fVar22;
    if ((fVar20 * fVar20 + fVar18 * fVar18 + fVar9 * fVar9) * 0.001 <= fVar21 * fVar21) {
      fVar9 = *(float *)*param_5;
      fVar18 = *(float *)(*param_5 + 4);
      fVar20 = *(float *)(*param_5 + 8);
      fVar21 = *(float *)(*param_5 + 0xc);
    }
    else {
      fVar21 = *(float *)*param_5 * fVar9;
      fVar24 = *(float *)(*param_5 + 4) * fVar18;
      fVar28 = *(float *)(*param_5 + 8) * fVar20;
      fVar9 = (float)((uint)(fVar24 + fVar21 + fVar28) & 0x80000000 ^ (uint)fVar9);
      fVar18 = (float)((uint)(fVar24 + fVar21 + fVar28) & 0x80000000 ^ (uint)fVar18);
      fVar20 = (float)((uint)(fVar24 + fVar21 + fVar28) & 0x80000000 ^ (uint)fVar20);
      fVar23 = fVar9 * fVar9;
      fVar26 = fVar18 * fVar18;
      fVar25 = fVar20 * fVar20;
      fVar27 = fVar26 + fVar23 + fVar25;
      fVar29 = fVar26 + fVar23 + fVar25;
      fVar30 = fVar26 + fVar23 + fVar25;
      fVar25 = fVar26 + fVar23 + fVar25;
      auVar33._0_12_ = ZEXT812(0);
      auVar33._12_4_ = 0;
      auVar17._4_4_ = fVar29;
      auVar17._0_4_ = fVar27;
      auVar17._8_4_ = fVar30;
      auVar17._12_4_ = fVar25;
      auVar17 = rsqrtps(auVar33,auVar17);
      fVar23 = auVar17._0_4_;
      fVar26 = auVar17._4_4_;
      fVar31 = auVar17._8_4_;
      fVar32 = auVar17._12_4_;
      fVar9 = (float)(~-(uint)(fVar27 <= 0.0) &
                     (uint)((3.0 - fVar23 * fVar27 * fVar23) * fVar23 * 0.5)) * fVar9;
      fVar18 = (float)(~-(uint)(fVar29 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar29 * fVar26) * fVar26 * 0.5)) * fVar18;
      fVar20 = (float)(~-(uint)(fVar30 <= 0.0) &
                      (uint)((3.0 - fVar31 * fVar30 * fVar31) * fVar31 * 0.5)) * fVar20;
      fVar21 = (float)(~-(uint)(fVar25 <= 0.0) &
                      (uint)((3.0 - fVar32 * fVar25 * fVar32) * fVar32 * 0.5)) *
               (float)((uint)(fVar24 + fVar21 + fVar28) & 0x80000000 ^ (uint)fVar22);
    }
    *(float *)*param_7 = fVar9;
    *(float *)(*param_7 + 4) = fVar18;
    *(float *)(*param_7 + 8) = fVar20;
    *(float *)(*param_7 + 0xc) = fVar21;
    fVar9 = *param_1;
    fVar18 = param_1[1];
    fVar20 = param_1[2];
    fVar21 = *param_2;
    fVar22 = param_2[1];
    fVar23 = param_2[2];
    fVar24 = *(float *)*param_7;
    fVar26 = *(float *)(*param_7 + 4);
    fVar28 = *(float *)(*param_7 + 8);
    *param_6 = local_80;
    param_6[1] = fStack_7c;
    param_6[2] = fStack_78;
    param_6[3] = fStack_74;
    uVar6 = *(undefined4 *)(*param_7 + 4);
    uVar7 = *(undefined4 *)(*param_7 + 8);
    *(undefined4 *)*param_7 = *(undefined4 *)*param_7;
    *(undefined4 *)(*param_7 + 4) = uVar6;
    *(undefined4 *)(*param_7 + 8) = uVar7;
    *(float *)(*param_7 + 0xc) =
         (fVar18 - fVar22) * fVar26 + (fVar9 - fVar21) * fVar24 + (fVar20 - fVar23) * fVar28;
    return;
  case 0x19:
    pfVar8 = param_1;
  }
  fVar22 = *pfVar8 - pfVar8[8];
  fVar24 = pfVar8[1] - pfVar8[9];
  fVar26 = pfVar8[2] - pfVar8[10];
  fVar28 = pfVar8[3] - pfVar8[0xb];
  fVar9 = pfVar8[8] - pfVar8[4];
  fVar18 = pfVar8[9] - pfVar8[5];
  fVar20 = pfVar8[10] - pfVar8[6];
  fVar21 = pfVar8[0xb] - pfVar8[7];
  fVar23 = fVar26 * fVar18 - fVar24 * fVar20;
  fVar25 = fVar22 * fVar20 - fVar26 * fVar9;
  fVar27 = fVar24 * fVar9 - fVar22 * fVar18;
  fVar29 = fVar28 * fVar21 - fVar28 * fVar21;
  fVar9 = fVar23 * fVar23;
  fVar18 = fVar25 * fVar25;
  auVar16._8_4_ = fVar27 * fVar27;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  fVar22 = fVar18 + fVar9 + auVar16._8_4_;
  fVar30 = fVar18 + fVar9 + auVar16._8_4_;
  fVar31 = fVar18 + fVar9 + auVar16._8_4_;
  fVar32 = fVar18 + fVar9 + auVar16._8_4_;
  auVar2._4_4_ = fVar30;
  auVar2._0_4_ = fVar22;
  auVar2._8_4_ = fVar31;
  auVar2._12_4_ = fVar32;
  auVar17 = rsqrtps(auVar16,auVar2);
  fVar9 = auVar17._0_4_;
  fVar20 = auVar17._4_4_;
  fVar24 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  *(float *)*param_7 = fVar23;
  *(float *)(*param_7 + 4) = fVar25;
  *(float *)(*param_7 + 8) = fVar27;
  *(float *)(*param_7 + 0xc) = fVar29;
  fVar18 = *(float *)*param_5 * fVar23;
  fVar21 = *(float *)(*param_5 + 4) * fVar25;
  fVar26 = *(float *)(*param_5 + 8) * fVar27;
  fVar22 = (float)((uint)(fVar21 + fVar18 + fVar26) & 0x80000000 ^ (uint)fVar23) *
           (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar9 * fVar22 * fVar9) * fVar9 * 0.5));
  fVar23 = (float)((uint)(fVar21 + fVar18 + fVar26) & 0x80000000 ^ (uint)fVar25) *
           (float)(~-(uint)(fVar30 <= 0.0) & (uint)((3.0 - fVar20 * fVar30 * fVar20) * fVar20 * 0.5)
                  );
  fVar24 = (float)((uint)(fVar21 + fVar18 + fVar26) & 0x80000000 ^ (uint)fVar27) *
           (float)(~-(uint)(fVar31 <= 0.0) & (uint)((3.0 - fVar24 * fVar31 * fVar24) * fVar24 * 0.5)
                  );
  *(float *)*param_7 = fVar22;
  *(float *)(*param_7 + 4) = fVar23;
  *(float *)(*param_7 + 8) = fVar24;
  *(float *)(*param_7 + 0xc) =
       (float)((uint)(fVar21 + fVar18 + fVar26) & 0x80000000 ^ (uint)fVar29) *
       (float)(~-(uint)(fVar32 <= 0.0) & (uint)((3.0 - fVar28 * fVar32 * fVar28) * fVar28 * 0.5));
  fVar9 = *param_2;
  fVar18 = param_2[1];
  fVar20 = param_2[2];
  fVar21 = param_2[3];
  fVar22 = (fVar9 - *pfVar8) * fVar22;
  fVar23 = (fVar18 - pfVar8[1]) * fVar23;
  fVar24 = (fVar20 - pfVar8[2]) * fVar24;
  fVar26 = fVar23 + fVar22 + fVar24;
  *param_6 = fVar9;
  param_6[1] = fVar18;
  param_6[2] = fVar20;
  param_6[3] = fVar21;
  if (param_4 != 0xb) {
    fVar28 = *(float *)(*param_7 + 4);
    fVar25 = *(float *)(*param_7 + 8);
    fVar27 = *(float *)(*param_7 + 0xc);
    *param_6 = fVar9 - (fVar23 + fVar22 + fVar24) * *(float *)*param_7;
    param_6[1] = fVar18 - (fVar23 + fVar22 + fVar24) * fVar28;
    param_6[2] = fVar20 - (fVar23 + fVar22 + fVar24) * fVar25;
    param_6[3] = fVar21 - fVar26 * fVar27;
    uVar6 = *(undefined4 *)(*param_7 + 4);
    uVar7 = *(undefined4 *)(*param_7 + 8);
    *(undefined4 *)*param_7 = *(undefined4 *)*param_7;
    *(undefined4 *)(*param_7 + 4) = uVar6;
    *(undefined4 *)(*param_7 + 8) = uVar7;
    *(float *)(*param_7 + 0xc) = 0.0 - fVar26;
    return;
  }
  uVar6 = *(undefined4 *)(*param_7 + 4);
  uVar7 = *(undefined4 *)(*param_7 + 8);
  *(undefined4 *)*param_7 = *(undefined4 *)*param_7;
  *(undefined4 *)(*param_7 + 4) = uVar6;
  *(undefined4 *)(*param_7 + 8) = uVar7;
  *(float *)(*param_7 + 0xc) = fVar26;
  return;
}

// 012275E0  FUN_012275e0  size=26  [run]
void __thiscall FUN_012275e0(float *param_1,int *param_2,float *param_3)

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

// 01227600  FUN_01227600  size=26  [run]
void __thiscall FUN_01227600(float *param_1,int *param_2,float *param_3)

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

// 01227650  FUN_01227650  size=91  [run]
void __thiscall FUN_01227650(float *param_1,uint *param_2)

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

// 01227E80  FUN_01227e80  size=370  [run]
undefined4 FUN_01227e80(byte *param_1,short *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint local_8;
  
  uVar6 = (uint)param_1[2];
  local_8 = 0;
  uVar4 = 0;
  pbVar5 = param_1;
  if (uVar6 != 0) {
    do {
      if ((*(byte *)(param_2 + 4) == pbVar5[4]) && (*(byte *)((int)param_2 + 9) == pbVar5[5])) {
        uVar4 = (uint)*(byte *)((int)param_2 + 9) + (uint)*(byte *)(param_2 + 4);
        iVar3 = uVar6 * 8;
        if ((((*param_2 == *(short *)(param_1 + (uint)(pbVar5[8] >> 3) + iVar3 + 4)) &&
             (param_2[1] == *(short *)(param_1 + (uint)(pbVar5[9] >> 3) + iVar3 + 4))) &&
            ((uVar4 < 3 || (param_2[2] == *(short *)(param_1 + (uint)(pbVar5[10] >> 3) + iVar3 + 4))
             ))) && ((uVar4 < 4 ||
                     (param_2[3] == *(short *)(param_1 + (uint)(pbVar5[0xb] >> 3) + iVar3 + 4))))) {
          if (local_8 != 0) {
            uVar1 = *(undefined4 *)(param_1 + local_8 * 8 + 4);
            uVar2 = *(undefined4 *)(param_1 + local_8 * 8 + 8);
            *(undefined4 *)(param_1 + local_8 * 8 + 4) = *(undefined4 *)(param_1 + 4);
            *(undefined4 *)(param_1 + local_8 * 8 + 8) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 4) = uVar1;
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
          return 1;
        }
      }
      uVar4 = (uint)param_1[2];
      local_8 = local_8 + 1;
      uVar6 = uVar4;
      pbVar5 = pbVar5 + 8;
    } while (local_8 < uVar4);
  }
  if ((((char)param_2[4] == '\x01') || (*(char *)((int)param_2 + 9) == '\x01')) &&
     (local_8 = 0, uVar4 != 0)) {
    pbVar5 = param_1 + 4;
    do {
      if ((((*(byte *)(param_2 + 4) == 1) && (*pbVar5 == 1)) &&
          (*(short *)(param_1 + uVar4 * 8 + (pbVar5[4] >> 3) + 4) == *param_2)) ||
         (((*(char *)((int)param_2 + 9) == '\x01' && (pbVar5[1] == 1)) &&
          (*(short *)(param_1 + uVar4 * 8 + (pbVar5[*pbVar5 + 4] >> 3) + 4) ==
           param_2[*(byte *)(param_2 + 4)])))) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        return 2;
      }
      local_8 = local_8 + 1;
      pbVar5 = pbVar5 + 8;
    } while (local_8 < uVar4);
  }
  return 0;
}

// 01228000  FUN_01228000  size=77  [run]
void FUN_01228000(undefined2 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    psVar2 = param_1 + 3;
    do {
      if (*psVar2 != -1) {
        (**(code **)(*param_2 + 0x14))(*psVar2,param_3);
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 4;
    } while (uVar1 < *(byte *)(param_1 + 1));
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

// 01228260  FUN_01228260  size=336  [run]
void FUN_01228260(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *unaff_ESI;
  int iVar7;
  uint uVar8;
  uint auStack_70 [16];
  char local_30 [20];
  int local_1c;
  byte *local_18;
  uint local_14;
  
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  if (unaff_ESI[2] != 0) {
    local_14 = (uint)unaff_ESI[2];
    pbVar5 = unaff_ESI;
    do {
      bVar3 = pbVar5[5];
      bVar1 = pbVar5[4];
      local_30[pbVar5[8] >> 4] = '\x01';
      local_30[pbVar5[9] >> 4] = '\x01';
      if (2 < (uint)bVar1 + (uint)bVar3) {
        local_30[pbVar5[10] >> 4] = '\x01';
      }
      if ((uint)bVar1 + (uint)bVar3 == 4) {
        local_30[pbVar5[0xb] >> 4] = '\x01';
      }
      local_14 = local_14 - 1;
      pbVar5 = pbVar5 + 8;
    } while (local_14 != 0);
  }
  iVar7 = (uint)unaff_ESI[1] + (uint)*unaff_ESI;
  iVar4 = 0;
  iVar6 = 0;
  local_18 = unaff_ESI + (uint)unaff_ESI[2] * 8 + 4;
  local_1c = iVar7;
  local_14 = 0;
  if (iVar7 != 0) {
    do {
      cVar2 = local_30[iVar4];
      auStack_70[iVar4] = local_14;
      if (cVar2 != '\0') {
        *(undefined2 *)(local_18 + iVar6 * 2) = *(undefined2 *)(local_18 + iVar4 * 2);
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x10;
        iVar7 = local_1c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  bVar3 = (byte)(auStack_70[*unaff_ESI] >> 4);
  uVar8 = 0;
  *unaff_ESI = bVar3;
  unaff_ESI[1] = (char)iVar6 - bVar3;
  if (unaff_ESI[2] != 0) {
    pbVar5 = unaff_ESI + 9;
    do {
      pbVar5[-1] = (byte)auStack_70[pbVar5[-1] >> 4];
      *pbVar5 = (byte)auStack_70[*pbVar5 >> 4];
      pbVar5[1] = (byte)auStack_70[pbVar5[1] >> 4];
      pbVar5[2] = (byte)auStack_70[pbVar5[2] >> 4];
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar8 < unaff_ESI[2]);
  }
  return;
}

// 012283B0  FUN_012283b0  size=84  [run]
void FUN_012283b0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  bVar1 = param_1[2];
  iVar4 = bVar1 - 1;
  param_1[2] = (byte)iVar4;
  pbVar3 = param_1 + iVar4 * 8 + 4;
  *(undefined4 *)(param_1 + param_2 * 8 + 4) = *(undefined4 *)(param_1 + iVar4 * 8 + 4);
  *(undefined4 *)(param_1 + param_2 * 8 + 8) = *(undefined4 *)(pbVar3 + 4);
  iVar4 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
  if (-1 < iVar4) {
    iVar2 = ((uint)bVar1 * 8 + 4) - (int)pbVar3;
    do {
      *(undefined4 *)pbVar3 = *(undefined4 *)(pbVar3 + (int)(param_1 + iVar2));
      pbVar3 = pbVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  FUN_01228260();
  return;
}

// 01228410  FUN_01228410  size=99  [run]
undefined4 __fastcall FUN_01228410(int param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  bVar4 = *(byte *)(param_3 + 4);
  pfVar1 = (float *)((uint)bVar4 + param_1);
  fVar5 = pfVar1[3];
  pfVar2 = (float *)((uint)*(byte *)(param_3 + 5) + param_1);
  fVar6 = pfVar2[3];
  fVar11 = *pfVar1 - *pfVar2;
  fVar12 = pfVar1[1] - pfVar2[1];
  fVar13 = pfVar1[2] - pfVar2[2];
  fVar10 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
  if (*(float *)(param_1 + 0x11c) <= fVar10 && fVar10 != *(float *)(param_1 + 0x11c)) {
    return 10;
  }
  param_2[4] = fVar11;
  param_2[5] = fVar12;
  param_2[6] = fVar13;
  param_2[7] = fVar5 - fVar6;
  uVar7 = *(undefined4 *)(param_1 + 0x104);
  uVar8 = *(undefined4 *)(param_1 + 0x108);
  uVar9 = *(undefined4 *)(param_1 + 0x10c);
  param_2[8] = *(undefined4 *)(param_1 + 0x100);
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = uVar9;
  puVar3 = (undefined4 *)((uint)bVar4 + param_1);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  *param_2 = *puVar3;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  return 5;
}

// 012287A0  FUN_012287a0  size=771  [run]
int __fastcall FUN_012287a0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
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
  int local_2c [5];
  float local_18 [5];
  
  fVar17 = 0.0;
  fVar19 = 3.40282e+38;
  fVar2 = param_1[0x30];
  fVar18 = param_1[0x31];
  fVar7 = param_1[0x32];
  iVar3 = 0;
  iVar4 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  fVar9 = 0.0;
  iVar6 = 0;
  pfVar5 = param_1;
  do {
    fVar16 = (fVar18 - pfVar5[1]) * (fVar18 - pfVar5[1]) + (fVar2 - *pfVar5) * (fVar2 - *pfVar5) +
             (fVar7 - pfVar5[2]) * (fVar7 - pfVar5[2]);
    local_18[iVar3] = fVar16;
    if (fVar9 < fVar16) {
      iVar4 = iVar3;
      fVar9 = fVar16;
    }
    if (fVar16 < fVar19) {
      iVar6 = iVar3;
      fVar19 = fVar16;
    }
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar3 < 4);
  fVar2 = param_1[0x37];
  fVar9 = fVar9 * 1.05;
  fVar18 = fVar2 - param_1[iVar6 * 0xc + 7];
  local_2c[iVar4] = 1;
  iVar6 = 4;
  iVar3 = 0;
  pfVar5 = param_1;
  do {
    if (local_2c[iVar3] == 0) {
      pfVar1 = param_1 + iVar4 * 0xc;
      fVar7 = (pfVar1[2] - pfVar5[2]) * (pfVar1[2] - pfVar5[2]) +
              (pfVar1[1] - pfVar5[1]) * (pfVar1[1] - pfVar5[1]) +
              (*pfVar1 - *pfVar5) * (*pfVar1 - *pfVar5);
      if (fVar9 < fVar7) {
        iVar6 = iVar3;
        fVar9 = fVar7;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar3 < 5);
  pfVar5 = param_1 + iVar4 * 0xc;
  fVar7 = *pfVar5;
  fVar9 = pfVar5[1];
  fVar16 = pfVar5[2];
  pfVar5 = param_1 + iVar6 * 0xc;
  fVar13 = fVar7 - *pfVar5;
  fVar14 = fVar9 - pfVar5[1];
  fVar15 = fVar16 - pfVar5[2];
  local_2c[iVar6] = 1;
  iVar4 = 0;
  iVar6 = 0;
  pfVar5 = param_1;
  do {
    if ((local_2c[iVar6] == 0) &&
       (fVar10 = *pfVar5 - fVar7, fVar11 = pfVar5[1] - fVar9, fVar12 = pfVar5[2] - fVar16,
       fVar8 = fVar11 * fVar15 - fVar12 * fVar14, fVar12 = fVar12 * fVar13 - fVar10 * fVar15,
       fVar10 = fVar10 * fVar14 - fVar11 * fVar13,
       fVar8 = fVar12 * fVar12 + fVar8 * fVar8 + fVar10 * fVar10, fVar17 < fVar8)) {
      iVar4 = iVar6;
      fVar17 = fVar8;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar6 < 5);
  local_2c[iVar4] = 1;
  fVar7 = 0.0;
  iVar3 = 0;
  iVar6 = 0;
  pfVar5 = param_1;
  do {
    if (local_2c[iVar3] == 0) {
      pfVar1 = param_1 + iVar4 * 0xc;
      fVar9 = (pfVar1[1] - pfVar5[1]) * (pfVar1[1] - pfVar5[1]) +
              (*pfVar1 - *pfVar5) * (*pfVar1 - *pfVar5) +
              (pfVar1[2] - pfVar5[2]) * (pfVar1[2] - pfVar5[2]);
      if (fVar7 < fVar9) {
        iVar6 = iVar3;
        fVar7 = fVar9;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar3 < 5);
  local_2c[iVar6] = 1;
  if (((local_2c[4] != 0) || (0.0 <= fVar18)) || (fVar18 * 526.0 * fVar18 <= fVar19)) {
    iVar4 = 0;
    do {
      if (local_2c[iVar4] == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    iVar4 = 0;
  }
  else {
    fVar7 = 0.030461743;
    fVar18 = (param_1[7] - fVar2) * (param_1[7] - fVar2) + 1e-09;
    iVar4 = 4;
    if (local_18[0] * 0.030461743 < fVar18) {
      fVar7 = fVar18 / (local_18[0] + 1e-09);
      iVar4 = 0;
    }
    fVar18 = (param_1[0x13] - fVar2) * (param_1[0x13] - fVar2) + 1e-09;
    if (local_18[1] * fVar7 < fVar18) {
      fVar7 = fVar18 / (local_18[1] + 1e-09);
      iVar4 = 1;
    }
    fVar18 = (param_1[0x1f] - fVar2) * (param_1[0x1f] - fVar2) + 1e-09;
    if (local_18[2] * fVar7 < fVar18) {
      fVar7 = fVar18 / (local_18[2] + 1e-09);
      iVar4 = 2;
    }
    if (local_18[3] * fVar7 < (param_1[0x2b] - fVar2) * (param_1[0x2b] - fVar2) + 1e-09) {
      return 3;
    }
  }
  return iVar4;
}

// 01228AB0  FUN_01228ab0  size=944  [run]
int FUN_01228ab0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,undefined4 *param_7,int param_8,int *param_9,int param_10)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int local_14;
  uint local_10;
  byte local_8;
  
  pbVar8 = param_1;
  local_14 = 4;
  if (param_1[2] == 4) {
    local_14 = FUN_012287a0();
    if (local_14 == 4) {
      return 5;
    }
    (**(code **)(*param_9 + 0x14))
              (*(undefined2 *)(param_1 + local_14 * 8 + 6),*(undefined4 *)(param_5 + 4));
    if (local_14 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      *(undefined4 *)(param_1 + local_14 * 8 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + local_14 * 8 + 8) = *(undefined4 *)(param_1 + 8);
    }
    FUN_01228260();
    uVar7 = (**(code **)(*param_9 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
    uVar11 = (uint)uVar7;
    if (uVar7 == 0xffff) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
      bVar1 = param_1[2];
      iVar12 = bVar1 - 1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      param_1[2] = (byte)iVar12;
      pbVar8 = param_1 + iVar12 * 8 + 4;
      iVar12 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
      if (-1 < iVar12) {
        iVar6 = ((uint)bVar1 * 8 + 4) - (int)pbVar8;
        do {
          *(undefined4 *)pbVar8 = *(undefined4 *)(pbVar8 + (int)(param_1 + iVar6));
          pbVar8 = pbVar8 + 4;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
      uVar3 = *(undefined4 *)(param_8 + 0x94);
      uVar4 = *(undefined4 *)(param_8 + 0x98);
      uVar5 = *(undefined4 *)(param_8 + 0x9c);
      puVar9 = (undefined4 *)(local_14 * 0x30 + param_8);
      *puVar9 = *(undefined4 *)(param_8 + 0x90);
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar3 = *(undefined4 *)(param_8 + 0xa4);
      uVar4 = *(undefined4 *)(param_8 + 0xa8);
      uVar5 = *(undefined4 *)(param_8 + 0xac);
      puVar9[4] = *(undefined4 *)(param_8 + 0xa0);
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = *(undefined4 *)(param_8 + 0xb0);
      puVar9[9] = *(undefined4 *)(param_8 + 0xb4);
      puVar9[10] = *(undefined4 *)(param_8 + 0xb8);
      puVar9[0xb] = *(undefined4 *)(param_8 + 0xbc);
      return 6;
    }
    param_7[8] = uVar11;
    puVar9 = (undefined4 *)(param_8 + local_14 * 0x30);
    uVar3 = param_7[1];
    uVar4 = param_7[2];
    uVar5 = param_7[3];
    *puVar9 = *param_7;
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    uVar3 = param_7[5];
    uVar4 = param_7[6];
    uVar5 = param_7[7];
    puVar9[4] = param_7[4];
    puVar9[5] = uVar3;
    puVar9[6] = uVar4;
    puVar9[7] = uVar5;
    puVar9[8] = param_7[8];
    puVar9[9] = param_7[9];
    puVar9[10] = param_7[10];
    puVar9[0xb] = param_7[0xb];
  }
  else {
    if ((param_10 == 0) || (*(char *)(param_6 + 9) == '\x03')) {
      uVar7 = (**(code **)(*param_9 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
      uVar11 = (uint)uVar7;
      if (uVar7 == 0xffff) {
        return 5;
      }
    }
    else {
      uVar11 = 0xffff;
    }
    param_7[8] = uVar11;
    uVar13 = (uint)param_1[2];
    iVar12 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
    pbVar14 = param_1 + (iVar12 + (uVar13 + 1) * 2) * 4 + 4;
    pbVar10 = param_1 + (iVar12 + uVar13 * 2) * 4 + 4;
    for (; -1 < iVar12; iVar12 = iVar12 + -1) {
      uVar3 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + -4;
      *(undefined4 *)pbVar14 = uVar3;
      pbVar14 = pbVar14 + -4;
    }
    *(undefined4 *)(param_1 + uVar13 * 8 + 4) = *(undefined4 *)(param_1 + 4);
    local_8 = (byte)(uVar13 + 1);
    *(undefined4 *)(param_1 + uVar13 * 8 + 8) = *(undefined4 *)(param_1 + 8);
    param_1[2] = local_8;
  }
  param_1[4] = *(byte *)(param_6 + 8);
  param_1[5] = *(byte *)(param_6 + 9);
  *(short *)(param_1 + 6) = (short)uVar11;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  bVar1 = param_1[2];
  iVar12 = (uint)bVar1 * 8 + 4;
  param_1 = (byte *)0x0;
  local_10 = 0;
  if (*(char *)(param_6 + 8) != '\0') {
    do {
      sVar2 = *(short *)(param_6 + local_10 * 2);
      uVar11 = 0;
      if (*pbVar8 != 0) {
        do {
          if (*(short *)(pbVar8 + uVar11 * 2 + iVar12) == sVar2) goto LAB_01228d72;
          uVar11 = uVar11 + 1;
        } while (uVar11 < *pbVar8);
      }
      for (uVar13 = (uint)pbVar8[1] + (uint)*pbVar8; uVar11 < uVar13; uVar13 = uVar13 - 1) {
        *(undefined2 *)(pbVar8 + uVar13 * 2 + iVar12) =
             *(undefined2 *)(pbVar8 + uVar13 * 2 + (uint)bVar1 * 8 + 2);
      }
      *(short *)(pbVar8 + uVar11 * 2 + iVar12) = sVar2;
      *pbVar8 = *pbVar8 + 1;
      param_1 = (byte *)((int)param_1 + 0x10);
LAB_01228d72:
      pbVar8[local_10 + 8] = (char)uVar11 << 4;
      local_10 = local_10 + 1;
    } while ((int)local_10 < (int)(uint)*(byte *)(param_6 + 8));
    if (param_1 != (byte *)0x0) {
      pbVar14 = pbVar8 + 0xc;
      local_10 = 1;
      if (1 < pbVar8[2]) {
        do {
          uVar11 = (uint)*pbVar14;
          if (uVar11 < pbVar14[1] + uVar11) {
            pbVar10 = pbVar14 + uVar11 + 4;
            do {
              *pbVar10 = *pbVar10 + (char)param_1;
              pbVar10 = pbVar10 + 1;
            } while (pbVar10 + (-4 - (int)pbVar14) < (byte *)((uint)pbVar14[1] + (uint)*pbVar14));
          }
          local_10 = local_10 + 1;
          pbVar14 = pbVar14 + 8;
        } while (local_10 < pbVar8[2]);
      }
    }
  }
  param_1 = (byte *)0x0;
  if (*(char *)(param_6 + 9) != '\0') {
    do {
      sVar2 = *(short *)(param_6 + ((uint)*(byte *)(param_6 + 8) + (int)param_1) * 2);
      uVar11 = (uint)*pbVar8;
      uVar13 = pbVar8[1] + uVar11;
      if (uVar11 < uVar13) {
        do {
          if (*(short *)(pbVar8 + uVar11 * 2 + iVar12) == sVar2) goto LAB_01228e42;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar13);
      }
      *(short *)(pbVar8 + uVar11 * 2 + iVar12) = sVar2;
      pbVar8[1] = pbVar8[1] + 1;
LAB_01228e42:
      pbVar8[(uint)*(byte *)(param_6 + 8) + (int)param_1 + 8] = (char)uVar11 << 4;
      param_1 = (byte *)((int)param_1 + 1);
    } while ((int)param_1 < (int)(uint)*(byte *)(param_6 + 9));
  }
  return local_14;
}

// 01229C10  FUN_01229c10  size=2964  [run]
undefined4 FUN_01229c10(byte *param_1,int param_2,uint param_3,int *param_4,int *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  byte *pbVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar40;
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar44 [16];
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  float fVar55;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  byte *local_34;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  uVar12 = (uint)param_1[2];
  local_18 = 0;
  local_1c = param_3;
  if (uVar12 <= param_3) {
    return 0;
  }
  auVar22 = ZEXT816(0);
  pbVar17 = param_1 + param_3 * 8 + 4;
  local_34 = param_1 + uVar12 * 8 + 4;
  local_20 = uVar12;
  do {
    auVar21 = auVar22._0_12_;
    pfVar5 = (float *)*param_4;
    auVar71 = auVar22;
    auVar46 = auVar22;
    auVar73 = auVar22;
    switch((uint)pbVar17[1] + (uint)*pbVar17 * 4) {
    default:
switchD_01229c9c_caseD_0:
      bVar10 = 0;
      bVar18 = false;
      auVar73 = auVar71;
      break;
    case 5:
      auVar73 = *(undefined1 (*) [16])((uint)pbVar17[4] + param_2);
      pfVar3 = (float *)((uint)pbVar17[5] + param_2);
      fVar55 = auVar73._0_4_ - *pfVar3;
      fVar61 = auVar73._4_4_ - pfVar3[1];
      auVar21._4_4_ = fVar61;
      auVar21._0_4_ = fVar55;
      fVar63 = auVar73._8_4_ - pfVar3[2];
      fVar55 = fVar63 * fVar63 + fVar61 * fVar61 + fVar55 * fVar55;
      if (*(float *)(param_2 + 0x11c) <= fVar55 && fVar55 != *(float *)(param_2 + 0x11c))
      goto switchD_01229c9c_caseD_0;
      auVar46 = *(undefined1 (*) [16])(param_2 + 0x100);
      auVar21._8_4_ = fVar63;
      bVar10 = 5;
      bVar18 = true;
      break;
    case 6:
      pfVar3 = (float *)((uint)pbVar17[6] + param_2);
      pauVar2 = (undefined1 (*) [12])((uint)pbVar17[5] + param_2);
      auVar7 = *pauVar2;
      auVar73 = *(undefined1 (*) [16])((uint)pbVar17[4] + param_2);
      fVar55 = auVar73._0_4_;
      fVar19 = *pfVar3 - *(float *)*pauVar2;
      fVar20 = pfVar3[1] - *(float *)(*pauVar2 + 4);
      fVar35 = pfVar3[2] - *(float *)(*pauVar2 + 8);
      fVar36 = pfVar3[3] - *(float *)pauVar2[1];
      fVar48 = *pfVar3 - fVar55;
      fVar61 = auVar73._4_4_;
      fVar51 = pfVar3[1] - fVar61;
      fVar63 = auVar73._8_4_;
      fVar28 = pfVar3[2] - fVar63;
      fVar29 = pfVar3[3] - auVar73._12_4_;
      auVar46 = *(undefined1 (*) [16])(param_2 + 0x100);
      fVar37 = fVar28 * fVar20 - fVar51 * fVar35;
      fVar38 = fVar48 * fVar35 - fVar28 * fVar19;
      fVar47 = fVar51 * fVar19 - fVar48 * fVar20;
      fVar36 = fVar29 * fVar36 - fVar29 * fVar36;
      fVar38 = fVar38 * fVar38;
      fVar36 = fVar36 * fVar36;
      local_50 = auVar7._0_4_;
      fStack_4c = auVar7._4_4_;
      fStack_48 = auVar7._8_4_;
      fVar48 = fVar48 * fVar19 + fVar51 * fVar20 + fVar28 * fVar35;
      fVar51 = (fVar55 - local_50) * fVar19 + (fVar61 - fStack_4c) * fVar20 +
               (fVar63 - fStack_48) * fVar35;
      fVar37 = fVar37 * fVar37 + fVar38 + fVar47 * fVar47;
      auVar71 = auVar73;
      if (*(float *)(param_2 + 0x11c) * (fVar35 * fVar35 + fVar20 * fVar20 + fVar19 * fVar19) <
          fVar37) goto switchD_01229c9c_caseD_0;
      auVar56._4_4_ = -(uint)(fVar51 < 0.0);
      auVar56._0_4_ = -(uint)(fVar48 < 0.0);
      auVar56._8_4_ = -(uint)(fVar37 < 0.0);
      auVar56._12_4_ = -(uint)(fVar38 + fVar36 + fVar36 < 0.0);
      uVar11 = movmskps((uint)pbVar17[4],auVar56);
      if ((uVar11 & 3) == 0) {
        auVar44 = ZEXT416((uint)fVar48) << 0x40 | ZEXT416((uint)fVar48);
        auVar8._4_4_ = auVar44._12_4_;
        auVar8._0_4_ = auVar44._0_4_;
        auVar8._8_4_ = auVar44._8_4_;
        auVar8._12_4_ = 0;
        auVar44 = auVar8 << 0x20 | auVar44;
        auVar71 = ZEXT416((uint)fVar48) << 0x40 | ZEXT416((uint)fVar48);
        auVar66._0_4_ = auVar44._0_4_ + fVar51;
        auVar66._4_4_ = auVar44._4_4_ + fVar51;
        auVar66._8_4_ = auVar44._8_4_ + fVar51;
        auVar66._12_4_ = auVar44._12_4_ + fVar51;
        auVar9._4_4_ = auVar71._12_4_;
        auVar9._0_4_ = auVar71._0_4_;
        auVar9._8_4_ = auVar71._8_4_;
        auVar9._12_4_ = 0;
        auVar44 = auVar9 << 0x20 | auVar71;
        auVar71 = rcpps(auVar71,auVar66);
        auVar21._0_4_ =
             fVar55 - ((2.0 - auVar71._0_4_ * auVar66._0_4_) * auVar71._0_4_ * auVar44._0_4_ *
                       fVar19 + local_50);
        auVar21._4_4_ =
             fVar61 - ((2.0 - auVar71._4_4_ * auVar66._4_4_) * auVar71._4_4_ * auVar44._4_4_ *
                       fVar20 + fStack_4c);
        auVar21._8_4_ =
             fVar63 - ((2.0 - auVar71._8_4_ * auVar66._8_4_) * auVar71._8_4_ * auVar44._8_4_ *
                       fVar35 + fStack_48);
        bVar10 = 5;
        bVar18 = true;
      }
      else {
        bVar10 = 6;
        bVar18 = false;
      }
      break;
    case 7:
      pfVar3 = (float *)((uint)pbVar17[5] + param_2);
      fVar61 = *pfVar3;
      fVar63 = pfVar3[1];
      fVar19 = pfVar3[2];
      auVar73 = *(undefined1 (*) [16])((uint)pbVar17[4] + param_2);
      fVar55 = auVar73._4_4_;
      pfVar14 = (float *)((uint)pbVar17[6] + param_2);
      pfVar4 = (float *)((uint)pbVar17[7] + param_2);
      fVar20 = *pfVar4;
      fVar35 = pfVar4[1];
      fVar36 = pfVar4[2];
      fVar37 = *pfVar14;
      fVar38 = pfVar14[1];
      fVar47 = pfVar14[2];
      fVar40 = fVar61 - fVar20;
      fVar49 = fVar63 - fVar35;
      fVar50 = fVar19 - fVar36;
      fVar52 = pfVar3[3] - pfVar4[3];
      fVar28 = fVar20 - fVar37;
      fVar30 = fVar35 - fVar38;
      fVar32 = fVar36 - fVar47;
      fVar39 = pfVar4[3] - pfVar14[3];
      fVar48 = auVar73._0_4_;
      fVar51 = auVar73._8_4_;
      auVar21._0_4_ = fVar48 - fVar61;
      auVar21._4_4_ = fVar55 - fVar63;
      auVar21._8_4_ = fVar51 - fVar19;
      fVar54 = fVar30 * fVar50 - fVar32 * fVar49;
      fVar62 = fVar32 * fVar40 - fVar28 * fVar50;
      fVar64 = fVar28 * fVar49 - fVar30 * fVar40;
      fVar29 = fVar54 * fVar54;
      fVar31 = fVar62 * fVar62;
      fVar33 = fVar64 * fVar64;
      auVar57._4_4_ = fVar29;
      auVar57._0_4_ = fVar29;
      auVar57._8_4_ = fVar29;
      auVar57._12_4_ = fVar29;
      fVar67 = fVar31 + fVar29 + fVar33;
      fVar68 = fVar31 + fVar29 + fVar33;
      fVar69 = fVar31 + fVar29 + fVar33;
      fVar33 = fVar31 + fVar29 + fVar33;
      auVar6._4_4_ = fVar68;
      auVar6._0_4_ = fVar67;
      auVar6._8_4_ = fVar69;
      auVar6._12_4_ = fVar33;
      auVar46 = rsqrtps(auVar57,auVar6);
      fVar29 = auVar46._0_4_;
      fVar31 = auVar46._4_4_;
      fVar34 = auVar46._8_4_;
      fVar53 = auVar46._12_4_;
      fVar29 = (float)(~-(uint)(fVar67 <= 0.0) &
                      (uint)((3.0 - fVar29 * fVar67 * fVar29) * fVar29 * 0.5)) * fVar54;
      fVar31 = (float)(~-(uint)(fVar68 <= 0.0) &
                      (uint)((3.0 - fVar31 * fVar68 * fVar31) * fVar31 * 0.5)) * fVar62;
      fVar34 = (float)(~-(uint)(fVar69 <= 0.0) &
                      (uint)((3.0 - fVar34 * fVar69 * fVar34) * fVar34 * 0.5)) * fVar64;
      fVar33 = (float)(~-(uint)(fVar33 <= 0.0) &
                      (uint)((3.0 - fVar53 * fVar33 * fVar53) * fVar53 * 0.5)) *
               (fVar39 * fVar52 - fVar39 * fVar52);
      auVar46._4_4_ = fVar31;
      auVar46._0_4_ = fVar29;
      auVar46._8_4_ = (uint)fVar34;
      auVar46._12_4_ = (uint)fVar33;
      auVar41._4_4_ =
           -(uint)(((fVar48 - fVar20) * fVar49 - (fVar55 - fVar35) * fVar40) * fVar64 +
                   ((fVar51 - fVar36) * fVar40 - (fVar48 - fVar20) * fVar50) * fVar62 +
                   ((fVar55 - fVar35) * fVar50 - (fVar51 - fVar36) * fVar49) * fVar54 < 0.0);
      auVar41._0_4_ =
           -(uint)(((fVar48 - fVar37) * fVar30 - (fVar55 - fVar38) * fVar28) * fVar64 +
                   ((fVar51 - fVar47) * fVar28 - (fVar48 - fVar37) * fVar32) * fVar62 +
                   ((fVar55 - fVar38) * fVar32 - (fVar51 - fVar47) * fVar30) * fVar54 < 0.0);
      auVar41._8_4_ =
           -(uint)((auVar21._0_4_ * (fVar38 - fVar63) - auVar21._4_4_ * (fVar37 - fVar61)) * fVar64
                   + (auVar21._8_4_ * (fVar37 - fVar61) - auVar21._0_4_ * (fVar47 - fVar19)) *
                     fVar62 + (auVar21._4_4_ * (fVar47 - fVar19) - auVar21._8_4_ * (fVar38 - fVar63)
                              ) * fVar54 < 0.0);
      auVar41._12_4_ =
           -(uint)(*(float *)(param_2 + 0x108) * fVar64 +
                   *(float *)(param_2 + 0x104) * fVar62 + *(float *)(param_2 + 0x100) * fVar54 < 0.0
                  );
      uVar11 = movmskps((uint)pbVar17[4],auVar41);
      bVar10 = (byte)uVar11;
      if ((uVar11 & 8) != 0) {
        auVar71._4_4_ = fVar31;
        auVar71._0_4_ = fVar29;
        auVar71._8_4_ = fVar34;
        auVar71._12_4_ = fVar33;
LAB_0122a02a:
        auVar46._0_8_ = auVar71._0_8_ ^ 0x8000000080000000;
        auVar46._8_4_ = auVar71._8_4_ ^ 0x80000000;
        auVar46._12_4_ = auVar71._12_4_ ^ 0x80000000;
      }
      goto LAB_0122a031;
    case 9:
      pauVar1 = (undefined1 (*) [16])(param_2 + 0x100);
      auVar46 = *pauVar1;
      pfVar3 = (float *)((uint)pbVar17[5] + param_2);
      fVar61 = *pfVar3;
      fVar63 = pfVar3[1];
      fVar19 = pfVar3[2];
      fVar20 = pfVar3[3];
      pauVar2 = (undefined1 (*) [12])((uint)pbVar17[6] + param_2);
      auVar7 = *pauVar2;
      auVar71 = *(undefined1 (*) [16])((uint)pbVar17[4] + param_2);
      fVar55 = auVar71._4_4_;
      fVar47 = fVar61 - *(float *)*pauVar2;
      fVar48 = fVar63 - *(float *)(*pauVar2 + 4);
      fVar51 = fVar19 - *(float *)(*pauVar2 + 8);
      fVar28 = fVar20 - *(float *)pauVar2[1];
      fVar32 = auVar71._0_4_;
      fVar35 = fVar61 - fVar32;
      fVar36 = fVar63 - fVar55;
      fVar33 = auVar71._8_4_;
      fVar37 = fVar19 - fVar33;
      fVar38 = fVar20 - auVar71._12_4_;
      fVar29 = fVar51 * fVar36 - fVar48 * fVar37;
      fVar30 = fVar47 * fVar37 - fVar51 * fVar35;
      fVar31 = fVar48 * fVar35 - fVar47 * fVar36;
      fVar28 = fVar28 * fVar38 - fVar28 * fVar38;
      local_50 = auVar7._0_4_;
      fStack_4c = auVar7._4_4_;
      fStack_48 = auVar7._8_4_;
      fVar30 = fVar30 * fVar30;
      fVar28 = fVar28 * fVar28;
      fVar38 = fVar51 * fVar37 + fVar47 * fVar35 + fVar48 * fVar36;
      fVar47 = (fStack_48 - fVar33) * fVar37 +
               (local_50 - fVar32) * fVar35 + (fStack_4c - fVar55) * fVar36;
      fVar48 = fVar31 * fVar31 + fVar29 * fVar29 + fVar30;
      if (fVar48 <= *(float *)(param_2 + 0x11c) *
                    (fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35)) {
        auVar42._4_4_ = -(uint)(fVar47 < 0.0);
        auVar42._0_4_ = -(uint)(fVar38 < 0.0);
        auVar42._8_4_ = -(uint)(fVar48 < 0.0);
        auVar42._12_4_ = -(uint)(fVar28 + fVar30 + fVar28 < 0.0);
        uVar11 = movmskps((uint)pbVar17[6],auVar42);
        if ((uVar11 & 3) == 0) {
          auVar23._0_12_ = ZEXT812(0);
          auVar23._12_4_ = fVar47;
          auVar23 = auVar23 | ZEXT416((uint)fVar47) << 0x20;
          auVar43._4_4_ = 0;
          auVar43._0_4_ = auVar23._4_4_;
          auVar43._8_4_ = auVar23._12_4_;
          auVar43._12_4_ = auVar23._8_4_;
          auVar43 = auVar43 | auVar23;
          auVar58._0_4_ = fVar38 + auVar43._0_4_;
          auVar58._4_4_ = fVar38 + auVar43._4_4_;
          auVar58._8_4_ = fVar38 + auVar43._8_4_;
          auVar58._12_4_ = fVar38 + auVar43._12_4_;
          auVar44 = rcpps(auVar43,auVar58);
          auVar73._0_4_ =
               fVar38 * (2.0 - auVar44._0_4_ * auVar58._0_4_) * auVar44._0_4_ * (fVar32 - fVar61) +
               fVar61;
          auVar73._4_4_ =
               fVar38 * (2.0 - auVar44._4_4_ * auVar58._4_4_) * auVar44._4_4_ * (fVar55 - fVar63) +
               fVar63;
          auVar73._8_4_ =
               fVar38 * (2.0 - auVar44._8_4_ * auVar58._8_4_) * auVar44._8_4_ * (fVar33 - fVar19) +
               fVar19;
          auVar73._12_4_ =
               fVar38 * (2.0 - auVar44._12_4_ * auVar58._12_4_) * auVar44._12_4_ *
               (auVar71._12_4_ - fVar20) + fVar20;
          auVar21._0_4_ = auVar73._0_4_ - local_50;
          auVar21._4_4_ = auVar73._4_4_ - fStack_4c;
          auVar21._8_4_ = auVar73._8_4_ - fStack_48;
          bVar10 = 5;
          bVar18 = true;
        }
        else {
          bVar10 = 6;
          bVar18 = false;
          auVar46 = *pauVar1;
        }
      }
      else {
        bVar10 = 0;
        bVar18 = false;
        auVar46 = *pauVar1;
      }
      break;
    case 10:
      pfVar3 = (float *)((uint)pbVar17[4] + param_2);
      fVar55 = *pfVar3;
      fVar61 = pfVar3[1];
      fVar63 = pfVar3[2];
      pfVar4 = (float *)((uint)pbVar17[5] + param_2);
      fVar32 = *pfVar4 - fVar55;
      fVar33 = pfVar4[1] - fVar61;
      fVar34 = pfVar4[2] - fVar63;
      pfVar15 = (float *)((uint)pbVar17[6] + param_2);
      pfVar14 = (float *)((uint)pbVar17[7] + param_2);
      fVar19 = *pfVar15;
      fVar20 = pfVar15[1];
      fVar35 = pfVar15[2];
      fVar36 = *pfVar4 - *pfVar14;
      fVar47 = pfVar4[1] - pfVar14[1];
      fVar28 = pfVar4[2] - pfVar14[2];
      fVar39 = *pfVar14 - fVar19;
      fVar40 = pfVar14[1] - fVar20;
      fVar49 = pfVar14[2] - fVar35;
      fVar37 = fVar33 * fVar49 - fVar34 * fVar40;
      fVar48 = fVar34 * fVar39 - fVar32 * fVar49;
      fVar51 = fVar32 * fVar40 - fVar33 * fVar39;
      fVar29 = fVar51 * fVar33 - fVar48 * fVar34;
      fVar30 = fVar37 * fVar34 - fVar51 * fVar32;
      fVar31 = fVar48 * fVar32 - fVar37 * fVar33;
      fVar38 = fVar51 * fVar40 - fVar48 * fVar49;
      fVar51 = fVar37 * fVar49 - fVar51 * fVar39;
      fVar48 = fVar48 * fVar39 - fVar37 * fVar40;
      auVar70._0_4_ = fVar51 * (fVar61 - fVar20) + fVar38 * (fVar55 - fVar19);
      auVar70._4_4_ = fVar30 * (fVar61 - fVar20) + fVar29 * (fVar55 - fVar19);
      auVar70._8_4_ = fVar51 * fVar47 + fVar38 * fVar36;
      auVar70._12_4_ = fVar30 * fVar47 + fVar29 * fVar36;
      fVar36 = fVar48 * (fVar63 - fVar35) + auVar70._0_4_;
      fVar37 = fVar31 * (fVar63 - fVar35) + auVar70._4_4_;
      fVar38 = fVar48 * fVar28 + auVar70._8_4_;
      auVar26._12_4_ = fVar31 * fVar28 + auVar70._12_4_;
      auVar59._4_4_ = -(uint)(fVar37 < 0.0);
      auVar59._0_4_ = -(uint)(fVar36 < 0.0);
      auVar59._8_4_ = -(uint)(fVar38 < 0.0);
      auVar59._12_4_ = -(uint)(auVar26._12_4_ < 0.0);
      iVar13 = movmskps(pfVar15,auVar59);
      if ((iVar13 == 3) || (iVar13 == 0xc)) {
        auVar24._0_4_ = fVar36 - fVar38;
        auVar24._4_4_ = fVar36 - fVar38;
        auVar24._8_4_ = fVar36 - fVar38;
        auVar24._12_4_ = fVar36 - fVar38;
        auVar71 = rcpps(auVar70,auVar24);
        auVar26._0_12_ = ZEXT812(0);
        auVar25._0_12_ = ZEXT812(0);
        auVar25._12_4_ = fVar37;
        auVar25 = auVar25 | ZEXT416((uint)fVar37) << 0x20;
        auVar60._4_4_ = 0;
        auVar60._0_4_ = auVar25._4_4_;
        auVar60._8_4_ = auVar25._12_4_;
        auVar60._12_4_ = auVar25._8_4_;
        auVar60 = auVar60 | auVar25;
        auVar26 = ZEXT416((uint)auVar26._12_4_) << 0x20 | auVar26;
        auVar45._4_4_ = 0;
        auVar45._0_4_ = auVar26._4_4_;
        auVar45._8_4_ = auVar26._12_4_;
        auVar45._12_4_ = auVar26._8_4_;
        auVar45 = auVar45 | auVar26;
        auVar27._0_4_ = auVar60._0_4_ - auVar45._0_4_;
        auVar27._4_4_ = auVar60._4_4_ - auVar45._4_4_;
        auVar27._8_4_ = auVar60._8_4_ - auVar45._8_4_;
        auVar27._12_4_ = auVar60._12_4_ - auVar45._12_4_;
        auVar46 = rcpps(auVar45,auVar27);
        auVar73._0_4_ =
             (2.0 - auVar71._0_4_ * auVar24._0_4_) * auVar71._0_4_ * fVar36 * fVar32 + fVar55;
        auVar73._4_4_ =
             (2.0 - auVar71._4_4_ * auVar24._4_4_) * auVar71._4_4_ * fVar36 * fVar33 + fVar61;
        auVar73._8_4_ =
             (2.0 - auVar71._8_4_ * auVar24._8_4_) * auVar71._8_4_ * fVar36 * fVar34 + fVar63;
        auVar73._12_4_ =
             (2.0 - auVar71._12_4_ * auVar24._12_4_) * auVar71._12_4_ * fVar36 *
             (pfVar4[3] - pfVar3[3]) + pfVar3[3];
        auVar21._0_4_ =
             auVar73._0_4_ -
             ((2.0 - auVar27._0_4_ * auVar46._0_4_) * auVar46._0_4_ * auVar60._0_4_ * fVar39 +
             fVar19);
        auVar21._4_4_ =
             auVar73._4_4_ -
             ((2.0 - auVar27._4_4_ * auVar46._4_4_) * auVar46._4_4_ * auVar60._4_4_ * fVar40 +
             fVar20);
        auVar21._8_4_ =
             auVar73._8_4_ -
             ((2.0 - auVar27._8_4_ * auVar46._8_4_) * auVar46._8_4_ * auVar60._8_4_ * fVar49 +
             fVar35);
        bVar10 = 0x11;
        bVar18 = true;
        auVar46 = *(undefined1 (*) [16])(param_2 + 0x100);
      }
      else {
        bVar10 = 0x12;
        bVar18 = false;
        auVar46 = *(undefined1 (*) [16])(param_2 + 0x100);
      }
      break;
    case 0xd:
      pfVar3 = (float *)((uint)pbVar17[4] + param_2);
      fVar55 = *pfVar3;
      fVar61 = pfVar3[1];
      fVar63 = pfVar3[2];
      pfVar4 = (float *)((uint)pbVar17[5] + param_2);
      fVar19 = *pfVar4;
      fVar20 = pfVar4[1];
      fVar35 = pfVar4[2];
      pfVar15 = (float *)((uint)pbVar17[6] + param_2);
      pfVar14 = (float *)((uint)pbVar17[7] + param_2);
      fVar36 = *pfVar14;
      fVar37 = pfVar14[1];
      fVar38 = pfVar14[2];
      fVar47 = *pfVar15;
      fVar48 = pfVar15[1];
      fVar51 = pfVar15[2];
      fVar28 = fVar47 - fVar19;
      fVar30 = fVar48 - fVar20;
      fVar32 = fVar51 - fVar35;
      fVar34 = pfVar15[3] - pfVar4[3];
      fVar39 = fVar55 - fVar47;
      fVar49 = fVar61 - fVar48;
      fVar52 = fVar63 - fVar51;
      fVar54 = pfVar3[3] - pfVar15[3];
      fVar40 = fVar30 * fVar52 - fVar32 * fVar49;
      fVar50 = fVar32 * fVar39 - fVar28 * fVar52;
      fVar53 = fVar28 * fVar49 - fVar30 * fVar39;
      fVar29 = fVar40 * fVar40;
      fVar31 = fVar50 * fVar50;
      fVar33 = fVar53 * fVar53;
      auVar72._4_4_ = fVar29;
      auVar72._0_4_ = fVar29;
      auVar72._8_4_ = fVar29;
      auVar72._12_4_ = fVar29;
      auVar65._0_4_ = fVar31 + fVar29 + fVar33;
      auVar65._4_4_ = fVar31 + fVar29 + fVar33;
      auVar65._8_4_ = fVar31 + fVar29 + fVar33;
      auVar65._12_4_ = fVar31 + fVar29 + fVar33;
      auVar73 = rsqrtps(auVar72,auVar65);
      fVar29 = auVar73._0_4_;
      fVar31 = auVar73._4_4_;
      fVar33 = auVar73._8_4_;
      fVar62 = auVar73._12_4_;
      fVar29 = (float)(~-(uint)(auVar65._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar29 * auVar65._0_4_ * fVar29) * fVar29 * 0.5)) * fVar40;
      fVar31 = (float)(~-(uint)(auVar65._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar31 * auVar65._4_4_ * fVar31) * fVar31 * 0.5)) * fVar50;
      fVar33 = (float)(~-(uint)(auVar65._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar33 * auVar65._8_4_ * fVar33) * fVar33 * 0.5)) * fVar53;
      fVar34 = (float)(~-(uint)(auVar65._12_4_ <= 0.0) &
                      (uint)((3.0 - fVar62 * auVar65._12_4_ * fVar62) * fVar62 * 0.5)) *
               (fVar34 * fVar54 - fVar34 * fVar54);
      auVar21._0_4_ = fVar55 - fVar36;
      auVar21._4_4_ = fVar61 - fVar37;
      auVar21._8_4_ = fVar63 - fVar38;
      fVar54 = auVar21._0_4_ * fVar29;
      fVar62 = auVar21._4_4_ * fVar31;
      fVar64 = auVar21._8_4_ * fVar33;
      auVar71._4_4_ = fVar31;
      auVar71._0_4_ = fVar29;
      auVar71._8_4_ = fVar33;
      auVar71._12_4_ = fVar34;
      auVar44._4_4_ =
           -(uint)(((fVar36 - fVar47) * fVar49 - (fVar37 - fVar48) * fVar39) * fVar53 +
                   ((fVar38 - fVar51) * fVar39 - (fVar36 - fVar47) * fVar52) * fVar50 +
                   ((fVar37 - fVar48) * fVar52 - (fVar38 - fVar51) * fVar49) * fVar40 < 0.0);
      auVar44._0_4_ =
           -(uint)(((fVar36 - fVar19) * fVar30 - (fVar37 - fVar20) * fVar28) * fVar53 +
                   ((fVar38 - fVar35) * fVar28 - (fVar36 - fVar19) * fVar32) * fVar50 +
                   ((fVar37 - fVar20) * fVar32 - (fVar38 - fVar35) * fVar30) * fVar40 < 0.0);
      auVar44._8_4_ =
           -(uint)(((fVar36 - fVar55) * (fVar20 - fVar61) - (fVar37 - fVar61) * (fVar19 - fVar55)) *
                   fVar53 + ((fVar38 - fVar63) * (fVar19 - fVar55) -
                            (fVar36 - fVar55) * (fVar35 - fVar63)) * fVar50 +
                            ((fVar37 - fVar61) * (fVar35 - fVar63) -
                            (fVar38 - fVar63) * (fVar20 - fVar61)) * fVar40 < 0.0);
      auVar44._12_4_ =
           -(uint)(*(float *)(param_2 + 0x108) * fVar53 +
                   *(float *)(param_2 + 0x104) * fVar50 + *(float *)(param_2 + 0x100) * fVar40 < 0.0
                  );
      uVar11 = movmskps((uint)pbVar17[4],auVar44);
      auVar73._0_4_ = (fVar62 + fVar54 + fVar64) * fVar29 + fVar36;
      auVar73._4_4_ = (fVar62 + fVar54 + fVar64) * fVar31 + fVar37;
      auVar73._8_4_ = (fVar62 + fVar54 + fVar64) * fVar33 + fVar38;
      auVar73._12_4_ = (fVar62 + fVar54 + fVar64) * fVar34 + pfVar14[3];
      bVar10 = (byte)uVar11;
      auVar46 = auVar71;
      if ((uVar11 & 8) != 0) goto LAB_0122a02a;
LAB_0122a031:
      bVar18 = (~bVar10 & 7) != 0;
      bVar10 = bVar18 + 0x11;
      bVar18 = !bVar18;
    }
    fVar55 = auVar46._0_4_;
    fVar63 = auVar46._8_4_;
    fVar61 = auVar46._4_4_;
    if (bVar18) {
      fVar19 = fVar61 * auVar21._4_4_ + fVar55 * auVar21._0_4_ + fVar63 * auVar21._8_4_;
      fVar20 = *(float *)(param_2 + 0x114) - fVar19;
      fVar19 = fVar19 - (*(float *)(param_2 + 0x110) + *(float *)(param_2 + 0x114));
      if (*(float *)(param_2 + 0x118) <= fVar19) goto LAB_0122a702;
      *(undefined1 (*) [16])(pfVar5 + 4) = auVar46;
      *pfVar5 = fVar20 * fVar55 + auVar73._0_4_;
      pfVar5[1] = fVar20 * fVar61 + auVar73._4_4_;
      pfVar5[2] = fVar20 * fVar63 + auVar73._8_4_;
      pfVar5[3] = fVar20 * auVar46._12_4_ + auVar73._12_4_;
      pfVar5[7] = fVar19;
      pfVar5[8] = (float)(uint)*(ushort *)(pbVar17 + 2);
      *param_4 = *param_4 + 0x30;
    }
    else {
      if ((bVar10 & 0x10) == 0) {
        if ((bVar10 & 4) != 0) goto LAB_0122a6ff;
      }
      else if ((fVar61 * auVar21._4_4_ + fVar55 * auVar21._0_4_ + fVar63 * auVar21._8_4_) -
               (*(float *)(param_2 + 0x114) + *(float *)(param_2 + 0x110)) <
               *(float *)(param_2 + 0x118)) {
LAB_0122a6ff:
        local_18 = 1;
      }
LAB_0122a702:
      if (*(short *)(pbVar17 + 2) != -1) {
        (**(code **)(*param_5 + 0x14))(*(undefined2 *)(pbVar17 + 2),param_4[1]);
      }
      *(undefined4 *)pbVar17 = *(undefined4 *)(local_34 + -8);
      local_20 = local_20 - 1;
      local_1c = local_1c - 1;
      *(undefined4 *)(pbVar17 + 4) = *(undefined4 *)(local_34 + -4);
      pbVar17 = pbVar17 + -8;
      local_34 = local_34 + -8;
    }
    local_1c = local_1c + 1;
    pbVar17 = pbVar17 + 8;
    if (local_20 <= local_1c) {
      if (local_20 < uVar12) {
        param_1[2] = (byte)local_20;
        pbVar17 = param_1 + local_20 * 8 + 4;
        iVar13 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
        if (-1 < iVar13) {
          iVar16 = (int)(param_1 + uVar12 * 8 + 4) - (int)pbVar17;
          do {
            *(undefined4 *)pbVar17 = *(undefined4 *)(pbVar17 + iVar16);
            pbVar17 = pbVar17 + 4;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        FUN_01228260();
      }
      return local_18;
    }
  } while( true );
}

// 0122A7E0  FUN_0122a7e0  size=52  [run]
void FUN_0122a7e0(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = param_1 + param_3 * 8 + 4;
  iVar3 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
  if (-1 < iVar3) {
    iVar1 = (param_2 * 8 + 4) - (int)pbVar2;
    do {
      *(undefined4 *)pbVar2 = *(undefined4 *)(pbVar2 + (int)(param_1 + iVar1));
      pbVar2 = pbVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

// 0122A820  FUN_0122a820  size=64  [run]
void FUN_0122a820(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
  pbVar2 = param_1 + (iVar1 + param_3 * 2) * 4 + 4;
  param_1 = param_1 + (iVar1 + param_2 * 2) * 4 + 4;
  for (; -1 < iVar1; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar2 = *(undefined4 *)param_1;
    pbVar2 = pbVar2 + -4;
    param_1 = param_1 + -4;
  }
  return;
}

// 0122A860  FUN_0122a860  size=11  [run]
int FUN_0122a860(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0122A870  FUN_0122a870  size=35  [run]
void FUN_0122a870(undefined4 *param_1,undefined4 *param_2)

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

// 0122A8A0  FUN_0122a8a0  size=96  [run]
void FUN_0122a8a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  *param_5 = fVar3 * param_1[2] + fVar2 * param_1[1] + fVar1 * *param_1;
  param_5[1] = fVar6 * fVar9 + fVar5 * fVar8 + fVar4 * fVar7;
  param_5[2] = fVar12 * fVar3 + fVar11 * fVar2 + fVar10 * fVar1;
  param_5[3] = fVar6 * fVar12 + fVar5 * fVar11 + fVar4 * fVar10;
  return;
}

// 0122A900  FUN_0122a900  size=32  [run]
undefined4 __thiscall FUN_0122a900(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (uint)(*(byte *)(param_2 + 4 + param_3) >> 3) + param_1;
  return CONCAT22((short)((uint)iVar1 >> 0x10),
                  *(undefined2 *)(iVar1 + 4 + (uint)*(byte *)(param_1 + 2) * 8));
}

// 0122A920  FUN_0122a920  size=12  [run]
int __thiscall FUN_0122a920(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0122A930  FUN_0122a930  size=12  [run]
int __thiscall FUN_0122a930(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0122A940  FUN_0122a940  size=33  [run]
void FUN_0122a940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  return;
}

// 0122A980  FUN_0122a980  size=447  [run]
void __thiscall FUN_0122a980(undefined2 *param_1,int *param_2,int *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  (**(code **)(*param_2 + 0x24))(&local_14,1,&local_90);
  (**(code **)(*param_3 + 0x24))(&local_14,1,&local_80);
  local_60._0_4_ =
       fStack_7c * param_4[4] + local_80 * *param_4 + fStack_78 * param_4[8] + param_4[0xc];
  local_60._4_4_ =
       fStack_7c * param_4[5] + local_80 * param_4[1] + fStack_78 * param_4[9] + param_4[0xd];
  uStack_58._0_4_ =
       fStack_7c * param_4[6] + local_80 * param_4[2] + fStack_78 * param_4[10] + param_4[0xe];
  uStack_58._4_4_ =
       fStack_7c * param_4[7] + local_80 * param_4[3] + fStack_78 * param_4[0xb] + param_4[0xf];
  local_30 = (float)local_60 - local_90;
  fStack_2c = local_60._4_4_ - fStack_8c;
  fStack_28 = (float)uStack_58 - fStack_88;
  fStack_24 = uStack_58._4_4_ - fStack_84;
  (**(code **)(*param_2 + 0x20))(&local_30,&local_70);
  uVar1 = *(undefined8 *)param_4;
  local_30 = (float)local_60 - local_70;
  fStack_2c = local_60._4_4_ - fStack_6c;
  fStack_28 = (float)uStack_58 - fStack_68;
  fStack_24 = uStack_58._4_4_ - fStack_64;
  uStack_38 = *(undefined8 *)(param_4 + 2);
  uVar2 = *(undefined8 *)(param_4 + 4);
  local_40._0_4_ = (float)uVar1;
  local_40._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_48 = *(undefined8 *)(param_4 + 6);
  local_50._0_4_ = (float)uVar2;
  local_50._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_60._0_4_ = (float)*(undefined8 *)(param_4 + 8);
  local_60._4_4_ = (float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20);
  uStack_58._0_4_ = (float)*(undefined8 *)(param_4 + 10);
  uStack_58._4_4_ = (float)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20);
  fVar6 = fStack_2c * local_60._4_4_;
  fVar4 = local_30 * (float)local_60;
  fVar5 = local_30 * local_60._4_4_;
  local_60 = CONCAT44(fStack_2c * local_50._4_4_ + local_30 * (float)local_50 +
                      (float)uStack_48 * fStack_28,
                      fStack_2c * local_40._4_4_ + local_30 * (float)local_40 +
                      (float)uStack_38 * fStack_28) ^ 0x8000000080000000;
  uStack_58 = CONCAT44(fStack_2c * uStack_58._4_4_ + fVar5 + uStack_58._4_4_ * fStack_28,
                       fVar6 + fVar4 + (float)uStack_58 * fStack_28) ^ 0x8000000080000000;
  local_50 = uVar2;
  local_40 = uVar1;
  (**(code **)(*param_3 + 0x20))(&local_60,&local_50);
  *param_1 = fStack_64._0_2_;
  param_1[1] = uStack_48._4_2_;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0x101;
  local_18 = (**(code **)(*param_2 + 0x2c))();
  iVar3 = (**(code **)(*param_3 + 0x2c))();
  if (3 < local_18) {
    local_18 = 0xf;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) ^ (*(byte *)(param_1 + 5) ^ (byte)local_18) & 0xf;
  if (3 < iVar3) {
    iVar3 = 0xf;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf | (char)iVar3 << 4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  return;
}

// 0122AB40  FUN_0122ab40  size=379  [run]
void __thiscall FUN_0122ab40(undefined2 *param_1,int *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [4];
  undefined1 local_50 [12];
  undefined2 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined2 *local_14;
  
  local_14 = param_1;
  if (*(char *)(param_3 + 0x17) != '\0') {
    FUN_0122a980(param_2,param_3,param_4);
    return;
  }
  param_1[1] = 0;
  param_1[2] = 1;
  iVar6 = 2;
  param_1[3] = 2;
  pfVar9 = local_90;
  for (iVar7 = 0x10; fVar4 = local_60[3], fVar12 = local_60[2], fVar11 = local_60[1],
      fVar10 = local_60[0], iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *param_4;
    param_4 = param_4 + 1;
    pfVar9 = pfVar9 + 1;
  }
  pfVar9 = local_60;
  pfVar8 = (float *)(param_3 + 0x40);
  do {
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    *pfVar9 = fVar1 * local_90[0] + fVar2 * local_80 + fVar3 * local_70 + fVar10;
    pfVar9[1] = fVar1 * local_90[1] + fVar2 * fStack_7c + fVar3 * fStack_6c + fVar11;
    pfVar9[2] = fVar1 * local_90[2] + fVar2 * fStack_78 + fVar3 * fStack_68 + fVar12;
    pfVar9[3] = fVar1 * local_90[3] + fVar2 * fStack_74 + fVar3 * fStack_64 + fVar4;
    pfVar8 = pfVar8 + -4;
    pfVar9 = pfVar9 + -4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  local_30 = (local_60[2] - fStack_68) * (fStack_6c - fStack_7c) -
             (local_60[1] - fStack_6c) * (fStack_68 - fStack_78);
  fStack_2c = (local_60[0] - local_70) * (fStack_68 - fStack_78) -
              (local_60[2] - fStack_68) * (local_70 - local_80);
  fStack_28 = (local_60[1] - fStack_6c) * (local_70 - local_80) -
              (local_60[0] - local_70) * (fStack_6c - fStack_7c);
  fStack_24 = (local_60[3] - fStack_64) * (fStack_64 - fStack_74) -
              (local_60[3] - fStack_64) * (fStack_64 - fStack_74);
  (**(code **)(*param_2 + 0x24))(param_1 + 1,1,&local_40);
  fVar10 = (local_40 - local_80) * local_30;
  fVar11 = (fStack_3c - fStack_7c) * fStack_2c;
  fVar12 = (fStack_38 - fStack_78) * fStack_28;
  local_30 = (float)((uint)(fVar11 + fVar10 + fVar12) & 0x80000000 ^ (uint)local_30);
  fStack_2c = (float)((uint)(fVar11 + fVar10 + fVar12) & 0x80000000 ^ (uint)fStack_2c);
  fStack_28 = (float)((uint)(fVar11 + fVar10 + fVar12) & 0x80000000 ^ (uint)fStack_28);
  fStack_24 = (float)((uint)(fVar11 + fVar10 + fVar12) & 0x80000000 ^ (uint)fStack_24);
  (**(code **)(*param_2 + 0x20))(&local_30,local_50);
  puVar5 = local_14;
  *local_14 = local_44;
  local_14[4] = 0x301;
  iVar6 = (**(code **)(*param_2 + 0x2c))();
  if (3 < iVar6) {
    iVar6 = 0xf;
  }
  *(byte *)(puVar5 + 5) = (byte)iVar6 & 0xf | 0x30;
  *(undefined1 *)((int)puVar5 + 0xb) = 0;
  return;
}

// 0122ACE0  FUN_0122ace0  size=1302  [run]
void FUN_0122ace0(int *param_1,uint param_2,uint param_3,int param_4,byte *param_5,
                 ulonglong *param_6,uint param_7,uint *param_8)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
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
  float fVar19;
  float fVar20;
  float fVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  undefined4 *puVar27;
  float local_1d0 [64];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [4];
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
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_30;
  int *local_2c;
  undefined4 *local_28;
  float *local_24;
  int *local_20;
  byte *local_1c;
  byte local_15;
  byte *local_14;
  
  local_4c = *(int **)*param_1;
  local_48 = *(int **)param_1[1];
  local_54 = param_1 + 8;
  local_50 = ((undefined4 *)*param_1)[2];
  local_44 = *(undefined4 *)(param_1[3] + 0xc);
  *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xef;
  iVar23 = FUN_01226d70(&local_54,param_4,param_6,&local_70);
  if (iVar23 == 1) {
    if (param_5[2] == 0) {
      return;
    }
    FUN_01228000(param_5,param_1[4],param_8[1]);
    return;
  }
  local_40 = *param_6;
  uStack_38 = param_6[1];
  if ((char)local_48[2] == '\x02') {
    local_14 = *(byte **)(*param_1 + 8);
    local_20 = *(int **)(param_1[1] + 8);
    iVar23 = (**(code **)(*local_48 + 0x34))
                       (param_4 + (uint)*(byte *)(param_4 + 8) * 2,param_4 + 9,&local_70,local_20,
                        local_4c,local_14,&local_40);
LAB_0122ae34:
    if (iVar23 == 0) {
      FUN_01228000(param_5,param_1[4],param_8[1]);
      return;
    }
    if (iVar23 == 1) {
      *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 0x10;
    }
  }
  else if (((char)local_4c[2] == '\x02') && (*(char *)((int)local_4c + 0x16) != '\x06')) {
    local_40._4_4_ = (uint)(local_40 >> 0x20);
    uStack_38._4_4_ = (undefined4)(uStack_38 >> 0x20);
    local_40._0_4_ = (uint)local_40 ^ 0x80000000;
    local_40._4_4_ = local_40._4_4_ ^ 0x80000000;
    uStack_38._0_4_ = (uint)uStack_38 ^ 0x80000000;
    local_14 = *(byte **)(param_1[1] + 8);
    local_20 = *(int **)(*param_1 + 8);
    iVar23 = (**(code **)(*local_4c + 0x34))
                       (param_4,param_4 + 8,&local_70,local_20,local_48,local_14,&local_40);
    local_40 = CONCAT44(local_40._4_4_,(uint)local_40) ^ 0x8000000080000000;
    uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38) ^ 0x80000000;
    goto LAB_0122ae34;
  }
  uVar24 = FUN_01227e80(param_5,param_4);
  param_7 = param_7 | uVar24 & 2;
  local_28 = (undefined4 *)*param_8;
  local_15 = param_5[2];
  local_1c = (byte *)(uint)local_15;
  local_14 = (byte *)(uVar24 & 1);
  if (local_14 < local_1c) {
    local_20 = (int *)param_1[1];
    local_24 = (float *)*param_1;
    local_b8 = *(float *)(param_1[3] + 0xc);
    local_2c = (int *)*local_24;
    local_30 = (int *)*local_20;
    local_c0 = (float)local_2c[4];
    local_bc = (float)local_30[4];
    local_b4 = local_c0 + local_b8 + local_bc;
    local_b4 = local_b4 * local_b4;
    local_d0 = (uint)local_40;
    uStack_cc = local_40._4_4_;
    uStack_c8 = (uint)uStack_38;
    uStack_c4 = uStack_38._4_4_;
    if (local_15 != 0) {
      local_1c = param_5 + (int)local_1c * 8 + 4;
      (**(code **)(*local_2c + 0x24))(local_1c,*param_5,local_1d0);
      pfVar25 = (float *)local_24[2];
      pfVar26 = local_b0;
      for (iVar23 = 0x10; fVar21 = fStack_74, fVar20 = fStack_78, fVar19 = fStack_7c,
          fVar18 = local_80, fVar17 = fStack_84, fVar16 = fStack_88, fVar15 = fStack_8c,
          fVar14 = local_90, fVar13 = fStack_94, fVar12 = fStack_98, fVar11 = fStack_9c,
          fVar10 = local_a0, fVar9 = local_b0[3], fVar8 = local_b0[2], fVar7 = local_b0[1],
          fVar1 = local_b0[0], iVar23 != 0; iVar23 = iVar23 + -1) {
        *pfVar26 = *pfVar25;
        pfVar25 = pfVar25 + 1;
        pfVar26 = pfVar26 + 1;
      }
      uVar24 = (uint)*param_5;
      iVar23 = uVar24 - 1;
      pfVar25 = local_1d0 + iVar23 * 4;
      do {
        fVar4 = *pfVar25;
        fVar5 = pfVar25[1];
        fVar6 = pfVar25[2];
        *pfVar25 = fVar5 * fVar10 + fVar4 * fVar1 + fVar6 * fVar14 + fVar18;
        pfVar25[1] = fVar5 * fVar11 + fVar4 * fVar7 + fVar6 * fVar15 + fVar19;
        pfVar25[2] = fVar5 * fVar12 + fVar4 * fVar8 + fVar6 * fVar16 + fVar20;
        pfVar25[3] = fVar5 * fVar13 + fVar4 * fVar9 + fVar6 * fVar17 + fVar21;
        pfVar25 = pfVar25 + -4;
        iVar23 = iVar23 + -1;
      } while (-1 < iVar23);
      local_24 = local_1d0 + uVar24 * 4;
      (**(code **)(*local_30 + 0x24))(local_1c + uVar24 * 2,param_5[1],local_24);
      bVar2 = param_5[1];
      pfVar25 = (float *)local_20[2];
      pfVar26 = local_b0;
      for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
        *pfVar26 = *pfVar25;
        pfVar25 = pfVar25 + 1;
        pfVar26 = pfVar26 + 1;
      }
      iVar23 = bVar2 - 1;
      pfVar25 = local_24 + iVar23 * 4;
      do {
        fVar1 = *pfVar25;
        fVar7 = pfVar25[1];
        fVar8 = pfVar25[2];
        *pfVar25 = fVar7 * local_a0 + fVar1 * local_b0[0] + fVar8 * local_90 + local_80;
        pfVar25[1] = fVar7 * fStack_9c + fVar1 * local_b0[1] + fVar8 * fStack_8c + fStack_7c;
        pfVar25[2] = fVar7 * fStack_98 + fVar1 * local_b0[2] + fVar8 * fStack_88 + fStack_78;
        pfVar25[3] = fVar7 * fStack_94 + fVar1 * local_b0[3] + fVar8 * fStack_84 + fStack_74;
        pfVar25 = pfVar25 + -4;
        iVar23 = iVar23 + -1;
      } while (-1 < iVar23);
    }
    uVar24 = FUN_01229c10(param_5,local_1d0,local_14,param_8,param_1[4]);
    param_7 = param_7 | uVar24;
  }
  puVar27 = (undefined4 *)*param_8;
  *puVar27 = local_70;
  puVar27[1] = uStack_6c;
  puVar27[2] = uStack_68;
  puVar27[3] = uStack_64;
  puVar27[4] = (uint)local_40;
  puVar27[5] = local_40._4_4_;
  puVar27[6] = (uint)uStack_38;
  puVar27[7] = uStack_38._4_4_;
  if (local_14 == (byte *)0x0) {
    iVar23 = param_1[3];
    if ((uint)*(byte *)(param_4 + 9) + (uint)*(byte *)(param_4 + 8) == 4) {
      fVar1 = *(float *)(*(int *)(iVar23 + 0x60) + 4);
    }
    else {
      fVar1 = *(float *)(*(int *)(iVar23 + 0x60) + 8);
    }
    if ((*(float *)((int)param_6 + 0xc) <= fVar1 && fVar1 != *(float *)((int)param_6 + 0xc)) ||
       (param_7 != 0)) {
      local_1c = (byte *)(uint)(*(char *)(iVar23 + 0x6c) != '\0');
      iVar23 = FUN_01228ab0(param_5,*param_1,param_1[1],iVar23,param_8,param_4,puVar27,local_28,
                            param_1[4],local_1c);
      if (iVar23 == 4) {
        if (puVar27[8] == 0xffff) {
          if ((param_8[0xc20] == 0) || (param_2 == 0)) {
            local_14 = (byte *)*param_1;
            local_1c = (byte *)param_1[1];
            uVar22 = (**(code **)(*(int *)param_1[4] + 0xc))
                               (local_14,local_1c,param_1[3],param_8,param_4,puVar27);
            puVar27[8] = (uint)uVar22;
            if (uVar22 != 0xffff) {
              *(ushort *)(param_5 + 6) = uVar22;
              *param_8 = *param_8 + 0x30;
              goto LAB_0122b1d0;
            }
          }
          else {
            iVar23 = (**(code **)(*(int *)param_1[4] + 0x10))(1);
            if (iVar23 == 0) {
              puVar3 = *(uint **)param_8[0xc20];
              *(uint **)param_8[0xc20] = puVar3 + 3;
              puVar3[1] = param_2;
              *puVar3 = (uint)puVar27;
              puVar3[2] = param_3;
              *param_8 = *param_8 + 0x30;
              goto LAB_0122b1d0;
            }
          }
          FUN_012283b0(param_5,0);
          puVar27 = local_28;
        }
        else {
          *param_8 = *param_8 + 0x30;
        }
      }
      else {
        puVar27 = local_28;
        if (iVar23 != 5) {
          if (iVar23 == 6) {
            *param_8 = *param_8 - 0x30;
          }
          else {
            puVar27 = local_28 + iVar23 * 0xc;
          }
        }
      }
    }
  }
  else {
    puVar27[8] = (uint)*(ushort *)(param_5 + 6);
    *param_8 = *param_8 + 0x30;
  }
LAB_0122b1d0:
  if ((param_8[0xc20] != 0) && (puVar27 < (undefined4 *)*param_8)) {
    **(uint **)(param_8[0xc20] + 4) = (uint)puVar27;
    *(int *)(param_8[0xc20] + 4) = *(int *)(param_8[0xc20] + 4) + 4;
  }
  return;
}

// 0122B200  FUN_0122b200  size=28  [run]
void __thiscall FUN_0122b200(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 0122B290  FUN_0122b290  size=10  [run]
void FUN_0122b290(void)

{
  return;
}

// 0122B320  FUN_0122b320  size=463  [run]
void FUN_0122b320(int *param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  puVar2 = (undefined4 *)param_1[0x10];
  fVar1 = (float)puVar2[2];
  FUN_0144a300(*param_1 + 0x40,*puVar2,fVar1 * param_2,param_3);
  FUN_0144a300(param_1[1] + 0x40,*puVar2,fVar1 * param_2,param_3 + 8);
  FUN_01004e90(param_3,param_3 + 8);
  FUN_01006f50(param_3 + 0x10,param_1 + 8);
  FUN_01007050(param_3 + 0x10,param_1 + 0xc);
  *(uint *)((int)param_3 + 0xcc) = param_1[5] ^ 0x80000000;
  iVar10 = *param_1;
  uVar3 = *(undefined4 *)(iVar10 + 0x84);
  uVar4 = *(undefined4 *)(iVar10 + 0x88);
  uVar5 = *(undefined4 *)(iVar10 + 0x8c);
  *(undefined4 *)(param_3 + 0x22) = *(undefined4 *)(iVar10 + 0x80);
  *(undefined4 *)((int)param_3 + 0x114) = uVar3;
  *(undefined4 *)(param_3 + 0x23) = uVar4;
  *(undefined4 *)((int)param_3 + 0x11c) = uVar5;
  local_40 = (float)param_3[2];
  fStack_3c = (float)((ulonglong)param_3[2] >> 0x20);
  fStack_38 = (float)param_3[3];
  local_30 = (float)*param_3;
  fStack_2c = (float)((ulonglong)*param_3 >> 0x20);
  fStack_28 = (float)param_3[1];
  local_50 = (float)param_3[4];
  fVar1 = local_50;
  fStack_4c = (float)((ulonglong)param_3[4] >> 0x20);
  fVar6 = fStack_4c;
  fStack_48 = (float)param_3[5];
  fVar7 = fStack_48;
  fStack_44 = (float)((ulonglong)param_3[5] >> 0x20);
  pfVar9 = (float *)(param_3 + 0x1e);
  piVar8 = param_1 + 0x18;
  iVar10 = 2;
  do {
    local_50 = (float)*(undefined8 *)piVar8;
    fStack_4c = (float)((ulonglong)*(undefined8 *)piVar8 >> 0x20);
    fStack_48 = (float)*(undefined8 *)(piVar8 + 2);
    *pfVar9 = fStack_4c * fStack_2c + local_50 * local_30 + fStack_48 * fStack_28;
    pfVar9[1] = fStack_4c * fStack_3c + local_50 * local_40 + fStack_48 * fStack_38;
    pfVar9[2] = fStack_4c * fVar6 + local_50 * fVar1 + fStack_48 * fVar7;
    pfVar9[3] = fStack_4c * fStack_44 + local_50 * fVar6 + fStack_48 * fStack_44;
    piVar8 = piVar8 + 4;
    pfVar9 = pfVar9 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_01007050(param_3 + 0x10,param_1[1] + 0x80);
  FUN_01006f90(param_3,param_1 + 0x14);
  return;
}

// 0122B4F0  FUN_0122b4f0  size=395  [run]
float10 FUN_0122b4f0(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7,undefined4 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_160 [192];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_1c = param_2[4] * 0.25;
  fVar2 = *param_2;
  local_14 = 0;
  local_18 = param_4;
  do {
    if ((param_6 <= fVar2) || (-local_1c < param_7 - param_6)) break;
    fVar2 = (fVar2 - param_6) / (param_7 - param_6);
    if ((local_14 & 1) == 0) {
      if (0.1 < fVar2) {
        if (0.9 <= fVar2) {
          fVar2 = 0.9;
        }
      }
      else {
        fVar2 = 0.1;
      }
    }
    local_18 = (1.0 - fVar2) * param_4 + fVar2 * param_5;
    FUN_0122b320(param_1,local_18,local_160);
    fVar3 = fStack_94 + (param_3[1] - fStack_8c) * fStack_9c +
            (param_3[2] - fStack_88) * fStack_98 + (*param_3 - local_90) * local_a0;
    fVar2 = *param_2;
    local_30 = ABS(fVar3 - fVar2);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if (local_30 < local_1c) break;
    if (fVar2 <= fVar3) {
      param_4 = local_18;
      param_6 = fVar3;
    }
    else {
      param_5 = local_18;
      param_7 = fVar3;
    }
    local_14 = local_14 + 1;
  } while ((int)local_14 < 10);
  if (local_18 < *param_9) {
    *param_9 = local_18;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar1 = param_3[3];
    param_9[4] = *param_3;
    param_9[5] = fVar2;
    param_9[6] = fVar3;
    param_9[7] = fVar1;
  }
  return (float10)*param_9;
}

// 0122B680  FUN_0122b680  size=839  [run]
void FUN_0122b680(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
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
  undefined1 local_170 [192];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  local_18 = *(int *)(param_1 + 0xc);
  local_1c = 1.0;
  local_14 = *(float *)(param_1 + 0x80);
  local_28 = local_14;
  do {
    if (local_18 == 0) {
      return;
    }
    FUN_0122b320(param_1,local_14,local_170);
    local_24 = local_18;
    pfVar5 = *(float **)(param_1 + 8);
    fVar17 = local_1c - local_14;
    local_30 = *(float *)(param_1 + 0x44) * fVar17;
    local_18 = 0;
    pfVar6 = pfVar5;
    local_2c = fVar17;
    local_20 = local_1c;
    fVar14 = local_80;
    fVar15 = fStack_7c;
    fVar16 = fStack_78;
    fVar11 = local_70;
    fVar12 = fStack_6c;
    fVar13 = fStack_68;
    fVar18 = local_14;
    while (local_24 = local_24 + -1, -1 < local_24) {
      fVar8 = *pfVar5;
      fVar1 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar9 = fStack_a4 + (fVar1 - fStack_9c) * fStack_ac +
              (fVar10 - fStack_98) * fStack_a8 + (fVar8 - local_a0) * local_b0;
      fVar4 = local_20;
      if (fVar9 <= *param_2 + local_30) {
        fVar8 = (((fVar16 * (fVar8 - local_60) - fVar14 * (fVar10 - fStack_58)) - fStack_8c) -
                (fVar13 * (fVar8 - local_50) - fVar11 * (fVar10 - fStack_48))) * fStack_ac +
                (((fVar15 * (fVar10 - fStack_58) - fVar16 * (fVar1 - fStack_5c)) - local_90) -
                (fVar12 * (fVar10 - fStack_48) - fVar13 * (fVar1 - fStack_4c))) * local_b0 +
                (((fVar14 * (fVar1 - fStack_5c) - fVar15 * (fVar8 - local_60)) - fStack_88) -
                (fVar11 * (fVar1 - fStack_4c) - fVar12 * (fVar8 - local_50))) * fStack_a8;
        fVar18 = local_14;
        if ((fVar9 - *param_2) + fVar8 * fVar17 <=
            fVar17 * 0.5 * fVar17 * *(float *)(param_1 + 0x18)) {
          if (*param_2 <= fVar9) {
            uVar2 = *(undefined8 *)pfVar5;
            local_18 = local_18 + 1;
            uVar3 = *(undefined8 *)(pfVar5 + 2);
            fVar14 = pfVar6[1];
            fVar15 = pfVar6[2];
            fVar16 = pfVar6[3];
            *pfVar5 = *pfVar6;
            pfVar5[1] = fVar14;
            pfVar5[2] = fVar15;
            pfVar5[3] = fVar16;
            local_40._0_4_ = (float)uVar2;
            local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
            uStack_38._0_4_ = (float)uVar3;
            uStack_38._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            *pfVar6 = (float)local_40;
            pfVar6[1] = local_40._4_4_;
            pfVar6[2] = (float)uStack_38;
            pfVar6[3] = uStack_38._4_4_;
            pfVar6[3] = fVar9;
            fVar1 = *(float *)(param_1 + 0x1c);
            pfVar6 = pfVar6 + 4;
            fVar10 = (fVar9 - param_2[1]) * 2.0 * fVar1;
            fVar11 = local_70;
            fVar12 = fStack_6c;
            fVar13 = fStack_68;
            fVar14 = local_80;
            fVar15 = fStack_7c;
            fVar16 = fStack_78;
            local_40 = uVar2;
            uStack_38 = uVar3;
            if (fVar10 <= fVar17 * fVar17) {
              fVar10 = SQRT(fVar10);
              if (fVar8 < (float)(undefined *)0x0) {
                fVar8 = -(fVar1 * fVar8);
                if (fVar10 < fVar8) goto LAB_0122b977;
              }
              else {
                fVar8 = fVar1 * fVar8 * 2.0 + fVar10;
LAB_0122b977:
                fVar10 = fVar8;
              }
              if (fVar10 <= fVar17) {
                fVar10 = SQRT((*param_2 - param_2[1]) * 2.0 * fVar1) + fVar10;
                if (fVar10 <= param_2[2]) {
                  fVar10 = param_2[2];
                }
                fVar4 = fVar10 + local_14;
                if (fVar10 + local_14 <= local_20) goto LAB_0122b8a5;
              }
            }
            fVar4 = local_20;
          }
          else if (local_14 == *(float *)(param_1 + 0x80)) {
            *param_3 = local_14;
            fVar8 = pfVar5[1];
            fVar1 = pfVar5[2];
            fVar10 = pfVar5[3];
            param_3[4] = *pfVar5;
            param_3[5] = fVar8;
            param_3[6] = fVar1;
            param_3[7] = fVar10;
            local_1c = local_14;
          }
          else {
            fVar7 = (float10)FUN_0122b4f0(param_1,param_2,pfVar5,local_28,local_14,pfVar5[3],fVar9,
                                          fVar8,param_3);
            local_1c = (float)fVar7;
            fVar11 = local_70;
            fVar12 = fStack_6c;
            fVar13 = fStack_68;
            fVar14 = local_80;
            fVar15 = fStack_7c;
            fVar16 = fStack_78;
            fVar17 = local_2c;
            fVar18 = local_14;
            fVar4 = local_20;
          }
        }
      }
LAB_0122b8a5:
      local_20 = fVar4;
      pfVar5 = pfVar5 + 4;
    }
    if (local_1c < fVar18) {
      return;
    }
    local_14 = local_20;
    local_28 = fVar18;
    if ((fVar18 == local_20) && (local_1c <= fVar18)) {
      return;
    }
  } while( true );
}

// 0122BB20  FUN_0122bb20  size=203  [run]
void FUN_0122bb20(void)

{
  return;
}

// 0122BBF0  FUN_0122bbf0  size=329  [run]
void __fastcall
FUN_0122bbf0(int param_1,int param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float in_XMM3_Da;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (in_XMM3_Da - *(float *)(param_2 + 0x4c)) * *(float *)(param_2 + 0x5c);
  fVar2 = *param_4 -
          (fVar1 * (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x40)) +
          *(float *)(param_2 + 0x40));
  fVar3 = param_4[1] -
          (fVar1 * (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x44)) +
          *(float *)(param_2 + 0x44));
  fVar1 = param_4[2] -
          (fVar1 * (*(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x48)) +
          *(float *)(param_2 + 0x48));
  if (0.0 <= (*(float *)(param_1 + 0x10) * fVar3 - *(float *)(param_1 + 0x14) * fVar2) * param_5[2]
             + (*(float *)(param_1 + 0x18) * fVar2 - *(float *)(param_1 + 0x10) * fVar1) *
               param_5[1] +
               (*(float *)(param_1 + 0x14) * fVar1 - *(float *)(param_1 + 0x18) * fVar3) * *param_5)
  {
    return;
  }
  return;
}

// 0122BD40  FUN_0122bd40  size=240  [run]
void FUN_0122bd40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  LPVOID pvVar6;
  int iVar7;
  int *unaff_ESI;
  uint uVar8;
  float fVar9;
  
  piVar1 = *(int **)*in_EAX;
  iVar2 = ((int *)*in_EAX)[2];
  iVar3 = *(int *)(in_EAX[1] + 8);
  iVar7 = *(int *)in_EAX[1];
  *unaff_ESI = iVar2;
  unaff_ESI[1] = iVar3;
  unaff_ESI[5] = (int)(*(float *)(iVar7 + 0x10) + (float)piVar1[4]);
  iVar7 = in_EAX[0x1d];
  iVar5 = in_EAX[0x1e];
  iVar4 = in_EAX[0x1f];
  unaff_ESI[0x14] = in_EAX[0x1c];
  unaff_ESI[0x15] = iVar7;
  unaff_ESI[0x16] = iVar5;
  unaff_ESI[0x17] = iVar4;
  unaff_ESI[0x10] = in_EAX[3] + 0x50;
  iVar5 = (**(code **)(*piVar1 + 0x2c))();
  unaff_ESI[4] = iVar5;
  unaff_ESI[3] = iVar5;
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = *(int *)((int)pvVar6 + 0xc);
  uVar8 = iVar5 * 0x10 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (*(uint *)((int)pvVar6 + 0x10) < iVar7 + uVar8)) {
    iVar7 = FUN_0100b780(uVar8);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = iVar7 + uVar8;
  }
  unaff_ESI[2] = iVar7;
  (**(code **)(*piVar1 + 0x30))(iVar7);
  fVar9 = *(float *)(iVar2 + 0xa0) * (float)unaff_ESI[0x1b] * (float)unaff_ESI[0x1b] +
          *(float *)(iVar3 + 0xa0) * (float)unaff_ESI[0x1f] * (float)unaff_ESI[0x1f];
  unaff_ESI[6] = (int)fVar9;
  unaff_ESI[7] = (int)(1.0 / (fVar9 + 1.4210855e-14));
  return;
}

// 0122CB40  FUN_0122cb40  size=5180  [run]
void FUN_0122cb40(int *param_1,float param_2,float param_3,float param_4,int param_5,
                 undefined1 (*param_6) [16],int param_7)

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
  int iVar11;
  LPVOID pvVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  int *piVar17;
  int *piVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int *piVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_500 [64];
  uint local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  undefined4 local_4b0;
  int *local_4ac;
  float local_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  undefined2 local_484;
  undefined2 local_474;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float local_3e0 [7];
  undefined2 local_3c4;
  undefined2 local_3b4;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  int *local_310;
  float local_30c;
  float local_308;
  int local_304;
  int local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int local_2d0;
  float local_2cc;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  int iStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  int local_240;
  float *local_23c;
  int local_238;
  int local_234;
  int local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  int local_200;
  int *local_1fc;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  int iStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1b0 [4];
  undefined1 local_1a0 [16];
  float local_190;
  float fStack_18c;
  float fStack_188;
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
  float local_150;
  float fStack_14c;
  float fStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [8];
  float fStack_e8;
  float fStack_e4;
  int local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  int *piStack_b4;
  int *local_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  int *piStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_74;
  float local_70;
  int *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int *local_4c;
  float *local_48;
  float local_44;
  float local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  float local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined2 local_20;
  int *local_1c;
  float local_18;
  char local_12;
  byte local_11;
  
  iVar14 = param_1[3];
  iVar11 = *(int *)(iVar14 + 0x60);
  local_70 = param_3;
  local_74 = param_4;
  local_64 = *(float *)(iVar11 + 0x30) * param_2;
  param_2 = *(float *)(iVar11 + 0x20) * param_2;
  fVar25 = *(float *)(iVar11 + 0x24);
  if (*(float *)(iVar11 + 0x24) < param_2) {
    fVar25 = param_2;
  }
  local_6c = (int *)(*(float *)(iVar14 + 0x5c) * fVar25);
  local_68 = *(float *)(iVar11 + 0x38);
  local_3c = *(int **)*param_1;
  local_28 = (int *)((undefined4 *)*param_1)[2];
  local_1c = *(int **)param_1[1];
  local_44 = (float)((undefined4 *)param_1[1])[2];
  local_238 = 0;
  fStack_1c4 = *(float *)((int)local_44 + 0x5c) * *(float *)(iVar14 + 0x58);
  local_11 = 0;
  local_12 = '\0';
  local_4b0 = 0;
  local_1d0 = fStack_1c4 * *(float *)((int)local_44 + 0x90);
  fStack_1cc = fStack_1c4 * *(float *)((int)local_44 + 0x94);
  fStack_1c8 = fStack_1c4 * *(float *)((int)local_44 + 0x98);
  fStack_1c4 = fStack_1c4 * *(float *)((int)local_44 + 0x9c);
  fStack_1d4 = (float)local_28[0x17] * *(float *)(iVar14 + 0x58);
  local_4bc = (uint)*(byte *)(param_5 + 9);
  local_4c0 = (uint)*(byte *)(param_5 + 8);
  local_4b8 = *(byte *)(param_5 + 10) & 0xf;
  local_4b4 = (uint)(*(byte *)(param_5 + 10) >> 4);
  local_4ac = (int *)0x0;
  local_1e0 = fStack_1d4 * (float)local_28[0x24];
  fStack_1dc = fStack_1d4 * (float)local_28[0x25];
  fStack_1d8 = fStack_1d4 * (float)local_28[0x26];
  fStack_1d4 = fStack_1d4 * (float)local_28[0x27];
  (**(code **)(*local_3c + 0x24))(param_5,local_4c0,&local_4a0);
  (**(code **)(*local_1c + 0x24))(param_5 + local_4c0 * 2,local_4bc,local_3e0);
  piVar18 = *(int **)(*param_6 + 0xc);
  local_40 = local_64 + param_4;
  _local_f0 = ZEXT816(0);
  local_18 = 0.0;
  piVar17 = (int *)0x1;
  piVar31 = piVar18;
  fVar25 = 0.0;
  fVar21 = 0.0;
  _local_a0 = _local_f0;
  if (local_40 < (float)piVar18) {
    do {
      local_30 = 1.0 - local_18;
      if (local_30 <= 0.0) goto LAB_0122df14;
      fVar25 = *(float *)*param_6;
      fVar21 = *(float *)(*param_6 + 4);
      fVar23 = *(float *)(*param_6 + 8);
      fVar16 = fStack_1dc * fVar23 - fStack_1d8 * fVar21;
      fVar20 = fStack_1d8 * fVar25 - local_1e0 * fVar23;
      fVar22 = local_1e0 * fVar21 - fStack_1dc * fVar25;
      fVar16 = fVar16 * fVar16;
      fVar20 = fVar20 * fVar20;
      fVar22 = fVar22 * fVar22;
      fVar24 = fStack_1cc * fVar23 - fStack_1c8 * fVar21;
      fVar26 = fStack_1c8 * fVar25 - local_1d0 * fVar23;
      fVar27 = local_1d0 * fVar21 - fStack_1cc * fVar25;
      auVar28._0_4_ = fVar20 + fVar16 + fVar22;
      auVar28._4_4_ = fVar20 + fVar16 + fVar22;
      auVar28._8_4_ = fVar20 + fVar16 + fVar22;
      auVar28._12_4_ = fVar20 + fVar16 + fVar22;
      auVar33 = rsqrtps(_local_f0,auVar28);
      local_60 = 0.5;
      fStack_5c = 0.5;
      fStack_58 = 0.5;
      fStack_54 = 0.5;
      fVar20 = auVar33._0_4_;
      fVar24 = fVar24 * fVar24;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      auVar29._4_4_ = fVar24;
      auVar29._0_4_ = fVar24;
      auVar29._8_4_ = fVar24;
      auVar29._12_4_ = fVar24;
      auVar33._0_4_ = fVar26 + fVar24 + fVar27;
      auVar33._4_4_ = fVar26 + fVar24 + fVar27;
      auVar33._8_4_ = fVar26 + fVar24 + fVar27;
      auVar33._12_4_ = fVar26 + fVar24 + fVar27;
      auVar29 = rsqrtps(auVar29,auVar33);
      fVar16 = auVar29._0_4_;
      fVar16 = *(float *)((int)local_44 + 0xa0) *
               (float)(~-(uint)(auVar33._0_4_ <= local_f0._0_4_) &
                      (uint)((3.0 - fVar16 * auVar33._0_4_ * fVar16) * fVar16 * 0.5 * auVar33._0_4_)
                      ) +
               (float)local_28[0x28] *
               (float)(~-(uint)(auVar28._0_4_ <= local_f0._0_4_) &
                      (uint)((3.0 - fVar20 * auVar28._0_4_ * fVar20) * fVar20 * 0.5 * auVar28._0_4_)
                      );
      fVar25 = (float)param_1[0x1d] * fVar21 + (float)param_1[0x1c] * fVar25 +
               (float)param_1[0x1e] * fVar23;
      local_4c = (int *)(fVar25 + fVar16);
      if (((float)local_4c <= 0.0) ||
         (param_3 < *(float *)(*param_6 + 0xc) - (float)local_4c * local_30)) goto LAB_0122df14;
      local_2c = (int *)((*(float *)(*param_6 + 0xc) - param_3) / (float)local_4c);
      piVar18 = local_2c;
      if (((float)local_2c < 0.2) && (((local_12 == '\0' && (local_11 != 0)) && (fVar25 < fVar16))))
      {
        if (local_238 == 0) {
          local_a4 = *(int **)*param_1;
          local_240 = ((int *)*param_1)[2];
          local_23c = (float *)((int *)param_1[1])[2];
          local_22c = (float)local_a4[4] + *(float *)(*(int *)param_1[1] + 0x10);
          local_200 = param_1[3] + 0x50;
          local_1f0 = (float)param_1[0x1c];
          fStack_1ec = (float)param_1[0x1d];
          fStack_1e8 = (float)param_1[0x1e];
          iStack_1e4 = param_1[0x1f];
          local_d4 = local_240;
          local_48 = local_23c;
          iVar11 = (**(code **)(*local_a4 + 0x2c))();
          local_234 = iVar11;
          local_230 = iVar11;
          pvVar12 = TlsGetValue(DAT_01f8fc4c);
          iVar14 = *(int *)((int)pvVar12 + 0xc);
          uVar15 = iVar11 * 0x10 + 0x7fU & 0xffffff80;
          if ((*(int *)((int)pvVar12 + 8) < (int)uVar15) ||
             (*(uint *)((int)pvVar12 + 0x10) < iVar14 + uVar15)) {
            iVar14 = FUN_0100b780(uVar15);
          }
          else {
            *(uint *)((int)pvVar12 + 0xc) = iVar14 + uVar15;
          }
          local_238 = iVar14;
          (**(code **)(*local_a4 + 0x30))(iVar14);
          local_228 = *(float *)(local_d4 + 0xa0) * fStack_1d4 * fStack_1d4 +
                      local_48[0x28] * fStack_1c4 * fStack_1c4;
          local_224 = 1.0 / (local_228 + 1.4210855e-14);
          if (local_238 == 0) {
            local_12 = '\x01';
            piVar18 = local_2c;
            goto LAB_0122cfd8;
          }
        }
        local_1c0 = local_18;
        local_1b0[0] = 1.0;
        local_1fc = local_4c;
        FUN_0122b680(&local_240,&local_74,local_1b0);
        piVar17 = (int *)(local_1b0[0] - local_18);
        if ((float)piVar17 < (float)local_2c * 2.0) {
          local_12 = '\x01';
        }
        piVar18 = local_2c;
        if ((float)local_2c <= (float)piVar17) {
          piVar18 = piVar17;
        }
      }
LAB_0122cfd8:
      fVar25 = local_18;
      if (1.0 <= (float)piVar18 + local_18) goto LAB_0122df14;
      if ((float)piVar18 < (float)local_6c) {
        piVar18 = local_6c;
      }
      local_18 = (float)piVar18 + local_18;
      if (1.0 <= local_18) {
        local_18 = 1.0;
      }
      _local_a0 = *param_6;
      iVar14 = param_1[3];
      local_38 = *(int **)(*param_6 + 0xc);
      local_34 = (int *)(*(float *)(iVar14 + 0x58) * local_18);
      local_24 = fVar25;
      FUN_0144a300(local_28 + 0x10,*(undefined4 *)(iVar14 + 0x50),local_34,&local_280);
      FUN_0144a300((int)local_44 + 0x40,*(undefined4 *)(iVar14 + 0x50),local_34,&local_190);
      FUN_01004e90(&local_280,&local_190);
      piVar18 = local_3c;
      FUN_01225e50(local_3c,local_1c,&local_150,&local_90);
      *(float *)*param_6 = fStack_8c * local_270 + local_90 * local_280 + fStack_88 * local_260;
      *(float *)(*param_6 + 4) =
           fStack_8c * fStack_26c + local_90 * fStack_27c + fStack_88 * fStack_25c;
      *(float *)(*param_6 + 8) =
           fStack_8c * fStack_268 + local_90 * fStack_278 + fStack_88 * fStack_258;
      *(float *)(*param_6 + 0xc) =
           fStack_8c * fStack_264 + local_90 * fStack_274 + fStack_88 * fStack_254;
      fVar25 = local_4a0;
      fVar21 = fStack_49c;
      fVar23 = fStack_498;
      if ((local_4c0 != 1) &&
         (fVar25 = local_390, fVar21 = fStack_38c, fVar23 = fStack_388, local_4bc == 1)) {
        fVar25 = fStack_84 * local_90 + local_420;
        fVar21 = fStack_84 * fStack_8c + fStack_41c;
        fVar23 = fStack_84 * fStack_88 + fStack_418;
      }
      fVar25 = (fVar25 - fStack_84 * local_90) - local_120;
      fVar21 = (fVar21 - fStack_84 * fStack_8c) - fStack_11c;
      fVar23 = (fVar23 - fStack_84 * fStack_88) - fStack_118;
      local_210 = fStack_14c * fVar21 + fVar25 * local_150 + fStack_148 * fVar23;
      fStack_20c = fStack_13c * fVar21 + fVar25 * local_140 + fStack_138 * fVar23;
      fStack_208 = fStack_12c * fVar21 + fVar25 * local_130 + fStack_128 * fVar23;
      fStack_204 = fStack_124 * fVar21 + fVar25 * fStack_12c + fStack_124 * fVar23;
      *(float *)(*param_6 + 0xc) = (fStack_84 - (float)piVar18[4]) - (float)local_1c[4];
      fVar25 = *(float *)*param_6;
      fVar21 = *(float *)(*param_6 + 4);
      fVar23 = *(float *)(*param_6 + 8);
      piVar18 = *(int **)(*param_6 + 0xc);
      local_220 = fStack_18c * fVar21 + fVar25 * local_190 + fStack_188 * fVar23;
      fStack_21c = fStack_17c * fVar21 + fVar25 * local_180 + fStack_178 * fVar23;
      fStack_218 = fStack_16c * fVar21 + fVar25 * local_170 + fStack_168 * fVar23;
      fStack_214 = fStack_164 * fVar21 + fVar25 * fStack_16c + fStack_164 * fVar23;
      local_11 = 1;
      piVar17 = local_4ac;
      piVar31 = local_38;
      fVar25 = local_24;
      fVar21 = local_18;
    } while (local_40 < (float)piVar18);
  }
  local_40 = *(float *)(*(int *)*param_1 + 0x10) + *(float *)(*(int *)param_1[1] + 0x10);
  local_4c = (int *)(((float)piVar18 - (float)piVar31) / (fVar21 - fVar25));
  local_24 = -local_64;
  local_30 = 0.0;
  local_44 = fVar25;
  local_3c = piVar17;
  local_2c = piVar31;
  local_28 = piVar18;
  local_1c = (int *)fVar21;
  do {
    fVar25 = (float)local_28 - (float)local_2c;
    if (local_24 < fVar25) {
      fVar25 = 0.5;
      local_1c = (int *)local_44;
    }
    local_90 = ABS((float)local_28 - local_74);
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    if (local_64 <= local_90) {
      fVar25 = (param_4 - (float)local_2c) / fVar25;
      local_11 = 0;
      if (0.1 < fVar25) {
        if (0.9 <= fVar25) {
          fVar25 = 0.9;
        }
      }
      else {
        fVar25 = 0.1;
      }
      local_18 = (1.0 - fVar25) * local_44 + fVar25 * (float)local_1c;
    }
    else {
      local_11 = 1;
      local_3c = (int *)0x0;
      local_18 = (float)local_1c;
    }
    iVar14 = param_1[3];
    local_38 = (int *)(*(float *)(iVar14 + 0x58) * local_18);
    FUN_0144a300(*(int *)(*param_1 + 8) + 0x40,*(undefined4 *)(iVar14 + 0x50),local_38,&local_150);
    FUN_0144a300(*(int *)(param_1[1] + 8) + 0x40,*(undefined4 *)(iVar14 + 0x50),local_38,local_500);
    FUN_01004e90(&local_150,local_500);
    fVar10 = fStack_244;
    fVar9 = fStack_248;
    fVar8 = fStack_24c;
    fVar7 = local_250;
    fVar6 = fStack_254;
    fVar5 = fStack_258;
    fVar4 = fStack_25c;
    fVar27 = local_260;
    fVar26 = fStack_264;
    fVar24 = fStack_268;
    fVar22 = fStack_26c;
    fVar20 = local_270;
    fVar16 = fStack_274;
    fVar23 = fStack_278;
    fVar21 = fStack_27c;
    fVar25 = local_280;
    if (local_3c == (int *)0x0) {
      iVar14 = local_4bc - 1;
      pfVar13 = local_3e0 + iVar14 * 4;
      do {
        fVar1 = *pfVar13;
        fVar2 = pfVar13[1];
        fVar3 = pfVar13[2];
        pfVar13[-0x10] = fVar2 * fVar20 + fVar1 * fVar25 + fVar3 * fVar27 + fVar7;
        pfVar13[-0xf] = fVar2 * fVar22 + fVar1 * fVar21 + fVar3 * fVar4 + fVar8;
        pfVar13[-0xe] = fVar2 * fVar24 + fVar1 * fVar23 + fVar3 * fVar5 + fVar9;
        pfVar13[-0xd] = fVar2 * fVar26 + fVar1 * fVar16 + fVar3 * fVar6 + fVar10;
        pfVar13 = pfVar13 + -4;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      local_60 = fStack_14c * (float)local_a0._4_4_ + (float)local_a0._0_4_ * local_150 +
                 fStack_98 * fStack_148;
      fStack_5c = fStack_13c * (float)local_a0._4_4_ + (float)local_a0._0_4_ * local_140 +
                  fStack_98 * fStack_138;
      fStack_58 = fStack_12c * (float)local_a0._4_4_ + (float)local_a0._0_4_ * local_130 +
                  fStack_98 * fStack_128;
      fStack_54 = fStack_124 * (float)local_a0._4_4_ + (float)local_a0._0_4_ * fStack_12c +
                  fStack_98 * fStack_124;
      FUN_012270e0(&local_4a0,&local_420,local_4c0,local_4bc,&local_60,&local_100,&local_110);
    }
    else {
      FUN_01225e50(*(undefined4 *)*param_1,*(undefined4 *)param_1[1],&local_280,&local_110);
      if (local_4c0 == 1) {
        local_100 = local_4a0;
        fStack_fc = fStack_49c;
        fStack_f8 = fStack_498;
        fStack_f4 = fStack_494;
      }
      else if (local_4bc == 1) {
        local_100 = fStack_104 * local_110 + local_420;
        fStack_fc = fStack_104 * fStack_10c + fStack_41c;
        fStack_f8 = fStack_104 * fStack_108 + fStack_418;
        fStack_f4 = fStack_104 * fStack_104 + fStack_414;
      }
      else {
        local_100 = local_390;
        fStack_fc = fStack_38c;
        fStack_f8 = fStack_388;
        fStack_f4 = fStack_384;
      }
    }
    local_34 = (int *)(fStack_104 - local_40);
    local_90 = ABS((float)local_34 - local_74);
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    if (((local_90 < local_64) || (local_11 != 0)) || (local_44 == (float)local_1c)) break;
    if (param_4 <= (float)local_34) {
      local_44 = local_18;
      local_2c = local_34;
    }
    else {
      local_1c = (int *)local_18;
      local_28 = local_34;
    }
    local_30 = (float)((int)local_30 + 1);
  } while ((int)local_30 < 10);
  iVar14 = param_1[3];
  fVar25 = *(float *)(iVar14 + 0x58) * local_18;
  local_48 = (float *)(iVar14 + 0x50);
  if (fVar25 <= local_68) {
    fVar25 = local_68;
  }
  local_1c = (int *)(fVar25 + *local_48);
  if ((*(float *)(param_7 + 0x3030) <= (float)local_1c) ||
     (*(float *)(iVar14 + 0x54) - local_68 <= (float)local_1c)) goto LAB_0122df14;
  piVar18 = *(int **)*param_1;
  FUN_01007050(&local_150,&local_100);
  FUN_01006f50(&local_150,&local_110);
  piVar17 = (int *)param_1[1];
  fVar25 = -(float)piVar18[4] - (float)local_34;
  local_2c = (int *)0x2;
  local_d0 = fVar25 * local_c0 + local_320;
  fStack_cc = fVar25 * fStack_bc + fStack_31c;
  fStack_c8 = fVar25 * fStack_b8 + fStack_318;
  fStack_c4 = fVar25 * (float)piStack_b4 + fStack_314;
  piStack_b4 = local_34;
  local_a0._4_4_ = fStack_bc;
  local_a0._0_4_ = local_c0;
  fStack_98 = fStack_b8;
  piStack_94 = local_34;
  if (*(char *)(*piVar17 + 8) == '\x02') {
    local_11 = (byte)local_4bc;
    if ((byte)local_4bc < 2) {
      local_3c4 = 0xffff;
    }
    local_24 = (float)CONCAT22(local_3c4,SUB42(local_3e0[3],0));
    if ((byte)local_4bc < 3) {
      local_20 = 0xffff;
    }
    else {
      local_20 = local_3b4;
    }
    local_2c = (int *)(**(code **)(*(int *)*piVar17 + 0x34))
                                (&local_24,&local_11,&local_d0,local_500,piVar18,&local_150,local_a0
                                );
    local_c0 = (float)local_a0._0_4_;
    fStack_bc = (float)local_a0._4_4_;
    fStack_b8 = fStack_98;
    piStack_b4 = piStack_94;
LAB_0122d8f3:
    if ((local_2c == (int *)0x0) && (*(char *)(*(int *)(param_1[3] + 0x60) + 0x3e) != '\0'))
    goto LAB_0122df14;
  }
  else if (*(char *)(*(int *)*param_1 + 8) == '\x02') {
    local_11 = (byte)local_4c0;
    if ((byte)local_4c0 < 2) {
      local_484 = 0xffff;
    }
    local_24 = (float)CONCAT22(local_484,fStack_494._0_2_);
    if ((byte)local_4c0 < 3) {
      local_20 = 0xffff;
    }
    else {
      local_20 = local_474;
    }
    local_60 = (float)local_34 * local_c0 + local_d0;
    fStack_5c = (float)local_34 * fStack_bc + fStack_cc;
    fStack_58 = (float)local_34 * fStack_b8 + fStack_c8;
    fStack_54 = (float)local_34 * (float)local_34 + fStack_c4;
    local_a0 = (undefined1  [8])(CONCAT44(fStack_bc,local_c0) ^ 0x8000000080000000);
    fStack_98 = -fStack_b8;
    local_2c = (int *)(**(code **)(*piVar18 + 0x34))
                                (&local_24,&local_11,&local_60,&local_150,*piVar17,local_500,
                                 local_a0);
    local_c0 = -(float)local_a0._0_4_;
    fStack_bc = -(float)local_a0._4_4_;
    fStack_b8 = -fStack_98;
    local_a0 = (undefined1  [8])(local_a0 ^ 0x8000000080000000);
    fStack_98 = fStack_b8;
    piStack_b4 = piStack_94;
    goto LAB_0122d8f3;
  }
  iVar14 = ((int *)*param_1)[2];
  fVar25 = ((float)local_1c - *(float *)(iVar14 + 0x4c)) * *(float *)(iVar14 + 0x5c);
  iVar11 = *(int *)(param_1[1] + 8);
  fVar23 = local_d0 -
           (fVar25 * (*(float *)(iVar14 + 0x50) - *(float *)(iVar14 + 0x40)) +
           *(float *)(iVar14 + 0x40));
  fVar16 = fStack_cc -
           (fVar25 * (*(float *)(iVar14 + 0x54) - *(float *)(iVar14 + 0x44)) +
           *(float *)(iVar14 + 0x44));
  fVar20 = fStack_c8 -
           (fVar25 * (*(float *)(iVar14 + 0x58) - *(float *)(iVar14 + 0x48)) +
           *(float *)(iVar14 + 0x48));
  fVar21 = ((float)local_1c - *(float *)(iVar11 + 0x4c)) * *(float *)(iVar11 + 0x5c);
  auVar34._4_4_ = fVar23;
  auVar34._0_4_ = fVar20;
  auVar34._8_4_ = fVar16;
  auVar34._12_4_ =
       fStack_c4 -
       (fVar25 * (*(float *)(iVar14 + 0x5c) - *(float *)(iVar14 + 0x4c)) + *(float *)(iVar14 + 0x4c)
       );
  fVar25 = local_d0 -
           (fVar21 * (*(float *)(iVar11 + 0x50) - *(float *)(iVar11 + 0x40)) +
           *(float *)(iVar11 + 0x40));
  fVar22 = fStack_cc -
           (fVar21 * (*(float *)(iVar11 + 0x54) - *(float *)(iVar11 + 0x44)) +
           *(float *)(iVar11 + 0x44));
  fVar21 = fStack_c8 -
           (fVar21 * (*(float *)(iVar11 + 0x58) - *(float *)(iVar11 + 0x48)) +
           *(float *)(iVar11 + 0x48));
  local_28 = (int *)((((local_1e0 * fVar16 - fStack_1dc * fVar23) + -(float)param_1[0x1e]) -
                     (local_1d0 * fVar22 - fStack_1cc * fVar25)) * fStack_b8 +
                    (((fStack_1d8 * fVar23 - local_1e0 * fVar20) + -(float)param_1[0x1d]) -
                    (fStack_1c8 * fVar25 - local_1d0 * fVar21)) * fStack_bc +
                    (((fStack_1dc * fVar20 - fStack_1d8 * fVar16) + -(float)param_1[0x1c]) -
                    (fStack_1cc * fVar21 - fStack_1c8 * fVar22)) * local_c0);
  if ((local_2c == (int *)0x1) && (-1.1920929e-07 < (float)local_28)) {
    local_290 = local_18;
    fStack_294 = *(float *)(param_1[3] + 0x58);
    fStack_2a4 = *(float *)(iVar14 + 0x5c) * fStack_294;
    local_2b0 = fStack_2a4 * *(float *)(iVar14 + 0x90);
    fStack_2ac = fStack_2a4 * *(float *)(iVar14 + 0x94);
    fStack_2a8 = fStack_2a4 * *(float *)(iVar14 + 0x98);
    fStack_2a4 = fStack_2a4 * *(float *)(iVar14 + 0x9c);
    fStack_294 = *(float *)(iVar11 + 0x5c) * fStack_294;
    local_2a0 = *(float *)(iVar11 + 0x90) * fStack_294;
    fStack_29c = *(float *)(iVar11 + 0x94) * fStack_294;
    fStack_298 = *(float *)(iVar11 + 0x98) * fStack_294;
    fStack_294 = *(float *)(iVar11 + 0x9c) * fStack_294;
    fVar25 = fStack_2ac * fStack_b8 - fStack_2a8 * fStack_bc;
    fVar21 = fStack_2a8 * local_c0 - local_2b0 * fStack_b8;
    fVar23 = local_2b0 * fStack_bc - fStack_2ac * local_c0;
    fVar25 = fVar25 * fVar25;
    fVar21 = fVar21 * fVar21;
    fVar23 = fVar23 * fVar23;
    fVar16 = fStack_29c * fStack_b8 - fStack_298 * fStack_bc;
    fVar20 = fStack_298 * local_c0 - local_2a0 * fStack_b8;
    fVar22 = local_2a0 * fStack_bc - fStack_29c * local_c0;
    auVar30._0_4_ = fVar21 + fVar25 + fVar23;
    auVar30._4_4_ = fVar21 + fVar25 + fVar23;
    auVar30._8_4_ = fVar21 + fVar25 + fVar23;
    auVar30._12_4_ = fVar21 + fVar25 + fVar23;
    local_60 = 0.5;
    fStack_5c = 0.5;
    fStack_58 = 0.5;
    fStack_54 = 0.5;
    auVar33 = rsqrtps(auVar34,auVar30);
    fVar21 = auVar33._0_4_;
    fVar16 = fVar16 * fVar16;
    fVar20 = fVar20 * fVar20;
    fVar22 = fVar22 * fVar22;
    auVar32._4_4_ = fVar16;
    auVar32._0_4_ = fVar16;
    auVar32._8_4_ = fVar16;
    auVar32._12_4_ = fVar16;
    auVar19._0_4_ = fVar20 + fVar16 + fVar22;
    auVar19._4_4_ = fVar20 + fVar16 + fVar22;
    auVar19._8_4_ = fVar20 + fVar16 + fVar22;
    auVar19._12_4_ = fVar20 + fVar16 + fVar22;
    auVar33 = rsqrtps(auVar32,auVar19);
    fVar25 = auVar33._0_4_;
    local_2c0 = (float)param_1[0x1c];
    fStack_2bc = (float)param_1[0x1d];
    fStack_2b8 = (float)param_1[0x1e];
    iStack_2b4 = param_1[0x1f];
    local_2cc = *(float *)(iVar11 + 0xa0) *
                (float)(~-(uint)(auVar19._0_4_ <= (float)local_f0._0_4_) &
                       (uint)((3.0 - fVar25 * auVar19._0_4_ * fVar25) * fVar25 * 0.5 * auVar19._0_4_
                             )) +
                *(float *)(iVar14 + 0xa0) *
                (float)(~-(uint)(auVar30._0_4_ <= (float)local_f0._0_4_) &
                       (uint)((3.0 - fVar21 * auVar30._0_4_ * fVar21) * fVar21 * 0.5 * auVar30._0_4_
                             )) +
                fStack_b8 * fStack_2b8 + fStack_bc * fStack_2bc + local_c0 * local_2c0;
    local_38 = *(int **)*param_1;
    local_24 = *(float *)param_1[1];
    local_30c = ((float *)param_1[1])[2];
    local_310 = *(int **)(*param_1 + 8);
    local_2fc = *(float *)((int)local_24 + 0x10) + (float)local_38[4];
    local_2d0 = param_1[3] + 0x50;
    local_40 = local_30c;
    local_34 = local_310;
    iVar14 = (**(code **)(*local_38 + 0x2c))();
    local_304 = iVar14;
    local_300 = iVar14;
    pvVar12 = TlsGetValue(DAT_01f8fc4c);
    local_308 = *(float *)((int)pvVar12 + 0xc);
    uVar15 = iVar14 * 0x10 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar12 + 8) < (int)uVar15) ||
       (*(uint *)((int)pvVar12 + 0x10) < uVar15 + (int)local_308)) {
      local_308 = (float)FUN_0100b780(uVar15);
    }
    else {
      *(uint *)((int)pvVar12 + 0xc) = uVar15 + (int)local_308;
    }
    (**(code **)(*local_38 + 0x30))(local_308);
    local_2f8 = *(float *)((int)local_40 + 0xa0) * fStack_294 * fStack_294 +
                (float)local_34[0x28] * fStack_2a4 * fStack_2a4;
    local_2f4 = 1.0 / (local_2f8 + 1.4210855e-14);
    FUN_01006f90(local_500,&local_c0);
    local_2e0 = local_3e0[0];
    uStack_2dc = local_3e0[1];
    uStack_2d8 = local_3e0[2];
    uStack_2d4 = local_3e0[3];
    if (local_308 != 0.0) {
      local_1b0[0] = 1.0;
      FUN_0122b680(&local_310,&local_74,local_1b0);
      iVar14 = local_300;
      local_30 = local_308;
      pvVar12 = TlsGetValue(DAT_01f8fc4c);
      uVar15 = iVar14 * 0x10 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar12 + 8) < (int)uVar15) ||
          (uVar15 + (int)local_30 != *(int *)((int)pvVar12 + 0xc))) ||
         (*(float *)((int)pvVar12 + 0x14) == local_30)) {
        FUN_0100b9b0(local_30,uVar15);
      }
      else {
        *(float *)((int)pvVar12 + 0xc) = local_30;
      }
      if (local_1b0[0] < 1.0) {
        FUN_01007050(&local_150,local_1a0);
        local_d0 = local_60;
        fStack_cc = fStack_5c;
        fStack_c8 = fStack_58;
        fStack_c4 = fStack_54;
      }
    }
  }
  piVar18 = local_28;
  if ((float)local_4c < (float)local_28) {
    piVar18 = (int *)((float)local_28 * 1.2);
    piVar17 = local_4c;
    if ((float)local_4c <= (float)piVar18) {
      FUN_0122bbf0(*(undefined4 *)(*param_1 + 8),&local_d0,&local_c0,param_1 + 0x1c);
      piVar17 = (int *)0x0;
      if ((float)piVar18 <= 0.0) goto LAB_0122ddaa;
    }
    piVar18 = piVar17;
  }
LAB_0122ddaa:
  local_28 = (int *)(local_48[3] * (float)piVar18);
  fStack_16c = (float)local_f0._4_4_;
  fStack_168 = fStack_e8;
  fStack_164 = fStack_e4;
  local_180 = (float)local_f0._0_4_;
  fStack_17c = (float)local_f0._4_4_;
  fStack_178 = fStack_e8;
  fStack_174 = fStack_e4;
  local_160 = (float)local_f0._0_4_;
  fStack_15c = (float)local_f0._4_4_;
  fStack_158 = fStack_e8;
  fStack_154 = fStack_e4;
  local_170 = 321.0;
  FUN_01224a40(&local_90);
  iVar14 = (**(code **)(*(int *)param_1[4] + 0x1c))
                     (*param_1,param_1[1],param_1[3],param_7,local_1c,&local_d0,&local_90,&local_28,
                      &local_180);
  if (iVar14 == 0) {
    if (*(float *)(param_7 + 0x3030) != 3.40282e+38) {
      (**(code **)(*(int *)param_1[4] + 0x20))(*(undefined4 *)(param_7 + 4),param_7 + 0x3050);
    }
    *(int **)(param_7 + 0x3034) = local_28;
    *(float *)(param_7 + 0x3010) = local_d0;
    *(float *)(param_7 + 0x3014) = fStack_cc;
    *(float *)(param_7 + 0x3018) = fStack_c8;
    *(float *)(param_7 + 0x301c) = fStack_c4;
    *(float *)(param_7 + 0x3020) = local_c0;
    *(float *)(param_7 + 0x3024) = fStack_bc;
    *(float *)(param_7 + 0x3028) = fStack_b8;
    *(int **)(param_7 + 0x302c) = piStack_b4;
    *(int **)(param_7 + 0x3030) = local_1c;
    *(ulonglong *)(param_7 + 0x3050) = CONCAT44(fStack_17c,local_180);
    *(ulonglong *)(param_7 + 0x3058) = CONCAT44(fStack_174,fStack_178);
    *(ulonglong *)(param_7 + 0x3060) = CONCAT44(fStack_16c,local_170);
    *(ulonglong *)(param_7 + 0x3068) = CONCAT44(fStack_164,fStack_168);
    *(ulonglong *)(param_7 + 0x3070) = CONCAT44(fStack_15c,local_160);
    *(ulonglong *)(param_7 + 0x3078) = CONCAT44(fStack_154,fStack_158);
    *(ulonglong *)(param_7 + 0x3040) = CONCAT44(fStack_8c,local_90);
    *(ulonglong *)(param_7 + 0x3048) = CONCAT44(fStack_84,fStack_88);
  }
LAB_0122df14:
  iVar11 = local_230;
  iVar14 = local_238;
  if (local_238 != 0) {
    pvVar12 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = iVar11 * 0x10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar12 + 8) < (int)uVar15) ||
        (uVar15 + iVar14 != *(int *)((int)pvVar12 + 0xc))) ||
       (*(int *)((int)pvVar12 + 0x14) == iVar14)) {
      FUN_0100b9b0(iVar14,uVar15);
    }
    else {
      *(int *)((int)pvVar12 + 0xc) = iVar14;
    }
  }
  if (local_4ac != (int *)0x0) {
    FUN_01224a40(param_5);
  }
  return;
}

// 0122DF90  FUN_0122df90  size=12  [run]
void __thiscall FUN_0122df90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0122DFB0  FUN_0122dfb0  size=12  [run]
void __thiscall FUN_0122dfb0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0122DFD0  FUN_0122dfd0  size=68  [run]
void __thiscall FUN_0122dfd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return;
}

// 0122E020  FUN_0122e020  size=65  [run]
void FUN_0122e020(int param_1,int param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x5c) * param_3;
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = *(float *)(param_1 + 0x98);
  fVar3 = *(float *)(param_1 + 0x9c);
  *param_4 = fVar4 * *(float *)(param_1 + 0x90);
  param_4[1] = fVar4 * fVar1;
  param_4[2] = fVar4 * fVar2;
  param_4[3] = fVar4 * fVar3;
  param_3 = *(float *)(param_2 + 0x5c) * param_3;
  fVar1 = *(float *)(param_2 + 0x94);
  fVar2 = *(float *)(param_2 + 0x98);
  fVar3 = *(float *)(param_2 + 0x9c);
  *param_5 = param_3 * *(float *)(param_2 + 0x90);
  param_5[1] = param_3 * fVar1;
  param_5[2] = param_3 * fVar2;
  param_5[3] = param_3 * fVar3;
  return;
}

// 0122E080  FUN_0122e080  size=46  [run]
void FUN_0122e080(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_012270e0(param_1 + 8,param_1 + 0x28,*param_1,param_1[1],param_2,param_3,param_4);
  return;
}

// 0122E0D0  FUN_0122e0d0  size=107  [run]
void __thiscall FUN_0122e0d0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*param_1 == 1) {
    fVar1 = (float)param_1[9];
    fVar2 = (float)param_1[10];
    fVar3 = (float)param_1[0xb];
    *param_3 = (float)param_1[8];
    param_3[1] = fVar1;
    param_3[2] = fVar2;
    param_3[3] = fVar3;
    return;
  }
  if (param_1[1] == 1) {
    fVar1 = (float)param_1[0x28];
    fVar2 = (float)param_1[0x29];
    fVar3 = (float)param_1[0x2a];
    fVar4 = (float)param_1[0x2b];
    *param_3 = fVar1;
    param_3[1] = fVar2;
    param_3[2] = fVar3;
    param_3[3] = fVar4;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3];
    *param_3 = fVar7 * *param_2 + fVar1;
    param_3[1] = fVar7 * fVar5 + fVar2;
    param_3[2] = fVar7 * fVar6 + fVar3;
    param_3[3] = fVar7 * fVar7 + fVar4;
    return;
  }
  fVar1 = (float)param_1[0x4d];
  fVar2 = (float)param_1[0x4e];
  fVar3 = (float)param_1[0x4f];
  *param_3 = (float)param_1[0x4c];
  param_3[1] = fVar1;
  param_3[2] = fVar2;
  param_3[3] = fVar3;
  return;
}

// 0122E140  FUN_0122e140  size=9  [run]
void FUN_0122e140(void)

{
  FUN_0112b1d0();
  return;
}

// 0122E1A0  FUN_0122e1a0  size=35  [run]
int FUN_0122e1a0(void)

{
  int in_EAX;
  
  return in_EAX * 0x3e39b193;
}

// 0122E200  FUN_0122e200  size=282  [run]
void __thiscall FUN_0122e200(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  float fVar19;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  (**(code **)(*(int *)param_1[0x15] + 0x20))(param_2,param_3 + 4);
  uVar1 = *(undefined8 *)param_1;
  fVar17 = -*param_2;
  fVar18 = -param_2[1];
  fVar19 = -param_2[2];
  uStack_18 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  local_20._0_4_ = (float)uVar1;
  local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 10);
  local_30._0_4_ = (float)uVar2;
  local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_40._0_4_ = (float)uVar3;
  local_40._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  uStack_38._0_4_ = (float)uVar4;
  uStack_38._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  local_50 = fVar18 * local_20._4_4_ + fVar17 * (float)local_20 + (float)uStack_18 * fVar19;
  fStack_4c = fVar18 * local_30._4_4_ + fVar17 * (float)local_30 + (float)uStack_28 * fVar19;
  fStack_48 = fVar18 * local_40._4_4_ + fVar17 * (float)local_40 + (float)uStack_38 * fVar19;
  fStack_44 = fVar18 * uStack_38._4_4_ + fVar17 * local_40._4_4_ + uStack_38._4_4_ * fVar19;
  local_40 = uVar3;
  uStack_38 = uVar4;
  local_30 = uVar2;
  local_20 = uVar1;
  (**(code **)(*(int *)param_1[0x16] + 0x20))(&local_50,param_3 + 8);
  fVar17 = param_3[8];
  fVar18 = param_3[9];
  fVar19 = param_3[10];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = param_1[7];
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  fVar11 = param_1[9];
  fVar12 = param_1[10];
  fVar13 = param_1[0xb];
  fVar14 = param_1[0xd];
  fVar15 = param_1[0xe];
  fVar16 = param_1[0xf];
  *param_3 = param_3[4] -
             (fVar18 * param_1[4] + fVar17 * *param_1 + fVar19 * param_1[8] + param_1[0xc]);
  param_3[1] = param_3[5] - (fVar18 * fVar5 + fVar17 * fVar8 + fVar19 * fVar11 + fVar14);
  param_3[2] = param_3[6] - (fVar18 * fVar6 + fVar17 * fVar9 + fVar19 * fVar12 + fVar15);
  param_3[3] = param_3[7] - (fVar18 * fVar7 + fVar17 * fVar10 + fVar19 * fVar13 + fVar16);
  return;
}

// 0122E320  FUN_0122e320  size=389  [run]
void __thiscall FUN_0122e320(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
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
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  local_14 = 0;
  do {
    puVar1 = (undefined4 *)param_3[4];
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    puVar2 = *(undefined4 **)(param_1 + 0x68);
    *puVar2 = *puVar1;
    puVar2[1] = uVar17;
    puVar2[2] = uVar18;
    puVar2[3] = uVar19;
    puVar1 = (undefined4 *)param_3[8];
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    iVar3 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(iVar3 + 0x10) = *puVar1;
    *(undefined4 *)(iVar3 + 0x14) = uVar17;
    *(undefined4 *)(iVar3 + 0x18) = uVar18;
    *(undefined4 *)(iVar3 + 0x1c) = uVar19;
    puVar1 = (undefined4 *)param_3[0xc];
    iVar3 = *(int *)(param_1 + 0x68);
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    *(undefined4 *)(iVar3 + 0x20) = *puVar1;
    *(undefined4 *)(iVar3 + 0x24) = uVar17;
    *(undefined4 *)(iVar3 + 0x28) = uVar18;
    *(undefined4 *)(iVar3 + 0x2c) = uVar19;
    iVar3 = *(int *)(param_1 + 0x68);
    FUN_0112b1d0(&DAT_01701b10,iVar3,iVar3 + 0x10,iVar3 + 0x20,&local_30);
    if (((0.0 <= local_30) && (0.0 <= fStack_2c)) && (0.0 <= fStack_28)) break;
    param_3 = (uint *)FUN_0112a770(param_3);
    local_14 = local_14 + 1;
  } while (local_14 < 10);
  uVar4 = param_3[4];
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  *puVar1 = *(undefined4 *)(uVar4 + 0x10);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  puVar1 = *(undefined4 **)(param_1 + 100);
  *puVar1 = *(undefined4 *)(uVar4 + 0x20);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  uVar4 = param_3[8];
  iVar3 = *(int *)(param_1 + 0x60);
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = uVar17;
  *(undefined4 *)(iVar3 + 0x18) = uVar18;
  *(undefined4 *)(iVar3 + 0x1c) = uVar19;
  iVar3 = *(int *)(param_1 + 100);
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(iVar3 + 0x14) = uVar17;
  *(undefined4 *)(iVar3 + 0x18) = uVar18;
  *(undefined4 *)(iVar3 + 0x1c) = uVar19;
  uVar4 = param_3[0xc];
  iVar3 = *(int *)(param_1 + 0x60);
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined4 *)(iVar3 + 0x24) = uVar17;
  *(undefined4 *)(iVar3 + 0x28) = uVar18;
  *(undefined4 *)(iVar3 + 0x2c) = uVar19;
  iVar3 = *(int *)(param_1 + 100);
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(iVar3 + 0x24) = uVar17;
  *(undefined4 *)(iVar3 + 0x28) = uVar18;
  *(undefined4 *)(iVar3 + 0x2c) = uVar19;
  *(undefined4 *)(param_1 + 0x6c) = 3;
  pfVar5 = *(float **)(param_1 + 0x60);
  fVar6 = pfVar5[5];
  fVar7 = pfVar5[6];
  fVar8 = pfVar5[7];
  fVar9 = pfVar5[1];
  fVar10 = pfVar5[2];
  fVar11 = pfVar5[3];
  fVar12 = pfVar5[9];
  fVar13 = pfVar5[10];
  fVar14 = pfVar5[0xb];
  param_4[4] = (uint)(fStack_2c * pfVar5[4] + local_30 * *pfVar5 + fStack_28 * pfVar5[8]);
  param_4[5] = (uint)(fStack_2c * fVar6 + local_30 * fVar9 + fStack_28 * fVar12);
  param_4[6] = (uint)(fStack_2c * fVar7 + local_30 * fVar10 + fStack_28 * fVar13);
  param_4[7] = (uint)(fStack_2c * fVar8 + local_30 * fVar11 + fStack_28 * fVar14);
  param_4[8] = param_3[0x10] ^ 0x80000000;
  uVar4 = param_3[1];
  uVar15 = param_3[2];
  uVar16 = param_3[3];
  *param_4 = *param_3 ^ 0x80000000;
  param_4[1] = uVar4 ^ 0x80000000;
  param_4[2] = uVar15 ^ 0x80000000;
  param_4[3] = uVar16 ^ 0x80000000;
  return;
}

// 0122E4B0  FUN_0122e4b0  size=216  [run]
void FUN_0122e4b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = -*param_1;
  fStack_1c = -param_1[1];
  fStack_18 = -param_1[2];
  fStack_14 = -param_1[3];
  FUN_0122e200(param_1,&local_60);
  FUN_0122e200(&local_20,param_3);
  fVar1 = (fStack_5c - param_2[1]) * param_1[1] + (local_60 - *param_2) * *param_1 +
          (fStack_58 - param_2[2]) * param_1[2];
  fVar2 = (param_3[1] - param_2[1]) * fStack_1c + (*param_3 - *param_2) * local_20 +
          (param_3[2] - param_2[2]) * fStack_18;
  if (fVar2 <= fVar1) {
    *param_3 = local_60;
    param_3[1] = fStack_5c;
    param_3[2] = fStack_58;
    param_3[3] = fStack_54;
    param_3[4] = local_50;
    param_3[5] = fStack_4c;
    param_3[6] = fStack_48;
    param_3[7] = fStack_44;
    param_3[8] = local_40;
    param_3[9] = fStack_3c;
    param_3[10] = fStack_38;
    param_3[0xb] = fStack_34;
    param_3[0xc] = local_30;
    *param_4 = fVar1;
    return;
  }
  *param_4 = fVar2;
  return;
}

// 0122E590  FUN_0122e590  size=810  [run]
undefined4 FUN_0122e590(int param_1,int param_2,float *param_3,undefined4 *param_4)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
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
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  int local_200 [100];
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
  int *local_30;
  int local_2c;
  int *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pfVar2 = *(float **)(param_2 + 0x10);
  pfVar3 = *(float **)(param_2 + 0x30);
  local_50 = *param_3;
  fStack_4c = param_3[1];
  fStack_48 = param_3[2];
  fStack_44 = param_3[3];
  local_70 = local_50 - *pfVar2;
  fStack_6c = fStack_4c - pfVar2[1];
  fStack_68 = fStack_48 - pfVar2[2];
  fStack_64 = fStack_44 - pfVar2[3];
  pfVar2 = *(float **)(param_2 + 0x20);
  local_60 = local_50 - *pfVar2;
  fStack_5c = fStack_4c - pfVar2[1];
  fStack_58 = fStack_48 - pfVar2[2];
  fStack_54 = fStack_44 - pfVar2[3];
  local_50 = local_50 - *pfVar3;
  fStack_4c = fStack_4c - pfVar3[1];
  fStack_48 = fStack_48 - pfVar3[2];
  fStack_44 = fStack_44 - pfVar3[3];
  FUN_01006f90(&local_70,param_2);
  auVar23._4_4_ = -(uint)(fStack_3c < *(float *)(local_18 + 0x44));
  auVar23._0_4_ = -(uint)(local_40 < *(float *)(local_18 + 0x40));
  auVar23._8_4_ = -(uint)(fStack_38 < *(float *)(local_18 + 0x48));
  auVar23._12_4_ = -(uint)(fStack_34 < *(float *)(local_18 + 0x4c));
  uVar8 = movmskps(extraout_EDX,auVar23);
  if ((uVar8 & 7) != 0) {
    *param_4 = 0;
    return 1;
  }
  local_1c = 0;
  iVar5 = FUN_01127100(param_2,param_3,&local_1c,&local_30);
  if (iVar5 != 0) {
    *param_4 = 3;
    return 1;
  }
  if ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10)) + 100 < local_1c) {
    *param_4 = 2;
    return 1;
  }
  local_14 = *(int *)(param_1 + 0xc) + -1;
  iVar5 = 0;
  local_18 = local_1c;
  if (local_1c != 0) {
    piVar7 = (int *)(param_1 + 0xde0 + local_14 * 4);
    iVar6 = local_1c;
    do {
      if (local_14 < 0) break;
      iVar9 = *piVar7;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      local_200[iVar5] = iVar9;
      local_14 = local_14 + -1;
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (0 < iVar6) {
      iVar9 = *(int *)(param_1 + 0x10);
      piVar7 = local_200 + iVar5;
      do {
        *piVar7 = param_1 + 0xf70 + iVar9 * 0x50;
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(int *)(param_1 + 0x10) = iVar9;
    }
  }
  local_28 = local_30;
  piVar7 = local_30;
  iVar5 = 0;
  if (0 < local_1c) {
    do {
      if (piVar7 == (int *)0x0) goto LAB_0122e894;
      pfVar2 = (float *)local_200[iVar5];
      local_2c = iVar5 + 1;
      local_14 = local_200[0];
      if (local_2c < local_18) {
        local_14 = local_200[iVar5 + 1];
      }
      pfVar2[7] = (float)pfVar2;
      pfVar2[0xb] = (float)pfVar2;
      pfVar2[0xf] = (float)pfVar2;
      pfVar2[5] = (float)(pfVar2 + 8);
      pfVar3 = pfVar2 + 0xc;
      pfVar2[9] = (float)pfVar3;
      pfVar2[0xd] = (float)(pfVar2 + 4);
      local_20 = *(float **)piVar7[1];
      local_24 = (float *)*piVar7;
      pfVar2[4] = (float)local_20;
      *pfVar3 = (float)param_3;
      pfVar2[8] = (float)local_24;
      piVar7[2] = (int)(pfVar2 + 4);
      pfVar2[6] = (float)piVar7;
      *(float **)(local_14 + 0x28) = pfVar3;
      pfVar2[0xe] = (float)(local_14 + 0x20);
      fVar11 = *local_20 - *local_24;
      fVar12 = local_20[1] - local_24[1];
      fVar13 = local_20[2] - local_24[2];
      fVar14 = local_20[3] - local_24[3];
      fVar15 = *local_24 - *param_3;
      fVar16 = local_24[1] - param_3[1];
      fVar18 = local_24[2] - param_3[2];
      fVar20 = local_24[3] - param_3[3];
      fVar21 = fVar18 * fVar12 - fVar16 * fVar13;
      fVar13 = fVar15 * fVar13 - fVar18 * fVar11;
      fVar16 = fVar16 * fVar11 - fVar15 * fVar12;
      fVar11 = fVar21 * fVar21;
      fVar12 = fVar13 * fVar13;
      fVar15 = fVar16 * fVar16;
      if (fVar12 + fVar11 + fVar15 <= 0.0) goto LAB_0122e894;
      fVar18 = fVar12 + fVar11 + fVar15;
      fVar17 = fVar12 + fVar11 + fVar15;
      fVar19 = fVar12 + fVar11 + fVar15;
      fVar15 = fVar12 + fVar11 + fVar15;
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar18;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = fVar15;
      auVar23 = rsqrtps(auVar22,auVar4);
      fVar11 = auVar23._0_4_;
      fVar12 = auVar23._4_4_;
      fVar24 = auVar23._8_4_;
      fVar25 = auVar23._12_4_;
      fVar21 = (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar18 * fVar11) * fVar11 * 0.5)) * fVar21;
      fVar13 = (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar12 * fVar17 * fVar12) * fVar12 * 0.5)) * fVar13;
      fVar16 = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((3.0 - fVar24 * fVar19 * fVar24) * fVar24 * 0.5)) * fVar16;
      pfVar2[0x10] = local_20[1] * fVar13 + *local_20 * fVar21 + local_20[2] * fVar16;
      *pfVar2 = fVar21;
      pfVar2[1] = fVar13;
      pfVar2[2] = fVar16;
      pfVar2[3] = (float)(~-(uint)(fVar15 <= 0.0) &
                         (uint)((3.0 - fVar25 * fVar15 * fVar25) * fVar25 * 0.5)) *
                  (fVar20 * fVar14 - fVar20 * fVar14);
      piVar1 = piVar7 + 1;
      piVar7 = *(int **)(*(int *)*piVar1 + 0x30);
      *(undefined4 *)(*(int *)*piVar1 + 0x30) = 0;
      iVar5 = local_2c;
    } while (local_2c < local_18);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar10 = (undefined4 *)(param_1 + 0xfb4);
    do {
      *puVar10 = 0;
      iVar5 = iVar5 + 1;
      puVar10 = puVar10 + 0x14;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar10 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar10 = 0;
      iVar5 = iVar5 + 1;
      puVar10 = puVar10 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  if (local_30 == piVar7) {
    return 0;
  }
LAB_0122e894:
  *param_4 = 3;
  return 1;
}

// 0122E8C0  FUN_0122e8c0  size=2375  [run]
undefined4 __thiscall FUN_0122e8c0(int param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar30;
  float fVar31;
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  local_14 = -1;
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    break;
  case 1:
    goto switchD_0122e8f3_caseD_1;
  case 2:
    goto switchD_0122e8f3_caseD_2;
  case 3:
    goto switchD_0122e8f3_caseD_3;
  case 4:
    goto switchD_0122e8f3_caseD_4;
  default:
    *param_3 = 3;
    return 1;
  }
switchD_0122e8f3_caseD_0:
  local_50 = -*(float *)(param_1 + 0x30);
  fStack_4c = -*(float *)(param_1 + 0x34);
  fStack_48 = -*(float *)(param_1 + 0x38);
  fStack_44 = -*(float *)(param_1 + 0x3c);
  if (*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
      *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
      *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x50)) {
    local_50 = 0.0;
    fStack_4c = 1.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
  }
  FUN_0122e200(&local_50,&local_a0);
  pfVar1 = *(float **)(param_1 + 0x68);
  *pfVar1 = local_a0;
  pfVar1[1] = fStack_9c;
  pfVar1[2] = fStack_98;
  pfVar1[3] = fStack_94;
  pfVar1 = *(float **)(param_1 + 0x60);
  *pfVar1 = local_90;
  pfVar1[1] = fStack_8c;
  pfVar1[2] = fStack_88;
  pfVar1[3] = fStack_84;
  puVar2 = *(undefined4 **)(param_1 + 100);
  *puVar2 = local_80;
  puVar2[1] = uStack_7c;
  puVar2[2] = uStack_78;
  puVar2[3] = uStack_74;
  pfVar1 = *(float **)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = 1;
  if (pfVar1[2] * pfVar1[2] + pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1 <=
      *(float *)(param_1 + 0x50)) {
    fVar9 = *pfVar1 * *pfVar1;
    fVar10 = pfVar1[1] * pfVar1[1];
    fVar11 = pfVar1[2] * pfVar1[2];
    auVar33._0_4_ = fVar10 + fVar9 + fVar11;
    auVar33._4_4_ = fVar10 + fVar9 + fVar11;
    auVar33._8_4_ = fVar10 + fVar9 + fVar11;
    auVar33._12_4_ = fVar10 + fVar9 + fVar11;
    auVar29 = rsqrtps(in_XMM3,auVar33);
    fVar9 = auVar29._0_4_;
    param_2[8] = (float)(~-(uint)(auVar33._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar9 * auVar33._0_4_ * fVar9) * fVar9 * 0.5 * auVar33._0_4_))
    ;
    *param_2 = local_50;
    param_2[1] = fStack_4c;
    param_2[2] = fStack_48;
    param_2[3] = fStack_44;
    param_2[4] = local_90;
    param_2[5] = fStack_8c;
    param_2[6] = fStack_88;
    param_2[7] = fStack_84;
    *param_3 = 0;
    return 1;
  }
  local_14 = 0;
switchD_0122e8f3_caseD_1:
  while (pfVar1 = *(float **)(param_1 + 0x68),
        *(float *)(param_1 + 0x50) <
        pfVar1[2] * pfVar1[2] + pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1) {
    local_14 = 1;
    FUN_0122e200(pfVar1,&local_a0);
    pfVar3 = *(float **)(param_1 + 0x68);
    local_20 = (fStack_9c - pfVar3[1]) * (fStack_9c - pfVar3[1]) +
               (local_a0 - *pfVar3) * (local_a0 - *pfVar3) +
               (fStack_98 - pfVar3[2]) * (fStack_98 - pfVar3[2]);
    local_100 = -*pfVar1;
    fStack_fc = -pfVar1[1];
    fStack_f8 = -pfVar1[2];
    fStack_f4 = -pfVar1[3];
    FUN_0122e200(&local_100,&local_e0);
    pfVar1 = *(float **)(param_1 + 0x68);
    fVar9 = (local_e0 - *pfVar1) * (local_e0 - *pfVar1);
    in_XMM3._4_4_ = fVar9;
    in_XMM3._0_4_ = fVar9;
    in_XMM3._8_4_ = fVar9;
    in_XMM3._12_4_ = fVar9;
    if (local_20 <
        (fStack_d8 - pfVar1[2]) * (fStack_d8 - pfVar1[2]) +
        (fStack_dc - pfVar1[1]) * (fStack_dc - pfVar1[1]) + fVar9) {
      pfVar1[4] = local_e0;
      pfVar1[5] = fStack_dc;
      pfVar1[6] = fStack_d8;
      pfVar1[7] = fStack_d4;
      iVar4 = *(int *)(param_1 + 0x60);
      *(undefined4 *)(iVar4 + 0x10) = local_d0;
      *(undefined4 *)(iVar4 + 0x14) = uStack_cc;
      *(undefined4 *)(iVar4 + 0x18) = uStack_c8;
      *(undefined4 *)(iVar4 + 0x1c) = uStack_c4;
      iVar4 = *(int *)(param_1 + 100);
      *(undefined4 *)(iVar4 + 0x10) = local_c0;
      *(undefined4 *)(iVar4 + 0x14) = uStack_bc;
      *(undefined4 *)(iVar4 + 0x18) = uStack_b8;
      *(undefined4 *)(iVar4 + 0x1c) = uStack_b4;
      *(undefined4 *)(param_1 + 0x6c) = 2;
    }
    else {
      pfVar1[4] = local_a0;
      pfVar1[5] = fStack_9c;
      pfVar1[6] = fStack_98;
      pfVar1[7] = fStack_94;
      iVar4 = *(int *)(param_1 + 0x60);
      *(float *)(iVar4 + 0x10) = local_90;
      *(float *)(iVar4 + 0x14) = fStack_8c;
      *(float *)(iVar4 + 0x18) = fStack_88;
      *(float *)(iVar4 + 0x1c) = fStack_84;
      iVar4 = *(int *)(param_1 + 100);
      *(undefined4 *)(iVar4 + 0x10) = local_80;
      *(undefined4 *)(iVar4 + 0x14) = uStack_7c;
      *(undefined4 *)(iVar4 + 0x18) = uStack_78;
      *(undefined4 *)(iVar4 + 0x1c) = uStack_74;
      *(undefined4 *)(param_1 + 0x6c) = 2;
    }
switchD_0122e8f3_caseD_2:
    while (pfVar1 = *(float **)(param_1 + 0x68),
          *(float *)(param_1 + 0x50) <
          (pfVar1[2] - pfVar1[6]) * (pfVar1[2] - pfVar1[6]) +
          (pfVar1[1] - pfVar1[5]) * (pfVar1[1] - pfVar1[5]) +
          (*pfVar1 - pfVar1[4]) * (*pfVar1 - pfVar1[4])) {
      fVar9 = *pfVar1 - pfVar1[4];
      fVar11 = pfVar1[1] - pfVar1[5];
      fVar13 = pfVar1[2] - pfVar1[6];
      fVar17 = pfVar1[3] - pfVar1[7];
      fVar20 = fVar11 * 1.0 - fVar13 * 1.0;
      fVar23 = fVar13 * 1.0 - fVar9 * 1.0;
      fVar24 = fVar9 * 1.0 - fVar11 * 1.0;
      fVar25 = fVar11 * 0.0 - fVar13 * 0.0;
      fVar30 = fVar13 * 1.0 - fVar9 * 0.0;
      fVar31 = fVar9 * 0.0 - fVar11 * 1.0;
      fVar19 = fVar25 * fVar25;
      fVar16 = fVar30 * fVar30;
      fVar18 = fVar31 * fVar31;
      fVar10 = fVar20 * fVar20;
      fVar12 = fVar23 * fVar23;
      fVar15 = fVar24 * fVar24;
      uVar5 = -(uint)(fVar12 + fVar10 + fVar15 < fVar16 + fVar19 + fVar18);
      uVar6 = -(uint)(fVar12 + fVar10 + fVar15 < fVar16 + fVar19 + fVar18);
      uVar7 = -(uint)(fVar12 + fVar10 + fVar15 < fVar16 + fVar19 + fVar18);
      uVar8 = -(uint)(fVar12 + fVar10 + fVar15 < fVar16 + fVar19 + fVar18);
      local_f0 = (float)(uVar5 & (uint)fVar25 | ~uVar5 & (uint)fVar20);
      fStack_ec = (float)(uVar6 & (uint)fVar30 | ~uVar6 & (uint)fVar23);
      fStack_e8 = (float)(uVar7 & (uint)fVar31 | ~uVar7 & (uint)fVar24);
      fVar12 = (float)(uVar8 & (uint)(fVar17 * 0.0 - fVar17 * 0.0) |
                      ~uVar8 & (uint)(fVar17 * 1.0 - fVar17 * 1.0));
      local_60 = fStack_e8 * fVar11 - fStack_ec * fVar13;
      fStack_5c = local_f0 * fVar13 - fStack_e8 * fVar9;
      fStack_58 = fStack_ec * fVar9 - local_f0 * fVar11;
      fVar9 = local_f0 * local_f0;
      fVar10 = fStack_ec * fStack_ec;
      fVar11 = fStack_e8 * fStack_e8;
      auVar32._4_4_ = fVar9;
      auVar32._0_4_ = fVar9;
      auVar32._8_4_ = fVar9;
      auVar32._12_4_ = fVar9;
      auVar26._0_4_ = fVar10 + fVar9 + fVar11;
      auVar26._4_4_ = fVar10 + fVar9 + fVar11;
      auVar26._8_4_ = fVar10 + fVar9 + fVar11;
      auVar26._12_4_ = fVar10 + fVar9 + fVar11;
      auVar33 = rsqrtps(auVar32,auVar26);
      fVar9 = auVar33._0_4_;
      fVar10 = auVar33._4_4_;
      fVar11 = auVar33._8_4_;
      fVar13 = auVar33._12_4_;
      local_f0 = (float)(~-(uint)(auVar26._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar9 * auVar26._0_4_ * fVar9) * fVar9 * 0.5)) * local_f0;
      fStack_ec = (float)(~-(uint)(auVar26._4_4_ <= 0.0) &
                         (uint)((3.0 - fVar10 * auVar26._4_4_ * fVar10) * fVar10 * 0.5)) * fStack_ec
      ;
      fStack_e8 = (float)(~-(uint)(auVar26._8_4_ <= 0.0) &
                         (uint)((3.0 - fVar11 * auVar26._8_4_ * fVar11) * fVar11 * 0.5)) * fStack_e8
      ;
      fStack_e4 = (float)(~-(uint)(auVar26._12_4_ <= 0.0) &
                         (uint)((3.0 - fVar13 * auVar26._12_4_ * fVar13) * fVar13 * 0.5)) * fVar12;
      fVar9 = local_60 * local_60;
      fVar10 = fStack_5c * fStack_5c;
      fVar11 = fStack_58 * fStack_58;
      local_14 = 2;
      auVar27._4_4_ = fVar9;
      auVar27._0_4_ = fVar9;
      auVar27._8_4_ = fVar9;
      auVar27._12_4_ = fVar9;
      auVar29._0_4_ = fVar10 + fVar9 + fVar11;
      auVar29._4_4_ = fVar10 + fVar9 + fVar11;
      auVar29._8_4_ = fVar10 + fVar9 + fVar11;
      auVar29._12_4_ = fVar10 + fVar9 + fVar11;
      auVar33 = rsqrtps(auVar27,auVar29);
      fVar9 = auVar33._0_4_;
      fVar10 = auVar33._4_4_;
      fVar11 = auVar33._8_4_;
      fVar13 = auVar33._12_4_;
      local_60 = (float)(~-(uint)(auVar29._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar9 * auVar29._0_4_ * fVar9) * fVar9 * 0.5)) * local_60;
      fStack_5c = (float)(~-(uint)(auVar29._4_4_ <= 0.0) &
                         (uint)((3.0 - fVar10 * auVar29._4_4_ * fVar10) * fVar10 * 0.5)) * fStack_5c
      ;
      fStack_58 = (float)(~-(uint)(auVar29._8_4_ <= 0.0) &
                         (uint)((3.0 - fVar11 * auVar29._8_4_ * fVar11) * fVar11 * 0.5)) * fStack_58
      ;
      fStack_54 = (float)(~-(uint)(auVar29._12_4_ <= 0.0) &
                         (uint)((3.0 - fVar13 * auVar29._12_4_ * fVar13) * fVar13 * 0.5)) *
                  (fVar12 * fVar17 - fVar12 * fVar17);
      FUN_0122e4b0(&local_f0,pfVar1,&local_e0,&local_18);
      FUN_0122e4b0(&local_60,*(undefined4 *)(param_1 + 0x68),&local_a0,&local_1c);
      iVar4 = *(int *)(param_1 + 0x68);
      if (local_18 <= local_1c) {
        *(float *)(iVar4 + 0x20) = local_a0;
        *(float *)(iVar4 + 0x24) = fStack_9c;
        *(float *)(iVar4 + 0x28) = fStack_98;
        *(float *)(iVar4 + 0x2c) = fStack_94;
        iVar4 = *(int *)(param_1 + 0x60);
        *(float *)(iVar4 + 0x20) = local_90;
        *(float *)(iVar4 + 0x24) = fStack_8c;
        *(float *)(iVar4 + 0x28) = fStack_88;
        *(float *)(iVar4 + 0x2c) = fStack_84;
        iVar4 = *(int *)(param_1 + 100);
        *(undefined4 *)(iVar4 + 0x20) = local_80;
        *(undefined4 *)(iVar4 + 0x24) = uStack_7c;
        *(undefined4 *)(iVar4 + 0x28) = uStack_78;
        *(undefined4 *)(iVar4 + 0x2c) = uStack_74;
        *(undefined4 *)(param_1 + 0x6c) = 3;
      }
      else {
        *(float *)(iVar4 + 0x20) = local_e0;
        *(float *)(iVar4 + 0x24) = fStack_dc;
        *(float *)(iVar4 + 0x28) = fStack_d8;
        *(float *)(iVar4 + 0x2c) = fStack_d4;
        iVar4 = *(int *)(param_1 + 0x60);
        *(undefined4 *)(iVar4 + 0x20) = local_d0;
        *(undefined4 *)(iVar4 + 0x24) = uStack_cc;
        *(undefined4 *)(iVar4 + 0x28) = uStack_c8;
        *(undefined4 *)(iVar4 + 0x2c) = uStack_c4;
        iVar4 = *(int *)(param_1 + 100);
        *(undefined4 *)(iVar4 + 0x20) = local_c0;
        *(undefined4 *)(iVar4 + 0x24) = uStack_bc;
        *(undefined4 *)(iVar4 + 0x28) = uStack_b8;
        *(undefined4 *)(iVar4 + 0x2c) = uStack_b4;
        *(undefined4 *)(param_1 + 0x6c) = 3;
      }
switchD_0122e8f3_caseD_3:
      while( true ) {
        pfVar1 = *(float **)(param_1 + 0x68);
        fVar9 = *pfVar1 - pfVar1[4];
        fVar10 = pfVar1[1] - pfVar1[5];
        fVar11 = pfVar1[2] - pfVar1[6];
        fVar12 = pfVar1[3] - pfVar1[7];
        fVar13 = pfVar1[4] - pfVar1[8];
        fVar15 = pfVar1[5] - pfVar1[9];
        fVar17 = pfVar1[6] - pfVar1[10];
        fVar19 = pfVar1[7] - pfVar1[0xb];
        local_40 = fVar17 * fVar10 - fVar15 * fVar11;
        fStack_3c = fVar13 * fVar11 - fVar17 * fVar9;
        fStack_38 = fVar15 * fVar9 - fVar13 * fVar10;
        fStack_34 = fVar19 * fVar12 - fVar19 * fVar12;
        fVar9 = local_40 * local_40;
        in_XMM3._4_4_ = fVar9;
        in_XMM3._0_4_ = fVar9;
        in_XMM3._8_4_ = fVar9;
        in_XMM3._12_4_ = fVar9;
        if (fStack_3c * fStack_3c + fVar9 + fStack_38 * fStack_38 == 0.0) break;
        fVar9 = local_40 * local_40;
        fVar10 = fStack_3c * fStack_3c;
        fVar11 = fStack_38 * fStack_38;
        auVar21._0_4_ = fVar10 + fVar9 + fVar11;
        auVar21._4_4_ = fVar10 + fVar9 + fVar11;
        auVar21._8_4_ = fVar10 + fVar9 + fVar11;
        auVar21._12_4_ = fVar10 + fVar9 + fVar11;
        auVar28._0_12_ = ZEXT812(0);
        auVar28._12_4_ = 0;
        auVar33 = rsqrtps(auVar28,auVar21);
        fVar9 = auVar33._0_4_;
        fVar10 = auVar33._4_4_;
        fVar11 = auVar33._8_4_;
        fVar12 = auVar33._12_4_;
        local_40 = (float)(~-(uint)(auVar21._0_4_ <= 0.0) &
                          (uint)((3.0 - fVar9 * auVar21._0_4_ * fVar9) * fVar9 * 0.5)) * local_40;
        fStack_3c = (float)(~-(uint)(auVar21._4_4_ <= 0.0) &
                           (uint)((3.0 - fVar10 * auVar21._4_4_ * fVar10) * fVar10 * 0.5)) *
                    fStack_3c;
        fStack_38 = (float)(~-(uint)(auVar21._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar11 * auVar21._8_4_ * fVar11) * fVar11 * 0.5)) *
                    fStack_38;
        fStack_34 = (float)(~-(uint)(auVar21._12_4_ <= 0.0) &
                           (uint)((3.0 - fVar12 * auVar21._12_4_ * fVar12) * fVar12 * 0.5)) *
                    fStack_34;
        local_14 = 3;
        FUN_0122e4b0(&local_40,*(undefined4 *)(param_1 + 0x68),&local_e0,&local_24);
        if (local_24 < *(float *)(param_1 + 0x40)) {
          param_2[8] = 0.0;
          *param_2 = local_40;
          param_2[1] = fStack_3c;
          param_2[2] = fStack_38;
          param_2[3] = fStack_34;
          iVar4 = *(int *)(param_1 + 0x68);
          FUN_0112b1d0(&DAT_01701b10,iVar4,iVar4 + 0x10,iVar4 + 0x20,&local_60);
          pfVar1 = *(float **)(param_1 + 0x60);
          fVar9 = pfVar1[5];
          fVar10 = pfVar1[6];
          fVar11 = pfVar1[7];
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar15 = pfVar1[3];
          fVar17 = pfVar1[9];
          fVar19 = pfVar1[10];
          fVar16 = pfVar1[0xb];
          param_2[4] = fStack_5c * pfVar1[4] + local_60 * *pfVar1 + fStack_58 * pfVar1[8];
          param_2[5] = fStack_5c * fVar9 + local_60 * fVar12 + fStack_58 * fVar17;
          param_2[6] = fStack_5c * fVar10 + local_60 * fVar13 + fStack_58 * fVar19;
          param_2[7] = fStack_5c * fVar11 + local_60 * fVar15 + fStack_58 * fVar16;
          *param_3 = 0;
          return 1;
        }
        iVar4 = *(int *)(param_1 + 0x68);
        *(float *)(iVar4 + 0x30) = local_e0;
        *(float *)(iVar4 + 0x34) = fStack_dc;
        *(float *)(iVar4 + 0x38) = fStack_d8;
        *(float *)(iVar4 + 0x3c) = fStack_d4;
        iVar4 = *(int *)(param_1 + 0x60);
        *(undefined4 *)(iVar4 + 0x30) = local_d0;
        *(undefined4 *)(iVar4 + 0x34) = uStack_cc;
        *(undefined4 *)(iVar4 + 0x38) = uStack_c8;
        *(undefined4 *)(iVar4 + 0x3c) = uStack_c4;
        iVar4 = *(int *)(param_1 + 100);
        *(undefined4 *)(iVar4 + 0x30) = local_c0;
        *(undefined4 *)(iVar4 + 0x34) = uStack_bc;
        *(undefined4 *)(iVar4 + 0x38) = uStack_b8;
        *(undefined4 *)(iVar4 + 0x3c) = uStack_b4;
        *(undefined4 *)(param_1 + 0x6c) = 4;
switchD_0122e8f3_caseD_4:
        pfVar1 = *(float **)(param_1 + 0x68);
        fVar9 = *pfVar1 - pfVar1[4];
        fVar10 = pfVar1[1] - pfVar1[5];
        fVar11 = pfVar1[2] - pfVar1[6];
        fVar12 = pfVar1[4] - pfVar1[8];
        fVar15 = pfVar1[5] - pfVar1[9];
        fVar17 = pfVar1[6] - pfVar1[10];
        fVar13 = fVar17 * fVar10 - fVar15 * fVar11;
        fVar11 = fVar12 * fVar11 - fVar17 * fVar9;
        fVar10 = fVar15 * fVar9 - fVar12 * fVar10;
        fVar9 = (pfVar1[0xe] - pfVar1[2]) * fVar10 +
                (pfVar1[0xd] - pfVar1[1]) * fVar11 + (pfVar1[0xc] - *pfVar1) * fVar13;
        if (*(float *)(param_1 + 0x50) * (fVar11 * fVar11 + fVar13 * fVar13 + fVar10 * fVar10) <
            fVar9 * fVar9) {
          *param_3 = 0;
          return 0;
        }
        if (2 < local_14) {
          *param_3 = 3;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x6c) = 3;
      }
      if (1 < local_14) {
        param_2[8] = 0.0;
        pfVar1 = *(float **)(param_1 + 0x68);
        fVar9 = *pfVar1 - pfVar1[4];
        fVar10 = pfVar1[1] - pfVar1[5];
        fVar11 = pfVar1[2] - pfVar1[6];
        fVar12 = pfVar1[3] - pfVar1[7];
        fVar19 = fVar10 * 1.0 - fVar11 * 1.0;
        fVar16 = fVar11 * 1.0 - fVar9 * 1.0;
        fVar18 = fVar9 * 1.0 - fVar10 * 1.0;
        fVar20 = fVar10 * 0.0 - fVar11 * 0.0;
        fVar23 = fVar11 * 1.0 - fVar9 * 0.0;
        fVar24 = fVar9 * 0.0 - fVar10 * 1.0;
        fVar13 = fVar20 * fVar20;
        fVar15 = fVar23 * fVar23;
        fVar17 = fVar24 * fVar24;
        fVar9 = fVar19 * fVar19;
        fVar10 = fVar16 * fVar16;
        fVar11 = fVar18 * fVar18;
        uVar5 = -(uint)(fVar10 + fVar9 + fVar11 < fVar15 + fVar13 + fVar17);
        uVar6 = -(uint)(fVar10 + fVar9 + fVar11 < fVar15 + fVar13 + fVar17);
        uVar7 = -(uint)(fVar10 + fVar9 + fVar11 < fVar15 + fVar13 + fVar17);
        uVar8 = -(uint)(fVar10 + fVar9 + fVar11 < fVar15 + fVar13 + fVar17);
        fVar15 = (float)(uVar5 & (uint)fVar20 | ~uVar5 & (uint)fVar19);
        fVar17 = (float)(uVar6 & (uint)fVar23 | ~uVar6 & (uint)fVar16);
        fVar19 = (float)(uVar7 & (uint)fVar24 | ~uVar7 & (uint)fVar18);
        fVar9 = fVar15 * fVar15;
        fVar10 = fVar17 * fVar17;
        fVar11 = fVar19 * fVar19;
        auVar14._0_4_ = fVar10 + fVar9 + fVar11;
        auVar14._4_4_ = fVar10 + fVar9 + fVar11;
        auVar14._8_4_ = fVar10 + fVar9 + fVar11;
        auVar14._12_4_ = fVar10 + fVar9 + fVar11;
        auVar22._0_12_ = ZEXT812(0);
        auVar22._12_4_ = 0;
        auVar33 = rsqrtps(auVar22,auVar14);
        fVar9 = auVar33._0_4_;
        fVar10 = auVar33._4_4_;
        fVar11 = auVar33._8_4_;
        fVar13 = auVar33._12_4_;
        *param_2 = (float)(~-(uint)(auVar14._0_4_ <= 0.0) &
                          (uint)((3.0 - fVar9 * auVar14._0_4_ * fVar9) * fVar9 * 0.5)) * fVar15;
        param_2[1] = (float)(~-(uint)(auVar14._4_4_ <= 0.0) &
                            (uint)((3.0 - fVar10 * auVar14._4_4_ * fVar10) * fVar10 * 0.5)) * fVar17
        ;
        param_2[2] = (float)(~-(uint)(auVar14._8_4_ <= 0.0) &
                            (uint)((3.0 - fVar11 * auVar14._8_4_ * fVar11) * fVar11 * 0.5)) * fVar19
        ;
        param_2[3] = (float)(~-(uint)(auVar14._12_4_ <= 0.0) &
                            (uint)((3.0 - fVar13 * auVar14._12_4_ * fVar13) * fVar13 * 0.5)) *
                     (float)(uVar8 & (uint)(fVar12 * 0.0 - fVar12 * 0.0) |
                            ~uVar8 & (uint)(fVar12 * 1.0 - fVar12 * 1.0));
        pfVar1 = *(float **)(param_1 + 0x68);
        fVar18 = ABS(pfVar1[1]) + ABS(*pfVar1) + ABS(pfVar1[2]);
        pfVar1 = *(float **)(param_1 + 0x60);
        fVar9 = pfVar1[5];
        fVar10 = pfVar1[6];
        fVar11 = pfVar1[7];
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar18 = fVar18 / (fVar18 + fVar18 + 1.1920929e-07);
        fVar17 = pfVar1[1];
        fVar19 = pfVar1[2];
        fVar16 = pfVar1[3];
        param_2[4] = fVar18 * (pfVar1[4] - *pfVar1) + *pfVar1;
        param_2[5] = fVar18 * (fVar9 - fVar12) + fVar17;
        param_2[6] = fVar18 * (fVar10 - fVar13) + fVar19;
        param_2[7] = fVar18 * (fVar11 - fVar15) + fVar16;
        *param_3 = 0;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x6c) = 2;
    }
    if (0 < local_14) {
      *param_3 = 3;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  if (-1 < local_14) {
    *param_3 = 3;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  goto switchD_0122e8f3_caseD_0;
}

// 0122F220  FUN_0122f220  size=428  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall FUN_0122f220(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float in_XMM0_Da;
  undefined1 local_2ee0 [8];
  int local_2ed8;
  undefined1 auStack_2ec0 [48];
  undefined4 auStack_2e90 [2968];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 *local_18;
  int local_14;
  
  do {
    local_14 = 0;
    iVar1 = FUN_0122e8c0(param_2,&local_14);
    if (iVar1 == 1) {
      if (local_14 != 3) {
        return local_14;
      }
    }
    else {
      FUN_01126c80(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                   *(undefined4 *)(param_1 + 0x68));
      uVar2 = FUN_01126b50();
      local_18 = auStack_2ec0 + local_2ed8 * 0x40;
      auStack_2e90[local_2ed8 * 0x10] = 0;
      local_2ed8 = local_2ed8 + 1;
      FUN_0122e200(uVar2,local_18);
      iVar1 = FUN_0122e590(local_2ee0,uVar2,local_18,&local_14);
      while (iVar1 != 1) {
        if (0x36 < local_2ed8) {
          local_14 = 2;
          goto LAB_0122f3ab;
        }
        uVar2 = FUN_01126b50();
        local_18 = auStack_2ec0 + local_2ed8 * 0x40;
        auStack_2e90[local_2ed8 * 0x10] = 0;
        local_2ed8 = local_2ed8 + 1;
        FUN_0122e200(uVar2,local_18);
        iVar1 = FUN_0122e590(local_2ee0,uVar2,local_18,&local_14);
      }
      if (local_14 != 3) {
LAB_0122f3ab:
        FUN_0122e320(local_2ee0,uVar2,param_2);
        return local_14;
      }
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    if (*(int *)(param_1 + 0x5c) == 1) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    else {
      if (0x13 < *(int *)(param_1 + 0x5c)) {
        return local_14;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      FUN_0122e1a0();
      fStack_28 = (in_XMM0_Da - 0.0001) * 0.0002;
      in_XMM0_Da = fStack_28 + *(float *)(param_1 + 0x30);
      fStack_2c = fStack_28 + *(float *)(param_1 + 0x34);
      fStack_28 = fStack_28 + *(float *)(param_1 + 0x38);
      fStack_24 = fStack_24 + *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x30) = in_XMM0_Da;
      *(float *)(param_1 + 0x34) = fStack_2c;
      *(float *)(param_1 + 0x38) = fStack_28;
      *(float *)(param_1 + 0x3c) = fStack_24;
      local_30 = in_XMM0_Da;
    }
  } while( true );
}

// 0122F3D0  FUN_0122f3d0  size=300  [run]
int FUN_0122f3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtPenetration";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  iVar4 = FUN_0122f220(param_9);
  if (iVar4 == 3) {
    FUN_0124b550(param_1,param_2,param_3,param_5,param_6,param_9);
    iVar4 = 1;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return iVar4;
}

// 0122F500  FUN_0122f500  size=1206  [run]
undefined4
FUN_0122f500(float *param_1,int param_2,float *param_3,int param_4,undefined4 *param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  LPVOID pvVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  int *piVar27;
  undefined1 local_a0 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
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
  float afStack_34 [3];
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  float *local_18;
  char local_11;
  
  pvVar23 = TlsGetValue(DAT_01f8fc4c);
  local_20 = *(int *)((int)pvVar23 + 0xc);
  iVar25 = param_4 * 0x3000;
  if ((iVar25 - *(int *)((int)pvVar23 + 8) == 0 || iVar25 < *(int *)((int)pvVar23 + 8)) &&
     ((uint)(local_20 + iVar25) <= *(uint *)((int)pvVar23 + 0x10))) {
    *(int *)((int)pvVar23 + 0xc) = local_20 + iVar25;
  }
  else {
    local_20 = FUN_0100b780(iVar25);
  }
  local_28 = param_4;
  local_1c = 0;
  if (0 < param_4) {
    local_24 = (float)(param_6 - (int)param_3);
    local_50 = 0.0001;
    fStack_4c = 0.0001;
    fStack_48 = 0.0001;
    fStack_44 = 0.0;
    local_18 = param_3;
    puVar26 = (undefined4 *)(local_20 + 0x134);
    do {
      puVar26[-1] = *local_18;
      *puVar26 = *(undefined4 *)((int)local_24 + (int)local_18);
      fVar5 = *local_18;
      uVar19 = param_5[1];
      uVar20 = param_5[2];
      uVar21 = param_5[3];
      puVar26[-0x4d] = *param_5;
      puVar26[-0x4c] = uVar19;
      puVar26[-0x4b] = uVar20;
      puVar26[-0x4a] = uVar21;
      uVar19 = param_5[5];
      uVar20 = param_5[6];
      uVar21 = param_5[7];
      puVar26[-0x49] = param_5[4];
      puVar26[-0x48] = uVar19;
      puVar26[-0x47] = uVar20;
      puVar26[-0x46] = uVar21;
      uVar19 = param_5[9];
      uVar20 = param_5[10];
      uVar21 = param_5[0xb];
      puVar26[-0x45] = param_5[8];
      puVar26[-0x44] = uVar19;
      puVar26[-0x43] = uVar20;
      puVar26[-0x42] = uVar21;
      uVar19 = param_5[0xc];
      uVar20 = param_5[0xd];
      uVar21 = param_5[0xe];
      uVar22 = param_5[0xf];
      puVar26[-0x37] = fVar5;
      puVar26[-0x41] = uVar19;
      puVar26[-0x40] = uVar20;
      puVar26[-0x3f] = uVar21;
      puVar26[-0x3e] = uVar22;
      puVar26[-0x38] = param_2;
      puVar26[-0x3d] = local_50;
      puVar26[-0x3c] = fStack_4c;
      puVar26[-0x3b] = fStack_48;
      puVar26[-0x3a] = fStack_44;
      puVar26[-0x35] = puVar26 + -0x31;
      puVar26[-0x36] = 0;
      puVar26[-0x32] = 0;
      puVar26[-0x34] = puVar26 + -0x21;
      puVar26[-0x39] = 0x322bcc76;
      puVar26[-0x33] = puVar26 + -0x11;
      iVar25 = FUN_0122e8c0(local_a0,afStack_34);
      if (iVar25 == 1) {
        param_4 = param_4 + -1;
      }
      else {
        puVar2 = puVar26 + -0x11;
        puVar3 = puVar26 + -0x21;
        puVar1 = puVar26 + -0x31;
        puVar26 = puVar26 + 0xc00;
        FUN_01126c80(puVar1,puVar3,puVar2);
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < param_4);
  }
  iVar24 = local_20;
  iVar25 = local_28;
  if (param_4 < 3) {
    if (param_4 < 2) {
      pvVar23 = TlsGetValue(DAT_01f8fc4c);
      iVar25 = iVar25 * 0x3000;
      if (((iVar25 - *(int *)((int)pvVar23 + 8) == 0 || iVar25 < *(int *)((int)pvVar23 + 8)) &&
          (iVar25 + iVar24 == *(int *)((int)pvVar23 + 0xc))) &&
         (*(int *)((int)pvVar23 + 0x14) != iVar24)) {
        *(int *)((int)pvVar23 + 0xc) = iVar24;
        return 1;
      }
      FUN_0100b9b0(iVar24,iVar25);
      return 1;
    }
  }
  else {
    param_4 = 2;
  }
  fStack_38 = 0.0;
  afStack_34[0] = 0.0;
  iVar25 = local_20;
  do {
    iVar24 = local_28;
    FUN_0112a980(iVar25 + 0x140,iVar25 + 0x3140,&local_60,iVar25 + 0x2ff0,iVar25 + 0x5ff0);
    local_11 = '\0';
    local_1c = 0;
    if (param_4 < 1) break;
    local_18 = &fStack_38;
    piVar27 = (int *)(iVar25 + 0x148);
    do {
      if ((*local_18 != 2.8026e-45) && (0x36 < *piVar27)) {
        piVar4 = piVar27 + *piVar27 * 0x10 + 6;
        *piVar27 = *piVar27 + 1;
        piVar4[0xc] = 0;
        FUN_0122e200(piVar27[0xbaa],piVar4);
        iVar24 = FUN_0122e590(piVar27 + -2,piVar27[0xbaa],piVar4,local_18);
        iVar25 = local_20;
        if (iVar24 == 1) {
          if (*local_18 == 4.2039e-45) {
            pvVar23 = TlsGetValue(DAT_01f8fc4c);
            iVar25 = local_28 * 0x3000;
            if (((iVar25 - *(int *)((int)pvVar23 + 8) == 0 || iVar25 < *(int *)((int)pvVar23 + 8))
                && (iVar25 + local_20 == *(int *)((int)pvVar23 + 0xc))) &&
               (*(int *)((int)pvVar23 + 0x14) != local_20)) {
              *(int *)((int)pvVar23 + 0xc) = local_20;
              return 1;
            }
            FUN_0100b9b0(local_20,iVar25);
            return 1;
          }
        }
        else {
          local_11 = '\x01';
        }
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      piVar27 = piVar27 + 0xc00;
    } while (local_1c < param_4);
    iVar24 = local_28;
  } while (local_11 != '\0');
  local_60 = -local_60;
  fStack_5c = -fStack_5c;
  fStack_58 = -fStack_58;
  if (0 < param_4) {
    local_24 = -fStack_54 - *(float *)(param_2 + 0x10);
    piVar27 = (int *)(iVar25 + 0x134);
    local_1c = param_4;
    local_70 = fStack_58;
    fStack_6c = fStack_58;
    fStack_68 = fStack_58;
    fStack_64 = fStack_58;
    local_50 = local_60;
    fStack_4c = local_60;
    fStack_48 = local_60;
    fStack_44 = local_60;
    local_40 = fStack_5c;
    fStack_3c = fStack_5c;
    fStack_38 = fStack_5c;
    afStack_34[0] = fStack_5c;
    do {
      FUN_0122e320(piVar27 + 3,piVar27[0xbaf],local_a0);
      fVar5 = param_1[1];
      fVar7 = param_1[2];
      fVar8 = param_1[3];
      fVar9 = param_1[5];
      fVar10 = param_1[6];
      fVar11 = param_1[7];
      iVar25 = *piVar27;
      fVar12 = param_1[9];
      fVar13 = param_1[10];
      fVar14 = param_1[0xb];
      *(float *)(iVar25 + 0x10) =
           local_50 * *param_1 + local_40 * param_1[4] + local_70 * param_1[8];
      *(float *)(iVar25 + 0x14) = fStack_4c * fVar5 + fStack_3c * fVar9 + fStack_6c * fVar12;
      *(float *)(iVar25 + 0x18) = fStack_48 * fVar7 + fStack_38 * fVar10 + fStack_68 * fVar13;
      *(float *)(iVar25 + 0x1c) = fStack_44 * fVar8 + afStack_34[0] * fVar11 + fStack_64 * fVar14;
      fVar5 = *(float *)(piVar27[-1] + 0x10);
      pfVar6 = (float *)*piVar27;
      fVar7 = param_1[5];
      fVar8 = param_1[6];
      fVar9 = param_1[7];
      fVar10 = param_1[1];
      fVar11 = param_1[2];
      fVar12 = param_1[3];
      fVar13 = param_1[9];
      fVar14 = param_1[10];
      fVar15 = param_1[0xb];
      fVar16 = param_1[0xd];
      fVar17 = param_1[0xe];
      fVar18 = param_1[0xf];
      *pfVar6 = fStack_8c * param_1[4] + local_90 * *param_1 + fStack_88 * param_1[8] + param_1[0xc]
      ;
      pfVar6[1] = fStack_8c * fVar7 + local_90 * fVar10 + fStack_88 * fVar13 + fVar16;
      pfVar6[2] = fStack_8c * fVar8 + local_90 * fVar11 + fStack_88 * fVar14 + fVar17;
      pfVar6[3] = fStack_8c * fVar9 + local_90 * fVar12 + fStack_88 * fVar15 + fVar18;
      iVar25 = *piVar27;
      piVar27 = piVar27 + 0xc00;
      local_1c = local_1c + -1;
      *(float *)(iVar25 + 0x1c) = local_24 - fVar5;
    } while (local_1c != 0);
    local_1c = 0;
    iVar24 = local_28;
    iVar25 = local_20;
  }
  pvVar23 = TlsGetValue(DAT_01f8fc4c);
  iVar24 = iVar24 * 0x3000;
  if (((iVar24 - *(int *)((int)pvVar23 + 8) == 0 || iVar24 < *(int *)((int)pvVar23 + 8)) &&
      (iVar24 + iVar25 == *(int *)((int)pvVar23 + 0xc))) &&
     (*(int *)((int)pvVar23 + 0x14) != iVar25)) {
    *(int *)((int)pvVar23 + 0xc) = iVar25;
    return 0;
  }
  FUN_0100b9b0(iVar25,iVar24);
  return 0;
}

// 0122F9C0  FUN_0122f9c0  size=12  [run]
void __thiscall FUN_0122f9c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0122FA10  FUN_0122fa10  size=20  [run]
bool FUN_0122fa10(float *param_1,float *param_2)

{
  return *param_2 <= *param_1;
}

// 0122FA30  FUN_0122fa30  size=46  [run]
void __thiscall FUN_0122fa30(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *puVar1 = param_2[4];
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1 = *(undefined4 **)(param_1 + 100);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *puVar1 = param_2[8];
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  return;
}

// 0122FA60  FUN_0122fa60  size=49  [run]
void __thiscall FUN_0122fa60(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x10) = param_2[4];
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x10) = param_2[8];
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = 2;
  return;
}

// 0122FAA0  FUN_0122faa0  size=49  [run]
void __thiscall FUN_0122faa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x20) = *param_2;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x20) = param_2[4];
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x20) = param_2[8];
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = 3;
  return;
}

// 0122FAE0  FUN_0122fae0  size=49  [run]
void __thiscall FUN_0122fae0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x30) = *param_2;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x30) = param_2[4];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  iVar1 = *(int *)(param_1 + 100);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x30) = param_2[8];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = 4;
  return;
}

// 0122FB20  FUN_0122fb20  size=18  [run]
int __thiscall FUN_0122fb20(int *param_1,int param_2)

{
  return param_2 * 0x3000 + *param_1;
}

// 0122FB50  FUN_0122fb50  size=64  [run]
void FUN_0122fb50(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  param_1 = param_1 * 0x3000;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + param_1;
  if ((param_1 - *(int *)((int)pvVar2 + 8) == 0 || param_1 < *(int *)((int)pvVar2 + 8)) &&
     (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(param_1);
  return;
}

// 0122FB90  FUN_0122fb90  size=75  [run]
void FUN_0122fb90(int param_1,int param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  param_2 = param_2 * 0x3000;
  if (((param_2 - *(int *)((int)pvVar1 + 8) == 0 || param_2 < *(int *)((int)pvVar1 + 8)) &&
      (param_2 + param_1 == *(int *)((int)pvVar1 + 0xc))) &&
     (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,param_2);
  return;
}

// 0122FBE0  FUN_0122fbe0  size=94  [run]
int * __thiscall FUN_0122fbe0(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  iVar4 = param_2 * 0x3000;
  uVar1 = iVar3 + iVar4;
  if ((iVar4 - *(int *)((int)pvVar2 + 8) == 0 || iVar4 < *(int *)((int)pvVar2 + 8)) &&
     (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(iVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 0122FC90  FUN_0122fc90  size=122  [run]
void __thiscall
FUN_0122fc90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            float param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_4[5];
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  param_1[4] = param_4[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_4[9];
  uVar2 = param_4[10];
  uVar3 = param_4[0xb];
  param_1[8] = param_4[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_4[0xd];
  uVar2 = param_4[0xe];
  uVar3 = param_4[0xf];
  param_1[0xc] = param_4[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x15] = param_2;
  param_1[0x16] = param_3;
  param_1[0x10] = param_5;
  param_1[0x11] = param_5;
  param_1[0x12] = param_5;
  param_1[0x13] = 0;
  param_1[0x18] = param_6;
  param_1[0x19] = param_7;
  param_1[0x14] = param_5 * param_5;
  param_1[0x17] = 0;
  param_1[0x1a] = param_8;
  param_1[0x1b] = param_9;
  return;
}

// 01230230  hkpToiResourceMgr::vf10  size=5  [run]
undefined4 hkpToiResourceMgr::vf10(void)

{
  return 0;
}

// 01230240  hkpToiResourceMgr::vf14  size=6  [run]
undefined4 hkpToiResourceMgr::vf14(void)

{
  return 1;
}

// 01230250  hkpDefaultToiResourceMgr::vf1C  size=4  [run]
undefined4 __fastcall hkpDefaultToiResourceMgr::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 01230260  hkBaseObject::~hkBaseObject  size=7  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01230270  FUN_01230270  size=13  [run]
void FUN_01230270(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01230280  hkpDefaultToiResourceMgr::vf14  size=6  [run]
undefined4 hkpDefaultToiResourceMgr::vf14(void)

{
  return 1;
}

// 01230290  hkpDefaultToiResourceMgr::vf10  size=5  [run]
undefined4 hkpDefaultToiResourceMgr::vf10(void)

{
  return 0;
}

// 012302A0  hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr  size=25  [run]
void __fastcall hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[3] = 0x20000;
  return;
}

// 012302C0  hkpDefaultToiResourceMgr::vf0C  size=147  [run]
undefined4 __thiscall
hkpDefaultToiResourceMgr::vf0C
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)FUN_01230270((int)&param_2 + 3,param_2);
  puVar1 = param_4;
  if (*pcVar2 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    param_4[7] = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar4;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    param_2 = *(undefined4 *)(param_1 + 8);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x34) + 0xc))(&param_2);
    *(undefined4 *)(param_1 + 8) = param_2;
    puVar1[6] = uVar4;
    puVar1[2] = 1000;
    puVar1[3] = 1000;
    puVar1[1] = 1000;
    puVar1[4] = 3;
    puVar1[5] = 4;
    *puVar1 = 3;
    puVar1[8] = &DAT_017e9a10;
    puVar1[9] = &DAT_017e9a18;
    return 0;
  }
  return 1;
}

// 01230360  hkpDefaultToiResourceMgr::vf18  size=45  [run]
void __thiscall
hkpDefaultToiResourceMgr::vf18(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_4 + 0x18);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar3 + 0x34) + 0x10))(uVar2,uVar1);
  return;
}

// 01230390  FUN_01230390  size=38  [run]
void FUN_01230390(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012303C0  hkpToiResourceMgr::vf00  size=53  [run]
undefined4 * __thiscall hkpToiResourceMgr::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01230400  hkpDefaultToiResourceMgr::vf08  size=6  [run]
undefined * hkpDefaultToiResourceMgr::vf08(void)

{
  return &DAT_020a0bb8;
}

// 01230410  FUN_01230410  size=38  [run]
void FUN_01230410(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01230440  hkpDefaultToiResourceMgr::vf00  size=52  [run]
int __thiscall hkpDefaultToiResourceMgr::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::~hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01230480  FUN_01230480  size=8  [run]
undefined4 FUN_01230480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012304A0  FUN_012304a0  size=33  [run]
int __fastcall FUN_012304a0(int param_1)

{
  FUN_01015ea0(param_1,0xffffffff,0xfc);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return param_1;
}

// 012304D0  FUN_012304d0  size=18  [run]
void __fastcall FUN_012304d0(int param_1)

{
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_011ee6a0(1);
  }
  return;
}

// 012304F0  FUN_012304f0  size=16  [run]
void __fastcall FUN_012304f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 01230500  FUN_01230500  size=5  [run]
undefined4 __fastcall FUN_01230500(undefined4 param_1)

{
  return param_1;
}

// 01230510  FUN_01230510  size=126  [run]
int __thiscall FUN_01230510(int *param_1,uint param_2)

{
  uint3 uVar2;
  int iVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (param_2 >> 6 ^ param_2 + 7) & 0x1f;
  uVar2 = (uint3)((uint)param_1 >> 8);
  if ((param_1[1] & 1 << (sbyte)uVar3) == 0) {
    return (uint)uVar2 << 8;
  }
  iVar4 = uVar3 * 0x100 + *param_1;
  do {
    if (param_2 <= *(uint *)(iVar4 + 0xf8)) {
      iVar5 = 0;
      iVar6 = 0x3e;
      do {
        iVar1 = iVar6 + iVar5 >> 1;
        uVar3 = *(uint *)(iVar4 + iVar1 * 4);
        uVar2 = (uint3)(iVar6 + iVar5 >> 9);
        if (param_2 < uVar3) {
          iVar6 = iVar1 + -1;
        }
        else {
          if (param_2 == uVar3) {
            return CONCAT31(uVar2,1);
          }
          iVar5 = iVar1 + 1;
        }
      } while (iVar5 <= iVar6);
      return (uint)uVar2 << 8;
    }
    iVar4 = *(int *)(iVar4 + 0xfc);
  } while (iVar4 != 0);
  return (uint)uVar2 << 8;
}

// 01230590  FUN_01230590  size=126  [run]
void __fastcall FUN_01230590(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_1 == 0) {
    param_1[1] = 0;
    return;
  }
  do {
    iVar1 = *(int *)(*param_1 + 0xfc + iVar3);
    if (iVar1 != 0) {
      FUN_012304d0();
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x100);
    }
    iVar3 = iVar3 + 0x100;
  } while (iVar3 < 0x2000);
  iVar3 = *param_1;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),iVar3);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 01230620  FUN_01230620  size=389  [run]
void __thiscall FUN_01230620(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (*param_1 == 0) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = FUN_01005cb0(*(undefined4 *)((int)pvVar4 + 0x2c),0x2000);
    *param_1 = iVar5;
    iVar5 = 0;
    do {
      if (*param_1 + iVar5 != 0) {
        FUN_012304a0();
      }
      iVar5 = iVar5 + 0x100;
    } while (iVar5 < 0x2000);
  }
  uVar8 = (param_2 >> 6 ^ param_2 + 7) & 0x1f;
  iVar5 = uVar8 * 0x100 + *param_1;
  param_1[1] = param_1[1] | 1 << (sbyte)uVar8;
  uVar8 = *(uint *)(iVar5 + 0xf8);
  while (uVar8 < param_2) {
    if (*(int *)(iVar5 + 0xfc) == 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x100);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_012304a0();
      }
      *(undefined4 *)(iVar5 + 0xfc) = uVar7;
    }
    iVar5 = *(int *)(iVar5 + 0xfc);
    uVar8 = *(uint *)(iVar5 + 0xf8);
  }
  iVar6 = 0;
  while( true ) {
    uVar2 = *(uint *)(iVar5 + iVar6 * 4);
    if (uVar2 == 0xffffffff) {
      *(uint *)(iVar5 + iVar6 * 4) = param_2;
      return;
    }
    if (uVar2 == param_2) break;
    if ((param_2 <= uVar2) || (iVar6 = iVar6 + 1, 0x3e < iVar6)) {
      if (iVar6 < 0x3e) {
        iVar1 = iVar5 + iVar6 * 4;
        FUN_01015e90(iVar1 + 4,iVar1,(0x3e - iVar6) * 4);
      }
      *(uint *)(iVar5 + iVar6 * 4) = param_2;
      puVar3 = *(uint **)(iVar5 + 0xfc);
      while( true ) {
        if (puVar3 == (uint *)0x0) {
          return;
        }
        uVar2 = puVar3[0x3e];
        FUN_01015e90(puVar3 + 1,puVar3,0xf8);
        *puVar3 = uVar8;
        if (uVar2 == 0xffffffff) break;
        if (puVar3[0x3f] == 0) {
          pvVar4 = TlsGetValue(DAT_01f8fc4c);
          iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x100);
          if (iVar5 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_012304a0();
          }
          puVar3[0x3f] = uVar8;
        }
        puVar3 = (uint *)puVar3[0x3f];
        uVar8 = uVar2;
      }
      return;
    }
  }
  return;
}

// 012307B0  FUN_012307b0  size=411  [run]
void __thiscall FUN_012307b0(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  LPVOID pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  if (*param_1 != 0) {
    uVar7 = (param_2 >> 6 ^ param_2 + 7) & 0x1f;
    iVar5 = uVar7 * 0x100;
    piVar6 = (int *)(iVar5 + *param_1);
    while ((uint)piVar6[0x3e] < param_2) {
      piVar6 = (int *)piVar6[0x3f];
      if (piVar6 == (int *)0x0) {
        return;
      }
    }
    iVar2 = 0;
    do {
      if (param_2 < (uint)piVar6[iVar2]) {
        return;
      }
    } while ((piVar6[iVar2] != param_2) && (iVar2 = iVar2 + 1, iVar2 < 0x3f));
    if (iVar2 + 1 < 0x3e) {
      FUN_01015e90(piVar6 + iVar2,piVar6 + iVar2 + 1,(0x3e - iVar2) * 4);
    }
    piVar1 = (int *)piVar6[0x3f];
    if (piVar1 == (int *)0x0) {
      piVar6[0x3e] = -1;
    }
    else {
      piVar6[0x3e] = *piVar1;
      do {
        piVar3 = piVar1;
        FUN_01015e90(piVar3,piVar3 + 1,0xf8);
        if (*piVar3 == -1) {
          FUN_012304d0();
          pvVar4 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(piVar3,0x100);
          piVar6[0x3f] = 0;
          break;
        }
        if ((int *)piVar3[0x3f] == (int *)0x0) {
          piVar3[0x3e] = -1;
        }
        else {
          piVar3[0x3e] = *(int *)piVar3[0x3f];
        }
        piVar1 = (int *)piVar3[0x3f];
        piVar6 = piVar3;
      } while ((int *)piVar3[0x3f] != (int *)0x0);
    }
    piVar6 = (int *)(*param_1 + iVar5);
    if (*piVar6 == -1) {
      param_1[1] = param_1[1] & ~(1 << (sbyte)uVar7);
    }
    piVar1 = (int *)piVar6[0x3f];
    if (piVar1 != (int *)0x0) {
      do {
        if (*piVar1 == -1) {
          FUN_012304d0();
          pvVar4 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(piVar1,0x100);
          piVar6[0x3f] = 0;
          break;
        }
      } while (piVar1 != (int *)0x0);
    }
    if (param_1[1] == 0) {
      FUN_01230590();
    }
  }
  return;
}

// 01230950  thunk_FUN_01230590  size=5  [run]
void __fastcall thunk_FUN_01230590(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_1 == 0) {
    param_1[1] = 0;
    return;
  }
  do {
    iVar1 = *(int *)(*param_1 + 0xfc + iVar3);
    if (iVar1 != 0) {
      FUN_012304d0();
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x100);
    }
    iVar3 = iVar3 + 0x100;
  } while (iVar3 < 0x2000);
  iVar3 = *param_1;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),iVar3);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 01230960  FUN_01230960  size=227  [run]
void __thiscall FUN_01230960(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_8;
  
  uVar1 = param_2[2] & 0x3fffffff;
  if (uVar1 < 0x20) {
    uVar2 = uVar1 * 2;
    if (uVar1 == 0x10 || uVar2 < 0x20) {
      uVar2 = 0x20;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,uVar2,4);
  }
  iVar3 = 0x20 - param_2[1];
  puVar6 = (undefined4 *)(*param_2 + param_2[1] * 4);
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  param_2[1] = 0x20;
  if (*param_1 != 0) {
    iVar3 = 0;
    local_8 = 0;
    do {
      for (iVar4 = *param_1 + local_8; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xfc)) {
        iVar7 = 0;
        piVar5 = (int *)(iVar4 + 8);
        do {
          if (piVar5[-2] == -1) {
LAB_01230a10:
            if (iVar7 < 0x3f) goto LAB_01230a25;
            break;
          }
          *(int *)(*param_2 + iVar3) = *(int *)(*param_2 + iVar3) + 1;
          if (piVar5[-1] == -1) {
            iVar7 = iVar7 + 1;
            goto LAB_01230a10;
          }
          *(int *)(*param_2 + iVar3) = *(int *)(*param_2 + iVar3) + 1;
          if (*piVar5 == -1) {
            iVar7 = iVar7 + 2;
            goto LAB_01230a10;
          }
          *(int *)(*param_2 + iVar3) = *(int *)(*param_2 + iVar3) + 1;
          iVar7 = iVar7 + 3;
          piVar5 = piVar5 + 3;
        } while (iVar7 < 0x3f);
      }
LAB_01230a25:
      local_8 = local_8 + 0x100;
      iVar3 = iVar3 + 4;
    } while (local_8 < 0x2000);
  }
  return;
}

// 01230A50  FUN_01230a50  size=31  [run]
void FUN_01230a50(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01230A70  FUN_01230a70  size=33  [run]
void FUN_01230a70(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01230AA0  FUN_01230aa0  size=36  [run]
void FUN_01230aa0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 << 8);
  return;
}

// 01230AE0  FUN_01230ae0  size=86  [run]
void __thiscall FUN_01230ae0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x10))(param_2,&local_10);
  (**(code **)(*param_1 + 0xc))(local_10,param_3);
  (**(code **)(*param_1 + 0xc))(local_c,param_3 + 0x10);
  (**(code **)(*param_1 + 0xc))(local_8,param_3 + 0x20);
  return;
}

// 01230C30  hkpBvCompressedMeshShape::hkpBvCompressedMeshShape  size=56  [run]
undefined4 * __thiscall
hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(undefined4 *param_1,int param_2)

{
  hkpBvTreeShape::hkpBvTreeShape(param_2);
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  param_1[5] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x11;
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return param_1;
}

// 01230C70  FUN_01230c70  size=328  [run]
void __thiscall FUN_01230c70(byte param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar4 = 1 << (param_1 & 0x1f);
  local_8 = 0;
  if ((int)(unaff_ESI[2] & 0x3fffffffU) < iVar4) {
    FUN_0100a210(&PTR_vftable_018e9b94);
  }
  iVar1 = param_2[1];
  if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar5,4);
  }
  param_3[1] = iVar1;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = *(undefined4 *)(*param_2 + iVar5 * 4);
      iVar3 = FUN_01235b80(&PTR_vftable_018e9b94,uVar2,1,local_8);
      local_c = *(int *)(iVar3 * 0xc + 8);
      if (local_c == local_8) {
        if (local_8 == iVar4) {
          local_c = iVar4 + -1;
        }
        else {
          if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94);
          }
          *(undefined4 *)(*unaff_ESI + unaff_ESI[1] * 4) = uVar2;
          unaff_ESI[1] = unaff_ESI[1] + 1;
          local_8 = local_8 + 1;
        }
      }
      *(int *)(*param_3 + iVar5 * 4) = local_c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  if (unaff_ESI[1] < (int)(unaff_ESI[2] & 0x3fffffffU)) {
    FUN_0100a320(&PTR_vftable_018e9b94);
  }
  FUN_012329a0(&PTR_vftable_018e9b94);
  return;
}

// 01230DC0  FUN_01230dc0  size=1905  [run]
void FUN_01230dc0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  LPVOID pvVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int *unaff_ESI;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
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
  int *local_120;
  undefined4 local_11c;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 *local_84;
  undefined1 local_80 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [3];
  float local_38;
  int local_34;
  undefined4 local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 (*local_18) [16];
  int local_14;
  
  local_28 = (**(code **)(*unaff_ESI + 8))();
  if ((int)(param_2[2] & 0x3fffffffU) < local_28) {
    iVar8 = (param_2[2] & 0x3fffffffU) * 2;
    iVar9 = local_28;
    if (local_28 < iVar8) {
      iVar9 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar9,2);
  }
  param_2[1] = local_28;
  local_44[1] = 0;
  local_44[0] = 0;
  local_44[2] = 0x80000000;
  local_38 = 0.0;
  local_2c = 0.0;
  local_34 = 0;
  local_30 = 0;
  FUN_0121b290(local_28 * 2);
  local_14 = 0;
  if (0 < local_28) {
    do {
      (**(code **)(*unaff_ESI + 0x10))(local_14,&local_54);
      (**(code **)(*unaff_ESI + 0xc))(local_54,local_d0);
      (**(code **)(*unaff_ESI + 0xc))(local_50,local_c0);
      (**(code **)(*unaff_ESI + 0xc))(local_4c,local_b0);
      auVar13 = minps(local_d0,local_c0);
      auVar14 = maxps(local_d0,local_c0);
      local_f0 = minps(auVar13,local_b0);
      _local_e0 = maxps(auVar14,local_b0);
      fVar21 = local_38;
      if (local_38 == 0.0) {
        FUN_0121b290(1);
        fVar21 = local_38;
      }
      local_48 = (int)fVar21 * 0x30;
      local_38 = *(float *)(local_48 + local_44[0]);
      puVar1 = (undefined4 *)(local_48 + local_44[0]);
      *puVar1 = local_f0._0_4_;
      puVar1[1] = local_f0._4_4_;
      puVar1[2] = local_f0._8_4_;
      puVar1[3] = local_f0._12_4_;
      puVar1[9] = 0;
      puVar1[10] = local_14;
      puVar1[4] = local_e0._0_4_;
      puVar1[5] = local_e0._4_4_;
      puVar1[6] = fStack_d8;
      puVar1[7] = fStack_d4;
      local_80 = *(undefined1 (*) [16])(local_48 + local_44[0]);
      pfVar3 = (float *)(local_48 + 0x10 + local_44[0]);
      local_70 = *pfVar3;
      fStack_6c = pfVar3[1];
      fStack_68 = pfVar3[2];
      fStack_64 = pfVar3[3];
      local_1c = local_2c;
      local_24 = fVar21;
      if (local_2c == 0.0) {
        *(undefined4 *)(local_48 + 0x20 + local_44[0]) = 0;
        local_2c = fVar21;
      }
      else {
        if (local_38 == 0.0) {
          FUN_0121b290(1);
        }
        iVar8 = (int)local_38 * 0x30;
        local_38 = *(float *)(iVar8 + local_44[0]);
        local_18 = (undefined1 (*) [16])(iVar8 + local_44[0]);
        pauVar11 = (undefined1 (*) [16])((int)local_1c * 0x30 + local_44[0]);
        if (*(int *)(pauVar11[2] + 4) != 0) {
          fVar21 = local_70 + local_80._0_4_;
          fVar22 = fStack_6c + local_80._4_4_;
          fVar23 = fStack_68 + local_80._8_4_;
          fVar24 = local_70 - local_80._0_4_;
          fVar25 = fStack_6c - local_80._4_4_;
          fVar26 = fStack_68 - local_80._8_4_;
          do {
            iVar8 = *(int *)(pauVar11[2] + 8);
            iVar9 = *(int *)(pauVar11[2] + 4);
            auVar14 = minps(*pauVar11,local_80);
            auVar13._4_4_ = fStack_6c;
            auVar13._0_4_ = local_70;
            auVar13._8_4_ = fStack_68;
            auVar13._12_4_ = fStack_64;
            auVar13 = maxps(pauVar11[1],auVar13);
            pauVar11[1] = auVar13;
            *pauVar11 = auVar14;
            iVar9 = iVar9 * 0x30;
            pfVar3 = (float *)(iVar9 + local_44[0]);
            pfVar4 = (float *)(iVar9 + 0x10 + local_44[0]);
            iVar8 = iVar8 * 0x30;
            pfVar2 = (float *)(iVar8 + local_44[0]);
            pfVar5 = (float *)(iVar8 + 0x10 + local_44[0]);
            fVar18 = (*pfVar2 + *pfVar5) - fVar21;
            fVar19 = (pfVar2[1] + pfVar5[1]) - fVar22;
            fVar20 = (pfVar2[2] + pfVar5[2]) - fVar23;
            fVar15 = (*pfVar3 + *pfVar4) - fVar21;
            fVar16 = (pfVar3[1] + pfVar4[1]) - fVar22;
            fVar17 = (pfVar3[2] + pfVar4[2]) - fVar23;
            local_88 = iVar9 + local_44[0];
            local_84 = (undefined4 *)(iVar8 + local_44[0]);
            pauVar11 = (undefined1 (*) [16])
                       (&local_88)
                       [(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20) *
                        ((*pfVar5 - *pfVar2) + fVar24 + (pfVar5[1] - pfVar2[1]) + fVar25 +
                        (pfVar5[2] - pfVar2[2]) + fVar26) <
                        (fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15) *
                        ((*pfVar4 - *pfVar3) + fVar24 + (pfVar4[1] - pfVar3[1]) + fVar25 +
                        (pfVar4[2] - pfVar3[2]) + fVar26)];
          } while (*(int *)(pauVar11[2] + 4) != 0);
        }
        local_20 = (float)(((int)local_18 - local_44[0]) / 0x30);
        fVar21 = local_20;
        if (*(int *)pauVar11[2] != 0) {
          local_1c = (float)(local_44[0] + *(int *)pauVar11[2] * 0x30);
          *(float *)((int)local_1c + 0x24 +
                    (uint)(*(int *)((int)local_1c + 0x28) == ((int)pauVar11 - local_44[0]) / 0x30) *
                    4) = local_20;
          fVar21 = local_2c;
        }
        local_2c = fVar21;
        *(undefined4 *)local_18[2] = *(undefined4 *)pauVar11[2];
        *(int *)(local_18[2] + 4) = ((int)pauVar11 - local_44[0]) / 0x30;
        *(float *)(local_18[2] + 8) = local_24;
        *(float *)pauVar11[2] = local_20;
        *(float *)(local_48 + 0x20 + local_44[0]) = local_20;
        auVar13 = minps(*pauVar11,local_80);
        auVar14._4_4_ = fStack_6c;
        auVar14._0_4_ = local_70;
        auVar14._8_4_ = fStack_68;
        auVar14._12_4_ = fStack_64;
        auVar14 = maxps(pauVar11[1],auVar14);
        *local_18 = auVar13;
        local_18[1] = auVar14;
      }
      local_34 = local_34 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_28);
  }
  FUN_01222230(local_2c,1,0x20,0x10);
  if (local_2c != 0.0) {
    local_80._8_4_ = 0;
    local_80._0_8_ = local_80._0_8_ & 0xffffffff;
    local_80._12_4_ = 0x80000000;
    local_70 = 0.0;
    fStack_64 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    FUN_0121cca0(local_80 + 4);
    FUN_01215de0(local_44);
    fVar21 = local_38;
    auVar13 = local_80;
    local_38 = local_70;
    local_70 = fVar21;
    local_2c = 1.4013e-45;
    local_80._8_4_ = 0;
    auVar14 = local_80;
    if (-1 < (int)local_80._12_4_) {
      local_80._4_4_ = auVar13._4_4_;
      uVar6 = local_80._4_4_;
      local_80 = auVar14;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(uVar6,(local_80._12_4_ & 0x3fffffff) * 0x30);
    }
  }
  fStack_d8 = 0.05;
  local_e0 = (undefined1  [8])0x3d4ccccd3d4ccccd;
  fStack_d4 = 0.05;
  local_14 = 0;
  if (0 < local_28) {
    do {
      (**(code **)(*unaff_ESI + 0x10))(local_14,&local_a0);
      (**(code **)(*unaff_ESI + 0xc))(local_a0,local_d0);
      (**(code **)(*unaff_ESI + 0xc))(local_9c,local_c0);
      (**(code **)(*unaff_ESI + 0xc))(local_98,local_b0);
      auVar13 = minps(local_d0,local_c0);
      auVar14 = maxps(local_d0,local_c0);
      auVar13 = minps(auVar13,local_b0);
      auVar14 = maxps(auVar14,local_b0);
      local_100 = auVar14._0_4_ + (float)local_e0._0_4_;
      fStack_fc = auVar14._4_4_ + (float)local_e0._4_4_;
      fStack_f8 = auVar14._8_4_ + fStack_d8;
      fStack_f4 = auVar14._12_4_ + fStack_d4;
      local_110 = auVar13._0_4_ - (float)local_e0._0_4_;
      fStack_10c = auVar13._4_4_ - (float)local_e0._4_4_;
      fStack_108 = auVar13._8_4_ - fStack_d8;
      fStack_104 = auVar13._12_4_ - fStack_d4;
      local_84 = &local_54;
      local_88 = local_14;
      local_120 = &local_88;
      local_54 = 0;
      local_50 = 0;
      local_4c = -0x80000000;
      local_11c = 1;
      local_80._12_4_ = 0;
      local_70 = 0.0;
      fStack_6c = -0.0;
      fStack_64 = 8.96831e-44;
      pvVar10 = TlsGetValue(DAT_01f8fc4c);
      fVar21 = *(float *)((int)pvVar10 + 0xc);
      if ((*(int *)((int)pvVar10 + 8) < 0x100) ||
         (*(uint *)((int)pvVar10 + 0x10) < (int)fVar21 + 0x100U)) {
        fVar21 = (float)FUN_0100b780(0x100);
      }
      else {
        *(uint *)((int)pvVar10 + 0xc) = (int)fVar21 + 0x100U;
      }
      local_80._12_4_ = fVar21;
      fStack_6c = -8.96831e-44;
      fStack_68 = fVar21;
      FUN_0123bfd0(local_44,local_80 + 0xc,&local_120);
      fVar21 = fStack_68;
      if (fStack_68 == (float)local_80._12_4_) {
        local_70 = 0.0;
      }
      local_1c = fStack_64;
      pvVar10 = TlsGetValue(DAT_01f8fc4c);
      uVar12 = (int)local_1c * 4 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar10 + 8) < (int)uVar12) ||
          (uVar12 + (int)fVar21 != *(int *)((int)pvVar10 + 0xc))) ||
         (*(float *)((int)pvVar10 + 0x14) == fVar21)) {
        FUN_0100b9b0(fVar21,uVar12);
      }
      else {
        *(float *)((int)pvVar10 + 0xc) = fVar21;
      }
      local_70 = 0.0;
      if (-1 < (int)fStack_6c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80._12_4_,(int)fStack_6c * 4);
      }
      iVar8 = local_50;
      local_48 = local_50;
      if (local_50 * 3 == 0) {
        local_18 = (undefined1 (*) [16])0x0;
LAB_012313e5:
        local_1c = -0.0;
      }
      else {
        local_24 = (float)(local_50 * 0x30);
        local_18 = (undefined1 (*) [16])(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_24);
        local_1c = (float)((int)((int)local_24 + ((int)local_24 >> 0x1f & 0xfU)) >> 4);
        if (local_1c == 0.0) goto LAB_012313e5;
      }
      local_20 = 0.0;
      if (0 < iVar8) {
        pauVar11 = local_18 + 2;
        do {
          (**(code **)(*unaff_ESI + 0x10))(local_20,&local_94);
          (**(code **)(*unaff_ESI + 0xc))(local_94,pauVar11 + -2);
          (**(code **)(*unaff_ESI + 0xc))(local_90,pauVar11 + -1);
          (**(code **)(*unaff_ESI + 0xc))(local_8c,pauVar11);
          local_20 = (float)((int)local_20 + 1);
          pauVar11 = pauVar11 + 3;
        } while ((int)local_20 < local_48);
      }
      iVar9 = *param_2;
      iVar8 = local_14 * 2;
      uVar7 = FUN_01471ba0(local_d0,local_18,local_48,param_1,0x3d4ccccd);
      *(undefined2 *)(iVar9 + iVar8) = uVar7;
      if (-1 < (int)local_1c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,(int)local_1c << 4);
      }
      local_50 = 0;
      if (-1 < local_4c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_54,local_4c * 4);
      }
      local_14 = local_14 + 1;
      local_54 = 0;
      local_4c = 0x80000000;
    } while (local_14 < local_28);
  }
  local_44[1] = 0;
  if (-1 < local_44[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44[0],(local_44[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01231540  hkpShapeContainer::~hkpShapeContainer  size=1864  [run]
undefined4 * __thiscall hkpShapeContainer::~hkpShapeContainer(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24 [7];
  int local_8;
  
  piVar2 = param_2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x411;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 3;
  param_1[5] = vftable;
  *param_1 = hkpBvCompressedMeshShape::vftable;
  param_1[5] = hkpBvCompressedMeshShape::vftable;
  param_1[6] = param_2[2];
  *(char *)(param_1 + 7) = (char)param_2[5];
  param_1[8] = 0;
  param_1[9] = 0;
  local_2c = param_1 + 0xb;
  param_1[10] = 0x80000000;
  *local_2c = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  local_48 = param_1;
  iVar4 = (**(code **)(*param_2 + 8))();
  local_8 = iVar4;
  local_24[6] = (**(code **)(*piVar2 + 0x1c))();
  iVar4 = iVar4 + local_24[6];
  local_70 = iVar4;
  if (param_1 != (undefined4 *)0xffffffc0) {
    FUN_01242250();
  }
  iVar8 = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[5] = 0x80000000;
  if (iVar4 == 0) {
LAB_0123161a:
    local_24[5] = 0x80000000;
  }
  else {
    param_2 = (int *)(iVar4 * 4);
    iVar8 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    local_24[5] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
    if (local_24[5] == 0) goto LAB_0123161a;
  }
  cVar1 = (char)piVar2[1];
  local_24[3] = iVar8;
  local_24[4] = iVar4;
  if (cVar1 == '\0') {
    iVar5 = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    if (0 < iVar4) {
      do {
        *(undefined1 *)(iVar8 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  else if (cVar1 == '\x01') {
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    if (0 < local_8) {
      do {
        uVar7 = (**(code **)(*piVar2 + 0x14))(iVar4);
        *(uint *)(local_24[3] + iVar4 * 4) =
             *(uint *)(local_24[3] + iVar4 * 4) & 0xffffff00 | uVar7 & 0xff;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_8);
    }
    iVar4 = 0;
    if (0 < local_24[6]) {
      param_2 = (int *)(local_8 * 4);
      do {
        uVar7 = (**(code **)(*piVar2 + 0x24))(iVar4);
        *(uint *)(local_24[3] + (int)param_2) =
             *(uint *)(local_24[3] + (int)param_2) & 0xffffff00 | uVar7 & 0xff;
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
      } while (iVar4 < local_24[6]);
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    if (iVar4 == 0) {
      param_2 = (int *)0x0;
LAB_01231686:
      local_50 = -0x80000000;
    }
    else {
      param_2 = (int *)(iVar4 * 4);
      piVar6 = (int *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
      local_50 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
      param_2 = piVar6;
      if (local_50 == 0) goto LAB_01231686;
    }
    iVar8 = 0;
    local_58 = param_2;
    local_54 = iVar4;
    local_28 = local_50;
    if (0 < local_8) {
      do {
        iVar4 = (**(code **)(*piVar2 + 0x14))(iVar8);
        param_2[iVar8] = iVar4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_8);
    }
    iVar4 = 0;
    if (0 < local_24[6]) {
      local_4c = param_2 + local_8;
      do {
        iVar8 = (**(code **)(*piVar2 + 0x24))(iVar4);
        *local_4c = iVar8;
        iVar4 = iVar4 + 1;
        local_4c = local_4c + 1;
      } while (iVar4 < local_24[6]);
    }
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0x80000000;
    FUN_01230c70(&local_58,local_24);
    iVar4 = 0;
    if (0 < local_24[4]) {
      do {
        *(uint *)(local_24[3] + iVar4 * 4) =
             (uint)*(byte *)(local_24[0] + iVar4 * 4) |
             *(uint *)(local_24[3] + iVar4 * 4) & 0xffffff00;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_24[4]);
    }
    local_24[1] = 0;
    if (-1 < local_24[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],local_24[2] * 4);
    }
    if (-1 < local_28) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_2,local_28 * 4);
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
  }
  iVar4 = local_8;
  iVar8 = local_70;
  cVar1 = *(char *)((int)piVar2 + 5);
  if (cVar1 == '\0') {
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    if (0 < local_24[4]) {
      do {
        *(undefined1 *)(local_24[3] + 1 + iVar4 * 4) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_24[4]);
    }
    goto LAB_01231a2e;
  }
  if (cVar1 == '\x01') {
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    iVar8 = 0;
    if (0 < local_8) {
      do {
        uVar7 = (**(code **)(*piVar2 + 0x18))(iVar8);
        *(uint *)(local_24[3] + iVar8 * 4) =
             (uVar7 & 0xff) << 8 | *(uint *)(local_24[3] + iVar8 * 4) & 0xffff00ff;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    iVar8 = 0;
    if (0 < local_24[6]) {
      iVar4 = iVar4 * 4;
      do {
        uVar7 = (**(code **)(*piVar2 + 0x28))(iVar8);
        *(uint *)(local_24[3] + iVar4) =
             (uVar7 & 0xff) << 8 | *(uint *)(local_24[3] + iVar4) & 0xffff00ff;
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar8 < local_24[6]);
    }
    goto LAB_01231a2e;
  }
  if (cVar1 != '\x02') {
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    goto LAB_01231a2e;
  }
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  if (local_70 == 0) {
    param_2 = (int *)0x0;
LAB_0123189f:
    local_50 = -0x80000000;
  }
  else {
    param_2 = (int *)(local_70 * 4);
    piVar6 = (int *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    local_50 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
    param_2 = piVar6;
    if (local_50 == 0) goto LAB_0123189f;
  }
  piVar6 = param_2;
  local_54 = iVar8;
  iVar4 = 0;
  local_58 = param_2;
  local_28 = local_50;
  if (0 < local_8) {
    do {
      iVar8 = (**(code **)(*piVar2 + 0x18))(iVar4);
      piVar6[iVar4] = iVar8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_8);
  }
  iVar4 = 0;
  if (0 < local_24[6]) {
    piVar6 = param_2 + local_8;
    do {
      iVar8 = (**(code **)(*piVar2 + 0x28))(iVar4);
      *piVar6 = iVar8;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < local_24[6]);
  }
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  FUN_01230c70(&local_58,local_24);
  iVar4 = 0;
  if (0 < local_24[4]) {
    do {
      *(uint *)(local_24[3] + iVar4 * 4) =
           (uint)*(byte *)(local_24[0] + iVar4 * 4) << 8 |
           *(uint *)(local_24[3] + iVar4 * 4) & 0xffff00ff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_24[4]);
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],local_24[2] * 4);
  }
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_2,local_28 * 4);
  }
LAB_01231a2e:
  piVar6 = param_2;
  param_2 = (int *)((uint)param_2 & 0xffffff);
  if (piVar2[5] == 6) {
    iVar8 = 0;
    iVar4 = local_8;
    if (0 < local_8) {
      do {
        *(undefined2 *)(local_24[3] + 2 + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_8);
    }
  }
  else {
    param_2 = (int *)CONCAT13(1,(int3)piVar6);
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0x80000000;
    FUN_01230dc0((char)piVar2[6],local_24);
    iVar4 = local_8;
    iVar8 = 0;
    if (0 < local_8) {
      do {
        *(uint *)(local_24[3] + iVar8 * 4) =
             CONCAT22(*(undefined2 *)(local_24[0] + iVar8 * 2),
                      *(undefined2 *)(local_24[3] + iVar8 * 4));
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_8);
    }
    local_24[1] = 0;
    if (-1 < local_24[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],(local_24[2] & 0x3fffffffU) * 2);
    }
  }
  if (0 < local_24[6]) {
    iVar4 = iVar4 * 4;
    iVar8 = local_24[6];
    do {
      *(undefined2 *)(iVar4 + 2 + local_24[3]) = 0;
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_6c = local_24 + 3;
  local_68 = piVar2;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  iVar4 = (**(code **)(*piVar2 + 0x1c))();
  local_2c = (undefined4 *)iVar4;
  if ((int)(local_5c & 0x3fffffff) < iVar4) {
    iVar8 = (local_5c & 0x3fffffff) * 2;
    if (iVar8 <= iVar4) {
      iVar8 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_64,iVar8,4);
  }
  puVar3 = local_48;
  iVar8 = iVar4 - local_60;
  puVar9 = (undefined4 *)(local_64 + local_60 * 4);
  local_60 = iVar4;
  if (0 < iVar8) {
    for (; local_60 = (int)local_2c, iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  local_78 = piVar2[2];
  local_8d = param_2._3_1_;
  local_7c = piVar2[3];
  local_3c = 0x80000000;
  local_30 = 0x80000000;
  local_90 = 0x100;
  local_8e = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 1;
  local_74 = DAT_01b2154c;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
  ::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::
  BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>_2
            (&local_90,&local_6c,&local_44);
  if (piVar2[7] != 0) {
    FUN_01232320(&local_44);
  }
  if (piVar2[8] != 0) {
    FUN_01232320(&local_38);
  }
  local_34 = 0;
  if ((local_30 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 4);
  }
  local_38 = 0;
  local_30 = 0x80000000;
  local_40 = 0;
  if ((local_3c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44,local_3c * 4);
  }
  local_44 = 0;
  local_3c = 0x80000000;
  FUN_0123b420();
  local_24[4] = 0;
  if ((local_24[5] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[3],local_24[5] * 4);
  }
  return puVar3;
}

// 01231CA0  hkBaseObject::hkBaseObject_104  size=143  [run]
void __fastcall hkBaseObject::hkBaseObject_104(undefined4 *param_1)

{
  *param_1 = hkpBvCompressedMeshShape::vftable;
  param_1[5] = hkpBvCompressedMeshShape::vftable;
  FUN_011ee350();
  param_1[0xc] = 0;
  if (-1 < (int)param_1[0xd]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],param_1[0xd] * 4);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 01231D40  FUN_01231d40  size=15  [run]
void __thiscall FUN_01231d40(int param_1,byte param_2)

{
  *(byte *)(param_1 + 3) = param_2 | 1;
  return;
}

// 01231D60  FUN_01231d60  size=15  [run]
void __thiscall FUN_01231d60(int param_1,char param_2)

{
  *(char *)(param_1 + 3) = param_2 * '\x02';
  return;
}

// 01231D90  FUN_01231d90  size=26  [run]
void __thiscall FUN_01231d90(int param_1,int param_2)

{
  *(byte *)(param_1 + 3) = (byte)((uint)(param_2 >> 1) >> 8) | 0x80;
  *(char *)(param_1 + 4) = (char)(param_2 >> 1);
  return;
}

// 01231DB0  FUN_01231db0  size=24  [run]
void __thiscall FUN_01231db0(int param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 3) = (byte)((uint)param_2 >> 8) & 0x7f;
  *(char *)(param_1 + 4) = (char)param_2;
  return;
}

// 01231DE0  FUN_01231de0  size=35  [run]
void __thiscall FUN_01231de0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  *param_1 = *param_2 - fVar1;
  param_1[1] = fVar5 - fVar2;
  param_1[2] = fVar6 - fVar3;
  param_1[3] = fVar7 - fVar4;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  param_1[4] = *param_2 + fVar1;
  param_1[5] = fVar5 + fVar2;
  param_1[6] = fVar6 + fVar3;
  param_1[7] = fVar7 + fVar4;
  return;
}

// 01231E10  FUN_01231e10  size=32  [run]
void __thiscall
FUN_01231e10(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  auVar1 = maxps(*param_2,*param_3);
  param_1[1] = auVar1;
  return;
}

// 01231E40  FUN_01231e40  size=18  [run]
void __thiscall FUN_01231e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01231E60  FUN_01231e60  size=18  [run]
void __thiscall FUN_01231e60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01231E80  FUN_01231e80  size=29  [run]
void __thiscall FUN_01231e80(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *param_1 = *param_2 | *param_3;
  param_1[1] = uVar1 | uVar4;
  param_1[2] = uVar2 | uVar5;
  param_1[3] = uVar3 | uVar6;
  return;
}

// 01231EC0  FUN_01231ec0  size=20  [run]
void __thiscall FUN_01231ec0(uint *param_1,int param_2)

{
  *param_1 = (uint)(byte)*param_1 | param_2 << 8;
  return;
}

// 01231EF0  FUN_01231ef0  size=19  [run]
void __thiscall FUN_01231ef0(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xffffff00 | param_2;
  return;
}

// 01231F20  FUN_01231f20  size=20  [run]
void __thiscall FUN_01231f20(uint *param_1,int param_2)

{
  *param_1 = (uint)(byte)*param_1 | param_2 << 8;
  return;
}

// 01231F50  FUN_01231f50  size=19  [run]
void __thiscall FUN_01231f50(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xffffff00 | param_2;
  return;
}

// 01231F80  FUN_01231f80  size=20  [run]
void __thiscall FUN_01231f80(uint *param_1,int param_2)

{
  *param_1 = (uint)(byte)*param_1 | param_2 << 8;
  return;
}

// 01231FB0  FUN_01231fb0  size=19  [run]
void __thiscall FUN_01231fb0(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xffffff00 | param_2;
  return;
}

// 01232000  FUN_01232000  size=32  [run]
char FUN_01232000(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_4 == param_3) {
    return (param_3 == param_2) * '\x02' + '\x01';
  }
  return '\x02';
}

// 01232030  FUN_01232030  size=21  [run]
void __thiscall FUN_01232030(undefined4 *param_1,undefined2 param_2)

{
  *param_1 = CONCAT22(param_2,*(undefined2 *)param_1);
  return;
}

// 01232050  FUN_01232050  size=22  [run]
void __thiscall FUN_01232050(uint *param_1,byte param_2)

{
  *param_1 = *param_1 & 0xffffff00 | (uint)param_2;
  return;
}

// 01232070  FUN_01232070  size=26  [run]
void __thiscall FUN_01232070(uint *param_1,byte param_2)

{
  *param_1 = (uint)param_2 << 8 | *param_1 & 0xffff00ff;
  return;
}

// 012320C0  FUN_012320c0  size=14  [run]
void __fastcall FUN_012320c0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x012320cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  return;
}

// 012320E0  FUN_012320e0  size=11  [run]
int FUN_012320e0(int param_1)

{
  return param_1 + 0x40;
}

// 012320F0  FUN_012320f0  size=18  [run]
void __thiscall FUN_012320f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// 01232110  FUN_01232110  size=17  [run]
uint FUN_01232110(int param_1,undefined4 param_2,uint param_3)

{
  return param_1 * -0x61c8864f & param_3;
}

// 01232130  FUN_01232130  size=12  [run]
void FUN_01232130(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

// 01232140  FUN_01232140  size=13  [run]
bool FUN_01232140(undefined4 param_1,char param_2)

{
  return param_2 != '\0';
}

// 01232150  FUN_01232150  size=42  [run]
undefined4 FUN_01232150(int param_1,char param_2,int param_3,char param_4)

{
  if (((param_2 != '\0') == (param_4 != '\0')) && (param_1 == param_3)) {
    return 1;
  }
  return 0;
}

// 01232180  FUN_01232180  size=20  [run]
void __thiscall FUN_01232180(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 012321A0  FUN_012321a0  size=14  [run]
void __thiscall FUN_012321a0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 012321E0  FUN_012321e0  size=8  [run]
undefined4 FUN_012321e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012321F0  FUN_012321f0  size=8  [run]
undefined4 FUN_012321f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01232280  FUN_01232280  size=22  [run]
void __thiscall FUN_01232280(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 012322A0  FUN_012322a0  size=18  [run]
bool FUN_012322a0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 012322C0  FUN_012322c0  size=8  [run]
undefined4 FUN_012322c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012322D0  FUN_012322d0  size=8  [run]
undefined4 FUN_012322d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01232320  FUN_01232320  size=44  [run]
void __thiscall FUN_01232320(undefined4 *param_1,undefined4 *param_2)

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

// 012323B0  FUN_012323b0  size=18  [run]
int __thiscall FUN_012323b0(int *param_1,int param_2)

{
  return param_2 * 0x60 + *param_1;
}

// 01232460  FUN_01232460  size=15  [run]
int __thiscall FUN_01232460(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01232480  FUN_01232480  size=21  [run]
uint __thiscall FUN_01232480(int param_1,uint param_2,uint param_3)

{
  return (*(int *)(param_1 + 0x60) << 7 | param_2) * 2 | param_3;
}

// 012324A0  FUN_012324a0  size=15  [run]
int __thiscall FUN_012324a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 012324D0  FUN_012324d0  size=42  [run]
void __fastcall FUN_012324d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (-1 < param_1[2]) {
    iVar2 = *param_1;
    do {
      if (*(char *)(iVar2 + 4) != '\0') {
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 <= param_1[2]);
  }
  return;
}

// 01232500  FUN_01232500  size=32  [run]
void __thiscall FUN_01232500(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 4 + param_3 * 0xc);
  *param_2 = *(undefined4 *)(*param_1 + param_3 * 0xc);
  param_2[1] = uVar1;
  return;
}

// 01232520  FUN_01232520  size=19  [run]
undefined4 __thiscall FUN_01232520(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 01232540  FUN_01232540  size=22  [run]
void __thiscall FUN_01232540(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 8 + param_2 * 0xc) = param_3;
  return;
}

// 01232560  FUN_01232560  size=58  [run]
void __thiscall FUN_01232560(int *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    iVar1 = *param_1 + param_2 * 0xc;
    do {
      if (*(char *)(iVar1 + 4) != '\0') {
        return;
      }
      param_2 = param_2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 012325A0  FUN_012325a0  size=21  [run]
void __thiscall FUN_012325a0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 012325C0  FUN_012325c0  size=197  [run]
void __thiscall
FUN_012325c0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01234780(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar4 = param_3 * -0x61c8864f & param_1[2];
  iVar2 = 1;
  iVar3 = uVar4 * 0xc;
  if ((char)*(undefined4 *)(iVar1 + 4 + iVar3) != '\0') {
    do {
      if ((((char)*(undefined4 *)(iVar1 + 4 + iVar3) != '\0') == ((char)param_4 != '\0')) &&
         (*(int *)(iVar1 + iVar3) == param_3)) {
        iVar2 = 0;
        goto LAB_01232658;
      }
      uVar4 = uVar4 + 1 & param_1[2];
      iVar3 = uVar4 * 0xc;
    } while (*(char *)(iVar3 + 4 + iVar1) != '\0');
    iVar2 = 1;
  }
LAB_01232658:
  param_1[1] = param_1[1] + iVar2;
  iVar2 = uVar4 * 0xc;
  *(int *)(iVar1 + iVar2) = param_3;
  *(undefined4 *)(iVar1 + 4 + iVar2) = param_4;
  *(undefined4 *)(iVar2 + 8 + *param_1) = param_5;
  return;
}

// 01232690  FUN_01232690  size=117  [run]
uint __thiscall FUN_01232690(int *param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar3 = param_2 * -0x61c8864f & uVar1;
    if (*(char *)(iVar2 + 4 + uVar3 * 0xc) != '\0') {
      do {
        piVar4 = (int *)(iVar2 + uVar3 * 0xc);
        if ((((char)piVar4[1] != '\0') == (param_3 != '\0')) && (*piVar4 == param_2)) {
          return uVar3;
        }
        uVar3 = uVar3 + 1 & uVar1;
      } while (*(char *)(iVar2 + 4 + uVar3 * 0xc) != '\0');
    }
  }
  return uVar1 + 1;
}

// 01232710  FUN_01232710  size=133  [run]
undefined4 __thiscall FUN_01232710(int *param_1,int param_2,char param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar3 = param_2 * -0x61c8864f & uVar1;
    if (*(char *)(iVar2 + 4 + uVar3 * 0xc) != '\0') {
      do {
        piVar4 = (int *)(iVar2 + uVar3 * 0xc);
        if ((((char)piVar4[1] != '\0') == (param_3 != '\0')) && (*piVar4 == param_2)) {
          return *(undefined4 *)(iVar2 + 8 + uVar3 * 0xc);
        }
        uVar3 = uVar3 + 1 & uVar1;
      } while (*(char *)(iVar2 + 4 + uVar3 * 0xc) != '\0');
    }
  }
  return param_4;
}

// 012327A0  FUN_012327a0  size=57  [run]
undefined4 __thiscall
FUN_012327a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_01232690(param_2,param_3);
  if (iVar1 <= param_1[2]) {
    *param_4 = *(undefined4 *)(*param_1 + 8 + iVar1 * 0xc);
    return 0;
  }
  return 1;
}

// 012327E0  FUN_012327e0  size=246  [run]
void __thiscall FUN_012327e0(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_1[1] = param_1[1] + -1;
  *(undefined1 *)(*param_1 + 4 + param_2 * 0xc) = 0;
  uVar7 = param_1[2];
  uVar5 = uVar7 + param_2 & uVar7;
  cVar1 = *(char *)(*param_1 + 4 + uVar5 * 0xc);
  while (cVar1 != '\0') {
    uVar5 = uVar5 + uVar7 & uVar7;
    cVar1 = *(char *)(*param_1 + 4 + uVar5 * 0xc);
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_2 + 1 & uVar7;
  iVar3 = uVar5 * 0xc;
  cVar1 = *(char *)(*param_1 + 4 + iVar3);
  while (cVar1 != '\0') {
    iVar2 = *param_1;
    uVar7 = *(int *)(iVar2 + iVar3) * -0x61c8864f & uVar7;
    if ((((uVar5 < uVar6) || (uVar7 <= param_2)) &&
        ((param_2 <= uVar5 || ((uVar7 <= param_2 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= param_2 || (uVar6 <= uVar7)))) {
      iVar4 = param_2 * 0xc;
      *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar2 + iVar3);
      *(undefined4 *)(iVar4 + 4 + iVar2) = *(undefined4 *)(iVar2 + 4 + iVar3);
      *(undefined4 *)(iVar4 + 8 + *param_1) = *(undefined4 *)(*param_1 + 8 + iVar3);
      *(undefined1 *)(iVar3 + 4 + *param_1) = 0;
      param_2 = uVar5;
    }
    uVar7 = param_1[2];
    uVar5 = uVar5 + 1 & uVar7;
    iVar3 = uVar5 * 0xc;
    cVar1 = *(char *)(iVar3 + 4 + *param_1);
  }
  return;
}

// 012328F0  FUN_012328f0  size=124  [run]
void __thiscall FUN_012328f0(undefined4 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int local_c;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    piVar2 = (int *)*param_1;
    local_c = uVar1 + 1;
    piVar4 = piVar2;
    do {
      if ((char)piVar4[1] != '\0') {
        uVar3 = *piVar4 * -0x61c8864f;
        while( true ) {
          uVar3 = uVar3 & uVar1;
          if ((((char)piVar2[uVar3 * 3 + 1] != '\0') == ((char)piVar4[1] != '\0')) &&
             (piVar2[uVar3 * 3] == *piVar4)) break;
          uVar3 = uVar3 + 1;
        }
      }
      piVar4 = piVar4 + 3;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_2 = 1;
  return;
}

// 01232970  FUN_01232970  size=35  [run]
void __fastcall FUN_01232970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + 4 + *param_1) = 0;
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 012329A0  FUN_012329a0  size=70  [run]
void __thiscall FUN_012329a0(undefined4 *param_1,int *param_2)

{
  FUN_01232970();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 012329F0  FUN_012329f0  size=31  [run]
void __thiscall FUN_012329f0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 01232A10  FUN_01232a10  size=32  [run]
int FUN_01232a10(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

// 01232A30  FUN_01232a30  size=59  [run]
void __thiscall FUN_01232a30(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 / 0xc;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = param_3 - 1;
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + 4 + *param_1) = 0;
      iVar1 = iVar1 + 0xc;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 01232A80  FUN_01232a80  size=48  [run]
void __thiscall FUN_01232a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 01232AB0  FUN_01232ab0  size=12  [run]
void __thiscall FUN_01232ab0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232AC0  FUN_01232ac0  size=12  [run]
void __thiscall FUN_01232ac0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232AE0  FUN_01232ae0  size=12  [run]
void __thiscall FUN_01232ae0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232B00  FUN_01232b00  size=12  [run]
void __thiscall FUN_01232b00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232B20  FUN_01232b20  size=12  [run]
void __thiscall FUN_01232b20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232B30  FUN_01232b30  size=12  [run]
void __thiscall FUN_01232b30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232B50  FUN_01232b50  size=12  [run]
void __thiscall FUN_01232b50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232B60  FUN_01232b60  size=43  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01232b60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  param_2[4] = param_1[4] - *param_1;
  param_2[5] = fVar4 - fVar1;
  param_2[6] = fVar5 - fVar2;
  param_2[7] = fVar6 - fVar3;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  param_2[3] = fVar6;
  fVar4 = param_2[5] * fRam01b249b4;
  fVar5 = param_2[6] * fRam01b249b8;
  fVar6 = param_2[7] * fRam01b249bc;
  param_2[4] = param_2[4] * _DAT_01b249b0;
  param_2[5] = fVar4;
  param_2[6] = fVar5;
  param_2[7] = fVar6;
  return;
}

// 01232B90  FUN_01232b90  size=43  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01232b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  param_2[4] = param_1[4] - *param_1;
  param_2[5] = fVar4 - fVar1;
  param_2[6] = fVar5 - fVar2;
  param_2[7] = fVar6 - fVar3;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  param_2[3] = fVar6;
  fVar4 = param_2[5] * fRam01b249c4;
  fVar5 = param_2[6] * fRam01b249c8;
  fVar6 = param_2[7] * fRam01b249cc;
  param_2[4] = param_2[4] * _DAT_01b249c0;
  param_2[5] = fVar4;
  param_2[6] = fVar5;
  param_2[7] = fVar6;
  return;
}

// 01232BF0  FUN_01232bf0  size=14  [run]
void __thiscall FUN_01232bf0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01232C00  FUN_01232c00  size=18  [run]
int __thiscall FUN_01232c00(int *param_1,int param_2)

{
  return param_2 * 0x60 + *param_1;
}

// 01232C40  FUN_01232c40  size=15  [run]
int __thiscall FUN_01232c40(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01232C90  FUN_01232c90  size=34  [run]
void FUN_01232c90(int param_1,int param_2,undefined4 *param_3)

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

// 01232D00  FUN_01232d00  size=24  [run]
void __thiscall
FUN_01232d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01232D20  FUN_01232d20  size=50  [run]
undefined4 __thiscall FUN_01232d20(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 01232DA0  FUN_01232da0  size=15  [run]
void __thiscall FUN_01232da0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x7c);
  return;
}

// 01232DC0  FUN_01232dc0  size=33  [run]
void __thiscall FUN_01232dc0(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 8;
  param_1[1] = param_2 >> 1 & 0x7f;
  param_1[2] = param_2 & 1;
  return;
}

// 01232E10  FUN_01232e10  size=13  [run]
int __thiscall FUN_01232e10(int param_1,int param_2)

{
  return param_1 + param_2 * 2;
}

// 01232E70  FUN_01232e70  size=13  [run]
int __thiscall FUN_01232e70(int param_1,int param_2)

{
  return param_1 + param_2 * 4;
}

// 01232E90  FUN_01232e90  size=14  [run]
void __thiscall FUN_01232e90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 01232EB0  FUN_01232eb0  size=13  [run]
void __thiscall FUN_01232eb0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}

// 01232ED0  FUN_01232ed0  size=13  [run]
void __thiscall FUN_01232ed0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 5) = param_2;
  return;
}

// 01232F30  FUN_01232f30  size=111  [run]
void FUN_01232f30(float *param_1,uint *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *param_2;
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  *param_3 = (float)(uVar1 & 0x7ff) * 0.0004885198 * (param_1[4] - *param_1) + *param_1;
  param_3[1] = (float)(uVar1 >> 0xb & 0x7ff) * 0.0004885198 * (fVar2 - fVar5) + fVar8;
  param_3[2] = (float)(uVar1 >> 0x16) * 0.0009775171 * (fVar3 - fVar6) + fVar9;
  param_3[3] = (fVar4 - fVar7) * 0.0 + fVar10;
  return;
}

// 01232FA0  FUN_01232fa0  size=110  [run]
void FUN_01232fa0(float *param_1,ushort *param_2,float *param_3)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *param_2;
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  *param_3 = (float)(uVar1 & 0x1f) * 0.032258064 * (param_1[4] - *param_1) + *param_1;
  param_3[1] = (float)(uVar1 >> 5 & 0x1f) * 0.032258064 * (fVar2 - fVar5) + fVar8;
  param_3[2] = (float)(uVar1 >> 10) * 0.015873017 * (fVar3 - fVar6) + fVar9;
  param_3[3] = (fVar4 - fVar7) * 0.0 + fVar10;
  return;
}

// 01233060  FUN_01233060  size=25  [run]
int __thiscall FUN_01233060(uint *param_1,int param_2)

{
  return (int)((*param_1 >> 0x1e) + param_2) % 3;
}

// 01233090  FUN_01233090  size=14  [run]
void __thiscall FUN_01233090(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 012330C0  FUN_012330c0  size=16  [run]
void __thiscall FUN_012330c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x200) = param_2;
  return;
}

// 012330D0  FUN_012330d0  size=13  [run]
int __thiscall FUN_012330d0(int param_1,int param_2)

{
  return param_1 + param_2 * 4;
}

// 01233110  FUN_01233110  size=16  [run]
void __thiscall FUN_01233110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x200) = param_2;
  return;
}

// 01233120  FUN_01233120  size=13  [run]
int __thiscall FUN_01233120(int param_1,int param_2)

{
  return param_1 + param_2 * 4;
}

// 01233150  FUN_01233150  size=16  [run]
void __thiscall FUN_01233150(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x400) = param_2;
  return;
}

// 01233160  FUN_01233160  size=13  [run]
int __thiscall FUN_01233160(int param_1,int param_2)

{
  return param_1 + param_2 * 8;
}

// 01233190  FUN_01233190  size=13  [run]
int __thiscall FUN_01233190(int param_1,int param_2)

{
  return param_1 + param_2 * 4;
}

// 012331B0  FUN_012331b0  size=14  [run]
void __thiscall FUN_012331b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 012331D0  FUN_012331d0  size=59  [run]
uint __thiscall FUN_012331d0(int *param_1,int *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 1;
    }
    if (param_2[1] <= param_1[1]) {
      return (uint)(param_2[1] < param_1[1]);
    }
  }
  return 0xffffffff;
}

// 01233210  FUN_01233210  size=28  [run]
void __thiscall FUN_01233210(uint *param_1,uint param_2,int param_3)

{
  *param_1 = param_2 & 0x3fffffff | param_3 << 0x1e;
  return;
}

// 01233250  FUN_01233250  size=15  [run]
int __thiscall FUN_01233250(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01233270  FUN_01233270  size=96  [run]
void __thiscall FUN_01233270(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,4,0,param_3);
  }
  return;
}

// 012332D0  FUN_012332d0  size=15  [run]
int __thiscall FUN_012332d0(int *param_1,int param_2)

{
  return param_2 * 5 + *param_1;
}

// 012332F0  FUN_012332f0  size=96  [run]
void __thiscall FUN_012332f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,5,0,param_3);
  }
  return;
}

// 01233360  FUN_01233360  size=15  [run]
int __thiscall FUN_01233360(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01233370  FUN_01233370  size=96  [run]
void __thiscall FUN_01233370(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,4,0,param_3);
  }
  return;
}

// 012333D0  FUN_012333d0  size=52  [run]
undefined4 __thiscall FUN_012333d0(int param_1,undefined4 param_2,int param_3)

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

// 01233430  FUN_01233430  size=96  [run]
void __thiscall FUN_01233430(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,2,0,param_3);
  }
  return;
}

// 01233490  FUN_01233490  size=96  [run]
void __thiscall FUN_01233490(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,8,0,param_3);
  }
  return;
}

// 012334F0  FUN_012334f0  size=52  [run]
undefined4 __thiscall FUN_012334f0(int param_1,undefined4 param_2,int param_3)

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

// 01233540  FUN_01233540  size=15  [run]
int __thiscall FUN_01233540(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01233550  FUN_01233550  size=96  [run]
void __thiscall FUN_01233550(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,8,0,param_3);
  }
  return;
}

// 012335E0  FUN_012335e0  size=26  [run]
void __thiscall FUN_012335e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01233600  FUN_01233600  size=14  [run]
int FUN_01233600(int param_1)

{
  return *(int *)(param_1 + 4) * 5;
}

// 01233610  FUN_01233610  size=15  [run]
int FUN_01233610(int param_1)

{
  return *(int *)(param_1 + 4) * 4;
}

// 01233620  FUN_01233620  size=17  [run]
int FUN_01233620(int param_1)

{
  return *(int *)(param_1 + 4) * 0x60;
}

// 01233640  FUN_01233640  size=15  [run]
int FUN_01233640(int param_1)

{
  return *(int *)(param_1 + 4) * 4;
}

// 01233650  FUN_01233650  size=15  [run]
int FUN_01233650(int param_1)

{
  return *(int *)(param_1 + 4) * 4;
}

// 01233660  FUN_01233660  size=17  [run]
int FUN_01233660(int param_1)

{
  return *(int *)(param_1 + 4) * 8;
}

// 01233680  FUN_01233680  size=13  [run]
int FUN_01233680(int param_1)

{
  return *(int *)(param_1 + 4) * 2;
}

// 01233690  FUN_01233690  size=17  [run]
int FUN_01233690(int param_1)

{
  return *(int *)(param_1 + 4) * 8;
}

// 012336C0  FUN_012336c0  size=26  [run]
void __thiscall FUN_012336c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 012336E0  FUN_012336e0  size=18  [run]
int __thiscall FUN_012336e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01233750  FUN_01233750  size=18  [run]
int __thiscall FUN_01233750(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 012337C0  FUN_012337c0  size=18  [run]
int __thiscall FUN_012337c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 012337F0  FUN_012337f0  size=15  [run]
int __thiscall FUN_012337f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01233810  FUN_01233810  size=18  [run]
int __thiscall FUN_01233810(int *param_1,int param_2)

{
  return param_2 * 0x230 + *param_1;
}

// 01233830  FUN_01233830  size=18  [run]
void __thiscall FUN_01233830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01233850  FUN_01233850  size=23  [run]
void __thiscall FUN_01233850(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 10;
  param_1[1] = uVar1 >> 10;
  param_1[2] = uVar2 >> 10;
  param_1[3] = uVar3 >> 10;
  return;
}

// 01233870  FUN_01233870  size=23  [run]
void __thiscall FUN_01233870(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 01233890  FUN_01233890  size=23  [run]
void __thiscall FUN_01233890(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 0x15;
  param_1[1] = uVar1 >> 0x15;
  param_1[2] = uVar2 >> 0x15;
  param_1[3] = uVar3 >> 0x15;
  return;
}

// 012338B0  FUN_012338b0  size=18  [run]
void __thiscall FUN_012338b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 012338D0  FUN_012338d0  size=23  [run]
/* WARNING: Removing unreachable block (ram,0x012338da) */

void __thiscall FUN_012338d0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1 << 0x10;
  param_1[1] = uVar2 << 0x10 | uVar1 >> 0x30;
  return;
}

// 012338F0  FUN_012338f0  size=23  [run]
void __thiscall FUN_012338f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 5;
  param_1[1] = uVar1 >> 5;
  param_1[2] = uVar2 >> 5;
  param_1[3] = uVar3 >> 5;
  return;
}

// 01233910  FUN_01233910  size=23  [run]
void __thiscall FUN_01233910(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 01233930  FUN_01233930  size=23  [run]
void __thiscall FUN_01233930(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 0x16;
  param_1[1] = uVar1 >> 0x16;
  param_1[2] = uVar2 >> 0x16;
  param_1[3] = uVar3 >> 0x16;
  return;
}

// 01233950  FUN_01233950  size=23  [run]
void __thiscall FUN_01233950(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 0xb;
  param_1[1] = uVar1 >> 0xb;
  param_1[2] = uVar2 >> 0xb;
  param_1[3] = uVar3 >> 0xb;
  return;
}

// 01233970  FUN_01233970  size=23  [run]
/* WARNING: Removing unreachable block (ram,0x0123397a) */

void __thiscall FUN_01233970(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1 << 8;
  param_1[1] = uVar2 << 8 | uVar1 >> 0x38;
  return;
}

// 01233990  FUN_01233990  size=23  [run]
void __thiscall FUN_01233990(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 >> 3;
  param_1[1] = uVar1 >> 3;
  param_1[2] = uVar2 >> 3;
  param_1[3] = uVar3 >> 3;
  return;
}

// 012339D0  FUN_012339d0  size=15  [run]
int __thiscall FUN_012339d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 012339E0  FUN_012339e0  size=15  [run]
int __thiscall FUN_012339e0(int *param_1,int param_2)

{
  return param_2 * 5 + *param_1;
}

// 01233A50  FUN_01233a50  size=49  [run]
void FUN_01233a50(uint *param_1,undefined1 (*param_2) [16])

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

// 01233AA0  FUN_01233aa0  size=15  [run]
int __thiscall FUN_01233aa0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01233AB0  FUN_01233ab0  size=18  [run]
void FUN_01233ab0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return;
}

// 01233AD0  FUN_01233ad0  size=52  [run]
undefined4 __thiscall FUN_01233ad0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x60);
    return uVar3;
  }
  return 0;
}

// 01233B20  FUN_01233b20  size=41  [run]
void FUN_01233b20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 8) = *param_3;
      *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_3[1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01233B90  FUN_01233b90  size=29  [run]
void __thiscall FUN_01233b90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01233C10  FUN_01233c10  size=24  [run]
void __thiscall
FUN_01233c10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01233C30  FUN_01233c30  size=52  [run]
undefined4 __thiscall FUN_01233c30(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01233CA0  FUN_01233ca0  size=24  [run]
void __thiscall
FUN_01233ca0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01233CC0  FUN_01233cc0  size=64  [run]
undefined4 __thiscall FUN_01233cc0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 0x230);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 0x230;
  return uVar2;
}

// 01233D30  FUN_01233d30  size=25  [run]
bool __thiscall FUN_01233d30(int *param_1,int param_2,int param_3)

{
  return *(uint *)(*param_1 + param_2 * 4) < *(uint *)(*param_1 + param_3 * 4);
}

// 01233D70  FUN_01233d70  size=52  [run]
undefined4 __thiscall FUN_01233d70(int param_1,undefined4 param_2,int param_3)

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

// 01233DC0  FUN_01233dc0  size=52  [run]
undefined4 __thiscall FUN_01233dc0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,5);
    return uVar3;
  }
  return 0;
}

// 01233E10  FUN_01233e10  size=29  [run]
void __thiscall FUN_01233e10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01233E30  FUN_01233e30  size=11  [run]
int FUN_01233e30(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01233E40  FUN_01233e40  size=15  [run]
int __thiscall FUN_01233e40(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01233E50  FUN_01233e50  size=29  [run]
void __thiscall FUN_01233e50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01233E70  FUN_01233e70  size=11  [run]
int FUN_01233e70(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01233E90  FUN_01233e90  size=28  [run]
void __thiscall FUN_01233e90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01233EB0  FUN_01233eb0  size=11  [run]
int FUN_01233eb0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01233ED0  FUN_01233ed0  size=28  [run]
void __thiscall FUN_01233ed0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x230);
  return;
}

// 01233EF0  FUN_01233ef0  size=13  [run]
void __thiscall FUN_01233ef0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}

// 01233F60  FUN_01233f60  size=39  [run]
int __thiscall FUN_01233f60(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) == *param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x400));
  }
  return -1;
}

// 01233FC0  FUN_01233fc0  size=80  [run]
undefined4 __thiscall FUN_01233fc0(int *param_1,int *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 0;
    }
    if (param_2[1] <= param_1[1]) {
      return 0;
    }
  }
  return 0xffffff01;
}

// 01234010  FUN_01234010  size=32  [run]
undefined4 __thiscall FUN_01234010(int param_1,int param_2)

{
  if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8) &&
      *(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    return 1;
  }
  return 0;
}

// 01234050  FUN_01234050  size=18  [run]
int __thiscall FUN_01234050(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01234090  FUN_01234090  size=34  [run]
void __thiscall FUN_01234090(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      *(uint *)(*param_1 + iVar1 * 4) = -(uint)(param_2 != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}

// 012340C0  FUN_012340c0  size=32  [run]
void __thiscall FUN_012340c0(int *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*param_1 + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}

// 012340E0  FUN_012340e0  size=34  [run]
void __thiscall FUN_012340e0(int *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*param_1 + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  return;
}

// 01234110  FUN_01234110  size=50  [run]
void __thiscall
FUN_01234110(undefined1 (*param_1) [16],float *param_2,undefined1 (*param_3) [16],float *param_4)

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

// 01234150  FUN_01234150  size=55  [run]
void __thiscall
FUN_01234150(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  auVar1 = maxps(*param_2,*param_3);
  param_1[1] = auVar1;
  auVar1 = minps(*param_1,*param_4);
  *param_1 = auVar1;
  auVar1 = maxps(param_1[1],*param_4);
  param_1[1] = auVar1;
  return;
}

// 01234190  FUN_01234190  size=39  [run]
void FUN_01234190(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 012341C0  hkGeometryUtils::IVertices::vf00  size=50  [run]
undefined4 * __thiscall hkGeometryUtils::IVertices::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 012342A0  FUN_012342a0  size=31  [run]
void FUN_012342a0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 012342C0  FUN_012342c0  size=39  [run]
void FUN_012342c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 012342F0  FUN_012342f0  size=34  [run]
void __thiscall FUN_012342f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)
           (param_3 * 0x10 + *(int *)(*(int *)(*(int *)(param_1 + 8) + param_2 * 4) + 0x20));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_4 = *puVar4;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return;
}

// 01234330  FUN_01234330  size=26  [run]
void __thiscall FUN_01234330(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  *(undefined2 *)(param_1 + iVar1 * 2) = *param_2;
  return;
}

// 012343B0  FUN_012343b0  size=31  [run]
void FUN_012343b0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 012343D0  FUN_012343d0  size=39  [run]
void FUN_012343d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01234400  FUN_01234400  size=37  [run]
void __thiscall FUN_01234400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01232690(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01234430  FUN_01234430  size=31  [run]
void FUN_01234430(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01234450  FUN_01234450  size=39  [run]
void FUN_01234450(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 012344A0  FUN_012344a0  size=29  [run]
void FUN_012344a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_012325c0(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01234540  FUN_01234540  size=96  [run]
void __thiscall FUN_01234540(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_3;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_3 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_3 = *(int *)(param_1 + 4) + param_3;
  }
  if (param_3 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(param_2,param_1,4,0,param_3);
  }
  return;
}

// 012345A0  FUN_012345a0  size=106  [run]
undefined4 * __thiscall FUN_012345a0(undefined4 *param_1,int param_2)

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
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_012345f6;
  }
  iVar3 = -0x80000000;
LAB_012345f6:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01234610  FUN_01234610  size=79  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01234610(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = param_2;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  fVar7 = *(float *)(param_2 + 0x24);
  fVar8 = *(float *)(param_2 + 0x28);
  fVar9 = *(float *)(param_2 + 0x2c);
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  param_1[4] = *(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x10);
  param_1[5] = fVar7 - fVar1;
  param_1[6] = fVar8 - fVar2;
  param_1[7] = fVar9 - fVar3;
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  fVar7 = fRam01b249b4 * (float)param_1[5];
  fVar8 = fRam01b249b8 * (float)param_1[6];
  fVar9 = fRam01b249bc * (float)param_1[7];
  param_1[4] = _DAT_01b249b0 * (float)param_1[4];
  param_1[5] = fVar7;
  param_1[6] = fVar8;
  param_1[7] = fVar9;
  return;
}

// 01234660  FUN_01234660  size=67  [run]
undefined4 __thiscall FUN_01234660(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x48) + param_2 * 4;
  cVar2 = *(char *)(iVar1 + 2);
  if (*(char *)(iVar1 + 3) == cVar2) {
    return *(undefined4 *)
            (&DAT_017dc4c8 +
            ((uint)(cVar2 == *(char *)(*(int *)(param_1 + 0x48) + 1 + param_2 * 4)) * 2 + 1) * 4);
  }
  return 2;
}

// 012346B0  FUN_012346b0  size=106  [run]
undefined4 * __thiscall FUN_012346b0(undefined4 *param_1,int param_2)

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
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_01234706;
  }
  iVar3 = -0x80000000;
LAB_01234706:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01234720  FUN_01234720  size=28  [run]
undefined4 __thiscall FUN_01234720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01232a30(param_2,param_3);
  return param_1;
}

// 01234740  FUN_01234740  size=51  [run]
undefined4 __thiscall FUN_01234740(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01232690(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_012327e0(iVar1);
    return 0;
  }
  return 1;
}

// 01234780  FUN_01234780  size=208  [run]
undefined4 __thiscall FUN_01234780(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  puVar2 = (undefined4 *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 * 0xc);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined1 *)(iVar4 + 4 + *param_1) = 0;
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    puVar6 = puVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*(char *)(puVar6 + 1) != '\0') {
          FUN_012325c0(param_2,*puVar6,puVar6[1],puVar6[2]);
        }
        param_3 = param_3 + -1;
        puVar6 = puVar6 + 3;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(puVar2,iVar5 * 0xc);
    }
    return 0;
  }
  return 1;
}

// 01234850  FUN_01234850  size=29  [run]
uint __thiscall FUN_01234850(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 0x14) + (param_2 >> 5) * 4) >> ((byte)param_2 & 0x1f) & 1;
}

// 01234870  FUN_01234870  size=35  [run]
void __thiscall FUN_01234870(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x14) + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  return;
}

// 012348C0  FUN_012348c0  size=35  [run]
void __thiscall FUN_012348c0(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 8;
  param_1[1] = param_2 >> 1 & 0x7f;
  param_1[2] = param_2 & 1;
  return;
}

// 012348F0  FUN_012348f0  size=21  [run]
void __thiscall FUN_012348f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 01234910  FUN_01234910  size=61  [run]
void __thiscall FUN_01234910(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01234950  FUN_01234950  size=52  [run]
undefined4 __thiscall FUN_01234950(int param_1,undefined4 param_2,int param_3)

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

// 01234990  FUN_01234990  size=139  [run]
void __thiscall FUN_01234990(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = *(int *)(param_1 + 4) * 5;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = 0;
    do {
      *param_2 = *param_2 + *(int *)(iVar2 + 4 + *(int *)(param_1 + 0x3c)) * 4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (iVar1 < *(int *)(param_1 + 0x40));
  }
  param_2[1] = 0x90;
  iVar1 = *(int *)(param_1 + 0x40) * 0x60 + 0x90;
  param_2[1] = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x4c) * 4;
  param_2[1] = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 100) * 4;
  param_2[1] = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x70) * 8;
  param_2[1] = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x58) * 2;
  param_2[1] = iVar1;
  iVar2 = *(int *)(param_1 + 0x7c) * 8;
  param_2[2] = iVar2;
  param_2[3] = iVar1 + iVar2 + *param_2;
  return;
}

// 01234A20  FUN_01234a20  size=178  [run]
uint __thiscall FUN_01234a20(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2 >> 8;
  uVar1 = *(uint *)(uVar2 * 0x60 + 0x50 + *(int *)(param_1 + 0x3c));
  uVar4 = param_2 >> 1 & 0x7f;
  iVar3 = *(int *)(param_1 + 0x48) + ((uVar1 >> 8) + uVar4) * 4;
  if (*(char *)(iVar3 + 3) == *(char *)(iVar3 + 2)) {
    iVar3 = (uint)(*(char *)(iVar3 + 2) == *(char *)(iVar3 + 1)) * 2 + 1;
  }
  else {
    iVar3 = 2;
  }
  uVar5 = (param_2 & 1) + 1;
  if (*(int *)(&DAT_017dc4c8 + iVar3 * 4) + -1 <= (int)(param_2 & 1)) {
    uVar4 = uVar4 + 1;
    uVar5 = 0;
    if ((uVar1 & 0xff) <= uVar4) {
      uVar2 = uVar2 + 1;
      uVar4 = 0;
      if (*(int *)(param_1 + 0x40) <= (int)uVar2) {
        return 0xffffffff;
      }
    }
  }
  return (uVar2 << 7 | uVar4) * 2 | uVar5;
}

// 01234B10  FUN_01234b10  size=97  [run]
void __thiscall FUN_01234b10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,4,0,param_2);
  }
  return;
}

// 01234B90  FUN_01234b90  size=97  [run]
void __thiscall FUN_01234b90(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,5,0,param_2);
  }
  return;
}

// 01234C00  FUN_01234c00  size=97  [run]
void __thiscall FUN_01234c00(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,4,0,param_2);
  }
  return;
}

// 01234C70  FUN_01234c70  size=53  [run]
undefined4 __thiscall FUN_01234c70(int param_1,int param_2)

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

// 01234CB0  FUN_01234cb0  size=97  [run]
void __thiscall FUN_01234cb0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,2,0,param_2);
  }
  return;
}

// 01234D20  FUN_01234d20  size=97  [run]
void __thiscall FUN_01234d20(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,8,0,param_2);
  }
  return;
}

// 01234D90  FUN_01234d90  size=53  [run]
undefined4 __thiscall FUN_01234d90(int param_1,int param_2)

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

// 01234DD0  FUN_01234dd0  size=97  [run]
void __thiscall FUN_01234dd0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,8,0,param_2);
  }
  return;
}

// 01234E40  FUN_01234e40  size=103  [run]
/* WARNING: Removing unreachable block (ram,0x01234e71) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01234e40(float *param_1,ulonglong *param_2,float *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  auVar10._4_4_ = (uint)(uVar1 >> 0x2a);
  auVar10._0_4_ = auVar10._4_4_;
  auVar10._8_4_ = auVar10._4_4_;
  auVar10._12_4_ = auVar10._4_4_;
  auVar9._0_4_ = (uint)(uVar1 << 0x10) >> 5;
  auVar9._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
  auVar9._8_2_ = (ushort)(uVar1 >> 0x35);
  auVar9._10_6_ = 0;
  auVar8 = auVar8 & _DAT_017e9c20 | auVar10 & _DAT_017e9c10 | auVar9 & _DAT_017e9c00;
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  *param_3 = (float)auVar8._0_4_ * param_1[4] + *param_1;
  param_3[1] = (float)auVar8._4_4_ * fVar2 + fVar5;
  param_3[2] = (float)auVar8._8_4_ * fVar3 + fVar6;
  param_3[3] = (float)auVar8._12_4_ * fVar4 + fVar7;
  return;
}

// 01234EB0  FUN_01234eb0  size=103  [run]
void FUN_01234eb0(float *param_1,uint *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *param_2;
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  *param_3 = (float)(uVar1 & 0x7ff) * param_1[4] + *param_1;
  param_3[1] = (float)(uVar1 >> 0xb & 0x7ff) * fVar2 + fVar5;
  param_3[2] = (float)(uVar1 >> 0x16) * fVar3 + fVar6;
  param_3[3] = fVar4 * 0.0 + fVar7;
  return;
}

// 01234F20  FUN_01234f20  size=68  [run]
void __thiscall FUN_01234f20(int param_1,undefined4 param_2,int *param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x10))(param_2,param_3);
  *param_3 = *(int *)(*(int *)(param_1 + 8) + *param_3 * 4);
  param_3[1] = *(int *)(*(int *)(param_1 + 8) + param_3[1] * 4);
  param_3[2] = *(int *)(*(int *)(param_1 + 8) + param_3[2] * 4);
  return;
}

// 01234F70  FUN_01234f70  size=37  [run]
void __thiscall FUN_01234f70(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)
           (param_3 * 0x10 +
           *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + param_2 * 4) + 0x20));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_4 = *puVar4;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return;
}

// 01234FA0  FUN_01234fa0  size=117  [run]
void __thiscall FUN_01234fa0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)(param_1[1] + 4) + 0x10))(param_2,&local_10);
  iVar1 = param_1[2];
  local_10 = *(int *)(iVar1 + local_10 * 4);
  local_c = *(undefined4 *)(iVar1 + local_c * 4);
  local_8 = *(undefined4 *)(iVar1 + local_8 * 4);
  (**(code **)(*param_1 + 8))(local_10,param_3);
  (**(code **)(*param_1 + 8))(local_c,param_3 + 0x10);
  (**(code **)(*param_1 + 8))(local_8,param_3 + 0x20);
  return;
}

// 01235040  FUN_01235040  size=56  [run]
void __thiscall FUN_01235040(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_3 <= param_2) {
    iVar1 = param_3;
  }
  *param_1 = iVar1;
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_1[1] = param_2;
  param_1[2] = param_4 & 0x3fffffff | param_5 << 0x1e;
  return;
}

// 01235080  FUN_01235080  size=80  [run]
uint __thiscall FUN_01235080(int *param_1,int *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 0;
    }
    if (param_2[1] <= param_1[1]) {
      return (uint)(param_1[1] <= param_2[1]);
    }
  }
  return 0xffffff00;
}

// 01235100  FUN_01235100  size=30  [run]
void __thiscall FUN_01235100(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x200);
  *(int *)(param_1 + 0x200) = iVar1 + 1;
  *(undefined4 *)(param_1 + iVar1 * 4) = *param_2;
  return;
}

// 01235120  FUN_01235120  size=55  [run]
void __thiscall FUN_01235120(int param_1,undefined4 param_2,int param_3)

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

// 01235160  FUN_01235160  size=51  [run]
int __thiscall FUN_01235160(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 012351A0  FUN_012351a0  size=63  [run]
void __thiscall FUN_012351a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 012351E0  FUN_012351e0  size=55  [run]
void __thiscall FUN_012351e0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01235220  FUN_01235220  size=51  [run]
int __thiscall FUN_01235220(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01235260  FUN_01235260  size=68  [run]
int __thiscall FUN_01235260(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 8;
}

// 012352B0  FUN_012352b0  size=13  [run]
void __thiscall FUN_012352b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 012352C0  FUN_012352c0  size=51  [run]
int __thiscall FUN_012352c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01235310  FUN_01235310  size=13  [run]
void __thiscall FUN_01235310(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01235320  FUN_01235320  size=52  [run]
undefined4 __thiscall FUN_01235320(int param_1,undefined4 param_2,int param_3)

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

// 01235360  FUN_01235360  size=52  [run]
undefined4 __thiscall FUN_01235360(int param_1,undefined4 param_2,int param_3)

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

// 012353A0  FUN_012353a0  size=52  [run]
undefined4 __thiscall FUN_012353a0(int param_1,undefined4 param_2,int param_3)

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

// 012353E0  FUN_012353e0  size=48  [run]
void __thiscall FUN_012353e0(uint *param_1,undefined1 (*param_2) [16])

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

// 01235410  FUN_01235410  size=38  [run]
void __thiscall FUN_01235410(undefined4 *param_1,undefined4 *param_2)

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

// 01235440  FUN_01235440  size=15  [run]
int __thiscall FUN_01235440(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01235450  FUN_01235450  size=25  [run]
void __thiscall FUN_01235450(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  param_2[4] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return;
}

// 01235470  FUN_01235470  size=74  [run]
int __thiscall FUN_01235470(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_10 [3];
  
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + 4) + 0x10))(param_2,local_10);
  iVar1 = *(int *)(param_1 + 8);
  local_10[0] = *(int *)(iVar1 + local_10[0] * 4);
  local_10[1] = *(undefined4 *)(iVar1 + local_10[1] * 4);
  local_10[2] = *(undefined4 *)(iVar1 + local_10[2] * 4);
  return local_10[param_3];
}

// 012354C0  FUN_012354c0  size=16  [run]
undefined4 __thiscall FUN_012354c0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 012354D0  FUN_012354d0  size=30  [run]
void __thiscall FUN_012354d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x102] = 0;
  return;
}

// 01235500  FUN_01235500  size=55  [run]
void __thiscall FUN_01235500(int param_1,undefined4 param_2,int param_3)

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

// 01235540  FUN_01235540  size=55  [run]
void __thiscall FUN_01235540(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,5);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01235580  FUN_01235580  size=49  [run]
void __thiscall FUN_01235580(int *param_1,int *param_2,undefined4 *param_3)

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

// 012355D0  FUN_012355d0  size=44  [run]
void FUN_012355d0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01235600  FUN_01235600  size=22  [run]
void __thiscall FUN_01235600(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(int *)*param_1 + param_2 * 4);
  return;
}

// 01235620  FUN_01235620  size=45  [run]
void FUN_01235620(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = param_1[6];
  uVar10 = param_1[7];
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  param_2[6] = uVar9;
  param_2[7] = uVar10;
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  return;
}

// 01235650  FUN_01235650  size=44  [run]
void FUN_01235650(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01235680  FUN_01235680  size=40  [run]
void FUN_01235680(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 012356B0  FUN_012356b0  size=36  [run]
void __thiscall FUN_012356b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
  *param_3 = *(undefined4 *)(*(int *)*param_1 + (iVar1 + param_2) * 4);
  return;
}

// 012356E0  FUN_012356e0  size=188  [run]
void FUN_012356e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  do {
    iVar2 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar6 = param_3;
    iVar7 = param_2;
    do {
      uVar3 = *(uint *)(param_4 + iVar2 * 4);
      uVar4 = *(uint *)(param_4 + *(int *)(param_1 + iVar7 * 4) * 4);
      while (uVar4 < uVar3) {
        iVar7 = iVar7 + 1;
        uVar4 = *(uint *)(param_4 + *(int *)(param_1 + iVar7 * 4) * 4);
      }
      uVar4 = *(uint *)(param_4 + *(int *)(param_1 + iVar6 * 4) * 4);
      while (uVar3 < uVar4) {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        uVar4 = *(uint *)(param_4 + *(int *)(param_1 + -4 + iVar1) * 4);
      }
      if (iVar6 < iVar7) break;
      if (iVar6 != iVar7) {
        uVar5 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
        *(undefined4 *)(param_1 + iVar7 * 4) = uVar5;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar7 <= iVar6);
    if (param_2 < iVar6) {
      FUN_012356e0(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 012357B0  FUN_012357b0  size=63  [run]
undefined4 __thiscall FUN_012357b0(int param_1,float *param_2)

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

// 01235850  FUN_01235850  size=30  [run]
void __thiscall FUN_01235850(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x200);
  *(int *)(param_1 + 0x200) = iVar1 + 1;
  *(undefined4 *)(param_1 + iVar1 * 4) = *param_2;
  return;
}

// 012358B0  FUN_012358b0  size=153  [run]
byte __fastcall FUN_012358b0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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

// 01235950  FUN_01235950  size=30  [run]
void __thiscall FUN_01235950(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x400);
  *(int *)(param_1 + 0x400) = iVar1 + 1;
  *(undefined4 *)(param_1 + iVar1 * 4) = *param_2;
  return;
}

// 01235970  FUN_01235970  size=89  [run]
undefined4 FUN_01235970(int *param_1,int *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 0;
    }
    if (param_2[1] <= param_1[1]) {
      return 0;
    }
  }
  return 1;
}

// 012359D0  FUN_012359d0  size=35  [run]
undefined4 FUN_012359d0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8) &&
      *(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    return 1;
  }
  return 0;
}

// 01235A00  FUN_01235a00  size=46  [run]
void __thiscall FUN_01235a00(int *param_1,undefined4 *param_2)

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

// 01235A30  FUN_01235a30  size=97  [run]
void __thiscall FUN_01235a30(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(int *)(param_1 + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    param_2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  if (param_2 < (int)(*(uint *)(param_1 + 8) & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_1,4,0,param_2);
  }
  return;
}

// 01235AA0  FUN_01235aa0  size=28  [run]
undefined4 __thiscall FUN_01235aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01234720(param_2,param_3);
  return param_1;
}

// 01235AC0  FUN_01235ac0  size=88  [run]
void __thiscall FUN_01235ac0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

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

// 01235B20  FUN_01235b20  size=93  [run]
undefined4 __thiscall
FUN_01235b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_01234780(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_6 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar2 = FUN_012325c0(param_2,param_3,param_4,param_5);
  return uVar2;
}

// 01235B80  FUN_01235b80  size=157  [run]
void __thiscall
FUN_01235b80(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01234780(param_2,param_1[2] * 2 + 2);
  }
  iVar2 = *param_1;
  for (uVar4 = param_3 * -0x61c8864f & param_1[2];
      (piVar1 = (int *)(iVar2 + uVar4 * 0xc),
      ((char)*(undefined4 *)(iVar2 + 4 + uVar4 * 0xc) != '\0') != ((char)param_4 != '\0') ||
      (*piVar1 != param_3)); uVar4 = uVar4 + 1 & param_1[2]) {
    if ((char)piVar1[1] == '\0') {
      iVar3 = uVar4 * 0xc;
      *(int *)(iVar2 + iVar3) = param_3;
      *(undefined4 *)(iVar2 + 4 + iVar3) = param_4;
      *(undefined4 *)(iVar3 + 8 + *param_1) = param_5;
      param_1[1] = param_1[1] + 1;
      return;
    }
  }
  return;
}

// 01235C20  FUN_01235c20  size=37  [run]
void FUN_01235c20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_01234780(param_1,iVar1);
  return;
}

// 01235C50  FUN_01235c50  size=61  [run]
void __fastcall FUN_01235c50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01235C90  FUN_01235c90  size=61  [run]
void __thiscall FUN_01235c90(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01235CD0  FUN_01235cd0  size=219  [run]
/* WARNING: Removing unreachable block (ram,0x01235d0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01235cd0(float *param_1,int param_2,float *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((int)param_1[0x17] <= param_2) {
    uVar2 = *(ulonglong *)
             ((int)param_1[0x14] + (uint)*(ushort *)((int)param_1[0x15] + param_2 * 2) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar2;
    auVar11._4_4_ = (uint)(uVar2 >> 0x2a);
    auVar11._0_4_ = auVar11._4_4_;
    auVar11._8_4_ = auVar11._4_4_;
    auVar11._12_4_ = auVar11._4_4_;
    auVar10._0_4_ = (uint)(uVar2 << 0x10) >> 5;
    auVar10._4_4_ = (uint)(uVar2 >> 0x10) >> 5;
    auVar10._8_2_ = (ushort)(uVar2 >> 0x35);
    auVar10._10_6_ = 0;
    auVar9 = auVar9 & _DAT_017e9c20 | auVar11 & _DAT_017e9c10 | auVar10 & _DAT_017e9c00;
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar6 = param_1[1];
    fVar7 = param_1[2];
    fVar8 = param_1[3];
    *param_3 = (float)auVar9._0_4_ * param_1[4] + *param_1;
    param_3[1] = (float)auVar9._4_4_ * fVar3 + fVar6;
    param_3[2] = (float)auVar9._8_4_ * fVar4 + fVar7;
    param_3[3] = (float)auVar9._12_4_ * fVar5 + fVar8;
    return;
  }
  uVar1 = *(uint *)((int)param_1[0x13] + param_2 * 4);
  fVar3 = param_1[0xd];
  fVar4 = param_1[0xe];
  fVar5 = param_1[0xf];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  *param_3 = (float)(uVar1 & 0x7ff) * param_1[0xc] + param_1[8];
  param_3[1] = (float)(uVar1 >> 0xb & 0x7ff) * fVar3 + fVar6;
  param_3[2] = (float)(uVar1 >> 0x16) * fVar4 + fVar7;
  param_3[3] = fVar5 * 0.0 + fVar8;
  return;
}

// 01235DB0  FUN_01235db0  size=56  [run]
void __thiscall FUN_01235db0(int param_1,int param_2)

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

// 01235DF0  FUN_01235df0  size=46  [run]
int __fastcall FUN_01235df0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01235E20  FUN_01235e20  size=64  [run]
void __thiscall FUN_01235e20(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 01235E60  FUN_01235e60  size=56  [run]
void __thiscall FUN_01235e60(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01235EA0  FUN_01235ea0  size=46  [run]
int __fastcall FUN_01235ea0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01235ED0  FUN_01235ed0  size=69  [run]
int __thiscall FUN_01235ed0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 8;
}

// 01235F20  FUN_01235f20  size=46  [run]
int __fastcall FUN_01235f20(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01236240  FUN_01236240  size=53  [run]
undefined4 __thiscall FUN_01236240(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 01236280  FUN_01236280  size=53  [run]
undefined4 __thiscall FUN_01236280(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 012362C0  FUN_012362c0  size=53  [run]
undefined4 __thiscall FUN_012362c0(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 01236300  FUN_01236300  size=48  [run]
void __thiscall FUN_01236300(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x200) = iVar1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    *(undefined4 *)(param_1 + iVar1 * 4) = uVar2;
  }
  return;
}

// 01236340  FUN_01236340  size=64  [run]
void __thiscall FUN_01236340(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01236380  FUN_01236380  size=42  [run]
void __thiscall FUN_01236380(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 012363B0  FUN_012363b0  size=25  [run]
void __thiscall FUN_012363b0(int param_1,int param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(int *)**(undefined4 **)(param_1 + 4) + param_2 * 4);
  return;
}

// 012363D0  FUN_012363d0  size=374  [run]
int __thiscall FUN_012363d0(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int local_10 [3];
  
  switch(param_3) {
  case 0:
    uVar1 = *param_1;
    (**(code **)(**(int **)(*(int *)(param_2 + 4) + 4) + 0x10))(uVar1 & 0x3fffffff,local_10);
    iVar2 = *(int *)(param_2 + 8);
    local_10[0] = *(int *)(iVar2 + local_10[0] * 4);
    local_10[1] = *(undefined4 *)(iVar2 + local_10[1] * 4);
    local_10[2] = *(undefined4 *)(iVar2 + local_10[2] * 4);
    return local_10[uVar1 >> 0x1e];
  case 1:
    uVar1 = param_1[1];
    (**(code **)(**(int **)(*(int *)(param_2 + 4) + 4) + 0x10))(uVar1 & 0x3fffffff,local_10);
    iVar2 = *(int *)(param_2 + 8);
    local_10[0] = *(int *)(iVar2 + local_10[0] * 4);
    local_10[1] = *(undefined4 *)(iVar2 + local_10[1] * 4);
    local_10[2] = *(undefined4 *)(iVar2 + local_10[2] * 4);
    return local_10[((uVar1 >> 0x1e) + 2) % 3];
  case 2:
    uVar1 = param_1[1];
    (**(code **)(**(int **)(*(int *)(param_2 + 4) + 4) + 0x10))(uVar1 & 0x3fffffff,local_10);
    iVar2 = *(int *)(param_2 + 8);
    local_10[0] = *(int *)(iVar2 + local_10[0] * 4);
    local_10[1] = *(undefined4 *)(iVar2 + local_10[1] * 4);
    local_10[2] = *(undefined4 *)(iVar2 + local_10[2] * 4);
    return local_10[uVar1 >> 0x1e];
  case 3:
    uVar1 = *param_1;
    (**(code **)(**(int **)(*(int *)(param_2 + 4) + 4) + 0x10))(uVar1 & 0x3fffffff,local_10);
    iVar2 = *(int *)(param_2 + 8);
    local_10[0] = *(int *)(iVar2 + local_10[0] * 4);
    local_10[1] = *(undefined4 *)(iVar2 + local_10[1] * 4);
    local_10[2] = *(undefined4 *)(iVar2 + local_10[2] * 4);
    return local_10[((uVar1 >> 0x1e) + 2) % 3];
  default:
    return -1;
  }
}

// 01236560  FUN_01236560  size=74  [run]
void __thiscall FUN_01236560(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 012365B0  FUN_012365b0  size=144  [run]
undefined4 * __thiscall FUN_012365b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    param_2 = param_2 * 8;
    puVar1 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar2 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    if (iVar2 != 0) goto LAB_01236608;
  }
  iVar2 = -0x80000000;
LAB_01236608:
  *param_1 = puVar1;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01236640  FUN_01236640  size=55  [run]
int __thiscall FUN_01236640(int *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    pbVar2 = (byte *)(*param_1 + 3);
    do {
      if (((*pbVar2 & 1) == 0) && (param_2 == *pbVar2 >> 1)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 4;
    } while (iVar1 < param_1[1]);
  }
  return -1;
}

// 01236680  FUN_01236680  size=159  [run]
void __thiscall FUN_01236680(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_1c [2];
  int *local_14;
  
  local_40 = param_1[4];
  iStack_3c = param_1[5];
  iStack_38 = param_1[6];
  iStack_34 = param_1[7];
  local_30 = param_1[8];
  iStack_2c = param_1[9];
  iStack_28 = param_1[10];
  iStack_24 = param_1[0xb];
  iVar1 = 0;
  local_14 = param_1;
  if (param_2 != 0) {
    do {
      local_1c[1] = (*(byte *)(*local_14 + 3 + iVar1 * 4) & 0xfe) + iVar1;
      local_1c[0] = iVar1 + 1;
      iVar1 = local_1c[local_1c[1] <= param_2];
      FUN_0146c120(&local_40,*local_14 + iVar1 * 4,&local_60);
      local_40 = local_60;
      iStack_3c = iStack_5c;
      iStack_38 = iStack_58;
      iStack_34 = iStack_54;
      local_30 = local_50;
      iStack_2c = iStack_4c;
      iStack_28 = iStack_48;
      iStack_24 = iStack_44;
    } while (iVar1 != param_2);
  }
  param_3[4] = local_30;
  param_3[5] = iStack_2c;
  param_3[6] = iStack_28;
  param_3[7] = iStack_24;
  *param_3 = local_40;
  param_3[1] = iStack_3c;
  param_3[2] = iStack_38;
  param_3[3] = iStack_34;
  return;
}

// 01236730  FUN_01236730  size=37  [run]
void __thiscall FUN_01236730(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = (**(code **)(*(int *)puVar1[1] + 8))();
  *param_3 = *(undefined4 *)(*(int *)*puVar1 + (iVar2 + param_2) * 4);
  return;
}

// 01236760  FUN_01236760  size=33  [run]
void FUN_01236760(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_012356e0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 012367C0  FUN_012367c0  size=41  [run]
int __thiscall FUN_012367c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(*param_1 + 0x20 + param_2 * 0x30); iVar1 != 0;
      iVar1 = *(int *)(*param_1 + 0x20 + iVar1 * 0x30)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// 012367F0  FUN_012367f0  size=46  [run]
int __fastcall FUN_012367f0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01236820  FUN_01236820  size=9  [run]
void FUN_01236820(void)

{
  FUN_01010120();
  return;
}

// 01236830  FUN_01236830  size=56  [run]
void __thiscall FUN_01236830(int param_1,int param_2)

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

// 01236870  FUN_01236870  size=56  [run]
void __thiscall FUN_01236870(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,5);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 012368B0  FUN_012368b0  size=88  [run]
void __thiscall FUN_012368b0(int *param_1,int param_2,undefined4 *param_3)

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

// 01236920  FUN_01236920  size=64  [run]
void __thiscall FUN_01236920(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01236960  FUN_01236960  size=64  [run]
void __thiscall FUN_01236960(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012369A0  FUN_012369a0  size=63  [run]
void __thiscall FUN_012369a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012369E0  FUN_012369e0  size=63  [run]
void __thiscall FUN_012369e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x230);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01236A20  FUN_01236a20  size=36  [run]
void FUN_01236a20(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0x220) = 0;
      }
      param_1 = param_1 + 0x230;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01236A50  FUN_01236a50  size=46  [run]
void __thiscall FUN_01236a50(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(*param_2 + 0x28 + param_3 * 0x30);
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x200);
  *(int *)(iVar2 + 0x200) = iVar3 + 1;
  *(undefined4 *)(iVar2 + iVar3 * 4) = uVar1;
  return;
}

// 01236A80  FUN_01236a80  size=31  [run]
void __thiscall FUN_01236a80(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(int *)(*param_2 + 0x28 + param_3 * 0x30) = iVar1;
  return;
}

// 01236AA0  FUN_01236aa0  size=153  [run]
byte __fastcall FUN_01236aa0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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

// 01236B40  FUN_01236b40  size=251  [run]
void FUN_01236b40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_20;
  int iStack_1c;
  
  do {
    uVar3 = *(undefined8 *)(param_1 + (param_2 + param_3 >> 1) * 0xc);
    local_20 = (int)uVar3;
    iVar7 = param_3;
    iVar8 = param_2;
    do {
      for (piVar6 = (int *)(param_1 + iVar8 * 0xc);
          (*piVar6 < local_20 ||
          ((iStack_1c = (int)((ulonglong)uVar3 >> 0x20), *piVar6 <= local_20 &&
           (piVar6[1] < iStack_1c)))); piVar6 = piVar6 + 3) {
        iVar8 = iVar8 + 1;
      }
      for (piVar6 = (int *)(param_1 + iVar7 * 0xc);
          (local_20 < *piVar6 || ((local_20 <= *piVar6 && (iStack_1c < piVar6[1]))));
          piVar6 = piVar6 + -3) {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 < iVar8) break;
      if (iVar7 != iVar8) {
        uVar4 = *(undefined8 *)(param_1 + iVar7 * 0xc);
        puVar1 = (undefined8 *)(param_1 + iVar7 * 0xc);
        puVar2 = (undefined8 *)(param_1 + iVar8 * 0xc);
        uVar5 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(param_1 + iVar8 * 0xc);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar2 = uVar4;
        *(undefined4 *)(puVar2 + 1) = uVar5;
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar7);
    if (param_2 < iVar7) {
      FUN_01236b40(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

// 01236C40  FUN_01236c40  size=222  [run]
void FUN_01236c40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  do {
    fVar4 = *(float *)(param_1 + (param_2 + param_3 >> 1) * 0xc + 8);
    iVar6 = param_3;
    iVar8 = param_2;
    do {
      for (pfVar7 = (float *)(param_1 + 8 + iVar8 * 0xc); *pfVar7 <= fVar4 && fVar4 != *pfVar7;
          pfVar7 = pfVar7 + 3) {
        iVar8 = iVar8 + 1;
      }
      for (pfVar7 = (float *)(param_1 + 8 + iVar6 * 0xc); fVar4 < *pfVar7; pfVar7 = pfVar7 + -3) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 < iVar8) break;
      if (iVar6 != iVar8) {
        uVar3 = *(undefined8 *)(param_1 + iVar6 * 0xc);
        puVar1 = (undefined8 *)(param_1 + iVar6 * 0xc);
        puVar2 = (undefined8 *)(param_1 + iVar8 * 0xc);
        uVar5 = *(undefined4 *)(puVar1 + 1);
        *puVar1 = *(undefined8 *)(param_1 + iVar8 * 0xc);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar2 = uVar3;
        *(undefined4 *)(puVar2 + 1) = uVar5;
      }
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar6);
    if (param_2 < iVar6) {
      FUN_01236c40(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

// 01236D20  FUN_01236d20  size=65  [run]
void __thiscall FUN_01236d20(int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_3 * 0x30 + *param_1);
  fVar2 = (pfVar1[5] - pfVar1[1]) * (pfVar1[4] - *pfVar1);
  fVar3 = (pfVar1[6] - pfVar1[2]) * (pfVar1[5] - pfVar1[1]);
  fVar4 = (pfVar1[4] - *pfVar1) * (pfVar1[6] - pfVar1[2]);
  *param_2 = fVar3 + fVar2 + fVar4;
  param_2[1] = fVar3 + fVar2 + fVar4;
  param_2[2] = fVar3 + fVar2 + fVar4;
  param_2[3] = fVar3 + fVar2 + fVar4;
  return;
}

// 01236D70  FUN_01236d70  size=47  [run]
void FUN_01236d70(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 01236DA0  FUN_01236da0  size=48  [run]
void __thiscall FUN_01236da0(undefined4 *param_1,undefined4 *param_2)

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
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = param_2[3];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[4] = param_1[4];
  param_1[5] = param_1[5];
  param_1[6] = param_1[6];
  param_1[7] = 0;
  return;
}

// 01236DD0  FUN_01236dd0  size=39  [run]
void __thiscall FUN_01236dd0(undefined4 *param_1,undefined4 *param_2)

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
  *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_1 + 4);
  param_2[5] = param_1[6];
  return;
}

// 01236E00  FUN_01236e00  size=84  [run]
undefined4 __thiscall FUN_01236e00(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x28);
  if (iVar1 != *param_1) {
    piVar2 = (int *)param_1[1];
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    *(int *)(*piVar2 + piVar2[1] * 4) = iVar1;
    piVar2[1] = piVar2[1] + 1;
    return 1;
  }
  return 1;
}

// 01236E60  FUN_01236e60  size=89  [run]
void __thiscall FUN_01236e60(int *param_1,int param_2,undefined4 *param_3)

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

// 01236EC0  FUN_01236ec0  size=33  [run]
void FUN_01236ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01235b20(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01236EF0  FUN_01236ef0  size=29  [run]
void FUN_01236ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01235b80(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01236F10  FUN_01236f10  size=21  [run]
void FUN_01236f10(undefined4 param_1)

{
  FUN_01235c20(&PTR_vftable_018e9b94,param_1);
  return;
}

// 01236F30  FUN_01236f30  size=61  [run]
void __fastcall FUN_01236f30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01236F70  FUN_01236f70  size=1018  [run]
/* WARNING: Removing unreachable block (ram,0x01237237) */
/* WARNING: Removing unreachable block (ram,0x0123716c) */
/* WARNING: Removing unreachable block (ram,0x012370a1) */
/* WARNING: Removing unreachable block (ram,0x01236fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_01236f70(float *param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar15;
  float fVar16;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar17;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_210 [524];
  
  pbVar1 = (byte *)((int)param_1[0x12] + param_2 * 4);
  if ((pbVar1[3] == pbVar1[2]) && (pbVar1[2] == pbVar1[1])) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = 0.0;
    param_3[0xf] = 0.0;
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00("Primitve type not implemented");
    (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_210,0,0);
    hkBaseObject::hkBaseObject_38();
  }
  else {
    uVar5 = (uint)*pbVar1;
    if ((int)uVar5 < (int)param_1[0x17]) {
      uVar5 = *(uint *)((int)param_1[0x13] + uVar5 * 4);
      fVar6 = (float)(uVar5 & 0x7ff) * param_1[0xc] + param_1[8];
      fVar15 = (float)(uVar5 >> 0xb & 0x7ff) * param_1[0xd] + param_1[9];
      fVar16 = (float)(uVar5 >> 0x16) * param_1[0xe] + param_1[10];
      fVar17 = param_1[0xf] * 0.0 + param_1[0xb];
    }
    else {
      uVar2 = *(ulonglong *)
               ((int)param_1[0x14] + (uint)*(ushort *)((int)param_1[0x15] + uVar5 * 2) * 8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      auVar18._4_4_ = (uint)(uVar2 >> 0x2a);
      auVar18._0_4_ = auVar18._4_4_;
      auVar18._8_4_ = auVar18._4_4_;
      auVar18._12_4_ = auVar18._4_4_;
      auVar8._0_4_ = (uint)(uVar2 << 0x10) >> 5;
      auVar8._4_4_ = (uint)(uVar2 >> 0x10) >> 5;
      auVar8._8_2_ = (ushort)(uVar2 >> 0x35);
      auVar8._10_6_ = 0;
      auVar7 = auVar7 & _DAT_017e9c20 | auVar18 & _DAT_017e9c10 | auVar8 & _DAT_017e9c00;
      fVar6 = (float)auVar7._0_4_ * param_1[4] + *param_1;
      fVar15 = (float)auVar7._4_4_ * param_1[5] + param_1[1];
      fVar16 = (float)auVar7._8_4_ * param_1[6] + param_1[2];
      fVar17 = (float)auVar7._12_4_ * param_1[7] + param_1[3];
    }
    *param_3 = fVar6;
    param_3[1] = fVar15;
    param_3[2] = fVar16;
    param_3[3] = fVar17;
    uVar5 = (uint)pbVar1[1];
    if ((int)uVar5 < (int)param_1[0x17]) {
      uVar5 = *(uint *)((int)param_1[0x13] + uVar5 * 4);
      fVar6 = (float)(uVar5 & 0x7ff) * param_1[0xc] + param_1[8];
      fVar15 = (float)(uVar5 >> 0xb & 0x7ff) * param_1[0xd] + param_1[9];
      fVar16 = (float)(uVar5 >> 0x16) * param_1[0xe] + param_1[10];
      fVar17 = param_1[0xf] * 0.0 + param_1[0xb];
    }
    else {
      uVar2 = *(ulonglong *)
               ((int)param_1[0x14] + (uint)*(ushort *)((int)param_1[0x15] + uVar5 * 2) * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar2;
      auVar19._4_4_ = (uint)(uVar2 >> 0x2a);
      auVar19._0_4_ = auVar19._4_4_;
      auVar19._8_4_ = auVar19._4_4_;
      auVar19._12_4_ = auVar19._4_4_;
      auVar10._0_4_ = (uint)(uVar2 << 0x10) >> 5;
      auVar10._4_4_ = (uint)(uVar2 >> 0x10) >> 5;
      auVar10._8_2_ = (ushort)(uVar2 >> 0x35);
      auVar10._10_6_ = 0;
      auVar7 = auVar9 & _DAT_017e9c20 | auVar19 & _DAT_017e9c10 | auVar10 & _DAT_017e9c00;
      fVar6 = (float)auVar7._0_4_ * param_1[4] + *param_1;
      fVar15 = (float)auVar7._4_4_ * param_1[5] + param_1[1];
      fVar16 = (float)auVar7._8_4_ * param_1[6] + param_1[2];
      fVar17 = (float)auVar7._12_4_ * param_1[7] + param_1[3];
    }
    param_3[4] = fVar6;
    param_3[5] = fVar15;
    param_3[6] = fVar16;
    param_3[7] = fVar17;
    uVar5 = (uint)pbVar1[2];
    if ((int)uVar5 < (int)param_1[0x17]) {
      uVar5 = *(uint *)((int)param_1[0x13] + uVar5 * 4);
      fVar6 = (float)(uVar5 & 0x7ff) * param_1[0xc] + param_1[8];
      fVar15 = (float)(uVar5 >> 0xb & 0x7ff) * param_1[0xd] + param_1[9];
      fVar16 = (float)(uVar5 >> 0x16) * param_1[0xe] + param_1[10];
      fVar17 = param_1[0xf] * 0.0 + param_1[0xb];
    }
    else {
      uVar2 = *(ulonglong *)
               ((int)param_1[0x14] + (uint)*(ushort *)((int)param_1[0x15] + uVar5 * 2) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar2;
      auVar20._4_4_ = (uint)(uVar2 >> 0x2a);
      auVar20._0_4_ = auVar20._4_4_;
      auVar20._8_4_ = auVar20._4_4_;
      auVar20._12_4_ = auVar20._4_4_;
      auVar12._0_4_ = (uint)(uVar2 << 0x10) >> 5;
      auVar12._4_4_ = (uint)(uVar2 >> 0x10) >> 5;
      auVar12._8_2_ = (ushort)(uVar2 >> 0x35);
      auVar12._10_6_ = 0;
      auVar7 = auVar11 & _DAT_017e9c20 | auVar20 & _DAT_017e9c10 | auVar12 & _DAT_017e9c00;
      fVar6 = (float)auVar7._0_4_ * param_1[4] + *param_1;
      fVar15 = (float)auVar7._4_4_ * param_1[5] + param_1[1];
      fVar16 = (float)auVar7._8_4_ * param_1[6] + param_1[2];
      fVar17 = (float)auVar7._12_4_ * param_1[7] + param_1[3];
    }
    param_3[8] = fVar6;
    param_3[9] = fVar15;
    param_3[10] = fVar16;
    param_3[0xb] = fVar17;
    uVar5 = (uint)pbVar1[3];
    if ((int)uVar5 < (int)param_1[0x17]) {
      uVar5 = *(uint *)((int)param_1[0x13] + uVar5 * 4);
      fVar6 = param_1[0xd];
      fVar15 = param_1[0xe];
      fVar16 = param_1[0xf];
      fVar17 = param_1[9];
      fVar3 = param_1[10];
      fVar4 = param_1[0xb];
      param_3[0xc] = (float)(uVar5 & 0x7ff) * param_1[0xc] + param_1[8];
      param_3[0xd] = (float)(uVar5 >> 0xb & 0x7ff) * fVar6 + fVar17;
      param_3[0xe] = (float)(uVar5 >> 0x16) * fVar15 + fVar3;
      param_3[0xf] = fVar16 * 0.0 + fVar4;
    }
    else {
      uVar2 = *(ulonglong *)
               ((int)param_1[0x14] + (uint)*(ushort *)((int)param_1[0x15] + uVar5 * 2) * 8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar2;
      auVar21._4_4_ = (uint)(uVar2 >> 0x2a);
      auVar21._0_4_ = auVar21._4_4_;
      auVar21._8_4_ = auVar21._4_4_;
      auVar21._12_4_ = auVar21._4_4_;
      auVar14._0_4_ = (uint)(uVar2 << 0x10) >> 5;
      auVar14._4_4_ = (uint)(uVar2 >> 0x10) >> 5;
      auVar14._8_2_ = (ushort)(uVar2 >> 0x35);
      auVar14._10_6_ = 0;
      auVar7 = auVar13 & _DAT_017e9c20 | auVar21 & _DAT_017e9c10 | auVar14 & _DAT_017e9c00;
      fVar6 = param_1[5];
      fVar15 = param_1[6];
      fVar16 = param_1[7];
      fVar17 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      param_3[0xc] = (float)auVar7._0_4_ * param_1[4] + *param_1;
      param_3[0xd] = (float)auVar7._4_4_ * fVar6 + fVar17;
      param_3[0xe] = (float)auVar7._8_4_ * fVar15 + fVar3;
      param_3[0xf] = (float)auVar7._12_4_ * fVar16 + fVar4;
    }
  }
  if (pbVar1[3] == pbVar1[2]) {
    return *(undefined4 *)(&DAT_017dc4c8 + ((uint)(pbVar1[2] == pbVar1[1]) * 2 + 1) * 4);
  }
  return 2;
}

// 01237370  FUN_01237370  size=61  [run]
void __fastcall FUN_01237370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012373B0  FUN_012373b0  size=202  [run]
void __thiscall FUN_012373b0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_2 != *(int *)(param_1 + 0x60)) ||
     ((param_3 != '\0' && (*(int *)(param_1 + 100) != param_2)))) {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar5 = param_2 * 0x60 + *(int *)(iVar1 + 0x3c);
    *(int *)(param_1 + 100) = param_2;
    *(int *)(param_1 + 0x44) = iVar5;
    *(int *)(param_1 + 0x60) = param_2;
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x60) + *(int *)(iVar5 + 0x48) * 4;
    *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar5 + 0x5c) * 0x80000 + *(int *)(iVar1 + 0x6c);
    *(uint *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + (*(uint *)(iVar5 + 0x4c) >> 8) * 2;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0x78) + (*(uint *)(iVar5 + 0x54) >> 8) * 8;
    *(uint *)(param_1 + 0x5c) = *(uint *)(iVar5 + 0x4c) & 0xff;
    *(uint *)(param_1 + 0x48) = *(int *)(iVar1 + 0x48) + (*(uint *)(iVar5 + 0x50) >> 8) * 4;
    uVar2 = *(undefined4 *)(iVar5 + 0x34);
    uVar3 = *(undefined4 *)(iVar5 + 0x38);
    uVar4 = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x40);
    uVar3 = *(undefined4 *)(iVar5 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (*(uint *)(*(int *)(param_1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return;
}

// 012374B0  FUN_012374b0  size=70  [run]
void __thiscall FUN_012374b0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1[6] != 0) {
    puVar4 = (uint *)(param_1[6] * 0x30 + *param_1);
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
  *param_2 = 0x7f7fffee;
  param_2[1] = 0x7f7fffee;
  param_2[2] = 0x7f7fffee;
  param_2[3] = 0x7f7fffee;
  param_2[4] = *param_2 ^ 0x80000000;
  param_2[5] = param_2[1] ^ 0x80000000;
  param_2[6] = param_2[2] ^ 0x80000000;
  param_2[7] = param_2[3] ^ 0x80000000;
  return;
}

// 01237500  FUN_01237500  size=64  [run]
void __fastcall FUN_01237500(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01237540  FUN_01237540  size=75  [run]
void __thiscall FUN_01237540(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01237590  FUN_01237590  size=55  [run]
void __thiscall FUN_01237590(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 012375D0  FUN_012375d0  size=54  [run]
int __thiscall FUN_012375d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01237610  FUN_01237610  size=138  [run]
int * __thiscall FUN_01237610(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  if (param_2 != 0) {
    param_2 = param_2 * 0x230;
    iVar1 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_2 = param_2 / 0x230;
    if (param_2 != 0) goto LAB_01237670;
  }
  param_2 = -0x80000000;
LAB_01237670:
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  if (0 < iVar2) {
    do {
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x220) = 0;
      }
      iVar1 = iVar1 + 0x230;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

// 012376A0  FUN_012376a0  size=56  [run]
void __thiscall FUN_012376a0(int param_1,int param_2)

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

// 012376E0  FUN_012376e0  size=56  [run]
void __thiscall FUN_012376e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,5);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01237720  FUN_01237720  size=64  [run]
void __fastcall FUN_01237720(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01237760  FUN_01237760  size=64  [run]
void __fastcall FUN_01237760(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012377A0  FUN_012377a0  size=63  [run]
void __fastcall FUN_012377a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012377E0  FUN_012377e0  size=63  [run]
void __fastcall FUN_012377e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x230);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01237820  FUN_01237820  size=33  [run]
void FUN_01237820(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01236b40(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01237850  FUN_01237850  size=33  [run]
void FUN_01237850(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01236c40(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01237880  FUN_01237880  size=457  [run]
int __thiscall FUN_01237880(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = *param_1;
  iVar5 = param_2 * 0x30 + iVar1;
  if (*(int *)(iVar5 + 0x24) != 0) {
    iVar4 = *(int *)(iVar5 + 0x28) * 0x30 + iVar1;
    if (*(int *)(iVar4 + 0x24) != 0) {
      iVar2 = *(int *)(iVar5 + 0x20);
      iVar6 = *(int *)(iVar4 + 0x24) * 0x30 + iVar1;
      *(int *)(iVar6 + 0x20) = (iVar5 - iVar1) / 0x30;
      *(int *)(iVar5 + 0x28) = (iVar6 - *param_1) / 0x30;
      *(int *)(iVar5 + 0x20) = (iVar4 - *param_1) / 0x30;
      *(int *)(iVar4 + 0x24) = (iVar5 - *param_1) / 0x30;
      *(int *)(iVar4 + 0x20) = iVar2;
      iVar1 = *param_1;
      iVar3 = ((iVar5 - iVar1) / 0x30) * 0x30;
      iVar5 = *(int *)(iVar3 + 0x24 + iVar1);
      iVar6 = *(int *)(iVar3 + 0x28 + iVar1);
      auVar8 = *(undefined1 (*) [16])(iVar1 + 0x10 + iVar5 * 0x30);
      auVar9 = *(undefined1 (*) [16])(iVar1 + 0x10 + iVar6 * 0x30);
      auVar7 = minps(*(undefined1 (*) [16])(iVar1 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + iVar6 * 0x30));
      *(undefined1 (*) [16])(iVar3 + iVar1) = auVar7;
      auVar8 = maxps(auVar8,auVar9);
      ((undefined1 (*) [16])(iVar3 + iVar1))[1] = auVar8;
      iVar1 = *param_1;
      iVar3 = ((iVar4 - iVar1) / 0x30) * 0x30;
      iVar5 = *(int *)(iVar3 + 0x24 + iVar1);
      iVar6 = *(int *)(iVar3 + 0x28 + iVar1);
      auVar8 = minps(*(undefined1 (*) [16])(iVar1 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + iVar6 * 0x30));
      auVar9 = maxps(*(undefined1 (*) [16])(iVar1 + 0x10 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + 0x10 + iVar6 * 0x30));
      *(undefined1 (*) [16])(iVar3 + iVar1) = auVar8;
      ((undefined1 (*) [16])(iVar3 + iVar1))[1] = auVar9;
      if (iVar2 == 0) {
        param_1[6] = (iVar4 - *param_1) / 0x30;
      }
      else {
        iVar1 = *param_1;
        *(int *)(iVar1 + 0x24 +
                ((uint)(*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == param_2) + iVar2 * 0xc) * 4) =
             (iVar4 - iVar1) / 0x30;
      }
      return (iVar4 - *param_1) / 0x30;
    }
  }
  return 0;
}

// 01237A50  FUN_01237a50  size=457  [run]
int __thiscall FUN_01237a50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = *param_1;
  iVar5 = param_2 * 0x30 + iVar1;
  if (*(int *)(iVar5 + 0x24) != 0) {
    iVar4 = *(int *)(iVar5 + 0x24) * 0x30 + iVar1;
    if (*(int *)(iVar4 + 0x24) != 0) {
      iVar2 = *(int *)(iVar5 + 0x20);
      iVar6 = *(int *)(iVar4 + 0x28) * 0x30 + iVar1;
      *(int *)(iVar6 + 0x20) = (iVar5 - iVar1) / 0x30;
      *(int *)(iVar5 + 0x24) = (iVar6 - *param_1) / 0x30;
      *(int *)(iVar5 + 0x20) = (iVar4 - *param_1) / 0x30;
      *(int *)(iVar4 + 0x28) = (iVar5 - *param_1) / 0x30;
      *(int *)(iVar4 + 0x20) = iVar2;
      iVar1 = *param_1;
      iVar3 = ((iVar5 - iVar1) / 0x30) * 0x30;
      iVar5 = *(int *)(iVar3 + 0x24 + iVar1);
      iVar6 = *(int *)(iVar3 + 0x28 + iVar1);
      auVar8 = *(undefined1 (*) [16])(iVar1 + 0x10 + iVar5 * 0x30);
      auVar9 = *(undefined1 (*) [16])(iVar1 + 0x10 + iVar6 * 0x30);
      auVar7 = minps(*(undefined1 (*) [16])(iVar1 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + iVar6 * 0x30));
      *(undefined1 (*) [16])(iVar3 + iVar1) = auVar7;
      auVar8 = maxps(auVar8,auVar9);
      ((undefined1 (*) [16])(iVar3 + iVar1))[1] = auVar8;
      iVar1 = *param_1;
      iVar3 = ((iVar4 - iVar1) / 0x30) * 0x30;
      iVar5 = *(int *)(iVar3 + 0x24 + iVar1);
      iVar6 = *(int *)(iVar3 + 0x28 + iVar1);
      auVar8 = minps(*(undefined1 (*) [16])(iVar1 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + iVar6 * 0x30));
      auVar9 = maxps(*(undefined1 (*) [16])(iVar1 + 0x10 + iVar5 * 0x30),
                     *(undefined1 (*) [16])(iVar1 + 0x10 + iVar6 * 0x30));
      *(undefined1 (*) [16])(iVar3 + iVar1) = auVar8;
      ((undefined1 (*) [16])(iVar3 + iVar1))[1] = auVar9;
      if (iVar2 == 0) {
        param_1[6] = (iVar4 - *param_1) / 0x30;
      }
      else {
        iVar1 = *param_1;
        *(int *)(iVar1 + 0x24 +
                ((uint)(*(int *)(iVar1 + 0x28 + iVar2 * 0x30) == param_2) + iVar2 * 0xc) * 4) =
             (iVar4 - iVar1) / 0x30;
      }
      return (iVar4 - *param_1) / 0x30;
    }
  }
  return 0;
}

// 01237C20  FUN_01237c20  size=47  [run]
void FUN_01237c20(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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

// 01237C50  FUN_01237c50  size=99  [run]
void __thiscall FUN_01237c50(undefined4 *param_1,int param_2)

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

// 01237CE0  FUN_01237ce0  size=132  [run]
int * __thiscall FUN_01237ce0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2;
  iVar4 = 0;
  iVar2 = param_2 + 0x1f >> 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  if (iVar2 != 0) {
    param_2 = iVar2 * 4;
    iVar4 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_01237d37;
  }
  iVar3 = -0x80000000;
LAB_01237d37:
  param_1[2] = iVar3;
  *param_1 = iVar4;
  iVar4 = 0;
  param_1[1] = iVar2;
  param_1[3] = iVar1;
  if (0 < iVar2) {
    do {
      *(uint *)(*param_1 + iVar4 * 4) = -(uint)(param_3 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  return param_1;
}

// 01237DA0  FUN_01237da0  size=129  [run]
undefined4 * __thiscall FUN_01237da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  piVar1 = param_1 + 2;
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x1c))();
  if ((int)(param_1[4] & 0x3fffffff) < iVar2) {
    iVar3 = (param_1[4] & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar3,4);
  }
  iVar3 = iVar2 - param_1[3];
  puVar4 = (undefined4 *)(*piVar1 + param_1[3] * 4);
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  param_1[3] = iVar2;
  return param_1;
}

// 01237E30  FUN_01237e30  size=62  [run]
void __fastcall FUN_01237e30(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) << 4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

