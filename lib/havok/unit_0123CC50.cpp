// lib/havok/unit_0123CC50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0123CC50..0124BAC0, 186 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkpBvCompressedMeshShape.h"
#include "hkpMoppAssembler.h"
#include "hkpMoppCode.h"
#include "hkpMoppCodeGenerator.h"
#include "hkpMoppDefaultAssembler.h"
#include "hkpMoppDefaultSplitter.h"
#include "hkpMoppNodeMgr.h"
#include "hkpMoppSplitter.h"

// 0123CC50  FUN_0123cc50  size=472  [run]
void __fastcall FUN_0123cc50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x14) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x18) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x1c) = 0x7f7fffee;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x14) ^ 0x80000000;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x18) ^ 0x80000000;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x1c) ^ 0x80000000;
  iVar1 = *(int *)(param_1 + 0x40) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(iVar1 * 0x60 + 8 + *(int *)(param_1 + 0x3c));
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      iVar1 = iVar1 + -1;
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -0x18;
    } while (-1 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x3c),(*(uint *)(param_1 + 0x44) & 0x3fffffff) * 0x60);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (-1 < *(int *)(param_1 + 0x50)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x48),*(int *)(param_1 + 0x50) * 4);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(undefined4 *)(param_1 + 100) = 0;
  if (-1 < *(int *)(param_1 + 0x68)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 0x68) * 4);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x80000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < *(int *)(param_1 + 0x74)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x6c),*(int *)(param_1 + 0x74) * 8);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x54),(*(uint *)(param_1 + 0x5c) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if ((*(uint *)(param_1 + 0x80) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0x80000000;
    return;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))
            (*(undefined4 *)(param_1 + 0x78),*(uint *)(param_1 + 0x80) * 8);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x80000000;
  return;
}

// 0123CE30  FUN_0123ce30  size=7468  [run]
undefined4 FUN_0123ce30(char *param_1,int *param_2,int *param_3,uint *param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 *puVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar26 [16];
  undefined4 uVar29;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar30 [16];
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar42;
  undefined1 auVar38 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  char *pcVar49;
  undefined1 local_3e0 [512];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [8];
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
  undefined4 uStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [16];
  undefined1 local_110 [8];
  float fStack_108;
  float fStack_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [8];
  float fStack_e8;
  float fStack_e4;
  int local_d4;
  undefined1 local_d0 [4];
  undefined1 auStack_cc [4];
  undefined8 uStack_c8;
  undefined8 local_b4;
  int local_ac;
  uint local_a8 [4];
  int local_98;
  int local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  int local_84;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70 [3];
  char local_61;
  undefined1 (*local_60 [2]) [16];
  uint local_58 [6];
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined1 (*local_2c) [16];
  uint local_28;
  uint local_24;
  undefined1 (*local_20) [16];
  uint local_1c;
  undefined1 (*local_18) [16];
  undefined1 (*local_14) [16];
  
  local_34 = (**(code **)(**(int **)(param_2[1] + 4) + 8))();
  param_3[1] = 0;
  if (-1 < param_3[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_3,param_3[2] * 4);
  }
  local_2c = (undefined1 (*) [16])(param_3 + 3);
  *param_3 = 0;
  param_3[2] = -0x80000000;
  param_3[4] = 0;
  if (-1 < param_3[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)*local_2c,param_3[5] * 4);
  }
  *(undefined4 *)*local_2c = 0;
  *(undefined4 *)((int)*local_2c + 8) = 0x80000000;
  if ((int)(param_3[2] & 0x3fffffffU) < local_34) {
    iVar18 = (param_3[2] & 0x3fffffffU) * 2;
    iVar19 = local_34;
    if (local_34 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar19,4);
  }
  iVar18 = local_34 - param_3[1];
  puVar22 = (undefined4 *)(*param_3 + param_3[1] * 4);
  if (0 < iVar18) {
    for (; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = 0xffffffff;
      puVar22 = puVar22 + 1;
    }
  }
  param_3[1] = local_34;
  iVar18 = (**(code **)(**(int **)(param_2[1] + 4) + 0x1c))();
  uVar13 = *(uint *)((int)*local_2c + 8) & 0x3fffffff;
  local_84 = iVar18;
  if ((int)uVar13 < iVar18) {
    iVar19 = uVar13 * 2;
    if (iVar19 <= iVar18) {
      iVar19 = iVar18;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_2c,iVar19,4);
  }
  iVar19 = iVar18 - *(int *)((int)*local_2c + 4);
  puVar22 = (undefined4 *)(*(int *)*local_2c + *(int *)((int)*local_2c + 4) * 4);
  if (0 < iVar19) {
    for (; iVar18 = local_84, iVar19 != 0; iVar19 = iVar19 + -1) {
      *puVar22 = 0xffffffff;
      puVar22 = puVar22 + 1;
    }
  }
  *(int *)((int)*local_2c + 4) = iVar18;
  if (param_1[0x10] != '\0') {
    FUN_0144d2d0(param_2,param_2 + 2,*(undefined4 *)(param_1 + 0x14));
  }
  fVar24 = *(float *)(param_1 + 0x1c);
  local_18 = (undefined1 (*) [16])0x0;
  if ((float)(undefined *)0x0 <= fVar24) {
    auStack_cc = (undefined1  [4])fVar24;
    local_d0 = (undefined1  [4])fVar24;
    uStack_c8._0_4_ = fVar24;
    uStack_c8._4_4_ = fVar24;
    local_14 = (undefined1 (*) [16])0x1;
    if (0 < local_34) {
      iVar18 = 0;
      do {
        local_84 = iVar18 >> 5;
        if ((*(uint *)(param_2[5] + local_84 * 4) >> ((byte)iVar18 & 0x1f) & 1) != 0) {
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(iVar18,local_58);
          iVar19 = param_2[2];
          local_58[0] = *(uint *)(iVar19 + local_58[0] * 4);
          local_58[1] = *(uint *)(iVar19 + local_58[1] * 4);
          local_58[2] = *(uint *)(iVar19 + local_58[2] * 4);
          local_61 = local_58[2] != local_58[1];
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(iVar18,local_70);
          iVar19 = param_2[2];
          local_70[0] = *(uint *)(iVar19 + local_70[0] * 4);
          local_70[1] = *(uint *)(iVar19 + local_70[1] * 4);
          local_70[2] = *(uint *)(iVar19 + local_70[2] * 4);
          (**(code **)(*param_2 + 8))(local_70[0],local_1b0);
          (**(code **)(*param_2 + 8))(local_70[1],local_1a0);
          (**(code **)(*param_2 + 8))(local_70[2],local_190);
          if ((local_61 == '\0') ||
             (iVar19 = FUN_0112b050(local_1b0,local_1a0,local_190,local_d0), iVar19 != 0)) {
            local_18 = (undefined1 (*) [16])((int)*local_18 + 1);
            puVar15 = (uint *)(param_2[5] + local_84 * 4);
            *puVar15 = *puVar15 & ~(uint)local_14;
          }
        }
        iVar18 = iVar18 + 1;
        local_14 = (undefined1 (*) [16])((int)local_14 << 1 | (uint)((int)local_14 < 0));
      } while (iVar18 < local_34);
    }
  }
  pauVar14 = local_18;
  if (((param_1[0xc] & 1U) != 0) && (local_18 != (undefined1 (*) [16])0x0)) {
    hkErrStream::hkErrStream(local_3e0,0x200);
    pcVar49 = " degenerated triangles in the input geometry, removing them.";
    FUN_01018d00("Found ");
    FUN_01018dc0(pauVar14);
    FUN_01018d00(pcVar49);
    (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_3e0,0,0);
    hkBaseObject::hkBaseObject_38();
  }
  iVar18 = local_34 + 0x1f >> 5;
  if (iVar18 == 0) {
    local_80 = (undefined4 *)0x0;
  }
  else {
    local_84 = iVar18 * 4;
    local_80 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_84);
    local_d4 = (int)(local_84 + (local_84 >> 0x1f & 3U)) >> 2;
    if (local_d4 != 0) goto LAB_0123d1be;
  }
  local_d4 = -0x80000000;
LAB_0123d1be:
  puVar22 = local_80;
  if (0 < iVar18) {
    for (; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
    }
  }
  uVar13 = local_34 * 3;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  if (0 < (int)uVar13) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_7c,uVar13 & ((int)uVar13 < 0) - 1,0xc);
  }
  local_20 = (undefined1 (*) [16])0x0;
  iVar18 = local_78;
  if (0 < local_34) {
    do {
      if ((*(uint *)(param_2[5] + ((int)local_20 >> 5) * 4) >> ((byte)local_20 & 0x1f) & 1) != 0) {
        (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_20,local_58 + 3);
        iVar18 = param_2[2];
        local_58[3] = *(uint *)(iVar18 + local_58[3] * 4);
        local_58[4] = *(uint *)(iVar18 + local_58[4] * 4);
        local_58[5] = *(uint *)(iVar18 + local_58[5] * 4);
        local_40 = local_58[3];
        if (((int)local_58[3] < (int)local_58[4]) ||
           (local_40 = local_58[4], uStack_3c = local_58[3], (int)local_58[3] <= (int)local_58[4]))
        {
          uStack_3c = local_58[4];
        }
        local_38 = (uint)local_20 & 0x3fffffff;
        puVar15 = (uint *)(local_7c + local_78 * 0xc);
        if (puVar15 != (uint *)0x0) {
          *puVar15 = local_40;
          puVar15[1] = uStack_3c;
          puVar15[2] = local_38;
        }
        local_90 = local_58[4];
        if (((int)local_58[4] < (int)local_58[5]) ||
           (local_90 = local_58[5], uStack_8c = local_58[4], (int)local_58[4] <= (int)local_58[5]))
        {
          uStack_8c = local_58[5];
        }
        local_88 = local_38 | 0x40000000;
        puVar15 = (uint *)(local_7c + (local_78 + 1) * 0xc);
        if (puVar15 != (uint *)0x0) {
          *puVar15 = local_90;
          puVar15[1] = uStack_8c;
          puVar15[2] = local_88;
        }
        local_58[0] = local_58[5];
        if (((int)local_58[5] < (int)local_58[3]) ||
           (local_58[0] = local_58[3], local_58[1] = local_58[5],
           (int)local_58[5] <= (int)local_58[3])) {
          local_58[1] = local_58[3];
        }
        local_58[2] = local_38 | 0x80000000;
        puVar15 = (uint *)(local_7c + (local_78 + 2) * 0xc);
        if (puVar15 != (uint *)0x0) {
          *puVar15 = local_58[0];
          puVar15[1] = local_58[1];
          puVar15[2] = local_58[2];
        }
        iVar18 = local_78 + 3;
        local_78 = iVar18;
      }
      local_20 = (undefined1 (*) [16])((int)local_20 + 1);
    } while ((int)local_20 < local_34);
  }
  local_1c = local_1c & 0xffffff00;
  if (1 < iVar18) {
    FUN_01236b40(local_7c,0,iVar18 + -1,local_1c);
    iVar18 = local_78;
  }
  iVar19 = local_34 + 1;
  if ((int)(param_4[2] & 0x3fffffff) < iVar19) {
    iVar18 = (param_4[2] & 0x3fffffff) * 2;
    if (iVar19 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar19,0xc);
    iVar18 = local_78;
  }
  local_24 = iVar18 - 1;
  local_20 = (undefined1 (*) [16])0x0;
  if (0 < (int)local_24) {
    local_28 = 0;
    do {
      local_14 = (undefined1 (*) [16])(local_28 + local_7c);
      if ((*(int *)(*local_14 + 0xc) <= *(int *)*local_14) &&
         (*(int *)*local_14 <= *(int *)(*local_14 + 0xc))) {
        if ((*(int *)local_14[1] <= *(int *)(*local_14 + 4)) &&
           (*(int *)(*local_14 + 4) <= *(int *)local_14[1])) {
          local_18 = (undefined1 (*) [16])(*(uint *)(*local_14 + 8) & 0x3fffffff);
          local_1c = *(uint *)(local_14[1] + 4) & 0x3fffffff;
          if (*(int *)(**(int **)param_2[1] + *(uint *)(*local_14 + 8) * 4) ==
              *(int *)(**(int **)param_2[1] + *(uint *)(local_14[1] + 4) * 4)) {
            (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_18,local_70);
            iVar18 = param_2[2];
            local_70[0] = *(uint *)(iVar18 + local_70[0] * 4);
            local_70[1] = *(uint *)(iVar18 + local_70[1] * 4);
            local_70[2] = *(uint *)(iVar18 + local_70[2] * 4);
            (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_1c,local_58 + 3);
            auVar46 = _local_d0;
            iVar18 = param_2[2];
            local_58[3] = *(uint *)(iVar18 + local_58[3] * 4);
            local_58[4] = *(uint *)(iVar18 + local_58[4] * 4);
            local_58[5] = *(uint *)(iVar18 + local_58[5] * 4);
            uVar20 = *(uint *)(*local_14 + 8) >> 0x1e;
            uVar13 = local_70[uVar20];
            auStack_cc = (undefined1  [4])uVar13;
            uVar21 = *(uint *)(local_14[1] + 4) >> 0x1e;
            local_d0 = (undefined1  [4])local_70[(uVar20 + 2) % 3];
            auVar36 = _local_d0;
            uVar20 = local_58[uVar21 + 3];
            uStack_c8._4_4_ = auVar46._12_4_;
            _local_d0 = auVar36._0_8_;
            uStack_c8._0_4_ = (float)local_58[(uVar21 + 2) % 3 + 3];
            if ((uVar13 == local_58[(uVar21 + 1) % 3 + 3]) &&
               (uVar20 == local_70[((*(uint *)(*local_14 + 8) >> 0x1e) + 1) % 3])) {
              local_60[0] = local_20;
              local_60[1] = (undefined1 (*) [16])(*local_20 + 1);
              bVar4 = true;
              if (param_1[2] != '\0') {
                (**(code **)(*param_2 + 8))(uVar13,&local_160);
                (**(code **)(*param_2 + 8))(uVar20,&local_150);
                (**(code **)(*param_2 + 8))(local_d0,&local_140);
                (**(code **)(*param_2 + 8))((float)uStack_c8,&local_130);
                fVar24 = (fStack_128 - fStack_158) *
                         ((local_150 - local_160) * (fStack_13c - fStack_15c) -
                         (fStack_14c - fStack_15c) * (local_140 - local_160)) +
                         (fStack_12c - fStack_15c) *
                         ((fStack_148 - fStack_158) * (local_140 - local_160) -
                         (local_150 - local_160) * (fStack_138 - fStack_158)) +
                         (local_130 - local_160) *
                         ((fStack_14c - fStack_15c) * (fStack_138 - fStack_158) -
                         (fStack_148 - fStack_158) * (fStack_13c - fStack_15c));
                bVar4 = -1.1920929e-07 < fVar24;
                if (fVar24 <= -1.1920929e-07) goto LAB_0123da1d;
              }
              if (param_1[3] == '\0') {
LAB_0123d667:
                if (!bVar4) goto LAB_0123da1d;
              }
              else if (((((auStack_cc != (undefined1  [4])local_70[0]) ||
                         ((float)uStack_c8 != (float)local_70[1])) || (uVar20 != local_70[2])) ||
                       ((auStack_cc != (undefined1  [4])local_58[3] || (uVar20 != local_58[4])))) ||
                      (local_d0 != (undefined1  [4])local_58[5])) {
                bVar4 = true;
                if (((uVar20 != local_70[0]) || (local_d0 != (undefined1  [4])local_70[1])) ||
                   ((auStack_cc != (undefined1  [4])local_70[2] ||
                    (((uVar20 != local_58[3] || (auStack_cc != (undefined1  [4])local_58[4])) ||
                     ((float)uStack_c8 != (float)local_58[5])))))) {
                  bVar4 = false;
                }
                local_60[0] = local_60[1];
                local_60[1] = local_20;
                goto LAB_0123d667;
              }
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_18,local_a8 + 6);
              iVar18 = param_2[2];
              local_90 = *(uint *)(iVar18 + local_90 * 4);
              uStack_8c = *(uint *)(iVar18 + uStack_8c * 4);
              local_88 = *(uint *)(iVar18 + local_88 * 4);
              (**(code **)(*param_2 + 8))(local_90,local_1e0);
              (**(code **)(*param_2 + 8))(uStack_8c,local_1d0);
              (**(code **)(*param_2 + 8))(local_88,local_1c0);
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_1c,local_58 + 6);
              iVar18 = param_2[2];
              local_40 = *(uint *)(iVar18 + local_40 * 4);
              uStack_3c = *(uint *)(iVar18 + uStack_3c * 4);
              local_38 = *(uint *)(iVar18 + local_38 * 4);
              (**(code **)(*param_2 + 8))(local_40,&local_150);
              (**(code **)(*param_2 + 8))(uStack_3c,&local_140);
              (**(code **)(*param_2 + 8))(local_38,&local_130);
              auVar46._4_4_ = fStack_14c;
              auVar46._0_4_ = local_150;
              auVar46._8_4_ = fStack_148;
              auVar46._12_4_ = fStack_144;
              auVar36._4_4_ = fStack_13c;
              auVar36._0_4_ = local_140;
              auVar36._8_4_ = fStack_138;
              auVar36._12_4_ = uStack_134;
              auVar36 = maxps(auVar46,auVar36);
              auVar37._4_4_ = fStack_12c;
              auVar37._0_4_ = local_130;
              auVar37._8_4_ = fStack_128;
              auVar37._12_4_ = uStack_124;
              auVar37 = maxps(auVar36,auVar37);
              auVar6._4_4_ = fStack_13c;
              auVar6._0_4_ = local_140;
              auVar6._8_4_ = fStack_138;
              auVar6._12_4_ = uStack_134;
              auVar46 = minps(auVar46,auVar6);
              auVar9._4_4_ = fStack_12c;
              auVar9._0_4_ = local_130;
              auVar9._8_4_ = fStack_128;
              auVar9._12_4_ = uStack_124;
              auVar36 = minps(auVar46,auVar9);
              auVar46 = minps(local_1e0,local_1d0);
              local_1a0 = minps(auVar46,local_1c0);
              auVar46 = maxps(local_1e0,local_1d0);
              auVar46 = maxps(auVar46,local_1c0);
              fVar34 = auVar46._0_4_ - local_1a0._0_4_;
              fVar39 = auVar46._4_4_ - local_1a0._4_4_;
              fVar41 = auVar46._8_4_ - local_1a0._8_4_;
              fVar24 = fVar39 * fVar34;
              fVar39 = fVar41 * fVar39;
              fVar34 = fVar34 * fVar41;
              local_110._4_4_ = fVar34 + fVar39 + fVar24;
              local_110._0_4_ = fVar34 + fVar39 + fVar24;
              fStack_108 = fVar34 + fVar39 + fVar24;
              fStack_104 = fVar34 + fVar39 + fVar24;
              fVar34 = auVar37._0_4_ - auVar36._0_4_;
              fVar39 = auVar37._4_4_ - auVar36._4_4_;
              fVar41 = auVar37._8_4_ - auVar36._8_4_;
              fVar24 = fVar39 * fVar34;
              fVar39 = fVar41 * fVar39;
              fVar34 = fVar34 * fVar41;
              local_f0._4_4_ = fVar34 + fVar39 + fVar24;
              local_f0._0_4_ = fVar34 + fVar39 + fVar24;
              fStack_e8 = fVar34 + fVar39 + fVar24;
              fStack_e4 = fVar34 + fVar39 + fVar24;
              auVar36 = minps(local_1a0,auVar36);
              auVar46 = maxps(auVar46,auVar37);
              fVar24 = auVar46._0_4_ - auVar36._0_4_;
              fVar34 = auVar46._4_4_ - auVar36._4_4_;
              fVar41 = auVar46._8_4_ - auVar36._8_4_;
              fVar39 = fVar34 * fVar24;
              fVar34 = fVar41 * fVar34;
              fVar24 = fVar24 * fVar41;
              local_170._0_4_ = fVar24 + fVar34 + fVar39;
              local_170._4_4_ = fVar24 + fVar34 + fVar39;
              fStack_168 = fVar24 + fVar34 + fVar39;
              fStack_164 = fVar24 + fVar34 + fVar39;
              fVar24 = (float)local_170._0_4_;
              if (param_4[1] == (param_4[2] & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,param_4,0xc);
                fVar24 = (float)local_170._0_4_;
              }
              uVar13 = param_4[1];
              param_4[1] = uVar13 + 1;
              puVar15 = (uint *)(*param_4 + uVar13 * 0xc);
              *puVar15 = *(uint *)(local_7c + 8 + (int)local_60[0] * 0xc);
              puVar15[1] = *(uint *)(local_7c + 8 + (int)local_60[1] * 0xc);
              local_14 = (undefined1 (*) [16])(((*puVar15 >> 0x1e) + 2) % 3);
              local_1c = *puVar15 & 0x3fffffff;
              puVar15[2] = (uint)((fVar24 - (float)local_110._0_4_) +
                                 (fVar24 - (float)local_f0._0_4_));
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_1c,local_a8);
              iVar18 = param_2[2];
              local_a8[0] = *(uint *)(iVar18 + local_a8[0] * 4);
              local_a8[1] = *(int *)(iVar18 + local_a8[1] * 4);
              local_a8[2] = *(int *)(iVar18 + local_a8[2] * 4);
              local_2c = (undefined1 (*) [16])local_a8[(int)local_14];
              local_1c = puVar15[1] & 0x3fffffff;
              local_14 = (undefined1 (*) [16])(puVar15[1] >> 0x1e);
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_1c,local_a8 + 3);
              iVar18 = param_2[2];
              local_a8[3] = *(int *)(iVar18 + local_a8[3] * 4);
              local_98 = *(int *)(iVar18 + local_98 * 4);
              local_94 = *(int *)(iVar18 + local_94 * 4);
              local_18 = (undefined1 (*) [16])local_a8[(int)(*local_14 + 3)];
              local_1c = puVar15[1] & 0x3fffffff;
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_1c,local_58);
              iVar18 = param_2[2];
              local_58[0] = *(uint *)(iVar18 + local_58[0] * 4);
              local_58[1] = *(uint *)(iVar18 + local_58[1] * 4);
              local_58[2] = *(uint *)(iVar18 + local_58[2] * 4);
              (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(*puVar15 & 0x3fffffff,&local_b4);
              iVar18 = param_2[2];
              local_b4 = CONCAT44(*(undefined4 *)(iVar18 + local_b4._4_4_ * 4),
                                  *(undefined4 *)(iVar18 + (uint)local_b4 * 4));
              local_ac = *(int *)(iVar18 + local_ac * 4);
              if (local_2c == local_18) {
                param_4[1] = param_4[1] - 1;
              }
            }
          }
        }
      }
LAB_0123da1d:
      local_20 = (undefined1 (*) [16])(*local_20 + 1);
      local_28 = local_28 + 0xc;
    } while ((int)local_20 < (int)local_24);
  }
  uVar13 = param_4[1];
  if (uVar13 != 0) {
    local_20 = (undefined1 (*) [16])0x0;
    local_24 = local_24 & 0xffffff00;
    if (1 < (int)uVar13) {
      FUN_01236c40(*param_4,0,uVar13 - 1,local_24);
    }
    local_14 = (undefined1 (*) [16])0x0;
    if (0 < (int)param_4[1]) {
      local_1c = 0;
      local_18 = (undefined1 (*) [16])0x0;
      do {
        local_24 = *param_4;
        uVar3 = *(undefined8 *)((int)*local_18 + local_24);
        local_ac = *(int *)((int)*local_18 + local_24 + 8);
        local_b4._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
        local_2c = (undefined1 (*) [16])(local_b4._4_4_ & 0x3fffffff);
        local_b4._0_4_ = (uint)uVar3;
        local_28 = (uint)local_b4 & 0x3fffffff;
        if ((((uint)local_80[(int)local_2c >> 5] >> ((byte)((ulonglong)uVar3 >> 0x20) & 0x1f) |
             (uint)local_80[(int)local_28 >> 5] >> ((byte)local_28 & 0x1f)) & 1) == 0) {
          *(undefined8 *)(local_1c + local_24) = uVar3;
          *(int *)(local_1c + 8 + local_24) = local_ac;
          local_20 = (undefined1 (*) [16])(*local_20 + 1);
          local_1c = local_1c + 0xc;
          local_80[(int)local_28 >> 5] = local_80[(int)local_28 >> 5] | 1 << ((byte)local_28 & 0x1f)
          ;
          local_80[(int)local_2c >> 5] = local_80[(int)local_2c >> 5] | 1 << ((byte)local_2c & 0x1f)
          ;
        }
        local_14 = (undefined1 (*) [16])(*local_14 + 1);
        local_18 = (undefined1 (*) [16])((int)*local_18 + 0xc);
        local_b4 = uVar3;
      } while ((int)local_14 < (int)param_4[1]);
    }
    if ((int)(param_4[2] & 0x3fffffff) < (int)local_20) {
      pauVar14 = (undefined1 (*) [16])((param_4[2] & 0x3fffffff) * 2);
      if ((int)pauVar14 <= (int)local_20) {
        pauVar14 = local_20;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_4,pauVar14,0xc);
    }
    param_4[1] = (uint)local_20;
  }
  local_78 = 0;
  if (-1 < (int)local_74) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_7c,(local_74 & 0x3fffffff) * 0xc);
  }
  uVar16 = *(undefined4 *)(param_1 + 0x18);
  auStack_cc = (undefined1  [4])uVar16;
  local_d0 = (undefined1  [4])uVar16;
  uStack_c8._0_4_ = (float)uVar16;
  uStack_c8._4_4_ = (float)uVar16;
  FUN_010948a0((param_4[1] + local_34) * 2);
  local_28 = 0;
  if (0 < (int)param_4[1]) {
    local_1c = 0;
    do {
      fStack_f8 = 3.40282e+38;
      local_100 = (undefined1  [8])0x7f7fffee7f7fffee;
      fStack_f4 = 3.40282e+38;
      fStack_e8 = -3.40282e+38;
      local_f0 = (undefined1  [8])0xff7fffeeff7fffee;
      fStack_e4 = -3.40282e+38;
      local_14 = (undefined1 (*) [16])0x0;
      do {
        puVar15 = (uint *)(*param_4 + local_1c);
        switch(local_14) {
        case (undefined1 (*) [16])0x0:
          local_24 = *puVar15 & 0x3fffffff;
          local_18 = (undefined1 (*) [16])(*puVar15 >> 0x1e);
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_24,local_58);
          iVar18 = param_2[2];
          local_58[0] = *(uint *)(iVar18 + local_58[0] * 4);
          local_58[1] = *(uint *)(iVar18 + local_58[1] * 4);
          local_58[2] = *(uint *)(iVar18 + local_58[2] * 4);
          uVar13 = local_58[(int)local_18];
          break;
        case (undefined1 (*) [16])0x1:
          local_18 = (undefined1 (*) [16])(((puVar15[1] >> 0x1e) + 2) % 3);
          local_24 = puVar15[1] & 0x3fffffff;
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_24,local_a8 + 3);
          iVar18 = param_2[2];
          local_a8[3] = *(int *)(iVar18 + local_a8[3] * 4);
          local_98 = *(int *)(iVar18 + local_98 * 4);
          local_94 = *(int *)(iVar18 + local_94 * 4);
          uVar13 = local_a8[(int)*local_18 + 3];
          break;
        case (undefined1 (*) [16])0x2:
          local_24 = puVar15[1] & 0x3fffffff;
          local_18 = (undefined1 (*) [16])(puVar15[1] >> 0x1e);
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_24,local_a8);
          iVar18 = param_2[2];
          local_a8[0] = *(uint *)(iVar18 + local_a8[0] * 4);
          local_a8[1] = *(int *)(iVar18 + local_a8[1] * 4);
          local_a8[2] = *(int *)(iVar18 + local_a8[2] * 4);
          uVar13 = local_a8[(int)local_18];
          break;
        case (undefined1 (*) [16])0x3:
          local_18 = (undefined1 (*) [16])(((*puVar15 >> 0x1e) + 2) % 3);
          local_24 = *puVar15 & 0x3fffffff;
          (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_24,local_58 + 6);
          iVar18 = param_2[2];
          local_40 = *(uint *)(iVar18 + local_40 * 4);
          uStack_3c = *(uint *)(iVar18 + uStack_3c * 4);
          local_38 = *(uint *)(iVar18 + local_38 * 4);
          uVar13 = local_58[(int)*local_18 + 6];
          break;
        default:
          uVar13 = 0xffffffff;
        }
        (**(code **)(*param_2 + 8))(uVar13,local_110);
        _local_100 = minps(_local_100,_local_110);
        _local_f0 = maxps(_local_f0,_local_110);
        puVar12 = *local_14;
        local_14 = (undefined1 (*) [16])(puVar12 + 1);
      } while ((int)(puVar12 + 1) < 4);
      fVar24 = local_100._0_4_;
      fVar39 = local_100._8_4_;
      fVar34 = local_100._12_4_;
      fVar41 = local_f0._0_4_;
      fVar47 = local_f0._8_4_;
      fVar48 = local_f0._12_4_;
      local_100._4_4_ = local_100._4_4_ - (float)auStack_cc;
      local_100._0_4_ = fVar24 - (float)local_d0;
      fStack_f8 = fVar39 - (float)uStack_c8;
      fStack_f4 = fVar34 - uStack_c8._4_4_;
      local_f0._4_4_ = local_f0._4_4_ + (float)auStack_cc;
      local_f0._0_4_ = fVar41 + (float)local_d0;
      fStack_e8 = fVar47 + (float)uStack_c8;
      fStack_e4 = fVar48 + uStack_c8._4_4_;
      if (param_5[3] == 0) {
        FUN_010948a0(1);
      }
      local_2c = (undefined1 (*) [16])param_5[3];
      iVar18 = *param_5;
      local_30 = (int)local_2c * 0x30;
      param_5[3] = *(int *)(iVar18 + local_30);
      puVar22 = (undefined4 *)(iVar18 + local_30);
      *puVar22 = local_100._0_4_;
      puVar22[1] = local_100._4_4_;
      puVar22[2] = fStack_f8;
      puVar22[3] = fStack_f4;
      *(undefined4 *)(iVar18 + 0x24 + local_30) = 0;
      *(uint *)(iVar18 + 0x28 + local_30) = local_28;
      *(undefined1 (*) [16])(iVar18 + 0x10 + local_30) = _local_f0;
      iVar18 = *param_5;
      local_180 = *(undefined1 (*) [16])(iVar18 + local_30);
      _local_170 = *(undefined1 (*) [16])(iVar18 + 0x10 + local_30);
      local_24 = param_5[6];
      if (param_5[6] == 0) {
        param_5[6] = (int)local_2c;
        *(undefined4 *)(iVar18 + 0x20 + local_30) = 0;
      }
      else {
        if (param_5[3] == 0) {
          FUN_010948a0(1);
        }
        iVar18 = param_5[3];
        iVar19 = *param_5;
        param_5[3] = *(int *)(iVar19 + iVar18 * 0x30);
        local_20 = (undefined1 (*) [16])(local_24 * 0x30 + iVar19);
        local_18 = (undefined1 (*) [16])(iVar18 * 0x30 + iVar19);
        if (*(int *)(local_20[2] + 4) != 0) {
          fVar24 = local_180._0_4_ + local_170._0_4_;
          fVar39 = local_180._4_4_ + local_170._4_4_;
          fVar34 = local_180._8_4_ + local_170._8_4_;
          fVar41 = local_170._0_4_ - local_180._0_4_;
          fVar47 = local_170._4_4_ - local_180._4_4_;
          fVar48 = local_170._8_4_ - local_180._8_4_;
          do {
            iVar18 = *(int *)(local_20[2] + 4);
            iVar19 = *param_5;
            auVar46 = minps(*local_20,local_180);
            auVar36 = maxps(local_20[1],_local_170);
            local_20[1] = auVar36;
            local_60[0] = (undefined1 (*) [16])(iVar18 * 0x30 + iVar19);
            *local_20 = auVar46;
            iVar18 = *(int *)(local_20[2] + 8) * 0x30;
            pfVar1 = (float *)(iVar18 + iVar19);
            pfVar2 = (float *)(iVar18 + 0x10 + iVar19);
            fVar43 = (*pfVar1 + *pfVar2) - fVar24;
            fVar44 = (pfVar1[1] + pfVar2[1]) - fVar39;
            fVar45 = (pfVar1[2] + pfVar2[2]) - fVar34;
            fVar35 = (*(float *)*local_60[0] + *(float *)local_60[0][1]) - fVar24;
            fVar40 = (*(float *)(*local_60[0] + 4) + *(float *)(local_60[0][1] + 4)) - fVar39;
            fVar42 = (*(float *)(*local_60[0] + 8) + *(float *)(local_60[0][1] + 8)) - fVar34;
            local_60[1] = (undefined1 (*) [16])(iVar18 + iVar19);
            local_20 = local_60[(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45) *
                                ((*pfVar2 - *pfVar1) + fVar41 + (pfVar2[1] - pfVar1[1]) + fVar47 +
                                (pfVar2[2] - pfVar1[2]) + fVar48) <
                                (fVar42 * fVar42 + fVar40 * fVar40 + fVar35 * fVar35) *
                                ((*(float *)local_60[0][1] - *(float *)*local_60[0]) + fVar41 +
                                 (*(float *)(local_60[0][1] + 4) - *(float *)(*local_60[0] + 4)) +
                                 fVar47 + (*(float *)(local_60[0][1] + 8) -
                                          *(float *)(*local_60[0] + 8)) + fVar48)];
          } while (*(int *)(local_20[2] + 4) != 0);
        }
        local_14 = (undefined1 (*) [16])(((int)local_18 - *param_5) / 0x30);
        if (*(int *)local_20[2] == 0) {
          param_5[6] = (int)local_14;
        }
        else {
          local_24 = *(uint *)(*param_5 + 0x28 + *(int *)local_20[2] * 0x30);
          *(undefined1 (**) [16])
           (*param_5 + 0x24 +
           ((uint)(local_24 == ((int)local_20 - *param_5) / 0x30) + *(int *)local_20[2] * 0xc) * 4)
               = local_14;
        }
        *(undefined4 *)local_18[2] = *(undefined4 *)local_20[2];
        *(int *)((int)local_18[2] + 4) = ((int)local_20 - *param_5) / 0x30;
        *(undefined1 (**) [16])((int)local_18[2] + 8) = local_2c;
        *(undefined1 (**) [16])local_20[2] = local_14;
        *(undefined1 (**) [16])(*param_5 + 0x20 + local_30) = local_14;
        auVar46 = minps(*local_20,local_180);
        auVar36 = maxps(local_20[1],_local_170);
        *local_18 = auVar46;
        local_18[1] = auVar36;
      }
      param_5[4] = param_5[4] + 1;
      local_1c = local_1c + 0xc;
      local_28 = local_28 + 1;
    } while ((int)local_28 < (int)param_4[1]);
  }
  local_28 = param_4[1];
  local_20 = (undefined1 (*) [16])0x0;
  if (0 < local_34) {
    do {
      local_30 = (uint)local_20 & 0x1f;
      if (((*(uint *)(param_2[5] + ((int)local_20 >> 5) * 4) >> (sbyte)local_30 & 1) != 0) &&
         (((uint)local_80[(int)local_20 >> 5] >> (sbyte)local_30 & 1) == 0)) {
        (**(code **)(**(int **)(param_2[1] + 4) + 0x10))(local_20,local_58 + 6);
        iVar18 = param_2[2];
        local_40 = *(uint *)(iVar18 + local_40 * 4);
        uStack_3c = *(uint *)(iVar18 + uStack_3c * 4);
        local_38 = *(uint *)(iVar18 + local_38 * 4);
        (**(code **)(*param_2 + 8))(local_40,&local_150);
        (**(code **)(*param_2 + 8))(uStack_3c,&local_140);
        (**(code **)(*param_2 + 8))(local_38,&local_130);
        auVar5._4_4_ = fStack_14c;
        auVar5._0_4_ = local_150;
        auVar5._8_4_ = fStack_148;
        auVar5._12_4_ = fStack_144;
        auVar7._4_4_ = fStack_13c;
        auVar7._0_4_ = local_140;
        auVar7._8_4_ = fStack_138;
        auVar7._12_4_ = uStack_134;
        auVar46 = minps(auVar5,auVar7);
        auVar10._4_4_ = fStack_12c;
        auVar10._0_4_ = local_130;
        auVar10._8_4_ = fStack_128;
        auVar10._12_4_ = uStack_124;
        auVar46 = minps(auVar46,auVar10);
        auVar8._4_4_ = fStack_13c;
        auVar8._0_4_ = local_140;
        auVar8._8_4_ = fStack_138;
        auVar8._12_4_ = uStack_134;
        auVar36 = maxps(auVar5,auVar8);
        auVar11._4_4_ = fStack_12c;
        auVar11._0_4_ = local_130;
        auVar11._8_4_ = fStack_128;
        auVar11._12_4_ = uStack_124;
        auVar36 = maxps(auVar36,auVar11);
        local_100._4_4_ = auVar46._4_4_ - (float)auStack_cc;
        local_100._0_4_ = auVar46._0_4_ - (float)local_d0;
        fStack_f8 = auVar46._8_4_ - (float)uStack_c8;
        fStack_f4 = auVar46._12_4_ - uStack_c8._4_4_;
        local_f0._0_4_ = (float)local_d0 + auVar36._0_4_;
        local_f0._4_4_ = (float)auStack_cc + auVar36._4_4_;
        fStack_e8 = (float)uStack_c8 + auVar36._8_4_;
        fStack_e4 = uStack_c8._4_4_ + auVar36._12_4_;
        if (param_5[3] == 0) {
          FUN_010948a0(1);
        }
        local_2c = (undefined1 (*) [16])param_5[3];
        iVar18 = *param_5;
        local_24 = (int)local_2c * 0x30;
        param_5[3] = *(int *)(iVar18 + local_24);
        *(undefined4 *)(local_24 + 0x24 + iVar18) = 0;
        *(uint *)(local_24 + 0x28 + iVar18) = (int)local_20 + local_28;
        puVar22 = (undefined4 *)(local_24 + iVar18);
        *puVar22 = local_100._0_4_;
        puVar22[1] = local_100._4_4_;
        puVar22[2] = fStack_f8;
        puVar22[3] = fStack_f4;
        *(undefined1 (*) [16])(local_24 + 0x10 + iVar18) = _local_f0;
        iVar18 = *param_5;
        local_120 = *(undefined1 (*) [16])(local_24 + iVar18);
        _local_110 = *(undefined1 (*) [16])(local_24 + 0x10 + iVar18);
        local_30 = param_5[6];
        if (param_5[6] == 0) {
          param_5[6] = (int)local_2c;
          *(undefined4 *)(iVar18 + 0x20 + local_24) = 0;
        }
        else {
          if (param_5[3] == 0) {
            FUN_010948a0(1);
          }
          iVar18 = param_5[3];
          iVar19 = *param_5;
          param_5[3] = *(int *)(iVar19 + iVar18 * 0x30);
          local_18 = (undefined1 (*) [16])(local_30 * 0x30 + iVar19);
          local_14 = (undefined1 (*) [16])(iVar18 * 0x30 + iVar19);
          if (*(int *)((int)local_18[2] + 4) != 0) {
            fVar24 = local_110._0_4_ + local_120._0_4_;
            fVar39 = local_110._4_4_ + local_120._4_4_;
            fVar34 = local_110._8_4_ + local_120._8_4_;
            fVar41 = local_110._0_4_ - local_120._0_4_;
            fVar47 = local_110._4_4_ - local_120._4_4_;
            fVar48 = local_110._8_4_ - local_120._8_4_;
            do {
              iVar18 = *param_5;
              auVar46 = minps(*local_18,local_120);
              auVar36 = maxps(local_18[1],_local_110);
              local_60[0] = (undefined1 (*) [16])(*(int *)((int)local_18[2] + 4) * 0x30 + iVar18);
              local_18[1] = auVar36;
              *local_18 = auVar46;
              iVar19 = *(int *)((int)local_18[2] + 8) * 0x30;
              pfVar1 = (float *)(iVar19 + iVar18);
              pfVar2 = (float *)(iVar19 + 0x10 + iVar18);
              fVar43 = (*pfVar1 + *pfVar2) - fVar24;
              fVar44 = (pfVar1[1] + pfVar2[1]) - fVar39;
              fVar45 = (pfVar1[2] + pfVar2[2]) - fVar34;
              fVar35 = (*(float *)*local_60[0] + *(float *)local_60[0][1]) - fVar24;
              fVar40 = (*(float *)(*local_60[0] + 4) + *(float *)(local_60[0][1] + 4)) - fVar39;
              fVar42 = (*(float *)(*local_60[0] + 8) + *(float *)(local_60[0][1] + 8)) - fVar34;
              local_60[1] = (undefined1 (*) [16])(iVar19 + iVar18);
              local_18 = local_60[(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45) *
                                  ((*pfVar2 - *pfVar1) + fVar41 + (pfVar2[1] - pfVar1[1]) + fVar47 +
                                  (pfVar2[2] - pfVar1[2]) + fVar48) <
                                  (fVar42 * fVar42 + fVar40 * fVar40 + fVar35 * fVar35) *
                                  ((*(float *)local_60[0][1] - *(float *)*local_60[0]) + fVar41 +
                                   (*(float *)(local_60[0][1] + 4) - *(float *)(*local_60[0] + 4)) +
                                   fVar47 + (*(float *)(local_60[0][1] + 8) -
                                            *(float *)(*local_60[0] + 8)) + fVar48)];
            } while (*(int *)((int)local_18[2] + 4) != 0);
          }
          local_1c = ((int)local_14 - *param_5) / 0x30;
          if (*(int *)local_18[2] == 0) {
            param_5[6] = local_1c;
          }
          else {
            *(uint *)(*param_5 + 0x24 +
                     ((uint)(*(int *)(*param_5 + 0x28 + *(int *)local_18[2] * 0x30) ==
                            ((int)local_18 - *param_5) / 0x30) + *(int *)local_18[2] * 0xc) * 4) =
                 local_1c;
          }
          *(undefined4 *)local_14[2] = *(undefined4 *)local_18[2];
          *(int *)(local_14[2] + 4) = ((int)local_18 - *param_5) / 0x30;
          *(undefined1 (**) [16])(local_14[2] + 8) = local_2c;
          *(uint *)local_18[2] = local_1c;
          *(uint *)(*param_5 + 0x20 + local_24) = local_1c;
          auVar46 = minps(*local_18,local_120);
          auVar36 = maxps(local_18[1],_local_110);
          *local_14 = auVar46;
          local_14[1] = auVar36;
        }
        param_5[4] = param_5[4] + 1;
      }
      local_20 = (undefined1 (*) [16])((int)local_20 + 1);
    } while ((int)local_20 < local_34);
  }
  local_30 = local_28 + local_34;
  local_20 = (undefined1 (*) [16])0x0;
  local_34 = (**(code **)(**(int **)(param_2[1] + 4) + 0x1c))();
  if (0 < local_34) {
    do {
      local_140 = 0.0;
      fStack_13c = 0.0;
      local_130 = 0.0;
      fStack_12c = 3.40282e+38;
      local_160 = 3.40282e+38;
      fStack_15c = 3.40282e+38;
      fStack_158 = 3.40282e+38;
      fStack_154 = 3.40282e+38;
      local_150 = -3.40282e+38;
      fStack_14c = -3.40282e+38;
      fStack_148 = -3.40282e+38;
      fStack_144 = -3.40282e+38;
      fStack_128 = 1.4013e-45;
      uVar16 = hkpSingleShapeContainer::hkpSingleShapeContainer_11(local_20,&local_160);
      auVar30._4_4_ = fStack_14c;
      auVar30._0_4_ = local_150;
      auVar30._8_4_ = fStack_148;
      auVar30._12_4_ = fStack_144;
      auVar26._4_4_ = fStack_15c;
      auVar26._0_4_ = local_160;
      auVar26._8_4_ = fStack_158;
      auVar26._12_4_ = fStack_154;
      auVar38._4_4_ = -(uint)(fStack_14c <= fStack_15c);
      auVar38._0_4_ = -(uint)(local_150 <= local_160);
      auVar38._8_4_ = -(uint)(fStack_148 <= fStack_158);
      auVar38._12_4_ = -(uint)(fStack_144 <= fStack_154);
      uVar13 = movmskps(uVar16,auVar38);
      _local_100 = auVar26;
      _local_f0 = auVar30;
      if ((uVar13 & 7) != 0) {
        if (0 < (int)local_140) {
          iVar18 = *(int *)(*(int *)(*(int *)(param_2[1] + 8) + (int)local_20 * 4) + 0x20);
          iVar19 = 0;
          fVar24 = local_140;
          do {
            auVar26 = minps(auVar26,*(undefined1 (*) [16])(iVar19 + iVar18));
            auVar30 = maxps(auVar30,*(undefined1 (*) [16])(iVar19 + iVar18));
            iVar19 = iVar19 + 0x10;
            fVar24 = (float)((int)fVar24 + -1);
          } while (fVar24 != 0.0);
        }
        local_100._0_4_ = auVar26._0_4_ - (float)local_d0;
        local_100._4_4_ = auVar26._4_4_ - (float)auStack_cc;
        fStack_f8 = auVar26._8_4_ - (float)uStack_c8;
        fStack_f4 = auVar26._12_4_ - uStack_c8._4_4_;
        local_f0._0_4_ = auVar30._0_4_ + (float)local_d0;
        local_f0._4_4_ = auVar30._4_4_ + (float)auStack_cc;
        fStack_e8 = auVar30._8_4_ + (float)uStack_c8;
        fStack_e4 = auVar30._12_4_ + uStack_c8._4_4_;
      }
      if (param_5[3] == 0) {
        FUN_010948a0(1);
      }
      local_2c = (undefined1 (*) [16])param_5[3];
      iVar18 = *param_5;
      local_28 = (int)local_2c * 0x30;
      param_5[3] = *(int *)(iVar18 + local_28);
      *(undefined4 *)(local_28 + 0x24 + iVar18) = 0;
      *(uint *)(local_28 + 0x28 + iVar18) = (int)*local_20 + local_30;
      *(undefined1 (*) [16])(local_28 + iVar18) = _local_100;
      *(undefined1 (*) [16])(local_28 + 0x10 + iVar18) = _local_f0;
      iVar18 = *param_5;
      local_120 = *(undefined1 (*) [16])(iVar18 + local_28);
      _local_110 = *(undefined1 (*) [16])(iVar18 + 0x10 + local_28);
      local_24 = param_5[6];
      if (param_5[6] == 0) {
        param_5[6] = (int)local_2c;
        *(undefined4 *)(iVar18 + 0x20 + local_28) = 0;
      }
      else {
        if (param_5[3] == 0) {
          FUN_010948a0(1);
        }
        iVar18 = param_5[3];
        iVar19 = *param_5;
        param_5[3] = *(int *)(iVar19 + iVar18 * 0x30);
        local_14 = (undefined1 (*) [16])(local_24 * 0x30 + iVar19);
        local_18 = (undefined1 (*) [16])(iVar18 * 0x30 + iVar19);
        if (*(int *)(local_14[2] + 4) != 0) {
          fVar24 = local_120._0_4_ + local_110._0_4_;
          fVar39 = local_120._4_4_ + local_110._4_4_;
          fVar34 = local_120._8_4_ + local_110._8_4_;
          fVar41 = local_110._0_4_ - local_120._0_4_;
          fVar47 = local_110._4_4_ - local_120._4_4_;
          fVar48 = local_110._8_4_ - local_120._8_4_;
          do {
            iVar18 = *(int *)(local_14[2] + 4);
            iVar19 = *param_5;
            auVar46 = minps(*local_14,local_120);
            auVar36 = maxps(local_14[1],_local_110);
            local_14[1] = auVar36;
            local_60[0] = (undefined1 (*) [16])(iVar18 * 0x30 + iVar19);
            *local_14 = auVar46;
            iVar18 = *(int *)(local_14[2] + 8) * 0x30;
            pfVar1 = (float *)(iVar18 + iVar19);
            pfVar2 = (float *)(iVar18 + 0x10 + iVar19);
            fVar43 = (*pfVar1 + *pfVar2) - fVar24;
            fVar44 = (pfVar1[1] + pfVar2[1]) - fVar39;
            fVar45 = (pfVar1[2] + pfVar2[2]) - fVar34;
            fVar35 = (*(float *)*local_60[0] + *(float *)local_60[0][1]) - fVar24;
            fVar40 = (*(float *)(*local_60[0] + 4) + *(float *)(local_60[0][1] + 4)) - fVar39;
            fVar42 = (*(float *)(*local_60[0] + 8) + *(float *)(local_60[0][1] + 8)) - fVar34;
            local_60[1] = (undefined1 (*) [16])(iVar18 + iVar19);
            local_14 = local_60[(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45) *
                                ((*pfVar2 - *pfVar1) + fVar41 + (pfVar2[1] - pfVar1[1]) + fVar47 +
                                (pfVar2[2] - pfVar1[2]) + fVar48) <
                                (fVar42 * fVar42 + fVar40 * fVar40 + fVar35 * fVar35) *
                                ((*(float *)local_60[0][1] - *(float *)*local_60[0]) + fVar41 +
                                 (*(float *)(local_60[0][1] + 4) - *(float *)(*local_60[0] + 4)) +
                                 fVar47 + (*(float *)(local_60[0][1] + 8) -
                                          *(float *)(*local_60[0] + 8)) + fVar48)];
          } while (*(int *)(local_14[2] + 4) != 0);
        }
        local_1c = ((int)local_18 - *param_5) / 0x30;
        if (*(int *)local_14[2] == 0) {
          param_5[6] = local_1c;
        }
        else {
          local_24 = *(uint *)(*param_5 + 0x28 + *(int *)local_14[2] * 0x30);
          *(uint *)(*param_5 + 0x24 +
                   ((uint)(local_24 == ((int)local_14 - *param_5) / 0x30) +
                   *(int *)local_14[2] * 0xc) * 4) = local_1c;
        }
        *(undefined4 *)local_18[2] = *(undefined4 *)local_14[2];
        *(int *)((int)local_18[2] + 4) = ((int)local_14 - *param_5) / 0x30;
        *(undefined1 (**) [16])((int)local_18[2] + 8) = local_2c;
        *(uint *)local_14[2] = local_1c;
        *(uint *)(*param_5 + 0x20 + local_28) = local_1c;
        auVar46 = minps(*local_14,local_120);
        auVar36 = maxps(local_14[1],_local_110);
        *local_18 = auVar46;
        local_18[1] = auVar36;
      }
      param_5[4] = param_5[4] + 1;
      local_20 = (undefined1 (*) [16])((int)*local_20 + 1);
    } while ((int)local_20 < local_34);
  }
  if (*param_1 == '\0') {
    FUN_010974b0(param_5[6],1,0x20,0x10);
  }
  else {
    FUN_0123cae0(0x20,0x80,1);
  }
  if (0 < *(int *)(param_1 + 4)) {
    local_18 = (undefined1 (*) [16])0x0;
    if (param_5[6] != 0) {
      iVar18 = *param_5;
      iVar17 = param_5[6] * 0x30;
      iVar19 = *(int *)(iVar17 + 0x20 + iVar18);
      local_14 = (undefined1 (*) [16])0x0;
      iVar23 = iVar17;
      while (iVar19 != 0) {
        local_14 = (undefined1 (*) [16])(*local_14 + 1);
        iVar23 = *(int *)(iVar23 + 0x20 + iVar18) * 0x30;
        iVar19 = *(int *)(*param_5 + 0x20 + iVar23);
      }
      uVar13 = *(uint *)(iVar17 + 0x24 + iVar18);
      if (uVar13 == 0) {
        iVar19 = 0;
        if (*(int *)(iVar17 + 0x20 + iVar18) != 0) {
          do {
            iVar17 = *(int *)(iVar17 + 0x20 + iVar18) * 0x30;
            iVar19 = iVar19 + 1;
          } while (*(int *)(iVar17 + 0x20 + *param_5) != 0);
        }
        if (-1 < iVar19 - (int)local_14) {
          local_18 = (undefined1 (*) [16])(iVar19 - (int)local_14);
        }
      }
      else {
        local_1c = param_5[6];
        local_28 = uVar13;
        do {
          local_30 = local_28 * 0x30;
          if (*(int *)(local_30 + 0x24 + iVar18) == 0) {
            iVar19 = 0;
            if (*(int *)(local_30 + 0x20 + iVar18) != 0) {
              iVar23 = local_30;
              do {
                iVar23 = *(int *)(iVar23 + 0x20 + iVar18) * 0x30;
                iVar19 = iVar19 + 1;
              } while (*(int *)(iVar23 + 0x20 + *param_5) != 0);
            }
            if ((int)local_18 <= iVar19 - (int)local_14) {
              local_18 = (undefined1 (*) [16])(iVar19 - (int)local_14);
            }
          }
          uVar13 = *(uint *)(local_30 + 0x24 + iVar18);
          if (uVar13 == 0) {
            uVar13 = *(uint *)(local_30 + 0x20 + iVar18);
            while ((uVar20 = uVar13, uVar20 != local_1c &&
                   (*(uint *)(iVar18 + 0x28 + uVar20 * 0x30) == local_28))) {
              local_28 = uVar20;
              uVar13 = *(uint *)(iVar18 + 0x20 + uVar20 * 0x30);
            }
            uVar13 = local_28;
            if (uVar20 != 0) {
              uVar13 = *(uint *)(iVar18 + 0x28 + uVar20 * 0x30);
            }
            if ((uVar20 == local_1c) && (uVar13 == local_28)) {
              uVar13 = 0;
            }
          }
          local_28 = uVar13;
        } while (uVar13 != 0);
        local_28 = 0;
      }
    }
    do {
      local_20 = local_18;
      FUN_0123a730(*(undefined4 *)(param_1 + 4),0);
      local_18 = (undefined1 (*) [16])0x0;
      if (param_5[6] != 0) {
        iVar18 = *param_5;
        iVar17 = param_5[6] * 0x30;
        iVar19 = *(int *)(iVar17 + 0x20 + iVar18);
        local_14 = (undefined1 (*) [16])0x0;
        iVar23 = iVar17;
        while (iVar19 != 0) {
          local_14 = (undefined1 (*) [16])(*local_14 + 1);
          iVar23 = *(int *)(iVar23 + 0x20 + iVar18) * 0x30;
          iVar19 = *(int *)(iVar23 + 0x20 + *param_5);
        }
        uVar13 = *(uint *)(iVar17 + 0x24 + iVar18);
        if (uVar13 == 0) {
          iVar19 = 0;
          if (*(int *)(iVar17 + 0x20 + iVar18) != 0) {
            do {
              iVar17 = *(int *)(iVar17 + 0x20 + iVar18) * 0x30;
              iVar19 = iVar19 + 1;
            } while (*(int *)(iVar17 + 0x20 + *param_5) != 0);
          }
          if (-1 < iVar19 - (int)local_14) {
            local_18 = (undefined1 (*) [16])(iVar19 - (int)local_14);
          }
        }
        else {
          local_1c = param_5[6];
          local_28 = uVar13;
          do {
            local_30 = local_28 * 0x30;
            if (*(int *)(local_30 + 0x24 + iVar18) == 0) {
              iVar19 = 0;
              if (*(int *)(local_30 + 0x20 + iVar18) != 0) {
                iVar23 = local_30;
                do {
                  iVar23 = *(int *)(iVar23 + 0x20 + iVar18) * 0x30;
                  iVar19 = iVar19 + 1;
                } while (*(int *)(iVar23 + 0x20 + *param_5) != 0);
              }
              if ((int)local_18 <= iVar19 - (int)local_14) {
                local_18 = (undefined1 (*) [16])(iVar19 - (int)local_14);
              }
            }
            uVar13 = *(uint *)(local_30 + 0x24 + iVar18);
            if (uVar13 == 0) {
              uVar13 = *(uint *)(local_30 + 0x20 + iVar18);
              while ((uVar20 = uVar13, uVar20 != local_1c &&
                     (*(uint *)(iVar18 + 0x28 + uVar20 * 0x30) == local_28))) {
                local_28 = uVar20;
                uVar13 = *(uint *)(iVar18 + 0x20 + uVar20 * 0x30);
              }
              uVar13 = local_28;
              if (uVar20 != 0) {
                uVar13 = *(uint *)(iVar18 + 0x28 + uVar20 * 0x30);
              }
              if ((uVar20 == local_1c) && (uVar13 == local_28)) {
                uVar13 = 0;
              }
            }
            local_28 = uVar13;
          } while (uVar13 != 0);
          local_28 = 0;
        }
      }
    } while ((int)local_18 < (int)local_20);
    FUN_01096ea0();
  }
  if (param_5[4] != 0) {
    iVar18 = param_5[6];
    if (iVar18 == 0) {
      uVar16 = 0x7f7fffee;
      uVar31 = 0x7f7fffee;
      uVar32 = 0x7f7fffee;
      uVar33 = 0x7f7fffee;
      uVar25 = 0xff7fffee;
      uVar27 = 0xff7fffee;
      uVar28 = 0xff7fffee;
      uVar29 = 0xff7fffee;
    }
    else {
      puVar22 = (undefined4 *)(iVar18 * 0x30 + *param_5);
      uVar16 = *puVar22;
      uVar31 = puVar22[1];
      uVar32 = puVar22[2];
      uVar33 = puVar22[3];
      uVar25 = puVar22[4];
      uVar27 = puVar22[5];
      uVar28 = puVar22[6];
      uVar29 = puVar22[7];
    }
    puVar22 = (undefined4 *)(iVar18 * 0x30 + *param_5);
    *puVar22 = uVar16;
    puVar22[1] = uVar31;
    puVar22[2] = uVar32;
    puVar22[3] = uVar33;
    puVar22[4] = uVar25;
    puVar22[5] = uVar27;
    puVar22[6] = uVar28;
    puVar22[7] = uVar29;
    if (-1 < local_d4) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80,local_d4 * 4);
    }
    return 1;
  }
  if (-1 < local_d4) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80,local_d4 * 4);
  }
  return 0;
}

// 0123EB90  FUN_0123eb90  size=10135  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0123eb90(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 uVar15;
  ushort uVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  int iVar20;
  ushort uVar21;
  uint *puVar22;
  int iVar23;
  int *piVar24;
  char *pcVar25;
  bool bVar26;
  ushort in_FPUControlWord;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar37;
  float fVar39;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  undefined1 auVar49 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  uint auStack_20e68 [32768];
  int aiStack_e68 [128];
  uint local_c68;
  uint auStack_c60 [256];
  uint local_860;
  undefined4 auStack_858 [128];
  int local_658;
  int local_650 [128];
  uint local_450;
  uint local_448 [128];
  uint local_248;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined1 local_230 [8];
  float fStack_228;
  float fStack_224;
  undefined1 local_220 [16];
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 local_200 [8];
  float fStack_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [8];
  float fStack_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [8];
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_1a0 [8];
  float fStack_198;
  float fStack_194;
  uint local_18c;
  int local_188;
  uint local_184;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint *local_168;
  int local_164;
  undefined1 local_160 [8];
  float fStack_158;
  float fStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [16];
  int local_130;
  uint local_12c;
  undefined2 auStack_128 [4];
  uint local_120;
  undefined4 local_11c;
  uint local_118;
  int local_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  int local_f0;
  uint local_ec;
  uint local_e8 [5];
  int local_d4;
  uint local_d0;
  uint local_cc [3];
  uint local_c0;
  undefined8 *local_bc;
  uint local_b8;
  undefined4 *local_b4;
  undefined8 local_b0;
  uint local_a8;
  int *local_a0;
  int *local_9c;
  uint local_98 [4];
  int local_88;
  int local_84;
  uint local_80;
  int *local_7c;
  uint local_78;
  int local_74;
  int local_70;
  uint *local_6c;
  uint local_68;
  int local_64;
  uint local_60 [4];
  uint local_50;
  uint *local_4c;
  undefined8 local_48;
  uint *local_40;
  undefined1 *local_38;
  int *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  uint *local_18;
  undefined4 local_14;
  
  local_14 = 0x123ebb0;
  iVar9 = param_5[1];
  local_e8[4] = iVar9;
  local_d4 = (**(code **)(**(int **)(param_3[1] + 4) + 8))();
  local_d4 = local_d4 + iVar9;
  local_70 = 0;
  local_6c = (uint *)0x0;
  local_68 = 0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b94,&local_70,0x400,0xc);
  local_bc = (undefined8 *)FUN_0123a670(param_6,param_6[6]);
  if (local_6c == (uint *)(local_68 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_70,0xc);
  }
  puVar10 = (undefined4 *)(local_70 + (int)local_6c * 0xc);
  if (puVar10 != (undefined4 *)0x0) {
    uVar5 = *(undefined4 *)((int)local_bc + 4);
    *puVar10 = *(undefined4 *)local_bc;
    puVar10[1] = uVar5;
    puVar10[2] = *(undefined4 *)(local_bc + 1);
  }
  local_6c = (uint *)((int)local_6c + 1);
  local_18 = (uint *)0x0;
  if (0 < (int)local_6c) {
    local_64 = 0;
    do {
      if ((0x7f < *(int *)(local_70 + local_64 + 4)) ||
         (iVar9 = FUN_0123b8a0(param_6,param_3,param_5), 0xff < iVar9)) {
        puVar17 = local_6c;
        local_d0 = *(int *)(local_70 + local_64) * 0x30 + *param_6;
        local_bc = (undefined8 *)FUN_0123a670(param_6,*(undefined4 *)(local_d0 + 0x28));
        if (puVar17 == (uint *)(local_68 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_70,0xc);
          puVar17 = local_6c;
        }
        puVar1 = (undefined8 *)(local_70 + (int)puVar17 * 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *local_bc;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(local_bc + 1);
          puVar17 = local_6c;
        }
        local_6c = (uint *)((int)puVar17 + 1);
        puVar10 = (undefined4 *)FUN_0123a670(param_6,*(undefined4 *)(local_d0 + 0x24));
        uVar5 = puVar10[1];
        local_18 = (uint *)((int)local_18 + -1);
        *(undefined4 *)(local_70 + local_64) = *puVar10;
        ((undefined4 *)(local_70 + local_64))[1] = uVar5;
        *(undefined4 *)(local_70 + 8 + local_64) = puVar10[2];
        local_64 = local_64 + -0xc;
      }
      local_64 = local_64 + 0xc;
      local_18 = (uint *)((int)local_18 + 1);
    } while ((int)local_18 < (int)local_6c);
  }
  local_9c = param_7 + 0xf;
  local_18 = local_6c;
  if ((int)(param_7[0x11] & 0x3fffffffU) < (int)local_6c) {
    puVar17 = (uint *)((param_7[0x11] & 0x3fffffffU) * 2);
    puVar18 = local_6c;
    if ((int)local_6c < (int)puVar17) {
      puVar18 = puVar17;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_9c,puVar18,0x60);
  }
  local_50 = (local_9c[1] - (int)local_18) - 1;
  piVar14 = local_9c;
  if (-1 < (int)local_50) {
    piVar24 = (int *)(local_50 * 0x60 + 8 + (int)local_18 * 0x60 + *local_9c);
    do {
      piVar24[-1] = 0;
      if (-1 < *piVar24) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar24[-2],*piVar24 * 4);
        piVar14 = local_9c;
      }
      local_50 = local_50 - 1;
      piVar24[-2] = 0;
      *piVar24 = -0x80000000;
      piVar24 = piVar24 + -0x18;
    } while (-1 < (int)local_50);
  }
  iVar9 = (int)local_18 - piVar14[1];
  if (0 < iVar9) {
    puVar10 = (undefined4 *)(piVar14[1] * 0x60 + *piVar14 + 4);
    do {
      if (puVar10 != (undefined4 *)&DAT_00000004) {
        puVar10[-1] = 0;
        *puVar10 = 0;
        puVar10[1] = 0x80000000;
        puVar10[3] = 0x7f7fffee;
        puVar10[4] = 0x7f7fffee;
        puVar10[5] = 0x7f7fffee;
        puVar10[6] = 0x7f7fffee;
        puVar10[7] = puVar10[3] ^ 0x80000000;
        puVar10[8] = puVar10[4] ^ 0x80000000;
        puVar10[9] = puVar10[5] ^ 0x80000000;
        puVar10[10] = puVar10[6] ^ 0x80000000;
      }
      puVar10 = puVar10 + 0x18;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_9c[1] = (int)local_18;
  FUN_01015ea0(*local_9c,0,param_7[0x10] * 0x60);
  local_34 = (int *)0x0;
  local_14 = 0;
  local_74 = 0;
  local_a8 = 0xffffffff;
  iVar9 = (**(code **)(*param_3 + 4))();
  local_188 = iVar9;
  if (iVar9 == 0) {
    local_b4 = (undefined4 *)0x0;
LAB_0123eef2:
    local_bc = (undefined8 *)0x80000000;
  }
  else {
    local_f0 = iVar9 * 8;
    local_b4 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_f0);
    local_bc = (undefined8 *)((int)(local_f0 + (local_f0 >> 0x1f & 7U)) >> 3);
    if (local_bc == (undefined8 *)0x0) goto LAB_0123eef2;
  }
  puVar10 = local_b4;
  if (0 < iVar9) {
    do {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0xffffffff;
        puVar10[1] = local_a8;
      }
      iVar9 = iVar9 + -1;
      puVar10 = puVar10 + 2;
    } while (iVar9 != 0);
  }
  pfVar11 = (float *)(param_6[6] * 0x30 + *param_6);
  local_240 = *pfVar11;
  fStack_23c = pfVar11[1];
  fStack_238 = pfVar11[2];
  fStack_234 = pfVar11[3];
  _local_230 = *(undefined1 (*) [16])(pfVar11 + 4);
  local_2c = local_6c;
  if (local_6c == (uint *)0x0) {
    local_64 = 0;
  }
  else {
    local_104 = (int)local_6c * 0x230;
    local_64 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_104);
    local_d0 = local_104 / 0x230;
    if (local_d0 != 0) goto LAB_0123efa2;
  }
  local_d0 = 0x80000000;
LAB_0123efa2:
  iVar9 = local_64;
  puVar17 = local_2c;
  if (0 < (int)local_2c) {
    do {
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x220) = 0;
      }
      puVar17 = (uint *)((int)puVar17 + -1);
      iVar9 = iVar9 + 0x230;
    } while (puVar17 != (uint *)0x0);
  }
  local_28 = (uint *)0x0;
  if (0 < (int)local_6c) {
    local_4c = (uint *)(local_64 + 0x20);
    local_24 = (int *)0x0;
    do {
      puVar17 = *(uint **)(local_70 + (int)local_24);
      if (puVar17 != (uint *)0x0) {
        iVar9 = *param_6;
        puVar18 = *(uint **)(iVar9 + 0x24 + (int)puVar17 * 0x30);
        if (puVar18 == (uint *)0x0) {
          uVar27 = local_4c[0x80];
          uVar28 = *(uint *)(iVar9 + 0x28 + (int)puVar17 * 0x30);
          local_4c[0x80] = uVar27 + 1;
          local_4c[uVar27] = uVar28;
        }
        else {
          do {
            if (*(int *)(iVar9 + 0x24 + (int)puVar18 * 0x30) == 0) {
              local_2c = *(uint **)(iVar9 + 0x28 + (int)puVar18 * 0x30);
              uVar27 = local_4c[0x80];
              local_4c[0x80] = uVar27 + 1;
              local_4c[uVar27] = (uint)local_2c;
            }
            iVar9 = *param_6;
            puVar22 = *(uint **)(iVar9 + 0x24 + (int)puVar18 * 0x30);
            if (puVar22 == (uint *)0x0) {
              puVar22 = *(uint **)(iVar9 + 0x20 + (int)puVar18 * 0x30);
              while ((puVar6 = puVar22, puVar6 != puVar17 &&
                     (*(uint **)(iVar9 + 0x28 + (int)puVar6 * 0x30) == puVar18))) {
                puVar18 = puVar6;
                puVar22 = *(uint **)(iVar9 + 0x20 + (int)puVar6 * 0x30);
              }
              puVar22 = puVar18;
              if (puVar6 != (uint *)0x0) {
                puVar22 = *(uint **)(iVar9 + 0x28 + (int)puVar6 * 0x30);
              }
              if ((puVar6 == puVar17) && (puVar22 == puVar18)) {
                puVar22 = (uint *)0x0;
              }
            }
            puVar18 = puVar22;
          } while (puVar22 != (uint *)0x0);
          local_30 = (uint *)0x0;
          local_18 = puVar17;
        }
      }
      uVar27 = local_4c[0x80];
      local_74 = local_74 + uVar27;
      if (0 < (int)uVar27) {
        local_18 = local_4c;
        puVar10 = local_b4;
        local_50 = uVar27;
        do {
          uVar27 = *local_18;
          if ((int)(uVar27 - local_d4) < 0) {
            local_60[0] = 0;
            local_60[1] = 0;
            local_60[2] = 0;
            local_60[3] = 0;
            if ((int)uVar27 < (int)local_e8[4]) {
              puVar17 = (uint *)(*param_5 + uVar27 * 0xc);
              local_20 = (int *)(*puVar17 >> 0x1e);
              local_2c = *(uint **)(param_3[1] + 4);
              (**(code **)(*local_2c + 0x10))(*puVar17 & 0x3fffffff,&local_b0);
              iVar9 = param_3[2];
              local_b0 = CONCAT44(*(undefined4 *)(iVar9 + local_b0._4_4_ * 4),
                                  *(undefined4 *)(iVar9 + (uint)local_b0 * 4));
              local_a8 = *(uint *)(iVar9 + local_a8 * 4);
              local_60[0] = *(uint *)((int)&local_b0 + (int)local_20 * 4);
              local_20 = (int *)(((puVar17[1] >> 0x1e) + 2) % 3);
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(puVar17[1] & 0x3fffffff,&local_48);
              iVar9 = param_3[2];
              local_48 = CONCAT44(*(undefined4 *)(iVar9 + local_48._4_4_ * 4),
                                  *(undefined4 *)(iVar9 + (uint)local_48 * 4));
              local_40 = *(uint **)(iVar9 + (int)local_40 * 4);
              local_60[1] = *(uint *)((int)&local_48 + (int)local_20 * 4);
              local_20 = (int *)(puVar17[1] >> 0x1e);
              local_2c = *(uint **)(param_3[1] + 4);
              (**(code **)(*local_2c + 0x10))(puVar17[1] & 0x3fffffff,local_98);
              iVar9 = param_3[2];
              local_98[0] = *(uint *)(iVar9 + local_98[0] * 4);
              local_98[1] = *(int *)(iVar9 + local_98[1] * 4);
              local_98[2] = *(int *)(iVar9 + local_98[2] * 4);
              local_60[2] = local_98[(int)local_20];
              local_2c = (uint *)(((*puVar17 >> 0x1e) + 2) % 3);
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(*puVar17 & 0x3fffffff,local_98 + 3);
              iVar9 = param_3[2];
              local_98[3] = *(int *)(iVar9 + local_98[3] * 4);
              local_88 = *(int *)(iVar9 + local_88 * 4);
              local_84 = *(int *)(iVar9 + local_84 * 4);
              local_60[3] = local_98[(int)local_2c + 3];
              puVar10 = local_b4;
            }
            else {
              local_2c = *(uint **)(param_3[1] + 4);
              (**(code **)(*local_2c + 0x10))(uVar27 - param_5[1],local_60);
              iVar9 = param_3[2];
              local_60[0] = *(uint *)(iVar9 + local_60[0] * 4);
              local_60[1] = *(uint *)(iVar9 + local_60[1] * 4);
              local_60[2] = *(uint *)(iVar9 + local_60[2] * 4);
              local_60[3] = local_60[2];
            }
            puVar17 = (uint *)puVar10[local_60[0] * 2];
            if (puVar17 != (uint *)0xfffffffe) {
              if (puVar17 == (uint *)0xffffffff) {
                local_14 = local_14 + 1;
                puVar10[local_60[0] * 2] = local_28;
              }
              else if (puVar17 != local_28) {
                local_14 = local_14 - 1;
                local_34 = (int *)((int)local_34 + 1);
                puVar10[local_60[0] * 2] = 0xfffffffe;
              }
            }
            puVar17 = (uint *)puVar10[local_60[1] * 2];
            if (puVar17 != (uint *)0xfffffffe) {
              if (puVar17 == (uint *)0xffffffff) {
                local_14 = local_14 + 1;
                puVar10[local_60[1] * 2] = local_28;
              }
              else if (puVar17 != local_28) {
                local_14 = local_14 - 1;
                local_34 = (int *)((int)local_34 + 1);
                puVar10[local_60[1] * 2] = 0xfffffffe;
              }
            }
            puVar17 = (uint *)puVar10[local_60[2] * 2];
            if (puVar17 != (uint *)0xfffffffe) {
              if (puVar17 == (uint *)0xffffffff) {
                local_14 = local_14 + 1;
                puVar10[local_60[2] * 2] = local_28;
              }
              else if (puVar17 != local_28) {
                local_14 = local_14 - 1;
                local_34 = (int *)((int)local_34 + 1);
                puVar10[local_60[2] * 2] = 0xfffffffe;
              }
            }
            puVar17 = (uint *)puVar10[local_60[3] * 2];
            if (puVar17 != (uint *)0xfffffffe) {
              if (puVar17 == (uint *)0xffffffff) {
                local_14 = local_14 + 1;
                puVar10[local_60[3] * 2] = local_28;
              }
              else if (puVar17 != local_28) {
                iVar9 = 1;
                local_14 = local_14 - 1;
                puVar10[local_60[3] * 2] = 0xfffffffe;
                goto LAB_0123f3f0;
              }
            }
          }
          else {
            local_11c = 0x7f7fffee;
            local_150 = 0x7f7fffee;
            uStack_14c = 0x7f7fffee;
            uStack_148 = 0x7f7fffee;
            uStack_144 = 0x7f7fffee;
            local_140._8_4_ = 0xff7fffee;
            local_140._0_8_ = 0xff7fffeeff7fffee;
            local_140._12_4_ = 0xff7fffee;
            local_130 = 0;
            local_12c = 0;
            local_120 = 0;
            local_118 = 1;
            hkpSingleShapeContainer::hkpSingleShapeContainer_11(uVar27 - local_d4,&local_150);
            iVar9 = local_130;
LAB_0123f3f0:
            local_34 = (int *)((int)local_34 + iVar9);
          }
          local_18 = local_18 + 1;
          local_50 = local_50 - 1;
        } while (local_50 != 0);
      }
      local_24 = local_24 + 3;
      local_4c = local_4c + 0x8c;
      local_28 = (uint *)((int)local_28 + 1);
    } while ((int)local_28 < (int)local_6c);
  }
  local_38 = (undefined1 *)0x0;
  if (0 < (int)local_6c) {
    local_18 = (uint *)(local_64 + 0x20);
    local_24 = (int *)0x0;
    do {
      local_80 = *local_9c + (int)local_24;
      auVar32._0_8_ = (ulonglong)DAT_01701ce0 ^ 0x8000000080000000;
      auVar32._8_4_ = DAT_01701ce0._8_4_ ^ 0x80000000;
      auVar32._12_4_ = DAT_01701ce0._12_4_ ^ 0x80000000;
      local_1c0 = _DAT_01701ce0;
      auVar42 = _DAT_01701ce0;
      _local_1b0 = auVar32;
      if (0 < (int)local_18[0x80]) {
        local_30 = local_18;
        local_50 = local_18[0x80];
        do {
          uVar27 = *local_30;
          if ((int)(uVar27 - local_d4) < 0) {
            local_60[0] = 0;
            local_60[1] = 0;
            local_60[2] = 0;
            local_60[3] = 0;
            if ((int)uVar27 < (int)local_e8[4]) {
              uVar28 = *(uint *)(*param_5 + uVar27 * 0xc);
              puVar17 = (uint *)(*param_5 + uVar27 * 0xc);
              local_20 = (int *)(uVar28 >> 0x1e);
              local_2c = *(uint **)(param_3[1] + 4);
              (**(code **)(*local_2c + 0x10))(uVar28 & 0x3fffffff,local_98 + 3);
              iVar9 = param_3[2];
              local_98[3] = *(int *)(iVar9 + local_98[3] * 4);
              local_88 = *(int *)(iVar9 + local_88 * 4);
              local_84 = *(int *)(iVar9 + local_84 * 4);
              local_60[0] = local_98[(int)local_20 + 3];
              local_20 = (int *)(((puVar17[1] >> 0x1e) + 2) % 3);
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(puVar17[1] & 0x3fffffff,local_98);
              iVar9 = param_3[2];
              local_98[0] = *(uint *)(iVar9 + local_98[0] * 4);
              local_98[1] = *(int *)(iVar9 + local_98[1] * 4);
              local_98[2] = *(int *)(iVar9 + local_98[2] * 4);
              local_60[1] = local_98[(int)local_20];
              local_20 = (int *)(puVar17[1] >> 0x1e);
              local_2c = *(uint **)(param_3[1] + 4);
              (**(code **)(*local_2c + 0x10))(puVar17[1] & 0x3fffffff,&local_b0);
              iVar9 = param_3[2];
              local_b0 = CONCAT44(*(undefined4 *)(iVar9 + local_b0._4_4_ * 4),
                                  *(undefined4 *)(iVar9 + (uint)local_b0 * 4));
              local_a8 = *(uint *)(iVar9 + local_a8 * 4);
              local_60[2] = *(uint *)((int)&local_b0 + (int)local_20 * 4);
              local_2c = (uint *)(((*puVar17 >> 0x1e) + 2) % 3);
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(*puVar17 & 0x3fffffff,&local_48);
              iVar9 = param_3[2];
              local_48 = CONCAT44(*(undefined4 *)(iVar9 + local_48._4_4_ * 4),
                                  *(undefined4 *)(iVar9 + (uint)local_48 * 4));
              local_40 = *(uint **)(iVar9 + (int)local_40 * 4);
              local_60[3] = *(uint *)((int)&local_48 + (int)local_2c * 4);
            }
            else {
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(uVar27 - param_5[1],local_60);
              iVar9 = param_3[2];
              local_60[0] = *(uint *)(iVar9 + local_60[0] * 4);
              local_60[1] = *(uint *)(iVar9 + local_60[1] * 4);
              local_60[2] = *(uint *)(iVar9 + local_60[2] * 4);
              local_60[3] = local_60[2];
            }
            iVar9 = 0;
            auVar32 = _local_1b0;
            auVar42 = local_1c0;
            do {
              if (local_b4[local_60[iVar9] * 2] != -2) {
                (**(code **)(*param_3 + 8))(local_60[iVar9],local_160);
                auVar42 = minps(local_1c0,_local_160);
                auVar32 = maxps(_local_1b0,_local_160);
                local_1c0 = auVar42;
                _local_1b0 = auVar32;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 4);
          }
          local_30 = local_30 + 1;
          local_50 = local_50 - 1;
        } while (local_50 != 0);
      }
      local_24 = local_24 + 0x18;
      *(undefined1 (*) [16])(local_18 + -4) = auVar32;
      *(undefined1 (*) [16])(local_18 + -8) = auVar42;
      fVar31 = (auVar32._0_4_ - auVar42._0_4_) * _DAT_01b249c0;
      fVar37 = (auVar32._4_4_ - auVar42._4_4_) * fRam01b249c4;
      fVar39 = (auVar32._8_4_ - auVar42._8_4_) * fRam01b249c8;
      *(undefined1 (*) [16])(local_80 + 0x30) = auVar42;
      *(ulonglong *)(local_80 + 0x3c) = CONCAT44(fVar37,fVar31);
      *(float *)(local_80 + 0x44) = fVar39;
      local_38 = local_38 + 1;
      local_18 = local_18 + 0x8c;
    } while ((int)local_38 < (int)local_6c);
  }
  local_4c = (uint *)(param_7 + 0x12);
  if ((int)(param_7[0x14] & 0x3fffffffU) < local_74) {
    iVar9 = (param_7[0x14] & 0x3fffffffU) * 2;
    iVar23 = local_74;
    if (local_74 < iVar9) {
      iVar23 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_4c,iVar23,4);
  }
  piVar14 = local_34;
  local_7c = param_7 + 0x15;
  iVar9 = (int)local_34 * 4;
  if ((int)(param_7[0x17] & 0x3fffffffU) < iVar9) {
    iVar23 = (param_7[0x17] & 0x3fffffffU) * 2;
    if (iVar9 < iVar23) {
      iVar9 = iVar23;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_7c,iVar9,2);
  }
  local_a0 = param_7 + 0x1b;
  if ((int)(param_7[0x1d] & 0x3fffffffU) < (int)piVar14) {
    piVar24 = (int *)((param_7[0x1d] & 0x3fffffffU) * 2);
    if ((int)piVar14 < (int)piVar24) {
      piVar14 = piVar24;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_a0,piVar14,8);
  }
  puVar17 = (uint *)(param_7 + 0x18);
  local_2c = puVar17;
  if ((int)(param_7[0x1a] & 0x3fffffffU) < (int)local_14) {
    uVar27 = (param_7[0x1a] & 0x3fffffffU) * 2;
    uVar28 = local_14;
    if ((int)local_14 < (int)uVar27) {
      uVar28 = uVar27;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,puVar17,uVar28,4);
  }
  local_30 = (uint *)0x0;
  if (0 < (int)local_6c) {
    local_24 = (int *)0x0;
    local_28 = (uint *)(local_64 + 0x220);
    do {
      local_50 = *local_9c + (int)local_24;
      uVar27 = *local_28;
      *(undefined1 *)(local_50 + 0x58) = 0;
      *(int *)(local_50 + 0x48) = param_7[0x19];
      if (0 < (int)uVar27) {
        local_18 = local_28 + -0x80;
        local_1c = uVar27;
        do {
          uVar27 = *local_18;
          if ((int)(uVar27 - local_d4) < 0) {
            local_60[0] = 0;
            local_60[1] = 0;
            local_60[2] = 0;
            local_60[3] = 0;
            if ((int)uVar27 < (int)local_e8[4]) {
              uVar28 = *(uint *)(*param_5 + uVar27 * 0xc);
              puVar17 = (uint *)(*param_5 + uVar27 * 0xc);
              local_80 = uVar28 >> 0x1e;
              local_20 = *(int **)(param_3[1] + 4);
              (**(code **)(*local_20 + 0x10))(uVar28 & 0x3fffffff,local_98 + 3);
              iVar9 = param_3[2];
              local_98[3] = *(int *)(iVar9 + local_98[3] * 4);
              local_88 = *(int *)(iVar9 + local_88 * 4);
              local_84 = *(int *)(iVar9 + local_84 * 4);
              local_60[0] = local_98[local_80 + 3];
              local_80 = ((puVar17[1] >> 0x1e) + 2) % 3;
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(puVar17[1] & 0x3fffffff,local_98);
              iVar9 = param_3[2];
              local_98[0] = *(uint *)(iVar9 + local_98[0] * 4);
              local_98[1] = *(int *)(iVar9 + local_98[1] * 4);
              local_98[2] = *(int *)(iVar9 + local_98[2] * 4);
              local_60[1] = local_98[local_80];
              local_80 = puVar17[1] >> 0x1e;
              local_20 = *(int **)(param_3[1] + 4);
              (**(code **)(*local_20 + 0x10))(puVar17[1] & 0x3fffffff,&local_48);
              iVar9 = param_3[2];
              local_48 = CONCAT44(*(undefined4 *)(iVar9 + local_48._4_4_ * 4),
                                  *(undefined4 *)(iVar9 + (uint)local_48 * 4));
              local_40 = *(uint **)(iVar9 + (int)local_40 * 4);
              local_60[2] = *(uint *)((int)&local_48 + local_80 * 4);
              local_20 = (int *)(((*puVar17 >> 0x1e) + 2) % 3);
              (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(*puVar17 & 0x3fffffff,local_cc);
              iVar9 = param_3[2];
              local_cc[0] = *(uint *)(iVar9 + local_cc[0] * 4);
              local_cc[1] = *(int *)(iVar9 + local_cc[1] * 4);
              local_cc[2] = *(int *)(iVar9 + local_cc[2] * 4);
              local_60[3] = local_cc[(int)local_20];
              puVar17 = local_2c;
            }
            else {
              local_20 = *(int **)(param_3[1] + 4);
              (**(code **)(*local_20 + 0x10))(uVar27 - param_5[1],local_60);
              iVar9 = param_3[2];
              local_60[0] = *(uint *)(iVar9 + local_60[0] * 4);
              local_60[1] = *(uint *)(iVar9 + local_60[1] * 4);
              local_60[2] = *(uint *)(iVar9 + local_60[2] * 4);
              local_60[3] = local_60[2];
            }
            local_38 = (undefined1 *)0x0;
            do {
              piVar14 = local_b4 + local_60[(int)local_38] * 2;
              if (((uint *)*piVar14 == local_30) && (piVar14[1] == -1)) {
                piVar14[1] = (uint)*(byte *)(local_50 + 0x58);
                uVar27 = local_60[(int)local_38];
                *(char *)(local_50 + 0x58) = *(char *)(local_50 + 0x58) + '\x01';
                (**(code **)(*param_3 + 8))(uVar27,local_160);
                if (puVar17[1] == (puVar17[2] & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,puVar17,4);
                }
                iVar9 = puVar17[1];
                puVar17[1] = iVar9 + 1;
                auVar42._0_4_ = (float)local_28[-0x84] - (float)local_28[-0x88];
                auVar42._4_4_ = (float)local_28[-0x83] - (float)local_28[-0x87];
                auVar42._8_4_ = (float)local_28[-0x82] - (float)local_28[-0x86];
                auVar42._12_4_ = (float)local_28[-0x81] - (float)local_28[-0x85];
                auVar32 = maxps(auVar42,_DAT_01701b10);
                auVar48._0_12_ = ZEXT812(0);
                auVar48._12_4_ = 0;
                auVar42 = rcpps(auVar48,auVar32);
                in_XMM5._0_4_ = auVar42._0_4_ * auVar32._0_4_;
                in_XMM5._4_4_ = auVar42._4_4_ * auVar32._4_4_;
                in_XMM5._8_4_ = auVar42._8_4_ * auVar32._8_4_;
                in_XMM5._12_4_ = auVar42._12_4_ * auVar32._12_4_;
                fVar31 = ((float)local_160._0_4_ - (float)local_28[-0x88]) *
                         (float)(~-(uint)(auVar32._0_4_ == 0.0) &
                                (uint)((2.0 - in_XMM5._0_4_) * auVar42._0_4_));
                fVar37 = ((float)local_160._4_4_ - (float)local_28[-0x87]) *
                         (float)(~-(uint)(auVar32._4_4_ == 0.0) &
                                (uint)((2.0 - in_XMM5._4_4_) * auVar42._4_4_));
                fVar39 = (fStack_158 - (float)local_28[-0x86]) *
                         (float)(~-(uint)(auVar32._8_4_ == 0.0) &
                                (uint)((2.0 - in_XMM5._8_4_) * auVar42._8_4_));
                fVar50 = (fStack_154 - (float)local_28[-0x85]) *
                         (float)(~-(uint)(auVar32._12_4_ == 0.0) &
                                (uint)((2.0 - in_XMM5._12_4_) * auVar42._12_4_));
                uVar27 = -(uint)(fVar31 < (float)DAT_01701b20);
                uVar28 = -(uint)(fVar37 < DAT_01701b20._4_4_);
                uVar29 = -(uint)(fVar39 < DAT_01701b20._8_4_);
                uVar30 = -(uint)(fVar50 < DAT_01701b20._12_4_);
                in_XMM4._0_4_ = ~uVar27 & (uint)(float)DAT_01701b20;
                in_XMM4._4_4_ = ~uVar28 & (uint)DAT_01701b20._4_4_;
                in_XMM4._8_4_ = ~uVar29 & (uint)DAT_01701b20._8_4_;
                in_XMM4._12_4_ = ~uVar30 & (uint)DAT_01701b20._12_4_;
                auVar33._0_4_ = uVar27 & (uint)fVar31;
                auVar33._4_4_ = uVar28 & (uint)fVar37;
                auVar33._8_4_ = uVar29 & (uint)fVar39;
                auVar33._12_4_ = uVar30 & (uint)fVar50;
                in_XMM4 = in_XMM4 | auVar33;
                _local_100 = maxps(_DAT_01701b10,in_XMM4);
                auVar32 = _local_100;
                local_b0._0_4_ = (uint)(longlong)ROUND(fStack_f8 * 1023.0 + 0.5);
                uVar27 = (uint)local_b0 << 0xb;
                local_b0._0_4_ = (uint)(longlong)ROUND((float)local_100._4_4_ * 2047.0 + 0.5);
                uVar27 = uVar27 | (uint)local_b0;
                local_14 = CONCAT22(in_FPUControlWord,(undefined2)local_14);
                local_20 = (int *)(in_FPUControlWord | 0xc00);
                local_b0 = (ulonglong)ROUND((float)local_100._0_4_ * 2047.0 + 0.5);
                uVar7 = local_b0;
                *(uint *)(*puVar17 + iVar9 * 4) = uVar27 << 0xb | (uint)local_b0;
                _local_100 = auVar32;
                local_b0 = uVar7;
              }
              local_38 = local_38 + 1;
            } while ((int)local_38 < 4);
          }
          local_18 = local_18 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      local_24 = local_24 + 0x18;
      local_28 = local_28 + 0x8c;
      local_30 = (uint *)((int)local_30 + 1);
    } while ((int)local_30 < (int)local_6c);
  }
  local_450 = 0;
  local_248 = 0;
  local_c68 = 0;
  local_860 = 0;
  local_658 = 0;
  local_17c = 0;
  local_180 = 0;
  local_178 = 0x80000000;
  local_174 = 0;
  local_168 = (uint *)0x0;
  local_170 = 0;
  local_16c = 0;
  FUN_010948a0(0x100);
  local_50 = 0;
  local_74 = 0;
  local_18 = (uint *)0x0;
  if (0 < (int)local_6c) {
    do {
      local_34 = (int *)((int)local_18 * 0x60 + *local_9c);
      local_78 = *(uint *)((int)local_18 * 0x230 + 0x220 + local_64);
      local_30 = (uint *)param_7[0x16];
      local_ec = param_7[0x13];
      local_80 = param_7[0x1c];
      FUN_0123b590(*(undefined4 *)(local_70 + (int)local_18 * 0xc),local_18,&local_180);
      local_24 = (int *)0x0;
      if (local_168 != (uint *)0x0) {
        puVar17 = *(uint **)(local_180 + 0x24 + (int)local_168 * 0x30);
        if (puVar17 == (uint *)0x0) {
          *(undefined4 *)(local_180 + 0x28 + (int)local_168 * 0x30) = 0;
        }
        else {
          local_28 = local_168;
          do {
            if (*(int *)(local_180 + 0x24 + (int)puVar17 * 0x30) == 0) {
              *(int **)(local_180 + 0x28 + (int)puVar17 * 0x30) = local_24;
              local_20 = local_24;
              local_24 = (int *)((int)local_24 + 1);
            }
            puVar18 = *(uint **)(local_180 + 0x24 + (int)puVar17 * 0x30);
            if (puVar18 == (uint *)0x0) {
              puVar18 = *(uint **)(local_180 + 0x20 + (int)puVar17 * 0x30);
              while ((puVar22 = puVar18, puVar22 != local_168 &&
                     (*(uint **)(local_180 + 0x28 + (int)puVar22 * 0x30) == puVar17))) {
                puVar17 = puVar22;
                puVar18 = *(uint **)(local_180 + 0x20 + (int)puVar22 * 0x30);
              }
              puVar18 = puVar17;
              if (puVar22 != (uint *)0x0) {
                puVar18 = *(uint **)(local_180 + 0x28 + (int)puVar22 * 0x30);
              }
              if ((puVar22 == local_168) && (puVar18 == puVar17)) {
                puVar18 = (uint *)0x0;
              }
            }
            puVar17 = puVar18;
          } while (puVar18 != (uint *)0x0);
        }
      }
      FUN_0123c320(&local_180);
      local_c0 = param_7[0x16];
      local_20 = (int *)0x0;
      local_184 = (int)local_30 << 8;
      local_18c = local_78 & 0xff;
      do {
        puVar17 = auStack_20e68;
        for (iVar9 = 0x8000; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar17 = 0xffffffff;
          puVar17 = puVar17 + 1;
        }
        local_34[0x13] = *(byte *)(local_34 + 0x13) | local_184;
        local_34[0x13] = local_184 & 0xffffff00 | (uint)*(byte *)(local_34 + 0x16);
        iVar9 = param_7[0x13];
        local_34[0x14] = iVar9 << 8 | (uint)*(byte *)(local_34 + 0x14);
        local_34[0x14] = iVar9 << 8 | local_18c;
        local_34[0x15] = param_7[0x1f] << 8 | (uint)*(byte *)(local_34 + 0x15);
        *(undefined1 *)(local_34 + 0x15) = 0;
        *(undefined1 *)(local_34 + 0x17) = (undefined1)local_50;
        *(undefined1 *)((int)local_34 + 0x59) = 0;
        *(undefined1 *)((int)local_34 + 0x5d) = 0;
        local_c68 = local_78;
        local_248 = local_78;
        local_450 = local_78;
        local_860 = local_78;
        local_b8 = 0;
        if (0 < (int)local_78) {
          local_164 = (int)local_18 * 0x8c + 8;
          do {
            puVar17 = local_4c;
            uVar28 = local_b8;
            uVar27 = local_4c[2];
            local_448[local_b8] = local_b8;
            if (puVar17[1] == (uVar27 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,puVar17,4);
              puVar17 = local_4c;
              uVar28 = local_b8;
            }
            local_38 = (undefined1 *)(*puVar17 + puVar17[1] * 4);
            puVar17[1] = puVar17[1] + 1;
            iVar9 = *(int *)(local_64 + (local_164 + uVar28) * 4);
            local_28 = (uint *)(iVar9 - local_d4);
            if ((int)local_28 < 0) {
              local_e8[0] = 0;
              local_e8[1] = 0;
              local_e8[2] = 0;
              local_e8[3] = 0;
              if (iVar9 < (int)local_e8[4]) {
                uVar27 = *(uint *)(*param_5 + iVar9 * 0xc);
                puVar17 = (uint *)(*param_5 + iVar9 * 0xc);
                local_1c = uVar27 >> 0x1e;
                local_a8 = puVar17[1] & 0x3fffffff;
                local_40 = *(uint **)(param_3[1] + 4);
                local_b0 = CONCAT44(uVar27,(uint)local_b0) & 0x3fffffffffffffff;
                (**(code **)(*local_40 + 0x10))(uVar27 & 0x3fffffff,local_cc);
                iVar9 = param_3[2];
                local_cc[0] = *(uint *)(iVar9 + local_cc[0] * 4);
                local_cc[1] = *(int *)(iVar9 + local_cc[1] * 4);
                local_cc[2] = *(int *)(iVar9 + local_cc[2] * 4);
                local_e8[0] = local_cc[local_1c];
                local_1c = ((puVar17[1] >> 0x1e) + 2) % 3;
                (**(code **)(**(int **)(param_3[1] + 4) + 0x10))
                          (puVar17[1] & 0x3fffffff,local_98 + 3);
                iVar9 = param_3[2];
                local_98[3] = *(int *)(iVar9 + local_98[3] * 4);
                local_88 = *(int *)(iVar9 + local_88 * 4);
                local_84 = *(int *)(iVar9 + local_84 * 4);
                local_e8[1] = local_98[local_1c + 3];
                local_1c = puVar17[1] >> 0x1e;
                local_40 = *(uint **)(param_3[1] + 4);
                (**(code **)(*local_40 + 0x10))(puVar17[1] & 0x3fffffff,local_98);
                iVar9 = param_3[2];
                local_98[0] = *(uint *)(iVar9 + local_98[0] * 4);
                local_98[1] = *(int *)(iVar9 + local_98[1] * 4);
                local_98[2] = *(int *)(iVar9 + local_98[2] * 4);
                local_e8[2] = local_98[local_1c];
                local_40 = (uint *)(((*puVar17 >> 0x1e) + 2) % 3);
                (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(*puVar17 & 0x3fffffff,local_60 + 1)
                ;
                iVar9 = param_3[2];
                local_60[1] = *(uint *)(iVar9 + local_60[1] * 4);
                local_60[2] = *(uint *)(iVar9 + local_60[2] * 4);
                local_60[3] = *(uint *)(iVar9 + local_60[3] * 4);
                local_e8[3] = local_60[(int)local_40 + 1];
              }
              else {
                local_b0 = CONCAT44(iVar9 - param_5[1],(uint)local_b0);
                local_a8 = 0xffffffff;
                (**(code **)(**(int **)(param_3[1] + 4) + 0x10))(iVar9 - param_5[1],local_e8);
                iVar9 = param_3[2];
                local_e8[0] = *(uint *)(iVar9 + local_e8[0] * 4);
                local_e8[1] = *(uint *)(iVar9 + local_e8[1] * 4);
                local_e8[2] = *(uint *)(iVar9 + local_e8[2] * 4);
                local_e8[3] = local_e8[2];
              }
              local_28 = (uint *)0x0;
              piVar14 = local_a0;
              do {
                local_40 = local_e8 + (int)local_28;
                local_24 = local_b4 + local_e8[(int)local_28] * 2;
                if ((int)local_b4[local_e8[(int)local_28] * 2 + 1] < 0) {
                  (local_b4 + local_e8[(int)local_28] * 2)[1] = local_74;
                  local_74 = local_74 + 1;
                  (**(code **)(*param_3 + 8))(local_e8[(int)local_28],local_1b0);
                  if (piVar14[1] == (piVar14[2] & 0x3fffffffU)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,piVar14,8);
                  }
                  auVar35._0_4_ = (float)local_230._0_4_ - local_240;
                  auVar35._4_4_ = (float)local_230._4_4_ - fStack_23c;
                  auVar35._8_4_ = fStack_228 - fStack_238;
                  auVar35._12_4_ = fStack_224 - fStack_234;
                  local_40 = (uint *)(*piVar14 + piVar14[1] * 8);
                  piVar14[1] = piVar14[1] + 1;
                  auVar32 = maxps(auVar35,_DAT_01701b10);
                  auVar49._0_12_ = ZEXT812(0);
                  auVar49._12_4_ = 0;
                  auVar42 = rcpps(auVar49,auVar32);
                  in_XMM5._0_4_ = auVar42._0_4_ * auVar32._0_4_;
                  in_XMM5._4_4_ = auVar42._4_4_ * auVar32._4_4_;
                  in_XMM5._8_4_ = auVar42._8_4_ * auVar32._8_4_;
                  in_XMM5._12_4_ = auVar42._12_4_ * auVar32._12_4_;
                  fVar31 = ((float)local_1b0._0_4_ - local_240) *
                           (float)(~-(uint)(auVar32._0_4_ == 0.0) &
                                  (uint)((2.0 - in_XMM5._0_4_) * auVar42._0_4_));
                  fVar37 = ((float)local_1b0._4_4_ - fStack_23c) *
                           (float)(~-(uint)(auVar32._4_4_ == 0.0) &
                                  (uint)((2.0 - in_XMM5._4_4_) * auVar42._4_4_));
                  fVar39 = (fStack_1a8 - fStack_238) *
                           (float)(~-(uint)(auVar32._8_4_ == 0.0) &
                                  (uint)((2.0 - in_XMM5._8_4_) * auVar42._8_4_));
                  fVar50 = (fStack_1a4 - fStack_234) *
                           (float)(~-(uint)(auVar32._12_4_ == 0.0) &
                                  (uint)((2.0 - in_XMM5._12_4_) * auVar42._12_4_));
                  uVar27 = -(uint)(fVar31 < (float)DAT_01701b20);
                  uVar28 = -(uint)(fVar37 < DAT_01701b20._4_4_);
                  uVar29 = -(uint)(fVar39 < DAT_01701b20._8_4_);
                  uVar30 = -(uint)(fVar50 < DAT_01701b20._12_4_);
                  auVar53._0_4_ = uVar27 & (uint)fVar31;
                  auVar53._4_4_ = uVar28 & (uint)fVar37;
                  auVar53._8_4_ = uVar29 & (uint)fVar39;
                  auVar53._12_4_ = uVar30 & (uint)fVar50;
                  auVar36._0_4_ = ~uVar27 & (uint)(float)DAT_01701b20;
                  auVar36._4_4_ = ~uVar28 & (uint)DAT_01701b20._4_4_;
                  auVar36._8_4_ = ~uVar29 & (uint)DAT_01701b20._8_4_;
                  auVar36._12_4_ = ~uVar30 & (uint)DAT_01701b20._12_4_;
                  in_XMM4 = auVar53 | auVar36;
                  local_1e0 = maxps(_DAT_01701b10,in_XMM4);
                  uVar27 = FUN_00fdbc96();
                  uVar56 = FUN_00fdbc96();
                  uVar57 = FUN_00fdbc96();
                  *local_40 = (uint)uVar56 << 0x15 | (uint)uVar57;
                  local_40[1] = (uVar27 >> 0xb | (uint)((ulonglong)uVar56 >> 0x20)) << 0x15 |
                                (uVar27 << 0x15 | (uint)uVar56) >> 0xb |
                                (uint)((ulonglong)uVar57 >> 0x20);
                  piVar14 = local_a0;
                }
                if (*local_24 == -2) {
                  local_40 = (uint *)((int)auStack_20e68 + local_24[1] * 2);
                  if (*(short *)((int)auStack_20e68 + local_24[1] * 2) == -1) {
                    *(ushort *)local_40 =
                         ((ushort)*(byte *)(local_34 + 0x16) - (short)local_30) +
                         (short)param_7[0x16];
                    local_40 = (uint *)(uint)*(ushort *)(local_24 + 1);
                    if (local_7c[1] == (local_7c[2] & 0x3fffffffU)) {
                      FUN_0100a290(&PTR_vftable_018e9b94,local_7c,2);
                    }
                    *(undefined2 *)(*local_7c + local_7c[1] * 2) = local_40._0_2_;
                    local_7c[1] = local_7c[1] + 1;
                  }
                  uVar15 = *(undefined1 *)((int)auStack_20e68 + local_24[1] * 2);
                }
                else {
                  uVar15 = (undefined1)local_24[1];
                }
                *(undefined1 *)((int)local_28 + (int)local_38) = uVar15;
                local_28 = (uint *)((int)local_28 + 1);
              } while ((int)local_28 < 4);
              uVar27 = local_b0._4_4_;
              auStack_c60[local_b8 * 2 + 1] = local_a8;
              iVar9 = **(int **)param_3[1];
              auStack_c60[local_b8 * 2] = uVar27;
              local_650[local_b8] = *(int *)(iVar9 + uVar27 * 4);
            }
            else {
              local_1c = 0;
              if (0 < local_34[1]) {
                pbVar12 = (byte *)(*local_34 + 3);
                do {
                  if (((*pbVar12 & 1) == 0) && (local_b8 == *pbVar12 >> 1)) goto LAB_0123ff0c;
                  local_1c = local_1c + 1;
                  pbVar12 = pbVar12 + 4;
                } while ((int)local_1c < local_34[1]);
              }
              local_1c = 0xffffffff;
LAB_0123ff0c:
              local_24 = (int *)param_7[0x1c];
              local_14 = CONCAT13(((char)local_34[0x16] - (char)local_30) + (char)param_7[0x16],
                                  (undefined3)local_14);
              FUN_01236680(local_1c & 0xff,local_220);
              local_11c = 0x7f7fffee;
              local_150 = 0x7f7fffee;
              uStack_14c = 0x7f7fffee;
              uStack_148 = 0x7f7fffee;
              uStack_144 = 0x7f7fffee;
              local_130 = 0;
              local_12c = 0;
              local_120 = 0;
              local_118 = 1;
              local_140._8_4_ = 0xff7fffee;
              local_140._0_8_ = 0xff7fffeeff7fffee;
              local_140._12_4_ = 0xff7fffee;
              hkpSingleShapeContainer::hkpSingleShapeContainer_11(local_28,&local_150);
              piVar14 = local_a0;
              *local_38 = local_14._3_1_;
              local_38[1] = (undefined1)local_1c;
              local_38[2] = (undefined1)local_1c;
              local_38[3] = (undefined1)local_1c;
              local_160._4_4_ = local_11c;
              local_160._0_4_ = local_11c;
              fStack_158 = (float)local_11c;
              fStack_154 = (float)local_11c;
              if ((local_118 == 2) || (local_118 == 3)) {
                local_40 = (uint *)(local_130 * 2 + 2U >> 3);
                local_1c = (int)local_40 + local_a0[1];
                local_38 = (undefined1 *)(local_a0[2] & 0x3fffffff);
                local_14 = local_a0[1];
                if ((int)local_38 < (int)local_1c) {
                  uVar27 = local_1c;
                  if ((int)local_1c < (int)local_38 * 2) {
                    uVar27 = (int)local_38 * 2;
                  }
                  FUN_0100a210(&PTR_vftable_018e9b94,local_a0,uVar27,8);
                }
                piVar14[1] = piVar14[1] + (int)local_40;
                local_40 = (uint *)(*piVar14 + local_14 * 8);
                iVar9 = 0;
                if (0 < local_130) {
                  fVar31 = local_220._0_4_;
                  local_1a0._0_4_ = local_210 - fVar31;
                  fVar37 = local_220._4_4_;
                  local_1a0._4_4_ = fStack_20c - fVar37;
                  fVar39 = local_220._8_4_;
                  fStack_198 = fStack_208 - fVar39;
                  fStack_194 = fStack_204 - local_220._12_4_;
                  _local_100 = ZEXT812(0);
                  fStack_f4 = 0.0;
                  local_1c = 0;
                  auVar32 = in_XMM4;
                  auVar42 = _local_1a0;
                  do {
                    in_XMM4 = _DAT_01701b20;
                    in_XMM5 = *(undefined1 (*) [16])
                               (*(int *)(*(int *)(*(int *)(param_3[1] + 8) + (int)local_28 * 4) +
                                        0x20) + local_1c);
                    auVar42 = maxps(auVar42,_DAT_01701b10);
                    auVar32 = rcpps(auVar32,auVar42);
                    fVar50 = (float)(~-(uint)(auVar42._0_4_ == 0.0) &
                                    (uint)((2.0 - auVar32._0_4_ * auVar42._0_4_) * auVar32._0_4_)) *
                             (in_XMM5._0_4_ - fVar31);
                    fVar38 = (float)(~-(uint)(auVar42._4_4_ == 0.0) &
                                    (uint)((2.0 - auVar32._4_4_ * auVar42._4_4_) * auVar32._4_4_)) *
                             (in_XMM5._4_4_ - fVar37);
                    fVar40 = (float)(~-(uint)(auVar42._8_4_ == 0.0) &
                                    (uint)((2.0 - auVar32._8_4_ * auVar42._8_4_) * auVar32._8_4_)) *
                             (in_XMM5._8_4_ - fVar39);
                    fVar41 = (float)(~-(uint)(auVar42._12_4_ == 0.0) &
                                    (uint)((2.0 - auVar32._12_4_ * auVar42._12_4_) * auVar32._12_4_)
                                    ) * (in_XMM5._12_4_ - local_220._12_4_);
                    uVar27 = -(uint)(fVar50 < (float)DAT_01701b20);
                    uVar28 = -(uint)(fVar38 < DAT_01701b20._4_4_);
                    uVar29 = -(uint)(fVar40 < DAT_01701b20._8_4_);
                    uVar30 = -(uint)(fVar41 < DAT_01701b20._12_4_);
                    auVar43._0_4_ = ~uVar27 & (uint)(float)DAT_01701b20;
                    auVar43._4_4_ = ~uVar28 & (uint)DAT_01701b20._4_4_;
                    auVar43._8_4_ = ~uVar29 & (uint)DAT_01701b20._8_4_;
                    auVar43._12_4_ = ~uVar30 & (uint)DAT_01701b20._12_4_;
                    auVar54._0_4_ = uVar27 & (uint)fVar50;
                    auVar54._4_4_ = uVar28 & (uint)fVar38;
                    auVar54._8_4_ = uVar29 & (uint)fVar40;
                    auVar54._12_4_ = uVar30 & (uint)fVar41;
                    _local_200 = maxps(_DAT_01701b10,auVar54 | auVar43);
                    auVar32 = _local_200;
                    uVar16 = (ushort)(int)((float)local_200._0_4_ * 31.0 + 0.5);
                    uVar21 = ((short)(int)(fStack_1f8 * 63.0 + 0.5) << 5 |
                             (ushort)(int)((float)local_200._4_4_ * 31.0 + 0.5)) << 5 | uVar16;
                    *(ushort *)((int)local_40 + iVar9 * 2) = uVar21;
                    _local_200 = auVar32;
                    if (local_118 == 3) {
                      auVar51._0_12_ = ZEXT812(0);
                      auVar51._12_4_ = 0;
                      fVar50 = ((float)(uVar16 & 0x1f) * 0.032258064 * (float)local_1a0._0_4_ +
                               fVar31) - in_XMM5._0_4_;
                      fVar38 = ((float)(uVar21 >> 5 & 0x1f) * 0.032258064 * (float)local_1a0._4_4_ +
                               fVar37) - in_XMM5._4_4_;
                      fVar40 = ((float)(uVar21 >> 10) * 0.015873017 * fStack_198 + fVar39) -
                               in_XMM5._8_4_;
                      fVar50 = fVar50 * fVar50;
                      fVar38 = fVar38 * fVar38;
                      fVar40 = fVar40 * fVar40;
                      auVar44._0_4_ = fVar38 + fVar50 + fVar40;
                      auVar44._4_4_ = fVar38 + fVar50 + fVar40;
                      auVar44._8_4_ = fVar38 + fVar50 + fVar40;
                      auVar44._12_4_ = fVar38 + fVar50 + fVar40;
                      in_XMM4 = rsqrtps(auVar51,auVar44);
                      fVar50 = in_XMM4._0_4_;
                      in_XMM5._0_4_ = fVar50 * 0.5;
                      in_XMM5._4_4_ = in_XMM4._4_4_ * 0.5;
                      in_XMM5._8_4_ = in_XMM4._8_4_ * 0.5;
                      in_XMM5._12_4_ = in_XMM4._12_4_ * 0.5;
                      if ((float)local_160._0_4_ <
                          (float)(~-(uint)(auVar44._0_4_ <= 0.0) &
                                 (uint)((3.0 - fVar50 * auVar44._0_4_ * fVar50) * in_XMM5._0_4_ *
                                       auVar44._0_4_))) {
                        if ((int)(piVar14[2] & 0x3fffffffU) < (int)local_24) {
                          piVar24 = (int *)((piVar14[2] & 0x3fffffffU) * 2);
                          piVar19 = local_24;
                          if ((int)local_24 < (int)piVar24) {
                            piVar19 = piVar24;
                          }
                          FUN_0100a210(&PTR_vftable_018e9b94,piVar14,piVar19,8);
                        }
                        piVar14[1] = (int)local_24;
                        goto LAB_012403d8;
                      }
                    }
                    local_1c = local_1c + 0x10;
                    iVar9 = iVar9 + 1;
                    auVar32 = in_XMM4;
                    auVar42 = _local_1a0;
                  } while (iVar9 < local_130);
                }
                local_118 = 2;
LAB_01240227:
                *(byte *)((int)local_34 + 0x5d) = *(byte *)((int)local_34 + 0x5d) | 1;
              }
              else {
                if (local_118 == 1) {
LAB_012403d8:
                  local_14 = local_130 * 4 + 4U >> 3;
                  local_40 = (uint *)(local_14 + piVar14[1]);
                  local_38 = (undefined1 *)(piVar14[2] & 0x3fffffff);
                  local_1c = piVar14[1];
                  if ((int)local_38 < (int)local_40) {
                    iVar9 = (int)local_40;
                    if ((int)local_40 < (int)local_38 * 2) {
                      iVar9 = (int)local_38 * 2;
                    }
                    FUN_0100a210(&PTR_vftable_018e9b94,piVar14,iVar9,8);
                  }
                  piVar24 = local_24;
                  piVar14[1] = piVar14[1] + local_14;
                  iVar23 = *piVar14;
                  iVar9 = local_1c * 8;
                  iVar20 = 0;
                  if (0 < local_130) {
                    fVar31 = local_220._0_4_;
                    fVar37 = local_220._4_4_;
                    fVar39 = local_220._8_4_;
                    _local_100 = ZEXT812(0);
                    fStack_f4 = 0.0;
                    local_1c = 0;
                    auVar32 = in_XMM5;
                    do {
                      in_XMM5 = _DAT_01701b20;
                      in_XMM4 = *(undefined1 (*) [16])
                                 (*(int *)(*(int *)(*(int *)(param_3[1] + 8) + (int)local_28 * 4) +
                                          0x20) + local_1c);
                      auVar45._4_4_ = fStack_20c - fVar37;
                      auVar45._0_4_ = local_210 - fVar31;
                      auVar45._8_4_ = fStack_208 - fVar39;
                      auVar45._12_4_ = fStack_204 - local_220._12_4_;
                      auVar42 = maxps(auVar45,_DAT_01701b10);
                      auVar32 = rcpps(auVar32,auVar42);
                      fVar50 = (float)(~-(uint)(auVar42._0_4_ == 0.0) &
                                      (uint)((2.0 - auVar32._0_4_ * auVar42._0_4_) * auVar32._0_4_))
                               * (in_XMM4._0_4_ - fVar31);
                      fVar38 = (float)(~-(uint)(auVar42._4_4_ == 0.0) &
                                      (uint)((2.0 - auVar32._4_4_ * auVar42._4_4_) * auVar32._4_4_))
                               * (in_XMM4._4_4_ - fVar37);
                      fVar40 = (float)(~-(uint)(auVar42._8_4_ == 0.0) &
                                      (uint)((2.0 - auVar32._8_4_ * auVar42._8_4_) * auVar32._8_4_))
                               * (in_XMM4._8_4_ - fVar39);
                      fVar41 = (float)(~-(uint)(auVar42._12_4_ == 0.0) &
                                      (uint)((2.0 - auVar32._12_4_ * auVar42._12_4_) *
                                            auVar32._12_4_)) * (in_XMM4._12_4_ - local_220._12_4_);
                      uVar27 = -(uint)(fVar50 < (float)DAT_01701b20);
                      uVar28 = -(uint)(fVar38 < DAT_01701b20._4_4_);
                      uVar29 = -(uint)(fVar40 < DAT_01701b20._8_4_);
                      uVar30 = -(uint)(fVar41 < DAT_01701b20._12_4_);
                      auVar55._0_4_ = ~uVar27 & (uint)(float)DAT_01701b20;
                      auVar55._4_4_ = ~uVar28 & (uint)DAT_01701b20._4_4_;
                      auVar55._8_4_ = ~uVar29 & (uint)DAT_01701b20._8_4_;
                      auVar55._12_4_ = ~uVar30 & (uint)DAT_01701b20._12_4_;
                      auVar46._0_4_ = uVar27 & (uint)fVar50;
                      auVar46._4_4_ = uVar28 & (uint)fVar38;
                      auVar46._8_4_ = uVar29 & (uint)fVar40;
                      auVar46._12_4_ = uVar30 & (uint)fVar41;
                      _local_1d0 = maxps(_DAT_01701b10,auVar55 | auVar46);
                      auVar32 = _local_1d0;
                      local_48._0_4_ = (uint)(longlong)ROUND(fStack_1c8 * 1023.0 + 0.5);
                      uVar27 = (uint)local_48 << 0xb;
                      local_48._0_4_ = (uint)(longlong)ROUND((float)local_1d0._4_4_ * 2047.0 + 0.5);
                      uVar27 = uVar27 | (uint)local_48;
                      local_14 = CONCAT22(in_FPUControlWord,(undefined2)local_14);
                      local_40 = (uint *)(in_FPUControlWord | 0xc00);
                      local_48 = (longlong)ROUND((float)local_1d0._0_4_ * 2047.0 + 0.5);
                      lVar8 = local_48;
                      uVar27 = uVar27 << 0xb | (uint)local_48;
                      *(uint *)(iVar23 + iVar9 + iVar20 * 4) = uVar27;
                      _local_1d0 = auVar32;
                      local_48 = lVar8;
                      if (local_118 == 3) {
                        fVar50 = ((float)((uint)local_48 & 0x7ff) * 0.0004885198 *
                                  (local_210 - fVar31) + fVar31) - in_XMM4._0_4_;
                        fVar38 = ((float)(uVar27 >> 0xb & 0x7ff) * 0.0004885198 *
                                  (fStack_20c - fVar37) + fVar37) - in_XMM4._4_4_;
                        fVar40 = ((float)(uVar27 >> 0x16) * 0.0009775171 * (fStack_208 - fVar39) +
                                 fVar39) - in_XMM4._8_4_;
                        fVar50 = fVar50 * fVar50;
                        fVar38 = fVar38 * fVar38;
                        fVar40 = fVar40 * fVar40;
                        auVar47._0_4_ = fVar38 + fVar50 + fVar40;
                        auVar47._4_4_ = fVar38 + fVar50 + fVar40;
                        auVar47._8_4_ = fVar38 + fVar50 + fVar40;
                        auVar47._12_4_ = fVar38 + fVar50 + fVar40;
                        in_XMM4 = rsqrtps(in_XMM4,auVar47);
                        fVar50 = in_XMM4._0_4_;
                        in_XMM5._0_4_ = fVar50 * 0.5;
                        in_XMM5._4_4_ = in_XMM4._4_4_ * 0.5;
                        in_XMM5._8_4_ = in_XMM4._8_4_ * 0.5;
                        in_XMM5._12_4_ = in_XMM4._12_4_ * 0.5;
                        if ((float)local_160._0_4_ <
                            (float)(~-(uint)(auVar47._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar50 * auVar47._0_4_ * fVar50) * in_XMM5._0_4_ *
                                         auVar47._0_4_))) {
                          if ((int)(local_a0[2] & 0x3fffffffU) < (int)local_24) {
                            piVar14 = (int *)((local_a0[2] & 0x3fffffffU) * 2);
                            if ((int)piVar14 <= (int)local_24) {
                              piVar14 = local_24;
                            }
                            FUN_0100a210(&PTR_vftable_018e9b94,local_a0,piVar14,8);
                          }
                          local_a0[1] = (int)piVar24;
                          goto LAB_01240699;
                        }
                      }
                      local_1c = local_1c + 0x10;
                      iVar20 = iVar20 + 1;
                      auVar32 = in_XMM5;
                    } while (iVar20 < local_130);
                  }
                  local_118 = 1;
                  goto LAB_01240227;
                }
                if (local_118 == 0) {
LAB_01240699:
                  piVar14 = local_a0;
                  local_40 = (uint *)local_a0[1];
                  iVar9 = local_130 + (int)local_40;
                  if ((int)(local_a0[2] & 0x3fffffffU) < iVar9) {
                    iVar23 = (local_a0[2] & 0x3fffffffU) * 2;
                    if (iVar9 < iVar23) {
                      iVar9 = iVar23;
                    }
                    FUN_0100a210(&PTR_vftable_018e9b94,local_a0,iVar9,8);
                  }
                  piVar24 = piVar14 + 1;
                  *piVar24 = *piVar24 + local_130;
                  local_40 = (uint *)(*piVar14 + (int)local_40 * 8);
                  local_38 = (undefined1 *)0x0;
                  if (0 < local_130) {
                    local_160._0_4_ = (float)local_230._0_4_ - local_240;
                    local_160._4_4_ = (float)local_230._4_4_ - fStack_23c;
                    fStack_158 = fStack_228 - fStack_238;
                    fStack_154 = fStack_224 - fStack_234;
                    _local_100 = ZEXT816(0);
                    fStack_198 = 2.0;
                    local_1a0 = (undefined1  [8])0x4000000040000000;
                    fStack_194 = 2.0;
                    local_1c = 0;
                    do {
                      pfVar11 = (float *)(*(int *)(*(int *)(*(int *)(param_3[1] + 8) +
                                                           (int)local_28 * 4) + 0x20) + local_1c);
                      auVar32 = maxps(_local_160,_DAT_01701b10);
                      auVar42 = rcpps(in_XMM4,auVar32);
                      in_XMM5._0_4_ = auVar42._0_4_ * auVar32._0_4_;
                      in_XMM5._4_4_ = auVar42._4_4_ * auVar32._4_4_;
                      in_XMM5._8_4_ = auVar42._8_4_ * auVar32._8_4_;
                      in_XMM5._12_4_ = auVar42._12_4_ * auVar32._12_4_;
                      fVar31 = (*pfVar11 - local_240) *
                               (float)(~-(uint)((float)local_100._0_4_ == auVar32._0_4_) &
                                      (uint)(((float)local_1a0._0_4_ - in_XMM5._0_4_) *
                                            auVar42._0_4_));
                      fVar37 = (pfVar11[1] - fStack_23c) *
                               (float)(~-(uint)((float)local_100._4_4_ == auVar32._4_4_) &
                                      (uint)(((float)local_1a0._4_4_ - in_XMM5._4_4_) *
                                            auVar42._4_4_));
                      fVar39 = (pfVar11[2] - fStack_238) *
                               (float)(~-(uint)(fStack_f8 == auVar32._8_4_) &
                                      (uint)((fStack_198 - in_XMM5._8_4_) * auVar42._8_4_));
                      fVar50 = (pfVar11[3] - fStack_234) *
                               (float)(~-(uint)(fStack_f4 == auVar32._12_4_) &
                                      (uint)((fStack_194 - in_XMM5._12_4_) * auVar42._12_4_));
                      uVar27 = -(uint)(fVar31 < (float)DAT_01701b20);
                      uVar28 = -(uint)(fVar37 < DAT_01701b20._4_4_);
                      uVar29 = -(uint)(fVar39 < DAT_01701b20._8_4_);
                      uVar30 = -(uint)(fVar50 < DAT_01701b20._12_4_);
                      auVar52._0_4_ = ~uVar27 & (uint)(float)DAT_01701b20;
                      auVar52._4_4_ = ~uVar28 & (uint)DAT_01701b20._4_4_;
                      auVar52._8_4_ = ~uVar29 & (uint)DAT_01701b20._8_4_;
                      auVar52._12_4_ = ~uVar30 & (uint)DAT_01701b20._12_4_;
                      auVar34._0_4_ = uVar27 & (uint)fVar31;
                      auVar34._4_4_ = uVar28 & (uint)fVar37;
                      auVar34._8_4_ = uVar29 & (uint)fVar39;
                      auVar34._12_4_ = uVar30 & (uint)fVar50;
                      in_XMM4 = auVar52 | auVar34;
                      local_1f0 = maxps(_DAT_01701b10,in_XMM4);
                      uVar27 = FUN_00fdbc96();
                      uVar56 = FUN_00fdbc96();
                      uVar57 = FUN_00fdbc96();
                      local_1c = local_1c + 0x10;
                      *(uint *)((int)local_40 + (int)local_38 * 8) =
                           (uint)uVar56 << 0x15 | (uint)uVar57;
                      *(uint *)((int)local_40 + 4 + (int)local_38 * 8) =
                           (uVar27 >> 0xb | (uint)((ulonglong)uVar56 >> 0x20)) << 0x15 |
                           (uVar27 << 0x15 | (uint)uVar56) >> 0xb |
                           (uint)((ulonglong)uVar57 >> 0x20);
                      local_38 = local_38 + 1;
                    } while ((int)local_38 < local_130);
                  }
                  local_118 = 0;
                }
              }
              piVar24 = local_7c;
              piVar14 = (int *)(param_2 + 0xc + local_118 * 4);
              *piVar14 = *piVar14 + local_130;
              piVar14 = (int *)(param_2 + local_118 * 4);
              *piVar14 = *piVar14 + (param_7[0x1c] - (int)local_24) * 8;
              *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + local_120;
              local_40 = (uint *)(((local_120 & 3 | local_130 * 4) * 4 & 0xfff | local_118 & 3) << 4
                                 | local_12c & 0xf);
              if (local_7c[1] == (local_7c[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,local_7c,2);
              }
              *(undefined2 *)(*piVar24 + piVar24[1] * 2) = local_40._0_2_;
              piVar24[1] = piVar24[1] + 1;
              if (piVar24[1] == (piVar24[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar24,2);
              }
              *(undefined2 *)(*piVar24 + piVar24[1] * 2) = (undefined2)local_74;
              piVar24[1] = piVar24[1] + 1;
              local_38 = (undefined1 *)0x0;
              if (0 < (int)local_120) {
                do {
                  if (piVar24[1] == (piVar24[2] & 0x3fffffffU)) {
                    FUN_0100a290(&PTR_vftable_018e9b94,piVar24,2);
                  }
                  puVar13 = local_38 + 1;
                  *(undefined2 *)(*piVar24 + piVar24[1] * 2) = auStack_128[(int)local_38];
                  piVar24[1] = piVar24[1] + 1;
                  local_38 = puVar13;
                } while ((int)puVar13 < (int)local_120);
              }
              uVar27 = local_b8;
              local_40 = (uint *)param_3[1];
              local_74 = local_74 + (param_7[0x1c] - (int)local_24);
              iVar9 = *(int *)local_40[1];
              auStack_c60[local_b8 * 2] = -(int)local_28 - 1;
              pcVar4 = *(code **)(iVar9 + 8);
              auStack_c60[uVar27 * 2 + 1] = 0;
              iVar9 = (*pcVar4)();
              local_650[uVar27] = *(int *)(*(int *)*local_40 + (iVar9 + (int)local_28) * 4);
              local_b8 = uVar27;
            }
            local_b8 = local_b8 + 1;
          } while ((int)local_b8 < (int)local_78);
        }
        uVar27 = local_ec;
        if (local_74 < 0x10001) break;
        if ((int)(local_4c[2] & 0x3fffffff) < (int)local_ec) {
          uVar28 = (local_4c[2] & 0x3fffffff) * 2;
          if ((int)uVar28 <= (int)local_ec) {
            uVar28 = local_ec;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_4c,uVar28,4);
        }
        piVar14 = local_a0;
        local_4c[1] = uVar27;
        if ((int)(local_a0[2] & 0x3fffffffU) < (int)local_80) {
          uVar27 = (local_a0[2] & 0x3fffffffU) * 2;
          uVar28 = local_80;
          if ((int)local_80 < (int)uVar27) {
            uVar28 = uVar27;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_a0,uVar28,8);
        }
        piVar14[1] = local_80;
        if ((int)(local_7c[2] & 0x3fffffffU) < (int)local_30) {
          iVar9 = (local_7c[2] & 0x3fffffffU) * 2;
          puVar17 = local_30;
          if ((int)local_30 < iVar9) {
            puVar17 = (uint *)iVar9;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_7c,puVar17,2);
        }
        local_7c[1] = (int)local_30;
        uVar27 = param_7[0x1c] & 0x8000ffff;
        bVar26 = uVar27 == 0;
        if ((int)uVar27 < 0) {
          bVar26 = (uVar27 - 1 | 0xffff0000) == 0xffffffff;
        }
        if (!bVar26) {
          do {
            if (piVar14[1] == (piVar14[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar14,8);
            }
            puVar10 = (undefined4 *)(*piVar14 + piVar14[1] * 8);
            *puVar10 = 0;
            puVar10[1] = 0;
            piVar14[1] = piVar14[1] + 1;
            uVar27 = param_7[0x1c] & 0x8000ffff;
            if ((int)uVar27 < 0) {
              uVar27 = (uVar27 - 1 | 0xffff0000) + 1;
            }
          } while (uVar27 != 0);
        }
        iVar9 = 0;
        if (0 < local_188) {
          do {
            if (local_b4[iVar9 * 2] == -2) {
              local_b4[iVar9 * 2 + 1] = 0xffffffff;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_188);
        }
        local_50 = local_50 + 1;
        local_20 = (int *)((int)local_20 + 1);
        local_74 = 0;
      } while ((int)local_20 < 2);
      piVar14 = local_34;
      *(char *)((int)local_34 + 0x59) = (char)param_7[0x16] - (char)local_c0;
      if (1 < (int)local_248) {
        FUN_012356e0(local_448,0,local_248 - 1,local_650);
      }
      uVar27 = local_78;
      iVar9 = 0;
      if (0 < (int)local_78) {
        do {
          aiStack_e68[local_448[iVar9]] = iVar9;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar27);
      }
      local_658 = 0;
      puVar10 = (undefined4 *)(*local_4c + ((uint)piVar14[0x14] >> 8) * 4);
      for (; uVar27 != 0; uVar27 = uVar27 - 1) {
        puVar2 = auStack_858 + local_658;
        local_658 = local_658 + 1;
        uVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = uVar5;
      }
      iVar9 = 0;
      if (0 < (int)local_78) {
        do {
          puVar10 = auStack_858 + iVar9;
          puVar17 = local_448 + iVar9;
          iVar9 = iVar9 + 1;
          *(undefined4 *)(*local_4c + (((uint)local_34[0x14] >> 8) + *puVar17) * 4) = *puVar10;
        } while (iVar9 < (int)local_78);
      }
      iVar9 = 0;
      if (0 < local_34[1]) {
        do {
          bVar3 = *(byte *)(*local_34 + 3 + iVar9 * 4);
          if ((bVar3 & 1) == 0) {
            *(char *)(*local_34 + 3 + iVar9 * 4) = (char)local_448[bVar3 >> 1] * '\x02';
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_34[1]);
      }
      iVar9 = 0;
      if (0 < (int)local_860) {
        local_c0 = (int)local_18 << 7;
        do {
          uVar27 = auStack_c60[iVar9 * 2];
          uVar28 = (local_448[iVar9] | (int)local_18 << 7) * 2;
          if ((int)uVar27 < 0) {
            if (auStack_c60[iVar9 * 2 + 1] != 0) {
              if (-1 < (int)uVar27) goto LAB_01240f5d;
              goto LAB_01240f65;
            }
            *(uint *)(param_4[3] - (uVar27 * 4 + 4)) = uVar28;
          }
          else {
LAB_01240f5d:
            *(uint *)(*param_4 + uVar27 * 4) = uVar28;
LAB_01240f65:
            if (-1 < (int)auStack_c60[iVar9 * 2 + 1]) {
              *(uint *)(*param_4 + auStack_c60[iVar9 * 2 + 1] * 4) = uVar28 | 1;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_860);
      }
      local_30 = (uint *)0x0;
      if (0 < (int)local_78) {
        do {
          if (param_7[0x1f] == (param_7[0x20] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_7 + 0x1e,8);
          }
          piVar14 = (int *)(param_7[0x1e] + param_7[0x1f] * 8);
          param_7[0x1f] = param_7[0x1f] + 1;
          *piVar14 = local_650[aiStack_e68[(int)local_30]];
          iVar9 = (int)local_30 + 1;
          *(char *)(piVar14 + 1) = (char)local_30;
          *(undefined1 *)((int)piVar14 + 5) = 1;
          if (iVar9 < (int)local_78) {
            do {
              if (*piVar14 != local_650[aiStack_e68[iVar9]]) break;
              *(char *)((int)piVar14 + 5) = *(char *)((int)piVar14 + 5) + '\x01';
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)local_78);
          }
          local_30 = (uint *)((int)local_30 + (uint)*(byte *)((int)piVar14 + 5));
          local_34[0x15] = *(byte *)(local_34 + 0x15) + 1 | local_34[0x15] & 0xffffff00U;
        } while ((int)local_30 < (int)local_78);
      }
      if (*(char *)(param_1 + 1) != '\0') {
        uVar27 = param_7[0x1e];
        local_c0 = (uint)local_34[0x15] >> 8;
        local_38 = (undefined1 *)(uVar27 + local_c0 * 8);
        local_ec = local_34[0x15] & 0xff;
        local_c0 = local_c0 - local_ec;
        local_24 = (int *)0x0;
        if (0 < (int)local_c0) {
          local_30 = (uint *)(uVar27 - (int)local_38);
          local_1c = uVar27;
          do {
            iVar9 = 0;
            if (local_ec == 0) {
LAB_012410d7:
              bVar3 = *(byte *)(local_34 + 0x15);
              local_34[0x15] = (uint)bVar3 | (int)local_24 << 8;
              param_7[0x1f] = param_7[0x1f] - (uint)bVar3;
              break;
            }
            pcVar25 = local_38 + 4;
            while (((*pcVar25 == pcVar25[(int)local_30] &&
                    (pcVar25[1] == local_38[iVar9 * 8 + (int)local_30 + 5])) &&
                   (*(int *)(pcVar25 + -4) == *(int *)(local_1c + iVar9 * 8)))) {
              iVar9 = iVar9 + 1;
              pcVar25 = pcVar25 + 8;
              if ((int)(local_34[0x15] & 0xffU) <= iVar9) goto LAB_012410d7;
            }
            local_1c = local_1c + 8;
            local_30 = (uint *)((int)local_30 + 8);
            local_24 = (int *)((int)local_24 + 1);
          } while ((int)local_24 < (int)local_c0);
        }
      }
      local_18 = (uint *)((int)local_18 + 1);
    } while ((int)local_18 < (int)local_6c);
  }
  FUN_0123c530(param_6);
  iVar9 = 0;
  if (0 < param_7[1]) {
    iVar23 = 0;
    do {
      iVar20 = *param_7;
      if ((*(byte *)(iVar20 + 3 + iVar23) & 0x80) == 0) {
        *(short *)((uint)CONCAT11(*(undefined1 *)(iVar20 + 3 + iVar23),
                                  *(undefined1 *)(iVar20 + 4 + iVar23)) * 0x60 + 0x5a + *local_9c) =
             (short)iVar9;
      }
      iVar9 = iVar9 + 1;
      iVar23 = iVar23 + 5;
    } while (iVar9 < param_7[1]);
  }
  if (param_7[1] < (int)(param_7[2] & 0x3fffffffU)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_7,5,0,param_7[1]);
  }
  if ((int)local_4c[1] < (int)(local_4c[2] & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,local_4c,4,0,local_4c[1]);
  }
  if ((int)local_2c[1] < (int)(local_2c[2] & 0x3fffffff)) {
    FUN_0100a320(&PTR_vftable_018e9b94,local_2c,4,0,local_2c[1]);
  }
  if (local_a0[1] < (int)(local_a0[2] & 0x3fffffffU)) {
    FUN_0100a320(&PTR_vftable_018e9b94,local_a0,8,0,local_a0[1]);
  }
  if (local_7c[1] < (int)(local_7c[2] & 0x3fffffffU)) {
    FUN_0100a320(&PTR_vftable_018e9b94,local_7c,2,0,local_7c[1]);
  }
  if (param_7[0x1f] < (int)(param_7[0x20] & 0x3fffffffU)) {
    FUN_0100a320(&PTR_vftable_018e9b94,param_7 + 0x1e,8,0,param_7[0x1f]);
  }
  local_2c = (uint *)0x0;
  if (0 < param_7[0x10]) {
    iVar9 = 0;
    do {
      iVar23 = *local_9c;
      iVar20 = *(int *)(iVar23 + 4 + iVar9);
      if (iVar20 < (int)(*(uint *)(iVar23 + 8 + iVar9) & 0x3fffffff)) {
        FUN_0100a320(&PTR_vftable_018e9b94,iVar23 + iVar9,4,0,iVar20);
      }
      local_2c = (uint *)((int)local_2c + 1);
      iVar9 = iVar9 + 0x60;
    } while ((int)local_2c < param_7[0x10]);
  }
  FUN_0123b550();
  if (-1 < (int)local_d0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_64,(local_d0 & 0x3fffffff) * 0x230);
  }
  if (-1 < (int)local_bc) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_b4,(int)local_bc * 8);
  }
  local_6c = (uint *)0x0;
  if (-1 < (int)local_68) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_70,(local_68 & 0x3fffffff) * 0xc);
  }
  return 1;
}

// 01241360  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>::BuildGeometryProvider<hkpBvCompressedMeshShape_Internals::GeometryProvider>_2  size=3575  [run]
/* decompilation failed: 
Low-level Error: Backward normalization not implemented */

// 01242250  FUN_01242250  size=107  [run]
void __fastcall FUN_01242250(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[4] = 0x7f7fffee;
  param_1[5] = 0x7f7fffee;
  param_1[6] = 0x7f7fffee;
  param_1[7] = 0x7f7fffee;
  param_1[8] = param_1[4] ^ 0x80000000;
  param_1[9] = param_1[5] ^ 0x80000000;
  param_1[10] = param_1[6] ^ 0x80000000;
  param_1[0xb] = param_1[7] ^ 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x80000000;
  return;
}

// 012422C0  hkpBvCompressedMeshShape::vf00  size=52  [run]
int __thiscall hkpBvCompressedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_104();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01242300  FUN_01242300  size=1  [run]
void FUN_01242300(void)

{
  return;
}

// 01242310  FUN_01242310  size=123  [run]
void __fastcall FUN_01242310(int param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = FUN_01005cb0(*(undefined4 *)((int)pvVar2 + 0x2c),iVar3 * 2);
  FUN_01015ea0(iVar3,0xcd,*(undefined4 *)(param_1 + 8));
  FUN_01015e80(*(int *)(param_1 + 8) + iVar3,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) * 2;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}

// 01242390  hkpMoppCode::hkpMoppCode_2  size=256  [run]
undefined4 * __fastcall hkpMoppCode::hkpMoppCode_2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0xc);
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  puVar6 = (undefined4 *)(**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x30);
  puVar1 = puVar6 + 8;
  puVar6[1] = 0x10030;
  *puVar6 = vftable;
  *puVar1 = 0;
  puVar6[9] = 0;
  puVar6[10] = 0x80000000;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 2;
  if ((int)(puVar6[10] & 0x3fffffff) < iVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,puVar1,iVar2,1);
  }
  if ((int)(puVar6[10] & 0x3fffffff) < iVar2) {
    iVar4 = (puVar6[10] & 0x3fffffff) * 2;
    iVar7 = iVar2;
    if (iVar2 < iVar4) {
      iVar7 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,puVar1,iVar7,1);
  }
  puVar6[9] = iVar2;
  FUN_01015e80(*puVar1,(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) + *(int *)(param_1 + 8),
               iVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar5 + 0x2c),uVar3);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = iVar2;
  return puVar6;
}

// 01242490  hkpMoppCodeGenerator::hkpMoppCodeGenerator  size=93  [run]
undefined4 * __thiscall
hkpMoppCodeGenerator::hkpMoppCodeGenerator(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2);
  param_1[2] = param_2;
  param_1[4] = uVar2;
  param_1[3] = 0;
  return param_1;
}

// 012424F0  hkBaseObject::hkBaseObject_214  size=110  [run]
void __fastcall hkBaseObject::hkBaseObject_214(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  *param_1 = hkpMoppCodeGenerator::vftable;
  if (iVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),iVar1);
  }
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 8);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 012425A0  FUN_012425a0  size=28  [run]
void __thiscall FUN_012425a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 012425F0  FUN_012425f0  size=33  [run]
void FUN_012425f0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01242620  FUN_01242620  size=33  [run]
void FUN_01242620(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01242660  FUN_01242660  size=63  [run]
void __thiscall FUN_01242660(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012426A0  FUN_012426a0  size=63  [run]
void __fastcall FUN_012426a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012426E0  FUN_012426e0  size=63  [run]
void __fastcall FUN_012426e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01242720  FUN_01242720  size=38  [run]
void FUN_01242720(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01242750  hkpMoppCodeGenerator::vf00  size=52  [run]
int __thiscall hkpMoppCodeGenerator::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_214();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012427F0  FUN_012427f0  size=14  [run]
int FUN_012427f0(float param_1)

{
  return (int)param_1;
}

// 01242800  FUN_01242800  size=14  [run]
int FUN_01242800(float param_1)

{
  return (int)param_1;
}

// 01242880  FUN_01242880  size=79  [run]
int FUN_01242880(float param_1)

{
  float fVar1;
  
  fVar1 = ((param_1 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  return (int)(float)(~-(uint)(8388608.0 < ABS(param_1)) &
                      (uint)((float)(int)-(uint)(param_1 < fVar1) + fVar1) |
                     -(uint)(8388608.0 < ABS(param_1)) & (uint)param_1);
}

// 012428D0  FUN_012428d0  size=70  [run]
void __thiscall FUN_012428d0(int param_1,int param_2)

{
  if ((*(char *)(param_2 + 4) == '\0') && (*(char *)(param_1 + 0x74) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_2 + 0x70));
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_2 + 0x74));
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0;
  }
  return;
}

// 01242920  FUN_01242920  size=42  [run]
void __thiscall FUN_01242920(int param_1,undefined1 *param_2,int param_3,int *param_4)

{
  if ((0x15 < *(int *)(param_3 + 8)) && (*param_4 <= *(int *)(param_1 + 0x18))) {
    *param_2 = 0;
    return;
  }
  *param_2 = 1;
  return;
}

// 01242950  FUN_01242950  size=35  [run]
void FUN_01242950(undefined4 *param_1)

{
  for (; (param_1 != (undefined4 *)0x0 && (*(char *)((int)param_1 + 0x39) == '\0'));
      param_1 = (undefined4 *)*param_1) {
    *(undefined1 *)((int)param_1 + 0x39) = 1;
  }
  return;
}

// 01242980  FUN_01242980  size=104  [run]
void FUN_01242980(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(uint *)(param_3 + 0x38);
  uVar2 = (uVar1 - *(int *)(param_2 + 0x34)) + *(int *)(param_1 + 0x24);
  if (((0x1f < uVar2) && ((2 < uVar1 || (0xff < uVar2)))) &&
     (((uVar1 < 0x20 && (0x1f < *(uint *)(param_2 + 0x38))) ||
      (((uVar1 < 0x100 && (0xff < *(uint *)(param_2 + 0x38))) ||
       ((uVar1 < 0x10000 && (0xffff < *(uint *)(param_2 + 0x38))))))))) {
    *(int *)(param_3 + 0x34) = *(int *)(param_1 + 0x24);
  }
  return;
}

// 012429F0  FUN_012429f0  size=101  [run]
void FUN_012429f0(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_012453e0(param_1 + 0x68,param_2);
    return;
  }
  if (param_2 < 0x100) {
    FUN_012451f0(param_1 + 0x60,param_2);
    return;
  }
  if (param_2 < 0x10000) {
    FUN_01245240(param_1 + 100,param_2);
    return;
  }
  FUN_012453e0(param_1 + 0x68,param_2);
  return;
}

// 01242A60  FUN_01242a60  size=26  [run]
undefined4 FUN_01242a60(undefined4 param_1)

{
  FUN_012453e0(0x70,param_1);
  return 5;
}

// 01242A80  FUN_01242a80  size=102  [run]
undefined4 __thiscall FUN_01242a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       (char)param_3;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       (char)((uint)param_3 >> 8);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  FUN_01245240(0xd,param_2);
  return 5;
}

// 01242AF0  FUN_01242af0  size=169  [run]
void __thiscall FUN_01242af0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       *(undefined1 *)(param_2 + 0x10);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       *(undefined1 *)(param_2 + 0xc);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       *(undefined1 *)(param_2 + 8);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       *(undefined1 *)(param_2 + 4);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 01242BA0  FUN_01242ba0  size=118  [run]
void __thiscall FUN_01242ba0(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x100) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(char *)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 0x10)) =
         (char)param_2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
      FUN_01242310();
    }
    *(undefined1 *)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 0x10)) = 9
    ;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
      FUN_01242310();
    }
    return;
  }
  if (param_2 < 0x10000) {
    FUN_01245240(10,param_2);
    return;
  }
  FUN_012453e0(0xb,param_2);
  return;
}

// 01242C20  FUN_01242c20  size=69  [run]
void FUN_01242c20(int *param_1,int param_2,int param_3)

{
  if (*param_1 == 0) {
    if ((*(int *)(param_3 + 0x44) == 0) && (*(int *)(param_3 + 0x40) != 0)) {
      FUN_012429f0(0,*(int *)(param_3 + 0x40));
    }
  }
  else if ((*(int *)(param_3 + 0x44) == 0) && (*(int *)(param_2 + 0x44) != 0)) {
    FUN_012429f0(0,*(undefined4 *)(param_3 + 0x40));
    return;
  }
  return;
}

// 01242C70  FUN_01242c70  size=204  [run]
int __thiscall FUN_01242c70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(iVar4 + 0xc);
  uVar2 = **(int **)(param_2 + 0x60) - *(int *)(param_4 + 0x34);
  if (uVar2 < 0x20) {
    *(char *)((*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) + -1 + *(int *)(iVar4 + 8)) =
         (char)uVar2 + '0';
    *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
    if (*(int *)(iVar4 + 8) <= *(int *)(iVar4 + 0xc)) {
      FUN_01242310();
    }
  }
  else if (uVar2 < 0x100) {
    FUN_012451f0(0x50,uVar2);
  }
  else if (uVar2 < 0x10000) {
    FUN_01245240(0x51,uVar2);
  }
  else if (uVar2 < 0x1000000) {
    FUN_012452c0(0x52,uVar2);
  }
  else {
    FUN_012453e0(0x53,uVar2);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x2c)) {
    piVar5 = (int *)(param_2 + 0x30);
    piVar3 = (int *)(param_3 + 0x44);
    do {
      if ((*piVar5 != 0) && (*piVar3 != 0)) {
        FUN_012429f0(iVar4,*piVar5);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x2c));
  }
  return *(int *)(*(int *)(param_1 + 0x10) + 0xc) - iVar1;
}

// 01242D40  FUN_01242d40  size=82  [run]
void __thiscall FUN_01242d40(int param_1,int param_2)

{
  param_2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) - param_2;
  if (0 < param_2) {
    if (param_2 < 0xff) {
      FUN_012451f0(5,param_2);
      return;
    }
    if (param_2 < 0xffff) {
      FUN_01245240(6,param_2);
      return;
    }
    if (param_2 < 0xffffff) {
      FUN_012452c0(7,param_2);
      return;
    }
    FUN_012453e0(8,param_2);
  }
  return;
}

// 01242DA0  FUN_01242da0  size=233  [run]
undefined4 FUN_01242da0(float *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*param_1 <= 0.1) {
    if (param_1[1] <= 0.1) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
      if (0.1 < param_1[2]) {
        return 3;
      }
      if (param_1[2] < -0.1) {
        return 4;
      }
    }
  }
  else {
    uVar2 = 0;
    if (param_1[2] <= 0.1) {
      fVar1 = param_1[1];
      if (-0.1 <= param_1[2]) {
        if (0.1 < fVar1) {
          return 7;
        }
        if (fVar1 < -0.1) {
          return 8;
        }
      }
      else {
        uVar2 = 6;
        if (0.1 < fVar1) {
          return 10;
        }
        if (fVar1 < -0.1) {
          return 0xc;
        }
      }
    }
    else {
      uVar2 = 5;
      if (0.1 < param_1[1]) {
        return 9;
      }
      if (param_1[1] < -0.1) {
        return 0xb;
      }
    }
  }
  return uVar2;
}

// 01242ED0  FUN_01242ed0  size=40  [run]
int FUN_01242ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8) + -8;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = iVar1 - iVar3;
  if (iVar1 < iVar1 - iVar3) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// 01242F00  FUN_01242f00  size=231  [run]
void FUN_01242f00(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = FUN_01242ed0(param_1,param_2);
  *param_3 = 0;
  if (local_8 < 1) {
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    return;
  }
  if (3 < local_8) {
    local_8 = 4;
  }
  do {
    local_10 = (int *)(param_3 + 8);
    *(int *)(param_2 + 0x24) = *(int *)(param_1 + 0x24) - local_8;
    local_c = 0;
    piVar5 = (int *)(param_2 + 0x10);
    piVar4 = (int *)(param_2 + 0x28);
    while( true ) {
      if (2 < local_c) {
        *(int *)(param_3 + 4) = local_8;
        *param_3 = 1;
        return;
      }
      iVar1 = *(int *)((param_1 - param_2) + (int)piVar4);
      bVar2 = (byte)*(undefined4 *)(param_1 + 0x24);
      iVar3 = piVar5[-1] - iVar1 >> (bVar2 & 0x1f);
      *piVar4 = (iVar3 << (bVar2 & 0x1f)) + iVar1;
      *local_10 = iVar3;
      if (0xfe < *piVar5 - *piVar4 >> ((byte)*(undefined4 *)(param_2 + 0x24) & 0x1f)) break;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 2;
    }
    local_8 = local_8 + -1;
  } while( true );
}

// 01242FF0  FUN_01242ff0  size=504  [run]
int __thiscall FUN_01242ff0(int param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_30 [20];
  int local_1c;
  int local_18 [5];
  
  iVar7 = (int)param_2;
  local_18[3] = (int)param_4[2];
  if (*(char *)((int)param_2 + 4) == '\0') {
    local_18[4] = param_1;
    if (((*(char *)((int)param_2 + 0x39) == '\0') && ((int)*param_4 < *(int *)(param_1 + 0x1c))) &&
       (iVar7 = FUN_01242ed0(param_3,param_4), 2 < iVar7)) {
      *(undefined1 *)((int)param_2 + 0x3a) = 1;
    }
    if (*(char *)((int)param_2 + 0x3a) == '\x01') {
      FUN_01242f00(param_3,param_4,local_30);
    }
    iVar7 = *(int *)((int)param_2 + 0x70);
    local_1c = -1;
    local_18[0] = -1;
    param_3 = 0x7fffffff;
    local_18[2] = *(int *)((int)param_2 + 0x74);
    iVar4 = 0;
    local_18[1] = iVar7;
    do {
      iVar2 = *(int *)((int)local_18 + iVar4 + 8);
      if (iVar2 != 0) {
        FUN_01245910(param_4,iVar2,local_18[4] + 0x30);
        uVar6 = FUN_01242ff0(iVar2,param_4,local_78);
        *(undefined4 *)((int)local_18 + iVar4) = uVar6;
        iVar7 = local_18[1];
        if (local_70 <= param_3) {
          param_3 = local_70;
        }
      }
      iVar4 = iVar4 + -4;
    } while (-5 < iVar4);
    iVar4 = param_3 + 2;
    if (local_18[3] + 2 < param_3 + 2) {
      iVar4 = local_18[3] + 2;
    }
    if (iVar7 != 0) {
      iVar2 = local_18[3];
      if (((*(char *)((int)param_2 + 0x39) == '\0') ||
          (iVar2 = iVar4, *(char *)(iVar7 + 0x39) == '\0')) && (local_1c < iVar2)) {
        *(undefined1 *)(iVar7 + 0x3a) = 1;
      }
      if ((*(char *)(iVar7 + 0x3a) == '\0') && (local_1c <= iVar4)) {
        iVar4 = local_1c;
      }
    }
    if (local_18[2] != 0) {
      if (((*(char *)((int)param_2 + 0x39) == '\0') ||
          (local_18[3] = iVar4, *(char *)(local_18[2] + 0x39) == '\0')) &&
         (local_18[0] < local_18[3])) {
        *(undefined1 *)(local_18[2] + 0x3a) = 1;
      }
      if ((*(char *)(local_18[2] + 0x3a) == '\0') && (local_18[0] <= iVar4)) {
        iVar4 = local_18[0];
      }
    }
  }
  else {
    iVar4 = 0;
    bVar3 = (byte)local_18[3] & 0x1f;
    param_2 = (float *)((int)param_2 + 0xc);
    param_4 = (float *)(param_1 + 0x60);
    fVar8 = *(float *)(param_1 + 0x58);
    do {
      if (*(char *)(iVar7 + 0x39) == '\0') {
        *(undefined1 *)(iVar4 + 0x3b + iVar7) = 1;
      }
      fVar1 = *param_4;
      fVar9 = fVar8;
      if ((((param_2[1] - *param_2 < fVar1) && (fVar1 < fVar8)) &&
          (fVar9 = fVar1,
          (int)(fVar1 * *(float *)(param_1 + 0x3c)) * 0x80 < (int)(1 << bVar3 | 1U >> 0x20 - bVar3))
          ) && (fVar9 = fVar8, *(char *)(iVar7 + 0x39) == '\0')) {
        *(undefined1 *)(iVar4 + 0x3b + iVar7) = 2;
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + 1;
      fVar8 = fVar9;
    } while (iVar4 < 3);
    iVar7 = 0;
    for (uVar5 = (uint)(*(float *)(param_1 + 0x3c) * 0.9 * fVar9); uVar5 != 0; uVar5 = uVar5 >> 1) {
      iVar7 = iVar7 + 1;
    }
    iVar4 = iVar7 + 6;
    if (iVar7 + 6 <= local_18[3]) {
      return local_18[3];
    }
  }
  return iVar4;
}

// 012431F0  FUN_012431f0  size=195  [run]
void __thiscall FUN_012431f0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float fVar8;
  int local_c;
  
  piVar7 = (int *)(param_3 + 0x10);
  iVar4 = param_3 - (int)param_2;
  piVar3 = (int *)((int)param_2 + 0x50);
  pfVar6 = (float *)((int)param_2 + 0xc);
  local_c = 3;
  param_2 = (float *)(param_1 + 0x60);
  do {
    fVar8 = (float)(1 << ((byte)*(undefined4 *)(param_3 + 0x24) & 0x1f)) /
            *(float *)(param_1 + 0x3c);
    if (fVar8 <= *(float *)(param_1 + 0x58)) {
      fVar8 = *(float *)(param_1 + 0x58);
    }
    fVar1 = *param_2;
    if ((pfVar6[1] - *pfVar6 < fVar1) && (fVar1 <= fVar8)) {
      fVar8 = fVar1;
    }
    iVar2 = *piVar7;
    param_2 = param_2 + 1;
    iVar5 = (int)(fVar8 * *(float *)(param_1 + 0x3c));
    piVar3[-3] = *(int *)(iVar4 + (int)pfVar6) - iVar5;
    *piVar3 = iVar2 + 1 + iVar5;
    piVar3 = piVar3 + 1;
    pfVar6 = pfVar6 + 2;
    piVar7 = piVar7 + 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

// 012432C0  FUN_012432c0  size=56  [run]
void FUN_012432c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    FUN_01242f00(param_2,param_3,param_4);
  }
  FUN_01242980(param_1,param_2,param_3);
  return;
}

// 01243300  FUN_01243300  size=528  [run]
void __thiscall FUN_01243300(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int *local_14;
  undefined1 local_10;
  int local_c;
  
  piVar4 = (int *)(param_3 + 0x10);
  local_14 = (int *)(param_3 + 0x28);
  local_c = 0;
  do {
    if (*(char *)(param_2 + 0x3b + local_c) == '\x01') {
      iVar1 = piVar4[-1];
      iVar2 = *local_14;
      iVar5 = *(int *)(param_1 + 0x10);
      bVar3 = (byte)*(undefined4 *)(param_3 + 0x24);
      *(char *)((*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) + -1 + *(int *)(iVar5 + 8)) =
           (char)(*piVar4 - iVar2 >> (bVar3 & 0x1f)) + '\x01';
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      if (*(int *)(iVar5 + 8) <= *(int *)(iVar5 + 0xc)) {
        FUN_01242310();
      }
      iVar5 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc)) + -1 + *(int *)(iVar5 + 8)) =
           (char)(iVar1 - iVar2 >> (bVar3 & 0x1f));
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      if (*(int *)(iVar5 + 8) <= *(int *)(iVar5 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)local_c + '&';
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
    }
    if (*(char *)(param_2 + 0x3b + local_c) == '\x02') {
      iVar1 = piVar4[-1];
      iVar2 = *(int *)(param_1 + 0x10);
      iVar5 = *piVar4 + 1;
      *(char *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           (char)iVar5;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      *(char *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           (char)((uint)iVar5 >> 8);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      *(char *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           (char)((uint)iVar5 >> 0x10);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      iVar2 = *(int *)(param_1 + 0x10);
      local_10 = (undefined1)iVar1;
      *(undefined1 *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           local_10;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      *(char *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           (char)((uint)iVar1 >> 8);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      *(char *)((*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc)) + -1 + *(int *)(iVar2 + 8)) =
           (char)((uint)iVar1 >> 0x10);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)local_c + ')';
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
    }
    local_14 = local_14 + 1;
    local_c = local_c + 1;
    piVar4 = piVar4 + 2;
  } while (local_c < 3);
  return;
}

// 01243510  FUN_01243510  size=635  [run]
void __thiscall
FUN_01243510(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc) - param_6;
  if (param_4 < 3) {
    iVar3 = *(int *)(iVar1 + 0xc) - param_5;
    if ((((0 < iVar3) || (0xf8 < iVar2)) && (iVar3 < 0x10000)) && (iVar2 < 0x10000)) {
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)iVar2;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)((uint)iVar2 >> 8);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)iVar3;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (char)((uint)iVar3 >> 8);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (undefined1)param_2;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (undefined1)param_3;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      param_4._0_1_ = (char)param_4 + '#';
      goto LAB_01243760;
    }
    if (param_3 - param_2 == 1) {
      if (0xfb < iVar2) {
        FUN_01242d40(param_6);
        param_6 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
      }
      FUN_01242d40(param_5);
      iVar1 = *(int *)(param_1 + 0x10);
      *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           *(char *)(iVar1 + 0xc) - (char)param_6;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
           (undefined1)param_2;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
        FUN_01242310();
      }
      param_4._0_1_ = (char)param_4 + ' ';
      goto LAB_01243760;
    }
  }
  if (0xfb < iVar2) {
    FUN_01242d40(param_6);
    param_6 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  }
  FUN_01242d40(param_5);
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       *(char *)(iVar1 + 0xc) - (char)param_6;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       (undefined1)param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       (undefined1)param_3;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  param_4._0_1_ = (char)param_4 + '\x10';
LAB_01243760:
  iVar1 = *(int *)(param_1 + 0x10);
  *(char *)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) + -1 + *(int *)(iVar1 + 8)) =
       (char)param_4;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 01243790  hkpMoppDefaultAssembler::vf18  size=125  [run]
void hkpMoppDefaultAssembler::vf18(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = 0;
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc);
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14);
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x1c);
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  param_2[3] = (254.0 / fVar3) * 65536.0;
  return;
}

// 01243810  FUN_01243810  size=82  [run]
int __thiscall FUN_01243810(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_01242950(param_2);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  FUN_01242c70(param_2,param_3,param_4);
  FUN_01243300(param_2,param_4);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  *(undefined1 *)(param_2 + 0x38) = 1;
  return iVar2 - iVar1;
}

// 01243870  FUN_01243870  size=49  [run]
void __thiscall FUN_01243870(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x60) = param_2[4];
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = param_2[8];
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 9);
  return;
}

// 012438B0  FUN_012438b0  size=1005  [run]
void __thiscall FUN_012438b0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int iStack_14;
  
  pfVar1 = *(float **)(param_2 + 0x60);
  iVar5 = 0;
  iStack_14 = 0;
  iVar6 = 0;
  if (*pfVar1 != 0.0) {
    iVar6 = 1;
    if (*pfVar1 < 0.0) {
      iStack_14 = 1;
      iVar6 = 1;
    }
  }
  if (pfVar1[1] != 0.0) {
    iVar6 = iVar6 + 1;
    iVar5 = 1;
    if (pfVar1[1] < 0.0) {
      iStack_14 = iStack_14 + 1;
    }
  }
  if (pfVar1[2] != 0.0) {
    iVar6 = iVar6 + 1;
    iVar5 = 2;
    if (pfVar1[2] < 0.0) {
      iStack_14 = iStack_14 + 1;
    }
  }
  if (iVar6 == 1) {
    fVar9 = *(float *)(param_1 + 0x30 + iVar5 * 4);
    fVar2 = (*(float *)(param_2 + 100) - fVar9) * *(float *)(param_1 + 0x3c);
    iVar6 = *(int *)(param_3 + 0x28 + iVar5 * 4);
    fVar7 = ((fVar2 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    fVar9 = (*(float *)(param_2 + 0x68) - fVar9) * *(float *)(param_1 + 0x3c);
    fVar8 = ((fVar9 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    bVar4 = (byte)*(undefined4 *)(param_3 + 0x24);
    iVar5 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar2)) &
                         (uint)((float)(int)-(uint)(fVar2 < fVar7) + fVar7) |
                        -(uint)(8388608.0 < ABS(fVar2)) & (uint)fVar2) - iVar6 >> (bVar4 & 0x1f);
    iVar6 = ((int)(float)(~-(uint)(8388608.0 < ABS(fVar9)) &
                          (uint)((float)(int)-(uint)(fVar9 < fVar8) + fVar8) |
                         -(uint)(8388608.0 < ABS(fVar9)) & (uint)fVar9) - iVar6 >> (bVar4 & 0x1f)) +
            1;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    else if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else if (0xfe < iVar6) {
      iVar6 = 0xff;
    }
    *param_5 = iVar5;
    *param_4 = iVar6;
    if (*param_5 < 0) {
      *param_5 = 0;
      return;
    }
  }
  else {
    fVar9 = 1.0 / *(float *)(param_1 + 0x3c);
    local_30 = (float)*(undefined8 *)(param_1 + 0x30);
    fStack_2c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    fStack_28 = (float)*(undefined8 *)(param_1 + 0x38);
    fVar8 = ((float)*(int *)(param_3 + 0x30) * fVar9 + fStack_28) * pfVar1[2] +
            ((float)*(int *)(param_3 + 0x2c) * fVar9 + fStack_2c) * pfVar1[1] +
            ((float)*(int *)(param_3 + 0x28) * fVar9 + local_30) * *pfVar1;
    fVar7 = 1.0 / (float)(1 << ((byte)*(undefined4 *)(param_3 + 0x24) & 0x1f));
    fVar9 = 1.0;
    fVar2 = 1.0;
    if (iVar6 == 2) {
      fVar9 = 1.4142135;
      fVar2 = 0.5;
    }
    else if (iVar6 == 3) {
      fVar9 = 1.7320508;
      fVar2 = 0.33333334;
    }
    fVar3 = fVar9 * (*(float *)(param_2 + 100) - fVar8) * *(float *)(param_1 + 0x3c) * fVar7;
    fVar9 = fVar9 * (*(float *)(param_2 + 0x68) - fVar8) * *(float *)(param_1 + 0x3c) * fVar7;
    if (iStack_14 != 0) {
      fVar3 = fVar3 + (float)(iStack_14 * 0xff);
      fVar9 = fVar9 + (float)(iStack_14 * 0xff);
    }
    fVar9 = fVar2 * fVar9;
    fVar2 = fVar2 * fVar3;
    fVar7 = ((fVar2 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    fVar8 = ((fVar9 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    iVar5 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar2)) &
                         (uint)((float)(int)-(uint)(fVar2 < fVar7) + fVar7) |
                        -(uint)(8388608.0 < ABS(fVar2)) & (uint)fVar2);
    iVar6 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar9)) &
                         (uint)((float)(int)-(uint)(fVar9 < fVar8) + fVar8) |
                        -(uint)(8388608.0 < ABS(fVar9)) & (uint)fVar9) + 1;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    else if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar6 < 1) {
      *param_5 = iVar5;
      *param_4 = 0;
      return;
    }
    if (0xfe < iVar6) {
      iVar6 = 0xff;
    }
    *param_5 = iVar5;
    *param_4 = iVar6;
  }
  return;
}

// 01243CA0  FUN_01243ca0  size=176  [run]
int __thiscall FUN_01243ca0(int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = param_2;
  FUN_01242950(param_2);
  iVar3 = param_4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  FUN_012438b0(iVar2,param_4,&param_2,&param_4);
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x74) + 0x5c);
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0x5c);
  uVar4 = FUN_01242da0(*(undefined4 *)(iVar2 + 0x60));
  FUN_01243510(param_4,param_2,uVar4,uVar6,uVar7);
  iVar5 = *(int *)(iVar3 + 0x34) - *(int *)(param_3 + 0x34);
  if (iVar5 != 0) {
    FUN_01242ba0(iVar5);
  }
  FUN_01242c20(iVar2,param_3,iVar3);
  FUN_01243300(iVar2,iVar3);
  if (*param_5 != '\0') {
    FUN_01242af0(param_5);
  }
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
  *(undefined1 *)(iVar2 + 0x38) = 1;
  return *(int *)(*(int *)(param_1 + 0x10) + 0xc) - iVar1;
}

// 01243D50  FUN_01243d50  size=531  [run]
void __thiscall FUN_01243d50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_a0 [96];
  undefined1 local_40 [20];
  int local_2c [4];
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar1 = param_2 + 0x38;
  if (*(char *)(param_2 + 0x38) == '\0') {
    local_2c[2] = param_1;
    if (*(char *)(param_2 + 4) != '\0') {
      FUN_01245140();
      FUN_012431f0(param_2,param_4);
      return;
    }
    if (*(char *)(param_2 + 0x3a) == '\x01') {
      FUN_01242f00(param_3,param_4,local_40);
    }
    FUN_01245140();
    local_18 = FUN_01242da0(*(undefined4 *)(param_2 + 0x60));
    FUN_012438b0(param_2,param_4,&local_14,&param_3);
    local_14 = *(int *)(param_2 + 0x74);
    local_2c[0] = *(int *)(param_2 + 0x74);
    local_2c[1] = *(undefined4 *)(param_2 + 0x70);
    puVar3 = (undefined4 *)(param_2 + 0x50);
    iVar5 = 3;
    do {
      puVar3[-3] = 0;
      *puVar3 = 0x7fffffff;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_10 = 0;
    do {
      iVar5 = local_2c[local_10];
      param_3 = iVar5 + 0x38;
      if (iVar5 != 0) {
        FUN_01245910(param_4,iVar5,param_1 + 0x30);
        FUN_01243d50(iVar5,param_4,local_a0);
        if (iVar5 == local_14) {
          if (local_18 < 3) {
            *(undefined4 *)(iVar5 + 0x44 + local_18 * 4) = 0;
          }
        }
        else if (local_18 < 3) {
          *(undefined4 *)(iVar5 + 0x50 + local_18 * 4) = 0x7fffffff;
        }
        local_c = (int *)(param_4 + 0x10);
        local_8 = (int *)(param_4 + 0x54);
        local_1c = (int *)(param_2 + 0x50);
        iVar5 = 0;
        piVar7 = (int *)(param_3 + 0xc);
        local_2c[3] = iVar1 - param_3;
        do {
          cVar2 = *(char *)(param_3 + 3 + iVar5);
          if (cVar2 == '\x01') {
            if ((*piVar7 <= local_8[-3]) && (*local_8 <= piVar7[3])) {
              cVar2 = *(char *)(iVar5 + 3 + iVar1);
              cVar4 = '\x01';
              if ('\0' < cVar2) {
                cVar4 = cVar2;
              }
              *(char *)(iVar5 + 3 + iVar1) = cVar4;
              *(undefined1 *)(param_3 + 3 + iVar5) = 0;
            }
          }
          else if (((cVar2 == '\x02') && (*piVar7 <= local_c[-1])) && (*local_c <= piVar7[3])) {
            *(undefined1 *)(iVar5 + 3 + iVar1) = 2;
            *(undefined1 *)(param_3 + 3 + iVar5) = 0;
          }
          if (*(char *)(param_3 + 3 + iVar5) == '\0') {
            iVar6 = *piVar7;
            if (*piVar7 < *(int *)(local_2c[3] + (int)piVar7)) {
              iVar6 = *(int *)(local_2c[3] + (int)piVar7);
            }
            *(int *)(local_2c[3] + (int)piVar7) = iVar6;
            iVar6 = piVar7[3];
            if (*local_1c < piVar7[3]) {
              iVar6 = *local_1c;
            }
            *local_1c = iVar6;
          }
          local_8 = local_8 + 1;
          local_c = local_c + 2;
          iVar5 = iVar5 + 1;
          local_1c = local_1c + 1;
          piVar7 = piVar7 + 1;
          param_1 = local_2c[2];
        } while (iVar5 < 3);
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
  }
  return;
}

// 01243F80  FUN_01243f80  size=461  [run]
int __thiscall FUN_01243f80(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_68 [18];
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_c;
  int local_8;
  
  piVar5 = param_4;
  iVar2 = param_2;
  if (*(char *)(param_2 + 0x38) != '\0') {
    return 3;
  }
  if (((*(int *)(param_1 + 0x18) < *param_4) || (*param_4 % *(int *)(param_1 + 0x70) != 0)) ||
     ((char)param_4[1] != '\0')) {
    if (*(char *)(param_2 + 4) == '\0') {
      local_20[0] = 0;
      local_1c = 0xffffffff;
      FUN_012432c0(param_2,param_3,param_4,local_20);
      param_4 = *(int **)(param_2 + 0x74);
      param_2 = -1;
      if (param_4 != (int *)0x0) {
        FUN_01245910(piVar5,param_4,param_1 + 0x30);
        param_2 = FUN_01243f80(param_4,piVar5,local_68);
        if (-1 < param_2) {
          FUN_012428d0(param_4);
        }
      }
      param_4 = *(int **)(iVar2 + 0x70);
      if (param_4 != (int *)0x0) {
        FUN_01245910(piVar5,param_4,param_1 + 0x30);
        local_c = FUN_01243f80(param_4,piVar5,local_68);
        if (((-1 < local_c) && (FUN_012428d0(param_4), -1 < param_2)) &&
           (pcVar3 = (char *)FUN_01242920((int)&param_4 + 3,iVar2,piVar5), *pcVar3 != '\0')) {
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          iVar2 = FUN_01243ca0(iVar2,param_3,piVar5,local_20);
          return iVar2 + local_c + param_2;
        }
      }
    }
    else {
      FUN_01242950(param_2);
      pcVar3 = (char *)FUN_01242920((int)&param_4 + 3,param_2,piVar5);
      if (*pcVar3 != '\0') {
        iVar2 = FUN_01243810(param_2,param_3,piVar5);
        return iVar2;
      }
    }
    return -1;
  }
  *(undefined1 *)(param_4 + 1) = 1;
  local_c = *(undefined4 *)(param_1 + 0x18);
  iVar2 = -1;
  cVar1 = *(char *)(param_2 + 0x38);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    piVar5 = param_4;
    piVar6 = local_68;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    local_8 = iVar2;
    iVar2 = FUN_01243f80(param_2,param_3,local_68);
    if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x28)) break;
    if (local_8 == *(int *)(*(int *)(param_1 + 0x10) + 0xc)) {
      if (*(int *)(param_1 + 0x18) < 0) break;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x70);
    }
    cVar1 = *(char *)(param_2 + 0x38);
  }
  *(int *)(param_1 + 0x18) = local_c;
  *(undefined1 *)(param_4 + 1) = 0;
  return iVar2;
}

// 01244150  FUN_01244150  size=219  [run]
uint __thiscall FUN_01244150(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_2 + 0x38) = 0;
  uVar4 = param_4;
  if (-1 < *(int *)(param_2 + 0x40)) {
    uVar4 = 0;
    param_3 = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
    *(uint *)(param_2 + 0x24) = uVar4;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    uVar3 = FUN_01244150(*(undefined4 *)(param_2 + 0x74),param_3,uVar4);
    uVar4 = FUN_01244150(*(undefined4 *)(param_2 + 0x70),param_3,uVar3);
  }
  else if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
    (*(undefined4 **)(param_2 + 0x60))[4] = **(undefined4 **)(param_2 + 0x60);
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(uint *)(iVar2 + 8) == (*(uint *)(iVar2 + 0xc) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 4),8);
    }
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    puVar1[1] = param_3 << 8 | uVar4;
    *puVar1 = **(undefined4 **)(param_2 + 0x60);
    **(uint **)(param_2 + 0x60) = uVar4;
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(uint *)(param_2 + 0x28) = uVar4;
  }
  if (-1 < *(int *)(param_2 + 0x40)) {
    uVar4 = param_4;
  }
  return uVar4;
}

// 01244230  FUN_01244230  size=89  [run]
void FUN_01244230(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      if (unaff_EDI[1] == (unaff_EDI[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94);
      }
      piVar2 = (int *)(*unaff_EDI + unaff_EDI[1] * 8);
      unaff_EDI[1] = unaff_EDI[1] + 1;
      piVar2[1] = *(int *)(*param_1 + 4 + iVar3 * 8);
      iVar1 = iVar3 * 8;
      iVar3 = iVar3 + 1;
      *piVar2 = *(int *)(*param_1 + iVar1) + param_2;
    } while (iVar3 < param_1[1]);
  }
  return;
}

// 01244290  FUN_01244290  size=334  [run]
int FUN_01244290(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  int unaff_ESI;
  uint uVar4;
  int local_8;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x1c) == 0) {
    param_3[1] = 0;
  }
  if (param_3[1] != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*param_3,param_3[1]);
    FUN_012454b0(iVar2);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    local_8 = *(int *)((int)pvVar3 + 0xc);
    uVar4 = iVar2 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
       (*(uint *)((int)pvVar3 + 0x10) < local_8 + uVar4)) {
      local_8 = FUN_0100b780(uVar4);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = local_8 + uVar4;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*param_3,param_3[1],local_8);
    FUN_01015e80((*(int *)(unaff_ESI + 0x10) - *(int *)(unaff_ESI + 0xc)) + *(int *)(unaff_ESI + 8),
                 local_8,iVar2);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
        (uVar4 + local_8 != *(int *)((int)pvVar3 + 0xc))) ||
       (*(int *)((int)pvVar3 + 0x14) == local_8)) {
      FUN_0100b9b0(local_8,uVar4);
    }
    else {
      *(int *)((int)pvVar3 + 0xc) = local_8;
    }
  }
  iVar2 = *(int *)(unaff_ESI + 0xc);
  FUN_012454b0(*(int *)(param_2 + 0xc) + (-iVar1 & 3U));
  FUN_01015e80((*(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 8)) - *(int *)(unaff_ESI + 0xc),
               (*(int *)(param_2 + 0x10) + *(int *)(param_2 + 8)) - *(int *)(param_2 + 0xc),
               *(int *)(param_2 + 0xc));
  FUN_01242300();
  FUN_01244230(param_2 + 0x14,*(int *)(unaff_ESI + 0xc) - *(int *)(param_2 + 0xc));
  FUN_01242300();
  return *(int *)(unaff_ESI + 0xc) - iVar2;
}

// 012443E0  FUN_012443e0  size=126  [run]
int __thiscall FUN_012443e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  FUN_01242a60(*(undefined4 *)(param_2 + 0x40));
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  *(int *)(param_2 + 0x5c) = iVar3;
  *(undefined1 *)(param_2 + 0x38) = 1;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(uint *)(iVar4 + 0x18) == (*(uint *)(iVar4 + 0x1c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar4 + 0x14),8);
  }
  piVar1 = (int *)(*(int *)(iVar4 + 0x14) + *(int *)(iVar4 + 0x18) * 8);
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  piVar1[1] = *(int *)(param_2 + 0x40);
  *piVar1 = iVar3;
  FUN_01242300();
  return iVar3 - iVar2;
}

// 01244460  FUN_01244460  size=1120  [run]
int __thiscall FUN_01244460(int param_1,int param_2,uint param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_a4 [72];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = (int)param_4;
  uVar2 = param_3;
  iVar3 = param_2;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
    *(undefined4 *)((int)param_4 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  }
  if (*(char *)(param_2 + 4) == '\0') {
    local_5c[0] = 0;
    local_58 = 0xffffffff;
    FUN_012432c0(param_2,param_3,param_4,local_5c);
    *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(param_3 + 0x34);
    local_28 = 0;
    local_24 = 0;
    param_4 = *(undefined4 **)(iVar3 + 0x74);
    local_20 = 0x80000000;
    FUN_01245910(iVar6,param_4,param_1 + 0x30);
    local_c = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    FUN_01244460(param_4,iVar6,local_a4,&local_28);
    local_38 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) - local_c;
    local_c = local_38;
    if ((*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) && (local_24 != 0)) {
      local_38 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 4))(local_28,local_24);
      local_38 = local_38 + local_c;
    }
    local_1c = 0;
    local_18 = 0;
    param_4 = *(undefined4 **)(iVar3 + 0x70);
    local_14 = 0x80000000;
    FUN_01245910(iVar6,param_4,param_1 + 0x30);
    local_10 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    FUN_01244460(param_4,iVar6,local_a4,&local_1c);
    local_40 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) - local_10;
    local_10 = local_40;
    if ((*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) && (local_18 != 0)) {
      local_40 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 4))(local_1c,local_18);
      local_40 = local_40 + local_10;
    }
    param_2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    FUN_01243ca0(iVar3,param_3,iVar6,local_5c);
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) - param_2;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    param_2 = iVar6;
    FUN_011d8900(&PTR_vftable_018e9b94,0,local_28,local_24);
    FUN_011d8900(&PTR_vftable_018e9b94,local_30,local_1c,local_18);
    iVar6 = iVar6 + local_10 + local_c;
    if ((*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) && (local_30 != 0)) {
      iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 4))(local_34,local_30);
      iVar6 = iVar6 + iVar4;
    }
    param_4 = (undefined4 *)((uint)param_4 & 0xffffff);
    param_3 = param_3 & 0xffffff;
    if (**(int **)(param_1 + 0x14) - (*(int **)(param_1 + 0x14))[8] <= iVar6) {
      do {
        iVar6 = *(int *)(param_1 + 0x14);
        local_48 = *(undefined4 *)(iVar6 + 0x14);
        if (*(uint *)(iVar6 + 0x14) == (*(uint *)(iVar6 + 0x18) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar6 + 0x10),8);
        }
        local_44 = *(int *)(iVar6 + 0x10) + *(int *)(iVar6 + 0x14) * 8;
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
        if (local_38 < local_40) {
          iVar4 = *(int *)(iVar3 + 0x70);
          local_3c = local_40;
          local_40 = 5;
          param_4 = (undefined4 *)CONCAT13(1,param_4._0_3_);
          iVar5 = local_10;
          if (param_3._3_1_ == '\0') {
            iVar6 = param_2 + 5 + local_38;
          }
          else {
            iVar6 = param_2 + 10;
          }
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x74);
          local_3c = local_38;
          local_38 = 5;
          param_3 = CONCAT13(1,(undefined3)param_3);
          iVar5 = local_c;
          if (param_4._3_1_ == '\0') {
            iVar6 = param_2 + 5 + local_40;
          }
          else {
            iVar6 = param_2 + 10;
          }
        }
        *(int *)(local_44 + 4) = *(int *)(*(int *)(param_1 + 0x14) + 0x20) + 5 + local_3c;
        *(undefined4 *)(iVar4 + 0x40) = local_48;
        piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
        *piVar1 = *piVar1 + (5 - iVar5);
        if (param_3._3_1_ != '\0') {
          piVar1 = (int *)(*(int *)(iVar3 + 0x74) + 0x5c);
          *piVar1 = *piVar1 + (5 - iVar5);
        }
        piVar1 = (int *)(*(int *)(iVar3 + 0x70) + 0x5c);
        *piVar1 = *piVar1 + (5 - iVar5);
        *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + (5 - iVar5);
        local_8 = iVar6;
      } while (**(int **)(param_1 + 0x14) - (*(int **)(param_1 + 0x14))[8] <= iVar6);
    }
    piVar1 = param_5;
    param_5[1] = 0;
    if (param_3._3_1_ == '\0') {
      FUN_011d8900(&PTR_vftable_018e9b94,0,local_28,local_24);
    }
    if (param_4._3_1_ == '\0') {
      FUN_011d8900(&PTR_vftable_018e9b94,piVar1[1],local_1c,local_18);
    }
    local_30 = 0;
    if ((local_2c & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c * 4);
    }
    local_34 = 0;
    local_18 = 0;
    local_2c = 0x80000000;
    if ((local_14 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
    }
    local_1c = 0;
    local_24 = 0;
    local_14 = 0x80000000;
    if ((local_20 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
    }
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
      *(undefined4 *)((int)param_4 + 0x34) = **(undefined4 **)(param_2 + 0x60);
    }
    param_3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    FUN_01243810(param_2,uVar2,param_4);
    piVar1 = param_5;
    param_3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) - param_3;
    param_4 = *(undefined4 **)(iVar3 + 0x60);
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,4);
    }
    *(undefined4 *)(*piVar1 + piVar1[1] * 4) = *param_4;
    piVar1[1] = piVar1[1] + 1;
    param_2 = **(undefined4 **)(iVar3 + 0x60);
    iVar6 = param_3;
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x1c) + 4))(&param_2,1);
      return iVar3 + param_3;
    }
  }
  return iVar6;
}

// 012448C0  FUN_012448c0  size=535  [run]
void __thiscall
FUN_012448c0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined1 local_80 [72];
  undefined1 local_38 [32];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar4 = *(int *)(param_2 + 0x40);
  if ((0 < iVar4) && (*(char *)(param_4 + 4) == '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    puVar1 = (undefined4 *)(iVar3 + iVar4 * 8);
    hkpMoppCodeGenerator::hkpMoppCodeGenerator(*(undefined4 *)(iVar3 + 4 + iVar4 * 8));
    *(undefined1 **)(param_1 + 0x10) = local_38;
    local_10 = 0;
    local_c = 0;
    *(undefined1 *)(param_4 + 4) = 1;
    local_8 = -0x80000000;
    FUN_012448c0(param_2,param_3,param_4,iVar4,&local_10);
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) + 5;
      FUN_01242a80((-iVar4 & 3U) + iVar4,local_c);
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar4 + 4) = 0x20;
    uVar6 = hkpMoppCodeGenerator::hkpMoppCodeGenerator(puVar1[1]);
    *puVar1 = uVar6;
    FUN_01244290(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),&local_10);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0;
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
    }
    local_10 = 0;
    local_8 = 0x80000000;
    hkBaseObject::hkBaseObject_214();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    FUN_012443e0(param_2);
    return;
  }
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_01243810(param_2,param_3,param_4);
    iVar4 = *(int *)(param_2 + 0x60);
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_6,4);
    }
    *(undefined4 *)(*param_6 + param_6[1] * 4) = *(undefined4 *)(iVar4 + 0x10);
    param_6[1] = param_6[1] + 1;
    return;
  }
  local_18[0] = 0;
  local_14 = 0xffffffff;
  FUN_012432c0(param_2,param_3,param_4,local_18);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  FUN_01245910(param_4,uVar2,param_1 + 0x30);
  FUN_012448c0(uVar2,param_4,local_80,param_5,param_6);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  FUN_01245910(param_4,uVar2,param_1 + 0x30);
  FUN_012448c0(uVar2,param_4,local_80,param_5,param_6);
  FUN_01243ca0(param_2,param_3,param_4,local_18);
  return;
}

// 01244AE0  hkpMoppDefaultAssembler::vf14  size=664  [run]
void __thiscall hkpMoppDefaultAssembler::vf14(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_180 [96];
  undefined1 local_120 [72];
  undefined1 local_d8 [24];
  undefined1 local_c0 [72];
  undefined1 local_78 [72];
  undefined1 local_30 [32];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  param_1[3] = param_3;
  param_1[10] = 0;
  param_1[9] = param_4;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x18))(param_2,param_1 + 0xc);
    param_1[6] = 0;
    uVar2 = *(uint *)(param_2 + 0x28);
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        uVar2 = uVar2 >> 1;
        iVar4 = iVar4 + 1;
      } while (uVar2 != 0);
      param_1[6] = iVar4;
    }
    param_1[7] = param_1[6] >> 1;
    piVar1 = param_1 + 0xc;
    param_1[6] = (param_1[6] / param_1[0x1c] + 2) * param_1[0x1c] + -1;
    FUN_01245990(param_2,piVar1);
    FUN_01245910(local_78,param_2,piVar1);
    FUN_01242ff0(param_2,local_78,local_c0);
    FUN_01245990(param_2,piVar1);
    FUN_01245910(local_d8,param_2,piVar1);
    FUN_01243d50(param_2,local_d8,local_180);
    FUN_01245910(local_78,param_2,piVar1);
    if (param_1[5] == 0) {
      FUN_01243f80(param_2,local_78,local_120);
      return;
    }
    *(undefined4 *)(param_2 + 0x40) = 0;
    iVar4 = param_1[5];
    if (*(uint *)(iVar4 + 0x14) == (*(uint *)(iVar4 + 0x18) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,iVar4 + 0x10,8);
    }
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    iVar4 = param_1[4];
    FUN_01245910(local_78,param_2,param_1 + 0xc);
    local_10 = 0;
    local_c = 0;
    local_8 = -0x80000000;
    hkpMoppCodeGenerator::hkpMoppCodeGenerator(0x100000);
    param_1[4] = (int)local_30;
    FUN_01244460(param_2,local_78,local_c0,&local_10);
    FUN_01244150(param_2,*(undefined4 *)(param_2 + 0x40),0);
    hkBaseObject::hkBaseObject_214();
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
    }
    local_10 = 0;
    local_c = 0;
    local_8 = -0x80000000;
    hkpMoppCodeGenerator::hkpMoppCodeGenerator(0x100000);
    param_1[4] = (int)local_30;
    FUN_012448c0(param_2,local_78,local_120,*(undefined4 *)(param_2 + 0x40),&local_10);
    if (*(int *)(param_1[5] + 0x1c) != 0) {
      iVar3 = *(int *)(param_1[4] + 0xc) + 5;
      FUN_01242a80((-iVar3 & 3U) + iVar3,local_c);
    }
    param_1[4] = iVar4;
    FUN_01244290(param_1[5],local_30,&local_10);
    piVar1 = (int *)(*(int *)(param_1[5] + 0x10) + *(int *)(param_2 + 0x40) * 8);
    *piVar1 = param_1[4];
    FUN_01006000();
    piVar1[1] = *(int *)(param_1[4] + 0xc);
    hkBaseObject::hkBaseObject_214();
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
    }
  }
  return;
}

// 01244D80  hkpMoppDefaultAssembler::hkpMoppDefaultAssembler  size=701  [run]
undefined4 * __thiscall
hkpMoppDefaultAssembler::hkpMoppDefaultAssembler
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  int local_8;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  local_8 = 0x1a0;
  uVar7 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_8);
  iVar8 = (int)(local_8 + (local_8 >> 0x1f & 0x1fU)) >> 5;
  if (iVar8 == 0) {
    iVar8 = -0x80000000;
  }
  param_1[0x10] = uVar7;
  param_1[0x11] = 0xd;
  param_1[0x12] = iVar8;
  param_1[0x1c] = 5;
  param_1[0x14] = 0x3f000000;
  param_1[0x15] = 0x3e4ccccd;
  param_1[0x16] = 0x3f800000;
  param_1[0x18] = 0x3e4ccccd;
  param_1[0x19] = 0x3e4ccccd;
  param_1[0x1a] = 0x3d4ccccd;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  puVar2 = (undefined4 *)param_1[0x10];
  *puVar2 = 0x3f800000;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x24) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x40) = 0;
  *(undefined4 *)(iVar8 + 0x44) = 0;
  *(undefined4 *)(iVar8 + 0x48) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(undefined4 *)(param_1[0x10] + 0x10) = 0;
  *(undefined4 *)(param_1[0x10] + 0x30) = 0;
  *(undefined4 *)(param_1[0x10] + 0x50) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x60) = 0;
  *(undefined4 *)(iVar8 + 100) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x6c) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x80) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x84) = 0;
  *(undefined4 *)(iVar8 + 0x88) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x8c) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0xa0) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0xa4) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0xa8) = 0;
  *(undefined4 *)(iVar8 + 0xac) = 0;
  *(undefined4 *)(param_1[0x10] + 0x70) = 0x3e4ccccd;
  *(undefined4 *)(param_1[0x10] + 0x90) = 0x3e4ccccd;
  *(undefined4 *)(param_1[0x10] + 0xb0) = 0x3e4ccccd;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0xc0) = 0;
  *(undefined4 *)(iVar8 + 0xc4) = 0x3f800000;
  *(undefined4 *)(iVar8 + 200) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0xcc) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0xe0) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0xe4) = 0;
  *(undefined4 *)(iVar8 + 0xe8) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0xec) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x100) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x104) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0x108) = 0;
  *(undefined4 *)(iVar8 + 0x10c) = 0;
  *(undefined4 *)(param_1[0x10] + 0xd0) = 0x3e800000;
  *(undefined4 *)(param_1[0x10] + 0xf0) = 0x3e800000;
  *(undefined4 *)(param_1[0x10] + 0x110) = 0x3e800000;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x120) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x124) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x128) = 0x3f800000;
  *(undefined4 *)(iVar8 + 300) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x140) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x144) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x148) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0x14c) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x160) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x164) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0x168) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x16c) = 0;
  iVar8 = param_1[0x10];
  *(undefined4 *)(iVar8 + 0x180) = 0x3f800000;
  *(undefined4 *)(iVar8 + 0x184) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0x188) = 0xbf800000;
  *(undefined4 *)(iVar8 + 0x18c) = 0;
  *(undefined4 *)(param_1[0x10] + 0x130) = 0x3e99999a;
  *(undefined4 *)(param_1[0x10] + 0x150) = 0x3ea3d70a;
  *(undefined4 *)(param_1[0x10] + 0x170) = 0x3ea3d70a;
  *(undefined4 *)(param_1[0x10] + 400) = 0x3eae147b;
  iVar9 = 0;
  iVar8 = 0;
  do {
    pfVar1 = (float *)(param_1[0x10] + iVar8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
    fVar6 = pfVar1[3];
    fVar10 = fVar3 * fVar3;
    fVar11 = fVar4 * fVar4;
    fVar12 = fVar5 * fVar5;
    auVar16._4_4_ = fVar10;
    auVar16._0_4_ = fVar10;
    auVar16._8_4_ = fVar10;
    auVar16._12_4_ = fVar10;
    fVar13 = fVar11 + fVar10 + fVar12;
    fVar14 = fVar11 + fVar10 + fVar12;
    fVar15 = fVar11 + fVar10 + fVar12;
    fVar12 = fVar11 + fVar10 + fVar12;
    auVar17._4_4_ = fVar14;
    auVar17._0_4_ = fVar13;
    auVar17._8_4_ = fVar15;
    auVar17._12_4_ = fVar12;
    auVar17 = rsqrtps(auVar16,auVar17);
    fVar10 = auVar17._0_4_;
    fVar11 = auVar17._4_4_;
    fVar18 = auVar17._8_4_;
    fVar19 = auVar17._12_4_;
    pfVar1 = (float *)(param_1[0x10] + iVar8);
    *pfVar1 = (float)(~-(uint)(fVar13 <= 0.0) &
                     (uint)((3.0 - fVar10 * fVar13 * fVar10) * fVar10 * 0.5)) * fVar3;
    pfVar1[1] = (float)(~-(uint)(fVar14 <= 0.0) &
                       (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) * fVar4;
    pfVar1[2] = (float)(~-(uint)(fVar15 <= 0.0) &
                       (uint)((3.0 - fVar18 * fVar15 * fVar18) * fVar18 * 0.5)) * fVar5;
    pfVar1[3] = (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar19 * fVar12 * fVar19) * fVar19 * 0.5)) * fVar6;
    *(int *)(iVar8 + 0x14 + param_1[0x10]) = iVar9;
    iVar8 = iVar8 + 0x20;
    iVar9 = iVar9 + 1;
  } while (iVar8 < 0x1a0);
  FUN_01243870(param_2);
  param_1[2] = param_4;
  param_1[4] = param_3;
  param_1[3] = 0;
  return param_1;
}

// 01245040  hkBaseObject::hkBaseObject_241  size=74  [run]
void __fastcall hkBaseObject::hkBaseObject_241(undefined4 *param_1)

{
  *param_1 = hkpMoppDefaultAssembler::vftable;
  param_1[0x11] = 0;
  if (-1 < (int)param_1[0x12]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],param_1[0x12] << 5);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 012450D0  FUN_012450d0  size=66  [run]
void __thiscall FUN_012450d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2c);
  if (0 < *(int *)(param_2 + 0x2c)) {
    piVar2 = (int *)(param_1 + 0x44);
    piVar1 = (int *)(param_2 + 0x30);
    do {
      piVar2[-1] = *piVar1;
      iVar3 = iVar3 + 1;
      *piVar2 = piVar1[1] - *piVar1;
      piVar1 = piVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x2c));
  }
  return;
}

// 01245120  FUN_01245120  size=25  [run]
int FUN_01245120(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 01245140  FUN_01245140  size=77  [run]
void __fastcall FUN_01245140(int param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x10) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0xc) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x4c) = (*(int *)(param_1 + 0x14) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  *(int *)(param_1 + 0x58) = (*(int *)(param_1 + 0x18) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x1c) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x20) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  return;
}

// 01245190  FUN_01245190  size=41  [run]
void __thiscall FUN_01245190(int param_1,undefined1 param_2)

{
  *(undefined1 *)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 8))
       = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 012451C0  FUN_012451c0  size=44  [run]
void __thiscall FUN_012451c0(int param_1,char param_2,char param_3)

{
  *(char *)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 8)) =
       param_2 + param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 012451F0  FUN_012451f0  size=79  [run]
void __thiscall FUN_012451f0(int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10))
       = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(undefined1 *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10))
       = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 01245240  FUN_01245240  size=115  [run]
void __thiscall FUN_01245240(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(undefined1 *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10))
       = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 012452C0  FUN_012452c0  size=158  [run]
void __thiscall FUN_012452c0(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 0x10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(undefined1 *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10))
       = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 01245360  FUN_01245360  size=117  [run]
void __thiscall FUN_01245360(int param_1,undefined4 param_2)

{
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_2 >> 0x10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 012453E0  FUN_012453e0  size=194  [run]
void __thiscall FUN_012453e0(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 0x10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(char *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10)) =
       (char)((uint)param_3 >> 0x18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  *(undefined1 *)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 0x10))
       = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    FUN_01242310();
  }
  return;
}

// 012454B0  FUN_012454b0  size=65  [run]
void __thiscall FUN_012454b0(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      *(undefined1 *)
       ((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) + -1 + *(int *)(param_1 + 8)) = 0xcd;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
        FUN_01242310();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01245500  FUN_01245500  size=13  [run]
void __thiscall FUN_01245500(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_2;
  return;
}

// 01245510  FUN_01245510  size=26  [run]
void FUN_01245510(int param_1,int param_2)

{
  if (param_2 < 3) {
    *(undefined4 *)(param_1 + 0x50 + param_2 * 4) = 0x7fffffff;
  }
  return;
}

// 01245530  FUN_01245530  size=26  [run]
void FUN_01245530(int param_1,int param_2)

{
  if (param_2 < 3) {
    *(undefined4 *)(param_1 + 0x44 + param_2 * 4) = 0;
  }
  return;
}

// 01245550  FUN_01245550  size=12  [run]
void __thiscall FUN_01245550(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01245560  FUN_01245560  size=20  [run]
void __thiscall FUN_01245560(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01245590  FUN_01245590  size=12  [run]
void __thiscall FUN_01245590(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 012455A0  FUN_012455a0  size=20  [run]
void __thiscall FUN_012455a0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 012455C0  FUN_012455c0  size=15  [run]
int __thiscall FUN_012455c0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01245620  FUN_01245620  size=24  [run]
void __thiscall
FUN_01245620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01245640  FUN_01245640  size=49  [run]
undefined4 __thiscall FUN_01245640(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 5);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5;
  return uVar2;
}

// 012456B0  FUN_012456b0  size=25  [run]
void __thiscall FUN_012456b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 012456E0  FUN_012456e0  size=17  [run]
void __thiscall FUN_012456e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 01245700  FUN_01245700  size=38  [run]
void FUN_01245700(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01245730  hkpMoppAssembler::vf00  size=53  [run]
undefined4 * __thiscall hkpMoppAssembler::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01245770  FUN_01245770  size=261  [run]
void __thiscall FUN_01245770(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_8;
  
  iVar1 = (int)param_3;
  param_3 = (float *)(param_2 + 0x10);
  iVar5 = 0;
  local_8 = 0;
  piVar4 = (int *)(param_1 + 0xc);
  do {
    fVar7 = (*(float *)((param_2 - param_1) + (int)piVar4) - *(float *)(iVar1 + iVar5 * 4)) *
            *(float *)(iVar1 + 0xc);
    fVar6 = ((fVar7 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    iVar3 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar7)) &
                         (uint)((float)(int)-(uint)(fVar7 < fVar6) + fVar6) |
                        -(uint)(8388608.0 < ABS(fVar7)) & (uint)fVar7);
    *piVar4 = iVar3;
    fVar7 = (*param_3 - *(float *)(iVar1 + iVar5 * 4)) * *(float *)(iVar1 + 0xc);
    fVar6 = ((fVar7 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    iVar2 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar7)) &
                         (uint)((float)(int)-(uint)(fVar7 < fVar6) + fVar6) |
                        -(uint)(8388608.0 < ABS(fVar7)) & (uint)fVar7) + 1;
    piVar4[1] = iVar2;
    iVar2 = iVar2 - iVar3;
    if (local_8 <= iVar2) {
      local_8 = iVar2;
    }
    param_3 = param_3 + 2;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar5 < 3);
  return;
}

// 012458A0  FUN_012458a0  size=108  [run]
void __fastcall FUN_012458a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if ((int)uVar5 <= (int)uVar1) {
    uVar5 = uVar1;
  }
  uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  if ((int)uVar5 <= (int)uVar1) {
    uVar5 = uVar1;
  }
  bVar3 = 0;
  for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 >> 1) {
    bVar3 = bVar3 + 1;
  }
  iVar6 = -1;
  uVar1 = 1 << (bVar3 & 0x1f) | 1U >> 0x20 - (bVar3 & 0x1f);
  iVar7 = 3;
  do {
    iVar4 = 0;
    for (uVar2 = uVar5 + (uVar1 >> 4 | uVar1 << 0x1c); uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar4 = iVar4 + 1;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (iVar6 < 0x19) {
    *(int *)(param_1 + 8) = iVar6;
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0x18;
  return;
}

// 01245910  FUN_01245910  size=115  [run]
int * __thiscall FUN_01245910(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_2;
  piVar1 = param_1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar1 = piVar1 + 1;
  }
  iVar2 = 0;
  param_1[0xe] = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x24);
  param_1[0xf] = *(int *)(param_3 + 0x2c);
  if (0 < *(int *)(param_3 + 0x2c)) {
    piVar3 = param_1 + 0x11;
    piVar1 = (int *)(param_3 + 0x30);
    do {
      piVar3[-1] = *piVar1;
      iVar2 = iVar2 + 1;
      *piVar3 = piVar1[1] - *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_3 + 0x2c));
  }
  FUN_01245770(param_3,param_4);
  *param_1 = *param_2 + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_012458a0();
  return param_1;
}

// 01245990  FUN_01245990  size=120  [run]
undefined4 * __thiscall FUN_01245990(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01245770(param_2,param_3);
  iVar3 = 0;
  param_1[9] = 0x10;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *param_1 = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0xe] = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x2c);
  if (0 < *(int *)(param_2 + 0x2c)) {
    piVar2 = param_1 + 0x11;
    piVar1 = (int *)(param_2 + 0x30);
    do {
      piVar2[-1] = *piVar1;
      iVar3 = iVar3 + 1;
      *piVar2 = piVar1[1] - *piVar1;
      piVar1 = piVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x2c));
  }
  FUN_012458a0();
  return param_1;
}

// 01245A10  FUN_01245a10  size=32  [run]
undefined4 __thiscall
FUN_01245a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01245910(param_2,param_3,param_4);
  return param_1;
}

// 01245A30  FUN_01245a30  size=28  [run]
undefined4 __thiscall FUN_01245a30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01245990(param_2,param_3);
  return param_1;
}

// 01245A50  FUN_01245a50  size=37  [run]
void FUN_01245a50(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01245A80  FUN_01245a80  size=38  [run]
void FUN_01245a80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01242ed0(param_3,param_4);
  if (2 < iVar1) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 01245AB0  FUN_01245ab0  size=51  [run]
int __thiscall FUN_01245ab0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245AF0  FUN_01245af0  size=51  [run]
int __thiscall FUN_01245af0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245B30  FUN_01245b30  size=105  [run]
undefined4 * __thiscall FUN_01245b30(undefined4 *param_1,int param_2)

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
    param_2 = param_2 << 5;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
    if (iVar3 != 0) goto LAB_01245b85;
  }
  iVar3 = -0x80000000;
LAB_01245b85:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01245BA0  FUN_01245ba0  size=51  [run]
int __thiscall FUN_01245ba0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245BF0  FUN_01245bf0  size=46  [run]
int __fastcall FUN_01245bf0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245C20  FUN_01245c20  size=46  [run]
int __fastcall FUN_01245c20(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245C50  FUN_01245c50  size=46  [run]
int __fastcall FUN_01245c50(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01245C80  FUN_01245c80  size=60  [run]
void __thiscall FUN_01245c80(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01245CC0  FUN_01245cc0  size=60  [run]
void __fastcall FUN_01245cc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01245D00  FUN_01245d00  size=60  [run]
void __fastcall FUN_01245d00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01245D40  hkpMoppDefaultAssembler::vf0C  size=6  [run]
undefined4 hkpMoppDefaultAssembler::vf0C(void)

{
  return 0xd;
}

// 01245D50  FUN_01245d50  size=15  [run]
int __thiscall FUN_01245d50(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01245D60  FUN_01245d60  size=38  [run]
void FUN_01245d60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01245D90  hkpMoppDefaultAssembler::vf10  size=4  [run]
undefined4 __fastcall hkpMoppDefaultAssembler::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 01245DA0  hkpMoppDefaultAssembler::vf00  size=52  [run]
int __thiscall hkpMoppDefaultAssembler::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_241();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01245DE0  FUN_01245de0  size=36  [run]
void __thiscall FUN_01245de0(int param_1,undefined1 *param_2,int param_3)

{
  if (*(float *)(param_1 + 8) <= *(float *)(param_3 + 8) &&
      *(float *)(param_3 + 8) != *(float *)(param_1 + 8)) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01245E10  FUN_01245e10  size=25  [run]
float10 __thiscall FUN_01245e10(int param_1,int param_2)

{
  return (float10)*(int *)(param_2 + 0x30) * (float10)*(float *)(param_2 + 0x1c) * (float10)5.0 *
         (float10)*(float *)(param_1 + 8);
}

// 01245E30  FUN_01245e30  size=16  [run]
float10 FUN_01245e30(int param_1)

{
  return (float10)*(float *)(*(int *)(param_1 + 0x24) + 0x10);
}

// 01245E40  FUN_01245e40  size=22  [run]
float10 __thiscall FUN_01245e40(int param_1,int param_2)

{
  return ((float10)*(float *)(param_2 + 0x38) - (float10)*(float *)(param_2 + 0x20)) *
         (float10)*(float *)(param_2 + 0x10) * (float10)*(float *)(param_1 + 0xc);
}

// 01245E60  FUN_01245e60  size=36  [run]
float10 __thiscall FUN_01245e60(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28) < 0x10) {
    return (float10)*(float *)(param_1 + 0x18) * (float10)-0.03;
  }
  return (float10)0;
}

// 01245EC0  FUN_01245ec0  size=14  [run]
int FUN_01245ec0(float param_1)

{
  return (int)param_1;
}

// 01245ED0  FUN_01245ed0  size=14  [run]
int FUN_01245ed0(float param_1)

{
  return (int)param_1;
}

// 01245F20  FUN_01245f20  size=425  [run]
void __thiscall FUN_01245f20(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_10 [3];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_2 + 0x60);
    local_10[0] = *(float *)(param_2 + 0x10) - *(float *)(param_2 + 0xc);
    if (iVar2 == iVar1) {
      local_10[0] = local_10[0] * 0.66;
    }
    fVar8 = 0.0;
    if (0.0 < local_10[0]) {
      fVar8 = local_10[0];
    }
    local_10[1] = *(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x14);
    if (iVar2 == iVar1 + 0x20) {
      local_10[1] = local_10[1] * 0.66;
    }
    fVar6 = fVar8;
    if (fVar8 < local_10[1]) {
      fVar6 = local_10[1];
    }
    uVar5 = (uint)(fVar8 < local_10[1]);
    local_10[2] = *(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x1c);
    if (iVar2 == iVar1 + 0x40) {
      local_10[2] = local_10[2] * 0.66;
    }
    if (fVar6 < local_10[2]) {
      uVar5 = 2;
      fVar6 = local_10[2];
    }
    uVar3 = (uVar5 + 1) % 3;
    fVar9 = 1.0 / fVar6;
    uVar4 = (uVar5 + 2) % 3;
    *param_3 = uVar5;
    *param_4 = 0;
    fVar8 = local_10[uVar3];
    fVar7 = local_10[uVar4];
    if (fVar7 <= fVar8) {
      fVar8 = (fVar6 - fVar8) * fVar9;
      param_3[1] = uVar3;
      param_4[1] = fVar8 * fVar8 * fVar8 * 16.0 * 0.05;
      param_3[2] = uVar4;
    }
    else {
      fVar7 = (fVar6 - fVar7) * fVar9;
      param_3[1] = uVar4;
      param_4[1] = fVar7 * fVar7 * fVar7 * 16.0 * 0.05;
      param_3[2] = uVar3;
      fVar7 = fVar8;
    }
    fVar9 = (fVar6 - fVar7) * fVar9;
    param_4[2] = fVar9 * fVar9 * fVar9 * 16.0 * 0.05;
    return;
  }
  *param_3 = 0;
  param_3[1] = 1;
  param_3[2] = 2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}

// 01246100  hkpMoppDefaultSplitter::hkpMoppDefaultSplitter  size=38  [run]
void __fastcall hkpMoppDefaultSplitter::hkpMoppDefaultSplitter(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01246130  hkBaseObject::hkBaseObject_236  size=7  [run]
void __fastcall hkBaseObject::hkBaseObject_236(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01246140  FUN_01246140  size=1133  [run]
void __thiscall
FUN_01246140(int param_1,int param_2,int param_3,int *param_4,float *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_6c;
  uint local_54;
  uint local_50;
  int local_20;
  int local_1c;
  int local_14;
  
  fVar1 = *param_5;
  fVar2 = param_5[1];
  iVar4 = *(int *)(param_1 + 0x38);
  iVar5 = param_4[1];
  local_54 = *(uint *)*param_4;
  local_14 = 0;
  if (0.001 <= fVar2 - fVar1) {
    local_6c = 1.0 / (fVar2 - fVar1);
  }
  else {
    local_6c = 1.0;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 8);
  local_20 = param_4[2];
  if (iVar6 < param_4[2]) {
    local_20 = iVar6;
  }
  local_1c = 0;
  local_50 = local_54;
LAB_012461f0:
  if (param_4[1] <= local_1c) {
    piVar8 = *(int **)(param_1 + 0xc);
    iVar4 = *piVar8;
    while (iVar4 = iVar4 + -1, 0 < iVar4) {
      *(undefined4 *)(piVar8[2] + iVar4 * 4) = 0;
    }
    *piVar8 = 0;
    piVar8[3] = 0;
    return;
  }
  fVar3 = *(float *)(*param_4 + 8 + local_1c * 0x14);
  uVar7 = *(uint *)(*param_4 + local_1c * 0x14);
  if (uVar7 <= local_54) {
    local_54 = uVar7;
  }
  if (local_50 <= uVar7) {
    local_50 = uVar7;
  }
  FUN_01246e70(fVar3);
  piVar8 = *(int **)(param_1 + 0xc);
  iVar6 = *piVar8;
  while (iVar6 = iVar6 + -1, local_20 < iVar6) {
    piVar8[3] = *(int *)(piVar8[2] + iVar6 * 4);
    *(undefined4 *)(piVar8[2] + iVar6 * 4) = 0;
    *piVar8 = *piVar8 + -1;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  fVar17 = (fVar2 + fVar1) * 0.5;
  fVar14 = local_6c;
  if (param_6 < iVar4) {
    fVar13 = fVar2 - fVar1;
    fVar14 = *(float *)(iVar6 + 0x1c);
    if (fVar13 <= *(float *)(iVar6 + 0x1c)) {
      fVar14 = fVar13;
    }
    if (fVar14 + fVar13 <= 0.0) {
      fVar14 = 3.4028202e+37;
    }
    else {
      fVar14 = 1.0 / (fVar14 + fVar13);
    }
  }
  fVar14 = fVar14 * (fVar3 - fVar17);
  if (0.0 <= fVar14) {
    fVar14 = fVar14 * fVar14;
    fVar13 = fVar14 * fVar14;
    fVar14 = (fVar13 * 3.0 + fVar14 * 2.9 + fVar13 * fVar13 * 1500.0) * *(float *)(iVar6 + 0x14);
  }
  else {
    fVar14 = 0.0;
  }
  if ((int)(local_50 - local_54) < 0x10) {
    fVar13 = *(float *)(iVar6 + 0x18) * -0.03;
  }
  else {
    fVar13 = 0.0;
  }
  fVar18 = 1e+07;
  iVar9 = *(int *)(*(int *)(param_1 + 8) + 0xc) >> 1;
  iVar11 = **(int **)(param_1 + 0xc);
  iVar12 = 0;
  fVar13 = *(float *)(param_3 + 0x10) + fVar14 + fVar13;
  if (iVar11 == 0) {
    iVar11 = (*(int **)(param_1 + 0xc))[3];
    if (iVar11 != 0) {
      fVar14 = *(float *)(iVar11 + 0xc);
      iVar11 = 0;
      do {
        fVar16 = local_6c;
        if (param_6 < iVar4) {
          fVar15 = fVar2 - fVar1;
          fVar16 = *(float *)(iVar6 + 0x1c);
          if (fVar15 <= *(float *)(iVar6 + 0x1c)) {
            fVar16 = fVar15;
          }
          if (fVar16 + fVar15 <= 0.0) {
            fVar16 = 3.4028202e+37;
          }
          else {
            fVar16 = 1.0 / (fVar16 + fVar15);
          }
        }
        fVar16 = fVar16 * (fVar14 - fVar17);
        if (fVar16 <= 0.0) {
          fVar16 = fVar16 * fVar16;
          fVar15 = fVar16 * fVar16;
          fVar16 = (fVar15 * 3.0 + fVar16 * 2.9 + fVar15 * fVar15 * 1500.0) *
                   *(float *)(iVar6 + 0x14);
        }
        else {
          fVar16 = 0.0;
        }
        fVar15 = ABS((float)((local_1c * 2 - param_4[1]) - iVar11)) * (1.0 / (float)iVar5);
        if (param_6 < iVar4) {
          fVar15 = (fVar15 - 0.75) * 6.0;
          if (0.0 <= fVar15) goto LAB_012464b4;
          fVar15 = 0.0;
        }
        else {
          fVar15 = fVar15 * fVar15;
LAB_012464b4:
          fVar15 = fVar15 * fVar15 * fVar15 * fVar15 * *(float *)(iVar6 + 0x10);
        }
        fVar16 = fVar15 + fVar16 +
                 (float)iVar11 * (1.0 / (float)iVar5) * 5.0 * *(float *)(iVar6 + 8) +
                 (fVar14 - fVar3) * local_6c * *(float *)(iVar6 + 0xc) + fVar13;
        if ((fVar16 < fVar18) &&
           (fVar18 = fVar16, local_14 = iVar11, fVar16 < *(float *)(param_2 + 0x6c))) {
          *(int *)(param_2 + 0x60) = param_3;
          iVar10 = iVar11 - iVar9;
          *(float *)(param_2 + 0x6c) = fVar16;
          *(float *)(param_2 + 100) = fVar3;
          *(float *)(param_2 + 0x68) = fVar14;
          if ((iVar10 < iVar12) && (iVar12 = iVar10, iVar10 < 0)) {
            iVar12 = 0;
          }
        }
LAB_0124639a:
        iVar11 = iVar11 + -1;
        if (iVar11 < iVar12) goto LAB_01246555;
        if (**(int **)(param_1 + 0xc) < iVar11) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)((*(int **)(param_1 + 0xc))[2] + iVar11 * 4);
        }
        fVar14 = *(float *)(iVar10 + 0xc);
      } while( true );
    }
  }
  else if (fVar13 < *(float *)(param_2 + 0x6c) || fVar13 == *(float *)(param_2 + 0x6c)) {
    if (*(int *)(*(int *)(param_1 + 8) + 0x10) < 1) goto LAB_0124639a;
    iVar12 = iVar9 + local_14;
    if (iVar11 < iVar9 + local_14) {
      iVar12 = iVar11;
    }
    iVar11 = iVar12;
    iVar12 = local_14 - iVar9;
    if (-1 < local_14 - iVar9) goto LAB_0124639a;
    iVar12 = 0;
    goto LAB_0124639a;
  }
  goto LAB_01246558;
LAB_01246555:
  local_14 = local_14 + -1;
LAB_01246558:
  FUN_01246d40(*param_4 + local_1c * 0x14);
  local_1c = local_1c + 1;
  goto LAB_012461f0;
}

// 012465B0  FUN_012465b0  size=150  [run]
undefined4 * __thiscall FUN_012465b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x17] = 0xffffffff;
  iVar2 = 0;
  puVar1[0xe] = 0;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = param_2;
  puVar1[0x18] = *param_3;
  FUN_01247010(param_3,puVar1);
  param_2 = puVar1 + 3;
  local_8 = 0;
  do {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))
              (*(int *)(param_1 + 0x34) + iVar2,local_8,*param_3,param_3[1],param_2,param_2 + 1);
    local_8 = local_8 + 1;
    param_2 = param_2 + 2;
    iVar2 = iVar2 + 0x20;
  } while (iVar2 < 0x60);
  return puVar1;
}

// 01246650  FUN_01246650  size=68  [run]
void __fastcall FUN_01246650(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  puVar1[0xe] = 0;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x17] = 0xffffffff;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[0x1b] = 0x49742400;
  puVar1[0x19] = 0x501502f9;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x18] = 0;
  return;
}

// 012466A0  hkpMoppDefaultSplitter::vf0C  size=46  [run]
void __thiscall hkpMoppDefaultSplitter::vf0C(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    if (*(char *)(param_2 + 1) != '\0') {
      *param_2 = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      *(undefined4 **)(param_1 + 0x18) = param_2;
      return;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 **)(param_1 + 0x10) = param_2;
  }
  return;
}

// 012466D0  hkpMoppDefaultSplitter::vf10  size=7  [run]
int __fastcall hkpMoppDefaultSplitter::vf10(int param_1)

{
  return *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14);
}

// 012466E0  FUN_012466e0  size=410  [run]
void FUN_012466e0(uint *param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  undefined4 local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined8 *local_10;
  undefined8 *local_c;
  uint local_8;
  
  uVar3 = param_3;
  iVar2 = (int)param_2;
  local_18 = *param_1;
  local_1c = param_1[2];
  local_8 = local_18 + param_1[1] * 0x14;
  local_28 = (undefined8 *)(local_18 + (param_1[1] + local_1c) * 0x14);
  local_24[0] = 0;
  local_14 = local_18;
  local_10 = local_28;
  local_c = local_28;
  if (local_18 < local_8) {
    do {
      uVar5 = 0;
      if (*(float *)(iVar2 + 100) < *(float *)(local_18 + 8) ||
          *(float *)(iVar2 + 100) == *(float *)(local_18 + 8)) {
        if (*(float *)(iVar2 + 0x68) <= *(float *)(local_18 + 0xc) &&
            *(float *)(local_18 + 0xc) != *(float *)(iVar2 + 0x68)) {
          uVar5 = 2;
        }
      }
      else if (*(float *)(iVar2 + 0x68) < *(float *)(local_18 + 0xc)) {
        uVar5 = 3;
      }
      else {
        uVar5 = 1;
      }
      FUN_01247850(uVar5,iVar2,uVar3,&local_1c,local_24,&local_18,&local_8,&local_10,&local_c);
    } while (local_18 < local_8);
  }
  uVar4 = local_1c;
  param_2 = local_c;
  FUN_01247ca0(&local_14,&local_8,&local_10,&param_2,&local_c,&local_28,iVar2);
  uVar1 = (int)(local_8 - local_14) / 0x14;
  param_4[1] = uVar1;
  param_4[2] = (int)(((float)(int)uVar1 * (float)(int)uVar4) / (float)(int)param_1[1]);
  param_5[1] = ((int)param_2 - (int)local_10) / 0x14;
  param_5[2] = uVar4 - param_4[2];
  *param_4 = local_14;
  puVar6 = (undefined8 *)(local_8 + param_4[2] * 0x14);
  *param_5 = (int)puVar6;
  if (param_5[2] != 0) {
    for (; local_10 < param_2; local_10 = (undefined8 *)((int)local_10 + 0x14)) {
      *puVar6 = *local_10;
      puVar6[1] = local_10[1];
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(local_10 + 2);
      puVar6 = (undefined8 *)((int)puVar6 + 0x14);
    }
  }
  return;
}

// 01246880  FUN_01246880  size=845  [run]
int * __thiscall FUN_01246880(int param_1,int param_2,int *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 local_248 [512];
  float local_48 [3];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  uint local_24 [4];
  undefined1 local_14 [4];
  uint local_10;
  uint local_c;
  uint local_8;
  
  piVar2 = param_3;
  if (param_3[1] == 1) {
    if ((*(char *)(*(int *)(param_1 + 8) + 0x14) != '\0') && (*(int *)(param_1 + 0x1c) == 0)) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x14))
                (*(undefined4 *)(param_1 + 0x2c),param_1,0x800);
    }
    piVar2 = (int *)FUN_012465b0(param_2,piVar2);
    return piVar2;
  }
  if ((*(char *)(*(int *)(param_1 + 8) + 0x14) != '\0') && (*(int *)(param_1 + 0x14) == 0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(undefined4 *)(param_1 + 0x2c),param_1,0x800);
  }
  piVar3 = (int *)FUN_01246650();
  piVar3[0x1e] = piVar2[1];
  *piVar3 = param_2;
  if (param_2 == 0) {
    *(int **)(param_1 + 0x2c) = piVar3;
  }
  else {
    if (param_4 == 0) {
      *(int **)(param_2 + 0x70) = piVar3;
    }
    else {
      *(int **)(param_2 + 0x74) = piVar3;
    }
    *(undefined8 *)(piVar3 + 3) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(piVar3 + 5) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(piVar3 + 7) = *(undefined8 *)(param_2 + 0x1c);
  }
  param_4 = 0;
  FUN_01245f20(param_2,local_24,local_48);
  param_2 = 0;
  do {
    local_8 = local_24[param_2];
    local_c = local_8 * 0x20 + *(int *)(param_1 + 0x34);
    fVar6 = local_48[param_2] + *(float *)(local_c + 0x10);
    if ((float)piVar3[0x1b] <= fVar6 && fVar6 != (float)piVar3[0x1b]) goto joined_r0x01246a6b;
    param_3 = piVar3 + local_8 * 2 + 3;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))
              (local_c,local_8,*piVar2,piVar2[1],param_3,param_3 + 1);
    local_10 = local_10 & 0xffffff00;
    if (1 < piVar2[1]) {
      FUN_01247a80(*piVar2,0,piVar2[1] + -1,local_10);
    }
    param_4 = local_c;
    FUN_01246140(piVar3,local_c,piVar2,param_3,param_5);
    if (piVar3[0x18] == 0) {
      hkErrStream::hkErrStream(local_248,0x200);
      FUN_01018d00("Could not find splitting plane for child");
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabba2344,local_248,
                 "Collide\\Mopp\\Builder\\Splitter\\hkpMoppDefaultSplitter.cpp",0x305);
      hkBaseObject::hkBaseObject_38();
      *piVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(int **)(param_1 + 0x10) = piVar3;
      return (int *)0x0;
    }
    param_2 = param_2 + 1;
  } while (param_2 < 3);
LAB_01246aa9:
  param_2 = 3;
  if (3 < *(int *)(param_1 + 0x30)) {
    param_3 = (int *)0x60;
    do {
      local_8 = *(int *)(param_1 + 0x34) + (int)param_3;
      if ((float)piVar3[0x1b] <= *(float *)(local_8 + 0x10) &&
          *(float *)(local_8 + 0x10) != (float)piVar3[0x1b]) break;
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))
                (local_8,param_2,*piVar2,piVar2[1],local_14,&local_10);
      local_c = local_c & 0xffffff00;
      if (1 < piVar2[1]) {
        FUN_01247a80(*piVar2,0,piVar2[1] + -1,local_c);
      }
      param_4 = local_8;
      FUN_01246140(piVar3,local_8,piVar2,local_14,param_5);
      param_3 = param_3 + 8;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x30));
  }
  FUN_01247010(piVar2,piVar3);
  uVar1 = piVar3[0x18];
  if (param_4 != uVar1) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))
              (uVar1,*(undefined4 *)(uVar1 + 0x14),*piVar2,piVar2[1],&param_3,&param_2);
  }
  FUN_012466e0(piVar2,piVar3,param_5,local_3c,local_30);
  iVar5 = param_5 + 1;
  iVar4 = FUN_01246880(piVar3,local_30,1,iVar5);
  piVar3[0x1d] = iVar4;
  iVar4 = FUN_01246880(piVar3,local_3c,0,iVar5);
  piVar3[0x1c] = iVar4;
  if ((piVar3[0x1d] != 0) && (iVar4 != 0)) {
    return piVar3;
  }
  *piVar3 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(int **)(param_1 + 0x10) = piVar3;
  return (int *)0x0;
joined_r0x01246a6b:
  for (; param_2 < 3; param_2 = param_2 + 1) {
    uVar1 = local_24[param_2];
    (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))
              (uVar1 * 0x20 + *(int *)(param_1 + 0x34),uVar1,*piVar2,piVar2[1],
               piVar3 + uVar1 * 2 + 3,piVar3 + uVar1 * 2 + 4);
  }
  goto LAB_01246aa9;
}

// 01246BE0  hkpMoppDefaultSplitter::vf14  size=340  [run]
undefined4 __thiscall
hkpMoppDefaultSplitter::vf14
          (int param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 8) = param_5;
  *(int **)(param_1 + 0x28) = param_2;
  *(int **)(param_1 + 0x24) = param_4;
  local_c = (**(code **)(*param_2 + 0x10))();
  local_8 = *(int *)(param_5 + 4);
  local_10 = *param_6;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar5 = local_c;
  if (local_c != 0) {
    do {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 >> 1;
    } while (iVar5 != 0);
    *(int *)(param_1 + 0x38) = iVar6;
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x14) == '\0') {
    iVar5 = local_8 + local_c;
  }
  else {
    iVar5 = 0x1000;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar1 = (undefined4 *)param_6[1];
  iVar6 = iVar5;
  if (0 < iVar5) {
    do {
      *puVar1 = *(undefined4 *)(param_1 + 0x10);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined4 **)(param_1 + 0x10) = puVar1;
      puVar1 = puVar1 + 0x1f;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined4 *)param_6[2];
  iVar6 = iVar5;
  if (0 < iVar5) {
    do {
      *puVar1 = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      *(undefined4 **)(param_1 + 0x18) = puVar1;
      puVar1 = puVar1 + 0x19;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar2 = (**(code **)(*param_4 + 0xc))();
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = (**(code **)(*param_4 + 0x10))();
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar6 = *(int *)(*(int *)(param_1 + 8) + 8) + 2;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),iVar6 * 4);
  *(undefined4 **)(param_1 + 0xc) = &local_20;
  local_20 = 0;
  local_14 = 0;
  local_1c = iVar6;
  uVar4 = FUN_01246880(0,&local_10,0,0);
  (**(code **)(*param_4 + 0x14))(uVar4,param_1,iVar5 * 2);
  uVar2 = local_18;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar2);
  return uVar4;
}

// 01246D40  FUN_01246d40  size=240  [run]
void __thiscall FUN_01246d40(int *param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1 + -1;
  fVar3 = *(float *)(param_2 + 0xc);
  if (-1 < iVar6) {
    if (3 < *param_1) {
      do {
        piVar2 = (int *)(param_1[2] + iVar6 * 4);
        if ((*(int *)(param_1[2] + iVar6 * 4) == 0) ||
           (iVar4 = *piVar2, pfVar1 = (float *)(iVar4 + 0xc), fVar3 < *pfVar1 || fVar3 == *pfVar1))
        goto LAB_01246e22;
        piVar2[1] = iVar4;
        piVar2 = (int *)(param_1[2] + iVar6 * 4);
        if ((*(int *)(param_1[2] + -4 + iVar6 * 4) == 0) ||
           (iVar4 = piVar2[-1], pfVar1 = (float *)(iVar4 + 0xc), fVar3 < *pfVar1 || fVar3 == *pfVar1
           )) {
          *(int *)(param_1[2] + 4 + (iVar6 + -1) * 4) = param_2;
          *param_1 = *param_1 + 1;
          return;
        }
        *piVar2 = iVar4;
        iVar4 = param_1[2];
        if ((*(int *)(iVar4 + -8 + iVar6 * 4) == 0) ||
           (iVar5 = *(int *)(iVar4 + -8 + iVar6 * 4), pfVar1 = (float *)(iVar5 + 0xc),
           fVar3 < *pfVar1 || fVar3 == *pfVar1)) {
          *(int *)(param_1[2] + 4 + (iVar6 + -2) * 4) = param_2;
          *param_1 = *param_1 + 1;
          return;
        }
        *(int *)(iVar4 + -4 + iVar6 * 4) = iVar5;
        iVar4 = param_1[2];
        if ((*(int *)(iVar4 + -0xc + iVar6 * 4) == 0) ||
           (iVar5 = *(int *)(iVar4 + -0xc + iVar6 * 4), pfVar1 = (float *)(iVar5 + 0xc),
           fVar3 < *pfVar1 || fVar3 == *pfVar1)) {
          iVar6 = iVar6 + -3;
          goto LAB_01246e22;
        }
        *(int *)(iVar4 + -8 + iVar6 * 4) = iVar5;
        iVar6 = iVar6 + -4;
      } while (2 < iVar6);
    }
    if (-1 < iVar6) {
      while ((piVar2 = (int *)(param_1[2] + iVar6 * 4), *(int *)(param_1[2] + iVar6 * 4) != 0 &&
             (iVar4 = *piVar2, pfVar1 = (float *)(iVar4 + 0xc), *pfVar1 <= fVar3 && fVar3 != *pfVar1
             ))) {
        iVar6 = iVar6 + -1;
        piVar2[1] = iVar4;
        if (iVar6 < 0) {
          *(int *)(param_1[2] + 4 + iVar6 * 4) = param_2;
          *param_1 = *param_1 + 1;
          return;
        }
      }
    }
  }
LAB_01246e22:
  *(int *)(param_1[2] + 4 + iVar6 * 4) = param_2;
  *param_1 = *param_1 + 1;
  return;
}

// 01246E30  FUN_01246e30  size=26  [run]
undefined4 __thiscall FUN_01246e30(int *param_1,int param_2)

{
  if (param_2 <= *param_1) {
    return *(undefined4 *)(param_1[2] + param_2 * 4);
  }
  return 0;
}

// 01246E70  FUN_01246e70  size=233  [run]
void __thiscall FUN_01246e70(int *param_1,float param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1 + -1;
  if (-1 < iVar4) {
    if (3 < *param_1) {
      do {
        piVar2 = (int *)(param_1[2] + iVar4 * 4);
        if (*(int *)(param_1[2] + iVar4 * 4) == 0) {
          return;
        }
        iVar3 = *piVar2;
        pfVar1 = (float *)(iVar3 + 0xc);
        if (param_2 < *pfVar1 || param_2 == *pfVar1) {
          return;
        }
        param_1[3] = iVar3;
        *piVar2 = 0;
        *param_1 = *param_1 + -1;
        piVar2 = (int *)(param_1[2] + -4 + iVar4 * 4);
        if (*(int *)(param_1[2] + -4 + iVar4 * 4) == 0) {
          return;
        }
        iVar3 = *piVar2;
        pfVar1 = (float *)(iVar3 + 0xc);
        if (param_2 < *pfVar1 || param_2 == *pfVar1) {
          return;
        }
        param_1[3] = iVar3;
        *piVar2 = 0;
        *param_1 = *param_1 + -1;
        piVar2 = (int *)(param_1[2] + -8 + iVar4 * 4);
        if (*(int *)(param_1[2] + -8 + iVar4 * 4) == 0) {
          return;
        }
        iVar3 = *piVar2;
        pfVar1 = (float *)(iVar3 + 0xc);
        if (param_2 < *pfVar1 || param_2 == *pfVar1) {
          return;
        }
        param_1[3] = iVar3;
        *piVar2 = 0;
        *param_1 = *param_1 + -1;
        piVar2 = (int *)(param_1[2] + -0xc + iVar4 * 4);
        if (*(int *)(param_1[2] + -0xc + iVar4 * 4) == 0) {
          return;
        }
        iVar3 = *piVar2;
        pfVar1 = (float *)(iVar3 + 0xc);
        if (param_2 < *pfVar1 || param_2 == *pfVar1) {
          return;
        }
        param_1[3] = iVar3;
        *piVar2 = 0;
        *param_1 = *param_1 + -1;
        iVar4 = iVar4 + -4;
      } while (2 < iVar4);
    }
    while (((-1 < iVar4 &&
            (piVar2 = (int *)(param_1[2] + iVar4 * 4), *(int *)(param_1[2] + iVar4 * 4) != 0)) &&
           (iVar3 = *piVar2, pfVar1 = (float *)(iVar3 + 0xc),
           *pfVar1 <= param_2 && param_2 != *pfVar1))) {
      param_1[3] = iVar3;
      *piVar2 = 0;
      *param_1 = *param_1 + -1;
      iVar4 = iVar4 + -1;
    }
  }
  return;
}

// 01246F60  FUN_01246f60  size=47  [run]
void __thiscall FUN_01246f60(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 = iVar1 + -1, param_2 < iVar1) {
    param_1[3] = *(int *)(param_1[2] + iVar1 * 4);
    *(undefined4 *)(param_1[2] + iVar1 * 4) = 0;
    *param_1 = *param_1 + -1;
  }
  return;
}

// 01246FC0  FUN_01246fc0  size=71  [run]
undefined4 FUN_01246fc0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(float *)(param_1 + 100) < *(float *)(param_2 + 8) ||
      *(float *)(param_1 + 100) == *(float *)(param_2 + 8)) {
    if (*(float *)(param_1 + 0x68) <= *(float *)(param_2 + 0xc) &&
        *(float *)(param_2 + 0xc) != *(float *)(param_1 + 0x68)) {
      uVar1 = 2;
    }
    return uVar1;
  }
  if (*(float *)(param_2 + 0xc) <= *(float *)(param_1 + 0x68)) {
    return 1;
  }
  return 3;
}

// 01247010  FUN_01247010  size=170  [run]
void __thiscall FUN_01247010(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint local_14 [4];
  
  puVar6 = (uint *)*param_2;
  local_14[2] = *puVar6;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
  iVar1 = param_2[1];
  local_14[3] = local_14[2];
  local_14[1] = param_1;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = *puVar6;
    if (local_14[2] < uVar2) {
      local_14[2] = uVar2;
    }
    if (uVar2 < local_14[3]) {
      local_14[3] = uVar2;
    }
    iVar4 = (**(code **)(**(int **)(local_14[1] + 0x28) + 0x24))(puVar6,local_14);
    if (*(int *)(param_3 + 0x2c) < iVar4) {
      *(int *)(param_3 + 0x2c) = iVar4;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      puVar5 = (uint *)(param_3 + 0x34);
      do {
        uVar2 = local_14[iVar7];
        if (uVar2 < puVar5[-1]) {
          puVar5[-1] = uVar2;
        }
        if (*puVar5 < uVar2) {
          *puVar5 = uVar2;
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < iVar4);
    }
    puVar6 = puVar6 + 5;
  }
  uVar3 = param_2[1];
  *(uint *)(param_3 + 0x24) = local_14[3];
  *(undefined4 *)(param_3 + 8) = uVar3;
  *(uint *)(param_3 + 0x28) = local_14[2];
  return;
}

// 012470C0  FUN_012470c0  size=27  [run]
float10 FUN_012470c0(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = ((float10)param_1 - (float10)param_2) / (float10)param_1;
  return fVar1 * fVar1 * fVar1 * (float10)16.0;
}

// 012470F0  FUN_012470f0  size=19  [run]
void __thiscall FUN_012470f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_1[1] = param_1[1] + 1;
  *param_1 = param_2;
  return;
}

// 01247150  FUN_01247150  size=19  [run]
void __thiscall FUN_01247150(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_1[1] = param_1[1] + 1;
  *param_1 = param_2;
  return;
}

// 012471A0  FUN_012471a0  size=50  [run]
undefined4 FUN_012471a0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8) &&
      *(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    return 1;
  }
  return 0;
}

// 012472C0  FUN_012472c0  size=186  [run]
float10 __thiscall FUN_012472c0(int param_1,int *param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_2 < param_2[1]) {
    fVar2 = (float)param_2[3] - (float)param_2[2];
    fVar3 = *(float *)(param_1 + 0x1c);
    if (fVar2 <= *(float *)(param_1 + 0x1c)) {
      fVar3 = fVar2;
    }
    if (fVar3 + fVar2 <= 0.0) {
      fVar3 = 3.4028202e+37;
    }
    else {
      fVar3 = 1.0 / (fVar3 + fVar2);
    }
  }
  else {
    fVar3 = (float)param_2[4];
  }
  fVar3 = fVar3 * ((float)param_2[8] - ((float)param_2[2] + (float)param_2[3]) * 0.5);
  if (fVar3 < 0.0) {
    return (float10)0;
  }
  fVar3 = fVar3 * fVar3;
  fVar1 = (float10)(fVar3 * fVar3);
  return (fVar1 * fVar1 * (float10)1500.0 + (float10)fVar3 * (float10)2.9 + (float10)3.0 * fVar1) *
         (float10)*(float *)(param_1 + 0x14);
}

// 01247380  FUN_01247380  size=186  [run]
float10 __thiscall FUN_01247380(int param_1,int *param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_2 < param_2[1]) {
    fVar2 = (float)param_2[3] - (float)param_2[2];
    fVar3 = *(float *)(param_1 + 0x1c);
    if (fVar2 <= *(float *)(param_1 + 0x1c)) {
      fVar3 = fVar2;
    }
    if (fVar3 + fVar2 <= 0.0) {
      fVar3 = 3.4028202e+37;
    }
    else {
      fVar3 = 1.0 / (fVar3 + fVar2);
    }
  }
  else {
    fVar3 = (float)param_2[4];
  }
  fVar3 = fVar3 * ((float)param_2[0xe] - ((float)param_2[2] + (float)param_2[3]) * 0.5);
  if (0.0 < fVar3) {
    return (float10)0;
  }
  fVar3 = fVar3 * fVar3;
  fVar1 = (float10)(fVar3 * fVar3);
  return (fVar1 * fVar1 * (float10)1500.0 + (float10)fVar3 * (float10)2.9 + (float10)3.0 * fVar1) *
         (float10)*(float *)(param_1 + 0x14);
}

// 01247440  FUN_01247440  size=97  [run]
float10 __thiscall FUN_01247440(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_012472c0(param_2);
  fVar1 = *(float *)(*(int *)(param_2 + 0x24) + 0x10);
  if (*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28) < 0x10) {
    return fVar2 + (float10)fVar1 + (float10)(*(float *)(param_1 + 0x18) * -0.03);
  }
  return fVar2 + (float10)fVar1 + (float10)0.0;
}

// 012474B0  FUN_012474b0  size=198  [run]
float10 __thiscall FUN_012474b0(int param_1,int *param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float10)FUN_01247380(param_2);
  fVar2 = (float)param_2[7] * ABS((float)(param_2[5] - param_2[0xd]));
  if (*param_2 < param_2[1]) {
    fVar2 = (fVar2 - 0.75) * 6.0;
    fVar3 = 0.0;
    if (fVar2 < 0.0) goto LAB_01247540;
  }
  else {
    fVar2 = fVar2 * fVar2;
  }
  fVar3 = fVar2 * fVar2 * fVar2 * fVar2 * *(float *)(param_1 + 0x10);
LAB_01247540:
  return (float10)fVar3 + fVar1 +
         (float10)param_2[0xc] * (float10)(float)param_2[7] * (float10)5.0 *
         (float10)*(float *)(param_1 + 8) +
         ((float10)(float)param_2[0xe] - (float10)(float)param_2[8]) * (float10)(float)param_2[4] *
         (float10)*(float *)(param_1 + 0xc);
}

// 01247580  FUN_01247580  size=38  [run]
void FUN_01247580(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012475D0  FUN_012475d0  size=38  [run]
void FUN_012475d0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01247610  hkpMoppSplitter::vf00  size=53  [run]
undefined4 * __thiscall hkpMoppSplitter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01247650  hkpMoppNodeMgr::vf00  size=53  [run]
undefined4 * __thiscall hkpMoppNodeMgr::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01247690  FUN_01247690  size=38  [run]
void FUN_01247690(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012476C0  FUN_012476c0  size=399  [run]
void __thiscall
FUN_012476c0(int param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float local_c;
  
  iVar3 = param_5;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  iVar7 = *(int *)(param_1 + 0x20);
  fVar8 = (float10)FUN_012472c0(param_5);
  if (*(int *)(param_5 + 0x2c) - *(int *)(param_5 + 0x28) < 0x10) {
    fVar9 = *(float *)(iVar7 + 0x18) * -0.03;
  }
  else {
    fVar9 = 0.0;
  }
  iVar7 = **(int **)(param_1 + 0xc);
  iVar5 = iVar5 >> 1;
  fVar9 = *(float *)(*(int *)(param_5 + 0x24) + 0x10) + (float)fVar8 + fVar9;
  iVar6 = 0;
  local_c = 1e+07;
  param_5 = 0;
  if (iVar7 == 0) {
    iVar4 = (*(int **)(param_1 + 0xc))[3];
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
      while( true ) {
        *(undefined4 *)(iVar3 + 0x38) = uVar1;
        *(int *)(iVar3 + 0x30) = iVar6;
        *(int *)(iVar3 + 0x34) = (param_6[1] - param_2) + iVar6;
        fVar8 = (float10)FUN_012474b0(iVar3);
        fVar2 = (float)(fVar8 + (float10)fVar9);
        iVar7 = iVar6;
        if ((fVar8 + (float10)fVar9 < (float10)local_c) &&
           (*param_4 = iVar6, local_c = fVar2, fVar2 < *(float *)(param_3 + 0x6c))) {
          *(float *)(param_3 + 0x6c) = fVar2;
          *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(iVar3 + 0x24);
          *(undefined4 *)(param_3 + 100) = *(undefined4 *)(iVar3 + 0x20);
          iVar6 = iVar6 - iVar5;
          *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(iVar3 + 0x38);
          if ((iVar6 < param_5) && (param_5 = iVar6, iVar6 < 0)) {
            param_5 = 0;
          }
        }
LAB_01247785:
        iVar6 = iVar7 + -1;
        if (iVar6 < param_5) break;
        if (**(int **)(param_1 + 0xc) < iVar6) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((*(int **)(param_1 + 0xc))[2] + iVar6 * 4);
        }
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
      }
      *param_4 = *param_4 + -1;
    }
  }
  else if (fVar9 < *(float *)(param_3 + 0x6c) || fVar9 == *(float *)(param_3 + 0x6c)) {
    if (iVar4 < 1) goto LAB_01247785;
    iVar4 = *param_4 + iVar5;
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    param_5 = *param_4 - iVar5;
    iVar7 = iVar4;
    if (-1 < param_5) goto LAB_01247785;
    param_5 = 0;
    goto LAB_01247785;
  }
  FUN_01246d40(*param_6 + param_2 * 0x14);
  return;
}

// 01247850  FUN_01247850  size=439  [run]
void __thiscall
FUN_01247850(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,int *param_6
            ,int *param_7,int *param_8,int *param_9,int *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  float local_18;
  int local_14;
  
  switch(param_2) {
  case 0:
    *param_9 = *param_9 + -0x14;
    *param_10 = *param_10 + -0x14;
    *param_8 = *param_8 + -0x14;
    puVar5 = (undefined8 *)*param_8;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar8 = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined8 *)*param_7;
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    uVar10 = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined8 *)*param_10;
    puVar6 = (undefined8 *)*param_9;
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined8 *)*param_10;
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    *(undefined4 *)(puVar5 + 2) = uVar10;
    puVar5 = (undefined8 *)*param_7;
    if (puVar5 != (undefined8 *)*param_8) {
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      *(undefined4 *)(puVar5 + 2) = uVar8;
    }
    break;
  case 1:
    *param_7 = *param_7 + 0x14;
    return;
  case 2:
    *param_9 = *param_9 + -0x14;
    *param_8 = *param_8 + -0x14;
    puVar5 = (undefined8 *)*param_8;
    puVar6 = (undefined8 *)*param_7;
    puVar7 = (undefined8 *)*param_9;
    if (puVar6 != puVar7) {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar8 = *(undefined4 *)(puVar5 + 2);
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
      puVar5 = (undefined8 *)*param_7;
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      *(undefined4 *)(puVar5 + 2) = uVar8;
      return;
    }
    break;
  case 3:
    *param_5 = *param_5 + -1;
    *param_6 = *param_6 + 1;
    *param_9 = *param_9 + -0x14;
    puVar9 = *(uint **)(param_3 + 0x60);
    local_18 = (*(float *)(param_3 + 0x68) + *(float *)(param_3 + 100)) * 0.5;
    local_14 = param_1;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*param_7,puVar9,local_18,param_4,*param_9);
    local_40 = *puVar9 ^ 0x80000000;
    uStack_3c = puVar9[1] ^ 0x80000000;
    uStack_38 = puVar9[2] ^ 0x80000000;
    uStack_34 = puVar9[3] ^ 0x80000000;
    (**(code **)(**(int **)(local_14 + 0x28) + 0x20))(*param_7,&local_40,-local_18,param_4,*param_7)
    ;
    *param_7 = *param_7 + 0x14;
    return;
  }
  return;
}

// 01247A20  FUN_01247a20  size=40  [run]
void FUN_01247a20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 4);
  return;
}

// 01247A50  FUN_01247a50  size=33  [run]
void FUN_01247a50(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01247A80  FUN_01247a80  size=261  [run]
void FUN_01247a80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_28;
  
  do {
    local_28 = (float)*(undefined8 *)(param_1 + (param_2 + param_3 >> 1) * 0x14 + 8);
    iVar7 = param_3;
    iVar8 = param_2;
    do {
      for (pfVar6 = (float *)(param_1 + 8 + iVar8 * 0x14);
          *pfVar6 <= local_28 && local_28 != *pfVar6; pfVar6 = pfVar6 + 5) {
        iVar8 = iVar8 + 1;
      }
      for (pfVar6 = (float *)(param_1 + 8 + iVar7 * 0x14); local_28 < *pfVar6; pfVar6 = pfVar6 + -5)
      {
        iVar7 = iVar7 + -1;
      }
      if (iVar7 < iVar8) break;
      if (iVar7 != iVar8) {
        uVar3 = *(undefined8 *)(param_1 + iVar7 * 0x14);
        uVar4 = *(undefined8 *)(param_1 + 8 + iVar7 * 0x14);
        puVar1 = (undefined8 *)(param_1 + iVar7 * 0x14);
        puVar2 = (undefined8 *)(param_1 + iVar8 * 0x14);
        uVar5 = *(undefined4 *)(puVar1 + 2);
        *puVar1 = *(undefined8 *)(param_1 + iVar8 * 0x14);
        puVar1[1] = puVar2[1];
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(undefined4 *)(puVar2 + 2) = uVar5;
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar7);
    if (param_2 < iVar7) {
      FUN_01247a80(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

// 01247B90  FUN_01247b90  size=69  [run]
undefined4 * __thiscall FUN_01247b90(undefined4 *param_1,int param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2 * 4);
  param_1[1] = param_2;
  param_1[2] = uVar2;
  *param_1 = 0;
  param_1[3] = 0;
  return param_1;
}

// 01247C00  hkpMoppDefaultSplitter::vf00  size=52  [run]
int __thiscall hkpMoppDefaultSplitter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_236();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01247C40  FUN_01247c40  size=33  [run]
void FUN_01247c40(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01247a80(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01247C70  FUN_01247c70  size=40  [run]
void FUN_01247c70(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_01247a80(param_1,0,param_2 + -1,0);
  }
  return;
}

// 01247CA0  FUN_01247ca0  size=491  [run]
void __thiscall
FUN_01247ca0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6,
            uint *param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 local_c [4];
  int local_8;
  
  puVar10 = param_6;
  iVar12 = (int)(*param_7 - *param_6) / 0x14;
  if (iVar12 != 0) {
    iVar14 = *(int *)(*(int *)(param_8 + 0x60) + 0x14);
    iVar11 = 0;
    fVar16 = 0.0;
    if ((iVar14 != 0) &&
       (fVar15 = *(float *)(param_8 + 0x10) - *(float *)(param_8 + 0xc), 0.0 < fVar15)) {
      fVar16 = fVar15;
    }
    if ((iVar14 != 1) &&
       (fVar15 = *(float *)(param_8 + 0x18) - *(float *)(param_8 + 0x14), fVar16 < fVar15)) {
      iVar11 = 1;
      fVar16 = fVar15;
    }
    if ((iVar14 != 2) && (fVar16 < *(float *)(param_8 + 0x20) - *(float *)(param_8 + 0x1c))) {
      iVar11 = 2;
    }
    local_8 = param_1;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))
              (iVar11 * 0x20 + *(int *)(param_1 + 0x34),iVar11,*param_6,iVar12,local_c,&local_8);
    param_6 = (uint *)((uint)param_6 & 0xffffff00);
    if (1 < iVar12) {
      FUN_01247a80(*puVar10,0,iVar12 + -1,param_6);
    }
    uVar13 = *param_7;
    bVar9 = (*param_3 - *param_2) / 0x14 < (*param_5 - *param_4) / 0x14;
    if (*puVar10 < uVar13) {
      do {
        iVar14 = (*param_3 - *param_2) / 0x14;
        iVar12 = (*param_5 - *param_4) / 0x14;
        if (bVar9) {
          iVar12 = iVar12 * 4;
        }
        else {
          iVar14 = iVar14 * 4;
        }
        if (iVar12 <= iVar14) {
          *param_5 = *param_5 + 0x14;
          *puVar10 = *puVar10 + 0x14;
        }
        else {
          puVar5 = (undefined8 *)*puVar10;
          uVar1 = *(undefined8 *)(uVar13 - 0x14);
          uVar2 = *(undefined8 *)(uVar13 - 0xc);
          uVar6 = *(undefined4 *)(uVar13 - 4);
          *(undefined8 *)(uVar13 - 0x14) = *puVar5;
          *(undefined8 *)(uVar13 - 0xc) = puVar5[1];
          *(undefined4 *)(uVar13 - 4) = *(undefined4 *)(puVar5 + 2);
          puVar5 = (undefined8 *)*param_3;
          puVar7 = (undefined8 *)*param_4;
          uVar3 = *puVar7;
          uVar4 = puVar7[1];
          uVar8 = *(undefined4 *)(puVar7 + 2);
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          *(undefined4 *)(puVar5 + 2) = uVar6;
          puVar5 = (undefined8 *)*puVar10;
          *puVar5 = uVar3;
          puVar5[1] = uVar4;
          *(undefined4 *)(puVar5 + 2) = uVar8;
          *param_3 = *param_3 + 0x14;
          *param_4 = *param_4 + 0x14;
          *puVar10 = *puVar10 + 0x14;
          *param_5 = *param_5 + 0x14;
        }
        bVar9 = iVar12 > iVar14;
        uVar13 = *param_7;
      } while (*puVar10 < uVar13);
    }
  }
  return;
}

// 01247EA0  FUN_01247ea0  size=1365  [run]
void __thiscall FUN_01247ea0(int param_1,int *param_2,byte *param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 auStack_1b8 [4];
  uint auStack_1a8 [4];
  uint auStack_198 [73];
  undefined4 uStack_74;
  int *piStack_70;
  byte *pbStack_6c;
  int local_5c [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_14 = (uint)*param_3;
  bVar3 = param_3[2];
  local_c = param_1;
  local_10 = local_14;
  local_5 = param_3[3];
  pbVar6 = param_3;
  piVar9 = param_2;
  param_3._3_1_ = param_3[1];
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  do {
    local_10 = local_14;
    switch(local_14) {
    case 0:
      return;
    case 1:
    case 2:
    case 3:
    case 4:
      bVar2 = (byte)local_14;
      local_2c = piVar9[0xc] + (uint)param_3._3_1_ << (bVar2 & 0x1f);
      local_28 = piVar9[0xd] + (uint)bVar3 << (bVar2 & 0x1f);
      local_24 = piVar9[0xe] + (uint)local_5 << (bVar2 & 0x1f);
      local_1c = piVar9[0x10] + local_14;
      bVar3 = 0x10 - (char)(piVar9[0x10] + local_14);
      local_4c = (*(int *)(param_1 + 0x20) >> (bVar3 & 0x1f)) - local_2c;
      local_48 = (*(int *)(param_1 + 0x24) >> (bVar3 & 0x1f)) - local_28;
      local_44 = (*(int *)(param_1 + 0x28) >> (bVar3 & 0x1f)) - local_24;
      local_5c[0] = ((*(int *)(param_1 + 0x10) >> (bVar3 & 0x1f)) + 1) - local_2c;
      local_5c[1] = ((*(int *)(param_1 + 0x14) >> (bVar3 & 0x1f)) + 1) - local_28;
      local_5c[2] = ((*(int *)(param_1 + 0x18) >> (bVar3 & 0x1f)) + 1) - local_24;
      local_3c = (*(int *)(param_1 + 0x30) >> (bVar3 & 0x1f)) - local_2c;
      local_38 = (*(int *)(param_1 + 0x34) >> (bVar3 & 0x1f)) - local_28;
      local_34 = (*(int *)(param_1 + 0x38) >> (bVar3 & 0x1f)) - local_24;
      local_30 = (*(int *)(param_1 + 0x3c) >> (bVar3 & 0x1f)) + 1;
      local_18 = piVar9[0x11];
      local_20 = piVar9[0xf];
      piVar9 = local_5c;
      pbVar7 = pbVar6 + 4;
      break;
    case 5:
      pbVar7 = pbVar6 + param_3._3_1_ + 2;
      break;
    case 6:
      pbVar7 = pbVar6 + (uint)param_3._3_1_ * 0x100 + bVar3 + 3;
      break;
    case 7:
      pbVar7 = pbVar6 + (uint)CONCAT11(param_3._3_1_,bVar3) * 0x100 + local_5 + 4;
      break;
    case 8:
      pbVar7 = pbVar6 + (uint)CONCAT21(CONCAT11(param_3._3_1_,bVar3),local_5) * 0x100 +
                        pbVar6[4] + 5;
      break;
    case 9:
      if (piVar9 != local_5c) {
        piVar8 = local_5c;
        for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar9 = local_5c;
      }
      local_20 = local_20 + (uint)param_3._3_1_;
      pbVar7 = pbVar6 + 2;
      break;
    case 10:
      if (piVar9 != local_5c) {
        piVar8 = piVar9;
        piVar11 = local_5c;
        for (iVar5 = 0x12; piVar9 = local_5c, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        }
      }
      local_20 = local_20 + (uint)CONCAT11(param_3._3_1_,bVar3);
      pbVar7 = pbVar6 + 3;
      break;
    case 0xb:
      bVar2 = pbVar6[4];
      if (piVar9 != local_5c) {
        piVar8 = piVar9;
        piVar11 = local_5c;
        for (iVar5 = 0x12; piVar9 = local_5c, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        }
      }
      local_20 = CONCAT31(CONCAT21(CONCAT11(param_3._3_1_,bVar3),local_5),bVar2);
      pbVar7 = pbVar6 + 5;
      break;
    default:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    case 0x10:
    case 0x11:
    case 0x12:
      pbVar7 = pbVar6 + 4;
      if (((int)(uint)bVar3 < piVar9[local_14 - 0x10]) &&
         (pbVar7 = pbVar7 + local_5, piVar9[local_14 - 0xc] < (int)(uint)param_3._3_1_)) {
        pbStack_6c = pbVar7 + -(uint)local_5;
        uStack_74 = 0x1248079;
        piStack_70 = piVar9;
        FUN_01247ea0();
        param_1 = local_c;
      }
      break;
    case 0x13:
      param_2 = (int *)((uint)param_3._3_1_ * 2);
      iVar5 = piVar9[10] + piVar9[9];
      iVar10 = (uint)bVar3 * 2;
      iVar4 = (piVar9[0xb] >> 1) + 1 + piVar9[0xb];
      param_1 = local_c;
      goto LAB_01248007;
    case 0x14:
      iVar5 = piVar9[9];
      goto LAB_01247f1b;
    case 0x15:
      param_2 = (int *)((uint)param_3._3_1_ * 2);
      iVar5 = piVar9[10] + piVar9[8];
      iVar10 = (uint)bVar3 * 2;
      iVar4 = (piVar9[0xb] >> 1) + 1 + piVar9[0xb];
      param_1 = local_c;
      goto LAB_01248007;
    case 0x16:
      iVar5 = piVar9[8];
LAB_01247f1b:
      iVar5 = iVar5 - piVar9[10];
LAB_01247f26:
      iVar5 = iVar5 + 0xff;
LAB_01247f2b:
      iVar10 = (uint)bVar3 * 2;
      param_2 = (int *)((uint)param_3._3_1_ * 2);
      iVar4 = (piVar9[0xb] >> 1) + 1 + piVar9[0xb];
      param_1 = local_c;
      goto LAB_01248007;
    case 0x17:
      iVar5 = piVar9[9] + piVar9[8];
      goto LAB_01247f2b;
    case 0x18:
      iVar5 = piVar9[8] - piVar9[9];
      goto LAB_01247f26;
    case 0x19:
      iVar5 = piVar9[10] + piVar9[9] + piVar9[8];
      goto LAB_01247ff3;
    case 0x1a:
      param_2 = (int *)((uint)param_3._3_1_ * 3);
      iVar5 = (piVar9[9] - piVar9[10]) + 0xff + piVar9[8];
      goto LAB_01247ffd;
    case 0x1b:
      param_2 = (int *)((uint)param_3._3_1_ * 3);
      iVar5 = (piVar9[10] - piVar9[9]) + 0xff + piVar9[8];
      goto LAB_01247ffd;
    case 0x1c:
      iVar5 = ((piVar9[8] - piVar9[10]) - piVar9[9]) + 0x1fe;
LAB_01247ff3:
      param_2 = (int *)((uint)param_3._3_1_ * 3);
LAB_01247ffd:
      iVar4 = piVar9[0xb] * 4;
      iVar10 = (uint)bVar3 * 3;
LAB_01248007:
      local_14 = (uint)local_5;
      pbVar7 = pbVar6 + 4;
      if ((iVar10 < iVar4 + iVar5) && (pbVar7 = pbVar7 + local_14, iVar5 < iVar4 + (int)param_2)) {
        pbStack_6c = pbVar7 + -local_14;
        uStack_74 = 0x1248040;
        piStack_70 = piVar9;
        FUN_01247ea0();
        param_1 = local_c;
      }
      break;
    case 0x20:
    case 0x21:
    case 0x22:
      pbVar7 = pbVar6 + 3;
      if (((int)(uint)param_3._3_1_ < piVar9[local_14 - 0x20]) &&
         (pbVar7 = pbVar7 + bVar3, piVar9[local_14 - 0x1c] <= (int)(uint)param_3._3_1_)) {
        pbStack_6c = pbVar7 + -(uint)bVar3;
        uStack_74 = 0x12480ae;
        piStack_70 = piVar9;
        FUN_01247ea0();
        param_1 = local_c;
      }
      break;
    case 0x23:
    case 0x24:
    case 0x25:
      if ((int)(uint)bVar3 < piVar9[local_14 - 0x23]) {
        pbVar7 = pbVar6 + CONCAT11(pbVar6[5],pbVar6[6]) + 7;
        if (piVar9[local_14 - 0x1f] < (int)(uint)param_3._3_1_) {
          pbStack_6c = pbVar7 + ((uint)CONCAT11(local_5,pbVar6[4]) -
                                (uint)CONCAT11(pbVar6[5],pbVar6[6]));
          uStack_74 = 0x124810d;
          piStack_70 = piVar9;
          FUN_01247ea0();
          param_1 = local_c;
        }
      }
      else {
        pbVar7 = pbVar6 + CONCAT11(local_5,pbVar6[4]) + 7;
      }
      break;
    case 0x26:
    case 0x27:
    case 0x28:
      if (piVar9[local_14 - 0x26] < (int)(uint)param_3._3_1_) {
        return;
      }
      if ((int)(uint)bVar3 <= piVar9[local_14 - 0x22]) {
        return;
      }
      pbVar7 = pbVar6 + 3;
      break;
    case 0x29:
    case 0x2a:
    case 0x2b:
      if (*(int *)(param_1 + -0x94 + local_14 * 4) <
          (int)(uint)CONCAT21(CONCAT11(param_3._3_1_,bVar3),local_5)) {
        return;
      }
      if ((int)(uint)CONCAT21(CONCAT11(pbVar6[4],pbVar6[5]),pbVar6[6]) <
          *(int *)(param_1 + -0x84 + local_14 * 4)) {
        return;
      }
      pbVar7 = pbVar6 + 7;
      break;
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
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      pbVar7 = pbVar6 + 2;
      auStack_198[local_14] = (uint)param_3._3_1_;
      goto LAB_0124839f;
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
      auStack_1a8[local_14] = (uint)CONCAT11(param_3._3_1_,bVar3);
      pbVar7 = pbVar6 + 3;
      goto LAB_0124839f;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      auStack_1b8[local_14] = CONCAT31(CONCAT21(CONCAT11(param_3._3_1_,bVar3),local_5),pbVar6[4]);
      pbVar7 = pbVar6 + 5;
LAB_0124839f:
      if (piVar9 != local_5c) {
        piVar8 = local_5c;
        for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar9 = local_5c;
      }
    }
    local_14 = (uint)*pbVar7;
    bVar3 = pbVar7[2];
    local_10 = local_14;
    local_5 = pbVar7[3];
    pbVar6 = pbVar7;
    param_3._3_1_ = pbVar7[1];
    if (*(char *)(param_1 + 0x40) != '\0') {
      return;
    }
  } while( true );
}

// 01248510  FUN_01248510  size=14  [run]
int FUN_01248510(float param_1)

{
  return (int)param_1;
}

// 01248860  FUN_01248860  size=14  [run]
int FUN_01248860(float param_1)

{
  return (int)param_1;
}

// 01248870  FUN_01248870  size=1591  [run]
void __thiscall FUN_01248870(int *param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint auStack_1b0 [89];
  undefined **ppuStack_4c;
  int *piStack_48;
  byte *pbStack_44;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int *local_c;
  uint local_8;
  
  local_c = param_1;
  if (DAT_020a0be9 == '\0') {
    FUN_01496b30();
    FUN_01496920();
    if (DAT_020a0be9 == '\0') {
      return;
    }
  }
LAB_012488b0:
  bVar2 = *param_3;
  uVar8 = (uint)bVar2;
  bVar3 = param_3[3];
  bVar4 = param_3[2];
  local_8 = uVar8;
  bVar12 = param_3[1];
  switch(uVar8) {
  case 0:
    goto LAB_01248ea6;
  case 1:
  case 2:
  case 3:
  case 4:
    iVar14 = param_2[8] - uVar8;
    local_14 = CONCAT44(local_14._4_4_,iVar14);
    iVar9 = param_2[4] + (uint)bVar12 << (bVar2 & 0x1f);
    local_24 = CONCAT44(local_24._4_4_,iVar9);
    bVar12 = (byte)iVar14;
    iVar10 = (local_c[4] >> (bVar12 & 0x1f)) - iVar9;
    local_34 = CONCAT44(local_34._4_4_,iVar10);
    iVar11 = param_2[5] + (uint)bVar4 << (bVar2 & 0x1f);
    local_34 = CONCAT44((local_c[5] >> (bVar12 & 0x1f)) - iVar11,iVar10);
    local_24 = CONCAT44(iVar11,iVar9);
    iVar9 = param_2[6] + (uint)bVar3 << (bVar2 & 0x1f);
    local_1c = CONCAT44(local_1c._4_4_,iVar9);
    local_2c = CONCAT44((local_c[7] >> (bVar12 & 0x1f)) + 1,(local_c[6] >> (bVar12 & 0x1f)) - iVar9)
    ;
    local_1c = CONCAT44(param_2[7],iVar9);
    param_3 = param_3 + 4;
    local_14 = CONCAT44(param_2[9],iVar14);
    param_2 = (int *)&local_34;
    goto LAB_012488b0;
  case 5:
    param_3 = param_3 + bVar12 + 2;
    goto LAB_012488b0;
  case 6:
    param_3 = param_3 + (uint)bVar12 * 0x100 + bVar4 + 3;
    goto LAB_012488b0;
  case 7:
    param_3 = param_3 + (uint)CONCAT11(bVar12,bVar4) * 0x100 + bVar3 + 4;
    goto LAB_012488b0;
  case 8:
    param_3 = param_3 + (uint)CONCAT21(CONCAT11(bVar12,bVar4),bVar3) * 0x100 + param_3[4] + 5;
    goto LAB_012488b0;
  case 9:
    if (param_2 != (int *)&local_34) {
      local_34 = *(undefined8 *)param_2;
      local_2c = *(undefined8 *)(param_2 + 2);
      local_24 = *(undefined8 *)(param_2 + 4);
      local_1c = *(undefined8 *)(param_2 + 6);
      local_14 = *(undefined8 *)(param_2 + 8);
      param_2 = (int *)&local_34;
    }
    local_1c = CONCAT44(local_1c._4_4_ + (uint)bVar12,(undefined4)local_1c);
    param_3 = param_3 + 2;
    goto LAB_012488b0;
  case 10:
    if (param_2 != (int *)&local_34) {
      local_34 = *(undefined8 *)param_2;
      local_2c = *(undefined8 *)(param_2 + 2);
      local_24 = *(undefined8 *)(param_2 + 4);
      local_1c = *(undefined8 *)(param_2 + 6);
      local_14 = *(undefined8 *)(param_2 + 8);
      param_2 = (int *)&local_34;
    }
    local_1c = CONCAT44(local_1c._4_4_ + (uint)CONCAT11(bVar12,bVar4),(undefined4)local_1c);
    param_3 = param_3 + 3;
    goto LAB_012488b0;
  case 0xb:
    pbVar1 = param_3 + 4;
    if (param_2 != (int *)&local_34) {
      local_34 = *(undefined8 *)param_2;
      local_2c = *(undefined8 *)(param_2 + 2);
      local_24 = *(undefined8 *)(param_2 + 4);
      local_1c = *(undefined8 *)(param_2 + 6);
      local_14 = *(undefined8 *)(param_2 + 8);
      param_2 = (int *)&local_34;
    }
    param_3 = param_3 + 5;
    local_1c = CONCAT44(CONCAT31(CONCAT21(CONCAT11(bVar12,bVar4),bVar3),*pbVar1),
                        (undefined4)local_1c);
    goto LAB_012488b0;
  default:
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar13 = (uint)bVar12;
    iVar9 = param_2[uVar8 - 0x10];
    uVar8 = (uint)bVar4;
    local_8 = param_2[3];
    break;
  case 0x13:
    iVar9 = param_2[2] + param_2[1];
    uVar13 = (uint)bVar12 * 2;
    uVar8 = (uint)bVar4 * 2;
    local_8 = (param_2[3] >> 1) + 1 + param_2[3];
    break;
  case 0x14:
    iVar9 = param_2[1];
    goto LAB_01248904;
  case 0x15:
    iVar9 = param_2[2] + *param_2;
    uVar13 = (uint)bVar12 * 2;
    uVar8 = (uint)bVar4 * 2;
    local_8 = (param_2[3] >> 1) + 1 + param_2[3];
    break;
  case 0x16:
    iVar9 = *param_2;
LAB_01248904:
    iVar9 = iVar9 - param_2[2];
LAB_0124890e:
    uVar13 = (uint)bVar12 * 2;
    uVar8 = (uint)bVar4 * 2;
    iVar9 = iVar9 + 0xff;
    local_8 = (param_2[3] >> 1) + 1 + param_2[3];
    break;
  case 0x17:
    iVar9 = param_2[1] + *param_2;
    uVar13 = (uint)bVar12 * 2;
    uVar8 = (uint)bVar4 * 2;
    local_8 = (param_2[3] >> 1) + 1 + param_2[3];
    break;
  case 0x18:
    iVar9 = *param_2 - param_2[1];
    goto LAB_0124890e;
  case 0x19:
    iVar9 = param_2[2] + param_2[1] + *param_2;
    uVar13 = (uint)bVar12 * 3;
    uVar8 = (uint)bVar4 * 3;
    local_8 = param_2[3] * 4;
    break;
  case 0x1a:
    iVar9 = param_2[1] - param_2[2];
    goto LAB_012489a8;
  case 0x1b:
    iVar9 = param_2[2] - param_2[1];
LAB_012489a8:
    iVar9 = iVar9 + 0xff + *param_2;
    uVar13 = (uint)bVar12 * 3;
    uVar8 = (uint)bVar4 * 3;
    local_8 = param_2[3] * 4;
    break;
  case 0x1c:
    iVar9 = ((*param_2 - param_2[2]) - param_2[1]) + 0x1fe;
    uVar13 = (uint)bVar12 * 3;
    uVar8 = (uint)bVar4 * 3;
    local_8 = param_2[3] * 4;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    param_3 = param_3 + 3;
    if (((int)(uint)bVar12 <= param_2[3] + param_2[uVar8 - 0x20]) &&
       (param_3 = param_3 + bVar4, param_2[uVar8 - 0x20] <= (int)(param_2[3] + 1 + (uint)bVar12))) {
      pbStack_44 = param_3 + -(uint)bVar4;
      ppuStack_4c = (undefined **)0x1248a88;
      piStack_48 = param_2;
      FUN_01248870();
    }
    goto LAB_012488b0;
  case 0x23:
  case 0x24:
  case 0x25:
    pbVar1 = param_3 + 4;
    local_8 = (uint)CONCAT11(param_3[5],param_3[6]);
    if (param_2[3] + param_2[uVar8 - 0x23] < (int)(uint)bVar4) {
      param_3 = param_3 + CONCAT11(bVar3,*pbVar1) + 7;
    }
    else {
      param_3 = param_3 + local_8 + 7;
      if (param_2[uVar8 - 0x23] <= (int)((uint)bVar12 + param_2[3])) {
        pbStack_44 = param_3 + (CONCAT11(bVar3,*pbVar1) - local_8);
        ppuStack_4c = (undefined **)0x1248afb;
        piStack_48 = param_2;
        FUN_01248870();
      }
    }
    goto LAB_012488b0;
  case 0x26:
  case 0x27:
  case 0x28:
    if (param_2[3] + param_2[uVar8 - 0x26] < (int)(uint)bVar12) {
      return;
    }
    if ((int)((uint)bVar4 + param_2[3]) < param_2[uVar8 - 0x26]) {
      return;
    }
    param_3 = param_3 + 3;
    goto LAB_012488b0;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if (local_c[7] + local_c[uVar8 - 0x25] < (int)(uint)CONCAT21(CONCAT11(bVar12,bVar4),bVar3)) {
      return;
    }
    if ((int)((uint)param_3[6] + (uint)CONCAT11(param_3[4],param_3[5]) * 0x100 + local_c[7]) <
        local_c[uVar8 - 0x25]) {
      return;
    }
    param_3 = param_3 + 7;
    goto LAB_012488b0;
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
    uVar8 = uVar8 - 0x30;
    goto LAB_01248e6f;
  case 0x50:
    uVar8 = (uint)bVar12;
    goto LAB_01248e6f;
  case 0x51:
    uVar8 = (uint)CONCAT11(bVar12,bVar4);
    goto LAB_01248e6f;
  case 0x52:
    uVar8 = (uint)CONCAT21(CONCAT11(bVar12,bVar4),bVar3);
    goto LAB_01248e6f;
  case 0x53:
    uVar8 = CONCAT31(CONCAT21(CONCAT11(bVar12,bVar4),bVar3),param_3[4]);
LAB_01248e6f:
    iVar9 = param_2[7];
    piVar5 = (int *)*local_c;
    if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
      pbStack_44 = (byte *)0x4;
      ppuStack_4c = &PTR_vftable_018e9b94;
      auStack_1b0[0x58] = 0x1248e92;
      piStack_48 = piVar5;
      FUN_0100a290();
    }
    iVar10 = piVar5[1];
    piVar5[1] = iVar10 + 1;
    *(uint *)(*piVar5 + iVar10 * 4) = uVar8 + iVar9;
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    auStack_1b0[uVar8 + 8] = (uint)bVar12;
    goto LAB_01248dd7;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_1b0[uVar8 + 4] = (uint)CONCAT11(bVar12,bVar4);
    param_3 = param_3 + 3;
    goto LAB_01248dd7;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_1b0[uVar8] = CONCAT31(CONCAT21(CONCAT11(bVar12,bVar4),bVar3),param_3[4]);
    param_3 = param_3 + 5;
LAB_01248dd7:
    uVar7 = local_14._4_4_;
    if (param_2 != (int *)&local_34) {
      local_34 = *(undefined8 *)param_2;
      local_2c = *(undefined8 *)(param_2 + 2);
      local_24 = *(undefined8 *)(param_2 + 4);
      local_1c = *(undefined8 *)(param_2 + 6);
      local_14 = *(undefined8 *)(param_2 + 8);
      param_2 = (int *)&local_34;
    }
    local_14 = CONCAT44(uVar7,(undefined4)local_14);
    goto LAB_012488b0;
  }
  param_3 = param_3 + 4;
  if (((int)uVar8 <= (int)(local_8 + iVar9)) &&
     (param_3 = param_3 + bVar3, iVar9 <= (int)(local_8 + uVar13))) {
    pbStack_44 = param_3 + -(uint)bVar3;
    ppuStack_4c = (undefined **)0x1248a40;
    piStack_48 = param_2;
    FUN_01248870();
  }
  goto LAB_012488b0;
LAB_01248ea6:
  return;
}

// 01248FA0  FUN_01248fa0  size=209  [run]
void __thiscall FUN_01248fa0(undefined4 *param_1,int param_2,float *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = param_4;
  param_1[4] = (int)((*param_3 - *(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x1c)) + -1;
  param_1[5] = (int)((param_3[1] - *(float *)(param_2 + 0x14)) * *(float *)(param_2 + 0x1c)) + -1;
  param_1[6] = (int)((param_3[2] - *(float *)(param_2 + 0x18)) * *(float *)(param_2 + 0x1c)) + -1;
  local_2c = (int)*(short *)((int)param_1 + 0x12);
  param_1[7] = (int)(param_3[3] * *(float *)(param_2 + 0x1c)) + 2;
  local_28 = (int)*(short *)((int)param_1 + 0x16);
  local_24 = (int)*(short *)((int)param_1 + 0x1a);
  local_20 = *(short *)((int)param_1 + 0x1e) + 1;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0x10;
  local_10 = 0;
  local_8 = 0;
  FUN_01248870(&local_2c,uVar1);
  return;
}

// 01249080  FUN_01249080  size=13  [run]
float10 __thiscall FUN_01249080(int param_1,int param_2)

{
  return (float10)*(float *)(param_1 + param_2 * 8);
}

// 01249090  FUN_01249090  size=14  [run]
float10 __thiscall FUN_01249090(int param_1,int param_2)

{
  return (float10)*(float *)(param_1 + 4 + param_2 * 8);
}

// 012490A0  FUN_012490a0  size=20  [run]
void __thiscall FUN_012490a0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 8) = param_3;
  return;
}

// 012490C0  FUN_012490c0  size=21  [run]
void __thiscall FUN_012490c0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 01249100  FUN_01249100  size=35  [run]
void __thiscall FUN_01249100(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *unaff_ESI;
  undefined4 in_XMM0_Da;
  
  *param_3 = *(undefined4 *)(param_1 + in_EAX * 8);
  puVar1 = (undefined4 *)(param_1 + 4 + in_EAX * 8);
  *unaff_ESI = *puVar1;
  *(undefined4 *)(param_1 + in_EAX * 8) = in_XMM0_Da;
  *puVar1 = param_2;
  return;
}

// 01249150  FUN_01249150  size=57  [run]
void __thiscall FUN_01249150(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  *(char *)((int)puVar3 + 0x6d) = param_2;
  if (param_2 != '\0') {
    puVar3[0x1a] = param_3;
  }
  *(undefined1 *)(puVar3 + 0x1b) = *(undefined1 *)(param_1 + 0xac);
  puVar2 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x70;
  return;
}

// 01249190  FUN_01249190  size=10  [run]
void FUN_01249190(void)

{
  return;
}

// 012491A0  FUN_012491a0  size=189  [run]
void __thiscall FUN_012491a0(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)(param_1 + 0x34);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar5 = (int *)*piVar1;
    do {
      if (*piVar5 == param_2) {
        if (iVar4 != -1) goto LAB_01249246;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') || (param_2 != *(int *)(param_1 + 0xbc))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') || (bVar2)) {
    FUN_01249150(1,param_2);
    if ((*(char *)(param_1 + 0xb0) != '\0') || (bVar2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0xb0) = uVar3;
  }
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  *(int *)(*piVar1 + *(int *)(param_1 + 0x38) * 4) = param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_01249246:
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}

// 01249260  FUN_01249260  size=2634  [run]
void __thiscall FUN_01249260(int param_1,int *param_2,byte *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int *piVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  undefined4 auStack_1b8 [4];
  uint auStack_1a8 [4];
  uint auStack_198 [85];
  undefined4 uStack_44;
  int *local_40;
  byte *pbStack_3c;
  undefined8 local_2c;
  undefined8 local_24;
  int local_1c;
  int iStack_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  bVar9 = param_3[2];
  local_8 = (uint)*param_3;
  local_c = (float)(uint)*param_3;
  bVar5 = param_3[1];
  piVar10 = param_2;
  pbVar11 = param_3;
  param_3._3_1_ = param_3[3];
  if (*(char *)(param_1 + 0xc0) != '\0') {
    return;
  }
LAB_01249293:
  local_c = (float)local_8;
  switch(local_8) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    iVar6 = ((uint)bVar5 << (0x10U - (char)piVar10[3] & 0x1f)) + *piVar10;
    local_2c = CONCAT44(local_2c._4_4_,iVar6);
    local_2c = CONCAT44(((uint)bVar9 << (0x10U - (char)piVar10[3] & 0x1f)) + piVar10[1],iVar6);
    iVar6 = ((uint)param_3._3_1_ << (0x10U - (char)piVar10[3] & 0x1f)) + piVar10[2];
    local_24 = CONCAT44(local_24._4_4_,iVar6);
    pbVar11 = pbVar11 + 4;
    local_24 = CONCAT44(piVar10[3] + local_8,iVar6);
    iStack_18 = piVar10[5];
    local_1c = piVar10[4];
    piVar10 = (int *)&local_2c;
    goto LAB_01249486;
  case 5:
    pbVar11 = pbVar11 + bVar5 + 2;
    goto LAB_01249486;
  case 6:
    pbVar11 = pbVar11 + (uint)bVar5 * 0x100 + bVar9 + 3;
    goto LAB_01249486;
  case 7:
    pbVar11 = pbVar11 + (uint)CONCAT11(bVar5,bVar9) * 0x100 + param_3._3_1_ + 4;
    goto LAB_01249486;
  default:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  case 9:
    if (piVar10 != (int *)&local_2c) {
      local_2c = *(undefined8 *)piVar10;
      local_24 = *(undefined8 *)(piVar10 + 2);
      local_1c = piVar10[4];
      iStack_18 = piVar10[5];
      piVar10 = (int *)&local_2c;
    }
    local_1c = local_1c + (uint)bVar5;
    pbVar11 = pbVar11 + 2;
    goto LAB_01249486;
  case 10:
    if (piVar10 != (int *)&local_2c) {
      local_2c = *(undefined8 *)piVar10;
      local_24 = *(undefined8 *)(piVar10 + 2);
      local_1c = piVar10[4];
      iStack_18 = piVar10[5];
      piVar10 = (int *)&local_2c;
    }
    local_1c = local_1c + (uint)CONCAT11(bVar5,bVar9);
    pbVar11 = pbVar11 + 3;
    goto LAB_01249486;
  case 0xb:
    if (piVar10 != (int *)&local_2c) {
      local_2c = *(undefined8 *)piVar10;
      local_24 = *(undefined8 *)(piVar10 + 2);
      iStack_18 = piVar10[5];
      piVar10 = (int *)&local_2c;
    }
    local_1c = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar9),param_3._3_1_),pbVar11[4]);
    pbVar11 = pbVar11 + 5;
    goto LAB_01249486;
  case 0x10:
  case 0x11:
  case 0x12:
    param_2 = (int *)(local_8 - 0x10);
    bVar8 = (byte)(0x10 - piVar10[3]);
    local_10 = (float)((uint)bVar5 << (bVar8 & 0x1f));
    local_c = (float)(0x10 - piVar10[3]);
    local_8 = 0;
    fVar12 = (float)((int)local_10 + piVar10[(int)param_2]);
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((uint)bVar9 << (bVar8 & 0x1f)) + piVar10[(int)param_2]) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x13:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)(((uint)bVar5 * 2 << (bVar8 & 0x1f)) + piVar10[1] + piVar10[2]);
    param_2 = (int *)0x3;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((uint)bVar9 * 2 << (bVar8 & 0x1f)) + piVar10[1] + piVar10[2]) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x14:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)((((uint)bVar5 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + piVar10[1]);
    param_2 = (int *)0x4;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)((((uint)bVar9 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + piVar10[1])
              * *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x15:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)(((uint)bVar5 * 2 << (bVar8 & 0x1f)) + piVar10[2] + *piVar10);
    param_2 = (int *)0x5;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((uint)bVar9 * 2 << (bVar8 & 0x1f)) + piVar10[2] + *piVar10) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x16:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)((((uint)bVar5 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + *piVar10);
    param_2 = (int *)0x6;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)((((uint)bVar9 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + *piVar10) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x17:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)(((uint)bVar5 * 2 << (bVar8 & 0x1f)) + piVar10[1] + *piVar10);
    param_2 = (int *)0x7;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((uint)bVar9 * 2 << (bVar8 & 0x1f)) + piVar10[1] + *piVar10) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x18:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)((((uint)bVar5 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[1]) + *piVar10);
    param_2 = (int *)0x8;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)((((uint)bVar9 * 2 + -0xff << (bVar8 & 0x1f)) - piVar10[1]) + *piVar10) *
              *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x19:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)(((uint)bVar5 * 3 << (bVar8 & 0x1f)) + piVar10[1] + piVar10[2] + *piVar10);
    param_2 = (int *)0x9;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((uint)bVar9 * 3 << (bVar8 & 0x1f)) + piVar10[1] + piVar10[2] + *piVar10)
              * *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x1a:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)((((uint)bVar5 * 3 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + piVar10[1] +
                         *piVar10);
    param_2 = (int *)0xa;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)((((uint)bVar9 * 3 + -0xff << (bVar8 & 0x1f)) - piVar10[2]) + piVar10[1] +
                          *piVar10) * *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x1b:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)((((uint)bVar5 * 3 + -0xff << (bVar8 & 0x1f)) - piVar10[1]) + piVar10[2] +
                         *piVar10);
    param_2 = (int *)0xb;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)((((uint)bVar9 * 3 + -0xff << (bVar8 & 0x1f)) - piVar10[1]) + piVar10[2] +
                          *piVar10) * *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x1c:
    bVar8 = 0x10 - (char)piVar10[3];
    local_8 = 0;
    fVar12 = (float)(int)(((((uint)bVar5 * 3 + -0x1fe << (bVar8 & 0x1f)) - piVar10[1]) - piVar10[2])
                         + *piVar10);
    param_2 = (int *)0xc;
    param_3 = (byte *)(uint)param_3._3_1_;
    local_c = (float)(int)(((((uint)bVar9 * 3 + -0x1fe << (bVar8 & 0x1f)) - piVar10[1]) - piVar10[2]
                           ) + *piVar10) * *(float *)(param_1 + 0x10);
    pbVar11 = pbVar11 + 4;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    param_2 = (int *)(local_8 - 0x20);
    bVar8 = 0x10 - (char)piVar10[3];
    param_3 = (byte *)(uint)bVar9;
    local_8 = 0;
    fVar12 = (float)(int)(((uint)bVar5 << (bVar8 & 0x1f)) + piVar10[(int)param_2]);
    local_c = *(float *)(param_1 + 0x10) * fVar12;
    fVar12 = *(float *)(param_1 + 0x10) * ((float)(1 << (bVar8 & 0x1f)) + fVar12);
    pbVar11 = pbVar11 + 3;
    goto LAB_012499ee;
  case 0x23:
  case 0x24:
  case 0x25:
    param_2 = (int *)(local_8 - 0x23);
    bVar8 = (byte)(0x10 - piVar10[3]);
    local_10 = (float)((uint)bVar5 << (bVar8 & 0x1f));
    local_c = (float)(0x10 - piVar10[3]);
    fVar12 = (float)((int)local_10 + piVar10[(int)param_2]);
    local_8 = (uint)CONCAT11(param_3._3_1_,pbVar11[4]);
    local_c = (float)(int)(((uint)bVar9 << (bVar8 & 0x1f)) + piVar10[(int)param_2]) *
              *(float *)(param_1 + 0x10);
    param_3 = (byte *)(uint)CONCAT11(pbVar11[5],pbVar11[6]);
    pbVar11 = pbVar11 + 7;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
    bVar8 = (byte)(0x10U - piVar10[3]);
    fVar12 = (float)(int)(((uint)bVar5 << (bVar8 & 0x1f)) + piVar10[local_8 - 0x26]) *
             *(float *)(param_1 + 0x10);
    fVar13 = (float)(int)(((uint)bVar9 << (bVar8 & 0x1f)) + piVar10[local_8 - 0x26]) *
             *(float *)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0xb4) == 0) || (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4))) {
      pbStack_3c = (byte *)0xffffffff;
      bVar4 = true;
      local_40 = (int *)(0x10U - piVar10[3] & 0xffffff00);
      uStack_44 = 0x1249ad7;
      FUN_01249150();
    }
    else {
      bVar4 = false;
    }
    local_14 = *(undefined4 *)(param_1 + -0xec + (int)local_c * 8);
    pfVar1 = (float *)(param_1 + -0xe8 + (int)local_c * 8);
    local_10 = *pfVar1;
    *(float *)(param_1 + -0xec + (int)local_c * 8) = fVar12;
    pbStack_3c = pbVar11 + 3;
    *pfVar1 = fVar13;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    uStack_44 = 0x1249b1a;
    local_40 = piVar10;
    FUN_01249260();
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
    if (((bVar4) && (*(char *)(param_1 + 0xb8) != '\0')) && (*(char *)(param_1 + 0xc0) == '\0')) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -0x70;
    }
    *(undefined4 *)(param_1 + -0xec + (int)local_c * 8) = local_14;
    *pfVar1 = local_10;
    return;
  case 0x29:
  case 0x2a:
  case 0x2b:
    fVar12 = (float)CONCAT21(CONCAT11(bVar5,bVar9),param_3._3_1_) * *(float *)(param_1 + 0x10);
    fVar13 = (float)CONCAT21(CONCAT11(pbVar11[4],pbVar11[5]),pbVar11[6]) *
             *(float *)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0xb4) == 0) || (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4))) {
      pbStack_3c = (byte *)0xffffffff;
      bVar4 = true;
      local_40 = (int *)0x0;
      uStack_44 = 0x1249bcf;
      FUN_01249150();
    }
    else {
      bVar4 = false;
    }
    local_14 = *(undefined4 *)(param_1 + -0x104 + (int)local_c * 8);
    pfVar1 = (float *)(param_1 + -0x100 + (int)local_c * 8);
    local_10 = *pfVar1;
    *(float *)(param_1 + -0x104 + (int)local_c * 8) = fVar12;
    pbStack_3c = pbVar11 + 7;
    *pfVar1 = fVar13;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    uStack_44 = 0x1249c12;
    local_40 = piVar10;
    FUN_01249260();
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
    if ((bVar4) && (*(char *)(param_1 + 0xb8) != '\0')) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -0x70;
    }
    *(undefined4 *)(param_1 + -0x104 + (int)local_c * 8) = local_14;
    *pfVar1 = local_10;
    return;
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
    uVar7 = local_8 - 0x30;
    goto LAB_01249c82;
  case 0x50:
    *(uint *)(param_1 + 0x30) = (uint)bVar5;
    goto LAB_01249c85;
  case 0x51:
    uVar7 = (uint)CONCAT11(bVar5,bVar9);
    goto LAB_01249c82;
  case 0x52:
    uVar7 = (uint)CONCAT21(CONCAT11(bVar5,bVar9),param_3._3_1_);
LAB_01249c82:
    *(uint *)(param_1 + 0x30) = uVar7;
LAB_01249c85:
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + piVar10[4];
    local_40 = *(int **)(param_1 + 0x30);
    pbStack_3c = (byte *)(piVar10 + 5);
    uStack_44 = 0x1249c9a;
    FUN_012491a0();
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar11 = pbVar11 + 2;
    auStack_198[local_8] = (uint)bVar5;
    goto LAB_01249457;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_1a8[local_8] = (uint)CONCAT11(bVar5,bVar9);
    pbVar11 = pbVar11 + 3;
    goto LAB_01249457;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_1b8[local_8] = CONCAT31(CONCAT21(CONCAT11(bVar5,bVar9),param_3._3_1_),pbVar11[4]);
    pbVar11 = pbVar11 + 5;
LAB_01249457:
    if (piVar10 != (int *)&local_2c) {
      local_2c = *(undefined8 *)piVar10;
      local_24 = *(undefined8 *)(piVar10 + 2);
      local_1c = piVar10[4];
      piVar10 = (int *)&local_2c;
    }
LAB_01249486:
    bVar9 = pbVar11[2];
    local_8 = (uint)*pbVar11;
    local_c = (float)(uint)*pbVar11;
    bVar5 = pbVar11[1];
    param_3._3_1_ = pbVar11[3];
    if (*(char *)(param_1 + 0xc0) != '\0') {
      return;
    }
    goto LAB_01249293;
  }
  fVar12 = fVar12 * *(float *)(param_1 + 0x10);
LAB_012499ee:
  pbVar11 = pbVar11 + local_8;
  local_10 = (float)((int)param_2 * 8);
  local_14 = *(undefined4 *)((int)local_10 + 0x48 + param_1);
  *(float *)((int)local_10 + 0x48 + param_1) = fVar12;
  uStack_44 = 0x1249a19;
  local_40 = piVar10;
  pbStack_3c = pbVar11;
  FUN_01249260();
  *(undefined4 *)(param_1 + 0x48 + (int)param_2 * 8) = local_14;
  uVar2 = *(undefined4 *)((int)local_10 + 0x44 + param_1);
  *(float *)((int)local_10 + 0x44 + param_1) = local_c;
  pbStack_3c = pbVar11 + ((int)param_3 - local_8);
  uStack_44 = 0x1249a51;
  local_40 = piVar10;
  FUN_01249260();
  *(undefined4 *)((int)local_10 + 0x44 + param_1) = uVar2;
  return;
}

// 01249D90  FUN_01249d90  size=248  [run]
void __thiscall FUN_01249d90(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(float *)(param_1 + 0x10) = 1.0 / *(float *)(param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  fVar8 = *(float *)(param_1 + 0x10) * 16777216.0;
  *(undefined8 *)(param_1 + 0xb0) = *param_3;
  fVar7 = fVar8 * -2.0;
  fVar8 = fVar8 * 2.0;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0;
  iVar5 = 0;
  pfVar6 = (float *)(param_1 + 0x48);
  do {
    if (iVar5 < 3) {
      pfVar6[-1] = fVar7;
      *pfVar6 = fVar8;
    }
    else {
      if (iVar5 < 9) {
        fVar4 = 1.4142135;
      }
      else {
        fVar4 = 1.7320508;
      }
      pfVar6[-1] = fVar4 * fVar7;
      *pfVar6 = fVar4 * fVar8;
    }
    iVar5 = iVar5 + 1;
    pfVar6 = pfVar6 + 2;
  } while (iVar5 < 0xd);
  local_8 = 0;
  FUN_01249260(&local_1c,*(undefined4 *)(param_2 + 0x20));
  return;
}

// 01249EC0  FUN_01249ec0  size=63  [run]
void __fastcall FUN_01249ec0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < *(int *)(param_1 + 0x3c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x3c) * 4);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 01249F10  FUN_01249f10  size=648  [run]
void __thiscall FUN_01249f10(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 auStack_1ac [4];
  uint auStack_19c [4];
  uint auStack_18c [88];
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  int *piStack_24;
  byte *pbStack_20;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
LAB_01249f22:
  uVar8 = (uint)*param_3;
  bVar1 = param_3[3];
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  switch(uVar8) {
  case 0:
    goto switchD_01249f44_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    param_3 = param_3 + 4;
    goto LAB_01249f22;
  case 5:
    param_3 = param_3 + bVar2 + 2;
    goto LAB_01249f22;
  case 6:
    param_3 = param_3 + (uint)bVar2 * 0x100 + bVar3 + 3;
    goto LAB_01249f22;
  case 7:
    param_3 = param_3 + (uint)CONCAT11(bVar2,bVar3) * 0x100 + bVar1 + 4;
    goto LAB_01249f22;
  case 8:
    param_3 = param_3 + (uint)CONCAT21(CONCAT11(bVar2,bVar3),bVar1) * 0x100 + param_3[4] + 5;
    goto LAB_01249f22;
  case 9:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)bVar2;
    param_3 = param_3 + 2;
    goto LAB_01249f22;
  case 10:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)CONCAT11(bVar2,bVar3);
  case 0x26:
  case 0x27:
  case 0x28:
    param_3 = param_3 + 3;
    goto LAB_01249f22;
  case 0xb:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar1),param_3[4]);
    param_3 = param_3 + 5;
    goto LAB_01249f22;
  default:
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    ppuStack_28 = (undefined **)0x1249f58;
    piStack_24 = param_2;
    pbStack_20 = param_3 + 4;
    FUN_01249f10();
    param_3 = param_3 + 4 + bVar1;
    goto LAB_01249f22;
  case 0x20:
  case 0x21:
  case 0x22:
    ppuStack_28 = (undefined **)0x1249f6d;
    piStack_24 = param_2;
    pbStack_20 = param_3 + 3;
    FUN_01249f10();
    param_3 = param_3 + 3 + bVar3;
    goto LAB_01249f22;
  case 0x23:
  case 0x24:
  case 0x25:
    bVar2 = param_3[5];
    bVar3 = param_3[6];
    pbStack_20 = param_3 + CONCAT11(bVar1,param_3[4]) + 7;
    ppuStack_28 = (undefined **)0x1249f9c;
    piStack_24 = param_2;
    FUN_01249f10();
    param_3 = param_3 + CONCAT11(bVar2,bVar3) + 7;
    goto LAB_01249f22;
  case 0x29:
  case 0x2a:
  case 0x2b:
    param_3 = param_3 + 7;
    goto LAB_01249f22;
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
    uVar8 = uVar8 - 0x30;
    break;
  case 0x50:
    uVar8 = (uint)bVar2;
    break;
  case 0x51:
    uVar8 = (uint)CONCAT11(bVar2,bVar3);
    break;
  case 0x52:
    uVar8 = (uint)CONCAT21(CONCAT11(bVar2,bVar3),bVar1);
    break;
  case 0x53:
    uVar8 = (uint)param_3[4] + (uint)CONCAT11(bVar2,bVar3) * 0x10000 + (uint)bVar1 * 0x100;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    auStack_18c[uVar8] = (uint)bVar2;
    goto LAB_0124a0f0;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_19c[uVar8] = (uint)CONCAT11(bVar2,bVar3);
    param_3 = param_3 + 3;
    goto LAB_0124a0f0;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_1ac[uVar8] = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar1),param_3[4]);
    param_3 = param_3 + 5;
LAB_0124a0f0:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      param_2 = &local_10;
    }
    goto LAB_01249f22;
  }
  iVar4 = *param_2;
  piVar5 = (int *)*local_8;
  if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
    pbStack_20 = (byte *)0x4;
    ppuStack_28 = &PTR_vftable_018e9b94;
    uStack_2c = 0x124a183;
    piStack_24 = piVar5;
    FUN_0100a290();
  }
  iVar6 = piVar5[1];
  piVar5[1] = iVar6 + 1;
  *(uint *)(*piVar5 + iVar6 * 4) = uVar8 + iVar4;
  return;
switchD_01249f44_caseD_0:
  return;
}

// 0124A270  FUN_0124a270  size=594  [run]
void __thiscall FUN_0124a270(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 auStack_1ac [4];
  uint auStack_19c [4];
  uint auStack_18c [88];
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
LAB_0124a280:
  uVar8 = (uint)*param_3;
  bVar1 = param_3[1];
  bVar2 = param_3[2];
  bVar3 = param_3[3];
  switch(uVar8) {
  case 0:
    return;
  case 1:
  case 2:
  case 3:
  case 4:
    param_3 = param_3 + 4;
    goto LAB_0124a280;
  case 5:
    param_3 = param_3 + bVar1 + 2;
    goto LAB_0124a280;
  case 6:
    param_3 = param_3 + (uint)bVar1 * 0x100 + bVar2 + 3;
    goto LAB_0124a280;
  case 7:
    param_3 = param_3 + (uint)CONCAT11(bVar1,bVar2) * 0x100 + bVar3 + 4;
    goto LAB_0124a280;
  case 8:
    param_3 = param_3 + (uint)CONCAT21(CONCAT11(bVar1,bVar2),bVar3) * 0x100 + param_3[4] + 5;
    goto LAB_0124a280;
  case 9:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)bVar1;
    param_3 = param_3 + 2;
    goto LAB_0124a280;
  case 10:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)CONCAT11(bVar1,bVar2);
  case 0x26:
  case 0x27:
  case 0x28:
    param_3 = param_3 + 3;
    goto LAB_0124a280;
  case 0xb:
    local_10 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar2),bVar3),param_3[4]);
    if (param_2 != &local_10) {
      local_c = param_2[1];
      param_2 = &local_10;
    }
    param_3 = param_3 + 5;
    goto LAB_0124a280;
  default:
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    param_3 = param_3 + bVar3 + 4;
    goto LAB_0124a280;
  case 0x20:
  case 0x21:
  case 0x22:
    param_3 = param_3 + bVar2 + 3;
    goto LAB_0124a280;
  case 0x23:
  case 0x24:
  case 0x25:
    param_3 = param_3 + (uint)param_3[5] * 0x100 + param_3[6] + 7;
    goto LAB_0124a280;
  case 0x29:
  case 0x2a:
  case 0x2b:
    param_3 = param_3 + 7;
    goto LAB_0124a280;
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
    uVar8 = uVar8 - 0x30;
    break;
  case 0x50:
    uVar8 = (uint)bVar1;
    break;
  case 0x51:
    uVar8 = (uint)CONCAT11(bVar1,bVar2);
    break;
  case 0x52:
    uVar8 = (uint)CONCAT21(CONCAT11(bVar1,bVar2),bVar3);
    break;
  case 0x53:
    uVar8 = (uint)param_3[4] + (uint)CONCAT11(bVar1,bVar2) * 0x10000 + (uint)bVar3 * 0x100;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    auStack_18c[uVar8] = (uint)bVar1;
    goto LAB_0124a415;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_19c[uVar8] = (uint)CONCAT11(bVar1,bVar2);
    param_3 = param_3 + 3;
    goto LAB_0124a415;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_1ac[uVar8] = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar2),bVar3),param_3[4]);
    param_3 = param_3 + 5;
LAB_0124a415:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      param_2 = &local_10;
    }
    goto LAB_0124a280;
  }
  piVar4 = (int *)*local_8;
  iVar5 = *param_2;
  if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
    uStack_20 = 4;
    ppuStack_28 = &PTR_vftable_018e9b94;
    uStack_2c = 0x124a4ad;
    piStack_24 = piVar4;
    FUN_0100a290();
  }
  iVar6 = piVar4[1];
  piVar4[1] = iVar6 + 1;
  *(uint *)(*piVar4 + iVar6 * 4) = uVar8 + iVar5;
  return;
}

// 0124A590  FUN_0124a590  size=572  [run]
void __thiscall FUN_0124a590(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 auStack_1ac [4];
  uint auStack_19c [4];
  uint auStack_18c [88];
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
LAB_0124a5a0:
  uVar8 = (uint)*param_3;
  bVar1 = param_3[1];
  bVar2 = param_3[2];
  bVar3 = param_3[3];
  switch(uVar8) {
  case 0:
    return;
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    param_3 = param_3 + 4;
    goto LAB_0124a5a0;
  case 5:
    param_3 = param_3 + bVar1 + 2;
    goto LAB_0124a5a0;
  case 6:
    param_3 = param_3 + (uint)bVar1 * 0x100 + bVar2 + 3;
    goto LAB_0124a5a0;
  case 7:
    param_3 = param_3 + (uint)CONCAT11(bVar1,bVar2) * 0x100 + bVar3 + 4;
    goto LAB_0124a5a0;
  case 8:
    param_3 = param_3 + (uint)CONCAT21(CONCAT11(bVar1,bVar2),bVar3) * 0x100 + param_3[4] + 5;
    goto LAB_0124a5a0;
  case 9:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)bVar1;
    param_3 = param_3 + 2;
    goto LAB_0124a5a0;
  case 10:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      local_c = param_2[1];
      param_2 = &local_10;
    }
    local_10 = local_10 + (uint)CONCAT11(bVar1,bVar2);
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x28:
    param_3 = param_3 + 3;
    goto LAB_0124a5a0;
  case 0xb:
    local_10 = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar2),bVar3),param_3[4]);
    if (param_2 != &local_10) {
      local_c = param_2[1];
      param_2 = &local_10;
    }
    param_3 = param_3 + 5;
    goto LAB_0124a5a0;
  default:
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  case 0x23:
  case 0x24:
  case 0x25:
    param_3 = param_3 + (uint)bVar3 * 0x100 + param_3[4] + 7;
    goto LAB_0124a5a0;
  case 0x29:
  case 0x2a:
  case 0x2b:
    param_3 = param_3 + 7;
    goto LAB_0124a5a0;
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
    uVar8 = uVar8 - 0x30;
    break;
  case 0x50:
    uVar8 = (uint)bVar1;
    break;
  case 0x51:
    uVar8 = (uint)CONCAT11(bVar1,bVar2);
    break;
  case 0x52:
    uVar8 = (uint)CONCAT21(CONCAT11(bVar1,bVar2),bVar3);
    break;
  case 0x53:
    uVar8 = (uint)param_3[4] + (uint)CONCAT11(bVar1,bVar2) * 0x10000 + (uint)bVar3 * 0x100;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    auStack_18c[uVar8] = (uint)bVar1;
    goto LAB_0124a71f;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_19c[uVar8] = (uint)CONCAT11(bVar1,bVar2);
    param_3 = param_3 + 3;
    goto LAB_0124a71f;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_1ac[uVar8] = CONCAT31(CONCAT21(CONCAT11(bVar1,bVar2),bVar3),param_3[4]);
    param_3 = param_3 + 5;
LAB_0124a71f:
    if (param_2 != &local_10) {
      local_10 = *param_2;
      param_2 = &local_10;
    }
    goto LAB_0124a5a0;
  }
  piVar4 = (int *)*local_8;
  iVar5 = *param_2;
  if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
    uStack_20 = 4;
    ppuStack_28 = &PTR_vftable_018e9b94;
    uStack_2c = 0x124a7b7;
    piStack_24 = piVar4;
    FUN_0100a290();
  }
  iVar6 = piVar4[1];
  piVar4[1] = iVar6 + 1;
  *(uint *)(*piVar4 + iVar6 * 4) = uVar8 + iVar5;
  return;
}

// 0124A8A0  FUN_0124a8a0  size=8  [run]
undefined4 FUN_0124a8a0(undefined4 param_1)

{
  return param_1;
}

// 0124A8B0  FUN_0124a8b0  size=38  [run]
void __thiscall FUN_0124a8b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           (**(code **)(**(int **)(param_1 + 0x44) + 4))((int)&param_3 + 3,param_2,param_3);
  *(undefined1 *)(param_1 + 0x40) = *puVar1;
  return;
}

// 0124A8E0  FUN_0124a8e0  size=14  [run]
int FUN_0124a8e0(float param_1)

{
  return (int)param_1;
}

// 0124A8F0  FUN_0124a8f0  size=1823  [run]
void __thiscall FUN_0124a8f0(int param_1,undefined1 *param_2,int *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint auStack_1dc [83];
  undefined1 *puStack_90;
  byte *pbStack_8c;
  byte *pbStack_88;
  byte *pbStack_84;
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  byte local_12;
  byte local_11;
  
  local_1c = param_1;
LAB_0124a911:
  bVar10 = param_4[2];
  bVar1 = *param_4;
  uVar11 = (uint)bVar1;
  bVar2 = param_4[1];
  local_11 = bVar10;
  bVar3 = param_4[3];
  local_12 = bVar3;
  switch(uVar11) {
  case 1:
  case 2:
  case 3:
  case 4:
    local_50 = param_3[8] + (uint)bVar2 << (bVar1 & 0x1f);
    local_4c = param_3[9] + (uint)bVar10 << (bVar1 & 0x1f);
    local_48 = param_3[10] + (uint)bVar3 << (bVar1 & 0x1f);
    local_40 = param_3[0xc] + uVar11;
    bVar10 = 0x10 - (char)(param_3[0xc] + uVar11);
    local_60 = (*(int *)(local_1c + 0x20) >> (bVar10 & 0x1f)) - local_50;
    local_5c = (*(int *)(local_1c + 0x24) >> (bVar10 & 0x1f)) - local_4c;
    local_58 = (*(int *)(local_1c + 0x28) >> (bVar10 & 0x1f)) - local_48;
    local_70[0] = ((*(int *)(local_1c + 0x10) >> (bVar10 & 0x1f)) - local_50) + 1;
    param_4 = param_4 + 4;
    local_70[1] = ((*(int *)(local_1c + 0x14) >> (bVar10 & 0x1f)) - local_4c) + 1;
    local_70[2] = ((*(int *)(local_1c + 0x18) >> (bVar10 & 0x1f)) - local_48) + 1;
    local_3c = param_3[0xd];
    local_44 = param_3[0xb];
    param_3 = local_70;
    goto LAB_0124a911;
  case 5:
    param_4 = param_4 + bVar2 + 2;
    goto LAB_0124a911;
  case 6:
    param_4 = param_4 + (uint)bVar2 * 0x100 + bVar10 + 3;
    goto LAB_0124a911;
  case 7:
    param_4 = param_4 + (uint)CONCAT11(bVar2,bVar10) * 0x100 + bVar3 + 4;
    goto LAB_0124a911;
  case 8:
    param_4 = param_4 + (uint)CONCAT21(CONCAT11(bVar2,bVar10),bVar3) * 0x100 + param_4[4] + 5;
    goto LAB_0124a911;
  case 9:
    if (param_3 != local_70) {
      piVar13 = local_70;
      for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = *param_3;
        param_3 = param_3 + 1;
        piVar13 = piVar13 + 1;
      }
      param_3 = local_70;
    }
    local_44 = local_44 + (uint)bVar2;
    param_4 = param_4 + 2;
    goto LAB_0124a911;
  case 10:
    if (param_3 != local_70) {
      piVar13 = param_3;
      piVar14 = local_70;
      for (iVar12 = 0x10; param_3 = local_70, iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar14 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar14 = piVar14 + 1;
      }
    }
    local_44 = local_44 + (uint)CONCAT11(bVar2,bVar10);
    param_4 = param_4 + 3;
    goto LAB_0124a911;
  case 0xb:
    bVar1 = param_4[4];
    if (param_3 != local_70) {
      piVar13 = local_70;
      for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = *param_3;
        param_3 = param_3 + 1;
        piVar13 = piVar13 + 1;
      }
      param_3 = local_70;
    }
    local_44 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar10),bVar3),bVar1);
  case 0xd:
    param_4 = param_4 + 5;
    goto LAB_0124a911;
  case 0xc:
    param_5 = (uint)CONCAT11(bVar2,bVar10) * 0x200;
    param_4 = (byte *)(*(int *)(*(int *)(local_1c + 0x30) + 0x20) + param_5);
    goto LAB_0124a911;
  default:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar6 = (uint)bVar10;
    iVar12 = param_3[uVar11 - 0xc];
    local_20 = (uint)bVar2;
    iVar5 = param_3[uVar11 - 0x10];
    break;
  case 0x13:
    iVar12 = param_3[6] + param_3[5];
    local_20 = (uint)bVar2 * 2;
    uVar6 = (uint)bVar10 * 2;
    iVar5 = param_3[2] + param_3[1];
    break;
  case 0x14:
    iVar12 = param_3[5] - param_3[2];
    local_20 = (uint)bVar2 * 2 - 0xff;
    iVar5 = param_3[1] - param_3[6];
    uVar6 = (uint)bVar10 * 2 - 0xff;
    break;
  case 0x15:
    iVar12 = param_3[6] + param_3[4];
    local_20 = (uint)bVar2 * 2;
    uVar6 = (uint)bVar10 * 2;
    iVar5 = param_3[2] + *param_3;
    break;
  case 0x16:
    iVar12 = param_3[4] - param_3[2];
    iVar5 = *param_3 - param_3[6];
    local_20 = (uint)bVar2 * 2 - 0xff;
    uVar6 = (uint)bVar10 * 2 - 0xff;
    break;
  case 0x17:
    iVar12 = param_3[5] + param_3[4];
    local_20 = (uint)bVar2 * 2;
    uVar6 = (uint)bVar10 * 2;
    iVar5 = param_3[1] + *param_3;
    break;
  case 0x18:
    iVar12 = param_3[4] - param_3[1];
    local_20 = (uint)bVar2 * 2 - 0xff;
    iVar5 = *param_3 - param_3[5];
    uVar6 = (uint)bVar10 * 2 - 0xff;
    break;
  case 0x19:
    iVar12 = param_3[6] + param_3[5] + param_3[4];
    local_20 = (uint)bVar2 * 3;
    uVar6 = (uint)bVar10 * 3;
    iVar5 = param_3[2] + param_3[1] + *param_3;
    break;
  case 0x1a:
    iVar12 = (param_3[5] - param_3[2]) + param_3[4];
    local_20 = (uint)bVar2 * 3 - 0xff;
    uVar6 = (uint)bVar10 * 3 - 0xff;
    iVar5 = (param_3[1] - param_3[6]) + *param_3;
    break;
  case 0x1b:
    iVar12 = (param_3[6] - param_3[1]) + param_3[4];
    uVar6 = (uint)bVar10 * 3 - 0xff;
    local_20 = (uint)bVar2 * 3 - 0xff;
    iVar5 = (param_3[2] - param_3[5]) + *param_3;
    break;
  case 0x1c:
    iVar12 = (param_3[4] - param_3[2]) - param_3[1];
    local_20 = (uint)bVar2 * 3 - 0x1fe;
    uVar6 = (uint)bVar10 * 3 - 0x1fe;
    iVar5 = (*param_3 - param_3[6]) - param_3[5];
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    iVar12 = param_3[uVar11 - 0x1c];
    uVar6 = (uint)bVar2;
    local_20 = uVar6 + 1;
    iVar5 = param_3[uVar11 - 0x20];
    local_12 = param_4[2];
    param_4 = param_4 + -1;
    break;
  case 0x23:
  case 0x24:
  case 0x25:
    iVar12 = param_3[uVar11 - 0x1f];
    local_20 = (uint)bVar2;
    uVar6 = (uint)bVar10;
    local_2c = uVar6;
    iVar5 = param_3[uVar11 - 0x23];
    local_28 = (uint)CONCAT11(bVar3,param_4[4]);
    local_24 = (uint)CONCAT11(param_4[5],param_4[6]);
    param_4 = param_4 + 7;
    goto LAB_0124ae5a;
  case 0x26:
  case 0x27:
  case 0x28:
    if ((param_3[uVar11 - 0x26] < (int)(uint)bVar2) || ((int)(uint)bVar10 <= param_3[uVar11 - 0x22])
       ) goto LAB_0124ae92;
    param_4 = param_4 + 3;
    goto LAB_0124a911;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if ((*(int *)(local_1c + -0x94 + uVar11 * 4) < (int)(uint)CONCAT21(CONCAT11(bVar2,bVar10),bVar3)
        ) || ((int)(uint)CONCAT21(CONCAT11(param_4[4],param_4[5]),param_4[6]) <
              *(int *)(local_1c + -0x84 + uVar11 * 4))) goto LAB_0124ae92;
    param_4 = param_4 + 7;
    goto LAB_0124a911;
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
    uVar11 = uVar11 - 0x30;
    goto LAB_0124afcb;
  case 0x50:
    uVar11 = (uint)bVar2;
    goto LAB_0124afcb;
  case 0x51:
    uVar11 = (uint)CONCAT11(bVar2,bVar10);
    goto LAB_0124afcb;
  case 0x52:
    uVar11 = (uint)CONCAT21(CONCAT11(bVar2,bVar10),bVar3);
    goto LAB_0124afcb;
  case 0x53:
    uVar11 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar10),bVar3),param_4[4]);
LAB_0124afcb:
    pbStack_88 = (byte *)((param_5 >> 9) << 8 & *(uint *)(local_1c + 0x48) | param_3[0xb] + uVar11);
    pbStack_84 = (byte *)(param_3 + 0xd);
    pbStack_8c = &local_12;
    puStack_90 = (undefined1 *)0x124aff6;
    puVar9 = (undefined1 *)(**(code **)(**(int **)(local_1c + 0x44) + 4))();
    *(undefined1 *)(local_1c + 0x40) = *puVar9;
  case 0:
    *param_2 = *(undefined1 *)(local_1c + 0x40);
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_4 = param_4 + 2;
    auStack_1dc[uVar11 + 8] = (uint)bVar2;
    goto LAB_0124ac29;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_1dc[uVar11 + 4] = (uint)CONCAT11(bVar2,bVar10);
    param_4 = param_4 + 3;
    goto LAB_0124ac29;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    pbVar7 = param_4 + 4;
    param_4 = param_4 + 5;
    auStack_1dc[uVar11] = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar10),bVar3),*pbVar7);
LAB_0124ac29:
    if (param_3 != local_70) {
      piVar13 = local_70;
      for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
        *piVar13 = *param_3;
        param_3 = param_3 + 1;
        piVar13 = piVar13 + 1;
      }
      param_3 = local_70;
    }
    goto LAB_0124a911;
  case 0x70:
    goto switchD_0124a939_caseD_70;
  }
  local_24 = (uint)local_12;
  local_28 = 0;
  param_4 = param_4 + 4;
LAB_0124ae5a:
  local_12 = 0;
  local_11 = '\0';
  pbStack_8c = (byte *)param_3;
  if ((int)uVar6 < iVar5) {
    if (iVar12 < (int)local_20) {
      pbStack_84 = (byte *)param_5;
      pbStack_88 = param_4 + local_28;
      puStack_90 = &local_15;
      auStack_1dc[0x52] = 0x124aee3;
      pbVar7 = (byte *)FUN_0124a8f0();
      iVar12 = local_1c;
      uVar11 = local_24;
      local_12 = *pbVar7;
      pbStack_84 = (byte *)param_5;
      pbStack_88 = param_4 + local_24;
      puStack_90 = &local_16;
      auStack_1dc[0x52] = 0x124af02;
      pbStack_8c = (byte *)param_3;
      pcVar8 = (char *)FUN_0124a8f0();
      local_11 = *pcVar8;
    }
    else {
      pbStack_84 = (byte *)param_5;
      pbStack_88 = param_4 + local_24;
      puStack_90 = &local_14;
      auStack_1dc[0x52] = 0x124aebf;
      pcVar8 = (char *)FUN_0124a8f0();
      local_11 = *pcVar8;
      iVar12 = local_1c;
      uVar11 = local_24;
    }
  }
  else {
    if ((int)local_20 <= iVar12) {
LAB_0124ae92:
      *param_2 = 0;
      return;
    }
    pbStack_84 = (byte *)param_5;
    pbStack_88 = param_4 + local_28;
    puStack_90 = &local_13;
    auStack_1dc[0x52] = 0x124ae85;
    pbVar7 = (byte *)FUN_0124a8f0();
    local_12 = *pbVar7;
    iVar12 = local_1c;
    uVar11 = local_24;
  }
  if (local_12 != 0 && local_11 == '\0') {
    pbStack_84 = param_4 + (local_28 - *(int *)(*(int *)(iVar12 + 0x30) + 0x20));
    pbStack_88 = (byte *)0x124af35;
    (**(code **)(**(int **)(iVar12 + 0x44) + 8))();
  }
  if (local_12 == 0 && local_11 != '\0') {
    pbStack_84 = param_4 + (uVar11 - *(int *)(*(int *)(iVar12 + 0x30) + 0x20));
    pbStack_88 = (byte *)0x124af5d;
    (**(code **)(**(int **)(iVar12 + 0x44) + 8))();
  }
  *param_2 = local_11 != '\0' && local_12 != 0;
  return;
switchD_0124a939_caseD_70:
  param_5 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar10),bVar3),param_4[4]);
  param_4 = (byte *)(*(int *)(*(int *)(local_1c + 0x30) + 0x20) + param_5);
  goto LAB_0124a911;
}

// 0124B120  FUN_0124b120  size=417  [run]
void __thiscall FUN_0124b120(undefined4 *param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_11;
  
  if (DAT_020a0bea == '\0') {
    FUN_01496b30();
    FUN_01496920(&DAT_020a0bea);
    if (DAT_020a0bea == '\0') {
      return;
    }
  }
  param_1[0x11] = param_4;
  param_1[0xc] = param_2;
  *param_1 = 0;
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x10);
  param_1[8] = (int)((*param_3 - fVar2) * fVar1) + -1;
  param_1[4] = (int)((param_3[4] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x14);
  param_1[9] = (int)((param_3[1] - fVar2) * fVar1) + -1;
  param_1[5] = (int)((param_3[5] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x18);
  param_1[10] = (int)((param_3[2] - fVar2) * fVar1) + -1;
  param_1[6] = (int)((param_3[6] - fVar2) * fVar1) + 1;
  local_50 = (int)*(short *)((int)param_1 + 0x22);
  local_60 = *(short *)((int)param_1 + 0x12) + 1;
  local_4c = (int)*(short *)((int)param_1 + 0x26);
  local_5c = *(short *)((int)param_1 + 0x16) + 1;
  local_48 = (int)*(short *)((int)param_1 + 0x2a);
  local_58 = *(short *)((int)param_1 + 0x1a) + 1;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar3 = *(char **)(param_2 + 0x20);
  param_1[0x12] = (*pcVar3 != '\r') - 1;
  FUN_0124a8f0(&local_11,&local_60,pcVar3,0);
  if (local_11 != '\0') {
    (**(code **)(*param_4 + 8))((**(char **)(param_1[0xc] + 0x20) != '\r') - 1U & 5);
  }
  return;
}

// 0124B2D0  FUN_0124b2d0  size=218  [run]
float10 FUN_0124b2d0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar1 = param_2[6];
  fVar2 = param_2[7];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar8 = fVar3 * fVar13;
  fVar9 = fVar4 * fVar14;
  fVar10 = fVar5 * fVar1;
  fVar11 = (fVar9 + fVar8 + fVar10) * fVar13 + (fVar2 * fVar2 + -0.5) * fVar3 +
           (fVar4 * fVar1 - fVar5 * fVar14) * fVar2;
  fVar12 = (fVar9 + fVar8 + fVar10) * fVar14 + (fVar2 * fVar2 + -0.5) * fVar4 +
           (fVar5 * fVar13 - fVar3 * fVar1) * fVar2;
  fVar13 = (fVar9 + fVar8 + fVar10) * fVar1 + (fVar2 * fVar2 + -0.5) * fVar5 +
           (fVar3 * fVar14 - fVar4 * fVar13) * fVar2;
  fVar14 = (fVar9 + fVar8 + fVar10) * fVar2 + (fVar2 * fVar2 + -0.5) * fVar6 +
           (fVar6 * fVar2 - fVar6 * fVar2) * fVar2;
  local_30 = (fVar11 + fVar11) * param_2[8];
  fStack_2c = (fVar12 + fVar12) * param_2[9];
  fStack_28 = (fVar13 + fVar13) * param_2[10];
  fStack_24 = (fVar14 + fVar14) * param_2[0xb];
  fVar7 = (float10)(**(code **)(*param_1 + 0x3c))(&local_30);
  return fVar7 + (float10)(param_2[1] * param_3[1] + *param_2 * *param_3 + param_2[2] * param_3[2]);
}

// 0124B3E0  FUN_0124b3e0  size=368  [run]
void __thiscall FUN_0124b3e0(int *param_1,int *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float *unaff_ESI;
  float *unaff_EDI;
  float fVar7;
  float fVar8;
  float fVar9;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_50 = -*unaff_EDI;
  fStack_4c = -unaff_EDI[1];
  fStack_48 = -unaff_EDI[2];
  fStack_44 = -unaff_EDI[3];
  (**(code **)(*param_1 + 0x20))(&local_50,&local_80);
  uVar1 = *(undefined8 *)unaff_ESI;
  uStack_18 = *(undefined8 *)(unaff_ESI + 2);
  uVar2 = *(undefined8 *)(unaff_ESI + 4);
  local_20._0_4_ = (float)uVar1;
  local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_28 = *(undefined8 *)(unaff_ESI + 6);
  uVar3 = *(undefined8 *)(unaff_ESI + 8);
  local_30._0_4_ = (float)uVar2;
  local_30._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  uVar4 = *(undefined8 *)(unaff_ESI + 10);
  local_40._0_4_ = (float)uVar3;
  local_40._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  uStack_38._0_4_ = (float)uVar4;
  uStack_38._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar7 = *unaff_EDI;
  fVar8 = unaff_EDI[1];
  fVar9 = unaff_EDI[2];
  local_60 = fVar8 * local_20._4_4_ + fVar7 * (float)local_20 + fVar9 * (float)uStack_18;
  fStack_5c = fVar8 * local_30._4_4_ + fVar7 * (float)local_30 + fVar9 * (float)uStack_28;
  fStack_58 = fVar8 * local_40._4_4_ + fVar7 * (float)local_40 + fVar9 * (float)uStack_38;
  fStack_54 = fVar8 * uStack_38._4_4_ + fVar7 * local_40._4_4_ + fVar9 * uStack_38._4_4_;
  local_40 = uVar3;
  uStack_38 = uVar4;
  local_30 = uVar2;
  local_20 = uVar1;
  (**(code **)(*param_2 + 0x20))(&local_60,&local_70);
  fVar7 = (local_80 -
          (fStack_6c * unaff_ESI[4] + local_70 * *unaff_ESI + fStack_68 * unaff_ESI[8] +
          unaff_ESI[0xc])) * *unaff_EDI;
  fVar8 = (fStack_7c -
          (fStack_6c * unaff_ESI[5] + local_70 * unaff_ESI[1] + fStack_68 * unaff_ESI[9] +
          unaff_ESI[0xd])) * unaff_EDI[1];
  fVar9 = (fStack_78 -
          (fStack_6c * unaff_ESI[6] + local_70 * unaff_ESI[2] + fStack_68 * unaff_ESI[10] +
          unaff_ESI[0xe])) * unaff_EDI[2];
  if (param_3[0xb] < fVar8 + fVar7 + fVar9) {
    *param_3 = local_80;
    param_3[1] = fStack_7c;
    param_3[2] = fStack_78;
    param_3[3] = fStack_74;
    param_3[4] = local_70;
    param_3[5] = fStack_6c;
    param_3[6] = fStack_68;
    param_3[7] = fStack_64;
    fVar5 = unaff_EDI[1];
    fVar6 = unaff_EDI[2];
    param_3[8] = *unaff_EDI;
    param_3[9] = fVar5;
    param_3[10] = fVar6;
    param_3[0xb] = fVar8 + fVar7 + fVar9;
  }
  return;
}

// 0124B550  FUN_0124b550  size=776  [run]
void FUN_0124b550(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 *param_5,float *param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  ulonglong *local_34;
  undefined8 local_30;
  ulonglong uStack_28;
  float local_14;
  
  fStack_44 = -3.40282e+38;
  local_34 = &DAT_01701ca0;
  local_14 = 4.2039e-45;
  do {
    local_30 = *local_34;
    uStack_28 = local_34[1];
    local_34 = local_34 + 2;
    FUN_0124b3e0(param_2,&local_70);
    local_30 = local_30 ^ 0x8000000080000000;
    uStack_28 = uStack_28 ^ 0x8000000080000000;
    FUN_0124b3e0(param_2,&local_70);
    local_14 = (float)((int)local_14 + -1);
  } while (local_14 != 0.0);
  local_14 = 1.0;
  local_30 = 0;
  uStack_28 = 0;
  do {
    local_14 = local_14 * 0.99;
    fVar17 = fStack_4c * 1.0 - fStack_48 * 1.0;
    fVar18 = fStack_48 * 1.0 - local_50 * 1.0;
    fVar19 = local_50 * 1.0 - fStack_4c * 1.0;
    fVar8 = fStack_4c * 0.0 - fStack_48 * 0.0;
    fVar10 = fStack_48 * 1.0 - local_50 * 0.0;
    fVar12 = local_50 * 0.0 - fStack_4c * 1.0;
    fVar9 = fVar8 * fVar8;
    fVar11 = fVar10 * fVar10;
    fVar13 = fVar12 * fVar12;
    fVar5 = fVar17 * fVar17;
    fVar6 = fVar18 * fVar18;
    fVar7 = fVar19 * fVar19;
    uVar2 = -(uint)(fVar6 + fVar5 + fVar7 < fVar11 + fVar9 + fVar13);
    uVar3 = -(uint)(fVar6 + fVar5 + fVar7 < fVar11 + fVar9 + fVar13);
    uVar4 = -(uint)(fVar6 + fVar5 + fVar7 < fVar11 + fVar9 + fVar13);
    fVar11 = (float)(uVar2 & (uint)fVar8 | ~uVar2 & (uint)fVar17);
    fVar13 = (float)(uVar3 & (uint)fVar10 | ~uVar3 & (uint)fVar18);
    fVar12 = (float)(uVar4 & (uint)fVar12 | ~uVar4 & (uint)fVar19);
    fVar5 = fVar11 * fVar11;
    fVar6 = fVar13 * fVar13;
    fVar7 = fVar12 * fVar12;
    auVar15._4_4_ = fVar5;
    auVar15._0_4_ = fVar5;
    auVar15._8_4_ = fVar5;
    auVar15._12_4_ = fVar5;
    fVar8 = fVar6 + fVar5 + fVar7;
    fVar9 = fVar6 + fVar5 + fVar7;
    fVar10 = fVar6 + fVar5 + fVar7;
    auVar16._4_4_ = fVar9;
    auVar16._0_4_ = fVar8;
    auVar16._8_4_ = fVar10;
    auVar16._12_4_ = fVar6 + fVar5 + fVar7;
    auVar16 = rsqrtps(auVar15,auVar16);
    fVar5 = auVar16._0_4_;
    fVar6 = auVar16._4_4_;
    fVar7 = auVar16._8_4_;
    fVar5 = local_14 *
            (float)(~-(uint)(fVar8 <= (float)local_30) &
                   (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5)) * fVar11 + local_50;
    fVar6 = local_14 *
            (float)(~-(uint)(fVar9 <= local_30._4_4_) &
                   (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5)) * fVar13 + fStack_4c;
    fVar7 = local_14 *
            (float)(~-(uint)(fVar10 <= (float)uStack_28) &
                   (uint)((3.0 - fVar7 * fVar10 * fVar7) * fVar7 * 0.5)) * fVar12 + fStack_48;
    fVar5 = fVar5 * fVar5;
    fVar6 = fVar6 * fVar6;
    fVar7 = fVar7 * fVar7;
    auVar14._4_4_ = fVar5;
    auVar14._0_4_ = fVar5;
    auVar14._8_4_ = fVar5;
    auVar14._12_4_ = fVar5;
    auVar1._4_4_ = fVar6 + fVar5 + fVar7;
    auVar1._0_4_ = fVar6 + fVar5 + fVar7;
    auVar1._8_4_ = fVar6 + fVar5 + fVar7;
    auVar1._12_4_ = fVar6 + fVar5 + fVar7;
    rsqrtps(auVar14,auVar1);
    FUN_0124b3e0(param_2,&local_70);
    FUN_0124b3e0(param_2,&local_70);
    FUN_0124b3e0(param_2,&local_70);
    FUN_0124b3e0(param_2,&local_70);
    local_14 = local_14 * 0.5;
  } while (0.001 < local_14);
  *param_4 = local_70;
  param_4[1] = fStack_6c;
  param_4[2] = fStack_68;
  param_4[3] = fStack_64;
  *param_5 = local_60;
  param_5[1] = uStack_5c;
  param_5[2] = uStack_58;
  param_5[3] = uStack_54;
  param_6[8] = fStack_44;
  *param_6 = local_50;
  param_6[1] = fStack_4c;
  param_6[2] = fStack_48;
  param_6[3] = fStack_44;
  param_6[4] = local_70;
  param_6[5] = fStack_6c;
  param_6[6] = fStack_68;
  param_6[7] = fStack_64;
  return;
}

// 0124B8D0  FUN_0124b8d0  size=63  [run]
void FUN_0124b8d0(void)

{
  int in_EAX;
  char *pcVar1;
  undefined1 *unaff_ESI;
  undefined1 local_5;
  
  if (*(int *)(in_EAX + 0x28) != 0) {
    pcVar1 = (char *)(**(code **)**(undefined4 **)(in_EAX + 0x28))(&local_5);
    if (*pcVar1 == '\0') {
      *unaff_ESI = 0;
      return;
    }
  }
  *unaff_ESI = 1;
  return;
}

// 0124B910  hkpBvCompressedMeshShape::vf10  size=71  [run]
void __thiscall
hkpBvCompressedMeshShape::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_3;
  uStack_1c = param_3;
  uStack_18 = param_3;
  uStack_14 = param_3;
  FUN_014410f0(param_2,param_1 + 0x50,&local_20,param_4);
  return;
}

// 0124B960  hkpBvCompressedMeshShape::vf40  size=8  [run]
undefined4 hkpBvCompressedMeshShape::vf40(void)

{
  return 0xd0;
}

// 0124B970  hkpBvCompressedMeshShape::vf04  size=4  [run]
undefined4 __fastcall hkpBvCompressedMeshShape::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}

// 0124BAB0  hkpBvCompressedMeshShape::vf08  size=11  [run]
int __fastcall hkpBvCompressedMeshShape::vf08(int param_1)

{
  return (*(int *)(param_1 + 0x6c) != 0) - 1;
}

// 0124BAC0  hkpBvCompressedMeshShape::vf0C  size=12  [run]
void hkpBvCompressedMeshShape::vf0C(void)

{
  FUN_01234a20();
  return;
}

