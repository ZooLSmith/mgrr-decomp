// lib/havok/Source/Physics/Collide/Util/ShapeShrinker/hkpShapeShrinker.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01150810..01151960, 5 functions

#include "mgrr.h"
#include "hkpConvexTranslateShape.h"

// 01150810  FUN_01150810  size=799  [__FILE__]
int FUN_01150810(uint param_1,char param_2)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  LPVOID pvVar5;
  int *piVar6;
  undefined1 local_280 [516];
  undefined2 local_7c [2];
  undefined4 local_78;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  if (param_2 != '\0') {
    local_1c = 0;
    local_18 = 0;
    local_14 = -0x80000000;
    FUN_01130a20(&local_1c);
    hkgpConvexHull::hkgpConvexHull();
    local_4c = local_1c;
    local_48 = local_18;
    local_44 = 0x10;
    uVar1 = FUN_01077490();
    FUN_01079670(&local_4c,uVar1);
    iVar2 = FUN_01077610();
    if (iVar2 == 3) {
      FUN_010774e0();
      local_48 = 1;
      FUN_0107a9b0(param_1 ^ 0x80000000,&local_48);
      iVar2 = FUN_01077610();
      if (iVar2 == 3) {
        puVar3 = (undefined4 *)FUN_01079050();
        pcVar4 = (char *)FUN_0107b1c0(&local_1d,local_18,1);
        if (*pcVar4 == '\0') {
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)*puVar3)(1);
          }
          puVar3 = (undefined4 *)FUN_01079050();
          hkErrStream::hkErrStream(local_280,0x200);
          FUN_01018d00("Failed to decimate");
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (0,0xffffffff,local_280,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                     ,0x9c);
          hkBaseObject::hkBaseObject_38();
        }
        local_18 = 0;
        FUN_01078920(1,&local_1c);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        FUN_0113c3d0();
        local_78 = *(undefined4 *)(in_EAX + 0x10);
        local_7c[0] = 1;
        pvVar5 = TlsGetValue(DAT_01f8fc4c);
        iVar2 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x70);
        *(undefined2 *)(iVar2 + 4) = 0x70;
        local_40 = CONCAT44(local_1c,(undefined4)local_40);
        local_38 = CONCAT44(0x10,local_18);
        iVar2 = hkpConvexVerticesShape::hkpConvexVerticesShape((int)&local_40 + 4,local_7c);
        hkBaseObject::hkBaseObject_27();
        local_18 = 0;
        if (local_14 < 0) {
          return iVar2;
        }
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
        return iVar2;
      }
    }
    else {
      hkErrStream::hkErrStream(local_280,0x200);
      FUN_01018d00(
                  "Cannot use optimized shrinking on non-volumetric(3D) shapes, falling back to legacy method."
                  );
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0x679d17fa,local_280,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                 ,0xac);
      hkBaseObject::hkBaseObject_38();
    }
    hkBaseObject::hkBaseObject_27();
    local_18 = 0;
    if (-1 < local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
  }
  piVar6 = (int *)FUN_0112fea0();
  FUN_01006000();
  local_50 = 0;
  if (piVar6[1] < 1) {
    return in_EAX;
  }
  local_24 = 0;
  do {
    local_40 = *(undefined8 *)(*piVar6 + local_24);
    local_38 = ((undefined8 *)(*piVar6 + local_24))[1];
    local_44 = in_EAX;
    in_EAX = hkpConvexVerticesConnectivity::hkpConvexVerticesConnectivity
                       (in_EAX,&local_40,param_1,0x34000000);
    FUN_010060a0();
    if (in_EAX == 0) {
      return 0;
    }
    local_24 = local_24 + 0x10;
    local_50 = local_50 + 1;
  } while (local_50 < piVar6[1]);
  return in_EAX;
}

