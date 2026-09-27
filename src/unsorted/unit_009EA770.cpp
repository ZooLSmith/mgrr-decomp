// src/unsorted/unit_009EA770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009EA770..009EC3B0, 7 functions

#include "mgrr.h"

// 009EA770  FUN_009ea770  size=1538  [run]
void __thiscall FUN_009ea770(int param_1,int param_2)

{
  float *_Src;
  uint *puVar1;
  int iVar2;
  void *_Src_00;
  uint uVar3;
  undefined4 uVar4;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_dc [8];
  float local_d4;
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [4];
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [21];
  
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) * -1.0;
  }
  local_100 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_fc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_f8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_f4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  FUN_00ee0200();
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    if (&local_150 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_150,(float *)(param_1 + 0x200),0x40);
    }
    local_120 = local_120 + local_100;
    local_11c = local_11c + local_fc;
    local_118 = local_118 + local_f8;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      D3DXVec3TransformNormal(local_d0);
      if ((float *)&stack0xfffffe98 != _Src) {
        FID_conflict__memcpy(&stack0xfffffe98,_Src,0x40);
      }
    }
    else {
      local_d4 = *(float *)(iVar2 + 0x34);
      local_b4 = *(float *)(iVar2 + 0x38);
      local_110 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) + *_Src * *_Src +
                       *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      local_10c = SQRT(*(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                       *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      local_108 = SQRT(local_b4 * local_b4 +
                       local_d4 * local_d4 + *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      if (local_110 != 0.0) {
        local_110 = 1.0 / local_110;
      }
      if (local_10c != 0.0) {
        local_10c = 1.0 / local_10c;
      }
      if (local_108 != 0.0) {
        local_108 = 1.0 / local_108;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply(&local_150);
      D3DXVec3TransformNormal(auStack_dc,&local_10c,&stack0xfffffea4);
    }
    fStack_138 = fStack_138 + local_e8;
    fStack_134 = fStack_134 + fStack_e4;
    fStack_130 = fStack_130 + fStack_e0;
    D3DXMatrixMultiply(&stack0xfffffe98,param_1 + 0x200,&stack0xfffffe98);
  }
  local_120 = local_120 + local_f0;
  local_11c = local_11c + local_ec;
  local_118 = local_118 + local_e8;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_110 = local_120;
    local_10c = local_11c;
    local_108 = local_118;
    D3DXMatrixScaling(&local_150,
                      SQRT(fStack_148 * fStack_148 + local_150 * local_150 + fStack_14c * fStack_14c
                          ));
    fStack_130 = 0.0;
    uStack_12c = 0;
    uStack_128 = 0;
    _Src_00 = (void *)FUN_00e9ff30();
    FID_conflict__memcpy(auStack_c0,_Src_00,0x40);
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    D3DXMatrixMultiply(&stack0xfffffea0,&stack0xfffffea0,auStack_c0);
    local_120 = local_110;
    local_11c = local_10c;
    local_118 = local_108;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_009e30a0();
  }
  else {
    fStack_78 = 0.0;
    fStack_7c = 0.0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    fStack_74 = 1.0;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    D3DXMatrixMultiply(&local_150);
  }
  uStack_60 = *(undefined4 *)(param_2 + 0x70);
  uStack_5c = *(undefined4 *)(param_2 + 0x74);
  auStack_58[0] = *(undefined4 *)(param_2 + 0x78);
  FUN_00ddd140();
  D3DXMatrixMultiply(&local_150);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  fStack_78 = *(float *)(uVar3 + 8) - 0.5;
  fStack_74 = *(float *)(uVar3 + 0xc) - 0.5;
  fStack_7c = *(float *)(uVar3 + 4) - 0.5;
  D3DXVec3TransformNormal(&local_fc,&fStack_7c,&stack0xfffffea4);
  if ((undefined1 *)(param_2 + 0x10) != &stack0xfffffe98) {
    FID_conflict__memcpy((undefined1 *)(param_2 + 0x10),&stack0xfffffe98,0x40);
  }
  *(float *)(param_2 + 0x40) = local_108 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = fStack_104 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = local_100 + *(float *)(param_2 + 0x48);
  return;
}

