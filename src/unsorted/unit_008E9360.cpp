// src/unsorted/unit_008E9360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E9360..008E9F50, 4 functions

#include "mgrr.h"

// 008E9360  FUN_008e9360  size=2580  [run]
void __thiscall FUN_008e9360(int *param_1,undefined4 param_2,float param_3,float param_4)

{
  int *piVar1;
  undefined1 (*pauVar2) [12];
  int iVar3;
  float *pfVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  int local_178;
  int local_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  int local_158;
  float local_154;
  undefined1 local_150 [8];
  float fStack_148;
  int iStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  int local_d0;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  undefined1 local_9c;
  undefined1 local_90 [8];
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_40 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (param_1[0x3c] != 0) {
    if (param_1[0x59] != 0) {
      FUN_008e2210(param_1[0x59]);
      param_1[0x59] = 0;
    }
    hkBaseObject::hkBaseObject_205(local_150,param_2);
    local_190 = (float)local_150._0_4_ - (float)param_1[0x24];
    local_18c = (float)local_150._4_4_ - (float)param_1[0x25];
    local_188 = fStack_148 - (float)param_1[0x26];
    local_178 = *(int *)(param_1[0x3c] + 0x94);
    FUN_004066f0();
    local_a0 = 0;
    local_c0 = 0;
    iStack_bc = 0;
    iStack_b8 = 0x3f800000;
    iStack_b4 = 0;
    local_110 = 0;
    local_10c = 0;
    local_d0 = 2;
    local_140 = 0.0;
    fStack_13c = 0.0;
    fStack_138 = 0.0;
    fStack_134 = 0.0;
    local_b0 = 0;
    iStack_ac = 0;
    iStack_a8 = 0;
    iStack_a4 = 0;
    local_9c = 0;
    local_108 = 0;
    local_e0 = 0;
    if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
      iVar3 = *param_1;
      local_100 = *(float *)(iVar3 + 0x70);
      fStack_fc = *(float *)(iVar3 + 0x74);
      fStack_f8 = *(float *)(iVar3 + 0x78);
      fStack_f4 = *(float *)(iVar3 + 0x7c);
      puVar9 = (undefined4 *)FUN_01269650();
    }
    else {
      iVar3 = param_1[2];
      local_100 = *(float *)(iVar3 + 0x20);
      fStack_fc = *(float *)(iVar3 + 0x24);
      fStack_f8 = *(float *)(iVar3 + 0x28);
      fStack_f4 = *(float *)(iVar3 + 0x2c);
      puVar9 = (undefined4 *)FUN_0126f430();
    }
    local_80 = *puVar9;
    uStack_7c = puVar9[1];
    uStack_78 = puVar9[2];
    uStack_74 = puVar9[3];
    FUN_01007e80(&local_100,local_178);
    local_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0xbf800000;
    uStack_e4 = 0;
    FUN_01007460(local_40,&local_f0);
    fVar13 = (float10)param_3;
    local_88 = param_3;
    local_60 = local_140;
    fStack_5c = fStack_13c;
    uStack_58 = fStack_138;
    uStack_54 = fStack_134;
    local_84 = param_4;
    local_70._4_4_ = fStack_13c;
    local_70._0_4_ = local_140;
    fStack_68 = fStack_138;
    fStack_64 = fStack_134;
    if (param_1[0x41] == 0) {
      *(float *)(param_1[0x34] + 4) =
           (float)((float10)(float)param_1[0x3d] * fVar13 * fVar13 +
                  (float10)*(float *)(param_1[0x34] + 4));
    }
    fVar16 = (float)param_1[0x60];
    local_170 = (float)((float10)local_190 + (float10)fVar16);
    fVar17 = (float)param_1[0x61];
    fStack_16c = (float)((float10)local_18c + (float10)fVar17);
    fVar18 = (float)param_1[0x62];
    fStack_168 = (float)((float10)fVar18 + (float10)local_188);
    fVar15 = (float10)1.4426950408889634 * -((float10)(float)param_1[100] * fVar13);
    fVar14 = ROUND(fVar15);
    fVar15 = (float10)f2xm1(fVar15 - fVar14);
    fVar14 = (float10)fscale((float10)1 + fVar15,fVar14);
    param_1[0x60] = (int)(float)(fVar14 * (float10)(float)param_1[0x60]);
    param_1[0x61] = (int)(float)(fVar14 * (float10)(float)param_1[0x61]);
    param_1[0x62] = (int)(float)(fVar14 * (float10)(float)param_1[0x62]);
    param_1[99] = (int)(float)(fVar14 * (float10)(float)param_1[99]);
    pfVar4 = (float *)param_1[0x34];
    if (param_1[0x42] == 0) {
      fVar15 = (float10)60.0 * fVar13 * (float10)60.0;
      local_70._4_4_ =
           (float)(((float10)local_18c + (float10)fVar17 + (float10)pfVar4[1]) * fVar15 +
                  (float10)fStack_13c);
      local_70._0_4_ =
           (float)(((float10)*pfVar4 + (float10)local_190 + (float10)fVar16) * fVar15 +
                  (float10)local_140);
      fVar13 = (float10)fVar18 + (float10)local_188 + (float10)pfVar4[2];
    }
    else {
      iVar3 = param_1[0x3c];
      local_190 = *pfVar4;
      local_18c = pfVar4[1];
      local_188 = pfVar4[2];
      local_184 = pfVar4[3];
      D3DXVec3TransformNormal(&local_190,&local_190,iVar3 + 0xb0);
      fVar13 = (float10)*(float *)(iVar3 + 0xe0) + (float10)local_190;
      local_190 = (float)fVar13;
      fVar14 = (float10)*(float *)(iVar3 + 0xe4) + (float10)local_18c;
      local_18c = (float)fVar14;
      fVar15 = (float10)param_4;
      local_70._4_4_ =
           (float)((fVar14 + (float10)fStack_16c) * fVar15 + (float10)(float)local_70._4_4_);
      local_70._0_4_ =
           (float)((fVar13 + (float10)local_170) * fVar15 + (float10)(float)local_70._0_4_);
      fVar13 = (float10)*(float *)(iVar3 + 0xe8) + (float10)local_188 + (float10)fStack_168;
    }
    local_130 = 3.0;
    uStack_12c = 0x40400000;
    uStack_128 = 0x40400000;
    uStack_124 = 0x40400000;
    local_140 = 0.5;
    fStack_13c = 0.5;
    fStack_138 = 0.5;
    fStack_134 = 0.5;
    fStack_68 = (float)(fVar13 * fVar15 + (float10)fStack_68);
    *(undefined4 *)param_1[0x34] = 0;
    *(undefined4 *)(param_1[0x34] + 8) = 0;
    local_120 = -local_100;
    fStack_11c = -fStack_fc;
    fStack_118 = -fStack_f8;
    fVar16 = local_120 * local_120;
    fVar17 = fStack_11c * fStack_11c;
    fVar18 = fStack_118 * fStack_118;
    fVar19 = fVar17 + fVar16 + fVar18;
    fVar20 = fVar17 + fVar16 + fVar18;
    fVar21 = fVar17 + fVar16 + fVar18;
    fVar18 = fVar17 + fVar16 + fVar18;
    _local_150 = ZEXT812(0);
    iStack_144 = 0;
    auVar22._4_4_ = fVar20;
    auVar22._0_4_ = fVar19;
    auVar22._8_4_ = fVar21;
    auVar22._12_4_ = fVar18;
    auVar22 = rsqrtps(_local_150,auVar22);
    fVar16 = auVar22._0_4_;
    fVar17 = auVar22._4_4_;
    fVar26 = auVar22._8_4_;
    fVar23 = auVar22._12_4_;
    local_120 = (float)(~-(uint)(fVar19 <= 0.0) &
                       (uint)((3.0 - fVar16 * fVar19 * fVar16) * fVar16 * 0.5)) * local_120;
    fStack_11c = (float)(~-(uint)(fVar20 <= 0.0) &
                        (uint)((3.0 - fVar17 * fVar20 * fVar17) * fVar17 * 0.5)) * fStack_11c;
    fStack_118 = (float)(~-(uint)(fVar21 <= 0.0) &
                        (uint)((3.0 - fVar26 * fVar21 * fVar26) * fVar26 * 0.5)) * fStack_118;
    fStack_114 = (float)(~-(uint)(fVar18 <= 0.0) &
                        (uint)((3.0 - fVar23 * fVar18 * fVar23) * fVar23 * 0.5)) * -fStack_f4;
    if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
      *(undefined1 *)(*param_1 + 0xbc) = 1;
      FUN_0126ae90(&local_120,param_1 + 4,param_1[0x4b]);
    }
    else {
      (**(code **)(*(int *)param_1[2] + 0xc))(local_90,param_1 + 4);
    }
    if (param_1[4] == 2) {
      local_178 = 0;
      FUN_00860de0();
      iVar3 = param_1[0x4b];
      local_158 = 0;
      if (0 < *(int *)(iVar3 + 0x14)) {
        local_174 = 0;
        fVar16 = local_120;
        fVar17 = fStack_11c;
        fVar18 = fStack_118;
        do {
          iVar12 = *(int *)(iVar3 + 0x10) + local_174;
          iVar10 = *(int *)(iVar12 + 0x28);
          if ((*(char *)(iVar10 + 0x18) == '\x02') &&
             (fVar19 = (float)(*(char *)(iVar10 + 0x10) + iVar10), fVar19 != 0.0)) {
            fStack_16c = 0.0;
            fStack_168 = 0.0;
            fStack_164 = 0.0;
            local_170 = fVar19;
            FUN_00901570();
            local_154 = fStack_11c * *(float *)(iVar12 + 0x14) +
                        local_120 * *(float *)(iVar12 + 0x10) +
                        fStack_118 * *(float *)(iVar12 + 0x18);
            fVar16 = local_120;
            fVar17 = fStack_11c;
            fVar18 = fStack_118;
          }
          iVar10 = *(int *)(iVar12 + 0x28);
          if ((*(char *)(iVar10 + 0x18) == '\x01') &&
             (iVar10 = *(char *)(iVar10 + 0x10) + iVar10, iVar10 != 0)) {
            uVar5 = *(uint *)(iVar10 + 0xc);
            uVar11 = *(uint *)(iVar10 + 0x2c) & 0x1f;
            if (((uVar5 == 0) || ((*(uint *)((-(uint)(uVar5 != 0) & uVar5) + 0x30) & 0x40) == 0)) &&
               ((((uVar11 != 7 && (uVar11 != 6)) && (uVar11 != 5)) &&
                (fVar17 * *(float *)(iVar12 + 0x14) + fVar16 * *(float *)(iVar12 + 0x10) +
                 fVar18 * *(float *)(iVar12 + 0x18) < -0.08)))) {
              local_178 = 1;
            }
          }
          local_174 = local_174 + 0x30;
          local_158 = local_158 + 1;
        } while (local_158 < *(int *)(iVar3 + 0x14));
      }
      if ((DAT_01885d68 != 1) &&
         (iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
         *(int *)(iVar3 + 4) == 0)) {
        piVar1 = (int *)(iVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
          FUN_00dd7300();
        }
      }
      if (local_178 == 0) {
        param_1[0x48] = param_1[0x48] + 1;
        param_1[4] = 0;
        param_1[0xc] = local_150._0_4_;
        param_1[0xd] = local_150._4_4_;
        param_1[0xe] = (int)fStack_148;
        param_1[0xf] = iStack_144;
        param_1[8] = local_150._0_4_;
        param_1[9] = local_150._4_4_;
        param_1[10] = (int)fStack_148;
        param_1[0xb] = iStack_144;
      }
      else {
        param_1[0x48] = 0;
      }
    }
    else {
      param_1[0x48] = 0;
    }
    local_d0 = param_1[4];
    local_a0 = param_1[0x10];
    local_c0 = param_1[8];
    iStack_bc = param_1[9];
    iStack_b8 = param_1[10];
    iStack_b4 = param_1[0xb];
    local_9c = (undefined1)param_1[0x11];
    local_b0 = param_1[0xc];
    iStack_ac = param_1[0xd];
    iStack_a8 = param_1[0xe];
    iStack_a4 = param_1[0xf];
    if (local_d0 == 2) {
      param_1[0x49] = 0;
      if (param_1[0x42] == 0) {
        if ((float)local_70._4_4_ < 0.0) {
          local_70._4_4_ = 0;
          *(undefined4 *)(param_1[0x34] + 4) = 0;
        }
      }
      else {
        local_190 = (float)local_70._0_4_;
        local_18c = (float)local_70._4_4_;
        local_188 = fStack_68;
        D3DXVec3TransformNormal(&local_190,&local_190,param_1[0x3c] + 0xf0);
        if (local_18c < 0.0) {
          local_18c = 0.0;
          D3DXVec3TransformNormal(&local_190,&local_190,param_1[0x3c] + 0xb0);
          auVar22 = _local_70;
          local_70._4_4_ = local_18c;
          local_70._0_4_ = local_190;
          fStack_64 = auVar22._12_4_;
          fStack_68 = local_188;
          *(undefined4 *)(param_1[0x34] + 4) = 0;
        }
      }
      local_170 = (float)param_1[0xc];
      fStack_16c = (float)param_1[0xd];
      fStack_168 = (float)param_1[0xe];
      fStack_164 = (float)param_1[0xf];
      if (fStack_16c * fStack_16c + local_170 * local_170 + fStack_168 * fStack_168 != 0.0) {
        fVar13 = (float10)FUN_00e049b0();
        fVar14 = (float10)FUN_00e049b0();
        fVar16 = (float)((float10)1 /
                        (((float10)60.0 / (float10)(float)fVar13) * fVar14 * (float10)0.016666668));
        local_70._0_4_ = fVar16 * local_170 + (float)local_70._0_4_;
        local_70._4_4_ = fVar16 * fStack_16c + (float)local_70._4_4_;
        fStack_68 = fVar16 * fStack_168 + fStack_68;
        fStack_64 = fVar16 * fStack_164 + fStack_64;
      }
    }
    else {
      param_1[0x49] = param_1[0x49] + 1;
      if ((param_1[0x5b] & 1U) != 0) {
        pauVar2 = (undefined1 (*) [12])(param_1 + 0x54);
        local_70._0_4_ = *(float *)*pauVar2 + (float)local_70._0_4_;
        local_70._4_4_ = (float)((ulonglong)*(undefined8 *)*pauVar2 >> 0x20) + (float)local_70._4_4_
        ;
        fStack_68 = SUB124(*pauVar2,8) + fStack_68;
        fStack_64 = fStack_64 + 0.0;
      }
      if (((param_1[0x5b] & 4U) == 0) && (param_1[0x46] != 0)) {
        fVar20 = local_70._4_4_;
        fVar16 = (float)local_70._0_4_ * (float)local_70._0_4_;
        fVar17 = fVar20 * fVar20;
        fVar18 = local_70._8_4_ * local_70._8_4_;
        fVar19 = fVar17 + fVar16 + fVar18;
        auVar8._4_4_ = fVar17 + fVar16 + fVar18;
        auVar8._0_4_ = fVar19;
        auVar8._8_4_ = fVar17 + fVar16 + fVar18;
        auVar8._12_4_ = fVar17 + fVar16 + fVar18;
        auVar22 = rsqrtps(_local_70,auVar8);
        fVar16 = auVar22._0_4_;
        local_70._4_4_ =
             -(float)(~-(uint)(fVar19 <= (float)local_150._0_4_) &
                     (uint)((local_130 - fVar16 * fVar19 * fVar16) * fVar16 * local_140 * fVar19)) +
             fVar20;
        *(undefined4 *)(param_1[0x34] + 4) = 0;
      }
    }
    local_30 = local_70._0_4_;
    fStack_2c = local_70._4_4_;
    fStack_28 = local_70._8_4_;
    fStack_24 = local_70._12_4_;
    fVar16 = local_30 * local_30;
    fVar17 = fStack_2c * fStack_2c;
    fVar18 = fStack_28 * fStack_28;
    auVar27._4_4_ = fVar16;
    auVar27._0_4_ = fVar16;
    auVar27._8_4_ = fVar16;
    auVar27._12_4_ = fVar16;
    fVar19 = fVar17 + fVar16 + fVar18;
    auVar6._4_4_ = fVar17 + fVar16 + fVar18;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar17 + fVar16 + fVar18;
    auVar6._12_4_ = fVar17 + fVar16 + fVar18;
    auVar22 = rsqrtps(auVar27,auVar6);
    fVar16 = auVar22._0_4_;
    fVar16 = (float)(~-(uint)(fVar19 <= (float)local_150._0_4_) &
                    (uint)((local_130 - fVar16 * fVar19 * fVar16) * fVar16 * local_140 * fVar19));
    auVar24 = _local_70;
    if ((float)param_1[0x67] < fVar16) {
      fVar16 = (float)param_1[0x67] / fVar16;
      auVar24._0_4_ = fVar16 * local_30;
      auVar24._4_4_ = fVar16 * fStack_2c;
      auVar24._8_4_ = fVar16 * fStack_28;
      auVar24._12_4_ = fVar16 * fStack_24;
    }
    fVar20 = (auVar24._0_4_ - local_30) * local_84;
    fVar21 = (auVar24._4_4_ - fStack_2c) * local_84;
    fVar26 = (auVar24._8_4_ - fStack_28) * local_84;
    fVar16 = fVar20 * fVar20;
    fVar17 = fVar21 * fVar21;
    fVar18 = fVar26 * fVar26;
    auVar25._4_4_ = fVar16;
    auVar25._0_4_ = fVar16;
    auVar25._8_4_ = fVar16;
    auVar25._12_4_ = fVar16;
    fVar19 = fVar17 + fVar16 + fVar18;
    auVar7._4_4_ = fVar17 + fVar16 + fVar18;
    auVar7._0_4_ = fVar19;
    auVar7._8_4_ = fVar17 + fVar16 + fVar18;
    auVar7._12_4_ = fVar17 + fVar16 + fVar18;
    auVar22 = rsqrtps(auVar25,auVar7);
    fVar16 = auVar22._0_4_;
    fVar16 = (float)(~-(uint)(fVar19 <= (float)local_150._0_4_) &
                    (uint)((local_130 - fVar16 * fVar19 * fVar16) * fVar16 * local_140 * fVar19)) /
             (float)param_1[0x66];
    if (fVar16 <= 1.0) {
      fVar16 = (float)param_1[0x65] * local_88;
    }
    else {
      fVar16 = ((float)param_1[0x65] * local_88) / fVar16;
    }
    local_30 = fVar16 * fVar20 + local_30;
    fStack_2c = fVar16 * fVar21 + fStack_2c;
    fStack_28 = fVar16 * fVar26 + fStack_28;
    fStack_24 = fVar16 * (auVar24._12_4_ - fStack_24) * local_84 + fStack_24;
    if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
      FUN_012696a0(&local_30);
      fStack_138 = param_3;
      fStack_134 = param_4;
      (**(code **)(*(int *)param_1[0x4a] + 8))();
      (**(code **)(*(int *)param_1[0x4b] + 8))();
      FUN_0126d5f0(&local_140,DAT_01885d20 + 0x10,param_1[0x4a],param_1[0x4b]);
    }
    else {
      FUN_0126f440(&local_30,param_3);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008E9D80  FUN_008e9d80  size=350  [run]
void __fastcall FUN_008e9d80(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_4;
  
  piVar5 = (int *)param_1[0x15];
  uStack_4 = param_1;
  if (piVar5 != piVar5 + param_1[0x16]) {
    do {
      FUN_008e9d80();
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        lib::Array<CharacterControl*>::Array<CharacterControl*>_2();
        FUN_00dd4920(iVar1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(param_1[0x15] + param_1[0x16] * 4));
  }
  if (((*(byte *)(param_1 + 0x5b) & 2) != 0) && (param_1[0x15] != 0)) {
    param_1[0x16] = 0;
  }
  pvVar2 = ThreadLocalStoragePointer;
  iVar1 = _tls_index;
  if (DAT_01885d68 != 1) {
    iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
      if (DAT_01885db8 == 0) {
        FUN_00dd72e0();
      }
      else {
        FUN_00dd5650(&DAT_0163b898);
      }
    }
    piVar5 = (int *)(iVar3 + 4);
    *piVar5 = *piVar5 + 1;
  }
  if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
    iVar3 = FUN_012696c0();
    if (iVar3 != 0) {
      FUN_01193b40(iVar3);
    }
    FUN_010060a0();
    *param_1 = 0;
  }
  else {
    iVar3 = FUN_0126f3e0();
    if (iVar3 != 0) {
      uVar4 = FUN_0126f3e0();
      FUN_01192b60((int)&uStack_4 + 3,uVar4);
    }
    FUN_010060a0();
    param_1[2] = 0;
  }
  lib::Array<CharacterControl*>::Array<CharacterControl*>_2();
  FUN_00dd4920(param_1);
  if (DAT_01885d68 != 1) {
    piVar5 = (int *)(*(int *)((int)pvVar2 + iVar1 * 4) + 4);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 008E9EE0  FUN_008e9ee0  size=102  [run]
void __fastcall FUN_008e9ee0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008e9f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 008E9F50  FUN_008e9f50  size=244  [run]
undefined4 __thiscall FUN_008e9f50(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_008e9ee0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

