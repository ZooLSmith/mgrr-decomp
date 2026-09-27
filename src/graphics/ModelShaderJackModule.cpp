// src/graphics/ModelShaderJackModule.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009EE450..00F3E960, 31 functions

#include "mgrr.h"
#include "ModelShaderJackModule.h"

// 009EE450  ModelShaderJackModule::updateModule  size=183  [class]
void __thiscall ModelShaderJackModule::updateModule(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  if ((*(byte *)(param_1 + 0x49c) & 0x40) == 0) {
    FUN_009de210(param_2);
    FUN_009ed0b0(param_2);
  }
  switchD_0080dbae::default();
  uVar1 = *(uint *)(*(int *)(param_2 + 0x54) + 0x3c);
  if (((uVar1 >> 0x14 & 1) != 0) || ((uVar1 >> 0x11 & 1) != 0)) {
    FUN_00efda00(*(int *)(param_2 + 0x58) + 0x10,*(undefined4 *)(param_2 + 100),
                 *(undefined4 *)(param_2 + 0x60));
    FUN_00efde00(*(int *)(param_2 + 0x58) + 0x10,*(undefined4 *)(param_2 + 100),
                 *(undefined4 *)(param_2 + 0x60));
  }
  iVar2 = *(int *)(param_2 + 0x54);
  if ((((*(byte *)(iVar2 + 0x3c) & 8) != 0) && (*(int *)(iVar2 + 0x120) == 0)) &&
     (*(char *)(*(int *)(param_2 + 0x58) + 0x470) != '\0')) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x80000000;
  }
  return;
}

// 009EF340  ModelShaderJackModule::updateModule_2  size=1624  [class]
void __thiscall ModelShaderJackModule::updateModule_2(int param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined1 auStack_134 [4];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 auStack_11c [8];
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
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
  float fStack_cc;
  float afStack_c8 [17];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_74 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  FUN_00f0b530(param_2[4]);
  FUN_00efd260(param_2[4]);
  if (*(int *)(param_1 + 0x500) == 2) {
    FUN_009d0970();
  }
  else if (*(int *)(param_1 + 0x500) == 3) {
    FUN_009e36a0();
  }
  FUN_009eaea0(param_2);
  fVar1 = 0.0;
  if (*(int *)(param_1 + 0x500) != 4) goto LAB_009ef7a0;
  local_d8 = 0.0;
  local_dc = 0.0;
  local_e0 = 0.0;
  local_e4 = 0.0;
  local_ec = 0.0;
  local_f0 = 0.0;
  local_f4 = 0.0;
  local_f8 = 0.0;
  local_100 = 0;
  local_104 = 0;
  local_108 = 0;
  local_10c = 0;
  local_d4 = 1.0;
  local_e8 = 1.0;
  local_fc = 0x3f800000;
  local_110 = 0x3f800000;
  if (*(int *)(param_1 + 0x50) == 0) {
    afStack_c8[3] = 0.0;
    local_68 = fVar1;
    local_70 = fVar1;
  }
  else {
    iVar2 = *(int *)param_2[4];
    afStack_c8[3] = *(float *)(iVar2 + 0x34);
    fVar1 = *(float *)(iVar2 + 0x3c);
    local_68 = *(float *)(iVar2 + 0x38);
    local_70 = *(float *)(iVar2 + 0x30);
  }
  local_70 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180) + local_70;
  local_6c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184) + afStack_c8[3];
  local_68 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188) + local_68;
  local_64 = fVar1 + *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_114 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar2 = param_2[6];
  if (local_114 == 0.0) {
LAB_009ef4f9:
    local_130 = 0.0;
    local_12c = 0.0;
    local_128 = 0.0;
    local_124 = 1.0;
  }
  else {
    local_130 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 400);
    local_12c = *(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x194);
    local_128 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x198);
    local_124 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_130 == 0.0) && (local_12c == 0.0)) && (local_128 == 0.0)) goto LAB_009ef4f9;
    FUN_00ddf460(&local_130,&local_130);
    local_130 = local_130 * local_114;
    local_12c = local_12c * local_114;
    local_128 = local_128 * local_114;
    local_124 = local_114 * local_124;
  }
  puVar9 = &local_110;
  pfVar8 = &local_70;
  D3DXVec3TransformNormal(&local_d0,pfVar8,puVar9);
  local_ec = local_ec + local_dc;
  local_e8 = local_d8 + local_e8;
  local_e4 = local_d4 + local_e4;
  D3DXMatrixMultiply(auStack_11c,param_1 + 0x200,auStack_11c);
  local_f8 = local_f8 + (float)pfVar8;
  local_f4 = (float)puVar9 + local_f4;
  local_f0 = unaff_EDI + local_f0;
  afStack_c8[0xe] = 0.0;
  afStack_c8[0xd] = 0.0;
  afStack_c8[0xc] = 0.0;
  afStack_c8[0xb] = 0.0;
  afStack_c8[9] = 0.0;
  afStack_c8[8] = 0.0;
  afStack_c8[7] = 0.0;
  afStack_c8[6] = 0.0;
  afStack_c8[4] = 0.0;
  afStack_c8[3] = 0.0;
  afStack_c8[2] = 0.0;
  afStack_c8[1] = 0.0;
  afStack_c8[0xf] = 1.0;
  afStack_c8[10] = 1.0;
  afStack_c8[5] = 1.0;
  afStack_c8[0] = 1.0;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(&local_68,*(undefined4 *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_68,*(undefined4 *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX(&local_68,*(undefined4 *)(param_1 + 0x1c0));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  D3DXMatrixMultiply(&local_128,afStack_c8,&local_128);
  iVar2 = *param_2;
  uStack_80 = *(undefined4 *)(iVar2 + 0x74);
  uStack_7c = *(undefined4 *)(iVar2 + 0x78);
  uStack_84 = *(undefined4 *)(iVar2 + 0x70);
  FUN_00ddd140(auStack_74,&uStack_84);
  D3DXMatrixMultiply(auStack_134,auStack_74,auStack_134);
  local_f0 = (float)param_2[1] - 0.5;
  local_ec = (float)param_2[2] - 0.5;
  local_e8 = (float)param_2[3] - 0.5;
  D3DXVec3TransformNormal(&local_100,&local_f0,&stack0xfffffec0);
  local_e0 = local_e0 + local_d0;
  local_dc = fStack_cc + local_dc;
  local_d8 = afStack_c8[0] + local_d8;
  FID_conflict__memcpy((void *)(*param_2 + 0x10),&local_110,0x40);
LAB_009ef7a0:
  fVar6 = (float10)1;
  iVar2 = param_2[6];
  iVar3 = param_2[5];
  *(float *)(param_1 + 0x124) = (float)fVar6;
  iVar4 = *(int *)(iVar3 + 4);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar6 = (float10)FUN_00edbf30(iVar2 + 0x40,param_1 + 400,*(undefined4 *)(iVar4 + 0xc),
                                  *(undefined4 *)(iVar4 + 0x10));
  }
  fVar7 = (float10)1;
  *(float *)(param_1 + 0x124) = (float)((float10)*(float *)(param_1 + 0x124) * fVar6);
  iVar3 = *(int *)(iVar3 + 4);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar7 = (float10)FUN_00edc040(iVar2 + 0x40,param_1 + 400,*(undefined4 *)(iVar3 + 0x60),
                                  *(undefined4 *)(iVar3 + 100));
  }
  fVar7 = (float10)*(float *)(param_1 + 0x124) * fVar7;
  *(float *)(param_1 + 0x124) = (float)fVar7;
  fVar6 = (float10)1;
  if (((*(byte *)(param_1 + 0x30) & 0x10) != 0) &&
     (fVar6 = (float10)0, (float10)0 != (float10)*(float *)(param_1 + 0x90))) {
    fVar6 = (float10)*(float *)(param_1 + 0x9c) / (float10)*(float *)(param_1 + 0x90);
  }
  fVar7 = fVar7 * fVar6;
  *(float *)(param_1 + 0x124) = (float)fVar7;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = (float)(fVar7 * (float10)*(float *)(param_1 + 0x128));
  }
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  if ((*(byte *)(param_1 + 0x49c) & 0x40) == 0) {
    FUN_009de210(param_3);
    FUN_009ed0b0(param_3);
  }
  switchD_0080dbae::default();
  uVar5 = *(uint *)(*(int *)(param_3 + 0x54) + 0x3c);
  if (((uVar5 >> 0x14 & 1) != 0) || ((uVar5 >> 0x11 & 1) != 0)) {
    FUN_00efda00(*(int *)(param_3 + 0x58) + 0x10,*(undefined4 *)(param_3 + 100),
                 *(undefined4 *)(param_3 + 0x60));
    FUN_00efde00(*(int *)(param_3 + 0x58) + 0x10,*(undefined4 *)(param_3 + 100),
                 *(undefined4 *)(param_3 + 0x60));
  }
  iVar2 = *(int *)(param_3 + 0x54);
  if ((((*(byte *)(iVar2 + 0x3c) & 8) != 0) && (*(int *)(iVar2 + 0x120) == 0)) &&
     (*(char *)(*(int *)(param_3 + 0x58) + 0x470) != '\0')) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x80000000;
  }
  return;
}

// 009F01E0  ModelShaderJackModule::updateModule_3  size=1624  [class]
void __thiscall ModelShaderJackModule::updateModule_3(int param_1,int *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined1 auStack_134 [4];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 auStack_11c [8];
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
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
  float fStack_cc;
  float afStack_c8 [17];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_74 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  FUN_00f0b530(param_2[4]);
  FUN_00efd260(param_2[4]);
  if (*(int *)(param_1 + 0x500) == 2) {
    FUN_009d0a90();
  }
  else if (*(int *)(param_1 + 0x500) == 3) {
    FUN_009e4470();
  }
  FUN_009ebcc0(param_2);
  fVar1 = 0.0;
  if (*(int *)(param_1 + 0x500) != 4) goto LAB_009f0640;
  local_d8 = 0.0;
  local_dc = 0.0;
  local_e0 = 0.0;
  local_e4 = 0.0;
  local_ec = 0.0;
  local_f0 = 0.0;
  local_f4 = 0.0;
  local_f8 = 0.0;
  local_100 = 0;
  local_104 = 0;
  local_108 = 0;
  local_10c = 0;
  local_d4 = 1.0;
  local_e8 = 1.0;
  local_fc = 0x3f800000;
  local_110 = 0x3f800000;
  if (*(int *)(param_1 + 0x50) == 0) {
    afStack_c8[3] = 0.0;
    local_68 = fVar1;
    local_70 = fVar1;
  }
  else {
    iVar2 = *(int *)param_2[4];
    afStack_c8[3] = *(float *)(iVar2 + 0x34);
    fVar1 = *(float *)(iVar2 + 0x3c);
    local_68 = *(float *)(iVar2 + 0x38);
    local_70 = *(float *)(iVar2 + 0x30);
  }
  local_70 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180) + local_70;
  local_6c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184) + afStack_c8[3];
  local_68 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188) + local_68;
  local_64 = fVar1 + *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_114 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar2 = param_2[6];
  if (local_114 == 0.0) {
LAB_009f0399:
    local_130 = 0.0;
    local_12c = 0.0;
    local_128 = 0.0;
    local_124 = 1.0;
  }
  else {
    local_130 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 400);
    local_12c = *(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x194);
    local_128 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x198);
    local_124 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_130 == 0.0) && (local_12c == 0.0)) && (local_128 == 0.0)) goto LAB_009f0399;
    FUN_00ddf460(&local_130,&local_130);
    local_130 = local_130 * local_114;
    local_12c = local_12c * local_114;
    local_128 = local_128 * local_114;
    local_124 = local_114 * local_124;
  }
  puVar9 = &local_110;
  pfVar8 = &local_70;
  D3DXVec3TransformNormal(&local_d0,pfVar8,puVar9);
  local_ec = local_ec + local_dc;
  local_e8 = local_d8 + local_e8;
  local_e4 = local_d4 + local_e4;
  D3DXMatrixMultiply(auStack_11c,param_1 + 0x200,auStack_11c);
  local_f8 = local_f8 + (float)pfVar8;
  local_f4 = (float)puVar9 + local_f4;
  local_f0 = unaff_EDI + local_f0;
  afStack_c8[0xe] = 0.0;
  afStack_c8[0xd] = 0.0;
  afStack_c8[0xc] = 0.0;
  afStack_c8[0xb] = 0.0;
  afStack_c8[9] = 0.0;
  afStack_c8[8] = 0.0;
  afStack_c8[7] = 0.0;
  afStack_c8[6] = 0.0;
  afStack_c8[4] = 0.0;
  afStack_c8[3] = 0.0;
  afStack_c8[2] = 0.0;
  afStack_c8[1] = 0.0;
  afStack_c8[0xf] = 1.0;
  afStack_c8[10] = 1.0;
  afStack_c8[5] = 1.0;
  afStack_c8[0] = 1.0;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(&local_68,*(undefined4 *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(&local_68,*(undefined4 *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX(&local_68,*(undefined4 *)(param_1 + 0x1c0));
    D3DXMatrixMultiply(&local_d0,&local_70,&local_d0);
  }
  D3DXMatrixMultiply(&local_128,afStack_c8,&local_128);
  iVar2 = *param_2;
  uStack_80 = *(undefined4 *)(iVar2 + 0x74);
  uStack_7c = *(undefined4 *)(iVar2 + 0x78);
  uStack_84 = *(undefined4 *)(iVar2 + 0x70);
  FUN_00ddd140(auStack_74,&uStack_84);
  D3DXMatrixMultiply(auStack_134,auStack_74,auStack_134);
  local_f0 = (float)param_2[1] - 0.5;
  local_ec = (float)param_2[2] - 0.5;
  local_e8 = (float)param_2[3] - 0.5;
  D3DXVec3TransformNormal(&local_100,&local_f0,&stack0xfffffec0);
  local_e0 = local_e0 + local_d0;
  local_dc = fStack_cc + local_dc;
  local_d8 = afStack_c8[0] + local_d8;
  FID_conflict__memcpy((void *)(*param_2 + 0x10),&local_110,0x40);
LAB_009f0640:
  fVar6 = (float10)1;
  iVar2 = param_2[6];
  iVar3 = param_2[5];
  *(float *)(param_1 + 0x124) = (float)fVar6;
  iVar4 = *(int *)(iVar3 + 4);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar6 = (float10)FUN_00edbf30(iVar2 + 0x40,param_1 + 400,*(undefined4 *)(iVar4 + 0xc),
                                  *(undefined4 *)(iVar4 + 0x10));
  }
  fVar7 = (float10)1;
  *(float *)(param_1 + 0x124) = (float)((float10)*(float *)(param_1 + 0x124) * fVar6);
  iVar3 = *(int *)(iVar3 + 4);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar7 = (float10)FUN_00edc040(iVar2 + 0x40,param_1 + 400,*(undefined4 *)(iVar3 + 0x60),
                                  *(undefined4 *)(iVar3 + 100));
  }
  fVar7 = (float10)*(float *)(param_1 + 0x124) * fVar7;
  *(float *)(param_1 + 0x124) = (float)fVar7;
  fVar6 = (float10)1;
  if (((*(byte *)(param_1 + 0x30) & 0x10) != 0) &&
     (fVar6 = (float10)0, (float10)0 != (float10)*(float *)(param_1 + 0x90))) {
    fVar6 = (float10)*(float *)(param_1 + 0x9c) / (float10)*(float *)(param_1 + 0x90);
  }
  fVar7 = fVar7 * fVar6;
  *(float *)(param_1 + 0x124) = (float)fVar7;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = (float)(fVar7 * (float10)*(float *)(param_1 + 0x128));
  }
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  if ((*(byte *)(param_1 + 0x49c) & 0x40) == 0) {
    FUN_009de210(param_3);
    FUN_009ed0b0(param_3);
  }
  switchD_0080dbae::default();
  uVar5 = *(uint *)(*(int *)(param_3 + 0x54) + 0x3c);
  if (((uVar5 >> 0x14 & 1) != 0) || ((uVar5 >> 0x11 & 1) != 0)) {
    FUN_00efda00(*(int *)(param_3 + 0x58) + 0x10,*(undefined4 *)(param_3 + 100),
                 *(undefined4 *)(param_3 + 0x60));
    FUN_00efde00(*(int *)(param_3 + 0x58) + 0x10,*(undefined4 *)(param_3 + 100),
                 *(undefined4 *)(param_3 + 0x60));
  }
  iVar2 = *(int *)(param_3 + 0x54);
  if ((((*(byte *)(iVar2 + 0x3c) & 8) != 0) && (*(int *)(iVar2 + 0x120) == 0)) &&
     (*(char *)(*(int *)(param_3 + 0x58) + 0x470) != '\0')) {
    *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x80000000;
  }
  return;
}

