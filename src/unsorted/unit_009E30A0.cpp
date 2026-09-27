// src/unsorted/unit_009E30A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E30A0..009E4660, 6 functions

#include "mgrr.h"

// 009E30A0  FUN_009e30a0  size=1528  [run]
void __thiscall FUN_009e30a0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
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
  float local_b0;
  float local_ac;
  float local_a8;
  float afStack_a4 [2];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_90,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_b0 = param_2[0xc];
    local_ac = param_2[0xd];
    local_a8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_90,0x40);
    param_2[0xc] = local_b0;
    param_2[0xd] = local_ac;
    param_2[0xe] = local_a8;
  }
  fVar1 = *(float *)(param_1 + 0x1c0);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  if (fVar1 != 0.0) {
    D3DXMatrixRotationX(local_50,fVar1);
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_2);
  fStack_cc = param_2[4];
  fStack_c8 = param_2[5];
  fStack_c4 = param_2[6];
  fStack_c0 = param_2[7];
  fVar1 = fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_2[0xf];
  pfVar5 = (float *)FUN_00e9fe70();
  fStack_dc = *pfVar5 - fVar1;
  fStack_d8 = pfVar5[1] - fVar2;
  fStack_d4 = pfVar5[2] - fVar3;
  fStack_d0 = pfVar5[3] - fVar4;
  if (((fStack_dc == 0.0) && (fStack_d8 == 0.0)) && (fStack_d4 == 0.0)) {
    pfVar5 = (float *)FUN_00e9feb0();
    pfVar6 = (float *)FUN_00e9fe70();
    fStack_dc = *pfVar6 - *pfVar5;
    fStack_d8 = pfVar6[1] - pfVar5[1];
    fStack_d4 = pfVar6[2] - pfVar5[2];
    fStack_d0 = pfVar6[3] - pfVar5[3];
    fVar1 = fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_dc = 0.0;
      fStack_d8 = 1.0;
      fStack_d4 = 0.0;
      goto LAB_009e33dd;
    }
  }
  FUN_00ddf460(&fStack_dc,&fStack_dc);
LAB_009e33dd:
  local_ac = fStack_d4 * fStack_c8 - fStack_d8 * fStack_c4;
  local_a8 = fStack_c4 * fStack_dc - fStack_d4 * fStack_cc;
  afStack_a4[0] = fStack_d8 * fStack_cc - fStack_c8 * fStack_dc;
  fVar1 = afStack_a4[0] * afStack_a4[0] + local_ac * local_ac + local_a8 * local_a8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_ac,&local_ac);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_ac = 0.0;
    local_a8 = 1.0;
    afStack_a4[0] = 0.0;
  }
  fStack_bc = local_a8 * fStack_c4 - afStack_a4[0] * fStack_c8;
  fStack_b8 = afStack_a4[0] * fStack_cc - fStack_c4 * local_ac;
  fStack_b4 = fStack_c8 * local_ac - fStack_cc * local_a8;
  fVar1 = fStack_b4 * fStack_b4 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_bc,&fStack_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_bc = 0.0;
    fStack_b8 = 1.0;
    fStack_b4 = 0.0;
  }
  *param_2 = local_ac;
  param_2[1] = local_a8;
  param_2[2] = afStack_a4[0];
  param_2[4] = fStack_cc;
  param_2[5] = fStack_c8;
  param_2[6] = fStack_c4;
  param_2[8] = fStack_bc;
  param_2[9] = fStack_b8;
  param_2[10] = fStack_b4;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  local_60 = 0x3f800000;
  local_74 = 0x3f800000;
  local_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_5c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_a4,&local_64,afStack_a4);
    D3DXMatrixMultiply(param_2,&local_b0,param_2);
    return;
  }
  D3DXMatrixMultiply(param_2,&uStack_9c,param_2);
  return;
}