// 009EAD80  FUN_009ead80  size=279  [run]
undefined4 __fastcall FUN_009ead80(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x51c);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
      if ((uVar2 != 0) && ((int)*(short *)(param_1 + 0x50a) == (uint)*(byte *)(uVar2 + 0x14))) {
        FUN_009cca90(param_1,&DAT_0165b490,(int)*(short *)(param_1 + 0x50a));
        return 0;
      }
    }
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(param_1 + 0x510) = 0;
    FUN_009df6d0();
    uVar3 = FUN_00f4b0b0(0);
    FUN_009df740();
    *(undefined4 *)(param_1 + 0x514) = uVar3;
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  if (*(int *)(param_1 + 0x510) == 0xfff) {
    FUN_009cca90(param_1,&DAT_0165b4cc);
    return 0;
  }
  return 1;
}

// 009EAEA0  FUN_009eaea0  size=1767  [run]
void __thiscall FUN_009eaea0(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [8];
  float local_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [4];
  undefined1 auStack_dc [12];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [8];
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  *(undefined4 *)(*param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(*param_2 + 0x70) = *(float *)(*param_2 + 0x70) * -1.0;
  }
  local_d0 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_cc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_c8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_c4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_134 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_134 != 0.0) {
    local_150 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_14c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_148 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_144 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_150 != 0.0) || (local_14c != 0.0)) || (local_148 != 0.0)) {
      FUN_00ddf460(&local_150,&local_150);
      local_150 = local_150 * local_134;
      local_14c = local_14c * local_134;
      local_148 = local_148 * local_134;
      local_144 = local_134 * local_144;
      goto LAB_009eb010;
    }
  }
  local_150 = 0.0;
  local_14c = 0.0;
  local_148 = 0.0;
  local_144 = 1.0;
