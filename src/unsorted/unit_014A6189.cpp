// src/unsorted/unit_014A6189.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 014A6189..014A7B90, 25 functions

#include "types.h"

// 014A6189  FUN_014a6189  size=35  [run]
void FUN_014a6189(undefined4 *param_1)

{
  FUN_0149eb50(*param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

// 014A61AC  FUN_014a61ac  size=108  [run]
undefined4 FUN_014a61ac(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_4 = 0;
  FUN_0149ea70();
  uVar3 = param_2 + 7U & 0xfffffff8;
  FUN_0129432c(uVar3,0x28);
  iVar1 = FUN_014a05b0(*(int *)(param_1 + 4),0,uVar3 + 0x28,*(int *)(param_1 + 4) * 0xe00 + 0x400,
                       uVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(uVar3 + 4) = *(undefined4 *)(param_1 + 4);
    FUN_014a6189(uVar3);
    *param_4 = uVar3;
    uVar2 = 0;
  }
  else {
    FUN_0149ea90();
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}

// 014A622A  FUN_014a622a  size=2680  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_014a622a(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM0 [16];
  double in_XMM1_Qa;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  ulonglong in_XMM2_Qb;
  undefined1 auVar17 [16];
  longlong lVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar21;
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  dVar12 = in_XMM0._0_8_;
  dVar10 = (double)((ulonglong)dVar12 >> 0x2c);
  uVar1 = in_XMM0._6_2_;
  uVar3 = (SUB82(dVar10,0) & 0xff) + 1 & 0x1fe;
  dVar27 = (double)((ulonglong)dVar12 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)(&DAT_01830330 + uVar3 * 4);
  dVar11 = *(double *)(&DAT_01830330 + uVar3 * 4);
  dVar26 = *(double *)(&DAT_01830740 + uVar3 * 8);
  uVar7 = 0x7fef - uVar1;
  uVar2 = (ushort)((ulonglong)in_XMM1_Qa >> 0x30);
  uVar3 = in_XMM0._0_4_;
  uVar9 = in_XMM0._4_4_;
  if ((uVar1 - 0x10 | uVar7) < 0x80000000) {
    uVar7 = 0;
    uVar8 = 0x3fe7f;
LAB_014a62b0:
    uVar4 = ((ushort)((ulonglong)dVar27 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar24 = (double)((ulonglong)dVar12 & 0xfffffffffffff | DAT_01833bd0);
    dVar12 = (double)((ulonglong)dVar24 & 0xfffffffff8000000);
    in_XMM3._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar24 = dVar24 - dVar12;
    uVar5 = ((ushort)((ulonglong)(dVar27 * *(double *)(&DAT_01830f50 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar25 = dVar11 * *(double *)(&DAT_01830f50 + uVar4 * 4) *
             *(double *)(&DAT_01831b70 + uVar5 * 4);
    dVar27 = dVar27 * *(double *)(&DAT_01830f50 + uVar4 * 4) *
             *(double *)(&DAT_01831b70 + uVar5 * 4);
    dVar11 = (double)((ulonglong)dVar25 & 0xfffffffff8000000);
    dVar25 = dVar25 - dVar11;
    dVar26 = dVar26 + *(double *)(&DAT_01831360 + uVar4 * 8) +
             (double)(int)((longlong)dVar10 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_01832380 + uVar5 * 8) + dVar27 + -1.442694902420044;
    in_XMM3._0_8_ = 0xfffffffff8000000;
    uVar4 = (uint)(ushort)((ulonglong)dVar26 >> 0x30);
    dVar26 = dVar26 - ((((dVar27 - dVar11 * dVar12) - dVar12 * dVar25) - dVar11 * dVar24) -
                      dVar24 * dVar25);
    if ((uVar2 & 0x7ff0) < 0x7ff0) {
      iVar6 = ((uVar2 & 0x7ff0) - 0x3ff0) + (uVar4 & 0x7ff0);
      if (0x7fffffff < (0x40a0U - iVar6 | iVar6 - 0x3c70U)) {
        uVar3 = (ushort)((ulonglong)(in_XMM1_Qa * dVar26) >> 0x30) & 0x7ff0;
        uVar9 = uVar3 - 0x3c70;
        uVar3 = 0x40a0 - uVar3 | uVar9;
        if (0x7fffffff < uVar3) {
          if (0x7fffffff < uVar9) {
            return CONCAT44(uVar3,uVar9);
          }
          uVar9 = (uVar1 & 0x7ff0) - 0x3ff0;
          uVar3 = (uVar2 ^ uVar9) & 0x8000;
          if (uVar3 != 0) goto LAB_014a6be4;
          goto LAB_014a6c01;
        }
      }
      uVar3 = (uint)ROUND((double)((ulonglong)in_XMM1_Qa & 0xfffffffff8000000) *
                          (double)((ulonglong)dVar26 & 0xfffffffff8000000) * 128.0);
      uVar9 = 0x1ff7f - uVar3 | uVar3 + 0x1e1ff;
      if (0 < (int)uVar9) {
        return CONCAT44(0xbf80,(uVar3 & 0x7f) * 0x10);
      }
      if ((int)uVar3 < 1) {
        if ((int)uVar3 < -0x3fdff) {
LAB_014a6be4:
          return CONCAT44(uVar9,uVar3);
        }
        uVar3 = (uVar3 & 0xffffff80) + 0x3fe80;
      }
      else {
        if (0x3ffff < uVar3) {
LAB_014a6c01:
          return CONCAT44(uVar9,0xffef);
        }
        uVar3 = uVar3 - 0x80 & 0xffffff80;
      }
      uVar9 = ((int)-(uVar3 - 0x1ff80) >> 7) + 2;
      iVar6 = uVar9 + (uVar9 & 0x20);
      if ((int)(uVar3 - 0x1ff80) < 1) {
        return CONCAT44(iVar6,0xbf80);
      }
      return CONCAT44(iVar6,0xbf80);
    }
    auVar17._8_8_ = in_XMM2_Qb;
    auVar17._0_8_ = in_XMM1_Qa;
    if (uVar3 == 0) {
      uVar8 = 0;
      uVar5 = uVar9;
      if (uVar9 == 0x3ff00000) goto LAB_014a6a2c;
      uVar4 = uVar9;
      if (uVar9 == 0xbff00000) {
        auVar14._0_4_ = -(uint)((int)((ulonglong)in_XMM1_Qa & 0xfffffffffffff) == 0);
        auVar14._4_4_ = -(uint)((int)(((ulonglong)in_XMM1_Qa & 0xfffffffffffff) >> 0x20) == 0);
        auVar14._8_4_ = -(uint)((int)(in_XMM3._8_8_ & in_XMM2_Qb) == 0);
        auVar14._12_4_ = -(uint)((int)((in_XMM3._8_8_ & in_XMM2_Qb) >> 0x20) == 0);
        uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                               (ushort)((byte)(auVar14._12_4_ >> 7) & 1) << 0xc |
                               (ushort)((byte)(auVar14._12_4_ >> 0xf) & 1) << 0xd |
                               (ushort)((byte)(auVar14._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf);
        if (uVar8 == 0xff) {
          return 0xbff00000000000ff;
        }
        goto LAB_014a69fd;
      }
    }
  }
  else {
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar17._8_8_ = in_XMM2_Qb;
    auVar17._0_8_ = in_XMM1_Qa;
    uVar8 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
    if ((uVar8 & 0x7fffffff) < 0x7ff00000) {
      if (SUB84(in_XMM1_Qa,0) == 0 && ((ulonglong)in_XMM1_Qa & 0x7fffffff00000000) == 0) {
        return CONCAT44(uVar9,uVar3 | uVar9 & 0x7fffffff) & 0x7fffffffffffffff;
      }
      if ((int)uVar7 < 0) {
        uVar7 = 0x7fef - uVar7;
        auVar22._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar22._0_8_ = 0xfff0000000000000;
        iVar6 = ((uVar8 & 0x7fffffff) >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar21 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar16 = SUB168(auVar17 | auVar22,0) << uVar21;
        lVar20 = SUB168(auVar17 | auVar22,8) << uVar21;
        auVar18._0_4_ = -(uint)((int)lVar16 == 0);
        auVar18._4_4_ = -(uint)((int)((ulonglong)lVar16 >> 0x20) == 0);
        auVar18._8_4_ = -(uint)((int)lVar20 == 0);
        auVar18._12_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0);
        uVar5 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                               (ushort)((byte)(auVar18._12_4_ >> 7) & 1) << 0xc |
                               (ushort)((byte)(auVar18._12_4_ >> 0xf) & 1) << 0xd |
                               (ushort)((byte)(auVar18._12_4_ >> 0x17) & 1) << 0xe |
                              (ushort)(byte)(auVar18._12_4_ >> 0x1f) << 0xf);
        uVar4 = uVar7 & 0x7fff;
        uVar21 = auVar18._8_8_;
        if (0x7fef < uVar4) {
          auVar13._0_4_ = -(uint)((int)((ulonglong)dVar12 & 0xfffffffffffff) == 0);
          auVar13._4_4_ = -(uint)((int)(((ulonglong)dVar12 & 0xfffffffffffff) >> 0x20) == 0);
          auVar13._8_4_ = 0xffffffff;
          auVar13._12_4_ = 0xffffffff;
          uVar3 = uVar4;
          if ((byte)(SUB161(auVar13 >> 7,0) & 1 | (SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar13 >> 0x17,0) & 1) << 2 | (SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar13 >> 0x27,0) & 1) << 4 | (SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar13 >> 0x37,0) & 1) << 6 | SUB161(auVar13 >> 0x3f,0) << 7) != 0xff)
          goto LAB_014a688f;
          if ((uVar1 & 0x8000) != 0) {
            if (((uVar5 & 0xff) != 0xff) ||
               (uVar23 = (ulonglong)(((uVar8 & 0x7fffffff) >> 0x14) - 0x3f4),
               lVar16 = (longlong)in_XMM1_Qa << uVar23, lVar20 = uVar21 << uVar23,
               auVar19._0_4_ = -(uint)((int)lVar16 == 0),
               auVar19._4_4_ = -(uint)((int)((ulonglong)lVar16 >> 0x20) == 0),
               auVar19._8_4_ = -(uint)((int)lVar20 == 0),
               auVar19._12_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0),
               (byte)(SUB161(auVar19 >> 7,0) & 1 | (SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                      (SUB161(auVar19 >> 0x17,0) & 1) << 2 | (SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                      (SUB161(auVar19 >> 0x27,0) & 1) << 4 | (SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                      (SUB161(auVar19 >> 0x37,0) & 1) << 6 | SUB161(auVar19 >> 0x3f,0) << 7) == 0xff
               )) {
              uVar3 = uVar2 & 0x8000;
              if (((ulonglong)in_XMM1_Qa & 0x8000000000000000) != 0) {
                return CONCAT44(uVar7,(uint)uVar2) & 0x7fff00008000;
              }
              goto LAB_014a69f1;
            }
            uVar5 = uVar2 & 0x8000;
            if (((ulonglong)in_XMM1_Qa & 0x8000000000000000) == 0) {
              return CONCAT44(uVar7,(uint)uVar2) & 0x7fff00008000;
            }
            goto LAB_014a6835;
          }
          uVar3 = uVar2 & 0x8000;
          if (((ulonglong)in_XMM1_Qa & 0x8000000000000000) != 0) {
            return CONCAT44(uVar7,(uint)uVar2) & 0x7fff00008000;
          }
          goto LAB_014a69f1;
        }
        if ((uVar5 & 0xff) == 0xff) {
          uVar23 = (ulonglong)(((uVar8 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar16 = (longlong)in_XMM1_Qa << uVar23;
          lVar20 = uVar21 << uVar23;
          auVar17._0_4_ = -(uint)((int)lVar16 == 0);
          auVar17._4_4_ = -(uint)((int)((ulonglong)lVar16 >> 0x20) == in_XMM3._4_4_);
          auVar17._8_4_ = -(uint)((int)lVar20 == 0);
          auVar17._12_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar4) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar17._8_8_;
            goto LAB_014a62b0;
          }
          goto LAB_014a66b1;
        }
        uVar23 = (ulonglong)dVar12 >> 0x20;
        in_XMM2_Qb = uVar21 >> 0x20;
        uVar4 = uVar3 | uVar9 & 0x7fffffff;
        uVar7 = 0;
        uVar5 = 0;
        if (uVar4 != 0) {
          return CONCAT44(uVar9,uVar4) & 0x7fffffffffffffff;
        }
LAB_014a6737:
        dVar12 = dVar10;
        if ((uVar5 & 0x7fffffff) == 0) {
          uVar4 = uVar8 & 0x80000000;
          if (((ulonglong)in_XMM1_Qa & 0x8000000000000000) != 0) {
            uVar5 = uVar5 & uVar7 << 0xd;
            return CONCAT44(uVar5,uVar5) | 0x7ff0000000000000;
          }
          uVar5 = uVar5 & uVar7 << 0xd;
          if (uVar5 == 0) {
            return ((ulonglong)uVar8 & 0x80000000) << 0x20;
          }
LAB_014a6835:
          return CONCAT44(uVar4,uVar5);
        }
      }
      else {
        uVar7 = 0;
LAB_014a66b1:
        dVar27 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar17._8_8_;
        uVar23 = 0x3ff0000000000000;
        dVar10 = dVar12 * 1.8446744073709552e+19;
        uVar5 = uVar9;
        dVar12 = dVar10;
        if (uVar3 == 0) goto LAB_014a6737;
      }
      dVar10 = (double)((ulonglong)ABS(dVar12) >> 0x2c);
      uVar8 = (SUB82(dVar10,0) & 0xff) + 1 & 0x1fe;
      dVar27 = (double)((ulonglong)dVar27 & (ulonglong)dVar12 | uVar23) *
               *(double *)(&DAT_01830330 + uVar8 * 4);
      dVar11 = *(double *)(&DAT_01830330 + uVar8 * 4);
      dVar26 = *(double *)(&DAT_01830740 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_014a62b0;
    }
    uVar5 = uVar9 & 0x7fffffff;
    uVar7 = uVar9;
    uVar4 = uVar3;
    if ((0x7fefffff < uVar5) && ((0x7ff00000 < uVar5 || (uVar3 != 0)))) {
LAB_014a688f:
      return CONCAT44(uVar3,uVar5);
    }
  }
  uVar21 = auVar17._0_8_ & 0xfffffffffffff;
  uVar23 = in_XMM3._8_8_ & auVar17._8_8_;
  auVar15._0_4_ = -(uint)((int)uVar21 == 0);
  auVar15._4_4_ = -(uint)((int)(uVar21 >> 0x20) == 0);
  auVar15._8_4_ = -(uint)((int)uVar23 == 0);
  auVar15._12_4_ = -(uint)((int)(uVar23 >> 0x20) == 0);
  uVar8 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7);
  if (uVar8 != 0xff) {
LAB_014a69fd:
    return CONCAT44(uVar4,uVar8);
  }
  uVar8 = auVar17._6_2_ & 0x8000;
  uVar4 = uVar4 | uVar7 ^ 0xbff00000;
  uVar5 = 0;
  if (uVar4 != 0) {
    if ((auVar17._6_2_ & 0x8000) == 0) {
      uVar3 = uVar1 & 0x7ff0;
      if (uVar3 < 0x3ff0) {
        return CONCAT44(uVar4,(uint)uVar1) & 0xffffffff00007ff0;
      }
    }
    else {
      if (0x3fef < (uVar1 & 0x7ff0)) {
        return CONCAT44(uVar4,(uint)uVar1) & 0xffffffff00007ff0;
      }
      uVar4 = uVar9 & 0x7fffffff | uVar3;
      if (uVar4 == 0) {
        return 0x3ff0;
      }
    }
LAB_014a69f1:
    return CONCAT44(uVar4,uVar3);
  }
LAB_014a6a2c:
  return CONCAT44(uVar5,uVar8);
}

// 014A6CB0  FUN_014a6cb0  size=64  [run]
void FUN_014a6cb0(int param_1)

{
  FUN_01013a40(param_1);
  FUN_01013a40(param_1 + 0x60);
  FUN_01013a40(param_1 + 0x30);
  FUN_01013a40(param_1 + 0x90);
  return;
}

// 014A6CF0  FUN_014a6cf0  size=65  [run]
void FUN_014a6cf0(undefined4 param_1,int param_2)

{
  FUN_01013a40(param_2);
  FUN_01013a40(param_2 + 0x60);
  FUN_01013a40(param_2 + 0x30);
  FUN_01013a40(param_2 + 0x90);
  return;
}

// 014A6D40  FUN_014a6d40  size=188  [run]
void FUN_014a6d40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + fVar1;
  param_1[2] = param_1[2] + fVar2;
  param_1[3] = param_1[3] + fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = fVar1 + param_1[5];
  param_1[6] = fVar2 + param_1[6];
  param_1[7] = fVar3 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = fVar1 + param_1[9];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xb] = fVar3 + param_1[0xb];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] + param_2[0xc];
  param_1[0xd] = param_1[0xd] + fVar1;
  param_1[0xe] = param_1[0xe] + fVar2;
  param_1[0xf] = param_1[0xf] + fVar3;
  fVar1 = param_2[0x11];
  fVar2 = param_2[0x12];
  fVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10] + param_1[0x10];
  param_1[0x11] = fVar1 + param_1[0x11];
  param_1[0x12] = fVar2 + param_1[0x12];
  param_1[0x13] = fVar3 + param_1[0x13];
  fVar1 = param_2[0x15];
  fVar2 = param_2[0x16];
  fVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14] + param_1[0x14];
  param_1[0x15] = fVar1 + param_1[0x15];
  param_1[0x16] = fVar2 + param_1[0x16];
  param_1[0x17] = fVar3 + param_1[0x17];
  fVar1 = param_2[0x19];
  fVar2 = param_2[0x1a];
  fVar3 = param_2[0x1b];
  param_1[0x18] = param_2[0x18] + param_1[0x18];
  param_1[0x19] = fVar1 + param_1[0x19];
  param_1[0x1a] = fVar2 + param_1[0x1a];
  param_1[0x1b] = fVar3 + param_1[0x1b];
  fVar1 = param_2[0x1d];
  fVar2 = param_2[0x1e];
  fVar3 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c] + param_1[0x1c];
  param_1[0x1d] = fVar1 + param_1[0x1d];
  param_1[0x1e] = fVar2 + param_1[0x1e];
  param_1[0x1f] = fVar3 + param_1[0x1f];
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x23];
  param_1[0x20] = param_2[0x20] + param_1[0x20];
  param_1[0x21] = fVar1 + param_1[0x21];
  param_1[0x22] = fVar2 + param_1[0x22];
  param_1[0x23] = fVar3 + param_1[0x23];
  fVar1 = param_2[0x25];
  fVar2 = param_2[0x26];
  fVar3 = param_2[0x27];
  param_1[0x24] = param_1[0x24] + param_2[0x24];
  param_1[0x25] = param_1[0x25] + fVar1;
  param_1[0x26] = param_1[0x26] + fVar2;
  param_1[0x27] = param_1[0x27] + fVar3;
  fVar1 = param_2[0x29];
  fVar2 = param_2[0x2a];
  fVar3 = param_2[0x2b];
  param_1[0x28] = param_2[0x28] + param_1[0x28];
  param_1[0x29] = fVar1 + param_1[0x29];
  param_1[0x2a] = fVar2 + param_1[0x2a];
  param_1[0x2b] = fVar3 + param_1[0x2b];
  fVar1 = param_2[0x2d];
  fVar2 = param_2[0x2e];
  fVar3 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c] + param_1[0x2c];
  param_1[0x2d] = fVar1 + param_1[0x2d];
  param_1[0x2e] = fVar2 + param_1[0x2e];
  param_1[0x2f] = fVar3 + param_1[0x2f];
  return;
}

