// src/unsorted/unit_00C44940.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C44940..00C476D0, 15 functions

#include "types.h"

// 00C44940  FUN_00c44940  size=1924  [run]
undefined4
FUN_00c44940(float *param_1,int param_2,float param_3,float param_4,float *param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_134;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 auStack_f4 [16];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [28];
  
  fStack_134 = 0.0;
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))();
  if ((((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
      (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     ((iVar2 = FUN_00a7c8a0(), iVar2 != 0 &&
      (iVar2 = FUN_00a12210(*(undefined4 *)(param_2 + 8)), iVar2 != 0)))) {
    fStack_94 = *(float *)(iVar2 + 0x40);
    fStack_90 = *(float *)(iVar2 + 0x44);
    fStack_8c = *(float *)(iVar2 + 0x48);
    fStack_88 = *(float *)(iVar2 + 0x4c);
    fStack_c4 = *(float *)(iVar1 + 0x40);
    fStack_c0 = *(float *)(iVar1 + 0x44);
    fStack_bc = *(float *)(iVar1 + 0x48);
    fStack_b8 = *(float *)(iVar1 + 0x4c);
    afStack_74[0] = 0.0;
    afStack_74[1] = 1.0;
    afStack_74[2] = 0.0;
    D3DXVec3TransformNormal(afStack_74,afStack_74,iVar1 + 0x10);
    pfVar7 = &fStack_90;
    fStack_e0 = fStack_80 * 1.35 + fStack_d0;
    fStack_dc = fStack_7c * 1.35 + fStack_cc;
    fStack_d8 = fStack_78 * 1.35 + fStack_c8;
    fStack_d4 = afStack_74[0] * 1.35 + fStack_c4;
    fStack_110 = *(float *)(iVar2 + 0x40);
    fStack_10c = *(float *)(iVar2 + 0x44);
    fStack_108 = *(float *)(iVar2 + 0x48);
    fStack_104 = *(float *)(iVar2 + 0x4c);
    fStack_90 = *param_5;
    fStack_8c = param_5[1];
    fStack_88 = param_5[2];
    fStack_84 = param_5[3];
    pfVar9 = pfVar7;
    fStack_d0 = fStack_e0;
    fStack_cc = fStack_dc;
    fStack_c8 = fStack_d8;
    fStack_c4 = fStack_d4;
    D3DXVec3TransformNormal(pfVar7,pfVar7,iVar2 + 0x10);
    fStack_134 = fStack_94 + fStack_114;
    fStack_bc = 0.0;
    fStack_b8 = 1.0;
    uStack_b4 = 0;
    FUN_00ddc1d0(afStack_74 + 2,param_6,5);
    pfVar5 = afStack_74 + 2;
    pfVar3 = &fStack_bc;
    D3DXVec3TransformNormal(pfVar3,pfVar3,pfVar5);
    D3DXVec3TransformNormal(&fStack_c8,&fStack_c8,iVar2 + 0x10);
    fVar6 = fStack_d4 * param_3 * 0.5 + (float)pfVar3;
    fVar8 = fStack_d0 * param_3 * 0.5 + (float)pfVar5;
    fVar10 = fStack_cc * param_3 * 0.5 + (float)pfVar7;
    fVar4 = fStack_c8 * param_3 * 0.5 + (float)pfVar9;
    fStack_e4 = (float)pfVar3 - fStack_d4 * param_3 * 0.5;
    fStack_e0 = (float)pfVar5 - fStack_d0 * param_3 * 0.5;
    fStack_dc = (float)pfVar7 - fStack_cc * param_3 * 0.5;
    fStack_d8 = (float)pfVar9 - fStack_c8 * param_3 * 0.5;
    fStack_94 = (fStack_e4 - fVar6) * param_4 + fVar6;
    fStack_90 = (fStack_e0 - fVar8) * param_4 + fVar8;
    fStack_8c = (fStack_dc - fVar10) * param_4 + fVar10;
    fStack_88 = (fStack_d8 - fVar4) * param_4 + fVar4;
    fStack_e4 = (fVar6 - fStack_e4) * param_4 + fStack_e4;
    fStack_e0 = fStack_e0 + (fVar8 - fStack_e0) * param_4;
    fStack_dc = (fVar10 - fStack_dc) * param_4 + fStack_dc;
    fStack_d8 = (fVar4 - fStack_d8) * param_4 + fStack_d8;
    fStack_118 = 0.0;
    fStack_134 = 0.0;
    fVar10 = 1.0;
    fVar14 = 1.0;
    fStack_108 = 1.0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fStack_114 = 0.0;
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    iVar1 = FUN_00c1cb90(auStack_f4,&fStack_c4,&fStack_94,&fStack_e4,param_4,&fStack_118);
    if (iVar1 != 0) {
      fVar4 = (fStack_c4 - fStack_104) * fStack_118 + fStack_104;
      fVar6 = fStack_100 + (fStack_c0 - fStack_100) * fStack_118;
      fVar8 = (fStack_bc - fStack_fc) * fStack_118 + fStack_fc;
      fVar10 = fStack_f8 + fStack_118 * (fStack_b8 - fStack_f8);
    }
    iVar1 = FUN_00c2e2d0(auStack_f4,&fStack_c4,&fStack_94,param_4,&fStack_118,&fStack_134);
    if (iVar1 != 0) {
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 1.0;
      fVar11 = fStack_134;
    }
    iVar1 = FUN_00c2e2d0(auStack_f4,&fStack_c4,&fStack_e4,param_4,&fStack_118,&fStack_134);
    if (iVar1 != 0) {
      fStack_114 = fStack_134;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      fStack_108 = 1.0;
    }
    if (((fVar4 != 0.0) || (fVar6 != 0.0)) || (fVar8 != 0.0)) {
      *param_1 = fVar4;
      param_1[1] = fVar6;
      param_1[2] = fVar8;
      param_1[3] = fVar10;
    }
    if ((((fVar11 != 0.0) || (fVar12 != 0.0)) || (fVar13 != 0.0)) &&
       (SQRT((fStack_104 - fVar11) * (fStack_104 - fVar11) +
             (fStack_100 - fVar12) * (fStack_100 - fVar12) +
             (fStack_fc - fVar13) * (fStack_fc - fVar13)) <
        SQRT((fStack_100 - param_1[1]) * (fStack_100 - param_1[1]) +
             (fStack_104 - *param_1) * (fStack_104 - *param_1) +
             (fStack_fc - param_1[2]) * (fStack_fc - param_1[2])))) {
      *param_1 = fVar11;
      param_1[1] = fVar12;
      param_1[2] = fVar13;
      param_1[3] = fVar14;
    }
    if ((((fStack_114 != 0.0) || (fStack_110 != 0.0)) || (fStack_10c != 0.0)) &&
       (SQRT((fStack_100 - fStack_110) * (fStack_100 - fStack_110) +
             (fStack_104 - fStack_114) * (fStack_104 - fStack_114) +
             (fStack_fc - fStack_10c) * (fStack_fc - fStack_10c)) <
        SQRT((fStack_100 - param_1[1]) * (fStack_100 - param_1[1]) +
             (fStack_104 - *param_1) * (fStack_104 - *param_1) +
             (fStack_fc - param_1[2]) * (fStack_fc - param_1[2])))) {
      *param_1 = fStack_114;
      param_1[1] = fStack_110;
      param_1[2] = fStack_10c;
      param_1[3] = fStack_108;
    }
    if (((*param_1 != 0.0) || (param_1[1] != 0.0)) || (param_1[2] != 0.0)) {
      return 1;
    }
  }
  return 0;
}

// 00C450D0  FUN_00c450d0  size=402  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00c450d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 *puVar6;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  local_90 = *(undefined4 *)(param_1 + 0x60);
  local_8c = *(float *)(param_1 + 100);
  local_88 = *(float *)(param_1 + 0x68);
  local_80 = DAT_01d61910;
  local_7c = DAT_01d61914;
  local_78 = DAT_01d61918;
  local_a0 = SQRT(_DAT_01d618e8 * _DAT_01d618e8 +
                  _DAT_01d618e0 * _DAT_01d618e0 + _DAT_01d618e4 * _DAT_01d618e4);
  local_9c = SQRT(_DAT_01d618f8 * _DAT_01d618f8 +
                  _DAT_01d618f0 * _DAT_01d618f0 + _DAT_01d618f4 * _DAT_01d618f4);
  fVar1 = SQRT(_DAT_01d61908 * _DAT_01d61908 +
               _DAT_01d61900 * _DAT_01d61900 + _DAT_01d61904 * _DAT_01d61904);
  fVar2 = _DAT_01d618f8 / fVar1;
  fVar3 = _DAT_01d61908 / fVar1;
  fVar4 = (float10)FUN_00ddbaa0(-(_DAT_01d618e8 / fVar1));
  fVar5 = (float10)fpatan((float10)fVar2,(float10)fVar3);
  local_70 = (float)fVar5;
  local_6c = (float)fVar4;
  fVar4 = (float10)fpatan((float10)_DAT_01d618e4 / (float10)local_9c,
                          (float10)_DAT_01d618e0 / (float10)local_a0);
  local_68 = (float)fVar4;
  local_a0 = 0.0;
  local_9c = 1.0;
  local_98 = 0.0;
  FUN_00ddc1d0(local_50,&local_70,5);
  puVar6 = local_50;
  D3DXVec3TransformNormal(local_60,&local_a0);
  fVar1 = ABS((fStack_94 * fStack_64 + local_9c * local_6c + local_98 * local_68) -
              (fStack_64 * fStack_84 + local_6c * local_8c + local_68 * local_88));
  return fVar1 < (float)puVar6 != (fVar1 == (float)puVar6);
}

// 00C45270  FUN_00c45270  size=229  [run]
void __fastcall FUN_00c45270(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x74),0);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xe4),0);
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  FUN_00dd7270();
  return;
}

