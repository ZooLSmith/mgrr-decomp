// src/unsorted/unit_00F95B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F95B30..00F971F0, 53 functions

#include "mgrr.h"

// 00F95B30  FUN_00f95b30  size=21  [run]
undefined4 * __fastcall FUN_00f95b30(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00F95BC0  FUN_00f95bc0  size=74  [run]
void __fastcall FUN_00f95bc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
    while (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00F95C60  FUN_00f95c60  size=21  [run]
undefined4 * __fastcall FUN_00f95c60(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00F95C90  FUN_00f95c90  size=124  [run]
uint FUN_00f95c90(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (in_EAX >> 0x17 & 0xff) - 0x70;
  uVar4 = in_EAX >> 0x10 & 0x8000;
  uVar1 = in_EAX & 0x7fffff;
  if (0 < iVar3) {
    uVar2 = (int)uVar1 >> 0xd;
    if (iVar3 == 0x8f) {
      if (uVar1 != 0) {
        return uVar2 | uVar2 == 0 | uVar4 | 0x7c00;
      }
    }
    else if (iVar3 < 0x1f) {
      return uVar2 | iVar3 * 0x400 | uVar4;
    }
    return uVar4 | 0x7c00;
  }
  if (iVar3 < -10) {
    return 0;
  }
  return ((int)(uVar1 | 0x800000) >> (1U - (char)iVar3 & 0x1f)) >> 0xd | uVar4;
}

// 00F95D30  FUN_00f95d30  size=17  [run]
void FUN_00f95d30(void)

{
  FUN_00f95c90();
  return;
}

// 00F95DD0  FUN_00f95dd0  size=1  [run]
void FUN_00f95dd0(void)

{
  return;
}

// 00F95E00  FUN_00f95e00  size=1  [run]
void FUN_00f95e00(void)

{
  return;
}

// 00F95E30  FUN_00f95e30  size=1  [run]
void FUN_00f95e30(void)

{
  return;
}

// 00F95E40  FUN_00f95e40  size=1  [run]
void FUN_00f95e40(void)

{
  return;
}

// 00F95E50  FUN_00f95e50  size=1  [run]
void FUN_00f95e50(void)

{
  return;
}

// 00F95E80  FUN_00f95e80  size=1  [run]
void FUN_00f95e80(void)

{
  return;
}

// 00F95E90  FUN_00f95e90  size=1  [run]
void FUN_00f95e90(void)

{
  return;
}

// 00F95EB0  FUN_00f95eb0  size=1  [run]
void FUN_00f95eb0(void)

{
  return;
}

// 00F95F10  FUN_00f95f10  size=1  [run]
void FUN_00f95f10(void)

{
  return;
}

// 00F95F40  FUN_00f95f40  size=1  [run]
void FUN_00f95f40(void)

{
  return;
}

// 00F95F60  FUN_00f95f60  size=1  [run]
void FUN_00f95f60(void)

{
  return;
}

// 00F95FA0  FUN_00f95fa0  size=1  [run]
void FUN_00f95fa0(void)

{
  return;
}

// 00F95FD0  FUN_00f95fd0  size=1  [run]
void FUN_00f95fd0(void)

{
  return;
}

// 00F95FE0  FUN_00f95fe0  size=1  [run]
void FUN_00f95fe0(void)

{
  return;
}

// 00F96010  FUN_00f96010  size=1  [run]
void FUN_00f96010(void)

{
  return;
}

// 00F96060  FUN_00f96060  size=1  [run]
void FUN_00f96060(void)

{
  return;
}

// 00F96080  FUN_00f96080  size=1  [run]
void FUN_00f96080(void)

{
  return;
}

// 00F960B0  FUN_00f960b0  size=1  [run]
void FUN_00f960b0(void)

{
  return;
}

// 00F960F0  FUN_00f960f0  size=1  [run]
void FUN_00f960f0(void)

{
  return;
}

// 00F96100  FUN_00f96100  size=1  [run]
void FUN_00f96100(void)

{
  return;
}

// 00F96110  FUN_00f96110  size=1  [run]
void FUN_00f96110(void)

{
  return;
}

// 00F96130  FUN_00f96130  size=1  [run]
void FUN_00f96130(void)

{
  return;
}

// 00F96180  FUN_00f96180  size=1  [run]
void FUN_00f96180(void)

{
  return;
}

// 00F961B0  FUN_00f961b0  size=1  [run]
void FUN_00f961b0(void)

{
  return;
}

// 00F961D0  FUN_00f961d0  size=1  [run]
void FUN_00f961d0(void)

{
  return;
}

// 00F96220  FUN_00f96220  size=1  [run]
void FUN_00f96220(void)

{
  return;
}

// 00F96230  FUN_00f96230  size=1  [run]
void FUN_00f96230(void)

{
  return;
}

// 00F962A0  FUN_00f962a0  size=1  [run]
void FUN_00f962a0(void)

{
  return;
}

// 00F962E0  FUN_00f962e0  size=1  [run]
void FUN_00f962e0(void)

{
  return;
}

// 00F963B0  FUN_00f963b0  size=1  [run]
void FUN_00f963b0(void)

{
  return;
}

// 00F963C0  FUN_00f963c0  size=1  [run]
void FUN_00f963c0(void)

{
  return;
}

// 00F96420  FUN_00f96420  size=3  [run]
undefined4 FUN_00f96420(void)

{
  return 0;
}

// 00F96440  FUN_00f96440  size=3  [run]
undefined4 FUN_00f96440(void)

{
  return 0;
}

// 00F96550  FUN_00f96550  size=1  [run]
void FUN_00f96550(void)

{
  return;
}

// 00F96560  FUN_00f96560  size=1  [run]
void FUN_00f96560(void)

{
  return;
}

// 00F96570  FUN_00f96570  size=1  [run]
void FUN_00f96570(void)

{
  return;
}

// 00F96580  FUN_00f96580  size=1  [run]
void FUN_00f96580(void)

{
  return;
}

// 00F965E0  FUN_00f965e0  size=800  [run]
void FUN_00f965e0(float param_1,float param_2)

{
  int *piStack_bc;
  float fStack_b8;
  uint *puStack_b4;
  float *pfStack_b0;
  float fStack_ac;
  float *pfStack_a8;
  float *pfStack_a4;
  float fStack_a0;
  float *pfStack_9c;
  float *pfStack_98;
  float fStack_94;
  float *pfStack_90;
  float *pfStack_8c;
  float fStack_88;
  int *piStack_84;
  float *pfStack_80;
  float fStack_7c;
  int *piStack_78;
  int *piStack_74;
  float fStack_70;
  int *piStack_6c;
  float *pfStack_68;
  float fStack_64;
  int *piStack_60;
  int *piStack_5c;
  float fStack_58;
  int *piStack_54;
  float *pfStack_50;
  float fStack_4c;
  undefined1 *puStack_48;
  int *piStack_44;
  float fStack_40;
  int *piStack_3c;
  float *pfStack_38;
  float fStack_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [24];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  local_2c = param_2;
  fStack_34 = param_1;
  local_28 = param_2;
  pfStack_38 = &local_28;
  piStack_3c = (int *)local_1c;
  local_24 = 0.0;
  local_20 = 0.0;
  fStack_40 = 2.290367e-38;
  D3DXVec3TransformNormal();
  local_28 = *(float *)((int)param_1 + 0x30) + local_28;
  fStack_40 = param_1;
  piStack_44 = (int *)&fStack_34;
  puStack_48 = local_1c;
  local_24 = *(float *)((int)param_1 + 0x34) + local_24;
  local_20 = *(float *)((int)param_1 + 0x38) + local_20;
  fStack_34 = 0.0;
  local_2c = 0.0;
  fStack_4c = 2.2903758e-38;
  D3DXVec3TransformNormal();
  local_28 = *(float *)((int)param_1 + 0x30) + local_28;
  fStack_4c = param_1;
  pfStack_50 = &fStack_40;
  piStack_54 = (int *)&fStack_34;
  local_24 = local_24 + *(float *)((int)param_1 + 0x34);
  local_20 = local_20 + *(float *)((int)param_1 + 0x38);
  fStack_40 = 0.0;
  piStack_3c = piStack_44;
  pfStack_38 = (float *)0x0;
  fStack_58 = 2.2903852e-38;
  D3DXVec3TransformNormal();
  fStack_58 = param_1;
  fStack_40 = *(float *)((int)param_1 + 0x30) + fStack_40;
  piStack_5c = (int *)&fStack_4c;
  piStack_60 = (int *)&fStack_34;
  piStack_3c = (int *)(*(float *)((int)param_1 + 0x34) + (float)piStack_3c);
  pfStack_38 = (float *)(*(float *)((int)param_1 + 0x38) + (float)pfStack_38);
  fStack_4c = 0.0;
  puStack_48 = (undefined1 *)0x0;
  piStack_44 = (int *)0x0;
  fStack_64 = 2.290394e-38;
  D3DXVec3TransformNormal();
  fStack_40 = *(float *)((int)param_1 + 0x30) + fStack_40;
  piStack_3c = (int *)((float)piStack_3c + *(float *)((int)param_1 + 0x34));
  pfStack_38 = (float *)((float)pfStack_38 + *(float *)((int)param_1 + 0x38));
  fStack_64 = param_1;
  pfStack_68 = &fStack_58;
  fStack_58 = 0.0;
  piStack_54 = (int *)0x0;
  piStack_6c = (int *)&fStack_4c;
  pfStack_50 = (float *)piStack_5c;
  fStack_70 = 2.2904034e-38;
  D3DXVec3TransformNormal();
  fStack_58 = *(float *)((int)param_1 + 0x30) + fStack_58;
  fStack_70 = param_1;
  piStack_74 = (int *)&fStack_64;
  piStack_78 = (int *)&fStack_4c;
  piStack_54 = (int *)(*(float *)((int)param_1 + 0x34) + (float)piStack_54);
  pfStack_50 = (float *)(*(float *)((int)param_1 + 0x38) + (float)pfStack_50);
  fStack_64 = 0.0;
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  fStack_7c = 2.2904123e-38;
  D3DXVec3TransformNormal();
  fStack_58 = *(float *)((int)param_1 + 0x30) + fStack_58;
  fStack_7c = param_1;
  pfStack_80 = &fStack_70;
  piStack_84 = (int *)&fStack_64;
  piStack_54 = (int *)((float)piStack_54 + *(float *)((int)param_1 + 0x34));
  pfStack_50 = (float *)((float)pfStack_50 + *(float *)((int)param_1 + 0x38));
  fStack_70 = 0.0;
  piStack_6c = (int *)0x0;
  pfStack_68 = (float *)0x0;
  fStack_88 = 2.2904211e-38;
  D3DXVec3TransformNormal();
  fStack_70 = *(float *)((int)param_1 + 0x30) + fStack_70;
  fStack_88 = param_1;
  pfStack_8c = &fStack_7c;
  pfStack_90 = &fStack_64;
  piStack_6c = (int *)(*(float *)((int)param_1 + 0x34) + (float)piStack_6c);
  pfStack_68 = (float *)(*(float *)((int)param_1 + 0x38) + (float)pfStack_68);
  pfStack_80 = (float *)-(float)pfStack_80;
  piStack_78 = (int *)0x0;
  piStack_74 = (int *)0x0;
  fStack_94 = 2.2904319e-38;
  fStack_7c = (float)pfStack_80;
  D3DXVec3TransformNormal();
  fStack_70 = *(float *)((int)param_1 + 0x30) + fStack_70;
  piStack_6c = (int *)((float)piStack_6c + *(float *)((int)param_1 + 0x34));
  pfStack_68 = (float *)((float)pfStack_68 + *(float *)((int)param_1 + 0x38));
  fStack_94 = param_1;
  pfStack_98 = &fStack_88;
  fStack_88 = 0.0;
  pfStack_9c = &fStack_7c;
  piStack_84 = (int *)0x0;
  pfStack_80 = (float *)0x0;
  fStack_a0 = 2.2904407e-38;
  D3DXVec3TransformNormal();
  fStack_88 = *(float *)((int)param_1 + 0x30) + fStack_88;
  fStack_a0 = param_1;
  pfStack_a4 = &fStack_94;
  pfStack_a8 = &fStack_7c;
  piStack_84 = (int *)(*(float *)((int)param_1 + 0x34) + (float)piStack_84);
  pfStack_80 = (float *)(*(float *)((int)param_1 + 0x38) + (float)pfStack_80);
  fStack_94 = 0.0;
  pfStack_90 = pfStack_98;
  pfStack_8c = (float *)0x0;
  fStack_ac = 2.2904501e-38;
  D3DXVec3TransformNormal();
  fStack_ac = param_1;
  fStack_88 = *(float *)((int)param_1 + 0x30) + fStack_88;
  pfStack_b0 = &fStack_a0;
  puStack_b4 = (uint *)&fStack_94;
  piStack_84 = (int *)((float)piStack_84 + *(float *)((int)param_1 + 0x34));
  pfStack_80 = (float *)((float)pfStack_80 + *(float *)((int)param_1 + 0x38));
  fStack_a0 = 0.0;
  pfStack_9c = (float *)0x0;
  pfStack_98 = (float *)0x0;
  fStack_b8 = 2.2904589e-38;
  D3DXVec3TransformNormal();
  fStack_a0 = *(float *)((int)param_1 + 0x30) + fStack_a0;
  fStack_b8 = param_1;
  piStack_bc = (int *)&fStack_ac;
  pfStack_9c = (float *)(*(float *)((int)param_1 + 0x34) + (float)pfStack_9c);
  pfStack_98 = (float *)(*(float *)((int)param_1 + 0x38) + (float)pfStack_98);
  fStack_ac = 0.0;
  pfStack_a8 = (float *)0x0;
  pfStack_a4 = pfStack_b0;
  D3DXVec3TransformNormal(&fStack_94);
  __security_check_cookie((uint)fStack_94 ^ (uint)&piStack_bc);
  return;
}

// 00F96900  FUN_00f96900  size=947  [run]
/* WARNING: Type propagation algorithm not settling */

void FUN_00f96900(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float *pfStack_254;
  float **ppfStack_250;
  float *pfStack_24c;
  float *pfStack_248;
  float *pfStack_244;
  undefined1 *puStack_240;
  float *pfStack_23c;
  float **ppfStack_238;
  undefined1 *puStack_234;
  float *pfStack_230;
  float *pfStack_22c;
  undefined1 *puStack_228;
  float *pfStack_224;
  undefined1 **ppuStack_220;
  undefined1 *puStack_21c;
  float *pfStack_218;
  float *pfStack_214;
  undefined1 *puStack_210;
  float *pfStack_20c;
  float *pfStack_208;
  undefined1 *puStack_204;
  float *pfStack_200;
  float fStack_1fc;
  undefined1 *puStack_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  float local_1e4;
  float afStack_1d4 [5];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 local_1a0 [12];
  undefined1 auStack_194 [44];
  undefined1 auStack_168 [28];
  undefined1 auStack_14c [16];
  undefined1 auStack_13c [12];
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [4];
  float afStack_120 [6];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
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
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_94;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)afStack_1d4;
  puStack_1e8 = local_1a0;
  local_1e4 = param_3;
  uStack_1f0 = (double)CONCAT44(0xf96931,(float)uStack_1f0);
  D3DXMatrixRotationX();
  uStack_1f0 = (double)CONCAT44(-param_3,auStack_168);
  fStack_1f4 = 2.2904805e-38;
  D3DXMatrixRotationX();
  puStack_1f8 = auStack_130;
  fStack_1f4 = param_2;
  fStack_1fc = 2.2904833e-38;
  D3DXMatrixRotationY();
  fStack_1fc = -param_2;
  pfStack_200 = &fStack_f8;
  puStack_204 = (undefined1 *)0xf96971;
  D3DXMatrixRotationY();
  afStack_1d4[1] = 0.0;
  afStack_1d4[2] = 0.0;
  uStack_1f0 = (double)param_5;
  puStack_204 = (undefined1 *)0xf9698a;
  fVar3 = (float10)FUN_00fded30();
  afStack_1d4[0] = (float)uStack_1f0 / (float)fVar3;
  uStack_1f0 = (double)CONCAT44(uStack_1f0._4_4_,afStack_1d4[0]);
  puStack_204 = (undefined1 *)0xf969aa;
  fVar3 = (float10)FUN_00fded30();
  afStack_1d4[0] = (float)fVar3;
  puStack_204 = auStack_1c0;
  afStack_1d4[3] = (float)uStack_1f0 / afStack_1d4[0];
  pfStack_208 = afStack_1d4 + 1;
  pfStack_20c = &fStack_c0;
  puStack_210 = (undefined1 *)0xf969d1;
  D3DXVec3TransformNormal();
  puStack_210 = auStack_14c;
  pfStack_218 = &fStack_cc;
  puStack_21c = (undefined1 *)0xf969e9;
  pfStack_214 = pfStack_218;
  D3DXVec3TransformNormal();
  puStack_21c = &stack0xfffffe28;
  ppuStack_220 = &puStack_1e8;
  pfStack_224 = &fStack_c8;
  puStack_228 = (undefined1 *)0xf96a00;
  D3DXVec3TransformNormal();
  puStack_228 = auStack_124;
  pfStack_230 = &fStack_d4;
  puStack_234 = (undefined1 *)0xf96a18;
  pfStack_22c = pfStack_230;
  D3DXVec3TransformNormal();
  puStack_234 = auStack_1b0;
  ppfStack_238 = &pfStack_200;
  pfStack_23c = &fStack_d0;
  puStack_240 = (undefined1 *)0xf96a32;
  D3DXVec3TransformNormal();
  puStack_240 = auStack_13c;
  pfStack_248 = &fStack_dc;
  pfStack_24c = (float *)0xf96a4a;
  pfStack_244 = pfStack_248;
  D3DXVec3TransformNormal();
  pfStack_24c = afStack_1d4 + 3;
  ppfStack_250 = &pfStack_218;
  pfStack_254 = &fStack_d8;
  D3DXVec3TransformNormal();
  D3DXVec3TransformNormal(&fStack_e4,&fStack_e4,auStack_194);
  if (param_4 == 0.0) {
    iVar1 = 4;
    pfVar2 = afStack_120;
    do {
      D3DXVec3TransformNormal(pfVar2,pfVar2,param_1);
      iVar1 = iVar1 + -1;
      *pfVar2 = *(float *)(param_1 + 0x30) + *pfVar2;
      pfVar2[1] = *(float *)(param_1 + 0x34) + pfVar2[1];
      pfVar2[2] = *(float *)(param_1 + 0x38) + pfVar2[2];
      pfVar2 = pfVar2 + 4;
    } while (iVar1 != 0);
    __security_check_cookie(uStack_94 ^ (uint)&pfStack_254);
    return;
  }
  param_4 = param_4 / param_5;
  fStack_e0 = param_4 * afStack_120[0];
  fStack_dc = afStack_120[1] * param_4;
  fStack_d8 = afStack_120[2] * param_4;
  fStack_d4 = afStack_120[3] * param_4;
  fStack_d0 = afStack_120[4] * param_4;
  fStack_cc = afStack_120[5] * param_4;
  fStack_c8 = fStack_108 * param_4;
  fStack_c4 = fStack_104 * param_4;
  fStack_c0 = fStack_100 * param_4;
  fStack_bc = fStack_fc * param_4;
  fStack_b8 = fStack_f8 * param_4;
  fStack_b4 = fStack_f4 * param_4;
  ppfStack_250 = (float **)(fStack_f0 * param_4);
  pfStack_24c = (float *)(fStack_ec * param_4);
  pfStack_248 = (float *)(fStack_e8 * param_4);
  pfStack_244 = (float *)(param_4 * fStack_e4);
  iVar1 = 8;
  pfVar2 = afStack_120;
  fStack_b0 = (float)ppfStack_250;
  fStack_ac = (float)pfStack_24c;
  fStack_a8 = (float)pfStack_248;
  fStack_a4 = (float)pfStack_244;
  do {
    D3DXVec3TransformNormal(pfVar2,pfVar2,param_1);
    iVar1 = iVar1 + -1;
    *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x30);
    pfVar2[1] = *(float *)(param_1 + 0x34) + pfVar2[1];
    pfVar2[2] = *(float *)(param_1 + 0x38) + pfVar2[2];
    pfVar2 = pfVar2 + 4;
  } while (iVar1 != 0);
  __security_check_cookie(uStack_94 ^ (uint)&pfStack_254);
  return;
}

// 00F96CC0  FUN_00f96cc0  size=342  [run]
void FUN_00f96cc0(undefined4 *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [8];
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
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_ac;
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
  local_a0 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_60,param_2[2]);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_60,param_2[1]);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_60,*param_2);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  local_70 = *param_1;
  local_6c = param_1[1];
  local_68 = param_1[2];
  FUN_00f96900(&local_a0,param_3,param_4,param_5,param_6,param_7,param_8);
  __security_check_cookie(local_14 ^ (uint)auStack_ac);
  return;
}

