// src/unsorted/unit_00EAE600.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAE600..00EAF7D0, 20 functions

#include "mgrr.h"

// 00EAE600  FUN_00eae600  size=129  [run]
void FUN_00eae600(void)

{
  DAT_01edab74 = DAT_018da65c;
  DAT_01edab70 = DAT_018da670;
  DAT_01edab6c = DAT_018da674;
  DAT_01edab68 = DAT_018da678;
  FUN_00f9d8f0(0);
  DAT_01edab60 = DAT_018da63c;
  FUN_00f9d6e0(1);
  DAT_01edab5c = DAT_018da644;
  FUN_00f9d760(0);
  DAT_01edab58 = DAT_018da648;
  FUN_00f9d7a0(0);
  DAT_01edab64 = DAT_018da688;
  FUN_00f9db30(1);
  return;
}

// 00EAE690  FUN_00eae690  size=87  [run]
void FUN_00eae690(void)

{
  FUN_00f9d8f0(DAT_01edab74);
  FUN_00f9d970(DAT_01edab70,DAT_01edab6c,DAT_01edab68);
  FUN_00f9d6e0(DAT_01edab60);
  FUN_00f9d760(DAT_01edab5c);
  FUN_00f9d7a0(DAT_01edab58);
  FUN_00f9da50(DAT_01edab64);
  return;
}

// 00EAE710  FUN_00eae710  size=263  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eae710(void)

{
  byte *local_c;
  undefined4 local_8;
  float local_4;
  
  if (DAT_01edab78 != 0) {
    if ((_DAT_01bea080 & 0x2000) == 0) {
      local_c = (byte *)0x0;
      local_8 = 0;
      FUN_00f97440(&local_c,&local_8);
      if (local_c != (byte *)0x0) {
        local_4 = ((float)*local_c * 0.114478 +
                  (float)local_c[2] * 0.298912 + (float)local_c[1] * 0.586611) * _DAT_018d5df4;
        FUN_00eace00(local_4);
        cLockableTexture::unlock();
      }
      if ((_DAT_01bea080 & 0x2000) == 0) {
        DAT_01edd5f0 = 1;
        return;
      }
    }
    if (DAT_01edd5f0 != 0) {
      DAT_01edd5f0 = 0;
    }
  }
  return;
}

// 00EAE820  FUN_00eae820  size=643  [run]
void FUN_00eae820(void)

{
  int iVar1;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_5c;
  DAT_01edab78 = 1;
  FUN_00f9cb30(0x200,&DAT_01b7bcf0);
  FUN_00f99db0();
  local_58 = (float)FUN_00f98a90();
  local_5c = (float)(int)local_58;
  iVar1 = FUN_00f98aa0();
  local_38 = (float)iVar1;
  local_58 = 0.5 / local_38;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xbf800000;
  local_40 = 0xbf800000;
  local_34 = 0xbf800000;
  local_28 = 0xbf800000;
  local_48 = local_5c;
  local_30 = local_5c;
  local_44 = 0;
  local_3c = 0;
  local_5c = 0.5 / local_5c;
  local_2c = local_38;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  local_24 = local_5c + 0.0;
  local_20 = local_58 + 0.0;
  local_10 = local_58 + 1.0;
  local_5c = local_5c + 1.0;
  local_1c = local_5c;
  local_18 = local_20;
  local_14 = local_24;
  local_c = local_5c;
  local_8 = local_10;
  FUN_00f9cae0(8,4,&DAT_01edcacc);
  FUN_00f99d50(&local_24,8,4);
  local_54 = 0xbf800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0.0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_30 = 0.0;
  local_28 = 0;
  local_3c = 0xbf800000;
  local_38 = -1.0;
  local_2c = -1.0;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 1.0;
  local_10 = 1.0;
  local_c = 1.0;
  local_8 = 1.0;
  local_18 = 0.0;
  local_14 = 0.0;
  FUN_00f9cae0(8,4,&DAT_01edcacc);
  FUN_00f99d50(&local_24,8,4);
  local_54 = 0xbf800000;
  local_50 = 0xbf800000;
  local_4c = 0;
  local_48 = -1.0;
  local_44 = 0x3f800000;
  local_3c = 0x3f800000;
  local_30 = 1.0;
  local_2c = 1.0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_38 = -1.0;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  FUN_00f99df0();
  __security_check_cookie(local_4 ^ (uint)&local_5c);
  return;
}