// 00ECD610  ModelShaderJackModule::ModelShaderJackModule  size=51  [class]
undefined4 * __fastcall ModelShaderJackModule::ModelShaderJackModule(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  FUN_009e6c70();
  FUN_009d2900();
  FUN_00a7c930();
  return param_1;
}

// 00ECD740  ModelShaderJackModule::vf00  size=54  [class]
undefined4 __thiscall ModelShaderJackModule::vf00(undefined4 param_1,byte param_2)

{
  FUN_009de370();
  Spline<float>::Spline<float>_2();
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF7B60  ModelShaderJackModule::vf18  size=72  [class]
bool __thiscall ModelShaderJackModule::vf18(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 100) != param_2) &&
      ((*(int **)(param_1 + 0x420) == (int *)0x0 ||
       (**(int **)(param_1 + 0x420) != *(int *)(param_2 + 8))))) &&
     ((*(int **)(param_1 + 0x424) == (int *)0x0 ||
      (**(int **)(param_1 + 0x424) != *(int *)(param_2 + 8))))) {
    iVar1 = FUN_009dcdc0(param_2);
    return iVar1 != 0;
  }
  return true;
}

// 00EF7BB0  ModelShaderJackModule::vf0C  size=32  [class]
void __fastcall ModelShaderJackModule::vf0C(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00EF7BD0  ModelShaderJackModule::updateModule_4  size=655  [class]
void __fastcall ModelShaderJackModule::updateModule_4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = FUN_00a7c930();
    iVar1 = FUN_00a7c9b0(uVar2);
    if (iVar1 == 0) {
      puVar5 = &DAT_016de780;
    }
    else {
      puVar5 = &DAT_016de730;
    }
    FUN_009cca90(param_1,puVar5);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  iVar3 = FUN_00a7c800();
  if (iVar3 == 0) {
    FUN_009cca90(param_1,&DAT_016de7a0,iVar1);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  if (*(int *)(param_1 + 0x4bc) != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 == 0) {
      FUN_009cca90(param_1,"ModelShaderJackModule::updateModule: pAnimationUnit == NULL [ef%04x]",
                   *(undefined4 *)(*(int *)(param_1 + 0x4b0) + 4));
    }
    else {
      if ((*(byte *)(iVar3 + 0xa2) & 4) == 0) {
        fVar4 = (float10)FUN_00fdef70();
      }
      else {
        FUN_00fdef70();
        FUN_00fdef70();
        FUN_00fdef70();
        fVar4 = (float10)FUN_00fdef70();
      }
      FUN_00a7c740((float)fVar4);
      FUN_00e3e620();
      FUN_00e3f050();
    }
  }
  FUN_009f0fc0();
  FUN_009e7660();
  return;
}

// 00EF81E0  ModelShaderJackModule::updateModule_5  size=655  [class]
void __fastcall ModelShaderJackModule::updateModule_5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = FUN_00a7c930();
    iVar1 = FUN_00a7c9b0(uVar2);
    if (iVar1 == 0) {
      puVar5 = &DAT_016de8d4;
    }
    else {
      puVar5 = &DAT_016dea00;
    }
    FUN_009cca90(param_1,puVar5);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  iVar3 = FUN_00a7c800();
  if (iVar3 == 0) {
    FUN_009cca90(param_1,&DAT_016dea50,iVar1);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  if (*(int *)(param_1 + 0x4cc) != 0) {
    iVar1 = FUN_00a7c890();
    if (iVar1 == 0) {
      FUN_009cca90(param_1,"ModelShaderJackModule::updateModule: pAnimationUnit == NULL [ef%04x]",
                   *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 4));
    }
    else {
      if ((*(byte *)(iVar3 + 0xa2) & 4) == 0) {
        fVar4 = (float10)FUN_00fdef70();
      }
      else {
        FUN_00fdef70();
        FUN_00fdef70();
        FUN_00fdef70();
        fVar4 = (float10)FUN_00fdef70();
      }
      FUN_00a7c740((float)fVar4);
      FUN_00e3e620();
      FUN_00e3f050();
    }
  }
  FUN_009f1060();
  FUN_009e7660();
  return;
}

// 00EF8470  FUN_00ef8470  size=83  [callgraph]
undefined4 __fastcall FUN_00ef8470(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (((*(byte *)(*(int *)(param_1 + 0x4b0) + 0x3c) & 8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x4b0) + 0x120) == 0)) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c800();
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x470) != '\0')) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x4b0) + 0x30);
        *puVar1 = *puVar1 | 0x80000000;
        return 0;
      }
    }
  }
  return 1;
}

// 00EF84D0  FUN_00ef84d0  size=276  [callgraph]
undefined4 __fastcall FUN_00ef84d0(int param_1)

{
  char cVar1;
  short sVar2;
  float fVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  sVar2 = *(short *)(param_1 + 0x4c);
  if (sVar2 == 4) {
    return 1;
  }
  if (sVar2 == 0xf) {
    return 1;
  }
  if (sVar2 == 0x10) {
    return 1;
  }
  if (sVar2 == 0x5d) {
    return 1;
  }
  if (uVar7 == 0) {
    return 1;
  }
  if (*(char *)(uVar7 + 0x10) != '\0') {
    *(char *)(param_1 + 0x4d4) = (*(char *)(uVar7 + 0x10) < '\x01') + '\x01';
  }
  *(short *)(param_1 + 0x4d2) = (short)*(char *)(uVar7 + 0x11);
  fVar3 = (float)(int)*(char *)(uVar7 + 0x12) * 0.01;
  *(float *)(param_1 + 0x4c8) = fVar3;
  if (fVar3 == 0.0) {
    *(undefined4 *)(param_1 + 0x4c8) = 0x3f800000;
  }
  cVar1 = *(char *)(uVar7 + 0x10);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) goto LAB_00ef85bb;
    iVar6 = -(int)cVar1;
  }
  else {
    iVar6 = (int)cVar1;
  }
  *(float *)(param_1 + 0x4c8) = (float)iVar6 * *(float *)(param_1 + 0x4c8);
LAB_00ef85bb:
  if (*(char *)(param_1 + 0x4d4) < '\x03') {
    return 1;
  }
  FUN_009cca90(param_1,&DAT_016dead0,(int)*(char *)(param_1 + 0x4d4));
  return 0;
}

// 00EF85F0  FUN_00ef85f0  size=375  [callgraph]
undefined4 __fastcall FUN_00ef85f0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(short *)(param_1 + 0x4c) == 0x17) || (*(char *)(param_1 + 0x4d4) == '\0')) {
    return 1;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_00a7c800();
  *(int *)(iVar3 + 0x4b0) = *(int *)(*(int *)(param_1 + 0x4c0) + 4) + 0x50000;
  sVar1 = *(short *)(param_1 + 0x4d2);
  iVar3 = *(int *)(param_1 + 0x4c0);
  if (0x1f < sVar1) {
    FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
  }
  iVar3 = *(int *)(iVar3 + 0x20 + sVar1 * 4);
  if (iVar3 == 0) {
    FUN_009cca90(param_1,&DAT_016deb28);
    return 0;
  }
  iVar4 = FUN_00a7c890();
  if (iVar4 == 0) {
    iVar4 = Entity::createAnimation();
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_016deb50,*(undefined4 *)(*(int *)(param_1 + 0x4c0) + 4));
      return 0;
    }
    FUN_00a7c890();
  }
  FUN_00e2d720();
  iVar2 = FUN_00e3fb10(iVar2,*(int *)(param_1 + 0x4c0) + 8);
  if (iVar2 == 0) {
    FUN_009cca90(param_1,&DAT_016deba0,*(undefined4 *)(*(int *)(param_1 + 0x4c0) + 4));
    return 0;
  }
  FUN_00e26e50(1);
  sVar1 = *(short *)(param_1 + 0x4d2);
  if (0x1f < sVar1) {
    FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
  }
  Animation::Unit::setAnimation
            (iVar3,&DAT_018d7170 + sVar1 * 8,0,0,0x3f800000,0,0xbf800000,
             *(undefined4 *)(param_1 + 0x4c8));
  return 1;
}

