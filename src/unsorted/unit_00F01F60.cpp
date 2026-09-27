// src/unsorted/unit_00F01F60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F01F60..00F03FE0, 7 functions

#include "types.h"

// 00F01F60  FUN_00f01f60  size=1688  [run]
void __thiscall FUN_00f01f60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_104;
  float local_100;
  float local_f8;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float afStack_b4 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_104;
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_a0,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_a0,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_100 = *(float *)(param_1 + 0x1c0);
  local_f8 = *(float *)(param_1 + 0x1c8);
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
  if (local_f8 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  if (local_100 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  D3DXMatrixMultiply();
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fStack_f0 = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + fStack_d4 * fStack_d4;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fStack_104 = param_2[0xe];
  local_100 = param_2[0xf];
  pfVar3 = (float *)FUN_00e9fe70();
  fStack_ec = *pfVar3 - fVar1;
  fStack_e8 = pfVar3[1] - fVar2;
  fStack_e4 = pfVar3[2] - fStack_104;
  fStack_e0 = pfVar3[3] - local_100;
  if (((fStack_ec == 0.0) && (fStack_e8 == 0.0)) && (fStack_e4 == 0.0)) {
    pfVar3 = (float *)FUN_00e9feb0();
    pfVar4 = (float *)FUN_00e9fe70();
    fStack_ec = *pfVar4 - *pfVar3;
    fStack_e8 = pfVar4[1] - pfVar3[1];
    fStack_e4 = pfVar4[2] - pfVar3[2];
    fStack_e0 = pfVar4[3] - pfVar3[3];
    fStack_f0 = fStack_ec * fStack_ec + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4;
    if (fStack_f0 < 0.0 != (fStack_f0 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_ec = 0.0;
      fStack_e8 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_00f022fc;
    }
  }
  FUN_00ddf460(&fStack_ec,&fStack_ec);
LAB_00f022fc:
  local_bc = fStack_d8 * fStack_e4 - fStack_d4 * fStack_e8;
  local_b8 = fStack_ec * fStack_d4 - fStack_dc * fStack_e4;
  fStack_104 = fStack_e8 * fStack_dc - fStack_d8 * fStack_ec;
  fStack_f0 = local_bc * local_bc + local_b8 * local_b8 + fStack_104 * fStack_104;
  afStack_b4[0] = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    afStack_b4[0] = 0.0;
  }
  fStack_cc = fStack_d4 * local_b8 - fStack_d8 * afStack_b4[0];
  fStack_c8 = fStack_dc * afStack_b4[0] - local_bc * fStack_d4;
  fStack_104 = local_bc * fStack_d8 - fStack_dc * local_b8;
  fStack_f0 = fStack_cc * fStack_cc + fStack_c8 * fStack_c8 + fStack_104 * fStack_104;
  fStack_c4 = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  *param_2 = local_bc;
  param_2[1] = local_b8;
  param_2[2] = afStack_b4[0];
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9c = 0;
  local_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  local_70 = 0x3f800000;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_6c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_b4,&local_74,afStack_b4);
  }
  D3DXMatrixMultiply(param_2,&uStack_ac,param_2);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffee4);
  return;
}

// 00F02600  FUN_00f02600  size=780  [run]
void __fastcall FUN_00f02600(int param_1)

{
  float10 fVar1;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_ac;
  local_a0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_9c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_98 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_94 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  local_90 = local_a0 - *(float *)(param_1 + 0x4e0);
  local_8c = local_9c - *(float *)(param_1 + 0x4e4);
  local_88 = local_98 - *(float *)(param_1 + 0x4e8);
  local_84 = local_94 - *(float *)(param_1 + 0x4ec);
  local_ac = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
  if (0.0 < local_ac) {
    FUN_00ddf460(&local_90,&local_90);
  }
  *(float *)(param_1 + 0x4e0) = local_a0;
  *(float *)(param_1 + 0x4e4) = local_9c;
  *(float *)(param_1 + 0x4e8) = local_98;
  *(float *)(param_1 + 0x4ec) = local_94;
  local_78 = local_88 * 0.0 - local_8c * 0.0;
  local_74 = local_90 * 0.0 - local_88;
  local_70 = local_8c - local_90 * 0.0;
  local_6c = local_74 * local_88 - local_70 * local_8c;
  local_68 = local_70 * local_90 - local_78 * local_88;
  local_64 = local_78 * local_8c - local_74 * local_90;
  local_ac = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
  local_38 = local_88;
  fVar1 = (float10)FUN_00fdef70();
  local_a0 = (float)fVar1;
  local_ac = local_68 * local_68 + local_6c * local_6c + local_64 * local_64;
  fVar1 = (float10)FUN_00fdef70();
  local_9c = (float)fVar1;
  local_ac = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
  fVar1 = (float10)FUN_00fdef70();
  local_ac = (float)fVar1;
  local_a4 = -local_70 / local_ac;
  fVar1 = (float10)FUN_00ddbaa0(local_a4);
  local_a8 = (float)fVar1;
  local_a4 = local_38 / local_ac;
  fVar1 = (float10)FUN_00fdecda();
  local_a4 = (float)fVar1;
  *(float *)(param_1 + 0x1c0) = local_a4;
  *(float *)(param_1 + 0x1c4) = local_a8;
  local_a8 = local_78 / local_a0;
  fVar1 = (float10)FUN_00fdecda();
  local_a8 = (float)fVar1;
  *(float *)(param_1 + 0x1c8) = local_a8;
  __security_check_cookie(local_14 ^ (uint)&local_ac);
  return;
}