// 00EAEB00  FUN_00eaeb00  size=63  [run]
void __fastcall FUN_00eaeb00(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_14;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 2;
  return;
}

// 00EAEB50  FUN_00eaeb50  size=1360  [run]
void __fastcall FUN_00eaeb50(float *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_124 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_124;
  iVar1 = FUN_00c12740(0);
  iVar2 = FUN_00c12740(4);
  local_d0 = *(float *)(iVar1 + 0x1b0) - *param_1;
  local_cc = *(float *)(iVar1 + 0x1b4) - param_1[1];
  local_c8 = *(float *)(iVar1 + 0x1b8) - param_1[2];
  local_c4 = *(float *)(iVar1 + 0x1bc) - param_1[3];
  local_f0 = *(float *)(iVar1 + 0x1c0) - *param_1;
  local_ec = *(float *)(iVar1 + 0x1c4) - param_1[1];
  local_e8 = *(float *)(iVar1 + 0x1c8) - param_1[2];
  local_e4 = *(float *)(iVar1 + 0x1cc) - param_1[3];
  local_e0 = *(float *)(iVar1 + 0x1d0);
  local_dc = *(float *)(iVar1 + 0x1d4);
  local_d8 = *(float *)(iVar1 + 0x1d8);
  local_d4 = *(float *)(iVar1 + 0x1dc);
  local_b8 = local_c8 * param_1[6] + param_1[4] * local_d0 + local_cc * param_1[5];
  local_bc = local_e8 * param_1[6] + param_1[4] * local_f0 + local_ec * param_1[5];
  local_b4 = local_d8 * param_1[6] + param_1[4] * local_e0 + local_dc * param_1[5];
  local_b0 = local_bc * param_1[4];
  local_ac = param_1[5] * local_bc;
  local_a8 = param_1[6] * local_bc;
  local_100 = local_b0 * 2.0;
  local_fc = local_ac * 2.0;
  local_f8 = local_a8 * 2.0;
  local_120 = local_100 - local_b0;
  local_11c = local_fc - local_ac;
  local_118 = local_f8 - local_a8;
  local_104 = local_118 * local_118 + local_11c * local_11c + local_120 * local_120;
  fVar3 = (float10)FUN_00fdef70();
  local_104 = (float)fVar3;
  *(float *)(iVar2 + 0x98) = local_104 + *(float *)(iVar1 + 0x98);
  local_d0 = local_b8 * param_1[4] * -2.0 + *param_1 + local_d0;
  local_cc = param_1[5] * local_b8 * -2.0 + param_1[1] + local_cc;
  local_c8 = param_1[6] * local_b8 * -2.0 + param_1[2] + local_c8;
  local_c4 = local_b8 * param_1[7] * -2.0 + param_1[3] + local_c4;
  local_f0 = local_bc * param_1[4] * -2.0 + *param_1 + local_f0;
  local_ec = param_1[5] * local_bc * -2.0 + param_1[1] + local_ec;
  local_e8 = param_1[6] * local_bc * -2.0 + param_1[2] + local_e8;
  local_e4 = local_bc * param_1[7] * -2.0 + param_1[3] + local_e4;
  local_120 = local_b4 * param_1[4];
  local_11c = param_1[5] * local_b4;
  local_118 = param_1[6] * local_b4;
  local_114 = local_b4 * param_1[7];
  local_100 = local_120 * -2.0;
  local_fc = local_11c * -2.0;
  local_f8 = local_118 * -2.0;
  local_f4 = local_114 * -2.0;
  local_e0 = local_100 + local_e0;
  local_dc = local_fc + local_dc;
  local_d8 = local_f8 + local_d8;
  local_d4 = local_f4 + local_d4;
  FUN_00de5f20(&local_d0);
  FUN_00de5fc0(&local_f0);
  FUN_00de6060(&local_e0);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
  thunk_FUN_00de01a0(local_60,iVar2 + 0x1b0,iVar2 + 0x1c0,iVar2 + 0x1d0);
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  local_8c = 0x3f800000;
  local_a0 = 0xbf800000;
  D3DXMatrixMultiply(local_60,local_60,&local_a0);
  FUN_00de5180(&local_6c);
  FUN_00de5aa0();
  FUN_00de5170();
  FUN_00da38d0();
  FUN_00da3830(*(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x98),
               *(undefined4 *)(iVar2 + 0x9c),iVar2 + 0x1b0,iVar2 + 0x1c0,iVar2 + 0x1d0);
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffffed0);
  return;
}