// 00C45360  FUN_00c45360  size=400  [run]
void __fastcall FUN_00c45360(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (0.0 < *(float *)(param_1 + 0x194)) {
    fVar3 = (float10)FUN_00e049b0();
    fVar3 = (float10)*(float *)(param_1 + 0x194) - fVar3;
    *(float *)(param_1 + 0x194) = (float)fVar3;
    if (fVar3 <= (float10)0) {
      FUN_00c2e650();
    }
  }
  if (0.0 < *(float *)(param_1 + 0x234)) {
    fVar3 = (float10)FUN_00e049b0();
    fVar3 = (float10)*(float *)(param_1 + 0x234) - fVar3;
    *(float *)(param_1 + 0x234) = (float)fVar3;
    if (fVar3 <= (float10)0) {
      *(float *)(param_1 + 0x234) = (float)(float10)0;
      *(undefined4 *)(param_1 + 0x230) = 0;
    }
  }
  if (*(float *)(param_1 + 0xd0) <= 0.0) {
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  }
  fVar1 = *(float *)(param_1 + 0xd8) - 1.0;
  *(float *)(param_1 + 0xd8) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(float *)(param_1 + 0xd8) <= 0.0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  iVar2 = FUN_00f96420();
  if (iVar2 == 0x16) {
    FUN_00f96550(0x42c80000,0x42c80000,"slashHitAngleDeg : %f",
                 (double)(*(float *)(param_1 + 0x278) * 57.29578));
    FUN_00f96550(0x42c80000,0x42f00000,"slashHitAngleRad : %f",(double)*(float *)(param_1 + 0x278));
  }
  return;
}