LAB_009eb010:
  if (*(int *)(param_1 + 0x50) == 0) {
    if (&local_130 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_130,(float *)(param_1 + 0x200),0x40);
    }
    local_100 = local_100 + local_d0;
    local_fc = local_fc + local_cc;
    local_f8 = local_f8 + local_c8;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfVar2 = *(float **)param_2[4];
      D3DXVec3TransformNormal(local_e0,&local_d0,pfVar2);
      if (&local_148 != pfVar2) {
        FID_conflict__memcpy(&local_148,pfVar2,0x40);
      }
    }
    else {
      pfVar2 = *(float **)param_2[4];
      local_b4 = pfVar2[8];
      local_134 = pfVar2[9];
      local_b8 = pfVar2[10];
      local_f0 = SQRT(pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]);
      local_ec = SQRT(pfVar2[5] * pfVar2[5] + pfVar2[4] * pfVar2[4] + pfVar2[6] * pfVar2[6]);
      local_e8 = SQRT(local_b8 * local_b8 + local_b4 * local_b4 + local_134 * local_134);
      if (local_f0 != 0.0) {
        local_f0 = 1.0 / local_f0;
      }
      if (local_ec != 0.0) {
        local_ec = 1.0 / local_ec;
      }
      if (local_e8 != 0.0) {
        local_e8 = 1.0 / local_e8;
      }
      uVar3 = *(undefined4 *)param_2[4];
      FUN_00ddd140(&local_b0,&local_f0);
      D3DXMatrixMultiply(&local_130,&local_b0,uVar3);
      D3DXVec3TransformNormal(&local_ec,auStack_dc,auStack_13c);
    }
    fStack_118 = fStack_118 + local_f8;
    fStack_114 = fStack_114 + fStack_f4;
    fStack_110 = fStack_110 + local_f0;
    D3DXMatrixMultiply(&local_148,param_1 + 0x200,&local_148);
  }
  local_100 = local_100 + local_150;
  local_fc = local_fc + local_14c;
  local_f8 = local_f8 + local_148;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_f0 = local_100;
    local_ec = local_fc;
    local_e8 = local_f8;
    D3DXMatrixScaling(&local_130,
                      SQRT(fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c
                          ),SQRT(fStack_118 * fStack_118 +
                                 fStack_120 * fStack_120 + fStack_11c * fStack_11c),
                      SQRT(fStack_108 * fStack_108 +
                           fStack_110 * fStack_110 + fStack_10c * fStack_10c));
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    FID_conflict__memcpy(auStack_c0,(void *)(param_2[6] + 0x70),0x40);
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    D3DXMatrixMultiply(auStack_140,auStack_140,auStack_c0);
    local_100 = local_f0;
    local_fc = local_ec;
    local_f8 = local_e8;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_009e3890(&local_130,param_2);
  }
  else {
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(auStack_50,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(auStack_50,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(auStack_50,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    D3DXMatrixMultiply(&local_130,&local_b0,&local_130);
  }
  iVar1 = *param_2;
  fStack_6c = *(float *)(iVar1 + 0x74);
  fStack_68 = *(float *)(iVar1 + 0x78);
  uStack_70 = *(undefined4 *)(iVar1 + 0x70);
  FUN_00ddd140(auStack_50,&uStack_70);
  D3DXMatrixMultiply(&local_130,auStack_50,&local_130);
  fStack_6c = (float)param_2[1] - 0.5;
  fStack_68 = (float)param_2[2] - 0.5;
  fStack_64 = (float)param_2[3] - 0.5;
  iVar1 = *param_2;
  D3DXVec3TransformNormal(&local_ec,&fStack_6c,auStack_13c);
  if ((float *)(iVar1 + 0x10) != &local_148) {
    FID_conflict__memcpy((float *)(iVar1 + 0x10),&local_148,0x40);
  }
  *(float *)(iVar1 + 0x40) = local_f8 + *(float *)(iVar1 + 0x40);
  *(float *)(iVar1 + 0x44) = fStack_f4 + *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x48) = local_f0 + *(float *)(iVar1 + 0x48);
  return;
}

// 009EB590  FUN_009eb590  size=1538  [run]
void __thiscall FUN_009eb590(int param_1,int param_2)

{
  float *_Src;
  uint *puVar1;
  int iVar2;
  void *_Src_00;
  uint uVar3;
  undefined4 uVar4;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_dc [8];
  float local_d4;
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [4];
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [21];
  
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) * -1.0;
  }
  local_100 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_fc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_f8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_f4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  FUN_00ee0200();
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    if (&local_150 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_150,(float *)(param_1 + 0x200),0x40);
    }
    local_120 = local_120 + local_100;
    local_11c = local_11c + local_fc;
    local_118 = local_118 + local_f8;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      D3DXVec3TransformNormal(local_d0);
      if ((float *)&stack0xfffffe98 != _Src) {
        FID_conflict__memcpy(&stack0xfffffe98,_Src,0x40);
      }
    }
    else {
      local_d4 = *(float *)(iVar2 + 0x34);
      local_b4 = *(float *)(iVar2 + 0x38);
      local_110 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) + *_Src * *_Src +
                       *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      local_10c = SQRT(*(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                       *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      local_108 = SQRT(local_b4 * local_b4 +
                       local_d4 * local_d4 + *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      if (local_110 != 0.0) {
        local_110 = 1.0 / local_110;
      }
      if (local_10c != 0.0) {
        local_10c = 1.0 / local_10c;
      }
      if (local_108 != 0.0) {
        local_108 = 1.0 / local_108;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply(&local_150);
      D3DXVec3TransformNormal(auStack_dc,&local_10c,&stack0xfffffea4);
    }
    fStack_138 = fStack_138 + local_e8;
    fStack_134 = fStack_134 + fStack_e4;
    fStack_130 = fStack_130 + fStack_e0;
    D3DXMatrixMultiply(&stack0xfffffe98,param_1 + 0x200,&stack0xfffffe98);
  }
  local_120 = local_120 + local_f0;
  local_11c = local_11c + local_ec;
  local_118 = local_118 + local_e8;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_110 = local_120;
    local_10c = local_11c;
    local_108 = local_118;
    D3DXMatrixScaling(&local_150,
                      SQRT(fStack_148 * fStack_148 + local_150 * local_150 + fStack_14c * fStack_14c
                          ));
    fStack_130 = 0.0;
    uStack_12c = 0;
    uStack_128 = 0;
    _Src_00 = (void *)FUN_00e9ff30();
    FID_conflict__memcpy(auStack_c0,_Src_00,0x40);
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    D3DXMatrixMultiply(&stack0xfffffea0,&stack0xfffffea0,auStack_c0);
    local_120 = local_110;
    local_11c = local_10c;
    local_118 = local_108;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_009e3e70();
  }
  else {
    fStack_78 = 0.0;
    fStack_7c = 0.0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    fStack_74 = 1.0;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    D3DXMatrixMultiply(&local_150);
  }
  uStack_60 = *(undefined4 *)(param_2 + 0x70);
  uStack_5c = *(undefined4 *)(param_2 + 0x74);
  auStack_58[0] = *(undefined4 *)(param_2 + 0x78);
  FUN_00ddd140();
  D3DXMatrixMultiply(&local_150);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  fStack_78 = *(float *)(uVar3 + 8) - 0.5;
  fStack_74 = *(float *)(uVar3 + 0xc) - 0.5;
  fStack_7c = *(float *)(uVar3 + 4) - 0.5;
  D3DXVec3TransformNormal(&local_fc,&fStack_7c,&stack0xfffffea4);
  if ((undefined1 *)(param_2 + 0x10) != &stack0xfffffe98) {
    FID_conflict__memcpy((undefined1 *)(param_2 + 0x10),&stack0xfffffe98,0x40);
  }
  *(float *)(param_2 + 0x40) = local_108 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = fStack_104 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = local_100 + *(float *)(param_2 + 0x48);
  return;
}