// 00F96E20  FUN_00f96e20  size=8  [run]
void __fastcall FUN_00f96e20(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00F96E50  FUN_00f96e50  size=3  [run]
undefined4 __fastcall FUN_00f96e50(undefined4 *param_1)

{
  return *param_1;
}

// 00F96E60  FUN_00f96e60  size=78  [run]
undefined4 __thiscall FUN_00f96e60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x6c))
                      (DAT_01f206d4,param_2 * param_3,0,(param_2 != 2) + 'e',1,param_1,0);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 4) = 1;
      return 1;
    }
  }
  return 0;
}

// 00F96EF0  FUN_00f96ef0  size=8  [run]
void __fastcall FUN_00f96ef0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00F96F20  FUN_00f96f20  size=3  [run]
undefined4 __fastcall FUN_00f96f20(undefined4 *param_1)

{
  return *param_1;
}

// 00F96FC0  FUN_00f96fc0  size=169  [run]
uint FUN_00f96fc0(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar3 = 0;
    puVar2 = (undefined1 *)(param_1 + 7);
    do {
      if (*(short *)(puVar2 + -7) == 0xff) {
        return uVar1;
      }
      switch(puVar2[-1]) {
      case 0:
        uVar1 = uVar1 | 1;
        break;
      case 1:
        uVar1 = uVar1 | 0x10;
        break;
      case 2:
        uVar1 = uVar1 | 0x20;
        break;
      case 3:
        uVar1 = uVar1 | 2;
        break;
      case 5:
        switch(*puVar2) {
        case 0:
          uVar1 = uVar1 | 0x100;
          break;
        case 1:
          uVar1 = uVar1 | 0x200;
          break;
        case 2:
          uVar1 = uVar1 | 0x400;
          break;
        case 3:
          uVar1 = uVar1 | 0x800;
          break;
        case 4:
          uVar1 = uVar1 | 0x1000;
          break;
        case 5:
          uVar1 = uVar1 | 0x2000;
          break;
        case 6:
          uVar1 = uVar1 | 0x4000;
          break;
        case 7:
          uVar1 = uVar1 | 0x8000;
        }
        break;
      case 6:
        uVar1 = uVar1 | 4;
        break;
      case 10:
        uVar1 = uVar1 | 0x10000;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar3 < 0x10);
  }
  return uVar1;
}