// 00C454F0  FUN_00c454f0  size=2772  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00c454f0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float **ppfStack_1e4;
  undefined1 *puStack_1e0;
  float *pfStack_1dc;
  undefined1 **ppuStack_1d8;
  undefined1 *puStack_1d4;
  undefined1 **ppuStack_1d0;
  float *pfStack_1cc;
  undefined1 *puStack_1c8;
  float *pfStack_1c4;
  undefined1 *puStack_1c0;
  float *pfStack_1bc;
  float *pfStack_1b8;
  undefined1 **ppuStack_1b4;
  float *pfStack_1b0;
  float **ppfVar8;
  float fVar9;
  float fVar10;
  undefined4 local_178;
  float *local_174;
  undefined1 *puStack_170;
  float *pfStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  undefined1 auStack_148 [12];
  undefined1 *puStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128 [13];
  undefined1 auStack_f4 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_9c [4];
  undefined4 local_98;
  float *local_94;
  undefined1 auStack_8c [12];
  undefined1 local_80 [4];
  undefined1 auStack_7c [8];
  float afStack_74 [28];
  
  *(undefined4 *)(param_1 + 0xec) = 0;
  if ((((*(int *)(param_3 + 0x8c) == -1) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
      (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) || (iVar3 = FUN_00a12210(), iVar3 == 0)) {
    return 0;
  }
  pfStack_1b0 = (float *)0xc45558;
  FID_conflict__memcpy(&local_d0,(void *)(iVar3 + 0x10),0x40);
  local_178 = local_98;
  local_174 = local_94;
  fVar9 = local_cc * local_cc;
  fVar2 = local_d0 * local_d0;
  fVar10 = local_bc * local_bc;
  fVar1 = local_c0 * local_c0;
  local_134 = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
  local_138 = local_b8 / local_134;
  local_134 = local_a8 / local_134;
  fVar4 = (float10)FUN_00ddbaa0();
  fVar7 = (float10)fpatan((float10)local_138,(float10)local_134);
  pfStack_1b0 = local_128 + 6;
  local_130 = (float)fVar7;
  local_12c = (float)fVar4;
  fVar4 = (float10)fpatan((float10)local_cc / (float10)SQRT(local_b8 * local_b8 + fVar1 + fVar10),
                          (float10)local_d0 / (float10)SQRT(local_c8 * local_c8 + fVar2 + fVar9));
  local_128[0] = (float)fVar4;
  ppuStack_1b4 = (undefined1 **)0xc45673;
  FUN_00ddc1d0();
  pfStack_1b0 = (float *)0xc45690;
  D3DXVec3TransformNormal();
  pfStack_1b0 = (float *)0x5;
  ppuStack_1b4 = &puStack_13c;
  pfStack_1b8 = local_128 + 3;
  pfStack_1bc = (float *)0xc456b4;
  FUN_00ddc1d0();
  pfStack_1b0 = local_128 + 3;
  ppuStack_1b4 = (undefined1 **)&stack0xfffffe64;
  pfStack_1b8 = (float *)local_9c;
  pfStack_1bc = (float *)0xc456d1;
  D3DXVec3TransformNormal();
  pfStack_1bc = (float *)0x5;
  puStack_1c0 = auStack_148;
  pfStack_1c4 = local_128;
  puStack_1c8 = (undefined1 *)0xc456f5;
  FUN_00ddc1d0();
  pfStack_1bc = local_128;
  puStack_1c0 = &stack0xfffffe58;
  pfStack_1c4 = &local_138;
  puStack_1c8 = (undefined1 *)0xc45712;
  D3DXVec3TransformNormal();
  local_128[0xb] = 0.0;
  local_128[10] = 0.0;
  local_128[9] = 0.0;
  local_128[8] = 0.0;
  local_128[6] = 0.0;
  local_128[5] = 0.0;
  local_128[4] = 0.0;
  local_128[3] = 0.0;
  local_128[1] = 0.0;
  local_128[0] = 0.0;
  local_12c = 0.0;
  local_130 = 0.0;
  local_128[0xc] = 1.0;
  local_128[7] = 1.0;
  local_128[2] = 1.0;
  local_134 = 1.0;
  if (*(float *)(param_3 + 0x28) != 0.0) {
    puStack_1c8 = *(undefined1 **)(param_3 + 0x28);
    pfStack_1cc = afStack_74;
    ppuStack_1d0 = (undefined1 **)0xc457aa;
    D3DXMatrixRotationZ();
    ppuStack_1d8 = &puStack_13c;
    puStack_1d4 = auStack_7c;
    pfStack_1dc = (float *)0xc457c2;
    ppuStack_1d0 = ppuStack_1d8;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_3 + 0x24) != 0.0) {
    puStack_1c8 = *(undefined1 **)(param_3 + 0x24);
    pfStack_1cc = afStack_74;
    ppuStack_1d0 = (undefined1 **)0xc457e8;
    D3DXMatrixRotationY();
    ppuStack_1d8 = &puStack_13c;
    puStack_1d4 = auStack_7c;
    pfStack_1dc = (float *)0xc45800;
    ppuStack_1d0 = ppuStack_1d8;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_3 + 0x20) != 0.0) {
    puStack_1c8 = *(undefined1 **)(param_3 + 0x20);
    pfStack_1cc = afStack_74;
    ppuStack_1d0 = (undefined1 **)0xc45822;
    D3DXMatrixRotationX();
    ppuStack_1d8 = &puStack_13c;
    puStack_1d4 = auStack_7c;
    pfStack_1dc = (float *)0xc4583a;
    ppuStack_1d0 = ppuStack_1d8;
    D3DXMatrixMultiply();
  }
  ppuStack_1d0 = (undefined1 **)auStack_f4;
  pfStack_1cc = &local_134;
  puStack_1d4 = (undefined1 *)0xc45852;
  puStack_1c8 = (undefined1 *)ppuStack_1d0;
  D3DXMatrixMultiply();
  puStack_1c0 = (undefined1 *)
                SQRT(local_128[0xc] * local_128[0xc] +
                     local_128[10] * local_128[10] + local_128[0xb] * local_128[0xb]);
  pfStack_1bc = (float *)SQRT(fStack_e8 * fStack_e8 + fStack_f0 * fStack_f0 + fStack_ec * fStack_ec)
  ;
  fVar9 = SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc);
  fStack_164 = fStack_e8 / fVar9;
  fStack_168 = fStack_d8 / fVar9;
  puStack_1d4 = (undefined1 *)-(local_128[0xc] / fVar9);
  ppuStack_1d8 = (undefined1 **)0xc458e4;
  fVar4 = (float10)FUN_00ddbaa0();
  fVar7 = (float10)fpatan((float10)fStack_164,(float10)fStack_168);
  fStack_160 = (float)fVar7;
  fStack_15c = (float)fVar4;
  fVar4 = (float10)fpatan((float10)local_128[0xb] / (float10)(float)pfStack_1bc,
                          (float10)local_128[10] / (float10)(float)puStack_1c0);
  fStack_158 = (float)fVar4;
  ppuStack_1d8 = (undefined1 **)0x5;
  pfStack_1dc = &fStack_160;
  puStack_1e0 = local_80;
  pfStack_1b0 = (float *)(fStack_150 * *(float *)(param_3 + 0x14) +
                         local_c0 * *(float *)(param_3 + 0x10) +
                         local_b0 * *(float *)(param_3 + 0x18) + (float)pfStack_1b0);
  puStack_1c0 = (undefined1 *)0x0;
  pfStack_1bc = (float *)0x0;
  pfStack_1b8 = (float *)0x3f800000;
  ppfStack_1e4 = (float **)0xc459f9;
  FUN_00ddc1d0();
  puStack_1d4 = local_80;
  ppuStack_1d8 = &puStack_1c0;
  pfStack_1dc = &local_b0;
  puStack_1e0 = (undefined1 *)0xc45a16;
  D3DXVec3TransformNormal();
  pfStack_1cc = (float *)0x3f800000;
  puStack_1e0 = (undefined1 *)0x5;
  ppfStack_1e4 = &pfStack_16c;
  puStack_1c8 = (undefined1 *)0x0;
  pfStack_1c4 = (float *)0x0;
  FUN_00ddc1d0(auStack_8c);
  puStack_1e0 = auStack_8c;
  ppfStack_1e4 = &pfStack_1cc;
  D3DXVec3TransformNormal(&local_cc);
  ppuStack_1d8 = (undefined1 **)0x0;
  puStack_1d4 = (undefined1 *)0x3f800000;
  ppuStack_1d0 = (undefined1 **)0x0;
  FUN_00ddc1d0(&local_98,&local_178,5);
  D3DXVec3TransformNormal(&fStack_168,&ppuStack_1d8,&local_98);
  ppuStack_1b4 = (undefined1 **)((float)puStack_1d4 - _DAT_01bea630);
  pfStack_1b0 = (float *)((float)ppuStack_1d0 - _DAT_01bea634);
  fVar9 = (float)pfStack_1cc - _DAT_01bea638;
  pfStack_1c4 = local_174;
  puStack_1c0 = puStack_170;
  pfStack_1bc = pfStack_16c;
  pfStack_1b8 = (float *)fStack_168;
  if ((((float)ppuStack_1b4 != 0.0) || ((float)pfStack_1b0 != 0.0)) || (fVar9 != 0.0)) {
    fVar10 = fVar9 * fVar9 +
             (float)pfStack_1b0 * (float)pfStack_1b0 + (float)ppuStack_1b4 * (float)ppuStack_1b4;
    if (fVar10 < 0.0 == (fVar10 == 0.0)) {
      FUN_00ddf460(&ppuStack_1b4,&ppuStack_1b4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      ppuStack_1b4 = (undefined1 **)0x0;
      pfStack_1b0 = (float *)0x3f800000;
      fVar9 = 0.0;
    }
  }
  if ((((float)pfStack_1c4 != 0.0) || ((float)puStack_1c0 != 0.0)) || ((float)pfStack_1bc != 0.0)) {
    fVar10 = (float)pfStack_1bc * (float)pfStack_1bc +
             (float)puStack_1c0 * (float)puStack_1c0 + (float)pfStack_1c4 * (float)pfStack_1c4;
    if (fVar10 < 0.0 == (fVar10 == 0.0)) {
      FUN_00ddf460(&pfStack_1c4,&pfStack_1c4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      pfStack_1c4 = (float *)0x0;
      puStack_1c0 = (undefined1 *)0x3f800000;
      pfStack_1bc = (float *)0x0;
    }
  }
  ppfStack_1e4 = (float **)((float)pfStack_1bc * (float)pfStack_1b0 - (float)puStack_1c0 * fVar9);
  fVar9 = (float)pfStack_1c4 * fVar9 - (float)ppuStack_1b4 * (float)pfStack_1bc;
  fVar10 = (float)ppuStack_1b4 * (float)puStack_1c0 - (float)pfStack_1c4 * (float)pfStack_1b0;
  if ((((float)ppfStack_1e4 != 0.0) || (fVar9 != 0.0)) || (ppfVar8 = ppfStack_1e4, fVar10 != 0.0)) {
    fVar1 = fVar10 * fVar10 + (float)ppfStack_1e4 * (float)ppfStack_1e4 + fVar9 * fVar9;
    puStack_1e0 = (undefined1 *)fVar9;
    pfStack_1dc = (float *)fVar10;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&stack0xfffffe5c,&stack0xfffffe5c);
      ppfVar8 = ppfStack_1e4;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar9 = 1.0;
      fVar10 = 0.0;
      ppfVar8 = (float **)0x0;
    }
  }
  fVar1 = *(float *)(param_3 + 0x34);
  ppfStack_1e4 = (float **)((float)ppfVar8 * fVar1 + (float)puStack_1d4);
  puStack_1e0 = (undefined1 *)(fVar1 * fVar9 + (float)ppuStack_1d0);
  pfStack_1dc = (float *)(fVar1 * fVar10 + (float)pfStack_1cc);
  ppuStack_1d8 = (undefined1 **)(fVar1 * 0.0 + (float)puStack_1c8);
  FUN_00d9fa80(&fStack_c4,&ppfStack_1e4);
  fVar1 = *(float *)(param_3 + 0x34);
  ppfStack_1e4 = (float **)((float)puStack_1d4 - (float)ppfVar8 * fVar1);
  puStack_1e0 = (undefined1 *)((float)ppuStack_1d0 - fVar1 * fVar9);
  pfStack_1dc = (float *)((float)pfStack_1cc - fVar1 * fVar10);
  ppuStack_1d8 = (undefined1 **)((float)puStack_1c8 - fVar1 * 0.0);
  FUN_00d9fa80(&fStack_b4,&ppfStack_1e4);
  fStack_b4 = fStack_b4 - fStack_c4;
  fVar9 = local_b0 - local_c0;
  local_ac = local_ac - local_bc;
  fVar4 = (float10)FUN_00ddbb50((local_ac * 0.0 + fStack_b4 * 300.0 + fVar9 * 0.0) /
                                (SQRT(local_ac * local_ac + fStack_b4 * fStack_b4 + fVar9 * fVar9) *
                                300.0));
  if (local_b0 < local_c0) {
    fVar4 = fVar4 * (float10)-1.0;
  }
  fVar4 = fVar4 * (float10)57.29578 + (float10)270.0;
  if ((float10)360.0 < fVar4) {
    fVar4 = fVar4 - (float10)360.0;
  }
  fVar7 = (float10)param_2;
  fVar5 = (float10)15.0;
  if (fVar5 <= ABS(fVar4 - fVar7)) {
    fVar6 = (float10)180.0;
    if ((fVar6 < fVar7) && (ABS(fVar4 - (fVar7 - fVar6)) < fVar5)) {
      FUN_00c2e5e0(param_3);
      return *(undefined4 *)(param_1 + 400);
    }
    if ((fVar7 < fVar6) && (ABS(fVar4 - (fVar6 + fVar7)) < fVar5)) {
      FUN_00c2e5e0(param_3);
      return *(undefined4 *)(param_1 + 400);
    }
    return *(undefined4 *)(param_1 + 400);
  }
  FUN_00c2e5e0(param_3);
  return *(undefined4 *)(param_1 + 400);
}