// 00EF8770  FUN_00ef8770  size=1886  [callgraph]
void FUN_00ef8770(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 auStack_a4 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_a4;
  puVar2 = *(uint **)(param_2[1] + 4);
  if ((*(uint *)*param_2 & 0x4000) == 0) goto LAB_00ef8e70;
  local_98 = (float)param_2[5] + 1.0;
  if (local_98 <= 0.0001) {
    local_98 = 0.0001;
  }
  fVar1 = (float)(int)puVar2[0x1f];
  if ((int)puVar2[0x1f] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (fVar1 <= local_98) {
    pfVar4 = (float *)param_2[2];
    local_a0 = (float)param_2[6];
    local_80 = local_a0 * *pfVar4;
    local_7c = pfVar4[1] * local_a0;
    local_78 = pfVar4[2] * local_a0;
    local_74 = local_a0 * pfVar4[3];
    if ((float)puVar2[0x5e] == 0.0) {
      pfVar4 = (float *)param_1[1];
      *pfVar4 = *pfVar4 + local_80;
      pfVar4[1] = pfVar4[1] + local_7c;
      pfVar4[2] = pfVar4[2] + local_78;
      pfVar4[3] = pfVar4[3] + local_74;
    }
    else {
      fVar1 = (float)param_2[6];
      if (fVar1 == 1.0) {
        local_94 = (float)puVar2[0x5e];
      }
      else {
        local_a0 = (float)puVar2[0x5e];
        if (local_a0 < 2.0) {
          local_94 = local_a0 / ((fVar1 - local_a0 * fVar1) + local_a0);
        }
        else {
          fVar5 = (float10)FUN_00fdc1f0();
          local_94 = (float)fVar5;
        }
      }
      pfVar4 = (float *)param_1[1];
      local_a0 = local_94;
      local_90 = local_94 * local_80;
      local_8c = local_7c * local_94;
      local_88 = local_78 * local_94;
      local_84 = local_94 * local_74;
      *pfVar4 = *pfVar4 + local_90;
      pfVar4[1] = pfVar4[1] + local_8c;
      pfVar4[2] = pfVar4[2] + local_88;
      pfVar4[3] = pfVar4[3] + local_84;
    }
  }
  if ((float)puVar2[0xd] != 1.0) {
    if ((*puVar2 & 0x4000) == 0) {
      fVar1 = (float)param_2[6];
      if (fVar1 == 1.0) {
        local_a0 = (float)puVar2[0xd];
        local_9c = fVar1;
      }
      else {
        local_9c = (float)puVar2[0xd];
        if (local_9c < 2.0) {
          local_a0 = local_9c / ((fVar1 - local_9c * fVar1) + local_9c);
        }
        else {
          fVar5 = (float10)FUN_00fdc1f0();
          local_a0 = (float)fVar5;
          local_9c = local_a0;
        }
      }
      pfVar4 = (float *)param_1[1];
      *pfVar4 = local_a0 * *pfVar4;
      pfVar4[1] = local_a0 * pfVar4[1];
      pfVar4[2] = pfVar4[2] * local_a0;
      pfVar4[3] = local_a0 * pfVar4[3];
    }
    else {
      pfVar4 = (float *)param_1[1];
      fVar1 = pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1];
      local_94 = 0.0;
      if (fVar1 != 0.0) {
        local_94 = *(float *)(param_2[1] + 4);
        local_a0 = *(float *)((int)local_94 + 0x16c) * *(float *)((int)local_94 + 0x16c);
        if (local_a0 <= fVar1) {
          fVar5 = (float10)FUN_00fdef70();
          local_94 = (float)fVar5 * 10.0 - *(float *)((int)local_94 + 0x16c);
          if (1.0 < local_94) {
            local_94 = 1.0;
          }
        }
        else {
          local_94 = 1.0;
          local_a0 = pfVar4[2] * pfVar4[2] + *pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1];
          if (local_a0 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_90 = 0.0;
            local_8c = 1.0;
            local_88 = 0.0;
          }
          else {
            FUN_00ddf460(&local_90,pfVar4);
          }
          fVar1 = *(float *)(*(int *)(param_2[1] + 4) + 0x16c);
          pfVar4 = (float *)param_1[1];
          *pfVar4 = fVar1 * local_90;
          pfVar4[1] = local_8c * fVar1;
          pfVar4[2] = local_88 * fVar1;
          pfVar4[3] = fVar1 * local_84;
        }
      }
      local_9c = 1.0 - local_94;
      fVar1 = (float)param_2[6];
      if (fVar1 == 1.0) {
        local_a0 = (float)puVar2[0xd];
      }
      else {
        local_a0 = (float)puVar2[0xd];
        if (local_a0 < 2.0) {
          local_a0 = local_a0 / ((fVar1 - local_a0 * fVar1) + local_a0);
        }
        else {
          fVar5 = (float10)FUN_00fdc1f0();
          local_a0 = (float)fVar5;
        }
      }
      pfVar4 = (float *)param_1[1];
      local_9c = local_a0 * local_94 + local_9c;
      *pfVar4 = local_9c * *pfVar4;
      pfVar4[1] = pfVar4[1] * local_9c;
      pfVar4[2] = local_9c * pfVar4[2];
      pfVar4[3] = local_9c * pfVar4[3];
    }
  }
  fVar1 = (float)(int)puVar2[0x1f];
  if ((int)puVar2[0x1f] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (((fVar1 <= local_98) && ((*puVar2 & 0x40000) != 0)) && ((*(byte *)*param_2 & 0x40) == 0)) {
    if (param_2[4] == 0) {
      FUN_00ecbf60(&local_80,param_2[6]);
      if ((float)puVar2[0x5e] == 0.0) goto LAB_00ef8df0;
      fVar1 = (float)param_2[6];
      if (fVar1 == 1.0) {
        local_98 = (float)puVar2[0x5e];
      }
      else {
        local_9c = (float)puVar2[0x5e];
        if (local_9c < 2.0) {
          local_98 = local_9c / ((fVar1 - local_9c * fVar1) + local_9c);
        }
        else {
          fVar5 = (float10)FUN_00fdc1f0();
          local_98 = (float)fVar5;
        }
      }
LAB_00ef8ce9:
      pfVar4 = (float *)param_1[1];
      *pfVar4 = local_98 * local_80 + *pfVar4;
      pfVar4[1] = pfVar4[1] + local_7c * local_98;
      pfVar4[2] = pfVar4[2] + local_78 * local_98;
      fVar1 = pfVar4[3] + local_98 * local_74;
    }
    else {
      D3DXMatrixInverse(local_60,0,*(undefined4 *)param_2[1]);
      D3DXVec3TransformNormal(&local_7c,param_2[3],auStack_6c);
      FUN_00ecbf60(&local_80,param_2[6]);
      if ((float)puVar2[0x5e] != 0.0) {
        fVar1 = (float)param_2[6];
        if (fVar1 == 1.0) {
          local_98 = (float)puVar2[0x5e];
        }
        else {
          local_9c = (float)puVar2[0x5e];
          if (local_9c < 2.0) {
            local_98 = local_9c / ((fVar1 - local_9c * fVar1) + local_9c);
          }
          else {
            fVar5 = (float10)FUN_00fdc1f0();
            local_98 = (float)fVar5;
          }
        }
        goto LAB_00ef8ce9;
      }
LAB_00ef8df0:
      pfVar4 = (float *)param_1[1];
      *pfVar4 = local_80 + *pfVar4;
      pfVar4[1] = pfVar4[1] + local_7c;
      pfVar4[2] = pfVar4[2] + local_78;
      fVar1 = pfVar4[3] + local_74;
    }
    pfVar4[3] = fVar1;
  }
  local_9c = (float)param_2[6];
  pfVar4 = (float *)param_1[1];
  pfVar3 = (float *)*param_1;
  local_90 = local_9c * *pfVar4;
  local_8c = pfVar4[1] * local_9c;
  local_88 = pfVar4[2] * local_9c;
  local_84 = local_9c * pfVar4[3];
  *pfVar3 = local_90 + *pfVar3;
  pfVar3[1] = pfVar3[1] + local_8c;
  pfVar3[2] = pfVar3[2] + local_88;
  pfVar3[3] = pfVar3[3] + local_84;
LAB_00ef8e70:
  if ((((*puVar2 & 0x1000000) != 0) && ((int *)param_1[2] != (int *)0x0)) &&
     (local_98 = (float)param_2[6], *(int *)param_1[2] != 0)) {
    FUN_00f3fd00(local_98);
    FUN_00f3fd00(local_98);
    FUN_00f3fd00(local_98);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_a4);
  return;
}

// 00EF8ED0  FUN_00ef8ed0  size=2051  [callgraph]
void __thiscall FUN_00ef8ed0(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  float fVar5;
  float10 fVar6;
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [4];
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_6c [8];
  undefined4 *local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  puVar4 = (uint *)param_2[1];
  local_64 = param_2;
  if ((*(uint *)(param_1 + 0x30) & 0x4000) == 0) goto LAB_00ef966a;
  local_a4 = *(float *)(param_1 + 0x118) + 1.0;
  if (local_a4 <= 0.0001) {
    local_a4 = 0.0001;
  }
  fVar2 = (float)(int)puVar4[0x1f];
  if ((int)puVar4[0x1f] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (fVar2 <= local_a4) {
    local_a8 = *(float *)(param_1 + 0x110);
    fVar2 = local_a8 * *(float *)(param_1 + 0x160);
    fVar3 = *(float *)(param_1 + 0x164) * local_a8;
    local_a0 = (double)CONCAT44(fVar3,fVar2);
    local_98 = *(float *)(param_1 + 0x168) * local_a8;
    fVar5 = local_a8 * *(float *)(param_1 + 0x16c);
    local_94 = fVar5;
    if ((float)puVar4[0x5e] == 0.0) {
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + fVar2;
      *(float *)(param_1 + 0x154) = fVar3 + *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_98 + *(float *)(param_1 + 0x158);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x110);
      if (fVar2 == 1.0) {
        local_84 = (float)puVar4[0x5e];
      }
      else {
        local_a8 = (float)puVar4[0x5e];
        if (local_a8 < 2.0) {
          local_84 = local_a8 / ((fVar2 - local_a8 * fVar2) + local_a8);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_84 = (float)fVar6;
        }
      }
      local_a8 = local_84;
      local_80 = local_84 * (float)local_a0;
      local_7c = local_a0._4_4_ * local_84;
      local_78 = local_98 * local_84;
      fVar5 = local_84 * local_94;
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + local_80;
      *(float *)(param_1 + 0x154) = local_7c + *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_78 + *(float *)(param_1 + 0x158);
      local_74 = fVar5;
    }
    *(float *)(param_1 + 0x15c) = fVar5 + *(float *)(param_1 + 0x15c);
  }
  if ((float)puVar4[0xd] != 1.0) {
    if ((*puVar4 & 0x4000) == 0) {
      fVar2 = *(float *)(param_1 + 0x110);
      local_a0 = (double)CONCAT44(local_a0._4_4_,fVar2);
      if (fVar2 == 1.0) {
        local_a8 = (float)puVar4[0xd];
      }
      else {
        fVar3 = (float)puVar4[0xd];
        local_a0 = (double)CONCAT44(local_a0._4_4_,fVar3);
        if (fVar3 < 2.0) {
          local_a8 = fVar3 / ((fVar2 - fVar3 * fVar2) + fVar3);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_a8 = (float)fVar6;
          local_a0 = (double)CONCAT44(local_a0._4_4_,local_a8);
        }
      }
      *(float *)(param_1 + 0x150) = local_a8 * *(float *)(param_1 + 0x150);
      *(float *)(param_1 + 0x154) = local_a8 * *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_a8 * *(float *)(param_1 + 0x158);
      *(float *)(param_1 + 0x15c) = local_a8 * *(float *)(param_1 + 0x15c);
    }
    else {
      pfVar1 = (float *)(param_1 + 0x150);
      fVar2 = *pfVar1 * *pfVar1;
      local_a0 = (double)fVar2;
      local_a8 = *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) + fVar2 +
                 *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158);
      fVar6 = (float10)FUN_00fdef70();
      fVar2 = (float)fVar6;
      local_84 = 0.0;
      if (fVar2 != 0.0) {
        if ((float)puVar4[0x5b] <= fVar2) {
          local_84 = fVar2 * 10.0 - (float)puVar4[0x5b];
          if (1.0 < local_84) {
            local_84 = 1.0;
          }
        }
        else {
          local_84 = 1.0;
          local_a8 = *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) + (float)local_a0 +
                     *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158);
          if (local_a8 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_80 = 0.0;
            local_7c = 1.0;
            local_78 = 0.0;
          }
          else {
            FUN_00ddf460(&local_80,pfVar1);
          }
          fVar2 = *(float *)(local_64[1] + 0x16c);
          local_a0 = (double)CONCAT44(local_7c * fVar2,fVar2 * local_80);
          local_98 = local_78 * fVar2;
          local_94 = fVar2 * local_74;
          *pfVar1 = fVar2 * local_80;
          *(float *)(param_1 + 0x154) = local_7c * fVar2;
          *(float *)(param_1 + 0x158) = local_98;
          *(float *)(param_1 + 0x15c) = local_94;
        }
      }
      fVar3 = 1.0 - local_84;
      fVar2 = *(float *)(param_1 + 0x110);
      local_a0._0_4_ = fVar3;
      if (fVar2 == 1.0) {
        local_a8 = (float)puVar4[0xd];
      }
      else {
        local_a8 = (float)puVar4[0xd];
        if (local_a8 < 2.0) {
          local_a8 = local_a8 / ((fVar2 - local_a8 * fVar2) + local_a8);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_a8 = (float)fVar6;
        }
      }
      local_a0._0_4_ = local_a8 * local_84 + (float)local_a0;
      *pfVar1 = (float)local_a0 * *pfVar1;
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) * (float)local_a0;
      *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) * (float)local_a0;
      *(float *)(param_1 + 0x15c) = (float)local_a0 * *(float *)(param_1 + 0x15c);
      param_2 = local_64;
    }
  }
  fVar2 = (float)(int)puVar4[0x1f];
  if ((int)puVar4[0x1f] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (((fVar2 <= local_a4) && ((*puVar4 & 0x40000) != 0)) &&
     ((*(byte *)(param_1 + 0x30) & 0x40) == 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_00ecbf60(&local_80,*(undefined4 *)(param_1 + 0x110));
      if ((float)puVar4[0x5e] == 0.0) goto LAB_00ef95ae;
      fVar2 = *(float *)(param_1 + 0x110);
      if (fVar2 == 1.0) {
        local_a4 = (float)puVar4[0x5e];
      }
      else {
        fVar3 = (float)puVar4[0x5e];
        local_a0 = (double)CONCAT44(local_a0._4_4_,fVar3);
        if (fVar3 < 2.0) {
          local_a4 = fVar3 / ((fVar2 - fVar3 * fVar2) + fVar3);
        }
        else {
          fVar6 = (float10)FUN_00fdc1f0();
          local_a4 = (float)fVar6;
        }
      }
LAB_00ef9490:
      local_a0 = (double)CONCAT44(local_7c * local_a4,local_a4 * local_80);
      local_98 = local_78 * local_a4;
      local_74 = local_a4 * local_74;
      *(float *)(param_1 + 0x150) = local_a4 * local_80 + *(float *)(param_1 + 0x150);
      *(float *)(param_1 + 0x154) = local_7c * local_a4 + *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_98 + *(float *)(param_1 + 0x158);
      local_94 = local_74;
    }
    else {
      D3DXMatrixInverse(local_60,0,*param_2);
      D3DXVec3TransformNormal(auStack_ac,param_1 + 0x140,auStack_6c);
      FUN_00ecbf60(&local_80,*(undefined4 *)(param_1 + 0x110));
      if ((float)puVar4[0x5e] != 0.0) {
        fVar2 = *(float *)(param_1 + 0x110);
        if (fVar2 == 1.0) {
          local_a4 = (float)puVar4[0x5e];
        }
        else {
          fVar3 = (float)puVar4[0x5e];
          local_a0 = (double)CONCAT44(local_a0._4_4_,fVar3);
          if (fVar3 < 2.0) {
            local_a4 = fVar3 / ((fVar2 - fVar3 * fVar2) + fVar3);
          }
          else {
            fVar6 = (float10)FUN_00fdc1f0();
            local_a4 = (float)fVar6;
          }
        }
        goto LAB_00ef9490;
      }
LAB_00ef95ae:
      *(float *)(param_1 + 0x150) = local_80 + *(float *)(param_1 + 0x150);
      *(float *)(param_1 + 0x154) = local_7c + *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_78 + *(float *)(param_1 + 0x158);
    }
    *(float *)(param_1 + 0x15c) = local_74 + *(float *)(param_1 + 0x15c);
  }
  local_74 = *(float *)(param_1 + 0x110);
  local_a0 = (double)CONCAT44(local_a0._4_4_,local_74);
  local_80 = local_74 * *(float *)(param_1 + 0x150);
  local_7c = *(float *)(param_1 + 0x154) * local_74;
  local_78 = *(float *)(param_1 + 0x158) * local_74;
  local_74 = local_74 * *(float *)(param_1 + 0x15c);
  *(float *)(param_1 + 0x180) = local_80 + *(float *)(param_1 + 0x180);
  *(float *)(param_1 + 0x184) = local_7c + *(float *)(param_1 + 0x184);
  *(float *)(param_1 + 0x188) = local_78 + *(float *)(param_1 + 0x188);
  *(float *)(param_1 + 0x18c) = local_74 + *(float *)(param_1 + 0x18c);
LAB_00ef966a:
  if (((*puVar4 & 0x1000000) != 0) &&
     (local_a4 = *(float *)(param_1 + 0x110), *(int *)(param_1 + 0x2d0) != 0)) {
    FUN_00f3fd00(local_a4);
    FUN_00f3fd00(local_a4);
    FUN_00f3fd00(local_a4);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00EF96E0  FUN_00ef96e0  size=366  [callgraph]
void FUN_00ef96e0(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  
  puVar6 = *(uint **)(*(int *)(param_2 + 4) + 4);
  if ((*puVar6 & 0x10000000) != 0) {
    if ((float)puVar6[0x1d] != 1.0) {
      fVar1 = *(float *)(param_2 + 8);
      if (fVar1 == 1.0) {
        fVar2 = (float)puVar6[0x1d];
      }
      else {
        fVar2 = (float)puVar6[0x1d];
        if (fVar2 < 2.0) {
          fVar2 = fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2);
        }
        else {
          fVar9 = (float10)FUN_00fdc1f0();
          fVar2 = (float)fVar9;
        }
      }
      pfVar7 = (float *)param_1[1];
      *pfVar7 = fVar2 * *pfVar7;
      pfVar7[1] = pfVar7[1] * fVar2;
      pfVar7[2] = pfVar7[2] * fVar2;
      pfVar7[3] = fVar2 * pfVar7[3];
    }
    pfVar7 = (float *)param_1[1];
    fVar1 = *(float *)(param_2 + 8);
    pfVar8 = (float *)*param_1;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    fVar4 = pfVar7[3];
    *pfVar8 = *pfVar8 + fVar1 * *pfVar7;
    pfVar8[1] = pfVar8[1] + fVar2 * fVar1;
    pfVar8[2] = pfVar8[2] + fVar3 * fVar1;
    pfVar8[3] = pfVar8[3] + fVar1 * fVar4;
  }
  if ((((*puVar6 & 0x800000) != 0) && ((int *)param_1[2] != (int *)0x0)) &&
     (uVar5 = *(undefined4 *)(param_2 + 8), *(int *)param_1[2] != 0)) {
    FUN_00f3fd00(uVar5);
    FUN_00f3fd00(uVar5);
    FUN_00f3fd00(uVar5);
  }
  return;
}

// 00EF9850  FUN_00ef9850  size=434  [callgraph]
void __thiscall FUN_00ef9850(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint *puVar4;
  float10 fVar5;
  
  puVar4 = *(uint **)(param_2 + 4);
  if ((*puVar4 & 0x10000000) != 0) {
    if ((float)puVar4[0x1d] != 1.0) {
      fVar1 = *(float *)(param_1 + 0x110);
      if (fVar1 == 1.0) {
        fVar2 = (float)puVar4[0x1d];
      }
      else {
        fVar2 = (float)puVar4[0x1d];
        if (fVar2 < 2.0) {
          fVar2 = fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2);
        }
        else {
          fVar5 = (float10)FUN_00fdc1f0();
          fVar2 = (float)fVar5;
        }
      }
      *(float *)(param_1 + 0x1d0) = fVar2 * *(float *)(param_1 + 0x1d0);
      *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1d4) * fVar2;
      *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x1d8) * fVar2;
      *(float *)(param_1 + 0x1dc) = fVar2 * *(float *)(param_1 + 0x1dc);
    }
    fVar1 = *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x1b0) = fVar1 * *(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) + *(float *)(param_1 + 0x1d4) * fVar1;
    *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) + *(float *)(param_1 + 0x1d8) * fVar1;
    *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) + fVar1 * *(float *)(param_1 + 0x1dc);
  }
  if (((*puVar4 & 0x800000) != 0) &&
     (uVar3 = *(undefined4 *)(param_1 + 0x110), *(int *)(param_1 + 0x328) != 0)) {
    FUN_00f3fd00(uVar3);
    FUN_00f3fd00(uVar3);
    FUN_00f3fd00(uVar3);
  }
  return;
}