// 009E36A0  FUN_009e36a0  size=492  [run]
void __fastcall FUN_009e36a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_28;
  
  fVar1 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  fVar3 = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  fVar2 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  fVar4 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  local_60 = fVar1 - *(float *)(param_1 + 0x4e0);
  local_5c = fVar3 - *(float *)(param_1 + 0x4e4);
  local_58 = fVar2 - *(float *)(param_1 + 0x4e8);
  local_54 = fVar4 - *(float *)(param_1 + 0x4ec);
  if (0.0 < local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) {
    FUN_00ddf460(&local_60,&local_60);
  }
  *(float *)(param_1 + 0x4e0) = fVar1;
  *(float *)(param_1 + 0x4e4) = fVar3;
  *(float *)(param_1 + 0x4e8) = fVar2;
  *(float *)(param_1 + 0x4ec) = fVar4;
  fVar5 = local_58 * 0.0 - local_5c * 0.0;
  fVar7 = local_60 * 0.0 - local_58;
  fVar6 = local_5c - local_60 * 0.0;
  fVar3 = fVar7 * local_58 - fVar6 * local_5c;
  fVar4 = fVar6 * local_60 - fVar5 * local_58;
  fVar2 = fVar5 * local_5c - fVar7 * local_60;
  fVar1 = SQRT(local_5c * local_5c + local_60 * local_60 + local_58 * local_58);
  local_28 = local_58;
  fVar8 = (float10)FUN_00ddbaa0(-(fVar6 / fVar1));
  fVar9 = (float10)fVar1;
  fVar9 = (float10)fpatan((float10)fVar2 / fVar9,(float10)local_28 / fVar9);
  *(float *)(param_1 + 0x1c0) = (float)fVar9;
  *(float *)(param_1 + 0x1c4) = (float)fVar8;
  fVar8 = (float10)fpatan((float10)fVar7 /
                          (float10)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2),
                          (float10)fVar5 /
                          (float10)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5));
  *(float *)(param_1 + 0x1c8) = (float)fVar8;
  return;
}

// 009E3890  FUN_009e3890  size=1500  [run]
void __thiscall FUN_009e3890(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_e4;
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
  float fStack_b4;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_90,(void *)**(undefined4 **)(param_3 + 0x10),0x40);
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_90,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_a0 = *(float *)(param_1 + 0x1c0);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  if (local_a0 != 0.0) {
    D3DXMatrixRotationX(local_50,local_a0);
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_2);
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fVar3 = fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  fVar3 = *(float *)(iVar1 + 0x40) - param_2[0xc];
  fVar4 = *(float *)(iVar1 + 0x44) - param_2[0xd];
  fStack_e4 = *(float *)(iVar1 + 0x48) - param_2[0xe];
  if (((fVar3 == 0.0) && (fVar4 == 0.0)) && (fStack_e4 == 0.0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    fVar3 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
    fVar4 = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
    fStack_e4 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
    fVar2 = fStack_e4 * fStack_e4 + fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = 0.0;
      fVar4 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_009e3bb1;
    }
  }
  FUN_00ddf460(&stack0xffffff14,&stack0xffffff14);
LAB_009e3bb1:
  local_bc = fStack_e4 * fStack_d8 - fVar4 * fStack_d4;
  local_b8 = fStack_d4 * fVar3 - fStack_e4 * fStack_dc;
  fStack_b4 = fVar4 * fStack_dc - fStack_d8 * fVar3;
  fVar3 = fStack_b4 * fStack_b4 + local_bc * local_bc + local_b8 * local_b8;
  fStack_ac = local_bc;
  fStack_a8 = local_b8;
  fStack_a4 = fStack_b4;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    fStack_b4 = 0.0;
  }
  fStack_cc = local_b8 * fStack_d4 - fStack_b4 * fStack_d8;
  fStack_c8 = fStack_b4 * fStack_dc - fStack_d4 * local_bc;
  fStack_c4 = fStack_d8 * local_bc - fStack_dc * local_b8;
  fVar3 = fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
  fStack_ac = fStack_cc;
  fStack_a8 = fStack_c8;
  fStack_a4 = fStack_c4;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
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
  param_2[2] = fStack_b4;
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  local_60 = 0x3f800000;
  local_74 = 0x3f800000;
  local_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_5c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&fStack_a4,&local_64,&fStack_a4);
    D3DXMatrixMultiply(param_2,auStack_b0,param_2);
    return;
  }
  D3DXMatrixMultiply(param_2,&uStack_9c,param_2);
  return;
}