// 009EBBA0  FUN_009ebba0  size=279  [run]
undefined4 __fastcall FUN_009ebba0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x51c);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
      if ((uVar2 != 0) && ((int)*(short *)(param_1 + 0x50a) == (uint)*(byte *)(uVar2 + 0x14))) {
        FUN_009cca90(param_1,&DAT_0165b490,(int)*(short *)(param_1 + 0x50a));
        return 0;
      }
    }
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(param_1 + 0x510) = 0;
    FUN_009df6d0();
    uVar3 = FUN_00f4b0b0(0);
    FUN_009df740();
    *(undefined4 *)(param_1 + 0x514) = uVar3;
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  if (*(int *)(param_1 + 0x510) == 0xfff) {
    FUN_009cca90(param_1,&DAT_0165b4cc);
    return 0;
  }
  return 1;
}

// 009EBCC0  FUN_009ebcc0  size=1767  [run]
void __thiscall FUN_009ebcc0(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [8];
  float local_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [4];
  undefined1 auStack_dc [12];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [8];
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  *(undefined4 *)(*param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(*param_2 + 0x70) = *(float *)(*param_2 + 0x70) * -1.0;
  }
  local_d0 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_cc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_c8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_c4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_134 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_134 != 0.0) {
    local_150 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_14c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_148 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_144 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_150 != 0.0) || (local_14c != 0.0)) || (local_148 != 0.0)) {
      FUN_00ddf460(&local_150,&local_150);
      local_150 = local_150 * local_134;
      local_14c = local_14c * local_134;
      local_148 = local_148 * local_134;
      local_144 = local_134 * local_144;
      goto LAB_009ebe30;
    }
  }
  local_150 = 0.0;
  local_14c = 0.0;
  local_148 = 0.0;
  local_144 = 1.0;
