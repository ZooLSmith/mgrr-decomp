// lib/havok/Source/Geometry/Internal/Algorithms/Gsk/hkcdGskImpl.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 014623F0..014623F0, 1 functions

#include "mgrr.h"

// 014623F0  FUN_014623f0  size=8641  [__FILE__]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_014623f0(undefined1 (*param_1) [16],undefined1 *param_2,int *param_3,int *param_4,
            undefined4 param_5,float *param_6,undefined4 param_7,float *param_8,float *param_9)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  undefined1 *puVar17;
  int iVar18;
  undefined1 (*extraout_ECX) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined4 *puVar21;
  uint extraout_EDX;
  undefined4 uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar45;
  float fVar46;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar53;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  float fVar52;
  undefined1 auVar44 [16];
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar71;
  float fVar72;
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
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  float fVar91;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar92;
  float fVar93;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 in_XMM4 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar103;
  float fVar108;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar109;
  undefined1 auVar107 [16];
  float fVar113;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 local_700 [512];
  undefined1 local_500 [16];
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
  uint local_4c0;
  uint uStack_4bc;
  uint uStack_4b8;
  uint uStack_4b4;
  float local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
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
  uint local_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  undefined1 local_430 [16];
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float local_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float local_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float local_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined1 local_3c0 [16];
  float local_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  uint local_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
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
  uint local_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  undefined1 local_310 [16];
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float local_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
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
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
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
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 (*local_d4) [16];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  int local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 (*local_94) [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 local_71;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 (*local_58) [16];
  undefined1 (*local_54) [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 (*local_40) [16];
  undefined4 *local_3c;
  undefined1 (*local_38) [16];
  undefined1 (*local_34) [16];
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  uint local_18;
  int local_14;
  
  local_140 = (float)*(undefined8 *)(param_6 + 4);
  fStack_13c = (float)((ulonglong)*(undefined8 *)(param_6 + 4) >> 0x20);
  fStack_138 = (float)*(undefined8 *)(param_6 + 6);
  fStack_134 = (float)((ulonglong)*(undefined8 *)(param_6 + 6) >> 0x20);
  local_d4 = (undefined1 (*) [16])(param_6 + 4);
  fVar33 = local_140 * local_140;
  fVar45 = fStack_13c * fStack_13c;
  fVar49 = fStack_138 * fStack_138;
  auVar74._0_4_ = fVar45 + fVar33 + fVar49;
  auVar74._4_4_ = fVar45 + fVar33 + fVar49;
  auVar74._8_4_ = fVar45 + fVar33 + fVar49;
  auVar74._12_4_ = fVar45 + fVar33 + fVar49;
  auVar94 = rsqrtps(in_XMM4,auVar74);
  local_1b0 = 0.5;
  fStack_1ac = 0.5;
  fStack_1a8 = 0.5;
  fStack_1a4 = 0.5;
  fVar33 = auVar94._0_4_;
  fVar45 = auVar94._4_4_;
  fVar49 = auVar94._8_4_;
  fVar51 = auVar94._12_4_;
  uVar25 = -(uint)(0.0 - auVar74._0_4_ < 0.0);
  uVar27 = -(uint)(0.0 - auVar74._4_4_ < 0.0);
  uVar29 = -(uint)(0.0 - auVar74._8_4_ < 0.0);
  uVar31 = -(uint)(0.0 - auVar74._12_4_ < 0.0);
  auVar94._4_4_ = uVar27;
  auVar94._0_4_ = uVar25;
  auVar94._8_4_ = uVar29;
  auVar94._12_4_ = uVar31;
  iVar18 = movmskps(local_d4,auVar94);
  local_140 = (float)((uint)((float)(~-(uint)(auVar74._0_4_ <= 0.0) &
                                    (uint)((3.0 - fVar33 * auVar74._0_4_ * fVar33) * fVar33 * 0.5))
                            * local_140) & uVar25 | ~uVar25 & (uint)local_140);
  fStack_13c = (float)((uint)((float)(~-(uint)(auVar74._4_4_ <= 0.0) &
                                     (uint)((3.0 - fVar45 * auVar74._4_4_ * fVar45) * fVar45 * 0.5))
                             * fStack_13c) & uVar27 | ~uVar27 & (uint)fStack_13c);
  local_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_490 = 3.0;
  fStack_48c = 3.0;
  fStack_488 = 3.0;
  fStack_484 = 3.0;
  _fStack_138 = CONCAT44((uint)((float)(~-(uint)(auVar74._12_4_ <= 0.0) &
                                       (uint)((3.0 - fVar51 * auVar74._12_4_ * fVar51) *
                                             fVar51 * 0.5)) * fStack_134) & uVar31 |
                         ~uVar31 & (uint)fStack_134,
                         (uint)((float)(~-(uint)(auVar74._8_4_ <= 0.0) &
                                       (uint)((3.0 - fVar49 * auVar74._8_4_ * fVar49) * fVar49 * 0.5
                                             )) * fStack_138) & uVar29 | ~uVar29 & (uint)fStack_138)
  ;
  if (iVar18 != 0) {
    local_340 = param_6[0x18];
    local_4d0 = param_6[0x19];
    uVar3 = *(undefined8 *)param_6;
    uVar4 = *(undefined8 *)(param_6 + 2);
    puVar21 = (undefined4 *)*param_4;
    local_71 = 0;
    uVar22 = puVar21[1];
    uVar48 = puVar21[2];
    uVar53 = puVar21[3];
    *(undefined4 *)param_1[2] = *puVar21;
    *(undefined4 *)((int)param_1[2] + 4) = uVar22;
    *(undefined4 *)((int)param_1[2] + 8) = uVar48;
    *(undefined4 *)((int)param_1[2] + 0xc) = uVar53;
    local_120._0_4_ = (float)uVar3;
    local_120._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    uStack_118._0_4_ = (float)uVar4;
    uStack_118._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar33 = *(float *)((int)param_1[2] + 4);
    fVar45 = *(float *)((int)param_1[2] + 8);
    fVar49 = *(float *)((int)param_1[2] + 0xc);
    *(float *)param_1[10] = (float)local_120 - *(float *)param_1[2];
    *(float *)((int)param_1[10] + 4) = local_120._4_4_ - fVar33;
    *(float *)((int)param_1[10] + 8) = (float)uStack_118 - fVar45;
    *(float *)((int)param_1[10] + 0xc) = uStack_118._4_4_ - fVar49;
    local_110 = (float)*(undefined8 *)param_1[10];
    fStack_10c = (float)((ulonglong)*(undefined8 *)param_1[10] >> 0x20);
    fStack_108 = (float)*(undefined8 *)((int)param_1[10] + 8);
    fStack_104 = (float)((ulonglong)*(undefined8 *)((int)param_1[10] + 8) >> 0x20);
    fVar33 = local_110 * local_110;
    fVar45 = fStack_10c * fStack_10c;
    fVar49 = fStack_108 * fStack_108;
    auVar73._4_4_ = fVar33;
    auVar73._0_4_ = fVar33;
    auVar73._8_4_ = fVar33;
    auVar73._12_4_ = fVar33;
    auVar57._0_4_ = fVar45 + fVar33 + fVar49;
    auVar57._4_4_ = fVar45 + fVar33 + fVar49;
    auVar57._8_4_ = fVar45 + fVar33 + fVar49;
    auVar57._12_4_ = fVar45 + fVar33 + fVar49;
    auVar74 = rsqrtps(auVar73,auVar57);
    fVar33 = auVar74._0_4_;
    fVar45 = auVar74._4_4_;
    fVar49 = auVar74._8_4_;
    fVar51 = auVar74._12_4_;
    local_110 = (float)(~-(uint)(auVar57._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar33 * auVar57._0_4_ * fVar33) * fVar33 * 0.5)) * local_110;
    fStack_10c = (float)(~-(uint)(auVar57._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar45 * auVar57._4_4_ * fVar45) * fVar45 * 0.5)) * fStack_10c
    ;
    fStack_108 = (float)(~-(uint)(auVar57._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar49 * auVar57._8_4_ * fVar49) * fVar49 * 0.5)) * fStack_108
    ;
    fStack_104 = (float)(~-(uint)(auVar57._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar51 * auVar57._12_4_ * fVar51) * fVar51 * 0.5)) *
                 fStack_104;
    local_190 = 1e+07;
    fStack_18c = 1e+07;
    fStack_188 = 1e+07;
    fStack_184 = 1e+07;
    local_1a0 = 0.0;
    fStack_19c = 0.0;
    fStack_198 = 0.0;
    fStack_194 = 0.0;
    local_2b0 = 0.0;
    fStack_2ac = 0.0;
    fStack_2a8 = 0.0;
    fStack_2a4 = 0.0;
    local_14 = 0;
    local_18 = 1;
    local_150 = 0.0;
    fStack_14c = 0.0;
    fStack_148 = 0.0;
    fStack_144 = 0.0;
    local_b4 = 0;
    local_4b0 = 1e-10;
    uStack_4ac = 0x2edbe6ff;
    uStack_4a8 = 0x2edbe6ff;
    uStack_4a4 = 0x2edbe6ff;
    fStack_4cc = local_4d0;
    fStack_4c8 = local_4d0;
    fStack_4c4 = local_4d0;
    fStack_33c = local_340;
    fStack_338 = local_340;
    fStack_334 = local_340;
    local_120 = uVar3;
    uStack_118 = uVar4;
    local_40 = param_1;
    if (local_4d0 < 1e+14) {
LAB_01462600:
      iVar18 = local_14;
      (**(code **)(*param_3 + 4))
                (param_4,param_1 + 10,param_5,param_6 + 8,&local_150,local_500,&local_420);
      local_150 = local_150 - local_420;
      fStack_14c = fStack_14c - fStack_41c;
      fStack_148 = fStack_148 - fStack_418;
      fStack_144 = fStack_144 - fStack_414;
      iVar15 = 0;
      pauVar19 = extraout_ECX;
      if (0 < iVar18) {
        pauVar19 = param_1 + 2;
        uVar25 = extraout_EDX;
        do {
          auVar58._4_4_ = -(uint)(fStack_14c == *(float *)((int)*pauVar19 + 4));
          auVar58._0_4_ = -(uint)(local_150 == *(float *)*pauVar19);
          auVar58._8_4_ = -(uint)(fStack_148 == *(float *)((int)*pauVar19 + 8));
          auVar58._12_4_ = -(uint)(fStack_144 == *(float *)((int)*pauVar19 + 0xc));
          uVar25 = movmskps(uVar25,auVar58);
          uVar25 = uVar25 & 7;
          if ((char)uVar25 == '\a') goto LAB_01462681;
          iVar15 = iVar15 + 1;
          pauVar19 = pauVar19 + 1;
        } while (iVar15 < iVar18);
      }
      pauVar20 = param_1 + iVar18 + 2;
      *(float *)*pauVar20 = local_150;
      *(float *)((int)*pauVar20 + 4) = fStack_14c;
      *(float *)((int)*pauVar20 + 8) = fStack_148;
      *(float *)((int)*pauVar20 + 0xc) = fStack_144;
      local_14 = iVar18 + 1;
LAB_01462681:
      fVar33 = *(float *)((int)param_1[10] + 4);
      fVar34 = ((float)local_120 - (local_110 * local_340 + local_150)) * *(float *)param_1[10];
      fVar46 = (local_120._4_4_ - (fStack_10c * fStack_33c + fStack_14c)) * fVar33;
      fVar50 = ((float)uStack_118 - (fStack_108 * fStack_338 + fStack_148)) *
               *(float *)((int)param_1[10] + 8);
      fVar55 = fVar46 + fVar34 + fVar50;
      fVar45 = (float)local_120;
      fVar49 = local_120._4_4_;
      fVar51 = (float)uStack_118;
      fVar81 = uStack_118._4_4_;
      if (local_b0 < fVar55) {
        fVar49 = *(float *)((int)*local_d4 + 4);
        fVar45 = *(float *)*local_d4 * *(float *)param_1[10];
        fVar33 = fVar49 * fVar33;
        fVar51 = *(float *)((int)*local_d4 + 8) * *(float *)((int)param_1[10] + 8);
        auVar83._4_4_ = fVar45;
        auVar83._0_4_ = fVar45;
        auVar83._8_4_ = fVar45;
        auVar83._12_4_ = fVar45;
        auVar75._0_4_ = fVar33 + fVar45 + fVar51;
        auVar75._4_4_ = fVar33 + fVar45 + fVar51;
        auVar75._8_4_ = fVar33 + fVar45 + fVar51;
        auVar75._12_4_ = fVar33 + fVar45 + fVar51;
        if (local_b0 <= auVar75._0_4_) goto LAB_014645a0;
        auVar74 = rcpps(auVar83,auVar75);
        local_1a0 = local_1a0 - (2.0 - auVar74._0_4_ * auVar75._0_4_) * auVar74._0_4_ * fVar55;
        fStack_19c = fStack_19c -
                     (2.0 - auVar74._4_4_ * auVar75._4_4_) * auVar74._4_4_ *
                     (fVar46 + fVar34 + fVar50);
        fStack_198 = fStack_198 -
                     (2.0 - auVar74._8_4_ * auVar75._8_4_) * auVar74._8_4_ *
                     (fVar46 + fVar34 + fVar50);
        fStack_194 = fStack_194 -
                     (2.0 - auVar74._12_4_ * auVar75._12_4_) * auVar74._12_4_ *
                     (fVar46 + fVar34 + fVar50);
        if (1.0 <= local_1a0) goto LAB_014645a0;
        fVar45 = *param_6 + local_1a0 * *(float *)*local_d4;
        fVar49 = param_6[1] + fStack_19c * fVar49;
        fVar51 = param_6[2] + fStack_198 * *(float *)((int)*local_d4 + 8);
        fVar81 = param_6[3] + fStack_194 * *(float *)((int)*local_d4 + 0xc);
        local_120 = CONCAT44(fVar49,fVar45);
        uStack_118 = CONCAT44(fVar81,fVar51);
        local_2b0 = local_110;
        fStack_2ac = fStack_10c;
        fStack_2a8 = fStack_108;
        fStack_2a4 = fStack_104;
        pauVar19 = local_d4;
      }
      uVar3 = *(undefined8 *)param_1[10];
      uStack_288 = *(undefined8 *)((int)param_1[10] + 8);
      pauVar20 = param_1 + 6;
      *(float *)*pauVar20 = fVar45;
      *(float *)((int)param_1[6] + 4) = fVar49;
      *(float *)((int)param_1[6] + 8) = fVar51;
      *(float *)((int)param_1[6] + 0xc) = fVar81;
      uVar25 = local_14 * 8 | local_18;
      local_38 = pauVar20;
      pauVar24 = param_1;
joined_r0x01462793:
      uVar25 = uVar25 - 9;
      if (0x18 < uVar25) goto switchD_014627a7_caseD_d;
      pauVar23 = (undefined1 (*) [16])0x1;
      uVar27 = (uint)(&switchD_014627a7::switchdataD_014645e0)[uVar25];
      switch(uVar25) {
      case 9:
        goto switchD_014627a7_caseD_9;
      case 10:
        goto switchD_014627a7_caseD_a;
      case 0xb:
        goto switchD_014627a7_caseD_b;
      case 0xc:
        local_230 = 1.0;
        fStack_22c = 1.0;
        fStack_228 = 1.0;
        fStack_224 = 1.0;
        local_1d0 = *(float *)pauVar24[2];
        fStack_1cc = *(float *)((int)pauVar24[2] + 4);
        fStack_1c8 = *(float *)((int)pauVar24[2] + 8);
        fStack_1c4 = *(float *)((int)pauVar24[2] + 0xc);
        local_58 = pauVar20;
        break;
      default:
        goto switchD_014627a7_caseD_d;
      case 0x11:
        goto switchD_014627a7_caseD_11;
      case 0x12:
        goto switchD_014627a7_caseD_12;
      case 0x13:
        pauVar23 = pauVar24 + 2;
        pauVar16 = pauVar20;
        goto LAB_014627bc;
      case 0x19:
        goto switchD_014627a7_caseD_19;
      case 0x1a:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pauVar16 = pauVar24 + 2;
        pauVar23 = pauVar20;
LAB_014627bc:
        if (*(int *)pauVar24[1] == 2) {
          fVar33 = *(float *)*pauVar16;
          fVar45 = *(float *)((int)*pauVar16 + 4);
          fVar49 = *(float *)((int)*pauVar16 + 8);
          fVar51 = *(float *)((int)*pauVar16 + 0xc);
          fVar81 = *(float *)pauVar16[2];
          fVar34 = *(float *)((int)pauVar16[2] + 4);
          fVar46 = *(float *)((int)pauVar16[2] + 8);
          fStack_c4 = *(float *)((int)pauVar16[2] + 0xc);
          fVar50 = *(float *)pauVar16[1];
          fVar55 = *(float *)((int)pauVar16[1] + 4);
          fVar71 = *(float *)((int)pauVar16[1] + 8);
          fVar91 = *(float *)((int)pauVar16[1] + 0xc);
          local_400 = fVar50 - fVar81;
          fStack_3fc = fVar55 - fVar34;
          fStack_3f8 = fVar71 - fVar46;
          fStack_3f4 = fVar91 - fStack_c4;
          local_160 = fVar33 - fVar81;
          fStack_15c = fVar45 - fVar34;
          fStack_158 = fVar49 - fVar46;
          fStack_154 = fVar51 - fStack_c4;
          local_70 = *(float *)pauVar23[1];
          fStack_6c = *(float *)((int)pauVar23[1] + 4);
          fStack_68 = *(float *)((int)pauVar23[1] + 8);
          fStack_64 = *(float *)((int)pauVar23[1] + 0xc);
          local_320 = fStack_158 * fStack_3fc - fStack_15c * fStack_3f8;
          fStack_31c = local_160 * fStack_3f8 - fStack_158 * local_400;
          fStack_318 = fStack_15c * local_400 - local_160 * fStack_3fc;
          fStack_314 = fStack_154 * fStack_3f4 - fStack_154 * fStack_3f4;
          local_90 = *(float *)*pauVar23;
          fStack_8c = *(float *)((int)*pauVar23 + 4);
          fStack_88 = *(float *)((int)*pauVar23 + 8);
          fStack_84 = *(float *)((int)*pauVar23 + 0xc);
          local_4e0 = local_70 - fVar33;
          fStack_4dc = fStack_6c - fVar45;
          fStack_4d8 = fStack_68 - fVar49;
          fStack_4d4 = fStack_64 - fVar51;
          fVar93 = (local_90 - fVar33) * local_320;
          fVar100 = (fStack_8c - fVar45) * fStack_31c;
          fVar109 = (fStack_88 - fVar49) * fStack_318;
          pauVar19 = pauVar23 + 1;
          fVar52 = fVar100 + fVar93 + fVar109;
          fVar56 = fVar100 + fVar93 + fVar109;
          fVar82 = fVar100 + fVar93 + fVar109;
          fVar109 = fVar100 + fVar93 + fVar109;
          local_d0 = local_4e0 * local_320;
          local_50 = fStack_4dc * fStack_31c;
          fVar35 = fStack_4d8 * fStack_318;
          fVar93 = local_50 + local_d0 + fVar35;
          fVar100 = local_50 + local_d0 + fVar35;
          fVar47 = local_50 + local_d0 + fVar35;
          fVar35 = local_50 + local_d0 + fVar35;
          local_440 = fVar52 * fVar52;
          fStack_43c = fVar56 * fVar56;
          fStack_438 = fVar82 * fVar82;
          fStack_434 = fVar109 * fVar109;
          local_380 = fVar93 * fVar93;
          fStack_37c = fVar100 * fVar100;
          fStack_378 = fVar47 * fVar47;
          fStack_374 = fVar35 * fVar35;
          auVar114._0_4_ = fVar93 * fVar52;
          auVar114._4_4_ = fVar100 * fVar56;
          auVar114._8_4_ = fVar47 * fVar82;
          auVar114._12_4_ = fVar35 * fVar109;
          iVar18 = movmskps(1,auVar114);
          local_54 = pauVar19;
          if (iVar18 == 0) {
            local_180 = (float)(-(uint)(local_440 < local_380) & (uint)local_90 |
                               ~-(uint)(local_440 < local_380) & (uint)local_70);
            fStack_17c = (float)(-(uint)(fStack_43c < fStack_37c) & (uint)fStack_8c |
                                ~-(uint)(fStack_43c < fStack_37c) & (uint)fStack_6c);
            fStack_178 = (float)(-(uint)(fStack_438 < fStack_378) & (uint)fStack_88 |
                                ~-(uint)(fStack_438 < fStack_378) & (uint)fStack_68);
            fStack_174 = (float)(-(uint)(fStack_434 < fStack_374) & (uint)fStack_84 |
                                ~-(uint)(fStack_434 < fStack_374) & (uint)fStack_64);
            fStack_cc = fVar81 - fVar50;
            fStack_c8 = fVar34 - fVar55;
            local_d0 = fVar46 - fVar71;
            fStack_c4 = fStack_c4 - fVar91;
            local_30._4_4_ = local_d0;
            local_30._0_4_ = fStack_c8;
            fStack_28 = fStack_cc;
            fStack_24 = fStack_c4;
            fVar109 = fStack_c8 * fStack_158 - local_d0 * fStack_15c;
            fVar35 = local_d0 * local_160 - fStack_cc * fStack_158;
            fVar47 = fStack_cc * fStack_15c - fStack_c8 * local_160;
            fVar52 = fStack_c4 * fStack_154 - fStack_c4 * fStack_154;
            fVar100 = ((fStack_178 - fVar49) * (fVar50 - fVar33) -
                      (local_180 - fVar33) * (fVar71 - fVar49)) * fVar35;
            fVar93 = ((fStack_174 - fVar51) * (fVar91 - fVar51) -
                     (fStack_174 - fVar51) * (fVar91 - fVar51)) * fVar52;
            fVar91 = ((local_180 - fVar50) * fStack_c8 - (fStack_17c - fVar55) * fStack_cc) * fVar47
                     + ((fStack_17c - fVar55) * local_d0 - (fStack_178 - fVar71) * fStack_c8) *
                       fVar109 + ((fStack_178 - fVar71) * fStack_cc -
                                 (local_180 - fVar50) * local_d0) * fVar35;
            fVar51 = ((local_180 - fVar81) * fStack_15c - (fStack_17c - fVar34) * local_160) *
                     fVar47 + ((fStack_17c - fVar34) * fStack_158 -
                              (fStack_178 - fVar46) * fStack_15c) * fVar109 +
                              ((fStack_178 - fVar46) * local_160 - (local_180 - fVar81) * fStack_158
                              ) * fVar35;
            fVar45 = ((local_180 - fVar33) * (fVar55 - fVar45) -
                     (fStack_17c - fVar45) * (fVar50 - fVar33)) * fVar47 +
                     ((fStack_17c - fVar45) * (fVar71 - fVar49) -
                     (fStack_178 - fVar49) * (fVar55 - fVar45)) * fVar109 + fVar100;
            fVar93 = fVar93 + fVar100 + fVar93;
            auVar59._4_4_ = -(uint)(fVar51 < fStack_ac);
            auVar59._0_4_ = -(uint)(fVar91 < local_b0);
            auVar59._8_4_ = -(uint)(fVar45 < fStack_a8);
            auVar59._12_4_ = -(uint)(fVar93 < fStack_a4);
            uVar25 = movmskps(pauVar19,auVar59);
            local_34 = (undefined1 (*) [16])(uVar25 & 7);
            fVar33 = fVar91;
            if (local_34 == (undefined1 (*) [16])&DAT_00000007) {
              fVar49 = (*(float *)local_40[2] - *(float *)*pauVar20) * fVar109;
              fVar81 = (*(float *)((int)local_40[2] + 4) - *(float *)((int)param_1[6] + 4)) * fVar35
              ;
              fVar34 = (*(float *)((int)local_40[2] + 8) - *(float *)((int)param_1[6] + 8)) * fVar47
              ;
              auVar76._0_4_ = fVar81 + fVar49 + fVar34;
              auVar76._4_4_ = fVar81 + fVar49 + fVar34;
              auVar76._8_4_ = fVar81 + fVar49 + fVar34;
              auVar76._12_4_ = fVar81 + fVar49 + fVar34;
              iVar18 = movmskps(pauVar20,auVar76);
              if (iVar18 != 0) {
                uVar4 = *(undefined8 *)*pauVar16;
                fVar109 = -fVar109;
                fVar35 = -fVar35;
                fVar47 = -fVar47;
                fVar52 = -fVar52;
                uVar7 = *(undefined8 *)((int)*pauVar16 + 8);
                uVar22 = *(undefined4 *)((int)pauVar16[1] + 4);
                uVar48 = *(undefined4 *)((int)pauVar16[1] + 8);
                uVar53 = *(undefined4 *)((int)pauVar16[1] + 0xc);
                *(undefined4 *)*pauVar16 = *(undefined4 *)pauVar16[1];
                *(undefined4 *)((int)*pauVar16 + 4) = uVar22;
                *(undefined4 *)((int)*pauVar16 + 8) = uVar48;
                *(undefined4 *)((int)*pauVar16 + 0xc) = uVar53;
                local_200._0_4_ = (undefined4)uVar4;
                local_200._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                uStack_1f8._0_4_ = (undefined4)uVar7;
                uStack_1f8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
                *(undefined4 *)pauVar16[1] = (undefined4)local_200;
                *(undefined4 *)((int)pauVar16[1] + 4) = local_200._4_4_;
                *(undefined4 *)((int)pauVar16[1] + 8) = (undefined4)uStack_1f8;
                *(undefined4 *)((int)pauVar16[1] + 0xc) = uStack_1f8._4_4_;
                *(undefined4 *)((int)local_40[1] + 4) = 1;
                fVar33 = fVar51;
                fVar51 = fVar91;
                local_200 = uVar4;
                uStack_1f8 = uVar7;
              }
            }
            *(float *)local_40[10] = fVar109;
            *(float *)((int)local_40[10] + 4) = fVar35;
            *(float *)((int)local_40[10] + 8) = fVar47;
            *(float *)((int)local_40[10] + 0xc) = fVar52;
            *(float *)*local_40 = fVar33;
            *(float *)((int)*local_40 + 4) = fVar51;
            *(float *)((int)*local_40 + 8) = fVar45;
            *(float *)((int)*local_40 + 0xc) = fVar93;
            if (local_34 != (undefined1 (*) [16])&DAT_00000007) goto LAB_01462b89;
            *(float *)*pauVar23 = local_180;
            *(float *)((int)*pauVar23 + 4) = fStack_17c;
            *(float *)((int)*pauVar23 + 8) = fStack_178;
            *(float *)((int)*pauVar23 + 0xc) = fStack_174;
            iVar18 = 0;
            pauVar19 = local_40;
            local_90 = fStack_15c;
            fStack_8c = fStack_158;
            fStack_88 = local_160;
            fStack_84 = fStack_154;
            local_50 = fStack_158;
            fStack_4c = local_160;
            fStack_48 = fStack_15c;
            fStack_44 = fStack_154;
          }
          else {
            auVar95._0_4_ = fVar52 - fVar93;
            auVar95._4_4_ = fVar56 - fVar100;
            auVar95._8_4_ = fVar82 - fVar47;
            auVar95._12_4_ = fVar109 - fVar35;
            auVar74 = rcpps(auVar114,auVar95);
            local_4a0 = (2.0 - auVar74._0_4_ * auVar95._0_4_) * auVar74._0_4_ * fVar52 *
                        (local_70 - local_90) + local_90;
            fStack_49c = (2.0 - auVar74._4_4_ * auVar95._4_4_) * auVar74._4_4_ * fVar56 *
                         (fStack_6c - fStack_8c) + fStack_8c;
            fStack_498 = (2.0 - auVar74._8_4_ * auVar95._8_4_) * auVar74._8_4_ * fVar82 *
                         (fStack_68 - fStack_88) + fStack_88;
            fStack_494 = (2.0 - auVar74._12_4_ * auVar95._12_4_) * auVar74._12_4_ * fVar109 *
                         (fStack_64 - fStack_84) + fStack_84;
            fVar93 = fVar33 - local_4a0;
            fVar100 = fVar45 - fStack_49c;
            fVar109 = fVar49 - fStack_498;
            fVar35 = fVar50 - local_4a0;
            fVar47 = fVar55 - fStack_49c;
            fVar52 = fVar71 - fStack_498;
            fVar56 = fVar81 - local_4a0;
            fVar82 = fVar34 - fStack_49c;
            fVar113 = fVar46 - fStack_498;
            fStack_358 = (fVar46 - fVar49) * (fVar55 - fVar45) -
                         (fVar34 - fVar45) * (fVar71 - fVar49);
            local_360 = (fVar81 - fVar33) * (fVar71 - fVar49) -
                        (fVar46 - fVar49) * (fVar50 - fVar33);
            fStack_35c = (fVar34 - fVar45) * (fVar50 - fVar33) -
                         (fVar81 - fVar33) * (fVar55 - fVar45);
            fStack_354 = (fStack_c4 - fVar51) * (fVar91 - fVar51) -
                         (fStack_c4 - fVar51) * (fVar91 - fVar51);
            local_30._4_4_ = fVar93 * fStack_35c;
            local_30._0_4_ = fVar109 * local_360;
            fStack_28 = fVar100 * fStack_358;
            fStack_24 = (fVar51 - fStack_494) * fStack_354;
            fVar33 = (fVar52 * fStack_358 - fVar35 * fStack_35c) * fVar100;
            fVar45 = ((fVar91 - fStack_494) * fStack_354 - (fVar91 - fStack_494) * fStack_354) *
                     (fVar51 - fStack_494);
            auVar36._4_4_ =
                 -(uint)(fStack_ac <
                        (fVar93 * local_360 - fVar100 * fStack_358) * fVar113 +
                        (fVar100 * fStack_35c - fVar109 * local_360) * fVar56 +
                        (fVar109 * fStack_358 - fVar93 * fStack_35c) * fVar82);
            auVar36._0_4_ =
                 -(uint)(local_b0 <
                        (fVar56 * local_360 - fVar82 * fStack_358) * fVar52 +
                        (fVar82 * fStack_35c - fVar113 * local_360) * fVar35 +
                        (fVar113 * fStack_358 - fVar56 * fStack_35c) * fVar47);
            auVar36._8_4_ =
                 -(uint)(fStack_a8 <
                        (fVar35 * local_360 - fVar47 * fStack_358) * fVar109 +
                        (fVar47 * fStack_35c - fVar52 * local_360) * fVar93 + fVar33);
            auVar36._12_4_ = -(uint)(fStack_a4 < fVar45 + fVar33 + fVar45);
            uVar22 = movmskps(iVar18,auVar36);
            fStack_cc = local_d0;
            fStack_c8 = local_d0;
            fStack_c4 = local_d0;
            if (((byte)uVar22 & 7) != 7) {
LAB_01462b89:
              local_90 = *(float *)*pauVar23;
              fStack_8c = *(float *)((int)*pauVar23 + 4);
              fStack_88 = *(float *)((int)*pauVar23 + 8);
              fStack_84 = *(float *)((int)*pauVar23 + 0xc);
              local_50 = *(float *)pauVar16[2];
              fStack_4c = *(float *)((int)pauVar16[2] + 4);
              fStack_48 = *(float *)((int)pauVar16[2] + 8);
              fStack_44 = *(float *)((int)pauVar16[2] + 0xc);
              local_70 = local_50 - local_90;
              fStack_6c = fStack_4c - fStack_8c;
              fStack_68 = fStack_48 - fStack_88;
              fVar71 = *(float *)*pauVar19 - local_90;
              fVar91 = *(float *)((int)pauVar23[1] + 4) - fStack_8c;
              fVar93 = *(float *)((int)pauVar23[1] + 8) - fStack_88;
              fVar33 = fVar71 * local_400;
              fVar45 = fVar91 * fStack_3fc;
              fVar49 = fVar93 * fStack_3f8;
              fVar51 = fVar45 + fVar33 + fVar49;
              fVar81 = fVar45 + fVar33 + fVar49;
              fVar34 = fVar45 + fVar33 + fVar49;
              fVar49 = fVar45 + fVar33 + fVar49;
              fVar33 = local_70 * fVar71;
              fVar45 = fStack_6c * fVar91;
              fStack_2e4 = fStack_68 * fVar93;
              fStack_64 = fStack_44 - fStack_84;
              local_2f0 = fVar45 + fVar33 + fStack_2e4;
              fStack_2ec = fVar45 + fVar33 + fStack_2e4;
              fStack_2e8 = fVar45 + fVar33 + fStack_2e4;
              fStack_2e4 = fVar45 + fVar33 + fStack_2e4;
              fVar33 = local_70 * local_400;
              fVar45 = fStack_6c * fStack_3fc;
              fStack_2c4 = fStack_68 * fStack_3f8;
              local_2d0 = fVar45 + fVar33 + fStack_2c4;
              fStack_2cc = fVar45 + fVar33 + fStack_2c4;
              fStack_2c8 = fVar45 + fVar33 + fStack_2c4;
              fStack_2c4 = fVar45 + fVar33 + fStack_2c4;
              fVar46 = local_400 * local_400;
              fVar50 = fStack_3fc * fStack_3fc;
              fVar55 = fStack_3f8 * fStack_3f8;
              fVar33 = fVar71 * fVar71;
              fVar45 = fVar91 * fVar91;
              fStack_4e4 = fVar93 * fVar93;
              local_300 = fVar45 + fVar33 + fStack_4e4;
              fStack_2fc = fVar45 + fVar33 + fStack_4e4;
              fStack_2f8 = fVar45 + fVar33 + fStack_4e4;
              fStack_2f4 = fVar45 + fVar33 + fStack_4e4;
              auVar104._0_4_ = fVar50 + fVar46 + fVar55;
              auVar104._4_4_ = fVar50 + fVar46 + fVar55;
              auVar104._8_4_ = fVar50 + fVar46 + fVar55;
              auVar104._12_4_ = fVar50 + fVar46 + fVar55;
              auVar110._0_4_ = fVar51 * fVar51;
              auVar110._4_4_ = fVar81 * fVar81;
              auVar110._8_4_ = fVar34 * fVar34;
              auVar110._12_4_ = fVar49 * fVar49;
              auVar84._0_4_ = auVar104._0_4_ * local_300 - auVar110._0_4_;
              auVar84._4_4_ = auVar104._4_4_ * fStack_2fc - auVar110._4_4_;
              auVar84._8_4_ = auVar104._8_4_ * fStack_2f8 - auVar110._8_4_;
              auVar84._12_4_ = auVar104._12_4_ * fStack_2f4 - auVar110._12_4_;
              auVar74 = maxps(auVar84,_DAT_01701cf0);
              auVar94 = rcpps(auVar110,auVar74);
              fVar46 = auVar74._0_4_;
              fVar50 = auVar74._4_4_;
              fVar55 = auVar74._8_4_;
              fVar100 = auVar74._12_4_;
              local_3c0._0_4_ = (2.0 - auVar94._0_4_ * fVar46) * auVar94._0_4_;
              local_3c0._4_4_ = (2.0 - auVar94._4_4_ * fVar50) * auVar94._4_4_;
              local_3c0._8_4_ = (2.0 - auVar94._8_4_ * fVar55) * auVar94._8_4_;
              local_3c0._12_4_ = (2.0 - auVar94._12_4_ * fVar100) * auVar94._12_4_;
              auVar74 = rcpps(local_3c0,auVar104);
              auVar115._0_4_ = auVar74._0_4_ * auVar104._0_4_;
              auVar115._4_4_ = auVar74._4_4_ * auVar104._4_4_;
              auVar115._8_4_ = auVar74._8_4_ * auVar104._8_4_;
              auVar115._12_4_ = auVar74._12_4_ * auVar104._12_4_;
              local_3e0 = (2.0 - auVar115._0_4_) * auVar74._0_4_;
              fStack_3dc = (2.0 - auVar115._4_4_) * auVar74._4_4_;
              fStack_3d8 = (2.0 - auVar115._8_4_) * auVar74._8_4_;
              fStack_3d4 = (2.0 - auVar115._12_4_) * auVar74._12_4_;
              auVar11._4_4_ = fStack_2fc;
              auVar11._0_4_ = local_300;
              auVar11._8_4_ = fStack_2f8;
              auVar11._12_4_ = fStack_2f4;
              auVar74 = rcpps(auVar115,auVar11);
              local_480 = (2.0 - auVar74._0_4_ * local_300) * auVar74._0_4_;
              fStack_47c = (2.0 - auVar74._4_4_ * fStack_2fc) * auVar74._4_4_;
              fStack_478 = (2.0 - auVar74._8_4_ * fStack_2f8) * auVar74._8_4_;
              fStack_474 = (2.0 - auVar74._12_4_ * fStack_2f4) * auVar74._12_4_;
              local_460 = local_2f0 * auVar104._0_4_ - fVar51 * local_2d0;
              fStack_45c = fStack_2ec * auVar104._4_4_ - fVar81 * fStack_2cc;
              fStack_458 = fStack_2e8 * auVar104._8_4_ - fVar34 * fStack_2c8;
              fStack_454 = fStack_2e4 * auVar104._12_4_ - fVar49 * fStack_2c4;
              local_3a0 = -(uint)(local_460 < fVar46);
              uStack_39c = -(uint)(fStack_45c < fVar50);
              uStack_398 = -(uint)(fStack_458 < fVar55);
              uStack_394 = -(uint)(fStack_454 < fVar100);
              local_4c0 = -(uint)(fVar46 <= 1.1920929e-07);
              uStack_4bc = -(uint)(fVar50 <= 1.1920929e-07);
              uStack_4b8 = -(uint)(fVar55 <= 1.1920929e-07);
              uStack_4b4 = -(uint)(fVar100 <= 1.1920929e-07);
              auVar116._0_4_ = ~local_3a0 & (uint)fVar46;
              auVar116._4_4_ = ~uStack_39c & (uint)fVar50;
              auVar116._8_4_ = ~uStack_398 & (uint)fVar55;
              auVar116._12_4_ = ~uStack_394 & (uint)fVar100;
              auVar85._0_4_ = (uint)local_460 & local_3a0;
              auVar85._4_4_ = (uint)fStack_45c & uStack_39c;
              auVar85._8_4_ = (uint)fStack_458 & uStack_398;
              auVar85._12_4_ = (uint)fStack_454 & uStack_394;
              auVar74 = maxps(_DAT_01701b10,auVar116 | auVar85);
              fVar46 = (float)(~local_4c0 & (uint)(auVar74._0_4_ * local_3c0._0_4_) |
                              local_4c0 & 0x3f800000) * fVar51 * local_3e0 - local_3e0 * local_2d0;
              fVar50 = (float)(~uStack_4bc & (uint)(auVar74._4_4_ * local_3c0._4_4_) |
                              uStack_4bc & 0x3f800000) * fVar81 * fStack_3dc -
                       fStack_3dc * fStack_2cc;
              fVar55 = (float)(~uStack_4b8 & (uint)(auVar74._8_4_ * local_3c0._8_4_) |
                              uStack_4b8 & 0x3f800000) * fVar34 * fStack_3d8 -
                       fStack_3d8 * fStack_2c8;
              fVar100 = (float)(~uStack_4b4 & (uint)(auVar74._12_4_ * local_3c0._12_4_) |
                               uStack_4b4 & 0x3f800000) * fVar49 * fStack_3d4 -
                        fStack_3d4 * fStack_2c4;
              uVar25 = -(uint)(fVar46 < 1.0);
              uVar27 = -(uint)(fVar50 < 1.0);
              uVar29 = -(uint)(fVar55 < 1.0);
              uVar31 = -(uint)(fVar100 < 1.0);
              auVar86._0_4_ = (uint)fVar46 & uVar25;
              auVar86._4_4_ = (uint)fVar50 & uVar27;
              auVar86._8_4_ = (uint)fVar55 & uVar29;
              auVar86._12_4_ = (uint)fVar100 & uVar31;
              auVar117._0_8_ = CONCAT44(~uVar27,~uVar25) & 0x3f8000003f800000;
              auVar117._8_4_ = ~uVar29 & 0x3f800000;
              auVar117._12_4_ = ~uVar31 & 0x3f800000;
              auVar94 = maxps(_DAT_01701b10,auVar117 | auVar86);
              fVar51 = fVar51 * local_480 * auVar94._0_4_ + local_2f0 * local_480;
              fVar81 = fVar81 * fStack_47c * auVar94._4_4_ + fStack_2ec * fStack_47c;
              fVar34 = fVar34 * fStack_478 * auVar94._8_4_ + fStack_2e8 * fStack_478;
              fVar49 = fVar49 * fStack_474 * auVar94._12_4_ + fStack_2e4 * fStack_474;
              uVar25 = -(uint)(fVar51 < 1.0);
              uVar27 = -(uint)(fVar81 < 1.0);
              uVar29 = -(uint)(fVar34 < 1.0);
              uVar31 = -(uint)(fVar49 < 1.0);
              auVar60._0_4_ = (uint)fVar51 & uVar25;
              auVar60._4_4_ = (uint)fVar81 & uVar27;
              auVar60._8_4_ = (uint)fVar34 & uVar29;
              auVar60._12_4_ = (uint)fVar49 & uVar31;
              auVar118._0_8_ = CONCAT44(~uVar27,~uVar25) & 0x3f8000003f800000;
              auVar118._8_4_ = ~uVar29 & 0x3f800000;
              auVar118._12_4_ = ~uVar31 & 0x3f800000;
              auVar74 = maxps(_DAT_01701b10,auVar118 | auVar60);
              fVar49 = (auVar74._0_4_ * fVar71 + local_90) - (local_50 + auVar94._0_4_ * local_400);
              fVar51 = (auVar74._4_4_ * fVar91 + fStack_8c) -
                       (fStack_4c + auVar94._4_4_ * fStack_3fc);
              fStack_384 = (auVar74._8_4_ * fVar93 + fStack_88) -
                           (fStack_48 + auVar94._8_4_ * fStack_3f8);
              fVar49 = fVar49 * fVar49;
              fVar51 = fVar51 * fVar51;
              fStack_384 = fStack_384 * fStack_384;
              local_390 = fVar51 + fVar49 + fStack_384;
              fStack_38c = fVar51 + fVar49 + fStack_384;
              fStack_388 = fVar51 + fVar49 + fStack_384;
              fStack_384 = fVar51 + fVar49 + fStack_384;
              fVar49 = fVar71 * local_160;
              fVar51 = fVar91 * fStack_15c;
              fVar46 = fVar93 * fStack_158;
              fVar100 = fVar51 + fVar49 + fVar46;
              fVar109 = fVar51 + fVar49 + fVar46;
              fVar35 = fVar51 + fVar49 + fVar46;
              fVar46 = fVar51 + fVar49 + fVar46;
              fVar49 = fVar71 * local_70;
              fVar51 = fVar91 * fStack_6c;
              fStack_214 = fVar93 * fStack_68;
              local_220 = fVar51 + fVar49 + fStack_214;
              fStack_21c = fVar51 + fVar49 + fStack_214;
              fStack_218 = fVar51 + fVar49 + fStack_214;
              fStack_214 = fVar51 + fVar49 + fStack_214;
              fVar49 = local_160 * local_70;
              fVar51 = fStack_15c * fStack_6c;
              fStack_274 = fStack_158 * fStack_68;
              local_280 = fVar51 + fVar49 + fStack_274;
              fStack_27c = fVar51 + fVar49 + fStack_274;
              fStack_278 = fVar51 + fVar49 + fStack_274;
              fStack_274 = fVar51 + fVar49 + fStack_274;
              fVar49 = local_160 * local_160;
              fVar51 = fStack_15c * fStack_15c;
              fVar81 = fStack_158 * fStack_158;
              local_4f0 = fVar45 + fVar33 + fStack_4e4;
              fStack_4ec = fVar45 + fVar33 + fStack_4e4;
              fStack_4e8 = fVar45 + fVar33 + fStack_4e4;
              fStack_4e4 = fVar45 + fVar33 + fStack_4e4;
              auVar37._0_4_ = fVar51 + fVar49 + fVar81;
              auVar37._4_4_ = fVar51 + fVar49 + fVar81;
              auVar37._8_4_ = fVar51 + fVar49 + fVar81;
              auVar37._12_4_ = fVar51 + fVar49 + fVar81;
              auVar111._0_4_ = fVar100 * fVar100;
              auVar111._4_4_ = fVar109 * fVar109;
              auVar111._8_4_ = fVar35 * fVar35;
              auVar111._12_4_ = fVar46 * fVar46;
              auVar61._0_4_ = auVar37._0_4_ * local_4f0 - auVar111._0_4_;
              auVar61._4_4_ = auVar37._4_4_ * fStack_4ec - auVar111._4_4_;
              auVar61._8_4_ = auVar37._8_4_ * fStack_4e8 - auVar111._8_4_;
              auVar61._12_4_ = auVar37._12_4_ * fStack_4e4 - auVar111._12_4_;
              auVar74 = maxps(auVar61,_DAT_01701cf0);
              auVar94 = rcpps(auVar111,auVar74);
              fVar81 = auVar74._0_4_;
              fVar34 = auVar74._4_4_;
              fVar50 = auVar74._8_4_;
              fVar55 = auVar74._12_4_;
              local_310._0_4_ = (2.0 - auVar94._0_4_ * fVar81) * auVar94._0_4_;
              local_310._4_4_ = (2.0 - auVar94._4_4_ * fVar34) * auVar94._4_4_;
              local_310._8_4_ = (2.0 - auVar94._8_4_ * fVar50) * auVar94._8_4_;
              local_310._12_4_ = (2.0 - auVar94._12_4_ * fVar55) * auVar94._12_4_;
              auVar74 = rcpps(local_310,auVar37);
              auVar119._0_4_ = auVar74._0_4_ * auVar37._0_4_;
              auVar119._4_4_ = auVar74._4_4_ * auVar37._4_4_;
              auVar119._8_4_ = auVar74._8_4_ * auVar37._8_4_;
              auVar119._12_4_ = auVar74._12_4_ * auVar37._12_4_;
              local_350 = (2.0 - auVar119._0_4_) * auVar74._0_4_;
              fStack_34c = (2.0 - auVar119._4_4_) * auVar74._4_4_;
              fStack_348 = (2.0 - auVar119._8_4_) * auVar74._8_4_;
              fStack_344 = (2.0 - auVar119._12_4_) * auVar74._12_4_;
              auVar10._4_4_ = fStack_4ec;
              auVar10._0_4_ = local_4f0;
              auVar10._8_4_ = fStack_4e8;
              auVar10._12_4_ = fStack_4e4;
              _local_30 = rcpps(auVar119,auVar10);
              local_370 = (2.0 - local_30._0_4_ * local_4f0) * local_30._0_4_;
              fStack_36c = (2.0 - local_30._4_4_ * fStack_4ec) * local_30._4_4_;
              fStack_368 = (2.0 - local_30._8_4_ * fStack_4e8) * local_30._8_4_;
              fStack_364 = (2.0 - local_30._12_4_ * fStack_4e4) * local_30._12_4_;
              fVar33 = auVar37._0_4_ * local_220 - local_280 * fVar100;
              fVar45 = auVar37._4_4_ * fStack_21c - fStack_27c * fVar109;
              fVar49 = auVar37._8_4_ * fStack_218 - fStack_278 * fVar35;
              fVar51 = auVar37._12_4_ * fStack_214 - fStack_274 * fVar46;
              uVar25 = -(uint)(fVar33 < fVar81);
              uVar27 = -(uint)(fVar45 < fVar34);
              uVar29 = -(uint)(fVar49 < fVar50);
              uVar31 = -(uint)(fVar51 < fVar55);
              local_330 = -(uint)(fVar81 <= 1.1920929e-07);
              uStack_32c = -(uint)(fVar34 <= 1.1920929e-07);
              uStack_328 = -(uint)(fVar50 <= 1.1920929e-07);
              uStack_324 = -(uint)(fVar55 <= 1.1920929e-07);
              auVar96._0_4_ = uVar25 & (uint)fVar33;
              auVar96._4_4_ = uVar27 & (uint)fVar45;
              auVar96._8_4_ = uVar29 & (uint)fVar49;
              auVar96._12_4_ = uVar31 & (uint)fVar51;
              auVar120._0_4_ = ~uVar25 & (uint)fVar81;
              auVar120._4_4_ = ~uVar27 & (uint)fVar34;
              auVar120._8_4_ = ~uVar29 & (uint)fVar50;
              auVar120._12_4_ = ~uVar31 & (uint)fVar55;
              auVar74 = maxps(_DAT_01701b10,auVar96 | auVar120);
              fVar33 = (float)(~local_330 & (uint)(auVar74._0_4_ * local_310._0_4_) |
                              local_330 & 0x3f800000) * local_350 * fVar100 - local_350 * local_280;
              fVar45 = (float)(~uStack_32c & (uint)(auVar74._4_4_ * local_310._4_4_) |
                              uStack_32c & 0x3f800000) * fStack_34c * fVar109 -
                       fStack_34c * fStack_27c;
              fVar49 = (float)(~uStack_328 & (uint)(auVar74._8_4_ * local_310._8_4_) |
                              uStack_328 & 0x3f800000) * fStack_348 * fVar35 -
                       fStack_348 * fStack_278;
              fVar51 = (float)(~uStack_324 & (uint)(auVar74._12_4_ * local_310._12_4_) |
                              uStack_324 & 0x3f800000) * fStack_344 * fVar46 -
                       fStack_344 * fStack_274;
              uVar25 = -(uint)(fVar33 < 1.0);
              uVar27 = -(uint)(fVar45 < 1.0);
              uVar29 = -(uint)(fVar49 < 1.0);
              uVar31 = -(uint)(fVar51 < 1.0);
              auVar62._0_8_ = CONCAT44(~uVar27,~uVar25) & 0x3f8000003f800000;
              auVar62._8_4_ = ~uVar29 & 0x3f800000;
              auVar62._12_4_ = ~uVar31 & 0x3f800000;
              auVar121._0_4_ = uVar25 & (uint)fVar33;
              auVar121._4_4_ = uVar27 & (uint)fVar45;
              auVar121._8_4_ = uVar29 & (uint)fVar49;
              auVar121._12_4_ = uVar31 & (uint)fVar51;
              auVar94 = maxps(_DAT_01701b10,auVar121 | auVar62);
              fVar33 = local_370 * fVar100 * auVar94._0_4_ + local_370 * local_220;
              fVar45 = fStack_36c * fVar109 * auVar94._4_4_ + fStack_36c * fStack_21c;
              fVar49 = fStack_368 * fVar35 * auVar94._8_4_ + fStack_368 * fStack_218;
              fVar51 = fStack_364 * fVar46 * auVar94._12_4_ + fStack_364 * fStack_214;
              uVar25 = -(uint)(fVar33 < 1.0);
              uVar27 = -(uint)(fVar45 < 1.0);
              uVar29 = -(uint)(fVar49 < 1.0);
              uVar31 = -(uint)(fVar51 < 1.0);
              auVar112._0_4_ = uVar25 & (uint)fVar33;
              auVar112._4_4_ = uVar27 & (uint)fVar45;
              auVar112._8_4_ = uVar29 & (uint)fVar49;
              auVar112._12_4_ = uVar31 & (uint)fVar51;
              auVar87._0_8_ = CONCAT44(~uVar27,~uVar25) & 0x3f8000003f800000;
              auVar87._8_4_ = ~uVar29 & 0x3f800000;
              auVar87._12_4_ = ~uVar31 & 0x3f800000;
              auVar74 = maxps(_DAT_01701b10,auVar112 | auVar87);
              fVar33 = (auVar74._0_4_ * fVar71 + local_90) - (local_160 * auVar94._0_4_ + local_50);
              fVar45 = (auVar74._4_4_ * fVar91 + fStack_8c) -
                       (fStack_15c * auVar94._4_4_ + fStack_4c);
              fVar49 = (auVar74._8_4_ * fVar93 + fStack_88) -
                       (fStack_158 * auVar94._8_4_ + fStack_48);
              fVar33 = fVar33 * fVar33;
              fVar45 = fVar45 * fVar45;
              fVar49 = fVar49 * fVar49;
              uVar25 = *(uint *)((int)pauVar16[1] + 4);
              uVar27 = *(uint *)((int)pauVar16[1] + 8);
              uVar29 = *(uint *)((int)pauVar16[1] + 0xc);
              uVar26 = -(uint)(fVar45 + fVar33 + fVar49 < local_390);
              uVar28 = -(uint)(fVar45 + fVar33 + fVar49 < fStack_38c);
              uVar30 = -(uint)(fVar45 + fVar33 + fVar49 < fStack_388);
              uVar32 = -(uint)(fVar45 + fVar33 + fVar49 < fStack_384);
              uVar31 = *(uint *)((int)*pauVar16 + 4);
              uVar8 = *(uint *)((int)*pauVar16 + 8);
              uVar9 = *(uint *)((int)*pauVar16 + 0xc);
              *(uint *)*pauVar16 = *(uint *)*pauVar16 & uVar26 | ~uVar26 & *(uint *)pauVar16[1];
              *(uint *)((int)*pauVar16 + 4) = uVar31 & uVar28 | ~uVar28 & uVar25;
              *(uint *)((int)*pauVar16 + 8) = uVar8 & uVar30 | ~uVar30 & uVar27;
              *(uint *)((int)*pauVar16 + 0xc) = uVar9 & uVar32 | ~uVar32 & uVar29;
              *(float *)pauVar16[1] = local_50;
              *(float *)((int)pauVar16[1] + 4) = fStack_4c;
              *(float *)((int)pauVar16[1] + 8) = fStack_48;
              *(float *)((int)pauVar16[1] + 0xc) = fStack_44;
              goto LAB_01463395;
            }
            iVar18 = 1;
            fStack_cc = local_d0;
            fStack_c8 = local_d0;
            fStack_c4 = local_d0;
            fStack_4c = local_50;
            fStack_48 = local_50;
            fStack_44 = local_50;
          }
        }
        else {
          uVar4 = *(undefined8 *)*pauVar24;
          uStack_168 = *(undefined8 *)((int)*pauVar24 + 8);
          auVar74 = *pauVar16;
          fVar33 = auVar74._0_4_;
          fVar45 = auVar74._12_4_;
          fVar49 = *(float *)*pauVar23;
          fVar51 = *(float *)((int)*pauVar23 + 4);
          fVar81 = *(float *)((int)*pauVar23 + 8);
          fVar34 = *(float *)((int)*pauVar23 + 0xc);
          fVar46 = *(float *)((int)pauVar24[10] + 4);
          local_70 = *(float *)pauVar23[1];
          fStack_6c = *(float *)((int)pauVar23[1] + 4);
          fStack_68 = *(float *)((int)pauVar23[1] + 8);
          fStack_64 = *(float *)((int)pauVar23[1] + 0xc);
          fVar56 = auVar74._4_4_;
          fVar82 = auVar74._8_4_;
          fVar50 = (fVar49 - fVar33) * *(float *)pauVar24[10];
          fVar55 = (fVar51 - fVar56) * fVar46;
          fVar71 = (fVar81 - fVar82) * *(float *)((int)pauVar24[10] + 8);
          fVar91 = fVar55 + fVar50 + fVar71;
          fVar93 = fVar55 + fVar50 + fVar71;
          fVar100 = fVar55 + fVar50 + fVar71;
          fVar71 = fVar55 + fVar50 + fVar71;
          fVar109 = local_70 - fVar33;
          fVar35 = fStack_6c - fVar56;
          fVar47 = fStack_68 - fVar82;
          fVar52 = fStack_64 - fVar45;
          fVar50 = fVar109 * *(float *)pauVar24[10];
          fVar46 = fVar35 * fVar46;
          fVar55 = fVar47 * *(float *)((int)pauVar24[10] + 8);
          auVar77._0_4_ = fVar46 + fVar50 + fVar55;
          auVar77._4_4_ = fVar46 + fVar50 + fVar55;
          auVar77._8_4_ = fVar46 + fVar50 + fVar55;
          auVar77._12_4_ = fVar46 + fVar50 + fVar55;
          local_170 = uVar4;
          if (auVar77._0_4_ * fVar91 < 0.0) {
            fVar46 = *(float *)((int)pauVar16[2] + 4);
            auVar38._0_4_ = fVar91 - auVar77._0_4_;
            auVar38._4_4_ = fVar93 - auVar77._4_4_;
            auVar38._8_4_ = fVar100 - auVar77._8_4_;
            auVar38._12_4_ = fVar71 - auVar77._12_4_;
            auVar74 = rcpps(auVar77,auVar38);
            fVar50 = *(float *)((int)pauVar16[1] + 4);
            fVar55 = *(float *)((int)pauVar16[1] + 0xc);
            fVar49 = fVar49 + (local_70 - fVar49) *
                              (2.0 - auVar74._0_4_ * auVar38._0_4_) * auVar74._0_4_ * fVar91;
            fVar51 = fVar51 + (fStack_6c - fVar51) *
                              (2.0 - auVar74._4_4_ * auVar38._4_4_) * auVar74._4_4_ * fVar93;
            fVar81 = fVar81 + (fStack_68 - fVar81) *
                              (2.0 - auVar74._8_4_ * auVar38._8_4_) * auVar74._8_4_ * fVar100;
            fVar34 = fVar34 + (fStack_64 - fVar34) *
                              (2.0 - auVar74._12_4_ * auVar38._12_4_) * auVar74._12_4_ * fVar71;
            fVar71 = *(float *)pauVar16[2] - fVar33;
            fVar91 = fVar46 - fVar56;
            fVar93 = *(float *)((int)pauVar16[2] + 8) - fVar82;
            fVar100 = *(float *)((int)pauVar16[2] + 0xc) - fVar45;
            fVar103 = *(float *)pauVar16[2] - fVar49;
            fVar46 = fVar46 - fVar51;
            fVar108 = *(float *)((int)pauVar16[2] + 8) - fVar81;
            fVar92 = *(float *)pauVar16[1] - fVar49;
            fVar99 = fVar50 - fVar51;
            fVar101 = *(float *)((int)pauVar16[1] + 8) - fVar81;
            fVar102 = fVar55 - fVar34;
            fVar113 = *(float *)pauVar16[1] - fVar33;
            fVar50 = fVar50 - fVar56;
            fVar72 = *(float *)((int)pauVar16[1] + 8) - fVar82;
            fVar55 = fVar55 - fVar45;
            fStack_3a8 = fVar93 * fVar50 - fVar91 * fVar72;
            local_3b0 = fVar71 * fVar72 - fVar93 * fVar113;
            fStack_3ac = fVar91 * fVar113 - fVar71 * fVar50;
            fStack_3a4 = fVar100 * fVar55 - fVar100 * fVar55;
            fVar49 = fVar33 - fVar49;
            fVar51 = fVar56 - fVar51;
            fVar81 = fVar82 - fVar81;
            fVar34 = fVar45 - fVar34;
            local_30._4_4_ = fVar49 * fStack_3ac;
            local_30._0_4_ = fVar81 * local_3b0;
            fStack_28 = fVar51 * fStack_3a8;
            fStack_24 = fVar34 * fStack_3a4;
            fVar50 = (fVar101 * fStack_3a8 - fVar92 * fStack_3ac) * fVar51;
            fVar34 = (fVar102 * fStack_3a4 - fVar102 * fStack_3a4) * fVar34;
            auVar39._4_4_ =
                 -(uint)(fStack_ac <
                        (fVar49 * local_3b0 - fVar51 * fStack_3a8) * fVar108 +
                        (fVar51 * fStack_3ac - fVar81 * local_3b0) * fVar103 +
                        (fVar81 * fStack_3a8 - fVar49 * fStack_3ac) * fVar46);
            auVar39._0_4_ =
                 -(uint)(local_b0 <
                        (fVar103 * local_3b0 - fVar46 * fStack_3a8) * fVar101 +
                        (fVar46 * fStack_3ac - fVar108 * local_3b0) * fVar92 +
                        (fVar108 * fStack_3a8 - fVar103 * fStack_3ac) * fVar99);
            auVar39._8_4_ =
                 -(uint)(fStack_a8 <
                        (fVar92 * local_3b0 - fVar99 * fStack_3a8) * fVar81 +
                        (fVar99 * fStack_3ac - fVar101 * local_3b0) * fVar49 + fVar50);
            auVar39._12_4_ = -(uint)(fStack_a4 < fVar34 + fVar50 + fVar34);
            uVar25 = movmskps(pauVar19,auVar39);
            if ((char)(undefined1 (*) [16])(uVar25 & 7) == '\a') {
              iVar18 = 1;
              pauVar19 = (undefined1 (*) [16])(uVar25 & 7);
              local_d0 = fVar109;
              fStack_cc = fVar35;
              fStack_c8 = fVar47;
              fStack_c4 = fVar52;
              goto LAB_0146339a;
            }
          }
          local_50 = *(float *)pauVar16[2];
          fStack_4c = *(float *)((int)pauVar16[2] + 4);
          fStack_48 = *(float *)((int)pauVar16[2] + 8);
          fStack_44 = *(float *)((int)pauVar16[2] + 0xc);
          pauVar19 = pauVar16 + 1;
          fVar49 = *(float *)((int)pauVar16[1] + 4);
          auVar12 = *(undefined1 (*) [12])*pauVar19;
          fVar51 = *(float *)((int)pauVar16[1] + 0xc);
          auVar74 = *pauVar19;
          fStack_c8 = local_50 - *(float *)*pauVar19;
          local_d0 = fStack_4c - fVar49;
          fStack_cc = fStack_48 - *(float *)((int)pauVar16[1] + 8);
          fStack_c4 = fStack_44 - fVar51;
          local_34 = pauVar16 + 1;
          fVar34 = *(float *)*pauVar19 - fVar33;
          fVar49 = fVar49 - fVar56;
          fVar46 = *(float *)((int)pauVar16[1] + 8) - fVar82;
          fVar51 = fVar51 - fVar45;
          fStack_8c = fVar33 - local_50;
          fStack_88 = fVar56 - fStack_4c;
          local_90 = fVar82 - fStack_48;
          fStack_84 = fVar45 - fStack_44;
          local_30._0_4_ = auVar12._0_4_;
          local_30._4_4_ = auVar12._4_4_;
          fStack_28 = auVar12._8_4_;
          fVar50 = local_d0 * local_90 - fStack_cc * fStack_88;
          fVar45 = fStack_cc * fStack_8c - fStack_c8 * local_90;
          fVar55 = fStack_c8 * fStack_88 - local_d0 * fStack_8c;
          local_3d0 = local_70 - local_50;
          fStack_3cc = fStack_6c - fStack_4c;
          fStack_3c8 = fStack_68 - fStack_48;
          fStack_3c4 = fStack_64 - fStack_44;
          fVar81 = (fVar47 * fVar34 - fVar109 * fVar46) * fVar45;
          fVar51 = (fVar52 * fVar51 - fVar52 * fVar51) *
                   (fStack_c4 * fStack_84 - fStack_c4 * fStack_84);
          fVar33 = ((local_70 - (float)local_30._0_4_) * local_d0 -
                   (fStack_6c - (float)local_30._4_4_) * fStack_c8) * fVar55 +
                   ((fStack_6c - (float)local_30._4_4_) * fStack_cc -
                   (fStack_68 - fStack_28) * local_d0) * fVar50 +
                   ((fStack_68 - fStack_28) * fStack_c8 -
                   (local_70 - (float)local_30._0_4_) * fStack_cc) * fVar45;
          fVar45 = (local_3d0 * fStack_88 - fStack_3cc * fStack_8c) * fVar55 +
                   (fStack_3cc * local_90 - fStack_3c8 * fStack_88) * fVar50 +
                   (fStack_3c8 * fStack_8c - local_3d0 * local_90) * fVar45;
          fVar49 = (fVar109 * fVar49 - fVar35 * fVar34) * fVar55 +
                   (fVar35 * fVar46 - fVar47 * fVar49) * fVar50 + fVar81;
          fVar51 = fVar51 + fVar81 + fVar51;
          auVar63._4_4_ = -(uint)(fVar45 < fStack_ac);
          auVar63._0_4_ = -(uint)(fVar33 < local_b0);
          auVar63._8_4_ = -(uint)(fVar49 < fStack_a8);
          auVar63._12_4_ = -(uint)(fVar51 < fStack_a4);
          uVar25 = movmskps(local_34,auVar63);
          pauVar19 = (undefined1 (*) [16])(uVar25 & 7);
          *(float *)*pauVar24 = fVar33;
          *(float *)((int)*pauVar24 + 4) = fVar45;
          *(float *)((int)*pauVar24 + 8) = fVar49;
          *(float *)((int)*pauVar24 + 0xc) = fVar51;
          _local_30 = auVar74;
          if (pauVar19 == (undefined1 (*) [16])&DAT_00000007) {
            uVar22 = *(undefined4 *)((int)pauVar23[1] + 4);
            uVar48 = *(undefined4 *)((int)pauVar23[1] + 8);
            uVar53 = *(undefined4 *)((int)pauVar23[1] + 0xc);
            *(undefined4 *)*pauVar23 = *(undefined4 *)pauVar23[1];
            *(undefined4 *)((int)*pauVar23 + 4) = uVar22;
            *(undefined4 *)((int)*pauVar23 + 8) = uVar48;
            *(undefined4 *)((int)*pauVar23 + 0xc) = uVar53;
            iVar18 = 0;
            goto LAB_0146339a;
          }
          if (pauVar19 == (undefined1 (*) [16])0x6) goto LAB_0146338e;
          if (pauVar19 == (undefined1 (*) [16])0x5) {
LAB_014635b5:
            uVar22 = *(undefined4 *)((int)pauVar16[2] + 4);
            uVar48 = *(undefined4 *)((int)pauVar16[2] + 8);
            uVar53 = *(undefined4 *)((int)pauVar16[2] + 0xc);
            *(undefined4 *)*local_34 = *(undefined4 *)pauVar16[2];
            *(undefined4 *)((int)pauVar16[1] + 4) = uVar22;
            *(undefined4 *)((int)pauVar16[1] + 8) = uVar48;
            *(undefined4 *)((int)pauVar16[1] + 0xc) = uVar53;
          }
          else if (pauVar19 != (undefined1 (*) [16])0x3) {
            local_170._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
            if (pauVar19 == (undefined1 (*) [16])0x1) {
              fVar45 = fVar45 - local_170._4_4_;
              fVar33 = (fVar49 - (float)uStack_168) * local_170._4_4_;
              if (fVar45 * (float)uStack_168 <= fVar33) {
                uVar22 = *(undefined4 *)((int)pauVar16[2] + 4);
                uVar48 = *(undefined4 *)((int)pauVar16[2] + 8);
                uVar53 = *(undefined4 *)((int)pauVar16[2] + 0xc);
                *(undefined4 *)*local_34 = *(undefined4 *)pauVar16[2];
                *(undefined4 *)((int)pauVar16[1] + 4) = uVar22;
                *(undefined4 *)((int)pauVar16[1] + 8) = uVar48;
                *(undefined4 *)((int)pauVar16[1] + 0xc) = uVar53;
              }
            }
            else {
              local_170._0_4_ = (float)uVar4;
              if (pauVar19 == (undefined1 (*) [16])0x2) {
                fVar33 = fVar33 - (float)local_170;
                fVar45 = (fVar49 - (float)uStack_168) * (float)local_170;
                if (fVar45 <= fVar33 * (float)uStack_168) goto LAB_01463395;
              }
              else if ((pauVar19 == (undefined1 (*) [16])&DAT_00000004) &&
                      ((fVar45 - local_170._4_4_) * (float)local_170 <
                       (fVar33 - (float)local_170) * local_170._4_4_)) goto LAB_014635b5;
LAB_0146338e:
              uVar22 = *(undefined4 *)((int)pauVar16[2] + 4);
              uVar48 = *(undefined4 *)((int)pauVar16[2] + 8);
              uVar53 = *(undefined4 *)((int)pauVar16[2] + 0xc);
              *(undefined4 *)*pauVar16 = *(undefined4 *)pauVar16[2];
              *(undefined4 *)((int)*pauVar16 + 4) = uVar22;
              *(undefined4 *)((int)*pauVar16 + 8) = uVar48;
              *(undefined4 *)((int)*pauVar16 + 0xc) = uVar53;
            }
          }
LAB_01463395:
          iVar18 = 2;
        }
LAB_0146339a:
        pauVar24 = local_40;
        if (iVar18 == 0) {
          if (local_14 == 2) {
            local_14 = 1;
          }
          else {
            local_18 = 1;
          }
          goto LAB_0146439c;
        }
        if (iVar18 == 1) goto switchD_014627a7_caseD_d;
        if (iVar18 != 2) goto LAB_0146439c;
        uVar27 = 2;
        local_14 = 2;
        local_18 = 2;
switchD_014627a7_caseD_12:
        local_f0 = *(undefined8 *)pauVar24[2];
        uVar13 = local_f0;
        uStack_e8 = *(undefined8 *)((int)pauVar24[2] + 8);
        uVar14 = uStack_e8;
        uVar4 = *(undefined8 *)pauVar24[3];
        uVar7 = *(undefined8 *)((int)pauVar24[3] + 8);
        local_2c0 = *(undefined8 *)*pauVar20;
        local_130._0_4_ = (float)uVar4;
        local_130._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        uStack_128._0_4_ = (float)uVar7;
        uStack_128._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        local_f0._4_4_ = (float)((ulonglong)local_f0 >> 0x20);
        uStack_e8._4_4_ = (float)((ulonglong)uStack_e8 >> 0x20);
        fVar50 = (float)local_130 - (float)local_f0;
        fVar55 = local_130._4_4_ - local_f0._4_4_;
        fVar71 = (float)uStack_128 - (float)uStack_e8;
        fVar91 = uStack_128._4_4_ - uStack_e8._4_4_;
        uStack_2b8 = *(undefined8 *)((int)param_1[6] + 8);
        auVar74 = *pauVar20;
        uVar5 = *(undefined8 *)pauVar24[7];
        fVar33 = (float)local_2c0;
        fVar45 = (float)((ulonglong)local_2c0 >> 0x20);
        fVar49 = (float)((ulonglong)uStack_2b8 >> 0x20);
        uVar6 = *(undefined8 *)((int)pauVar24[7] + 8);
        local_1e0._0_4_ = (float)uVar5;
        local_1e0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        uStack_1d8._0_4_ = (float)uVar6;
        uStack_1d8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        fVar51 = (float)local_1e0 - fVar33;
        fVar81 = local_1e0._4_4_ - fVar45;
        fVar93 = (float)uStack_2b8;
        fVar34 = (float)uStack_1d8 - fVar93;
        fVar46 = uStack_1d8._4_4_ - fVar49;
        fStack_48 = fVar55 * fVar34 - fVar71 * fVar81;
        local_50 = fVar71 * fVar51 - fVar50 * fVar34;
        fStack_4c = fVar50 * fVar81 - fVar55 * fVar51;
        fStack_44 = fVar91 * fVar46 - fVar91 * fVar46;
        local_d0 = fVar71 * local_50;
        fStack_cc = fVar50 * fStack_4c;
        fStack_c8 = fVar55 * fStack_48;
        fStack_c4 = fVar91 * fStack_44;
        local_90 = fStack_4c;
        fStack_8c = fStack_48;
        fStack_88 = local_50;
        fStack_84 = fStack_44;
        local_30._0_4_ = fVar34 * local_50 - fVar81 * fStack_4c;
        local_30._4_4_ = fVar51 * fStack_4c - fVar34 * fStack_48;
        fVar100 = fVar81 * fStack_48 - fVar51 * local_50;
        local_240 = fVar71 * local_50 - fVar55 * fStack_4c;
        fStack_23c = fVar50 * fStack_4c - fVar71 * fStack_48;
        fStack_238 = fVar55 * fStack_48 - fVar50 * local_50;
        fStack_234 = fVar91 * fStack_44 - fVar91 * fStack_44;
        *(float *)pauVar24[10] = fStack_48;
        *(float *)((int)pauVar24[10] + 4) = local_50;
        *(float *)((int)pauVar24[10] + 8) = fStack_4c;
        *(float *)((int)pauVar24[10] + 0xc) = fStack_44;
        local_210 = (float)local_f0 - fVar33;
        fStack_20c = local_f0._4_4_ - fVar45;
        fStack_208 = (float)uStack_e8 - fVar93;
        fStack_204 = uStack_e8._4_4_ - fVar49;
        local_2a0 = (fVar33 - (float)local_130) * (float)local_30._0_4_;
        fStack_29c = (fVar45 - local_130._4_4_) * (float)local_30._4_4_;
        fStack_298 = (fVar93 - (float)uStack_128) * fVar100;
        fStack_294 = (fVar49 - uStack_128._4_4_) * (fVar46 * fStack_44 - fVar46 * fStack_44);
        local_3f0 = ((float)local_1e0 - (float)local_f0) * local_240;
        fStack_3ec = (local_1e0._4_4_ - local_f0._4_4_) * fStack_23c;
        fStack_3e8 = ((float)uStack_1d8 - (float)uStack_e8) * fStack_238;
        fStack_3e4 = (uStack_1d8._4_4_ - uStack_e8._4_4_) * fStack_234;
        local_30._0_4_ = local_210 * (float)local_30._0_4_;
        local_30._4_4_ = fStack_20c * (float)local_30._4_4_;
        fStack_28 = local_2a0;
        fStack_24 = fStack_29c;
        fVar49 = fStack_208 * fVar100 + (float)local_30._4_4_ + (float)local_30._0_4_;
        fVar46 = fStack_298 + fStack_29c + local_2a0;
        auVar105._4_4_ = -(uint)(fStack_ac < fVar46);
        auVar105._0_4_ = -(uint)(local_b0 < fVar49);
        auVar105._8_4_ =
             -(uint)(fStack_a8 <
                    fStack_208 * fStack_238 + fStack_20c * fStack_23c + local_210 * local_240);
        auVar105._12_4_ = -(uint)(fStack_a4 < fStack_3e8 + fStack_3ec + local_3f0);
        iVar18 = movmskps(uVar27,auVar105);
        local_1e0 = uVar5;
        uStack_1d8 = uVar6;
        local_130 = uVar4;
        uStack_128 = uVar7;
        local_f0 = uVar13;
        uStack_e8 = uVar14;
        if (iVar18 == 0xf) {
          auVar79._0_4_ = fVar46 + fVar49;
          auVar79._4_4_ = fVar46 + fVar49;
          auVar79._8_4_ = fVar46 + fVar49;
          auVar79._12_4_ = fVar46 + fVar49;
          auVar74 = rcpps(auVar74,auVar79);
          fVar33 = fStack_48 * local_210;
          fVar45 = local_50 * fStack_20c;
          fVar51 = fStack_4c * fStack_208;
          *(uint *)pauVar24[10] = (uint)fStack_48 ^ (uint)(fVar45 + fVar33 + fVar51) & 0x80000000;
          *(uint *)((int)pauVar24[10] + 4) =
               (uint)local_50 ^ (uint)(fVar45 + fVar33 + fVar51) & 0x80000000;
          *(uint *)((int)pauVar24[10] + 8) =
               (uint)fStack_4c ^ (uint)(fVar45 + fVar33 + fVar51) & 0x80000000;
          *(uint *)((int)pauVar24[10] + 0xc) =
               (uint)fStack_44 ^ (uint)(fVar45 + fVar33 + fVar51) & 0x80000000;
          *(float *)pauVar24[0xb] =
               ((float)local_130 - (float)local_f0) *
               fVar49 * (2.0 - auVar74._0_4_ * auVar79._0_4_) * auVar74._0_4_ + (float)local_f0;
          *(float *)((int)pauVar24[0xb] + 4) =
               (local_130._4_4_ - local_f0._4_4_) *
               fVar49 * (2.0 - auVar74._4_4_ * auVar79._4_4_) * auVar74._4_4_ + local_f0._4_4_;
          *(float *)((int)pauVar24[0xb] + 8) =
               ((float)uStack_128 - (float)uStack_e8) *
               fVar49 * (2.0 - auVar74._8_4_ * auVar79._8_4_) * auVar74._8_4_ + (float)uStack_e8;
          *(float *)((int)pauVar24[0xb] + 0xc) =
               (uStack_128._4_4_ - uStack_e8._4_4_) *
               fVar49 * (2.0 - auVar74._12_4_ * auVar79._12_4_) * auVar74._12_4_ + uStack_e8._4_4_;
          goto LAB_0146439c;
        }
        switch(iVar18 + -7) {
        case 0:
          uVar22 = *(undefined4 *)((int)pauVar24[7] + 4);
          uVar48 = *(undefined4 *)((int)pauVar24[7] + 8);
          uVar53 = *(undefined4 *)((int)pauVar24[7] + 0xc);
          *(undefined4 *)*pauVar20 = *(undefined4 *)pauVar24[7];
          *(undefined4 *)((int)param_1[6] + 4) = uVar22;
          *(undefined4 *)((int)param_1[6] + 8) = uVar48;
          *(undefined4 *)((int)param_1[6] + 0xc) = uVar53;
        case 4:
          local_18 = 1;
          goto switchD_014627a7_caseD_11;
        case 6:
          uVar22 = *(undefined4 *)((int)pauVar24[3] + 4);
          uVar48 = *(undefined4 *)((int)pauVar24[3] + 8);
          uVar53 = *(undefined4 *)((int)pauVar24[3] + 0xc);
          *(undefined4 *)pauVar24[2] = *(undefined4 *)pauVar24[3];
          *(undefined4 *)((int)pauVar24[2] + 4) = uVar22;
          *(undefined4 *)((int)pauVar24[2] + 8) = uVar48;
          *(undefined4 *)((int)pauVar24[2] + 0xc) = uVar53;
        case 7:
          local_14 = 1;
          goto switchD_014627a7_caseD_a;
        }
        fVar49 = fVar51 * fVar50;
        fVar46 = fVar81 * fVar55;
        fVar100 = fVar34 * fVar71;
        fVar35 = fVar46 + fVar49 + fVar100;
        fVar47 = fVar46 + fVar49 + fVar100;
        fVar52 = fVar46 + fVar49 + fVar100;
        fVar100 = fVar46 + fVar49 + fVar100;
        fVar49 = (fVar33 - (float)local_f0) * fVar50;
        fVar46 = (fVar45 - local_f0._4_4_) * fVar55;
        fVar109 = (fVar93 - (float)uStack_e8) * fVar71;
        fVar33 = (fVar33 - (float)local_f0) * fVar51;
        fVar45 = (fVar45 - local_f0._4_4_) * fVar81;
        fStack_254 = (fVar93 - (float)uStack_e8) * fVar34;
        fVar56 = fVar46 + fVar49 + fVar109;
        fVar82 = fVar46 + fVar49 + fVar109;
        fVar113 = fVar46 + fVar49 + fVar109;
        fVar109 = fVar46 + fVar49 + fVar109;
        local_260 = fVar45 + fVar33 + fStack_254;
        fStack_25c = fVar45 + fVar33 + fStack_254;
        fStack_258 = fVar45 + fVar33 + fStack_254;
        fStack_254 = fVar45 + fVar33 + fStack_254;
        fVar51 = fVar51 * fVar51;
        fVar81 = fVar81 * fVar81;
        fVar34 = fVar34 * fVar34;
        fVar33 = fVar50 * fVar50;
        fVar45 = fVar55 * fVar55;
        fVar49 = fVar71 * fVar71;
        auVar97._0_4_ = fVar45 + fVar33 + fVar49;
        auVar97._4_4_ = fVar45 + fVar33 + fVar49;
        auVar97._8_4_ = fVar45 + fVar33 + fVar49;
        auVar97._12_4_ = fVar45 + fVar33 + fVar49;
        auVar40._0_4_ = fVar81 + fVar51 + fVar34;
        auVar40._4_4_ = fVar81 + fVar51 + fVar34;
        auVar40._8_4_ = fVar81 + fVar51 + fVar34;
        auVar40._12_4_ = fVar81 + fVar51 + fVar34;
        local_2e0 = 0;
        uStack_2dc = 0;
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        auVar122._0_4_ = fVar35 * fVar35;
        auVar122._4_4_ = fVar47 * fVar47;
        auVar122._8_4_ = fVar52 * fVar52;
        auVar122._12_4_ = fVar100 * fVar100;
        auVar64._0_4_ = auVar40._0_4_ * auVar97._0_4_ - auVar122._0_4_;
        auVar64._4_4_ = auVar40._4_4_ * auVar97._4_4_ - auVar122._4_4_;
        auVar64._8_4_ = auVar40._8_4_ * auVar97._8_4_ - auVar122._8_4_;
        auVar64._12_4_ = auVar40._12_4_ * auVar97._12_4_ - auVar122._12_4_;
        auVar74 = maxps(auVar64,_DAT_01701cf0);
        local_50 = 2.0;
        fStack_4c = 2.0;
        fStack_48 = 2.0;
        fStack_44 = 2.0;
        auVar94 = rcpps(auVar122,auVar74);
        fVar33 = auVar74._0_4_;
        fVar45 = auVar74._4_4_;
        fVar49 = auVar74._8_4_;
        fVar51 = auVar74._12_4_;
        local_430._0_4_ = (2.0 - auVar94._0_4_ * fVar33) * auVar94._0_4_;
        local_430._4_4_ = (2.0 - auVar94._4_4_ * fVar45) * auVar94._4_4_;
        local_430._8_4_ = (2.0 - auVar94._8_4_ * fVar49) * auVar94._8_4_;
        local_430._12_4_ = (2.0 - auVar94._12_4_ * fVar51) * auVar94._12_4_;
        auVar74 = rcpps(local_430,auVar40);
        auVar123._0_4_ = auVar74._0_4_ * auVar40._0_4_;
        auVar123._4_4_ = auVar74._4_4_ * auVar40._4_4_;
        auVar123._8_4_ = auVar74._8_4_ * auVar40._8_4_;
        auVar123._12_4_ = auVar74._12_4_ * auVar40._12_4_;
        fVar81 = (2.0 - auVar123._0_4_) * auVar74._0_4_;
        fVar34 = (2.0 - auVar123._4_4_) * auVar74._4_4_;
        fVar46 = (2.0 - auVar123._8_4_) * auVar74._8_4_;
        fVar93 = (2.0 - auVar123._12_4_) * auVar74._12_4_;
        _local_30 = rcpps(auVar123,auVar97);
        local_470 = (2.0 - local_30._0_4_ * auVar97._0_4_) * local_30._0_4_;
        fStack_46c = (2.0 - local_30._4_4_ * auVar97._4_4_) * local_30._4_4_;
        fStack_468 = (2.0 - local_30._8_4_ * auVar97._8_4_) * local_30._8_4_;
        fStack_464 = (2.0 - local_30._12_4_ * auVar97._12_4_) * local_30._12_4_;
        local_410 = auVar40._0_4_ * fVar56 - local_260 * fVar35;
        fStack_40c = auVar40._4_4_ * fVar82 - fStack_25c * fVar47;
        fStack_408 = auVar40._8_4_ * fVar113 - fStack_258 * fVar52;
        fStack_404 = auVar40._12_4_ * fVar109 - fStack_254 * fVar100;
        local_450 = -(uint)(fVar33 <= 1.1920929e-07);
        uStack_44c = -(uint)(fVar45 <= 1.1920929e-07);
        uStack_448 = -(uint)(fVar49 <= 1.1920929e-07);
        uStack_444 = -(uint)(fVar51 <= 1.1920929e-07);
        auVar124._0_4_ = -(uint)(local_410 < fVar33) & (uint)local_410;
        auVar124._4_4_ = -(uint)(fStack_40c < fVar45) & (uint)fStack_40c;
        auVar124._8_4_ = -(uint)(fStack_408 < fVar49) & (uint)fStack_408;
        auVar124._12_4_ = -(uint)(fStack_404 < fVar51) & (uint)fStack_404;
        auVar41._0_4_ = ~-(uint)(local_410 < fVar33) & (uint)fVar33;
        auVar41._4_4_ = ~-(uint)(fStack_40c < fVar45) & (uint)fVar45;
        auVar41._8_4_ = ~-(uint)(fStack_408 < fVar49) & (uint)fVar49;
        auVar41._12_4_ = ~-(uint)(fStack_404 < fVar51) & (uint)fVar51;
        auVar74 = maxps(ZEXT816(0),auVar41 | auVar124);
        fVar33 = DAT_01701b20._12_4_;
        fVar72 = (float)DAT_01701b20;
        fVar92 = DAT_01701b20._4_4_;
        fVar99 = DAT_01701b20._8_4_;
        fVar45 = (float)(~local_450 & (uint)(auVar74._0_4_ * local_430._0_4_) |
                        local_450 & (uint)fVar72) * fVar81 * fVar35 - fVar81 * local_260;
        fVar49 = (float)(~uStack_44c & (uint)(auVar74._4_4_ * local_430._4_4_) |
                        uStack_44c & (uint)fVar92) * fVar34 * fVar47 - fVar34 * fStack_25c;
        fVar51 = (float)(~uStack_448 & (uint)(auVar74._8_4_ * local_430._8_4_) |
                        uStack_448 & (uint)fVar99) * fVar46 * fVar52 - fVar46 * fStack_258;
        fVar81 = (float)(~uStack_444 & (uint)(auVar74._12_4_ * local_430._12_4_) |
                        uStack_444 & (uint)fVar33) * fVar93 * fVar100 - fVar93 * fStack_254;
        uVar25 = -(uint)(fVar45 < fVar72);
        uVar27 = -(uint)(fVar49 < fVar92);
        uVar29 = -(uint)(fVar51 < fVar99);
        uVar31 = -(uint)(fVar81 < fVar33);
        auVar42._0_4_ = uVar25 & (uint)fVar45;
        auVar42._4_4_ = uVar27 & (uint)fVar49;
        auVar42._8_4_ = uVar29 & (uint)fVar51;
        auVar42._12_4_ = uVar31 & (uint)fVar81;
        auVar106._0_4_ = ~uVar25 & (uint)fVar72;
        auVar106._4_4_ = ~uVar27 & (uint)fVar92;
        auVar106._8_4_ = ~uVar29 & (uint)fVar99;
        auVar106._12_4_ = ~uVar31 & (uint)fVar33;
        auVar74 = maxps(ZEXT816(0),auVar106 | auVar42);
        fVar45 = auVar74._0_4_;
        fVar49 = local_470 * fVar35 * fVar45 + local_470 * fVar56;
        fVar51 = fStack_46c * fVar47 * auVar74._4_4_ + fStack_46c * fVar82;
        fVar81 = fStack_468 * fVar52 * auVar74._8_4_ + fStack_468 * fVar113;
        fVar34 = fStack_464 * fVar100 * auVar74._12_4_ + fStack_464 * fVar109;
        uVar25 = -(uint)(fVar49 < fVar72);
        uVar27 = -(uint)(fVar51 < fVar92);
        uVar29 = -(uint)(fVar81 < fVar99);
        uVar31 = -(uint)(fVar34 < fVar33);
        auVar78._0_4_ = uVar25 & (uint)fVar49;
        auVar78._4_4_ = uVar27 & (uint)fVar51;
        auVar78._8_4_ = uVar29 & (uint)fVar81;
        auVar78._12_4_ = uVar31 & (uint)fVar34;
        auVar98._0_4_ = ~uVar25 & (uint)fVar72;
        auVar98._4_4_ = ~uVar27 & (uint)fVar92;
        auVar98._8_4_ = ~uVar29 & (uint)fVar99;
        auVar98._12_4_ = ~uVar31 & (uint)fVar33;
        auVar74 = maxps(ZEXT816(0),auVar98 | auVar78);
        fVar33 = auVar74._0_4_;
        auVar43._4_4_ = -(uint)(fVar33 == 0.0);
        auVar43._0_4_ = -(uint)(fVar33 == 1.0);
        auVar43._8_4_ = -(uint)(fVar45 == 1.0);
        auVar43._12_4_ = -(uint)(fVar45 == 0.0);
        uVar25 = movmskps(iVar18 + -7,auVar43);
        *(float *)pauVar24[0xb] = fVar33 * fVar50 + (float)local_f0;
        *(float *)((int)pauVar24[0xb] + 4) = auVar74._4_4_ * fVar55 + local_f0._4_4_;
        *(float *)((int)pauVar24[0xb] + 8) = auVar74._8_4_ * fVar71 + (float)uStack_e8;
        *(float *)((int)pauVar24[0xb] + 0xc) = auVar74._12_4_ * fVar91 + uStack_e8._4_4_;
        if (uVar25 == 0) goto LAB_0146390f;
        if ((uVar25 & 1) == 0) {
          if ((uVar25 & 2) != 0) goto LAB_01463812;
        }
        else {
          uVar4 = *(undefined8 *)pauVar24[3];
          uVar7 = *(undefined8 *)((int)pauVar24[3] + 8);
          local_1f0._0_4_ = (undefined4)uVar4;
          local_1f0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_1e8._0_4_ = (undefined4)uVar7;
          uStack_1e8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)pauVar24[2] = (undefined4)local_1f0;
          *(undefined4 *)((int)pauVar24[2] + 4) = local_1f0._4_4_;
          *(undefined4 *)((int)pauVar24[2] + 8) = (undefined4)uStack_1e8;
          *(undefined4 *)((int)pauVar24[2] + 0xc) = uStack_1e8._4_4_;
          local_1f0 = uVar4;
          uStack_1e8 = uVar7;
LAB_01463812:
          local_14 = 1;
        }
        if ((uVar25 & 4) == 0) {
          if ((uVar25 & 8) != 0) goto LAB_01463826;
        }
        else {
          uVar22 = *(undefined4 *)((int)pauVar24[7] + 4);
          uVar48 = *(undefined4 *)((int)pauVar24[7] + 8);
          uVar53 = *(undefined4 *)((int)pauVar24[7] + 0xc);
          *(undefined4 *)*pauVar20 = *(undefined4 *)pauVar24[7];
          *(undefined4 *)((int)param_1[6] + 4) = uVar22;
          *(undefined4 *)((int)param_1[6] + 8) = uVar48;
          *(undefined4 *)((int)param_1[6] + 0xc) = uVar53;
LAB_01463826:
          local_18 = 1;
        }
        uVar25 = local_14 * 8 | local_18;
        local_2e0 = 0;
        uStack_2dc = 0;
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        goto joined_r0x01462793;
      case 0x21:
                    /* WARNING: This code block may not be properly labeled as switch case */
        local_230 = -1.0;
        fStack_22c = -1.0;
        fStack_228 = -1.0;
        fStack_224 = -1.0;
        local_1d0 = *(float *)*pauVar20;
        fStack_1cc = *(float *)((int)param_1[6] + 4);
        fStack_1c8 = *(float *)((int)param_1[6] + 8);
        fStack_1c4 = *(float *)((int)param_1[6] + 0xc);
        local_58 = pauVar24 + 2;
        pauVar20 = pauVar24 + 2;
      }
      fVar33 = *(float *)pauVar20[1];
      fVar45 = *(float *)((int)pauVar20[1] + 4);
      fVar49 = *(float *)((int)pauVar20[1] + 8);
      pauVar19 = pauVar20 + 3;
      fVar51 = *(float *)*pauVar19;
      fVar81 = *(float *)((int)pauVar20[3] + 4);
      fVar34 = *(float *)((int)pauVar20[3] + 8);
      auVar12 = *(undefined1 (*) [12])*pauVar19;
      fVar46 = *(float *)((int)pauVar20[3] + 0xc);
      fVar50 = *(float *)pauVar20[2];
      fVar55 = *(float *)((int)pauVar20[2] + 4);
      fVar71 = *(float *)((int)pauVar20[2] + 8);
      fVar91 = *(float *)*pauVar20;
      fVar93 = *(float *)((int)*pauVar20 + 4);
      fVar100 = *(float *)((int)*pauVar20 + 8);
      fVar109 = *(float *)((int)*pauVar20 + 0xc);
      fVar82 = fVar46 - fVar109;
      _local_30 = *pauVar19;
      fVar109 = *(float *)((int)pauVar20[1] + 0xc) - fVar109;
      fVar35 = (fVar34 - fVar49) * (fVar55 - fVar45) - (fVar81 - fVar45) * (fVar71 - fVar49);
      fVar47 = (fVar51 - fVar33) * (fVar71 - fVar49) - (fVar34 - fVar49) * (fVar50 - fVar33);
      fVar52 = (fVar81 - fVar45) * (fVar50 - fVar33) - (fVar51 - fVar33) * (fVar55 - fVar45);
      fVar56 = (fVar34 - fVar71) * (fVar93 - fVar55) - (fVar81 - fVar55) * (fVar100 - fVar71);
      fVar71 = (fVar51 - fVar50) * (fVar100 - fVar71) - (fVar34 - fVar71) * (fVar91 - fVar50);
      fVar50 = (fVar81 - fVar55) * (fVar91 - fVar50) - (fVar51 - fVar50) * (fVar93 - fVar55);
      fVar55 = (fVar34 - fVar100) * (fVar45 - fVar93) - (fVar81 - fVar93) * (fVar49 - fVar100);
      fVar34 = (fVar51 - fVar91) * (fVar49 - fVar100) - (fVar34 - fVar100) * (fVar33 - fVar91);
      fVar33 = (fVar81 - fVar93) * (fVar33 - fVar91) - (fVar51 - fVar91) * (fVar45 - fVar93);
      fVar45 = fVar82 * fVar109 - fVar82 * fVar109;
      local_30._0_4_ = auVar12._0_4_;
      local_30._4_4_ = auVar12._4_4_;
      fStack_28 = auVar12._8_4_;
      fVar49 = (local_1d0 - (float)local_30._0_4_) * local_230;
      fVar91 = (fStack_1cc - (float)local_30._4_4_) * fStack_22c;
      fVar51 = (fStack_1c8 - fStack_28) * fStack_228;
      fVar46 = (fStack_1c4 - fVar46) * fStack_224 * fVar45;
      fVar93 = fVar51 * fVar52 + fVar49 * fVar35 + fVar91 * fVar47;
      fVar100 = fVar51 * fVar50 + fVar49 * fVar56 + fVar91 * fVar71;
      fVar109 = fVar51 * fVar33 + fVar49 * fVar55 + fVar91 * fVar34;
      auVar44._0_4_ = fVar35 * fVar35 + fVar47 * fVar47;
      auVar44._4_4_ = fVar56 * fVar56 + fVar71 * fVar71;
      auVar44._8_4_ = fVar55 * fVar55 + fVar34 * fVar34;
      auVar44._12_4_ = fVar34 * fVar34 + fVar45 * fVar45;
      auVar107._0_4_ = fVar52 * fVar52 + auVar44._0_4_;
      auVar107._4_4_ = fVar50 * fVar50 + auVar44._4_4_;
      auVar107._8_4_ = fVar33 * fVar33 + auVar44._8_4_;
      auVar107._12_4_ = fVar45 * fVar45 + auVar44._12_4_;
      auVar74 = rcpps(auVar44,auVar107);
      fVar51 = (float)(~-(uint)(auVar107._0_4_ == local_b0) &
                       (uint)(ABS(fVar93) * fVar93 *
                             (2.0 - auVar74._0_4_ * auVar107._0_4_) * auVar74._0_4_) |
                      -(uint)(auVar107._0_4_ == local_b0) & 0x7f7fffee);
      fVar81 = (float)(~-(uint)(auVar107._4_4_ == fStack_ac) &
                       (uint)(ABS(fVar100) * fVar100 *
                             (2.0 - auVar74._4_4_ * auVar107._4_4_) * auVar74._4_4_) |
                      -(uint)(auVar107._4_4_ == fStack_ac) & 0x7f7fffee);
      fVar49 = (float)(~-(uint)(auVar107._8_4_ == fStack_a8) &
                       (uint)(ABS(fVar109) * fVar109 *
                             (2.0 - auVar74._8_4_ * auVar107._8_4_) * auVar74._8_4_) |
                      -(uint)(auVar107._8_4_ == fStack_a8) & 0x7f7fffee);
      fVar33 = fVar81;
      fVar45 = fVar51;
      if (fVar51 > fVar81) {
        fVar33 = fVar51;
        fVar45 = fVar81;
      }
      uVar25 = (uint)(fVar51 <= fVar81);
      if (fVar33 <= fVar49) {
        uVar25 = 2;
        fVar51 = fVar49;
        fVar49 = fVar33;
      }
      else {
        fVar51 = fVar33;
        if (fVar49 < fVar45) {
          fVar49 = fVar45;
        }
      }
      if (fVar51 < 1.0000001e-06) goto switchD_014627a7_caseD_d;
      local_58 = pauVar20;
      if (fVar51 <= fVar49 * 1.1) {
        local_3c = (undefined4 *)&DAT_00000004;
        pauVar23 = (undefined1 (*) [16])&DAT_00000004;
        local_100[0] = fVar93;
        local_100[1] = fVar100;
        local_100[2] = fVar109;
        local_100[3] = fVar46 + fVar91 * fVar34 + fVar46;
        local_94 = (undefined1 (*) [16])0x0;
        local_54 = (undefined1 (*) [16])0x10;
        local_34 = (undefined1 (*) [16])&DAT_00000008;
        pauVar19 = (undefined1 (*) [16])0x0;
        pauVar20 = (undefined1 (*) [16])&DAT_00000020;
        do {
          pauVar16 = pauVar19;
          if (0.0 <= *(float *)((int)local_100 + (int)local_94)) {
            local_3c = (undefined4 *)((int)local_100 + (int)pauVar23);
            if (0.0 <= *(float *)((int)local_100 + (int)pauVar23)) {
              pfVar1 = (float *)((int)*local_58 + (int)*pauVar20);
              fVar33 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar49 = pfVar1[2];
              pfVar1 = (float *)((int)*local_58 + (int)*local_54);
              pfVar2 = (float *)((int)*local_58 + (int)*pauVar16);
              fVar51 = *(float *)local_58[3] - fVar33;
              fVar81 = *(float *)((int)local_58[3] + 4) - fVar45;
              fVar34 = *(float *)((int)local_58[3] + 8) - fVar49;
              if (((fStack_1cc - fVar45) * (pfVar1[1] - fVar45) +
                   (local_1d0 - fVar33) * (*pfVar1 - fVar33) +
                  (fStack_1c8 - fVar49) * (pfVar1[2] - fVar49)) *
                  (fVar81 * (pfVar2[1] - fVar45) + fVar51 * (*pfVar2 - fVar33) +
                  fVar34 * (pfVar2[2] - fVar49)) <=
                  ((fStack_1cc - fVar45) * (pfVar2[1] - fVar45) +
                   (local_1d0 - fVar33) * (*pfVar2 - fVar33) +
                  (fStack_1c8 - fVar49) * (pfVar2[2] - fVar49)) *
                  (fVar81 * (pfVar1[1] - fVar45) + fVar51 * (*pfVar1 - fVar33) +
                  fVar34 * (pfVar1[2] - fVar49))) {
                *(undefined4 *)((int)local_100 + (int)local_94) = 0xbf800000;
              }
              else {
                *(undefined4 *)((int)local_100 + (int)pauVar23) = 0xbf800000;
              }
            }
          }
          pauVar23 = local_34;
          local_54 = pauVar20;
          local_34 = local_94;
          local_94 = (undefined1 (*) [16])((int)*local_94 + 4);
          pauVar19 = pauVar16 + 1;
          pauVar20 = pauVar16;
        } while ((int)(pauVar16 + 1) < 0x30);
        if (local_100[0] <= 0.0) {
          if (local_100[1] <= 0.0) {
            if (local_100[2] <= 0.0) {
              uVar25 = 0xffffffff;
            }
            else {
              uVar25 = 2;
            }
          }
          else {
            uVar25 = 1;
          }
        }
        else {
          uVar25 = 0;
        }
      }
      if ((int)uVar25 < 0) goto switchD_014627a7_caseD_d;
      uVar22 = *(undefined4 *)((int)local_58[3] + 4);
      uVar48 = *(undefined4 *)((int)local_58[3] + 8);
      uVar53 = *(undefined4 *)((int)local_58[3] + 0xc);
      uVar27 = uVar25 * 2;
      pauVar19 = local_58 + uVar25;
      *(undefined4 *)*pauVar19 = *(undefined4 *)local_58[3];
      *(undefined4 *)((int)*pauVar19 + 4) = uVar22;
      *(undefined4 *)((int)*pauVar19 + 8) = uVar48;
      *(undefined4 *)((int)*pauVar19 + 0xc) = uVar53;
      if (local_14 == 4) {
        local_14 = 3;
switchD_014627a7_caseD_19:
                    /* WARNING: This code block may not be properly labeled as switch case */
        fVar33 = *(float *)pauVar24[4];
        fVar45 = *(float *)((int)pauVar24[4] + 4);
        fVar49 = *(float *)((int)pauVar24[4] + 8);
        fStack_84 = *(float *)((int)pauVar24[4] + 0xc);
        fVar51 = *(float *)pauVar24[3];
        fVar81 = *(float *)((int)pauVar24[3] + 4);
        fVar34 = *(float *)((int)pauVar24[3] + 8);
        fVar46 = *(float *)((int)pauVar24[3] + 0xc);
        local_50 = *(float *)pauVar24[2];
        fStack_4c = *(float *)((int)pauVar24[2] + 4);
        fStack_48 = *(float *)((int)pauVar24[2] + 8);
        fStack_44 = *(float *)((int)pauVar24[2] + 0xc);
        fStack_cc = local_50 - fVar33;
        fStack_c8 = fStack_4c - fVar45;
        local_d0 = fStack_48 - fVar49;
        fStack_c4 = fStack_44 - fStack_84;
        fStack_8c = fVar33 - fVar51;
        fStack_88 = fVar45 - fVar81;
        local_90 = fVar49 - fVar34;
        fStack_84 = fStack_84 - fVar46;
        local_30._4_4_ = local_90;
        local_30._0_4_ = fStack_88;
        fStack_28 = fStack_8c;
        fStack_24 = fStack_84;
        local_70 = *(float *)*local_38;
        fStack_6c = *(float *)((int)*local_38 + 4);
        fStack_68 = *(float *)((int)*local_38 + 8);
        fStack_64 = *(float *)((int)*local_38 + 0xc);
        fVar46 = fVar46 - fStack_44;
        fVar71 = fStack_88 * local_d0 - fStack_c8 * local_90;
        fVar91 = local_90 * fStack_cc - local_d0 * fStack_8c;
        fVar93 = fStack_8c * fStack_c8 - fStack_cc * fStack_88;
        fVar100 = fStack_84 * fStack_c4 - fStack_c4 * fStack_84;
        fVar55 = ((fStack_68 - fStack_48) * (fVar51 - local_50) -
                 (local_70 - local_50) * (fVar34 - fStack_48)) * fVar91;
        fVar50 = ((fStack_64 - fStack_44) * fVar46 - (fStack_64 - fStack_44) * fVar46) * fVar100;
        fVar46 = ((local_70 - fVar51) * fStack_88 - (fStack_6c - fVar81) * fStack_8c) * fVar93 +
                 ((fStack_6c - fVar81) * local_90 - (fStack_68 - fVar34) * fStack_88) * fVar71 +
                 ((fStack_68 - fVar34) * fStack_8c - (local_70 - fVar51) * local_90) * fVar91;
        fVar45 = ((local_70 - fVar33) * fStack_c8 - (fStack_6c - fVar45) * fStack_cc) * fVar93 +
                 ((fStack_6c - fVar45) * local_d0 - (fStack_68 - fVar49) * fStack_c8) * fVar71 +
                 ((fStack_68 - fVar49) * fStack_cc - (local_70 - fVar33) * local_d0) * fVar91;
        fVar49 = ((local_70 - local_50) * (fVar81 - fStack_4c) -
                 (fStack_6c - fStack_4c) * (fVar51 - local_50)) * fVar93 +
                 ((fStack_6c - fStack_4c) * (fVar34 - fStack_48) -
                 (fStack_68 - fStack_48) * (fVar81 - fStack_4c)) * fVar71 + fVar55;
        fVar50 = fVar50 + fVar55 + fVar50;
        auVar65._4_4_ = -(uint)(fVar45 < fStack_ac);
        auVar65._0_4_ = -(uint)(fVar46 < local_b0);
        auVar65._8_4_ = -(uint)(fVar49 < fStack_a8);
        auVar65._12_4_ = -(uint)(fVar50 < fStack_a4);
        uVar25 = movmskps(uVar27,auVar65);
        uVar25 = uVar25 & 7;
        fVar33 = fVar46;
        if (uVar25 == 7) {
          fVar51 = (local_50 - local_70) * fVar71;
          fVar81 = (fStack_4c - fStack_6c) * fVar91;
          fVar34 = (fStack_48 - fStack_68) * fVar93;
          auVar80._0_4_ = fVar81 + fVar51 + fVar34;
          auVar80._4_4_ = fVar81 + fVar51 + fVar34;
          auVar80._8_4_ = fVar81 + fVar51 + fVar34;
          auVar80._12_4_ = fVar81 + fVar51 + fVar34;
          iVar18 = movmskps(pauVar23,auVar80);
          if (iVar18 != 0) {
            uVar4 = *(undefined8 *)pauVar24[2];
            fVar71 = -fVar71;
            fVar91 = -fVar91;
            fVar93 = -fVar93;
            fVar100 = -fVar100;
            uVar7 = *(undefined8 *)((int)pauVar24[2] + 8);
            uVar22 = *(undefined4 *)((int)pauVar24[3] + 4);
            uVar48 = *(undefined4 *)((int)pauVar24[3] + 8);
            uVar53 = *(undefined4 *)((int)pauVar24[3] + 0xc);
            *(undefined4 *)pauVar24[2] = *(undefined4 *)pauVar24[3];
            *(undefined4 *)((int)pauVar24[2] + 4) = uVar22;
            *(undefined4 *)((int)pauVar24[2] + 8) = uVar48;
            *(undefined4 *)((int)pauVar24[2] + 0xc) = uVar53;
            local_250._0_4_ = (undefined4)uVar4;
            local_250._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_248._0_4_ = (undefined4)uVar7;
            uStack_248._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)pauVar24[3] = (undefined4)local_250;
            *(undefined4 *)((int)pauVar24[3] + 4) = local_250._4_4_;
            *(undefined4 *)((int)pauVar24[3] + 8) = (undefined4)uStack_248;
            *(undefined4 *)((int)pauVar24[3] + 0xc) = uStack_248._4_4_;
            *(undefined4 *)((int)pauVar24[1] + 4) = 1;
            fVar33 = fVar45;
            fVar45 = fVar46;
            local_250 = uVar4;
            uStack_248 = uVar7;
          }
        }
        *(float *)pauVar24[10] = fVar71;
        *(float *)((int)pauVar24[10] + 4) = fVar91;
        *(float *)((int)pauVar24[10] + 8) = fVar93;
        *(float *)((int)pauVar24[10] + 0xc) = fVar100;
        *(float *)*pauVar24 = fVar33;
        *(float *)((int)*pauVar24 + 4) = fVar45;
        *(float *)((int)*pauVar24 + 8) = fVar49;
        *(float *)((int)*pauVar24 + 0xc) = fVar50;
        if (uVar25 == 7) goto LAB_0146439c;
        iVar18 = (int)(char)(&DAT_017dc474)[uVar25];
        local_14 = 2;
        if (iVar18 < 0) {
          if (2 < iVar18 + 8) {
            local_18 = 1;
            fVar33 = *(float *)((int)pauVar24[2] + 4);
            fVar45 = *(float *)((int)pauVar24[2] + 8);
            fVar49 = *(float *)((int)pauVar24[2] + 0xc);
            fVar51 = *(float *)((int)*local_38 + 4);
            fVar81 = *(float *)((int)*local_38 + 8);
            fVar34 = *(float *)((int)*local_38 + 0xc);
            local_14 = 1;
            *(float *)pauVar24[10] = *(float *)pauVar24[2] - *(float *)*local_38;
            *(float *)((int)pauVar24[10] + 4) = fVar33 - fVar51;
            *(float *)((int)pauVar24[10] + 8) = fVar45 - fVar81;
            *(float *)((int)pauVar24[10] + 0xc) = fVar49 - fVar34;
            goto LAB_0146439c;
          }
          uVar22 = *(undefined4 *)((int)pauVar24[4] + 4);
          uVar48 = *(undefined4 *)((int)pauVar24[4] + 8);
          uVar53 = *(undefined4 *)((int)pauVar24[4] + 0xc);
          pauVar19 = pauVar24 + iVar18 + 10;
          *(undefined4 *)*pauVar19 = *(undefined4 *)pauVar24[4];
          *(undefined4 *)((int)*pauVar19 + 4) = uVar22;
          *(undefined4 *)((int)*pauVar19 + 8) = uVar48;
          *(undefined4 *)((int)*pauVar19 + 0xc) = uVar53;
        }
        else {
          local_3c = (undefined4 *)(int)(char)(&DAT_017dc47c)[iVar18];
          puVar21 = (undefined4 *)(int)(char)(&DAT_017dc47e)[iVar18];
          pauVar19 = pauVar24 + iVar18 + 2;
          fVar33 = *(float *)*pauVar19;
          fVar45 = *(float *)((int)*pauVar19 + 4);
          fVar49 = *(float *)((int)*pauVar19 + 8);
          puVar17 = (undefined1 *)((int)local_3c + 2);
          pauVar19 = pauVar24 + (int)puVar21 + 2;
          local_34 = pauVar24 + (int)((int)puVar21 + 2);
          fVar46 = *(float *)*local_38 - fVar33;
          fVar50 = *(float *)((int)*local_38 + 4) - fVar45;
          fVar55 = *(float *)((int)*local_38 + 8) - fVar49;
          pauVar20 = pauVar24 + (int)puVar17;
          fVar51 = (*(float *)*pauVar20 - fVar33) * fVar46;
          fVar81 = (*(float *)((int)*pauVar20 + 4) - fVar45) * fVar50;
          fVar34 = (*(float *)((int)*pauVar20 + 8) - fVar49) * fVar55;
          auVar88._0_4_ = fVar81 + fVar51 + fVar34;
          auVar88._4_4_ = fVar81 + fVar51 + fVar34;
          auVar88._8_4_ = fVar81 + fVar51 + fVar34;
          auVar88._12_4_ = fVar81 + fVar51 + fVar34;
          uVar22 = *(undefined4 *)((int)pauVar24[4] + 4);
          uVar48 = *(undefined4 *)((int)pauVar24[4] + 8);
          uVar53 = *(undefined4 *)((int)pauVar24[4] + 0xc);
          iVar18 = movmskps(local_34,auVar88);
          if (iVar18 == 0) {
            *(undefined4 *)*local_34 = *(undefined4 *)pauVar24[4];
            *(undefined4 *)((int)*local_34 + 4) = uVar22;
            *(undefined4 *)((int)*local_34 + 8) = uVar48;
            *(undefined4 *)((int)*local_34 + 0xc) = uVar53;
          }
          else {
            fVar46 = (*(float *)*pauVar19 - fVar33) * fVar46;
            fVar50 = (*(float *)((int)*pauVar19 + 4) - fVar45) * fVar50;
            fVar55 = (*(float *)((int)*pauVar19 + 8) - fVar49) * fVar55;
            pauVar19 = pauVar24 + (int)puVar17;
            *(undefined4 *)*pauVar19 = *(undefined4 *)pauVar24[4];
            *(undefined4 *)((int)*pauVar19 + 4) = uVar22;
            *(undefined4 *)((int)*pauVar19 + 8) = uVar48;
            *(undefined4 *)((int)*pauVar19 + 0xc) = uVar53;
            auVar66._0_4_ = fVar50 + fVar46 + fVar55;
            auVar66._4_4_ = fVar50 + fVar46 + fVar55;
            auVar66._8_4_ = fVar50 + fVar46 + fVar55;
            auVar66._12_4_ = fVar50 + fVar46 + fVar55;
            iVar18 = movmskps((int)puVar17 * 2,auVar66);
            if (iVar18 != 0) {
              uVar22 = *(undefined4 *)pauVar24[3];
              uVar48 = *(undefined4 *)((int)pauVar24[3] + 4);
              uVar53 = *(undefined4 *)((int)pauVar24[3] + 8);
              uVar54 = *(undefined4 *)((int)pauVar24[3] + 0xc);
              if (puVar21 == (undefined4 *)0x2) {
                puVar21 = local_3c;
              }
              local_14 = 1;
              puVar17 = (undefined1 *)((int)puVar21 + 2);
              goto LAB_0146429e;
            }
          }
        }