// 014A6E00  FUN_014a6e00  size=188  [run]
void FUN_014a6e00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar2;
  param_1[3] = param_1[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - fVar1;
  param_1[6] = param_1[6] - fVar2;
  param_1[7] = param_1[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_1[8] - param_2[8];
  param_1[9] = param_1[9] - fVar1;
  param_1[10] = param_1[10] - fVar2;
  param_1[0xb] = param_1[0xb] - fVar3;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] - param_2[0xc];
  param_1[0xd] = param_1[0xd] - fVar1;
  param_1[0xe] = param_1[0xe] - fVar2;
  param_1[0xf] = param_1[0xf] - fVar3;
  fVar1 = param_2[0x11];
  fVar2 = param_2[0x12];
  fVar3 = param_2[0x13];
  param_1[0x10] = param_1[0x10] - param_2[0x10];
  param_1[0x11] = param_1[0x11] - fVar1;
  param_1[0x12] = param_1[0x12] - fVar2;
  param_1[0x13] = param_1[0x13] - fVar3;
  fVar1 = param_2[0x15];
  fVar2 = param_2[0x16];
  fVar3 = param_2[0x17];
  param_1[0x14] = param_1[0x14] - param_2[0x14];
  param_1[0x15] = param_1[0x15] - fVar1;
  param_1[0x16] = param_1[0x16] - fVar2;
  param_1[0x17] = param_1[0x17] - fVar3;
  fVar1 = param_2[0x19];
  fVar2 = param_2[0x1a];
  fVar3 = param_2[0x1b];
  param_1[0x18] = param_1[0x18] - param_2[0x18];
  param_1[0x19] = param_1[0x19] - fVar1;
  param_1[0x1a] = param_1[0x1a] - fVar2;
  param_1[0x1b] = param_1[0x1b] - fVar3;
  fVar1 = param_2[0x1d];
  fVar2 = param_2[0x1e];
  fVar3 = param_2[0x1f];
  param_1[0x1c] = param_1[0x1c] - param_2[0x1c];
  param_1[0x1d] = param_1[0x1d] - fVar1;
  param_1[0x1e] = param_1[0x1e] - fVar2;
  param_1[0x1f] = param_1[0x1f] - fVar3;
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x23];
  param_1[0x20] = param_1[0x20] - param_2[0x20];
  param_1[0x21] = param_1[0x21] - fVar1;
  param_1[0x22] = param_1[0x22] - fVar2;
  param_1[0x23] = param_1[0x23] - fVar3;
  fVar1 = param_2[0x25];
  fVar2 = param_2[0x26];
  fVar3 = param_2[0x27];
  param_1[0x24] = param_1[0x24] - param_2[0x24];
  param_1[0x25] = param_1[0x25] - fVar1;
  param_1[0x26] = param_1[0x26] - fVar2;
  param_1[0x27] = param_1[0x27] - fVar3;
  fVar1 = param_2[0x29];
  fVar2 = param_2[0x2a];
  fVar3 = param_2[0x2b];
  param_1[0x28] = param_1[0x28] - param_2[0x28];
  param_1[0x29] = param_1[0x29] - fVar1;
  param_1[0x2a] = param_1[0x2a] - fVar2;
  param_1[0x2b] = param_1[0x2b] - fVar3;
  fVar1 = param_2[0x2d];
  fVar2 = param_2[0x2e];
  fVar3 = param_2[0x2f];
  param_1[0x2c] = param_1[0x2c] - param_2[0x2c];
  param_1[0x2d] = param_1[0x2d] - fVar1;
  param_1[0x2e] = param_1[0x2e] - fVar2;
  param_1[0x2f] = param_1[0x2f] - fVar3;
  return;
}