LAB_009ebe30:
  if (*(int *)(param_1 + 0x50) == 0) {
    if (&local_130 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_130,(float *)(param_1 + 0x200),0x40);
    }
    local_100 = local_100 + local_d0;
    local_fc = local_fc + local_cc;
    local_f8 = local_f8 + local_c8;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfVar2 = *(float **)param_2[4];
      D3DXVec3TransformNormal(local_e0,&local_d0,pfVar2);
      if (&local_148 != pfVar2) {
        FID_conflict__memcpy(&local_148,pfVar2,0x40);
      }
    }
    else {
      pfVar2 = *(float **)param_2[4];
      local_b4 = pfVar2[8];
      local_134 = pfVar2[9];
      local_b8 = pfVar2[10];
      local_f0 = SQRT(pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]);
      local_ec = SQRT(pfVar2[5] * pfVar2[5] + pfVar2[4] * pfVar2[4] + pfVar2[6] * pfVar2[6]);
      local_e8 = SQRT(local_b8 * local_b8 + local_b4 * local_b4 + local_134 * local_134);
      if (local_f0 != 0.0) {
        local_f0 = 1.0 / local_f0;
      }
      if (local_ec != 0.0) {
        local_ec = 1.0 / local_ec;
      }
      if (local_e8 != 0.0) {
        local_e8 = 1.0 / local_e8;
      }
      uVar3 = *(undefined4 *)param_2[4];
      FUN_00ddd140(&local_b0,&local_f0);
      D3DXMatrixMultiply(&local_130,&local_b0,uVar3);
      D3DXVec3TransformNormal(&local_ec,auStack_dc,auStack_13c);
    }
    fStack_118 = fStack_118 + local_f8;
    fStack_114 = fStack_114 + fStack_f4;
    fStack_110 = fStack_110 + local_f0;
    D3DXMatrixMultiply(&local_148,param_1 + 0x200,&local_148);
  }
  local_100 = local_100 + local_150;
  local_fc = local_fc + local_14c;
  local_f8 = local_f8 + local_148;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_f0 = local_100;
    local_ec = local_fc;
    local_e8 = local_f8;
    D3DXMatrixScaling(&local_130,
                      SQRT(fStack_128 * fStack_128 + local_130 * local_130 + fStack_12c * fStack_12c
                          ),SQRT(fStack_118 * fStack_118 +
                                 fStack_120 * fStack_120 + fStack_11c * fStack_11c),
                      SQRT(fStack_108 * fStack_108 +
                           fStack_110 * fStack_110 + fStack_10c * fStack_10c));
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    FID_conflict__memcpy(auStack_c0,(void *)(param_2[6] + 0x70),0x40);
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    D3DXMatrixMultiply(auStack_140,auStack_140,auStack_c0);
    local_100 = local_f0;
    local_fc = local_ec;
    local_f8 = local_e8;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_009e4660(&local_130,param_2);
  }
  else {
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(auStack_50,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(auStack_50,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(auStack_50,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(&local_b8,auStack_58,&local_b8);
    }
    D3DXMatrixMultiply(&local_130,&local_b0,&local_130);
  }
  iVar1 = *param_2;
  fStack_6c = *(float *)(iVar1 + 0x74);
  fStack_68 = *(float *)(iVar1 + 0x78);
  uStack_70 = *(undefined4 *)(iVar1 + 0x70);
  FUN_00ddd140(auStack_50,&uStack_70);
  D3DXMatrixMultiply(&local_130,auStack_50,&local_130);
  fStack_6c = (float)param_2[1] - 0.5;
  fStack_68 = (float)param_2[2] - 0.5;
  fStack_64 = (float)param_2[3] - 0.5;
  iVar1 = *param_2;
  D3DXVec3TransformNormal(&local_ec,&fStack_6c,auStack_13c);
  if ((float *)(iVar1 + 0x10) != &local_148) {
    FID_conflict__memcpy((float *)(iVar1 + 0x10),&local_148,0x40);
  }
  *(float *)(iVar1 + 0x40) = local_f8 + *(float *)(iVar1 + 0x40);
  *(float *)(iVar1 + 0x44) = fStack_f4 + *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x48) = local_f0 + *(float *)(iVar1 + 0x48);
  return;
}

// 009EC3B0  FUN_009ec3b0  size=89  [run]
undefined4 __thiscall FUN_009ec3b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    uVar1 = FUN_009e5060(param_2);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    return uVar1;
  }
  FUN_00dd5650(&DAT_01659cb0);
  uVar1 = FUN_009e5060(param_2);
  return uVar1;
}

