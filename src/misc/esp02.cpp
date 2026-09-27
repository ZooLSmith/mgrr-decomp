// src/misc/esp02.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED53B0..00F40720, 20 functions

#include "types.h"

// 00ED53B0  esp02::vf14  size=64  [class]
void __fastcall esp02::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    uVar1 = *(byte *)(param_1 + 0x49e) & 1 | 0x50000;
    iVar2 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x454);
    FUN_009d5aa0(iVar2,uVar1,iVar3);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

// 00ED53F0  FUN_00ed53f0  size=232  [callgraph]
void __fastcall FUN_00ed53f0(int param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_1c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_18 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_14 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  thunk_FUN_00dde510(&local_30,&local_2c,&local_20,(float *)(param_1 + 0x4b0));
  *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + -local_30;
  *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) + local_2c;
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x1c8) + local_28;
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x1cc) + local_24;
  *(float *)(param_1 + 0x4b0) = local_20;
  *(float *)(param_1 + 0x4b4) = local_1c;
  *(float *)(param_1 + 0x4b8) = local_18;
  *(float *)(param_1 + 0x4bc) = local_14;
  return;
}

// 00EE0500  FUN_00ee0500  size=157  [callgraph]
void FUN_00ee0500(void)

{
  int iVar1;
  int iVar2;
  float local_4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    FUN_00a7c930();
    FUN_00a7c9b0(&local_4);
    return;
  }
  iVar1 = FUN_00a7c890();
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c800();
    local_4 = *(float *)(iVar2 + 0x70);
    if ((local_4 != *(float *)(iVar1 + 0xe0)) && (local_4 != *(float *)(iVar1 + 0xe0))) {
      *(float *)(iVar1 + 0xe0) = local_4;
    }
    FUN_00e3e620();
    FUN_00e3f050();
  }
  FUN_00a7c800();
  switchD_0080dbae::default();
  return;
}

// 00EE05A0  FUN_00ee05a0  size=274  [callgraph]
undefined4 __fastcall FUN_00ee05a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00a7c800();
  *(int *)(iVar2 + 0x4b0) = *(int *)(*(int *)(param_1 + 0x450) + 4) + 0x50000;
  iVar2 = *(int *)(param_1 + 0x464);
  iVar3 = *(int *)(param_1 + 0x450);
  if (0x1f < iVar2) {
    FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
  }
  iVar2 = *(int *)(iVar3 + 0x20 + iVar2 * 4);
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c890();
    if (iVar3 == 0) {
      iVar3 = Entity::createAnimation();
      if (iVar3 == 0) {
        return 0;
      }
      FUN_00a7c890();
    }
    FUN_00e2d720();
    iVar1 = FUN_00e3fb10(iVar1,*(int *)(param_1 + 0x450) + 8);
    if (iVar1 != 0) {
      FUN_00e26e50(1);
      iVar1 = *(int *)(param_1 + 0x464);
      if (0x1f < iVar1) {
        FUN_00dd5650(&DAT_016575ac,"anim_no >= EFFECT_MODEL_ANIMATION_MAX");
      }
      Animation::Unit::setAnimation
                (iVar2,&DAT_018d7170 + iVar1 * 8,0,0,0x3f800000,0,0xbf800000,
                 *(undefined4 *)(param_1 + 0x468));
      return 1;
    }
  }
  return 0;
}

// 00EE06C0  FUN_00ee06c0  size=67  [callgraph]
undefined4 __fastcall FUN_00ee06c0(int param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x3c) & 8) != 0) && (*(int *)(param_1 + 0x120) == 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c800();
      if (*(char *)(iVar1 + 0x470) == '\0') {
        return 1;
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
    return 0;
  }
  return 1;
}