// 00EF9A10  FUN_00ef9a10  size=859  [callgraph]
undefined4 FUN_00ef9a10(undefined4 *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  
  piVar6 = param_2;
  iVar4 = *(int *)(param_2[1] + 4);
  fVar1 = (float)(int)*(short *)(iVar4 + 0xe8) + (float)(int)*(short *)(iVar4 + 0xea);
  fVar3 = (float)(int)*(short *)(iVar4 + 0x17c) + (float)(int)*(short *)(iVar4 + 0xea);
  if (((*(byte *)(*param_2 + 7) & 1) == 0) && ((*(uint *)*param_1 & 0x2000) == 0)) {
    if ((fVar1 < (float)param_2[3]) && (pfVar5 = (float *)param_1[2], *pfVar5 != 1.0)) {
      fVar1 = (float)param_2[4];
      if (fVar1 == 1.0) {
        param_2 = (int *)*pfVar5;
      }
      else {
        fVar2 = *pfVar5;
        if (fVar2 < 2.0) {
          param_2 = (int *)(fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2));
        }
        else {
          fVar7 = (float10)FUN_00fdc1f0();
          param_2 = (int *)(float)fVar7;
        }
      }
      *(float *)(param_1[1] + 0xc) = *(float *)(param_1[1] + 0xc) * (float)param_2;
    }
    if ((fVar3 < (float)piVar6[3]) && ((*(uint *)*param_1 & 0x800) == 0)) {
      if (*(float *)(iVar4 + 0xec) != 1.0) {
        fVar1 = (float)piVar6[4];
        if (fVar1 == 1.0) {
          param_2 = *(int **)(iVar4 + 0xec);
        }
        else {
          fVar3 = *(float *)(iVar4 + 0xec);
          if (fVar3 < 2.0) {
            param_2 = (int *)(fVar3 / ((fVar1 - fVar3 * fVar1) + fVar3));
          }
          else {
            fVar7 = (float10)FUN_00fdc1f0();
            param_2 = (int *)(float)fVar7;
          }
        }
        *(float *)param_1[1] = *(float *)param_1[1] * (float)param_2;
      }
      if (*(float *)(iVar4 + 0xf0) != 1.0) {
        fVar1 = (float)piVar6[4];
        if (fVar1 == 1.0) {
          param_2 = *(int **)(iVar4 + 0xf0);
        }
        else {
          fVar3 = *(float *)(iVar4 + 0xf0);
          if (fVar3 < 2.0) {
            param_2 = (int *)(fVar3 / ((fVar1 - fVar3 * fVar1) + fVar3));
          }
          else {
            fVar7 = (float10)FUN_00fdc1f0();
            param_2 = (int *)(float)fVar7;
          }
        }
        *(float *)(param_1[1] + 4) = (float)param_2 * *(float *)(param_1[1] + 4);
      }
      if (*(float *)(iVar4 + 0xf4) != 1.0) {
        fVar1 = (float)piVar6[4];
        if (fVar1 == 1.0) {
          *(float *)(param_1[1] + 8) = *(float *)(iVar4 + 0xf4) * *(float *)(param_1[1] + 8);
        }
        else {
          fVar3 = *(float *)(iVar4 + 0xf4);
          if (fVar3 < 2.0) {
            *(float *)(param_1[1] + 8) =
                 (fVar3 / ((fVar1 - fVar3 * fVar1) + fVar3)) * *(float *)(param_1[1] + 8);
          }
          else {
            fVar7 = (float10)FUN_00fdc1f0();
            *(float *)(param_1[1] + 8) = (float)fVar7 * *(float *)(param_1[1] + 8);
          }
        }
      }
    }
  }
  else {
    if (fVar1 < (float)param_2[3]) {
      *(float *)(param_1[1] + 0xc) = *(float *)param_1[2] * *(float *)(param_1[1] + 0xc);
    }
    if ((fVar3 < (float)param_2[3]) && ((*(uint *)*param_1 & 0x800) == 0)) {
      pfVar5 = (float *)param_1[1];
      *pfVar5 = *(float *)(iVar4 + 0xec) * *pfVar5;
      pfVar5[1] = *(float *)(iVar4 + 0xf0) * pfVar5[1];
      *(float *)(param_1[1] + 8) = *(float *)(iVar4 + 0xf4) * *(float *)(param_1[1] + 8);
    }
  }
  if (0.01 <= *(float *)(param_1[1] + 0xc)) {
    return 1;
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x80000000;
  return 0;
}

// 00EF9D70  FUN_00ef9d70  size=860  [callgraph]
undefined4 __thiscall FUN_00ef9d70(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)((int)param_2 + 4);
  fVar2 = (float)(int)*(short *)(iVar3 + 0x17c) + (float)(int)*(short *)(iVar3 + 0xea);
  fVar1 = (float)(int)*(short *)(iVar3 + 0xe8) + (float)(int)*(short *)(iVar3 + 0xea);
  if (((*(byte *)(param_1 + 0x3f) & 1) == 0) && ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    if (fVar1 < *(float *)(param_1 + 0x118)) {
      fVar1 = *(float *)(param_1 + 0x110);
      if (fVar1 == 1.0) {
        param_2 = *(float *)(param_1 + 0x270);
      }
      else {
        param_2 = *(float *)(param_1 + 0x270);
        if (param_2 < 2.0) {
          param_2 = param_2 / ((fVar1 - param_2 * fVar1) + param_2);
        }
        else {
          fVar4 = (float10)FUN_00fdc1f0();
          param_2 = (float)fVar4;
        }
      }
      *(float *)(param_1 + 0x25c) = param_2 * *(float *)(param_1 + 0x25c);
    }
    if ((fVar2 < *(float *)(param_1 + 0x118)) && ((*(uint *)(param_1 + 0x30) & 0x800) == 0)) {
      if (*(float *)(iVar3 + 0xec) != 1.0) {
        fVar2 = *(float *)(param_1 + 0x110);
        if (fVar2 == 1.0) {
          param_2 = *(float *)(iVar3 + 0xec);
        }
        else {
          param_2 = *(float *)(iVar3 + 0xec);
          if (param_2 < 2.0) {
            param_2 = param_2 / ((fVar2 - param_2 * fVar2) + param_2);
          }
          else {
            fVar4 = (float10)FUN_00fdc1f0();
            param_2 = (float)fVar4;
          }
        }
        *(float *)(param_1 + 0x250) = param_2 * *(float *)(param_1 + 0x250);
      }
      if (*(float *)(iVar3 + 0xf0) != 1.0) {
        fVar2 = *(float *)(param_1 + 0x110);
        if (fVar2 == 1.0) {
          param_2 = *(float *)(iVar3 + 0xf0);
        }
        else {
          param_2 = *(float *)(iVar3 + 0xf0);
          if (param_2 < 2.0) {
            param_2 = param_2 / ((fVar2 - param_2 * fVar2) + param_2);
          }
          else {
            fVar4 = (float10)FUN_00fdc1f0();
            param_2 = (float)fVar4;
          }
        }
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) * param_2;
      }
      if (*(float *)(iVar3 + 0xf4) != 1.0) {
        fVar2 = *(float *)(param_1 + 0x110);
        if (fVar2 == 1.0) {
          fVar1 = *(float *)(iVar3 + 0xf4);
        }
        else {
          fVar1 = *(float *)(iVar3 + 0xf4);
          if (fVar1 < 2.0) {
            fVar1 = fVar1 / ((fVar2 - fVar1 * fVar2) + fVar1);
          }
          else {
            fVar4 = (float10)FUN_00fdc1f0();
            fVar1 = (float)fVar4;
          }
        }
        *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * fVar1;
      }
    }
  }
  else {
    if (fVar1 < *(float *)(param_1 + 0x118)) {
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x25c);
    }
    if ((fVar2 < *(float *)(param_1 + 0x118)) && ((*(uint *)(param_1 + 0x30) & 0x800) == 0)) {
      *(float *)(param_1 + 0x250) = *(float *)(iVar3 + 0xec) * *(float *)(param_1 + 0x250);
      *(float *)(param_1 + 0x254) = *(float *)(iVar3 + 0xf0) * *(float *)(param_1 + 0x254);
      *(float *)(param_1 + 600) = *(float *)(iVar3 + 0xf4) * *(float *)(param_1 + 600);
    }
  }
  if (0.01 <= *(float *)(param_1 + 0x25c)) {
    return 1;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return 0;
}