switchD_014627a7_caseD_11:
        fVar33 = *(float *)pauVar24[3];
        fVar45 = *(float *)((int)pauVar24[3] + 4);
        fVar49 = *(float *)((int)pauVar24[3] + 8);
        fVar51 = *(float *)((int)pauVar24[3] + 0xc);
        local_50 = *(float *)pauVar24[2];
        fStack_4c = *(float *)((int)pauVar24[2] + 4);
        fStack_48 = *(float *)((int)pauVar24[2] + 8);
        fStack_44 = *(float *)((int)pauVar24[2] + 0xc);
        local_70 = *(float *)*local_38;
        fStack_6c = *(float *)((int)*local_38 + 4);
        fStack_68 = *(float *)((int)*local_38 + 8);
        fStack_64 = *(float *)((int)*local_38 + 0xc);
        fVar55 = fVar33 - local_50;
        fVar71 = fVar45 - fStack_4c;
        fVar91 = fVar49 - fStack_48;
        fVar35 = local_50 - local_70;
        fVar47 = fStack_4c - fStack_6c;
        fVar52 = fStack_48 - fStack_68;
        fVar93 = fVar33 - local_70;
        fVar100 = fVar45 - fStack_6c;
        fVar109 = fVar49 - fStack_68;
        fVar81 = fVar93 * fVar55;
        fVar34 = fVar100 * fVar71;
        fVar46 = fVar109 * fVar91;
        fVar50 = fVar34 + fVar81 + fVar46;
        if (0.0 <= (fVar47 * fVar71 + fVar35 * fVar55 + fVar52 * fVar91) * fVar50) {
          uVar25 = -(uint)(fVar50 < local_b0);
          uVar27 = -(uint)(fVar34 + fVar81 + fVar46 < fStack_ac);
          uVar29 = -(uint)(fVar34 + fVar81 + fVar46 < fStack_a8);
          uVar31 = -(uint)(fVar34 + fVar81 + fVar46 < fStack_a4);
          fVar33 = (float)((uint)fVar33 & uVar25 | ~uVar25 & (uint)local_50);
          fVar45 = (float)((uint)fVar45 & uVar27 | ~uVar27 & (uint)fStack_4c);
          fVar49 = (float)((uint)fVar49 & uVar29 | ~uVar29 & (uint)fStack_48);
          fVar51 = (float)((uint)fVar51 & uVar31 | ~uVar31 & (uint)fStack_44);
          *(float *)pauVar24[10] = fVar33 - local_70;
          *(float *)((int)pauVar24[10] + 4) = fVar45 - fStack_6c;
          *(float *)((int)pauVar24[10] + 8) = fVar49 - fStack_68;
          *(float *)((int)pauVar24[10] + 0xc) = fVar51 - fStack_64;
          *(float *)pauVar24[2] = fVar33;
          *(float *)((int)pauVar24[2] + 4) = fVar45;
          *(float *)((int)pauVar24[2] + 8) = fVar49;
          *(float *)((int)pauVar24[2] + 0xc) = fVar51;
          local_14 = 1;
        }
        else {
          fVar33 = fVar52 * fVar100 - fVar47 * fVar109;
          fVar45 = fVar35 * fVar109 - fVar52 * fVar93;
          fVar49 = fVar47 * fVar93 - fVar35 * fVar100;
          fVar81 = (fStack_44 - fStack_64) * (fVar51 - fStack_64) -
                   (fStack_44 - fStack_64) * (fVar51 - fStack_64);
          *(float *)pauVar24[10] = fVar45 * fVar91 - fVar49 * fVar71;
          *(float *)((int)pauVar24[10] + 4) = fVar49 * fVar55 - fVar33 * fVar91;
          *(float *)((int)pauVar24[10] + 8) = fVar33 * fVar71 - fVar45 * fVar55;
          *(float *)((int)pauVar24[10] + 0xc) =
               fVar81 * (fVar51 - fStack_44) - fVar81 * (fVar51 - fStack_44);
        }
      }
      else {
        local_18 = 3;
switchD_014627a7_caseD_b:
        local_70 = *(float *)*local_38;
        fStack_6c = *(float *)((int)*local_38 + 4);
        fStack_68 = *(float *)((int)*local_38 + 8);
        fStack_64 = *(float *)((int)*local_38 + 0xc);
        fVar33 = *(float *)local_38[2];
        fVar45 = *(float *)((int)local_38[2] + 4);
        fVar49 = *(float *)((int)local_38[2] + 8);
        fStack_24 = *(float *)((int)local_38[2] + 0xc);
        fVar51 = *(float *)local_38[1];
        fVar81 = *(float *)((int)local_38[1] + 4);
        fVar34 = *(float *)((int)local_38[1] + 8);
        fVar46 = *(float *)((int)local_38[1] + 0xc);
        fStack_4c = local_70 - fVar33;
        fStack_48 = fStack_6c - fVar45;
        local_50 = fStack_68 - fVar49;
        fStack_44 = fStack_64 - fStack_24;
        fVar71 = fVar46 - fStack_64;
        local_30._4_4_ = fVar33 - fVar51;
        fStack_28 = fVar45 - fVar81;
        local_30._0_4_ = fVar49 - fVar34;
        fStack_24 = fStack_24 - fVar46;
        fVar47 = fStack_28 * local_50 - (float)local_30._0_4_ * fStack_48;
        fVar52 = (float)local_30._0_4_ * fStack_4c - (float)local_30._4_4_ * local_50;
        fVar56 = (float)local_30._4_4_ * fStack_48 - fStack_28 * fStack_4c;
        fVar82 = fStack_24 * fStack_44 - fStack_24 * fStack_44;
        fVar46 = *(float *)pauVar24[2];
        fVar50 = *(float *)((int)pauVar24[2] + 4);
        fVar55 = *(float *)((int)pauVar24[2] + 8);
        fVar100 = fVar46 - local_70;
        fVar109 = fVar50 - fStack_6c;
        fVar35 = fVar55 - fStack_68;
        fVar91 = *(float *)((int)pauVar24[2] + 0xc) - fStack_64;
        fVar93 = (fVar35 * (fVar51 - local_70) - fVar100 * (fVar34 - fStack_68)) * fVar52;
        fVar91 = (fVar91 * fVar71 - fVar91 * fVar71) * fVar82;
        fVar71 = ((fVar46 - fVar51) * fStack_28 - (fVar50 - fVar81) * (float)local_30._4_4_) *
                 fVar56 + ((fVar50 - fVar81) * (float)local_30._0_4_ - (fVar55 - fVar34) * fStack_28
                          ) * fVar47 +
                          ((fVar55 - fVar34) * (float)local_30._4_4_ -
                          (fVar46 - fVar51) * (float)local_30._0_4_) * fVar52;
        fVar45 = ((fVar46 - fVar33) * fStack_48 - (fVar50 - fVar45) * fStack_4c) * fVar56 +
                 ((fVar50 - fVar45) * local_50 - (fVar55 - fVar49) * fStack_48) * fVar47 +
                 ((fVar55 - fVar49) * fStack_4c - (fVar46 - fVar33) * local_50) * fVar52;
        fVar49 = (fVar100 * (fVar81 - fStack_6c) - fVar109 * (fVar51 - local_70)) * fVar56 +
                 (fVar109 * (fVar34 - fStack_68) - fVar35 * (fVar81 - fStack_6c)) * fVar47 + fVar93;
        fVar91 = fVar91 + fVar93 + fVar91;
        auVar67._4_4_ = -(uint)(fVar45 < fStack_ac);
        auVar67._0_4_ = -(uint)(fVar71 < local_b0);
        auVar67._8_4_ = -(uint)(fVar49 < fStack_a8);
        auVar67._12_4_ = -(uint)(fVar91 < fStack_a4);
        uVar25 = movmskps(uVar27,auVar67);
        uVar25 = uVar25 & 7;
        fVar33 = fVar71;
        if (uVar25 == 7) {
          fVar100 = fVar100 * fVar47;
          fVar109 = fVar109 * fVar52;
          fVar35 = fVar35 * fVar56;
          auVar68._0_4_ = fVar109 + fVar100 + fVar35;
          auVar68._4_4_ = fVar109 + fVar100 + fVar35;
          auVar68._8_4_ = fVar109 + fVar100 + fVar35;
          auVar68._12_4_ = fVar109 + fVar100 + fVar35;
          iVar18 = movmskps(pauVar23,auVar68);
          if (iVar18 != 0) {
            uVar4 = *(undefined8 *)*local_38;
            fVar47 = -fVar47;
            fVar52 = -fVar52;
            fVar56 = -fVar56;
            fVar82 = -fVar82;
            uVar7 = *(undefined8 *)((int)*local_38 + 8);
            uVar22 = *(undefined4 *)((int)local_38[1] + 4);
            uVar48 = *(undefined4 *)((int)local_38[1] + 8);
            uVar53 = *(undefined4 *)((int)local_38[1] + 0xc);
            *(undefined4 *)*local_38 = *(undefined4 *)local_38[1];
            *(undefined4 *)((int)*local_38 + 4) = uVar22;
            *(undefined4 *)((int)*local_38 + 8) = uVar48;
            *(undefined4 *)((int)*local_38 + 0xc) = uVar53;
            local_270._0_4_ = (undefined4)uVar4;
            local_270._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_268._0_4_ = (undefined4)uVar7;
            uStack_268._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)local_38[1] = (undefined4)local_270;
            *(undefined4 *)((int)local_38[1] + 4) = local_270._4_4_;
            *(undefined4 *)((int)local_38[1] + 8) = (undefined4)uStack_268;
            *(undefined4 *)((int)local_38[1] + 0xc) = uStack_268._4_4_;
            *(undefined4 *)((int)pauVar24[1] + 4) = 1;
            fVar33 = fVar45;
            fVar45 = fVar71;
            local_270 = uVar4;
            uStack_268 = uVar7;
          }
        }
        *(float *)pauVar24[10] = fVar47;
        *(float *)((int)pauVar24[10] + 4) = fVar52;
        *(float *)((int)pauVar24[10] + 8) = fVar56;
        *(float *)((int)pauVar24[10] + 0xc) = fVar82;
        *(float *)*pauVar24 = fVar33;
        *(float *)((int)*pauVar24 + 4) = fVar45;
        *(float *)((int)*pauVar24 + 8) = fVar49;
        *(float *)((int)*pauVar24 + 0xc) = fVar91;
        if (uVar25 != 7) {
          iVar18 = (int)(char)(&DAT_017dc474)[uVar25];
          local_18 = 2;
          if (iVar18 < 0) {
            if (2 < iVar18 + 8) {
              local_18 = 1;
              fVar33 = *(float *)((int)pauVar24[2] + 4);
              fVar45 = *(float *)((int)pauVar24[2] + 8);
              fVar49 = *(float *)((int)pauVar24[2] + 0xc);
              fVar51 = *(float *)((int)*local_38 + 4);
              fVar81 = *(float *)((int)*local_38 + 8);
              fVar34 = *(float *)((int)*local_38 + 0xc);
              local_14 = 1;
              *(float *)pauVar24[10] = *(float *)pauVar24[2] - *(float *)*local_38;
              *(float *)((int)pauVar24[10] + 4) = fVar33 - fVar51;
              *(float *)((int)pauVar24[10] + 8) = fVar45 - fVar81;
              *(float *)((int)pauVar24[10] + 0xc) = fVar49 - fVar34;
              goto LAB_0146439c;
            }
            uVar22 = *(undefined4 *)((int)pauVar24[8] + 4);
            uVar48 = *(undefined4 *)((int)pauVar24[8] + 8);
            uVar53 = *(undefined4 *)((int)pauVar24[8] + 0xc);
            pauVar19 = pauVar24 + iVar18 + 0xe;
            *(undefined4 *)*pauVar19 = *(undefined4 *)pauVar24[8];
            *(undefined4 *)((int)*pauVar19 + 4) = uVar22;
            *(undefined4 *)((int)*pauVar19 + 8) = uVar48;
            *(undefined4 *)((int)*pauVar19 + 0xc) = uVar53;
          }
          else {
            local_3c = (undefined4 *)(int)(char)(&DAT_017dc47c)[iVar18];
            puVar21 = (undefined4 *)(int)(char)(&DAT_017dc47e)[iVar18];
            pauVar19 = pauVar24 + iVar18 + 6;
            fVar33 = *(float *)*pauVar19;
            fVar45 = *(float *)((int)*pauVar19 + 4);
            fVar49 = *(float *)((int)*pauVar19 + 8);
            puVar17 = (undefined1 *)((int)local_3c + 6);
            pauVar19 = pauVar24 + (int)puVar21 + 6;
            local_34 = pauVar24 + (int)((int)puVar21 + 6);
            fVar46 = *(float *)pauVar24[2] - fVar33;
            fVar50 = *(float *)((int)pauVar24[2] + 4) - fVar45;
            fVar55 = *(float *)((int)pauVar24[2] + 8) - fVar49;
            pauVar20 = pauVar24 + (int)puVar17;
            fVar51 = (*(float *)*pauVar20 - fVar33) * fVar46;
            fVar81 = (*(float *)((int)*pauVar20 + 4) - fVar45) * fVar50;
            fVar34 = (*(float *)((int)*pauVar20 + 8) - fVar49) * fVar55;
            auVar89._0_4_ = fVar81 + fVar51 + fVar34;
            auVar89._4_4_ = fVar81 + fVar51 + fVar34;
            auVar89._8_4_ = fVar81 + fVar51 + fVar34;
            auVar89._12_4_ = fVar81 + fVar51 + fVar34;
            uVar22 = *(undefined4 *)((int)pauVar24[8] + 4);
            uVar48 = *(undefined4 *)((int)pauVar24[8] + 8);
            uVar53 = *(undefined4 *)((int)pauVar24[8] + 0xc);
            iVar18 = movmskps(local_34,auVar89);
            if (iVar18 == 0) {
              *(undefined4 *)*local_34 = *(undefined4 *)pauVar24[8];
              *(undefined4 *)((int)*local_34 + 4) = uVar22;
              *(undefined4 *)((int)*local_34 + 8) = uVar48;
              *(undefined4 *)((int)*local_34 + 0xc) = uVar53;
            }
            else {
              fVar46 = (*(float *)*pauVar19 - fVar33) * fVar46;
              fVar50 = (*(float *)((int)*pauVar19 + 4) - fVar45) * fVar50;
              fVar55 = (*(float *)((int)*pauVar19 + 8) - fVar49) * fVar55;
              pauVar19 = pauVar24 + (int)puVar17;
              *(undefined4 *)*pauVar19 = *(undefined4 *)pauVar24[8];
              *(undefined4 *)((int)*pauVar19 + 4) = uVar22;
              *(undefined4 *)((int)*pauVar19 + 8) = uVar48;
              *(undefined4 *)((int)*pauVar19 + 0xc) = uVar53;
              auVar69._0_4_ = fVar50 + fVar46 + fVar55;
              auVar69._4_4_ = fVar50 + fVar46 + fVar55;
              auVar69._8_4_ = fVar50 + fVar46 + fVar55;
              auVar69._12_4_ = fVar50 + fVar46 + fVar55;
              iVar18 = movmskps((int)puVar17 * 2,auVar69);
              if (iVar18 != 0) {
                local_18 = 1;
                if (puVar21 == (undefined4 *)0x2) {
                  puVar21 = local_3c;
                }
                uVar22 = *(undefined4 *)pauVar24[7];
                uVar48 = *(undefined4 *)((int)pauVar24[7] + 4);
                uVar53 = *(undefined4 *)((int)pauVar24[7] + 8);
                uVar54 = *(undefined4 *)((int)pauVar24[7] + 0xc);
                puVar17 = (undefined1 *)((int)puVar21 + 6);
LAB_0146429e:
                pauVar19 = pauVar24 + (int)puVar17;
                *(undefined4 *)*pauVar19 = uVar22;
                *(undefined4 *)((int)*pauVar19 + 4) = uVar48;
                *(undefined4 *)((int)*pauVar19 + 8) = uVar53;
                *(undefined4 *)((int)*pauVar19 + 0xc) = uVar54;
switchD_014627a7_caseD_9:
                fVar33 = *(float *)((int)pauVar24[2] + 4);
                fVar45 = *(float *)((int)pauVar24[2] + 8);
                fVar49 = *(float *)((int)pauVar24[2] + 0xc);
                fVar51 = *(float *)((int)*local_38 + 4);
                fVar81 = *(float *)((int)*local_38 + 8);
                fVar34 = *(float *)((int)*local_38 + 0xc);
                *(float *)pauVar24[10] = *(float *)pauVar24[2] - *(float *)*local_38;
                *(float *)((int)pauVar24[10] + 4) = fVar33 - fVar51;
                *(float *)((int)pauVar24[10] + 8) = fVar45 - fVar81;
                *(float *)((int)pauVar24[10] + 0xc) = fVar49 - fVar34;
                goto LAB_0146439c;
              }
            }
          }
switchD_014627a7_caseD_a:
          pauVar19 = local_38 + 1;
          fVar33 = *(float *)((int)local_38[1] + 4);
          auVar12 = *(undefined1 (*) [12])*pauVar19;
          fVar45 = *(float *)((int)local_38[1] + 0xc);
          _local_30 = *pauVar19;
          local_70 = *(float *)*local_38;
          fStack_6c = *(float *)((int)*local_38 + 4);
          fStack_68 = *(float *)((int)*local_38 + 8);
          fStack_64 = *(float *)((int)*local_38 + 0xc);
          fVar49 = *(float *)pauVar24[2];
          fVar51 = *(float *)((int)pauVar24[2] + 4);
          fVar81 = *(float *)((int)pauVar24[2] + 8);
          fVar34 = *(float *)((int)pauVar24[2] + 0xc);
          fVar91 = *(float *)*pauVar19 - local_70;
          fVar93 = fVar33 - fStack_6c;
          fVar100 = *(float *)((int)local_38[1] + 8) - fStack_68;
          fVar109 = *(float *)*pauVar19 - fVar49;
          fVar33 = fVar33 - fVar51;
          fVar35 = *(float *)((int)local_38[1] + 8) - fVar81;
          fVar46 = fVar109 * fVar91;
          fVar50 = fVar33 * fVar93;
          fVar55 = fVar35 * fVar100;
          fVar71 = fVar50 + fVar46 + fVar55;
          fVar47 = local_70 - fVar49;
          fVar52 = fStack_6c - fVar51;
          fVar56 = fStack_68 - fVar81;
          if (0.0 <= (fVar52 * fVar93 + fVar47 * fVar91 + fVar56 * fVar100) * fVar71) {
            uVar25 = -(uint)(fVar71 < local_b0);
            uVar27 = -(uint)(fVar50 + fVar46 + fVar55 < fStack_ac);
            uVar29 = -(uint)(fVar50 + fVar46 + fVar55 < fStack_a8);
            uVar31 = -(uint)(fVar50 + fVar46 + fVar55 < fStack_a4);
            local_30._0_4_ = auVar12._0_4_;
            local_30._4_4_ = auVar12._4_4_;
            fStack_28 = auVar12._8_4_;
            fVar33 = (float)(uVar25 & local_30._0_4_ | ~uVar25 & (uint)local_70);
            fVar46 = (float)(uVar27 & local_30._4_4_ | ~uVar27 & (uint)fStack_6c);
            fVar50 = (float)(uVar29 & (uint)fStack_28 | ~uVar29 & (uint)fStack_68);
            fVar45 = (float)(uVar31 & (uint)fVar45 | ~uVar31 & (uint)fStack_64);
            *(float *)pauVar24[10] = fVar49 - fVar33;
            *(float *)((int)pauVar24[10] + 4) = fVar51 - fVar46;
            *(float *)((int)pauVar24[10] + 8) = fVar81 - fVar50;
            *(float *)((int)pauVar24[10] + 0xc) = fVar34 - fVar45;
            local_18 = 1;
            *(float *)*local_38 = fVar33;
            *(float *)((int)*local_38 + 4) = fVar46;
            *(float *)((int)*local_38 + 8) = fVar50;
            *(float *)((int)*local_38 + 0xc) = fVar45;
          }
          else {
            fVar49 = fVar56 * fVar33 - fVar52 * fVar35;
            fVar51 = fVar47 * fVar35 - fVar56 * fVar109;
            fVar33 = fVar52 * fVar109 - fVar47 * fVar33;
            fVar81 = (fStack_64 - fVar34) * (fVar45 - fVar34) -
                     (fStack_64 - fVar34) * (fVar45 - fVar34);
            *(float *)pauVar24[10] = fVar33 * fVar93 - fVar51 * fVar100;
            *(float *)((int)pauVar24[10] + 4) = fVar49 * fVar100 - fVar33 * fVar91;
            *(float *)((int)pauVar24[10] + 8) = fVar51 * fVar91 - fVar49 * fVar93;
            *(float *)((int)pauVar24[10] + 0xc) =
                 fVar81 * (fVar45 - fStack_64) - fVar81 * (fVar45 - fStack_64);
          }
        }
      }
      goto LAB_0146439c;
    }