// 01150C80  FUN_01150c80  size=424  [between]
void FUN_01150c80(int *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int *unaff_EDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
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
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = -0x80000000;
  FUN_01130a20(&local_24);
  if (3 < local_20) {
    local_14 = 0.0;
    local_18 = 0.0;
    if (0 < local_20) {
      local_50 = 0.0;
      fStack_4c = 0.0;
      fStack_48 = 0.0;
      fStack_44 = 0.0;
      local_60 = 3.0;
      fStack_5c = 3.0;
      fStack_58 = 3.0;
      fStack_54 = 3.0;
      local_70 = 0.5;
      fStack_6c = 0.5;
      fStack_68 = 0.5;
      fStack_64 = 0.5;
      do {
        pfVar1 = (float *)(iVar2 + local_24);
        local_40 = *pfVar1 - *param_2;
        fStack_3c = pfVar1[1] - param_2[1];
        fStack_38 = pfVar1[2] - param_2[2];
        fVar3 = local_40 * local_40;
        fVar4 = fStack_3c * fStack_3c;
        fVar5 = fStack_38 * fStack_38;
        auVar9._4_4_ = fVar3;
        auVar9._0_4_ = fVar3;
        auVar9._8_4_ = fVar3;
        auVar9._12_4_ = fVar3;
        fVar6 = fVar4 + fVar3 + fVar5;
        fVar7 = fVar4 + fVar3 + fVar5;
        fVar8 = fVar4 + fVar3 + fVar5;
        fVar5 = fVar4 + fVar3 + fVar5;
        auVar10._4_4_ = fVar7;
        auVar10._0_4_ = fVar6;
        auVar10._8_4_ = fVar8;
        auVar10._12_4_ = fVar5;
        auVar10 = rsqrtps(auVar9,auVar10);
        fVar3 = auVar10._0_4_;
        fVar4 = auVar10._4_4_;
        fVar11 = auVar10._8_4_;
        fVar12 = auVar10._12_4_;
        local_40 = (float)(~-(uint)(fVar6 <= local_50) &
                          (uint)((local_60 - fVar3 * fVar6 * fVar3) * local_70 * fVar3)) * local_40;
        fStack_3c = (float)(~-(uint)(fVar7 <= fStack_4c) &
                           (uint)((fStack_5c - fVar4 * fVar7 * fVar4) * fStack_6c * fVar4)) *
                    fStack_3c;
        fStack_38 = (float)(~-(uint)(fVar8 <= fStack_48) &
                           (uint)((fStack_58 - fVar11 * fVar8 * fVar11) * fStack_68 * fVar11)) *
                    fStack_38;
        fStack_34 = (float)(~-(uint)(fVar5 <= fStack_44) &
                           (uint)((fStack_54 - fVar12 * fVar5 * fVar12) * fStack_64 * fVar12)) *
                    (pfVar1[3] - param_2[3]);
        (**(code **)(*unaff_EDI + 0x20))(&local_40,&local_90);
        (**(code **)(*param_1 + 0x20))(&local_40,&local_80);
        fVar3 = (fStack_7c - fStack_8c) * (fStack_7c - fStack_8c) +
                (local_80 - local_90) * (local_80 - local_90) +
                (fStack_78 - fStack_88) * (fStack_78 - fStack_88);
        if (local_14 < fVar3) {
          local_14 = fVar3;
        }
        local_18 = (float)((int)local_18 + 1);
        iVar2 = iVar2 + 0x10;
      } while ((int)local_18 < local_20);
    }
    local_18 = SQRT(local_14);
    local_20 = 0;
    if (-1 < local_1c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
    }
    return;
  }
  local_20 = 0;
  if (-1 < local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
  }
  return;
}