// 00C45FD0  FUN_00c45fd0  size=1382  [run]
void __thiscall FUN_00c45fd0(float param_1,int param_2,float param_3)

{
  short sVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  short *psVar9;
  float fVar10;
  float *pfVar11;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int iStack_c0;
  short *psStack_bc;
  int iStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8 [4];
  float fStack_98;
  float afStack_94 [8];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_54 [20];
  
  if ((((param_2 != 0) &&
       (local_a8[0] = param_1, piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) &&
      (fVar10 = (float)piVar3[0xcc], fVar10 != 0.0)) &&
     ((local_d4 = fVar10, iVar4 = (**(code **)(*DAT_01bea100 + 0x28))(0), iVar4 != 0 &&
      (local_a8[0] = (float)FUN_00a7c8a0(), local_a8[0] != 0.0)))) {
    fStack_b0 = *(float *)((int)param_1 + 0x26c);
    if ((param_3 + 1.0 < fStack_b0) && (0 < *(int *)((int)fVar10 + 0xcc))) {
      iVar4 = piVar3[0xcc];
      fStack_b4 = 0.0;
      fStack_dc = 0.0;
      if (((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xcc))) && (*(int *)(iVar4 + 0xc0) != 0)) {
        iStack_b8 = 0;
        if (0 < *(int *)(iVar4 + 0xc4)) {
          psVar9 = (short *)(*(int *)(iVar4 + 0xc0) + 0x68);
          iStack_c0 = iVar4;
          do {
            sVar1 = *psVar9;
            if (sVar1 < 0) {
LAB_00c46123:
              piVar6 = piVar3 + 4;
            }
            else {
              piVar6 = (int *)piVar3[0xd8];
              piVar7 = piVar6;
              if (piVar6 == (int *)0x0) {
                piVar7 = piVar3;
              }
              if ((short)piVar7[0xd6] <= sVar1) goto LAB_00c46123;
              if (piVar6 == (int *)0x0) {
                piVar6 = piVar3;
              }
              iVar5 = (int)sVar1;
              if ((iVar5 < 0) || ((short)piVar6[0xd6] <= iVar5)) {
                piVar6 = (int *)0x10;
              }
              else {
                piVar6 = (int *)(iVar5 * 0xb0 + piVar6[0xd4] + 0x10);
              }
            }
            psStack_bc = psVar9;
            D3DXMatrixMultiply(afStack_54,psVar9 + -0x24,piVar6);
            if (fStack_b4 < *(float *)(psVar9 + -4)) {
              fStack_b4 = *(float *)(psStack_bc + -4);
              pfVar8 = afStack_54;
              pfVar11 = afStack_94;
              for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar11 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                pfVar11 = pfVar11 + 1;
              }
              fStack_dc = 1.4013e-45;
              psVar9 = psStack_bc;
              iVar4 = iStack_c0;
            }
            iStack_b8 = iStack_b8 + 1;
            psVar9 = psVar9 + 0x38;
          } while (iStack_b8 < *(int *)(iVar4 + 0xc4));
          fVar10 = fStack_d8;
          psStack_bc = psVar9;
          if (fStack_dc != 0.0) {
            FUN_00ddbaa0(-(afStack_94[2] /
                          SQRT(fStack_6c * fStack_6c + fStack_74 * fStack_74 + fStack_70 * fStack_70
                              )));
            iVar4 = FUN_00a12210(0);
            fVar10 = fStack_d8;
            if (iVar4 != 0) {
              FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) /
                            SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30))));
              fVar10 = fStack_d8;
            }
          }
        }
      }
      fVar2 = 0.0;
      iStack_c0 = *(int *)((int)fVar10 + 0xc4);
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      if (0 < iStack_c0) {
        pfVar8 = (float *)(*(int *)((int)fStack_d8 + 0xc0) + 0x18);
        iVar4 = iStack_c0;
        fStack_f4 = fVar2;
        fStack_f0 = fVar2;
        do {
          fStack_f4 = fStack_f4 + pfVar8[-2];
          fStack_f0 = pfVar8[-1] + fStack_f0;
          fVar2 = fVar2 + *pfVar8;
          fStack_e8 = pfVar8[1] + fStack_e8;
          pfVar8 = pfVar8 + 0x1c;
          iVar4 = iVar4 + -1;
          fStack_ec = fVar2;
        } while (iVar4 != 0);
      }
      if (iStack_c0 != 0) {
        fVar10 = (float)iStack_c0;
        fStack_f4 = fStack_f4 / fVar10;
        fStack_f0 = fStack_f0 / fVar10;
        fStack_ec = fStack_ec / fVar10;
        fStack_e8 = fStack_e8 / fVar10;
      }
      if (((fStack_f4 != 0.0) || (fStack_f0 != 0.0)) || (fStack_ec != 0.0)) {
        fVar10 = fStack_ec * fStack_ec + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
        if (fVar10 < 0.0 == (fVar10 == 0.0)) {
          FUN_00ddf460(&fStack_f4,&fStack_f4);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_f4 = 0.0;
          fStack_f0 = 1.0;
          fStack_ec = 0.0;
        }
      }
      fVar10 = fStack_ac;
      if ((*(int *)((int)fStack_d8 + 0xc4) != 0) && (fStack_f0 < 0.0)) {
        fStack_dc = 1.0 - (param_3 + 1.0) / fStack_b0;
        fStack_dc = fStack_dc * fStack_dc;
        fVar2 = fStack_dc * -0.02;
        fStack_f4 = fStack_f4 * 0.2;
        fStack_ec = fStack_ec * 0.2;
        fStack_e8 = fStack_98 * fStack_e8;
        fStack_c8 = *(float *)((int)fStack_ac + 0x270);
        local_d4 = fStack_f4 * fVar2 * fStack_c8;
        fStack_d0 = fVar2 * fStack_f0 * fStack_c8;
        fStack_cc = fStack_ec * fVar2 * fStack_c8;
        fStack_c8 = fStack_e8 * fVar2 * fStack_c8;
        (**(code **)(*piVar3 + 0x70))(&local_d4);
        fStack_d8 = 0.0;
        local_d4 = 1.0;
        fStack_d0 = 0.0;
        FUN_00ddcfe0(&fStack_98,&fStack_d8,0x3fc90fdb);
        D3DXVec3TransformNormal(local_a8,&stack0xffffff08,&fStack_98);
        fVar2 = fStack_ec * 0.01;
        fStack_d8 = *(float *)((int)fVar10 + 0x270);
        fStack_e4 = fStack_b4 * fVar2 * fStack_d8;
        fStack_e0 = fStack_b0 * fVar2 * fStack_d8;
        fStack_dc = fStack_ac * fVar2 * fStack_d8;
        fStack_d8 = fStack_d8 * local_a8[0] * fVar2;
        (**(code **)(*piVar3 + 0x70))(&fStack_e4);
        fVar2 = fStack_f0 * 0.001;
        fStack_dc = *(float *)((int)fVar10 + 0x270);
        fStack_e8 = ((float)piVar3[0x10] - *(float *)(psStack_bc + 0x20)) * fVar2 * fStack_dc;
        fStack_e4 = ((float)piVar3[0x11] - *(float *)(psStack_bc + 0x22)) * fVar2 * fStack_dc;
        fStack_e0 = ((float)piVar3[0x12] - *(float *)(psStack_bc + 0x24)) * fVar2 * fStack_dc;
        fStack_dc = fVar2 * ((float)piVar3[0x13] - *(float *)(psStack_bc + 0x26)) * fStack_dc;
        (**(code **)(*piVar3 + 0x70))(&fStack_e8);
        switchD_0080dbae::default();
        return;
      }
    }
  }
  return;
}