// 014A6EC0  FUN_014a6ec0  size=351  [run]
void FUN_014a6ec0(int param_1,int param_2,int param_3)

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
  float fVar19;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  int iVar38;
  
  pfVar35 = (float *)(param_1 + 0x20);
  pfVar34 = (float *)(param_2 + 0x10);
  iVar38 = 2;
  do {
    iVar37 = 2;
    pfVar36 = (float *)(param_3 + 0x80);
    do {
      fVar1 = pfVar36[-0x20];
      fVar2 = pfVar36[-0x1f];
      fVar3 = pfVar36[-0x1e];
      fVar4 = *pfVar34;
      fVar5 = pfVar34[1];
      fVar6 = pfVar34[2];
      fVar7 = pfVar34[3];
      fVar8 = pfVar34[-4];
      fVar9 = pfVar34[-3];
      fVar10 = pfVar34[-2];
      fVar11 = pfVar34[-1];
      fVar12 = pfVar34[4];
      fVar13 = pfVar34[5];
      fVar14 = pfVar34[6];
      fVar15 = pfVar34[7];
      fVar16 = pfVar36[-0x1c];
      fVar17 = pfVar36[-0x1b];
      fVar18 = pfVar36[-0x1a];
      fVar19 = pfVar36[-0x18];
      fVar20 = pfVar36[-0x17];
      fVar21 = pfVar36[-0x16];
      fVar22 = pfVar36[-8];
      fVar23 = pfVar36[-7];
      fVar24 = pfVar36[-6];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      pfVar35[-8] = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[-7] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[-6] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[-5] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      fVar22 = pfVar36[-4];
      fVar23 = pfVar36[-3];
      fVar24 = pfVar36[-2];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      pfVar35[-4] = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[-3] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[-2] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[-1] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      fVar22 = *pfVar36;
      fVar23 = pfVar36[1];
      fVar24 = pfVar36[2];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      *pfVar35 = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[1] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[2] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[3] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      pfVar35[-8] = pfVar35[-8] + fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
      pfVar35[-7] = pfVar35[-7] + fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
      pfVar35[-6] = pfVar35[-6] + fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
      pfVar35[-5] = pfVar35[-5] + fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
      pfVar35[-4] = pfVar35[-4] + fVar16 * fVar8 + fVar17 * fVar4 + fVar18 * fVar12;
      pfVar35[-3] = pfVar35[-3] + fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar13;
      pfVar35[-2] = pfVar35[-2] + fVar16 * fVar10 + fVar17 * fVar6 + fVar18 * fVar14;
      pfVar35[-1] = pfVar35[-1] + fVar16 * fVar11 + fVar17 * fVar7 + fVar18 * fVar15;
      *pfVar35 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + *pfVar35;
      pfVar35[1] = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + pfVar35[1];
      pfVar35[2] = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + pfVar35[2];
      pfVar35[3] = fVar19 * fVar11 + fVar20 * fVar7 + fVar21 * fVar15 + pfVar35[3];
      pfVar36 = pfVar36 + 0xc;
      pfVar35 = pfVar35 + 0xc;
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
    pfVar34 = pfVar34 + 0x18;
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  return;
}

// 014A7030  FUN_014a7030  size=207  [run]
void FUN_014a7030(float *param_1,float *param_2,float *param_3)

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
  float fVar19;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  fVar16 = param_3[4];
  fVar17 = param_3[5];
  fVar18 = param_3[6];
  fVar19 = param_2[0x11];
  fVar20 = param_2[0x12];
  fVar21 = param_2[0x13];
  fVar22 = param_2[0xd];
  fVar23 = param_2[0xe];
  fVar24 = param_2[0xf];
  fVar25 = param_2[0x15];
  fVar26 = param_2[0x16];
  fVar27 = param_2[0x17];
  *param_1 = fVar17 * param_2[0x10] + fVar16 * param_2[0xc] + fVar18 * param_2[0x14];
  param_1[1] = fVar17 * fVar19 + fVar16 * fVar22 + fVar18 * fVar25;
  param_1[2] = fVar17 * fVar20 + fVar16 * fVar23 + fVar18 * fVar26;
  param_1[3] = fVar17 * fVar21 + fVar16 * fVar24 + fVar18 * fVar27;
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar18 = param_3[2];
  fVar19 = param_2[0x1c];
  fVar20 = param_2[0x1d];
  fVar21 = param_2[0x1e];
  fVar22 = param_2[0x1f];
  fVar23 = param_2[0x18];
  fVar24 = param_2[0x19];
  fVar25 = param_2[0x1a];
  fVar26 = param_2[0x1b];
  fVar27 = param_2[0x20];
  fVar28 = param_2[0x21];
  fVar29 = param_2[0x22];
  fVar30 = param_2[0x23];
  fVar31 = param_3[4];
  fVar32 = param_3[5];
  fVar33 = param_3[6];
  fVar34 = param_2[0x29];
  fVar35 = param_2[0x2a];
  fVar36 = param_2[0x2b];
  fVar37 = param_2[0x25];
  fVar38 = param_2[0x26];
  fVar39 = param_2[0x27];
  fVar40 = param_2[0x2d];
  fVar41 = param_2[0x2e];
  fVar42 = param_2[0x2f];
  param_1[4] = fVar32 * param_2[0x28] + fVar31 * param_2[0x24] + fVar33 * param_2[0x2c];
  param_1[5] = fVar32 * fVar34 + fVar31 * fVar37 + fVar33 * fVar40;
  param_1[6] = fVar32 * fVar35 + fVar31 * fVar38 + fVar33 * fVar41;
  param_1[7] = fVar32 * fVar36 + fVar31 * fVar39 + fVar33 * fVar42;
  *param_1 = *param_1 + fVar2 * fVar4 + fVar1 * fVar8 + fVar3 * fVar12;
  param_1[1] = param_1[1] + fVar2 * fVar5 + fVar1 * fVar9 + fVar3 * fVar13;
  param_1[2] = param_1[2] + fVar2 * fVar6 + fVar1 * fVar10 + fVar3 * fVar14;
  param_1[3] = param_1[3] + fVar2 * fVar7 + fVar1 * fVar11 + fVar3 * fVar15;
  param_1[4] = fVar17 * fVar19 + fVar16 * fVar23 + fVar18 * fVar27 + param_1[4];
  param_1[5] = fVar17 * fVar20 + fVar16 * fVar24 + fVar18 * fVar28 + param_1[5];
  param_1[6] = fVar17 * fVar21 + fVar16 * fVar25 + fVar18 * fVar29 + param_1[6];
  param_1[7] = fVar17 * fVar22 + fVar16 * fVar26 + fVar18 * fVar30 + param_1[7];
  return;
}