// 00EE0710  FUN_00ee0710  size=901  [callgraph]
undefined4 __thiscall FUN_00ee0710(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  uint auStack_b0 [8];
  undefined4 uStack_90;
  undefined *puStack_8c;
  uint uStack_88;
  undefined4 *puStack_84;
  short local_6c;
  short local_6a;
  uint local_64;
  uint local_60;
  undefined4 local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    return 0;
  }
  puStack_84 = (undefined4 *)0xee0735;
  iVar3 = FUN_00a7c800();
  cVar2 = *(char *)(param_1 + 0x49c);
  iVar8 = (int)*(short *)(iVar3 + 0x324);
  iVar4 = (int)cVar2;
  if (((iVar4 == -1) || (iVar4 == -2)) || ((-1 < iVar4 && (iVar4 <= iVar8 + -1)))) {
    if (cVar2 == -2) {
      puStack_84 = (undefined4 *)(iVar8 + -1);
      uStack_88 = 0;
      puStack_8c = (undefined *)0xee0789;
      cVar2 = FUN_00dde2d0();
      goto LAB_00ee0789;
    }
  }
  else {
    if (iVar4 < 0) {
      cVar2 = '\0';
    }
    else if (iVar8 + -1 < iVar4) {
      cVar2 = (char)(iVar8 + -1);
    }
LAB_00ee0789:
    *(char *)(param_1 + 0x49c) = cVar2;
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = **(uint **)(param_1 + 0x58);
    if ((local_60 + 0xf & 0xfffffff0) != local_60) {
      puStack_84 = (undefined4 *)0x0;
      uStack_88 = 0xee07af;
      uStack_88 = FUN_00f59ed0();
      puStack_8c = &DAT_016597b4;
      uStack_90 = 0xee07ba;
      FUN_00dd5650();
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
    local_64 = 0;
  }
  else {
    local_64 = *puVar5;
    if ((local_64 + 0xf & 0xfffffff0) != local_64) {
      puStack_84 = (undefined4 *)0x3;
      uStack_88 = 0xee07ea;
      uStack_88 = FUN_00f59ed0();
      puStack_8c = &DAT_016597b4;
      uStack_90 = 0xee07f5;
      FUN_00dd5650();
    }
  }
  cVar2 = *(char *)(local_60 + 0x16);
  if ((*(uint *)(param_1 + 0x3c) & 0x2000000) == 0) {
    iVar4 = 0;
    if (cVar2 == -0x40) {
      *(undefined2 *)(param_1 + 0x4a0) = 9999;
      goto LAB_00ee0860;
    }
    if (cVar2 == '?') {
      *(undefined2 *)(param_1 + 0x4a0) = 0xd8f1;
      goto LAB_00ee0860;
    }
    sVar7 = (short)cVar2;
  }
  else {
    if (cVar2 < '\x14') {
      iVar4 = 1;
      *(short *)(param_1 + 0x4a0) = (short)cVar2;
      goto LAB_00ee0860;
    }
    iVar4 = 2;
    sVar7 = cVar2 + -0x14;
  }
  *(short *)(param_1 + 0x4a0) = sVar7;
LAB_00ee0860:
  if (((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    puStack_84 = *(undefined4 **)(*(int *)(param_1 + 0x458) + 0x14);
    uStack_88 = local_64;
    puStack_8c = (undefined *)0xee0883;
    FUN_00ed4ff0();
  }
  puStack_84 = (undefined4 *)0xee088c;
  FUN_009d6580();
  local_40[1] = ~(*(uint *)(param_1 + 0x38) >> 4) & 1;
  local_40[0] = *(uint *)(param_1 + 0x38) >> 10 & 1;
  local_40[2] = (uint)(iVar4 == 1);
  local_40[3] = (uint)(iVar4 == 2);
  uVar1 = *(uint *)(param_1 + 0x3c);
  bVar11 = (*(byte *)(param_1 + 0x49e) & 2) == 0;
  local_30 = uVar1 >> 0xd & 1;
  local_2c = uVar1 >> 0xc & 1;
  local_24 = uVar1 >> 0x1f;
  if (bVar11) {
    local_20 = 0;
    local_28 = 0;
  }
  else {
    local_20 = 0x3f800000;
    local_28 = 1;
  }
  local_28 = (uint)!bVar11;
  local_14 = iVar3;
  local_1c = (uint)*(byte *)(param_1 + 0x440);
  local_18 = (int)*(short *)(param_1 + 0x4a0);
  puVar5 = local_40;
  puVar10 = auStack_b0;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_009cf830();
  if ((*(byte *)(param_1 + 0x484) & 1) == 0) {
    local_50 = 0x3f800000;
    local_4c = -1.0;
  }
  else {
    local_50 = *(undefined4 *)(param_1 + 0x46c);
    local_4c = -*(float *)(param_1 + 0x470);
  }
  uStack_88 = (uint)*(char *)(param_1 + 0x49c);
  uStack_90 = 0xee0998;
  puStack_8c = (undefined *)iVar3;
  puStack_84 = (undefined4 *)uStack_88;
  local_48 = (uint)(iVar4 == 1);
  local_44 = (uint)(iVar4 == 2);
  FUN_009d6500();
  iVar4 = (int)local_6c;
  if (iVar4 <= local_6a) {
    iVar9 = iVar4 * 0x70;
    do {
      if (((-1 < iVar4) && (iVar4 < *(short *)(iVar3 + 0x324))) &&
         (uStack_88 = *(int *)(iVar3 + 800) + iVar9, uStack_88 != 0)) {
        puStack_84 = &local_50;
        puStack_8c = (undefined *)0xee09da;
        FUN_009cf7c0();
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 0x70;
    } while (iVar4 <= local_6a);
  }
  iVar9 = 0;
  iVar4 = 0;
  if (0 < local_6c) {
    do {
      if (((-1 < iVar4) && (iVar4 < *(short *)(iVar3 + 0x324))) &&
         (iVar6 = *(int *)(iVar3 + 800) + iVar9, iVar6 != 0)) {
        puVar5 = (uint *)(iVar6 + 0x38);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 0x70;
    } while (iVar4 < local_6c);
  }
  iVar4 = local_6a + 1;
  if (iVar4 < iVar8) {
    iVar9 = iVar4 * 0x70;
    do {
      if (((-1 < iVar4) && (iVar4 < *(short *)(iVar3 + 0x324))) &&
         (iVar6 = *(int *)(iVar3 + 800) + iVar9, iVar6 != 0)) {
        puVar5 = (uint *)(iVar6 + 0x38);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar9 + 0x70;
    } while (iVar4 < iVar8);
  }
  if (*(char *)(param_1 + 0x49d) == '\x01') {
    *(undefined1 *)(iVar3 + 0x44d) = 4;
  }
  *(undefined1 *)(iVar3 + 0x44c) = *(undefined1 *)(local_64 + 0x2c);
  *(uint *)(iVar3 + 0x338) = (uint)*(byte *)(local_60 + 0x17);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
  return 1;
}

// 00EE0AA0  esp02::vf0C  size=32  [class]
void __fastcall esp02::vf0C(int param_1)

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

// 00EFEE50  FUN_00efee50  size=2033  [callgraph]
void __thiscall FUN_00efee50(int param_1,int param_2)

{
  float *_Src;
  uint *puVar1;
  int iVar2;
  void *_Src_00;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float fStack_14c;
  undefined1 auStack_148 [20];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  float afStack_f8 [2];
  undefined1 auStack_f0 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
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
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) * -1.0;
  }
  local_160 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_15c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_158 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_154 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  FUN_00ee0200();
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    if (&local_e0 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_e0,(float *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_160;
    local_ac = local_ac + local_15c;
    local_a8 = local_a8 + local_158;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      D3DXVec3TransformNormal();
      if (afStack_f8 != _Src) {
        FID_conflict__memcpy(afStack_f8,_Src,0x40);
      }
    }
    else {
      local_108 = *_Src;
      local_104[0] = *(float *)(iVar2 + 0x14);
      local_110 = *(float *)(iVar2 + 0x20);
      local_134 = *(float *)(iVar2 + 0x24);
      local_178 = *(float *)(iVar2 + 0x28);
      local_114 = *(float *)(iVar2 + 0x30);
      local_10c = *(float *)(iVar2 + 0x34);
      local_17c = *(float *)(iVar2 + 0x38);
      local_174 = local_104[0] * local_104[0] + local_108 * local_108 +
                  *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18);
      fVar5 = (float10)FUN_00fdef70();
      local_174 = (float)fVar5;
      local_178 = local_134 * local_134 + local_110 * local_110 + local_178 * local_178;
      local_170 = local_174;
      fVar5 = (float10)FUN_00fdef70();
      local_178 = (float)fVar5;
      local_17c = local_10c * local_10c + local_114 * local_114 + local_17c * local_17c;
      local_16c = local_178;
      fVar5 = (float10)FUN_00fdef70();
      local_17c = (float)fVar5;
      if (local_170 != 0.0) {
        local_170 = 1.0 / local_170;
      }
      if (local_16c != 0.0) {
        local_16c = 1.0 / local_16c;
      }
      local_168 = local_17c;
      if (local_17c != 0.0) {
        local_168 = 1.0 / local_17c;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      D3DXVec3TransformNormal();
    }
    fStack_c8 = fStack_c8 + local_168;
    fStack_c4 = fStack_c4 + fStack_164;
    fStack_c0 = fStack_c0 + local_160;
    D3DXMatrixMultiply(afStack_f8,param_1 + 0x200,afStack_f8);
  }
  local_b0 = local_b0 + local_130;
  local_ac = local_ac + local_12c;
  local_a8 = local_a8 + local_128;
  if (*(int *)(param_1 + 0x4a4) == 1) {
    local_17c = fStack_dc * fStack_dc + local_e0 * local_e0 + fStack_d8 * fStack_d8;
    local_170 = local_b0;
    local_16c = local_ac;
    local_168 = local_a8;
    fVar5 = (float10)FUN_00fdef70();
    local_160 = (float)fVar5;
    local_17c = fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8;
    fVar5 = (float10)FUN_00fdef70();
    local_15c = (float)fVar5;
    local_17c = fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8;
    fVar5 = (float10)FUN_00fdef70();
    local_17c = (float)fVar5;
    local_158 = local_17c;
    D3DXMatrixScaling();
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = 0.0;
    _Src_00 = (void *)FUN_00e9ff30();
    FID_conflict__memcpy(&local_b0,_Src_00,0x40);
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    D3DXMatrixMultiply(auStack_f0);
    local_b0 = local_170;
    local_ac = local_16c;
    local_a8 = local_168;
  }
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_64 = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_8c = 0x3f800000;
  local_a0 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  local_10c = *(float *)(param_2 + 0x70);
  local_108 = *(float *)(param_2 + 0x74);
  local_104[0] = *(float *)(param_2 + 0x78);
  FUN_00ddd140();
  D3DXMatrixMultiply();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  local_104[0] = *(float *)(uVar3 + 0x18) - 0.5;
  local_108 = *(float *)(uVar3 + 0x14) - 0.5;
  local_104[1] = 0.0;
  D3DXVec3TransformNormal(auStack_148,&local_108,afStack_f8);
  if ((float *)(param_2 + 0x10) != local_104) {
    FID_conflict__memcpy((float *)(param_2 + 0x10),local_104,0x40);
  }
  *(float *)(param_2 + 0x40) = local_154 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = local_150 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = fStack_14c + *(float *)(param_2 + 0x48);
  *(ushort *)(param_2 + 0xa2) = *(ushort *)(param_2 + 0xa2) | 4;
  __security_check_cookie(uStack_38 ^ (uint)&stack0xfffffe58);
  return;
}

// 00EFF650  esp02::thunk_vf10  size=5  [class]
void __fastcall esp02::thunk_vf10(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  fVar3 = (float10)FUN_00efca70();
  *(float *)(param_1 + 0x124) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  fVar3 = (float10)FUN_00efcaf0();
  fVar1 = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar2 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  fVar1 = fVar1 * fVar2;
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = fVar1 * *(float *)(param_1 + 0x128);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
    *(float *)(param_1 + 0x124) =
         *(float *)(*(int *)(param_1 + 0x28) + 0x1efc) * *(float *)(param_1 + 0x124);
  }
  return;
}

// 00EFF660  FUN_00eff660  size=780  [callgraph]
void __fastcall FUN_00eff660(int param_1)

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
  local_90 = local_a0 - *(float *)(param_1 + 0x4b0);
  local_8c = local_9c - *(float *)(param_1 + 0x4b4);
  local_88 = local_98 - *(float *)(param_1 + 0x4b8);
  local_84 = local_94 - *(float *)(param_1 + 0x4bc);
  local_ac = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
  if (0.0 < local_ac) {
    FUN_00ddf460(&local_90,&local_90);
  }
  *(float *)(param_1 + 0x4b0) = local_a0;
  *(float *)(param_1 + 0x4b4) = local_9c;
  *(float *)(param_1 + 0x4b8) = local_98;
  *(float *)(param_1 + 0x4bc) = local_94;
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

// 00F22BB0  FUN_00f22bb0  size=837  [callgraph]
void __thiscall FUN_00f22bb0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_94;
  uint local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68 [4];
  float local_58;
  float local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_00ec9530(*(undefined4 *)(param_1 + 0x110));
  local_68[2] = *(float *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x84);
  local_68[3] = *(float *)(param_1 + 0x254);
  local_58 = *(float *)(param_1 + 600);
  local_54 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x68) & 8) != 0)) {
    local_68[2] = *(float *)(iVar2 + 0x30) * local_68[2];
    local_68[3] = *(float *)(iVar2 + 0x34) * local_68[3];
    local_58 = *(float *)(iVar2 + 0x38) * local_58;
    local_54 = *(float *)(iVar2 + 0x3c) * local_54;
  }
  local_7c = (uint)(short)param_2[0xc9];
  if (local_7c == 0) goto LAB_00f22eab;
  local_80 = 0;
  local_94 = 0;
  local_84 = 0;
  local_88 = 0;
  Hw::cTexture::cTexture_6();
  if ((*(uint *)(param_1 + 0x38) >> 0x1b & 1) != 0) {
    iVar2 = cEsp::FixTexture(&local_84,&local_88,*(undefined4 *)(param_1 + 0x45c),
                             *(undefined2 *)(param_1 + 0x432),*(undefined4 *)(param_1 + 0x458),1);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016da7dc);
    }
    local_68[0] = 1.4013e-45;
    if ((*(uint *)(param_1 + 0x38) & 0x1000) == 0) {
      local_94 = 1;
    }
    else {
      local_68[1] = 7.00649e-45;
      local_94 = 2;
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar3 == (uint *)0x0)) {
LAB_00f22d50:
    FUN_009cca90(param_1,&DAT_016da7fc);
  }
  else {
    uVar5 = *puVar3;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (uVar5 == 0) goto LAB_00f22d50;
    if ((*(uint *)(param_1 + 0x3c) & 0x200000) == 0) {
      local_44 = 0;
    }
    else {
      local_44 = *(undefined4 *)(uVar5 + 0x54);
    }
    local_80 = 1;
    local_40 = *(undefined4 *)(uVar5 + 0x28);
    local_3c = *(undefined4 *)(uVar5 + 0x30);
    local_38 = *(undefined4 *)(uVar5 + 0x34);
    local_34 = *(undefined4 *)(uVar5 + 0x38);
    local_30 = *(undefined4 *)(uVar5 + 0x3c);
  }
  local_90 = 0;
  if (local_7c != 0) {
    local_8c = 0;
    do {
      if (((-1 < (int)local_90) && ((int)local_90 < (int)(short)param_2[0xc9])) &&
         (iVar2 = param_2[200] + local_8c, iVar2 != 0)) {
        uVar5 = 0;
        if (local_94 != 0) {
          do {
            FUN_00a09ab0(local_68[uVar5],local_84,local_88);
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_94);
        }
        if ((*(uint *)(param_1 + 0x484) & 1) == 0) {
          local_70 = 0x3f800000;
          local_6c = -1.0;
        }
        else {
          local_78 = *(undefined4 *)(param_1 + 0x46c);
          local_6c = -*(float *)(param_1 + 0x470);
          local_74 = local_6c;
          local_70 = local_78;
        }
        FUN_00a099d0(&local_70);
        FUN_00a099a0(param_1 + 0x47c);
        *(float *)(iVar2 + 0x20) = local_68[2];
        *(float *)(iVar2 + 0x24) = local_68[3];
        *(float *)(iVar2 + 0x28) = local_58;
        *(float *)(iVar2 + 0x2c) = local_54;
        if (local_80 != 0) {
          FUN_00a09840(local_44,local_40,local_3c,local_38,local_34,local_30,0);
        }
      }
      local_8c = local_8c + 0x70;
      local_90 = local_90 + 1;
    } while (local_90 < local_7c);
  }
  Hw::cTexture::cTexture_5();