// 01150E30  hkpConvexTranslateShape::hkpConvexTranslateShape  size=2660  [__FILE__]
int * hkpConvexTranslateShape::hkpConvexTranslateShape(int *param_1,int *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  LPVOID pvVar10;
  undefined4 uVar11;
  float *pfVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined1 local_2d0 [512];
  undefined1 local_d0 [84];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int *local_38;
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  int *local_1c;
  int *local_18;
  char local_11;
  
  iVar7 = 0;
  if (0 < param_2[1]) {
    pfVar12 = (float *)*param_2;
    do {
      if ((int *)*pfVar12 == param_1) {
        return (int *)((float *)*param_2)[iVar7 * 2 + 1];
      }
      iVar7 = iVar7 + 1;
      pfVar12 = pfVar12 + 2;
    } while (iVar7 < param_2[1]);
  }
  local_38 = (int *)0x0;
  switch((char)param_1[2]) {
  case '\x01':
    local_18 = (int *)param_1[4];
    fVar13 = (float10)FUN_0112c400();
    local_1c = (int *)(float)fVar13;
    fVar14 = ((float)param_1[8] - (float)param_1[0xc]) * ((float)param_1[8] - (float)param_1[0xc]);
    fVar17 = ((float)param_1[9] - (float)param_1[0xd]) * ((float)param_1[9] - (float)param_1[0xd]);
    fVar15 = ((float)param_1[10] - (float)param_1[0xe]) * ((float)param_1[10] - (float)param_1[0xe])
    ;
    fVar16 = fVar17 + fVar14 + fVar15;
    auVar23._4_4_ = fVar17 + fVar14 + fVar15;
    auVar23._0_4_ = fVar16;
    auVar23._8_4_ = fVar17 + fVar14 + fVar15;
    auVar23._12_4_ = fVar17 + fVar14 + fVar15;
    auVar23 = rsqrtps(in_XMM3,auVar23);
    local_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    local_30 = 0x4040000040400000;
    uStack_28 = 0x4040000040400000;
    fVar14 = auVar23._0_4_;
    local_70 = 0.5;
    fStack_6c = 0.5;
    fStack_68 = 0.5;
    fStack_64 = 0.5;
    if (((float)local_1c <= (float)local_18) ||
       ((float)(~-(uint)(fVar16 <= 0.0) &
               (uint)((3.0 - fVar14 * fVar16 * fVar14) * fVar14 * 0.5 * fVar16)) <=
        (float)local_18 * 2.0)) {
      hkErrStream::hkErrStream(local_2d0,0x200);
      FUN_01018d00("Cylinder shape too small compared to \'extra radius\' - unable to shrink.");
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabbafa2c,local_2d0,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                 ,0x1ba);
      hkBaseObject::hkBaseObject_38();
      return local_38;
    }
    FUN_0112c440((float)local_1c - (float)local_18);
    fVar20 = (float)param_1[0xc] - (float)param_1[8];
    fVar21 = (float)param_1[0xd] - (float)param_1[9];
    fVar22 = (float)param_1[0xe] - (float)param_1[10];
    fVar14 = fVar20 * fVar20;
    fVar17 = fVar21 * fVar21;
    fVar15 = fVar22 * fVar22;
    auVar24._4_4_ = fVar14;
    auVar24._0_4_ = fVar14;
    auVar24._8_4_ = fVar14;
    auVar24._12_4_ = fVar14;
    fVar16 = fVar17 + fVar14 + fVar15;
    fVar18 = fVar17 + fVar14 + fVar15;
    fVar19 = fVar17 + fVar14 + fVar15;
    fVar15 = fVar17 + fVar14 + fVar15;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar16;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar15;
    auVar23 = rsqrtps(auVar24,auVar3);
    fVar14 = auVar23._0_4_;
    fVar17 = auVar23._4_4_;
    fVar25 = auVar23._8_4_;
    fVar26 = auVar23._12_4_;
    fVar14 = (float)(~-(uint)(fVar16 <= local_50) &
                    (uint)(((float)local_30 - fVar14 * fVar16 * fVar14) * local_70 * fVar14)) *
             fVar20 * (float)local_18;
    fVar17 = (float)(~-(uint)(fVar18 <= fStack_4c) &
                    (uint)((local_30._4_4_ - fVar17 * fVar18 * fVar17) * fStack_6c * fVar17)) *
             fVar21 * (float)local_18;
    fVar16 = (float)(~-(uint)(fVar19 <= fStack_48) &
                    (uint)(((float)uStack_28 - fVar25 * fVar19 * fVar25) * fStack_68 * fVar25)) *
             fVar22 * (float)local_18;
    fVar15 = (float)(~-(uint)(fVar15 <= fStack_44) &
                    (uint)((uStack_28._4_4_ - fVar26 * fVar15 * fVar26) * fStack_64 * fVar26)) *
             ((float)param_1[0xf] - (float)param_1[0xb]) * (float)local_18;
    param_1[8] = (int)(fVar14 + (float)param_1[8]);
    param_1[9] = (int)(fVar17 + (float)param_1[9]);
    param_1[10] = (int)(fVar16 + (float)param_1[10]);
    param_1[0xb] = (int)(fVar15 + (float)param_1[0xb]);
    param_1[0xc] = (int)((float)param_1[0xc] - fVar14);
    param_1[0xd] = (int)((float)param_1[0xd] - fVar17);
    param_1[0xe] = (int)((float)param_1[0xe] - fVar16);
    param_1[0xf] = (int)((float)param_1[0xf] - fVar15);
    local_38 = param_1;
    piVar8 = local_38;
    break;
  default:
    goto switchD_01150e89_caseD_2;
  case '\x03':
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 10);
    local_30._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_28._0_4_ = (float)uVar2;
    if (local_30._4_4_ < (float)uStack_28) {
      uStack_28._0_4_ = local_30._4_4_;
    }
    local_30._0_4_ = (float)uVar1;
    if ((float)local_30 < (float)uStack_28) {
      uStack_28._0_4_ = (float)local_30;
    }
    local_1c = (int *)param_1[4];
    local_18 = (int *)((float)uStack_28 * 0.5);
    local_30 = uVar1;
    uStack_28 = uVar2;
    if ((float)local_18 < (float)local_1c) {
      hkErrStream::hkErrStream(local_2d0,0x200);
      puVar28 = &DAT_01656d18;
      puVar27 = &DAT_017d560c;
      piVar8 = local_1c;
      piVar9 = local_18;
      FUN_01018d00("Box shape too small compared to \'extra radius\' - radius changed from ");
      FUN_01018e60(piVar8);
      FUN_01018d00(puVar27);
      FUN_01018e60(piVar9);
      FUN_01018d00(puVar28);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabbafa2d,local_2d0,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                 ,0x1d0);
      hkBaseObject::hkBaseObject_38();
      local_1c = local_18;
    }
    local_30 = CONCAT44(local_30._4_4_ - (float)local_1c,(float)local_30 - (float)local_1c);
    uStack_28 = CONCAT44(uStack_28._4_4_ - (float)local_1c,(float)uStack_28 - (float)local_1c);
    FUN_01138800(&local_30);
    param_1[4] = (int)local_1c;
    local_38 = param_1;
    piVar8 = local_38;
    break;
  case '\x05':
    if ((float)param_1[4] <= 0.0) {
      param_1[4] = 0;
      return (int *)0x0;
    }
    local_11 = param_1[0x18] != 0;
    FUN_0117ae40(param_1);
    local_18 = (int *)param_1[4];
    piVar8 = (int *)FUN_01150810(local_18,param_3);
    if (piVar8 == (int *)0x0) {
      param_1[4] = 0;
      if (local_11 != '\0') {
        return local_38;
      }
      FUN_01131470(0,1);
      return local_38;
    }
    fVar14 = 0.0;
    local_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    local_30 = (ulonglong)(uint)(float)local_30;
    uStack_28 = -0x8000000000000000;
    FUN_01130a20((int)&local_30 + 4);
    hkgpConvexHull::hkgpConvexHull();
    local_78 = (float)uStack_28;
    local_7c = local_30._4_4_;
    local_74 = 0x10;
    uVar11 = FUN_01077490();
    FUN_01079670(&local_7c,uVar11);
    iVar7 = FUN_01077610();
    if (iVar7 == 3) {
      FUN_010790f0();
      pfVar12 = (float *)FUN_01077d00();
      fVar14 = *pfVar12;
      fStack_4c = pfVar12[1];
      fStack_48 = pfVar12[2];
      fStack_44 = pfVar12[3];
      local_50 = fVar14;
    }
    hkBaseObject::hkBaseObject_27();
    lVar5 = uStack_28;
    uVar6 = (uint)uStack_28._4_4_;
    uStack_28 = (ulonglong)(uint)uStack_28._4_4_ << 0x20;
    if (-1 < lVar5) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30._4_4_,uVar6 << 4);
    }
    FUN_01150c80(param_1,&local_50);
    fVar17 = (float)param_1[4] * 2.0;
    if (fVar17 < fVar14) {
      param_1[4] = (int)(((fVar17 * 0.9) / fVar14) * (float)param_1[4]);
      FUN_010060a0();
      piVar8 = (int *)FUN_01150810(param_1[4],param_3);
      if (piVar8 == (int *)0x0) {
        hkErrStream::hkErrStream(local_2d0,0x200);
        FUN_01018d00("Suspicious convex vertices shape");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xdd12ee34,local_2d0,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                   ,0x21b);
        hkBaseObject::hkBaseObject_38();
        param_1[4] = 0;
        if (local_11 != '\0') {
          return local_38;
        }
        FUN_01131470(0,1);
        return local_38;
      }
    }
    local_70 = ABS((float)piVar8[4] - (float)local_18);
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    if (0.001 <= local_70) {
      hkErrStream::hkErrStream(local_2d0,0x200);
      iVar7 = piVar8[4];
      puVar28 = &DAT_01656d18;
      puVar27 = &DAT_017d560c;
      piVar9 = local_18;
      FUN_01018d00(
                  "Convex vertices shape too small compared to \'extra radius\' - radius changed from "
                  );
      FUN_01018e60(piVar9);
      FUN_01018d00(puVar27);
      FUN_01018e60(iVar7);
      FUN_01018d00(puVar28);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabbafa2e,local_2d0,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                 ,0x227);
      hkBaseObject::hkBaseObject_38();
    }
    iVar7 = FUN_0112fea0();
    if (*(int *)(iVar7 + 4) < *(int *)(piVar8[0x18] + 0x18)) {
      fStack_4c = 0.0;
      fStack_48 = 0.0;
      fStack_44 = -0.0;
      FUN_01130a20(&fStack_4c);
      local_30 = local_30 & 0xffffffff;
      uStack_28._0_4_ = 0.0;
      uStack_28._4_4_ = -0.0;
      FUN_01150560(piVar8[0x18],&fStack_4c,piVar8[4],(int)&local_30 + 4);
      FUN_011314b0((int)&local_30 + 4);
      uVar6 = (uint)uStack_28._4_4_;
      uStack_28 = (ulonglong)(uint)uStack_28._4_4_ << 0x20;
      if (-1 < (int)uVar6) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30._4_4_,uVar6 << 4);
      }
      local_30 = local_30 & 0xffffffff;
      fStack_48 = 0.0;
      uStack_28 = CONCAT44(0x80000000,(float)uStack_28);
      if (-1 < (int)fStack_44) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(fStack_4c,(int)fStack_44 << 4);
      }
    }
    else {
      FUN_011314b0(iVar7);
    }
    if (local_11 == '\0') {
      FUN_01131470(0,1);
      FUN_01131470(0,1);
    }
    break;
  case '\x06':
  case '\b':
  case '\x12':
  case '\x1a':
    piVar8 = (int *)(**(code **)(*param_1 + 0x38))();
    if (((char)param_1[2] == '\b') || ((char)param_1[2] == '\x1a')) {
      local_31 = '\x01';
    }
    else {
      local_31 = '\0';
    }
    local_30 = local_30 & 0xffffffff;
    uStack_28._0_4_ = 0.0;
    uStack_28._4_4_ = -0.0;
    iVar7 = (**(code **)(*piVar8 + 4))();
    if ((int)((uint)uStack_28._4_4_ & 0x3fffffff) < iVar7) {
      FUN_0100a210(&PTR_vftable_018e9b94,(int)&local_30 + 4,iVar7,4);
    }
    local_11 = '\0';
    for (local_1c = (int *)(**(code **)(*piVar8 + 8))(); local_1c != (int *)0xffffffff;
        local_1c = (int *)(**(code **)(*piVar8 + 0xc))(local_1c)) {
      local_18 = (int *)(**(code **)(*piVar8 + 0x14))(local_1c,local_2d0);
      piVar9 = (int *)hkpConvexTranslateShape(local_18,param_2,param_3);
      if (piVar9 != (int *)0x0) {
        local_11 = '\x01';
        local_18 = piVar9;
      }
      if ((float)uStack_28 == (float)((uint)uStack_28._4_4_ & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int)&local_30 + 4,4);
      }
      *(int **)((int)local_30._4_4_ + (int)(float)uStack_28 * 4) = local_18;
      uStack_28._0_4_ = (float)((int)(float)uStack_28 + 1);
    }
    local_1c = (int *)0x0;
    if ((local_11 != '\0') && (local_31 != '\0')) {
      if ((char)param_1[2] == '\b') {
        pvVar10 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x70);
        *(undefined2 *)(iVar7 + 4) = 0x70;
        piVar8 = (int *)hkpListShape::hkpListShape_2(local_30._4_4_,(float)uStack_28,1);
        local_18 = (int *)0x0;
        local_1c = piVar8;
        if (0 < (int)(float)uStack_28) {
          iVar7 = 0;
          do {
            *(undefined4 *)(piVar8[6] + 4 + iVar7) = *(undefined4 *)(param_1[6] + 4 + iVar7);
            if (*(int *)(iVar7 + piVar8[6]) != *(int *)(iVar7 + param_1[6])) {
              FUN_010060a0();
              piVar8 = local_1c;
            }
            local_18 = (int *)((int)local_18 + 1);
            iVar7 = iVar7 + 0x10;
          } while ((int)local_18 < (int)(float)uStack_28);
        }
      }
      else if ((char)param_1[2] == '\x1a') {
        pvVar10 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x50);
        *(undefined2 *)(iVar7 + 4) = 0x50;
        local_1c = (int *)hkpShapeContainer::hkpShapeContainer(local_30._4_4_,(float)uStack_28);
      }
    }
    uVar6 = (uint)uStack_28._4_4_;
    local_38 = local_1c;
    uStack_28 = (ulonglong)(uint)uStack_28._4_4_ << 0x20;
    piVar8 = local_38;
    if (-1 < (int)uVar6) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30._4_4_,uVar6 * 4);
      piVar8 = local_38;
    }
    break;
  case '\n':
    local_18 = (int *)hkpConvexTranslateShape(param_1[6],param_2,param_3);
    if (local_18 == (int *)0x0) {
      return local_38;
    }
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    piVar8 = (int *)(**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x30);
    *(undefined2 *)(piVar8 + 1) = 0x30;
    hkpSingleShapeContainer::hkpSingleShapeContainer_14(10,local_18[4],local_18,1);
    *piVar8 = (int)vftable;
    iVar7 = param_1[9];
    iVar4 = param_1[10];
    piVar8[8] = param_1[8];
    piVar8[9] = iVar7;
    piVar8[10] = iVar4;
    piVar8[0xb] = 0;
    piVar8[7] = 0;
    break;
  case '\v':
    local_18 = (int *)hkpConvexTranslateShape(param_1[6],param_2,param_3);
    if (local_18 == (int *)0x0) {
      return local_38;
    }
    FUN_0100a440(local_d0);
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar7 + 4) = 0x60;
    piVar8 = (int *)hkpConvexTransformShape::hkpConvexTransformShape_2(local_18,local_d0,1);
    break;
  case '\x0e':
    local_18 = (int *)hkpConvexTranslateShape(param_1[5],param_2,param_3);
    if (local_18 == (int *)0x0) {
      return local_38;
    }
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x70);
    *(undefined2 *)(iVar7 + 4) = 0x70;
    piVar8 = (int *)hkpSingleShapeContainer::hkpSingleShapeContainer_10(local_18,param_1 + 0xc);
    break;
  case '\x1e':
    piVar8 = (int *)hkpConvexTranslateShape(param_1[6],param_2,param_3);
  }
  local_38 = piVar8;
  if (local_38 != (int *)0x0) {
    local_38[3] = param_1[3];
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,8);
    }
    pfVar12 = (float *)(*param_2 + param_2[1] * 8);
    if (pfVar12 != (float *)0x0) {
      *pfVar12 = (float)param_1;
      pfVar12[1] = (float)local_38;
    }
    param_2[1] = param_2[1] + 1;
  }
