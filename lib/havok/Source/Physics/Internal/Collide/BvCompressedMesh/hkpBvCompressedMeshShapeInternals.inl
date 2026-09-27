// lib/havok/Source/Physics/Internal/Collide/BvCompressedMesh/hkpBvCompressedMeshShapeInternals.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01237E70..01237E70, 1 functions

#include "mgrr.h"
#include "hkpSingleShapeContainer.h"

// 01237E70  hkpSingleShapeContainer::hkpSingleShapeContainer_11  size=2224  [__FILE__]
void __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_11(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  LPVOID pvVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  uint *puVar18;
  float *pfVar19;
  float10 fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  char *pcVar32;
  undefined1 local_360 [512];
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_c0;
  float local_a0;
  undefined **local_9c;
  int local_98;
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
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  local_18 = param_1;
  (**(code **)(**(int **)(param_1 + 4) + 0x20))(param_2,&local_20,&local_e0);
  pfVar19 = (float *)(*(int *)(param_1 + 4) + 0x10);
  if (3.40282e+38 < *pfVar19 || *pfVar19 == 3.40282e+38) {
    param_3[0xe] = 1;
  }
  else {
    param_3[0xe] = 3;
    param_3[0xd] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  }
  hkpConvexTransformShape::hkpConvexTransformShape(local_20,&local_e0,1);
  local_1c = (float)(uint)*(byte *)((int)local_20 + 8);
  local_24 = local_a0;
  local_50 = local_a0;
  fStack_4c = local_a0;
  fStack_48 = local_a0;
  fStack_44 = local_a0;
  if (((local_1c == 5.60519e-45) || (local_1c == 1.4013e-45)) || (local_1c == 0.0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((local_a0 != *(float *)(*(int *)(param_1 + 4) + 8)) || (bVar6)) {
    iVar14 = param_3[0xc];
    local_14 = local_a0;
    param_3[0xc] = iVar14 + 1;
    *(short *)((int)param_3 + iVar14 * 2 + 0x28) = (short)((uint)local_a0 >> 0x10);
  }
  switch(local_1c) {
  case 0.0:
    if (*(int *)(*(int *)(param_1 + 8) + param_2 * 4) == 0) {
      pvVar9 = TlsGetValue(DAT_01f8fc4c);
      pfVar12 = (float *)(**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x30);
      pfVar19 = (float *)0x0;
      if (pfVar12 != (float *)0x0) {
        pfVar12[8] = 0.0;
        pfVar12[9] = 0.0;
        pfVar12[10] = -0.0;
        *pfVar12 = 3.40282e+38;
        pfVar12[1] = 3.40282e+38;
        pfVar12[2] = 3.40282e+38;
        pfVar12[3] = 3.40282e+38;
        pfVar12[4] = -*pfVar12;
        pfVar12[5] = -pfVar12[1];
        pfVar12[6] = -pfVar12[2];
        pfVar12[7] = -pfVar12[3];
        pfVar19 = pfVar12;
      }
      pfVar12 = pfVar19 + 8;
      *(float **)(*(int *)(local_18 + 8) + param_2 * 4) = pfVar19;
      if (pfVar19[9] == (float)((uint)pfVar19[10] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,pfVar12,0x10);
      }
      puVar13 = (undefined4 *)((int)pfVar19[9] * 0x10 + (int)*pfVar12);
      *puVar13 = local_e0;
      puVar13[1] = uStack_dc;
      puVar13[2] = uStack_d8;
      puVar13[3] = uStack_d4;
      pfVar19[9] = (float)((int)pfVar19[9] + 1);
      pfVar12 = (float *)*pfVar12;
      fVar21 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar24 = pfVar12[3];
      *pfVar19 = *pfVar12 - local_50;
      pfVar19[1] = fVar21 - fStack_4c;
      pfVar19[2] = fVar23 - fStack_48;
      pfVar19[3] = fVar24 - fStack_44;
      fVar21 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar24 = pfVar12[3];
      pfVar19[4] = *pfVar12 + local_50;
      pfVar19[5] = fVar21 + fStack_4c;
      pfVar19[6] = fVar23 + fStack_48;
      pfVar19[7] = fVar24 + fStack_44;
      param_1 = local_18;
    }
    param_3[9] = 2;
    break;
  case 1.4013e-45:
    local_50 = ABS(local_c0);
    local_14 = local_20;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fVar20 = (float10)FUN_0112c400();
    local_1c = (float)(fVar20 * (float10)local_50);
    if (*(int *)(*(int *)(param_1 + 8) + param_2 * 4) == 0) {
      pvVar9 = TlsGetValue(DAT_01f8fc4c);
      puVar11 = (uint *)(**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x30);
      puVar18 = (uint *)0x0;
      if (puVar11 != (uint *)0x0) {
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0x80000000;
        *puVar11 = 0x7f7fffee;
        puVar11[1] = 0x7f7fffee;
        puVar11[2] = 0x7f7fffee;
        puVar11[3] = 0x7f7fffee;
        puVar11[4] = *puVar11 ^ 0x80000000;
        puVar11[5] = puVar11[1] ^ 0x80000000;
        puVar11[6] = puVar11[2] ^ 0x80000000;
        puVar11[7] = puVar11[3] ^ 0x80000000;
        puVar18 = puVar11;
      }
      *(uint **)(*(int *)(param_1 + 8) + param_2 * 4) = puVar18;
      FUN_01023d50(&PTR_vftable_018e9b94,(int)local_14 + 0x20,2);
      iVar14 = 0;
      if (0 < (int)puVar18[9]) {
        iVar16 = 0;
        do {
          pfVar19 = (float *)(puVar18[8] + iVar16);
          fVar21 = (*pfVar19 - fStack_84) * local_60 + local_70 * *pfVar19;
          fVar23 = (pfVar19[1] - fStack_64) * fStack_5c + fStack_6c * pfVar19[1];
          fVar24 = (pfVar19[2] - fStack_54) * fStack_58 + fStack_68 * pfVar19[2];
          fVar25 = (pfVar19[3] - 0.0) * fStack_54 + fStack_64 * pfVar19[3];
          fVar26 = local_80 * fVar21;
          fVar28 = fStack_7c * fVar23;
          fVar29 = fStack_78 * fVar24;
          fVar30 = (fVar28 + fVar26 + fVar29) * local_80 + (fStack_74 * fStack_74 + -0.5) * fVar21 +
                   (fStack_7c * fVar24 - fStack_78 * fVar23) * fStack_74;
          fVar31 = (fVar28 + fVar26 + fVar29) * fStack_7c + (fStack_74 * fStack_74 + -0.5) * fVar23
                   + (fStack_78 * fVar21 - local_80 * fVar24) * fStack_74;
          fVar21 = (fVar28 + fVar26 + fVar29) * fStack_78 + (fStack_74 * fStack_74 + -0.5) * fVar24
                   + (local_80 * fVar23 - fStack_7c * fVar21) * fStack_74;
          fVar23 = (fVar28 + fVar26 + fVar29) * fStack_74 + (fStack_74 * fStack_74 + -0.5) * fVar25
                   + (fStack_74 * fVar25 - fStack_74 * fVar25) * fStack_74;
          pfVar19 = (float *)(puVar18[8] + iVar16);
          *pfVar19 = fVar30 + fVar30 + local_90;
          pfVar19[1] = fVar31 + fVar31 + fStack_8c;
          pfVar19[2] = fVar21 + fVar21 + fStack_88;
          pfVar19[3] = fVar23 + fVar23 + fStack_84;
          iVar14 = iVar14 + 1;
          iVar16 = iVar16 + 0x10;
        } while (iVar14 < (int)puVar18[9]);
      }
      hkpCylinderShape::hkpCylinderShape(puVar18[8],puVar18[8] + 0x10,local_1c,local_24);
      hkpCylinderShape::vf10(&DAT_01701ca0,0,puVar18);
      param_1 = local_18;
    }
    iVar14 = param_3[0xc];
    local_24 = local_1c;
    param_3[0xc] = iVar14 + 1;
    *(short *)((int)param_3 + iVar14 * 2 + 0x28) = (short)((uint)local_1c >> 0x10);
    param_3[9] = 4;
    break;
  default:
    hkErrStream::hkErrStream(local_360,0x200);
    pcVar32 = " not supported";
    fVar21 = local_1c;
    FUN_01018d00("Shape type ");
    FUN_01018dc0(fVar21);
    FUN_01018d00(pcVar32);
    iVar14 = (**(code **)(*DAT_01f8fc58 + 0xc))
                       (3,0x531b61c8,local_360,
                        "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Physics/Internal/Collide/BvCompressedMesh/hkpBvCompressedMeshShapeInternals.inl"
                        ,0xc6);
    if (iVar14 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hkBaseObject::hkBaseObject_38();
    break;
  case 4.2039e-45:
    if (*(int *)(*(int *)(param_1 + 8) + param_2 * 4) == 0) {
      pvVar9 = TlsGetValue(DAT_01f8fc4c);
      pauVar10 = (undefined1 (*) [16])(**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x30);
      pauVar17 = (undefined1 (*) [16])0x0;
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        *(undefined4 *)pauVar10[2] = 0;
        *(undefined4 *)(pauVar10[2] + 4) = 0;
        *(undefined4 *)(pauVar10[2] + 8) = 0x80000000;
        *(undefined4 *)*pauVar10 = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 4) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 8) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 0xc) = 0x7f7fffee;
        uVar7 = *(uint *)(*pauVar10 + 4);
        uVar8 = *(uint *)(*pauVar10 + 8);
        uVar2 = *(uint *)(*pauVar10 + 0xc);
        *(uint *)pauVar10[1] = *(uint *)*pauVar10 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 4) = uVar7 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 8) = uVar8 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 0xc) = uVar2 ^ 0x80000000;
        pauVar17 = pauVar10;
      }
      *(undefined1 (**) [16])(*(int *)(param_1 + 8) + param_2 * 4) = pauVar17;
      local_34 = 0x10000;
      local_30 = 0x30002;
      local_2c = 0x50004;
      local_28 = 0x70006;
      hkpConvexTransformShape::vf24(&local_34,8,local_160);
      auVar22 = *pauVar17;
      auVar27 = pauVar17[1];
      pauVar10 = (undefined1 (*) [16])local_160;
      iVar14 = 8;
      do {
        auVar22 = minps(auVar22,*pauVar10);
        *pauVar17 = auVar22;
        auVar27 = maxps(auVar27,*pauVar10);
        pauVar10 = pauVar10 + 1;
        iVar14 = iVar14 + -1;
        pauVar17[1] = auVar27;
      } while (iVar14 != 0);
      pauVar10 = pauVar17 + 2;
      uVar7 = *(uint *)(pauVar17[2] + 8) & 0x3fffffff;
      if (uVar7 < 4) {
        uVar8 = uVar7 * 2;
        if (uVar7 == 2 || uVar8 < 4) {
          uVar8 = 4;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,pauVar10,uVar8,0x10);
      }
      *(undefined4 *)(pauVar17[2] + 4) = 4;
      puVar13 = *(undefined4 **)*pauVar10;
      *puVar13 = local_f0;
      puVar13[1] = uStack_ec;
      puVar13[2] = uStack_e8;
      puVar13[3] = uStack_e4;
      iVar14 = *(int *)*pauVar10;
      *(undefined4 *)(iVar14 + 0x10) = local_100;
      *(undefined4 *)(iVar14 + 0x14) = uStack_fc;
      *(undefined4 *)(iVar14 + 0x18) = uStack_f8;
      *(undefined4 *)(iVar14 + 0x1c) = uStack_f4;
      iVar14 = *(int *)*pauVar10;
      *(undefined4 *)(iVar14 + 0x20) = local_110;
      *(undefined4 *)(iVar14 + 0x24) = uStack_10c;
      *(undefined4 *)(iVar14 + 0x28) = uStack_108;
      *(undefined4 *)(iVar14 + 0x2c) = uStack_104;
      iVar14 = *(int *)*pauVar10;
      *(undefined4 *)(iVar14 + 0x30) = local_130;
      *(undefined4 *)(iVar14 + 0x34) = uStack_12c;
      *(undefined4 *)(iVar14 + 0x38) = uStack_128;
      *(undefined4 *)(iVar14 + 0x3c) = uStack_124;
      fVar21 = *(float *)(pauVar17[1] + 4);
      fVar23 = *(float *)(pauVar17[1] + 8);
      fVar24 = *(float *)(pauVar17[1] + 0xc);
      *(float *)pauVar17[1] = *(float *)pauVar17[1] + local_50;
      *(float *)(pauVar17[1] + 4) = fVar21 + fStack_4c;
      *(float *)(pauVar17[1] + 8) = fVar23 + fStack_48;
      *(float *)(pauVar17[1] + 0xc) = fVar24 + fStack_44;
      fVar21 = *(float *)(*pauVar17 + 4);
      fVar23 = *(float *)(*pauVar17 + 8);
      fVar24 = *(float *)(*pauVar17 + 0xc);
      *(float *)*pauVar17 = *(float *)*pauVar17 - local_50;
      *(float *)(*pauVar17 + 4) = fVar21 - fStack_4c;
      *(float *)(*pauVar17 + 8) = fVar23 - fStack_48;
      *(float *)(*pauVar17 + 0xc) = fVar24 - fStack_44;
      param_1 = local_18;
    }
    param_3[9] = 0;
    break;
  case 5.60519e-45:
    local_14 = local_20;
    if (*(int *)(*(int *)(param_1 + 8) + param_2 * 4) == 0) {
      pvVar9 = TlsGetValue(DAT_01f8fc4c);
      pauVar10 = (undefined1 (*) [16])(**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x30);
      pauVar17 = (undefined1 (*) [16])0x0;
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        *(undefined4 *)pauVar10[2] = 0;
        *(undefined4 *)(pauVar10[2] + 4) = 0;
        *(undefined4 *)(pauVar10[2] + 8) = 0x80000000;
        *(undefined4 *)*pauVar10 = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 4) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 8) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 0xc) = 0x7f7fffee;
        uVar7 = *(uint *)(*pauVar10 + 4);
        uVar8 = *(uint *)(*pauVar10 + 8);
        uVar2 = *(uint *)(*pauVar10 + 0xc);
        *(uint *)pauVar10[1] = *(uint *)*pauVar10 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 4) = uVar7 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 8) = uVar8 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 0xc) = uVar2 ^ 0x80000000;
        pauVar17 = pauVar10;
      }
      *(undefined1 (**) [16])(*(int *)(param_1 + 8) + param_2 * 4) = pauVar17;
      FUN_01023d50(&PTR_vftable_018e9b94,(int)local_14 + 0x20,2);
      iVar14 = 0;
      if (0 < *(int *)(pauVar17[2] + 4)) {
        iVar16 = *(int *)pauVar17[2];
        iVar15 = 0;
        do {
          pfVar19 = (float *)(iVar15 + iVar16);
          fVar21 = (*pfVar19 - fStack_84) * local_60 + local_70 * *pfVar19;
          fVar23 = (pfVar19[1] - fStack_64) * fStack_5c + fStack_6c * pfVar19[1];
          fVar24 = (pfVar19[2] - fStack_54) * fStack_58 + fStack_68 * pfVar19[2];
          fVar25 = (pfVar19[3] - 0.0) * fStack_54 + fStack_64 * pfVar19[3];
          fVar26 = local_80 * fVar21;
          fVar28 = fStack_7c * fVar23;
          fVar29 = fStack_78 * fVar24;
          fVar30 = (fVar28 + fVar26 + fVar29) * local_80 + (fStack_74 * fStack_74 + -0.5) * fVar21 +
                   (fVar24 * fStack_7c - fVar23 * fStack_78) * fStack_74;
          fVar31 = (fVar28 + fVar26 + fVar29) * fStack_7c + (fStack_74 * fStack_74 + -0.5) * fVar23
                   + (fVar21 * fStack_78 - fVar24 * local_80) * fStack_74;
          fVar21 = (fVar28 + fVar26 + fVar29) * fStack_78 + (fStack_74 * fStack_74 + -0.5) * fVar24
                   + (fVar23 * local_80 - fVar21 * fStack_7c) * fStack_74;
          fVar23 = (fVar28 + fVar26 + fVar29) * fStack_74 + (fStack_74 * fStack_74 + -0.5) * fVar25
                   + (fVar25 * fStack_74 - fVar25 * fStack_74) * fStack_74;
          pfVar19 = (float *)(iVar15 + iVar16);
          *pfVar19 = fVar30 + fVar30 + local_90;
          pfVar19[1] = fVar31 + fVar31 + fStack_8c;
          pfVar19[2] = fVar21 + fVar21 + fStack_88;
          pfVar19[3] = fVar23 + fVar23 + fStack_84;
          iVar16 = *(int *)pauVar17[2];
          auVar22 = minps(*pauVar17,*(undefined1 (*) [16])(iVar15 + iVar16));
          *pauVar17 = auVar22;
          auVar22 = maxps(pauVar17[1],*(undefined1 (*) [16])(iVar15 + iVar16));
          iVar14 = iVar14 + 1;
          pauVar17[1] = auVar22;
          iVar15 = iVar15 + 0x10;
        } while (iVar14 < *(int *)(pauVar17[2] + 4));
      }
      fVar21 = *(float *)(pauVar17[1] + 4);
      fVar23 = *(float *)(pauVar17[1] + 8);
      fVar24 = *(float *)(pauVar17[1] + 0xc);
      *(float *)pauVar17[1] = local_50 + *(float *)pauVar17[1];
      *(float *)(pauVar17[1] + 4) = fStack_4c + fVar21;
      *(float *)(pauVar17[1] + 8) = fStack_48 + fVar23;
      *(float *)(pauVar17[1] + 0xc) = fStack_44 + fVar24;
      fVar21 = *(float *)(*pauVar17 + 4);
      fVar23 = *(float *)(*pauVar17 + 8);
      fVar24 = *(float *)(*pauVar17 + 0xc);
      *(float *)*pauVar17 = *(float *)*pauVar17 - local_50;
      *(float *)(*pauVar17 + 4) = fVar21 - fStack_4c;
      *(float *)(*pauVar17 + 8) = fVar23 - fStack_48;
      *(float *)(*pauVar17 + 0xc) = fVar24 - fStack_44;
    }
    param_3[9] = 3;
    break;
  case 7.00649e-45:
    local_14 = local_20;
    if (*(int *)(*(int *)(param_1 + 8) + param_2 * 4) == 0) {
      pvVar9 = TlsGetValue(DAT_01f8fc4c);
      pauVar10 = (undefined1 (*) [16])(**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x30);
      pauVar17 = (undefined1 (*) [16])0x0;
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        *(undefined4 *)pauVar10[2] = 0;
        *(undefined4 *)(pauVar10[2] + 4) = 0;
        *(undefined4 *)(pauVar10[2] + 8) = 0x80000000;
        *(undefined4 *)*pauVar10 = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 4) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 8) = 0x7f7fffee;
        *(undefined4 *)(*pauVar10 + 0xc) = 0x7f7fffee;
        uVar7 = *(uint *)(*pauVar10 + 4);
        uVar8 = *(uint *)(*pauVar10 + 8);
        uVar2 = *(uint *)(*pauVar10 + 0xc);
        *(uint *)pauVar10[1] = *(uint *)*pauVar10 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 4) = uVar7 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 8) = uVar8 ^ 0x80000000;
        *(uint *)(pauVar10[1] + 0xc) = uVar2 ^ 0x80000000;
        pauVar17 = pauVar10;
      }
      *(undefined1 (**) [16])(*(int *)(param_1 + 8) + param_2 * 4) = pauVar17;
      pauVar10 = pauVar17 + 2;
      FUN_01130a20(pauVar10);
      iVar14 = 0;
      if (0 < *(int *)(pauVar17[2] + 4)) {
        iVar16 = *(int *)*pauVar10;
        iVar15 = 0;
        do {
          pfVar19 = (float *)(iVar16 + iVar15);
          fVar21 = (*pfVar19 - fStack_84) * local_60 + *pfVar19 * local_70;
          fVar23 = (pfVar19[1] - fStack_64) * fStack_5c + pfVar19[1] * fStack_6c;
          fVar24 = (pfVar19[2] - fStack_54) * fStack_58 + pfVar19[2] * fStack_68;
          fVar25 = (pfVar19[3] - 0.0) * fStack_54 + pfVar19[3] * fStack_64;
          fVar26 = local_80 * fVar21;
          fVar28 = fStack_7c * fVar23;
          fVar29 = fStack_78 * fVar24;
          fVar30 = (fVar28 + fVar26 + fVar29) * local_80 + (fStack_74 * fStack_74 + -0.5) * fVar21 +
                   (fStack_7c * fVar24 - fStack_78 * fVar23) * fStack_74;
          fVar31 = (fVar28 + fVar26 + fVar29) * fStack_7c + (fStack_74 * fStack_74 + -0.5) * fVar23
                   + (fStack_78 * fVar21 - local_80 * fVar24) * fStack_74;
          fVar21 = (fVar28 + fVar26 + fVar29) * fStack_78 + (fStack_74 * fStack_74 + -0.5) * fVar24
                   + (local_80 * fVar23 - fStack_7c * fVar21) * fStack_74;
          fVar23 = (fVar28 + fVar26 + fVar29) * fStack_74 + (fStack_74 * fStack_74 + -0.5) * fVar25
                   + (fStack_74 * fVar25 - fStack_74 * fVar25) * fStack_74;
          pfVar19 = (float *)(iVar16 + iVar15);
          *pfVar19 = fVar30 + fVar30 + local_90;
          pfVar19[1] = fVar31 + fVar31 + fStack_8c;
          pfVar19[2] = fVar21 + fVar21 + fStack_88;
          pfVar19[3] = fVar23 + fVar23 + fStack_84;
          iVar16 = *(int *)*pauVar10;
          auVar22 = minps(*pauVar17,*(undefined1 (*) [16])(iVar16 + iVar15));
          *pauVar17 = auVar22;
          auVar22 = maxps(pauVar17[1],*(undefined1 (*) [16])(iVar16 + iVar15));
          iVar14 = iVar14 + 1;
          pauVar17[1] = auVar22;
          iVar15 = iVar15 + 0x10;
        } while (iVar14 < *(int *)(pauVar17[2] + 4));
      }
      fVar21 = *(float *)(pauVar17[1] + 4);
      fVar23 = *(float *)(pauVar17[1] + 8);
      fVar24 = *(float *)(pauVar17[1] + 0xc);
      *(float *)pauVar17[1] = *(float *)pauVar17[1] + local_50;
      *(float *)(pauVar17[1] + 4) = fVar21 + fStack_4c;
      *(float *)(pauVar17[1] + 8) = fVar23 + fStack_48;
      *(float *)(pauVar17[1] + 0xc) = fVar24 + fStack_44;
      fVar21 = *(float *)(*pauVar17 + 4);
      fVar23 = *(float *)(*pauVar17 + 8);
      fVar24 = *(float *)(*pauVar17 + 0xc);
      *(float *)*pauVar17 = *(float *)*pauVar17 - local_50;
      *(float *)(*pauVar17 + 4) = fVar21 - fStack_4c;
      *(float *)(*pauVar17 + 8) = fVar23 - fStack_48;
      *(float *)(*pauVar17 + 0xc) = fVar24 - fStack_44;
      param_1 = local_18;
    }
    param_3[9] = 1;
  }
  puVar13 = *(undefined4 **)(*(int *)(param_1 + 8) + param_2 * 4);
  uVar3 = puVar13[1];
  uVar4 = puVar13[2];
  uVar5 = puVar13[3];
  *param_3 = *puVar13;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  uVar3 = puVar13[5];
  uVar4 = puVar13[6];
  uVar5 = puVar13[7];
  param_3[4] = puVar13[4];
  param_3[5] = uVar3;
  param_3[6] = uVar4;
  param_3[7] = uVar5;
  param_3[8] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + param_2 * 4) + 0x24);
  local_9c = vftable;
  if (local_98 != 0) {
    FUN_010060a0();
  }
  return;
}