// 00F97120  FUN_00f97120  size=191  [run]
void FUN_00f97120(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (DAT_01f206d4 != 0) {
    uVar2 = param_3 + 3U & 0xfffffffc;
    iVar1 = D3DXCreateTextureFromFileInMemoryEx
                      (DAT_01f206d4,param_2,uVar2,0xffffffff,0xffffffff,
                       (uint)(param_4 == 0) * 2 + -1,0,0,1,0xffffffff,0xffffffff,0,&local_20,0,
                       &local_24);
    if (iVar1 < 0) {
      __security_check_cookie(local_4 ^ (uint)&local_24);
      return;
    }
    *(undefined4 *)(param_1 + 4) = local_24;
    *(uint *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = local_14;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 8) = local_20;
    *(undefined4 *)(param_1 + 0xc) = local_1c;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00F971F0  FUN_00f971f0  size=191  [run]
void FUN_00f971f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (DAT_01f206d4 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_24);
    return;
  }
  iVar1 = D3DXCreateCubeTextureFromFileInMemoryEx
                    (DAT_01f206d4,param_2,param_3,0xffffffff,*(undefined4 *)(param_2 + 0x1c),0,0,1,
                     0xffffffff,0xffffffff,0,&local_20,0,&local_24);
  if (iVar1 < 0) {
    __security_check_cookie(local_4 ^ (uint)&local_24);
    return;
  }
  *(undefined4 *)(param_1 + 4) = local_24;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = local_20;
  *(undefined4 *)(param_1 + 0x10) = local_14;
  *(undefined4 *)(param_1 + 0xc) = local_1c;
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