// 009E3E70  FUN_009e3e70  size=1528  [run]
void __thiscall FUN_009e3e70(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
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
  float local_b0;
  float local_ac;
  float local_a8;
  float afStack_a4 [2];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_90,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_b0 = param_2[0xc];
    local_ac = param_2[0xd];
    local_a8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_90,0x40);
    param_2[0xc] = local_b0;
    param_2[0xd] = local_ac;
    param_2[0xe] = local_a8;
  }
  fVar1 = *(float *)(param_1 + 0x1c0);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  if (fVar1 != 0.0) {
    D3DXMatrixRotationX(local_50,fVar1);
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_2);
  fStack_cc = param_2[4];
  fStack_c8 = param_2[5];
  fStack_c4 = param_2[6];
  fStack_c0 = param_2[7];
  fVar1 = fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_cc,&fStack_cc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_cc = 0.0;
    fStack_c8 = 1.0;
    fStack_c4 = 0.0;
  }
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_2[0xf];
  pfVar5 = (float *)FUN_00e9fe70();
  fStack_dc = *pfVar5 - fVar1;
  fStack_d8 = pfVar5[1] - fVar2;
  fStack_d4 = pfVar5[2] - fVar3;
  fStack_d0 = pfVar5[3] - fVar4;
  if (((fStack_dc == 0.0) && (fStack_d8 == 0.0)) && (fStack_d4 == 0.0)) {
    pfVar5 = (float *)FUN_00e9feb0();
    pfVar6 = (float *)FUN_00e9fe70();
    fStack_dc = *pfVar6 - *pfVar5;
    fStack_d8 = pfVar6[1] - pfVar5[1];
    fStack_d4 = pfVar6[2] - pfVar5[2];
    fStack_d0 = pfVar6[3] - pfVar5[3];
    fVar1 = fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_dc = 0.0;
      fStack_d8 = 1.0;
      fStack_d4 = 0.0;
      goto LAB_009e41ad;
    }
  }
  FUN_00ddf460(&fStack_dc,&fStack_dc);
LAB_009e41ad:
  local_ac = fStack_d4 * fStack_c8 - fStack_d8 * fStack_c4;
  local_a8 = fStack_c4 * fStack_dc - fStack_d4 * fStack_cc;
  afStack_a4[0] = fStack_d8 * fStack_cc - fStack_c8 * fStack_dc;
  fVar1 = afStack_a4[0] * afStack_a4[0] + local_ac * local_ac + local_a8 * local_a8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_ac,&local_ac);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_ac = 0.0;
    local_a8 = 1.0;
    afStack_a4[0] = 0.0;
  }
  fStack_bc = local_a8 * fStack_c4 - afStack_a4[0] * fStack_c8;
  fStack_b8 = afStack_a4[0] * fStack_cc - fStack_c4 * local_ac;
  fStack_b4 = fStack_c8 * local_ac - fStack_cc * local_a8;
  fVar1 = fStack_b4 * fStack_b4 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_bc,&fStack_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_bc = 0.0;
    fStack_b8 = 1.0;
    fStack_b4 = 0.0;
  }
  *param_2 = local_ac;
  param_2[1] = local_a8;
  param_2[2] = afStack_a4[0];
  param_2[4] = fStack_cc;
  param_2[5] = fStack_c8;
  param_2[6] = fStack_c4;
  param_2[8] = fStack_bc;
  param_2[9] = fStack_b8;
  param_2[10] = fStack_b4;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  local_60 = 0x3f800000;
  local_74 = 0x3f800000;
  local_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_5c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(afStack_a4,&local_64,afStack_a4);
    D3DXMatrixMultiply(param_2,&local_b0,param_2);
    return;
  }
  D3DXMatrixMultiply(param_2,&uStack_9c,param_2);
  return;
}

// 009E4470  FUN_009e4470  size=492  [run]
void __fastcall FUN_009e4470(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_28;
  
  fVar1 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  fVar3 = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  fVar2 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  fVar4 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  local_60 = fVar1 - *(float *)(param_1 + 0x4e0);
  local_5c = fVar3 - *(float *)(param_1 + 0x4e4);
  local_58 = fVar2 - *(float *)(param_1 + 0x4e8);
  local_54 = fVar4 - *(float *)(param_1 + 0x4ec);
  if (0.0 < local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) {
    FUN_00ddf460(&local_60,&local_60);
  }
  *(float *)(param_1 + 0x4e0) = fVar1;
  *(float *)(param_1 + 0x4e4) = fVar3;
  *(float *)(param_1 + 0x4e8) = fVar2;
  *(float *)(param_1 + 0x4ec) = fVar4;
  fVar5 = local_58 * 0.0 - local_5c * 0.0;
  fVar7 = local_60 * 0.0 - local_58;
  fVar6 = local_5c - local_60 * 0.0;
  fVar3 = fVar7 * local_58 - fVar6 * local_5c;
  fVar4 = fVar6 * local_60 - fVar5 * local_58;
  fVar2 = fVar5 * local_5c - fVar7 * local_60;
  fVar1 = SQRT(local_5c * local_5c + local_60 * local_60 + local_58 * local_58);
  local_28 = local_58;
  fVar8 = (float10)FUN_00ddbaa0(-(fVar6 / fVar1));
  fVar9 = (float10)fVar1;
  fVar9 = (float10)fpatan((float10)fVar2 / fVar9,(float10)local_28 / fVar9);
  *(float *)(param_1 + 0x1c0) = (float)fVar9;
  *(float *)(param_1 + 0x1c4) = (float)fVar8;
  fVar8 = (float10)fpatan((float10)fVar7 /
                          (float10)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2),
                          (float10)fVar5 /
                          (float10)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5));
  *(float *)(param_1 + 0x1c8) = (float)fVar8;
  return;
}