// 014A7100  FUN_014a7100  size=515  [run]
void __thiscall FUN_014a7100(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float local_f0 [24];
  float local_90 [24];
  int local_30;
  int local_2c;
  int local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  pfVar12 = local_f0;
  for (iVar11 = 0x30; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar12 = *param_2;
    param_2 = param_2 + 1;
    pfVar12 = pfVar12 + 1;
  }
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_14 = (float *)(param_1 + 0x18);
  pfVar12 = local_90;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  local_30 = (int)param_1 - (int)pfVar12;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0;
  local_20 = local_f0;
  local_2c = 0;
  do {
    local_1c = 0;
    local_24 = local_20;
    iVar11 = local_2c;
    do {
      pfVar3 = local_14;
      iVar10 = local_30;
      fVar14 = 1.0 / *local_24;
      pfVar12[-0x18] = pfVar12[-0x18] * fVar14;
      pfVar12[-0x17] = pfVar12[-0x17] * fVar14;
      pfVar12[-0x16] = pfVar12[-0x16] * fVar14;
      pfVar12[-0x15] = pfVar12[-0x15] * fVar14;
      *pfVar12 = *pfVar12 * fVar14;
      pfVar12[1] = pfVar12[1] * fVar14;
      pfVar12[2] = pfVar12[2] * fVar14;
      pfVar12[3] = pfVar12[3] * fVar14;
      pfVar1 = (float *)(iVar10 + (int)pfVar12);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(iVar10 + (int)pfVar12);
      *pfVar2 = *pfVar1 * fVar14;
      pfVar2[1] = fVar4 * fVar14;
      pfVar2[2] = fVar5 * fVar14;
      pfVar2[3] = fVar6 * fVar14;
      *pfVar3 = *pfVar3 * fVar14;
      pfVar3[1] = pfVar3[1] * fVar14;
      pfVar3[2] = pfVar3[2] * fVar14;
      pfVar3[3] = pfVar3[3] * fVar14;
      local_28 = 0;
      local_18 = 0;
      do {
        iVar13 = 0;
        iVar10 = local_28;
        do {
          iVar9 = local_30;
          if ((iVar10 != iVar11) || (iVar13 != local_1c)) {
            fVar4 = pfVar12[-0x17];
            fVar5 = pfVar12[-0x16];
            fVar6 = pfVar12[-0x15];
            fVar15 = -local_f0[iVar13 * 4 + (iVar10 + iVar11 * 2) * 0xc + local_1c];
            iVar11 = local_18 + iVar13;
            fVar14 = local_f0[iVar11 * 4 + 1];
            fVar7 = local_f0[iVar11 * 4 + 2];
            fVar8 = local_f0[iVar11 * 4 + 3];
            local_f0[iVar11 * 4] = pfVar12[-0x18] * fVar15 + local_f0[iVar11 * 4];
            local_f0[iVar11 * 4 + 1] = fVar4 * fVar15 + fVar14;
            local_f0[iVar11 * 4 + 2] = fVar5 * fVar15 + fVar7;
            local_f0[iVar11 * 4 + 3] = fVar6 * fVar15 + fVar8;
            fVar4 = pfVar12[1];
            fVar5 = pfVar12[2];
            fVar6 = pfVar12[3];
            fVar14 = local_90[iVar11 * 4 + 1];
            fVar7 = local_90[iVar11 * 4 + 2];
            fVar8 = local_90[iVar11 * 4 + 3];
            local_90[iVar11 * 4] = *pfVar12 * fVar15 + local_90[iVar11 * 4];
            local_90[iVar11 * 4 + 1] = fVar4 * fVar15 + fVar14;
            local_90[iVar11 * 4 + 2] = fVar5 * fVar15 + fVar7;
            local_90[iVar11 * 4 + 3] = fVar6 * fVar15 + fVar8;
            pfVar1 = (float *)(iVar9 + (int)pfVar12);
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = (float *)(param_1 + iVar11 * 4);
            fVar14 = pfVar2[1];
            fVar7 = pfVar2[2];
            fVar8 = pfVar2[3];
            pfVar3 = (float *)(param_1 + iVar11 * 4);
            *pfVar3 = *pfVar1 * fVar15 + *pfVar2;
            pfVar3[1] = fVar4 * fVar15 + fVar14;
            pfVar3[2] = fVar5 * fVar15 + fVar7;
            pfVar3[3] = fVar6 * fVar15 + fVar8;
            fVar4 = local_14[1];
            fVar5 = local_14[2];
            fVar6 = local_14[3];
            iVar11 = local_18 + 6 + iVar13;
            pfVar1 = (float *)(param_1 + iVar11 * 4);
            fVar14 = pfVar1[1];
            fVar7 = pfVar1[2];
            fVar8 = pfVar1[3];
            pfVar2 = (float *)(param_1 + iVar11 * 4);
            *pfVar2 = *local_14 * fVar15 + *pfVar1;
            pfVar2[1] = fVar4 * fVar15 + fVar14;
            pfVar2[2] = fVar5 * fVar15 + fVar7;
            pfVar2[3] = fVar6 * fVar15 + fVar8;
            iVar10 = local_28;
            iVar11 = local_2c;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 3);
        local_18 = local_18 + 3;
        local_28 = iVar10 + 1;
      } while (local_18 < 6);
      local_14 = local_14 + 4;
      local_24 = local_24 + 5;
      local_1c = local_1c + 1;
      pfVar12 = pfVar12 + 4;
    } while (local_1c < 3);
    local_20 = local_20 + 0x24;
    local_2c = iVar11 + 1;
  } while (iVar11 + 1 < 2);
  return;
}

// 014A7310  FUN_014a7310  size=17  [run]
void FUN_014a7310(undefined4 param_1,undefined4 param_2)

{
  FUN_014a7100(param_2);
  return;
}

// 014A7330  FUN_014a7330  size=351  [run]
void __thiscall FUN_014a7330(int param_1,int param_2,int param_3)

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
  float fVar19;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  int iVar38;
  
  pfVar35 = (float *)(param_1 + 0x20);
  pfVar34 = (float *)(param_2 + 0x10);
  iVar38 = 2;
  do {
    iVar37 = 2;
    pfVar36 = (float *)(param_3 + 0x80);
    do {
      fVar1 = pfVar36[-0x20];
      fVar2 = pfVar36[-0x1f];
      fVar3 = pfVar36[-0x1e];
      fVar4 = *pfVar34;
      fVar5 = pfVar34[1];
      fVar6 = pfVar34[2];
      fVar7 = pfVar34[3];
      fVar8 = pfVar34[-4];
      fVar9 = pfVar34[-3];
      fVar10 = pfVar34[-2];
      fVar11 = pfVar34[-1];
      fVar12 = pfVar34[4];
      fVar13 = pfVar34[5];
      fVar14 = pfVar34[6];
      fVar15 = pfVar34[7];
      fVar16 = pfVar36[-0x1c];
      fVar17 = pfVar36[-0x1b];
      fVar18 = pfVar36[-0x1a];
      fVar19 = pfVar36[-0x18];
      fVar20 = pfVar36[-0x17];
      fVar21 = pfVar36[-0x16];
      fVar22 = pfVar36[-8];
      fVar23 = pfVar36[-7];
      fVar24 = pfVar36[-6];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      pfVar35[-8] = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[-7] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[-6] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[-5] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      fVar22 = pfVar36[-4];
      fVar23 = pfVar36[-3];
      fVar24 = pfVar36[-2];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      pfVar35[-4] = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[-3] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[-2] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[-1] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      fVar22 = *pfVar36;
      fVar23 = pfVar36[1];
      fVar24 = pfVar36[2];
      fVar25 = pfVar34[9];
      fVar26 = pfVar34[10];
      fVar27 = pfVar34[0xb];
      fVar28 = pfVar34[0xd];
      fVar29 = pfVar34[0xe];
      fVar30 = pfVar34[0xf];
      fVar31 = pfVar34[0x11];
      fVar32 = pfVar34[0x12];
      fVar33 = pfVar34[0x13];
      *pfVar35 = fVar22 * pfVar34[8] + fVar23 * pfVar34[0xc] + fVar24 * pfVar34[0x10];
      pfVar35[1] = fVar22 * fVar25 + fVar23 * fVar28 + fVar24 * fVar31;
      pfVar35[2] = fVar22 * fVar26 + fVar23 * fVar29 + fVar24 * fVar32;
      pfVar35[3] = fVar22 * fVar27 + fVar23 * fVar30 + fVar24 * fVar33;
      pfVar35[-8] = pfVar35[-8] + fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
      pfVar35[-7] = pfVar35[-7] + fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
      pfVar35[-6] = pfVar35[-6] + fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
      pfVar35[-5] = pfVar35[-5] + fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
      pfVar35[-4] = pfVar35[-4] + fVar16 * fVar8 + fVar17 * fVar4 + fVar18 * fVar12;
      pfVar35[-3] = pfVar35[-3] + fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar13;
      pfVar35[-2] = pfVar35[-2] + fVar16 * fVar10 + fVar17 * fVar6 + fVar18 * fVar14;
      pfVar35[-1] = pfVar35[-1] + fVar16 * fVar11 + fVar17 * fVar7 + fVar18 * fVar15;
      *pfVar35 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + *pfVar35;
      pfVar35[1] = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + pfVar35[1];
      pfVar35[2] = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + pfVar35[2];
      pfVar35[3] = fVar19 * fVar11 + fVar20 * fVar7 + fVar21 * fVar15 + pfVar35[3];
      pfVar36 = pfVar36 + 0xc;
      pfVar35 = pfVar35 + 0xc;
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
    pfVar34 = pfVar34 + 0x18;
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  return;
}

// 014A74A0  FUN_014a74a0  size=187  [run]
void __thiscall FUN_014a74a0(float *param_1,float *param_2)

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
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = fVar1 + param_1[5];
  param_1[6] = fVar2 + param_1[6];
  param_1[7] = fVar3 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = fVar1 + param_1[9];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xb] = fVar3 + param_1[0xb];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] + param_2[0xc];
  param_1[0xd] = param_1[0xd] + fVar1;
  param_1[0xe] = param_1[0xe] + fVar2;
  param_1[0xf] = param_1[0xf] + fVar3;
  fVar1 = param_2[0x11];
  fVar2 = param_2[0x12];
  fVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10] + param_1[0x10];
  param_1[0x11] = fVar1 + param_1[0x11];
  param_1[0x12] = fVar2 + param_1[0x12];
  param_1[0x13] = fVar3 + param_1[0x13];
  fVar1 = param_2[0x15];
  fVar2 = param_2[0x16];
  fVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14] + param_1[0x14];
  param_1[0x15] = fVar1 + param_1[0x15];
  param_1[0x16] = fVar2 + param_1[0x16];
  param_1[0x17] = fVar3 + param_1[0x17];
  fVar1 = param_2[0x19];
  fVar2 = param_2[0x1a];
  fVar3 = param_2[0x1b];
  param_1[0x18] = param_2[0x18] + param_1[0x18];
  param_1[0x19] = fVar1 + param_1[0x19];
  param_1[0x1a] = fVar2 + param_1[0x1a];
  param_1[0x1b] = fVar3 + param_1[0x1b];
  fVar1 = param_2[0x1d];
  fVar2 = param_2[0x1e];
  fVar3 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c] + param_1[0x1c];
  param_1[0x1d] = fVar1 + param_1[0x1d];
  param_1[0x1e] = fVar2 + param_1[0x1e];
  param_1[0x1f] = fVar3 + param_1[0x1f];
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x23];
  param_1[0x20] = param_2[0x20] + param_1[0x20];
  param_1[0x21] = fVar1 + param_1[0x21];
  param_1[0x22] = fVar2 + param_1[0x22];
  param_1[0x23] = fVar3 + param_1[0x23];
  fVar1 = param_2[0x25];
  fVar2 = param_2[0x26];
  fVar3 = param_2[0x27];
  param_1[0x24] = param_1[0x24] + param_2[0x24];
  param_1[0x25] = param_1[0x25] + fVar1;
  param_1[0x26] = param_1[0x26] + fVar2;
  param_1[0x27] = param_1[0x27] + fVar3;
  fVar1 = param_2[0x29];
  fVar2 = param_2[0x2a];
  fVar3 = param_2[0x2b];
  param_1[0x28] = param_2[0x28] + param_1[0x28];
  param_1[0x29] = fVar1 + param_1[0x29];
  param_1[0x2a] = fVar2 + param_1[0x2a];
  param_1[0x2b] = fVar3 + param_1[0x2b];
  fVar1 = param_2[0x2d];
  fVar2 = param_2[0x2e];
  fVar3 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c] + param_1[0x2c];
  param_1[0x2d] = fVar1 + param_1[0x2d];
  param_1[0x2e] = fVar2 + param_1[0x2e];
  param_1[0x2f] = fVar3 + param_1[0x2f];
  return;
}