LAB_00f22eab:
  iVar2 = FUN_009d5b00(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_009d58f0(param_1);
    if (iVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 0x38) & 8;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x38) & 4;
    }
    if (bVar1 == 0) {
      (**(code **)(*param_2 + 0x1c))();
      return;
    }
  }
  (**(code **)(*param_2 + 0x20))();
  return;
}

// 00F22F00  esp02::esp02  size=94  [class]
undefined4 * __fastcall esp02::esp02(undefined4 *param_1)

{
  cEspModel::cEspModel();
  *param_1 = vftable;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  return param_1;
}

// 00F26E60  FUN_00f26e60  size=47  [callgraph]
void FUN_00f26e60(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c800();
    FUN_00efee50(uVar2);
    FUN_00f22bb0(uVar2);
  }
  return;
}

// 00F26E90  FUN_00f26e90  size=348  [callgraph]
undefined4 __fastcall FUN_00f26e90(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar1 != (uint *)0x0)) {
    uVar4 = *puVar1;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar2 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
    if ((uVar4 != 0) && (iVar3 = FUN_00ec94a0(uVar4,param_1 + 0x114), iVar3 == 0)) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar1 != (uint *)0x0)) {
    uVar4 = *puVar1;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar2 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
    if (uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x49d) = *(undefined1 *)(uVar4 + 0x16);
      *(char *)(param_1 + 0x49c) = *(char *)(uVar4 + 0x17) + -1;
      if (*(char *)(uVar4 + 0x15) != '\0') {
        *(ushort *)(param_1 + 0x49e) = *(ushort *)(param_1 + 0x49e) | 2;
      }
      *(int *)(param_1 + 0x464) = (int)*(char *)(uVar4 + 0x11);
    }
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
      if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
        uVar2 = FUN_00f59ed0(3);
        FUN_00dd5650(&DAT_016597b4,uVar2);
      }
    }
    uVar4 = (uint)*(ushort *)(uVar4 + 6);
    *(uint *)(param_1 + 0x45c) = uVar4;
    if ((uVar4 < 0x100) || (0x10f < uVar4)) {
      switch(uVar4) {
      case 0xfc:
      case 0xfd:
      case 0xff:
        break;
      case 0xfe:
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x1000000;
        break;
      default:
        iVar3 = FUN_00f20580(uVar4,(undefined4 *)(param_1 + 0x458),*(undefined4 *)(param_1 + 100));
        if (iVar3 == 0) {
          FUN_009cca90(param_1,&DAT_016da6b4,*(undefined4 *)(param_1 + 0x45c));
          return 0;
        }
      }
    }
  }
  return 1;
}