// 00F02910  FUN_00f02910  size=1676  [run]
void __thiscall FUN_00f02910(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fStack_104;
  float local_100;
  float local_f8;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float afStack_b4 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_104;
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_a0,(void *)**(undefined4 **)(param_3 + 0x10),0x40);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_a0,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_100 = *(float *)(param_1 + 0x1c0);
  local_f8 = *(float *)(param_1 + 0x1c8);
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
  if (local_f8 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  if (local_100 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  D3DXMatrixMultiply();
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fStack_f0 = fStack_dc * fStack_dc + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  fStack_104 = param_2[0xe];
  local_100 = param_2[0xf];
  fStack_ec = *(float *)(iVar1 + 0x40) - param_2[0xc];
  fStack_e8 = *(float *)(iVar1 + 0x44) - param_2[0xd];
  fStack_e4 = *(float *)(iVar1 + 0x48) - fStack_104;
  fStack_e0 = *(float *)(iVar1 + 0x4c) - local_100;
  if (((fStack_ec == 0.0) && (fStack_e8 == 0.0)) && (fStack_e4 == 0.0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    fStack_ec = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
    fStack_e8 = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
    fStack_e4 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
    fStack_e0 = *(float *)(iVar1 + 0x4c) - *(float *)(iVar1 + 0x5c);
    fStack_f0 = fStack_ec * fStack_ec + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4;
    if (fStack_f0 < 0.0 != (fStack_f0 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_ec = 0.0;
      fStack_e8 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_00f02ca4;
    }
  }
  FUN_00ddf460(&fStack_ec,&fStack_ec);
LAB_00f02ca4:
  local_bc = fStack_d8 * fStack_e4 - fStack_d4 * fStack_e8;
  local_b8 = fStack_ec * fStack_d4 - fStack_dc * fStack_e4;
  fStack_104 = fStack_e8 * fStack_dc - fStack_d8 * fStack_ec;
  fStack_f0 = local_bc * local_bc + local_b8 * local_b8 + fStack_104 * fStack_104;
  afStack_b4[0] = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    afStack_b4[0] = 0.0;
  }
  fStack_cc = fStack_d4 * local_b8 - fStack_d8 * afStack_b4[0];
  fStack_c8 = fStack_dc * afStack_b4[0] - local_bc * fStack_d4;
  fStack_104 = local_bc * fStack_d8 - fStack_dc * local_b8;
  fStack_f0 = fStack_cc * fStack_cc + fStack_c8 * fStack_c8 + fStack_104 * fStack_104;
  fStack_c4 = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  *param_2 = local_bc;
  param_2[1] = local_b8;
  param_2[2] = afStack_b4[0];
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9c = 0;
  local_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  local_70 = 0x3f800000;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_6c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_b4,&local_74,afStack_b4);
  }
  D3DXMatrixMultiply(param_2,&uStack_ac,param_2);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffee4);
  return;
}