// 00EAF160  FUN_00eaf160  size=503  [run]
uint __fastcall
FUN_00eaf160(undefined4 param_1,float *param_2,float *param_3,uint param_4,float *param_5,
            float param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  float fVar12;
  bool bVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  uint local_38;
  float local_30;
  
  pfVar17 = param_3 + 2;
  local_30 = param_6 + *pfVar17 * param_5[2] + *param_3 * *param_5 + param_3[1] * param_5[1];
  bVar11 = 0.0 < local_30;
  if (bVar11) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = *pfVar17;
    param_2[3] = param_3[3];
  }
  local_38 = (uint)bVar11;
  uVar15 = 0;
  if (param_4 != 0) {
    param_2 = param_2 + (uint)bVar11 * 4;
    do {
      uVar15 = uVar15 + 1;
      uVar16 = uVar15 % param_4;
      pfVar1 = param_3 + uVar16 * 4;
      fVar12 = param_5[2] * pfVar1[2] + pfVar1[1] * param_5[1] + *param_5 * param_3[uVar16 * 4] +
               param_6;
      bVar13 = 0.0 < fVar12;
      pfVar18 = param_2;
      if (bVar13 != bVar11) {
        local_38 = local_38 + 1;
        pfVar18 = param_2 + 4;
        fVar14 = ABS(local_30) / (ABS(fVar12) + ABS(local_30));
        fVar2 = pfVar1[1];
        fVar3 = pfVar17[-1];
        fVar4 = pfVar17[-1];
        fVar5 = pfVar1[2];
        fVar6 = *pfVar17;
        fVar7 = *pfVar17;
        fVar8 = pfVar1[3];
        fVar9 = pfVar17[1];
        fVar10 = pfVar17[1];
        *param_2 = pfVar17[-2] + fVar14 * (*pfVar1 - pfVar17[-2]);
        param_2[1] = (fVar2 - fVar3) * fVar14 + fVar4;
        param_2[2] = (fVar5 - fVar6) * fVar14 + fVar7;
        param_2[3] = (fVar8 - fVar9) * fVar14 + fVar10;
      }
      param_2 = pfVar18;
      if ((bVar13) && (uVar16 != 0)) {
        local_38 = local_38 + 1;
        *pfVar18 = *pfVar1;
        param_2 = pfVar18 + 4;
        pfVar18[1] = pfVar1[1];
        pfVar18[2] = pfVar1[2];
        pfVar18[3] = pfVar1[3];
      }
      pfVar17 = pfVar17 + 4;
      local_30 = fVar12;
      bVar11 = bVar13;
    } while (uVar15 < param_4);
  }
  if (param_4 + 1 < local_38) {
    FUN_00dd5650(&DAT_016d3f38);
    return local_38;
  }
  return local_38;
}

// 00EAF360  FUN_00eaf360  size=140  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eaf360(void)

{
  DAT_01ddab50 = 0;
  DAT_01ddaa90 = 0;
  DAT_01ddaa98 = 0xffffffff;
  DAT_01ddaa9c = 0xffffffff;
  DAT_01ddaaa8 = 0;
  DAT_01ddaab0 = 0xffffffff;
  DAT_01ddaab4 = 0xffffffff;
  _DAT_01ddaac0 = 0;
  DAT_01ddaac8 = 0xffffffff;
  DAT_01ddaacc = 0xffffffff;
  _DAT_01ddaad8 = 0;
  DAT_01ddaae0 = 0xffffffff;
  DAT_01ddaae4 = 0xffffffff;
  _DAT_01ddaaf0 = 0;
  DAT_01ddaaf8 = 0xffffffff;
  DAT_01ddaafc = 0xffffffff;
  _DAT_01ddab08 = 0;
  DAT_01ddab10 = 0xffffffff;
  DAT_01ddab14 = 0xffffffff;
  _DAT_01ddab20 = 0;
  DAT_01ddab28 = 0xffffffff;
  DAT_01ddab2c = 0xffffffff;
  _DAT_01ddab38 = 0;
  DAT_01ddab40 = 0xffffffff;
  DAT_01ddab44 = 0xffffffff;
  return;
}