// 00F27000  FUN_00f27000  size=220  [callgraph]
undefined4 __fastcall FUN_00f27000(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  piVar1 = (int *)(param_1 + 0x450);
  *piVar1 = 0;
  uVar6 = (uint)*(ushort *)(uVar5 + 4);
  if ((*(int *)(param_1 + 100) == 0) || (iVar4 = FUN_00f4a2d0(uVar6,piVar1), iVar4 == 0)) {
    iVar4 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3();
    if (uVar6 - 0xf000 < 0x20) {
      iVar4 = *(int *)(iVar4 + -0x37fd8 + uVar6 * 4);
LAB_00f27072:
      if (iVar4 != 0) {
        *piVar1 = iVar4;
        goto LAB_00f27078;
      }
    }
    else {
      if (uVar6 < 0x1001) {
        iVar4 = *(int *)(iVar4 + 0x28 + uVar6 * 4);
        goto LAB_00f27072;
      }
      *piVar1 = 0;
    }
    FUN_009cca90(param_1,&DAT_016da7ac,*(undefined2 *)(uVar5 + 4));
  }
  else {
LAB_00f27078:
    iVar4 = FUN_009d59e0(*(byte *)(param_1 + 0x49e) & 1 | 0x50000,*piVar1,param_1);
    if (iVar4 != 0) {
      FUN_00a7c970(iVar4);
      return 1;
    }
  }
  return 0;
}