// 00C46540  FUN_00c46540  size=154  [run]
void __fastcall FUN_00c46540(int *param_1)

{
  int iVar1;
  char *local_30;
  int local_2c;
  undefined4 local_28;
  
  FUN_00a7ca40();
  if (*param_1 != -1) {
    iVar1 = FUN_009fe920(*param_1);
    if (iVar1 != 0) {
      local_2c = *param_1;
      local_30 = "RaderMap";
      local_28 = 0xaf000;
      if (param_1[1] == 0) {
        iVar1 = FUN_00a81b80(&local_30);
        param_1[1] = iVar1;
        if (iVar1 == 0) goto LAB_00c465bb;
      }
      if ((DAT_01bea090 & 0x80000000) == 0) {
        DAT_01dc1304 = 1;
      }
      FUN_00c2eca0();
      param_1[2] = 1;
    }
  }
LAB_00c465bb:
  if ((param_1[2] == 0) && (param_1[0x28] != 0)) {
    *(undefined4 *)(param_1[0x28] + 0x88) = 1;
  }
  return;
}

// 00C465E0  FUN_00c465e0  size=161  [run]
void __fastcall FUN_00c465e0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_00c21db0();
  while (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) != 0) {
      *(int *)(*(int *)(param_1 + 0x5c) + 8) = iVar5;
    }
    *(undefined4 *)(iVar5 + 8) = 0;
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar5 = FUN_00c21db0();
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0xc);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 4) == 0) {
        if (*(int *)(uVar4 + 8) == 0) {
          *(uint *)(param_1 + 0x5c) = uVar2;
        }
        else {
          *(uint *)(*(int *)(uVar4 + 8) + 0xc) = uVar2;
        }
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 8) = *(undefined4 *)(uVar4 + 8);
        }
        *(undefined4 *)(uVar4 + 8) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0x38);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < uVar3 + *(int *)(param_1 + 0x3c) * 0x14))
        {
          FUN_00c228c0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

// 00C46690  FUN_00c46690  size=2127  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00c46690(int param_1)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float10 fVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [48];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  piVar5 = DAT_01dc14c8;
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  if (DAT_01dc14c8 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xac) = 0x40000000;
    goto LAB_00c46809;
  }
  iVar4 = (**(code **)(*DAT_01dc14c8 + 0x330))();
  if ((((iVar4 == 0) && (iVar4 = (**(code **)(*piVar5 + 0x334))(), iVar4 == 0)) &&
      (iVar4 = (**(code **)(*piVar5 + 0x364))(), iVar4 == 0)) &&
     (((piVar5[0x999] == 0 || (*(int *)(param_1 + 0xbc) != 1)) &&
      ((iVar4 = (**(code **)(*piVar5 + 0x350))(), iVar4 == 0 || (*(int *)(param_1 + 0xbc) != 1))))))
  {
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (0x1d < *(int *)(param_1 + 0xa4)) {
        *(undefined4 *)(param_1 + 0xa4) = 0x1e;
      }
      piVar5 = (int *)(param_1 + 0xa4);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 < 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xa4) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    if (0x1e < *(int *)(param_1 + 0xa4)) {
      *(undefined4 *)(param_1 + 0xa8) = 1;
    }
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    if (1.0 < *(float *)(param_1 + 0xac)) {
      fVar2 = *(float *)(param_1 + 0xac) - 0.1;
      *(float *)(param_1 + 0xac) = fVar2;
      if (fVar2 < 1.0) {
        *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
      }
      goto LAB_00c46809;
    }
    if (*(int *)(param_1 + 0xa8) != 0) goto LAB_00c46809;
  }
  if ((*(float *)(param_1 + 0xac) < 1.8) &&
     (fVar2 = *(float *)(param_1 + 0xac) + 0.1, *(float *)(param_1 + 0xac) = fVar2, 1.8 < fVar2)) {
    *(undefined4 *)(param_1 + 0xac) = 0x3fe66666;
  }