// 009E4660  FUN_009e4660  size=1500  [run]
void __thiscall FUN_009e4660(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_e4;
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
  float fStack_b4;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&local_90,(void *)**(undefined4 **)(param_3 + 0x10),0x40);
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_c0 = param_2[0xc];
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    FID_conflict__memcpy(param_2,&local_90,0x40);
    param_2[0xc] = local_c0;
    param_2[0xd] = local_bc;
    param_2[0xe] = local_b8;
  }
  local_a0 = *(float *)(param_1 + 0x1c0);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  if (local_a0 != 0.0) {
    D3DXMatrixRotationX(local_50,local_a0);
    D3DXMatrixMultiply(&uStack_98,&local_58,&uStack_98);
  }
  D3DXMatrixMultiply(param_2,&local_90,param_2);
  fStack_dc = param_2[4];
  fStack_d8 = param_2[5];
  fStack_d4 = param_2[6];
  fStack_d0 = param_2[7];
  fVar3 = fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&fStack_dc,&fStack_dc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_dc = 0.0;
    fStack_d8 = 1.0;
    fStack_d4 = 0.0;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  fVar3 = *(float *)(iVar1 + 0x40) - param_2[0xc];
  fVar4 = *(float *)(iVar1 + 0x44) - param_2[0xd];
  fStack_e4 = *(float *)(iVar1 + 0x48) - param_2[0xe];
  if (((fVar3 == 0.0) && (fVar4 == 0.0)) && (fStack_e4 == 0.0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    fVar3 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
    fVar4 = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
    fStack_e4 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
    fVar2 = fStack_e4 * fStack_e4 + fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = 0.0;
      fVar4 = 1.0;
      fStack_e4 = 0.0;
      goto LAB_009e4981;
    }
  }
  FUN_00ddf460(&stack0xffffff14,&stack0xffffff14);
LAB_009e4981:
  local_bc = fStack_e4 * fStack_d8 - fVar4 * fStack_d4;
  local_b8 = fStack_d4 * fVar3 - fStack_e4 * fStack_dc;
  fStack_b4 = fVar4 * fStack_dc - fStack_d8 * fVar3;
  fVar3 = fStack_b4 * fStack_b4 + local_bc * local_bc + local_b8 * local_b8;
  fStack_ac = local_bc;
  fStack_a8 = local_b8;
  fStack_a4 = fStack_b4;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&local_bc,&local_bc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_bc = 0.0;
    local_b8 = 1.0;
    fStack_b4 = 0.0;
  }
  fStack_cc = local_b8 * fStack_d4 - fStack_b4 * fStack_d8;
  fStack_c8 = fStack_b4 * fStack_dc - fStack_d4 * local_bc;
  fStack_c4 = fStack_d8 * local_bc - fStack_dc * local_b8;
  fVar3 = fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
  fStack_ac = fStack_cc;
  fStack_a8 = fStack_c8;
  fStack_a4 = fStack_c4;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
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
  param_2[2] = fStack_b4;
  param_2[4] = fStack_dc;
  param_2[5] = fStack_d8;
  param_2[6] = fStack_d4;
  param_2[8] = fStack_cc;
  param_2[9] = fStack_c8;
  param_2[10] = fStack_c4;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  local_60 = 0x3f800000;
  local_74 = 0x3f800000;
  local_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_5c,*(float *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&fStack_a4,&local_64,&fStack_a4);
    D3DXMatrixMultiply(param_2,auStack_b0,param_2);
    return;
  }
  D3DXMatrixMultiply(param_2,&uStack_9c,param_2);
  return;
}