switchD_01150e89_caseD_2:
  return local_38;
}

// 011518E0  FUN_011518e0  size=128  [between]
undefined4 FUN_011518e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_2 != 0) {
    uVar1 = hkpConvexTranslateShape::hkpConvexTranslateShape(param_1,param_2,param_3);
    return uVar1;
  }
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  uVar1 = hkpConvexTranslateShape::hkpConvexTranslateShape(param_1,&local_10,param_3);
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
  }
  return uVar1;
}

// 01151960  FUN_01151960  size=1262  [__FILE__]
/* WARNING: Type propagation algorithm not settling */

int FUN_01151960(int *param_1,float param_2,float param_3,float param_4,int param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined1 local_290 [512];
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
  float local_40 [7];
  undefined4 local_24;
  int local_20;
  int local_1c;
  float local_18;
  char local_11;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = -0x80000000;
  FUN_01130a20(&local_24);
  if (local_20 < 4) {
    hkErrStream::hkErrStream(local_290,0x200);
    FUN_01018d00("Shape shrinker does not support convex hull dimemsion less than 3");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0x17151,local_290,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
               ,0x2c8);
    hkBaseObject::hkBaseObject_38();
  }
  else {
    hkgpConvexHull::hkgpConvexHull();
    local_40[1] = (float)local_24;
    local_40[2] = (float)local_20;
    local_40[3] = 2.24208e-44;
    uVar1 = FUN_01077490();
    FUN_01079670(local_40 + 1,uVar1);
    iVar2 = FUN_01077610();
    if (iVar2 == 3) {
      FUN_010790f0();
      pfVar3 = (float *)FUN_01077d00();
      fVar6 = *pfVar3;
      fStack_6c = pfVar3[1];
      fStack_68 = pfVar3[2];
      fStack_64 = pfVar3[3];
      local_70 = fVar6;
      fVar5 = (float10)FUN_01077ad0();
      if (fVar5 != (float10)0) {
        hkBaseObject::hkBaseObject_27();
        local_20 = 0;
        if (-1 < local_1c) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
        }
        FUN_0112fea0();
        FUN_01150370();
        local_18 = fVar6;
        if (fVar6 < 0.0) {
          if (param_5 == 0) {
            hkErrStream::hkErrStream(local_290,0x200);
            puVar8 = &DAT_017d5924;
            fVar6 = local_18;
            FUN_01018d00(
                        "The Center Of Mass seems to be outside the object. Looks like the convex hull of the object is corrupted. ("
                        );
            FUN_01018e60(fVar6);
            FUN_01018d00(puVar8);
            uVar9 = 0x2e5;
            uVar1 = 0xabba3465;
          }
          else {
            hkErrStream::hkErrStream(local_290,0x200);
            puVar8 = &DAT_017d5924;
            pcVar7 = 
            "\' : Center Of Mass seems to be outside the object. Looks like the convex hull of the object is corrupted. ("
            ;
            fVar6 = local_18;
            FUN_01018d00("Shape \'");
            FUN_01018d00(param_5);
            FUN_01018d00(pcVar7);
            FUN_01018e60(fVar6);
            FUN_01018d00(puVar8);
            uVar9 = 0x2e1;
            uVar1 = 0xabba3475;
          }
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,uVar1,local_290,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Collide\\Util\\ShapeShrinker\\hkpShapeShrinker.cpp"
                     ,uVar9);
          hkBaseObject::hkBaseObject_38();
          local_18 = 0.0;
        }
        (**(code **)(*param_1 + 0x10))(&DAT_01701ca0,0,&local_90);
        local_40[0] = local_80 - local_90;
        local_40[1] = fStack_7c - fStack_8c;
        local_40[2] = fStack_78 - fStack_88;
        local_40[3] = fStack_74 - fStack_84;
        if (((local_40[1] <= local_40[0]) && (local_40[0] <= local_40[2])) ||
           ((local_40[0] <= local_40[1] && (local_40[2] <= local_40[0])))) {
          iVar2 = 0;
        }
        else if (((local_40[2] <= local_40[1]) && (local_40[1] <= local_40[0])) ||
                ((local_40[1] <= local_40[2] && (local_40[0] <= local_40[1])))) {
          iVar2 = 1;
        }
        else {
          iVar2 = 2;
        }
        fVar6 = local_18 * 0.5;
        local_18 = local_40[iVar2] * 0.5 * param_3;
        if (fVar6 < local_18) {
          local_18 = fVar6;
        }
        if (param_2 <= local_18) {
          local_18 = param_2;
        }
        local_11 = param_1[0x18] != 0;
        FUN_0117ae40(param_1);
        fVar6 = local_18;
        iVar2 = FUN_01150810(local_18,param_6);
        if (iVar2 == 0) {
LAB_01151cdd:
          if (local_11 != '\0') {
            return 0;
          }
          FUN_01131470(0,1);
          return 0;
        }
        FUN_01150c80(param_1,&local_70);
        if (param_4 < fVar6) {
          local_18 = ((param_4 * 0.9) / fVar6) * local_18;
          FUN_010060a0();
          iVar2 = FUN_01150810(local_18,param_6);
          if (iVar2 == 0) goto LAB_01151cdd;
        }
        *(float *)(iVar2 + 0x10) = local_18;
        iVar4 = FUN_0112fea0();
        if (*(int *)(iVar4 + 4) < *(int *)(*(int *)(iVar2 + 0x60) + 0x18)) {
          local_40[1] = 0.0;
          local_40[2] = 0.0;
          local_40[3] = -0.0;
          FUN_01130a20(local_40 + 1);
          local_24 = 0;
          local_20 = 0;
          local_1c = -0x80000000;
          FUN_01150560(*(undefined4 *)(iVar2 + 0x60),local_40 + 1,*(undefined4 *)(iVar2 + 0x10),
                       &local_24);
          FUN_011314b0(&local_24);
          local_20 = 0;
          if (-1 < local_1c) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
          }
          local_24 = 0;
          local_40[2] = 0.0;
          local_1c = -0x80000000;
          if (-1 < (int)local_40[3]) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40[1],(int)local_40[3] << 4);
          }
        }
        else {
          FUN_011314b0(iVar4);
        }
        if (local_11 == '\0') {
          FUN_01131470(0,1);
          FUN_01131470(0,1);
        }
        return iVar2;
      }
    }
    hkBaseObject::hkBaseObject_27();
  }
  if (-1 < local_1c) {
    local_20 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
  }
  return 0;
}