LAB_00c46809:
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xac);
  *(uint *)(param_1 + 0xc0) = (uint)(DAT_01b77e44 == 0);
  iVar4 = FUN_00c2eaf0();
  FUN_00c465e0();
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00cbd900(iVar4);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x84) = *(undefined4 *)(param_1 + 0xac);
    FUN_00d322e0();
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0xa0) + 0x48);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    piVar5 = (int *)FUN_00a7c800();
    piStack_b4 = piVar5;
    if (iVar4 == 0) {
      (**(code **)(*piVar5 + 0x20))();
      iVar4 = FUN_00cad420();
      if (iVar4 != 0) {
        for (iVar4 = *(int *)(param_1 + 0x5c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
          if ((*(byte *)(*(int *)(iVar4 + 4) + 0x4c0) & 1) != 0) {
            FUN_00cd3bf0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x4f0));
          }
        }
      }
    }
    else {
      (**(code **)(*piVar5 + 0x1c))();
      FUN_00c1cff0(&DAT_01beb1f0);
      fStack_e4 = *(float *)(param_1 + 0xb8);
      fVar10 = (float10)fStack_e4;
      if (*(int *)(param_1 + 0xc0) != 0) {
        fVar10 = (float10)fpatan((float10)_DAT_01bea640 - (float10)_DAT_01bea630,
                                 (float10)_DAT_01bea648 - (float10)_DAT_01bea638);
        fVar10 = (float10)FUN_00ddba30((float)-(fVar10 - (float10)1.5707964));
        fStack_e4 = (float)fVar10;
      }
      FUN_00c2fd40((int *)(param_1 + 0x60),DAT_01dc1490,&DAT_01beb1f0,(float)fVar10);
      piVar9 = (int *)(param_1 + 0x60);
      piVar5 = piVar5 + 4;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar5 = piVar5 + 1;
      }
      switchD_0080dbae::default();
      if (*(int *)(param_1 + 0xa0) != 0) {
        *(float *)(*(int *)(param_1 + 0xa0) + 0x60) = fStack_e4;
        uStack_d0 = *(undefined4 *)(param_1 + 0x90);
        uStack_cc = *(undefined4 *)(param_1 + 0x94);
        uStack_c8 = *(undefined4 *)(param_1 + 0x98);
        uStack_c4 = 0x3f800000;
        iVar4 = FUN_00d9fa80(&fStack_e0,&uStack_d0);
        if (iVar4 != 0) {
          fVar10 = (float10)FUN_00cad4b0();
          fStack_e0 = (float)((float10)fStack_e0 - fVar10 * (float10)1094.0);
          fVar10 = (float10)FUN_00cad4d0();
          iVar4 = *(int *)(param_1 + 0xa0);
          fStack_dc = (float)((float10)fStack_dc - fVar10 * (float10)144.0);
          *(float *)(iVar4 + 0x70) = fStack_e0;
          *(float *)(iVar4 + 0x74) = fStack_dc;
          *(float *)(iVar4 + 0x78) = fStack_d8;
          *(undefined4 *)(iVar4 + 0x7c) = uStack_d4;
        }
        for (iVar4 = *(int *)(param_1 + 0x5c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
          iVar7 = *(int *)(iVar4 + 4);
          if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x4c0) & 1) != 0)) {
            uVar1 = *(uint *)(iVar7 + 0x4b0);
            if ((uVar1 & 0xf0000) == 0x20000) {
              iVar6 = FUN_00445b60(iVar7);
              if ((iVar6 != 0) && (*(int *)(iVar6 + 0xa50) != 0)) {
                if ((*(int *)(iVar7 + 0x4a0) == 8) && (iVar6 = FUN_00a8cab0(), iVar6 == 0xc0000)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((((((uVar1 != 0x20140) && (uVar1 != 0x20142)) && (uVar1 != 0x20144)) &&
                     (uVar1 != 0x20160)) || (!bVar3)) &&
                   (iVar7 = FUN_0049b700(iVar7), *(int *)(iVar7 + 0x870) != 0)) {
                  FID_conflict__memcpy(auStack_90,(void *)(iVar7 + 0x10),0x40);
                  uStack_5c = 0;
                  D3DXMatrixMultiply(auStack_90,auStack_90,param_1 + 0x60);
                  uStack_d0 = uStack_60;
                  uStack_cc = uStack_5c;
                  uStack_c8 = uStack_58;
                  uStack_c4 = 0x3f800000;
                  iVar6 = FUN_00d9fa80(auStack_a0,&uStack_d0);
                  if (iVar6 != 0) {
                    uVar12 = *(undefined4 *)(iVar7 + 0x814);
                    puVar11 = auStack_a0;
                    goto LAB_00c46d86;
                  }
                }
              }
            }
            else {
              FID_conflict__memcpy(auStack_50,(void *)(iVar7 + 0x10),0x40);
              fStack_1c = 0.0;
              D3DXMatrixMultiply(auStack_50,auStack_50,param_1 + 0x60);
              fStack_e0 = fStack_20;
              fStack_dc = fStack_1c;
              fStack_d8 = fStack_18;
              uStack_d4 = 0x3f800000;
              iVar6 = FUN_00d9fa80(auStack_b0,&fStack_e0);
              if (iVar6 != 0) {
                uVar12 = 1;
                puVar11 = auStack_b0;
LAB_00c46d86:
                FUN_00cd61a0(iVar7,puVar11,uVar12);
              }
            }
          }
        }
        pfVar8 = (float *)(param_1 + 0xf0);
        iVar4 = 0;
        piVar5 = (int *)(param_1 + 0xc4);
        do {
          if (*piVar5 != 0) {
            fStack_e0 = *pfVar8;
            fStack_d8 = pfVar8[2];
            fStack_dc = 0.0;
            uStack_d4 = 0x3f800000;
            D3DXVec4Transform(&fStack_e0,&fStack_e0,param_1 + 0x60);
            iVar7 = FUN_00d9fa80(auStack_b0,&fStack_e0);
            if (iVar7 != 0) {
              FUN_00cd6210(iVar4,auStack_b0);
            }
          }
          *piVar5 = 0;
          iVar4 = iVar4 + 1;
          pfVar8 = pfVar8 + 4;
          piVar5 = piVar5 + 1;
        } while (iVar4 < 10);
        pfVar8 = (float *)(param_1 + 0x220);
        iVar4 = 0;
        piVar5 = (int *)(param_1 + 0x1ec);
        do {
          if (*piVar5 != 0) {
            fStack_e0 = *pfVar8;
            fStack_d8 = pfVar8[2];
            fStack_dc = 0.0;
            uStack_d4 = 0x3f800000;
            D3DXVec4Transform(&fStack_e0,&fStack_e0,param_1 + 0x60);
            iVar7 = FUN_00d9fa80(auStack_b0,&fStack_e0);
            if (iVar7 != 0) {
              FUN_00cd6250(iVar4,auStack_b0);
            }
          }
          *piVar5 = 0;
          iVar4 = iVar4 + 1;
          pfVar8 = pfVar8 + 4;
          piVar5 = piVar5 + 1;
        } while (iVar4 < 10);
        if (*(int *)(param_1 + 0x318) != 0 || *(int *)(param_1 + 0x1e8) != 0) {
          FUN_00cbd980();
        }
        *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x80) = *(undefined4 *)(param_1 + 0xc0);
      }
    }
    (**(code **)(**(int **)(param_1 + 0xa0) + 4))();
  }
  FUN_00c2efa0();
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  return;
}