switchD_014627a7_caseD_d:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (local_1a0 < *param_8) {
      if (0.9999999 < local_1a0) {
        if (((local_120._4_4_ - param_6[1]) - *(float *)((int)*local_d4 + 4)) * fStack_13c +
            (((float)local_120 - *param_6) - *(float *)*local_d4) * local_140 +
            (((float)uStack_118 - param_6[2]) - *(float *)((int)*local_d4 + 8)) * fStack_138 <
            1.1920929e-07) goto LAB_014645a0;
      }
      *param_8 = local_1a0;
      param_8[1] = fStack_19c;
      param_8[2] = fStack_198;
      param_8[3] = fStack_194;
      *param_9 = local_2b0;
      param_9[1] = fStack_2ac;
      param_9[2] = fStack_2a8;
      param_9[3] = fStack_2a4;
      *param_2 = 1;
      return;
    }
  }
LAB_014645a0:
  *param_2 = 0;
  return;
LAB_0146390f:
  fVar33 = *(float *)((int)pauVar24[10] + 4);
  fVar45 = *(float *)((int)pauVar24[10] + 8);
  uVar25 = *(uint *)((int)pauVar24[10] + 0xc);
  fVar49 = *(float *)pauVar24[10] * local_210;
  fVar51 = fVar33 * fStack_20c;
  fVar81 = fVar45 * fStack_208;
  *(uint *)pauVar24[10] =
       (uint)(fVar51 + fVar49 + fVar81) & 0x80000000 ^ (uint)*(float *)pauVar24[10];
  *(uint *)((int)pauVar24[10] + 4) = (uint)(fVar51 + fVar49 + fVar81) & 0x80000000 ^ (uint)fVar33;
  *(uint *)((int)pauVar24[10] + 8) = (uint)(fVar51 + fVar49 + fVar81) & 0x80000000 ^ (uint)fVar45;
  *(uint *)((int)pauVar24[10] + 0xc) = (uint)(fVar51 + fVar49 + fVar81) & 0x80000000 ^ uVar25;