// 00EFA0D0  FUN_00efa0d0  size=135  [callgraph]
void FUN_00efa0d0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(*(int *)(param_2 + 8) + 4);
  if ((*puVar2 & 0x8000000) != 0) {
    if ((char)puVar2[0x1e] == '\0') {
      FUN_00edb7a0(param_1,param_2);
    }
    else if ((char)puVar2[0x1e] == '\x01') {
      FUN_00ed4900(param_1,param_2);
    }
  }
  if ((((*puVar2 & 0x2000000) != 0) && (*(int **)(param_1 + 8) != (int *)0x0)) &&
     (uVar1 = *(undefined4 *)(param_2 + 0x10), **(int **)(param_1 + 8) != 0)) {
    FUN_00f3fd00(uVar1);
    FUN_00f3fd00(uVar1);
    FUN_00f3fd00(uVar1);
  }
  return;
}

// 00EFA160  FUN_00efa160  size=138  [callgraph]
void __thiscall FUN_00efa160(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_2 + 4);
  if ((*puVar2 & 0x8000000) != 0) {
    if ((char)puVar2[0x1e] == '\0') {
      FUN_00edba60(param_2);
    }
    else if ((char)puVar2[0x1e] == '\x01') {
      FUN_00ed4a90(param_2);
    }
  }
  if (((*puVar2 & 0x2000000) != 0) &&
     (uVar1 = *(undefined4 *)(param_1 + 0x110), *(int *)(param_1 + 0x278) != 0)) {
    FUN_00f3fd00(uVar1);
    FUN_00f3fd00(uVar1);
    FUN_00f3fd00(uVar1);
  }
  return;
}

// 00EFA1F0  FUN_00efa1f0  size=1313  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00efa1f0(undefined4 *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float10 fVar8;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  undefined4 local_14;
  
  pfVar7 = (float *)param_1[1];
  if ((param_3[0xe] != 0.0) &&
     (param_3[0xe] * param_3[0xe] <=
      (param_3[2] - pfVar7[2]) * (param_3[2] - pfVar7[2]) +
      (param_3[1] - pfVar7[1]) * (param_3[1] - pfVar7[1]) +
      (*param_3 - *pfVar7) * (*param_3 - *pfVar7))) {
    return;
  }
  fVar1 = *(float *)(*(int *)(*param_2 + 4) + 0x14c) * param_3[0xf];
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 1.0;
  switch(param_3[0x10]) {
  case 0.0:
  case 1.4013e-45:
    if (param_3[0xe] == 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 1.0 / param_3[0xe];
    }
    local_50 = (double)fVar2;
    fVar8 = (float10)FUN_00fdef70();
    fVar1 = (1.0 - (float)fVar8 * (float)local_50) * fVar1;
    local_40 = *param_3 - *pfVar7;
    local_3c = param_3[1] - pfVar7[1];
    local_38 = param_3[2] - pfVar7[2];
    local_34 = param_3[3] - pfVar7[3];
    fVar2 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    local_40 = fVar1 * local_40;
    local_3c = local_3c * fVar1;
    break;
  case 2.8026e-45:
    local_40 = fVar1 * param_3[4];
    local_3c = param_3[5] * fVar1;
    local_38 = param_3[6] * fVar1;
    local_34 = fVar1 * param_3[7];
    goto switchD_00efa2ae_default;
  case 4.2039e-45:
    if (param_3[0xe] == 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 1.0 / param_3[0xe];
    }
    local_50 = (double)fVar2;
    fVar8 = (float10)FUN_00fdef70();
    fVar2 = (float)local_50;
    local_40 = *param_3 - *pfVar7;
    local_3c = param_3[1] - pfVar7[1];
    local_38 = param_3[2] - pfVar7[2];
    local_34 = param_3[3] - pfVar7[3];
    fVar4 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    fVar4 = local_3c * 0.0 - local_38;
    fVar6 = local_38 * 0.0;
    fVar5 = local_40 * 0.0;
    local_38 = local_40 - local_3c * 0.0;
    fVar1 = _DAT_018d6fd8 * (1.0 - (float)fVar8 * fVar2) * fVar1;
    local_40 = fVar1 * fVar4;
    local_3c = (fVar6 - fVar5) * fVar1;
    break;
  default:
    goto switchD_00efa2ae_default;
  }
  local_38 = local_38 * fVar1;
  local_34 = fVar1 * local_34;
switchD_00efa2ae_default:
  if (param_3[0xd] == 0.0) {
    fVar1 = (float)param_2[2];
    if (param_3[0x10] == 4.2039e-45) {
      pfVar7 = (float *)param_1[1];
      fVar2 = *pfVar7;
    }
    else {
      pfVar7 = (float *)param_1[2];
      fVar2 = *pfVar7;
    }
    *pfVar7 = fVar2 + fVar1 * local_40;
    pfVar7[1] = pfVar7[1] + local_3c * fVar1;
    pfVar7[2] = pfVar7[2] + local_38 * fVar1;
    pfVar7[3] = pfVar7[3] + fVar1 * local_34;
  }
  if (param_3[0x11] != 0.0) {
    local_20 = (uint)*(byte *)(param_2 + 4);
    local_18 = param_3[0x11];
    local_24 = param_2[3];
    local_1c = (uint)*(byte *)((int)param_2 + 0x11);
    local_14 = 0;
    local_48 = param_1[5];
    local_44 = param_1[6];
    local_50 = (double)CONCAT44(param_1[4],*param_1);
    FUN_00edbd30(&local_50,&local_24);
  }
  iVar3 = param_1[3];
  if (((iVar3 != 0) &&
      (((param_3[0x12] != 0.0 || (param_3[0x13] != 0.0)) || (param_3[0x14] != 0.0)))) &&
     (*(float *)(iVar3 + 0x1c) == 0.0)) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x3c23d70a;
    *(float *)param_1[3] = param_3[8];
    *(float *)(param_1[3] + 4) = param_3[9];
    *(float *)(param_1[3] + 8) = param_3[10];
    *(float *)(param_1[3] + 0xc) = param_3[0xb];
    *(float *)(param_1[3] + 0x10) = param_3[0x12];
    *(float *)(param_1[3] + 0x14) = param_3[0x13];
    *(float *)(param_1[3] + 0x18) = param_3[0x14];
    return;
  }
  return;
}

// 00EFA730  FUN_00efa730  size=1315  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00efa730(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_44;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = *param_3 - *(float *)(param_1 + 0x180);
  fVar2 = param_3[1] - *(float *)(param_1 + 0x184);
  fVar3 = param_3[2] - *(float *)(param_1 + 0x188);
  if ((param_3[0xe] != 0.0) &&
     (param_3[0xe] * param_3[0xe] <= fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    return;
  }
  local_44 = *(float *)(*(int *)(param_2 + 4) + 0x14c) * param_3[0xf];
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 1.0;
  switch(param_3[0x10]) {
  case 0.0:
  case 1.4013e-45:
    if (param_3[0xe] == 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 1.0 / param_3[0xe];
    }
    fVar6 = (float10)FUN_00fdef70();
    local_44 = (1.0 - (float)fVar6 * fVar4) * local_44;
    local_14 = param_3[3] - *(float *)(param_1 + 0x18c);
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      local_20 = fVar1;
      local_1c = fVar2;
      local_18 = fVar3;
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      local_20 = fVar1;
      local_1c = fVar2;
      local_18 = fVar3;
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    break;
  case 2.8026e-45:
    local_20 = param_3[4];
    local_1c = param_3[5];
    local_18 = param_3[6];
    local_14 = param_3[7];
    break;
  case 4.2039e-45:
    if (param_3[0xe] == 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 1.0 / param_3[0xe];
    }
    fVar6 = (float10)FUN_00fdef70();
    local_14 = param_3[3] - *(float *)(param_1 + 0x18c);
    fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    if (fVar5 < 0.0 == (fVar5 == 0.0)) {
      local_20 = fVar1;
      local_1c = fVar2;
      local_18 = fVar3;
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      local_20 = fVar1;
      local_1c = fVar2;
      local_18 = fVar3;
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar2 = local_20 * 0.0;
    fVar1 = local_20 - local_1c * 0.0;
    fVar3 = _DAT_018d6fdc * (1.0 - (float)fVar6 * fVar4) * local_44;
    local_20 = fVar3 * (local_1c * 0.0 - local_18);
    local_1c = (local_18 * 0.0 - fVar2) * fVar3;
    local_18 = fVar1 * fVar3;
    local_14 = fVar3 * local_14;
  default:
    goto switchD_00efa809_default;
  }
  local_20 = local_44 * local_20;
  local_1c = local_1c * local_44;
  local_18 = local_18 * local_44;
  local_14 = local_44 * local_14;
switchD_00efa809_default:
  if (param_3[0xd] == 0.0) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (param_3[0x10] == 4.2039e-45) {
      *(float *)(param_1 + 0x180) = fVar1 * local_20 + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x184) = local_1c * fVar1 + *(float *)(param_1 + 0x184);
      *(float *)(param_1 + 0x188) = local_18 * fVar1 + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) + fVar1 * local_14;
    }
    else {
      *(float *)(param_1 + 0x150) = fVar1 * local_20 + *(float *)(param_1 + 0x150);
      *(float *)(param_1 + 0x154) = local_1c * fVar1 + *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = local_18 * fVar1 + *(float *)(param_1 + 0x158);
      *(float *)(param_1 + 0x15c) = fVar1 * local_14 + *(float *)(param_1 + 0x15c);
    }
  }
  if (param_3[0x11] != 0.0) {
    FUN_00edbe30(0,param_3[0x11]);
  }
  if ((((param_3[0x12] != 0.0) || (param_3[0x13] != 0.0)) || (param_3[0x14] != 0.0)) &&
     (*(float *)(param_1 + 0x3f8) == 0.0)) {
    *(undefined4 *)(param_1 + 0x3f8) = 0x3c23d70a;
    *(float *)(param_1 + 0x3dc) = param_3[8];
    *(float *)(param_1 + 0x3e0) = param_3[9];
    *(float *)(param_1 + 0x3e4) = param_3[10];
    *(float *)(param_1 + 1000) = param_3[0xb];
    *(float *)(param_1 + 0x3ec) = param_3[0x12];
    *(float *)(param_1 + 0x3f0) = param_3[0x13];
    *(float *)(param_1 + 0x3f4) = param_3[0x14];
    return;
  }
  return;
}