// 014A7560  FUN_014a7560  size=187  [run]
void __thiscall FUN_014a7560(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar2;
  param_1[3] = param_1[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - fVar1;
  param_1[6] = param_1[6] - fVar2;
  param_1[7] = param_1[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_1[8] - param_2[8];
  param_1[9] = param_1[9] - fVar1;
  param_1[10] = param_1[10] - fVar2;
  param_1[0xb] = param_1[0xb] - fVar3;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] - param_2[0xc];
  param_1[0xd] = param_1[0xd] - fVar1;
  param_1[0xe] = param_1[0xe] - fVar2;
  param_1[0xf] = param_1[0xf] - fVar3;
  fVar1 = param_2[0x11];
  fVar2 = param_2[0x12];
  fVar3 = param_2[0x13];
  param_1[0x10] = param_1[0x10] - param_2[0x10];
  param_1[0x11] = param_1[0x11] - fVar1;
  param_1[0x12] = param_1[0x12] - fVar2;
  param_1[0x13] = param_1[0x13] - fVar3;
  fVar1 = param_2[0x15];
  fVar2 = param_2[0x16];
  fVar3 = param_2[0x17];
  param_1[0x14] = param_1[0x14] - param_2[0x14];
  param_1[0x15] = param_1[0x15] - fVar1;
  param_1[0x16] = param_1[0x16] - fVar2;
  param_1[0x17] = param_1[0x17] - fVar3;
  fVar1 = param_2[0x19];
  fVar2 = param_2[0x1a];
  fVar3 = param_2[0x1b];
  param_1[0x18] = param_1[0x18] - param_2[0x18];
  param_1[0x19] = param_1[0x19] - fVar1;
  param_1[0x1a] = param_1[0x1a] - fVar2;
  param_1[0x1b] = param_1[0x1b] - fVar3;
  fVar1 = param_2[0x1d];
  fVar2 = param_2[0x1e];
  fVar3 = param_2[0x1f];
  param_1[0x1c] = param_1[0x1c] - param_2[0x1c];
  param_1[0x1d] = param_1[0x1d] - fVar1;
  param_1[0x1e] = param_1[0x1e] - fVar2;
  param_1[0x1f] = param_1[0x1f] - fVar3;
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x23];
  param_1[0x20] = param_1[0x20] - param_2[0x20];
  param_1[0x21] = param_1[0x21] - fVar1;
  param_1[0x22] = param_1[0x22] - fVar2;
  param_1[0x23] = param_1[0x23] - fVar3;
  fVar1 = param_2[0x25];
  fVar2 = param_2[0x26];
  fVar3 = param_2[0x27];
  param_1[0x24] = param_1[0x24] - param_2[0x24];
  param_1[0x25] = param_1[0x25] - fVar1;
  param_1[0x26] = param_1[0x26] - fVar2;
  param_1[0x27] = param_1[0x27] - fVar3;
  fVar1 = param_2[0x29];
  fVar2 = param_2[0x2a];
  fVar3 = param_2[0x2b];
  param_1[0x28] = param_1[0x28] - param_2[0x28];
  param_1[0x29] = param_1[0x29] - fVar1;
  param_1[0x2a] = param_1[0x2a] - fVar2;
  param_1[0x2b] = param_1[0x2b] - fVar3;
  fVar1 = param_2[0x2d];
  fVar2 = param_2[0x2e];
  fVar3 = param_2[0x2f];
  param_1[0x2c] = param_1[0x2c] - param_2[0x2c];
  param_1[0x2d] = param_1[0x2d] - fVar1;
  param_1[0x2e] = param_1[0x2e] - fVar2;
  param_1[0x2f] = param_1[0x2f] - fVar3;
  return;
}