// 00C46EF0  FUN_00c46ef0  size=255  [run]
int __thiscall
FUN_00c46ef0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
  iVar4 = 0;
  for (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x14); piVar2 != piVar1;
      piVar2 = (int *)piVar2[0x11]) {
    if (*piVar2 != param_2) {
      local_40 = (float)piVar2[4];
      local_3c = (float)piVar2[5];
      local_38 = (float)piVar2[6];
      local_34 = (float)piVar2[7];
      local_28 = (float)piVar2[10];
      local_24 = (float)piVar2[0xb];
      local_18 = local_28 * param_5;
      local_50 = (float)piVar2[8] * param_5 + local_40;
      local_4c = (float)piVar2[9] * param_5 + local_3c;
      local_48 = local_18 + local_38;
      local_44 = local_34 + local_24 * param_5;
      iVar3 = FUN_00d92360(&local_40,&local_50,piVar2[0xc],param_3,param_3,param_4);
      if (iVar3 != 0) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}

// 00C46FF0  FUN_00c46ff0  size=1524  [run]
undefined4 FUN_00c46ff0(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    FUN_00a81330();
    iVar6 = FUN_00a7c8a0();
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        FUN_00a81330();
        iVar6 = FUN_00a7c8a0();
        bVar4 = false;
        iVar7 = FUN_00a92f90();
        if (iVar7 != 0) {
          uVar12 = 0x40;
          uVar11 = 0;
          FUN_00a92f90(0,0x40);
          iVar7 = FUN_00e3a1e0(uVar11,uVar12);
          if (iVar7 != 0) {
            bVar4 = true;
          }
        }
        sVar5 = *(short *)(param_1 + 4);
        if (bVar4) {
          sVar5 = FUN_00a96170(sVar5);
        }
        iVar7 = iVar6;
        if (sVar5 != -1) {
          iVar7 = FUN_00a12210((int)sVar5);
        }
        if (iVar7 != 0) {
          iVar6 = iVar7;
        }
        FID_conflict__memcpy(local_50,(void *)(iVar6 + 0x10),0x40);
        local_b0 = *(float *)(param_1 + 8);
        local_ac = *(float *)(param_1 + 0xc);
        local_a8 = *(undefined4 *)(param_1 + 0x10);
        local_c0 = *(float *)(param_1 + 0x14);
        local_bc = *(float *)(param_1 + 0x18);
        if (bVar4) {
          local_bc = local_bc * -1.0;
          local_b0 = local_b0 * -1.0;
        }
        local_c8 = 0;
        local_cc = 0;
        local_d0 = 0.0;
        local_d4 = 0.0;
        local_dc = 0.0;
        local_e0 = 0.0;
        local_e4 = 0.0;
        local_e8 = 0.0;
        local_f0 = 0.0;
        local_f4 = 0;
        local_f8 = 0.0;
        local_fc = 0.0;
        local_c4 = 0x3f800000;
        local_d8 = 1.0;
        local_ec = 1.0;
        local_100 = 1.0;
        if (*(float *)(param_1 + 0x1c) != 0.0) {
          D3DXMatrixRotationZ(local_90,*(float *)(param_1 + 0x1c));
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        if (local_bc != 0.0) {
          D3DXMatrixRotationY(local_90,local_bc);
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        if (local_c0 != 0.0) {
          D3DXMatrixRotationX(local_90,local_c0);
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        local_d0 = local_b0;
        local_cc = local_ac;
        local_c8 = local_a8;
        D3DXMatrixMultiply(&local_100,&local_100,local_50);
      }
      else {
        local_c8 = 0;
        local_cc = 0;
        local_d0 = 0.0;
        local_d4 = 0.0;
        local_dc = 0.0;
        local_e0 = 0.0;
        local_e4 = 0.0;
        local_e8 = 0.0;
        local_f0 = 0.0;
        local_f4 = 0;
        local_f8 = 0.0;
        local_fc = 0.0;
        local_c4 = 0x3f800000;
        local_d8 = 1.0;
        local_ec = 1.0;
        local_100 = 1.0;
        if (*(float *)(param_1 + 0x1c) != 0.0) {
          D3DXMatrixRotationZ(local_90,*(undefined4 *)(param_1 + 0x1c));
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        if (*(float *)(param_1 + 0x18) != 0.0) {
          D3DXMatrixRotationY(local_90,*(undefined4 *)(param_1 + 0x18));
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        if (*(float *)(param_1 + 0x14) != 0.0) {
          D3DXMatrixRotationX(local_90,*(undefined4 *)(param_1 + 0x14));
          D3DXMatrixMultiply(&stack0xfffffef8,&fStack_98,&stack0xfffffef8);
        }
        local_d0 = *(float *)(param_1 + 8);
        local_cc = *(undefined4 *)(param_1 + 0xc);
        local_c8 = *(undefined4 *)(param_1 + 0x10);
      }
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x34);
      FUN_00a7c960(param_1);
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 6);
      local_b0 = SQRT(local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc);
      local_ac = SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
      fVar3 = SQRT(local_d8 * local_d8 + local_dc * local_dc + local_e0 * local_e0);
      fStack_94 = local_e8 / fVar3;
      fStack_98 = local_d8 / fVar3;
      fVar9 = (float10)FUN_00ddbaa0(-(local_f8 / fVar3));
      fVar10 = (float10)fpatan((float10)fStack_94,(float10)fStack_98);
      *(float *)(param_2 + 0x40) = (float)fVar10;
      *(float *)(param_2 + 0x44) = (float)fVar9;
      fVar9 = (float10)fpatan((float10)local_fc / (float10)local_ac,
                              (float10)local_100 / (float10)local_b0);
      *(float *)(param_2 + 0x48) = (float)fVar9;
      *(float *)(param_2 + 0x10) = local_d0;
      *(undefined4 *)(param_2 + 0x14) = local_cc;
      *(undefined4 *)(param_2 + 0x18) = local_c8;
      *(undefined4 *)(param_2 + 0x1c) = local_c4;
      switch(*(undefined1 *)(param_1 + 6)) {
      case 0:
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x30);
        return 1;
      case 1:
        puVar1 = (undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x30);
        fVar3 = *(float *)(param_1 + 0x30);
        fVar2 = *(float *)(param_1 + 0x2c);
        *puVar1 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(float *)(param_2 + 0x24) = fVar3 + fVar2;
        *(undefined4 *)(param_2 + 0x2c) = uStack_b4;
        fVar3 = *(float *)(param_1 + 0x30);
        fVar2 = *(float *)(param_1 + 0x2c);
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(float *)(param_2 + 0x34) = -(fVar3 + fVar2);
        *(undefined4 *)(param_2 + 0x3c) = uStack_b4;
        D3DXVec3TransformNormal(puVar1,puVar1,&local_100);
        break;
      case 2:
        *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x1c);
        *(float *)(param_2 + 0x70) = local_100;
        *(float *)(param_2 + 0x74) = local_fc;
        *(float *)(param_2 + 0x78) = local_f8;
        *(undefined4 *)(param_2 + 0x7c) = uStack_b4;
        *(float *)(param_2 + 0x80) = local_f0;
        *(float *)(param_2 + 0x84) = local_ec;
        *(float *)(param_2 + 0x88) = local_e8;
        *(undefined4 *)(param_2 + 0x8c) = uStack_b4;
        *(float *)(param_2 + 0x90) = local_e0;
        *(float *)(param_2 + 0x94) = local_dc;
        *(float *)(param_2 + 0x98) = local_d8;
        *(undefined4 *)(param_2 + 0x9c) = uStack_b4;
        *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x28);
        return 1;
      default:
        return 0;
      case 4:
        puVar1 = (undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x30);
        uVar11 = *(undefined4 *)(param_1 + 0x2c);
        *puVar1 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x24) = uVar11;
        *(undefined4 *)(param_2 + 0x2c) = uStack_b4;
        fVar3 = *(float *)(param_1 + 0x2c);
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(float *)(param_2 + 0x34) = -fVar3;
        *(undefined4 *)(param_2 + 0x3c) = uStack_b4;
        D3DXVec3TransformNormal(puVar1,puVar1,&local_100);
      }
      pfVar8 = (float *)(param_2 + 0x30);
      *(float *)(param_2 + 0x20) = local_dc + *(float *)(param_2 + 0x20);
      *(float *)(param_2 + 0x24) = local_d8 + *(float *)(param_2 + 0x24);
      *(float *)(param_2 + 0x28) = local_d4 + *(float *)(param_2 + 0x28);
      D3DXVec3TransformNormal(pfVar8,pfVar8,&stack0xfffffef4);
      *pfVar8 = local_e8 + *pfVar8;
      *(float *)(param_2 + 0x34) = local_e4 + *(float *)(param_2 + 0x34);
      *(float *)(param_2 + 0x38) = local_e0 + *(float *)(param_2 + 0x38);
      return 1;
    }
  }
  return 0;
}