// 00EFAC70  FUN_00efac70  size=1205  [callgraph]
void FUN_00efac70(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  uint *local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_104;
  local_104 = *(uint **)(param_2[2] + 4);
  pfVar4 = (float *)param_2[3];
  local_d0 = *pfVar4;
  local_cc = pfVar4[1];
  local_c8 = pfVar4[2];
  local_c4 = pfVar4[3];
  pfVar4 = (float *)param_2[4];
  local_c0 = *pfVar4;
  local_bc = pfVar4[1];
  local_b8 = pfVar4[2];
  local_b4 = pfVar4[3];
  if (((*local_104 & 0x1000000) == 0) || (iVar1 = param_2[6], iVar1 == 0)) {
    puVar2 = (undefined4 *)param_1[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    pfVar4 = (float *)*param_1;
    *pfVar4 = local_d0;
    pfVar4[1] = local_cc;
    pfVar4[2] = local_c8;
    pfVar4[3] = local_c4;
  }
  else {
    if ((param_2[8] != 0) || (local_ac = 1, (*(uint *)(*param_2 + 4) & 0x80000) == 0)) {
      local_ac = 0;
    }
    fVar5 = (float10)FUN_00fdee60();
    local_d4 = (float)fVar5;
    local_a4 = local_d4 * *(float *)(iVar1 + 0x30);
    fVar5 = (float10)FUN_00fdee60();
    local_d4 = (float)fVar5;
    local_a8 = local_d4 * *(float *)(iVar1 + 0x4c);
    fVar5 = (float10)FUN_00fdee60();
    local_d4 = (float)fVar5;
    local_100 = local_d4 * *(float *)(iVar1 + 0x14);
    local_fc = local_a4;
    local_f8 = local_a8;
    if (local_ac != 0) {
      iVar1 = param_2[5];
      D3DXVec3TransformNormal(&local_f0,&local_100,iVar1);
      local_100 = *(float *)(iVar1 + 0x30) + local_f0;
      local_fc = *(float *)(iVar1 + 0x34) + local_ec;
      local_f8 = *(float *)(iVar1 + 0x38) + fStack_e8;
      local_f4 = fStack_e4;
    }
    pfVar4 = (float *)param_1[1];
    *pfVar4 = local_100;
    pfVar4[1] = local_fc;
    pfVar4[2] = local_f8;
    pfVar4[3] = local_f4;
    pfVar4 = (float *)*param_1;
    local_f0 = local_100 + local_d0;
    local_ec = local_fc + local_cc;
    fStack_e8 = local_f8 + local_c8;
    fStack_e4 = local_f4 + local_c4;
    *pfVar4 = local_f0;
    pfVar4[1] = local_ec;
    pfVar4[2] = fStack_e8;
    pfVar4[3] = fStack_e4;
  }
  if (((*local_104 & 0x800000) == 0) || (iVar1 = param_2[7], iVar1 == 0)) {
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    pfVar4 = (float *)param_1[2];
    *pfVar4 = local_c0;
    pfVar4[1] = local_bc;
    pfVar4[2] = local_b8;
    fVar3 = local_b4;
  }
  else {
    fVar5 = (float10)FUN_00fdee60();
    local_104 = (uint *)(float)fVar5;
    local_100 = (float)local_104 * *(float *)(iVar1 + 0x14);
    fVar5 = (float10)FUN_00fdee60();
    local_104 = (uint *)(float)fVar5;
    local_fc = (float)local_104 * *(float *)(iVar1 + 0x30);
    fVar5 = (float10)FUN_00fdee60();
    local_104 = (uint *)(float)fVar5;
    pfVar4 = (float *)param_1[3];
    local_100 = local_100 * 0.017453292;
    local_fc = local_fc * 0.017453292;
    local_f8 = (float)local_104 * *(float *)(iVar1 + 0x4c) * 0.017453292;
    local_f4 = local_f4 * 0.017453292;
    *pfVar4 = local_100;
    pfVar4[1] = local_fc;
    pfVar4[2] = local_f8;
    pfVar4[3] = local_f4;
    pfVar4 = (float *)param_1[2];
    local_f0 = local_c0 + local_100;
    local_ec = local_bc + local_fc;
    fStack_e8 = local_f8 + local_b8;
    fStack_e4 = local_f4 + local_b4;
    *pfVar4 = local_f0;
    pfVar4[1] = local_ec;
    pfVar4[2] = fStack_e8;
    fVar3 = fStack_e4;
  }
  pfVar4[3] = fVar3;
  if (param_2[8] != 0) {
    FID_conflict__memcpy(&fStack_a0,*(void **)param_2[2],0x40);
    if ((*(uint *)(*param_2 + 4) & 0x40000000) != 0) {
      local_104 = (uint *)(fStack_9c * fStack_9c + fStack_a0 * fStack_a0 + fStack_98 * fStack_98);
      fVar5 = (float10)FUN_00fdef70();
      local_f0 = 1.0 / (float)fVar5;
      local_104 = (uint *)(fStack_8c * fStack_8c + fStack_90 * fStack_90 + fStack_88 * fStack_88);
      fVar5 = (float10)FUN_00fdef70();
      local_ec = 1.0 / (float)fVar5;
      local_104 = (uint *)(fStack_7c * fStack_7c + fStack_80 * fStack_80 + fStack_78 * fStack_78);
      fVar5 = (float10)FUN_00fdef70();
      local_104 = (uint *)(float)fVar5;
      fStack_e8 = 1.0 / (float)local_104;
      FUN_00ddd140(auStack_60,&local_f0);
      D3DXMatrixMultiply(&fStack_a0,auStack_60,&fStack_a0);
    }
    pfVar4 = (float *)*param_1;
    D3DXVec3TransformNormal(pfVar4,pfVar4,&fStack_a0);
    *pfVar4 = *pfVar4 + fStack_70;
    pfVar4[1] = pfVar4[1] + fStack_6c;
    pfVar4[2] = pfVar4[2] + fStack_68;
  }
  __security_check_cookie(local_14 ^ (uint)&local_104);
  return;
}

// 00EFB130  FUN_00efb130  size=1192  [callgraph]
void __thiscall FUN_00efb130(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint *puVar2;
  bool bVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 auStack_f4 [12];
  undefined4 *local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_f4;
  puVar2 = (uint *)param_2[1];
  local_c0 = *(float *)(param_1 + 0x180);
  local_e8 = param_2;
  local_bc = *(float *)(param_1 + 0x184);
  local_b8 = *(float *)(param_1 + 0x188);
  fVar1 = *(float *)(param_1 + 0x18c);
  local_b0 = *(float *)(param_1 + 0x1b0);
  local_ac = *(float *)(param_1 + 0x1b4);
  local_a8 = *(float *)(param_1 + 0x1b8);
  local_a4 = *(float *)(param_1 + 0x1bc);
  local_b4 = fVar1;
  if ((*puVar2 & 0x1000000) == 0) {
    *(float *)(param_1 + 400) = local_c0;
    *(float *)(param_1 + 0x194) = local_bc;
    *(float *)(param_1 + 0x198) = local_b8;
  }
  else {
    if ((*(int *)(param_1 + 0x50) == 0) && ((*(uint *)(param_1 + 0x3c) & 0x80000) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_d0 = local_e4 * *(float *)(param_1 + 0x2e4);
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_cc = local_e4 * *(float *)(param_1 + 0x300);
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_c8 = local_e4 * *(float *)(param_1 + 0x31c);
    if (bVar3) {
      D3DXVec3TransformNormal(&local_e0,&local_d0,param_1 + 0x200);
      local_d0 = local_e0 + *(float *)(param_1 + 0x230);
      local_cc = *(float *)(param_1 + 0x234) + local_dc;
      local_c8 = *(float *)(param_1 + 0x238) + fStack_d8;
      local_c4 = fStack_d4;
    }
    *(float *)(param_1 + 0x170) = local_d0;
    *(float *)(param_1 + 0x174) = local_cc;
    *(float *)(param_1 + 0x178) = local_c8;
    *(float *)(param_1 + 0x17c) = local_c4;
    local_e0 = local_c0 + local_d0;
    local_dc = local_bc + local_cc;
    fStack_d8 = local_c8 + local_b8;
    fVar1 = local_c4 + local_b4;
    *(float *)(param_1 + 400) = local_e0;
    *(float *)(param_1 + 0x194) = local_dc;
    *(float *)(param_1 + 0x198) = fStack_d8;
    fStack_d4 = fVar1;
  }
  pfVar4 = (float *)(param_1 + 400);
  *(float *)(param_1 + 0x19c) = fVar1;
  if ((*puVar2 & 0x800000) == 0) {
    *(float *)(param_1 + 0x1c0) = local_b0;
    *(float *)(param_1 + 0x1c4) = local_ac;
    *(float *)(param_1 + 0x1c8) = local_a8;
    fVar1 = local_a4;
  }
  else {
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_d0 = local_e4 * *(float *)(param_1 + 0x33c);
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_cc = local_e4 * *(float *)(param_1 + 0x358);
    fVar5 = (float10)FUN_00fdee60();
    local_e4 = (float)fVar5;
    local_d0 = local_d0 * 0.017453292;
    local_cc = local_cc * 0.017453292;
    local_c8 = local_e4 * *(float *)(param_1 + 0x374) * 0.017453292;
    local_c4 = local_c4 * 0.017453292;
    *(float *)(param_1 + 0x1e0) = local_d0;
    *(float *)(param_1 + 0x1e4) = local_cc;
    *(float *)(param_1 + 0x1e8) = local_c8;
    *(float *)(param_1 + 0x1ec) = local_c4;
    local_e0 = local_b0 + local_d0;
    local_dc = local_ac + local_cc;
    fStack_d8 = local_c8 + local_a8;
    fStack_d4 = local_c4 + local_a4;
    *(float *)(param_1 + 0x1c0) = local_e0;
    *(float *)(param_1 + 0x1c4) = local_dc;
    *(float *)(param_1 + 0x1c8) = fStack_d8;
    fVar1 = fStack_d4;
  }
  *(float *)(param_1 + 0x1cc) = fVar1;
  if (*(int *)(param_1 + 0x50) != 0) {
    FID_conflict__memcpy(&fStack_a0,(void *)*local_e8,0x40);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) {
      local_e8 = (undefined4 *)
                 (fStack_9c * fStack_9c + fStack_a0 * fStack_a0 + fStack_98 * fStack_98);
      fVar5 = (float10)FUN_00fdef70();
      local_e0 = 1.0 / (float)fVar5;
      local_e8 = (undefined4 *)
                 (fStack_8c * fStack_8c + fStack_90 * fStack_90 + fStack_88 * fStack_88);
      fVar5 = (float10)FUN_00fdef70();
      local_dc = 1.0 / (float)fVar5;
      local_e8 = (undefined4 *)
                 (fStack_7c * fStack_7c + fStack_80 * fStack_80 + fStack_78 * fStack_78);
      fVar5 = (float10)FUN_00fdef70();
      local_e8 = (undefined4 *)(float)fVar5;
      fStack_d8 = 1.0 / (float)local_e8;
      FUN_00ddd140(auStack_60,&local_e0);
      D3DXMatrixMultiply(&fStack_a0,auStack_60,&fStack_a0);
    }
    D3DXVec3TransformNormal(pfVar4,pfVar4,&fStack_a0);
    *pfVar4 = fStack_70 + *pfVar4;
    *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x194) + fStack_6c;
    *(float *)(param_1 + 0x198) = fStack_68 + *(float *)(param_1 + 0x198);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_f4);
  return;
}

// 00EFB5E0  FUN_00efb5e0  size=1888  [callgraph]
void FUN_00efb5e0(undefined4 *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  piVar7 = param_2;
  fVar1 = (float)param_2[6];
  puVar3 = *(uint **)(param_2[2] + 4);
  if (((param_2[5] != 0) && ((*(uint *)param_2[1] & 0x4000000) == 0)) &&
     ((*(byte *)(*param_2 + 4) & 0x20) != 0)) {
    fVar8 = (float10)FUN_00fdef70();
    fVar9 = (float10)FUN_00fdef70();
    fVar10 = (float10)FUN_00fdef70();
    fVar1 = ((float)fVar9 + (float)fVar8 + (float)fVar10) * 0.33333334;
  }
  param_2 = (int *)fVar1;
  if ((*(byte *)(*piVar7 + 4) & 0x40) == 0) {
    if (((*puVar3 & 0x2000000) == 0) || (iVar4 = piVar7[3], iVar4 == 0)) {
      *(undefined4 *)*param_1 = *(undefined4 *)piVar7[4];
      *(undefined4 *)param_1[1] = *(undefined4 *)(piVar7[4] + 4);
      fVar1 = *(float *)(piVar7[4] + 8);
    }
    else {
      pfVar5 = (float *)piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      *(float *)*param_1 = (float)fVar8 * *(float *)(iVar4 + 0x14) * *pfVar5 + *pfVar5;
      iVar4 = piVar7[3];
      iVar6 = piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      *(float *)param_1[1] =
           (float)fVar8 * *(float *)(iVar4 + 0x30) * *(float *)(iVar6 + 4) + *(float *)(iVar6 + 4);
      iVar4 = piVar7[3];
      iVar6 = piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      fVar1 = (float)fVar8 * *(float *)(iVar4 + 0x4c) * *(float *)(iVar6 + 8) +
              *(float *)(iVar6 + 8);
    }
    *(float *)param_1[2] = fVar1;
    if ((float)param_2 != 1.0) {
      *(float *)*param_1 = *(float *)*param_1 * (float)param_2;
      *(float *)param_1[1] = *(float *)param_1[1] * (float)param_2;
      *(float *)param_1[2] = (float)param_2 * *(float *)param_1[2];
    }
    if ((*puVar3 & 0x100000) == 0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)*param_1;
      *(undefined4 *)param_1[2] = *(undefined4 *)*param_1;
    }
    else {
      *(float *)*param_1 = *(float *)(piVar7[4] + 0xc) * *(float *)*param_1;
      *(float *)param_1[1] = *(float *)(piVar7[4] + 0xc) * *(float *)param_1[1];
      *(float *)param_1[2] = *(float *)(piVar7[4] + 0xc) * *(float *)param_1[2];
    }
    if ((*(uint *)piVar7[1] & 0x2000000) != 0) {
      *(float *)*param_1 = (float)piVar7[7] * *(float *)*param_1;
      *(float *)param_1[1] = *(float *)param_1[1] * (float)piVar7[7];
      *(float *)param_1[2] = (float)piVar7[7] * *(float *)param_1[2];
    }
    if ((*(uint *)piVar7[1] & 0x4000000) == 0) {
      iVar4 = *(int *)(piVar7[2] + 0x18);
      if (((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 0x10) != 0)) &&
         ((*(uint *)(*piVar7 + 4) & 0x40000000) == 0)) {
        iVar4 = *(int *)(piVar7[2] + 0x18);
        fVar1 = *(float *)(iVar4 + 0x60);
        fVar2 = *(float *)(iVar4 + 100);
        *(float *)*param_1 = *(float *)(iVar4 + 0x5c) * *(float *)*param_1;
        *(float *)param_1[1] = *(float *)param_1[1] * fVar1;
        *(float *)param_1[2] = *(float *)param_1[2] * fVar2;
      }
    }
    if (((*(uint *)piVar7[1] & 0x800000) == 0) && (param_1[3] != 0)) {
      *(undefined4 *)param_1[3] = *(undefined4 *)*param_1;
      if (*(float *)param_1[3] < *(float *)param_1[1]) {
        *(float *)param_1[3] = *(float *)param_1[1];
      }
      if (*(float *)param_1[3] < *(float *)param_1[2]) {
        *(float *)param_1[3] = *(float *)param_1[2];
      }
      *(float *)param_1[3] = *(float *)param_1[3] * 1.2;
      if (((*(uint *)*piVar7 & 0x100000) != 0) && (*(int *)piVar7[2] != 0)) {
        fVar8 = (float10)FUN_00fdef70();
        fVar9 = (float10)FUN_00fdef70();
        fVar1 = (float)fVar9;
        fVar9 = (float10)FUN_00fdef70();
        pfVar5 = (float *)param_1[3];
        if (fVar1 < (float)fVar8) {
          fVar1 = (float)fVar8;
        }
        if ((float)fVar9 < fVar1) {
          *pfVar5 = fVar1 * *pfVar5;
          return;
        }
        *pfVar5 = (float)fVar9 * *pfVar5;
      }
    }
  }
  else {
    if (((*puVar3 & 0x2000000) == 0) || (iVar4 = piVar7[3], iVar4 == 0)) {
      *(undefined4 *)*param_1 = *(undefined4 *)piVar7[4];
      *(undefined4 *)param_1[1] = *(undefined4 *)(piVar7[4] + 4);
      fVar1 = *(float *)(piVar7[4] + 8);
    }
    else {
      pfVar5 = (float *)piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      *(float *)*param_1 = (float)fVar8 * *(float *)(iVar4 + 0x14) * *pfVar5 + *pfVar5;
      iVar4 = piVar7[3];
      iVar6 = piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      *(float *)param_1[1] =
           (float)fVar8 * *(float *)(iVar4 + 0x30) * *(float *)(iVar6 + 4) + *(float *)(iVar6 + 4);
      iVar4 = piVar7[3];
      iVar6 = piVar7[4];
      fVar8 = (float10)FUN_00fdee60();
      fVar1 = (float)fVar8 * *(float *)(iVar4 + 0x4c) * *(float *)(iVar6 + 8) +
              *(float *)(iVar6 + 8);
    }
    *(float *)param_1[2] = fVar1;
    if ((float)param_2 != 1.0) {
      *(float *)*param_1 = *(float *)*param_1 * (float)param_2;
      *(float *)param_1[1] = *(float *)param_1[1] * (float)param_2;
      *(float *)param_1[2] = (float)param_2 * *(float *)param_1[2];
    }
    if ((*puVar3 & 0x100000) == 0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)*param_1;
      *(undefined4 *)param_1[2] = *(undefined4 *)param_1[1];
    }
    else {
      *(float *)*param_1 = *(float *)(piVar7[4] + 0xc) * *(float *)*param_1;
      *(float *)param_1[1] = *(float *)(piVar7[4] + 0xc) * *(float *)param_1[1];
      *(float *)param_1[2] = *(float *)(piVar7[4] + 0xc) * *(float *)param_1[2];
    }
    if ((*(uint *)piVar7[1] & 0x2000000) != 0) {
      *(float *)*param_1 = (float)piVar7[7] * *(float *)*param_1;
      *(float *)param_1[1] = (float)piVar7[7] * *(float *)param_1[1];
      *(float *)param_1[2] = *(float *)param_1[2] * (float)piVar7[7];
    }
    if ((*(uint *)piVar7[1] & 0x4000000) == 0) {
      iVar4 = *(int *)(piVar7[2] + 0x18);
      if (((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 0x10) != 0)) &&
         ((*(uint *)(*piVar7 + 4) & 0x40000000) == 0)) {
        iVar4 = *(int *)(piVar7[2] + 0x18);
        fVar1 = *(float *)(iVar4 + 0x60);
        fVar2 = *(float *)(iVar4 + 100);
        *(float *)*param_1 = *(float *)(iVar4 + 0x5c) * *(float *)*param_1;
        *(float *)param_1[1] = fVar1 * *(float *)param_1[1];
        *(float *)param_1[2] = fVar2 * *(float *)param_1[2];
      }
    }
    if (((*(uint *)piVar7[1] & 0x800000) == 0) && (param_1[3] != 0)) {
      *(undefined4 *)param_1[3] = *(undefined4 *)*param_1;
      if (*(float *)param_1[3] < *(float *)param_1[1]) {
        *(float *)param_1[3] = *(float *)param_1[1];
      }
      if (*(float *)param_1[1] < *(float *)param_1[2]) {
        *(float *)param_1[3] = *(float *)param_1[2];
      }
      *(float *)param_1[3] = *(float *)param_1[3] * 1.2;
      return;
    }
  }
  return;
}