// 014A7630  FUN_014a7630  size=11  [run]
__time64_t FUN_014a7630(void)

{
  __time64_t _Var1;
  
  _Var1 = __time64((__time64_t *)0x0);
  return _Var1;
}

// 014A7A2B  Unwind@014a7a2b  size=8  [run]
void Unwind_014a7a2b(void)

{
  FUN_00fda874();
  return;
}

// 014A7A4E  Unwind@014a7a4e  size=8  [run]
void Unwind_014a7a4e(void)

{
  FUN_00fda874();
  return;
}

// 014A7A71  Unwind@014a7a71  size=8  [run]
void Unwind_014a7a71(void)

{
  FUN_00fda874();
  return;
}

// 014A7A94  Unwind@014a7a94  size=8  [run]
void Unwind_014a7a94(void)

{
  std::locale::facet::facet_2();
  return;
}

// 014A7A9C  Unwind@014a7a9c  size=11  [run]
void Unwind_014a7a9c(void)

{
  FUN_00e17d40();
  return;
}

// 014A7AC2  Unwind@014a7ac2  size=8  [run]
void Unwind_014a7ac2(void)

{
  FUN_00fda874();
  return;
}

// 014A7B00  Unwind@014a7b00  size=24  [run]
void Unwind_014a7b00(void)

{
  int unaff_EBP;
  
  FUN_014a1d15(*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x1c),
               "CriMvEasyPlayer",4);
  return;
}

// 014A7B22  Unwind@014a7b22  size=24  [run]
void Unwind_014a7b22(void)

{
  int unaff_EBP;
  
  FUN_014a1d15(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 8),"CriMvEasyPlayer",4
              );
  return;
}

// 014A7B50  Unwind@014a7b50  size=24  [run]
void Unwind_014a7b50(void)

{
  int unaff_EBP;
  
  FUN_014a1d15(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8),
               "CriManaSoundAtomVoice_Float32",8);
  return;
}

// 014A7B90  Unwind@014a7b90  size=24  [run]
void Unwind_014a7b90(void)

{
  int unaff_EBP;
  
  FUN_014a1d15(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 8),
               "CriMvEasyFileReaderMem",4);
  return;
}