// 00C47600  FUN_00c47600  size=38  [run]
void __fastcall FUN_00c47600(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8) + -4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C47630  FUN_00c47630  size=92  [run]
void __fastcall FUN_00c47630(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8) + -4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x2594) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x2594),0);
    *(undefined4 *)(param_1 + 0x2594) = 0;
    *(undefined4 *)(param_1 + 0x2590) = 0;
  }
  *(undefined4 *)(param_1 + 0x2598) = 0;
  *(undefined4 *)(param_1 + 0x259c) = 0;
  *(undefined4 *)(param_1 + 0x25a0) = 0;
  *(undefined4 *)(param_1 + 0x25a4) = 0;
  return;
}

// 00C47690  FUN_00c47690  size=51  [run]
void FUN_00c47690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a497e0(param_1);
  if ((param_1 != iVar1) && (iVar1 = FUN_00a497e0(param_1), iVar1 != -1)) {
    return;
  }
  FUN_00c47630();
  return;
}

// 00C476D0  thunk_FUN_00c31270  size=5  [run]
void __fastcall thunk_FUN_00c31270(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0x2598) = 0;
  *(undefined4 *)(param_1 + 0x259c) = 0;
  *(undefined4 *)(param_1 + 0x25a0) = 0;
  *(undefined4 *)(param_1 + 0x25a4) = 0;
  if ((*(int *)(param_1 + 8) != 0) && (0 < *(int *)(param_1 + 0xc))) {
    uStack_20 = *(undefined4 *)(DAT_01beb8c0 + 800);
    uStack_1c = *(undefined4 *)(DAT_01beb8c0 + 0x324);
    uStack_18 = *(undefined4 *)(DAT_01beb8c0 + 0x328);
    uStack_14 = *(undefined4 *)(DAT_01beb8c0 + 0x32c);
    iVar3 = *(int *)(param_1 + 4);
    if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xc))) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 0x18), iVar3 == 0 ||
        (iVar3 = FUN_00d900c0(iVar3,&uStack_20), iVar3 == 0)))) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 4) == -1) && (0 < *(int *)(param_1 + 0xc))) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar5);
        if ((iVar4 != 0) && (iVar4 = FUN_00d900c0(iVar4,&uStack_20), iVar4 != 0)) {
          *(int *)(param_1 + 4) = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 != 0xffffffff) {
      puVar1 = (uint *)(param_1 + 0x2598 + (uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    }
  }
  return;
}