// 00EFBD40  FUN_00efbd40  size=2027  [callgraph]
void __thiscall FUN_00efbd40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar3 = *(int *)(param_1 + 0x50);
  puVar4 = *(uint **)(param_2 + 4);
  if (((iVar3 != 0) && ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0)) &&
     ((*(byte *)(param_1 + 0x3c) & 0x20) != 0)) {
    fVar6 = (float10)FUN_00fdef70();
    fVar7 = (float10)FUN_00fdef70();
    fVar8 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 0x10c) = ((float)fVar7 + (float)fVar6 + (float)fVar8) * 0.33333334;
  }
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    if ((*puVar4 & 0x2000000) == 0) {
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 500);
      fVar1 = *(float *)(param_1 + 0x1f8);
    }
    else {
      fVar6 = (float10)FUN_00fdee60();
      *(float *)(param_1 + 0x100) =
           (float)fVar6 * *(float *)(param_1 + 0x28c) * *(float *)(param_1 + 0x1f0) +
           *(float *)(param_1 + 0x1f0);
      fVar6 = (float10)FUN_00fdee60();
      *(float *)(param_1 + 0x104) =
           (float)fVar6 * *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 500) +
           *(float *)(param_1 + 500);
      fVar6 = (float10)FUN_00fdee60();
      fVar1 = (float)fVar6 * *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x1f8) +
              *(float *)(param_1 + 0x1f8);
    }
    *(float *)(param_1 + 0x108) = fVar1;
    if (*(float *)(param_1 + 0x10c) != 1.0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x10c);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x10c);
    }
    if ((*puVar4 & 0x100000) == 0) {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x100);
      fVar1 = *(float *)(param_1 + 0x100);
    }
    else {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x104);
      fVar1 = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x108);
    }
    *(float *)(param_1 + 0x108) = fVar1;
    if ((*(uint *)(param_1 + 0x30) & 0x2000000) != 0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x108);
    }
    if ((((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) &&
        (iVar5 = *(int *)(param_2 + 0x18), iVar5 != 0)) &&
       (((*(byte *)(iVar5 + 0x68) & 0x10) != 0 && ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0))))
    {
      fVar1 = *(float *)(iVar5 + 0x60);
      fVar2 = *(float *)(iVar5 + 100);
      *(float *)(param_1 + 0x100) = *(float *)(iVar5 + 0x5c) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = fVar1 * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * fVar2;
    }
    if ((*(uint *)(param_1 + 0x30) & 0x800000) == 0) {
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x100);
      if (*(float *)(param_1 + 0x100) < *(float *)(param_1 + 0x104)) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
      }
      if (*(float *)(param_1 + 300) < *(float *)(param_1 + 0x108)) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x108);
      }
      fVar1 = *(float *)(param_1 + 300) * 1.2;
      *(float *)(param_1 + 300) = fVar1;
      if (((*(uint *)(param_1 + 0x38) & 0x100000) != 0) && (iVar3 != 0)) {
        fVar6 = (float10)FUN_00fdef70();
        fVar7 = (float10)FUN_00fdef70();
        fVar2 = (float)fVar7;
        fVar7 = (float10)FUN_00fdef70();
        if (fVar2 < (float)fVar6) {
          fVar2 = (float)fVar6;
        }
        if ((float)fVar7 < fVar2) {
          *(float *)(param_1 + 300) = fVar2 * fVar1;
          return;
        }
        *(float *)(param_1 + 300) = (float)fVar7 * fVar1;
      }
    }
  }
  else {
    if ((*puVar4 & 0x2000000) == 0) {
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 500);
      fVar1 = *(float *)(param_1 + 0x1f8);
    }
    else {
      fVar6 = (float10)FUN_00fdee60();
      *(float *)(param_1 + 0x100) =
           (float)fVar6 * *(float *)(param_1 + 0x28c) * *(float *)(param_1 + 0x1f0) +
           *(float *)(param_1 + 0x1f0);
      fVar6 = (float10)FUN_00fdee60();
      *(float *)(param_1 + 0x104) =
           (float)fVar6 * *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 500) +
           *(float *)(param_1 + 500);
      fVar6 = (float10)FUN_00fdee60();
      fVar1 = (float)fVar6 * *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x1f8) +
              *(float *)(param_1 + 0x1f8);
    }
    *(float *)(param_1 + 0x108) = fVar1;
    if (*(float *)(param_1 + 0x10c) != 1.0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x10c);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x10c);
    }
    if ((*puVar4 & 0x100000) == 0) {
      fVar1 = *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = fVar1;
    }
    else {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x104);
      fVar1 = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x108);
    }
    *(float *)(param_1 + 0x108) = fVar1;
    if ((*(uint *)(param_1 + 0x30) & 0x2000000) != 0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x108);
    }
    if (((((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) &&
         (iVar3 = *(int *)(param_2 + 0x18), iVar3 != 0)) && ((*(byte *)(iVar3 + 0x68) & 0x10) != 0))
       && ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0)) {
      fVar1 = *(float *)(iVar3 + 0x60);
      fVar2 = *(float *)(iVar3 + 100);
      *(float *)(param_1 + 0x100) = *(float *)(iVar3 + 0x5c) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = fVar1 * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) * fVar2;
    }
    if ((*(uint *)(param_1 + 0x30) & 0x800000) == 0) {
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x100);
      if (*(float *)(param_1 + 0x100) < *(float *)(param_1 + 0x104)) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
      }
      if (*(float *)(param_1 + 0x104) < *(float *)(param_1 + 0x108)) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x108);
      }
      *(float *)(param_1 + 300) = *(float *)(param_1 + 300) * 1.2;
      return;
    }
  }
  return;
}

// 00F15360  FUN_00f15360  size=1202  [callgraph]
void __thiscall FUN_00f15360(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  float unaff_EBX;
  float unaff_ESI;
  float *pfStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [25];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_144;
  FUN_00edfc20();
  FUN_00f0b530();
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x3a0) = 0;
  }
  else {
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130();
  FUN_00efbd40();
  if (*(int *)(param_1 + 0x500) == 2) {
    FUN_00ed7f60();
  }
  else if (*(int *)(param_1 + 0x500) == 3) {
    FUN_00f02600();
  }
  FUN_00f0e360();
  if (*(int *)(param_1 + 0x500) == 4) {
    iVar1 = *(int *)(param_1 + 0x50);
    local_a8 = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_b4 = 0.0;
    local_bc = 0.0;
    local_c0 = 0.0;
    local_c4 = 0.0;
    local_c8 = 0.0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_a4 = 0x3f800000;
    local_b8 = 1.0;
    local_cc = 0x3f800000;
    local_e0 = 0x3f800000;
    if (iVar1 == 0) {
      local_124 = 0.0;
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    else {
      local_130 = *(float *)(iVar1 + 0x40);
      local_12c = *(float *)(iVar1 + 0x44);
      local_128 = *(float *)(iVar1 + 0x48);
      local_124 = *(float *)(iVar1 + 0x4c);
    }
    local_140 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
    local_13c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_138 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    local_134 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
    local_110 = local_140 + local_130;
    local_10c = local_13c + local_12c;
    local_108 = local_138 + local_128;
    local_104[0] = local_134 + local_124;
    FUN_00ee0200();
    puStack_160 = (undefined1 *)0xf1551c;
    D3DXVec3TransformNormal();
    local_bc = local_bc + unaff_ESI;
    puStack_168 = auStack_ec;
    iStack_164 = param_1 + 0x200;
    local_b8 = unaff_EBX + local_b8;
    local_b4 = fStack_144 + local_b4;
    puStack_16c = (undefined1 *)0xf15566;
    puStack_160 = puStack_168;
    D3DXMatrixMultiply();
    local_c8 = local_c8 + unaff_EBX;
    local_c4 = fStack_144 + local_c4;
    local_c0 = local_140 + local_c0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    local_a8 = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_b4 = 0.0;
    uStack_7c = 0x3f800000;
    uStack_90 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_b8 = 1.0;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c8);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c4);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c0);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    puStack_16c = auStack_f8;
    pfStack_170 = &local_b8;
    D3DXMatrixMultiply(puStack_16c);
    local_124 = *(float *)(param_2 + 0x70);
    fStack_120 = *(float *)(param_2 + 0x74);
    fStack_11c = *(float *)(param_2 + 0x78);
    FUN_00ddd140(&uStack_84,&local_124);
    D3DXMatrixMultiply(local_104,&uStack_84,local_104);
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar2 == (uint *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar4 = FUN_00f59ed0(0xf);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    fStack_144 = *(float *)(uVar3 + 8) - 0.5;
    fStack_118 = *(float *)(uVar3 + 0xc) - 0.5;
    fStack_120 = *(float *)(uVar3 + 4) - 0.5;
    fStack_11c = fStack_144;
    D3DXVec3TransformNormal(&pfStack_170,&fStack_120,&local_110);
    local_b0 = local_140 + local_b0;
    local_ac = local_13c + local_ac;
    local_a8 = local_138 + local_a8;
    puStack_160 = (undefined1 *)0xf157ea;
    FID_conflict__memcpy((void *)(param_2 + 0x10),&local_e0,0x40);
  }
  esp107::vf10();
  ModelShaderJackModule::updateModule_5();
  __security_check_cookie(local_14 ^ (uint)&fStack_144);
  return;
}