// 00EAF3F0  FUN_00eaf3f0  size=11  [run]
undefined4 FUN_00eaf3f0(void)

{
  FUN_00eaf360();
  return 1;
}

// 00EAF410  FUN_00eaf410  size=62  [run]
undefined4 FUN_00eaf410(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_01ddaa90;
  uVar2 = 0;
  do {
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      piVar1[2] = param_2;
      piVar1[3] = param_3;
      piVar1[4] = param_4;
      return 1;
    }
    uVar2 = uVar2 + 0x18;
    piVar1 = piVar1 + 6;
  } while (uVar2 < 0xc0);
  return 0;
}

// 00EAF450  FUN_00eaf450  size=368  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eaf450(int param_1,int param_2)

{
  if ((param_2 < 0) || ((param_1 == DAT_01ddaa98 && (param_2 == DAT_01ddaa9c)))) {
    DAT_01ddaa90 = 0;
    DAT_01ddaa98 = -1;
    DAT_01ddaa9c = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaab0 && (param_2 == DAT_01ddaab4)))) {
    DAT_01ddaaa8 = 0;
    DAT_01ddaab0 = -1;
    DAT_01ddaab4 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaac8 && (param_2 == DAT_01ddaacc)))) {
    _DAT_01ddaac0 = 0;
    DAT_01ddaac8 = -1;
    DAT_01ddaacc = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaae0 && (param_2 == DAT_01ddaae4)))) {
    _DAT_01ddaad8 = 0;
    DAT_01ddaae0 = -1;
    DAT_01ddaae4 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaaf8 && (param_2 == DAT_01ddaafc)))) {
    _DAT_01ddaaf0 = 0;
    DAT_01ddaaf8 = -1;
    DAT_01ddaafc = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab10 && (param_2 == DAT_01ddab14)))) {
    _DAT_01ddab08 = 0;
    DAT_01ddab10 = -1;
    DAT_01ddab14 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab28 && (param_2 == DAT_01ddab2c)))) {
    _DAT_01ddab20 = 0;
    DAT_01ddab28 = -1;
    DAT_01ddab2c = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab40 && (param_2 == DAT_01ddab44)))) {
    _DAT_01ddab38 = 0;
    DAT_01ddab40 = -1;
    DAT_01ddab44 = -1;
  }
  return;
}

// 00EAF5E0  FUN_00eaf5e0  size=76  [run]
undefined4 FUN_00eaf5e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fa6050(*param_1,param_1[1],param_1[2],&DAT_01b7bcf0,param_1[3]);
  if (iVar1 != 0) {
    iVar1 = FUN_00f97dd0();
    if (iVar1 != 0) {
      FUN_00f97df0(&DAT_01edd490);
      return 1;
    }
  }
  return 0;
}

// 00EAF630  FUN_00eaf630  size=10  [run]
void FUN_00eaf630(void)

{
  FUN_00f9d030();
  return;
}

// 00EAF660  FUN_00eaf660  size=20  [run]
void FUN_00eaf660(void)

{
  FUN_00f97de0();
  FUN_00fa4eb0();
  return;
}

// 00EAF6B0  FUN_00eaf6b0  size=10  [run]
void FUN_00eaf6b0(void)

{
  FUN_00fcdea0();
  return;
}

// 00EAF6C0  FUN_00eaf6c0  size=8  [run]
void __fastcall FUN_00eaf6c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00EAF6D0  FUN_00eaf6d0  size=17  [run]
void __fastcall FUN_00eaf6d0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00EAF700  FUN_00eaf700  size=95  [run]
void __fastcall FUN_00eaf700(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00de4500("pre_texture.wta");
  iVar2 = FUN_00de4500("pre_texture.wtp");
  if ((iVar1 == 0) || (iVar2 == 0)) {
    iVar1 = FUN_00de4500("pre_texture.wtb");
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00fa25d0(iVar1);
  }
  else {
    iVar1 = FUN_00fa4d00(iVar1,iVar2);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}

// 00EAF780  FUN_00eaf780  size=10  [run]
void FUN_00eaf780(void)

{
  FUN_00fcdc80();
  return;
}

// 00EAF7D0  FUN_00eaf7d0  size=3  [run]
undefined4 __fastcall FUN_00eaf7d0(undefined4 param_1)

{
  return param_1;
}