// 00F270E0  esp02::vf08  size=1412  [class]
void __fastcall esp02::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 auStack_124 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_124;
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
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(int *)(param_1 + 0x4d4) != 0)) {
      if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
      }
      if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffbff;
      }
      if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff7ff;
      }
      if (*(int *)(param_1 + 0x4d4) != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x4d0);
        puStack_140 = (undefined1 *)0x0;
        iStack_144 = 0;
        uVar14 = 0x3f800000;
        uVar11 = *(undefined4 *)(param_1 + 0x4d8);
        uVar13 = 0xff;
        uVar12 = 0;
        uVar6 = *(uint *)(param_1 + 0x6c) | 0x40;
        uVar10 = *(undefined4 *)(param_1 + 0x74);
        uVar9 = *(undefined4 *)(param_1 + 0x78);
        uVar8 = 0;
        uVar7 = 0;
        uVar2 = FUN_00a81330(0,0,uVar9,uVar10,uVar6,uVar11,uVar5,0,0xff,0x3f800000);
        FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x4e4),
                     *(undefined4 *)(param_1 + 0x4ec),param_1 + 0x7c,uVar2,uVar7,uVar8,uVar9,uVar10,
                     uVar6,uVar11,uVar5,uVar12,uVar13,uVar14);
      }
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    if (*(int *)(param_1 + 0x4a4) == 2) {
      FUN_00ed53f0();
    }
    else if (*(int *)(param_1 + 0x4a4) == 3) {
      FUN_00eff660();
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c800();
      FUN_00efee50();
      FUN_00f22bb0();
    }
    if (*(int *)(param_1 + 0x4a4) == 4) {
      iVar3 = *(int *)(param_1 + 0x50);
      local_a8 = 0.0;
      local_ac = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_bc = 0.0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      local_a4 = 0x3f800000;
      local_b8 = 1.0;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      if (iVar3 == 0) {
        local_114 = 0.0;
        local_118 = 0.0;
        local_11c = 0.0;
        local_120 = 0.0;
      }
      else {
        local_120 = *(float *)(iVar3 + 0x40);
        local_11c = *(float *)(iVar3 + 0x44);
        local_118 = *(float *)(iVar3 + 0x48);
        local_114 = *(float *)(iVar3 + 0x4c);
      }
      local_110 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
      local_10c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
      local_108 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
      local_104 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
      local_100 = local_110 + local_120;
      local_fc = local_10c + local_11c;
      local_f8 = local_108 + local_118;
      local_f4 = local_104 + local_114;
      puStack_140 = (undefined1 *)0xf2737d;
      D3DXVec3TransformNormal();
      puStack_140 = auStack_ec;
      local_bc = local_bc + local_11c;
      iStack_144 = param_1 + 0x200;
      local_b8 = local_118 + local_b8;
      local_b4 = local_114 + local_b4;
      D3DXMatrixMultiply(puStack_140);
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
      D3DXMatrixMultiply(&local_f8,&local_b8,&local_f8);
      iStack_144 = *(int *)(iVar1 + 0x70);
      puStack_140 = *(undefined1 **)(iVar1 + 0x74);
      FUN_00ddd140(&uStack_84,&iStack_144);
      D3DXMatrixMultiply(&local_104,&uStack_84,&local_104);
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar4 == (uint *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar4;
        if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
          uVar5 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar5);
        }
      }
      local_11c = *(float *)(uVar6 + 0x18) - 0.5;
      local_120 = *(float *)(uVar6 + 0x14) - 0.5;
      local_118 = 0.0;
      D3DXVec3TransformNormal(&puStack_140,&local_120,&local_110);
      local_b0 = local_110 + local_b0;
      local_ac = local_10c + local_ac;
      local_a8 = local_108 + local_a8;
      puStack_140 = (undefined1 *)0xf27608;
      FID_conflict__memcpy((void *)(iVar1 + 0x10),&local_e0,0x40);
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    FUN_00ee0500();
    if (((((*(byte *)(param_1 + 0x3c) & 8) != 0) && (*(int *)(param_1 + 0x120) == 0)) &&
        (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c800(), *(char *)(iVar1 + 0x470) != '\0')) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_124);
  return;
}