// 00F15820  ModelShaderJackModule::updateModule_6  size=1793  [class]
void __thiscall ModelShaderJackModule::updateModule_6(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float unaff_EBX;
  float10 fVar5;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [100];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_154;
  local_114 = param_3;
  FUN_00f0b530(param_2[4]);
  iVar1 = param_2[4];
  FUN_00efb130(iVar1);
  FUN_00efbd40(iVar1);
  if (*(int *)(param_1 + 0x500) == 2) {
    FUN_00ed7f60();
  }
  else if (*(int *)(param_1 + 0x500) == 3) {
    FUN_00f02600();
  }
  FUN_00f0eca0(param_2);
  fVar4 = 1.0;
  if (*(int *)(param_1 + 0x500) != 4) goto LAB_00f15d65;
  local_a8 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_b4 = 0.0;
  local_bc = 0.0;
  local_c0 = 0.0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_a4 = 0x3f800000;
  local_b8 = 1.0;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_134 = 0.0;
    local_138 = 0.0;
    local_13c = 0.0;
    local_140 = 0.0;
  }
  else {
    iVar1 = *(int *)param_2[4];
    local_140 = *(float *)(iVar1 + 0x30);
    local_13c = *(float *)(iVar1 + 0x34);
    local_138 = *(float *)(iVar1 + 0x38);
    local_134 = *(float *)(iVar1 + 0x3c);
  }
  local_130 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_12c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_128 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_124 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_110 = local_130 + local_140;
  local_10c = local_12c + local_13c;
  local_108 = local_128 + local_138;
  local_104[0] = local_124 + local_134;
  local_148 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_148 == 0.0) {
LAB_00f15a83:
    local_140 = 0.0;
    local_13c = 0.0;
    local_138 = 0.0;
  }
  else {
    local_140 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_13c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_138 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_134 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_140 == 0.0) && (local_13c == 0.0)) && (local_138 == 0.0)) goto LAB_00f15a83;
    FUN_00ddf460(&local_140,&local_140);
    local_140 = local_148 * local_140;
    local_13c = local_13c * local_148;
    local_138 = local_138 * local_148;
    fVar4 = local_148 * local_134;
  }
  local_134 = fVar4;
  D3DXVec3TransformNormal(&local_130,&local_110,&local_e0);
  local_bc = local_bc + local_13c;
  local_b8 = local_138 + local_b8;
  local_b4 = local_134 + local_b4;
  D3DXMatrixMultiply(auStack_ec,param_1 + 0x200,auStack_ec);
  local_c8 = local_c8 + unaff_EBX;
  local_c4 = fStack_154 + local_c4;
  local_c0 = fStack_150 + local_c0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  local_a8 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_b4 = 0.0;
  uStack_7c = 0x3f800000;
  uStack_90 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_b8 = 1.0;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(auStack_78,*(undefined4 *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(auStack_78,*(undefined4 *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX(auStack_78,*(undefined4 *)(param_1 + 0x1c0));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  D3DXMatrixMultiply(auStack_f8,&local_b8,auStack_f8);
  iVar1 = *param_2;
  fStack_120 = *(float *)(iVar1 + 0x74);
  fStack_11c = *(float *)(iVar1 + 0x78);
  local_124 = *(float *)(iVar1 + 0x70);
  FUN_00ddd140(&uStack_84,&local_124);
  D3DXMatrixMultiply(local_104,&uStack_84,local_104);
  fStack_120 = (float)param_2[1] - 0.5;
  fStack_11c = (float)param_2[2] - 0.5;
  fStack_118 = (float)param_2[3] - 0.5;
  D3DXVec3TransformNormal(&stack0xfffffea0,&fStack_120,&local_110);
  local_b0 = local_b0 + local_130;
  local_ac = local_12c + local_ac;
  local_a8 = local_128 + local_a8;
  FID_conflict__memcpy((void *)(*param_2 + 0x10),&local_e0,0x40);
LAB_00f15d65:
  iVar1 = param_2[6];
  iVar2 = param_2[5];
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    iVar3 = *(int *)(iVar2 + 4);
    fVar5 = (float10)FUN_00edbf30(iVar1 + 0x40,param_1 + 400,*(undefined4 *)(iVar3 + 0xc),
                                  *(undefined4 *)(iVar3 + 0x10));
    local_148 = (float)fVar5;
  }
  else {
    local_148 = 1.0;
  }
  *(float *)(param_1 + 0x124) = local_148;
  iVar2 = *(int *)(iVar2 + 4);
  local_148 = *(float *)(iVar2 + 0x60);
  fStack_144 = *(float *)(iVar2 + 100);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar5 = (float10)FUN_00edc040(iVar1 + 0x40,param_1 + 400,local_148,fStack_144);
    local_148 = (float)fVar5;
  }
  else {
    local_148 = 1.0;
  }
  fStack_144 = local_148 * *(float *)(param_1 + 0x124);
  *(float *)(param_1 + 0x124) = fStack_144;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    local_148 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    local_148 = 0.0;
  }
  else {
    local_148 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  fStack_144 = fStack_144 * local_148;
  *(float *)(param_1 + 0x124) = fStack_144;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = fStack_144 * *(float *)(param_1 + 0x128);
  }
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  iVar1 = local_114;
  if ((*(byte *)(param_1 + 0x49c) & 0x40) == 0) {
    FUN_009de210(local_114);
    FUN_009ed0b0(iVar1);
  }
  iVar1 = iVar1 + 0x54;
  FUN_009d2920(iVar1);
  FUN_009d2930(iVar1);
  FUN_009de380(iVar1);
  __security_check_cookie(local_14 ^ (uint)&fStack_154);
  return;
}

// 00F15F30  FUN_00f15f30  size=1202  [between]
void __thiscall FUN_00f15f30(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  float unaff_EBX;
  float unaff_ESI;
  float *pfStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [25];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_144;
  FUN_00edfc20();
  FUN_00f0b530();
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x3a0) = 0;
  }
  else {
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130();
  FUN_00efbd40();
  if (*(int *)(param_1 + 0x4f0) == 2) {
    FUN_00ed8080();
  }
  else if (*(int *)(param_1 + 0x4f0) == 3) {
    FUN_00f03640();
  }
  FUN_00f0f590();
  if (*(int *)(param_1 + 0x4f0) == 4) {
    iVar1 = *(int *)(param_1 + 0x50);
    local_a8 = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_b4 = 0.0;
    local_bc = 0.0;
    local_c0 = 0.0;
    local_c4 = 0.0;
    local_c8 = 0.0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_a4 = 0x3f800000;
    local_b8 = 1.0;
    local_cc = 0x3f800000;
    local_e0 = 0x3f800000;
    if (iVar1 == 0) {
      local_124 = 0.0;
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    else {
      local_130 = *(float *)(iVar1 + 0x40);
      local_12c = *(float *)(iVar1 + 0x44);
      local_128 = *(float *)(iVar1 + 0x48);
      local_124 = *(float *)(iVar1 + 0x4c);
    }
    local_140 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
    local_13c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_138 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    local_134 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
    local_110 = local_140 + local_130;
    local_10c = local_13c + local_12c;
    local_108 = local_138 + local_128;
    local_104[0] = local_134 + local_124;
    FUN_00ee0200();
    puStack_160 = (undefined1 *)0xf160ec;
    D3DXVec3TransformNormal();
    local_bc = local_bc + unaff_ESI;
    puStack_168 = auStack_ec;
    iStack_164 = param_1 + 0x200;
    local_b8 = unaff_EBX + local_b8;
    local_b4 = fStack_144 + local_b4;
    puStack_16c = (undefined1 *)0xf16136;
    puStack_160 = puStack_168;
    D3DXMatrixMultiply();
    local_c8 = local_c8 + unaff_EBX;
    local_c4 = fStack_144 + local_c4;
    local_c0 = local_140 + local_c0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    local_a8 = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_b4 = 0.0;
    uStack_7c = 0x3f800000;
    uStack_90 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_b8 = 1.0;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c8);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c4);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      puStack_16c = *(undefined1 **)(param_1 + 0x1c0);
      pfStack_170 = (float *)auStack_78;
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
    }
    puStack_16c = auStack_f8;
    pfStack_170 = &local_b8;
    D3DXMatrixMultiply(puStack_16c);
    local_124 = *(float *)(param_2 + 0x70);
    fStack_120 = *(float *)(param_2 + 0x74);
    fStack_11c = *(float *)(param_2 + 0x78);
    FUN_00ddd140(&uStack_84,&local_124);
    D3DXMatrixMultiply(local_104,&uStack_84,local_104);
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar2 == (uint *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar4 = FUN_00f59ed0(0xf);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    fStack_144 = *(float *)(uVar3 + 8) - 0.5;
    fStack_118 = *(float *)(uVar3 + 0xc) - 0.5;
    fStack_120 = *(float *)(uVar3 + 4) - 0.5;
    fStack_11c = fStack_144;
    D3DXVec3TransformNormal(&pfStack_170,&fStack_120,&local_110);
    local_b0 = local_140 + local_b0;
    local_ac = local_13c + local_ac;
    local_a8 = local_138 + local_a8;
    puStack_160 = (undefined1 *)0xf163ba;
    FID_conflict__memcpy((void *)(param_2 + 0x10),&local_e0,0x40);
  }
  esp107::vf10();
  ModelShaderJackModule::updateModule_4();
  __security_check_cookie(local_14 ^ (uint)&fStack_144);
  return;
}

// 00F163F0  ModelShaderJackModule::updateModule_7  size=1793  [class]
void __thiscall ModelShaderJackModule::updateModule_7(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float unaff_EBX;
  float10 fVar5;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [100];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_154;
  local_114 = param_3;
  FUN_00f0b530(param_2[4]);
  iVar1 = param_2[4];
  FUN_00efb130(iVar1);
  FUN_00efbd40(iVar1);
  if (*(int *)(param_1 + 0x4f0) == 2) {
    FUN_00ed8080();
  }
  else if (*(int *)(param_1 + 0x4f0) == 3) {
    FUN_00f03640();
  }
  FUN_00f0fed0(param_2);
  fVar4 = 1.0;
  if (*(int *)(param_1 + 0x4f0) != 4) goto LAB_00f16935;
  local_a8 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_b4 = 0.0;
  local_bc = 0.0;
  local_c0 = 0.0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_a4 = 0x3f800000;
  local_b8 = 1.0;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_134 = 0.0;
    local_138 = 0.0;
    local_13c = 0.0;
    local_140 = 0.0;
  }
  else {
    iVar1 = *(int *)param_2[4];
    local_140 = *(float *)(iVar1 + 0x30);
    local_13c = *(float *)(iVar1 + 0x34);
    local_138 = *(float *)(iVar1 + 0x38);
    local_134 = *(float *)(iVar1 + 0x3c);
  }
  local_130 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_12c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_128 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_124 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_110 = local_130 + local_140;
  local_10c = local_12c + local_13c;
  local_108 = local_128 + local_138;
  local_104[0] = local_124 + local_134;
  local_148 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_148 == 0.0) {
LAB_00f16653:
    local_140 = 0.0;
    local_13c = 0.0;
    local_138 = 0.0;
  }
  else {
    local_140 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_13c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_138 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_134 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_140 == 0.0) && (local_13c == 0.0)) && (local_138 == 0.0)) goto LAB_00f16653;
    FUN_00ddf460(&local_140,&local_140);
    local_140 = local_148 * local_140;
    local_13c = local_13c * local_148;
    local_138 = local_138 * local_148;
    fVar4 = local_148 * local_134;
  }
  local_134 = fVar4;
  D3DXVec3TransformNormal(&local_130,&local_110,&local_e0);
  local_bc = local_bc + local_13c;
  local_b8 = local_138 + local_b8;
  local_b4 = local_134 + local_b4;
  D3DXMatrixMultiply(auStack_ec,param_1 + 0x200,auStack_ec);
  local_c8 = local_c8 + unaff_EBX;
  local_c4 = fStack_154 + local_c4;
  local_c0 = fStack_150 + local_c0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  local_a8 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_b4 = 0.0;
  uStack_7c = 0x3f800000;
  uStack_90 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_b8 = 1.0;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ(auStack_78,*(undefined4 *)(param_1 + 0x1c8));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY(auStack_78,*(undefined4 *)(param_1 + 0x1c4));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX(auStack_78,*(undefined4 *)(param_1 + 0x1c0));
    D3DXMatrixMultiply(&local_c0,&uStack_80,&local_c0);
  }
  D3DXMatrixMultiply(auStack_f8,&local_b8,auStack_f8);
  iVar1 = *param_2;
  fStack_120 = *(float *)(iVar1 + 0x74);
  fStack_11c = *(float *)(iVar1 + 0x78);
  local_124 = *(float *)(iVar1 + 0x70);
  FUN_00ddd140(&uStack_84,&local_124);
  D3DXMatrixMultiply(local_104,&uStack_84,local_104);
  fStack_120 = (float)param_2[1] - 0.5;
  fStack_11c = (float)param_2[2] - 0.5;
  fStack_118 = (float)param_2[3] - 0.5;
  D3DXVec3TransformNormal(&stack0xfffffea0,&fStack_120,&local_110);
  local_b0 = local_b0 + local_130;
  local_ac = local_12c + local_ac;
  local_a8 = local_128 + local_a8;
  FID_conflict__memcpy((void *)(*param_2 + 0x10),&local_e0,0x40);
LAB_00f16935:
  iVar1 = param_2[6];
  iVar2 = param_2[5];
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    iVar3 = *(int *)(iVar2 + 4);
    fVar5 = (float10)FUN_00edbf30(iVar1 + 0x40,param_1 + 400,*(undefined4 *)(iVar3 + 0xc),
                                  *(undefined4 *)(iVar3 + 0x10));
    local_148 = (float)fVar5;
  }
  else {
    local_148 = 1.0;
  }
  *(float *)(param_1 + 0x124) = local_148;
  iVar2 = *(int *)(iVar2 + 4);
  local_148 = *(float *)(iVar2 + 0x60);
  fStack_144 = *(float *)(iVar2 + 100);
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar5 = (float10)FUN_00edc040(iVar1 + 0x40,param_1 + 400,local_148,fStack_144);
    local_148 = (float)fVar5;
  }
  else {
    local_148 = 1.0;
  }
  fStack_144 = local_148 * *(float *)(param_1 + 0x124);
  *(float *)(param_1 + 0x124) = fStack_144;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    local_148 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    local_148 = 0.0;
  }
  else {
    local_148 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  fStack_144 = fStack_144 * local_148;
  *(float *)(param_1 + 0x124) = fStack_144;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = fStack_144 * *(float *)(param_1 + 0x128);
  }
  if (*(int *)(param_1 + 0x4bc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  iVar1 = local_114;
  if ((*(byte *)(param_1 + 0x48c) & 0x40) == 0) {
    FUN_009dd660(local_114);
    FUN_009ecca0(iVar1);
  }
  iVar1 = iVar1 + 0x50;
  FUN_009d2920(iVar1);
  FUN_009d2930(iVar1);
  FUN_009de380(iVar1);
  __security_check_cookie(local_14 ^ (uint)&fStack_154);
  return;
}

// 00F3E960  ModelShaderJackModule::updateModule_8  size=114  [class]
void __thiscall ModelShaderJackModule::updateModule_8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4bc) != 0) {
    FUN_00dd5650(&DAT_016575ac,"ModelShaderJackModule::updateModule: SPU Can\'t Update Animation");
  }
  if ((*(byte *)(param_1 + 0x48c) & 0x40) == 0) {
    FUN_009dd660(param_2);
    FUN_009ecca0(param_2);
  }
  param_2 = param_2 + 0x50;
  FUN_009d2920(param_2);
  FUN_009d2930(param_2);
  FUN_009de380(param_2);
  return;
}