LAB_0146439c:
  *(uint *)pauVar24[1] = local_18;
  fVar51 = -*(float *)pauVar24[10];
  fVar81 = -*(float *)((int)pauVar24[10] + 4);
  fVar34 = -*(float *)((int)pauVar24[10] + 8);
  fVar46 = -*(float *)((int)pauVar24[10] + 0xc);
  fVar33 = fVar51 * fVar51;
  fVar45 = fVar81 * fVar81;
  fVar49 = fVar34 * fVar34;
  auVar90._4_4_ = fVar33;
  auVar90._0_4_ = fVar33;
  auVar90._8_4_ = fVar33;
  auVar90._12_4_ = fVar33;
  auVar70._0_4_ = fVar45 + fVar33 + fVar49;
  auVar70._4_4_ = fVar45 + fVar33 + fVar49;
  auVar70._8_4_ = fVar45 + fVar33 + fVar49;
  auVar70._12_4_ = fVar45 + fVar33 + fVar49;
  auVar74 = rsqrtps(auVar90,auVar70);
  fVar33 = auVar74._0_4_;
  fVar45 = auVar74._4_4_;
  fVar49 = auVar74._8_4_;
  fVar50 = auVar74._12_4_;
  local_110 = (float)(~-(uint)(auVar70._0_4_ <= local_b0) &
                     (uint)((local_490 - fVar33 * auVar70._0_4_ * fVar33) * fVar33 * local_1b0)) *
              fVar51;
  fStack_10c = (float)(~-(uint)(auVar70._4_4_ <= fStack_ac) &
                      (uint)((fStack_48c - fVar45 * auVar70._4_4_ * fVar45) * fVar45 * fStack_1ac))
               * fVar81;
  fStack_108 = (float)(~-(uint)(auVar70._8_4_ <= fStack_a8) &
                      (uint)((fStack_488 - fVar49 * auVar70._8_4_ * fVar49) * fVar49 * fStack_1a8))
               * fVar34;
  fStack_104 = (float)(~-(uint)(auVar70._12_4_ <= fStack_a4) &
                      (uint)((fStack_484 - fVar50 * auVar70._12_4_ * fVar50) * fVar50 * fStack_1a4))
               * fVar46;
  *(float *)pauVar24[10] = fVar51;
  *(float *)((int)pauVar24[10] + 4) = fVar81;
  *(float *)((int)pauVar24[10] + 8) = fVar34;
  *(float *)((int)pauVar24[10] + 0xc) = fVar46;
  if (0 < local_14) {
    fVar33 = (*(float *)*local_38 - *(float *)pauVar24[2]) * local_110;
    fVar45 = (*(float *)((int)*local_38 + 4) - *(float *)((int)pauVar24[2] + 4)) * fStack_10c;
    fVar49 = (*(float *)((int)*local_38 + 8) - *(float *)((int)pauVar24[2] + 8)) * fStack_108;
    fVar51 = fVar45 + fVar33 + fVar49;
    iVar18 = local_14;
    do {
      if (ABS(fVar51) < local_190) {
        local_190 = ABS(fVar51);
        fStack_18c = ABS(fVar45 + fVar33 + fVar49);
        fStack_188 = ABS(fVar45 + fVar33 + fVar49);
        fStack_184 = ABS(fVar45 + fVar33 + fVar49);
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  local_290._0_4_ = (float)uVar3;
  local_290._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fVar33 = *(float *)pauVar24[10] - (float)local_290;
  fVar45 = *(float *)((int)pauVar24[10] + 4) - local_290._4_4_;
  fVar49 = *(float *)((int)pauVar24[10] + 8) - (float)uStack_288;
  local_290 = uVar3;
  if ((fVar45 * fVar45 + fVar33 * fVar33 + fVar49 * fVar49 < local_4b0) &&
     (local_b4 = local_b4 + 1, 2 < local_b4)) {
    hkErrStream::hkErrStream(local_700,0x200);
    FUN_01018d00("loop count max reached");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xad000161,local_700,
               "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/Algorithms/Gsk/hkcdGskImpl.inl"
               ,0x4fb);
    hkBaseObject::hkBaseObject_38();
    goto switchD_014627a7_caseD_d;
  }
  param_1 = pauVar24;
  if (local_190 * local_190 <= local_4d0) goto switchD_014627a7_caseD_d;
  goto LAB_01462600;
}