// 00F27670  FUN_00f27670  size=226  [callgraph]
void __fastcall FUN_00f27670(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  if ((((*(byte *)(param_1 + 0x6c) & 1) == 0) && ((*(byte *)(param_1 + 0x38) & 2) == 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar2 = *(float *)(param_1 + 0x3bc);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x3c4);
  }
  *(float *)(param_1 + 0x110) = fVar2 * *(float *)(param_1 + 0x3c0);
  if (((*(int *)(param_1 + 0x50) != 0) && (*(short *)(param_1 + 0x400) != -1)) &&
     (fVar2 = (float)(int)*(short *)(param_1 + 0x400),
     fVar2 < *(float *)(param_1 + 0x118) != (fVar2 == *(float *)(param_1 + 0x118)))) {
    FUN_00edc5c0(*piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  FUN_00ed53f0();
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    uVar4 = FUN_00a7c800();
    FUN_00efee50(uVar4);
    FUN_00f22bb0(uVar4);
  }
  FUN_00ee0500();
  return;
}

// 00F2DBF0  FUN_00f2dbf0  size=54  [callgraph]
bool FUN_00f2dbf0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f26e90();
  if (iVar1 != 0) {
    iVar1 = FUN_00f27000();
    if (iVar1 != 0) {
      uVar2 = FUN_00a81330();
      iVar1 = FUN_00ee0710(uVar2);
      return iVar1 != 0;
    }
  }
  return false;
}

// 00F2DC30  esp02::vf04  size=606  [class]
undefined4 __thiscall
esp02::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  short *psVar6;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4d0) = param_4;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 == (undefined4 *)0x0)) {
    psVar6 = (short *)0x0;
  }
  else {
    psVar6 = (short *)*puVar4;
    if ((short *)((int)psVar6 + 0xfU & 0xfffffff0) != psVar6) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar6 != (short *)0x0) {
      switch((int)*psVar6) {
      case 0:
        *(undefined4 *)(param_1 + 0x4a4) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x4a4) = 2;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x4a4) = 1;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x4a4) = 4;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x4a4) = 3;
        break;
      default:
        FUN_009cca90(param_1,&DAT_016da828,(int)*psVar6);
        return 0;
      }
      *(int *)(param_1 + 0x4d4) = (int)*(char *)((int)psVar6 + 0x13);
      *(int *)(param_1 + 0x4d8) = (int)(char)psVar6[10];
      *(int *)(param_1 + 0x4dc) = (int)psVar6[7];
      *(short *)(param_1 + 0x4e0) = psVar6[6];
    }
  }
  iVar3 = FUN_00f26e90();
  if ((iVar3 == 0) || (iVar3 = FUN_00f27000(), iVar3 == 0)) {
    return 0;
  }
  uVar5 = FUN_00a81330();
  iVar3 = FUN_00ee0710(uVar5);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00a7c800();
  if ((psVar6 != (short *)0x0) && (*psVar6 == 1)) {
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1bc);
    FUN_00f27670();
  }
  iVar2 = *(int *)(param_1 + 0x4dc);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
    }
    else {
      FUN_009cca90(param_1,&DAT_016da848,iVar2);
    }
  }
  if (psVar6 != (short *)0x0) {
    cVar1 = (char)psVar6[8];
    if (cVar1 != '\0') {
      *(float *)(param_1 + 0x468) = (float)(int)cVar1;
    }
    if ((char)psVar6[9] != '\0') {
      *(float *)(param_1 + 0x468) = (float)(int)(char)psVar6[9] / 100.0;
    }
    *(short *)(param_1 + 0x4e2) = psVar6[1];
    *(int *)(param_1 + 0x4ec) = (int)psVar6[2];
    if (cVar1 != '\0') {
      FUN_00ee05a0();
    }
  }
  if (*(int *)(param_1 + 0x4d4) != 0) {
    FUN_00f0da60();
  }
  switch(*(undefined2 *)(param_1 + 0x4e0)) {
  case 1:
    uVar5 = 2;
    break;
  case 2:
    uVar5 = 3;
    break;
  case 3:
    uVar5 = 4;
    break;
  case 4:
    uVar5 = 5;
    break;
  case 5:
    uVar5 = 6;
    break;
  default:
    goto switchD_00f2de57_default;
  }
  iVar3 = FUN_009d4800(uVar5);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
switchD_00f2de57_default:
  return 1;
}

// 00F40720  esp02::vf00  size=72  [class]
undefined4 * __thiscall esp02::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

