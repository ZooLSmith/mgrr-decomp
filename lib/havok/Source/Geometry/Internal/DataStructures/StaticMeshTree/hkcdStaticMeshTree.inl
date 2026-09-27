// lib/havok/Source/Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0124BAD0..01262880, 179 functions

#include "mgrr.h"
#include "hkpBvCompressedMeshShape.h"
#include "hkpBvCompressedMeshShapeGc.h"
#include "hkpTriangleShape.h"

// 0124BAD0  hkpBvCompressedMeshShape::vf14  size=3483  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x0124c70d) */
/* WARNING: Removing unreachable block (ram,0x0124c657) */
/* WARNING: Removing unreachable block (ram,0x0124c4fd) */
/* WARNING: Removing unreachable block (ram,0x0124c11d) */
/* WARNING: Removing unreachable block (ram,0x0124c06d) */
/* WARNING: Removing unreachable block (ram,0x0124c0af) */
/* WARNING: Removing unreachable block (ram,0x0124c5a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpBvCompressedMeshShape::vf14(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  code *pcVar5;
  uint6 uVar6;
  int *piVar7;
  ushort uVar8;
  byte *pbVar9;
  LPVOID pvVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulonglong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  char *pcVar48;
  undefined1 local_320 [512];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100 [4];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  int local_28;
  undefined4 *local_24;
  uint local_20;
  float *local_1c;
  float *local_18;
  undefined4 *local_14;
  
  local_4c = param_2 >> 1 & 0x7f;
  local_48 = param_2 & 1;
  param_2 = param_2 >> 8;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0.0;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
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
  local_28 = param_1;
  FUN_01234610(param_1 + 0x2c);
  uVar13 = local_4c;
  if (param_2 != local_60) {
    local_7c = (int *)(param_2 * 0x60 + *(int *)(local_80 + 0x3c));
    local_74 = *(int *)(local_80 + 0x60) + local_7c[0x12] * 4;
    local_a0 = (float)local_7c[0xc];
    fStack_9c = (float)local_7c[0xd];
    fStack_98 = (float)local_7c[0xe];
    fStack_94 = (float)local_7c[0xf];
    local_70 = (uint)*(byte *)(local_7c + 0x17) * 0x80000 + *(int *)(local_80 + 0x6c);
    fStack_88 = (float)local_7c[0x11];
    local_68 = *(int *)(local_80 + 0x78) + ((uint)local_7c[0x15] >> 8) * 8;
    local_64 = local_7c[0x13] & 0xff;
    local_78 = *(int *)(local_80 + 0x48) + ((uint)local_7c[0x14] >> 8) * 4;
    local_90 = (float)*(undefined8 *)(local_7c + 0xf);
    fStack_8c = (float)((ulonglong)*(undefined8 *)(local_7c + 0xf) >> 0x20);
    local_6c = *(int *)(local_80 + 0x54) + ((uint)local_7c[0x13] >> 8) * 2 + local_64 * -2;
    fStack_84 = 0.0;
    local_60 = param_2;
    local_5c = param_2;
  }
  piVar7 = local_7c;
  local_44 = FUN_0124dbd0(local_4c);
  cVar2 = *(char *)(local_78 + 2 + uVar13 * 4);
  local_24 = (undefined4 *)0x0;
  if ((*(char *)(local_78 + 3 + uVar13 * 4) == cVar2) &&
     (cVar2 == *(char *)(local_78 + 1 + uVar13 * 4))) {
    if ((*(byte *)(local_6c + (uint)*(byte *)(local_78 + uVar13 * 4) * 2) & 0x30) == 0) {
      local_f0 = 3.40282e+38;
      fStack_ec = 3.40282e+38;
      fStack_e8 = 3.40282e+38;
      fStack_e4 = 3.40282e+38;
      local_e0 = 0xff7fffeeff7fffee;
      uStack_d8 = 0xff7fffeeff7fffee;
    }
    else {
      cVar2 = *(char *)(local_78 + 2 + uVar13 * 4);
      if ((*(char *)(local_78 + 3 + uVar13 * 4) == cVar2) &&
         (cVar2 == *(char *)(local_78 + 1 + uVar13 * 4))) {
        uVar17 = (uint)*(byte *)(local_78 + 1 + uVar13 * 4);
      }
      else {
        uVar17 = 0;
        if (0 < piVar7[1]) {
          pbVar9 = (byte *)(*piVar7 + 3);
          do {
            if (((*pbVar9 & 1) == 0) && (uVar13 == *pbVar9 >> 1)) goto LAB_0124bca4;
            uVar17 = uVar17 + 1;
            pbVar9 = pbVar9 + 4;
          } while ((int)uVar17 < piVar7[1]);
        }
        uVar17 = 0xffffffff;
      }
LAB_0124bca4:
      FUN_01236680(uVar17,local_100 + 4);
    }
    pvVar10 = TlsGetValue(DAT_01f8fc5c);
    auVar41 = _DAT_017e9c20;
    auVar40 = _DAT_017e9c10;
    auVar36 = _DAT_017e9c00;
    iVar18 = (int)pvVar10 * 0xff0;
    uVar13 = (uint)*(byte *)(local_78 + local_4c * 4);
    uVar4 = *(ushort *)(local_6c + uVar13 * 2);
    pfVar19 = (float *)(&DAT_020a0bf0 + iVar18);
    uVar8 = uVar4 >> 8;
    uVar17 = (uint)uVar8;
    if (0xfe < uVar8) {
      uVar17 = 0xff;
    }
    uVar13 = (uint)*(ushort *)(local_6c + uVar13 * 2 + 2);
    uVar4 = uVar4 >> 4;
    uVar8 = uVar4 & 3;
    local_1c = pfVar19;
    local_14 = (undefined4 *)uVar17;
    if ((uVar4 & 3) == 0) {
      iVar11 = local_70 + uVar13 * 8;
      iVar12 = 0;
      pfVar15 = pfVar19;
      if (uVar17 != 1 && -1 < (int)(uVar17 - 1)) {
        do {
          uVar39 = *(ulonglong *)(iVar11 + iVar12 * 8);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar39;
          auVar23._0_4_ = (uint)(uVar39 << 0x10) >> 5;
          auVar23._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
          auVar23._8_2_ = (ushort)(uVar39 >> 0x35);
          auVar23._10_6_ = 0;
          auVar43._4_4_ = (uint)(uVar39 >> 0x2a);
          auVar43._0_4_ = auVar43._4_4_;
          auVar43._8_4_ = auVar43._4_4_;
          auVar43._12_4_ = auVar43._4_4_;
          auVar42 = auVar22 & auVar41 | auVar43 & auVar40 | auVar23 & auVar36;
          *pfVar15 = (float)auVar42._0_4_ * local_b0 + local_c0;
          pfVar15[1] = (float)auVar42._4_4_ * fStack_ac + fStack_bc;
          pfVar15[2] = (float)auVar42._8_4_ * fStack_a8 + fStack_b8;
          pfVar15[3] = (float)auVar42._12_4_ * fStack_a4 + fStack_b4;
          uVar39 = *(ulonglong *)(iVar11 + 8 + iVar12 * 8);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          auVar44._4_4_ = (uint)(uVar39 >> 0x2a);
          auVar25._0_4_ = (uint)(uVar39 << 0x10) >> 5;
          auVar25._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
          auVar25._8_2_ = (ushort)(uVar39 >> 0x35);
          auVar25._10_6_ = 0;
          auVar44._0_4_ = auVar44._4_4_;
          auVar44._8_4_ = auVar44._4_4_;
          auVar44._12_4_ = auVar44._4_4_;
          auVar42 = auVar24 & auVar41 | auVar44 & auVar40 | auVar25 & auVar36;
          pfVar15[4] = (float)auVar42._0_4_ * local_b0 + local_c0;
          pfVar15[5] = (float)auVar42._4_4_ * fStack_ac + fStack_bc;
          pfVar15[6] = (float)auVar42._8_4_ * fStack_a8 + fStack_b8;
          pfVar15[7] = (float)auVar42._12_4_ * fStack_a4 + fStack_b4;
          iVar12 = iVar12 + 2;
          pfVar15 = pfVar15 + 8;
        } while (iVar12 < (int)(uVar17 - 1));
      }
      if (iVar12 < (int)uVar17) {
        pfVar15 = pfVar19 + iVar12 * 4;
        do {
          uVar39 = *(ulonglong *)(iVar11 + iVar12 * 8);
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar39;
          auVar45._4_4_ = (uint)(uVar39 >> 0x2a);
          auVar27._0_4_ = (uint)(uVar39 << 0x10) >> 5;
          auVar27._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
          auVar27._8_2_ = (ushort)(uVar39 >> 0x35);
          auVar27._10_6_ = 0;
          auVar45._0_4_ = auVar45._4_4_;
          auVar45._8_4_ = auVar45._4_4_;
          auVar45._12_4_ = auVar45._4_4_;
          auVar42 = auVar26 & auVar41 | auVar45 & auVar40 | auVar27 & auVar36;
          *pfVar15 = (float)auVar42._0_4_ * local_b0 + local_c0;
          pfVar15[1] = (float)auVar42._4_4_ * fStack_ac + fStack_bc;
          pfVar15[2] = (float)auVar42._8_4_ * fStack_a8 + fStack_b8;
          pfVar15[3] = (float)auVar42._12_4_ * fStack_a4 + fStack_b4;
          iVar12 = iVar12 + 1;
          pfVar15 = pfVar15 + 4;
        } while (iVar12 < (int)uVar17);
      }
    }
    else if (uVar8 == 1) {
      iVar11 = local_70 + uVar13 * 8;
      iVar12 = 0;
      fVar21 = ((float)local_e0 - local_f0) * _DAT_01b249c0;
      fVar33 = (local_e0._4_4_ - fStack_ec) * fRam01b249c4;
      fVar34 = ((float)uStack_d8 - fStack_e8) * fRam01b249c8;
      fVar35 = (uStack_d8._4_4_ - fStack_e4) * fRam01b249cc;
      pfVar15 = pfVar19;
      if (uVar17 != 1 && -1 < (int)(uVar17 - 1)) {
        do {
          uVar13 = *(uint *)(iVar11 + iVar12 * 4);
          *pfVar15 = (float)(uVar13 & 0x7ff) * fVar21 + local_f0;
          pfVar15[1] = (float)(uVar13 >> 0xb & 0x7ff) * fVar33 + fStack_ec;
          pfVar15[2] = (float)(uVar13 >> 0x16) * fVar34 + fStack_e8;
          pfVar15[3] = fVar35 * 0.0 + fStack_e4;
          uVar13 = *(uint *)(iVar11 + 4 + iVar12 * 4);
          pfVar15[4] = (float)(uVar13 & 0x7ff) * fVar21 + local_f0;
          pfVar15[5] = (float)(uVar13 >> 0xb & 0x7ff) * fVar33 + fStack_ec;
          pfVar15[6] = (float)(uVar13 >> 0x16) * fVar34 + fStack_e8;
          pfVar15[7] = fVar35 * 0.0 + fStack_e4;
          iVar12 = iVar12 + 2;
          pfVar15 = pfVar15 + 8;
        } while (iVar12 < (int)(uVar17 - 1));
      }
      if (iVar12 < (int)uVar17) {
        pfVar15 = pfVar19 + iVar12 * 4;
        do {
          uVar13 = *(uint *)(iVar11 + iVar12 * 4);
          *pfVar15 = (float)(uVar13 & 0x7ff) * fVar21 + local_f0;
          pfVar15[1] = (float)(uVar13 >> 0xb & 0x7ff) * fVar33 + fStack_ec;
          pfVar15[2] = (float)(uVar13 >> 0x16) * fVar34 + fStack_e8;
          pfVar15[3] = fVar35 * 0.0 + fStack_e4;
          iVar12 = iVar12 + 1;
          pfVar15 = pfVar15 + 4;
        } while (iVar12 < (int)uVar17);
      }
    }
    else if (uVar8 == 2) {
      local_20 = local_70 + uVar13 * 8;
      iVar11 = 0;
      fVar21 = ((float)local_e0 - local_f0) * _DAT_01b24c30;
      fVar33 = (local_e0._4_4_ - fStack_ec) * fRam01b24c34;
      fVar34 = ((float)uStack_d8 - fStack_e8) * fRam01b24c38;
      fVar35 = (uStack_d8._4_4_ - fStack_e4) * fRam01b24c3c;
      local_18 = pfVar19;
      if (uVar17 != 1 && -1 < (int)(uVar17 - 1)) {
        do {
          uVar4 = *(ushort *)(local_20 + iVar11 * 2);
          iVar11 = iVar11 + 2;
          uVar6 = CONCAT24(uVar4 >> 10,(uint)uVar4) & 0xffff0000001f;
          uVar39 = (ulonglong)CONCAT24(uVar4 >> 5,(int)uVar6) & 0x1fffffffff;
          *local_18 = (float)(int)uVar39 * fVar21 + local_f0;
          local_18[1] = (float)(int)(uVar39 >> 0x20) * fVar33 + fStack_ec;
          local_18[2] = (float)(ushort)(uVar6 >> 0x20) * fVar34 + fStack_e8;
          local_18[3] = fVar35 * 0.0 + fStack_e4;
          uVar4 = *(ushort *)(local_20 + -2 + iVar11 * 2);
          uVar6 = CONCAT24(uVar4 >> 10,(uint)uVar4) & 0xffff0000001f;
          uVar39 = (ulonglong)CONCAT24(uVar4 >> 5,(int)uVar6) & 0x1fffffffff;
          local_18[4] = (float)(int)uVar39 * fVar21 + local_f0;
          local_18[5] = (float)(int)(uVar39 >> 0x20) * fVar33 + fStack_ec;
          local_18[6] = (float)(ushort)(uVar6 >> 0x20) * fVar34 + fStack_e8;
          local_18[7] = fVar35 * 0.0 + fStack_e4;
          local_18 = local_18 + 8;
        } while (iVar11 < (int)(uVar17 - 1));
      }
      if (iVar11 < (int)uVar17) {
        local_18 = pfVar19 + iVar11 * 4;
        do {
          uVar4 = *(ushort *)(local_20 + iVar11 * 2);
          iVar11 = iVar11 + 1;
          uVar6 = CONCAT24(uVar4 >> 10,(uint)uVar4) & 0xffff0000001f;
          uVar39 = (ulonglong)CONCAT24(uVar4 >> 5,(int)uVar6) & 0x1fffffffff;
          *local_18 = (float)(int)uVar39 * fVar21 + local_f0;
          local_18[1] = (float)(int)(uVar39 >> 0x20) * fVar33 + fStack_ec;
          local_18[2] = (float)(ushort)(uVar6 >> 0x20) * fVar34 + fStack_e8;
          local_18[3] = fVar35 * 0.0 + fStack_e4;
          local_18 = local_18 + 4;
        } while (iVar11 < (int)uVar17);
      }
    }
    else {
      hkErrStream::hkErrStream(local_320,0x200);
      pcVar48 = " not implemented";
      uVar13 = *(ushort *)(local_6c + (uint)*(byte *)(local_78 + local_4c * 4) * 2) >> 4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar13);
      FUN_01018d00(pcVar48);
      iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_320,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar11 != 0) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
    }
    uVar13 = (uint)*(byte *)(local_78 + local_4c * 4);
    uVar4 = *(ushort *)(local_6c + uVar13 * 2);
    uVar8 = uVar4 & 0xf;
    local_18 = (float *)uVar17;
    if (uVar8 < 4) {
      if ((uVar4 & 0xf) == 0) {
        FUN_0124d170(pfVar19);
        local_18 = (float *)0x8;
      }
      if (param_3 == (undefined4 *)0x0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        local_14 = (undefined4 *)
                   hkpConvexVerticesShape::hkpConvexVerticesShape(*(undefined4 *)(local_28 + 4));
      }
      uVar13 = (int)local_18 + 3U & 0xfffffffc;
      iVar18 = (int)((int)local_18 + 3U) >> 2;
      if ((int)local_18 < (int)uVar13) {
        pfVar15 = pfVar19 + (int)local_18 * 4 + -4;
        pfVar20 = pfVar19 + (int)local_18 * 4;
        for (uVar17 = (uVar13 - (int)local_18) * 4 & 0x3ffffffc; pfVar19 = local_1c, uVar17 != 0;
            uVar17 = uVar17 - 1) {
          *pfVar20 = *pfVar15;
          pfVar15 = pfVar15 + 1;
          pfVar20 = pfVar20 + 1;
        }
      }
      iVar11 = 0;
      auVar37._0_8_ = (ulonglong)DAT_01701ce0 ^ 0x8000000080000000;
      auVar37._8_4_ = DAT_01701ce0._8_4_ ^ 0x80000000;
      auVar37._12_4_ = DAT_01701ce0._12_4_ ^ 0x80000000;
      auVar36 = _DAT_01701ce0;
      if (0 < (int)uVar13) {
        pauVar14 = (undefined1 (*) [16])(pfVar19 + 8);
        do {
          auVar40 = minps(auVar36,pauVar14[-2]);
          auVar36 = maxps(auVar37,pauVar14[-2]);
          auVar40 = minps(auVar40,pauVar14[-1]);
          auVar36 = maxps(auVar36,pauVar14[-1]);
          auVar41 = minps(auVar40,*pauVar14);
          auVar40 = maxps(auVar36,*pauVar14);
          auVar36 = minps(auVar41,pauVar14[1]);
          auVar37 = maxps(auVar40,pauVar14[1]);
          local_d0._0_4_ = (float)*(undefined8 *)pauVar14[-2];
          local_d0._4_4_ = (float)((ulonglong)*(undefined8 *)pauVar14[-2] >> 0x20);
          uStack_c8._0_4_ = (float)*(undefined8 *)(pauVar14[-2] + 8);
          local_120 = (float)*(undefined8 *)pauVar14[-1];
          fStack_11c = (float)((ulonglong)*(undefined8 *)pauVar14[-1] >> 0x20);
          fStack_118 = (float)*(undefined8 *)(pauVar14[-1] + 8);
          local_e0._0_4_ = (float)*(undefined8 *)*pauVar14;
          local_e0._4_4_ = (float)((ulonglong)*(undefined8 *)*pauVar14 >> 0x20);
          uStack_d8._0_4_ = (float)*(undefined8 *)(*pauVar14 + 8);
          pfVar19 = local_1c + (iVar11 >> 2) * 0xc;
          local_40 = (float)*(undefined8 *)pauVar14[1];
          fStack_3c = (float)((ulonglong)*(undefined8 *)pauVar14[1] >> 0x20);
          local_38 = (float)*(undefined8 *)(pauVar14[1] + 8);
          iVar11 = iVar11 + 4;
          pauVar14 = pauVar14 + 4;
          *pfVar19 = (float)local_d0;
          pfVar19[1] = local_120;
          pfVar19[2] = (float)local_e0;
          pfVar19[3] = local_40;
          pfVar19[4] = local_d0._4_4_;
          pfVar19[5] = fStack_11c;
          pfVar19[6] = local_e0._4_4_;
          pfVar19[7] = fStack_3c;
          pfVar19[8] = (float)uStack_c8;
          pfVar19[9] = fStack_118;
          pfVar19[10] = (float)uStack_d8;
          pfVar19[0xb] = local_38;
          pfVar19 = local_1c;
        } while (iVar11 < (int)uVar13);
      }
      local_14[0x10] = pfVar19;
      local_14[0x11] = iVar18;
      local_14[0x12] = iVar18;
      local_14[0x13] = local_18;
      *(undefined1 *)(local_14 + 0x14) = 1;
      local_14[8] = (auVar37._0_4_ - auVar36._0_4_) * 0.5;
      local_14[9] = (auVar37._4_4_ - auVar36._4_4_) * 0.5;
      local_14[10] = (auVar37._8_4_ - auVar36._8_4_) * 0.5;
      local_14[0xb] = (auVar37._12_4_ - auVar36._12_4_) * 0.5;
      local_14[0xc] = (auVar37._0_4_ + auVar36._0_4_) * 0.5;
      local_14[0xd] = (auVar37._4_4_ + auVar36._4_4_) * 0.5;
      local_14[0xe] = (auVar37._8_4_ + auVar36._8_4_) * 0.5;
      local_14[0xf] = (auVar37._12_4_ + auVar36._12_4_) * 0.5;
      local_24 = local_14;
    }
    else {
      if (uVar8 == 4) {
        local_20 = (int)*(short *)(local_6c + 6 + uVar13 * 2) << 0x10;
        local_14 = (undefined4 *)((int)*(short *)(local_6c + 4 + uVar13 * 2) << 0x10);
        if (param_3 == (undefined4 *)0x0) {
          local_24 = (undefined4 *)0x0;
        }
        else {
          local_24 = (undefined4 *)
                     hkpCylinderShape::hkpCylinderShape
                               (pfVar19,&DAT_020a0c00 + iVar18,local_20,local_14);
        }
        goto LAB_0124c832;
      }
      hkErrStream::hkErrStream(local_320,0x200);
      FUN_01018d00("Not implemented");
      iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x7798b41b,local_320,
                          "Collide\\BvCompressedMesh\\hkpBvCompressedMeshShape.cpp",0x1d1);
      if (iVar11 != 0) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
      *pfVar19 = (float)local_d0;
      *(float *)(iVar18 + 0x20a0bf4) = local_d0._4_4_;
      *(float *)(&DAT_020a0bf8 + iVar18) = (float)uStack_c8;
      *(float *)(&DAT_020a0bfc + iVar18) = uStack_c8._4_4_;
    }
    uVar13 = (uint)*(byte *)(local_78 + local_4c * 4);
    if ((*(byte *)(local_6c + uVar13 * 2) & 0xc0) != 0) {
      local_24[4] = (int)*(short *)(local_6c + 4 + uVar13 * 2) << 0x10;
    }
  }
  else {
    uVar3 = *(undefined1 *)(local_28 + 8);
    uVar1 = *(undefined4 *)(local_28 + 4);
    if (param_3 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)((int)param_3 + 6) = 1;
      *(undefined2 *)(param_3 + 2) = 0x402;
      *(undefined2 *)((int)param_3 + 10) = 0;
      param_3[3] = 0;
      param_3[4] = uVar1;
      *param_3 = hkpTriangleShape::vftable;
      *(short *)(param_3 + 5) = (short)(local_44 >> 0x10);
      *(undefined1 *)((int)param_3 + 0x16) = uVar3;
      param_3[0x14] = (float)local_d0;
      param_3[0x15] = local_d0._4_4_;
      param_3[0x16] = (float)uStack_c8;
      param_3[0x17] = uStack_c8._4_4_;
      *(undefined1 *)((int)param_3 + 0x17) = 0;
      local_14 = param_3;
    }
    local_20 = (uint)*(byte *)(local_78 + 3 + uVar13 * 4);
    uVar17 = (uint)*(byte *)(local_78 + 2 + uVar13 * 4);
    uVar16 = (uint)*(byte *)(local_78 + 1 + uVar13 * 4);
    if ((local_20 == uVar17) && (uVar17 == uVar16)) {
      local_110 = (float)local_d0;
      fStack_10c = local_d0._4_4_;
      fStack_108 = (float)uStack_c8;
      fStack_104 = uStack_c8._4_4_;
      local_100[0] = (float)local_d0;
      local_100[1] = local_d0._4_4_;
      local_100[2] = (float)uStack_c8;
      local_100[3] = uStack_c8._4_4_;
      local_f0 = (float)local_d0;
      fStack_ec = local_d0._4_4_;
      fStack_e8 = (float)uStack_c8;
      fStack_e4 = uStack_c8._4_4_;
      local_e0 = local_d0;
      uStack_d8 = uStack_c8;
      hkErrStream::hkErrStream(local_320,0x200);
      FUN_01018d00("Primitve type not implemented");
      (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_320,0,0);
      ::hkBaseObject::hkBaseObject_38();
    }
    else {
      uVar13 = (uint)*(byte *)(local_78 + uVar13 * 4);
      if ((int)uVar13 < (int)local_64) {
        uVar13 = *(uint *)(local_74 + uVar13 * 4);
        local_110 = (float)(uVar13 & 0x7ff) * local_90 + local_a0;
        fStack_10c = (float)(uVar13 >> 0xb & 0x7ff) * fStack_8c + fStack_9c;
        fStack_108 = (float)(uVar13 >> 0x16) * fStack_88 + fStack_98;
        fStack_104 = fStack_84 * 0.0 + fStack_94;
      }
      else {
        uVar39 = *(ulonglong *)(local_70 + (uint)*(ushort *)(local_6c + uVar13 * 2) * 8);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar39;
        auVar41._4_4_ = (uint)(uVar39 >> 0x2a);
        auVar41._0_4_ = auVar41._4_4_;
        auVar41._8_4_ = auVar41._4_4_;
        auVar41._12_4_ = auVar41._4_4_;
        auVar40._0_4_ = (uint)(uVar39 << 0x10) >> 5;
        auVar40._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
        auVar40._8_2_ = (ushort)(uVar39 >> 0x35);
        auVar40._10_6_ = 0;
        auVar36 = auVar36 & _DAT_017e9c20 | auVar41 & _DAT_017e9c10 | auVar40 & _DAT_017e9c00;
        local_110 = (float)auVar36._0_4_ * local_b0 + local_c0;
        fStack_10c = (float)auVar36._4_4_ * fStack_ac + fStack_bc;
        fStack_108 = (float)auVar36._8_4_ * fStack_a8 + fStack_b8;
        fStack_104 = (float)auVar36._12_4_ * fStack_a4 + fStack_b4;
      }
      if ((int)uVar16 < (int)local_64) {
        uVar13 = *(uint *)(local_74 + uVar16 * 4);
        local_100[0] = (float)(uVar13 & 0x7ff) * local_90 + local_a0;
        local_100[1] = (float)(uVar13 >> 0xb & 0x7ff) * fStack_8c + fStack_9c;
        local_100[2] = (float)(uVar13 >> 0x16) * fStack_88 + fStack_98;
        local_100[3] = fStack_84 * 0.0 + fStack_94;
      }
      else {
        uVar39 = *(ulonglong *)(local_70 + (uint)*(ushort *)(local_6c + uVar16 * 2) * 8);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar39;
        auVar46._4_4_ = (uint)(uVar39 >> 0x2a);
        auVar28._0_4_ = (uint)(uVar39 << 0x10) >> 5;
        auVar28._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
        auVar28._8_2_ = (ushort)(uVar39 >> 0x35);
        auVar28._10_6_ = 0;
        auVar46._0_4_ = auVar46._4_4_;
        auVar46._8_4_ = auVar46._4_4_;
        auVar46._12_4_ = auVar46._4_4_;
        auVar36 = auVar42 & _DAT_017e9c20 | auVar46 & _DAT_017e9c10 | auVar28 & _DAT_017e9c00;
        local_100[0] = (float)auVar36._0_4_ * local_b0 + local_c0;
        local_100[1] = (float)auVar36._4_4_ * fStack_ac + fStack_bc;
        local_100[2] = (float)auVar36._8_4_ * fStack_a8 + fStack_b8;
        local_100[3] = (float)auVar36._12_4_ * fStack_a4 + fStack_b4;
      }
      if ((int)uVar17 < (int)local_64) {
        uVar13 = *(uint *)(local_74 + uVar17 * 4);
        local_f0 = (float)(uVar13 & 0x7ff) * local_90 + local_a0;
        fStack_ec = (float)(uVar13 >> 0xb & 0x7ff) * fStack_8c + fStack_9c;
        fStack_e8 = (float)(uVar13 >> 0x16) * fStack_88 + fStack_98;
        fStack_e4 = fStack_84 * 0.0 + fStack_94;
      }
      else {
        uVar39 = *(ulonglong *)(local_70 + (uint)*(ushort *)(local_6c + uVar17 * 2) * 8);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar39;
        auVar47._4_4_ = (uint)(uVar39 >> 0x2a);
        auVar30._0_4_ = (uint)(uVar39 << 0x10) >> 5;
        auVar30._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
        auVar30._8_2_ = (ushort)(uVar39 >> 0x35);
        auVar30._10_6_ = 0;
        auVar47._0_4_ = auVar47._4_4_;
        auVar47._8_4_ = auVar47._4_4_;
        auVar47._12_4_ = auVar47._4_4_;
        auVar36 = auVar29 & _DAT_017e9c20 | auVar47 & _DAT_017e9c10 | auVar30 & _DAT_017e9c00;
        local_f0 = (float)auVar36._0_4_ * local_b0 + local_c0;
        fStack_ec = (float)auVar36._4_4_ * fStack_ac + fStack_bc;
        fStack_e8 = (float)auVar36._8_4_ * fStack_a8 + fStack_b8;
        fStack_e4 = (float)auVar36._12_4_ * fStack_a4 + fStack_b4;
      }
      if ((int)local_20 < (int)local_64) {
        uVar13 = *(uint *)(local_74 + local_20 * 4);
        local_e0 = CONCAT44((float)(uVar13 >> 0xb & 0x7ff) * fStack_8c + fStack_9c,
                            (float)(uVar13 & 0x7ff) * local_90 + local_a0);
        uStack_d8 = CONCAT44(fStack_84 * 0.0 + fStack_94,
                             (float)(uVar13 >> 0x16) * fStack_88 + fStack_98);
      }
      else {
        uVar39 = *(ulonglong *)(local_70 + (uint)*(ushort *)(local_6c + local_20 * 2) * 8);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar39;
        auVar38._4_4_ = (uint)(uVar39 >> 0x2a);
        auVar32._0_4_ = (uint)(uVar39 << 0x10) >> 5;
        auVar32._4_4_ = (uint)(uVar39 >> 0x10) >> 5;
        auVar32._8_2_ = (ushort)(uVar39 >> 0x35);
        auVar32._10_6_ = 0;
        auVar38._0_4_ = auVar38._4_4_;
        auVar38._8_4_ = auVar38._4_4_;
        auVar38._12_4_ = auVar38._4_4_;
        auVar36 = auVar31 & _DAT_017e9c20 | auVar38 & _DAT_017e9c10 | auVar32 & _DAT_017e9c00;
        local_e0 = CONCAT44((float)auVar36._4_4_ * fStack_ac + fStack_bc,
                            (float)auVar36._0_4_ * local_b0 + local_c0);
        uStack_d8 = CONCAT44((float)auVar36._12_4_ * fStack_a4 + fStack_b4,
                             (float)auVar36._8_4_ * fStack_a8 + fStack_b8);
      }
    }
    fVar21 = local_100[local_48 * 4 + 1];
    fVar33 = local_100[local_48 * 4 + 2];
    fVar34 = local_100[local_48 * 4 + 3];
    local_14[0xc] = local_100[local_48 * 4];
    local_14[0xd] = fVar21;
    local_14[0xe] = fVar33;
    local_14[0xf] = fVar34;
    fVar21 = local_100[local_48 * 4 + 4];
    fVar33 = local_100[local_48 * 4 + 5];
    fVar34 = local_100[local_48 * 4 + 6];
    fVar35 = local_100[local_48 * 4 + 7];
    local_14[8] = local_110;
    local_14[9] = fStack_10c;
    local_14[10] = fStack_108;
    local_14[0xb] = fStack_104;
    local_14[0x10] = fVar21;
    local_14[0x11] = fVar33;
    local_14[0x12] = fVar34;
    local_14[0x13] = fVar35;
    local_24 = local_14;
  }
LAB_0124c832:
  if (*(char *)(local_28 + 10) == '\0') {
    local_24[3] = 0;
    return;
  }
  if (*(int *)(local_28 + 0x1c) != 0) {
    local_24[3] = *(undefined4 *)(*(int *)(local_28 + 0x18) + (local_44 >> 8 & 0xff) * 4);
    return;
  }
  local_24[3] = local_44 >> 8 & 0xff;
  return;
}

// 0124C890  hkpBvCompressedMeshShape::vf10  size=296  [between]
uint __thiscall hkpBvCompressedMeshShape::vf10(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 9) == '\0') {
    return 0;
  }
  FUN_01234610(param_1 + 0x2c);
  uVar1 = FUN_0124dbd0(param_2 >> 1 & 0x7f);
  uVar1 = uVar1 & 0xff;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + uVar1 * 4);
  }
  return uVar1;
}

// 0124C9C0  hkpBvCompressedMeshShapeGc::hkpBvCompressedMeshShapeGc  size=51  [between]
void hkpBvCompressedMeshShapeGc::hkpBvCompressedMeshShapeGc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  local_10 = vftable;
  FUN_01251ba0(param_1,&local_10,0,1);
  return;
}

// 0124CA00  FUN_0124ca00  size=62  [between]
uint __thiscall FUN_0124ca00(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x1e) == '\0') {
    return 0;
  }
  uVar1 = FUN_01251aa0(param_2);
  if (*(int *)(param_1 + 0x30) == 0) {
    return uVar1 >> 8 & 0xff;
  }
  return *(uint *)(*(int *)(param_1 + 0x2c) + (uVar1 >> 8 & 0xff) * 4);
}

// 0124CA40  hkpBvCompressedMeshShape::castAabb  size=124  [between]
void __thiscall
hkpBvCompressedMeshShape::castAabb
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
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
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_30;
  undefined1 local_20 [16];
  
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  FUN_01234610(param_1 + 0x40);
  local_30 = param_4;
  FUN_01266c90(local_20,param_1 + 0x40,param_2,param_3,&local_a0,0x3f800000);
  return;
}

// 0124CAC0  hkpBvCompressedMeshShape::queryAabbImpl  size=369  [between]
undefined4 __thiscall
hkpBvCompressedMeshShape::queryAabbImpl
          (int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_24 [4];
  int local_14;
  
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  FUN_01234610(param_1 + 0x40);
  local_70 = param_3;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  local_60 = &local_e0;
  local_6c = param_4;
  local_68 = 0;
  local_5c = 1;
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
  FUN_01266130(param_1 + 0x40,local_24,&local_60);
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
  return local_68;
}

// 0124CC40  hkpBvCompressedMeshShape::queryAabb  size=359  [between]
void __thiscall
hkpBvCompressedMeshShape::queryAabb(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined4 local_70;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_24 [4];
  int local_14;
  
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  FUN_01234610(param_1 + 0x40);
  local_70 = param_3;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_60 = &local_e0;
  local_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  local_5c = 1;
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
  FUN_01266800(param_1 + 0x40,local_24,&local_60);
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
  return;
}

// 0124CDB0  hkpBvCompressedMeshShape::castRayWithCollector  size=232  [between]
void __thiscall
hkpBvCompressedMeshShape::castRayWithCollector
          (int param_1,float *param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_80;
  float *local_7c;
  undefined4 local_60;
  int local_5c;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [16];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  fStack_14 = 0.0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_01234610(param_1 + 0x40);
  local_50 = *param_2;
  fStack_4c = param_2[1];
  fStack_48 = param_2[2];
  fStack_44 = param_2[3];
  fVar1 = param_2[4] - local_50;
  fVar2 = param_2[5] - fStack_4c;
  fVar3 = param_2[6] - fStack_48;
  fVar4 = param_2[7] - fStack_44;
  local_60 = param_3;
  local_40._4_4_ = fVar2;
  local_40._0_4_ = fVar1;
  local_40._8_4_ = fVar3;
  local_40._12_4_ = *(undefined4 *)(param_4 + 4);
  auVar5._4_4_ = fVar2;
  auVar5._0_4_ = fVar1;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar4;
  auVar5 = rcpps(local_40,auVar5);
  local_7c = param_2;
  local_5c = param_4;
  local_30 = -(uint)(local_20 == fVar1) & 0x7f7fffee |
             ~-(uint)(local_20 == fVar1) & (uint)((2.0 - auVar5._0_4_ * fVar1) * auVar5._0_4_);
  uStack_2c = -(uint)(fStack_1c == fVar2) & 0x7f7fffee |
              ~-(uint)(fStack_1c == fVar2) & (uint)((2.0 - auVar5._4_4_ * fVar2) * auVar5._4_4_);
  uStack_28 = -(uint)(fStack_18 == fVar3) & 0x7f7fffee |
              ~-(uint)(fStack_18 == fVar3) & (uint)((2.0 - auVar5._8_4_ * fVar3) * auVar5._8_4_);
  uStack_24 = -(uint)(fStack_14 == fVar4) & 0x7f7fffee |
              ~-(uint)(fStack_14 == fVar4) & (uint)((2.0 - auVar5._12_4_ * fVar4) * auVar5._12_4_);
  local_80 = param_1;
  FUN_01267820(&local_20,param_1 + 0x40,&local_50,&local_f0);
  return;
}

// 0124CEA0  hkpBvCompressedMeshShape::castRay  size=467  [between]
void __thiscall
hkpBvCompressedMeshShape::castRay(int param_1,undefined1 *param_2,float *param_3,float *param_4)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_b0;
  float *local_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50 [16];
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  local_14 = param_1 + 0x40;
  local_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  FUN_01234610(local_14);
  local_80 = *param_3;
  fStack_7c = param_3[1];
  fStack_78 = param_3[2];
  fStack_74 = param_3[3];
  local_70 = param_3[4] - local_80;
  fStack_6c = param_3[5] - fStack_7c;
  fStack_68 = param_3[6] - fStack_78;
  fVar9 = param_3[7] - fStack_74;
  fStack_64 = param_4[4];
  local_50._4_4_ = fStack_64;
  local_50._0_4_ = fStack_64;
  local_50._8_4_ = fStack_64;
  local_50._12_4_ = fStack_64;
  auVar10._4_4_ = fStack_6c;
  auVar10._0_4_ = local_70;
  auVar10._8_4_ = fStack_68;
  auVar10._12_4_ = fVar9;
  auVar10 = rcpps(local_50,auVar10);
  local_90 = 0;
  local_8c = 0;
  auVar12._0_4_ = auVar10._0_4_ * local_70;
  auVar12._4_4_ = auVar10._4_4_ * fStack_6c;
  auVar12._8_4_ = auVar10._8_4_ * fStack_68;
  auVar12._12_4_ = auVar10._12_4_ * fVar9;
  local_60 = -(uint)(local_30 == local_70) & 0x7f7fffee |
             ~-(uint)(local_30 == local_70) & (uint)((2.0 - auVar12._0_4_) * auVar10._0_4_);
  uStack_5c = -(uint)(fStack_2c == fStack_6c) & 0x7f7fffee |
              ~-(uint)(fStack_2c == fStack_6c) & (uint)((2.0 - auVar12._4_4_) * auVar10._4_4_);
  uStack_58 = -(uint)(fStack_28 == fStack_68) & 0x7f7fffee |
              ~-(uint)(fStack_28 == fStack_68) & (uint)((2.0 - auVar12._8_4_) * auVar10._8_4_);
  uStack_54 = -(uint)(fStack_24 == fVar9) & 0x7f7fffee |
              ~-(uint)(fStack_24 == fVar9) & (uint)((2.0 - auVar12._12_4_) * auVar10._12_4_);
  local_ac = param_3;
  local_b0 = param_1;
  FUN_01267820(local_40,local_14,&local_80,&local_120);
  if (local_40[0] < (float)local_50._0_4_) {
    fVar9 = param_3[4];
    fVar6 = param_3[5];
    fVar8 = param_3[6];
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = local_a0 * local_a0;
    fVar5 = fStack_9c * fStack_9c;
    fVar7 = fStack_98 * fStack_98;
    auVar11._0_4_ = fVar5 + fVar4 + fVar7;
    auVar11._4_4_ = fVar5 + fVar4 + fVar7;
    auVar11._8_4_ = fVar5 + fVar4 + fVar7;
    auVar11._12_4_ = fVar5 + fVar4 + fVar7;
    auVar10 = rsqrtps(auVar12,auVar11);
    fVar4 = auVar10._0_4_;
    fVar5 = auVar10._4_4_;
    fVar7 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    *param_4 = local_a0;
    param_4[1] = fStack_9c;
    param_4[2] = fStack_98;
    param_4[3] = fStack_94;
    local_a0 = (float)(~-(uint)(auVar11._0_4_ <= local_30) &
                      (uint)((3.0 - fVar4 * auVar11._0_4_ * fVar4) * fVar4 * 0.5)) * local_a0;
    fStack_9c = (float)(~-(uint)(auVar11._4_4_ <= fStack_2c) &
                       (uint)((3.0 - fVar5 * auVar11._4_4_ * fVar5) * fVar5 * 0.5)) * fStack_9c;
    fStack_98 = (float)(~-(uint)(auVar11._8_4_ <= fStack_28) &
                       (uint)((3.0 - fVar7 * auVar11._8_4_ * fVar7) * fVar7 * 0.5)) * fStack_98;
    fStack_94 = (float)(~-(uint)(auVar11._12_4_ <= fStack_24) &
                       (uint)((3.0 - fVar13 * auVar11._12_4_ * fVar13) * fVar13 * 0.5)) * fStack_94;
    fVar9 = local_a0 * (fVar9 - fVar1);
    fVar6 = fStack_9c * (fVar6 - fVar2);
    fVar8 = fStack_98 * (fVar8 - fVar3);
    *param_4 = local_a0;
    param_4[1] = fStack_9c;
    param_4[2] = fStack_98;
    param_4[3] = fStack_94;
    *param_4 = (float)(-(uint)(local_30 < fVar6 + fVar9 + fVar8) & 0x80000000 ^ (uint)local_a0);
    param_4[1] = (float)(-(uint)(fStack_2c < fVar6 + fVar9 + fVar8) & 0x80000000 ^ (uint)fStack_9c);
    param_4[2] = (float)(-(uint)(fStack_28 < fVar6 + fVar9 + fVar8) & 0x80000000 ^ (uint)fStack_98);
    param_4[3] = (float)(-(uint)(fStack_24 < fVar6 + fVar9 + fVar8) & 0x80000000 ^ (uint)fStack_94);
    param_4[4] = local_40[0];
    param_4[(int)param_4[0x10] + 8] = local_a8;
    param_4[0x10] = (float)((int)param_4[0x10] + 1);
    param_4[(int)param_4[0x10] + 8] = -NAN;
    param_4[0x10] = (float)((int)param_4[0x10] + -1);
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 0124D0A0  FUN_0124d0a0  size=26  [between]
void __thiscall FUN_0124d0a0(float *param_1,int *param_2,float *param_3)

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
  *param_2 = -(uint)(*param_3 == *param_1);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return;
}

// 0124D0C0  FUN_0124d0c0  size=23  [between]
void __thiscall FUN_0124d0c0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 <= 0.0);
  param_2[1] = -(uint)(fVar1 <= 0.0);
  param_2[2] = -(uint)(fVar2 <= 0.0);
  param_2[3] = -(uint)(fVar3 <= 0.0);
  return;
}

// 0124D110  FUN_0124d110  size=23  [between]
void __thiscall FUN_0124d110(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(0.0 < *param_1);
  param_2[1] = -(uint)(0.0 < fVar1);
  param_2[2] = -(uint)(0.0 < fVar2);
  param_2[3] = -(uint)(0.0 < fVar3);
  return;
}

// 0124D130  FUN_0124d130  size=14  [between]
void __thiscall FUN_0124d130(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D170  FUN_0124d170  size=66  [between]
void FUN_0124d170(float *param_1)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = (param_1[8] - fVar1) + param_1[4];
  fVar6 = (param_1[9] - fVar2) + param_1[5];
  fVar7 = (param_1[10] - fVar3) + param_1[6];
  fVar8 = (param_1[0xb] - fVar4) + param_1[7];
  fVar9 = param_1[0xc] - fVar1;
  fVar10 = param_1[0xd] - fVar2;
  fVar11 = param_1[0xe] - fVar3;
  fVar12 = param_1[0xf] - fVar4;
  param_1[0x10] = fVar5;
  param_1[0x11] = fVar6;
  param_1[0x12] = fVar7;
  param_1[0x13] = fVar8;
  param_1[0x14] = param_1[8] + fVar9;
  param_1[0x15] = param_1[9] + fVar10;
  param_1[0x16] = param_1[10] + fVar11;
  param_1[0x17] = param_1[0xb] + fVar12;
  param_1[0x18] = (param_1[4] - fVar1) + param_1[0xc];
  param_1[0x19] = (param_1[5] - fVar2) + param_1[0xd];
  param_1[0x1a] = (param_1[6] - fVar3) + param_1[0xe];
  param_1[0x1b] = (param_1[7] - fVar4) + param_1[0xf];
  param_1[0x1c] = fVar5 + fVar9;
  param_1[0x1d] = fVar6 + fVar10;
  param_1[0x1e] = fVar7 + fVar11;
  param_1[0x1f] = fVar8 + fVar12;
  return;
}

// 0124D1C0  FUN_0124d1c0  size=11  [between]
int FUN_0124d1c0(int param_1)

{
  return param_1 + 0x40;
}

// 0124D210  FUN_0124d210  size=12  [between]
void __thiscall FUN_0124d210(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D240  FUN_0124d240  size=12  [between]
void __thiscall FUN_0124d240(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D280  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::vf04  size=5  [between]
undefined1
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::CustomGeometryConverter::vf04(void)

{
  return 1;
}

// 0124D290  FUN_0124d290  size=18  [between]
int __thiscall FUN_0124d290(int param_1,uint param_2)

{
  return (*(int *)(param_1 + 0x60) << 7 | param_2) * 2;
}

// 0124D2C0  FUN_0124d2c0  size=43  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0124d2c0(float *param_1,float *param_2)

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
  fVar4 = param_2[5] * fRam01b24c34;
  fVar5 = param_2[6] * fRam01b24c38;
  fVar6 = param_2[7] * fRam01b24c3c;
  param_2[4] = param_2[4] * _DAT_01b24c30;
  param_2[5] = fVar4;
  param_2[6] = fVar5;
  param_2[7] = fVar6;
  return;
}

// 0124D2F0  FUN_0124d2f0  size=14  [between]
void __thiscall FUN_0124d2f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D300  FUN_0124d300  size=14  [between]
void __thiscall FUN_0124d300(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D310  FUN_0124d310  size=14  [between]
void __thiscall FUN_0124d310(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D320  FUN_0124d320  size=14  [between]
void __thiscall FUN_0124d320(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124D340  FUN_0124d340  size=16  [between]
int __thiscall FUN_0124d340(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x48) + param_2 * 4;
}

// 0124D350  FUN_0124d350  size=25  [between]
undefined1 __thiscall FUN_0124d350(int param_1,int param_2)

{
  return *(undefined1 *)
          (*(int *)(param_1 + 0x54) + 1 +
          (uint)*(byte *)(*(int *)(param_1 + 0x48) + param_2 * 4) * 2);
}

// 0124D370  FUN_0124d370  size=20  [between]
void __thiscall FUN_0124d370(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0124D3C0  FUN_0124d3c0  size=23  [between]
/* WARNING: Removing unreachable block (ram,0x0124d3ca) */

void __thiscall FUN_0124d3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}

// 0124D430  FUN_0124d430  size=18  [between]
int __thiscall FUN_0124d430(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0124D470  FUN_0124d470  size=15  [between]
int __thiscall FUN_0124d470(int *param_1,int param_2)

{
  return param_2 * 5 + *param_1;
}

// 0124D490  FUN_0124d490  size=28  [between]
void __thiscall FUN_0124d490(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 0124D680  FUN_0124d680  size=18  [between]
int __thiscall FUN_0124d680(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0124D820  FUN_0124d820  size=64  [between]
undefined4
FUN_0124d820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = hkpCylinderShape::hkpCylinderShape(param_2,param_3,param_4,param_5);
    *param_1 = *param_1 + 0x60;
    return uVar1;
  }
  *param_1 = *param_1 + 0x60;
  return 0;
}

// 0124D860  FUN_0124d860  size=43  [between]
undefined4 FUN_0124d860(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = hkpConvexVerticesShape::hkpConvexVerticesShape(param_2);
    *param_1 = *param_1 + 0x70;
    return uVar1;
  }
  *param_1 = *param_1 + 0x70;
  return 0;
}

// 0124D890  FUN_0124d890  size=35  [between]
int __thiscall FUN_0124d890(int param_1,int param_2)

{
  return (uint)CONCAT11(*(undefined1 *)(*(int *)(param_2 + 0x30) + 3),
                        *(undefined1 *)(*(int *)(param_2 + 0x30) + 4)) * 0x60 +
         *(int *)(param_1 + 0x3c);
}

// 0124DA70  hkpBvCompressedMeshShapeGc::vf04  size=116  [between]
ulonglong __thiscall hkpBvCompressedMeshShapeGc::vf04(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 == (int *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    iVar3 = 0;
    if (0 < (int)puVar2[1]) {
      piVar4 = (int *)*puVar2;
      do {
        if (*piVar4 == param_2) goto LAB_0124dad0;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < (int)puVar2[1]);
    }
    iVar3 = -1;
LAB_0124dad0:
    return (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == -1);
  }
  piVar1 = piVar4 + 1;
  iVar3 = 0;
  if (0 < *piVar1) {
    piVar4 = (int *)*piVar4;
    do {
      if (*piVar4 == param_2) goto LAB_0124da9f;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *piVar1);
  }
  iVar3 = -1;
LAB_0124da9f:
  return CONCAT44(piVar4,CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != -1));
}

// 0124DB00  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::vf00  size=34  [between]
undefined4 * __thiscall
hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
::CustomGeometryConverter::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0124DB30  FUN_0124db30  size=53  [between]
char __thiscall FUN_0124db30(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x48) + param_2 * 4;
  cVar2 = *(char *)(iVar1 + 2);
  if (*(char *)(iVar1 + 3) == cVar2) {
    return (cVar2 == *(char *)(*(int *)(param_1 + 0x48) + 1 + param_2 * 4)) * '\x02' + '\x01';
  }
  return '\x02';
}

// 0124DB70  FUN_0124db70  size=27  [between]
ushort __thiscall FUN_0124db70(int param_1,int param_2)

{
  return *(ushort *)
          (*(int *)(param_1 + 0x54) + (uint)*(byte *)(*(int *)(param_1 + 0x48) + param_2 * 4) * 2) &
         0xf;
}

// 0124DB90  FUN_0124db90  size=30  [between]
ushort __thiscall FUN_0124db90(int param_1,int param_2)

{
  return *(ushort *)
          (*(int *)(param_1 + 0x54) + (uint)*(byte *)(*(int *)(param_1 + 0x48) + param_2 * 4) * 2)
         >> 6 & 3;
}

// 0124DBB0  FUN_0124dbb0  size=30  [between]
ushort __thiscall FUN_0124dbb0(int param_1,int param_2)

{
  return *(ushort *)
          (*(int *)(param_1 + 0x54) + (uint)*(byte *)(*(int *)(param_1 + 0x48) + param_2 * 4) * 2)
         >> 4 & 3;
}

// 0124DBD0  FUN_0124dbd0  size=234  [__FILE__]
undefined4 __thiscall FUN_0124dbd0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 local_214 [524];
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x58);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x44) + 0x54) & 0xff;
  iVar6 = uVar5 - 1;
  iVar10 = 0;
  local_8 = 0;
  if (4 < uVar5) {
    do {
      iVar3 = iVar6 + iVar10 >> 1;
      iVar7 = param_2 - (uint)*(byte *)(iVar1 + 4 + iVar3 * 8);
      if (-1 < iVar7) {
        if (iVar7 < (int)(uint)*(byte *)(iVar1 + 5 + iVar3 * 8)) {
          puVar9 = (undefined4 *)(iVar1 + iVar3 * 8);
          goto LAB_0124dc5b;
        }
        iVar10 = iVar3 + 1;
        iVar3 = iVar6;
      }
      uVar5 = (iVar3 - iVar10) + 1;
      iVar6 = iVar3;
    } while (4 < (int)uVar5);
  }
  puVar8 = (undefined4 *)0x0;
  iVar6 = 0;
  puVar9 = (undefined4 *)(iVar1 + iVar10 * 8);
  if (0 < (int)uVar5) {
    do {
      if ((-1 < (int)(param_2 - (uint)*(byte *)(puVar9 + 1))) &&
         ((int)(param_2 - (uint)*(byte *)(puVar9 + 1)) < (int)(uint)*(byte *)((int)puVar9 + 5)))
      goto LAB_0124dc5b;
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 2;
    } while (iVar6 < (int)uVar5);
  }
LAB_0124dc5f:
  hkErrStream::hkErrStream(local_214,0x200);
  FUN_01018d00("Cannot find primitive data");
  iVar10 = (**(code **)(*DAT_01f8fc58 + 0xc))
                     (3,0xb4544b72,local_214,
                      "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                      ,0x203);
  if (iVar10 != 0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  hkBaseObject::hkBaseObject_38();
  puVar9 = puVar8;
LAB_0124dcb2:
  return *puVar9;
LAB_0124dc5b:
  puVar8 = puVar9;
  if (puVar9 != (undefined4 *)0x0) goto LAB_0124dcb2;
  goto LAB_0124dc5f;
}

// 0124DCC0  FUN_0124dcc0  size=71  [between]
bool __thiscall FUN_0124dcc0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x48) + param_2 * 4;
  cVar2 = *(char *)(iVar1 + 2);
  if (*(char *)(iVar1 + 3) == cVar2) {
    return (uint)(cVar2 == *(char *)(*(int *)(param_1 + 0x48) + 1 + param_2 * 4)) * 2 != -1;
  }
  return true;
}

// 0124DD10  FUN_0124dd10  size=27  [between]
int __thiscall FUN_0124dd10(int param_1,int param_2,int param_3)

{
  return *(int *)(param_1 + 0x54) + 4 +
         ((uint)*(byte *)(*(int *)(param_1 + 0x48) + param_2 * 4) + param_3) * 2;
}

// 0124DD30  FUN_0124dd30  size=21  [between]
void __thiscall FUN_0124dd30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[0x10] = 0xffffffff;
  return;
}

// 0124DD50  FUN_0124dd50  size=14  [between]
void __thiscall FUN_0124dd50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0124DD60  FUN_0124dd60  size=21  [between]
void __thiscall FUN_0124dd60(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 0124DD80  FUN_0124dd80  size=21  [between]
void __thiscall FUN_0124dd80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  return;
}

// 0124DDA0  FUN_0124dda0  size=78  [between]
void FUN_0124dda0(float *param_1,ushort *param_2,float *param_3)

{
  ushort uVar1;
  uint6 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar2 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
  uVar9 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar2) & 0x1fffffffff;
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *param_3 = (float)(int)uVar9 * param_1[4] + *param_1;
  param_3[1] = (float)(int)(uVar9 >> 0x20) * fVar3 + fVar6;
  param_3[2] = (float)(ushort)(uVar2 >> 0x20) * fVar4 + fVar7;
  param_3[3] = fVar5 * 0.0 + fVar8;
  return;
}

// 0124DE10  FUN_0124de10  size=53  [between]
int __thiscall FUN_0124de10(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0124DE60  FUN_0124de60  size=64  [between]
void FUN_0124de60(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0124DEA0  FUN_0124dea0  size=75  [between]
void FUN_0124dea0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0124DF00  FUN_0124df00  size=32  [between]
void __thiscall FUN_0124df00(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 0124DF30  FUN_0124df30  size=63  [between]
void __thiscall FUN_0124df30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0124DF70  FUN_0124df70  size=13  [between]
void __thiscall FUN_0124df70(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0124DF80  FUN_0124df80  size=54  [between]
int __thiscall FUN_0124df80(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 0124DFC0  FUN_0124dfc0  size=33  [between]
void FUN_0124dfc0(undefined4 *param_1,undefined4 *param_2)

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
  param_2[8] = param_1[8];
  return;
}

// 0124E000  FUN_0124e000  size=118  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0124e000(int param_1,float *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar6;
  float fVar8;
  undefined1 auVar3 [16];
  undefined4 uVar5;
  undefined4 uVar7;
  undefined1 auVar4 [16];
  undefined4 uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar2 = CONCAT44(*(float *)(param_1 + 0x34) * (param_2[5] - *(float *)(param_1 + 0x14)),
                   *(float *)(param_1 + 0x30) * (param_2[4] - *(float *)(param_1 + 0x10)));
  fVar6 = *(float *)(param_1 + 0x38) * (param_2[6] - *(float *)(param_1 + 0x18));
  fVar8 = *(float *)(param_1 + 0x3c) * (param_2[7] - *(float *)(param_1 + 0x1c));
  auVar9._0_8_ = CONCAT44(*(float *)(param_1 + 0x34) * (param_2[1] - *(float *)(param_1 + 0x14)),
                          *(float *)(param_1 + 0x30) * (*param_2 - *(float *)(param_1 + 0x10)));
  auVar9._8_4_ = *(float *)(param_1 + 0x38) * (param_2[2] - *(float *)(param_1 + 0x18));
  auVar9._12_4_ = *(float *)(param_1 + 0x3c) * (param_2[3] - *(float *)(param_1 + 0x1c));
  auVar17._8_4_ = auVar9._8_4_;
  auVar17._0_8_ = auVar9._0_8_;
  auVar17._12_4_ = auVar9._12_4_;
  auVar3._8_4_ = fVar6;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = fVar8;
  auVar10 = maxps(auVar9,auVar3);
  auVar11._8_4_ = fVar6;
  auVar11._0_8_ = uVar2;
  auVar11._12_4_ = fVar8;
  auVar3 = minps(auVar17,auVar11);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = auVar10._4_4_;
  uVar12 = auVar10._8_4_;
  auVar13._4_4_ = uVar12;
  auVar13._0_4_ = uVar12;
  auVar13._8_4_ = uVar12;
  auVar13._12_4_ = uVar12;
  auVar16._4_4_ = uVar7;
  auVar16._0_4_ = uVar7;
  auVar16._8_4_ = uVar7;
  auVar16._12_4_ = uVar7;
  auVar17 = minps(auVar16,auVar13);
  auVar15._4_4_ = uVar5;
  auVar15._0_4_ = uVar5;
  auVar15._8_4_ = uVar5;
  auVar15._12_4_ = uVar5;
  auVar11 = minps(auVar10,auVar15);
  uVar5 = auVar3._4_4_;
  uVar7 = auVar3._8_4_;
  auVar14._4_4_ = uVar5;
  auVar14._0_4_ = uVar5;
  auVar14._8_4_ = uVar5;
  auVar14._12_4_ = uVar5;
  auVar3 = maxps(auVar3,_DAT_01701b10);
  auVar10._4_4_ = uVar7;
  auVar10._0_4_ = uVar7;
  auVar10._8_4_ = uVar7;
  auVar10._12_4_ = uVar7;
  auVar15 = maxps(auVar14,auVar10);
  auVar11 = minps(auVar11,auVar17);
  auVar3 = maxps(auVar3,auVar15);
  auVar4._4_4_ = -(uint)(auVar3._4_4_ <= auVar11._4_4_);
  auVar4._0_4_ = -(uint)(auVar3._0_4_ <= auVar11._0_4_);
  auVar4._8_4_ = -(uint)(auVar3._8_4_ <= auVar11._8_4_);
  auVar4._12_4_ = -(uint)(auVar3._12_4_ <= auVar11._12_4_);
  uVar1 = movmskps(param_2,auVar4);
  return uVar1 & 1;
}

// 0124E0C0  FUN_0124e0c0  size=123  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0124e0c0(int param_1,float *param_2)

{
  uint uVar1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar10 = *(float *)(param_1 + 0x30) *
           ((param_2[4] + *(float *)(param_1 + 0x40)) - *(float *)(param_1 + 0x10));
  fVar11 = *(float *)(param_1 + 0x34) *
           ((param_2[5] + *(float *)(param_1 + 0x44)) - *(float *)(param_1 + 0x14));
  fVar12 = *(float *)(param_1 + 0x38) *
           ((param_2[6] + *(float *)(param_1 + 0x48)) - *(float *)(param_1 + 0x18));
  fVar13 = *(float *)(param_1 + 0x3c) *
           ((param_2[7] + *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x1c));
  auVar6._0_8_ = CONCAT44(*(float *)(param_1 + 0x34) *
                          ((param_2[1] - *(float *)(param_1 + 0x44)) - *(float *)(param_1 + 0x14)),
                          *(float *)(param_1 + 0x30) *
                          ((*param_2 - *(float *)(param_1 + 0x40)) - *(float *)(param_1 + 0x10)));
  auVar6._8_4_ = *(float *)(param_1 + 0x38) *
                 ((param_2[2] - *(float *)(param_1 + 0x48)) - *(float *)(param_1 + 0x18));
  auVar6._12_4_ =
       *(float *)(param_1 + 0x3c) *
       ((param_2[3] - *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x1c));
  auVar18._8_4_ = auVar6._8_4_;
  auVar18._0_8_ = auVar6._0_8_;
  auVar18._12_4_ = auVar6._12_4_;
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar10;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar13;
  auVar7 = maxps(auVar6,auVar2);
  auVar8._4_4_ = fVar11;
  auVar8._0_4_ = fVar10;
  auVar8._8_4_ = fVar12;
  auVar8._12_4_ = fVar13;
  auVar2 = minps(auVar18,auVar8);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = auVar7._4_4_;
  uVar9 = auVar7._8_4_;
  auVar14._4_4_ = uVar9;
  auVar14._0_4_ = uVar9;
  auVar14._8_4_ = uVar9;
  auVar14._12_4_ = uVar9;
  auVar17._4_4_ = uVar5;
  auVar17._0_4_ = uVar5;
  auVar17._8_4_ = uVar5;
  auVar17._12_4_ = uVar5;
  auVar18 = minps(auVar17,auVar14);
  auVar16._4_4_ = uVar4;
  auVar16._0_4_ = uVar4;
  auVar16._8_4_ = uVar4;
  auVar16._12_4_ = uVar4;
  auVar8 = minps(auVar7,auVar16);
  uVar4 = auVar2._4_4_;
  uVar5 = auVar2._8_4_;
  auVar15._4_4_ = uVar4;
  auVar15._0_4_ = uVar4;
  auVar15._8_4_ = uVar4;
  auVar15._12_4_ = uVar4;
  auVar2 = maxps(auVar2,_DAT_01701b10);
  auVar7._4_4_ = uVar5;
  auVar7._0_4_ = uVar5;
  auVar7._8_4_ = uVar5;
  auVar7._12_4_ = uVar5;
  auVar16 = maxps(auVar15,auVar7);
  auVar8 = minps(auVar8,auVar18);
  auVar2 = maxps(auVar2,auVar16);
  auVar3._4_4_ = -(uint)(auVar2._4_4_ <= auVar8._4_4_);
  auVar3._0_4_ = -(uint)(auVar2._0_4_ <= auVar8._0_4_);
  auVar3._8_4_ = -(uint)(auVar2._8_4_ <= auVar8._8_4_);
  auVar3._12_4_ = -(uint)(auVar2._12_4_ <= auVar8._12_4_);
  uVar1 = movmskps(param_2,auVar3);
  return uVar1 & 1;
}

// 0124E180  FUN_0124e180  size=63  [between]
undefined4 __thiscall FUN_0124e180(int param_1,float *param_2)

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

// 0124E210  FUN_0124e210  size=63  [between]
undefined4 __thiscall FUN_0124e210(int param_1,float *param_2)

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

// 0124E290  FUN_0124e290  size=15  [between]
int __thiscall FUN_0124e290(int *param_1,int param_2)

{
  return param_2 * 5 + *param_1;
}

// 0124E2A0  FUN_0124e2a0  size=11  [between]
undefined4 FUN_0124e2a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0124E2B0  FUN_0124e2b0  size=11  [between]
undefined4 FUN_0124e2b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 0124E2C0  FUN_0124e2c0  size=153  [between]
byte __fastcall FUN_0124e2c0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124E360  FUN_0124e360  size=153  [between]
byte __fastcall FUN_0124e360(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124E400  FUN_0124e400  size=37  [between]
void __thiscall FUN_0124e400(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *param_2 = param_1[4];
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[4] = param_1[8];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[0xc] = *param_1;
  param_2[8] = 0;
  return;
}

// 0124E430  FUN_0124e430  size=256  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0124e430(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_2[1] - fVar2),fVar6 * (*param_2 - fVar1));
  auVar16._8_4_ = fVar8 * (param_2[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_2[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_2[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_2[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_2[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_2[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_2[0x11] - fVar2),fVar6 * (param_2[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_2[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_2[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_2[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_2[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_2[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_2[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_2,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_1 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 0124E680  FUN_0124e680  size=32  [between]
void __thiscall FUN_0124e680(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 0124E6C0  FUN_0124e6c0  size=46  [between]
void __thiscall FUN_0124e6c0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_3[8] = param_2[8];
  param_3[0xc] = *param_1 + param_2[8] * 4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_3[4] = param_2[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  return;
}

// 0124E6F0  FUN_0124e6f0  size=33  [between]
void FUN_0124e6f0(undefined4 *param_1,undefined4 *param_2)

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
  param_2[8] = param_1[8];
  return;
}

// 0124E720  FUN_0124e720  size=13  [between]
void __thiscall FUN_0124e720(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0124E730  FUN_0124e730  size=54  [between]
int __thiscall FUN_0124e730(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 0124E780  FUN_0124e780  size=118  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0124e780(int param_1,float *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar6;
  float fVar8;
  undefined1 auVar3 [16];
  undefined4 uVar5;
  undefined4 uVar7;
  undefined1 auVar4 [16];
  undefined4 uVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar2 = CONCAT44(*(float *)(param_1 + 0x34) * (param_2[5] - *(float *)(param_1 + 0x14)),
                   *(float *)(param_1 + 0x30) * (param_2[4] - *(float *)(param_1 + 0x10)));
  fVar6 = *(float *)(param_1 + 0x38) * (param_2[6] - *(float *)(param_1 + 0x18));
  fVar8 = *(float *)(param_1 + 0x3c) * (param_2[7] - *(float *)(param_1 + 0x1c));
  auVar9._0_8_ = CONCAT44(*(float *)(param_1 + 0x34) * (param_2[1] - *(float *)(param_1 + 0x14)),
                          *(float *)(param_1 + 0x30) * (*param_2 - *(float *)(param_1 + 0x10)));
  auVar9._8_4_ = *(float *)(param_1 + 0x38) * (param_2[2] - *(float *)(param_1 + 0x18));
  auVar9._12_4_ = *(float *)(param_1 + 0x3c) * (param_2[3] - *(float *)(param_1 + 0x1c));
  auVar17._8_4_ = auVar9._8_4_;
  auVar17._0_8_ = auVar9._0_8_;
  auVar17._12_4_ = auVar9._12_4_;
  auVar3._8_4_ = fVar6;
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = fVar8;
  auVar10 = maxps(auVar9,auVar3);
  auVar11._8_4_ = fVar6;
  auVar11._0_8_ = uVar2;
  auVar11._12_4_ = fVar8;
  auVar3 = minps(auVar17,auVar11);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = auVar10._4_4_;
  uVar12 = auVar10._8_4_;
  auVar13._4_4_ = uVar12;
  auVar13._0_4_ = uVar12;
  auVar13._8_4_ = uVar12;
  auVar13._12_4_ = uVar12;
  auVar16._4_4_ = uVar7;
  auVar16._0_4_ = uVar7;
  auVar16._8_4_ = uVar7;
  auVar16._12_4_ = uVar7;
  auVar17 = minps(auVar16,auVar13);
  auVar15._4_4_ = uVar5;
  auVar15._0_4_ = uVar5;
  auVar15._8_4_ = uVar5;
  auVar15._12_4_ = uVar5;
  auVar11 = minps(auVar10,auVar15);
  uVar5 = auVar3._4_4_;
  uVar7 = auVar3._8_4_;
  auVar14._4_4_ = uVar5;
  auVar14._0_4_ = uVar5;
  auVar14._8_4_ = uVar5;
  auVar14._12_4_ = uVar5;
  auVar3 = maxps(auVar3,_DAT_01701b10);
  auVar10._4_4_ = uVar7;
  auVar10._0_4_ = uVar7;
  auVar10._8_4_ = uVar7;
  auVar10._12_4_ = uVar7;
  auVar15 = maxps(auVar14,auVar10);
  auVar11 = minps(auVar11,auVar17);
  auVar3 = maxps(auVar3,auVar15);
  auVar4._4_4_ = -(uint)(auVar3._4_4_ <= auVar11._4_4_);
  auVar4._0_4_ = -(uint)(auVar3._0_4_ <= auVar11._0_4_);
  auVar4._8_4_ = -(uint)(auVar3._8_4_ <= auVar11._8_4_);
  auVar4._12_4_ = -(uint)(auVar3._12_4_ <= auVar11._12_4_);
  uVar1 = movmskps(param_2,auVar4);
  return uVar1 & 1;
}

// 0124E840  FUN_0124e840  size=123  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0124e840(int param_1,float *param_2)

{
  uint uVar1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar10 = *(float *)(param_1 + 0x30) *
           ((param_2[4] + *(float *)(param_1 + 0x40)) - *(float *)(param_1 + 0x10));
  fVar11 = *(float *)(param_1 + 0x34) *
           ((param_2[5] + *(float *)(param_1 + 0x44)) - *(float *)(param_1 + 0x14));
  fVar12 = *(float *)(param_1 + 0x38) *
           ((param_2[6] + *(float *)(param_1 + 0x48)) - *(float *)(param_1 + 0x18));
  fVar13 = *(float *)(param_1 + 0x3c) *
           ((param_2[7] + *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x1c));
  auVar6._0_8_ = CONCAT44(*(float *)(param_1 + 0x34) *
                          ((param_2[1] - *(float *)(param_1 + 0x44)) - *(float *)(param_1 + 0x14)),
                          *(float *)(param_1 + 0x30) *
                          ((*param_2 - *(float *)(param_1 + 0x40)) - *(float *)(param_1 + 0x10)));
  auVar6._8_4_ = *(float *)(param_1 + 0x38) *
                 ((param_2[2] - *(float *)(param_1 + 0x48)) - *(float *)(param_1 + 0x18));
  auVar6._12_4_ =
       *(float *)(param_1 + 0x3c) *
       ((param_2[3] - *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x1c));
  auVar18._8_4_ = auVar6._8_4_;
  auVar18._0_8_ = auVar6._0_8_;
  auVar18._12_4_ = auVar6._12_4_;
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar10;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar13;
  auVar7 = maxps(auVar6,auVar2);
  auVar8._4_4_ = fVar11;
  auVar8._0_4_ = fVar10;
  auVar8._8_4_ = fVar12;
  auVar8._12_4_ = fVar13;
  auVar2 = minps(auVar18,auVar8);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = auVar7._4_4_;
  uVar9 = auVar7._8_4_;
  auVar14._4_4_ = uVar9;
  auVar14._0_4_ = uVar9;
  auVar14._8_4_ = uVar9;
  auVar14._12_4_ = uVar9;
  auVar17._4_4_ = uVar5;
  auVar17._0_4_ = uVar5;
  auVar17._8_4_ = uVar5;
  auVar17._12_4_ = uVar5;
  auVar18 = minps(auVar17,auVar14);
  auVar16._4_4_ = uVar4;
  auVar16._0_4_ = uVar4;
  auVar16._8_4_ = uVar4;
  auVar16._12_4_ = uVar4;
  auVar8 = minps(auVar7,auVar16);
  uVar4 = auVar2._4_4_;
  uVar5 = auVar2._8_4_;
  auVar15._4_4_ = uVar4;
  auVar15._0_4_ = uVar4;
  auVar15._8_4_ = uVar4;
  auVar15._12_4_ = uVar4;
  auVar2 = maxps(auVar2,_DAT_01701b10);
  auVar7._4_4_ = uVar5;
  auVar7._0_4_ = uVar5;
  auVar7._8_4_ = uVar5;
  auVar7._12_4_ = uVar5;
  auVar16 = maxps(auVar15,auVar7);
  auVar8 = minps(auVar8,auVar18);
  auVar2 = maxps(auVar2,auVar16);
  auVar3._4_4_ = -(uint)(auVar2._4_4_ <= auVar8._4_4_);
  auVar3._0_4_ = -(uint)(auVar2._0_4_ <= auVar8._0_4_);
  auVar3._8_4_ = -(uint)(auVar2._8_4_ <= auVar8._8_4_);
  auVar3._12_4_ = -(uint)(auVar2._12_4_ <= auVar8._12_4_);
  uVar1 = movmskps(param_2,auVar3);
  return uVar1 & 1;
}

// 0124E900  FUN_0124e900  size=63  [between]
undefined4 __thiscall FUN_0124e900(int param_1,float *param_2)

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

// 0124E990  FUN_0124e990  size=63  [between]
undefined4 __thiscall FUN_0124e990(int param_1,float *param_2)

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

// 0124EA10  FUN_0124ea10  size=11  [between]
undefined4 FUN_0124ea10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0124EA20  FUN_0124ea20  size=11  [between]
undefined4 FUN_0124ea20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 0124EA30  FUN_0124ea30  size=153  [between]
byte __fastcall FUN_0124ea30(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124EAD0  FUN_0124ead0  size=153  [between]
byte __fastcall FUN_0124ead0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124EB70  FUN_0124eb70  size=37  [between]
void __thiscall FUN_0124eb70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *param_2 = param_1[4];
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[4] = param_1[8];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[0xc] = *param_1;
  param_2[8] = 0;
  return;
}

// 0124EBA0  FUN_0124eba0  size=256  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0124eba0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_2[1] - fVar2),fVar6 * (*param_2 - fVar1));
  auVar16._8_4_ = fVar8 * (param_2[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_2[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_2[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_2[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_2[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_2[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_2[0x11] - fVar2),fVar6 * (param_2[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_2[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_2[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_2[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_2[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_2[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_2[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_2,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_1 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 0124EFD0  FUN_0124efd0  size=9  [between]
void FUN_0124efd0(void)

{
  FUN_01234610();
  return;
}

// 0124EFE0  FUN_0124efe0  size=26  [between]
void __thiscall FUN_0124efe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01234610(param_2);
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return;
}

// 0124F000  FUN_0124f000  size=159  [between]
void __thiscall FUN_0124f000(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
  (**(code **)**(undefined4 **)(param_1 + 0x70))((*(int *)(param_1 + 0x60) << 7 | uVar3) * 2);
  iVar2 = *(int *)(param_1 + 0x48) + uVar3 * 4;
  if (*(char *)(iVar2 + 3) == *(char *)(iVar2 + 2)) {
    iVar2 = (uint)(*(char *)(iVar2 + 2) == *(char *)(iVar2 + 1)) * 2 + 1;
  }
  else {
    iVar2 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar2 * 4)) {
    (**(code **)**(undefined4 **)(param_1 + 0x70))((*(int *)(param_1 + 0x60) << 7 | uVar3) * 2 | 1);
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x1c);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  return;
}

// 0124F0A0  FUN_0124f0a0  size=26  [between]
void __thiscall FUN_0124f0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01234610(param_2);
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return;
}

// 0124F0C0  FUN_0124f0c0  size=39  [between]
void __thiscall FUN_0124f0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01234610(param_2);
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0x74) = param_4;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

// 0124F0F0  FUN_0124f0f0  size=142  [between]
void __thiscall FUN_0124f0f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
  if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x74)) {
    *(uint *)(*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x78) * 4) =
         (*(int *)(param_1 + 0x60) << 7 | uVar3) * 2;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  iVar2 = *(int *)(param_1 + 0x48) + uVar3 * 4;
  cVar1 = *(char *)(iVar2 + 2);
  if (*(char *)(iVar2 + 3) == cVar1) {
    iVar2 = (uint)(cVar1 == *(char *)(*(int *)(param_1 + 0x48) + 1 + uVar3 * 4)) * 2 + 1;
  }
  else {
    iVar2 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar2 * 4)) {
    if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x74)) {
      *(uint *)(*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x78) * 4) =
           (*(int *)(param_1 + 0x60) << 7 | uVar3) * 2 | 1;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  return;
}

// 0124F180  FUN_0124f180  size=52  [between]
void __thiscall
FUN_0124f180(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_01234610(param_2 + 0x40);
  *(int *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  *(undefined4 *)(param_1 + 0x94) = param_5;
  return;
}

// 0124F1C0  hkpTriangleShape::hkpTriangleShape  size=91  [between]
undefined4 *
hkpTriangleShape::hkpTriangleShape
          (int *param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)((int)puVar1 + 6) = 1;
    *(undefined2 *)(puVar1 + 2) = 0x402;
    *(undefined2 *)(puVar1 + 5) = param_4;
    puVar1[4] = param_2;
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    *(undefined1 *)((int)puVar1 + 0x16) = param_3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined1 *)((int)puVar1 + 0x17) = 0;
    *param_1 = *param_1 + 0x60;
    return puVar1;
  }
  *param_1 = *param_1 + 0x60;
  return (undefined4 *)0x0;
}

// 0124F220  hkpBvCompressedMeshShapeGc::vf00  size=34  [between]
undefined4 * __thiscall hkpBvCompressedMeshShapeGc::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
             ::CustomGeometryConverter::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0124F250  FUN_0124f250  size=44  [between]
undefined4 * __thiscall FUN_0124f250(undefined4 *param_1,int param_2)

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
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_2 != 0) {
    FUN_01234610(param_2);
  }
  return param_1;
}

// 0124F280  FUN_0124f280  size=53  [between]
undefined4 __thiscall FUN_0124f280(int param_1,int param_2)

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

// 0124F2C0  FUN_0124f2c0  size=313  [between]
/* WARNING: Removing unreachable block (ram,0x0124f3bd) */
/* WARNING: Removing unreachable block (ram,0x0124f34f) */
/* WARNING: Removing unreachable block (ram,0x0124f30d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0124f2c0(float *param_1,int param_2,int param_3,float *param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar12 = _DAT_017e9c20;
  auVar11 = _DAT_017e9c10;
  auVar10 = _DAT_017e9c00;
  iVar13 = 0;
  if (0 < param_2 + -1) {
    fVar2 = param_1[4];
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar6 = *param_1;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    fVar9 = param_1[3];
    pfVar14 = param_4;
    do {
      uVar1 = *(ulonglong *)(param_3 + iVar13 * 8);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar1;
      auVar16._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar16._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar16._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar16._10_6_ = 0;
      auVar21._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar21._0_4_ = auVar21._4_4_;
      auVar21._8_4_ = auVar21._4_4_;
      auVar21._12_4_ = auVar21._4_4_;
      auVar15 = auVar15 & auVar12 | auVar21 & auVar11 | auVar16 & auVar10;
      *pfVar14 = (float)auVar15._0_4_ * fVar2 + fVar6;
      pfVar14[1] = (float)auVar15._4_4_ * fVar3 + fVar7;
      pfVar14[2] = (float)auVar15._8_4_ * fVar4 + fVar8;
      pfVar14[3] = (float)auVar15._12_4_ * fVar5 + fVar9;
      uVar1 = *(ulonglong *)(param_3 + 8 + iVar13 * 8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar1;
      auVar22._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar18._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar18._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar18._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar18._10_6_ = 0;
      auVar22._0_4_ = auVar22._4_4_;
      auVar22._8_4_ = auVar22._4_4_;
      auVar22._12_4_ = auVar22._4_4_;
      auVar15 = auVar17 & auVar12 | auVar22 & auVar11 | auVar18 & auVar10;
      pfVar14[4] = (float)auVar15._0_4_ * fVar2 + fVar6;
      pfVar14[5] = (float)auVar15._4_4_ * fVar3 + fVar7;
      pfVar14[6] = (float)auVar15._8_4_ * fVar4 + fVar8;
      pfVar14[7] = (float)auVar15._12_4_ * fVar5 + fVar9;
      iVar13 = iVar13 + 2;
      pfVar14 = pfVar14 + 8;
    } while (iVar13 < param_2 + -1);
  }
  if (iVar13 < param_2) {
    fVar2 = param_1[4];
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar6 = *param_1;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    fVar9 = param_1[3];
    param_4 = param_4 + iVar13 * 4;
    do {
      uVar1 = *(ulonglong *)(param_3 + iVar13 * 8);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar1;
      auVar23._4_4_ = (uint)(uVar1 >> 0x2a);
      auVar20._0_4_ = (uint)(uVar1 << 0x10) >> 5;
      auVar20._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
      auVar20._8_2_ = (ushort)(uVar1 >> 0x35);
      auVar20._10_6_ = 0;
      auVar23._0_4_ = auVar23._4_4_;
      auVar23._8_4_ = auVar23._4_4_;
      auVar23._12_4_ = auVar23._4_4_;
      auVar15 = auVar19 & auVar12 | auVar23 & auVar11 | auVar20 & auVar10;
      *param_4 = (float)auVar15._0_4_ * fVar2 + fVar6;
      param_4[1] = (float)auVar15._4_4_ * fVar3 + fVar7;
      param_4[2] = (float)auVar15._8_4_ * fVar4 + fVar8;
      param_4[3] = (float)auVar15._12_4_ * fVar5 + fVar9;
      iVar13 = iVar13 + 1;
      param_4 = param_4 + 4;
    } while (iVar13 < param_2);
  }
  return;
}

// 0124F400  FUN_0124f400  size=313  [between]
void FUN_0124f400(float *param_1,int param_2,int param_3,float *param_4)

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
  int iVar10;
  float *pfVar11;
  
  iVar10 = 0;
  if (0 < param_2 + -1) {
    fVar2 = param_1[4];
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar6 = *param_1;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    fVar9 = param_1[3];
    pfVar11 = param_4;
    do {
      uVar1 = *(uint *)(param_3 + iVar10 * 4);
      *pfVar11 = (float)(uVar1 & 0x7ff) * fVar2 + fVar6;
      pfVar11[1] = (float)(uVar1 >> 0xb & 0x7ff) * fVar3 + fVar7;
      pfVar11[2] = (float)(uVar1 >> 0x16) * fVar4 + fVar8;
      pfVar11[3] = fVar5 * 0.0 + fVar9;
      uVar1 = *(uint *)(param_3 + 4 + iVar10 * 4);
      pfVar11[4] = (float)(uVar1 & 0x7ff) * fVar2 + fVar6;
      pfVar11[5] = (float)(uVar1 >> 0xb & 0x7ff) * fVar3 + fVar7;
      pfVar11[6] = (float)(uVar1 >> 0x16) * fVar4 + fVar8;
      pfVar11[7] = fVar5 * 0.0 + fVar9;
      iVar10 = iVar10 + 2;
      pfVar11 = pfVar11 + 8;
    } while (iVar10 < param_2 + -1);
  }
  if (iVar10 < param_2) {
    fVar2 = param_1[4];
    fVar3 = param_1[5];
    fVar4 = param_1[6];
    fVar5 = param_1[7];
    fVar6 = *param_1;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    fVar9 = param_1[3];
    param_4 = param_4 + iVar10 * 4;
    do {
      uVar1 = *(uint *)(param_3 + iVar10 * 4);
      *param_4 = (float)(uVar1 & 0x7ff) * fVar2 + fVar6;
      param_4[1] = (float)(uVar1 >> 0xb & 0x7ff) * fVar3 + fVar7;
      param_4[2] = (float)(uVar1 >> 0x16) * fVar4 + fVar8;
      param_4[3] = fVar5 * 0.0 + fVar9;
      iVar10 = iVar10 + 1;
      param_4 = param_4 + 4;
    } while (iVar10 < param_2);
  }
  return;
}

// 0124F540  FUN_0124f540  size=313  [between]
void FUN_0124f540(float *param_1,int param_2,int param_3,float *param_4)

{
  ushort uVar1;
  uint6 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  float *local_8;
  
  iVar11 = 0;
  if (param_2 != 1 && -1 < param_2 + -1) {
    fVar3 = param_1[4];
    fVar4 = param_1[5];
    fVar5 = param_1[6];
    fVar6 = param_1[7];
    fVar7 = *param_1;
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    fVar10 = param_1[3];
    local_8 = param_4;
    do {
      uVar1 = *(ushort *)(param_3 + iVar11 * 2);
      iVar11 = iVar11 + 2;
      uVar2 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
      uVar12 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar2) & 0x1fffffffff;
      *local_8 = (float)(int)uVar12 * fVar3 + fVar7;
      local_8[1] = (float)(int)(uVar12 >> 0x20) * fVar4 + fVar8;
      local_8[2] = (float)(ushort)(uVar2 >> 0x20) * fVar5 + fVar9;
      local_8[3] = fVar6 * 0.0 + fVar10;
      uVar1 = *(ushort *)(param_3 + -2 + iVar11 * 2);
      uVar2 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
      uVar12 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar2) & 0x1fffffffff;
      local_8[4] = (float)(int)uVar12 * fVar3 + fVar7;
      local_8[5] = (float)(int)(uVar12 >> 0x20) * fVar4 + fVar8;
      local_8[6] = (float)(ushort)(uVar2 >> 0x20) * fVar5 + fVar9;
      local_8[7] = fVar6 * 0.0 + fVar10;
      local_8 = local_8 + 8;
    } while (iVar11 < param_2 + -1);
  }
  if (iVar11 < param_2) {
    fVar3 = param_1[4];
    fVar4 = param_1[5];
    fVar5 = param_1[6];
    fVar6 = param_1[7];
    fVar7 = *param_1;
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    fVar10 = param_1[3];
    param_1 = param_4 + iVar11 * 4;
    do {
      uVar1 = *(ushort *)(param_3 + iVar11 * 2);
      iVar11 = iVar11 + 1;
      uVar2 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
      uVar12 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar2) & 0x1fffffffff;
      *param_1 = (float)(int)uVar12 * fVar3 + fVar7;
      param_1[1] = (float)(int)(uVar12 >> 0x20) * fVar4 + fVar8;
      param_1[2] = (float)(ushort)(uVar2 >> 0x20) * fVar5 + fVar9;
      param_1[3] = fVar6 * 0.0 + fVar10;
      param_1 = param_1 + 4;
    } while (iVar11 < param_2);
  }
  return;
}

// 0124F680  FUN_0124f680  size=48  [between]
int __fastcall FUN_0124f680(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0124F6B0  FUN_0124f6b0  size=38  [between]
void __thiscall FUN_0124f6b0(undefined4 *param_1,undefined4 *param_2)

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
  param_1[0xc] = param_2[0xc];
  return;
}

// 0124F710  FUN_0124f710  size=63  [between]
void __fastcall FUN_0124f710(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0124F750  FUN_0124f750  size=49  [between]
int __fastcall FUN_0124f750(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 0124F790  FUN_0124f790  size=226  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0124f790(int *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  float fVar6;
  float fVar7;
  float fVar8;
  uint5 uVar9;
  unkbyte9 Var10;
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  uint5 uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  
  param_3[8] = (float)((int)param_2[8] + 1);
  param_3[0x18] =
       (float)((int)param_2[8] +
              ((*(byte *)((int)param_2[0xc] + 3) & 0x7f) << 8 |
              (uint)*(byte *)((int)param_2[0xc] + 4)) * 2);
  param_3[0xc] = (float)((int)param_3[8] * 5 + *param_1);
  puVar14 = (undefined4 *)(*param_1 + (int)param_3[0x18] * 5);
  param_3[0x1c] = (float)puVar14;
  auVar22 = _DAT_01b34560;
  uVar1 = *(uint *)param_3[0xc];
  uVar2 = *puVar14;
  fVar15 = (param_2[4] - *param_2) * 0.0044247787;
  fVar16 = (param_2[5] - param_2[1]) * 0.0044247787;
  fVar17 = (param_2[6] - param_2[2]) * 0.0044247787;
  fVar18 = (param_2[7] - param_2[3]) * 0.0044247787;
  bVar20 = (byte)(uVar1 >> 0x18);
  auVar21._0_2_ = (ushort)uVar2 & 0xff;
  auVar3[0xc] = (char)((uint)uVar2 >> 0x18);
  auVar3._0_12_ = ZEXT812(0);
  uVar9 = CONCAT32(auVar3._10_3_,(ushort)(byte)((uint)uVar2 >> 0x10));
  auVar12._5_8_ = 0;
  auVar12._0_5_ = uVar9;
  Var10 = CONCAT72(SUB137(auVar12 << 0x40,6),(ushort)(byte)((uint)uVar2 >> 8));
  auVar21._2_2_ = 0;
  auVar21._4_9_ = Var10;
  auVar21._13_3_ = 0;
  auVar4[0xc] = bVar20;
  auVar4._0_12_ = ZEXT712(0);
  uVar13 = CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar1 >> 0x10));
  auVar11._5_8_ = 0;
  auVar11._0_5_ = uVar13;
  auVar19._0_4_ = uVar1 & 0xff;
  auVar5._6_7_ = SUB137(auVar11 << 0x40,6);
  auVar5._0_6_ = (uint6)CONCAT14((char)(uVar1 >> 8),uVar1) & 0xffff000000ff;
  auVar19._4_9_ = auVar5._4_9_;
  auVar19._13_3_ = 0;
  fVar23 = (float)(auVar5._4_4_ >> 4);
  fVar24 = (float)((uint)uVar13 >> 4);
  fVar25 = (float)(bVar20 >> 4);
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *param_3 = (float)(auVar19._0_4_ >> 4) * (float)(auVar19._0_4_ >> 4) * fVar15 + *param_2;
  param_3[1] = fVar23 * fVar23 * fVar16 + fVar6;
  param_3[2] = fVar24 * fVar24 * fVar17 + fVar7;
  param_3[3] = fVar25 * fVar25 * fVar18 + fVar8;
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  auVar19 = auVar19 & auVar22;
  fVar23 = (float)((uint)Var10 >> 4);
  fVar24 = (float)((uint)uVar9 >> 4);
  fVar25 = (float)(uint3)(auVar3._10_3_ >> 0x14);
  auVar22 = auVar21 & auVar22;
  param_3[4] = param_2[4] - (float)auVar19._0_4_ * (float)auVar19._0_4_ * fVar15;
  param_3[5] = fVar6 - (float)auVar19._4_4_ * (float)auVar19._4_4_ * fVar16;
  param_3[6] = fVar7 - (float)auVar19._8_4_ * (float)auVar19._8_4_ * fVar17;
  param_3[7] = fVar8 - (float)auVar19._12_4_ * (float)auVar19._12_4_ * fVar18;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  param_3[0x10] = (float)(auVar21._0_2_ >> 4) * (float)(auVar21._0_2_ >> 4) * fVar15 + *param_2;
  param_3[0x11] = fVar23 * fVar23 * fVar16 + fVar6;
  param_3[0x12] = fVar24 * fVar24 * fVar17 + fVar7;
  param_3[0x13] = fVar25 * fVar25 * fVar18 + fVar8;
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  param_3[0x14] = param_2[4] - (float)auVar22._0_4_ * (float)auVar22._0_4_ * fVar15;
  param_3[0x15] = fVar6 - (float)auVar22._4_4_ * (float)auVar22._4_4_ * fVar16;
  param_3[0x16] = fVar7 - (float)auVar22._8_4_ * (float)auVar22._8_4_ * fVar17;
  param_3[0x17] = fVar8 - (float)auVar22._12_4_ * (float)auVar22._12_4_ * fVar18;
  return;
}

// 0124F880  FUN_0124f880  size=46  [between]
void __thiscall FUN_0124f880(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_3[8] = param_2[8];
  param_3[0xc] = param_2[8] * 5 + *param_1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_3[4] = param_2[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  return;
}

// 0124F8B0  FUN_0124f8b0  size=11  [between]
undefined4 FUN_0124f8b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0124F8C0  FUN_0124f8c0  size=11  [between]
undefined4 FUN_0124f8c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 0124F8D0  FUN_0124f8d0  size=153  [between]
byte __fastcall FUN_0124f8d0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124F970  FUN_0124f970  size=153  [between]
byte __fastcall FUN_0124f970(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124FA10  FUN_0124fa10  size=38  [between]
void FUN_0124fa10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 0124FA40  FUN_0124fa40  size=255  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0124fa40(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 0x34);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_3[1] - fVar2),fVar6 * (*param_3 - fVar1));
  auVar16._8_4_ = fVar8 * (param_3[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_3[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_3[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_3[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_3[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_3[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_3[0x11] - fVar2),fVar6 * (param_3[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_3[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_3[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_3[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_3[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_3[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_3[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_3,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_2 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 0124FB40  FUN_0124fb40  size=38  [between]
void FUN_0124fb40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 0124FCA0  FUN_0124fca0  size=38  [between]
void FUN_0124fca0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 0124FCD0  FUN_0124fcd0  size=38  [between]
void FUN_0124fcd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 0124FD00  FUN_0124fd00  size=38  [between]
void __thiscall FUN_0124fd00(undefined4 *param_1,undefined4 *param_2)

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
  param_1[0xc] = param_2[0xc];
  return;
}

// 0124FD50  FUN_0124fd50  size=49  [between]
int __fastcall FUN_0124fd50(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 0124FD90  FUN_0124fd90  size=215  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0124fd90(int *param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  float fVar7;
  float fVar8;
  float fVar9;
  uint5 uVar10;
  unkbyte9 Var11;
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  uint5 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  
  param_3[8] = (float)((int)param_2[8] + 1);
  param_3[0x18] = (float)((*(byte *)((int)param_2[0xc] + 3) & 0xfe) + (int)param_2[8]);
  param_3[0xc] = (float)(*param_1 + (int)param_3[8] * 4);
  puVar1 = (undefined4 *)(*param_1 + (int)param_3[0x18] * 4);
  param_3[0x1c] = (float)puVar1;
  auVar22 = _DAT_01b34560;
  uVar2 = *(uint *)param_3[0xc];
  uVar3 = *puVar1;
  fVar15 = (param_2[4] - *param_2) * 0.0044247787;
  fVar16 = (param_2[5] - param_2[1]) * 0.0044247787;
  fVar17 = (param_2[6] - param_2[2]) * 0.0044247787;
  fVar18 = (param_2[7] - param_2[3]) * 0.0044247787;
  bVar20 = (byte)(uVar2 >> 0x18);
  auVar21._0_2_ = (ushort)uVar3 & 0xff;
  auVar4[0xc] = (char)((uint)uVar3 >> 0x18);
  auVar4._0_12_ = ZEXT812(0);
  uVar10 = CONCAT32(auVar4._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
  auVar13._5_8_ = 0;
  auVar13._0_5_ = uVar10;
  Var11 = CONCAT72(SUB137(auVar13 << 0x40,6),(ushort)(byte)((uint)uVar3 >> 8));
  auVar21._2_2_ = 0;
  auVar21._4_9_ = Var11;
  auVar21._13_3_ = 0;
  auVar5[0xc] = bVar20;
  auVar5._0_12_ = ZEXT712(0);
  uVar14 = CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar2 >> 0x10));
  auVar12._5_8_ = 0;
  auVar12._0_5_ = uVar14;
  auVar19._0_4_ = uVar2 & 0xff;
  auVar6._6_7_ = SUB137(auVar12 << 0x40,6);
  auVar6._0_6_ = (uint6)CONCAT14((char)(uVar2 >> 8),uVar2) & 0xffff000000ff;
  auVar19._4_9_ = auVar6._4_9_;
  auVar19._13_3_ = 0;
  fVar23 = (float)(auVar6._4_4_ >> 4);
  fVar24 = (float)((uint)uVar14 >> 4);
  fVar25 = (float)(bVar20 >> 4);
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_3 = (float)(auVar19._0_4_ >> 4) * (float)(auVar19._0_4_ >> 4) * fVar15 + *param_2;
  param_3[1] = fVar23 * fVar23 * fVar16 + fVar7;
  param_3[2] = fVar24 * fVar24 * fVar17 + fVar8;
  param_3[3] = fVar25 * fVar25 * fVar18 + fVar9;
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_2[7];
  auVar19 = auVar19 & auVar22;
  fVar23 = (float)((uint)Var11 >> 4);
  fVar24 = (float)((uint)uVar10 >> 4);
  fVar25 = (float)(uint3)(auVar4._10_3_ >> 0x14);
  auVar22 = auVar21 & auVar22;
  param_3[4] = param_2[4] - (float)auVar19._0_4_ * (float)auVar19._0_4_ * fVar15;
  param_3[5] = fVar7 - (float)auVar19._4_4_ * (float)auVar19._4_4_ * fVar16;
  param_3[6] = fVar8 - (float)auVar19._8_4_ * (float)auVar19._8_4_ * fVar17;
  param_3[7] = fVar9 - (float)auVar19._12_4_ * (float)auVar19._12_4_ * fVar18;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  param_3[0x10] = (float)(auVar21._0_2_ >> 4) * (float)(auVar21._0_2_ >> 4) * fVar15 + *param_2;
  param_3[0x11] = fVar23 * fVar23 * fVar16 + fVar7;
  param_3[0x12] = fVar24 * fVar24 * fVar17 + fVar8;
  param_3[0x13] = fVar25 * fVar25 * fVar18 + fVar9;
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_2[7];
  param_3[0x14] = param_2[4] - (float)auVar22._0_4_ * (float)auVar22._0_4_ * fVar15;
  param_3[0x15] = fVar7 - (float)auVar22._4_4_ * (float)auVar22._4_4_ * fVar16;
  param_3[0x16] = fVar8 - (float)auVar22._8_4_ * (float)auVar22._8_4_ * fVar17;
  param_3[0x17] = fVar9 - (float)auVar22._12_4_ * (float)auVar22._12_4_ * fVar18;
  return;
}

// 0124FE70  FUN_0124fe70  size=11  [between]
undefined4 FUN_0124fe70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 0124FE80  FUN_0124fe80  size=11  [between]
undefined4 FUN_0124fe80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 0124FE90  FUN_0124fe90  size=153  [between]
byte __fastcall FUN_0124fe90(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124FF30  FUN_0124ff30  size=153  [between]
byte __fastcall FUN_0124ff30(undefined4 param_1,undefined4 param_2,int param_3,float *param_4)

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
     (auVar2._4_4_ = -(uint)(param_4[0x11] <= *(float *)(param_3 + 0x24) &&
                            *(float *)(param_3 + 0x14) <= param_4[0x15]),
     auVar2._0_4_ = -(uint)(param_4[0x10] <= *(float *)(param_3 + 0x20) &&
                           *(float *)(param_3 + 0x10) <= param_4[0x14]),
     auVar2._8_4_ = -(uint)(param_4[0x12] <= *(float *)(param_3 + 0x28) &&
                           *(float *)(param_3 + 0x18) <= param_4[0x16]),
     auVar2._12_4_ =
          -(uint)(param_4[0x13] <= *(float *)(param_3 + 0x2c) &&
                 *(float *)(param_3 + 0x1c) <= param_4[0x17]), uVar4 = movmskps(param_2,auVar2),
     ((byte)uVar4 & 7) == 7)) {
    return bVar3 | 2;
  }
  return bVar3;
}

// 0124FFD0  FUN_0124ffd0  size=38  [between]
void FUN_0124ffd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01250000  FUN_01250000  size=255  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01250000(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 0x34);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_3[1] - fVar2),fVar6 * (*param_3 - fVar1));
  auVar16._8_4_ = fVar8 * (param_3[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_3[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_3[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_3[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_3[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_3[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_3[0x11] - fVar2),fVar6 * (param_3[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_3[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_3[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_3[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_3[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_3[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_3[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_3,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_2 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 01250100  FUN_01250100  size=38  [between]
void FUN_01250100(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01250260  FUN_01250260  size=38  [between]
void FUN_01250260(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01250290  FUN_01250290  size=38  [between]
void FUN_01250290(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 012502C0  FUN_012502c0  size=164  [between]
void __thiscall FUN_012502c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
  (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2);
  iVar2 = *(int *)(iVar1 + 0x48) + uVar3 * 4;
  if (*(char *)(iVar2 + 3) == *(char *)(iVar2 + 2)) {
    iVar2 = (uint)(*(char *)(iVar2 + 2) == *(char *)(iVar2 + 1)) * 2 + 1;
  }
  else {
    iVar2 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar2 * 4)) {
    (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2 | 1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x70) + 0x1c);
  param_1[8] = param_1[8];
  param_1[9] = param_1[9];
  param_1[10] = param_1[10];
  param_1[0xb] = iVar1;
  return;
}

// 01250370  FUN_01250370  size=179  [between]
void __thiscall FUN_01250370(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = *param_1;
    uVar4 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
    if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
      *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
           (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2;
    }
    *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    iVar3 = *(int *)(iVar2 + 0x48) + uVar4 * 4;
    cVar1 = *(char *)(iVar3 + 2);
    if (*(char *)(iVar3 + 3) == cVar1) {
      iVar3 = (uint)(cVar1 == *(char *)(*(int *)(iVar2 + 0x48) + 1 + uVar4 * 4)) * 2 + 1;
    }
    else {
      iVar3 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar3 * 4)) {
      if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
        *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
             (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2 | 1;
      }
      *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    }
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01250430  FUN_01250430  size=219  [between]
undefined4 __thiscall FUN_01250430(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x60);
  uVar4 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
  uVar3 = uVar4 * 2;
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + 1;
  *(uint *)(*piVar1 + iVar2 * 4) = iVar5 << 8 | uVar3;
  iVar5 = *(int *)(param_1 + 0x48) + uVar4 * 4;
  if (*(char *)(iVar5 + 3) == *(char *)(iVar5 + 2)) {
    iVar5 = (uint)(*(char *)(iVar5 + 2) == *(char *)(iVar5 + 1)) * 2 + 1;
  }
  else {
    iVar5 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar5 * 4)) {
    iVar5 = *(int *)(param_1 + 0x60);
    piVar1 = *(int **)(param_1 + 0x70);
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
    }
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + 1;
    *(uint *)(*piVar1 + iVar2 * 4) = iVar5 << 8 | uVar3 | 1;
  }
  return 1;
}

// 01250590  FUN_01250590  size=103  [between]
void __thiscall FUN_01250590(float *param_1,float *param_2)

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
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar9;
  auVar12._8_4_ = fVar11;
  auVar12._12_4_ = fVar6;
  auVar12 = rsqrtps(in_XMM4,auVar12);
  fVar4 = auVar12._0_4_;
  fVar5 = auVar12._4_4_;
  fVar7 = auVar12._8_4_;
  fVar8 = auVar12._12_4_;
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar4) * fVar4 * 0.5));
  fVar5 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5));
  fVar7 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5));
  fVar8 = (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar8 * fVar6 * fVar8) * fVar8 * 0.5));
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar7;
  param_1[3] = param_1[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return;
}

// 01250600  FUN_01250600  size=1191  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x01250a6d) */
/* WARNING: Removing unreachable block (ram,0x012509ff) */
/* WARNING: Removing unreachable block (ram,0x012509bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_01250600(float *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  uint6 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char *pcVar31;
  undefined1 local_210 [524];
  
  auVar11 = _DAT_017e9c20;
  auVar10 = _DAT_017e9c10;
  auVar9 = _DAT_017e9c00;
  uVar13 = (uint)*(byte *)((int)param_1[0x15] + 1 +
                          (uint)*(byte *)((int)param_1[0x12] + (int)param_2 * 4) * 2);
  if ((int)uVar13 < (int)param_5) {
    param_5 = uVar13;
  }
  puVar1 = (ushort *)
           ((int)param_1[0x15] + (uint)*(byte *)((int)param_1[0x12] + (int)param_2 * 4) * 2);
  uVar13 = (uint)puVar1[1];
  uVar2 = *puVar1 >> 4;
  uVar12 = uVar2 & 3;
  if ((uVar2 & 3) == 0) {
    iVar14 = (int)param_1[0x14] + uVar13 * 8;
    iVar15 = 0;
    if (param_5 != 1 && -1 < (int)(param_5 - 1)) {
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      fVar23 = *param_1;
      fVar24 = param_1[1];
      fVar25 = param_1[2];
      fVar26 = param_1[3];
      pfVar16 = param_4;
      do {
        uVar27 = *(ulonglong *)(iVar14 + iVar15 * 8);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar27;
        auVar18._0_4_ = (uint)(uVar27 << 0x10) >> 5;
        auVar18._4_4_ = (uint)(uVar27 >> 0x10) >> 5;
        auVar18._8_2_ = (ushort)(uVar27 >> 0x35);
        auVar18._10_6_ = 0;
        auVar28._4_4_ = (uint)(uVar27 >> 0x2a);
        auVar28._0_4_ = auVar28._4_4_;
        auVar28._8_4_ = auVar28._4_4_;
        auVar28._12_4_ = auVar28._4_4_;
        auVar17 = auVar17 & auVar11 | auVar28 & auVar10 | auVar18 & auVar9;
        *pfVar16 = (float)auVar17._0_4_ * fVar5 + fVar23;
        pfVar16[1] = (float)auVar17._4_4_ * fVar6 + fVar24;
        pfVar16[2] = (float)auVar17._8_4_ * fVar7 + fVar25;
        pfVar16[3] = (float)auVar17._12_4_ * fVar8 + fVar26;
        uVar27 = *(ulonglong *)(iVar14 + 8 + iVar15 * 8);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar27;
        auVar29._4_4_ = (uint)(uVar27 >> 0x2a);
        auVar20._0_4_ = (uint)(uVar27 << 0x10) >> 5;
        auVar20._4_4_ = (uint)(uVar27 >> 0x10) >> 5;
        auVar20._8_2_ = (ushort)(uVar27 >> 0x35);
        auVar20._10_6_ = 0;
        auVar29._0_4_ = auVar29._4_4_;
        auVar29._8_4_ = auVar29._4_4_;
        auVar29._12_4_ = auVar29._4_4_;
        auVar17 = auVar19 & auVar11 | auVar29 & auVar10 | auVar20 & auVar9;
        pfVar16[4] = (float)auVar17._0_4_ * fVar5 + fVar23;
        pfVar16[5] = (float)auVar17._4_4_ * fVar6 + fVar24;
        pfVar16[6] = (float)auVar17._8_4_ * fVar7 + fVar25;
        pfVar16[7] = (float)auVar17._12_4_ * fVar8 + fVar26;
        iVar15 = iVar15 + 2;
        pfVar16 = pfVar16 + 8;
      } while (iVar15 < (int)(param_5 - 1));
    }
    if (iVar15 < (int)param_5) {
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      fVar23 = *param_1;
      fVar24 = param_1[1];
      fVar25 = param_1[2];
      fVar26 = param_1[3];
      param_4 = param_4 + iVar15 * 4;
      do {
        uVar27 = *(ulonglong *)(iVar14 + iVar15 * 8);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar27;
        auVar30._4_4_ = (uint)(uVar27 >> 0x2a);
        auVar22._0_4_ = (uint)(uVar27 << 0x10) >> 5;
        auVar22._4_4_ = (uint)(uVar27 >> 0x10) >> 5;
        auVar22._8_2_ = (ushort)(uVar27 >> 0x35);
        auVar22._10_6_ = 0;
        auVar30._0_4_ = auVar30._4_4_;
        auVar30._8_4_ = auVar30._4_4_;
        auVar30._12_4_ = auVar30._4_4_;
        auVar17 = auVar21 & auVar11 | auVar30 & auVar10 | auVar22 & auVar9;
        *param_4 = (float)auVar17._0_4_ * fVar5 + fVar23;
        param_4[1] = (float)auVar17._4_4_ * fVar6 + fVar24;
        param_4[2] = (float)auVar17._8_4_ * fVar7 + fVar25;
        param_4[3] = (float)auVar17._12_4_ * fVar8 + fVar26;
        iVar15 = iVar15 + 1;
        param_4 = param_4 + 4;
      } while (iVar15 < (int)param_5);
    }
  }
  else if (uVar12 == 1) {
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    iVar14 = (int)param_1[0x14] + uVar13 * 8;
    iVar15 = 0;
    fVar23 = (param_3[4] - fVar5) * _DAT_01b249c0;
    fVar24 = (param_3[5] - fVar6) * fRam01b249c4;
    fVar25 = (param_3[6] - fVar7) * fRam01b249c8;
    fVar26 = (param_3[7] - fVar8) * fRam01b249cc;
    pfVar16 = param_4;
    if (0 < (int)(param_5 - 1)) {
      do {
        uVar13 = *(uint *)(iVar14 + iVar15 * 4);
        *pfVar16 = (float)(uVar13 & 0x7ff) * fVar23 + fVar5;
        pfVar16[1] = (float)(uVar13 >> 0xb & 0x7ff) * fVar24 + fVar6;
        pfVar16[2] = (float)(uVar13 >> 0x16) * fVar25 + fVar7;
        pfVar16[3] = fVar26 * 0.0 + fVar8;
        uVar13 = *(uint *)(iVar14 + 4 + iVar15 * 4);
        pfVar16[4] = (float)(uVar13 & 0x7ff) * fVar23 + fVar5;
        pfVar16[5] = (float)(uVar13 >> 0xb & 0x7ff) * fVar24 + fVar6;
        pfVar16[6] = (float)(uVar13 >> 0x16) * fVar25 + fVar7;
        pfVar16[7] = fVar26 * 0.0 + fVar8;
        iVar15 = iVar15 + 2;
        pfVar16 = pfVar16 + 8;
      } while (iVar15 < (int)(param_5 - 1));
    }
    if (iVar15 < (int)param_5) {
      param_4 = param_4 + iVar15 * 4;
      do {
        uVar13 = *(uint *)(iVar14 + iVar15 * 4);
        *param_4 = (float)(uVar13 & 0x7ff) * fVar23 + fVar5;
        param_4[1] = (float)(uVar13 >> 0xb & 0x7ff) * fVar24 + fVar6;
        param_4[2] = (float)(uVar13 >> 0x16) * fVar25 + fVar7;
        param_4[3] = fVar26 * 0.0 + fVar8;
        iVar15 = iVar15 + 1;
        param_4 = param_4 + 4;
      } while (iVar15 < (int)param_5);
      return param_5;
    }
  }
  else {
    if (uVar12 != 2) {
      hkErrStream::hkErrStream(local_210,0x200);
      pcVar31 = " not implemented";
      uVar13 = *(ushort *)
                ((int)param_1[0x15] + (uint)*(byte *)((int)param_1[0x12] + (int)param_2 * 4) * 2) >>
               4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar13);
      FUN_01018d00(pcVar31);
      iVar14 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_210,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar14 == 0) {
        hkBaseObject::hkBaseObject_38();
        return param_5;
      }
      pcVar3 = (code *)swi(3);
      uVar13 = (*pcVar3)();
      return uVar13;
    }
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    iVar14 = (int)param_1[0x14] + uVar13 * 8;
    iVar15 = 0;
    fVar23 = (param_3[4] - fVar5) * _DAT_01b24c30;
    fVar24 = (param_3[5] - fVar6) * fRam01b24c34;
    fVar25 = (param_3[6] - fVar7) * fRam01b24c38;
    fVar26 = (param_3[7] - fVar8) * fRam01b24c3c;
    if (param_5 != 1 && -1 < (int)(param_5 - 1)) {
      param_2 = param_4;
      do {
        uVar2 = *(ushort *)(iVar14 + iVar15 * 2);
        iVar15 = iVar15 + 2;
        uVar4 = CONCAT24(uVar2 >> 10,(uint)uVar2) & 0xffff0000001f;
        uVar27 = (ulonglong)CONCAT24(uVar2 >> 5,(int)uVar4) & 0x1fffffffff;
        *param_2 = (float)(int)uVar27 * fVar23 + fVar5;
        param_2[1] = (float)(int)(uVar27 >> 0x20) * fVar24 + fVar6;
        param_2[2] = (float)(ushort)(uVar4 >> 0x20) * fVar25 + fVar7;
        param_2[3] = fVar26 * 0.0 + fVar8;
        uVar2 = *(ushort *)(iVar14 + -2 + iVar15 * 2);
        uVar4 = CONCAT24(uVar2 >> 10,(uint)uVar2) & 0xffff0000001f;
        uVar27 = (ulonglong)CONCAT24(uVar2 >> 5,(int)uVar4) & 0x1fffffffff;
        param_2[4] = (float)(int)uVar27 * fVar23 + fVar5;
        param_2[5] = (float)(int)(uVar27 >> 0x20) * fVar24 + fVar6;
        param_2[6] = (float)(ushort)(uVar4 >> 0x20) * fVar25 + fVar7;
        param_2[7] = fVar26 * 0.0 + fVar8;
        param_2 = param_2 + 8;
      } while (iVar15 < (int)(param_5 - 1));
    }
    if (iVar15 < (int)param_5) {
      param_4 = param_4 + iVar15 * 4;
      do {
        uVar2 = *(ushort *)(iVar14 + iVar15 * 2);
        iVar15 = iVar15 + 1;
        uVar4 = CONCAT24(uVar2 >> 10,(uint)uVar2) & 0xffff0000001f;
        uVar27 = (ulonglong)CONCAT24(uVar2 >> 5,(int)uVar4) & 0x1fffffffff;
        *param_4 = (float)(int)uVar27 * fVar23 + fVar5;
        param_4[1] = (float)(int)(uVar27 >> 0x20) * fVar24 + fVar6;
        param_4[2] = (float)(ushort)(uVar4 >> 0x20) * fVar25 + fVar7;
        param_4[3] = fVar26 * 0.0 + fVar8;
        param_4 = param_4 + 4;
      } while (iVar15 < (int)param_5);
      return param_5;
    }
  }
  return param_5;
}

// 01250AC0  FUN_01250ac0  size=126  [between]
void __thiscall FUN_01250ac0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = *(int *)(param_1 + 0x48);
  cVar2 = *(char *)(iVar3 + 2 + param_2 * 4);
  iVar1 = iVar3 + param_2 * 4;
  if ((*(char *)(iVar1 + 3) == cVar2) && (cVar2 == *(char *)(iVar3 + 1 + param_2 * 4))) {
    FUN_01236680(*(undefined1 *)(iVar1 + 1),param_3);
    return;
  }
  iVar1 = (*(int **)(param_1 + 0x44))[1];
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar4 = (byte *)(**(int **)(param_1 + 0x44) + 3);
    do {
      if (((*pbVar4 & 1) == 0) && (param_2 == *pbVar4 >> 1)) goto LAB_01250b2b;
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar3 < iVar1);
  }
  iVar3 = -1;
LAB_01250b2b:
  FUN_01236680(iVar3,param_3);
  return;
}

// 01250B40  FUN_01250b40  size=1589  [between]
/* WARNING: Removing unreachable block (ram,0x01250ead) */
/* WARNING: Removing unreachable block (ram,0x01250d5e) */
/* WARNING: Removing unreachable block (ram,0x01250e06) */
/* WARNING: Removing unreachable block (ram,0x01250f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_01250b40(undefined4 param_1,int param_2,int param_3,int *param_4,char param_5,char param_6)

{
  ulonglong uVar1;
  undefined1 auVar2 [12];
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_300 [512];
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
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
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
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  byte *local_30;
  uint local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  
  if (param_5 == '\0') {
    FUN_010238c0();
  }
  local_100 = 0.0;
  fStack_fc = 0.0;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
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
  FUN_01234610(param_1);
  if ((param_2 != local_40) || (local_3c != param_2)) {
    local_5c = param_2 * 0x60 + *(int *)(local_60 + 0x3c);
    local_3c = param_2;
    local_40 = param_2;
    local_54 = *(int *)(local_60 + 0x60) + *(int *)(local_5c + 0x48) * 4;
    local_50 = (uint)*(byte *)(local_5c + 0x5c) * 0x80000 + *(int *)(local_60 + 0x6c);
    local_48 = *(int *)(local_60 + 0x78) + (*(uint *)(local_5c + 0x54) >> 8) * 8;
    local_44 = *(uint *)(local_5c + 0x4c) & 0xff;
    local_58 = *(int *)(local_60 + 0x48) + (*(uint *)(local_5c + 0x50) >> 8) * 4;
    local_80 = *(float *)(local_5c + 0x30);
    fStack_7c = *(float *)(local_5c + 0x34);
    fStack_78 = *(float *)(local_5c + 0x38);
    fStack_74 = *(float *)(local_5c + 0x3c);
    auVar2 = *(undefined1 (*) [12])(local_5c + 0x3c);
    local_70 = (float)*(undefined8 *)*(undefined1 (*) [12])(local_5c + 0x3c);
    fStack_6c = auVar2._4_4_;
    fStack_68 = auVar2._8_4_;
    fStack_64 = 0.0;
    local_4c = *(int *)(local_60 + 0x54) + (*(uint *)(local_5c + 0x4c) >> 8) * 2 +
               (*(uint *)(local_5c + 0x4c) & 0xff) * -2;
  }
  local_2c = *(uint *)(local_5c + 0x50) & 0xff;
  local_18 = 0;
  if (local_2c != 0) {
    do {
      uVar8 = local_18;
      uVar4 = local_18 * 4;
      cVar3 = *(char *)(uVar4 + 2 + local_58);
      local_1c = uVar4;
      if ((*(char *)(uVar4 + 3 + local_58) == cVar3) && (cVar3 == *(char *)(uVar4 + 1 + local_58)))
      {
        cVar3 = (**(code **)(*param_4 + 4))((local_40 << 7 | local_18) * 2);
        if (cVar3 != '\0') {
          (**(code **)(*param_4 + 8))(&local_a0,uVar8,param_3);
        }
      }
      else {
        local_28 = FUN_0124dbd0(local_18);
        uVar10 = (uint)*(byte *)(uVar4 + 2 + local_58);
        local_30 = (byte *)(uVar4 + 2 + local_58);
        local_20 = (byte *)(uVar4 + 1 + local_58);
        uVar8 = (uint)*local_20;
        local_24 = (byte *)(local_1c + 3 + local_58);
        uVar4 = (uint)*local_24;
        if (uVar4 == uVar10) {
          iVar6 = (uint)(uVar10 == uVar8) * 2 + 1;
        }
        else {
          iVar6 = 2;
        }
        if (iVar6 - 1U < 2) {
          uVar5 = (uint)*(byte *)(local_1c + local_58);
          if ((int)uVar5 < (int)local_44) {
            uVar5 = *(uint *)(local_54 + uVar5 * 4);
            local_f0 = (float)(uVar5 & 0x7ff) * local_70 + local_80;
            fStack_ec = (float)(uVar5 >> 0xb & 0x7ff) * fStack_6c + fStack_7c;
            fStack_e8 = (float)(uVar5 >> 0x16) * fStack_68 + fStack_78;
            fStack_e4 = fStack_64 * 0.0 + fStack_74;
          }
          else {
            uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar5 * 2) * 8);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar1;
            auVar20._4_4_ = (uint)(uVar1 >> 0x2a);
            auVar12._0_4_ = (uint)(uVar1 << 0x10) >> 5;
            auVar12._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
            auVar12._8_2_ = (ushort)(uVar1 >> 0x35);
            auVar12._10_6_ = 0;
            auVar20._0_4_ = auVar20._4_4_;
            auVar20._8_4_ = auVar20._4_4_;
            auVar20._12_4_ = auVar20._4_4_;
            auVar11 = auVar11 & _DAT_017e9c20 | auVar20 & _DAT_017e9c10 | auVar12 & _DAT_017e9c00;
            local_f0 = (float)auVar11._0_4_ * local_90 + local_a0;
            fStack_ec = (float)auVar11._4_4_ * fStack_8c + fStack_9c;
            fStack_e8 = (float)auVar11._8_4_ * fStack_88 + fStack_98;
            fStack_e4 = (float)auVar11._12_4_ * fStack_84 + fStack_94;
          }
          if ((int)uVar8 < (int)local_44) {
            uVar8 = *(uint *)(local_54 + uVar8 * 4);
            local_e0 = (float)(uVar8 & 0x7ff) * local_70 + local_80;
            fStack_dc = (float)(uVar8 >> 0xb & 0x7ff) * fStack_6c + fStack_7c;
            fStack_d8 = (float)(uVar8 >> 0x16) * fStack_68 + fStack_78;
            fStack_d4 = fStack_64 * 0.0 + fStack_74;
          }
          else {
            uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar8 * 2) * 8);
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar1;
            auVar21._4_4_ = (uint)(uVar1 >> 0x2a);
            auVar14._0_4_ = (uint)(uVar1 << 0x10) >> 5;
            auVar14._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
            auVar14._8_2_ = (ushort)(uVar1 >> 0x35);
            auVar14._10_6_ = 0;
            auVar21._0_4_ = auVar21._4_4_;
            auVar21._8_4_ = auVar21._4_4_;
            auVar21._12_4_ = auVar21._4_4_;
            auVar11 = auVar13 & _DAT_017e9c20 | auVar21 & _DAT_017e9c10 | auVar14 & _DAT_017e9c00;
            local_e0 = (float)auVar11._0_4_ * local_90 + local_a0;
            fStack_dc = (float)auVar11._4_4_ * fStack_8c + fStack_9c;
            fStack_d8 = (float)auVar11._8_4_ * fStack_88 + fStack_98;
            fStack_d4 = (float)auVar11._12_4_ * fStack_84 + fStack_94;
          }
          if ((int)uVar10 < (int)local_44) {
            uVar8 = *(uint *)(local_54 + uVar10 * 4);
            local_d0 = (float)(uVar8 & 0x7ff) * local_70 + local_80;
            fStack_cc = (float)(uVar8 >> 0xb & 0x7ff) * fStack_6c + fStack_7c;
            fStack_c8 = (float)(uVar8 >> 0x16) * fStack_68 + fStack_78;
            fStack_c4 = fStack_64 * 0.0 + fStack_74;
          }
          else {
            uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar10 * 2) * 8);
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar1;
            auVar22._4_4_ = (uint)(uVar1 >> 0x2a);
            auVar16._0_4_ = (uint)(uVar1 << 0x10) >> 5;
            auVar16._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
            auVar16._8_2_ = (ushort)(uVar1 >> 0x35);
            auVar16._10_6_ = 0;
            auVar22._0_4_ = auVar22._4_4_;
            auVar22._8_4_ = auVar22._4_4_;
            auVar22._12_4_ = auVar22._4_4_;
            auVar11 = auVar15 & _DAT_017e9c20 | auVar22 & _DAT_017e9c10 | auVar16 & _DAT_017e9c00;
            local_d0 = (float)auVar11._0_4_ * local_90 + local_a0;
            fStack_cc = (float)auVar11._4_4_ * fStack_8c + fStack_9c;
            fStack_c8 = (float)auVar11._8_4_ * fStack_88 + fStack_98;
            fStack_c4 = (float)auVar11._12_4_ * fStack_84 + fStack_94;
          }
          if ((int)uVar4 < (int)local_44) {
            uVar8 = *(uint *)(local_54 + uVar4 * 4);
            local_c0 = (float)(uVar8 & 0x7ff) * local_70 + local_80;
            fStack_bc = (float)(uVar8 >> 0xb & 0x7ff) * fStack_6c + fStack_7c;
            fStack_b8 = (float)(uVar8 >> 0x16) * fStack_68 + fStack_78;
            fStack_b4 = fStack_64 * 0.0 + fStack_74;
            local_1c = uVar4;
          }
          else {
            uVar1 = *(ulonglong *)(local_50 + (uint)*(ushort *)(local_4c + uVar4 * 2) * 8);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar1;
            auVar19._4_4_ = (uint)(uVar1 >> 0x2a);
            auVar18._0_4_ = (uint)(uVar1 << 0x10) >> 5;
            auVar18._4_4_ = (uint)(uVar1 >> 0x10) >> 5;
            auVar18._8_2_ = (ushort)(uVar1 >> 0x35);
            auVar18._10_6_ = 0;
            auVar19._0_4_ = auVar19._4_4_;
            auVar19._8_4_ = auVar19._4_4_;
            auVar19._12_4_ = auVar19._4_4_;
            auVar11 = auVar17 & _DAT_017e9c20 | auVar19 & _DAT_017e9c10 | auVar18 & _DAT_017e9c00;
            local_c0 = (float)auVar11._0_4_ * local_90 + local_a0;
            fStack_bc = (float)auVar11._4_4_ * fStack_8c + fStack_9c;
            fStack_b8 = (float)auVar11._8_4_ * fStack_88 + fStack_98;
            fStack_b4 = (float)auVar11._12_4_ * fStack_84 + fStack_94;
            local_1c = uVar4;
          }
        }
        else {
          local_f0 = local_100;
          fStack_ec = fStack_fc;
          fStack_e8 = fStack_f8;
          fStack_e4 = fStack_f4;
          local_e0 = local_100;
          fStack_dc = fStack_fc;
          fStack_d8 = fStack_f8;
          fStack_d4 = fStack_f4;
          local_d0 = local_100;
          fStack_cc = fStack_fc;
          fStack_c8 = fStack_f8;
          fStack_c4 = fStack_f4;
          local_c0 = local_100;
          fStack_bc = fStack_fc;
          fStack_b8 = fStack_f8;
          fStack_b4 = fStack_f4;
          local_1c = uVar4;
          hkErrStream::hkErrStream(local_300,0x200);
          FUN_01018d00("Primitve type not implemented");
          (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_300,0,0);
          hkBaseObject::hkBaseObject_38();
        }
        if (*local_24 == *local_30) {
          iVar6 = (uint)(*local_30 == *local_20) * 2 + 1;
        }
        else {
          iVar6 = 2;
        }
        pbVar9 = *(byte **)(&DAT_017dc4c8 + iVar6 * 4);
        local_24 = *(byte **)(param_3 + 4);
        uVar4 = 0;
        local_11 = '\0';
        uVar8 = local_18;
        local_20 = pbVar9;
        if (0 < (int)pbVar9) {
          do {
            cVar3 = (**(code **)(*param_4 + 4))((local_40 << 7 | local_18) * 2 | uVar4);
            if (cVar3 != '\0') {
              if (*(uint *)(param_3 + 0x10) == (*(uint *)(param_3 + 0x14) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_3 + 0xc),0x10);
              }
              piVar7 = (int *)(*(int *)(param_3 + 0x10) * 0x10 + *(int *)(param_3 + 0xc));
              *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
              *piVar7 = (int)local_24;
              piVar7[1] = uVar4 + 1 + (int)local_24;
              piVar7[2] = uVar4 + 2 + (int)local_24;
              piVar7[3] = local_28;
              local_11 = '\x01';
              pbVar9 = local_20;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)pbVar9);
          uVar8 = local_18;
          if (local_11 != '\0') {
            FUN_01023d50(&PTR_vftable_018e9b94,&local_f0,(int)pbVar9 + 2);
            uVar8 = local_18;
          }
        }
      }
      local_18 = uVar8 + 1;
    } while ((int)local_18 < (int)local_2c);
  }
  if (param_6 != '\0') {
    FUN_0144f170(param_3,0);
  }
  return;
}

// 01251180  FUN_01251180  size=63  [between]
void __fastcall FUN_01251180(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012511C0  FUN_012511c0  size=49  [between]
int __fastcall FUN_012511c0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 01251200  FUN_01251200  size=38  [between]
void FUN_01251200(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01251230  FUN_01251230  size=255  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01251230(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 0x34);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_3[1] - fVar2),fVar6 * (*param_3 - fVar1));
  auVar16._8_4_ = fVar8 * (param_3[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_3[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_3[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_3[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_3[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_3[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_3[0x11] - fVar2),fVar6 * (param_3[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_3[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_3[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_3[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_3[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_3[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_3[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_3,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_2 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 01251330  FUN_01251330  size=38  [between]
void FUN_01251330(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01251490  FUN_01251490  size=38  [between]
void FUN_01251490(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 012514C0  FUN_012514c0  size=38  [between]
void FUN_012514c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 012514F0  FUN_012514f0  size=49  [between]
int __fastcall FUN_012514f0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 01251530  FUN_01251530  size=38  [between]
void FUN_01251530(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01251560  FUN_01251560  size=255  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01251560(undefined4 param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 0x34);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x3c);
  auVar16._0_8_ = CONCAT44(fVar7 * (param_3[1] - fVar2),fVar6 * (*param_3 - fVar1));
  auVar16._8_4_ = fVar8 * (param_3[2] - fVar3);
  auVar16._12_4_ = fVar9 * (param_3[3] - fVar4);
  auVar19._0_4_ = fVar6 * (param_3[4] - fVar1);
  auVar19._4_4_ = fVar7 * (param_3[5] - fVar2);
  auVar19._8_4_ = fVar8 * (param_3[6] - fVar3);
  auVar19._12_4_ = fVar9 * (param_3[7] - fVar4);
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._0_8_ = auVar16._0_8_;
  auVar13._12_4_ = auVar16._12_4_;
  auVar12 = minps(auVar13,auVar19);
  auVar16 = maxps(auVar16,auVar19);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar26._4_4_ = uVar14;
  auVar26._0_4_ = uVar14;
  auVar26._8_4_ = uVar14;
  auVar26._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar27 = maxps(auVar26,auVar20);
  auVar13 = maxps(auVar12,auVar27);
  auVar31._0_8_ = CONCAT44(fVar7 * (param_3[0x11] - fVar2),fVar6 * (param_3[0x10] - fVar1));
  auVar31._8_4_ = fVar8 * (param_3[0x12] - fVar3);
  auVar31._12_4_ = fVar9 * (param_3[0x13] - fVar4);
  auVar21._4_4_ = fVar7 * (param_3[0x15] - fVar2);
  auVar21._0_4_ = fVar6 * (param_3[0x14] - fVar1);
  auVar21._8_4_ = fVar8 * (param_3[0x16] - fVar3);
  auVar21._12_4_ = fVar9 * (param_3[0x17] - fVar4);
  auVar29._8_4_ = auVar31._8_4_;
  auVar29._0_8_ = auVar31._0_8_;
  auVar29._12_4_ = auVar31._12_4_;
  auVar27 = maxps(auVar31,auVar21);
  auVar12 = minps(auVar29,auVar21);
  uVar14 = auVar12._4_4_;
  uVar15 = auVar12._8_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar15;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar15;
  auVar28._4_4_ = uVar14;
  auVar28._0_4_ = uVar14;
  auVar28._8_4_ = uVar14;
  auVar28._12_4_ = uVar14;
  auVar12 = maxps(auVar12,_DAT_01701b10);
  auVar29 = maxps(auVar28,auVar22);
  uVar14 = auVar27._4_4_;
  uVar15 = auVar27._8_4_;
  auVar23._4_4_ = uVar15;
  auVar23._0_4_ = uVar15;
  auVar23._8_4_ = uVar15;
  auVar23._12_4_ = uVar15;
  auVar29 = maxps(auVar12,auVar29);
  auVar30._4_4_ = uVar14;
  auVar30._0_4_ = uVar14;
  auVar30._8_4_ = uVar14;
  auVar30._12_4_ = uVar14;
  auVar31 = minps(auVar30,auVar23);
  auVar12._8_4_ = uVar5;
  auVar12._0_8_ = CONCAT44(uVar5,uVar5);
  auVar12._12_4_ = uVar5;
  auVar12 = minps(auVar27,auVar12);
  auVar12 = minps(auVar12,auVar31);
  auVar24._4_4_ = -(uint)(auVar29._4_4_ <= auVar12._4_4_);
  auVar24._0_4_ = -(uint)(auVar29._0_4_ <= auVar12._0_4_);
  auVar24._8_4_ = -(uint)(auVar29._8_4_ <= auVar12._8_4_);
  auVar24._12_4_ = -(uint)(auVar29._12_4_ <= auVar12._12_4_);
  uVar10 = movmskps(param_3,auVar24);
  uVar14 = auVar16._4_4_;
  uVar15 = auVar16._8_4_;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = uVar15;
  auVar17._8_4_ = uVar15;
  auVar17._12_4_ = uVar15;
  auVar25._4_4_ = uVar14;
  auVar25._0_4_ = uVar14;
  auVar25._8_4_ = uVar14;
  auVar25._12_4_ = uVar14;
  auVar31 = minps(auVar25,auVar17);
  auVar27._8_4_ = uVar5;
  auVar27._0_8_ = CONCAT44(uVar5,uVar5);
  auVar27._12_4_ = uVar5;
  auVar12 = minps(auVar16,auVar27);
  auVar12 = minps(auVar12,auVar31);
  auVar18._4_4_ = -(uint)(auVar13._4_4_ <= auVar12._4_4_);
  auVar18._0_4_ = -(uint)(auVar13._0_4_ <= auVar12._0_4_);
  auVar18._8_4_ = -(uint)(auVar13._8_4_ <= auVar12._8_4_);
  auVar18._12_4_ = -(uint)(auVar13._12_4_ <= auVar12._12_4_);
  uVar11 = movmskps(param_1,auVar18);
  if (((uVar10 & 1) * 2 | uVar11 & 1) == 3) {
    *(uint *)(param_2 + 0x40) = (uint)(auVar29._0_4_ < auVar13._0_4_);
  }
  return;
}

// 01251660  FUN_01251660  size=38  [between]
void FUN_01251660(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 012517C0  FUN_012517c0  size=38  [between]
void FUN_012517c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 012517F0  FUN_012517f0  size=38  [between]
void FUN_012517f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *param_4 = param_3[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  param_4[4] = param_3[8];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  param_4[0xc] = *param_3;
  param_4[8] = 0;
  return;
}

// 01251820  FUN_01251820  size=162  [between]
void FUN_01251820(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
  (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2);
  iVar2 = *(int *)(iVar1 + 0x48) + uVar3 * 4;
  if (*(char *)(iVar2 + 3) == *(char *)(iVar2 + 2)) {
    iVar2 = (uint)(*(char *)(iVar2 + 2) == *(char *)(iVar2 + 1)) * 2 + 1;
  }
  else {
    iVar2 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar2 * 4)) {
    (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2 | 1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x70) + 0x1c);
  param_1[8] = param_1[8];
  param_1[9] = param_1[9];
  param_1[10] = param_1[10];
  param_1[0xb] = iVar1;
  return;
}

// 012518D0  FUN_012518d0  size=174  [between]
void FUN_012518d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = *param_1;
    uVar4 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
    if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
      *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
           (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2;
    }
    *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    iVar3 = *(int *)(iVar2 + 0x48) + uVar4 * 4;
    cVar1 = *(char *)(iVar3 + 2);
    if (*(char *)(iVar3 + 3) == cVar1) {
      iVar3 = (uint)(cVar1 == *(char *)(*(int *)(iVar2 + 0x48) + 1 + uVar4 * 4)) * 2 + 1;
    }
    else {
      iVar3 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar3 * 4)) {
      if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
        *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
             (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2 | 1;
      }
      *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    }
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01251980  FUN_01251980  size=251  [between]
void __thiscall FUN_01251980(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar1 = *param_1;
    piVar2 = *(int **)(iVar1 + 0x70);
    iVar6 = *(int *)(iVar1 + 0x60);
    uVar5 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
    uVar4 = uVar5 * 2;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    iVar3 = piVar2[1];
    piVar2[1] = iVar3 + 1;
    *(uint *)(*piVar2 + iVar3 * 4) = iVar6 << 8 | uVar4;
    iVar6 = *(int *)(iVar1 + 0x48) + uVar5 * 4;
    if (*(char *)(iVar6 + 3) == *(char *)(iVar6 + 2)) {
      iVar6 = (uint)(*(char *)(iVar6 + 2) == *(char *)(iVar6 + 1)) * 2 + 1;
    }
    else {
      iVar6 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar6 * 4)) {
      iVar6 = *(int *)(iVar1 + 0x60);
      piVar2 = *(int **)(iVar1 + 0x70);
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + 1;
      *(uint *)(*piVar2 + iVar1 * 4) = iVar6 << 8 | uVar4 | 1;
    }
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01251AA0  FUN_01251aa0  size=251  [between]
void __thiscall FUN_01251aa0(undefined4 param_1,uint param_2)

{
  FUN_01234610(param_1);
  FUN_0124dbd0(param_2 >> 1 & 0x7f);
  return;
}

// 01251BA0  FUN_01251ba0  size=182  [between]
void __thiscall FUN_01251ba0(int param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_4 == '\0') {
    FUN_010238c0();
  }
  iVar2 = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x14) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2 + 0xc,iVar2,0x10);
  }
  iVar2 = *(int *)(param_1 + 0x30) * 3 + *(int *)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar2,0x10);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      FUN_01250b40(iVar2,param_2,param_3,1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  if (param_5 != '\0') {
    FUN_0144f170(param_2,0);
  }
  return;
}

// 01251C60  FUN_01251c60  size=215  [between]
void __thiscall FUN_01251c60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar6 = *(int *)(iVar1 + 0x3c);
  iVar2 = (*param_2 - iVar6) / 0x60;
  if ((iVar2 != *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != iVar2)) {
    *(int *)(param_1 + 100) = iVar2;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar6 = iVar2 * 0x60 + iVar6;
    *(int *)(param_1 + 0x44) = iVar6;
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x60) + *(int *)(iVar6 + 0x48) * 4;
    *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar6 + 0x5c) * 0x80000 + *(int *)(iVar1 + 0x6c);
    *(uint *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + (*(uint *)(iVar6 + 0x4c) >> 8) * 2;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0x78) + (*(uint *)(iVar6 + 0x54) >> 8) * 8;
    *(uint *)(param_1 + 0x5c) = *(uint *)(iVar6 + 0x4c) & 0xff;
    *(uint *)(param_1 + 0x48) = *(int *)(iVar1 + 0x48) + (*(uint *)(iVar6 + 0x50) >> 8) * 4;
    uVar3 = *(undefined4 *)(iVar6 + 0x34);
    uVar4 = *(undefined4 *)(iVar6 + 0x38);
    uVar5 = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(iVar6 + 0x40);
    uVar4 = *(undefined4 *)(iVar6 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
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

// 01251D40  FUN_01251d40  size=110  [between]
int * __thiscall FUN_01251d40(int *param_1,uint param_2)

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
    uVar3 = param_2 * 0x30 + 0x7f & 0xffffff80;
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

// 01251DB0  FUN_01251db0  size=147  [between]
void __fastcall FUN_01251db0(int *param_1)

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

// 01251E50  FUN_01251e50  size=160  [between]
void FUN_01251e50(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_3;
  uVar3 = (uint)(*(byte *)(*(int *)(param_4 + 0x30) + 3) >> 1);
  (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2);
  iVar2 = *(int *)(iVar1 + 0x48) + uVar3 * 4;
  if (*(char *)(iVar2 + 3) == *(char *)(iVar2 + 2)) {
    iVar2 = (uint)(*(char *)(iVar2 + 2) == *(char *)(iVar2 + 1)) * 2 + 1;
  }
  else {
    iVar2 = 2;
  }
  if (1 < *(int *)(&DAT_017dc4c8 + iVar2 * 4)) {
    (**(code **)**(undefined4 **)(iVar1 + 0x70))((*(int *)(iVar1 + 0x60) << 7 | uVar3) * 2 | 1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x70) + 0x1c);
  param_3[8] = param_3[8];
  param_3[9] = param_3[9];
  param_3[10] = param_3[10];
  param_3[0xb] = iVar1;
  return;
}

// 01251EF0  FUN_01251ef0  size=175  [between]
void FUN_01251ef0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3[1] != 0) {
    iVar2 = *param_3;
    uVar4 = (uint)(*(byte *)(*(int *)(param_4 + 0x30) + 3) >> 1);
    if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
      *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
           (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2;
    }
    *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    iVar3 = *(int *)(iVar2 + 0x48) + uVar4 * 4;
    cVar1 = *(char *)(iVar3 + 2);
    if (*(char *)(iVar3 + 3) == cVar1) {
      iVar3 = (uint)(cVar1 == *(char *)(*(int *)(iVar2 + 0x48) + 1 + uVar4 * 4)) * 2 + 1;
    }
    else {
      iVar3 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar3 * 4)) {
      if (*(int *)(iVar2 + 0x78) < *(int *)(iVar2 + 0x74)) {
        *(uint *)(*(int *)(iVar2 + 0x70) + *(int *)(iVar2 + 0x78) * 4) =
             (*(int *)(iVar2 + 0x60) << 7 | uVar4) * 2 | 1;
      }
      *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
    }
    param_3[1] = 1;
    return;
  }
  param_3[1] = 0;
  return;
}

// 01251FA0  FUN_01251fa0  size=249  [between]
void FUN_01251fa0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar1 = *param_1;
    piVar2 = *(int **)(iVar1 + 0x70);
    iVar6 = *(int *)(iVar1 + 0x60);
    uVar5 = (uint)(*(byte *)(*(int *)(param_2 + 0x30) + 3) >> 1);
    uVar4 = uVar5 * 2;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    iVar3 = piVar2[1];
    piVar2[1] = iVar3 + 1;
    *(uint *)(*piVar2 + iVar3 * 4) = iVar6 << 8 | uVar4;
    iVar6 = *(int *)(iVar1 + 0x48) + uVar5 * 4;
    if (*(char *)(iVar6 + 3) == *(char *)(iVar6 + 2)) {
      iVar6 = (uint)(*(char *)(iVar6 + 2) == *(char *)(iVar6 + 1)) * 2 + 1;
    }
    else {
      iVar6 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar6 * 4)) {
      iVar6 = *(int *)(iVar1 + 0x60);
      piVar2 = *(int **)(iVar1 + 0x70);
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + 1;
      *(uint *)(*piVar2 + iVar1 * 4) = iVar6 << 8 | uVar4 | 1;
    }
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01255990  FUN_01255990  size=220  [between]
undefined4 __thiscall FUN_01255990(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar6 = *(int *)(iVar1 + 0x3c);
  iVar2 = (*param_3 - iVar6) / 0x60;
  if ((iVar2 != *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != iVar2)) {
    *(int *)(param_1 + 100) = iVar2;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar6 = iVar2 * 0x60 + iVar6;
    *(int *)(param_1 + 0x44) = iVar6;
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x60) + *(int *)(iVar6 + 0x48) * 4;
    *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar6 + 0x5c) * 0x80000 + *(int *)(iVar1 + 0x6c);
    *(uint *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + (*(uint *)(iVar6 + 0x4c) >> 8) * 2;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0x78) + (*(uint *)(iVar6 + 0x54) >> 8) * 8;
    *(uint *)(param_1 + 0x5c) = *(uint *)(iVar6 + 0x4c) & 0xff;
    *(uint *)(param_1 + 0x48) = *(int *)(iVar1 + 0x48) + (*(uint *)(iVar6 + 0x50) >> 8) * 4;
    uVar3 = *(undefined4 *)(iVar6 + 0x34);
    uVar4 = *(undefined4 *)(iVar6 + 0x38);
    uVar5 = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(iVar6 + 0x40);
    uVar4 = *(undefined4 *)(iVar6 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (*(uint *)(*(int *)(param_1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 01255A70  FUN_01255a70  size=123  [between]
void FUN_01255a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hkgpConvexHull::hkgpConvexHull();
  uVar1 = FUN_01077490();
  iVar2 = FUN_01079630(param_1,param_2,uVar1);
  if (1 < iVar2) {
    local_14 = 0x80000000;
    local_8 = 0x80000000;
    local_1c = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    FUN_01078bd0(0,&local_1c,param_3);
    FUN_01023a20(&local_1c,&DAT_01701ca0);
    FUN_009211c0();
  }
  hkBaseObject::hkBaseObject_27();
  return;
}

// 01255AF0  FUN_01255af0  size=120  [between]
int * __thiscall FUN_01255af0(int *param_1,uint param_2)

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

// 01255B70  FUN_01255b70  size=147  [between]
void __fastcall FUN_01255b70(int *param_1)

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

// 01255C10  FUN_01255c10  size=222  [between]
undefined4 __thiscall FUN_01255c10(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (*param_3 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 01255CF0  FUN_01255cf0  size=222  [between]
undefined4 __thiscall FUN_01255cf0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (*param_3 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 01255DD0  FUN_01255dd0  size=222  [between]
undefined4 __thiscall FUN_01255dd0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (*param_3 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 01255EB0  FUN_01255eb0  size=854  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01255eb0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint5 uVar18;
  unkbyte9 Var19;
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  float fVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  undefined4 uVar31;
  undefined4 uVar33;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar47;
  byte bVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  
  if (param_1[1] != 0) {
    fVar61 = (float)param_1[4];
    fVar63 = (float)param_1[5];
    fVar65 = (float)param_1[6];
    fVar67 = (float)param_1[7];
    fVar62 = (float)param_1[8];
    fVar64 = (float)param_1[9];
    fVar66 = (float)param_1[10];
    fVar68 = (float)param_1[0xb];
    iVar2 = param_2[1];
    iVar26 = *param_1;
    auVar57._0_8_ =
         CONCAT44(((fVar63 - (float)param_3[0x11]) - (float)param_3[5]) * (float)param_3[0xd],
                  ((fVar61 - (float)param_3[0x10]) - (float)param_3[4]) * (float)param_3[0xc]);
    auVar57._8_4_ = ((fVar65 - (float)param_3[0x12]) - (float)param_3[6]) * (float)param_3[0xe];
    auVar57._12_4_ = ((fVar67 - (float)param_3[0x13]) - (float)param_3[7]) * (float)param_3[0xf];
    auVar52._0_4_ = ((fVar62 + (float)param_3[0x10]) - (float)param_3[4]) * (float)param_3[0xc];
    auVar52._4_4_ = ((fVar64 + (float)param_3[0x11]) - (float)param_3[5]) * (float)param_3[0xd];
    auVar52._8_4_ = ((fVar66 + (float)param_3[0x12]) - (float)param_3[6]) * (float)param_3[0xe];
    auVar52._12_4_ = ((fVar68 + (float)param_3[0x13]) - (float)param_3[7]) * (float)param_3[0xf];
    auVar29._8_4_ = auVar57._8_4_;
    auVar29._0_8_ = auVar57._0_8_;
    auVar29._12_4_ = auVar57._12_4_;
    auVar36 = maxps(auVar57,auVar52);
    auVar29 = minps(auVar29,auVar52);
    iVar23 = param_3[0xb];
    uVar31 = auVar36._4_4_;
    uVar33 = auVar36._8_4_;
    auVar50._4_4_ = uVar33;
    auVar50._0_4_ = uVar33;
    auVar50._8_4_ = uVar33;
    auVar50._12_4_ = uVar33;
    auVar56._4_4_ = uVar31;
    auVar56._0_4_ = uVar31;
    auVar56._8_4_ = uVar31;
    auVar56._12_4_ = uVar31;
    auVar57 = minps(auVar56,auVar50);
    auVar71._4_4_ = iVar23;
    auVar71._0_4_ = iVar23;
    auVar71._8_4_ = iVar23;
    auVar71._12_4_ = iVar23;
    auVar36 = minps(auVar36,auVar71);
    uVar31 = auVar29._4_4_;
    uVar33 = auVar29._8_4_;
    auVar42._4_4_ = uVar33;
    auVar42._0_4_ = uVar33;
    auVar42._8_4_ = uVar33;
    auVar42._12_4_ = uVar33;
    auVar51._4_4_ = uVar31;
    auVar51._0_4_ = uVar31;
    auVar51._8_4_ = uVar31;
    auVar51._12_4_ = uVar31;
    auVar29 = maxps(auVar29,_DAT_01701b10);
    auVar52 = maxps(auVar51,auVar42);
    auVar57 = minps(auVar36,auVar57);
    auVar29 = maxps(auVar29,auVar52);
    auVar36._4_4_ = -(uint)(auVar29._4_4_ <= auVar57._4_4_);
    auVar36._0_4_ = -(uint)(auVar29._0_4_ <= auVar57._0_4_);
    auVar36._8_4_ = -(uint)(auVar29._8_4_ <= auVar57._8_4_);
    auVar36._12_4_ = -(uint)(auVar29._12_4_ <= auVar57._12_4_);
    fVar22 = 0.0;
    uVar24 = movmskps(iVar2,auVar36);
    if ((uVar24 & 1) != 0) {
      do {
        bVar48 = *(byte *)(iVar26 + 3);
        if ((bVar48 & 1) == 0) {
          iVar26 = *param_3;
          uVar24 = (uint)(bVar48 >> 1);
          (**(code **)**(undefined4 **)(iVar26 + 0x70))((*(int *)(iVar26 + 0x60) << 7 | uVar24) * 2)
          ;
          iVar23 = *(int *)(iVar26 + 0x48) + uVar24 * 4;
          if (*(char *)(iVar23 + 3) == *(char *)(iVar23 + 2)) {
            iVar23 = (uint)(*(char *)(iVar23 + 2) == *(char *)(iVar23 + 1)) * 2 + 1;
          }
          else {
            iVar23 = 2;
          }
          if (1 < *(int *)(&DAT_017dc4c8 + iVar23 * 4)) {
            (**(code **)**(undefined4 **)(iVar26 + 0x70))
                      ((*(int *)(iVar26 + 0x60) << 7 | uVar24) * 2 | 1);
          }
          iVar26 = *(int *)(*(int *)(iVar26 + 0x70) + 0x1c);
          param_3[8] = param_3[8];
          param_3[9] = param_3[9];
          param_3[10] = param_3[10];
          param_3[0xb] = iVar26;
        }
        else {
          iVar27 = (bVar48 & 0xfe) + (int)fVar22;
          iVar26 = *param_1;
          uVar24 = *(uint *)(iVar26 + ((int)fVar22 + 1) * 4);
          uVar31 = *(undefined4 *)(iVar26 + iVar27 * 4);
          auVar7[0xc] = (char)(uVar24 >> 0x18);
          auVar7._0_12_ = ZEXT712(0);
          uVar18 = CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar24 >> 0x10));
          auVar21._5_8_ = 0;
          auVar21._0_5_ = uVar18;
          Var19 = CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar24 >> 8));
          auVar37._0_4_ = uVar24 & 0xff;
          auVar37._4_9_ = Var19;
          auVar37._13_3_ = 0;
          bVar48 = (byte)((uint)uVar31 >> 0x18);
          uVar47 = (undefined1)((uint)uVar31 >> 8);
          uVar11 = (ulonglong)CONCAT12(uVar47,(short)uVar31) & 0xffffffffffff00ff;
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar11;
          auVar8[0xc] = bVar48;
          auVar9[8] = (char)((uint)uVar31 >> 0x10);
          auVar9._0_8_ = uVar11;
          auVar9[9] = 0;
          auVar9._10_3_ = auVar8._10_3_;
          auVar20._5_8_ = 0;
          auVar20._0_5_ = auVar9._8_5_;
          auVar10[4] = uVar47;
          auVar10._0_4_ = (uint)uVar11;
          auVar10[5] = 0;
          auVar10._6_7_ = SUB137(auVar20 << 0x40,6);
          auVar43._0_4_ = (uint)uVar11 & 0xffff;
          auVar43._4_9_ = auVar10._4_9_;
          auVar43._13_3_ = 0;
          auVar37 = auVar37 & _DAT_01b34560;
          auVar29 = auVar43 & _DAT_01b34560;
          fVar12 = (float)param_3[0x10];
          fVar13 = (float)param_3[0x11];
          fVar14 = (float)param_3[0x12];
          fVar15 = (float)param_3[0x13];
          fVar28 = (fVar62 - fVar61) * 0.0044247787;
          fVar32 = (fVar64 - fVar63) * 0.0044247787;
          fVar34 = (fVar66 - fVar65) * 0.0044247787;
          fVar35 = (fVar68 - fVar67) * 0.0044247787;
          fVar49 = (float)(uVar24 >> 4 & 0xf);
          fVar53 = (float)((uint)Var19 >> 4);
          fVar54 = (float)((uint)uVar18 >> 4);
          fVar55 = (float)(uint3)(auVar7._10_3_ >> 0x14);
          fVar58 = (float)(auVar10._4_4_ >> 4);
          fVar59 = (float)(auVar9._8_4_ >> 4);
          fVar60 = (float)(bVar48 >> 4);
          auVar38._0_4_ =
               (((fVar62 - (float)auVar37._0_4_ * (float)auVar37._0_4_ * fVar28) + fVar12) -
               (float)param_3[4]) * (float)param_3[0xc];
          auVar38._4_4_ =
               (((fVar64 - (float)auVar37._4_4_ * (float)auVar37._4_4_ * fVar32) + fVar13) -
               (float)param_3[5]) * (float)param_3[0xd];
          auVar38._8_4_ =
               (((fVar66 - (float)auVar37._8_4_ * (float)auVar37._8_4_ * fVar34) + fVar14) -
               (float)param_3[6]) * (float)param_3[0xe];
          auVar38._12_4_ =
               (((fVar68 - (float)auVar37._12_4_ * (float)auVar37._12_4_ * fVar35) + fVar15) -
               (float)param_3[7]) * (float)param_3[0xf];
          iVar23 = param_3[0xb];
          auVar30._0_8_ =
               CONCAT44((((fVar53 * fVar53 * fVar32 + fVar63) - fVar13) - (float)param_3[5]) *
                        (float)param_3[0xd],
                        (((fVar49 * fVar49 * fVar28 + fVar61) - fVar12) - (float)param_3[4]) *
                        (float)param_3[0xc]);
          auVar30._8_4_ =
               (((fVar54 * fVar54 * fVar34 + fVar65) - fVar14) - (float)param_3[6]) *
               (float)param_3[0xe];
          auVar30._12_4_ =
               (((fVar55 * fVar55 * fVar35 + fVar67) - fVar15) - (float)param_3[7]) *
               (float)param_3[0xf];
          fVar62 = (((fVar62 - (float)auVar29._0_4_ * (float)auVar29._0_4_ * fVar28) + fVar12) -
                   (float)param_3[4]) * (float)param_3[0xc];
          fVar64 = (((fVar64 - (float)auVar29._4_4_ * (float)auVar29._4_4_ * fVar32) + fVar13) -
                   (float)param_3[5]) * (float)param_3[0xd];
          fVar66 = (((fVar66 - (float)auVar29._8_4_ * (float)auVar29._8_4_ * fVar34) + fVar14) -
                   (float)param_3[6]) * (float)param_3[0xe];
          fVar68 = (((fVar68 - (float)auVar29._12_4_ * (float)auVar29._12_4_ * fVar35) + fVar15) -
                   (float)param_3[7]) * (float)param_3[0xf];
          auVar41._8_4_ = auVar30._8_4_;
          auVar41._0_8_ = auVar30._0_8_;
          auVar41._12_4_ = auVar30._12_4_;
          auVar29 = minps(auVar30,auVar38);
          auVar44._0_8_ =
               CONCAT44((((fVar58 * fVar58 * fVar32 + fVar63) - fVar13) - (float)param_3[5]) *
                        (float)param_3[0xd],
                        ((((float)(auVar43._0_4_ >> 4) * (float)(auVar43._0_4_ >> 4) * fVar28 +
                          fVar61) - fVar12) - (float)param_3[4]) * (float)param_3[0xc]);
          auVar44._8_4_ =
               (((fVar59 * fVar59 * fVar34 + fVar65) - fVar14) - (float)param_3[6]) *
               (float)param_3[0xe];
          auVar44._12_4_ =
               (((fVar60 * fVar60 * fVar35 + fVar67) - fVar15) - (float)param_3[7]) *
               (float)param_3[0xf];
          auVar57 = maxps(auVar41,auVar38);
          uVar31 = auVar29._4_4_;
          uVar33 = auVar29._8_4_;
          auVar39._4_4_ = uVar33;
          auVar39._0_4_ = uVar33;
          auVar39._8_4_ = uVar33;
          auVar39._12_4_ = uVar33;
          auVar69._4_4_ = uVar31;
          auVar69._0_4_ = uVar31;
          auVar69._8_4_ = uVar31;
          auVar69._12_4_ = uVar31;
          auVar29 = maxps(auVar29,_DAT_01701b10);
          auVar36 = maxps(auVar69,auVar39);
          auVar29 = maxps(auVar29,auVar36);
          auVar40._8_4_ = auVar44._8_4_;
          auVar40._0_8_ = auVar44._0_8_;
          auVar40._12_4_ = auVar44._12_4_;
          auVar3._4_4_ = fVar64;
          auVar3._0_4_ = fVar62;
          auVar3._8_4_ = fVar66;
          auVar3._12_4_ = fVar68;
          auVar52 = maxps(auVar44,auVar3);
          auVar4._4_4_ = fVar64;
          auVar4._0_4_ = fVar62;
          auVar4._8_4_ = fVar66;
          auVar4._12_4_ = fVar68;
          auVar36 = minps(auVar40,auVar4);
          uVar31 = auVar36._4_4_;
          uVar33 = auVar36._8_4_;
          auVar70._4_4_ = uVar31;
          auVar70._0_4_ = uVar31;
          auVar70._8_4_ = uVar31;
          auVar70._12_4_ = uVar31;
          auVar36 = maxps(auVar36,_DAT_01701b10);
          auVar5._4_4_ = uVar33;
          auVar5._0_4_ = uVar33;
          auVar5._8_4_ = uVar33;
          auVar5._12_4_ = uVar33;
          auVar71 = maxps(auVar70,auVar5);
          auVar36 = maxps(auVar36,auVar71);
          uVar31 = auVar52._4_4_;
          uVar33 = auVar52._8_4_;
          auVar72._4_4_ = uVar31;
          auVar72._0_4_ = uVar31;
          auVar72._8_4_ = uVar31;
          auVar72._12_4_ = uVar31;
          auVar16._4_4_ = iVar23;
          auVar16._0_4_ = iVar23;
          auVar16._8_4_ = iVar23;
          auVar16._12_4_ = iVar23;
          auVar52 = minps(auVar52,auVar16);
          auVar6._4_4_ = uVar33;
          auVar6._0_4_ = uVar33;
          auVar6._8_4_ = uVar33;
          auVar6._12_4_ = uVar33;
          auVar71 = minps(auVar72,auVar6);
          auVar52 = minps(auVar52,auVar71);
          auVar73._4_4_ = -(uint)(auVar36._4_4_ <= auVar52._4_4_);
          auVar73._0_4_ = -(uint)(auVar36._0_4_ <= auVar52._0_4_);
          auVar73._8_4_ = -(uint)(auVar36._8_4_ <= auVar52._8_4_);
          auVar73._12_4_ = -(uint)(auVar36._12_4_ <= auVar52._12_4_);
          uVar24 = movmskps(iVar26 + iVar27 * 4,auVar73);
          uVar31 = auVar57._4_4_;
          uVar33 = auVar57._8_4_;
          auVar45._4_4_ = uVar33;
          auVar45._0_4_ = uVar33;
          auVar45._8_4_ = uVar33;
          auVar45._12_4_ = uVar33;
          auVar74._4_4_ = uVar31;
          auVar74._0_4_ = uVar31;
          auVar74._8_4_ = uVar31;
          auVar74._12_4_ = uVar31;
          auVar17._4_4_ = iVar23;
          auVar17._0_4_ = iVar23;
          auVar17._8_4_ = iVar23;
          auVar17._12_4_ = iVar23;
          auVar57 = minps(auVar57,auVar17);
          auVar52 = minps(auVar74,auVar45);
          auVar57 = minps(auVar57,auVar52);
          auVar46._4_4_ = -(uint)(auVar29._4_4_ <= auVar57._4_4_);
          auVar46._0_4_ = -(uint)(auVar29._0_4_ <= auVar57._0_4_);
          auVar46._8_4_ = -(uint)(auVar29._8_4_ <= auVar57._8_4_);
          auVar46._12_4_ = -(uint)(auVar29._12_4_ <= auVar57._12_4_);
          uVar25 = movmskps(iVar26 + ((int)fVar22 + 1) * 4,auVar46);
          uVar24 = (uVar24 & 1) * 2 | uVar25 & 1;
          if (uVar24 == 3) {
            param_3[0x14] = (uint)(auVar36._0_4_ < auVar29._0_4_);
LAB_01256134:
                    /* WARNING: Could not recover jumptable at 0x01256134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_012562a0 + uVar24 * 4))();
            return;
          }
          if (uVar24 < 4) goto LAB_01256134;
        }
        iVar26 = param_2[1];
        if (iVar26 <= iVar2) {
          return;
        }
        pfVar1 = (float *)(*param_2 + -0x30 + iVar26 * 0x30);
        param_2[1] = iVar26 + -1;
        fVar22 = pfVar1[8];
        fVar61 = *pfVar1;
        fVar63 = pfVar1[1];
        fVar65 = pfVar1[2];
        fVar67 = pfVar1[3];
        fVar62 = pfVar1[4];
        fVar64 = pfVar1[5];
        fVar66 = pfVar1[6];
        fVar68 = pfVar1[7];
        iVar26 = *param_1 + (int)fVar22 * 4;
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
  return;
}

// 012562B0  FUN_012562b0  size=820  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012562b0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  ulonglong uVar10;
  uint5 uVar11;
  unkbyte9 Var12;
  undefined1 auVar13 [13];
  char cVar14;
  undefined1 auVar15 [13];
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 uVar35;
  byte bVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  if (param_1[1] != 0) {
    iVar2 = param_2[1];
    if ((param_3[1] != 0) &&
       (auVar34._4_4_ =
             -(uint)((float)param_3[5] <= (float)param_1[9] &&
                    (float)param_1[5] <= (float)param_3[9]),
       auVar34._0_4_ =
            -(uint)((float)param_3[4] <= (float)param_1[8] && (float)param_1[4] <= (float)param_3[8]
                   ),
       auVar34._8_4_ =
            -(uint)((float)param_3[6] <= (float)param_1[10] &&
                   (float)param_1[6] <= (float)param_3[10]),
       auVar34._12_4_ =
            -(uint)((float)param_3[7] <= (float)param_1[0xb] &&
                   (float)param_1[7] <= (float)param_3[0xb]), uVar16 = movmskps(param_1,auVar34),
       iVar19 = *param_1, fVar22 = 0.0, fVar27 = (float)param_1[8], fVar28 = (float)param_1[9],
       fVar29 = (float)param_1[10], fVar30 = (float)param_1[0xb], fVar32 = (float)param_1[4],
       fVar37 = (float)param_1[5], fVar38 = (float)param_1[6], fVar39 = (float)param_1[7],
       ((byte)uVar16 & 7) == 7)) {
LAB_01256320:
      while (bVar36 = *(byte *)(iVar19 + 3), (bVar36 & 1) != 0) {
        iVar18 = *param_1;
        uVar21 = *(uint *)(iVar18 + 4 + (int)fVar22 * 4);
        auVar6[0xc] = (char)(uVar21 >> 0x18);
        auVar6._0_12_ = ZEXT712(0);
        uVar11 = CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar21 >> 0x10));
        auVar15._5_8_ = 0;
        auVar15._0_5_ = uVar11;
        Var12 = CONCAT72(SUB137(auVar15 << 0x40,6),(ushort)(byte)(uVar21 >> 8));
        auVar31._0_4_ = uVar21 & 0xff;
        auVar31._4_9_ = Var12;
        auVar31._13_3_ = 0;
        iVar19 = iVar18 + 4 + (int)fVar22 * 4;
        fVar20 = (float)((bVar36 & 0xfe) + (int)fVar22);
        uVar16 = *(undefined4 *)(iVar18 + (int)fVar20 * 4);
        bVar36 = (byte)((uint)uVar16 >> 0x18);
        uVar35 = (undefined1)((uint)uVar16 >> 8);
        uVar10 = (ulonglong)CONCAT12(uVar35,(short)uVar16) & 0xffffffffffff00ff;
        auVar7._8_4_ = 0;
        auVar7._0_8_ = uVar10;
        auVar7[0xc] = bVar36;
        auVar8[8] = (char)((uint)uVar16 >> 0x10);
        auVar8._0_8_ = uVar10;
        auVar8[9] = 0;
        auVar8._10_3_ = auVar7._10_3_;
        auVar13._5_8_ = 0;
        auVar13._0_5_ = auVar8._8_5_;
        auVar9[4] = uVar35;
        auVar9._0_4_ = (uint)uVar10;
        auVar9[5] = 0;
        auVar9._6_7_ = SUB137(auVar13 << 0x40,6);
        auVar33._0_4_ = (uint)uVar10 & 0xffff;
        auVar33._4_9_ = auVar9._4_9_;
        auVar33._13_3_ = 0;
        auVar31 = auVar31 & _DAT_01b34560;
        auVar34 = auVar33 & _DAT_01b34560;
        fVar45 = (float)(auVar9._4_4_ >> 4);
        fVar46 = (float)(auVar8._8_4_ >> 4);
        fVar47 = (float)(bVar36 >> 4);
        fVar40 = (float)(uVar21 >> 4 & 0xf);
        fVar41 = (float)((uint)Var12 >> 4);
        fVar42 = (float)((uint)uVar11 >> 4);
        fVar43 = (float)(uint3)(auVar6._10_3_ >> 0x14);
        fVar23 = (fVar27 - fVar32) * 0.0044247787;
        fVar24 = (fVar28 - fVar37) * 0.0044247787;
        fVar25 = (fVar29 - fVar38) * 0.0044247787;
        fVar26 = (fVar30 - fVar39) * 0.0044247787;
        fVar40 = fVar40 * fVar40 * fVar23 + fVar32;
        fVar41 = fVar41 * fVar41 * fVar24 + fVar37;
        fVar42 = fVar42 * fVar42 * fVar25 + fVar38;
        fVar43 = fVar43 * fVar43 * fVar26 + fVar39;
        fVar32 = (float)(auVar33._0_4_ >> 4) * (float)(auVar33._0_4_ >> 4) * fVar23 + fVar32;
        fVar37 = fVar45 * fVar45 * fVar24 + fVar37;
        fVar38 = fVar46 * fVar46 * fVar25 + fVar38;
        fVar39 = fVar47 * fVar47 * fVar26 + fVar39;
        iVar3 = param_3[1];
        fVar45 = fVar27 - (float)auVar31._0_4_ * (float)auVar31._0_4_ * fVar23;
        fVar46 = fVar28 - (float)auVar31._4_4_ * (float)auVar31._4_4_ * fVar24;
        fVar47 = fVar29 - (float)auVar31._8_4_ * (float)auVar31._8_4_ * fVar25;
        fVar44 = fVar30 - (float)auVar31._12_4_ * (float)auVar31._12_4_ * fVar26;
        fVar27 = fVar27 - (float)auVar34._0_4_ * (float)auVar34._0_4_ * fVar23;
        fVar28 = fVar28 - (float)auVar34._4_4_ * (float)auVar34._4_4_ * fVar24;
        fVar29 = fVar29 - (float)auVar34._8_4_ * (float)auVar34._8_4_ * fVar25;
        fVar30 = fVar30 - (float)auVar34._12_4_ * (float)auVar34._12_4_ * fVar26;
        if ((iVar3 == 0) ||
           (auVar4._4_4_ = -(uint)((float)param_3[5] <= fVar46 && fVar41 <= (float)param_3[9]),
           auVar4._0_4_ = -(uint)((float)param_3[4] <= fVar45 && fVar40 <= (float)param_3[8]),
           auVar4._8_4_ = -(uint)((float)param_3[6] <= fVar47 && fVar42 <= (float)param_3[10]),
           auVar4._12_4_ = -(uint)((float)param_3[7] <= fVar44 && fVar43 <= (float)param_3[0xb]),
           uVar16 = movmskps(iVar19,auVar4), ((byte)uVar16 & 7) != 7)) {
          bVar36 = 0;
        }
        else {
          bVar36 = 1;
        }
        if ((iVar3 == 0) ||
           (auVar5._4_4_ = -(uint)((float)param_3[5] <= fVar28 && fVar37 <= (float)param_3[9]),
           auVar5._0_4_ = -(uint)((float)param_3[4] <= fVar27 && fVar32 <= (float)param_3[8]),
           auVar5._8_4_ = -(uint)((float)param_3[6] <= fVar29 && fVar38 <= (float)param_3[10]),
           auVar5._12_4_ = -(uint)((float)param_3[7] <= fVar30 && fVar39 <= (float)param_3[0xb]),
           uVar16 = movmskps(iVar3,auVar5), ((byte)uVar16 & 7) != 7)) {
          cVar14 = '\0';
        }
        else {
          cVar14 = '\x01';
        }
        switch(-cVar14 & 2U | bVar36) {
        default:
          goto LAB_012565aa;
        case 1:
          fVar22 = (float)((int)fVar22 + 1);
          fVar27 = fVar45;
          fVar28 = fVar46;
          fVar29 = fVar47;
          fVar30 = fVar44;
          fVar32 = fVar40;
          fVar37 = fVar41;
          fVar38 = fVar42;
          fVar39 = fVar43;
          break;
        case 2:
          iVar19 = iVar18 + (int)fVar20 * 4;
          fVar22 = fVar20;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
          }
          pfVar17 = (float *)(param_2[1] * 0x30 + *param_2);
          param_2[1] = param_2[1] + 1;
          pfVar17[4] = fVar27;
          pfVar17[5] = fVar28;
          pfVar17[6] = fVar29;
          pfVar17[7] = fVar30;
          pfVar17[8] = fVar20;
          *pfVar17 = fVar32;
          pfVar17[1] = fVar37;
          pfVar17[2] = fVar38;
          pfVar17[3] = fVar39;
          fVar22 = (float)((int)fVar22 + 1);
          fVar27 = fVar45;
          fVar28 = fVar46;
          fVar29 = fVar47;
          fVar30 = fVar44;
          fVar32 = fVar40;
          fVar37 = fVar41;
          fVar38 = fVar42;
          fVar39 = fVar43;
        }
      }
      if (param_3[1] == 0) {
        param_3[1] = 0;
      }
      else {
        iVar19 = *param_3;
        uVar21 = (uint)(bVar36 >> 1);
        if (*(int *)(iVar19 + 0x78) < *(int *)(iVar19 + 0x74)) {
          *(uint *)(*(int *)(iVar19 + 0x70) + *(int *)(iVar19 + 0x78) * 4) =
               (*(int *)(iVar19 + 0x60) << 7 | uVar21) * 2;
        }
        *(int *)(iVar19 + 0x78) = *(int *)(iVar19 + 0x78) + 1;
        iVar18 = *(int *)(iVar19 + 0x48) + uVar21 * 4;
        if (*(char *)(iVar18 + 3) == *(char *)(iVar18 + 2)) {
          iVar18 = (uint)(*(char *)(iVar18 + 2) == *(char *)(iVar18 + 1)) * 2 + 1;
        }
        else {
          iVar18 = 2;
        }
        if (1 < *(int *)(&DAT_017dc4c8 + iVar18 * 4)) {
          if (*(int *)(iVar19 + 0x78) < *(int *)(iVar19 + 0x74)) {
            *(uint *)(*(int *)(iVar19 + 0x70) + *(int *)(iVar19 + 0x78) * 4) =
                 (*(int *)(iVar19 + 0x60) << 7 | uVar21) * 2 | 1;
          }
          *(int *)(iVar19 + 0x78) = *(int *)(iVar19 + 0x78) + 1;
        }
        param_3[1] = 1;
      }
LAB_012565aa:
      iVar19 = param_2[1];
      if (iVar2 < iVar19) {
        iVar18 = *param_2;
        param_2[1] = iVar19 + -1;
        pfVar17 = (float *)(iVar18 + -0x30 + iVar19 * 0x30);
        pfVar1 = (float *)(iVar18 + -0x20 + iVar19 * 0x30);
        fVar22 = *(float *)(iVar18 + iVar19 * 0x30 + -0x10);
        iVar19 = *param_1 + (int)fVar22 * 4;
        fVar27 = *pfVar1;
        fVar28 = pfVar1[1];
        fVar29 = pfVar1[2];
        fVar30 = pfVar1[3];
        fVar32 = *pfVar17;
        fVar37 = pfVar17[1];
        fVar38 = pfVar17[2];
        fVar39 = pfVar17[3];
        goto LAB_01256320;
      }
    }
  }
  return;
}

// 01256600  FUN_01256600  size=247  [between]
void FUN_01256600(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3[1] != 0) {
    iVar1 = *param_3;
    piVar2 = *(int **)(iVar1 + 0x70);
    iVar6 = *(int *)(iVar1 + 0x60);
    uVar5 = (uint)(*(byte *)(*(int *)(param_4 + 0x30) + 3) >> 1);
    uVar4 = uVar5 * 2;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    iVar3 = piVar2[1];
    piVar2[1] = iVar3 + 1;
    *(uint *)(*piVar2 + iVar3 * 4) = iVar6 << 8 | uVar4;
    iVar6 = *(int *)(iVar1 + 0x48) + uVar5 * 4;
    if (*(char *)(iVar6 + 3) == *(char *)(iVar6 + 2)) {
      iVar6 = (uint)(*(char *)(iVar6 + 2) == *(char *)(iVar6 + 1)) * 2 + 1;
    }
    else {
      iVar6 = 2;
    }
    if (1 < *(int *)(&DAT_017dc4c8 + iVar6 * 4)) {
      iVar6 = *(int *)(iVar1 + 0x60);
      piVar2 = *(int **)(iVar1 + 0x70);
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + 1;
      *(uint *)(*piVar2 + iVar1 * 4) = iVar6 << 8 | uVar4 | 1;
    }
    param_3[1] = 1;
    return;
  }
  param_3[1] = 0;
  return;
}

// 012597F0  FUN_012597f0  size=220  [between]
undefined4 __thiscall FUN_012597f0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar6 = *(int *)(iVar1 + 0x3c);
  iVar2 = (*param_3 - iVar6) / 0x60;
  if ((iVar2 != *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != iVar2)) {
    *(int *)(param_1 + 100) = iVar2;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar6 = iVar2 * 0x60 + iVar6;
    *(int *)(param_1 + 0x44) = iVar6;
    *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x60) + *(int *)(iVar6 + 0x48) * 4;
    *(uint *)(param_1 + 0x50) = (uint)*(byte *)(iVar6 + 0x5c) * 0x80000 + *(int *)(iVar1 + 0x6c);
    *(uint *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + (*(uint *)(iVar6 + 0x4c) >> 8) * 2;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0x78) + (*(uint *)(iVar6 + 0x54) >> 8) * 8;
    *(uint *)(param_1 + 0x5c) = *(uint *)(iVar6 + 0x4c) & 0xff;
    *(uint *)(param_1 + 0x48) = *(int *)(iVar1 + 0x48) + (*(uint *)(iVar6 + 0x50) >> 8) * 4;
    uVar3 = *(undefined4 *)(iVar6 + 0x34);
    uVar4 = *(undefined4 *)(iVar6 + 0x38);
    uVar5 = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(iVar6 + 0x40);
    uVar4 = *(undefined4 *)(iVar6 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (*(uint *)(*(int *)(param_1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 012598D0  hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::CustomGeometryConverter::vf08  size=1365  [__FILE__]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x01259dce) */
/* WARNING: Removing unreachable block (ram,0x01259d63) */
/* WARNING: Removing unreachable block (ram,0x01259d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
     ::CustomGeometryConverter::vf08(float *param_1,uint param_2,undefined4 param_3)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  code *pcVar4;
  uint6 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char *pcVar32;
  float local_1250 [1024];
  undefined1 local_250 [512];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_1c;
  float *local_18;
  float *local_14;
  
  local_14 = (float *)0x12598f0;
  fVar18 = param_1[0x12];
  iVar13 = (int)fVar18 + param_2 * 4;
  cVar2 = *(char *)(iVar13 + 2);
  if ((*(char *)((int)fVar18 + 3 + param_2 * 4) == cVar2) &&
     (cVar2 == *(char *)((int)fVar18 + 1 + param_2 * 4))) {
    uVar11 = (uint)*(byte *)(iVar13 + 1);
  }
  else {
    iVar13 = ((int *)param_1[0x11])[1];
    uVar11 = 0;
    if (0 < iVar13) {
      pbVar12 = (byte *)(*(int *)param_1[0x11] + 3);
      do {
        if (((*pbVar12 & 1) == 0) && (param_2 == *pbVar12 >> 1)) goto LAB_01259951;
        uVar11 = uVar11 + 1;
        pbVar12 = pbVar12 + 4;
      } while ((int)uVar11 < iVar13);
    }
    uVar11 = 0xffffffff;
  }
LAB_01259951:
  FUN_01236680(uVar11,&local_50);
  pfVar17 = (float *)(uint)*(byte *)((int)param_1[0x15] + 1 +
                                    (uint)*(byte *)((int)param_1[0x12] + param_2 * 4) * 2);
  if ((float *)0xff < pfVar17) {
    pfVar17 = (float *)0x100;
  }
  puVar1 = (ushort *)((int)param_1[0x15] + (uint)*(byte *)((int)param_1[0x12] + param_2 * 4) * 2);
  uVar11 = (uint)puVar1[1];
  uVar3 = *puVar1 >> 4;
  uVar10 = uVar3 & 3;
  local_14 = pfVar17;
  if ((uVar3 & 3) == 0) {
    iVar13 = (int)param_1[0x14] + uVar11 * 8;
    iVar14 = 0;
    if (pfVar17 != (float *)0x1 && -1 < (int)pfVar17 + -1) {
      fVar18 = param_1[4];
      fVar25 = param_1[5];
      fVar26 = param_1[6];
      fVar27 = param_1[7];
      fVar6 = *param_1;
      fVar7 = param_1[1];
      fVar8 = param_1[2];
      fVar9 = param_1[3];
      local_14 = local_1250 + 4;
      do {
        uVar28 = *(ulonglong *)(iVar13 + iVar14 * 8);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar28;
        auVar20._0_4_ = (uint)(uVar28 << 0x10) >> 5;
        auVar20._4_4_ = (uint)(uVar28 >> 0x10) >> 5;
        auVar20._8_2_ = (ushort)(uVar28 >> 0x35);
        auVar20._10_6_ = 0;
        auVar29._4_4_ = (uint)(uVar28 >> 0x2a);
        auVar29._0_4_ = auVar29._4_4_;
        auVar29._8_4_ = auVar29._4_4_;
        auVar29._12_4_ = auVar29._4_4_;
        auVar19 = auVar19 & _DAT_017e9c20 | auVar29 & _DAT_017e9c10 | auVar20 & _DAT_017e9c00;
        local_14[-4] = (float)auVar19._0_4_ * fVar18 + fVar6;
        local_14[-3] = (float)auVar19._4_4_ * fVar25 + fVar7;
        local_14[-2] = (float)auVar19._8_4_ * fVar26 + fVar8;
        local_14[-1] = (float)auVar19._12_4_ * fVar27 + fVar9;
        uVar28 = *(ulonglong *)(iVar13 + 8 + iVar14 * 8);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar28;
        auVar30._4_4_ = (uint)(uVar28 >> 0x2a);
        auVar22._0_4_ = (uint)(uVar28 << 0x10) >> 5;
        auVar22._4_4_ = (uint)(uVar28 >> 0x10) >> 5;
        auVar22._8_2_ = (ushort)(uVar28 >> 0x35);
        auVar22._10_6_ = 0;
        auVar30._0_4_ = auVar30._4_4_;
        auVar30._8_4_ = auVar30._4_4_;
        auVar30._12_4_ = auVar30._4_4_;
        auVar19 = auVar21 & _DAT_017e9c20 | auVar30 & _DAT_017e9c10 | auVar22 & _DAT_017e9c00;
        *local_14 = (float)auVar19._0_4_ * fVar18 + fVar6;
        local_14[1] = (float)auVar19._4_4_ * fVar25 + fVar7;
        local_14[2] = (float)auVar19._8_4_ * fVar26 + fVar8;
        local_14[3] = (float)auVar19._12_4_ * fVar27 + fVar9;
        local_14 = local_14 + 8;
        iVar14 = iVar14 + 2;
      } while (iVar14 < (int)pfVar17 + -1);
    }
    if (iVar14 < (int)pfVar17) {
      fVar18 = param_1[4];
      fVar25 = param_1[5];
      fVar26 = param_1[6];
      fVar27 = param_1[7];
      fVar6 = *param_1;
      fVar7 = param_1[1];
      fVar8 = param_1[2];
      fVar9 = param_1[3];
      pfVar16 = local_1250 + iVar14 * 4;
      do {
        uVar28 = *(ulonglong *)(iVar13 + iVar14 * 8);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar28;
        auVar31._4_4_ = (uint)(uVar28 >> 0x2a);
        auVar24._0_4_ = (uint)(uVar28 << 0x10) >> 5;
        auVar24._4_4_ = (uint)(uVar28 >> 0x10) >> 5;
        auVar24._8_2_ = (ushort)(uVar28 >> 0x35);
        auVar24._10_6_ = 0;
        auVar31._0_4_ = auVar31._4_4_;
        auVar31._8_4_ = auVar31._4_4_;
        auVar31._12_4_ = auVar31._4_4_;
        auVar19 = auVar23 & _DAT_017e9c20 | auVar31 & _DAT_017e9c10 | auVar24 & _DAT_017e9c00;
        *pfVar16 = (float)auVar19._0_4_ * fVar18 + fVar6;
        pfVar16[1] = (float)auVar19._4_4_ * fVar25 + fVar7;
        pfVar16[2] = (float)auVar19._8_4_ * fVar26 + fVar8;
        pfVar16[3] = (float)auVar19._12_4_ * fVar27 + fVar9;
        iVar14 = iVar14 + 1;
        pfVar16 = pfVar16 + 4;
      } while (iVar14 < (int)pfVar17);
    }
  }
  else if (uVar10 == 1) {
    iVar13 = (int)param_1[0x14] + uVar11 * 8;
    iVar14 = 0;
    fVar18 = _DAT_01b249c0 * (local_40 - local_50);
    fVar25 = fRam01b249c4 * (fStack_3c - fStack_4c);
    fVar26 = fRam01b249c8 * (fStack_38 - fStack_48);
    fVar27 = fRam01b249cc * (fStack_34 - fStack_44);
    if (pfVar17 != (float *)0x1 && -1 < (int)pfVar17 + -1) {
      local_14 = local_1250 + 4;
      do {
        uVar11 = *(uint *)(iVar13 + iVar14 * 4);
        local_14[-4] = (float)(uVar11 & 0x7ff) * fVar18 + local_50;
        local_14[-3] = (float)(uVar11 >> 0xb & 0x7ff) * fVar25 + fStack_4c;
        local_14[-2] = (float)(uVar11 >> 0x16) * fVar26 + fStack_48;
        local_14[-1] = fVar27 * 0.0 + fStack_44;
        uVar11 = *(uint *)(iVar13 + 4 + iVar14 * 4);
        *local_14 = (float)(uVar11 & 0x7ff) * fVar18 + local_50;
        local_14[1] = (float)(uVar11 >> 0xb & 0x7ff) * fVar25 + fStack_4c;
        local_14[2] = (float)(uVar11 >> 0x16) * fVar26 + fStack_48;
        local_14[3] = fVar27 * 0.0 + fStack_44;
        local_14 = local_14 + 8;
        iVar14 = iVar14 + 2;
      } while (iVar14 < (int)pfVar17 + -1);
    }
    if (iVar14 < (int)pfVar17) {
      pfVar16 = local_1250 + iVar14 * 4;
      do {
        uVar11 = *(uint *)(iVar13 + iVar14 * 4);
        *pfVar16 = (float)(uVar11 & 0x7ff) * fVar18 + local_50;
        pfVar16[1] = (float)(uVar11 >> 0xb & 0x7ff) * fVar25 + fStack_4c;
        pfVar16[2] = (float)(uVar11 >> 0x16) * fVar26 + fStack_48;
        pfVar16[3] = fVar27 * 0.0 + fStack_44;
        iVar14 = iVar14 + 1;
        pfVar16 = pfVar16 + 4;
      } while (iVar14 < (int)pfVar17);
    }
  }
  else if (uVar10 == 2) {
    local_1c = (int)param_1[0x14] + uVar11 * 8;
    iVar13 = 0;
    fVar18 = _DAT_01b24c30 * (local_40 - local_50);
    fVar25 = fRam01b24c34 * (fStack_3c - fStack_4c);
    fVar26 = fRam01b24c38 * (fStack_38 - fStack_48);
    fVar27 = fRam01b24c3c * (fStack_34 - fStack_44);
    if (pfVar17 != (float *)0x1 && -1 < (int)pfVar17 + -1) {
      local_18 = local_1250 + 4;
      do {
        uVar3 = *(ushort *)(local_1c + iVar13 * 2);
        iVar13 = iVar13 + 2;
        uVar5 = CONCAT24(uVar3 >> 10,(uint)uVar3) & 0xffff0000001f;
        uVar28 = (ulonglong)CONCAT24(uVar3 >> 5,(int)uVar5) & 0x1fffffffff;
        local_18[-4] = (float)(int)uVar28 * fVar18 + local_50;
        local_18[-3] = (float)(int)(uVar28 >> 0x20) * fVar25 + fStack_4c;
        local_18[-2] = (float)(ushort)(uVar5 >> 0x20) * fVar26 + fStack_48;
        local_18[-1] = fVar27 * 0.0 + fStack_44;
        uVar3 = *(ushort *)(local_1c + -2 + iVar13 * 2);
        pfVar16 = local_18 + 8;
        uVar5 = CONCAT24(uVar3 >> 10,(uint)uVar3) & 0xffff0000001f;
        uVar28 = (ulonglong)CONCAT24(uVar3 >> 5,(int)uVar5) & 0x1fffffffff;
        *local_18 = (float)(int)uVar28 * fVar18 + local_50;
        local_18[1] = (float)(int)(uVar28 >> 0x20) * fVar25 + fStack_4c;
        local_18[2] = (float)(ushort)(uVar5 >> 0x20) * fVar26 + fStack_48;
        local_18[3] = fVar27 * 0.0 + fStack_44;
        local_18 = pfVar16;
      } while (iVar13 < (int)pfVar17 + -1);
    }
    if (iVar13 < (int)pfVar17) {
      local_18 = local_1250 + iVar13 * 4;
      do {
        uVar3 = *(ushort *)(local_1c + iVar13 * 2);
        iVar13 = iVar13 + 1;
        pfVar16 = local_18 + 4;
        uVar5 = CONCAT24(uVar3 >> 10,(uint)uVar3) & 0xffff0000001f;
        uVar28 = (ulonglong)CONCAT24(uVar3 >> 5,(int)uVar5) & 0x1fffffffff;
        *local_18 = (float)(int)uVar28 * fVar18 + local_50;
        local_18[1] = (float)(int)(uVar28 >> 0x20) * fVar25 + fStack_4c;
        local_18[2] = (float)(ushort)(uVar5 >> 0x20) * fVar26 + fStack_48;
        local_18[3] = fVar27 * 0.0 + fStack_44;
        local_18 = pfVar16;
      } while (iVar13 < (int)pfVar17);
    }
  }
  else {
    hkErrStream::hkErrStream(local_250,0x200);
    pcVar32 = " not implemented";
    uVar11 = *(ushort *)((int)param_1[0x15] + (uint)*(byte *)((int)param_1[0x12] + param_2 * 4) * 2)
             >> 4 & 3;
    FUN_01018d00("Compression method #");
    FUN_01018dc0(uVar11);
    FUN_01018d00(pcVar32);
    iVar13 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x902f09ed,local_250,
                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                        ,0x1b3);
    if (iVar13 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::hkBaseObject::hkBaseObject_38();
  }
  uVar15 = FUN_0124dbd0(param_2);
  FUN_01255a70(local_1250,pfVar17,uVar15,param_3);
  return;
}

// 01259E40  FUN_01259e40  size=222  [between]
undefined4 __thiscall FUN_01259e40(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (*param_3 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  return 1;
}

// 01259F20  FUN_01259f20  size=25  [between]
void FUN_01259f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01255eb0(param_2,param_3,param_4);
  return;
}

// 01259F40  FUN_01259f40  size=25  [between]
void FUN_01259f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_012562b0(param_2,param_3,param_4);
  return;
}

// 01259F60  FUN_01259f60  size=881  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01259f60(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulonglong uVar12;
  uint5 uVar13;
  unkbyte9 Var14;
  undefined1 auVar15 [13];
  char cVar16;
  undefined1 auVar17 [13];
  undefined4 uVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
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
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 uVar36;
  byte bVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  if (param_1[1] != 0) {
    iVar3 = param_2[1];
    if ((param_3[1] != 0) &&
       (auVar35._4_4_ =
             -(uint)((float)param_3[5] <= (float)param_1[9] &&
                    (float)param_1[5] <= (float)param_3[9]),
       auVar35._0_4_ =
            -(uint)((float)param_3[4] <= (float)param_1[8] && (float)param_1[4] <= (float)param_3[8]
                   ),
       auVar35._8_4_ =
            -(uint)((float)param_3[6] <= (float)param_1[10] &&
                   (float)param_1[6] <= (float)param_3[10]),
       auVar35._12_4_ =
            -(uint)((float)param_3[7] <= (float)param_1[0xb] &&
                   (float)param_1[7] <= (float)param_3[0xb]), uVar18 = movmskps(param_1,auVar35),
       iVar21 = *param_1, fVar23 = 0.0, fVar28 = (float)param_1[8], fVar29 = (float)param_1[9],
       fVar30 = (float)param_1[10], fVar31 = (float)param_1[0xb], fVar33 = (float)param_1[4],
       fVar38 = (float)param_1[5], fVar39 = (float)param_1[6], fVar40 = (float)param_1[7],
       ((byte)uVar18 & 7) == 7)) {
LAB_01259fd0:
      while (bVar37 = *(byte *)(iVar21 + 3), (bVar37 & 1) != 0) {
        iVar20 = *param_1;
        uVar2 = *(uint *)(iVar20 + 4 + (int)fVar23 * 4);
        auVar8[0xc] = (char)(uVar2 >> 0x18);
        auVar8._0_12_ = ZEXT712(0);
        uVar13 = CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar2 >> 0x10));
        auVar17._5_8_ = 0;
        auVar17._0_5_ = uVar13;
        Var14 = CONCAT72(SUB137(auVar17 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
        auVar32._0_4_ = uVar2 & 0xff;
        auVar32._4_9_ = Var14;
        auVar32._13_3_ = 0;
        iVar21 = iVar20 + 4 + (int)fVar23 * 4;
        fVar22 = (float)((bVar37 & 0xfe) + (int)fVar23);
        uVar18 = *(undefined4 *)(iVar20 + (int)fVar22 * 4);
        bVar37 = (byte)((uint)uVar18 >> 0x18);
        uVar36 = (undefined1)((uint)uVar18 >> 8);
        uVar12 = (ulonglong)CONCAT12(uVar36,(short)uVar18) & 0xffffffffffff00ff;
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar12;
        auVar9[0xc] = bVar37;
        auVar10[8] = (char)((uint)uVar18 >> 0x10);
        auVar10._0_8_ = uVar12;
        auVar10[9] = 0;
        auVar10._10_3_ = auVar9._10_3_;
        auVar15._5_8_ = 0;
        auVar15._0_5_ = auVar10._8_5_;
        auVar11[4] = uVar36;
        auVar11._0_4_ = (uint)uVar12;
        auVar11[5] = 0;
        auVar11._6_7_ = SUB137(auVar15 << 0x40,6);
        auVar34._0_4_ = (uint)uVar12 & 0xffff;
        auVar34._4_9_ = auVar11._4_9_;
        auVar34._13_3_ = 0;
        auVar32 = auVar32 & _DAT_01b34560;
        auVar35 = auVar34 & _DAT_01b34560;
        fVar46 = (float)(auVar11._4_4_ >> 4);
        fVar47 = (float)(auVar10._8_4_ >> 4);
        fVar48 = (float)(bVar37 >> 4);
        fVar41 = (float)(uVar2 >> 4 & 0xf);
        fVar42 = (float)((uint)Var14 >> 4);
        fVar43 = (float)((uint)uVar13 >> 4);
        fVar44 = (float)(uint3)(auVar8._10_3_ >> 0x14);
        fVar24 = (fVar28 - fVar33) * 0.0044247787;
        fVar25 = (fVar29 - fVar38) * 0.0044247787;
        fVar26 = (fVar30 - fVar39) * 0.0044247787;
        fVar27 = (fVar31 - fVar40) * 0.0044247787;
        fVar41 = fVar41 * fVar41 * fVar24 + fVar33;
        fVar42 = fVar42 * fVar42 * fVar25 + fVar38;
        fVar43 = fVar43 * fVar43 * fVar26 + fVar39;
        fVar44 = fVar44 * fVar44 * fVar27 + fVar40;
        fVar33 = (float)(auVar34._0_4_ >> 4) * (float)(auVar34._0_4_ >> 4) * fVar24 + fVar33;
        fVar38 = fVar46 * fVar46 * fVar25 + fVar38;
        fVar39 = fVar47 * fVar47 * fVar26 + fVar39;
        fVar40 = fVar48 * fVar48 * fVar27 + fVar40;
        fVar46 = fVar28 - (float)auVar32._0_4_ * (float)auVar32._0_4_ * fVar24;
        fVar47 = fVar29 - (float)auVar32._4_4_ * (float)auVar32._4_4_ * fVar25;
        fVar48 = fVar30 - (float)auVar32._8_4_ * (float)auVar32._8_4_ * fVar26;
        fVar45 = fVar31 - (float)auVar32._12_4_ * (float)auVar32._12_4_ * fVar27;
        fVar28 = fVar28 - (float)auVar35._0_4_ * (float)auVar35._0_4_ * fVar24;
        fVar29 = fVar29 - (float)auVar35._4_4_ * (float)auVar35._4_4_ * fVar25;
        fVar30 = fVar30 - (float)auVar35._8_4_ * (float)auVar35._8_4_ * fVar26;
        fVar31 = fVar31 - (float)auVar35._12_4_ * (float)auVar35._12_4_ * fVar27;
        if ((param_3[1] == 0) ||
           (auVar6._4_4_ = -(uint)(fVar42 <= (float)param_3[9] && (float)param_3[5] <= fVar47),
           auVar6._0_4_ = -(uint)(fVar41 <= (float)param_3[8] && (float)param_3[4] <= fVar46),
           auVar6._8_4_ = -(uint)(fVar43 <= (float)param_3[10] && (float)param_3[6] <= fVar48),
           auVar6._12_4_ = -(uint)(fVar44 <= (float)param_3[0xb] && (float)param_3[7] <= fVar45),
           uVar18 = movmskps(iVar21,auVar6), ((byte)uVar18 & 7) != 7)) {
          bVar37 = 0;
        }
        else {
          bVar37 = 1;
        }
        if ((param_3[1] == 0) ||
           (auVar7._4_4_ = -(uint)(fVar38 <= (float)param_3[9] && (float)param_3[5] <= fVar29),
           auVar7._0_4_ = -(uint)(fVar33 <= (float)param_3[8] && (float)param_3[4] <= fVar28),
           auVar7._8_4_ = -(uint)(fVar39 <= (float)param_3[10] && (float)param_3[6] <= fVar30),
           auVar7._12_4_ = -(uint)(fVar40 <= (float)param_3[0xb] && (float)param_3[7] <= fVar31),
           uVar18 = movmskps(param_3,auVar7), ((byte)uVar18 & 7) != 7)) {
          cVar16 = '\0';
        }
        else {
          cVar16 = '\x01';
        }
        switch(-cVar16 & 2U | bVar37) {
        default:
          goto LAB_0125a297;
        case 1:
          fVar23 = (float)((int)fVar23 + 1);
          fVar28 = fVar46;
          fVar29 = fVar47;
          fVar30 = fVar48;
          fVar31 = fVar45;
          fVar33 = fVar41;
          fVar38 = fVar42;
          fVar39 = fVar43;
          fVar40 = fVar44;
          break;
        case 2:
          iVar21 = iVar20 + (int)fVar22 * 4;
          fVar23 = fVar22;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
          }
          pfVar19 = (float *)(param_2[1] * 0x30 + *param_2);
          param_2[1] = param_2[1] + 1;
          pfVar19[4] = fVar28;
          pfVar19[5] = fVar29;
          pfVar19[6] = fVar30;
          pfVar19[7] = fVar31;
          pfVar19[8] = fVar22;
          *pfVar19 = fVar33;
          pfVar19[1] = fVar38;
          pfVar19[2] = fVar39;
          pfVar19[3] = fVar40;
          fVar23 = (float)((int)fVar23 + 1);
          fVar28 = fVar46;
          fVar29 = fVar47;
          fVar30 = fVar48;
          fVar31 = fVar45;
          fVar33 = fVar41;
          fVar38 = fVar42;
          fVar39 = fVar43;
          fVar40 = fVar44;
        }
      }
      if (param_3[1] == 0) {
        param_3[1] = 0;
      }
      else {
        iVar21 = *param_3;
        piVar4 = *(int **)(iVar21 + 0x70);
        iVar20 = *(int *)(iVar21 + 0x60);
        uVar2 = (uint)(bVar37 >> 1) * 2;
        if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
        }
        iVar5 = piVar4[1];
        piVar4[1] = iVar5 + 1;
        *(uint *)(*piVar4 + iVar5 * 4) = iVar20 << 8 | uVar2;
        iVar20 = *(int *)(iVar21 + 0x48) + (uint)(bVar37 >> 1) * 4;
        if (*(char *)(iVar20 + 3) == *(char *)(iVar20 + 2)) {
          iVar20 = (uint)(*(char *)(iVar20 + 2) == *(char *)(iVar20 + 1)) * 2 + 1;
        }
        else {
          iVar20 = 2;
        }
        if (1 < *(int *)(&DAT_017dc4c8 + iVar20 * 4)) {
          iVar20 = *(int *)(iVar21 + 0x60);
          piVar4 = *(int **)(iVar21 + 0x70);
          if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
          }
          iVar21 = piVar4[1];
          piVar4[1] = iVar21 + 1;
          *(uint *)(*piVar4 + iVar21 * 4) = iVar20 << 8 | uVar2 | 1;
        }
        param_3[1] = 1;
      }
LAB_0125a297:
      iVar21 = param_2[1];
      if (iVar3 < iVar21) {
        iVar20 = *param_2;
        param_2[1] = iVar21 + -1;
        pfVar19 = (float *)(iVar20 + -0x30 + iVar21 * 0x30);
        pfVar1 = (float *)(iVar20 + -0x20 + iVar21 * 0x30);
        fVar23 = *(float *)(iVar20 + iVar21 * 0x30 + -0x10);
        iVar21 = *param_1 + (int)fVar23 * 4;
        fVar28 = *pfVar1;
        fVar29 = pfVar1[1];
        fVar30 = pfVar1[2];
        fVar31 = pfVar1[3];
        fVar33 = *pfVar19;
        fVar38 = pfVar19[1];
        fVar39 = pfVar19[2];
        fVar40 = pfVar19[3];
        goto LAB_01259fd0;
      }
    }
  }
  return;
}

// 0125D3E0  hkpBvCompressedMeshShapeGc::vf08  size=7718  [__FILE__]
/* WARNING: Removing unreachable block (ram,0x0125eddf) */
/* WARNING: Removing unreachable block (ram,0x0125ed77) */
/* WARNING: Removing unreachable block (ram,0x0125e710) */
/* WARNING: Removing unreachable block (ram,0x0125e757) */
/* WARNING: Removing unreachable block (ram,0x0125e7bd) */
/* WARNING: Removing unreachable block (ram,0x0125de13) */
/* WARNING: Removing unreachable block (ram,0x0125de5a) */
/* WARNING: Removing unreachable block (ram,0x0125d93d) */
/* WARNING: Removing unreachable block (ram,0x0125d8d4) */
/* WARNING: Removing unreachable block (ram,0x0125d88d) */
/* WARNING: Removing unreachable block (ram,0x0125ed30) */
/* WARNING: Removing unreachable block (ram,0x0125ded0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkpBvCompressedMeshShapeGc::vf08(float *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint6 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float *pfVar6;
  ushort uVar7;
  byte *pbVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  undefined4 extraout_EDX;
  float fVar15;
  undefined1 auVar18 [12];
  float fVar16;
  float fVar49;
  undefined1 auVar19 [12];
  undefined1 auVar17 [4];
  float fVar48;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  float fVar57;
  float fVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulonglong uVar67;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ulonglong uVar68;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  char *pcVar91;
  undefined1 local_d10 [512];
  undefined1 local_b10 [512];
  undefined1 local_910 [512];
  undefined1 local_710 [512];
  undefined1 local_510 [512];
  float local_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  float fStack_2fc;
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
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
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
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210 [11];
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
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110 [4];
  float local_100 [12];
  undefined1 local_d0 [8];
  float fStack_c8;
  uint uStack_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [8];
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
  float local_70 [4];
  undefined1 local_60 [4];
  float afStack_5c [4];
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  float *local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  
  local_40 = FUN_0124dbd0(param_2);
  iVar11 = param_2 * 4;
  fVar16 = param_1[0x12];
  local_14 = (float *)(uint)*(byte *)(iVar11 + 2 + (int)fVar16);
  if (((float *)(uint)*(byte *)(iVar11 + 3 + (int)fVar16) == local_14) &&
     (local_14 == (float *)(uint)*(byte *)(iVar11 + 1 + (int)fVar16))) {
    pfVar10 = (float *)(uint)*(byte *)(iVar11 + 1 + (int)fVar16);
  }
  else {
    local_14 = (float *)param_1[0x11];
    local_1c = local_14[1];
    local_20 = (float *)0x0;
    if (0 < (int)local_1c) {
      pbVar8 = (byte *)((int)*local_14 + 3);
      do {
        if (((*pbVar8 & 1) == 0) && (pfVar10 = local_20, param_2 == *pbVar8 >> 1))
        goto LAB_0125d486;
        local_20 = (float *)((int)local_20 + 1);
        pbVar8 = pbVar8 + 4;
      } while ((int)local_20 < (int)local_1c);
    }
    pfVar10 = (float *)0xffffffff;
  }
LAB_0125d486:
  local_24 = iVar11;
  FUN_01236680(pfVar10,&local_90);
  iVar13 = local_24;
  fVar16 = param_1[0x12];
  fVar48 = param_1[0x15];
  switch(*(ushort *)((int)fVar48 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2) & 0xf) {
  case 0:
    local_1c = (float)(uint)*(byte *)((int)fVar48 + 1 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    if (3 < (uint)local_1c) {
      local_1c = 5.60519e-45;
    }
    fVar15 = local_1c;
    uVar9 = (uint)*(ushort *)((int)fVar48 + 2 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    uVar1 = *(ushort *)((int)fVar48 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2) >> 4;
    uVar7 = uVar1 & 3;
    if ((uVar1 & 3) == 0) {
      iVar13 = (int)param_1[0x14] + uVar9 * 8;
      iVar12 = (int)local_1c - 1;
      iVar11 = 0;
      if (0 < iVar12) {
        pfVar10 = local_210 + 4;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar67;
          auVar21._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar21._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar21._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar21._10_6_ = 0;
          auVar69._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar69._0_4_ = auVar69._4_4_;
          auVar69._8_4_ = auVar69._4_4_;
          auVar69._12_4_ = auVar69._4_4_;
          auVar47 = auVar20 & _DAT_017e9c20 | auVar69 & _DAT_017e9c10 | auVar21 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar15 = param_1[7];
          fVar50 = param_1[1];
          fVar57 = param_1[2];
          fVar58 = param_1[3];
          pfVar10[-4] = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[-3] = fVar50 + (float)auVar47._4_4_ * fVar16;
          pfVar10[-2] = fVar57 + (float)auVar47._8_4_ * fVar48;
          pfVar10[-1] = fVar58 + (float)auVar47._12_4_ * fVar15;
          uVar67 = *(ulonglong *)(iVar13 + 8 + iVar11 * 8);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar67;
          auVar70._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar23._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar23._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar23._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar23._10_6_ = 0;
          auVar70._0_4_ = auVar70._4_4_;
          auVar70._8_4_ = auVar70._4_4_;
          auVar70._12_4_ = auVar70._4_4_;
          auVar47 = auVar22 & _DAT_017e9c20 | auVar70 & _DAT_017e9c10 | auVar23 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar15 = param_1[7];
          fVar50 = param_1[1];
          fVar57 = param_1[2];
          fVar58 = param_1[3];
          *pfVar10 = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[1] = fVar50 + (float)auVar47._4_4_ * fVar16;
          pfVar10[2] = fVar57 + (float)auVar47._8_4_ * fVar48;
          pfVar10[3] = fVar58 + (float)auVar47._12_4_ * fVar15;
          iVar11 = iVar11 + 2;
          pfVar10 = pfVar10 + 8;
        } while (iVar11 < iVar12);
      }
      if (iVar11 < (int)local_1c) {
        pfVar10 = local_210 + iVar11 * 4;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar67;
          auVar71._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar25._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar25._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar25._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar25._10_6_ = 0;
          auVar71._0_4_ = auVar71._4_4_;
          auVar71._8_4_ = auVar71._4_4_;
          auVar71._12_4_ = auVar71._4_4_;
          auVar47 = auVar24 & _DAT_017e9c20 | auVar71 & _DAT_017e9c10 | auVar25 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar15 = param_1[7];
          fVar50 = param_1[1];
          fVar57 = param_1[2];
          fVar58 = param_1[3];
          *pfVar10 = (float)auVar47._0_4_ * param_1[4] + *param_1;
          pfVar10[1] = (float)auVar47._4_4_ * fVar16 + fVar50;
          pfVar10[2] = (float)auVar47._8_4_ * fVar48 + fVar57;
          pfVar10[3] = (float)auVar47._12_4_ * fVar15 + fVar58;
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 < (int)local_1c);
      }
    }
    else if (uVar7 == 1) {
      local_260 = (local_80 - local_90) * _DAT_01b249c0;
      fStack_25c = (fStack_7c - fStack_8c) * fRam01b249c4;
      fStack_258 = (fStack_78 - fStack_88) * fRam01b249c8;
      fStack_254 = (fStack_74 - fStack_84) * fRam01b249cc;
      local_270 = local_90;
      fStack_26c = fStack_8c;
      fStack_268 = fStack_88;
      fStack_264 = fStack_84;
      iVar12 = (int)param_1[0x14] + uVar9 * 8;
      iVar11 = (int)local_1c - 1;
      iVar13 = 0;
      if (0 < iVar11) {
        pfVar10 = local_210 + 4;
        do {
          uVar9 = *(uint *)(iVar12 + iVar13 * 4);
          pfVar10[-4] = (float)(uVar9 & 0x7ff) * local_260 + local_90;
          pfVar10[-3] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_25c + fStack_8c;
          pfVar10[-2] = (float)(uVar9 >> 0x16) * fStack_258 + fStack_88;
          pfVar10[-1] = fStack_254 * 0.0 + fStack_84;
          uVar9 = *(uint *)(iVar12 + 4 + iVar13 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_260 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_25c + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_258 + fStack_88;
          pfVar10[3] = fStack_254 * 0.0 + fStack_84;
          iVar13 = iVar13 + 2;
          pfVar10 = pfVar10 + 8;
        } while (iVar13 < iVar11);
      }
      if (iVar13 < (int)fVar15) {
        pfVar10 = local_210 + iVar13 * 4;
        do {
          uVar9 = *(uint *)(iVar12 + iVar13 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_260 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_25c + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_258 + fStack_88;
          pfVar10[3] = fStack_254 * 0.0 + fStack_84;
          iVar13 = iVar13 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar13 < (int)fVar15);
      }
    }
    else if (uVar7 == 2) {
      local_2a0 = (local_80 - local_90) * _DAT_01b24c30;
      fStack_29c = (fStack_7c - fStack_8c) * fRam01b24c34;
      fStack_298 = (fStack_78 - fStack_88) * fRam01b24c38;
      fStack_294 = (fStack_74 - fStack_84) * fRam01b24c3c;
      local_2b0 = local_90;
      fStack_2ac = fStack_8c;
      fStack_2a8 = fStack_88;
      fStack_2a4 = fStack_84;
      iVar11 = (int)param_1[0x14] + uVar9 * 8;
      iVar13 = 0;
      fVar16 = local_1c;
      local_24 = iVar11;
      if (local_1c != 1.4013e-45 && -1 < (int)((int)local_1c - 1U)) {
        local_20 = local_210 + 4;
        do {
          pfVar10 = local_20;
          iVar12 = local_24;
          uVar1 = *(ushort *)(iVar11 + iVar13 * 2);
          iVar13 = iVar13 + 2;
          uVar3 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar3) & 0x1fffffffff;
          local_20[-4] = (float)(int)uVar67 * local_2a0 + local_90;
          pfVar10[-3] = (float)(int)(uVar67 >> 0x20) * fStack_29c + fStack_8c;
          pfVar10[-2] = (float)(ushort)(uVar3 >> 0x20) * fStack_298 + fStack_88;
          pfVar10[-1] = fStack_294 * 0.0 + fStack_84;
          fVar16 = local_1c;
          pfVar10 = local_20;
          iVar11 = local_24;
          uVar1 = *(ushort *)(iVar12 + -2 + iVar13 * 2);
          uVar3 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar3) & 0x1fffffffff;
          pfVar6 = local_20 + 8;
          *local_20 = (float)(int)uVar67 * local_2a0 + local_90;
          local_20 = pfVar6;
          pfVar10[1] = (float)(int)(uVar67 >> 0x20) * fStack_29c + fStack_8c;
          pfVar10[2] = (float)(ushort)(uVar3 >> 0x20) * fStack_298 + fStack_88;
          pfVar10[3] = fStack_294 * 0.0 + fStack_84;
        } while (iVar13 < (int)((int)fVar16 - 1U));
      }
      if (iVar13 < (int)fVar16) {
        local_14 = local_210 + iVar13 * 4;
        do {
          pfVar10 = local_14;
          uVar1 = *(ushort *)(iVar11 + iVar13 * 2);
          iVar13 = iVar13 + 1;
          uVar3 = CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffff0000001f;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar3) & 0x1fffffffff;
          pfVar6 = local_14 + 4;
          *local_14 = (float)(int)uVar67 * local_2a0 + local_90;
          local_14 = pfVar6;
          pfVar10[1] = (float)(int)(uVar67 >> 0x20) * fStack_29c + fStack_8c;
          pfVar10[2] = (float)(ushort)(uVar3 >> 0x20) * fStack_298 + fStack_88;
          pfVar10[3] = fStack_294 * 0.0 + fStack_84;
          iVar11 = local_24;
        } while (iVar13 < (int)local_1c);
      }
    }
    else {
      hkErrStream::hkErrStream(local_510,0x200);
      pcVar91 = " not implemented";
      uVar9 = *(ushort *)((int)param_1[0x15] + (uint)*(byte *)(iVar11 + (int)param_1[0x12]) * 2) >>
              4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar9);
      FUN_01018d00(pcVar91);
      iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_510,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar11 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
    }
    local_1d0 = (local_210[8] - local_210[0]) + local_210[4];
    fStack_1cc = (local_210[9] - local_210[1]) + local_210[5];
    fStack_1c8 = (local_210[10] - local_210[2]) + local_210[6];
    fStack_1c4 = (fStack_1e4 - local_210[3]) + local_210[7];
    local_1c0 = (local_1e0 - local_210[0]) + local_210[8];
    fStack_1bc = (fStack_1dc - local_210[1]) + local_210[9];
    fStack_1b8 = (fStack_1d8 - local_210[2]) + local_210[10];
    fStack_1b4 = (fStack_1d4 - local_210[3]) + fStack_1e4;
    local_1b0 = (local_210[4] - local_210[0]) + local_1e0;
    fStack_1ac = (local_210[5] - local_210[1]) + fStack_1dc;
    fStack_1a8 = (local_210[6] - local_210[2]) + fStack_1d8;
    fStack_1a4 = (local_210[7] - local_210[3]) + fStack_1d4;
    local_1a0 = (local_1e0 - local_210[0]) + local_1d0;
    fStack_19c = (fStack_1dc - local_210[1]) + fStack_1cc;
    fStack_198 = (fStack_1d8 - local_210[2]) + fStack_1c8;
    fStack_194 = (fStack_1d4 - local_210[3]) + fStack_1c4;
    FUN_01255a70(local_210,8,local_40,param_3);
    return;
  case 1:
    hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned_int,unsigned___int64,11,21>,hkpBvCompressedMeshShapeTreeDataRun>
    ::CustomGeometryConverter::vf08(param_1,param_2,param_3);
    return;
  case 2:
    fVar15 = (float)(uint)(*(char *)((int)fVar48 + 1 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2) !=
                          '\0');
    local_14 = (float *)(uint)*(ushort *)
                               ((int)fVar48 + 2 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    uVar1 = *(ushort *)((int)fVar48 + (uint)*(byte *)(local_24 + (int)fVar16) * 2) >> 4;
    uVar7 = uVar1 & 3;
    local_1c = fVar15;
    if ((uVar1 & 3) == 0) {
      iVar13 = (int)param_1[0x14] + (int)local_14 * 8;
      iVar11 = 0;
      if (0 < (int)((int)fVar15 - 1U)) {
        pfVar10 = (float *)local_60;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar67;
          auVar36._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar36._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar36._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar36._10_6_ = 0;
          auVar75._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar75._0_4_ = auVar75._4_4_;
          auVar75._8_4_ = auVar75._4_4_;
          auVar75._12_4_ = auVar75._4_4_;
          auVar47 = auVar35 & _DAT_017e9c20 | auVar75 & _DAT_017e9c10 | auVar36 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          pfVar10[-4] = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[-3] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[-2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[-1] = fVar60 + (float)auVar47._12_4_ * fVar50;
          uVar67 = *(ulonglong *)(iVar13 + 8 + iVar11 * 8);
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar67;
          auVar76._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar38._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar38._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar38._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar38._10_6_ = 0;
          auVar76._0_4_ = auVar76._4_4_;
          auVar76._8_4_ = auVar76._4_4_;
          auVar76._12_4_ = auVar76._4_4_;
          auVar47 = auVar37 & _DAT_017e9c20 | auVar76 & _DAT_017e9c10 | auVar38 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          *pfVar10 = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[1] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[3] = fVar60 + (float)auVar47._12_4_ * fVar50;
          pfVar10 = pfVar10 + 8;
          iVar11 = iVar11 + 2;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        pfVar10 = local_70 + iVar11 * 4;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar39._8_8_ = 0;
          auVar39._0_8_ = uVar67;
          auVar77._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar40._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar40._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar40._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar40._10_6_ = 0;
          auVar77._0_4_ = auVar77._4_4_;
          auVar77._8_4_ = auVar77._4_4_;
          auVar77._12_4_ = auVar77._4_4_;
          auVar47 = auVar39 & _DAT_017e9c20 | auVar77 & _DAT_017e9c10 | auVar40 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          *pfVar10 = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[1] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[3] = fVar60 + (float)auVar47._12_4_ * fVar50;
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 < (int)fVar15);
      }
    }
    else if (uVar7 == 1) {
      local_2e0 = (local_80 - local_90) * _DAT_01b249c0;
      fStack_2dc = (fStack_7c - fStack_8c) * fRam01b249c4;
      fStack_2d8 = (fStack_78 - fStack_88) * fRam01b249c8;
      fStack_2d4 = (fStack_74 - fStack_84) * fRam01b249cc;
      local_2f0 = local_90;
      fStack_2ec = fStack_8c;
      fStack_2e8 = fStack_88;
      fStack_2e4 = fStack_84;
      iVar13 = (int)param_1[0x14] + (int)local_14 * 8;
      iVar11 = 0;
      if (0 < (int)((int)fVar15 - 1U)) {
        pfVar10 = (float *)local_60;
        do {
          uVar9 = *(uint *)(iVar13 + iVar11 * 4);
          pfVar10[-4] = (float)(uVar9 & 0x7ff) * local_2e0 + local_90;
          pfVar10[-3] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_2dc + fStack_8c;
          pfVar10[-2] = (float)(uVar9 >> 0x16) * fStack_2d8 + fStack_88;
          pfVar10[-1] = fStack_2d4 * 0.0 + fStack_84;
          uVar9 = *(uint *)(iVar13 + 4 + iVar11 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_2e0 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_2dc + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_2d8 + fStack_88;
          pfVar10[3] = fStack_2d4 * 0.0 + fStack_84;
          pfVar10 = pfVar10 + 8;
          iVar11 = iVar11 + 2;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        pfVar10 = local_70 + iVar11 * 4;
        do {
          uVar9 = *(uint *)(iVar13 + iVar11 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_2e0 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_2dc + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_2d8 + fStack_88;
          pfVar10[3] = fStack_2d4 * 0.0 + fStack_84;
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 < (int)fVar15);
      }
    }
    else if (uVar7 == 2) {
      local_300 = (local_80 - local_90) * _DAT_01b24c30;
      fStack_2fc = (fStack_7c - fStack_8c) * fRam01b24c34;
      fStack_2f8 = (fStack_78 - fStack_88) * fRam01b24c38;
      fStack_2f4 = (fStack_74 - fStack_84) * fRam01b24c3c;
      local_310 = local_90;
      fStack_30c = fStack_8c;
      fStack_308 = fStack_88;
      fStack_304 = fStack_84;
      local_20 = (float *)((int)param_1[0x14] + (int)local_14 * 8);
      iVar11 = 0;
      if (0 < (int)((int)fVar15 - 1U)) {
        local_14 = (float *)local_60;
        do {
          pfVar6 = local_14;
          pfVar10 = local_20;
          uVar1 = *(ushort *)((int)local_20 + iVar11 * 2);
          iVar11 = iVar11 + 2;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          local_14[-4] = (float)(int)uVar68 * local_300 + local_90;
          pfVar6[-3] = (float)(int)(uVar68 >> 0x20) * fStack_2fc + fStack_8c;
          pfVar6[-2] = (float)(int)(uVar67 >> 0x20) * fStack_2f8 + fStack_88;
          pfVar6[-1] = fStack_2f4 * 0.0 + fStack_84;
          pfVar6 = local_14;
          fVar15 = local_1c;
          uVar1 = *(ushort *)((int)pfVar10 + iVar11 * 2 + -2);
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar10 = local_14 + 8;
          *local_14 = (float)(int)uVar68 * local_300 + local_90;
          local_14 = pfVar10;
          pfVar6[1] = (float)(int)(uVar68 >> 0x20) * fStack_2fc + fStack_8c;
          pfVar6[2] = (float)(int)(uVar67 >> 0x20) * fStack_2f8 + fStack_88;
          pfVar6[3] = fStack_2f4 * 0.0 + fStack_84;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        local_14 = local_70 + iVar11 * 4;
        do {
          pfVar10 = local_14;
          uVar1 = *(ushort *)((int)local_20 + iVar11 * 2);
          iVar11 = iVar11 + 1;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar6 = local_14 + 4;
          *local_14 = (float)(int)uVar68 * local_300 + local_90;
          local_14 = pfVar6;
          pfVar10[1] = (float)(int)(uVar68 >> 0x20) * fStack_2fc + fStack_8c;
          pfVar10[2] = (float)(int)(uVar67 >> 0x20) * fStack_2f8 + fStack_88;
          pfVar10[3] = fStack_2f4 * 0.0 + fStack_84;
        } while (iVar11 < (int)local_1c);
      }
    }
    else {
      hkErrStream::hkErrStream(local_710,0x200);
      pcVar91 = " not implemented";
      uVar9 = *(ushort *)((int)param_1[0x15] + (uint)*(byte *)(iVar13 + (int)param_1[0x12]) * 2) >>
              4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar9);
      FUN_01018d00(pcVar91);
      iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_710,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar11 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
    }
    local_18 = (float *)((int)*(short *)((int)param_1[0x15] + 4 +
                                        (uint)*(byte *)(local_24 + (int)param_1[0x12]) * 2) << 0x10)
    ;
    local_b0._4_4_ = local_18;
    local_b0._0_4_ = local_18;
    fStack_a8 = (float)local_18;
    fStack_a4 = (float)local_18;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b94,&local_4c,0x90,0x10);
    local_14 = (float *)0x0;
    do {
      local_18 = (float *)((float)(int)local_14 * 0.09090909);
      iVar11 = 0;
      do {
        local_d0._4_4_ = (float)iVar11 * 0.09090909;
        local_d0._0_4_ = local_18;
        _fStack_c8 = 0;
        if (local_48 == (local_44 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_4c,0x10);
        }
        pfVar10 = (float *)(local_48 * 0x10 + local_4c);
        local_48 = local_48 + 1;
        FUN_0108de10(local_d0,pfVar10);
        iVar11 = iVar11 + 1;
        *pfVar10 = (float)local_b0._0_4_ * *pfVar10 + local_70[0];
        pfVar10[1] = (float)local_b0._4_4_ * pfVar10[1] + local_70[1];
        pfVar10[2] = fStack_a8 * pfVar10[2] + local_70[2];
        pfVar10[3] = fStack_a4 * pfVar10[3] + local_70[3];
      } while (iVar11 < 0xc);
      local_14 = (float *)((int)local_14 + 1);
    } while ((int)local_14 < 0xc);
    FUN_01255a70(local_4c,local_48,local_40,param_3);
    local_48 = 0;
    iVar11 = local_4c;
    uVar9 = local_44;
    break;
  case 3:
    local_1c = (float)(uint)*(byte *)((int)fVar48 + 1 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    if (1 < (uint)local_1c) {
      local_1c = 2.8026e-45;
    }
    uVar9 = (uint)*(ushort *)((int)fVar48 + 2 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    uVar1 = *(ushort *)((int)fVar48 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2) >> 4;
    uVar7 = uVar1 & 3;
    if ((uVar1 & 3) == 0) {
      iVar12 = (int)param_1[0x14] + uVar9 * 8;
      iVar13 = 0;
      if (local_1c != 1.4013e-45 && -1 < (int)((int)local_1c - 1U)) {
        pauVar14 = (undefined1 (*) [16])local_100;
        do {
          uVar67 = *(ulonglong *)(iVar12 + iVar13 * 8);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar67;
          auVar30._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar30._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar30._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar30._10_6_ = 0;
          auVar72._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar72._0_4_ = auVar72._4_4_;
          auVar72._8_4_ = auVar72._4_4_;
          auVar72._12_4_ = auVar72._4_4_;
          auVar47 = auVar29 & _DAT_017e9c20 | auVar72 & _DAT_017e9c10 | auVar30 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar15 = param_1[7];
          fVar50 = param_1[1];
          fVar57 = param_1[2];
          fVar58 = param_1[3];
          *(float *)pauVar14[-1] = *param_1 + (float)auVar47._0_4_ * param_1[4];
          *(float *)((int)pauVar14[-1] + 4) = fVar50 + (float)auVar47._4_4_ * fVar16;
          *(float *)((int)pauVar14[-1] + 8) = fVar57 + (float)auVar47._8_4_ * fVar48;
          *(float *)((int)pauVar14[-1] + 0xc) = fVar58 + (float)auVar47._12_4_ * fVar15;
          uVar67 = *(ulonglong *)(iVar12 + 8 + iVar13 * 8);
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar67;
          auVar73._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar32._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar32._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar32._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar32._10_6_ = 0;
          auVar73._0_4_ = auVar73._4_4_;
          auVar73._8_4_ = auVar73._4_4_;
          auVar73._12_4_ = auVar73._4_4_;
          auVar47 = auVar31 & _DAT_017e9c20 | auVar73 & _DAT_017e9c10 | auVar32 & _DAT_017e9c00;
          in_XMM4._0_4_ = *param_1 + (float)auVar47._0_4_ * param_1[4];
          in_XMM4._4_4_ = param_1[1] + (float)auVar47._4_4_ * param_1[5];
          in_XMM4._8_4_ = param_1[2] + (float)auVar47._8_4_ * param_1[6];
          in_XMM4._12_4_ = param_1[3] + (float)auVar47._12_4_ * param_1[7];
          *pauVar14 = in_XMM4;
          iVar13 = iVar13 + 2;
          pauVar14 = pauVar14 + 2;
        } while (iVar13 < (int)((int)local_1c - 1U));
      }
      if (iVar13 < (int)local_1c) {
        pauVar14 = (undefined1 (*) [16])(local_110 + iVar13 * 4);
        do {
          uVar67 = *(ulonglong *)(iVar12 + iVar13 * 8);
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar67;
          auVar74._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar34._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar34._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar34._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar34._10_6_ = 0;
          auVar74._0_4_ = auVar74._4_4_;
          auVar74._8_4_ = auVar74._4_4_;
          auVar74._12_4_ = auVar74._4_4_;
          auVar47 = auVar33 & _DAT_017e9c20 | auVar74 & _DAT_017e9c10 | auVar34 & _DAT_017e9c00;
          in_XMM4._0_4_ = *param_1 + (float)auVar47._0_4_ * param_1[4];
          in_XMM4._4_4_ = param_1[1] + (float)auVar47._4_4_ * param_1[5];
          in_XMM4._8_4_ = param_1[2] + (float)auVar47._8_4_ * param_1[6];
          in_XMM4._12_4_ = param_1[3] + (float)auVar47._12_4_ * param_1[7];
          *pauVar14 = in_XMM4;
          iVar13 = iVar13 + 1;
          pauVar14 = pauVar14 + 1;
        } while (iVar13 < (int)local_1c);
      }
    }
    else if (uVar7 == 1) {
      local_280 = (local_80 - local_90) * _DAT_01b249c0;
      fStack_27c = (fStack_7c - fStack_8c) * fRam01b249c4;
      fStack_278 = (fStack_78 - fStack_88) * fRam01b249c8;
      fStack_274 = (fStack_74 - fStack_84) * fRam01b249cc;
      local_290 = local_90;
      fStack_28c = fStack_8c;
      fStack_288 = fStack_88;
      fStack_284 = fStack_84;
      iVar12 = (int)param_1[0x14] + uVar9 * 8;
      iVar13 = 0;
      if (local_1c != 1.4013e-45 && -1 < (int)((int)local_1c - 1U)) {
        pfVar10 = local_100;
        do {
          uVar9 = *(uint *)(iVar12 + iVar13 * 4);
          auVar26._0_4_ = uVar9 >> 0xb;
          auVar26._4_4_ = auVar26._0_4_;
          auVar26._8_4_ = auVar26._0_4_;
          auVar26._12_4_ = auVar26._0_4_;
          auVar84._0_4_ = uVar9 >> 0x16;
          auVar84._4_4_ = auVar84._0_4_;
          auVar84._8_4_ = auVar84._0_4_;
          auVar84._12_4_ = auVar84._0_4_;
          auVar47 = ZEXT416(uVar9) & _DAT_017e9c50 | auVar84 & _DAT_017e9c40 |
                    auVar26 & _DAT_017e9c30;
          pfVar10[-4] = (float)auVar47._0_4_ * local_280 + local_90;
          pfVar10[-3] = (float)auVar47._4_4_ * fStack_27c + fStack_8c;
          pfVar10[-2] = (float)auVar47._8_4_ * fStack_278 + fStack_88;
          pfVar10[-1] = (float)auVar47._12_4_ * fStack_274 + fStack_84;
          uVar9 = *(uint *)(iVar12 + 4 + iVar13 * 4);
          auVar27._0_4_ = uVar9 >> 0xb;
          auVar85._0_4_ = uVar9 >> 0x16;
          auVar27._4_4_ = auVar27._0_4_;
          auVar27._8_4_ = auVar27._0_4_;
          auVar27._12_4_ = auVar27._0_4_;
          auVar85._4_4_ = auVar85._0_4_;
          auVar85._8_4_ = auVar85._0_4_;
          auVar85._12_4_ = auVar85._0_4_;
          auVar47 = ZEXT416(uVar9) & _DAT_017e9c50 | auVar85 & _DAT_017e9c40 |
                    auVar27 & _DAT_017e9c30;
          *pfVar10 = (float)auVar47._0_4_ * local_280 + local_90;
          pfVar10[1] = (float)auVar47._4_4_ * fStack_27c + fStack_8c;
          pfVar10[2] = (float)auVar47._8_4_ * fStack_278 + fStack_88;
          pfVar10[3] = (float)auVar47._12_4_ * fStack_274 + fStack_84;
          iVar13 = iVar13 + 2;
          pfVar10 = pfVar10 + 8;
        } while (iVar13 < (int)((int)local_1c - 1U));
      }
      in_XMM4 = _DAT_017e9c30;
      if (iVar13 < (int)local_1c) {
        pfVar10 = local_110 + iVar13 * 4;
        do {
          uVar9 = *(uint *)(iVar12 + iVar13 * 4);
          auVar28._0_4_ = uVar9 >> 0xb;
          auVar86._0_4_ = uVar9 >> 0x16;
          auVar28._4_4_ = auVar28._0_4_;
          auVar28._8_4_ = auVar28._0_4_;
          auVar28._12_4_ = auVar28._0_4_;
          auVar86._4_4_ = auVar86._0_4_;
          auVar86._8_4_ = auVar86._0_4_;
          auVar86._12_4_ = auVar86._0_4_;
          auVar47 = ZEXT416(uVar9) & _DAT_017e9c50 | auVar86 & _DAT_017e9c40 |
                    auVar28 & _DAT_017e9c30;
          *pfVar10 = (float)auVar47._0_4_ * local_280 + local_90;
          pfVar10[1] = (float)auVar47._4_4_ * fStack_27c + fStack_8c;
          pfVar10[2] = (float)auVar47._8_4_ * fStack_278 + fStack_88;
          pfVar10[3] = (float)auVar47._12_4_ * fStack_274 + fStack_84;
          iVar13 = iVar13 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar13 < (int)local_1c);
      }
    }
    else if (uVar7 == 2) {
      local_2c0 = (local_80 - local_90) * _DAT_01b24c30;
      fStack_2bc = (fStack_7c - fStack_8c) * fRam01b24c34;
      fStack_2b8 = (fStack_78 - fStack_88) * fRam01b24c38;
      fStack_2b4 = (fStack_74 - fStack_84) * fRam01b24c3c;
      local_2d0 = local_90;
      fStack_2cc = fStack_8c;
      fStack_2c8 = fStack_88;
      fStack_2c4 = fStack_84;
      local_20 = (float *)((int)param_1[0x14] + uVar9 * 8);
      iVar13 = 0;
      if (local_1c != 1.4013e-45 && -1 < (int)((int)local_1c - 1U)) {
        local_14 = local_100;
        do {
          pfVar6 = local_14;
          pfVar10 = local_20;
          uVar1 = *(ushort *)((int)local_20 + iVar13 * 2);
          iVar13 = iVar13 + 2;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          local_14[-4] = (float)(int)uVar68 * local_2c0 + local_90;
          pfVar6[-3] = (float)(int)(uVar68 >> 0x20) * fStack_2bc + fStack_8c;
          pfVar6[-2] = (float)(int)(uVar67 >> 0x20) * fStack_2b8 + fStack_88;
          pfVar6[-1] = fStack_2b4 * 0.0 + fStack_84;
          pfVar6 = local_14;
          uVar1 = *(ushort *)((int)pfVar10 + iVar13 * 2 + -2);
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          in_XMM4 = ZEXT416(uVar1 >> 5 & 0x1f);
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar10 = local_14 + 8;
          *local_14 = (float)(int)uVar68 * local_2c0 + local_90;
          local_14 = pfVar10;
          pfVar6[1] = (float)(int)(uVar68 >> 0x20) * fStack_2bc + fStack_8c;
          pfVar6[2] = (float)(int)(uVar67 >> 0x20) * fStack_2b8 + fStack_88;
          pfVar6[3] = fStack_2b4 * 0.0 + fStack_84;
          iVar11 = local_24;
        } while (iVar13 < (int)((int)local_1c - 1U));
      }
      if (iVar13 < (int)local_1c) {
        local_14 = local_110 + iVar13 * 4;
        do {
          pfVar10 = local_14;
          uVar1 = *(ushort *)((int)local_20 + iVar13 * 2);
          iVar13 = iVar13 + 1;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          in_XMM4 = ZEXT416(uVar1 >> 5 & 0x1f);
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar6 = local_14 + 4;
          *local_14 = (float)(int)uVar68 * local_2c0 + local_90;
          local_14 = pfVar6;
          pfVar10[1] = (float)(int)(uVar68 >> 0x20) * fStack_2bc + fStack_8c;
          pfVar10[2] = (float)(int)(uVar67 >> 0x20) * fStack_2b8 + fStack_88;
          pfVar10[3] = fStack_2b4 * 0.0 + fStack_84;
          iVar11 = local_24;
        } while (iVar13 < (int)local_1c);
      }
    }
    else {
      hkErrStream::hkErrStream(local_b10,0x200);
      pcVar91 = " not implemented";
      uVar9 = *(ushort *)((int)param_1[0x15] + (uint)*(byte *)(iVar11 + (int)param_1[0x12]) * 2) >>
              4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar9);
      FUN_01018d00(pcVar91);
      iVar13 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_b10,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar13 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
    }
    local_120 = local_100[0] - local_110[0];
    fStack_11c = local_100[1] - local_110[1];
    fStack_118 = local_100[2] - local_110[2];
    local_70[0] = (float)((int)*(short *)((int)param_1[0x15] + 4 +
                                         (uint)*(byte *)(iVar11 + (int)param_1[0x12]) * 2) << 0x10);
    fVar16 = local_120 * local_120;
    fVar48 = fStack_11c * fStack_11c;
    fVar15 = fStack_118 * fStack_118;
    auVar51._0_4_ = fVar48 + fVar16 + fVar15;
    auVar51._4_4_ = fVar48 + fVar16 + fVar15;
    auVar51._8_4_ = fVar48 + fVar16 + fVar15;
    auVar51._12_4_ = fVar48 + fVar16 + fVar15;
    auVar47 = rsqrtps(in_XMM4,auVar51);
    fVar16 = auVar47._0_4_;
    fVar48 = auVar47._4_4_;
    fVar15 = auVar47._8_4_;
    fVar50 = auVar47._12_4_;
    local_c0._0_12_ = ZEXT812(0);
    local_c0._12_4_ = 0;
    local_120 = (float)(~-(uint)(auVar51._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar16 * auVar51._0_4_ * fVar16) * fVar16 * 0.5)) * local_120;
    fStack_11c = (float)(~-(uint)(auVar51._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar48 * auVar51._4_4_ * fVar48) * fVar48 * 0.5)) * fStack_11c
    ;
    fStack_118 = (float)(~-(uint)(auVar51._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar15 * auVar51._8_4_ * fVar15) * fVar15 * 0.5)) * fStack_118
    ;
    fStack_114 = (float)(~-(uint)(auVar51._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar50 * auVar51._12_4_ * fVar50) * fVar50 * 0.5)) *
                 (local_100[3] - local_110[3]);
    fVar16 = local_120 * 0.0;
    fVar48 = fStack_11c * 0.0;
    fVar15 = fStack_118 * 1.0;
    fVar50 = fVar48 + fVar16 + fVar15;
    fVar57 = fVar48 + fVar16 + fVar15;
    fVar58 = fVar48 + fVar16 + fVar15;
    fVar15 = fVar48 + fVar16 + fVar15;
    local_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0x3f800000;
    uStack_174 = 0;
    local_70[1] = local_70[0];
    local_70[2] = local_70[0];
    local_70[3] = local_70[0];
    local_18 = (float *)local_70[0];
    if (fVar50 <= 0.99999) {
      if (-0.99999 <= fVar50) {
        auVar61._0_4_ = fVar50 * 0.5 + 0.5;
        auVar61._4_4_ = fVar57 * 0.5 + 0.5;
        auVar61._8_4_ = fVar58 * 0.5 + 0.5;
        auVar61._12_4_ = fVar15 * 0.5 + 0.5;
        _local_a0 = rsqrtps(local_c0,auVar61);
        fVar16 = local_a0._0_4_;
        fVar48 = local_a0._4_4_;
        fVar60 = local_a0._8_4_;
        fVar63 = local_a0._12_4_;
        fVar16 = (float)(~-(uint)(auVar61._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar16 * auVar61._0_4_ * fVar16) * fVar16 * 0.5));
        fVar48 = (float)(~-(uint)(auVar61._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar48 * auVar61._4_4_ * fVar48) * fVar48 * 0.5));
        afStack_5c[0] = fVar48;
        local_60 = (undefined1  [4])fVar16;
        fVar60 = (float)(~-(uint)(auVar61._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar60 * auVar61._8_4_ * fVar60) * fVar60 * 0.5));
        uVar9 = ~-(uint)(auVar61._12_4_ <= 0.0) &
                (uint)((3.0 - fVar63 * auVar61._12_4_ * fVar63) * fVar63 * 0.5);
        afStack_5c[1] = fVar60;
        afStack_5c[2] = (float)uVar9;
        auVar18._0_4_ = fVar16 * 0.5;
        auVar18._4_4_ = fVar48 * 0.5;
        auVar18._8_4_ = fVar60 * 0.5;
        local_140 = fStack_118 * 0.0 - fStack_11c * 1.0;
        fStack_13c = local_120 * 1.0 - fStack_118 * 0.0;
        fStack_138 = fStack_11c * 0.0 - local_120 * 0.0;
        auVar88 = _local_60;
        if (fVar50 < -0.999) {
          auVar65._0_4_ = auVar61._0_4_ - fVar50;
          auVar65._4_4_ = auVar61._4_4_ - fVar57;
          auVar65._8_4_ = auVar61._8_4_ - fVar58;
          auVar65._12_4_ = auVar61._12_4_ - fVar15;
          fVar16 = local_140 * local_140;
          fVar15 = fStack_13c * fStack_13c;
          fVar50 = fStack_138 * fStack_138;
          auVar82._4_4_ = fVar16;
          auVar82._0_4_ = fVar16;
          auVar82._8_4_ = fVar16;
          auVar82._12_4_ = fVar16;
          auVar52._0_4_ = fVar15 + fVar16 + fVar50;
          auVar52._4_4_ = fVar15 + fVar16 + fVar50;
          auVar52._8_4_ = fVar15 + fVar16 + fVar50;
          auVar52._12_4_ = fVar15 + fVar16 + fVar50;
          auVar47 = rsqrtps(auVar82,auVar52);
          fVar16 = auVar47._0_4_;
          fVar15 = auVar47._4_4_;
          fVar50 = auVar47._8_4_;
          fVar57 = auVar47._12_4_;
          auVar87._0_4_ = fVar16 * auVar52._0_4_ * fVar16;
          auVar87._4_4_ = fVar15 * auVar52._4_4_ * fVar15;
          auVar87._8_4_ = fVar50 * auVar52._8_4_ * fVar50;
          auVar87._12_4_ = fVar57 * auVar52._12_4_ * fVar57;
          auVar4._4_8_ = auVar87._8_8_;
          auVar4._0_4_ = fVar48;
          auVar88._0_8_ = auVar4._0_8_ << 0x20;
          auVar88._8_4_ = fVar60;
          auVar88._12_4_ = uVar9;
          auVar53._0_4_ = (3.0 - auVar87._0_4_) * fVar16 * 0.5;
          auVar53._4_4_ = (3.0 - auVar87._4_4_) * fVar15 * 0.5;
          auVar53._8_4_ = (3.0 - auVar87._8_4_) * fVar50 * 0.5;
          auVar53._12_4_ = (3.0 - auVar87._12_4_) * fVar57 * 0.5;
          local_a0._0_4_ = ~-(uint)(auVar52._0_4_ <= 0.0) & (uint)auVar53._0_4_;
          local_a0._4_4_ = ~-(uint)(auVar52._4_4_ <= 0.0) & (uint)auVar53._4_4_;
          fStack_98 = (float)(~-(uint)(auVar52._8_4_ <= 0.0) & (uint)auVar53._8_4_);
          auVar47 = rsqrtps(auVar53,auVar65);
          fStack_94 = (float)(~-(uint)(auVar52._12_4_ <= 0.0) & (uint)auVar53._12_4_);
          fVar16 = auVar47._0_4_;
          fVar48 = auVar47._4_4_;
          fVar15 = auVar47._8_4_;
          auVar18._0_4_ =
               (float)(~-(uint)(auVar65._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar16 * auVar65._0_4_ * fVar16) * fVar16 * 0.5)) *
               auVar65._0_4_ * (float)local_a0._0_4_;
          auVar18._4_4_ =
               (float)(~-(uint)(auVar65._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar48 * auVar65._4_4_ * fVar48) * fVar48 * 0.5)) *
               auVar65._4_4_ * (float)local_a0._4_4_;
          auVar18._8_4_ =
               (float)(~-(uint)(auVar65._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar15 * auVar65._8_4_ * fVar15) * fVar15 * 0.5)) *
               auVar65._8_4_ * fStack_98;
        }
        local_140 = auVar18._0_4_ * local_140;
        fStack_13c = auVar18._4_4_ * fStack_13c;
        fStack_138 = auVar18._8_4_ * fStack_138;
        fStack_134 = auVar88._12_4_ * auVar61._12_4_;
      }
      else {
        FUN_01008940(&local_180);
      }
    }
    else {
      local_140 = 0.0;
      fStack_13c = 0.0;
      fStack_138 = 0.0;
      fStack_134 = 1.0;
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b94,&local_3c,0x90,0x10);
    local_14 = (float *)0x0;
    do {
      local_18 = (float *)((float)(int)local_14 * 0.09090909);
      iVar11 = 0;
      do {
        local_b0._4_4_ = (float)iVar11 * 0.09090909;
        local_b0._0_4_ = local_18;
        _fStack_a8 = 0;
        if (local_38 == (local_34 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_3c,0x10);
        }
        pfVar10 = (float *)(local_38 * 0x10 + local_3c);
        local_38 = local_38 + 1;
        FUN_0108de10(local_b0,pfVar10);
        fVar16 = *pfVar10;
        fVar48 = pfVar10[1];
        fVar15 = pfVar10[2];
        fVar50 = pfVar10[3];
        fVar57 = local_140 * fVar16;
        fVar58 = fStack_13c * fVar48;
        fVar60 = fStack_138 * fVar15;
        fVar63 = (fVar58 + fVar57 + fVar60) * local_140 + (fStack_134 * fStack_134 + -0.5) * fVar16
                 + (fStack_13c * fVar15 - fStack_138 * fVar48) * fStack_134;
        fVar64 = (fVar58 + fVar57 + fVar60) * fStack_13c + (fStack_134 * fStack_134 + -0.5) * fVar48
                 + (fStack_138 * fVar16 - local_140 * fVar15) * fStack_134;
        fVar16 = (fVar58 + fVar57 + fVar60) * fStack_138 + (fStack_134 * fStack_134 + -0.5) * fVar15
                 + (local_140 * fVar48 - fStack_13c * fVar16) * fStack_134;
        fVar48 = (fVar58 + fVar57 + fVar60) * fStack_134 + (fStack_134 * fStack_134 + -0.5) * fVar50
                 + (fStack_134 * fVar50 - fStack_134 * fVar50) * fStack_134;
        fVar57 = (fVar63 + fVar63) * local_70[0];
        fVar58 = (fVar64 + fVar64) * local_70[1];
        fVar60 = (fVar16 + fVar16) * local_70[2];
        fVar63 = (fVar48 + fVar48) * local_70[3];
        fVar16 = fVar57 * local_120;
        fVar48 = fVar58 * fStack_11c;
        fVar15 = fVar60 * fStack_118;
        auVar59._0_4_ = fVar48 + fVar16 + fVar15;
        auVar59._4_4_ = fVar48 + fVar16 + fVar15;
        auVar59._8_4_ = fVar48 + fVar16 + fVar15;
        auVar59._12_4_ = fVar48 + fVar16 + fVar15;
        iVar13 = movmskps(extraout_EDX,auVar59);
        *pfVar10 = fVar57;
        pfVar10[1] = fVar58;
        pfVar10[2] = fVar60;
        pfVar10[3] = fVar63;
        fVar16 = local_110[2];
        fVar48 = local_110[3];
        fVar15 = local_110[0];
        fVar50 = local_110[1];
        if (iVar13 == 0) {
          fVar16 = local_100[2];
          fVar48 = local_100[3];
          fVar15 = local_100[0];
          fVar50 = local_100[1];
        }
        iVar11 = iVar11 + 1;
        *pfVar10 = fVar57 + fVar15;
        pfVar10[1] = fVar58 + fVar50;
        pfVar10[2] = fVar60 + fVar16;
        pfVar10[3] = fVar63 + fVar48;
      } while (iVar11 < 0xc);
      local_14 = (float *)((int)local_14 + 1);
    } while ((int)local_14 < 0xc);
    FUN_01255a70(local_3c,local_38,local_40,param_3);
    local_38 = 0;
    iVar11 = local_3c;
    uVar9 = local_34;
    break;
  case 4:
    fVar15 = (float)(uint)*(byte *)((int)fVar48 + 1 + (uint)*(byte *)((int)fVar16 + iVar11) * 2);
    if (1 < (uint)fVar15) {
      fVar15 = 2.8026e-45;
    }
    local_14 = (float *)(uint)*(ushort *)
                               ((int)fVar48 + 2 + (uint)*(byte *)(iVar11 + (int)fVar16) * 2);
    uVar1 = *(ushort *)((int)fVar48 + (uint)*(byte *)((int)fVar16 + local_24) * 2) >> 4;
    uVar7 = uVar1 & 3;
    local_1c = fVar15;
    if ((uVar1 & 3) == 0) {
      iVar13 = (int)param_1[0x14] + (int)local_14 * 8;
      iVar11 = 0;
      if (fVar15 != 1.4013e-45 && -1 < (int)((int)fVar15 - 1U)) {
        pfVar10 = local_100 + 8;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar47._8_8_ = 0;
          auVar47._0_8_ = uVar67;
          auVar41._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar41._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar41._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar41._10_6_ = 0;
          auVar78._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar78._0_4_ = auVar78._4_4_;
          auVar78._8_4_ = auVar78._4_4_;
          auVar78._12_4_ = auVar78._4_4_;
          auVar47 = auVar47 & _DAT_017e9c20 | auVar78 & _DAT_017e9c10 | auVar41 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          pfVar10[-4] = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[-3] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[-2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[-1] = fVar60 + (float)auVar47._12_4_ * fVar50;
          uVar67 = *(ulonglong *)(iVar13 + 8 + iVar11 * 8);
          auVar42._8_8_ = 0;
          auVar42._0_8_ = uVar67;
          auVar79._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar43._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar43._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar43._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar43._10_6_ = 0;
          auVar79._0_4_ = auVar79._4_4_;
          auVar79._8_4_ = auVar79._4_4_;
          auVar79._12_4_ = auVar79._4_4_;
          auVar47 = auVar42 & _DAT_017e9c20 | auVar79 & _DAT_017e9c10 | auVar43 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          *pfVar10 = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[1] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[3] = fVar60 + (float)auVar47._12_4_ * fVar50;
          pfVar10 = pfVar10 + 8;
          iVar11 = iVar11 + 2;
          local_18 = pfVar10;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        pfVar10 = local_100 + iVar11 * 4 + 4;
        do {
          uVar67 = *(ulonglong *)(iVar13 + iVar11 * 8);
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uVar67;
          auVar80._4_4_ = (uint)(uVar67 >> 0x2a);
          auVar45._0_4_ = (uint)(uVar67 << 0x10) >> 5;
          auVar45._4_4_ = (uint)(uVar67 >> 0x10) >> 5;
          auVar45._8_2_ = (ushort)(uVar67 >> 0x35);
          auVar45._10_6_ = 0;
          auVar80._0_4_ = auVar80._4_4_;
          auVar80._8_4_ = auVar80._4_4_;
          auVar80._12_4_ = auVar80._4_4_;
          auVar47 = auVar44 & _DAT_017e9c20 | auVar80 & _DAT_017e9c10 | auVar45 & _DAT_017e9c00;
          fVar16 = param_1[5];
          fVar48 = param_1[6];
          fVar50 = param_1[7];
          fVar57 = param_1[1];
          fVar58 = param_1[2];
          fVar60 = param_1[3];
          *pfVar10 = *param_1 + (float)auVar47._0_4_ * param_1[4];
          pfVar10[1] = fVar57 + (float)auVar47._4_4_ * fVar16;
          pfVar10[2] = fVar58 + (float)auVar47._8_4_ * fVar48;
          pfVar10[3] = fVar60 + (float)auVar47._12_4_ * fVar50;
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 < (int)fVar15);
      }
    }
    else if (uVar7 == 1) {
      local_240 = (local_80 - local_90) * _DAT_01b249c0;
      fStack_23c = (fStack_7c - fStack_8c) * fRam01b249c4;
      fStack_238 = (fStack_78 - fStack_88) * fRam01b249c8;
      fStack_234 = (fStack_74 - fStack_84) * fRam01b249cc;
      local_250 = local_90;
      fStack_24c = fStack_8c;
      fStack_248 = fStack_88;
      fStack_244 = fStack_84;
      iVar13 = (int)param_1[0x14] + (int)local_14 * 8;
      iVar11 = 0;
      if (fVar15 != 1.4013e-45 && -1 < (int)((int)fVar15 - 1U)) {
        pfVar10 = local_100 + 8;
        do {
          uVar9 = *(uint *)(iVar13 + iVar11 * 4);
          pfVar10[-4] = (float)(uVar9 & 0x7ff) * local_240 + local_90;
          pfVar10[-3] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_23c + fStack_8c;
          pfVar10[-2] = (float)(uVar9 >> 0x16) * fStack_238 + fStack_88;
          pfVar10[-1] = fStack_234 * 0.0 + fStack_84;
          uVar9 = *(uint *)(iVar13 + 4 + iVar11 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_240 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_23c + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_238 + fStack_88;
          pfVar10[3] = fStack_234 * 0.0 + fStack_84;
          pfVar10 = pfVar10 + 8;
          iVar11 = iVar11 + 2;
          local_18 = pfVar10;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        pfVar10 = local_100 + iVar11 * 4 + 4;
        do {
          uVar9 = *(uint *)(iVar13 + iVar11 * 4);
          *pfVar10 = (float)(uVar9 & 0x7ff) * local_240 + local_90;
          pfVar10[1] = (float)(uVar9 >> 0xb & 0x7ff) * fStack_23c + fStack_8c;
          pfVar10[2] = (float)(uVar9 >> 0x16) * fStack_238 + fStack_88;
          pfVar10[3] = fStack_234 * 0.0 + fStack_84;
          iVar11 = iVar11 + 1;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 < (int)fVar15);
      }
    }
    else if (uVar7 == 2) {
      local_220 = (local_80 - local_90) * _DAT_01b24c30;
      fStack_21c = (fStack_7c - fStack_8c) * fRam01b24c34;
      fStack_218 = (fStack_78 - fStack_88) * fRam01b24c38;
      fStack_214 = (fStack_74 - fStack_84) * fRam01b24c3c;
      local_230 = local_90;
      fStack_22c = fStack_8c;
      fStack_228 = fStack_88;
      fStack_224 = fStack_84;
      local_20 = (float *)((int)param_1[0x14] + (int)local_14 * 8);
      iVar11 = 0;
      if (0 < (int)((int)fVar15 - 1U)) {
        local_14 = local_100 + 8;
        do {
          pfVar6 = local_14;
          pfVar10 = local_20;
          uVar1 = *(ushort *)((int)local_20 + iVar11 * 2);
          iVar11 = iVar11 + 2;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          local_14[-4] = (float)(int)uVar68 * local_220 + local_90;
          pfVar6[-3] = (float)(int)(uVar68 >> 0x20) * fStack_21c + fStack_8c;
          pfVar6[-2] = (float)(int)(uVar67 >> 0x20) * fStack_218 + fStack_88;
          pfVar6[-1] = fStack_214 * 0.0 + fStack_84;
          pfVar6 = local_14;
          fVar15 = local_1c;
          uVar1 = *(ushort *)((int)pfVar10 + iVar11 * 2 + -2);
          local_18 = (float *)(uint)(uVar1 >> 10);
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar10 = local_14 + 8;
          *local_14 = (float)(int)uVar68 * local_220 + local_90;
          local_14 = pfVar10;
          pfVar6[1] = (float)(int)(uVar68 >> 0x20) * fStack_21c + fStack_8c;
          pfVar6[2] = (float)(int)(uVar67 >> 0x20) * fStack_218 + fStack_88;
          pfVar6[3] = fStack_214 * 0.0 + fStack_84;
        } while (iVar11 < (int)((int)fVar15 - 1U));
      }
      if (iVar11 < (int)fVar15) {
        local_14 = local_100 + iVar11 * 4 + 4;
        do {
          pfVar10 = local_14;
          uVar1 = *(ushort *)((int)local_20 + iVar11 * 2);
          local_18 = (float *)(uint)(uVar1 >> 10);
          iVar11 = iVar11 + 1;
          uVar67 = (ulonglong)CONCAT24(uVar1 >> 10,(uint)uVar1) & 0xffffffff0000001f;
          uVar68 = (ulonglong)CONCAT24(uVar1 >> 5,(int)uVar67) & 0x1fffffffff;
          pfVar6 = local_14 + 4;
          *local_14 = (float)(int)uVar68 * local_220 + local_90;
          local_14 = pfVar6;
          pfVar10[1] = (float)(int)(uVar68 >> 0x20) * fStack_21c + fStack_8c;
          pfVar10[2] = (float)(int)(uVar67 >> 0x20) * fStack_218 + fStack_88;
          pfVar10[3] = fStack_214 * 0.0 + fStack_84;
        } while (iVar11 < (int)local_1c);
      }
    }
    else {
      hkErrStream::hkErrStream(local_910,0x200);
      pcVar91 = " not implemented";
      uVar9 = *(ushort *)((int)param_1[0x15] + (uint)*(byte *)(iVar13 + (int)param_1[0x12]) * 2) >>
              4 & 3;
      FUN_01018d00("Compression method #");
      FUN_01018dc0(uVar9);
      FUN_01018d00(pcVar91);
      iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x902f09ed,local_910,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                          ,0x1b3);
      if (iVar11 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::hkBaseObject::hkBaseObject_38();
    }
    fVar60 = local_100[8] - local_100[4];
    fVar63 = local_100[9] - local_100[5];
    fVar64 = local_100[10] - local_100[6];
    fVar16 = fVar60 * fVar60;
    fVar48 = fVar63 * fVar63;
    auVar46._8_4_ = fVar64 * fVar64;
    auVar46._4_4_ = auVar46._8_4_;
    auVar46._0_4_ = auVar46._8_4_;
    auVar46._12_4_ = auVar46._8_4_;
    auVar54._0_4_ = fVar48 + fVar16 + auVar46._8_4_;
    auVar54._4_4_ = fVar48 + fVar16 + auVar46._8_4_;
    auVar54._8_4_ = fVar48 + fVar16 + auVar46._8_4_;
    auVar54._12_4_ = fVar48 + fVar16 + auVar46._8_4_;
    auVar47 = rsqrtps(auVar46,auVar54);
    fVar16 = auVar47._0_4_;
    fVar48 = auVar47._4_4_;
    fVar15 = auVar47._8_4_;
    local_c0._0_12_ = ZEXT812(0);
    local_c0._12_4_ = 0;
    fVar60 = (float)(~-(uint)(auVar54._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar16 * auVar54._0_4_ * fVar16) * fVar16 * 0.5)) * fVar60;
    fVar63 = (float)(~-(uint)(auVar54._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar48 * auVar54._4_4_ * fVar48) * fVar48 * 0.5)) * fVar63;
    fVar64 = (float)(~-(uint)(auVar54._8_4_ <= 0.0) &
                    (uint)((3.0 - fVar15 * auVar54._8_4_ * fVar15) * fVar15 * 0.5)) * fVar64;
    fVar16 = fVar60 * 0.0;
    fVar48 = fVar63 * 0.0;
    fVar15 = fVar64 * 1.0;
    fVar50 = fVar48 + fVar16 + fVar15;
    fVar57 = fVar48 + fVar16 + fVar15;
    fVar58 = fVar48 + fVar16 + fVar15;
    fVar15 = fVar48 + fVar16 + fVar15;
    local_14 = (float *)((int)*(short *)((int)param_1[0x15] + 6 +
                                        (uint)*(byte *)((int)param_1[0x12] + local_24) * 2) << 0x10)
    ;
    local_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0x3f800000;
    uStack_184 = 0;
    if (fVar50 <= 0.99999) {
      if (-0.99999 <= fVar50) {
        auVar62._0_4_ = fVar50 * 0.5 + 0.5;
        auVar62._4_4_ = fVar57 * 0.5 + 0.5;
        auVar62._8_4_ = fVar58 * 0.5 + 0.5;
        auVar62._12_4_ = fVar15 * 0.5 + 0.5;
        _local_d0 = rsqrtps(local_c0,auVar62);
        fVar16 = local_d0._0_4_;
        fVar48 = local_d0._4_4_;
        fVar49 = local_d0._8_4_;
        fVar81 = local_d0._12_4_;
        fVar16 = (float)(~-(uint)(auVar62._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar16 * auVar62._0_4_ * fVar16) * fVar16 * 0.5));
        fVar48 = (float)(~-(uint)(auVar62._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar48 * auVar62._4_4_ * fVar48) * fVar48 * 0.5));
        local_b0._4_4_ = fVar48;
        local_b0._0_4_ = fVar16;
        fVar49 = (float)(~-(uint)(auVar62._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar49 * auVar62._8_4_ * fVar49) * fVar49 * 0.5));
        uVar9 = ~-(uint)(auVar62._12_4_ <= 0.0) &
                (uint)((3.0 - fVar81 * auVar62._12_4_ * fVar81) * fVar81 * 0.5);
        fStack_a8 = fVar49;
        fStack_a4 = (float)uVar9;
        auVar19._0_4_ = fVar16 * 0.5;
        auVar19._4_4_ = fVar48 * 0.5;
        auVar19._8_4_ = fVar49 * 0.5;
        fVar16 = fVar64 * 0.0 - fVar63 * 1.0;
        fVar64 = fVar60 * 1.0 - fVar64 * 0.0;
        fVar60 = fVar63 * 0.0 - fVar60 * 0.0;
        auVar90 = _local_b0;
        if (fVar50 < -0.999) {
          auVar66._0_4_ = auVar62._0_4_ - fVar50;
          auVar66._4_4_ = auVar62._4_4_ - fVar57;
          auVar66._8_4_ = auVar62._8_4_ - fVar58;
          auVar66._12_4_ = auVar62._12_4_ - fVar15;
          fVar15 = fVar16 * fVar16;
          fVar50 = fVar64 * fVar64;
          fVar57 = fVar60 * fVar60;
          auVar83._4_4_ = fVar15;
          auVar83._0_4_ = fVar15;
          auVar83._8_4_ = fVar15;
          auVar83._12_4_ = fVar15;
          auVar55._0_4_ = fVar50 + fVar15 + fVar57;
          auVar55._4_4_ = fVar50 + fVar15 + fVar57;
          auVar55._8_4_ = fVar50 + fVar15 + fVar57;
          auVar55._12_4_ = fVar50 + fVar15 + fVar57;
          auVar47 = rsqrtps(auVar83,auVar55);
          fVar15 = auVar47._0_4_;
          fVar50 = auVar47._4_4_;
          fVar57 = auVar47._8_4_;
          fVar58 = auVar47._12_4_;
          auVar89._0_4_ = fVar15 * auVar55._0_4_ * fVar15;
          auVar89._4_4_ = fVar50 * auVar55._4_4_ * fVar50;
          auVar89._8_4_ = fVar57 * auVar55._8_4_ * fVar57;
          auVar89._12_4_ = fVar58 * auVar55._12_4_ * fVar58;
          auVar5._4_8_ = auVar89._8_8_;
          auVar5._0_4_ = fVar48;
          auVar90._0_8_ = auVar5._0_8_ << 0x20;
          auVar90._8_4_ = fVar49;
          auVar90._12_4_ = uVar9;
          auVar56._0_4_ = (3.0 - auVar89._0_4_) * fVar15 * 0.5;
          auVar56._4_4_ = (3.0 - auVar89._4_4_) * fVar50 * 0.5;
          auVar56._8_4_ = (3.0 - auVar89._8_4_) * fVar57 * 0.5;
          auVar56._12_4_ = (3.0 - auVar89._12_4_) * fVar58 * 0.5;
          local_d0._0_4_ = ~-(uint)(auVar55._0_4_ <= 0.0) & (uint)auVar56._0_4_;
          local_d0._4_4_ = ~-(uint)(auVar55._4_4_ <= 0.0) & (uint)auVar56._4_4_;
          fStack_c8 = (float)(~-(uint)(auVar55._8_4_ <= 0.0) & (uint)auVar56._8_4_);
          auVar47 = rsqrtps(auVar56,auVar66);
          uStack_c4 = ~-(uint)(auVar55._12_4_ <= 0.0) & (uint)auVar56._12_4_;
          fVar48 = auVar47._0_4_;
          fVar15 = auVar47._4_4_;
          fVar50 = auVar47._8_4_;
          auVar19._0_4_ =
               (float)(~-(uint)(auVar66._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar48 * auVar66._0_4_ * fVar48) * fVar48 * 0.5)) *
               auVar66._0_4_ * (float)local_d0._0_4_;
          auVar19._4_4_ =
               (float)(~-(uint)(auVar66._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar15 * auVar66._4_4_ * fVar15) * fVar15 * 0.5)) *
               auVar66._4_4_ * (float)local_d0._4_4_;
          auVar19._8_4_ =
               (float)(~-(uint)(auVar66._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar50 * auVar66._8_4_ * fVar50) * fVar50 * 0.5)) *
               auVar66._8_4_ * fStack_c8;
        }
        local_a0._4_4_ = auVar19._4_4_ * fVar64;
        local_a0._0_4_ = auVar19._0_4_ * fVar16;
        fStack_98 = auVar19._8_4_ * fVar60;
        fStack_94 = auVar90._12_4_ * auVar62._12_4_;
      }
      else {
        FUN_01008940(&local_190);
      }
    }
    else {
      _local_a0 = ZEXT812(0);
      fStack_94 = 1.0;
    }
    iVar11 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b94,&local_30,0x18,0x10);
    do {
      fVar16 = (float)iVar11 * 0.5235988;
      _local_60 = local_c0;
      local_18 = (float *)fVar16;
      FUN_01437589();
      local_60 = (undefined1  [4])(fVar16 * (float)local_14);
      pfVar10 = local_18;
      FUN_0143743a();
      fVar16 = (float)pfVar10 * (float)local_14;
      fVar15 = (float)local_60 * (float)local_a0._0_4_;
      fVar50 = fVar16 * (float)local_a0._4_4_;
      fVar57 = afStack_5c[1] * fStack_98;
      fVar48 = (fVar50 + fVar15 + fVar57) * (float)local_a0._0_4_ +
               (fStack_94 * fStack_94 + -0.5) * (float)local_60 +
               (afStack_5c[1] * (float)local_a0._4_4_ - fVar16 * fStack_98) * fStack_94;
      afStack_5c[0] =
           (fVar50 + fVar15 + fVar57) * (float)local_a0._4_4_ +
           (fStack_94 * fStack_94 + -0.5) * fVar16 +
           ((float)local_60 * fStack_98 - afStack_5c[1] * (float)local_a0._0_4_) * fStack_94;
      afStack_5c[1] =
           (fVar50 + fVar15 + fVar57) * fStack_98 + (fStack_94 * fStack_94 + -0.5) * afStack_5c[1] +
           (fVar16 * (float)local_a0._0_4_ - (float)local_60 * (float)local_a0._4_4_) * fStack_94;
      afStack_5c[2] =
           (fVar50 + fVar15 + fVar57) * fStack_94 + (fStack_94 * fStack_94 + -0.5) * afStack_5c[2] +
           (afStack_5c[2] * fStack_94 - afStack_5c[2] * fStack_94) * fStack_94;
      local_60 = (undefined1  [4])(fVar48 + fVar48);
      afStack_5c[0] = afStack_5c[0] + afStack_5c[0];
      afStack_5c[1] = afStack_5c[1] + afStack_5c[1];
      afStack_5c[2] = afStack_5c[2] + afStack_5c[2];
      auVar17 = local_60;
      fVar16 = afStack_5c[0];
      fVar48 = afStack_5c[1];
      fVar15 = afStack_5c[2];
      if (local_2c == (local_28 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_30,0x10);
        auVar17 = local_60;
        fVar16 = afStack_5c[0];
        fVar48 = afStack_5c[1];
        fVar15 = afStack_5c[2];
      }
      pfVar10 = (float *)(local_2c * 0x10 + local_30);
      local_2c = local_2c + 1;
      *pfVar10 = (float)auVar17 + local_100[4];
      pfVar10[1] = fVar16 + local_100[5];
      pfVar10[2] = fVar48 + local_100[6];
      pfVar10[3] = fVar15 + local_100[7];
      if (local_2c == (local_28 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_30,0x10);
      }
      pfVar10 = (float *)(local_2c * 0x10 + local_30);
      local_2c = local_2c + 1;
      iVar11 = iVar11 + 1;
      *pfVar10 = (float)local_60 + local_100[8];
      pfVar10[1] = afStack_5c[0] + local_100[9];
      pfVar10[2] = afStack_5c[1] + local_100[10];
      pfVar10[3] = afStack_5c[2] + local_100[0xb];
    } while (iVar11 < 0xc);
    FUN_01255a70(local_30,local_2c,local_40,param_3);
    local_2c = 0;
    if ((int)local_28 < 0) {
      return;
    }
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 << 4);
    return;
  default:
    hkErrStream::hkErrStream(local_d10,0x200);
    FUN_01018d00("Not implemented");
    iVar11 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x93d510b9,local_d10,
                        "Collide\\BvCompressedMesh\\hkpBvCompressedMeshShape.cpp",0xa1);
    if (iVar11 == 0) {
      ::hkBaseObject::hkBaseObject_38();
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Read-only address (ram,0x017e9c00) is written */
                    /* WARNING: Read-only address (ram,0x017e9c10) is written */
                    /* WARNING: Read-only address (ram,0x017e9c20) is written */
                    /* WARNING: Read-only address (ram,0x017e9c30) is written */
                    /* WARNING: Read-only address (ram,0x017e9c40) is written */
                    /* WARNING: Read-only address (ram,0x017e9c50) is written */
    return;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar11,uVar9 << 4);
  return;
}

// 0125F280  FUN_0125f280  size=236  [between]
void FUN_0125f280(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_4;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (param_2 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01255eb0(param_2,param_3,param_4);
  return;
}

// 0125F370  FUN_0125f370  size=236  [between]
void FUN_0125f370(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_4;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (param_2 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_012562b0(param_2,param_3,param_4);
  return;
}

// 0125F460  FUN_0125f460  size=25  [between]
void FUN_0125f460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01259f60(param_2,param_3,param_4);
  return;
}

// 01262570  FUN_01262570  size=268  [between]
void FUN_01262570(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar8 = (uint)CONCAT11(*(undefined1 *)(*(int *)(param_4 + 0x30) + 3),
                         *(undefined1 *)(*(int *)(param_4 + 0x30) + 4)) * 0x60 +
          *(int *)(param_1 + 0x3c);
  iVar3 = (iVar8 - *(int *)(iVar2 + 0x3c)) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    iVar7 = iVar3 * 0x60 + *(int *)(iVar2 + 0x3c);
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01255eb0(iVar8,param_2,param_3);
  return;
}

// 01262680  FUN_01262680  size=268  [between]
void FUN_01262680(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar8 = (uint)CONCAT11(*(undefined1 *)(*(int *)(param_4 + 0x30) + 3),
                         *(undefined1 *)(*(int *)(param_4 + 0x30) + 4)) * 0x60 +
          *(int *)(param_1 + 0x3c);
  iVar3 = (iVar8 - *(int *)(iVar2 + 0x3c)) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    iVar7 = iVar3 * 0x60 + *(int *)(iVar2 + 0x3c);
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_012562b0(iVar8,param_2,param_3);
  return;
}

// 01262790  FUN_01262790  size=236  [between]
void FUN_01262790(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_4;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (param_2 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01259f60(param_2,param_3,param_4);
  return;
}

// 01262880  FUN_01262880  size=13040  [__FILE__]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x012650f3) */
/* WARNING: Removing unreachable block (ram,0x01263830) */
/* WARNING: Removing unreachable block (ram,0x0126545a) */
/* WARNING: Removing unreachable block (ram,0x01265679) */
/* WARNING: Removing unreachable block (ram,0x012645b0) */
/* WARNING: Removing unreachable block (ram,0x0126312a) */
/* WARNING: Removing unreachable block (ram,0x0126514e) */
/* WARNING: Removing unreachable block (ram,0x01265522) */
/* WARNING: Removing unreachable block (ram,0x012651d6) */
/* WARNING: Removing unreachable block (ram,0x01263874) */
/* WARNING: Removing unreachable block (ram,0x012655cc) */
/* WARNING: Removing unreachable block (ram,0x012645f4) */
/* WARNING: Removing unreachable block (ram,0x01263175) */
/* WARNING: Removing unreachable block (ram,0x012631e8) */
/* WARNING: Removing unreachable block (ram,0x012638dd) */
/* WARNING: Removing unreachable block (ram,0x0126465d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01262880(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 (*pauVar1) [16];
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined1 (*pauVar6) [16];
  code *pcVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint5 uVar17;
  unkbyte9 Var18;
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [12];
  undefined8 uVar22;
  undefined8 uVar23;
  ushort uVar24;
  int iVar25;
  byte *pbVar26;
  char *pcVar27;
  LPVOID pvVar28;
  float *pfVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  float *pfVar33;
  int *piVar34;
  uint uVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar52;
  undefined4 uVar53;
  undefined1 auVar41 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 uVar95;
  byte bVar96;
  undefined4 uVar97;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  float fVar122;
  float fVar124;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar123;
  float fVar125;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar126;
  float fVar127;
  ulonglong uVar128;
  float fVar153;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar151;
  undefined1 auVar140 [16];
  float fVar152;
  float fVar154;
  float fVar155;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  ulonglong uVar129;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar156;
  float fVar169;
  float fVar170;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  float fVar171;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float fVar191;
  float fVar193;
  float fVar195;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float fVar192;
  float fVar194;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined8 uVar221;
  undefined1 local_1520 [512];
  undefined1 local_1320 [512];
  undefined1 local_1120 [512];
  undefined1 local_f20 [512];
  undefined1 local_d20 [512];
  undefined1 local_b20 [512];
  undefined1 local_920 [512];
  float local_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  float local_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  float local_700;
  float fStack_6fc;
  float fStack_6f8;
  float fStack_6f4;
  float local_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float local_6e0;
  float fStack_6dc;
  float fStack_6d8;
  float fStack_6d4;
  float local_6d0;
  float fStack_6cc;
  float fStack_6c8;
  float fStack_6c4;
  float local_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float local_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float local_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float local_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  float local_680;
  float fStack_67c;
  float fStack_678;
  float fStack_674;
  float local_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
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
  undefined1 local_5b0 [16];
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
  undefined1 local_560 [16];
  float local_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float local_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  undefined1 local_510 [16];
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  uint local_4f0;
  uint uStack_4ec;
  uint uStack_4e8;
  uint uStack_4e4;
  float local_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  undefined1 local_4d0 [16];
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  int local_430;
  undefined4 *local_420;
  undefined1 local_410 [16];
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  int local_3f0;
  uint *local_3e0;
  uint local_3d0;
  uint uStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  undefined1 local_370 [16];
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  uint local_340;
  uint uStack_33c;
  uint uStack_338;
  uint uStack_334;
  uint local_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined1 local_2d0 [8];
  float fStack_2c8;
  float fStack_2c4;
  undefined1 local_2c0 [4];
  float afStack_2bc [3];
  undefined1 local_2b0 [4];
  float afStack_2ac [3];
  undefined1 local_2a0 [16];
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float local_1c0 [19];
  int iStack_174;
  float local_170;
  float local_16c;
  float local_168;
  int local_164;
  float local_160 [4];
  undefined1 local_150 [4];
  float afStack_14c [3];
  undefined1 local_140 [8];
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
  int local_110;
  int local_100;
  undefined1 local_f0 [8];
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int *local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  uint local_44;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  float *local_24;
  float *local_20;
  float *local_1c;
  bool local_15;
  float *local_14;
  
  local_14 = (float *)0x12628a0;
  if (param_1[1] != 0) {
    local_164 = param_2[1];
    local_c4 = (int *)0x0;
    piVar34 = param_2;
    do {
      local_120 = (float)param_1[8];
      fStack_11c = (float)param_1[9];
      fStack_118 = (float)param_1[10];
      fStack_114 = (float)param_1[0xb];
      auVar132._4_4_ = (float)param_3[0xd] * ((float)param_1[9] - (float)param_3[5]);
      auVar132._0_4_ = (float)param_3[0xc] * ((float)param_1[8] - (float)param_3[4]);
      auVar158._0_8_ =
           CONCAT44((float)param_3[0xd] * ((float)param_1[5] - (float)param_3[5]),
                    (float)param_3[0xc] * ((float)param_1[4] - (float)param_3[4]));
      auVar158._8_4_ = (float)param_3[0xe] * ((float)param_1[6] - (float)param_3[6]);
      auVar158._12_4_ = (float)param_3[0xf] * ((float)param_1[7] - (float)param_3[7]);
      auVar132._8_4_ = (float)param_3[0xe] * ((float)param_1[10] - (float)param_3[6]);
      auVar132._12_4_ = (float)param_3[0xf] * ((float)param_1[0xb] - (float)param_3[7]);
      auVar41._8_4_ = auVar158._8_4_;
      auVar41._0_8_ = auVar158._0_8_;
      auVar41._12_4_ = auVar158._12_4_;
      auVar56 = maxps(auVar158,auVar132);
      auVar41 = minps(auVar41,auVar132);
      uVar31 = param_3[0xb];
      uVar53 = auVar56._4_4_;
      uVar97 = auVar56._8_4_;
      auVar130._4_4_ = uVar97;
      auVar130._0_4_ = uVar97;
      auVar130._8_4_ = uVar97;
      auVar130._12_4_ = uVar97;
      auVar157._4_4_ = uVar53;
      auVar157._0_4_ = uVar53;
      auVar157._8_4_ = uVar53;
      auVar157._12_4_ = uVar53;
      auVar158 = minps(auVar157,auVar130);
      auVar198._4_4_ = uVar31;
      auVar198._0_4_ = uVar31;
      auVar198._8_4_ = uVar31;
      auVar198._12_4_ = uVar31;
      auVar56 = minps(auVar56,auVar198);
      uVar31 = auVar41._4_4_;
      uVar53 = auVar41._8_4_;
      auVar99._4_4_ = uVar53;
      auVar99._0_4_ = uVar53;
      auVar99._8_4_ = uVar53;
      auVar99._12_4_ = uVar53;
      auVar131._4_4_ = uVar31;
      auVar131._0_4_ = uVar31;
      auVar131._8_4_ = uVar31;
      auVar131._12_4_ = uVar31;
      auVar41 = maxps(auVar41,_DAT_01701b10);
      auVar132 = maxps(auVar131,auVar99);
      auVar158 = minps(auVar56,auVar158);
      auVar41 = maxps(auVar41,auVar132);
      auVar56._4_4_ = -(uint)(auVar41._4_4_ <= auVar158._4_4_);
      auVar56._0_4_ = -(uint)(auVar41._0_4_ <= auVar158._0_4_);
      auVar56._8_4_ = -(uint)(auVar41._8_4_ <= auVar158._8_4_);
      auVar56._12_4_ = -(uint)(auVar41._12_4_ <= auVar158._12_4_);
      uVar32 = movmskps(piVar34,auVar56);
      local_130 = (float)param_1[4];
      fStack_12c = (float)param_1[5];
      fStack_128 = (float)param_1[6];
      fStack_124 = (float)param_1[7];
      iVar30 = 0;
      iVar25 = *param_1;
      if ((uVar32 & 1) != 0) {
        do {
          if ((*(byte *)(iVar25 + 3) & 1) == 0) {
            pauVar6 = (undefined1 (*) [16])*param_3;
            local_a0._4_4_ = param_3[0xb];
            local_44 = (uint)(*(byte *)(iVar25 + 3) >> 1);
            iVar30 = local_44 * 4;
            iVar25 = *(int *)(pauVar6[4] + 8) + iVar30;
            local_14 = (float *)(uint)*(byte *)(iVar25 + 2);
            local_a0._0_4_ = local_a0._4_4_;
            fStack_98 = (float)local_a0._4_4_;
            fStack_94 = (float)local_a0._4_4_;
            auVar41 = ZEXT816(0);
            local_15 = false;
            local_c0 = auVar41;
            _local_150 = auVar41;
            if ((float *)(uint)*(byte *)(iVar25 + 3) == local_14) {
              iVar30 = (uint)(local_14 ==
                             (float *)(uint)*(byte *)(*(int *)(pauVar6[4] + 8) + 1 + iVar30)) * 2 +
                       1;
            }
            else {
              iVar30 = 2;
            }
            local_4c = 0;
            iStack_174 = (*(int *)(&DAT_017dc4c8 + iVar30 * 4) == 2) + 1;
            fVar40 = local_130;
            fVar52 = fStack_12c;
            fVar54 = fStack_128;
            fVar55 = fStack_124;
            if (iStack_174 != 0) {
              do {
                local_1c = (float *)(local_44 * 4);
                pbVar26 = (byte *)((int)(local_44 * 4) + *(int *)(pauVar6[4] + 8));
                if ((pbVar26[3] != pbVar26[2]) || (pbVar26[2] != pbVar26[1])) {
                  if (local_4c == 0) {
                    if ((pbVar26[3] == pbVar26[2]) && (pbVar26[2] == pbVar26[1])) {
                      _local_2d0 = auVar41;
                      _local_2c0 = auVar41;
                      _local_2b0 = auVar41;
                      local_2a0 = auVar41;
                      hkErrStream::hkErrStream(local_1120,0x200);
                      FUN_01018d00("Primitve type not implemented");
                      (**(code **)(*DAT_01f8fc58 + 0xc))(0,0,local_1120,0,0);
                      hkBaseObject::hkBaseObject_38();
                      auVar41 = local_c0;
                      fVar40 = local_130;
                      fVar52 = fStack_12c;
                      fVar54 = fStack_128;
                      fVar55 = fStack_124;
                    }
                    else {
                      uVar32 = (uint)*pbVar26;
                      if ((int)uVar32 < *(int *)(pauVar6[5] + 0xc)) {
                        uVar32 = *(uint *)(*(int *)(pauVar6[4] + 0xc) + uVar32 * 4);
                        auVar85._0_4_ = uVar32 >> 0xb;
                        auVar147._0_4_ = uVar32 >> 0x16;
                        auVar85._4_4_ = auVar85._0_4_;
                        auVar85._8_4_ = auVar85._0_4_;
                        auVar85._12_4_ = auVar85._0_4_;
                        auVar147._4_4_ = auVar147._0_4_;
                        auVar147._8_4_ = auVar147._0_4_;
                        auVar147._12_4_ = auVar147._0_4_;
                        auVar56 = ZEXT416(uVar32) & _DAT_017e9c50 | auVar147 & _DAT_017e9c40 |
                                  auVar85 & _DAT_017e9c30;
                        local_2d0._0_4_ =
                             (float)auVar56._0_4_ * *(float *)pauVar6[3] + *(float *)pauVar6[2];
                        local_2d0._4_4_ =
                             (float)auVar56._4_4_ * *(float *)(pauVar6[3] + 4) +
                             *(float *)(pauVar6[2] + 4);
                        fStack_2c8 = (float)auVar56._8_4_ * *(float *)(pauVar6[3] + 8) +
                                     *(float *)(pauVar6[2] + 8);
                        fStack_2c4 = (float)auVar56._12_4_ * *(float *)(pauVar6[3] + 0xc) +
                                     *(float *)(pauVar6[2] + 0xc);
                      }
                      else {
                        uVar128 = *(ulonglong *)
                                   (*(int *)pauVar6[5] +
                                   (uint)*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2) * 8);
                        auVar83._8_8_ = 0;
                        auVar83._0_8_ = uVar128;
                        uVar32 = (uint)(uVar128 >> 0x2a);
                        auVar146._4_4_ = uVar32;
                        auVar146._0_4_ = uVar32;
                        auVar146._8_4_ = uVar32;
                        auVar146._12_4_ = uVar32;
                        auVar84._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar84._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar84._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar84._10_6_ = 0;
                        auVar56 = auVar83 & _DAT_017e9c20 | auVar146 & _DAT_017e9c10 |
                                  auVar84 & _DAT_017e9c00;
                        local_2d0._0_4_ =
                             (float)auVar56._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        local_2d0._4_4_ =
                             (float)auVar56._4_4_ * *(float *)(pauVar6[1] + 4) +
                             *(float *)(*pauVar6 + 4);
                        fStack_2c8 = (float)auVar56._8_4_ * *(float *)(pauVar6[1] + 8) +
                                     *(float *)(*pauVar6 + 8);
                        fStack_2c4 = (float)auVar56._12_4_ * *(float *)(pauVar6[1] + 0xc) +
                                     *(float *)(*pauVar6 + 0xc);
                      }
                      uVar32 = (uint)pbVar26[1];
                      if ((int)uVar32 < *(int *)(pauVar6[5] + 0xc)) {
                        uVar32 = *(uint *)(*(int *)(pauVar6[4] + 0xc) + uVar32 * 4);
                        auVar88._0_4_ = uVar32 >> 0xb;
                        auVar216._0_4_ = uVar32 >> 0x16;
                        auVar88._4_4_ = auVar88._0_4_;
                        auVar88._8_4_ = auVar88._0_4_;
                        auVar88._12_4_ = auVar88._0_4_;
                        auVar216._4_4_ = auVar216._0_4_;
                        auVar216._8_4_ = auVar216._0_4_;
                        auVar216._12_4_ = auVar216._0_4_;
                        auVar56 = ZEXT416(uVar32) & _DAT_017e9c50 | auVar216 & _DAT_017e9c40 |
                                  auVar88 & _DAT_017e9c30;
                        local_2c0 = (undefined1  [4])
                                    ((float)auVar56._0_4_ * *(float *)pauVar6[3] +
                                    *(float *)pauVar6[2]);
                        afStack_2bc[0] =
                             (float)auVar56._4_4_ * *(float *)(pauVar6[3] + 4) +
                             *(float *)(pauVar6[2] + 4);
                        afStack_2bc[1] =
                             (float)auVar56._8_4_ * *(float *)(pauVar6[3] + 8) +
                             *(float *)(pauVar6[2] + 8);
                        afStack_2bc[2] =
                             (float)auVar56._12_4_ * *(float *)(pauVar6[3] + 0xc) +
                             *(float *)(pauVar6[2] + 0xc);
                      }
                      else {
                        uVar128 = *(ulonglong *)
                                   (*(int *)pauVar6[5] +
                                   (uint)*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2) * 8);
                        auVar86._8_8_ = 0;
                        auVar86._0_8_ = uVar128;
                        auVar215._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar87._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar87._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar87._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar87._10_6_ = 0;
                        auVar215._0_4_ = auVar215._4_4_;
                        auVar215._8_4_ = auVar215._4_4_;
                        auVar215._12_4_ = auVar215._4_4_;
                        auVar56 = auVar86 & _DAT_017e9c20 | auVar215 & _DAT_017e9c10 |
                                  auVar87 & _DAT_017e9c00;
                        local_2c0 = (undefined1  [4])
                                    ((float)auVar56._0_4_ * *(float *)pauVar6[1] +
                                    *(float *)*pauVar6);
                        afStack_2bc[0] =
                             (float)auVar56._4_4_ * *(float *)(pauVar6[1] + 4) +
                             *(float *)(*pauVar6 + 4);
                        afStack_2bc[1] =
                             (float)auVar56._8_4_ * *(float *)(pauVar6[1] + 8) +
                             *(float *)(*pauVar6 + 8);
                        afStack_2bc[2] =
                             (float)auVar56._12_4_ * *(float *)(pauVar6[1] + 0xc) +
                             *(float *)(*pauVar6 + 0xc);
                      }
                      uVar32 = (uint)pbVar26[2];
                      if ((int)uVar32 < *(int *)(pauVar6[5] + 0xc)) {
                        uVar32 = *(uint *)(*(int *)(pauVar6[4] + 0xc) + uVar32 * 4);
                        auVar91._0_4_ = uVar32 >> 0xb;
                        auVar218._0_4_ = uVar32 >> 0x16;
                        auVar91._4_4_ = auVar91._0_4_;
                        auVar91._8_4_ = auVar91._0_4_;
                        auVar91._12_4_ = auVar91._0_4_;
                        auVar218._4_4_ = auVar218._0_4_;
                        auVar218._8_4_ = auVar218._0_4_;
                        auVar218._12_4_ = auVar218._0_4_;
                        auVar56 = ZEXT416(uVar32) & _DAT_017e9c50 | auVar218 & _DAT_017e9c40 |
                                  auVar91 & _DAT_017e9c30;
                        fVar156 = (float)auVar56._0_4_ * *(float *)pauVar6[3];
                        fVar169 = (float)auVar56._4_4_ * *(float *)(pauVar6[3] + 4);
                        fVar170 = (float)auVar56._8_4_ * *(float *)(pauVar6[3] + 8);
                        fVar171 = (float)auVar56._12_4_ * *(float *)(pauVar6[3] + 0xc);
                        auVar56 = pauVar6[2];
                      }
                      else {
                        uVar128 = *(ulonglong *)
                                   (*(int *)pauVar6[5] +
                                   (uint)*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2) * 8);
                        auVar89._8_8_ = 0;
                        auVar89._0_8_ = uVar128;
                        auVar217._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar90._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar90._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar90._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar90._10_6_ = 0;
                        auVar217._0_4_ = auVar217._4_4_;
                        auVar217._8_4_ = auVar217._4_4_;
                        auVar217._12_4_ = auVar217._4_4_;
                        auVar56 = auVar89 & _DAT_017e9c20 | auVar217 & _DAT_017e9c10 |
                                  auVar90 & _DAT_017e9c00;
                        fVar156 = (float)auVar56._0_4_ * *(float *)pauVar6[1];
                        fVar169 = (float)auVar56._4_4_ * *(float *)(pauVar6[1] + 4);
                        fVar170 = (float)auVar56._8_4_ * *(float *)(pauVar6[1] + 8);
                        fVar171 = (float)auVar56._12_4_ * *(float *)(pauVar6[1] + 0xc);
                        auVar56 = *pauVar6;
                      }
                      afStack_2ac[0] = fVar169 + auVar56._4_4_;
                      local_2b0 = (undefined1  [4])(fVar156 + auVar56._0_4_);
                      afStack_2ac[1] = fVar170 + auVar56._8_4_;
                      afStack_2ac[2] = fVar171 + auVar56._12_4_;
                      uVar32 = (uint)pbVar26[3];
                      if ((int)uVar32 < *(int *)(pauVar6[5] + 0xc)) {
                        uVar32 = *(uint *)(*(int *)(pauVar6[4] + 0xc) + uVar32 * 4);
                        auVar94._0_4_ = uVar32 >> 0xb;
                        auVar148._0_4_ = uVar32 >> 0x16;
                        auVar94._4_4_ = auVar94._0_4_;
                        auVar94._8_4_ = auVar94._0_4_;
                        auVar94._12_4_ = auVar94._0_4_;
                        auVar148._4_4_ = auVar148._0_4_;
                        auVar148._8_4_ = auVar148._0_4_;
                        auVar148._12_4_ = auVar148._0_4_;
                        auVar158 = ZEXT416(uVar32) & _DAT_017e9c50 | auVar148 & _DAT_017e9c40 |
                                   auVar94 & _DAT_017e9c30;
                        auVar56 = pauVar6[2];
                        local_2a0._0_4_ =
                             (float)auVar158._0_4_ * *(float *)pauVar6[3] + auVar56._0_4_;
                        local_2a0._4_4_ =
                             (float)auVar158._4_4_ * *(float *)(pauVar6[3] + 4) + auVar56._4_4_;
                        local_2a0._8_4_ =
                             (float)auVar158._8_4_ * *(float *)(pauVar6[3] + 8) + auVar56._8_4_;
                        local_2a0._12_4_ =
                             (float)auVar158._12_4_ * *(float *)(pauVar6[3] + 0xc) + auVar56._12_4_;
                      }
                      else {
                        uVar128 = *(ulonglong *)
                                   (*(int *)pauVar6[5] +
                                   (uint)*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2) * 8);
                        auVar92._8_8_ = 0;
                        auVar92._0_8_ = uVar128;
                        auVar190._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar93._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar93._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar93._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar93._10_6_ = 0;
                        auVar190._0_4_ = auVar190._4_4_;
                        auVar190._8_4_ = auVar190._4_4_;
                        auVar190._12_4_ = auVar190._4_4_;
                        auVar56 = *pauVar6;
                        auVar158 = auVar92 & _DAT_017e9c20 | auVar190 & _DAT_017e9c10 |
                                   auVar93 & _DAT_017e9c00;
                        local_2a0._0_4_ =
                             (float)auVar158._0_4_ * *(float *)pauVar6[1] + auVar56._0_4_;
                        local_2a0._4_4_ =
                             (float)auVar158._4_4_ * *(float *)(pauVar6[1] + 4) + auVar56._4_4_;
                        local_2a0._8_4_ =
                             (float)auVar158._8_4_ * *(float *)(pauVar6[1] + 8) + auVar56._8_4_;
                        local_2a0._12_4_ =
                             (float)auVar158._12_4_ * *(float *)(pauVar6[1] + 0xc) + auVar56._12_4_;
                      }
                    }
                  }
                  uVar32 = (*(int *)pauVar6[6] << 7 | local_44) * 2 | local_4c;
                  if (*(int *)pauVar6[7] == 0) {
                    iVar30 = 0;
                  }
                  else {
                    iVar30 = *(int *)pauVar6[7] + 0x14;
                  }
                  if (*(int *)(*(int *)(pauVar6[7] + 4) + 0x28) != 0) {
                    uVar221 = (**(code **)**(undefined4 **)(*(int *)(pauVar6[7] + 4) + 0x28))
                                        (&local_74,*(undefined4 *)(pauVar6[7] + 4),
                                         *(undefined4 *)pauVar6[7],iVar30,uVar32);
                    iVar30 = (int)((ulonglong)uVar221 >> 0x20);
                    auVar41 = local_c0;
                    fVar40 = local_130;
                    fVar52 = fStack_12c;
                    fVar54 = fStack_128;
                    fVar55 = fStack_124;
                    if (*(char *)uVar221 == '\0') goto LAB_01265ba7;
                  }
                  iVar25 = local_4c * 0x10;
                  iVar3 = local_4c * 0x10;
                  fStack_a8 = *(float *)(local_2b0 + iVar3) - (float)local_2d0._0_4_;
                  local_b0._0_4_ = *(float *)(local_2b0 + iVar3 + 4) - (float)local_2d0._4_4_;
                  local_b0._4_4_ = *(float *)(local_2b0 + iVar3 + 8) - fStack_2c8;
                  fStack_a4 = *(float *)(local_2b0 + iVar3 + 0xc) - fStack_2c4;
                  local_140._4_4_ = *(float *)(local_2c0 + iVar25) - (float)local_2d0._0_4_;
                  fStack_138 = *(float *)(local_2c0 + iVar25 + 4) - (float)local_2d0._4_4_;
                  local_140._0_4_ = *(float *)(local_2c0 + iVar25 + 8) - fStack_2c8;
                  fStack_134 = *(float *)(local_2c0 + iVar25 + 0xc) - fStack_2c4;
                  local_73 = 1;
                  local_3b0 = (float)param_3[4] - (float)local_2d0._0_4_;
                  fStack_3ac = (float)param_3[5] - (float)local_2d0._4_4_;
                  fStack_3a8 = (float)param_3[6] - fStack_2c8;
                  fStack_3a4 = (float)param_3[7] - fStack_2c4;
                  local_f0._4_4_ = local_140._0_4_;
                  local_f0._0_4_ = fStack_138;
                  fStack_e8 = (float)local_140._4_4_;
                  fStack_e4 = fStack_134;
                  auVar168._0_4_ =
                       fStack_138 * (float)local_b0._4_4_ -
                       (float)local_140._0_4_ * (float)local_b0._0_4_;
                  auVar168._4_4_ =
                       (float)local_140._0_4_ * fStack_a8 -
                       (float)local_140._4_4_ * (float)local_b0._4_4_;
                  auVar168._8_4_ =
                       (float)local_140._4_4_ * (float)local_b0._0_4_ - fStack_138 * fStack_a8;
                  auVar168._12_4_ = fStack_134 * fStack_a4 - fStack_134 * fStack_a4;
                  local_90._4_4_ = fStack_a8;
                  local_90._0_4_ = local_b0._4_4_;
                  fStack_88 = (float)local_b0._0_4_;
                  fStack_84 = fStack_a4;
                  fVar156 = auVar168._0_4_ * (float)param_3[8];
                  fVar169 = auVar168._4_4_ * (float)param_3[9];
                  fVar170 = auVar168._8_4_ * (float)param_3[10];
                  auVar118._0_4_ = fVar169 + fVar156 + fVar170;
                  auVar118._4_4_ = fVar169 + fVar156 + fVar170;
                  auVar118._8_4_ = fVar169 + fVar156 + fVar170;
                  auVar118._12_4_ = fVar169 + fVar156 + fVar170;
                  if (1.1920929e-07 <= auVar118._0_4_ * auVar118._0_4_) {
                    local_70 = auVar168._0_4_ * local_3b0;
                    fStack_6c = auVar168._4_4_ * fStack_3ac;
                    fStack_68 = auVar168._8_4_ * fStack_3a8;
                    fStack_64 = auVar168._12_4_ * fStack_3a4;
                    local_40._4_4_ = fStack_6c;
                    local_40._0_4_ = fStack_6c;
                    fStack_38 = fStack_6c;
                    fStack_34 = fStack_6c;
                    local_460._0_4_ = fStack_6c + local_70 + fStack_68;
                    local_460._4_4_ = fStack_6c + local_70 + fStack_68;
                    local_460._8_4_ = fStack_6c + local_70 + fStack_68;
                    local_460._12_4_ = fStack_6c + local_70 + fStack_68;
                    local_590 = auVar41._0_4_ - local_460._0_4_;
                    fStack_58c = auVar41._4_4_ - local_460._4_4_;
                    fStack_588 = auVar41._8_4_ - local_460._8_4_;
                    fStack_584 = auVar41._12_4_ - local_460._12_4_;
                    auVar56 = rcpps(local_460,auVar118);
                    auVar219._0_4_ = auVar56._0_4_ * auVar118._0_4_;
                    auVar219._4_4_ = auVar56._4_4_ * auVar118._4_4_;
                    auVar219._8_4_ = auVar56._8_4_ * auVar118._8_4_;
                    auVar219._12_4_ = auVar56._12_4_ * auVar118._12_4_;
                    auVar56 = rcpps(auVar219,auVar118);
                    local_4d0._0_4_ = (2.0 - auVar219._0_4_) * auVar56._0_4_ * local_590;
                    local_4d0._4_4_ = (2.0 - auVar219._4_4_) * auVar56._4_4_ * fStack_58c;
                    local_4d0._8_4_ = (2.0 - auVar219._8_4_) * auVar56._8_4_ * fStack_588;
                    local_4d0._12_4_ = (2.0 - auVar219._12_4_) * auVar56._12_4_ * fStack_584;
                    auVar220._0_4_ = local_460._0_4_ * auVar118._0_4_;
                    auVar220._4_4_ = local_460._4_4_ * auVar118._4_4_;
                    auVar220._8_4_ = local_460._8_4_ * auVar118._8_4_;
                    auVar220._12_4_ = local_460._12_4_ * auVar118._12_4_;
                    iVar30 = movmskps(iVar30,auVar220);
                    if (iVar30 != 0) {
                      auVar56 = *(undefined1 (*) [16])(param_3 + 8);
                      if (local_4d0._0_4_ < auVar56._12_4_) {
                        fVar156 = local_4d0._0_4_ * auVar56._0_4_ + local_3b0;
                        fVar170 = local_4d0._4_4_ * auVar56._4_4_ + fStack_3ac;
                        fVar191 = local_4d0._8_4_ * auVar56._8_4_ + fStack_3a8;
                        fVar195 = local_4d0._12_4_ * auVar56._12_4_ + fStack_3a4;
                        local_5d0 = fStack_a8 - fVar156;
                        fStack_5cc = (float)local_b0._0_4_ - fVar170;
                        fStack_5c8 = (float)local_b0._4_4_ - fVar191;
                        fStack_5c4 = fStack_a4 - fVar195;
                        local_550 = (float)local_140._4_4_ - fVar156;
                        fStack_54c = fStack_138 - fVar170;
                        fStack_548 = (float)local_140._0_4_ - fVar191;
                        fStack_544 = fStack_134 - fVar195;
                        local_40._0_4_ =
                             (fStack_5cc * local_550 - local_5d0 * fStack_54c) * auVar168._8_4_;
                        fVar169 = (fVar170 * (float)local_b0._4_4_ - fVar191 * (float)local_b0._0_4_
                                  ) * auVar168._0_4_;
                        fVar171 = (fVar191 * fStack_a8 - fVar156 * (float)local_b0._4_4_) *
                                  auVar168._4_4_;
                        local_5b0._4_4_ = fVar171;
                        local_5b0._0_4_ = fVar169;
                        fVar193 = (fVar156 * (float)local_b0._0_4_ - fVar170 * fStack_a8) *
                                  auVar168._8_4_;
                        fVar98 = (fVar195 * fStack_a4 - fVar195 * fStack_a4) * auVar168._12_4_;
                        local_5b0._8_4_ = fVar193;
                        local_5b0._12_4_ = fVar98;
                        local_40._4_4_ =
                             (fVar170 * (float)local_140._4_4_ - fVar156 * fStack_138) *
                             auVar168._8_4_;
                        fStack_38 = (fStack_5c4 * fStack_544 - fStack_5c4 * fStack_544) *
                                    auVar168._12_4_;
                        fStack_34 = (fVar195 * fStack_134 - fVar195 * fStack_134) * auVar168._12_4_;
                        fVar195 = auVar168._0_4_ * auVar168._0_4_;
                        fVar123 = auVar168._4_4_ * auVar168._4_4_;
                        fVar125 = auVar168._8_4_ * auVar168._8_4_;
                        auVar149._4_4_ =
                             -(uint)((fVar123 + fVar195 + fVar125) * -1e-08 <=
                                    (fVar156 * (float)local_140._0_4_ -
                                    fVar191 * (float)local_140._4_4_) * auVar168._4_4_ +
                                    (fVar191 * fStack_138 - fVar170 * (float)local_140._0_4_) *
                                    auVar168._0_4_ + (float)local_40._4_4_);
                        auVar149._0_4_ =
                             -(uint)((fVar123 + fVar195 + fVar125) * -1e-08 <=
                                    (local_5d0 * fStack_548 - fStack_5c8 * local_550) *
                                    auVar168._4_4_ +
                                    (fStack_5c8 * fStack_54c - fStack_5cc * fStack_548) *
                                    auVar168._0_4_ + (float)local_40._0_4_);
                        auVar149._8_4_ =
                             -(uint)((fVar123 + fVar195 + fVar125) * -1e-08 <=
                                    fVar171 + fVar169 + fVar193);
                        auVar149._12_4_ =
                             -(uint)((fVar123 + fVar195 + fVar125) * -1e-08 <=
                                    fVar98 + fVar171 + fVar98);
                        uVar31 = movmskps(local_4c * 2,auVar149);
                        if (((byte)uVar31 & 7) == 7) {
                          _local_a0 = local_4d0;
                          _local_150 = auVar168;
                          iVar30 = 1;
                          goto LAB_01265a27;
                        }
                      }
                    }
                  }
                  iVar30 = 0;
                  goto LAB_01265a27;
                }
                uVar32 = (*(int *)pauVar6[6] << 7 | local_44) * 2;
                local_50 = uVar32;
                if (*(int *)pauVar6[7] == 0) {
                  iVar30 = 0;
                }
                else {
                  iVar30 = *(int *)pauVar6[7] + 0x14;
                }
                if ((*(int *)(*(int *)(pauVar6[7] + 4) + 0x28) != 0) &&
                   (pcVar27 = (char *)(**(code **)**(undefined4 **)(*(int *)(pauVar6[7] + 4) + 0x28)
                                      )(&local_71,*(undefined4 *)(pauVar6[7] + 4),
                                        *(undefined4 *)pauVar6[7],iVar30,uVar32), auVar41 = local_c0
                   , fVar40 = local_130, fVar52 = fStack_12c, fVar54 = fStack_128,
                   fVar55 = fStack_124, *pcVar27 == '\0')) goto LAB_01265ba7;
                puVar2 = (ushort *)
                         (*(int *)(pauVar6[5] + 4) +
                         (uint)*(byte *)((int)local_1c + *(int *)(pauVar6[4] + 8)) * 2);
                uVar5 = *puVar2;
                local_54 = uVar5 & 0xf;
                switch(uVar5 & 0xf) {
                case 0:
                case 1:
                  pvVar28 = TlsGetValue(DAT_01f8fc5c);
                  local_24 = (float *)(&DAT_020a0bf0 + (int)pvVar28 * 0xff0);
                  uVar32 = (uint)*(byte *)((int)local_1c + *(int *)(pauVar6[4] + 8));
                  uVar5 = *(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2);
                  uVar24 = uVar5 >> 8;
                  pfVar33 = (float *)(uint)uVar24;
                  if (0xfe < uVar24) {
                    pfVar33 = (float *)0xff;
                  }
                  uVar32 = (uint)*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2 + 2);
                  uVar5 = uVar5 >> 4;
                  uVar24 = uVar5 & 3;
                  local_1c = pfVar33;
                  if ((uVar5 & 3) == 0) {
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    local_48 = (undefined1 *)((int)pfVar33 + -1);
                    iVar25 = 0;
                    pfVar36 = local_24;
                    if (0 < (int)local_48) {
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar46._8_8_ = 0;
                        auVar46._0_8_ = uVar128;
                        auVar115._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar115._0_4_ = auVar115._4_4_;
                        auVar115._8_4_ = auVar115._4_4_;
                        auVar115._12_4_ = auVar115._4_4_;
                        auVar47._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar47._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar47._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar47._10_6_ = 0;
                        auVar41 = auVar46 & _DAT_017e9c20 | auVar115 & _DAT_017e9c10 |
                                  auVar47 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar41._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar41._4_4_ * fVar40 + fVar55;
                        pfVar36[2] = (float)auVar41._8_4_ * fVar52 + fVar156;
                        pfVar36[3] = (float)auVar41._12_4_ * fVar54 + fVar169;
                        uVar128 = *(ulonglong *)(iVar30 + 8 + iVar25 * 8);
                        auVar48._8_8_ = 0;
                        auVar48._0_8_ = uVar128;
                        auVar116._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar116._0_4_ = auVar116._4_4_;
                        auVar116._8_4_ = auVar116._4_4_;
                        auVar116._12_4_ = auVar116._4_4_;
                        auVar49._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar49._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar49._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar49._10_6_ = 0;
                        auVar41 = auVar48 & _DAT_017e9c20 | auVar116 & _DAT_017e9c10 |
                                  auVar49 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        pfVar36[4] = (float)auVar41._0_4_ * *(float *)pauVar6[1] +
                                     *(float *)*pauVar6;
                        pfVar36[5] = (float)auVar41._4_4_ * fVar40 + fVar55;
                        pfVar36[6] = (float)auVar41._8_4_ * fVar52 + fVar156;
                        pfVar36[7] = (float)auVar41._12_4_ * fVar54 + fVar169;
                        iVar25 = iVar25 + 2;
                        pfVar36 = pfVar36 + 8;
                      } while (iVar25 < (int)local_48);
                    }
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_24 + iVar25 * 4;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar50._8_8_ = 0;
                        auVar50._0_8_ = uVar128;
                        auVar117._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar117._0_4_ = auVar117._4_4_;
                        auVar117._8_4_ = auVar117._4_4_;
                        auVar117._12_4_ = auVar117._4_4_;
                        auVar51._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar51._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar51._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar51._10_6_ = 0;
                        auVar41 = auVar50 & _DAT_017e9c20 | auVar117 & _DAT_017e9c10 |
                                  auVar51 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar41._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar41._4_4_ * fVar40 + fVar55;
                        pfVar36[2] = (float)auVar41._8_4_ * fVar52 + fVar156;
                        pfVar36[3] = (float)auVar41._12_4_ * fVar54 + fVar169;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 1) {
                    local_240 = local_130;
                    fStack_23c = fStack_12c;
                    fStack_238 = fStack_128;
                    fStack_234 = fStack_124;
                    local_230 = _DAT_01b249c0 * (local_120 - local_130);
                    fStack_22c = fRam01b249c4 * (fStack_11c - fStack_12c);
                    fStack_228 = fRam01b249c8 * (fStack_118 - fStack_128);
                    fStack_224 = fRam01b249cc * (fStack_114 - fStack_124);
                    local_14 = (float *)(*(int *)pauVar6[5] + uVar32 * 8);
                    iVar30 = 0;
                    pfVar36 = local_24;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      do {
                        fVar40 = local_14[iVar30];
                        auVar43._0_4_ = (uint)fVar40 >> 0xb;
                        auVar43._4_4_ = auVar43._0_4_;
                        auVar43._8_4_ = auVar43._0_4_;
                        auVar43._12_4_ = auVar43._0_4_;
                        auVar144._0_4_ = (uint)fVar40 >> 0x16;
                        auVar144._4_4_ = auVar144._0_4_;
                        auVar144._8_4_ = auVar144._0_4_;
                        auVar144._12_4_ = auVar144._0_4_;
                        auVar41 = ZEXT416((uint)fVar40) & _DAT_017e9c50 | auVar144 & _DAT_017e9c40 |
                                  auVar43 & _DAT_017e9c30;
                        *pfVar36 = (float)auVar41._0_4_ * local_230 + local_130;
                        pfVar36[1] = (float)auVar41._4_4_ * fStack_22c + fStack_12c;
                        pfVar36[2] = (float)auVar41._8_4_ * fStack_228 + fStack_128;
                        pfVar36[3] = (float)auVar41._12_4_ * fStack_224 + fStack_124;
                        fVar40 = local_14[iVar30 + 1];
                        auVar114._0_4_ = (uint)fVar40 >> 0x16;
                        auVar44._0_4_ = (uint)fVar40 >> 0xb;
                        auVar114._4_4_ = auVar114._0_4_;
                        auVar114._8_4_ = auVar114._0_4_;
                        auVar114._12_4_ = auVar114._0_4_;
                        auVar44._4_4_ = auVar44._0_4_;
                        auVar44._8_4_ = auVar44._0_4_;
                        auVar44._12_4_ = auVar44._0_4_;
                        auVar41 = ZEXT416((uint)fVar40) & _DAT_017e9c50 | auVar114 & _DAT_017e9c40 |
                                  auVar44 & _DAT_017e9c30;
                        pfVar36[4] = (float)auVar41._0_4_ * local_230 + local_130;
                        pfVar36[5] = (float)auVar41._4_4_ * fStack_22c + fStack_12c;
                        pfVar36[6] = (float)auVar41._8_4_ * fStack_228 + fStack_128;
                        pfVar36[7] = (float)auVar41._12_4_ * fStack_224 + fStack_124;
                        iVar30 = iVar30 + 2;
                        pfVar36 = pfVar36 + 8;
                      } while (iVar30 < (int)((int)pfVar33 + -1));
                    }
                    if (iVar30 < (int)pfVar33) {
                      pfVar36 = local_24 + iVar30 * 4;
                      do {
                        fVar40 = local_14[iVar30];
                        auVar145._0_4_ = (uint)fVar40 >> 0x16;
                        auVar45._0_4_ = (uint)fVar40 >> 0xb;
                        auVar145._4_4_ = auVar145._0_4_;
                        auVar145._8_4_ = auVar145._0_4_;
                        auVar145._12_4_ = auVar145._0_4_;
                        auVar45._4_4_ = auVar45._0_4_;
                        auVar45._8_4_ = auVar45._0_4_;
                        auVar45._12_4_ = auVar45._0_4_;
                        auVar41 = ZEXT416((uint)fVar40) & _DAT_017e9c50 | auVar145 & _DAT_017e9c40 |
                                  auVar45 & _DAT_017e9c30;
                        *pfVar36 = (float)auVar41._0_4_ * local_230 + local_130;
                        pfVar36[1] = (float)auVar41._4_4_ * fStack_22c + fStack_12c;
                        pfVar36[2] = (float)auVar41._8_4_ * fStack_228 + fStack_128;
                        pfVar36[3] = (float)auVar41._12_4_ * fStack_224 + fStack_124;
                        iVar30 = iVar30 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar30 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 2) {
                    local_220 = local_130;
                    fStack_21c = fStack_12c;
                    fStack_218 = fStack_128;
                    fStack_214 = fStack_124;
                    local_210 = _DAT_01b24c30 * (local_120 - local_130);
                    fStack_20c = fRam01b24c34 * (fStack_11c - fStack_12c);
                    fStack_208 = fRam01b24c38 * (fStack_118 - fStack_128);
                    fStack_204 = fRam01b24c3c * (fStack_114 - fStack_124);
                    local_14 = (float *)(*(int *)pauVar6[5] + uVar32 * 8);
                    iVar30 = 0;
                    pfVar36 = local_24;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      do {
                        local_20 = pfVar36;
                        uVar5 = *(ushort *)((int)local_14 + iVar30 * 2);
                        iVar30 = iVar30 + 2;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *local_20 = (float)(int)uVar129 * local_210 + local_130;
                        local_20[1] = (float)(int)(uVar129 >> 0x20) * fStack_20c + fStack_12c;
                        local_20[2] = (float)(int)(uVar128 >> 0x20) * fStack_208 + fStack_128;
                        local_20[3] = fStack_204 * 0.0 + fStack_124;
                        uVar5 = *(ushort *)((int)local_14 + iVar30 * 2 + -2);
                        local_48 = (undefined1 *)(uint)(uVar5 >> 10);
                        pfVar36 = local_20 + 8;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        local_20[4] = (float)(int)uVar129 * local_210 + local_130;
                        local_20[5] = (float)(int)(uVar129 >> 0x20) * fStack_20c + fStack_12c;
                        local_20[6] = (float)(int)(uVar128 >> 0x20) * fStack_208 + fStack_128;
                        local_20[7] = fStack_204 * 0.0 + fStack_124;
                        local_20 = pfVar36;
                      } while (iVar30 < (int)((int)pfVar33 + -1));
                    }
                    if (iVar30 < (int)pfVar33) {
                      local_20 = local_24 + iVar30 * 4;
                      do {
                        uVar5 = *(ushort *)((int)local_14 + iVar30 * 2);
                        local_48 = (undefined1 *)(uint)(uVar5 >> 10);
                        iVar30 = iVar30 + 1;
                        pfVar36 = local_20 + 4;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *local_20 = (float)(int)uVar129 * local_210 + local_130;
                        local_20[1] = (float)(int)(uVar129 >> 0x20) * fStack_20c + fStack_12c;
                        local_20[2] = (float)(int)(uVar128 >> 0x20) * fStack_208 + fStack_128;
                        local_20[3] = fStack_204 * 0.0 + fStack_124;
                        local_20 = pfVar36;
                      } while (iVar30 < (int)pfVar33);
                    }
                  }
                  else {
                    hkErrStream::hkErrStream(local_b20,0x200);
                    pcVar27 = " not implemented";
                    uVar32 = *(ushort *)
                              (*(int *)(pauVar6[5] + 4) +
                              (uint)*(byte *)(local_44 * 4 + *(int *)(pauVar6[4] + 8)) * 2) >> 4 & 3
                    ;
                    FUN_01018d00("Compression method #");
                    FUN_01018dc0(uVar32);
                    FUN_01018d00(pcVar27);
                    iVar30 = (**(code **)(*DAT_01f8fc58 + 0xc))
                                       (3,0x902f09ed,local_b20,
                                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                                        ,0x1b3);
                    if (iVar30 != 0) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    hkBaseObject::hkBaseObject_38();
                  }
                  if (local_54 == 0) {
                    FUN_0124d170(local_24);
                    pfVar33 = (float *)&DAT_00000008;
                  }
                  uVar32 = 0;
                  if (pfVar33 != (float *)0x0) {
                    pfVar36 = local_24 + 3;
                    do {
                      *pfVar36 = (float)(uVar32 | 0x3f000000);
                      uVar32 = uVar32 + 1;
                      pfVar36 = pfVar36 + 4;
                    } while ((int)uVar32 < (int)pfVar33);
                  }
                  if (((uint)pfVar33 & 3) != 0) {
                    pfVar29 = local_24 + (int)pfVar33 * 4;
                    pfVar36 = pfVar33;
                    do {
                      *pfVar29 = pfVar29[-4];
                      pfVar29[1] = pfVar29[-3];
                      pfVar29[2] = pfVar29[-2];
                      pfVar29[3] = pfVar29[-1];
                      pfVar36 = (float *)((int)pfVar36 + 1);
                      pfVar29 = pfVar29 + 4;
                    } while (((uint)pfVar36 & 3) != 0);
                  }
                  uVar32 = (uint)*(byte *)(local_44 * 4 + *(int *)(pauVar6[4] + 8));
                  if ((*(ushort *)(*(int *)(pauVar6[5] + 4) + uVar32 * 2) & 0xc0) == 0) {
                    fVar40 = *(float *)(*(int *)pauVar6[7] + 0x18);
                  }
                  else {
                    fVar40 = (float)((int)*(short *)(*(int *)(pauVar6[5] + 4) + 4 + uVar32 * 2) <<
                                    0x10);
                    local_1c0[0x12] = fVar40;
                  }
                  fVar52 = (fVar40 + 0.001) * (fVar40 + 0.001);
                  _local_40 = ZEXT416((uint)fVar52);
                  local_640 = 0x3f800000;
                  uStack_63c = 0;
                  uStack_638 = 0;
                  uStack_634 = 0;
                  local_630 = 0;
                  uStack_62c = 0x3f800000;
                  uStack_628 = 0;
                  uStack_624 = 0;
                  local_620 = 0;
                  uStack_61c = 0;
                  uStack_618 = 0x3f800000;
                  uStack_614 = 0;
                  local_610 = local_c0._0_4_;
                  uStack_60c = local_c0._4_4_;
                  uStack_608 = local_c0._8_4_;
                  uStack_604 = local_c0._12_4_;
                  local_600._4_4_ = fVar52;
                  local_600._0_4_ = fVar40;
                  local_600._8_8_ = 0;
                  local_660 = param_3[4];
                  uStack_65c = param_3[5];
                  uStack_658 = param_3[6];
                  uStack_654 = param_3[7];
                  local_650 = param_3[8];
                  uStack_64c = param_3[9];
                  uStack_648 = param_3[10];
                  uStack_644 = param_3[0xb];
                  local_4a0 = param_3[0xb];
                  uStack_49c = local_4a0;
                  uStack_498 = local_4a0;
                  uStack_494 = local_4a0;
                  pcVar27 = (char *)FUN_0145bbd0(&local_72,local_24,pfVar33,&local_660,&local_4b0);
                  afStack_14c[0] = (float)uStack_4ac;
                  local_150 = (undefined1  [4])local_4b0;
                  afStack_14c[1] = (float)uStack_4a8;
                  afStack_14c[2] = (float)uStack_4a4;
                  local_a0._4_4_ = uStack_49c;
                  local_a0._0_4_ = local_4a0;
                  fStack_98 = (float)uStack_498;
                  fStack_94 = (float)uStack_494;
                  local_15 = (bool)*pcVar27;
                  uVar32 = local_50;
                  auVar41 = local_c0;
                  fVar40 = local_130;
                  fVar52 = fStack_12c;
                  fVar54 = fStack_128;
                  fVar55 = fStack_124;
                  goto LAB_01265a2d;
                case 2:
                  pfVar33 = (float *)(uint)(uVar5 >> 8);
                  if (uVar5 >> 8 != 0) {
                    pfVar33 = (float *)0x1;
                  }
                  uVar32 = (uint)puVar2[1];
                  uVar24 = uVar5 >> 4 & 3;
                  local_20 = pfVar33;
                  if ((uVar5 >> 4 & 3) == 0) {
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      fVar156 = *(float *)pauVar6[1];
                      fVar169 = *(float *)(pauVar6[1] + 4);
                      fVar170 = *(float *)(pauVar6[1] + 8);
                      fVar171 = *(float *)(pauVar6[1] + 0xc);
                      fVar191 = *(float *)*pauVar6;
                      fVar193 = *(float *)(*pauVar6 + 4);
                      fVar195 = *(float *)(*pauVar6 + 8);
                      fVar98 = *(float *)(*pauVar6 + 0xc);
                      pfVar36 = (float *)local_150;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar59._8_8_ = 0;
                        auVar59._0_8_ = uVar128;
                        auVar60._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar60._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar60._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar60._10_6_ = 0;
                        auVar202._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar202._0_4_ = auVar202._4_4_;
                        auVar202._8_4_ = auVar202._4_4_;
                        auVar202._12_4_ = auVar202._4_4_;
                        auVar56 = auVar59 & _DAT_017e9c20 | auVar202 & _DAT_017e9c10 |
                                  auVar60 & _DAT_017e9c00;
                        pfVar36[-4] = (float)auVar56._0_4_ * fVar156 + fVar191;
                        pfVar36[-3] = (float)auVar56._4_4_ * fVar169 + fVar193;
                        pfVar36[-2] = (float)auVar56._8_4_ * fVar170 + fVar195;
                        pfVar36[-1] = (float)auVar56._12_4_ * fVar171 + fVar98;
                        uVar128 = *(ulonglong *)(iVar30 + 8 + iVar25 * 8);
                        auVar61._8_8_ = 0;
                        auVar61._0_8_ = uVar128;
                        auVar203._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar62._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar62._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar62._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar62._10_6_ = 0;
                        auVar203._0_4_ = auVar203._4_4_;
                        auVar203._8_4_ = auVar203._4_4_;
                        auVar203._12_4_ = auVar203._4_4_;
                        auVar56 = auVar61 & _DAT_017e9c20 | auVar203 & _DAT_017e9c10 |
                                  auVar62 & _DAT_017e9c00;
                        *pfVar36 = (float)auVar56._0_4_ * fVar156 + fVar191;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar169 + fVar193;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar170 + fVar195;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar171 + fVar98;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    if (iVar25 < (int)pfVar33) {
                      fVar156 = *(float *)pauVar6[1];
                      fVar169 = *(float *)(pauVar6[1] + 4);
                      fVar170 = *(float *)(pauVar6[1] + 8);
                      fVar171 = *(float *)(pauVar6[1] + 0xc);
                      fVar191 = *(float *)*pauVar6;
                      fVar193 = *(float *)(*pauVar6 + 4);
                      fVar195 = *(float *)(*pauVar6 + 8);
                      fVar98 = *(float *)(*pauVar6 + 0xc);
                      pfVar36 = local_160 + iVar25 * 4;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar63._8_8_ = 0;
                        auVar63._0_8_ = uVar128;
                        auVar204._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar64._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar64._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar64._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar64._10_6_ = 0;
                        auVar204._0_4_ = auVar204._4_4_;
                        auVar204._8_4_ = auVar204._4_4_;
                        auVar204._12_4_ = auVar204._4_4_;
                        auVar56 = auVar63 & _DAT_017e9c20 | auVar204 & _DAT_017e9c10 |
                                  auVar64 & _DAT_017e9c00;
                        *pfVar36 = (float)auVar56._0_4_ * fVar156 + fVar191;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar169 + fVar193;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar170 + fVar195;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar171 + fVar98;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 1) {
                    local_6f0 = _DAT_01b249c0 * (local_120 - fVar40);
                    fStack_6ec = fRam01b249c4 * (fStack_11c - fVar52);
                    fStack_6e8 = fRam01b249c8 * (fStack_118 - fVar54);
                    fStack_6e4 = fRam01b249cc * (fStack_114 - fVar55);
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      pfVar36 = (float *)local_150;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        pfVar36[-4] = (float)(uVar32 & 0x7ff) * local_6f0 + fVar40;
                        pfVar36[-3] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ec + fVar52;
                        pfVar36[-2] = (float)(uVar32 >> 0x16) * fStack_6e8 + fVar54;
                        pfVar36[-1] = fStack_6e4 * 0.0 + fVar55;
                        uVar32 = *(uint *)(iVar30 + 4 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6f0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ec + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6e8 + fVar54;
                        pfVar36[3] = fStack_6e4 * 0.0 + fVar55;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    local_700 = fVar40;
                    fStack_6fc = fVar52;
                    fStack_6f8 = fVar54;
                    fStack_6f4 = fVar55;
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_160 + iVar25 * 4;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6f0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ec + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6e8 + fVar54;
                        pfVar36[3] = fStack_6e4 * 0.0 + fVar55;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 2) {
                    local_670 = _DAT_01b24c30 * (local_120 - fVar40);
                    fStack_66c = fRam01b24c34 * (fStack_11c - fVar52);
                    fStack_668 = fRam01b24c38 * (fStack_118 - fVar54);
                    fStack_664 = fRam01b24c3c * (fStack_114 - fVar55);
                    local_24 = (float *)(*(int *)pauVar6[5] + uVar32 * 8);
                    iVar30 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      local_1c = (float *)local_150;
                      do {
                        pfVar33 = local_1c;
                        uVar5 = *(ushort *)((int)local_24 + iVar30 * 2);
                        uVar24 = *(ushort *)((int)local_24 + iVar30 * 2 + 2);
                        iVar30 = iVar30 + 2;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        local_1c[-4] = (float)(int)uVar129 * local_670 + fVar40;
                        pfVar33[-3] = (float)(int)(uVar129 >> 0x20) * fStack_66c + fVar52;
                        pfVar33[-2] = (float)(int)(uVar128 >> 0x20) * fStack_668 + fVar54;
                        pfVar33[-1] = fStack_664 * 0.0 + fVar55;
                        pfVar33 = local_1c;
                        local_14 = (float *)(uint)(uVar24 >> 10);
                        uVar128 = (ulonglong)CONCAT24(uVar24 >> 10,(uint)uVar24) &
                                  0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar24 >> 5,(int)uVar128) & 0x1fffffffff;
                        pfVar36 = local_1c + 8;
                        *local_1c = (float)(int)uVar129 * local_670 + fVar40;
                        local_1c = pfVar36;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_66c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_668 + fVar54;
                        pfVar33[3] = fStack_664 * 0.0 + fVar55;
                      } while (iVar30 < (int)((int)local_20 + -1));
                    }
                    local_680 = fVar40;
                    fStack_67c = fVar52;
                    fStack_678 = fVar54;
                    fStack_674 = fVar55;
                    if (iVar30 < (int)local_20) {
                      local_14 = local_160 + iVar30 * 4;
                      do {
                        pfVar33 = local_14;
                        uVar5 = *(ushort *)((int)local_24 + iVar30 * 2);
                        local_1c = (float *)(uint)(uVar5 >> 10);
                        iVar30 = iVar30 + 1;
                        local_14 = local_14 + 4;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *pfVar33 = (float)(int)uVar129 * local_670 + fVar40;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_66c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_668 + fVar54;
                        pfVar33[3] = fStack_664 * 0.0 + fVar55;
                      } while (iVar30 < (int)local_20);
                    }
                  }
                  else {
                    hkErrStream::hkErrStream(local_920,0x200);
                    pcVar27 = " not implemented";
                    uVar32 = *(ushort *)
                              (*(int *)(pauVar6[5] + 4) +
                              (uint)*(byte *)((int)local_1c + *(int *)(pauVar6[4] + 8)) * 2) >> 4 &
                             3;
                    FUN_01018d00("Compression method #");
                    FUN_01018dc0(uVar32);
                    FUN_01018d00(pcVar27);
                    iVar30 = (**(code **)(*DAT_01f8fc58 + 0xc))
                                       (3,0x902f09ed,local_920,
                                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                                        ,0x1b3);
                    if (iVar30 != 0) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    hkBaseObject::hkBaseObject_38();
                    auVar41 = local_c0;
                    fVar40 = local_130;
                    fVar52 = fStack_12c;
                    fVar54 = fStack_128;
                    fVar55 = fStack_124;
                  }
                  local_3a0 = *(undefined8 *)(param_3 + 8);
                  local_160[3] = (float)((int)*(short *)(*(int *)(pauVar6[5] + 4) + 4 +
                                                        (uint)*(byte *)(local_44 * 4 +
                                                                       *(int *)(pauVar6[4] + 8)) * 2
                                                        ) << 0x10);
                  uStack_398 = *(undefined8 *)(param_3 + 10);
                  auVar16._4_4_ = local_160[1];
                  auVar16._0_4_ = local_160[0];
                  auVar16._8_4_ = local_160[2];
                  auVar16._12_4_ = local_160[3];
                  fVar156 = (float)local_3a0;
                  fVar169 = (float)((ulonglong)local_3a0 >> 0x20);
                  fVar195 = (float)uStack_398;
                  fVar98 = fVar156 * ((float)param_3[4] - local_160[0]);
                  fVar123 = fVar169 * ((float)param_3[5] - local_160[1]);
                  fVar125 = fVar195 * ((float)param_3[6] - local_160[2]);
                  fVar170 = auVar41._0_4_;
                  fVar171 = auVar41._4_4_;
                  fVar191 = auVar41._8_4_;
                  fVar193 = auVar41._12_4_;
                  local_370._0_4_ = fVar170 - (fVar123 + fVar98 + fVar125);
                  local_370._4_4_ = fVar171 - (fVar123 + fVar98 + fVar125);
                  local_370._8_4_ = fVar191 - (fVar123 + fVar98 + fVar125);
                  local_370._12_4_ = fVar193 - (fVar123 + fVar98 + fVar125);
                  uVar32 = local_50;
                  if (fVar170 < local_370._0_4_) {
                    fVar156 = fVar156 * fVar156;
                    fVar169 = fVar169 * fVar169;
                    fVar195 = fVar195 * fVar195;
                    auVar102._0_4_ = fVar156 + fVar169 + fVar195;
                    auVar102._4_4_ = fVar156 + fVar169 + fVar195;
                    auVar102._8_4_ = fVar156 + fVar169 + fVar195;
                    auVar102._12_4_ = fVar156 + fVar169 + fVar195;
                    local_520 = local_160[3] * local_160[3];
                    fStack_51c = local_160[3] * local_160[3];
                    fStack_518 = local_160[3] * local_160[3];
                    fStack_514 = local_160[3] * local_160[3];
                    auVar56 = rcpps(auVar16,auVar102);
                    fVar156 = ((float)DAT_017ea530 - auVar56._0_4_ * auVar102._0_4_) * auVar56._0_4_
                              * local_370._0_4_ * (float)param_3[8] +
                              ((float)param_3[4] - local_160[0]);
                    fVar169 = (DAT_017ea530._4_4_ - auVar56._4_4_ * auVar102._4_4_) * auVar56._4_4_
                              * local_370._4_4_ * (float)param_3[9] +
                              ((float)param_3[5] - local_160[1]);
                    fVar195 = (DAT_017ea530._8_4_ - auVar56._8_4_ * auVar102._8_4_) * auVar56._8_4_
                              * local_370._8_4_ * (float)param_3[10] +
                              ((float)param_3[6] - local_160[2]);
                    fVar156 = fVar156 * fVar156;
                    fVar169 = fVar169 * fVar169;
                    fVar195 = fVar195 * fVar195;
                    auVar65._0_4_ =
                         ((fVar169 + fVar156 + fVar195) - local_520) * (fVar170 - auVar102._0_4_);
                    auVar65._4_4_ =
                         ((fVar169 + fVar156 + fVar195) - fStack_51c) * (fVar171 - auVar102._4_4_);
                    auVar65._8_4_ =
                         ((fVar169 + fVar156 + fVar195) - fStack_518) * (fVar191 - auVar102._8_4_);
                    auVar65._12_4_ =
                         ((fVar169 + fVar156 + fVar195) - fStack_514) * (fVar193 - auVar102._12_4_);
                    if (fVar170 <= auVar65._0_4_) {
                      local_90._4_4_ = -(uint)(auVar65._4_4_ <= fVar171);
                      local_90._0_4_ = -(uint)(auVar65._0_4_ <= fVar170);
                      fStack_88 = (float)-(uint)(auVar65._8_4_ <= fVar191);
                      fStack_84 = (float)-(uint)(auVar65._12_4_ <= fVar193);
                      _local_f0 = rsqrtps(_local_90,auVar65);
                      fVar156 = local_f0._0_4_;
                      fVar169 = local_f0._4_4_;
                      fVar195 = local_f0._8_4_;
                      fVar98 = local_f0._12_4_;
                      local_140._0_4_ = (float)DAT_017ea540 - fVar156 * auVar65._0_4_ * fVar156;
                      local_140._4_4_ = DAT_017ea540._4_4_ - fVar169 * auVar65._4_4_ * fVar169;
                      fStack_138 = DAT_017ea540._8_4_ - fVar195 * auVar65._8_4_ * fVar195;
                      fStack_134 = DAT_017ea540._12_4_ - fVar98 * auVar65._12_4_ * fVar98;
                      fVar156 = (fVar170 -
                                (float)(~-(uint)(auVar65._0_4_ <= fVar170) &
                                       (uint)((float)local_140._0_4_ * fVar156 * 0.5 * auVar65._0_4_
                                             ))) + local_370._0_4_;
                      auVar66._0_4_ = (float)local_a0._0_4_ * auVar102._0_4_;
                      auVar66._4_4_ = (float)local_a0._4_4_ * auVar102._4_4_;
                      auVar66._8_4_ = fStack_98 * auVar102._8_4_;
                      auVar66._12_4_ = fStack_94 * auVar102._12_4_;
                      if (fVar156 < auVar66._0_4_ && fVar170 <= fVar156) {
                        auVar56 = rcpps(auVar66,auVar102);
                        local_530 = ((float)DAT_017ea530 - auVar56._0_4_ * auVar102._0_4_) *
                                    auVar56._0_4_ * fVar156;
                        fStack_52c = (DAT_017ea530._4_4_ - auVar56._4_4_ * auVar102._4_4_) *
                                     auVar56._4_4_ *
                                     ((fVar171 -
                                      (float)(~-(uint)(auVar65._4_4_ <= fVar171) &
                                             (uint)((float)local_140._4_4_ * fVar169 * 0.5 *
                                                   auVar65._4_4_))) + local_370._4_4_);
                        fStack_528 = (DAT_017ea530._8_4_ - auVar56._8_4_ * auVar102._8_4_) *
                                     auVar56._8_4_ *
                                     ((fVar191 -
                                      (float)(~-(uint)(auVar65._8_4_ <= fVar191) &
                                             (uint)(fStack_138 * fVar195 * 0.5 * auVar65._8_4_))) +
                                     local_370._8_4_);
                        fStack_524 = (DAT_017ea530._12_4_ - auVar56._12_4_ * auVar102._12_4_) *
                                     auVar56._12_4_ *
                                     ((fVar193 -
                                      (float)(~-(uint)(auVar65._12_4_ <= fVar193) &
                                             (uint)(fStack_134 * fVar98 * 0.5 * auVar65._12_4_))) +
                                     local_370._12_4_);
                        fVar98 = (local_530 * (float)param_3[8] + (float)param_3[4]) - local_160[0];
                        fVar123 = (fStack_52c * (float)param_3[9] + (float)param_3[5]) -
                                  local_160[1];
                        fVar125 = (fStack_528 * (float)param_3[10] + (float)param_3[6]) -
                                  local_160[2];
                        fVar156 = fVar98 * fVar98;
                        fVar169 = fVar123 * fVar123;
                        fVar195 = fVar125 * fVar125;
                        auVar159._4_4_ = fVar156;
                        auVar159._0_4_ = fVar156;
                        auVar159._8_4_ = fVar156;
                        auVar159._12_4_ = fVar156;
                        auVar136._0_4_ = fVar169 + fVar156 + fVar195;
                        auVar136._4_4_ = fVar169 + fVar156 + fVar195;
                        auVar136._8_4_ = fVar169 + fVar156 + fVar195;
                        auVar136._12_4_ = fVar169 + fVar156 + fVar195;
                        auVar56 = rsqrtps(auVar159,auVar136);
                        fVar156 = auVar56._0_4_;
                        fVar169 = auVar56._4_4_;
                        fVar195 = auVar56._8_4_;
                        fVar122 = auVar56._12_4_;
                        local_a0._4_4_ = fStack_52c;
                        local_a0._0_4_ = local_530;
                        fStack_98 = fStack_528;
                        fStack_94 = fStack_524;
                        local_150 = (undefined1  [4])
                                    ((float)(~-(uint)(auVar136._0_4_ <= fVar170) &
                                            (uint)(((float)DAT_017ea540 -
                                                   fVar156 * auVar136._0_4_ * fVar156) *
                                                  fVar156 * 0.5)) * fVar98);
                        afStack_14c[0] =
                             (float)(~-(uint)(auVar136._4_4_ <= fVar171) &
                                    (uint)((DAT_017ea540._4_4_ - fVar169 * auVar136._4_4_ * fVar169)
                                          * fVar169 * 0.5)) * fVar123;
                        afStack_14c[1] =
                             (float)(~-(uint)(auVar136._8_4_ <= fVar191) &
                                    (uint)((DAT_017ea540._8_4_ - fVar195 * auVar136._8_4_ * fVar195)
                                          * fVar195 * 0.5)) * fVar125;
                        afStack_14c[2] =
                             (float)(~-(uint)(auVar136._12_4_ <= fVar193) &
                                    (uint)((DAT_017ea540._12_4_ -
                                           fVar122 * auVar136._12_4_ * fVar122) * fVar122 * 0.5)) *
                             ((fStack_524 * (float)param_3[0xb] + (float)param_3[7]) - local_160[3])
                        ;
                        iVar30 = 1;
                      }
                      else {
                        iVar30 = 0;
                      }
                    }
                    else {
                      iVar30 = 0;
                    }
                  }
                  else {
                    iVar30 = 0;
                  }
                  break;
                case 3:
                  pfVar33 = (float *)(uint)(uVar5 >> 8);
                  if (1 < uVar5 >> 8) {
                    pfVar33 = (float *)0x2;
                  }
                  uVar32 = (uint)puVar2[1];
                  uVar24 = uVar5 >> 4 & 3;
                  local_24 = pfVar33;
                  if ((uVar5 >> 4 & 3) == 0) {
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      pfVar36 = local_1c0 + 4;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar67._8_8_ = 0;
                        auVar67._0_8_ = uVar128;
                        auVar68._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar68._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar68._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar68._10_6_ = 0;
                        auVar205._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar205._0_4_ = auVar205._4_4_;
                        auVar205._8_4_ = auVar205._4_4_;
                        auVar205._12_4_ = auVar205._4_4_;
                        auVar56 = auVar67 & _DAT_017e9c20 | auVar205 & _DAT_017e9c10 |
                                  auVar68 & _DAT_017e9c00;
                        fVar156 = *(float *)(pauVar6[1] + 4);
                        fVar169 = *(float *)(pauVar6[1] + 8);
                        fVar170 = *(float *)(pauVar6[1] + 0xc);
                        fVar171 = *(float *)(*pauVar6 + 4);
                        fVar191 = *(float *)(*pauVar6 + 8);
                        fVar193 = *(float *)(*pauVar6 + 0xc);
                        pfVar36[-4] = (float)auVar56._0_4_ * *(float *)pauVar6[1] +
                                      *(float *)*pauVar6;
                        pfVar36[-3] = (float)auVar56._4_4_ * fVar156 + fVar171;
                        pfVar36[-2] = (float)auVar56._8_4_ * fVar169 + fVar191;
                        pfVar36[-1] = (float)auVar56._12_4_ * fVar170 + fVar193;
                        uVar128 = *(ulonglong *)(iVar30 + 8 + iVar25 * 8);
                        auVar69._8_8_ = 0;
                        auVar69._0_8_ = uVar128;
                        auVar206._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar70._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar70._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar70._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar70._10_6_ = 0;
                        auVar206._0_4_ = auVar206._4_4_;
                        auVar206._8_4_ = auVar206._4_4_;
                        auVar206._12_4_ = auVar206._4_4_;
                        auVar56 = auVar69 & _DAT_017e9c20 | auVar206 & _DAT_017e9c10 |
                                  auVar70 & _DAT_017e9c00;
                        fVar156 = *(float *)(pauVar6[1] + 4);
                        fVar169 = *(float *)(pauVar6[1] + 8);
                        fVar170 = *(float *)(pauVar6[1] + 0xc);
                        fVar171 = *(float *)(*pauVar6 + 4);
                        fVar191 = *(float *)(*pauVar6 + 8);
                        fVar193 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar56._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar156 + fVar171;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar169 + fVar191;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar170 + fVar193;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_1c0 + iVar25 * 4;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar71._8_8_ = 0;
                        auVar71._0_8_ = uVar128;
                        auVar207._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar72._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar72._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar72._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar72._10_6_ = 0;
                        auVar207._0_4_ = auVar207._4_4_;
                        auVar207._8_4_ = auVar207._4_4_;
                        auVar207._12_4_ = auVar207._4_4_;
                        auVar56 = auVar71 & _DAT_017e9c20 | auVar207 & _DAT_017e9c10 |
                                  auVar72 & _DAT_017e9c00;
                        fVar156 = *(float *)(pauVar6[1] + 4);
                        fVar169 = *(float *)(pauVar6[1] + 8);
                        fVar170 = *(float *)(pauVar6[1] + 0xc);
                        fVar171 = *(float *)(*pauVar6 + 4);
                        fVar191 = *(float *)(*pauVar6 + 8);
                        fVar193 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar56._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar156 + fVar171;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar169 + fVar191;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar170 + fVar193;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 1) {
                    local_6d0 = _DAT_01b249c0 * (local_120 - fVar40);
                    fStack_6cc = fRam01b249c4 * (fStack_11c - fVar52);
                    fStack_6c8 = fRam01b249c8 * (fStack_118 - fVar54);
                    fStack_6c4 = fRam01b249cc * (fStack_114 - fVar55);
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      pfVar36 = local_1c0 + 4;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        pfVar36[-4] = (float)(uVar32 & 0x7ff) * local_6d0 + fVar40;
                        pfVar36[-3] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6cc + fVar52;
                        pfVar36[-2] = (float)(uVar32 >> 0x16) * fStack_6c8 + fVar54;
                        pfVar36[-1] = fStack_6c4 * 0.0 + fVar55;
                        uVar32 = *(uint *)(iVar30 + 4 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6d0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6cc + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6c8 + fVar54;
                        pfVar36[3] = fStack_6c4 * 0.0 + fVar55;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    local_6e0 = fVar40;
                    fStack_6dc = fVar52;
                    fStack_6d8 = fVar54;
                    fStack_6d4 = fVar55;
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_1c0 + iVar25 * 4;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6d0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6cc + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6c8 + fVar54;
                        pfVar36[3] = fStack_6c4 * 0.0 + fVar55;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 2) {
                    local_690 = _DAT_01b24c30 * (local_120 - fVar40);
                    fStack_68c = fRam01b24c34 * (fStack_11c - fVar52);
                    fStack_688 = fRam01b24c38 * (fStack_118 - fVar54);
                    fStack_684 = fRam01b24c3c * (fStack_114 - fVar55);
                    local_1c = (float *)(*(int *)pauVar6[5] + uVar32 * 8);
                    iVar30 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      local_20 = local_1c0 + 4;
                      do {
                        pfVar36 = local_1c;
                        pfVar33 = local_20;
                        uVar5 = *(ushort *)((int)local_1c + iVar30 * 2);
                        iVar30 = iVar30 + 2;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        local_20[-4] = (float)(int)uVar129 * local_690 + fVar40;
                        pfVar33[-3] = (float)(int)(uVar129 >> 0x20) * fStack_68c + fVar52;
                        pfVar33[-2] = (float)(int)(uVar128 >> 0x20) * fStack_688 + fVar54;
                        pfVar33[-1] = fStack_684 * 0.0 + fVar55;
                        pfVar33 = local_20;
                        uVar5 = *(ushort *)((int)pfVar36 + iVar30 * 2 + -2);
                        local_14 = (float *)(uint)(uVar5 >> 10);
                        local_20 = local_20 + 8;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *pfVar33 = (float)(int)uVar129 * local_690 + fVar40;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_68c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_688 + fVar54;
                        pfVar33[3] = fStack_684 * 0.0 + fVar55;
                      } while (iVar30 < (int)((int)local_24 + -1));
                    }
                    local_6a0 = fVar40;
                    fStack_69c = fVar52;
                    fStack_698 = fVar54;
                    fStack_694 = fVar55;
                    if (iVar30 < (int)local_24) {
                      local_14 = local_1c0 + iVar30 * 4;
                      do {
                        pfVar33 = local_14;
                        uVar5 = *(ushort *)((int)local_1c + iVar30 * 2);
                        local_20 = (float *)(uint)(uVar5 >> 10);
                        iVar30 = iVar30 + 1;
                        local_14 = local_14 + 4;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *pfVar33 = (float)(int)uVar129 * local_690 + fVar40;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_68c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_688 + fVar54;
                        pfVar33[3] = fStack_684 * 0.0 + fVar55;
                      } while (iVar30 < (int)local_24);
                    }
                  }
                  else {
                    hkErrStream::hkErrStream(local_1320,0x200);
                    pcVar27 = " not implemented";
                    uVar32 = *(ushort *)
                              (*(int *)(pauVar6[5] + 4) +
                              (uint)*(byte *)((int)local_1c + *(int *)(pauVar6[4] + 8)) * 2) >> 4 &
                             3;
                    FUN_01018d00("Compression method #");
                    FUN_01018dc0(uVar32);
                    FUN_01018d00(pcVar27);
                    iVar30 = (**(code **)(*DAT_01f8fc58 + 0xc))
                                       (3,0x902f09ed,local_1320,
                                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                                        ,0x1b3);
                    if (iVar30 != 0) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    hkBaseObject::hkBaseObject_38();
                    auVar41 = local_c0;
                    fVar40 = local_130;
                    fVar52 = fStack_12c;
                    fVar54 = fStack_128;
                    fVar55 = fStack_124;
                  }
                  local_170 = (float)((int)*(short *)(*(int *)(pauVar6[5] + 4) + 4 +
                                                     (uint)*(byte *)(local_44 * 4 +
                                                                    *(int *)(pauVar6[4] + 8)) * 2)
                                     << 0x10);
                  local_f0._4_4_ = local_170;
                  local_f0._0_4_ = local_170;
                  fStack_e8 = local_170;
                  fStack_e4 = local_170;
                  pauVar1 = (undefined1 (*) [16])(param_3 + 4);
                  auVar21 = *(undefined1 (*) [12])*pauVar1;
                  _local_90 = *pauVar1;
                  fVar195 = local_1c0[0] - local_1c0[4];
                  fVar98 = local_1c0[1] - local_1c0[5];
                  fVar123 = local_1c0[2] - local_1c0[6];
                  fVar125 = local_1c0[0] - *(float *)*pauVar1;
                  fVar122 = local_1c0[1] - (float)param_3[5];
                  fVar124 = local_1c0[2] - (float)param_3[6];
                  fVar156 = fVar195 * fVar195;
                  fVar169 = fVar98 * fVar98;
                  fVar170 = fVar123 * fVar123;
                  auVar137._0_4_ = fVar169 + fVar156 + fVar170;
                  auVar137._4_4_ = fVar169 + fVar156 + fVar170;
                  auVar137._8_4_ = fVar169 + fVar156 + fVar170;
                  auVar137._12_4_ = fVar169 + fVar156 + fVar170;
                  fVar156 = fVar125 * fVar195;
                  fVar170 = fVar122 * fVar98;
                  fVar191 = fVar124 * fVar123;
                  auVar208._4_4_ = fVar156;
                  auVar208._0_4_ = fVar156;
                  auVar208._8_4_ = fVar156;
                  auVar208._12_4_ = fVar156;
                  auVar56 = rcpps(auVar208,auVar137);
                  fStack_a8 = 2.0;
                  local_b0 = (undefined1  [8])0x4000000040000000;
                  fStack_a4 = 2.0;
                  fVar169 = (2.0 - auVar56._0_4_ * auVar137._0_4_) * auVar56._0_4_ *
                            (fVar170 + fVar156 + fVar191);
                  fVar171 = (2.0 - auVar56._4_4_ * auVar137._4_4_) * auVar56._4_4_ *
                            (fVar170 + fVar156 + fVar191);
                  fVar193 = (2.0 - auVar56._8_4_ * auVar137._8_4_) * auVar56._8_4_ *
                            (fVar170 + fVar156 + fVar191);
                  fVar156 = (2.0 - auVar56._12_4_ * auVar137._12_4_) * auVar56._12_4_ *
                            (fVar170 + fVar156 + fVar191);
                  uVar32 = -(uint)(fVar169 < 1.0);
                  uVar35 = -(uint)(fVar171 < 1.0);
                  uVar37 = -(uint)(fVar193 < 1.0);
                  uVar38 = -(uint)(fVar156 < 1.0);
                  auVar138._0_8_ = CONCAT44(~uVar35,~uVar32) & 0x3f8000003f800000;
                  auVar138._8_4_ = ~uVar37 & 0x3f800000;
                  auVar138._12_4_ = ~uVar38 & 0x3f800000;
                  auVar209._0_4_ = uVar32 & (uint)fVar169;
                  auVar209._4_4_ = uVar35 & (uint)fVar171;
                  auVar209._8_4_ = uVar37 & (uint)fVar193;
                  auVar209._12_4_ = uVar38 & (uint)fVar156;
                  fVar156 = auVar41._0_4_;
                  fVar169 = auVar41._4_4_;
                  fVar170 = auVar41._8_4_;
                  fVar171 = auVar41._12_4_;
                  auVar56 = maxps(auVar41,auVar209 | auVar138);
                  fVar191 = fVar125 - auVar56._0_4_ * fVar195;
                  fVar193 = fVar122 - auVar56._4_4_ * fVar98;
                  fVar195 = fVar124 - auVar56._8_4_ * fVar123;
                  local_140._0_4_ = local_170 * local_170;
                  local_140._4_4_ = local_170 * local_170;
                  fStack_138 = local_170 * local_170;
                  fStack_134 = local_170 * local_170;
                  uVar221 = local_1d0;
                  uVar4 = uStack_1c8;
                  uVar32 = local_50;
                  if ((float)local_140._0_4_ <=
                      fVar193 * fVar193 + fVar191 * fVar191 + fVar195 * fVar195) {
                    local_1d0 = *(undefined8 *)(param_3 + 8);
                    fVar192 = local_1c0[4] - local_1c0[0];
                    fVar194 = local_1c0[5] - local_1c0[1];
                    fVar127 = local_1c0[6] - local_1c0[2];
                    uVar221 = local_1d0;
                    uStack_1c8 = *(undefined8 *)(param_3 + 10);
                    uVar4 = uStack_1c8;
                    local_1d0._4_4_ = (float)((ulonglong)local_1d0 >> 0x20);
                    uStack_1c8._0_4_ = (float)*(undefined8 *)(param_3 + 10);
                    fVar40 = (float)local_1d0 * fVar192;
                    fVar52 = local_1d0._4_4_ * fVar194;
                    fVar54 = (float)uStack_1c8 * fVar127;
                    fVar126 = (float)local_1d0 * fVar125;
                    fVar151 = local_1d0._4_4_ * fVar122;
                    fVar153 = (float)uStack_1c8 * fVar124;
                    fVar125 = fVar125 * fVar192;
                    fVar122 = fVar122 * fVar194;
                    fVar124 = fVar124 * fVar127;
                    fVar55 = fVar52 + fVar40 + fVar54;
                    fVar98 = fVar52 + fVar40 + fVar54;
                    fVar123 = fVar52 + fVar40 + fVar54;
                    fVar54 = fVar52 + fVar40 + fVar54;
                    local_390 = fVar122 + fVar125 + fVar124;
                    fStack_38c = fVar122 + fVar125 + fVar124;
                    fStack_388 = fVar122 + fVar125 + fVar124;
                    fStack_384 = fVar122 + fVar125 + fVar124;
                    fVar40 = (float)local_1d0 * (float)local_1d0;
                    fVar52 = local_1d0._4_4_ * local_1d0._4_4_;
                    fStack_4d4 = (float)uStack_1c8 * (float)uStack_1c8;
                    local_4e0 = fVar52 + fVar40 + fStack_4d4;
                    fStack_4dc = fVar52 + fVar40 + fStack_4d4;
                    fStack_4d8 = fVar52 + fVar40 + fStack_4d4;
                    fStack_4d4 = fVar52 + fVar40 + fStack_4d4;
                    fVar191 = fVar192 * fVar192;
                    fVar193 = fVar194 * fVar194;
                    fVar195 = fVar127 * fVar127;
                    auVar160._0_4_ = fVar193 + fVar191 + fVar195;
                    auVar160._4_4_ = fVar193 + fVar191 + fVar195;
                    auVar160._8_4_ = fVar193 + fVar191 + fVar195;
                    auVar160._12_4_ = fVar193 + fVar191 + fVar195;
                    local_480 = (fVar151 + fVar126 + fVar153) * auVar160._0_4_ - local_390 * fVar55;
                    fStack_47c = (fVar151 + fVar126 + fVar153) * auVar160._4_4_ -
                                 fStack_38c * fVar98;
                    fStack_478 = (fVar151 + fVar126 + fVar153) * auVar160._8_4_ -
                                 fStack_388 * fVar123;
                    fStack_474 = (fVar151 + fVar126 + fVar153) * auVar160._12_4_ -
                                 fStack_384 * fVar54;
                    local_70 = auVar160._0_4_ * local_4e0;
                    fStack_6c = auVar160._4_4_ * fStack_4dc;
                    fStack_68 = auVar160._8_4_ * fStack_4d8;
                    fStack_64 = auVar160._12_4_ * fStack_4d4;
                    local_e0 = fVar55 * fVar55;
                    fStack_dc = fVar98 * fVar98;
                    fStack_d8 = fVar123 * fVar123;
                    fStack_d4 = fVar54 * fVar54;
                    local_350 = local_70 - local_e0;
                    fStack_34c = fStack_6c - fStack_dc;
                    fStack_348 = fStack_68 - fStack_d8;
                    fStack_344 = fStack_64 - fStack_d4;
                    uVar35 = -(uint)((local_e0 + local_70) * 9.536743e-07 < local_350);
                    uVar37 = -(uint)((fStack_dc + fStack_6c) * 9.536743e-07 < fStack_34c);
                    uVar38 = -(uint)((fStack_d8 + fStack_68) * 9.536743e-07 < fStack_348);
                    uVar39 = -(uint)((fStack_d4 + fStack_64) * 9.536743e-07 < fStack_344);
                    local_40._4_4_ = ~uVar37 & (uint)fStack_47c;
                    local_40._0_4_ = ~uVar35 & (uint)local_480;
                    fStack_38 = (float)(~uVar38 & (uint)fStack_478);
                    fStack_34 = (float)(~uVar39 & (uint)fStack_474);
                    auVar210._0_4_ = (uint)local_350 & uVar35;
                    auVar210._4_4_ = (uint)fStack_34c & uVar37;
                    auVar210._8_4_ = (uint)fStack_348 & uVar38;
                    auVar210._12_4_ = (uint)fStack_344 & uVar39;
                    auVar56 = _local_40 | auVar210;
                    _local_40 = rcpps(auVar210,auVar56);
                    local_480 = local_480 * (2.0 - local_40._0_4_ * auVar56._0_4_) * local_40._0_4_;
                    fStack_47c = fStack_47c *
                                 (2.0 - local_40._4_4_ * auVar56._4_4_) * local_40._4_4_;
                    fStack_478 = fStack_478 *
                                 (2.0 - local_40._8_4_ * auVar56._8_4_) * local_40._8_4_;
                    fStack_474 = fStack_474 *
                                 (2.0 - local_40._12_4_ * auVar56._12_4_) * local_40._12_4_;
                    local_470._0_4_ = fVar55 * local_480 - local_390;
                    local_470._4_4_ = fVar98 * fStack_47c - fStack_38c;
                    local_470._8_4_ = fVar123 * fStack_478 - fStack_388;
                    local_470._12_4_ = fVar54 * fStack_474 - fStack_384;
                    auVar56 = rcpps(local_470,auVar160);
                    local_90._0_4_ = auVar21._0_4_;
                    local_90._4_4_ = auVar21._4_4_;
                    fStack_88 = auVar21._8_4_;
                    fVar40 = ((float)local_1d0 * local_480 + (float)local_90._0_4_) -
                             ((2.0 - auVar160._0_4_ * auVar56._0_4_) * auVar56._0_4_ *
                              local_470._0_4_ * fVar192 + local_1c0[0]);
                    fVar52 = (local_1d0._4_4_ * fStack_47c + (float)local_90._4_4_) -
                             ((2.0 - auVar160._4_4_ * auVar56._4_4_) * auVar56._4_4_ *
                              local_470._4_4_ * fVar194 + local_1c0[1]);
                    fVar54 = ((float)uStack_1c8 * fStack_478 + fStack_88) -
                             ((2.0 - auVar160._8_4_ * auVar56._8_4_) * auVar56._8_4_ *
                              local_470._8_4_ * fVar127 + local_1c0[2]);
                    fVar40 = fVar40 * fVar40;
                    fVar52 = fVar52 * fVar52;
                    fVar54 = fVar54 * fVar54;
                    auVar211._0_4_ = fVar52 + fVar40 + fVar54;
                    auVar211._4_4_ = fVar52 + fVar40 + fVar54;
                    auVar211._8_4_ = fVar52 + fVar40 + fVar54;
                    auVar211._12_4_ = fVar52 + fVar40 + fVar54;
                    fVar40 = local_130;
                    fVar52 = fStack_12c;
                    fVar54 = fStack_128;
                    fVar55 = fStack_124;
                    if (auVar211._0_4_ <= (float)local_140._0_4_) {
                      uVar35 = -(uint)(1.1920929e-07 < fVar193 + fVar191 + fVar195);
                      uVar37 = -(uint)(1.1920929e-07 < fVar193 + fVar191 + fVar195);
                      uVar38 = -(uint)(1.1920929e-07 < fVar193 + fVar191 + fVar195);
                      uVar39 = -(uint)(1.1920929e-07 < fVar193 + fVar191 + fVar195);
                      auVar161._0_4_ = fVar193 + fVar191 + fVar195;
                      auVar161._4_4_ = fVar193 + fVar191 + fVar195;
                      auVar161._8_4_ = fVar193 + fVar191 + fVar195;
                      auVar161._12_4_ = fVar193 + fVar191 + fVar195;
                      local_e0 = 3.0;
                      fStack_dc = 3.0;
                      fStack_d8 = 3.0;
                      fStack_d4 = 3.0;
                      local_b0._4_4_ = -(uint)(auVar161._4_4_ <= fVar169);
                      local_b0._0_4_ = -(uint)(auVar161._0_4_ <= fVar156);
                      fStack_a8 = (float)-(uint)(auVar161._8_4_ <= fVar170);
                      fStack_a4 = (float)-(uint)(auVar161._12_4_ <= fVar171);
                      auVar56 = rsqrtps(_local_b0,auVar161);
                      fVar191 = auVar56._0_4_;
                      fVar193 = auVar56._4_4_;
                      fVar195 = auVar56._8_4_;
                      fVar98 = auVar56._12_4_;
                      fVar191 = (float)(~-(uint)(auVar161._0_4_ <= fVar156) &
                                       (uint)((3.0 - fVar191 * auVar161._0_4_ * fVar191) *
                                             fVar191 * 0.5));
                      fVar193 = (float)(~-(uint)(auVar161._4_4_ <= fVar169) &
                                       (uint)((3.0 - fVar193 * auVar161._4_4_ * fVar193) *
                                             fVar193 * 0.5));
                      fVar195 = (float)(~-(uint)(auVar161._8_4_ <= fVar170) &
                                       (uint)((3.0 - fVar195 * auVar161._8_4_ * fVar195) *
                                             fVar195 * 0.5));
                      fVar98 = (float)(~-(uint)(auVar161._12_4_ <= fVar171) &
                                      (uint)((3.0 - fVar98 * auVar161._12_4_ * fVar98) *
                                            fVar98 * 0.5));
                      local_380 = (float)((uint)(fVar191 * auVar161._0_4_) & uVar35 |
                                         ~uVar35 & (uint)fVar156);
                      fStack_37c = (float)((uint)(fVar193 * auVar161._4_4_) & uVar37 |
                                          ~uVar37 & (uint)fVar169);
                      fStack_378 = (float)((uint)(fVar195 * auVar161._8_4_) & uVar38 |
                                          ~uVar38 & (uint)fVar170);
                      fStack_374 = (float)((uint)(fVar98 * auVar161._12_4_) & uVar39 |
                                          ~uVar39 & (uint)fVar171);
                      auVar162._0_4_ = (uint)(fVar192 * fVar191) & uVar35;
                      auVar162._4_4_ = (uint)(fVar194 * fVar193) & uVar37;
                      auVar162._8_4_ = (uint)(fVar127 * fVar195) & uVar38;
                      auVar162._12_4_ = (uint)((local_1c0[7] - local_1c0[3]) * fVar98) & uVar39;
                      auVar103._0_4_ = ~uVar35 & (uint)fVar156;
                      auVar103._4_4_ = ~uVar37 & (uint)fVar169;
                      auVar103._8_4_ = ~uVar38 & (uint)fVar170;
                      auVar103._12_4_ = ~uVar39 & (uint)fVar171;
                      auVar162 = auVar162 | auVar103;
                      fVar98 = auVar162._0_4_;
                      fVar191 = (float)local_1d0 * fVar98;
                      fVar123 = auVar162._4_4_;
                      fVar193 = local_1d0._4_4_ * fVar123;
                      fVar125 = auVar162._8_4_;
                      fVar195 = (float)uStack_1c8 * fVar125;
                      local_1d0._0_4_ =
                           (fVar156 - (fVar193 + fVar191 + fVar195)) * fVar98 + (float)local_1d0;
                      local_1d0._4_4_ =
                           (fVar169 - (fVar193 + fVar191 + fVar195)) * fVar123 + local_1d0._4_4_;
                      uStack_1c8._0_4_ =
                           (fVar170 - (fVar193 + fVar191 + fVar195)) * fVar125 + (float)uStack_1c8;
                      local_1d0._0_4_ = (float)local_1d0 * (float)local_1d0;
                      local_1d0._4_4_ = local_1d0._4_4_ * local_1d0._4_4_;
                      uStack_1c8._0_4_ = (float)uStack_1c8 * (float)uStack_1c8;
                      auVar104._0_4_ = local_1d0._4_4_ + (float)local_1d0 + (float)uStack_1c8;
                      auVar104._4_4_ = local_1d0._4_4_ + (float)local_1d0 + (float)uStack_1c8;
                      auVar104._8_4_ = local_1d0._4_4_ + (float)local_1d0 + (float)uStack_1c8;
                      auVar104._12_4_ = local_1d0._4_4_ + (float)local_1d0 + (float)uStack_1c8;
                      local_340 = -(uint)(auVar104._0_4_ == fVar156);
                      uStack_33c = -(uint)(auVar104._4_4_ == fVar169);
                      uStack_338 = -(uint)(auVar104._8_4_ == fVar170);
                      uStack_334 = -(uint)(auVar104._12_4_ == fVar171);
                      auVar56 = rcpps(auVar211,auVar104);
                      local_320._0_4_ =
                           (2.0 - auVar56._0_4_ * auVar104._0_4_) * auVar56._0_4_ *
                           ((float)local_140._0_4_ - auVar211._0_4_);
                      local_320._4_4_ =
                           (2.0 - auVar56._4_4_ * auVar104._4_4_) * auVar56._4_4_ *
                           ((float)local_140._4_4_ - auVar211._4_4_);
                      local_320._8_4_ =
                           (2.0 - auVar56._8_4_ * auVar104._8_4_) * auVar56._8_4_ *
                           (fStack_138 - auVar211._8_4_);
                      local_320._12_4_ =
                           (2.0 - auVar56._12_4_ * auVar104._12_4_) * auVar56._12_4_ *
                           (fStack_134 - auVar211._12_4_);
                      auVar56 = rsqrtps(auVar104,local_320);
                      local_70 = 3.0 - auVar56._0_4_ * local_320._0_4_ * auVar56._0_4_;
                      fStack_6c = 3.0 - auVar56._4_4_ * local_320._4_4_ * auVar56._4_4_;
                      fStack_68 = 3.0 - auVar56._8_4_ * local_320._8_4_ * auVar56._8_4_;
                      fStack_64 = 3.0 - auVar56._12_4_ * local_320._12_4_ * auVar56._12_4_;
                      auVar56 = rsqrtps(_DAT_017ea550,local_320);
                      local_40._0_4_ = (undefined4)DAT_017ea550;
                      uVar31 = local_40._0_4_;
                      local_40._4_4_ = DAT_017ea550._4_4_;
                      uVar53 = local_40._4_4_;
                      fStack_38 = DAT_017ea550._8_4_;
                      fVar191 = fStack_38;
                      fStack_34 = DAT_017ea550._12_4_;
                      fVar193 = fStack_34;
                      local_40._0_4_ = (float)local_40._0_4_ * auVar56._0_4_;
                      local_40._4_4_ = (float)local_40._4_4_ * auVar56._4_4_;
                      fStack_38 = fStack_38 * auVar56._8_4_;
                      fStack_34 = fStack_34 * auVar56._12_4_;
                      auVar105._0_4_ =
                           ~local_340 &
                           (uint)(local_480 -
                                 (float)(~-(uint)(local_320._0_4_ <= fVar156) &
                                        (uint)(local_70 * (float)local_40._0_4_ * local_320._0_4_)))
                      ;
                      auVar105._4_4_ =
                           ~uStack_33c &
                           (uint)(fStack_47c -
                                 (float)(~-(uint)(local_320._4_4_ <= fVar169) &
                                        (uint)(fStack_6c * (float)local_40._4_4_ * local_320._4_4_))
                                 );
                      auVar105._8_4_ =
                           ~uStack_338 &
                           (uint)(fStack_478 -
                                 (float)(~-(uint)(local_320._8_4_ <= fVar170) &
                                        (uint)(fStack_68 * fStack_38 * local_320._8_4_)));
                      auVar105._12_4_ =
                           ~uStack_334 &
                           (uint)(fStack_474 -
                                 (float)(~-(uint)(local_320._12_4_ <= fVar171) &
                                        (uint)(fStack_64 * fStack_34 * local_320._12_4_)));
                      auVar177._0_8_ = CONCAT44(uStack_33c,local_340) & 0xbf800000bf800000;
                      auVar177._8_4_ = uStack_338 & 0xbf800000;
                      auVar177._12_4_ = uStack_334 & 0xbf800000;
                      auVar105 = auVar105 | auVar177;
                      fVar195 = auVar105._0_4_;
                      if (fVar195 < (float)local_a0._0_4_) {
                        fVar122 = local_1c0[0] * fVar98;
                        fVar124 = local_1c0[1] * fVar123;
                        fStack_354 = local_1c0[2] * fVar125;
                        local_360 = fVar124 + fVar122 + fStack_354;
                        fStack_35c = fVar124 + fVar122 + fStack_354;
                        fStack_358 = fVar124 + fVar122 + fStack_354;
                        fStack_354 = fVar124 + fVar122 + fStack_354;
                        local_e0 = (float)param_3[8];
                        fStack_dc = (float)param_3[9];
                        fStack_d8 = (float)param_3[10];
                        fStack_d4 = (float)param_3[0xb];
                        local_5c0 = local_e0 * fVar195 + (float)local_90._0_4_;
                        fStack_5bc = fStack_dc * auVar105._4_4_ + (float)local_90._4_4_;
                        fStack_5b8 = fStack_d8 * auVar105._8_4_ + fStack_88;
                        fStack_5b4 = (float)param_3[0xb] * auVar105._12_4_ + (float)param_3[7];
                        local_b0._0_4_ = local_5c0 * fVar98;
                        local_b0._4_4_ = fStack_5bc * fVar123;
                        fStack_a8 = fStack_5b8 * fVar125;
                        fStack_a4 = fStack_5b4 * auVar162._12_4_;
                        local_70 = (float)local_b0._0_4_;
                        fStack_6c = (float)local_b0._0_4_;
                        fStack_68 = (float)local_b0._0_4_;
                        fStack_64 = (float)local_b0._0_4_;
                        local_5e0 = ((float)local_b0._4_4_ + (float)local_b0._0_4_ + fStack_a8) -
                                    local_360;
                        fStack_5dc = ((float)local_b0._4_4_ + (float)local_b0._0_4_ + fStack_a8) -
                                     fStack_35c;
                        fStack_5d8 = ((float)local_b0._4_4_ + (float)local_b0._0_4_ + fStack_a8) -
                                     fStack_358;
                        fStack_5d4 = ((float)local_b0._4_4_ + (float)local_b0._0_4_ + fStack_a8) -
                                     fStack_354;
                        local_1d0 = uVar221;
                        uStack_1c8 = uVar4;
                        if (((fVar156 <= fVar195) && (fVar156 < local_5e0)) &&
                           (auVar14._4_4_ = fStack_37c, auVar14._0_4_ = local_380,
                           auVar14._8_4_ = fStack_378, auVar14._12_4_ = fStack_374,
                           local_5e0 < local_380)) {
                          _local_40 = rcpps(auVar162,auVar14);
                          fVar122 = local_5c0 -
                                    ((2.0 - local_40._0_4_ * local_380) * local_40._0_4_ * local_5e0
                                     * fVar192 + local_1c0[0]);
                          fVar124 = fStack_5bc -
                                    ((2.0 - local_40._4_4_ * fStack_37c) * local_40._4_4_ *
                                     fStack_5dc * fVar194 + local_1c0[1]);
                          fVar126 = fStack_5b8 -
                                    ((2.0 - local_40._8_4_ * fStack_378) * local_40._8_4_ *
                                     fStack_5d8 * fVar127 + local_1c0[2]);
                          fVar195 = fVar122 * fVar122;
                          fVar98 = fVar124 * fVar124;
                          fVar123 = fVar126 * fVar126;
                          auVar178._4_4_ = fVar98;
                          auVar178._0_4_ = fVar98;
                          auVar178._8_4_ = fVar98;
                          auVar178._12_4_ = fVar98;
                          auVar163._0_4_ = fVar195 + fVar98 + fVar123;
                          auVar163._4_4_ = fVar195 + fVar98 + fVar123;
                          auVar163._8_4_ = fVar195 + fVar98 + fVar123;
                          auVar163._12_4_ = fVar195 + fVar98 + fVar123;
                          auVar56 = rsqrtps(auVar178,auVar163);
                          fVar195 = auVar56._0_4_;
                          fVar98 = auVar56._4_4_;
                          fVar123 = auVar56._8_4_;
                          fVar125 = auVar56._12_4_;
                          local_150 = (undefined1  [4])
                                      ((float)(~-(uint)(auVar163._0_4_ <= fVar156) &
                                              (uint)((3.0 - fVar195 * auVar163._0_4_ * fVar195) *
                                                    fVar195 * (float)uVar31)) * fVar122);
                          afStack_14c[0] =
                               (float)(~-(uint)(auVar163._4_4_ <= fVar169) &
                                      (uint)((3.0 - fVar98 * auVar163._4_4_ * fVar98) *
                                            fVar98 * (float)uVar53)) * fVar124;
                          afStack_14c[1] =
                               (float)(~-(uint)(auVar163._8_4_ <= fVar170) &
                                      (uint)((3.0 - fVar123 * auVar163._8_4_ * fVar123) *
                                            fVar123 * fVar191)) * fVar126;
                          afStack_14c[2] =
                               (float)(~-(uint)(auVar163._12_4_ <= fVar171) &
                                      (uint)((3.0 - fVar125 * auVar163._12_4_ * fVar125) *
                                            fVar125 * fVar193)) *
                               (fStack_5b4 -
                               ((2.0 - local_40._12_4_ * fStack_374) * local_40._12_4_ * fStack_5d4
                                * (local_1c0[7] - local_1c0[3]) + local_1c0[3]));
                          _local_a0 = auVar105;
                          iVar30 = 1;
                          break;
                        }
                        fVar98 = (float)local_90._0_4_ * fVar98;
                        fVar123 = (float)local_90._4_4_ * fVar123;
                        auVar179._8_4_ = fStack_88 * fVar125;
                        auVar15._4_4_ = fStack_37c;
                        auVar15._0_4_ = local_380;
                        auVar15._8_4_ = fStack_378;
                        auVar15._12_4_ = fStack_374;
                        auVar179._4_4_ = auVar179._8_4_;
                        auVar179._0_4_ = auVar179._8_4_;
                        auVar179._12_4_ = auVar179._8_4_;
                        _local_40 = rcpps(auVar179,auVar15);
                        fVar125 = (float)local_90._0_4_ -
                                  ((2.0 - local_40._0_4_ * local_380) * local_40._0_4_ *
                                   ((fVar123 + fVar98 + auVar179._8_4_) - local_360) * fVar192 +
                                  local_1c0[0]);
                        fVar122 = (float)local_90._4_4_ -
                                  ((2.0 - local_40._4_4_ * fStack_37c) * local_40._4_4_ *
                                   ((fVar123 + fVar98 + auVar179._8_4_) - fStack_35c) * fVar194 +
                                  local_1c0[1]);
                        fVar98 = fStack_88 -
                                 ((2.0 - local_40._8_4_ * fStack_378) * local_40._8_4_ *
                                  ((fVar123 + fVar98 + auVar179._8_4_) - fStack_358) * fVar127 +
                                 local_1c0[2]);
                        if ((fVar156 <= fVar195) ||
                           (fVar122 * fVar122 + fVar125 * fVar125 + fVar98 * fVar98 <=
                            (float)local_140._0_4_)) {
                          fVar195 = (float)((uint)local_1c0[0] & -(uint)(local_5e0 <= fVar156) |
                                           ~-(uint)(local_5e0 <= fVar156) & (uint)local_1c0[4]);
                          fVar98 = (float)((uint)local_1c0[1] & -(uint)(fStack_5dc <= fVar169) |
                                          ~-(uint)(fStack_5dc <= fVar169) & (uint)local_1c0[5]);
                          fVar123 = (float)((uint)local_1c0[2] & -(uint)(fStack_5d8 <= fVar170) |
                                           ~-(uint)(fStack_5d8 <= fVar170) & (uint)local_1c0[6]);
                          local_490 = (float)local_90._0_4_ - fVar195;
                          fStack_48c = (float)local_90._4_4_ - fVar98;
                          fStack_488 = fStack_88 - fVar123;
                          fStack_484 = (float)param_3[7] -
                                       (float)((uint)local_1c0[3] & -(uint)(fStack_5d4 <= fVar171) |
                                              ~-(uint)(fStack_5d4 <= fVar171) & (uint)local_1c0[7]);
                          fVar125 = (((float)local_90._0_4_ + local_e0) - fVar195) - local_490;
                          fVar122 = (((float)local_90._4_4_ + fStack_dc) - fVar98) - fStack_48c;
                          fVar124 = ((fStack_88 + fStack_d8) - fVar123) - fStack_488;
                          local_560._0_12_ = auVar41._0_12_;
                          local_560._12_4_ = local_170;
                          local_570 = local_490 - fVar156;
                          fStack_56c = fStack_48c - fVar169;
                          fStack_568 = fStack_488 - fVar170;
                          fStack_564 = fStack_484 - local_170;
                          fVar195 = local_570 * fVar125;
                          fVar98 = fStack_56c * fVar122;
                          fVar123 = fStack_568 * fVar124;
                          local_310._0_4_ = fVar156 - (fVar98 + fVar195 + fVar123);
                          local_310._4_4_ = fVar169 - (fVar98 + fVar195 + fVar123);
                          local_310._8_4_ = fVar170 - (fVar98 + fVar195 + fVar123);
                          local_310._12_4_ = fVar171 - (fVar98 + fVar195 + fVar123);
                          if (fVar156 < local_310._0_4_) {
                            fVar195 = fVar125 * fVar125;
                            fVar98 = fVar122 * fVar122;
                            fVar123 = fVar124 * fVar124;
                            auVar180._4_4_ = fVar195;
                            auVar180._0_4_ = fVar195;
                            auVar180._8_4_ = fVar195;
                            auVar180._12_4_ = fVar195;
                            auVar164._0_4_ = fVar98 + fVar195 + fVar123;
                            auVar164._4_4_ = fVar98 + fVar195 + fVar123;
                            auVar164._8_4_ = fVar98 + fVar195 + fVar123;
                            auVar164._12_4_ = fVar98 + fVar195 + fVar123;
                            local_540 = local_170 * local_170;
                            fStack_53c = local_170 * local_170;
                            fStack_538 = local_170 * local_170;
                            fStack_534 = local_170 * local_170;
                            auVar56 = rcpps(auVar180,auVar164);
                            fVar195 = (2.0 - auVar56._0_4_ * auVar164._0_4_) * auVar56._0_4_ *
                                      local_310._0_4_ * fVar125 + local_570;
                            fVar98 = (2.0 - auVar56._4_4_ * auVar164._4_4_) * auVar56._4_4_ *
                                     local_310._4_4_ * fVar122 + fStack_56c;
                            fVar123 = (2.0 - auVar56._8_4_ * auVar164._8_4_) * auVar56._8_4_ *
                                      local_310._8_4_ * fVar124 + fStack_568;
                            fVar195 = fVar195 * fVar195;
                            fVar98 = fVar98 * fVar98;
                            fVar123 = fVar123 * fVar123;
                            auVar106._0_4_ =
                                 ((fVar98 + fVar195 + fVar123) - local_540) *
                                 (fVar156 - auVar164._0_4_);
                            auVar106._4_4_ =
                                 ((fVar98 + fVar195 + fVar123) - fStack_53c) *
                                 (fVar169 - auVar164._4_4_);
                            auVar106._8_4_ =
                                 ((fVar98 + fVar195 + fVar123) - fStack_538) *
                                 (fVar170 - auVar164._8_4_);
                            auVar106._12_4_ =
                                 ((fVar98 + fVar195 + fVar123) - fStack_534) *
                                 (fVar171 - auVar164._12_4_);
                            if (fVar156 <= auVar106._0_4_) {
                              local_f0._4_4_ = -(uint)(auVar106._4_4_ <= fVar169);
                              local_f0._0_4_ = -(uint)(auVar106._0_4_ <= fVar156);
                              fStack_e8 = (float)-(uint)(auVar106._8_4_ <= fVar170);
                              fStack_e4 = (float)-(uint)(auVar106._12_4_ <= fVar171);
                              _local_40 = rsqrtps(_local_f0,auVar106);
                              fVar195 = local_40._0_4_;
                              fVar98 = local_40._4_4_;
                              fVar123 = local_40._8_4_;
                              fVar126 = local_40._12_4_;
                              local_70 = 3.0 - fVar195 * auVar106._0_4_ * fVar195;
                              fStack_6c = 3.0 - fVar98 * auVar106._4_4_ * fVar98;
                              fStack_68 = 3.0 - fVar123 * auVar106._8_4_ * fVar123;
                              fStack_64 = 3.0 - fVar126 * auVar106._12_4_ * fVar126;
                              fVar195 = (fVar156 -
                                        (float)(~-(uint)(auVar106._0_4_ <= fVar156) &
                                               (uint)(local_70 * fVar195 * 0.5 * auVar106._0_4_))) +
                                        local_310._0_4_;
                              iVar30 = 1;
                              auVar107._0_4_ = (float)local_a0._0_4_ * auVar164._0_4_;
                              auVar107._4_4_ = (float)local_a0._4_4_ * auVar164._4_4_;
                              auVar107._8_4_ = fStack_98 * auVar164._8_4_;
                              auVar107._12_4_ = fStack_94 * auVar164._12_4_;
                              if (fVar195 < auVar107._0_4_ && fVar156 <= fVar195) {
                                auVar56 = rcpps(auVar107,auVar164);
                                fVar195 = (2.0 - auVar56._0_4_ * auVar164._0_4_) * auVar56._0_4_ *
                                          fVar195;
                                fVar98 = (2.0 - auVar56._4_4_ * auVar164._4_4_) * auVar56._4_4_ *
                                         ((fVar169 -
                                          (float)(~-(uint)(auVar106._4_4_ <= fVar169) &
                                                 (uint)(fStack_6c * fVar98 * 0.5 * auVar106._4_4_)))
                                         + local_310._4_4_);
                                local_a0._4_4_ = fVar98;
                                local_a0._0_4_ = fVar195;
                                fVar123 = (2.0 - auVar56._8_4_ * auVar164._8_4_) * auVar56._8_4_ *
                                          ((fVar170 -
                                           (float)(~-(uint)(auVar106._8_4_ <= fVar170) &
                                                  (uint)(fStack_68 * fVar123 * 0.5 * auVar106._8_4_)
                                                  )) + local_310._8_4_);
                                fVar126 = (2.0 - auVar56._12_4_ * auVar164._12_4_) * auVar56._12_4_
                                          * ((fVar171 -
                                             (float)(~-(uint)(auVar106._12_4_ <= fVar171) &
                                                    (uint)(fStack_64 * fVar126 * 0.5 *
                                                          auVar106._12_4_))) + local_310._12_4_);
                                fStack_98 = fVar123;
                                fStack_94 = fVar126;
                                fVar125 = (fVar195 * fVar125 + local_490) - fVar156;
                                fVar122 = (fVar98 * fVar122 + fStack_48c) - fVar169;
                                fVar124 = (fVar123 * fVar124 + fStack_488) - fVar170;
                                fVar195 = fVar125 * fVar125;
                                fVar98 = fVar122 * fVar122;
                                fVar123 = fVar124 * fVar124;
                                auVar181._4_4_ = fVar195;
                                auVar181._0_4_ = fVar195;
                                auVar181._8_4_ = fVar195;
                                auVar181._12_4_ = fVar195;
                                auVar165._0_4_ = fVar98 + fVar195 + fVar123;
                                auVar165._4_4_ = fVar98 + fVar195 + fVar123;
                                auVar165._8_4_ = fVar98 + fVar195 + fVar123;
                                auVar165._12_4_ = fVar98 + fVar195 + fVar123;
                                auVar56 = rsqrtps(auVar181,auVar165);
                                fVar195 = auVar56._0_4_;
                                fVar98 = auVar56._4_4_;
                                fVar123 = auVar56._8_4_;
                                fVar151 = auVar56._12_4_;
                                local_150 = (undefined1  [4])
                                            ((float)(~-(uint)(auVar165._0_4_ <= fVar156) &
                                                    (uint)((3.0 - fVar195 * auVar165._0_4_ * fVar195
                                                           ) * fVar195 * (float)uVar31)) * fVar125);
                                afStack_14c[0] =
                                     (float)(~-(uint)(auVar165._4_4_ <= fVar169) &
                                            (uint)((3.0 - fVar98 * auVar165._4_4_ * fVar98) *
                                                  fVar98 * (float)uVar53)) * fVar122;
                                afStack_14c[1] =
                                     (float)(~-(uint)(auVar165._8_4_ <= fVar170) &
                                            (uint)((3.0 - fVar123 * auVar165._8_4_ * fVar123) *
                                                  fVar123 * fVar191)) * fVar124;
                                afStack_14c[2] =
                                     (float)(~-(uint)(auVar165._12_4_ <= fVar171) &
                                            (uint)((3.0 - fVar151 * auVar165._12_4_ * fVar151) *
                                                  fVar151 * fVar193)) *
                                     ((fVar126 * 1.0 + fStack_484) - local_170);
                                break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  uStack_1c8 = uVar4;
                  local_1d0 = uVar221;
                  iVar30 = 0;
                  break;
                case 4:
                  pfVar33 = (float *)(uint)(uVar5 >> 8);
                  if (1 < uVar5 >> 8) {
                    pfVar33 = (float *)0x2;
                  }
                  uVar32 = (uint)puVar2[1];
                  uVar24 = uVar5 >> 4 & 3;
                  local_24 = pfVar33;
                  if ((uVar5 >> 4 & 3) == 0) {
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      pfVar36 = local_1c0 + 0xc;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar73._8_8_ = 0;
                        auVar73._0_8_ = uVar128;
                        auVar74._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar74._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar74._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar74._10_6_ = 0;
                        auVar184._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar184._0_4_ = auVar184._4_4_;
                        auVar184._8_4_ = auVar184._4_4_;
                        auVar184._12_4_ = auVar184._4_4_;
                        auVar56 = auVar73 & _DAT_017e9c20 | auVar184 & _DAT_017e9c10 |
                                  auVar74 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        pfVar36[-4] = (float)auVar56._0_4_ * *(float *)pauVar6[1] +
                                      *(float *)*pauVar6;
                        pfVar36[-3] = (float)auVar56._4_4_ * fVar40 + fVar55;
                        pfVar36[-2] = (float)auVar56._8_4_ * fVar52 + fVar156;
                        pfVar36[-1] = (float)auVar56._12_4_ * fVar54 + fVar169;
                        uVar128 = *(ulonglong *)(iVar30 + 8 + iVar25 * 8);
                        auVar75._8_8_ = 0;
                        auVar75._0_8_ = uVar128;
                        auVar185._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar76._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar76._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar76._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar76._10_6_ = 0;
                        auVar185._0_4_ = auVar185._4_4_;
                        auVar185._8_4_ = auVar185._4_4_;
                        auVar185._12_4_ = auVar185._4_4_;
                        auVar56 = auVar75 & _DAT_017e9c20 | auVar185 & _DAT_017e9c10 |
                                  auVar76 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar56._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar40 + fVar55;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar52 + fVar156;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar54 + fVar169;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_1c0 + iVar25 * 4 + 8;
                      do {
                        uVar128 = *(ulonglong *)(iVar30 + iVar25 * 8);
                        auVar77._8_8_ = 0;
                        auVar77._0_8_ = uVar128;
                        auVar186._4_4_ = (uint)(uVar128 >> 0x2a);
                        auVar78._0_4_ = (uint)(uVar128 << 0x10) >> 5;
                        auVar78._4_4_ = (uint)(uVar128 >> 0x10) >> 5;
                        auVar78._8_2_ = (ushort)(uVar128 >> 0x35);
                        auVar78._10_6_ = 0;
                        auVar186._0_4_ = auVar186._4_4_;
                        auVar186._8_4_ = auVar186._4_4_;
                        auVar186._12_4_ = auVar186._4_4_;
                        auVar56 = auVar77 & _DAT_017e9c20 | auVar186 & _DAT_017e9c10 |
                                  auVar78 & _DAT_017e9c00;
                        fVar40 = *(float *)(pauVar6[1] + 4);
                        fVar52 = *(float *)(pauVar6[1] + 8);
                        fVar54 = *(float *)(pauVar6[1] + 0xc);
                        fVar55 = *(float *)(*pauVar6 + 4);
                        fVar156 = *(float *)(*pauVar6 + 8);
                        fVar169 = *(float *)(*pauVar6 + 0xc);
                        *pfVar36 = (float)auVar56._0_4_ * *(float *)pauVar6[1] + *(float *)*pauVar6;
                        pfVar36[1] = (float)auVar56._4_4_ * fVar40 + fVar55;
                        pfVar36[2] = (float)auVar56._8_4_ * fVar52 + fVar156;
                        pfVar36[3] = (float)auVar56._12_4_ * fVar54 + fVar169;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 1) {
                    local_6b0 = _DAT_01b249c0 * (local_120 - fVar40);
                    fStack_6ac = fRam01b249c4 * (fStack_11c - fVar52);
                    fStack_6a8 = fRam01b249c8 * (fStack_118 - fVar54);
                    fStack_6a4 = fRam01b249cc * (fStack_114 - fVar55);
                    iVar30 = *(int *)pauVar6[5] + uVar32 * 8;
                    iVar25 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      pfVar36 = local_1c0 + 0xc;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        pfVar36[-4] = (float)(uVar32 & 0x7ff) * local_6b0 + fVar40;
                        pfVar36[-3] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ac + fVar52;
                        pfVar36[-2] = (float)(uVar32 >> 0x16) * fStack_6a8 + fVar54;
                        pfVar36[-1] = fStack_6a4 * 0.0 + fVar55;
                        uVar32 = *(uint *)(iVar30 + 4 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6b0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ac + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6a8 + fVar54;
                        pfVar36[3] = fStack_6a4 * 0.0 + fVar55;
                        pfVar36 = pfVar36 + 8;
                        local_14 = pfVar36;
                        iVar25 = iVar25 + 2;
                      } while (iVar25 < (int)((int)pfVar33 + -1));
                    }
                    local_6c0 = fVar40;
                    fStack_6bc = fVar52;
                    fStack_6b8 = fVar54;
                    fStack_6b4 = fVar55;
                    if (iVar25 < (int)pfVar33) {
                      pfVar36 = local_1c0 + iVar25 * 4 + 8;
                      do {
                        uVar32 = *(uint *)(iVar30 + iVar25 * 4);
                        *pfVar36 = (float)(uVar32 & 0x7ff) * local_6b0 + fVar40;
                        pfVar36[1] = (float)(uVar32 >> 0xb & 0x7ff) * fStack_6ac + fVar52;
                        pfVar36[2] = (float)(uVar32 >> 0x16) * fStack_6a8 + fVar54;
                        pfVar36[3] = fStack_6a4 * 0.0 + fVar55;
                        iVar25 = iVar25 + 1;
                        pfVar36 = pfVar36 + 4;
                      } while (iVar25 < (int)pfVar33);
                    }
                  }
                  else if (uVar24 == 2) {
                    local_710 = _DAT_01b24c30 * (local_120 - fVar40);
                    fStack_70c = fRam01b24c34 * (fStack_11c - fVar52);
                    fStack_708 = fRam01b24c38 * (fStack_118 - fVar54);
                    fStack_704 = fRam01b24c3c * (fStack_114 - fVar55);
                    local_1c = (float *)(*(int *)pauVar6[5] + uVar32 * 8);
                    iVar30 = 0;
                    if (pfVar33 != (float *)0x1 && -1 < (int)((int)pfVar33 + -1)) {
                      local_20 = local_1c0 + 0xc;
                      do {
                        pfVar36 = local_1c;
                        pfVar33 = local_20;
                        uVar5 = *(ushort *)((int)local_1c + iVar30 * 2);
                        iVar30 = iVar30 + 2;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        local_20[-4] = (float)(int)uVar129 * local_710 + fVar40;
                        pfVar33[-3] = (float)(int)(uVar129 >> 0x20) * fStack_70c + fVar52;
                        pfVar33[-2] = (float)(int)(uVar128 >> 0x20) * fStack_708 + fVar54;
                        pfVar33[-1] = fStack_704 * 0.0 + fVar55;
                        pfVar33 = local_20;
                        uVar5 = *(ushort *)((int)pfVar36 + iVar30 * 2 + -2);
                        local_14 = (float *)(uint)(uVar5 >> 10);
                        local_20 = local_20 + 8;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *pfVar33 = (float)(int)uVar129 * local_710 + fVar40;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_70c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_708 + fVar54;
                        pfVar33[3] = fStack_704 * 0.0 + fVar55;
                      } while (iVar30 < (int)((int)local_24 + -1));
                    }
                    local_720 = fVar40;
                    fStack_71c = fVar52;
                    fStack_718 = fVar54;
                    fStack_714 = fVar55;
                    if (iVar30 < (int)local_24) {
                      local_14 = local_1c0 + iVar30 * 4 + 8;
                      do {
                        pfVar33 = local_14;
                        uVar5 = *(ushort *)((int)local_1c + iVar30 * 2);
                        local_20 = (float *)(uint)(uVar5 >> 10);
                        iVar30 = iVar30 + 1;
                        local_14 = local_14 + 4;
                        uVar128 = (ulonglong)CONCAT24(uVar5 >> 10,(uint)uVar5) & 0xffffffff0000001f;
                        uVar129 = (ulonglong)CONCAT24(uVar5 >> 5,(int)uVar128) & 0x1fffffffff;
                        *pfVar33 = (float)(int)uVar129 * local_710 + fVar40;
                        pfVar33[1] = (float)(int)(uVar129 >> 0x20) * fStack_70c + fVar52;
                        pfVar33[2] = (float)(int)(uVar128 >> 0x20) * fStack_708 + fVar54;
                        pfVar33[3] = fStack_704 * 0.0 + fVar55;
                      } while (iVar30 < (int)local_24);
                    }
                  }
                  else {
                    hkErrStream::hkErrStream(local_f20,0x200);
                    pcVar27 = " not implemented";
                    uVar32 = *(ushort *)
                              (*(int *)(pauVar6[5] + 4) +
                              (uint)*(byte *)((int)local_1c + *(int *)(pauVar6[4] + 8)) * 2) >> 4 &
                             3;
                    FUN_01018d00("Compression method #");
                    FUN_01018dc0(uVar32);
                    FUN_01018d00(pcVar27);
                    iVar30 = (**(code **)(*DAT_01f8fc58 + 0xc))
                                       (3,0x902f09ed,local_f20,
                                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/StaticMeshTree/hkcdStaticMeshTree.inl"
                                        ,0x1b3);
                    if (iVar30 != 0) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    hkBaseObject::hkBaseObject_38();
                    auVar41 = local_c0;
                  }
                  uVar32 = (uint)*(byte *)(local_44 * 4 + *(int *)(pauVar6[4] + 8));
                  local_168 = (float)((int)*(short *)(*(int *)(pauVar6[5] + 4) + 4 + uVar32 * 2) <<
                                     0x10);
                  local_16c = (float)((int)*(short *)(*(int *)(pauVar6[5] + 4) + 6 + uVar32 * 2) <<
                                     0x10);
                  local_5a0 = local_16c + local_168;
                  fStack_59c = local_16c + local_168;
                  fStack_598 = local_16c + local_168;
                  fStack_594 = local_16c + local_168;
                  fVar55 = local_1c0[0xc] - local_1c0[8];
                  fVar191 = local_1c0[0xd] - local_1c0[9];
                  fVar193 = local_1c0[0xe] - local_1c0[10];
                  local_e0 = 3.0;
                  fStack_dc = 3.0;
                  fStack_d8 = 3.0;
                  fStack_d4 = 3.0;
                  fVar40 = fVar55 * fVar55;
                  fVar52 = fVar191 * fVar191;
                  fVar54 = fVar193 * fVar193;
                  auVar166._4_4_ = fVar40;
                  auVar166._0_4_ = fVar40;
                  auVar166._8_4_ = fVar40;
                  auVar166._12_4_ = fVar40;
                  auVar108._0_4_ = fVar52 + fVar40 + fVar54;
                  auVar108._4_4_ = fVar52 + fVar40 + fVar54;
                  auVar108._8_4_ = fVar52 + fVar40 + fVar54;
                  auVar108._12_4_ = fVar52 + fVar40 + fVar54;
                  auVar56 = rsqrtps(auVar166,auVar108);
                  fVar156 = auVar41._0_4_;
                  fVar169 = auVar41._4_4_;
                  fVar170 = auVar41._8_4_;
                  fVar171 = auVar41._12_4_;
                  fStack_88 = 0.5;
                  local_90 = (undefined1  [8])0x3f0000003f000000;
                  fStack_84 = 0.5;
                  fVar40 = auVar56._0_4_;
                  fVar52 = auVar56._4_4_;
                  fVar54 = auVar56._8_4_;
                  fVar195 = auVar56._12_4_;
                  fVar40 = (float)(~-(uint)(auVar108._0_4_ <= fVar156) &
                                  (uint)((3.0 - fVar40 * auVar108._0_4_ * fVar40) * fVar40 * 0.5)) *
                           fVar55 * local_5a0;
                  fVar52 = (float)(~-(uint)(auVar108._4_4_ <= fVar169) &
                                  (uint)((3.0 - fVar52 * auVar108._4_4_ * fVar52) * fVar52 * 0.5)) *
                           fVar191 * fStack_59c;
                  fVar54 = (float)(~-(uint)(auVar108._8_4_ <= fVar170) &
                                  (uint)((3.0 - fVar54 * auVar108._8_4_ * fVar54) * fVar54 * 0.5)) *
                           fVar193 * fStack_598;
                  fVar55 = (float)(~-(uint)(auVar108._12_4_ <= fVar171) &
                                  (uint)((3.0 - fVar195 * auVar108._12_4_ * fVar195) * fVar195 * 0.5
                                        )) * (local_1c0[0xf] - local_1c0[0xb]) * fStack_594;
                  local_1c0[0xc] = local_1c0[0xc] + fVar40;
                  local_1c0[0xd] = local_1c0[0xd] + fVar52;
                  local_1c0[0xe] = local_1c0[0xe] + fVar54;
                  local_1c0[0xf] = local_1c0[0xf] + fVar55;
                  local_1c0[8] = local_1c0[8] - fVar40;
                  local_1c0[9] = local_1c0[9] - fVar52;
                  local_1c0[10] = local_1c0[10] - fVar54;
                  local_1c0[0xb] = local_1c0[0xb] - fVar55;
                  fVar191 = local_1c0[0xc] - local_1c0[8];
                  fVar193 = local_1c0[0xd] - local_1c0[9];
                  fVar195 = local_1c0[0xe] - local_1c0[10];
                  fVar40 = fVar191 * fVar191;
                  fVar52 = fVar193 * fVar193;
                  fVar54 = fVar195 * fVar195;
                  auVar167._4_4_ = fVar40;
                  auVar167._0_4_ = fVar40;
                  auVar167._8_4_ = fVar40;
                  auVar167._12_4_ = fVar40;
                  auVar109._0_4_ = fVar52 + fVar40 + fVar54;
                  auVar109._4_4_ = fVar52 + fVar40 + fVar54;
                  auVar109._8_4_ = fVar52 + fVar40 + fVar54;
                  auVar109._12_4_ = fVar52 + fVar40 + fVar54;
                  auVar56 = rsqrtps(auVar167,auVar109);
                  fVar40 = auVar56._0_4_;
                  fVar52 = auVar56._4_4_;
                  fVar54 = auVar56._8_4_;
                  fVar55 = auVar56._12_4_;
                  fVar191 = (float)(~-(uint)(auVar109._0_4_ <= fVar156) &
                                   (uint)((3.0 - fVar40 * auVar109._0_4_ * fVar40) * fVar40 * 0.5))
                            * fVar191;
                  fVar193 = (float)(~-(uint)(auVar109._4_4_ <= fVar169) &
                                   (uint)((3.0 - fVar52 * auVar109._4_4_ * fVar52) * fVar52 * 0.5))
                            * fVar193;
                  fVar195 = (float)(~-(uint)(auVar109._8_4_ <= fVar170) &
                                   (uint)((3.0 - fVar54 * auVar109._8_4_ * fVar54) * fVar54 * 0.5))
                            * fVar195;
                  fVar98 = (float)(~-(uint)(auVar109._12_4_ <= fVar171) &
                                  (uint)((3.0 - fVar55 * auVar109._12_4_ * fVar55) * fVar55 * 0.5))
                           * (local_1c0[0xf] - local_1c0[0xb]);
                  uVar221 = *(undefined8 *)(param_3 + 4);
                  uStack_2e8 = *(undefined8 *)(param_3 + 6);
                  uVar4 = *(undefined8 *)(param_3 + 8);
                  local_2f0._0_4_ = (float)uVar221;
                  local_2f0._4_4_ = (float)((ulonglong)uVar221 >> 0x20);
                  uStack_2f8 = *(undefined8 *)(param_3 + 10);
                  local_300._0_4_ = (float)uVar4;
                  local_300._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                  fVar40 = (local_2f0._4_4_ - local_1c0[9]) * fVar193 +
                           ((float)local_2f0 - local_1c0[8]) * fVar191 +
                           ((float)uStack_2e8 - local_1c0[10]) * fVar195;
                  fVar52 = (local_2f0._4_4_ - local_1c0[0xd]) * fVar193 +
                           ((float)local_2f0 - local_1c0[0xc]) * fVar191 +
                           ((float)uStack_2e8 - local_1c0[0xe]) * fVar195;
                  auVar79._8_4_ =
                       local_300._4_4_ * fVar193 + (float)local_300 * fVar191 +
                       (float)uStack_2f8 * fVar195;
                  auVar79._4_4_ = auVar79._8_4_;
                  auVar79._0_4_ = auVar79._8_4_;
                  auVar79._12_4_ = auVar79._8_4_;
                  uVar32 = -(uint)(fVar156 == auVar79._8_4_);
                  uVar35 = -(uint)(fVar169 == auVar79._8_4_);
                  uVar37 = -(uint)(fVar170 == auVar79._8_4_);
                  uVar38 = -(uint)(fVar171 == auVar79._8_4_);
                  auVar187._0_8_ = CONCAT44(uVar35,uVar32) & 0x3400000034000000;
                  auVar187._8_4_ = uVar37 & 0x34000000;
                  auVar187._12_4_ = uVar38 & 0x34000000;
                  auVar212._0_4_ = ~uVar32 & (uint)auVar79._8_4_;
                  auVar212._4_4_ = ~uVar35 & (uint)auVar79._8_4_;
                  auVar212._8_4_ = ~uVar37 & (uint)auVar79._8_4_;
                  auVar212._12_4_ = ~uVar38 & (uint)auVar79._8_4_;
                  auVar187 = auVar187 | auVar212;
                  fStack_a8 = 2.0;
                  local_b0 = (undefined1  [8])0x4000000040000000;
                  fStack_a4 = 2.0;
                  auVar56 = rcpps(auVar79,auVar187);
                  fVar54 = (2.0 - auVar56._0_4_ * auVar187._0_4_) * auVar56._0_4_;
                  fVar55 = (2.0 - auVar56._4_4_ * auVar187._4_4_) * auVar56._4_4_;
                  fVar123 = (2.0 - auVar56._8_4_ * auVar187._8_4_) * auVar56._8_4_;
                  fVar125 = (2.0 - auVar56._12_4_ * auVar187._12_4_) * auVar56._12_4_;
                  auVar80._0_4_ = ~uVar32 & (uint)((fVar156 - fVar40) * fVar54);
                  auVar80._4_4_ = ~uVar35 & (uint)((fVar169 - fVar40) * fVar55);
                  auVar80._8_4_ = ~uVar37 & (uint)((fVar170 - fVar40) * fVar123);
                  auVar80._12_4_ = ~uVar38 & (uint)((fVar171 - fVar40) * fVar125);
                  auVar110._0_4_ = ((uint)fVar40 & 0x80000000 ^ 0x7f7fffee) & uVar32;
                  auVar110._4_4_ = ((uint)fVar40 & 0x80000000 ^ 0x7f7fffee) & uVar35;
                  auVar110._8_4_ = ((uint)fVar40 & 0x80000000 ^ 0x7f7fffee) & uVar37;
                  auVar110._12_4_ = ((uint)fVar40 & 0x80000000 ^ 0x7f7fffee) & uVar38;
                  auVar80 = auVar80 | auVar110;
                  auVar139._0_4_ = ((uint)fVar52 & 0x80000000 ^ (uint)(float)DAT_01701ce0) & uVar32;
                  auVar139._4_4_ = ((uint)fVar52 & 0x80000000 ^ (uint)DAT_01701ce0._4_4_) & uVar35;
                  auVar139._8_4_ = ((uint)fVar52 & 0x80000000 ^ (uint)DAT_01701ce0._8_4_) & uVar37;
                  auVar139._12_4_ = ((uint)fVar52 & 0x80000000 ^ (uint)DAT_01701ce0._12_4_) & uVar38
                  ;
                  auVar111._0_4_ = ~uVar32 & (uint)((fVar156 - fVar52) * fVar54);
                  auVar111._4_4_ = ~uVar35 & (uint)((fVar169 - fVar52) * fVar55);
                  auVar111._8_4_ = ~uVar37 & (uint)((fVar170 - fVar52) * fVar123);
                  auVar111._12_4_ = ~uVar38 & (uint)((fVar171 - fVar52) * fVar125);
                  auVar111 = auVar111 | auVar139;
                  local_510 = maxps(auVar80,auVar111);
                  auVar56 = minps(auVar80,auVar111);
                  fVar123 = auVar56._0_4_;
                  uVar32 = local_50;
                  fVar40 = local_130;
                  fVar52 = fStack_12c;
                  fVar54 = fStack_128;
                  fVar55 = fStack_124;
                  local_300 = uVar4;
                  local_2f0 = uVar221;
                  if (fVar123 == local_510._0_4_) {
                    iVar30 = 0;
                  }
                  else {
                    local_4f0 = -(uint)(auVar80._0_4_ < auVar111._0_4_);
                    uStack_4ec = -(uint)(auVar80._4_4_ < auVar111._4_4_);
                    uStack_4e8 = -(uint)(auVar80._8_4_ < auVar111._8_4_);
                    uStack_4e4 = -(uint)(auVar80._12_4_ < auVar111._12_4_);
                    local_330 = local_4f0 & 0x80000000 ^ (uint)fVar191;
                    uStack_32c = uStack_4ec & 0x80000000 ^ (uint)fVar193;
                    uStack_328 = uStack_4e8 & 0x80000000 ^ (uint)fVar195;
                    uStack_324 = uStack_4e4 & 0x80000000 ^ (uint)fVar98;
                    local_1e0 = *(undefined8 *)(param_3 + 4);
                    uVar22 = local_1e0;
                    uStack_1d8 = *(undefined8 *)(param_3 + 6);
                    uVar23 = uStack_1d8;
                    local_1f0 = *(undefined8 *)(param_3 + 8);
                    local_1e0._4_4_ = (float)((ulonglong)local_1e0 >> 0x20);
                    uStack_1d8._4_4_ = (float)((ulonglong)uStack_1d8 >> 0x20);
                    fVar125 = (float)local_1e0 - local_1c0[8];
                    fVar122 = local_1e0._4_4_ - local_1c0[9];
                    fVar124 = (float)uStack_1d8 - local_1c0[10];
                    uVar221 = local_1f0;
                    uStack_1e8 = *(undefined8 *)(param_3 + 10);
                    uVar4 = uStack_1e8;
                    local_1f0._4_4_ = (float)((ulonglong)local_1f0 >> 0x20);
                    uStack_1e8._4_4_ = (float)((ulonglong)uStack_1e8 >> 0x20);
                    local_580 = (float)local_1f0 * fVar191;
                    fStack_57c = local_1f0._4_4_ * fVar193;
                    fStack_578 = (float)uStack_1e8 * fVar195;
                    fStack_574 = uStack_1e8._4_4_ * fVar98;
                    local_4c0 = fVar125 * fVar191;
                    fStack_4bc = fVar122 * fVar193;
                    fStack_4b8 = fVar124 * fVar195;
                    fStack_4b4 = (uStack_1d8._4_4_ - local_1c0[0xb]) * fVar98;
                    fVar126 = (float)uStack_1e8 * (float)uStack_1e8 +
                              local_1f0._4_4_ * local_1f0._4_4_ +
                              (float)local_1f0 * (float)local_1f0;
                    fVar151 = fStack_578 + fStack_57c + local_580;
                    fVar153 = (float)uStack_1e8 * fVar124 +
                              local_1f0._4_4_ * fVar122 + (float)local_1f0 * fVar125;
                    local_2e0 = fStack_4b8 + fStack_4bc + local_4c0;
                    fVar125 = fVar125 * fVar125;
                    fVar122 = fVar122 * fVar122;
                    fVar124 = fVar124 * fVar124;
                    auVar112._0_4_ = fVar126 - fVar151 * fVar151;
                    auVar112._4_4_ = fVar126 - fVar151 * fVar151;
                    auVar112._8_4_ = fVar126 - fVar151 * fVar151;
                    auVar112._12_4_ = fVar126 - fVar151 * fVar151;
                    fVar126 = fVar153 - local_2e0 * fVar151;
                    fVar192 = fVar153 - local_2e0 * fVar151;
                    fVar194 = fVar153 - local_2e0 * fVar151;
                    fVar153 = fVar153 - local_2e0 * fVar151;
                    local_40._0_4_ =
                         (((fVar122 + fVar125 + fVar124) - local_2e0 * local_2e0) -
                         local_5a0 * local_5a0) * auVar112._0_4_;
                    local_40._4_4_ =
                         (((fVar122 + fVar125 + fVar124) - local_2e0 * local_2e0) -
                         fStack_59c * fStack_59c) * auVar112._4_4_;
                    fStack_38 = (((fVar122 + fVar125 + fVar124) - local_2e0 * local_2e0) -
                                fStack_598 * fStack_598) * auVar112._8_4_;
                    fStack_34 = (((fVar122 + fVar125 + fVar124) - local_2e0 * local_2e0) -
                                fStack_594 * fStack_594) * auVar112._12_4_;
                    auVar140._0_4_ = fVar126 * fVar126 - (float)local_40._0_4_;
                    auVar140._4_4_ = fVar192 * fVar192 - (float)local_40._4_4_;
                    auVar140._8_4_ = fVar194 * fVar194 - fStack_38;
                    auVar140._12_4_ = fVar153 * fVar153 - fStack_34;
                    fStack_2dc = local_2e0;
                    fStack_2d8 = local_2e0;
                    fStack_2d4 = local_2e0;
                    local_1f0 = uVar221;
                    uStack_1e8 = uVar4;
                    local_1e0 = uVar22;
                    uStack_1d8 = uVar23;
                    if (fVar156 <= auVar140._0_4_) {
                      if (1.1920929e-07 <= auVar112._0_4_) {
                        local_f0._4_4_ = -(uint)(auVar140._4_4_ <= fVar169);
                        local_f0._0_4_ = -(uint)(auVar140._0_4_ <= fVar156);
                        fStack_e8 = (float)-(uint)(auVar140._8_4_ <= fVar170);
                        fStack_e4 = (float)-(uint)(auVar140._12_4_ <= fVar171);
                        _local_40 = rsqrtps(_local_f0,auVar140);
                        fVar125 = local_40._0_4_;
                        fVar122 = local_40._4_4_;
                        fVar124 = local_40._8_4_;
                        fVar151 = local_40._12_4_;
                        local_70 = 3.0 - fVar125 * auVar140._0_4_ * fVar125;
                        fStack_6c = 3.0 - fVar122 * auVar140._4_4_ * fVar122;
                        fStack_68 = 3.0 - fVar124 * auVar140._8_4_ * fVar124;
                        fStack_64 = 3.0 - fVar151 * auVar140._12_4_ * fVar151;
                        auVar213._0_4_ = fVar125 * 0.5;
                        auVar213._4_4_ = fVar122 * 0.5;
                        auVar213._8_4_ = fVar124 * 0.5;
                        auVar213._12_4_ = fVar151 * 0.5;
                        fVar127 = (float)(~-(uint)(auVar140._0_4_ <= fVar156) &
                                         (uint)(local_70 * auVar213._0_4_ * auVar140._0_4_));
                        fVar152 = (float)(~-(uint)(auVar140._4_4_ <= fVar169) &
                                         (uint)(fStack_6c * auVar213._4_4_ * auVar140._4_4_));
                        fVar154 = (float)(~-(uint)(auVar140._8_4_ <= fVar170) &
                                         (uint)(fStack_68 * auVar213._8_4_ * auVar140._8_4_));
                        fVar155 = (float)(~-(uint)(auVar140._12_4_ <= fVar171) &
                                         (uint)(fStack_64 * auVar213._12_4_ * auVar140._12_4_));
                        auVar158 = rcpps(auVar213,auVar112);
                        fVar125 = (2.0 - auVar112._0_4_ * auVar158._0_4_) * auVar158._0_4_;
                        fVar122 = (2.0 - auVar112._4_4_ * auVar158._4_4_) * auVar158._4_4_;
                        fVar124 = (2.0 - auVar112._8_4_ * auVar158._8_4_) * auVar158._8_4_;
                        fVar151 = (2.0 - auVar112._12_4_ * auVar158._12_4_) * auVar158._12_4_;
                        auVar141._0_4_ = (fVar127 - fVar126) * fVar125;
                        auVar141._4_4_ = (fVar152 - fVar192) * fVar122;
                        auVar141._8_4_ = (fVar154 - fVar194) * fVar124;
                        auVar141._12_4_ = (fVar155 - fVar153) * fVar151;
                        auVar81._0_8_ =
                             CONCAT44((fVar169 - (fVar152 + fVar192)) * fVar122,
                                      (fVar156 - (fVar127 + fVar126)) * fVar125);
                        auVar81._8_4_ = (fVar170 - (fVar154 + fVar194)) * fVar124;
                        auVar81._12_4_ = (fVar171 - (fVar155 + fVar153)) * fVar151;
                        auVar188._8_4_ = auVar81._8_4_;
                        auVar188._0_8_ = auVar81._0_8_;
                        auVar188._12_4_ = auVar81._12_4_;
                        auVar158 = maxps(auVar81,auVar141);
                        auVar189 = minps(auVar188,auVar141);
                        fVar126 = (auVar189._0_4_ * (float)local_1f0 + (float)local_1e0) -
                                  local_1c0[8];
                        fVar151 = (auVar189._4_4_ * local_1f0._4_4_ + local_1e0._4_4_) -
                                  local_1c0[9];
                        fVar153 = (auVar189._8_4_ * (float)uStack_1e8 + (float)uStack_1d8) -
                                  local_1c0[10];
                        fVar125 = fVar191 * fVar126;
                        fVar122 = fVar193 * fVar151;
                        fVar124 = fVar195 * fVar153;
                        fVar126 = fVar126 - (fVar122 + fVar125 + fVar124) * fVar191;
                        fVar151 = fVar151 - (fVar122 + fVar125 + fVar124) * fVar193;
                        fVar153 = fVar153 - (fVar122 + fVar125 + fVar124) * fVar195;
                        fVar191 = fVar126 * fVar126;
                        fVar193 = fVar151 * fVar151;
                        fVar195 = fVar153 * fVar153;
                        auVar182._4_4_ = fVar191;
                        auVar182._0_4_ = fVar191;
                        auVar182._8_4_ = fVar191;
                        auVar182._12_4_ = fVar191;
                        auVar142._0_4_ = fVar193 + fVar191 + fVar195;
                        auVar142._4_4_ = fVar193 + fVar191 + fVar195;
                        auVar142._8_4_ = fVar193 + fVar191 + fVar195;
                        auVar142._12_4_ = fVar193 + fVar191 + fVar195;
                        auVar132 = rsqrtps(auVar182,auVar142);
                        fVar191 = auVar132._0_4_;
                        fVar193 = auVar132._4_4_;
                        fVar195 = auVar132._8_4_;
                        fVar192 = auVar132._12_4_;
                        uVar35 = -(uint)(auVar189._0_4_ < fVar123);
                        uVar37 = -(uint)(auVar189._4_4_ < auVar56._4_4_);
                        uVar38 = -(uint)(auVar189._8_4_ < auVar56._8_4_);
                        uVar39 = -(uint)(auVar189._12_4_ < auVar56._12_4_);
                        auVar214._0_4_ =
                             ~uVar35 & (uint)((float)(~-(uint)(auVar142._0_4_ <= fVar156) &
                                                     (uint)(fVar191 * 0.5 *
                                                           (3.0 - fVar191 * auVar142._0_4_ * fVar191
                                                           ))) * fVar126);
                        auVar214._4_4_ =
                             ~uVar37 & (uint)((float)(~-(uint)(auVar142._4_4_ <= fVar169) &
                                                     (uint)(fVar193 * 0.5 *
                                                           (3.0 - fVar193 * auVar142._4_4_ * fVar193
                                                           ))) * fVar151);
                        auVar214._8_4_ =
                             ~uVar38 & (uint)((float)(~-(uint)(auVar142._8_4_ <= fVar170) &
                                                     (uint)(fVar195 * 0.5 *
                                                           (3.0 - fVar195 * auVar142._8_4_ * fVar195
                                                           ))) * fVar153);
                        auVar214._12_4_ =
                             ~uVar39 & (uint)((float)(~-(uint)(auVar142._12_4_ <= fVar171) &
                                                     (uint)(fVar192 * 0.5 *
                                                           (3.0 - fVar192 * auVar142._12_4_ *
                                                                  fVar192))) *
                                             (((auVar189._12_4_ * uStack_1e8._4_4_ +
                                               uStack_1d8._4_4_) - local_1c0[0xb]) -
                                             (fVar122 + fVar125 + fVar124) * fVar98));
                        auVar113._0_4_ = local_330 & uVar35;
                        auVar113._4_4_ = uStack_32c & uVar37;
                        auVar113._8_4_ = uStack_328 & uVar38;
                        auVar113._12_4_ = uStack_324 & uVar39;
                        _local_150 = auVar113 | auVar214;
                        local_5f0 = auVar158;
                      }
                      else {
                        fVar191 = ((float)local_1f0 * fVar123 + (float)local_1e0) -
                                  (float)(~local_4f0 & (uint)local_1c0[0xc] |
                                         local_4f0 & (uint)local_1c0[8]);
                        fVar193 = (local_1f0._4_4_ * auVar56._4_4_ + local_1e0._4_4_) -
                                  (float)(~uStack_4ec & (uint)local_1c0[0xd] |
                                         uStack_4ec & (uint)local_1c0[9]);
                        fVar195 = ((float)uStack_1e8 * auVar56._8_4_ + (float)uStack_1d8) -
                                  (float)(~uStack_4e8 & (uint)local_1c0[0xe] |
                                         uStack_4e8 & (uint)local_1c0[10]);
                        if (local_5a0 * local_5a0 <
                            fVar193 * fVar193 + fVar191 * fVar191 + fVar195 * fVar195) {
                          iVar30 = 0;
                          break;
                        }
                        afStack_14c[0] = (float)uStack_32c;
                        local_150 = (undefined1  [4])local_330;
                        afStack_14c[1] = (float)uStack_328;
                        afStack_14c[2] = (float)uStack_324;
                        auVar189._0_4_ = fVar156 - (float)DAT_01701ce0;
                        auVar189._4_4_ = fVar169 - DAT_01701ce0._4_4_;
                        auVar189._8_4_ = fVar170 - DAT_01701ce0._8_4_;
                        auVar189._12_4_ = fVar171 - DAT_01701ce0._12_4_;
                        auVar158 = _DAT_01701ce0;
                      }
                      auVar158 = minps(local_510,auVar158);
                      auVar56 = maxps(auVar56,auVar189);
                      fVar191 = auVar56._0_4_;
                      fVar193 = auVar56._4_4_;
                      fVar195 = auVar56._8_4_;
                      fVar98 = auVar56._12_4_;
                      auVar82._0_4_ =
                           -(uint)((fVar191 <= auVar158._0_4_ && fVar156 <= fVar191) &&
                                  fVar191 < (float)local_a0._0_4_);
                      auVar82._4_4_ =
                           -(uint)((fVar193 <= auVar158._4_4_ && fVar169 <= fVar193) &&
                                  fVar193 < (float)local_a0._4_4_);
                      auVar82._8_4_ =
                           -(uint)((fVar195 <= auVar158._8_4_ && fVar170 <= fVar195) &&
                                  fVar195 < fStack_98);
                      auVar82._12_4_ =
                           -(uint)((fVar98 <= auVar158._12_4_ && fVar171 <= fVar98) &&
                                  fVar98 < fStack_94);
                      auVar183._0_4_ = ~auVar82._0_4_ & local_a0._0_4_;
                      auVar183._4_4_ = ~auVar82._4_4_ & local_a0._4_4_;
                      auVar183._8_4_ = ~auVar82._8_4_ & (uint)fStack_98;
                      auVar183._12_4_ = ~auVar82._12_4_ & (uint)fStack_94;
                      auVar143._0_4_ = auVar82._0_4_ & (uint)fVar191;
                      auVar143._4_4_ = auVar82._4_4_ & (uint)fVar193;
                      auVar143._8_4_ = auVar82._8_4_ & (uint)fVar195;
                      auVar143._12_4_ = auVar82._12_4_ & (uint)fVar98;
                      _local_a0 = auVar183 | auVar143;
                      iVar30 = movmskps(param_3,auVar82);
                    }
                    else {
                      iVar30 = 0;
                    }
                  }
                  break;
                default:
                  hkErrStream::hkErrStream(local_d20,0x200);
                  FUN_01018d00("Not implemented");
                  iVar30 = (**(code **)(*DAT_01f8fc58 + 0xc))
                                     (3,0x93d510b9,local_d20,
                                      "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Physics/Internal/Collide/BvCompressedMesh/hkpBvCompressedMeshShapeInternals.inl"
                                      ,0x20f);
                  if (iVar30 != 0) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  hkBaseObject::hkBaseObject_38();
                  auVar41 = local_c0;
                  fVar40 = local_130;
                  fVar52 = fStack_12c;
                  fVar54 = fStack_128;
                  fVar55 = fStack_124;
                  goto LAB_01265a2d;
                }
LAB_01265a27:
                local_15 = iVar30 != 0;
LAB_01265a2d:
                if (local_15 != false) {
                  if (*(int *)(pauVar6[9] + 4) == 0) {
                    *(uint *)(pauVar6[7] + 8) = uVar32;
                    *(undefined1 (*) [4])pauVar6[8] = local_150;
                    *(float *)(pauVar6[8] + 4) = afStack_14c[0];
                    *(float *)(pauVar6[8] + 8) = afStack_14c[1];
                    *(float *)(pauVar6[8] + 0xc) = afStack_14c[2];
                    auVar121._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 8),0);
                    auVar121._12_4_ = fStack_94;
                    *(undefined1 (*) [16])(param_3 + 8) = auVar121;
                  }
                  else {
                    local_3c0 = local_a0._0_4_;
                    fVar40 = (float)local_150 * (float)local_150;
                    fVar52 = afStack_14c[0] * afStack_14c[0];
                    fVar54 = afStack_14c[1] * afStack_14c[1];
                    auVar150._4_4_ = fVar40;
                    auVar150._0_4_ = fVar40;
                    auVar150._8_4_ = fVar40;
                    auVar150._12_4_ = fVar40;
                    auVar119._0_4_ = fVar52 + fVar40 + fVar54;
                    auVar119._4_4_ = fVar52 + fVar40 + fVar54;
                    auVar119._8_4_ = fVar52 + fVar40 + fVar54;
                    auVar119._12_4_ = fVar52 + fVar40 + fVar54;
                    auVar56 = rsqrtps(auVar150,auVar119);
                    fVar40 = auVar56._0_4_;
                    fVar52 = auVar56._4_4_;
                    fVar54 = auVar56._8_4_;
                    fVar55 = auVar56._12_4_;
                    local_3bc = 0xffffffff;
                    pfVar33 = *(float **)(*(int *)pauVar6[9] + 8);
                    local_150 = (undefined1  [4])
                                ((float)(~-(uint)(auVar119._0_4_ <= auVar41._0_4_) &
                                        (uint)((3.0 - fVar40 * auVar119._0_4_ * fVar40) *
                                              fVar40 * 0.5)) * (float)local_150);
                    afStack_14c[0] =
                         (float)(~-(uint)(auVar119._4_4_ <= auVar41._4_4_) &
                                (uint)((3.0 - fVar52 * auVar119._4_4_ * fVar52) * fVar52 * 0.5)) *
                         afStack_14c[0];
                    afStack_14c[1] =
                         (float)(~-(uint)(auVar119._8_4_ <= auVar41._8_4_) &
                                (uint)((3.0 - fVar54 * auVar119._8_4_ * fVar54) * fVar54 * 0.5)) *
                         afStack_14c[1];
                    afStack_14c[2] =
                         (float)(~-(uint)(auVar119._12_4_ <= auVar41._12_4_) &
                                (uint)((3.0 - fVar55 * auVar119._12_4_ * fVar55) * fVar55 * 0.5)) *
                         afStack_14c[2];
                    fVar55 = afStack_14c[0] * pfVar33[4] + (float)local_150 * *pfVar33 +
                             afStack_14c[1] * pfVar33[8];
                    fVar156 = afStack_14c[0] * pfVar33[5] + (float)local_150 * pfVar33[1] +
                              afStack_14c[1] * pfVar33[9];
                    fVar169 = afStack_14c[0] * pfVar33[6] + (float)local_150 * pfVar33[2] +
                              afStack_14c[1] * pfVar33[10];
                    fVar40 = fVar55 * (float)param_3[8];
                    fVar52 = fVar156 * (float)param_3[9];
                    fVar54 = fVar169 * (float)param_3[10];
                    local_3d0 = -(uint)(auVar41._0_4_ < fVar52 + fVar40 + fVar54) & 0x80000000 ^
                                (uint)fVar55;
                    uStack_3cc = -(uint)(auVar41._4_4_ < fVar52 + fVar40 + fVar54) & 0x80000000 ^
                                 (uint)fVar156;
                    uStack_3c8 = -(uint)(auVar41._8_4_ < fVar52 + fVar40 + fVar54) & 0x80000000 ^
                                 (uint)fVar169;
                    uStack_3c4 = -(uint)(auVar41._12_4_ < fVar52 + fVar40 + fVar54) & 0x80000000 ^
                                 (uint)(afStack_14c[0] * pfVar33[7] + (float)local_150 * pfVar33[3]
                                       + afStack_14c[1] * pfVar33[0xb]);
                    local_1f4 = *(int *)pauVar6[9];
                    local_1f8 = *(undefined4 *)(local_1f4 + 8);
                    local_200 = (**(code **)(*(int *)(*(int *)pauVar6[7] + 0x14) + 0x14))
                                          (uVar32,local_1520);
                    local_1fc = uVar32;
                    (**(code **)**(undefined4 **)(pauVar6[9] + 4))(&local_200,&local_3d0);
                    auVar120._0_12_ = SUB1612(*(undefined1 (*) [16])(param_3 + 8),0);
                    auVar120._12_4_ = *(undefined4 *)(*(int *)(pauVar6[9] + 4) + 4);
                    *(undefined1 (*) [16])(param_3 + 8) = auVar120;
                    auVar41 = local_c0;
                    fVar40 = local_130;
                    fVar52 = fStack_12c;
                    fVar54 = fStack_128;
                    fVar55 = fStack_124;
                  }
                }
LAB_01265ba7:
                local_4c = local_4c + 1;
              } while ((int)local_4c < iStack_174);
            }
          }
          else {
            local_430 = iVar30 + 1;
            local_3f0 = (*(byte *)(iVar25 + 3) & 0xfe) + iVar30;
            local_420 = (undefined4 *)(*param_1 + local_430 * 4);
            local_3e0 = (uint *)(*param_1 + local_3f0 * 4);
            uVar32 = *local_3e0;
            uVar31 = *local_420;
            auVar8[0xc] = (char)(uVar32 >> 0x18);
            auVar8._0_12_ = ZEXT712(0);
            uVar17 = CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar32 >> 0x10));
            auVar20._5_8_ = 0;
            auVar20._0_5_ = uVar17;
            Var18 = CONCAT72(SUB137(auVar20 << 0x40,6),(ushort)(byte)(uVar32 >> 8));
            auVar100._0_4_ = uVar32 & 0xff;
            auVar100._4_9_ = Var18;
            auVar100._13_3_ = 0;
            bVar96 = (byte)((uint)uVar31 >> 0x18);
            uVar95 = (undefined1)((uint)uVar31 >> 8);
            uVar128 = (ulonglong)CONCAT12(uVar95,(short)uVar31) & 0xffffffffffff00ff;
            auVar9._8_4_ = 0;
            auVar9._0_8_ = uVar128;
            auVar9[0xc] = bVar96;
            auVar10[8] = (char)((uint)uVar31 >> 0x10);
            auVar10._0_8_ = uVar128;
            auVar10[9] = 0;
            auVar10._10_3_ = auVar9._10_3_;
            auVar19._5_8_ = 0;
            auVar19._0_5_ = auVar10._8_5_;
            auVar11[4] = uVar95;
            auVar11._0_4_ = (uint)uVar128;
            auVar11[5] = 0;
            auVar11._6_7_ = SUB137(auVar19 << 0x40,6);
            auVar57._0_4_ = (uint)uVar128 & 0xffff;
            auVar57._4_9_ = auVar11._4_9_;
            auVar57._13_3_ = 0;
            fVar40 = (local_120 - local_130) * 0.0044247787;
            fVar52 = (fStack_11c - fStack_12c) * 0.0044247787;
            fVar54 = (fStack_118 - fStack_128) * 0.0044247787;
            fVar55 = (fStack_114 - fStack_124) * 0.0044247787;
            fVar191 = (float)(auVar11._4_4_ >> 4);
            fVar193 = (float)(auVar10._8_4_ >> 4);
            fVar195 = (float)(bVar96 >> 4);
            auVar100 = auVar100 & _DAT_01b34560;
            auVar41 = auVar57 & _DAT_01b34560;
            fVar156 = (float)(uVar32 >> 4 & 0xf);
            fVar169 = (float)((uint)Var18 >> 4);
            fVar170 = (float)((uint)uVar17 >> 4);
            fVar171 = (float)(uint3)(auVar8._10_3_ >> 0x14);
            local_450._0_4_ =
                 (float)(auVar57._0_4_ >> 4) * (float)(auVar57._0_4_ >> 4) * fVar40 + local_130;
            local_450._4_4_ = fVar191 * fVar191 * fVar52 + fStack_12c;
            local_450._8_4_ = fVar193 * fVar193 * fVar54 + fStack_128;
            local_450._12_4_ = fVar195 * fVar195 * fVar55 + fStack_124;
            local_440 = local_120 - (float)auVar41._0_4_ * (float)auVar41._0_4_ * fVar40;
            fStack_43c = fStack_11c - (float)auVar41._4_4_ * (float)auVar41._4_4_ * fVar52;
            fStack_438 = fStack_118 - (float)auVar41._8_4_ * (float)auVar41._8_4_ * fVar54;
            fStack_434 = fStack_114 - (float)auVar41._12_4_ * (float)auVar41._12_4_ * fVar55;
            local_400 = local_120 - (float)auVar100._0_4_ * (float)auVar100._0_4_ * fVar40;
            fStack_3fc = fStack_11c - (float)auVar100._4_4_ * (float)auVar100._4_4_ * fVar52;
            fStack_3f8 = fStack_118 - (float)auVar100._8_4_ * (float)auVar100._8_4_ * fVar54;
            fStack_3f4 = fStack_114 - (float)auVar100._12_4_ * (float)auVar100._12_4_ * fVar55;
            local_410._0_4_ = fVar156 * fVar156 * fVar40 + local_130;
            local_410._4_4_ = fVar169 * fVar169 * fVar52 + fStack_12c;
            local_410._8_4_ = fVar170 * fVar170 * fVar54 + fStack_128;
            local_410._12_4_ = fVar171 * fVar171 * fVar55 + fStack_124;
            fVar40 = (float)param_3[4];
            fVar52 = (float)param_3[5];
            fVar54 = (float)param_3[6];
            fVar55 = (float)param_3[7];
            local_500 = param_3[0xb];
            fVar156 = (float)param_3[0xc];
            fVar169 = (float)param_3[0xd];
            fVar170 = (float)param_3[0xe];
            fVar171 = (float)param_3[0xf];
            auVar101._0_8_ =
                 CONCAT44(fVar169 * (local_450._4_4_ - fVar52),fVar156 * (local_450._0_4_ - fVar40))
            ;
            auVar101._8_4_ = fVar170 * (local_450._8_4_ - fVar54);
            auVar101._12_4_ = fVar171 * (local_450._12_4_ - fVar55);
            auVar172._0_4_ = fVar156 * (local_440 - fVar40);
            auVar172._4_4_ = fVar169 * (fStack_43c - fVar52);
            auVar172._8_4_ = fVar170 * (fStack_438 - fVar54);
            auVar172._12_4_ = fVar171 * (fStack_434 - fVar55);
            auVar42._8_4_ = auVar101._8_4_;
            auVar42._0_8_ = auVar101._0_8_;
            auVar42._12_4_ = auVar101._12_4_;
            auVar41 = minps(auVar42,auVar172);
            auVar158 = maxps(auVar101,auVar172);
            uVar31 = auVar41._4_4_;
            uVar53 = auVar41._8_4_;
            auVar173._4_4_ = uVar53;
            auVar173._0_4_ = uVar53;
            auVar173._8_4_ = uVar53;
            auVar173._12_4_ = uVar53;
            auVar196._4_4_ = uVar31;
            auVar196._0_4_ = uVar31;
            auVar196._8_4_ = uVar31;
            auVar196._12_4_ = uVar31;
            auVar41 = maxps(auVar41,_DAT_01701b10);
            auVar56 = maxps(auVar196,auVar173);
            auVar41 = maxps(auVar41,auVar56);
            auVar133._0_8_ =
                 CONCAT44(fVar169 * (local_410._4_4_ - fVar52),fVar156 * (local_410._0_4_ - fVar40))
            ;
            auVar133._8_4_ = fVar170 * (local_410._8_4_ - fVar54);
            auVar133._12_4_ = fVar171 * (local_410._12_4_ - fVar55);
            auVar174._4_4_ = fVar169 * (fStack_3fc - fVar52);
            auVar174._0_4_ = fVar156 * (local_400 - fVar40);
            auVar174._8_4_ = fVar170 * (fStack_3f8 - fVar54);
            auVar174._12_4_ = fVar171 * (fStack_3f4 - fVar55);
            auVar58._8_4_ = auVar133._8_4_;
            auVar58._0_8_ = auVar133._0_8_;
            auVar58._12_4_ = auVar133._12_4_;
            auVar132 = maxps(auVar133,auVar174);
            auVar56 = minps(auVar58,auVar174);
            uVar31 = auVar56._4_4_;
            uVar53 = auVar56._8_4_;
            auVar175._4_4_ = uVar53;
            auVar175._0_4_ = uVar53;
            auVar175._8_4_ = uVar53;
            auVar175._12_4_ = uVar53;
            auVar197._4_4_ = uVar31;
            auVar197._0_4_ = uVar31;
            auVar197._8_4_ = uVar31;
            auVar197._12_4_ = uVar31;
            auVar56 = maxps(auVar56,_DAT_01701b10);
            auVar198 = maxps(auVar197,auVar175);
            auVar56 = maxps(auVar56,auVar198);
            uVar31 = auVar132._4_4_;
            uVar53 = auVar132._8_4_;
            auVar199._4_4_ = uVar31;
            auVar199._0_4_ = uVar31;
            auVar199._8_4_ = uVar31;
            auVar199._12_4_ = uVar31;
            auVar176._4_4_ = uVar53;
            auVar176._0_4_ = uVar53;
            auVar176._8_4_ = uVar53;
            auVar176._12_4_ = uVar53;
            auVar12._4_4_ = local_500;
            auVar12._0_4_ = local_500;
            auVar12._8_4_ = local_500;
            auVar12._12_4_ = local_500;
            auVar132 = minps(auVar132,auVar12);
            auVar198 = minps(auVar199,auVar176);
            auVar132 = minps(auVar132,auVar198);
            auVar200._4_4_ = -(uint)(auVar56._4_4_ <= auVar132._4_4_);
            auVar200._0_4_ = -(uint)(auVar56._0_4_ <= auVar132._0_4_);
            auVar200._8_4_ = -(uint)(auVar56._8_4_ <= auVar132._8_4_);
            auVar200._12_4_ = -(uint)(auVar56._12_4_ <= auVar132._12_4_);
            uVar32 = movmskps(local_420,auVar200);
            uVar31 = auVar158._4_4_;
            uVar53 = auVar158._8_4_;
            auVar134._4_4_ = uVar53;
            auVar134._0_4_ = uVar53;
            auVar134._8_4_ = uVar53;
            auVar134._12_4_ = uVar53;
            auVar201._4_4_ = uVar31;
            auVar201._0_4_ = uVar31;
            auVar201._8_4_ = uVar31;
            auVar201._12_4_ = uVar31;
            auVar13._4_4_ = local_500;
            auVar13._0_4_ = local_500;
            auVar13._8_4_ = local_500;
            auVar13._12_4_ = local_500;
            auVar158 = minps(auVar158,auVar13);
            auVar132 = minps(auVar201,auVar134);
            auVar158 = minps(auVar158,auVar132);
            auVar135._4_4_ = -(uint)(auVar41._4_4_ <= auVar158._4_4_);
            auVar135._0_4_ = -(uint)(auVar41._0_4_ <= auVar158._0_4_);
            auVar135._8_4_ = -(uint)(auVar41._8_4_ <= auVar158._8_4_);
            auVar135._12_4_ = -(uint)(auVar41._12_4_ <= auVar158._12_4_);
            uVar35 = movmskps(*param_1,auVar135);
            uVar32 = (uVar32 & 1) * 2 | uVar35 & 1;
            uStack_4fc = local_500;
            uStack_4f8 = local_500;
            uStack_4f4 = local_500;
            if (uVar32 == 3) {
              param_3[0x10] = (uint)(auVar56._0_4_ < auVar41._0_4_);
LAB_01262b55:
                    /* WARNING: Could not recover jumptable at 0x01262b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(&DAT_01265c6c + uVar32 * 4))();
              return;
            }
            if (uVar32 < 4) goto LAB_01262b55;
          }
          iVar30 = param_2[1];
          if (iVar30 <= local_164) break;
          param_2[1] = iVar30 + -1;
          local_110 = *(int *)(*param_2 + -0x10 + iVar30 * 0x30);
          local_100 = *param_1 + local_110 * 4;
          FUN_010915a0(*param_2 + -0x30 + iVar30 * 0x30);
          iVar30 = local_110;
          iVar25 = local_100;
        } while( true );
      }
      piVar34 = (int *)((int)local_c4 + 1);
      local_c4 = piVar34;
    } while ((int)piVar34 < 1);
  }
  return;
}