// 00F02FA0  FUN_00f02fa0  size=1688  [run]
void __thiscall FUN_00f02fa0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_104;
  float local_100;
  float local_f8;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float afStack_b4 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_104;
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_a0,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_a0,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_100 = *(float *)(param_1 + 0x1c0);
  local_f8 = *(float *)(param_1 + 0x1c8);
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
  if (local_f8 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  if (local_100 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  D3DXMatrixMultiply();
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fStack_f0 = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + fStack_d4 * fStack_d4;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fStack_104 = param_2[0xe];
  local_100 = param_2[0xf];
  pfVar3 = (float *)FUN_00e9fe70();
  fStack_ec = *pfVar3 - fVar1;
  fStack_e8 = pfVar3[1] - fVar2;
  fStack_e4 = pfVar3[2] - fStack_104;
  fStack_e0 = pfVar3[3] - local_100;
  if (((fStack_ec == 0.0) && (fStack_e8 == 0.0)) && (fStack_e4 == 0.0)) {
    pfVar3 = (float *)FUN_00e9feb0();
    pfVar4 = (float *)FUN_00e9fe70();
    fStack_ec = *pfVar4 - *pfVar3;
    fStack_e8 = pfVar4[1] - pfVar3[1];
    fStack_e4 = pfVar4[2] - pfVar3[2];
    fStack_e0 = pfVar4[3] - pfVar3[3];
    fStack_f0 = fStack_ec * fStack_ec + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4;
    if (fStack_f0 < 0.0 != (fStack_f0 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_ec = 0.0;
      fStack_e8 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_00f0333c;
    }
  }
  FUN_00ddf460(&fStack_ec,&fStack_ec);
LAB_00f0333c:
  local_bc = fStack_d8 * fStack_e4 - fStack_d4 * fStack_e8;
  local_b8 = fStack_ec * fStack_d4 - fStack_dc * fStack_e4;
  fStack_104 = fStack_e8 * fStack_dc - fStack_d8 * fStack_ec;
  fStack_f0 = local_bc * local_bc + local_b8 * local_b8 + fStack_104 * fStack_104;
  afStack_b4[0] = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    afStack_b4[0] = 0.0;
  }
  fStack_cc = fStack_d4 * local_b8 - fStack_d8 * afStack_b4[0];
  fStack_c8 = fStack_dc * afStack_b4[0] - local_bc * fStack_d4;
  fStack_104 = local_bc * fStack_d8 - fStack_dc * local_b8;
  fStack_f0 = fStack_cc * fStack_cc + fStack_c8 * fStack_c8 + fStack_104 * fStack_104;
  fStack_c4 = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  *param_2 = local_bc;
  param_2[1] = local_b8;
  param_2[2] = afStack_b4[0];
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9c = 0;
  local_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  local_70 = 0x3f800000;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_6c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_b4,&local_74,afStack_b4);
  }
  D3DXMatrixMultiply(param_2,&uStack_ac,param_2);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffee4);
  return;
}

// 00F03640  FUN_00f03640  size=780  [run]
void __fastcall FUN_00f03640(int param_1)

{
  float10 fVar1;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_ac;
  local_a0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_9c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_98 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_94 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  local_90 = local_a0 - *(float *)(param_1 + 0x4d0);
  local_8c = local_9c - *(float *)(param_1 + 0x4d4);
  local_88 = local_98 - *(float *)(param_1 + 0x4d8);
  local_84 = local_94 - *(float *)(param_1 + 0x4dc);
  local_ac = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
  if (0.0 < local_ac) {
    FUN_00ddf460(&local_90,&local_90);
  }
  *(float *)(param_1 + 0x4d0) = local_a0;
  *(float *)(param_1 + 0x4d4) = local_9c;
  *(float *)(param_1 + 0x4d8) = local_98;
  *(float *)(param_1 + 0x4dc) = local_94;
  local_78 = local_88 * 0.0 - local_8c * 0.0;
  local_74 = local_90 * 0.0 - local_88;
  local_70 = local_8c - local_90 * 0.0;
  local_6c = local_74 * local_88 - local_70 * local_8c;
  local_68 = local_70 * local_90 - local_78 * local_88;
  local_64 = local_78 * local_8c - local_74 * local_90;
  local_ac = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
  local_38 = local_88;
  fVar1 = (float10)FUN_00fdef70();
  local_a0 = (float)fVar1;
  local_ac = local_68 * local_68 + local_6c * local_6c + local_64 * local_64;
  fVar1 = (float10)FUN_00fdef70();
  local_9c = (float)fVar1;
  local_ac = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
  fVar1 = (float10)FUN_00fdef70();
  local_ac = (float)fVar1;
  local_a4 = -local_70 / local_ac;
  fVar1 = (float10)FUN_00ddbaa0(local_a4);
  local_a8 = (float)fVar1;
  local_a4 = local_38 / local_ac;
  fVar1 = (float10)FUN_00fdecda();
  local_a4 = (float)fVar1;
  *(float *)(param_1 + 0x1c0) = local_a4;
  *(float *)(param_1 + 0x1c4) = local_a8;
  local_a8 = local_78 / local_a0;
  fVar1 = (float10)FUN_00fdecda();
  local_a8 = (float)fVar1;
  *(float *)(param_1 + 0x1c8) = local_a8;
  __security_check_cookie(local_14 ^ (uint)&local_ac);
  return;
}

// 00F03950  FUN_00f03950  size=1676  [run]
void __thiscall FUN_00f03950(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fStack_104;
  float local_100;
  float local_f8;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float afStack_b4 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_104;
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_a0,(void *)**(undefined4 **)(param_3 + 0x10),0x40);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_a0,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_100 = *(float *)(param_1 + 0x1c0);
  local_f8 = *(float *)(param_1 + 0x1c8);
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
  if (local_f8 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  if (local_100 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply(&uStack_a8,&local_68);
  }
  D3DXMatrixMultiply();
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fStack_f0 = fStack_dc * fStack_dc + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  fStack_104 = param_2[0xe];
  local_100 = param_2[0xf];
  fStack_ec = *(float *)(iVar1 + 0x40) - param_2[0xc];
  fStack_e8 = *(float *)(iVar1 + 0x44) - param_2[0xd];
  fStack_e4 = *(float *)(iVar1 + 0x48) - fStack_104;
  fStack_e0 = *(float *)(iVar1 + 0x4c) - local_100;
  if (((fStack_ec == 0.0) && (fStack_e8 == 0.0)) && (fStack_e4 == 0.0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    fStack_ec = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
    fStack_e8 = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
    fStack_e4 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
    fStack_e0 = *(float *)(iVar1 + 0x4c) - *(float *)(iVar1 + 0x5c);
    fStack_f0 = fStack_ec * fStack_ec + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4;
    if (fStack_f0 < 0.0 != (fStack_f0 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_ec = 0.0;
      fStack_e8 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_00f03ce4;
    }
  }
  FUN_00ddf460(&fStack_ec,&fStack_ec);
LAB_00f03ce4:
  local_bc = fStack_d8 * fStack_e4 - fStack_d4 * fStack_e8;
  local_b8 = fStack_ec * fStack_d4 - fStack_dc * fStack_e4;
  fStack_104 = fStack_e8 * fStack_dc - fStack_d8 * fStack_ec;
  fStack_f0 = local_bc * local_bc + local_b8 * local_b8 + fStack_104 * fStack_104;
  afStack_b4[0] = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    afStack_b4[0] = 0.0;
  }
  fStack_cc = fStack_d4 * local_b8 - fStack_d8 * afStack_b4[0];
  fStack_c8 = fStack_dc * afStack_b4[0] - local_bc * fStack_d4;
  fStack_104 = local_bc * fStack_d8 - fStack_dc * local_b8;
  fStack_f0 = fStack_cc * fStack_cc + fStack_c8 * fStack_c8 + fStack_104 * fStack_104;
  fStack_c4 = fStack_104;
  if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  *param_2 = local_bc;
  param_2[1] = local_b8;
  param_2[2] = afStack_b4[0];
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9c = 0;
  local_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  local_70 = 0x3f800000;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_6c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_b4,&local_74,afStack_b4);
  }
  D3DXMatrixMultiply(param_2,&uStack_ac,param_2);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffee4);
  return;
}

// 00F03FE0  FUN_00f03fe0  size=380  [run]
void __thiscall FUN_00f03fe0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int unaff_ESI;
  uint uVar7;
  float10 fVar8;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  if (*(char *)(param_1 + 99) != -1) {
    D3DXVec3TransformNormal(local_20,param_1,param_3 + 0x10);
    fStack_2c = fStack_2c + *(float *)(param_3 + 0x40);
    fStack_28 = *(float *)(param_3 + 0x44) + fStack_28;
    fStack_24 = *(float *)(param_3 + 0x48) + fStack_24;
    if ((*(int *)(param_2 + 0x58) == 0) ||
       (puVar5 = (uint *)(*(int *)(param_2 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar5;
      if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
        uVar6 = FUN_00f59ed0(3);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
    }
    uVar6 = FUN_00e9fe70();
    uVar4 = *(uint *)(param_2 + 0x30);
    if ((uVar4 & 0x200) == 0) {
      fVar8 = (float10)FUN_00edbf30(uVar6,&fStack_2c,*(undefined4 *)(uVar7 + 0xc),
                                    *(undefined4 *)(uVar7 + 0x10));
    }
    else {
      fVar8 = (float10)1;
    }
    if ((uVar4 & 0x10) == 0) {
      fVar1 = 1.0;
    }
    else if (*(float *)(param_2 + 0x90) == 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = *(float *)(param_2 + 0x9c) / *(float *)(param_2 + 0x90);
    }
    uVar6 = param_4[1];
    uVar2 = param_4[2];
    fVar3 = (float)param_4[3];
    *(undefined4 *)(unaff_ESI + 0x20) = *param_4;
    *(undefined4 *)(unaff_ESI + 0x24) = uVar6;
    *(undefined4 *)(unaff_ESI + 0x28) = uVar2;
    *(float *)(unaff_ESI + 0x2c) = fVar1 * (float)fVar8 * fVar3;
  }
  return;
}

