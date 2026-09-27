// src/effect/EffectShaderSetting.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6DA20..00F78730, 110 functions

#include "mgrr.h"

// 00F6DA20  EffectShaderSetting::ShaderSetUpShimmerSubFade  size=423  [class]
void EffectShaderSetting::ShaderSetUpShimmerSubFade(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec828,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec7f8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec84c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9ec50(&DAT_01eec834,param_1 + 0xa0,4);
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec840,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec800 = DAT_01eec800 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec800 = DAT_01eec800 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec800 = DAT_01eec800 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec800 = DAT_01eec800 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec7ec,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec7e0,local_60);
  FUN_00f990e0(&DAT_01eec7b8);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2ce4,
                 "EffectShaderSetting::ShaderSetUpShimmerSubFade: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6DBD0  EffectShaderSetting::ShaderSetUpShimmerBlur  size=405  [class]
void EffectShaderSetting::ShaderSetUpShimmerBlur(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec714,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec720,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eec708,*(undefined4 *)(param_1 + 0x18));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec72c,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec710 = DAT_01eec710 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec710 = DAT_01eec710 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec710 = DAT_01eec710 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec710 = DAT_01eec710 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec6fc,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec6f0,local_60);
  FUN_00f990e0(&DAT_01eec6c8);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2d34,
                 "EffectShaderSetting::ShaderSetUpShimmerBlur: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6DD70  EffectShaderSetting::ShaderSetUpShimmerBlurSoftParticle  size=425  [class]
void EffectShaderSetting::ShaderSetUpShimmerBlurSoftParticle(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec784,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eec790,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eec778,*(undefined4 *)(param_1 + 0x18));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec79c,uVar2);
  FUN_00fa1d50(&DAT_01eec7a8,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec780 = DAT_01eec780 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec780 = DAT_01eec780 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec780 = DAT_01eec780 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec780 = DAT_01eec780 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec76c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec760,local_60);
  FUN_00f990e0(&DAT_01eec738);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2dd4,
                 "EffectShaderSetting::ShaderSetUpShimmerBlurSoftParticle: ALPHA WRITE ENABLE = TRUE"
                );
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6DF20  FUN_00f6df20  size=230  [between]
void FUN_00f6df20(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7ea0,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee7ea8 = DAT_01ee7ea8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee7ea8 = DAT_01ee7ea8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7ea8 = DAT_01ee7ea8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee7ea8 = DAT_01ee7ea8 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee7e88,local_60);
  FUN_00f990e0(&DAT_01ee7e60);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F6E010  FUN_00f6e010  size=306  [between]
void FUN_00f6e010(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7ba8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7bb4,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7bb0 = DAT_01ee7bb0 & 0xff333fff | 0x333000;
        DAT_01ee7bbc = DAT_01ee7bbc & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7bb0 = DAT_01ee7bb0 & 0xff111fff | 0x111000;
      DAT_01ee7bbc = DAT_01ee7bbc & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7bb0 = DAT_01ee7bb0 & 0xff333fff | 0x333000;
    DAT_01ee7bbc = DAT_01ee7bbc & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee7b90,local_60);
  FUN_00f990e0(&DAT_01ee7b68);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F6E150  EffectShaderSetting::ShaderSetUpShimmerVC  size=316  [class]
void EffectShaderSetting::ShaderSetUpShimmerVC(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec61c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec610,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec634,*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec628,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec618 = DAT_01eec618 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec618 = DAT_01eec618 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec618 = DAT_01eec618 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec618 = DAT_01eec618 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01eec5f8,local_60);
  FUN_00f990e0(&DAT_01eec5d0);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2e20,
                 "EffectShaderSetting::ShaderSetUpShimmerVC: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F6E290  EffectShaderSetting::ShaderSetUpShimmerTexBlend  size=434  [class]
void EffectShaderSetting::ShaderSetUpShimmerTexBlend(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec68c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec680,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec6a4,*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec698,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec688 = DAT_01eec688 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec688 = DAT_01eec688 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec688 = DAT_01eec688 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec688 = DAT_01eec688 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec674,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec668,local_60);
  FUN_00f9ec50(&DAT_01eec6bc,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01eec6b0,*(undefined4 *)(param_1 + 0x20));
  FUN_00f990e0(&DAT_01eec640);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2e24,
                 "EffectShaderSetting::ShaderSetUpShimmerTexBlend: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6E450  FUN_00f6e450  size=306  [between]
void FUN_00f6e450(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7c58,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7c64,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7c60 = DAT_01ee7c60 & 0xff333fff | 0x333000;
        DAT_01ee7c6c = DAT_01ee7c6c & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7c60 = DAT_01ee7c60 & 0xff111fff | 0x111000;
      DAT_01ee7c6c = DAT_01ee7c6c & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7c60 = DAT_01ee7c60 & 0xff333fff | 0x333000;
    DAT_01ee7c6c = DAT_01ee7c6c & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee7c40,local_60);
  FUN_00f990e0(&DAT_01ee7c18);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F6E590  FUN_00f6e590  size=413  [between]
void FUN_00f6e590(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec9c0,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec9a8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec9b4,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eec9b0 = DAT_01eec9b0 & 0xff333fff | 0x333000;
        DAT_01eec9bc = DAT_01eec9bc & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eec9b0 = DAT_01eec9b0 & 0xff111fff | 0x111000;
      DAT_01eec9bc = DAT_01eec9bc & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eec9b0 = DAT_01eec9b0 & 0xff333fff | 0x333000;
    DAT_01eec9bc = DAT_01eec9bc & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eec99c,&local_70,4);
  FUN_00f9eec0(&DAT_01eec990,local_60);
  FUN_00f990e0(&DAT_01eec968);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6E730  FUN_00f6e730  size=413  [between]
void FUN_00f6e730(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eecbe8,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eecbd0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecbdc,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eecbd8 = DAT_01eecbd8 & 0xff333fff | 0x333000;
        DAT_01eecbe4 = DAT_01eecbe4 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eecbd8 = DAT_01eecbd8 & 0xff111fff | 0x111000;
      DAT_01eecbe4 = DAT_01eecbe4 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eecbd8 = DAT_01eecbd8 & 0xff333fff | 0x333000;
    DAT_01eecbe4 = DAT_01eecbe4 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eecbc4,&local_70,4);
  FUN_00f9eec0(&DAT_01eecbb8,local_60);
  FUN_00f990e0(&DAT_01eecb90);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6E8D0  FUN_00f6e8d0  size=432  [between]
void FUN_00f6e8d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eeca28,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eeca34,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eeca10,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeca1c,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eeca18 = DAT_01eeca18 & 0xff333fff | 0x333000;
        DAT_01eeca24 = DAT_01eeca24 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eeca18 = DAT_01eeca18 & 0xff111fff | 0x111000;
      DAT_01eeca24 = DAT_01eeca24 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eeca18 = DAT_01eeca18 & 0xff333fff | 0x333000;
    DAT_01eeca24 = DAT_01eeca24 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eeca04,&local_70,4);
  FUN_00f9eec0(&DAT_01eec9f8,local_60);
  FUN_00f990e0(&DAT_01eec9d0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6EA80  FUN_00f6ea80  size=432  [between]
void FUN_00f6ea80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eeca98,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eecaa4,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eeca80,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeca8c,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eeca88 = DAT_01eeca88 & 0xff333fff | 0x333000;
        DAT_01eeca94 = DAT_01eeca94 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eeca88 = DAT_01eeca88 & 0xff111fff | 0x111000;
      DAT_01eeca94 = DAT_01eeca94 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eeca88 = DAT_01eeca88 & 0xff333fff | 0x333000;
    DAT_01eeca94 = DAT_01eeca94 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eeca74,&local_70,4);
  FUN_00f9eec0(&DAT_01eeca68,local_60);
  FUN_00f990e0(&DAT_01eeca40);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6EC30  FUN_00f6ec30  size=432  [between]
void FUN_00f6ec30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eecb08,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eecb14,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eecaf0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecafc,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eecaf8 = DAT_01eecaf8 & 0xff333fff | 0x333000;
        DAT_01eecb04 = DAT_01eecb04 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eecaf8 = DAT_01eecaf8 & 0xff111fff | 0x111000;
      DAT_01eecb04 = DAT_01eecb04 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eecaf8 = DAT_01eecaf8 & 0xff333fff | 0x333000;
    DAT_01eecb04 = DAT_01eecb04 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eecae4,&local_70,4);
  FUN_00f9eec0(&DAT_01eecad8,local_60);
  FUN_00f990e0(&DAT_01eecab0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6EDE0  FUN_00f6ede0  size=432  [between]
void FUN_00f6ede0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eecb78,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eecb84,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eecb60,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecb6c,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01eecb68 = DAT_01eecb68 & 0xff333fff | 0x333000;
        DAT_01eecb74 = DAT_01eecb74 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eecb68 = DAT_01eecb68 & 0xff111fff | 0x111000;
      DAT_01eecb74 = DAT_01eecb74 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01eecb68 = DAT_01eecb68 & 0xff333fff | 0x333000;
    DAT_01eecb74 = DAT_01eecb74 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eecb54,&local_70,4);
  FUN_00f9eec0(&DAT_01eecb48,local_60);
  FUN_00f990e0(&DAT_01eecb20);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6EF90  FUN_00f6ef90  size=394  [between]
void FUN_00f6ef90(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7c00,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7c0c,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7c08 = DAT_01ee7c08 & 0xff333fff | 0x333000;
        DAT_01ee7c14 = DAT_01ee7c14 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7c08 = DAT_01ee7c08 & 0xff111fff | 0x111000;
      DAT_01ee7c14 = DAT_01ee7c14 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7c08 = DAT_01ee7c08 & 0xff333fff | 0x333000;
    DAT_01ee7c14 = DAT_01ee7c14 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7bf4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7be8,local_60);
  FUN_00f990e0(&DAT_01ee7bc0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F120  FUN_00f6f120  size=427  [between]
void FUN_00f6f120(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7cb0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7cbc,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7cb8 = DAT_01ee7cb8 & 0xff333fff | 0x333000;
        DAT_01ee7cc4 = DAT_01ee7cc4 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7cb8 = DAT_01ee7cb8 & 0xff111fff | 0x111000;
      DAT_01ee7cc4 = DAT_01ee7cc4 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7cb8 = DAT_01ee7cb8 & 0xff333fff | 0x333000;
    DAT_01ee7cc4 = DAT_01ee7cc4 & 0xff333fff | 0x333000;
  }
  FUN_00f9ec50(&DAT_01ee7cd4,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee7cc8,*(undefined4 *)(param_1 + 0x20));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7ca4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7c98,local_60);
  FUN_00f990e0(&DAT_01ee7c70);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F2D0  FUN_00f6f2d0  size=339  [between]
void FUN_00f6f2d0(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01ee7d20,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7d2c,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        FUN_00f5e9c0(1);
      }
      else {
        DAT_01ee7d28 = DAT_01ee7d28 & 0xff333fff | 0x333000;
        DAT_01ee7d34 = DAT_01ee7d34 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee7d28 = DAT_01ee7d28 & 0xff111fff | 0x111000;
      DAT_01ee7d34 = DAT_01ee7d34 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee7d28 = DAT_01ee7d28 & 0xff333fff | 0x333000;
    DAT_01ee7d34 = DAT_01ee7d34 & 0xff333fff | 0x333000;
  }
  FUN_00f9ec50(&DAT_01ee7d44,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee7d38,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9eec0(&DAT_01ee7d08,local_60);
  FUN_00f990e0(&DAT_01ee7ce0);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F6F430  FUN_00f6f430  size=348  [between]
void FUN_00f6f430(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee7f78 + 0x10))(1);
      }
      else {
        DAT_01ee7fc0 = DAT_01ee7fc0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7fc0 = DAT_01ee7fc0 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee7f78 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee7fc4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee7fb8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7fd0,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee7fac,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee7fa0,local_60);
  FUN_00f990e0(&DAT_01ee7f78);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F590  FUN_00f6f590  size=348  [between]
void FUN_00f6f590(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee7fe0 + 0x10))(1);
      }
      else {
        DAT_01ee8028 = DAT_01ee8028 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8028 = DAT_01ee8028 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee7fe0 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee802c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8020,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8038,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8014,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8008,local_60);
  FUN_00f990e0(&DAT_01ee7fe0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F6F0  FUN_00f6f6f0  size=335  [between]
void FUN_00f6f6f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8048 + 0x10))(1);
      }
      else {
        DAT_01ee8090 = DAT_01ee8090 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8090 = DAT_01ee8090 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8048 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee8094,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8088,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee80a0,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee807c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8070,local_60);
  FUN_00f990e0(&DAT_01ee8048);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F840  FUN_00f6f840  size=368  [between]
void FUN_00f6f840(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee80b0 + 0x10))(1);
      }
      else {
        DAT_01ee80f8 = DAT_01ee80f8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee80f8 = DAT_01ee80f8 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee80b0 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee80fc,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee80f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8108,DAT_01ee5420);
  FUN_00f9ec50(&DAT_01ee8120,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee8114,*(undefined4 *)(param_1 + 0x20));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee80e4,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee80d8,local_60);
  FUN_00f990e0(&DAT_01ee80b0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6F9B0  FUN_00f6f9b0  size=378  [between]
void FUN_00f6f9b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      DAT_01ee8178 = DAT_01ee8178 & 0xff111fff | 0x111000;
      DAT_01ee819c = DAT_01ee819c & 0xff333fff | 0x333000;
      goto LAB_00f6fa61;
    }
    if ((uVar1 & 0x400) != 0) {
      DAT_01ee8178 = DAT_01ee8178 & 0xff333fff | 0x333000;
      DAT_01ee819c = DAT_01ee819c & 0xff111fff | 0x111000;
      goto LAB_00f6fa61;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  (**(code **)(DAT_01ee8130 + 0x10))(uVar3);
LAB_00f6fa61:
  FUN_00f9ec50(&DAT_01ee817c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8170,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8194,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee8188,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8164,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8158,local_60);
  FUN_00f990e0(&DAT_01ee8130);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6FB30  FUN_00f6fb30  size=378  [between]
void FUN_00f6fb30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      DAT_01ee81e8 = DAT_01ee81e8 & 0xff111fff | 0x111000;
      DAT_01ee820c = DAT_01ee820c & 0xff333fff | 0x333000;
      goto LAB_00f6fbe1;
    }
    if ((uVar1 & 0x400) != 0) {
      DAT_01ee81e8 = DAT_01ee81e8 & 0xff333fff | 0x333000;
      DAT_01ee820c = DAT_01ee820c & 0xff111fff | 0x111000;
      goto LAB_00f6fbe1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  (**(code **)(DAT_01ee81a0 + 0x10))(uVar3);
LAB_00f6fbe1:
  FUN_00f9ec50(&DAT_01ee81ec,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee81e0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8204,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee81f8,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee81d4,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee81c8,local_60);
  FUN_00f990e0(&DAT_01ee81a0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6FCB0  FUN_00f6fcb0  size=378  [between]
void FUN_00f6fcb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      DAT_01ee8258 = DAT_01ee8258 & 0xff111fff | 0x111000;
      DAT_01ee827c = DAT_01ee827c & 0xff333fff | 0x333000;
      goto LAB_00f6fd61;
    }
    if ((uVar1 & 0x400) != 0) {
      DAT_01ee8258 = DAT_01ee8258 & 0xff333fff | 0x333000;
      DAT_01ee827c = DAT_01ee827c & 0xff111fff | 0x111000;
      goto LAB_00f6fd61;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  (**(code **)(DAT_01ee8210 + 0x10))(uVar3);
LAB_00f6fd61:
  FUN_00f9ec50(&DAT_01ee825c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8250,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8274,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee8268,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8244,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8238,local_60);
  FUN_00f990e0(&DAT_01ee8210);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6FE30  FUN_00f6fe30  size=378  [between]
void FUN_00f6fe30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      DAT_01ee82c8 = DAT_01ee82c8 & 0xff111fff | 0x111000;
      DAT_01ee82ec = DAT_01ee82ec & 0xff333fff | 0x333000;
      goto LAB_00f6fee1;
    }
    if ((uVar1 & 0x400) != 0) {
      DAT_01ee82c8 = DAT_01ee82c8 & 0xff333fff | 0x333000;
      DAT_01ee82ec = DAT_01ee82ec & 0xff111fff | 0x111000;
      goto LAB_00f6fee1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  (**(code **)(DAT_01ee8280 + 0x10))(uVar3);
LAB_00f6fee1:
  FUN_00f9ec50(&DAT_01ee82cc,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee82c0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee82e4,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee82d8,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee82b4,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee82a8,local_60);
  FUN_00f990e0(&DAT_01ee8280);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F6FFB0  FUN_00f6ffb0  size=411  [between]
void FUN_00f6ffb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) != 0) {
      DAT_01ee8338 = DAT_01ee8338 & 0xff111fff | 0x111000;
      DAT_01ee835c = DAT_01ee835c & 0xff333fff | 0x333000;
      goto LAB_00f70061;
    }
    if ((uVar1 & 0x400) != 0) {
      DAT_01ee8338 = DAT_01ee8338 & 0xff333fff | 0x333000;
      DAT_01ee835c = DAT_01ee835c & 0xff111fff | 0x111000;
      goto LAB_00f70061;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  (**(code **)(DAT_01ee82f0 + 0x10))(uVar3);
LAB_00f70061:
  FUN_00f9ec50(&DAT_01ee833c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8330,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8354,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee8348,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8324,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8318,local_60);
  FUN_00f9ec50(&DAT_01ee836c,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee8360,*(undefined4 *)(param_1 + 0x20));
  FUN_00f990e0(&DAT_01ee82f0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70150  FUN_00f70150  size=475  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f70150(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_88 [4];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_88;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8378 + 0x10))(1);
      }
      else {
        DAT_01ee83c0 = DAT_01ee83c0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee83c0 = DAT_01ee83c0 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8378 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee83c4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee83b8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee83d0,DAT_01ee5420);
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  fStack_80 = _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar1 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar1 * 0xc];
  fStack_7c = (float)(&DAT_01f8e6f4)[uVar1 * 0xc] * _DAT_018d5df4 *
              (float)(&DAT_01f8e6f4)[uVar1 * 0xc] * _DAT_018d5df4;
  fStack_84 = _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar1 * 0xc];
  fStack_78 = fStack_84 * fStack_84;
  uStack_74 = (&DAT_01f8e6fc)[uVar1 * 0xc];
  FUN_00f9ec50(&DAT_01ee83dc,&fStack_80,4);
  FUN_00f5c660((&DAT_01f8e6e0)[uVar1 * 0xc],(&DAT_01f8e6e4)[uVar1 * 0xc]);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee83ac,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee83a0,local_60);
  FUN_00f990e0(&DAT_01ee8378);
  __security_check_cookie(local_14 ^ (uint)auStack_88);
  return;
}

// 00F70330  FUN_00f70330  size=335  [between]
void FUN_00f70330(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee83f8 + 0x10))(1);
      }
      else {
        DAT_01ee8440 = DAT_01ee8440 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8440 = DAT_01ee8440 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee83f8 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee8444,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8438,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8450,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee842c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8420,local_60);
  FUN_00f990e0(&DAT_01ee83f8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70480  FUN_00f70480  size=335  [between]
void FUN_00f70480(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8460 + 0x10))(1);
      }
      else {
        DAT_01ee84a8 = DAT_01ee84a8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee84a8 = DAT_01ee84a8 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8460 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee84ac,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee84a0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee84b8,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8494,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8488,local_60);
  FUN_00f990e0(&DAT_01ee8460);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F705D0  FUN_00f705d0  size=335  [between]
void FUN_00f705d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee84c8 + 0x10))(1);
      }
      else {
        DAT_01ee8510 = DAT_01ee8510 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8510 = DAT_01ee8510 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee84c8 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee8514,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8508,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8520,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee84fc,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee84f0,local_60);
  FUN_00f990e0(&DAT_01ee84c8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70720  FUN_00f70720  size=368  [between]
void FUN_00f70720(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8530 + 0x10))(1);
      }
      else {
        DAT_01ee8578 = DAT_01ee8578 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8578 = DAT_01ee8578 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8530 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee857c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8570,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8588,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8564,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8558,local_60);
  FUN_00f9ec50(&DAT_01ee85a0,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee8594,*(undefined4 *)(param_1 + 0x20));
  FUN_00f990e0(&DAT_01ee8530);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70890  FUN_00f70890  size=335  [between]
void FUN_00f70890(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee84c8 + 0x10))(1);
      }
      else {
        DAT_01ee8510 = DAT_01ee8510 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8510 = DAT_01ee8510 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee84c8 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee85fc,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee85f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8608,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee85e4,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee85d8,local_60);
  FUN_00f990e0(&DAT_01ee85b0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F709E0  FUN_00f709e0  size=334  [between]
void FUN_00f709e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee8664,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8658,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8670,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8618 + 0x10))(1);
      }
      else {
        DAT_01ee8660 = DAT_01ee8660 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8660 = DAT_01ee8660 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8618 + 0x10))(3);
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee864c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee8640,local_60);
  FUN_00f990e0(&DAT_01ee8618);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70B30  FUN_00f70b30  size=334  [between]
void FUN_00f70b30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee86cc,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee86c0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee86d8,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8680 + 0x10))(1);
      }
      else {
        DAT_01ee86c8 = DAT_01ee86c8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee86c8 = DAT_01ee86c8 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8680 + 0x10))(3);
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee86b4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee86a8,local_60);
  FUN_00f990e0(&DAT_01ee8680);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70C80  FUN_00f70c80  size=318  [between]
void FUN_00f70c80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee8734,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8728,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8730 = DAT_01ee8730 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8730 = DAT_01ee8730 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8730 = DAT_01ee8730 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8730 = DAT_01ee8730 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee871c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee8710,local_60);
  FUN_00f990e0(&DAT_01ee86e8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70DC0  FUN_00f70dc0  size=318  [between]
void FUN_00f70dc0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee878c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8780,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8788 = DAT_01ee8788 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8788 = DAT_01ee8788 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8788 = DAT_01ee8788 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8788 = DAT_01ee8788 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8774,&local_70,4);
  FUN_00f9eec0(&DAT_01ee8768,local_60);
  FUN_00f990e0(&DAT_01ee8740);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F70F00  FUN_00f70f00  size=365  [between]
void FUN_00f70f00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee87e4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee87f0,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee87d8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee87fc,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee8808,*(undefined4 *)(param_1 + 0x20));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee87e0 = DAT_01ee87e0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee87e0 = DAT_01ee87e0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee87e0 = DAT_01ee87e0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee87e0 = DAT_01ee87e0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee87cc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee87c0,local_60);
  FUN_00f990e0(&DAT_01ee8798);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71070  FUN_00f71070  size=365  [between]
void FUN_00f71070(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee8864,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8870,param_1 + 0xc0,4);
  FUN_00fa1d50(&DAT_01ee8858,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee887c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee8888,*(undefined4 *)(param_1 + 0x20));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8860 = DAT_01ee8860 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8860 = DAT_01ee8860 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8860 = DAT_01ee8860 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8860 = DAT_01ee8860 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee884c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee8840,local_60);
  FUN_00f990e0(&DAT_01ee8818);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F711E0  FUN_00f711e0  size=335  [between]
void FUN_00f711e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee88e4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee88d8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee88f0,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee88e0 = DAT_01ee88e0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee88e0 = DAT_01ee88e0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee88e0 = DAT_01ee88e0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee88e0 = DAT_01ee88e0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee88cc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee88c0,local_60);
  FUN_00f990e0(&DAT_01ee8898);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71330  FUN_00f71330  size=458  [between]
void FUN_00f71330(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee7dcc,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee7d90,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7dd8,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = FUN_00eaf7d0();
  if (*(int *)(iVar2 + 0xc) < 10) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)(iVar2 + 0x10) == 0) {
    uVar3 = 9;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x1dc);
  }
  FUN_00eaf7d0(uVar3);
  uVar3 = FUN_00fa0740(uVar3);
  FUN_00fa1d50(&DAT_01ee7de4,uVar3);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee7d98 = DAT_01ee7d98 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee7d98 = DAT_01ee7d98 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7d98 = DAT_01ee7d98 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee7d98 = DAT_01ee7d98 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee7d84,&local_70,4);
  FUN_00f9eec0(&DAT_01ee7d78,local_60);
  FUN_00f9eec0(&DAT_01ee7db4,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01ee7da8,param_1 + 0x40);
  uVar3 = FUN_00fb2060();
  FUN_00f9ec50(&DAT_01ee7dc0,uVar3,4);
  FUN_00f990e0(&DAT_01ee7d50);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71500  FUN_00f71500  size=337  [between]
void FUN_00f71500(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eecd1c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eecd10,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecd28,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eecd18 = DAT_01eecd18 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eecd18 = DAT_01eecd18 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eecd18 = DAT_01eecd18 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eecd18 = DAT_01eecd18 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eecd04,&local_70,4);
  FUN_00f9eec0(&DAT_01eeccf8,local_60);
  FUN_00f990e0(&DAT_01eeccd0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71660  FUN_00f71660  size=337  [between]
void FUN_00f71660(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eecd84,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eecd78,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecd90,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eecd80 = DAT_01eecd80 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eecd80 = DAT_01eecd80 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eecd80 = DAT_01eecd80 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eecd80 = DAT_01eecd80 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eecd6c,&local_70,4);
  FUN_00f9eec0(&DAT_01eecd60,local_60);
  FUN_00f990e0(&DAT_01eecd38);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F717C0  FUN_00f717c0  size=511  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f717c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_88 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_88;
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  if ((float *)(&DAT_01f8e6e0 + uVar1 * 0xc) != (float *)0x0) {
    local_70 = _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar1 * 0xc] *
               _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar1 * 0xc];
    local_6c = (float)(&DAT_01f8e6f4)[uVar1 * 0xc] * _DAT_018d5df4 *
               (float)(&DAT_01f8e6f4)[uVar1 * 0xc] * _DAT_018d5df4;
    local_84 = _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar1 * 0xc];
    local_68 = local_84 * local_84;
    local_64 = (&DAT_01f8e6fc)[uVar1 * 0xc];
    FUN_00f9ec50(&DAT_01eece04,&local_70,4);
    local_80 = (float)(&DAT_01f8e6e0)[uVar1 * 0xc];
    local_7c = (float)(&DAT_01f8e6e4)[uVar1 * 0xc];
    local_78 = 0.0;
    local_74 = 0.0;
    FUN_00f9ec50(&DAT_01eece10,&local_80,4);
    FUN_009e0150(local_60,param_1);
    FUN_00f9ec50(&DAT_01eecdec,param_1 + 0x90,4);
    FUN_00fa1d50(&DAT_01eecde0,*(undefined4 *)(param_1 + 0x18));
    FUN_00fa1d50(&DAT_01eecdf8,DAT_01ee5420);
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 0x400) == 0) {
          DAT_01eecde8 = DAT_01eecde8 & 0xff111fff | 0x111000;
        }
        else {
          DAT_01eecde8 = DAT_01eecde8 & 0xff333fff | 0x333000;
        }
      }
      else {
        DAT_01eecde8 = DAT_01eecde8 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01eecde8 = DAT_01eecde8 & 0xff333fff | 0x333000;
    }
    iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
    local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
    local_7c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
    local_78 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
    local_74 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
    FUN_00f9ec50(&DAT_01eecdd4,&local_80,4);
    FUN_00f9eec0(&DAT_01eecdc8,local_60);
    FUN_00f990e0(&DAT_01eecda0);
    __security_check_cookie(local_14 ^ (uint)auStack_88);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_88);
  return;
}

// 00F719C0  FUN_00f719c0  size=354  [between]
void FUN_00f719c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eece6c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eece60,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eece84,DAT_01ee5418);
  FUN_00fa1d50(&DAT_01eece78,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eece68 = DAT_01eece68 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eece68 = DAT_01eece68 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eece68 = DAT_01eece68 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eece68 = DAT_01eece68 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eece54,&local_70,4);
  FUN_00f9eec0(&DAT_01eece48,local_60);
  FUN_00f990e0(&DAT_01eece20);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71B30  FUN_00f71b30  size=390  [between]
void FUN_00f71b30(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfStack_108;
  undefined1 *puStack_104;
  undefined1 auStack_fc [12];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [64];
  undefined4 local_a0 [13];
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_fc;
  puStack_104 = (undefined1 *)param_1;
  pfStack_108 = (float *)local_a0;
  FUN_009d5e00(local_e0);
  FUN_00f9ec50(&DAT_01ee7f54,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee7f48,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee7f60,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee7f50 = DAT_01ee7f50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee7f50 = DAT_01ee7f50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee7f50 = DAT_01ee7f50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee7f50 = DAT_01ee7f50 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_f0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  puStack_104 = (undefined1 *)0x4;
  local_ec = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_e8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_e4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  pfStack_108 = &local_f0;
  FUN_00f9ec50(&DAT_01ee7f3c);
  FUN_00f9eec0(&DAT_01ee7f30,local_e0);
  puStack_104 = (undefined1 *)local_a0;
  pfStack_108 = (float *)0x0;
  D3DXMatrixInverse(local_60);
  FUN_00f9eec0(&DAT_01ee7f6c,auStack_6c);
  FUN_00f990e0(&DAT_01ee7f08);
  __security_check_cookie(uStack_20 ^ (uint)&pfStack_108);
  return;
}

// 00F71CC0  FUN_00f71cc0  size=334  [between]
void FUN_00f71cc0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee89f8 = DAT_01ee89f8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee89f8 = DAT_01ee89f8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee89f8 = DAT_01ee89f8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee89f8 = DAT_01ee89f8 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee89f0,*(undefined4 *)(param_1 + 0x18));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0xa0);
  local_6c = *(float *)(param_1 + 0xa4) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0xa8) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0xac) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee89e4,&local_70,4);
  FUN_00f9ec50(&DAT_01ee89fc,param_1 + 0x90,4);
  FUN_00f9eec0(&DAT_01ee89d8,local_60);
  FUN_00f990e0(&DAT_01ee89b0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71E10  FUN_00f71e10  size=318  [between]
void FUN_00f71e10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee8fe4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8fd8,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8fe0 = DAT_01ee8fe0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8fe0 = DAT_01ee8fe0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8fe0 = DAT_01ee8fe0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8fe0 = DAT_01ee8fe0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8fcc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee8fc0,local_60);
  FUN_00f990e0(&DAT_01ee8f98);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F71F50  FUN_00f71f50  size=388  [between]
void FUN_00f71f50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee903c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9030,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9048,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9038 = DAT_01ee9038 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9038 = DAT_01ee9038 & 0xff333fff | 0x333000;
        DAT_01ee9050 = DAT_01ee9050 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9038 = DAT_01ee9038 & 0xff111fff | 0x111000;
      DAT_01ee9050 = DAT_01ee9050 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9038 = DAT_01ee9038 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9024,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9018,local_60);
  FUN_00f990e0(&DAT_01ee8ff0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F720E0  FUN_00f720e0  size=405  [between]
void FUN_00f720e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee90a4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9098,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee90b0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee90c8,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee90a0 = DAT_01ee90a0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee90a0 = DAT_01ee90a0 & 0xff333fff | 0x333000;
        DAT_01ee90b8 = DAT_01ee90b8 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee90a0 = DAT_01ee90a0 & 0xff111fff | 0x111000;
      DAT_01ee90b8 = DAT_01ee90b8 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee90a0 = DAT_01ee90a0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee908c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9080,local_60);
  FUN_00f990e0(&DAT_01ee9058);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72280  FUN_00f72280  size=388  [between]
void FUN_00f72280(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee9124,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9118,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9130,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9120 = DAT_01ee9120 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9120 = DAT_01ee9120 & 0xff333fff | 0x333000;
        DAT_01ee9138 = DAT_01ee9138 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9120 = DAT_01ee9120 & 0xff111fff | 0x111000;
      DAT_01ee9138 = DAT_01ee9138 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9120 = DAT_01ee9120 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee910c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9100,local_60);
  FUN_00f990e0(&DAT_01ee90d8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72410  FUN_00f72410  size=300  [between]
void FUN_00f72410(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee918c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9180,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9198,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9188 = DAT_01ee9188 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9188 = DAT_01ee9188 & 0xff333fff | 0x333000;
        DAT_01ee91a0 = DAT_01ee91a0 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9188 = DAT_01ee9188 & 0xff111fff | 0x111000;
      DAT_01ee91a0 = DAT_01ee91a0 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9188 = DAT_01ee9188 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee9168,local_60);
  FUN_00f990e0(&DAT_01ee9140);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F72540  FUN_00f72540  size=405  [between]
void FUN_00f72540(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee91f4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee91e8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9200,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee9218,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee91f0 = DAT_01ee91f0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee91f0 = DAT_01ee91f0 & 0xff333fff | 0x333000;
        DAT_01ee9208 = DAT_01ee9208 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee91f0 = DAT_01ee91f0 & 0xff111fff | 0x111000;
      DAT_01ee9208 = DAT_01ee9208 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee91f0 = DAT_01ee91f0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee91dc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee91d0,local_60);
  FUN_00f990e0(&DAT_01ee91a8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F726E0  FUN_00f726e0  size=351  [between]
void FUN_00f726e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee930c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9300,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9308 = DAT_01ee9308 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9308 = DAT_01ee9308 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9308 = DAT_01ee9308 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9308 = DAT_01ee9308 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee92f4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee92e8,local_60);
  FUN_00fa1d50(&DAT_01ee9318,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee9324,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01ee92c0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72840  FUN_00f72840  size=438  [between]
void FUN_00f72840(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee937c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9370,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9388,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee93a0,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9378 = DAT_01ee9378 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9378 = DAT_01ee9378 & 0xff333fff | 0x333000;
        DAT_01ee9390 = DAT_01ee9390 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9378 = DAT_01ee9378 & 0xff111fff | 0x111000;
      DAT_01ee9390 = DAT_01ee9390 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9378 = DAT_01ee9378 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee93ac,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee93b8,param_1 + 0xc0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee9364,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9358,local_60);
  FUN_00f990e0(&DAT_01ee9330);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72A00  FUN_00f72a00  size=438  [between]
void FUN_00f72a00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee9274,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee9268,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9280,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee9298,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9270 = DAT_01ee9270 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9270 = DAT_01ee9270 & 0xff333fff | 0x333000;
        DAT_01ee9288 = DAT_01ee9288 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9270 = DAT_01ee9270 & 0xff111fff | 0x111000;
      DAT_01ee9288 = DAT_01ee9288 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9270 = DAT_01ee9270 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee92a4,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee92b0,param_1 + 0xc0,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee925c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9250,local_60);
  FUN_00f990e0(&DAT_01ee9228);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72BC0  FUN_00f72bc0  size=318  [between]
void FUN_00f72bc0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee9414,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9408,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9410 = DAT_01ee9410 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9410 = DAT_01ee9410 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9410 = DAT_01ee9410 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9410 = DAT_01ee9410 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee93fc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee93f0,local_60);
  FUN_00f990e0(&DAT_01ee93c8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72D00  FUN_00f72d00  size=388  [between]
void FUN_00f72d00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee946c,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9460,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9478,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9468 = DAT_01ee9468 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9468 = DAT_01ee9468 & 0xff333fff | 0x333000;
        DAT_01ee9480 = DAT_01ee9480 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9468 = DAT_01ee9468 & 0xff111fff | 0x111000;
      DAT_01ee9480 = DAT_01ee9480 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9468 = DAT_01ee9468 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9454,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9448,local_60);
  FUN_00f990e0(&DAT_01ee9420);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F72E90  FUN_00f72e90  size=405  [between]
void FUN_00f72e90(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee94d4,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee94c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee94e0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee94f8,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee94d0 = DAT_01ee94d0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee94d0 = DAT_01ee94d0 & 0xff333fff | 0x333000;
        DAT_01ee94e8 = DAT_01ee94e8 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee94d0 = DAT_01ee94d0 & 0xff111fff | 0x111000;
      DAT_01ee94e8 = DAT_01ee94e8 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee94d0 = DAT_01ee94d0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee94bc,&local_70,4);
  FUN_00f9eec0(&DAT_01ee94b0,local_60);
  FUN_00f990e0(&DAT_01ee9488);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73030  FUN_00f73030  size=388  [between]
void FUN_00f73030(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee9554,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9548,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee9560,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9550 = DAT_01ee9550 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9550 = DAT_01ee9550 & 0xff333fff | 0x333000;
        DAT_01ee9568 = DAT_01ee9568 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9550 = DAT_01ee9550 & 0xff111fff | 0x111000;
      DAT_01ee9568 = DAT_01ee9568 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9550 = DAT_01ee9550 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee953c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9530,local_60);
  FUN_00f990e0(&DAT_01ee9508);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F731C0  FUN_00f731c0  size=405  [between]
void FUN_00f731c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee95bc,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee95b0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee95c8,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01ee95e0,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee95b8 = DAT_01ee95b8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee95b8 = DAT_01ee95b8 & 0xff333fff | 0x333000;
        DAT_01ee95d0 = DAT_01ee95d0 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee95b8 = DAT_01ee95b8 & 0xff111fff | 0x111000;
      DAT_01ee95d0 = DAT_01ee95d0 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee95b8 = DAT_01ee95b8 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee95a4,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9598,local_60);
  FUN_00f990e0(&DAT_01ee9570);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73360  FUN_00f73360  size=351  [between]
void FUN_00f73360(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee963c,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9630,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9638 = DAT_01ee9638 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9638 = DAT_01ee9638 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9638 = DAT_01ee9638 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9638 = DAT_01ee9638 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9624,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9618,local_60);
  FUN_00fa1d50(&DAT_01ee9648,*(undefined4 *)(param_1 + 0x20));
  FUN_00f9ec50(&DAT_01ee9654,param_1 + 0xc0,4);
  FUN_00f990e0(&DAT_01ee95f0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F734C0  FUN_00f734c0  size=340  [between]
void FUN_00f734c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eed9c4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eed9d0,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eed9b8,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed9c0 = DAT_01eed9c0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed9c0 = DAT_01eed9c0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed9c0 = DAT_01eed9c0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed9c0 = DAT_01eed9c0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eed9ac,&local_70,4);
  FUN_00f9eec0(&DAT_01eed9a0,local_60);
  FUN_00f990e0(&DAT_01eed978);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73620  FUN_00f73620  size=357  [between]
void FUN_00f73620(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eeda2c,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eeda38,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eeda20,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeda44,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eeda28 = DAT_01eeda28 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eeda28 = DAT_01eeda28 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eeda28 = DAT_01eeda28 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eeda28 = DAT_01eeda28 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eeda14,&local_70,4);
  FUN_00f9eec0(&DAT_01eeda08,local_60);
  FUN_00f990e0(&DAT_01eed9e0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73790  FUN_00f73790  size=354  [between]
void FUN_00f73790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eeda9c,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eedaa8,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eeda90,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eedab4,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eeda98 = DAT_01eeda98 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eeda98 = DAT_01eeda98 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eeda98 = DAT_01eeda98 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eeda98 = DAT_01eeda98 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eeda84,&local_70,4);
  FUN_00f9eec0(&DAT_01eeda78,local_60);
  FUN_00f990e0(&DAT_01eeda50);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73900  FUN_00f73900  size=368  [between]
void FUN_00f73900(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eedb0c,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eedb18,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eedb00,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eedb24,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eedb3c,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eedb08 = DAT_01eedb08 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eedb08 = DAT_01eedb08 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eedb08 = DAT_01eedb08 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eedb08 = DAT_01eedb08 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eedaf4,&local_70,4);
  FUN_00f9eec0(&DAT_01eedae8,local_60);
  FUN_00f990e0(&DAT_01eedac0);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73A70  FUN_00f73a70  size=354  [between]
void FUN_00f73a70(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eedb94,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eedba0,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eedb88,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eedbac,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eedb90 = DAT_01eedb90 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eedb90 = DAT_01eedb90 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eedb90 = DAT_01eedb90 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eedb90 = DAT_01eedb90 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eedb7c,&local_70,4);
  FUN_00f9eec0(&DAT_01eedb70,local_60);
  FUN_00f990e0(&DAT_01eedb48);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73BE0  FUN_00f73be0  size=368  [between]
void FUN_00f73be0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eedc04,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eedc10,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eedbf8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eedc1c,*(undefined4 *)(param_1 + 0x1c));
  FUN_00fa1d50(&DAT_01eedc34,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eedc00 = DAT_01eedc00 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eedc00 = DAT_01eedc00 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eedc00 = DAT_01eedc00 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eedc00 = DAT_01eedc00 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eedbec,&local_70,4);
  FUN_00f9eec0(&DAT_01eedbe0,local_60);
  FUN_00f990e0(&DAT_01eedbb8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F73D50  FUN_00f73d50  size=618  [between]
void FUN_00f73d50(undefined4 *param_1)

{
  undefined4 *_Src;
  uint uVar1;
  float unaff_ESI;
  float *pfStack_14c;
  undefined4 *puStack_134;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_118 [24];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_94;
  undefined1 auStack_84 [76];
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_128;
  puStack_134 = param_1;
  FUN_009e0150();
  FUN_00f9ec50();
  pfStack_14c = (float *)(param_1 + 0x28);
  FUN_00f9ec50(&DAT_01eecee8);
  local_100 = 0;
  local_fc = 0;
  _Src = param_1 + 0x10;
  local_f8 = 0;
  local_f4 = 0x3f800000;
  local_f0 = 0xbf000000;
  local_ec = 0xbf000000;
  local_e8 = 0;
  puStack_134 = _Src;
  D3DXVec3TransformNormal();
  if (&local_ec != _Src) {
    pfStack_14c = (float *)0xf73df2;
    FID_conflict__memcpy(&local_ec,_Src,0x40);
  }
  fStack_bc = fStack_bc + unaff_ESI;
  fStack_b8 = fStack_b8 + fStack_128;
  fStack_b4 = fStack_b4 + fStack_124;
  FUN_00fb2080();
  pfStack_14c = (float *)0xf73e48;
  D3DXMatrixMultiply();
  pfStack_14c = &fStack_b8;
  D3DXVec3TransformNormal(&fStack_128,auStack_118);
  puStack_134 = (undefined4 *)(fStack_94 + (float)puStack_134);
  FUN_00f9ec50(&DAT_01eecef4,&puStack_134,4);
  FUN_00fa1d50(&DAT_01eeced0,param_1[6]);
  FUN_00fa1d50(&DAT_01eecf00,DAT_01ee5420);
  uVar1 = param_1[2];
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eeced8 = DAT_01eeced8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eeced8 = DAT_01eeced8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eeced8 = DAT_01eeced8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eeced8 = DAT_01eeced8 & 0xff333fff | 0x333000;
  }
  FUN_00f9ec50(&DAT_01eecec4,&stack0xfffffebc,4);
  FUN_00f9eec0(&DAT_01eeceb8,auStack_84);
  FUN_00f990e0(&DAT_01eece90);
  __security_check_cookie(uStack_38 ^ (uint)&pfStack_14c);
  return;
}

// 00F73FC0  FUN_00f73fc0  size=709  [between]
void FUN_00f73fc0(undefined4 **param_1)

{
  undefined4 **_Src;
  undefined4 *puVar1;
  int iVar2;
  float unaff_ESI;
  undefined1 *puStack_1a4;
  undefined *puStack_1a0;
  undefined4 **ppuStack_19c;
  float fStack_198;
  float *pfStack_194;
  undefined *puStack_190;
  float *pfStack_18c;
  undefined4 **ppuStack_174;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_158 [24];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  undefined4 local_128;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_dc [8];
  float fStack_d4;
  undefined1 auStack_d0 [12];
  undefined1 auStack_c4 [40];
  undefined1 auStack_9c [76];
  uint uStack_50;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_168;
  ppuStack_174 = param_1;
  FUN_009e0150();
  FUN_00f9ec50();
  pfStack_18c = (float *)(param_1 + 0x28);
  puStack_190 = &DAT_01eecf70;
  pfStack_194 = (float *)0xf74013;
  FUN_00f9ec50();
  local_140 = 0;
  local_13c = 0;
  _Src = param_1 + 0x10;
  local_138 = 0;
  local_134 = 0x3f800000;
  local_130 = 0xbf000000;
  local_12c = (undefined4 *)0xbf000000;
  local_128 = 0;
  ppuStack_174 = _Src;
  D3DXVec3TransformNormal();
  if (&local_12c != _Src) {
    pfStack_18c = (float *)0xf74062;
    FID_conflict__memcpy(&local_12c,_Src,0x40);
  }
  fStack_fc = fStack_fc + unaff_ESI;
  fStack_f8 = fStack_f8 + fStack_168;
  fStack_f4 = fStack_f4 + fStack_164;
  FUN_00fb2080();
  pfStack_18c = (float *)0xf740b8;
  D3DXMatrixMultiply();
  pfStack_18c = &fStack_f8;
  puStack_190 = auStack_158;
  pfStack_194 = &fStack_168;
  fStack_198 = 2.2706616e-38;
  D3DXVec3TransformNormal();
  ppuStack_174 = (undefined4 **)(fStack_d4 + (float)ppuStack_174);
  fStack_198 = 5.60519e-45;
  ppuStack_19c = &ppuStack_174;
  puStack_1a0 = &DAT_01eecf88;
  fStack_168 = (float)param_1[0x2c];
  puStack_1a4 = (undefined1 *)0xf74117;
  FUN_00f9ec50();
  fStack_198 = 2.2706736e-38;
  fStack_198 = (float)FUN_00fb2080();
  puStack_1a0 = auStack_c4;
  puStack_1a4 = (undefined1 *)0xf74133;
  ppuStack_19c = _Src;
  D3DXMatrixMultiply();
  puStack_1a4 = auStack_d0;
  D3DXMatrixInverse(puStack_1a4,0);
  FUN_00f9eec0(&DAT_01eecf94,auStack_dc);
  FUN_00fa1d50(&DAT_01eecf58,param_1[6]);
  FUN_00fa1d50(&DAT_01eecfac,param_1[7]);
  FUN_00fa1d50(&DAT_01eecfa0,DAT_01ee5420);
  puVar1 = param_1[2];
  if (((uint)puVar1 & 0x40) == 0) {
    if (((uint)puVar1 & 0x200) == 0) {
      if (((uint)puVar1 & 0x400) == 0) {
        DAT_01eecf60 = DAT_01eecf60 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eecf60 = DAT_01eecf60 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eecf60 = DAT_01eecf60 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eecf60 = DAT_01eecf60 & 0xff333fff | 0x333000;
  }
  iVar2 = ((uint)param_1[2] >> 5 & 1) * 0x10;
  ppuStack_19c = (undefined4 **)((float)param_1[0x20] * *(float *)(&DAT_018d7130 + iVar2));
  fStack_198 = (float)param_1[0x21] * *(float *)(&DAT_018d7134 + iVar2);
  pfStack_194 = (float *)((float)param_1[0x22] * *(float *)(&DAT_018d7138 + iVar2));
  puStack_190 = (undefined *)((float)param_1[0x23] * *(float *)(&DAT_018d713c + iVar2));
  FUN_00f9ec50(&DAT_01eecf4c,&ppuStack_19c,4);
  FUN_00f9eec0(&DAT_01eecf40,auStack_9c);
  FUN_00f990e0(&DAT_01eecf18);
  __security_check_cookie(uStack_50 ^ (uint)&puStack_1a4);
  return;
}

// 00F74290  FUN_00f74290  size=467  [between]
void FUN_00f74290(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee89f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9eec0(&DAT_01ee8a54,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01ee8a30,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_7c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_78 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_74 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8a3c,&local_80,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0xa0) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0xa4) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0xa8) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0xac) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8a6c,&local_80,4);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  local_64 = 0x3f800000;
  FUN_00f9ec50(&DAT_01ee8a60,&local_70,4);
  FUN_00f990e0(&DAT_01ee8a08);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F74470  FUN_00f74470  size=467  [between]
void FUN_00f74470(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee89f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9eec0(&DAT_01ee8a54,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01ee8a30,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_7c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_78 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_74 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8a3c,&local_80,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0xa0) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0xa4) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0xa8) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0xac) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8a6c,&local_80,4);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  local_64 = 0x3f800000;
  FUN_00f9ec50(&DAT_01ee8a60,&local_70,4);
  FUN_00f990e0(&DAT_01ee8a08);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F74650  FUN_00f74650  size=467  [between]
void FUN_00f74650(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee89f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9eec0(&DAT_01ee8a54,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01ee8a30,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_7c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_78 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_74 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8a3c,&local_80,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0xa0) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0xa4) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0xa8) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0xac) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8a6c,&local_80,4);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  local_64 = 0x3f800000;
  FUN_00f9ec50(&DAT_01ee8a60,&local_70,4);
  FUN_00f990e0(&DAT_01ee8a08);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F74830  FUN_00f74830  size=467  [between]
void FUN_00f74830(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8a50 = DAT_01ee8a50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8a50 = DAT_01ee8a50 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01ee89f0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9eec0(&DAT_01ee8a54,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01ee8a30,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_7c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_78 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_74 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8a3c,&local_80,4);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0xa0) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0xa4) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0xa8) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0xac) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8a6c,&local_80,4);
  local_70 = *(undefined4 *)(param_1 + 0x90);
  local_6c = *(undefined4 *)(param_1 + 0x94);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  local_64 = 0x3f800000;
  FUN_00f9ec50(&DAT_01ee8a60,&local_70,4);
  FUN_00f990e0(&DAT_01ee8a08);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F74A10  FUN_00f74a10  size=375  [between]
void FUN_00f74a10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8ab8,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee8ac4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8ad0,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8adc,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8ae8,param_1 + 0xe0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8ac0 = DAT_01ee8ac0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8ac0 = DAT_01ee8ac0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8ac0 = DAT_01ee8ac0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8ac0 = DAT_01ee8ac0 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8aa0,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8aac,&local_70,4);
  FUN_00f990e0(&DAT_01ee8a78);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F74B90  FUN_00f74b90  size=417  [between]
void FUN_00f74b90(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8b38,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8b80,DAT_01ee5418);
  FUN_00f9ec50(&DAT_01ee8b44,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8b50,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8b5c,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8b68,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee8b74,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8b40 = DAT_01ee8b40 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8b40 = DAT_01ee8b40 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8b40 = DAT_01ee8b40 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8b40 = DAT_01ee8b40 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8b20,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8b2c,&local_70,4);
  FUN_00f990e0(&DAT_01ee8af8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F74D40  FUN_00f74d40  size=375  [between]
void FUN_00f74d40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8bd0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee8bdc,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8be8,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8bf4,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8c00,param_1 + 0xe0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8bd8 = DAT_01ee8bd8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8bd8 = DAT_01ee8bd8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8bd8 = DAT_01ee8bd8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8bd8 = DAT_01ee8bd8 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8bb8,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8bc4,&local_70,4);
  FUN_00f990e0(&DAT_01ee8b90);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F74EC0  FUN_00f74ec0  size=419  [between]
void FUN_00f74ec0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8c50,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee8c5c,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8c68,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8c74,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee8c80,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8c8c,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee8c98,param_1 + 0x100,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8c58 = DAT_01ee8c58 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8c58 = DAT_01ee8c58 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8c58 = DAT_01ee8c58 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8c58 = DAT_01ee8c58 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8c38,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8c44,&local_70,4);
  FUN_00f990e0(&DAT_01ee8c10);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F75070  FUN_00f75070  size=433  [between]
void FUN_00f75070(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8ce8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8d3c,DAT_01ee5418);
  FUN_00f9ec50(&DAT_01ee8cf4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8d00,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8d0c,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee8d18,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8d24,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee8d30,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8cf0 = DAT_01ee8cf0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8cf0 = DAT_01ee8cf0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8cf0 = DAT_01ee8cf0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8cf0 = DAT_01ee8cf0 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8cd0,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8cdc,&local_70,4);
  FUN_00f990e0(&DAT_01ee8ca8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F75230  FUN_00f75230  size=375  [between]
void FUN_00f75230(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee8d88,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee8d94,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8da0,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8dac,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8db8,param_1 + 0xe0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8d90 = DAT_01ee8d90 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8d90 = DAT_01ee8d90 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8d90 = DAT_01ee8d90 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8d90 = DAT_01ee8d90 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8d70,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8d7c,&local_70,4);
  FUN_00f990e0(&DAT_01ee8d48);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F753B0  FUN_00f753b0  size=407  [between]
void FUN_00f753b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee96a0,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee96ac,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee96b8,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee96c4,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee96d0,param_1 + 0xe0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee96a8 = DAT_01ee96a8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee96a8 = DAT_01ee96a8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee96a8 = DAT_01ee96a8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee96a8 = DAT_01ee96a8 & 0xff333fff | 0x333000;
  }
  FUN_009cdf70(local_a0,param_1);
  FUN_00f9eec0(&DAT_01ee96dc,local_a0);
  FUN_00f9eec0(&DAT_01ee9688,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9694,&local_b0,4);
  FUN_00f990e0(&DAT_01ee9660);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F75550  FUN_00f75550  size=546  [between]
void FUN_00f75550(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9868,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9874,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee988c,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9880,param_1 + 0x100,4);
  FUN_00f9ec50(&DAT_01ee98bc,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee9898,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee98a4,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee98c8,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9870 = DAT_01ee9870 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9870 = DAT_01ee9870 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9870 = DAT_01ee9870 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9870 = DAT_01ee9870 & 0xff333fff | 0x333000;
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_009cdf70(&local_a0,param_1);
  }
  else {
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
  }
  FUN_00f9eec0(&DAT_01ee98b0,&local_a0);
  FUN_00f9eec0(&DAT_01ee9850,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_ac = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee985c,&local_b0,4);
  FUN_00f990e0(&DAT_01ee9828);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F75780  FUN_00f75780  size=603  [between]
void FUN_00f75780(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_bc [12];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee99c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee99d4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee99ec,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee99e0,param_1 + 0x100,4);
  FUN_00f9ec50(&DAT_01ee9a1c,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee99f8,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9a04,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9a28,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee99d0 = DAT_01ee99d0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee99d0 = DAT_01ee99d0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee99d0 = DAT_01ee99d0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee99d0 = DAT_01ee99d0 & 0xff333fff | 0x333000;
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_009cdf70(&local_a0,param_1);
  }
  else {
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
  }
  FUN_00f9eec0(&DAT_01ee9a10,&local_a0);
  FUN_00f9eec0(&DAT_01ee99b0,local_60);
  FUN_00f9ec50(&DAT_01ee9a34,param_1 + 0xa0,4);
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01ee9a40,uVar2);
  FUN_00fa1d50(&DAT_01ee9a4c,*(undefined4 *)(param_1 + 0x1c));
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_b0 = *(float *)(&DAT_018d7130 + iVar3) * *(float *)(param_1 + 0x80);
  fStack_ac = *(float *)(&DAT_018d7134 + iVar3) * *(float *)(param_1 + 0x84);
  fStack_a8 = *(float *)(&DAT_018d7138 + iVar3) * *(float *)(param_1 + 0x88);
  fStack_a4 = *(float *)(&DAT_018d713c + iVar3) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee99bc,&fStack_b0,4);
  FUN_00f990e0(&DAT_01ee9988);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F759E0  FUN_00f759e0  size=546  [between]
void FUN_00f759e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9918,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9924,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee993c,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9930,param_1 + 0x100,4);
  FUN_00f9ec50(&DAT_01ee996c,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee9948,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9954,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9978,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9920 = DAT_01ee9920 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9920 = DAT_01ee9920 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9920 = DAT_01ee9920 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9920 = DAT_01ee9920 & 0xff333fff | 0x333000;
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_009cdf70(&local_a0,param_1);
  }
  else {
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
  }
  FUN_00f9eec0(&DAT_01ee9960,&local_a0);
  FUN_00f9eec0(&DAT_01ee9900,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_ac = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee990c,&local_b0,4);
  FUN_00f990e0(&DAT_01ee98d8);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F75C10  FUN_00f75c10  size=451  [between]
void FUN_00f75c10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9728,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9734,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9740,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee9770,param_1 + 0x120,4);
  FUN_00f9ec50(&DAT_01ee974c,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9758,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9764,param_1 + 0xf0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9730 = DAT_01ee9730 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9730 = DAT_01ee9730 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9730 = DAT_01ee9730 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9730 = DAT_01ee9730 & 0xff333fff | 0x333000;
  }
  FUN_009cdf70(local_a0,param_1);
  FUN_00f9eec0(&DAT_01ee977c,local_a0);
  FUN_00f9eec0(&DAT_01ee9710,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee971c,&local_b0,4);
  FUN_00f990e0(&DAT_01ee96e8);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F75DE0  FUN_00f75de0  size=451  [between]
void FUN_00f75de0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee97c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee97d4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee97e0,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee9810,param_1 + 0x120,4);
  FUN_00f9ec50(&DAT_01ee97ec,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee97f8,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9804,param_1 + 0xf0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee97d0 = DAT_01ee97d0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee97d0 = DAT_01ee97d0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee97d0 = DAT_01ee97d0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee97d0 = DAT_01ee97d0 & 0xff333fff | 0x333000;
  }
  FUN_009cdf70(local_a0,param_1);
  FUN_00f9eec0(&DAT_01ee981c,local_a0);
  FUN_00f9eec0(&DAT_01ee97b0,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee97bc,&local_b0,4);
  FUN_00f990e0(&DAT_01ee9788);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F75FB0  FUN_00f75fb0  size=489  [between]
void FUN_00f75fb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9a98,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9aa4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9ab0,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee9abc,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9ac8,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9ad4,param_1 + 0x100,4);
  FUN_00f9ec50(&DAT_01ee9ae0,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee9aec,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9af8,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9aa0 = DAT_01ee9aa0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9aa0 = DAT_01ee9aa0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9aa0 = DAT_01ee9aa0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9aa0 = DAT_01ee9aa0 & 0xff333fff | 0x333000;
  }
  FUN_009cdf70(local_a0,param_1);
  FUN_00f9eec0(&DAT_01ee9b04,local_a0);
  FUN_00f9eec0(&DAT_01ee9a80,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9a8c,&local_b0,4);
  FUN_00f990e0(&DAT_01ee9a58);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F761A0  FUN_00f761a0  size=489  [between]
void FUN_00f761a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9b50,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9b5c,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9b68,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee9b74,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9b80,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee9b8c,param_1 + 0x100,4);
  FUN_00f9ec50(&DAT_01ee9b98,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee9ba4,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9bb0,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9b58 = DAT_01ee9b58 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9b58 = DAT_01ee9b58 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9b58 = DAT_01ee9b58 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9b58 = DAT_01ee9b58 & 0xff333fff | 0x333000;
  }
  FUN_009cdf70(local_a0,param_1);
  FUN_00f9eec0(&DAT_01ee9bbc,local_a0);
  FUN_00f9eec0(&DAT_01ee9b38,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_ac = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_a8 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_a4 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9b44,&local_b0,4);
  FUN_00f990e0(&DAT_01ee9b10);
  __security_check_cookie(local_14 ^ (uint)auStack_bc);
  return;
}

// 00F76390  FUN_00f76390  size=405  [between]
void FUN_00f76390(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01ee8e14,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee8e20,param_1 + 0xa0,4);
  FUN_00f9ec50(&DAT_01ee8e2c,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee8e38,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee8e44,param_1 + 0xe0,4);
  FUN_00f9ec50(&DAT_01ee8e50,param_1 + 0x120,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8e10 = DAT_01ee8e10 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8e10 = DAT_01ee8e10 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8e10 = DAT_01ee8e10 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8e10 = DAT_01ee8e10 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee8df0,local_60);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee8dfc,&local_70,4);
  FUN_00f990e0(&DAT_01ee8dc8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F76530  FUN_00f76530  size=478  [between]
void FUN_00f76530(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_e4;
  undefined *puStack_e0;
  undefined *puStack_dc;
  undefined1 *puStack_d8;
  float fStack_d4;
  float fStack_cc;
  undefined1 auStack_c8 [12];
  undefined4 auStack_bc [4];
  undefined1 auStack_ac [12];
  undefined1 local_a0 [40];
  undefined1 auStack_78 [24];
  undefined1 local_60 [52];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_cc;
  puStack_d8 = local_60;
  fStack_d4 = (float)param_1;
  puStack_dc = (undefined *)0xf76559;
  FUN_009e0150();
  puStack_dc = *(undefined **)(param_1 + 0x18);
  puStack_e0 = &DAT_01ee9c08;
  uStack_e4 = 0xf76567;
  FUN_00fa1d50();
  uStack_e4 = 4;
  FUN_00f9ec50(&DAT_01ee9c14,param_1 + 0x90);
  FUN_00f9ec50(&DAT_01ee9c20,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9c50,param_1 + 0x120,4);
  FUN_00f9ec50(&DAT_01ee9c2c,param_1 + 0xd0,4);
  fStack_d4 = 5.60519e-45;
  puStack_d8 = (undefined1 *)(param_1 + 0xe0);
  puStack_dc = &DAT_01ee9c38;
  puStack_e0 = (undefined *)0xf765c9;
  FUN_00f9ec50();
  fStack_d4 = (float)(param_1 + 0x40);
  puStack_d8 = (undefined1 *)0x0;
  puStack_dc = local_a0;
  puStack_e0 = (undefined *)0xf765dc;
  D3DXMatrixInverse();
  puStack_e0 = (undefined *)0xf765e6;
  uStack_e4 = FUN_00fb2070();
  puStack_e0 = auStack_ac;
  D3DXVec3TransformNormal(auStack_bc);
  auStack_bc[0] = *(undefined4 *)(param_1 + 0xf0);
  FUN_00f9ec50(&DAT_01ee9c5c,auStack_c8,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9c10 = DAT_01ee9c10 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9c10 = DAT_01ee9c10 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9c10 = DAT_01ee9c10 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9c10 = DAT_01ee9c10 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee9bf0,auStack_78);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  puStack_d8 = (undefined1 *)(*(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2));
  fStack_d4 = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  fStack_cc = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9bfc,&puStack_d8,4);
  FUN_00f990e0(&DAT_01ee9bc8);
  __security_check_cookie(uStack_2c ^ (uint)&uStack_e4);
  return;
}

// 00F76710  FUN_00f76710  size=426  [between]
void FUN_00f76710(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  FUN_00fa1d50(&DAT_01ee9ca8,*(undefined4 *)(param_1 + 0x18));
  FUN_00f9ec50(&DAT_01ee9cb4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9cc0,param_1 + 0x110,4);
  FUN_00f9ec50(&DAT_01ee9cf0,param_1 + 0xf0,4);
  FUN_00f9ec50(&DAT_01ee9ccc,param_1 + 0xd0,4);
  FUN_00f9ec50(&DAT_01ee9cd8,param_1 + 0xe0,4);
  uVar2 = FUN_00fb2070();
  FUN_00f9ec50(&DAT_01ee9cfc,uVar2,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9cb0 = DAT_01ee9cb0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9cb0 = DAT_01ee9cb0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9cb0 = DAT_01ee9cb0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9cb0 = DAT_01ee9cb0 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01ee9c90,local_60);
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01ee9c9c,&local_70,4);
  FUN_00f990e0(&DAT_01ee9c68);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F768C0  FUN_00f768c0  size=384  [between]
void FUN_00f768c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puStack_c8;
  uint uStack_c4;
  undefined1 auStack_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [52];
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  puStack_c8 = local_a0;
  uStack_c4 = param_1;
  FUN_009e0150();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uStack_c4 = 0xf768f9;
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee8ea8 = DAT_01ee8ea8 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee8ea8 = DAT_01ee8ea8 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8ea8 = DAT_01ee8ea8 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee8ea8 = DAT_01ee8ea8 & 0xff333fff | 0x333000;
  }
  uStack_c4 = *(uint *)(param_1 + 8) >> 7 & 1;
  puStack_c8 = (undefined1 *)0xf7697e;
  FUN_00f5e750();
  uStack_c4 = *(undefined4 *)(param_1 + 0x18);
  puStack_c8 = &DAT_01ee8ea0;
  FUN_00fa1d50();
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_b0 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_ac = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_a8 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_a4 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8e94,&local_b0,4);
  FUN_00f9eec0(&DAT_01ee8e88,local_a0);
  uStack_c4 = 0xf769fd;
  uStack_c4 = FUN_00fb2080();
  puStack_c8 = (undefined1 *)(param_1 + 0x40);
  D3DXMatrixMultiply(local_60);
  FUN_00f9eec0(&DAT_01ee8eac,auStack_6c);
  FUN_00f990e0(&DAT_01ee8e60);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_c8);
  return;
}

// 00F76A40  FUN_00f76a40  size=354  [between]
void FUN_00f76a40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8eb8 + 0x10))(1);
      }
      else {
        DAT_01ee8f00 = DAT_01ee8f00 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8f00 = DAT_01ee8f00 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8eb8 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee8f04,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8ef8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8f10,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8eec,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8ee0,local_60);
  FUN_00f9ec50(&DAT_01ee8f1c,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01ee8eb8);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F76BB0  FUN_00f76bb0  size=354  [between]
void FUN_00f76bb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        (**(code **)(DAT_01ee8f28 + 0x10))(1);
      }
      else {
        DAT_01ee8f70 = DAT_01ee8f70 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee8f70 = DAT_01ee8f70 & 0xff111fff | 0x111000;
    }
  }
  else {
    (**(code **)(DAT_01ee8f28 + 0x10))(3);
  }
  FUN_00f9ec50(&DAT_01ee8f74,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01ee8f68,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01ee8f80,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01ee8f5c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01ee8f50,local_60);
  FUN_00f9ec50(&DAT_01ee8f8c,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01ee8f28);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F76D20  EffectShaderSetting::ShaderSetUpSoftParticleShimmer  size=440  [class]
void EffectShaderSetting::ShaderSetUpSoftParticleShimmer(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec8a4,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec898,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec8bc,*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec8b0,uVar2);
  FUN_00f9ec50(&DAT_01eec8c8,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eec8d4,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec8a0 = DAT_01eec8a0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec8a0 = DAT_01eec8a0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec8a0 = DAT_01eec8a0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec8a0 = DAT_01eec8a0 & 0xff333fff | 0x333000;
  }
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar3);
  fStack_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar3);
  fStack_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar3);
  fStack_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar3);
  FUN_00f9ec50(&DAT_01eec88c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eec880,local_60);
  FUN_00f990e0(&DAT_01eec858);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2e74,
                 "EffectShaderSetting::ShaderSetUpSoftParticleShimmer: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F76EE0  EffectShaderSetting::ShaderSetUpSoftParticleShimmerVC  size=355  [class]
void EffectShaderSetting::ShaderSetUpSoftParticleShimmerVC(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00f9ec50(&DAT_01eec92c,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eec920,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eec944,*(undefined4 *)(param_1 + 0x1c));
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eec938,uVar2);
  FUN_00f9ec50(&DAT_01eec950,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01eec95c,DAT_01ee5420);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eec928 = DAT_01eec928 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eec928 = DAT_01eec928 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eec928 = DAT_01eec928 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eec928 = DAT_01eec928 & 0xff333fff | 0x333000;
  }
  FUN_00f9eec0(&DAT_01eec908,local_60);
  FUN_00f990e0(&DAT_01eec8e0);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2f1c,
                 "EffectShaderSetting::ShaderSetUpSoftParticleShimmerVC: ALPHA WRITE ENABLE = TRUE")
    ;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F77050  EffectShaderSetting::ShaderSetUpScreenBlur  size=397  [class]
void EffectShaderSetting::ShaderSetUpScreenBlur(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    FUN_00f45870();
    uVar3 = DAT_01ee541c;
  }
  FUN_00fa1d50(&DAT_01ee9d6c,uVar3);
  FUN_00f9ec50(&DAT_01ee9d54,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9d60,param_1 + 0xa0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9d50 = DAT_01ee9d50 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9d50 = DAT_01ee9d50 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01ee9d50 = DAT_01ee9d50 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01ee9d50 = DAT_01ee9d50 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9d3c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9d30,local_60);
  FUN_00f990e0(&DAT_01ee9d08);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2fb8,
                 "EffectShaderSetting::ShaderSetUpScreenBlur: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F771E0  FUN_00f771e0  size=347  [between]
void FUN_00f771e0(int param_1)

{
  int iVar1;
  undefined1 *puStack_e8;
  int iStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_dc;
  puStack_e8 = local_60;
  iStack_e4 = param_1;
  FUN_009e0150();
  iStack_e4 = 0xf77219;
  iStack_e4 = FUN_00fb2080();
  puStack_e8 = (undefined1 *)(param_1 + 0x90);
  D3DXVec3TransformNormal(&local_c0);
  local_c0 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00f9ec50(&DAT_01eed3bc,auStack_cc,4);
  DAT_01eed3b8 = DAT_01eed3b8 & 0xff444fff | 0x444000;
  FUN_00fa1d50(&DAT_01eed3b0,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed3d4,DAT_01ee5420);
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_dc = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar1);
  fStack_d8 = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  fStack_d4 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  fStack_d0 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed3a4,&fStack_dc,4);
  FUN_009cdfc0(auStack_ac,auStack_bc,param_1);
  FUN_00f9eec0(&DAT_01eed3e0,auStack_ac);
  FUN_00f9ec50(&DAT_01eed3c8,auStack_bc,4);
  FUN_00f9eec0(&DAT_01eed398,auStack_6c);
  FUN_00f990e0(&DAT_01eed370);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_e8);
  return;
}

// 00F77340  FUN_00f77340  size=459  [between]
void FUN_00f77340(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puStack_e8;
  int iStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_dc;
  puStack_e8 = local_60;
  iStack_e4 = param_1;
  FUN_009e0150();
  iStack_e4 = 0xf77379;
  iStack_e4 = FUN_00fb2080();
  puStack_e8 = (undefined1 *)(param_1 + 0x90);
  D3DXVec3TransformNormal(&local_c0);
  local_c0 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00f9ec50(&DAT_01eed43c,auStack_cc,4);
  FUN_00f9ec50(&DAT_01eed46c,param_1 + 0xa0,4);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed438 = DAT_01eed438 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed438 = DAT_01eed438 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed438 = DAT_01eed438 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed438 = DAT_01eed438 & 0xff333fff | 0x333000;
  }
  FUN_00fa1d50(&DAT_01eed430,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed454,DAT_01ee5420);
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_dc = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  fStack_d8 = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  fStack_d4 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  fStack_d0 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed424,&fStack_dc,4);
  FUN_009cdfc0(auStack_ac,auStack_bc,param_1);
  FUN_00f9eec0(&DAT_01eed460,auStack_ac);
  FUN_00f9ec50(&DAT_01eed448,auStack_bc,4);
  FUN_00f9eec0(&DAT_01eed418,auStack_6c);
  FUN_00f990e0(&DAT_01eed3f0);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_e8);
  return;
}

// 00F77510  FUN_00f77510  size=524  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f77510(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puStack_108;
  int iStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [12];
  undefined1 local_a0 [52];
  undefined1 auStack_6c [76];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_fc;
  puStack_108 = local_a0;
  iStack_104 = param_1;
  FUN_009e0150();
  iStack_104 = 0xf77546;
  iStack_104 = FUN_00fb2080();
  puStack_108 = (undefined1 *)(param_1 + 0x90);
  D3DXVec3TransformNormal(&local_c0);
  local_c0 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00f9ec50(&DAT_01eed4c4,auStack_cc,4);
  DAT_01eed4c0 = DAT_01eed4c0 & 0xff444fff | 0x444000;
  FUN_00fa1d50(&DAT_01eed4b8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed4dc,DAT_01ee5420);
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_dc = *(float *)(&DAT_018d7130 + iVar1) * *(float *)(param_1 + 0x80);
  fStack_d8 = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  fStack_d4 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  fStack_d0 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed4ac,&fStack_dc,4);
  FUN_00f9eec0(&DAT_01eed4a0,auStack_ac);
  FUN_009cdfc0(auStack_6c,auStack_bc,param_1);
  FUN_00f9ec50(&DAT_01eed4d0,auStack_bc,4);
  FUN_00f9eec0(&DAT_01eed4e8,auStack_6c);
  FUN_00f9eec0(&DAT_01eed4a0,auStack_ac);
  uVar2 = (uint)*(byte *)(param_1 + 0x14);
  fStack_ec = _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar2 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar2 * 0xc];
  fStack_e8 = (float)(&DAT_01f8e6f4)[uVar2 * 0xc] * _DAT_018d5df4 *
              (float)(&DAT_01f8e6f4)[uVar2 * 0xc] * _DAT_018d5df4;
  fStack_e4 = _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar2 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar2 * 0xc];
  uStack_e0 = (&DAT_01f8e6fc)[uVar2 * 0xc];
  FUN_00f9ec50(&DAT_01eed4f4,&fStack_ec,4);
  uStack_fc = (&DAT_01f8e6e0)[uVar2 * 0xc];
  uStack_f8 = (&DAT_01f8e6e4)[uVar2 * 0xc];
  uStack_f4 = 0;
  uStack_f0 = 0;
  FUN_00f9ec50(&DAT_01eed500,&uStack_fc,4);
  FUN_00f990e0(&DAT_01eed478);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_108);
  return;
}

// 00F77720  FUN_00f77720  size=524  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f77720(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puStack_108;
  int iStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [12];
  undefined4 local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [12];
  undefined1 local_a0 [52];
  undefined1 auStack_6c [76];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_fc;
  puStack_108 = local_a0;
  iStack_104 = param_1;
  FUN_009e0150();
  iStack_104 = 0xf77756;
  iStack_104 = FUN_00fb2080();
  puStack_108 = (undefined1 *)(param_1 + 0x90);
  D3DXVec3TransformNormal(&local_c0);
  local_c0 = *(undefined4 *)(param_1 + 0x9c);
  FUN_00f9ec50(&DAT_01eed55c,auStack_cc,4);
  DAT_01eed558 = DAT_01eed558 & 0xff444fff | 0x444000;
  FUN_00fa1d50(&DAT_01eed550,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed574,DAT_01ee5420);
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_dc = *(float *)(&DAT_018d7130 + iVar1) * *(float *)(param_1 + 0x80);
  fStack_d8 = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  fStack_d4 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  fStack_d0 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed544,&fStack_dc,4);
  FUN_00f9eec0(&DAT_01eed538,auStack_ac);
  FUN_009cdfc0(auStack_6c,auStack_bc,param_1);
  FUN_00f9ec50(&DAT_01eed568,auStack_bc,4);
  FUN_00f9eec0(&DAT_01eed580,auStack_6c);
  FUN_00f9eec0(&DAT_01eed538,auStack_ac);
  uVar2 = (uint)*(byte *)(param_1 + 0x14);
  fStack_ec = _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar2 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f0)[uVar2 * 0xc];
  fStack_e8 = (float)(&DAT_01f8e6f4)[uVar2 * 0xc] * _DAT_018d5df4 *
              (float)(&DAT_01f8e6f4)[uVar2 * 0xc] * _DAT_018d5df4;
  fStack_e4 = _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar2 * 0xc] *
              _DAT_018d5df4 * (float)(&DAT_01f8e6f8)[uVar2 * 0xc];
  uStack_e0 = (&DAT_01f8e6fc)[uVar2 * 0xc];
  FUN_00f9ec50(&DAT_01eed58c,&fStack_ec,4);
  uStack_fc = (&DAT_01f8e6e0)[uVar2 * 0xc];
  uStack_f8 = (&DAT_01f8e6e4)[uVar2 * 0xc];
  uStack_f4 = 0;
  uStack_f0 = 0;
  FUN_00f9ec50(&DAT_01eed598,&uStack_fc,4);
  FUN_00f990e0(&DAT_01eed510);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_108);
  return;
}

// 00F77930  FUN_00f77930  size=405  [between]
void FUN_00f77930(int param_1)

{
  int iVar1;
  int iStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [20];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_d8;
  iStack_e4 = param_1;
  FUN_009e0150(local_60);
  local_ac = *(undefined4 *)(param_1 + 0x90);
  local_a8 = *(undefined4 *)(param_1 + 0x94);
  local_a4 = *(undefined4 *)(param_1 + 0x98);
  iStack_e4 = 0xf7798e;
  iStack_e4 = FUN_00fb2080();
  D3DXVec3TransformNormal(&local_ac,&local_ac);
  *(undefined4 *)(param_1 + 0x90) = uStack_b8;
  *(undefined4 *)(param_1 + 0x94) = uStack_b4;
  *(undefined4 *)(param_1 + 0x98) = uStack_b0;
  FUN_00f9ec50(&DAT_01eed600,(undefined4 *)(param_1 + 0x90),4);
  DAT_01eed5f0 = DAT_01eed5f0 & 0xff444fff | 0x444000;
  FUN_00fa1d50(&DAT_01eed5e8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed618,DAT_01ee5420);
  iVar1 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_d8 = *(float *)(&DAT_018d7134 + iVar1) * *(float *)(param_1 + 0x84);
  fStack_d4 = *(float *)(&DAT_018d7138 + iVar1) * *(float *)(param_1 + 0x88);
  fStack_d0 = *(float *)(&DAT_018d713c + iVar1) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed5dc,&stack0xffffff24,4);
  FUN_009cdfc0(&local_ac,auStack_cc,param_1);
  FUN_00f9eec0(&DAT_01eed624,&local_ac);
  FUN_00f9ec50(&DAT_01eed60c,auStack_cc,4);
  FUN_00f9eec0(&DAT_01eed5f4,&local_ac);
  FUN_00f9eec0(&DAT_01eed5d0,auStack_6c);
  FUN_00f990e0(&DAT_01eed5a8);
  __security_check_cookie(uStack_20 ^ (uint)&iStack_e4);
  return;
}

// 00F77AD0  EffectShaderSetting::ShaderSetUpBlurMask  size=464  [class]
void EffectShaderSetting::ShaderSetUpBlurMask(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    FUN_00f45870();
    uVar3 = DAT_01ee541c;
  }
  FUN_00fa1d50(&DAT_01ee9ddc,uVar3);
  FUN_00f9ec50(&DAT_01ee9dc4,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9dd0,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9de8,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9dc0 = DAT_01ee9dc0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9dc0 = DAT_01ee9dc0 & 0xff333fff | 0x333000;
        DAT_01ee9df0 = DAT_01ee9df0 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9dc0 = DAT_01ee9dc0 & 0xff111fff | 0x111000;
      DAT_01ee9df0 = DAT_01ee9df0 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9dc0 = DAT_01ee9dc0 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9dac,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9da0,local_60);
  FUN_00f990e0(&DAT_01ee9d78);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e2fbc,"EffectShaderSetting::ShaderSetUpBlurMask: ALPHA WRITE ENABLE = TRUE"
                );
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F77CA0  EffectShaderSetting::ShaderSetUpBlurMaskSoftPT3D  size=480  [class]
void EffectShaderSetting::ShaderSetUpBlurMaskSoftPT3D(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    FUN_00f45870();
    uVar3 = DAT_01ee541c;
  }
  FUN_00fa1d50(&DAT_01ee9e5c,uVar3);
  FUN_00f9ec50(&DAT_01ee9e44,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01ee9e50,param_1 + 0xa0,4);
  FUN_00fa1d50(&DAT_01ee9e68,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01ee9e40 = DAT_01ee9e40 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01ee9e40 = DAT_01ee9e40 & 0xff333fff | 0x333000;
        DAT_01ee9e70 = DAT_01ee9e70 & 0xff111fff | 0x111000;
      }
    }
    else {
      DAT_01ee9e40 = DAT_01ee9e40 & 0xff111fff | 0x111000;
      DAT_01ee9e70 = DAT_01ee9e70 & 0xff333fff | 0x333000;
    }
  }
  else {
    DAT_01ee9e40 = DAT_01ee9e40 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_6c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_68 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_64 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01ee9e2c,&local_70,4);
  FUN_00f9eec0(&DAT_01ee9e20,local_60);
  FUN_00fa1d50(&DAT_01ee9e74,DAT_01ee5420);
  FUN_00f990e0(&DAT_01ee9df8);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e3004,
                 "EffectShaderSetting::ShaderSetUpBlurMaskSoftPT3D: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F77E80  FUN_00f77e80  size=537  [between]
void FUN_00f77e80(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9ec50(&DAT_01eed250,param_1 + 0x90,4);
  FUN_00fa1d50(&DAT_01eed208,DAT_01ee5418);
  FUN_00fa1d50(&DAT_01eed274,DAT_01ee5420);
  FUN_00fa1d50(&DAT_01eed25c,*(undefined4 *)(param_1 + 0x1c));
  local_70 = *(undefined4 *)(param_1 + 0xa0);
  local_6c = *(undefined4 *)(param_1 + 0xa4);
  local_68 = *(undefined4 *)(param_1 + 0xa8);
  local_64 = *(undefined4 *)(param_1 + 0xac);
  FUN_00f9ec50(&DAT_01eed238,&local_70,4);
  iVar2 = FUN_00eaf7d0();
  if (*(int *)(iVar2 + 0xc) < 10) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)(iVar2 + 0x10) == 0) {
    uVar3 = 9;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x1dc);
  }
  FUN_00eaf7d0(uVar3);
  uVar3 = FUN_00fa0740(uVar3);
  FUN_00fa1d50(&DAT_01eed268,uVar3);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed210 = DAT_01eed210 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed210 = DAT_01eed210 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed210 = DAT_01eed210 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed210 = DAT_01eed210 & 0xff333fff | 0x333000;
  }
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_80 = *(float *)(param_1 + 0x80) * *(float *)(&DAT_018d7130 + iVar2);
  local_7c = *(float *)(param_1 + 0x84) * *(float *)(&DAT_018d7134 + iVar2);
  local_78 = *(float *)(param_1 + 0x88) * *(float *)(&DAT_018d7138 + iVar2);
  local_74 = *(float *)(param_1 + 0x8c) * *(float *)(&DAT_018d713c + iVar2);
  FUN_00f9ec50(&DAT_01eed1fc,&local_80,4);
  FUN_00f9eec0(&DAT_01eed1f0,local_60);
  FUN_00f9eec0(&DAT_01eed22c,param_1 + 0x40);
  FUN_00f9eec0(&DAT_01eed220,param_1 + 0x40);
  uVar3 = FUN_00fb2060();
  FUN_00f9ec50(&DAT_01eed244,uVar3,4);
  FUN_00f990e0(&DAT_01eed1c8);
  __security_check_cookie(local_14 ^ (uint)auStack_8c);
  return;
}

// 00F780A0  FUN_00f780a0  size=354  [between]
void FUN_00f780a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed678 = DAT_01eed678 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed678 = DAT_01eed678 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed678 = DAT_01eed678 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed678 = DAT_01eed678 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed670,*(undefined4 *)(param_1 + 0x18));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed664,&local_70,4);
  FUN_00f9eec0(&DAT_01eed658,local_60);
  FUN_00f9ec50(&DAT_01eed67c,param_1 + 0x90,4);
  FUN_00f990e0(&DAT_01eed630);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F78210  FUN_00f78210  size=368  [between]
void FUN_00f78210(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed678 = DAT_01eed678 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed678 = DAT_01eed678 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed678 = DAT_01eed678 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed678 = DAT_01eed678 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed6c8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed6e0,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed6bc,&local_70,4);
  FUN_00f9eec0(&DAT_01eed6b0,local_60);
  FUN_00f9ec50(&DAT_01eed6d4,param_1 + 0x90,4);
  FUN_00f990e0(&DAT_01eed688);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F78380  FUN_00f78380  size=283  [between]
void FUN_00f78380(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed738 = DAT_01eed738 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed738 = DAT_01eed738 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed738 = DAT_01eed738 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed738 = DAT_01eed738 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed730,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed748,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9eec0(&DAT_01eed718,local_60);
  FUN_00f9ec50(&DAT_01eed73c,param_1 + 0x90,4);
  FUN_00f990e0(&DAT_01eed6f0);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F784A0  FUN_00f784a0  size=368  [between]
void FUN_00f784a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed7a0 = DAT_01eed7a0 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed7a0 = DAT_01eed7a0 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed7a0 = DAT_01eed7a0 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed7a0 = DAT_01eed7a0 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed798,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed7b0,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  local_70 = *(float *)(&DAT_018d7130 + iVar2) * *(float *)(param_1 + 0x80);
  local_6c = *(float *)(&DAT_018d7134 + iVar2) * *(float *)(param_1 + 0x84);
  local_68 = *(float *)(&DAT_018d7138 + iVar2) * *(float *)(param_1 + 0x88);
  local_64 = *(float *)(&DAT_018d713c + iVar2) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed78c,&local_70,4);
  FUN_00f9eec0(&DAT_01eed780,local_60);
  FUN_00f9ec50(&DAT_01eed7a4,param_1 + 0x90,4);
  FUN_00f990e0(&DAT_01eed758);
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00F78610  FUN_00f78610  size=283  [between]
void FUN_00f78610(int param_1)

{
  uint uVar1;
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed808 = DAT_01eed808 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed808 = DAT_01eed808 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed808 = DAT_01eed808 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed808 = DAT_01eed808 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed800,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed818,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9eec0(&DAT_01eed7e8,local_60);
  FUN_00f9ec50(&DAT_01eed80c,param_1 + 0x90,4);
  FUN_00f990e0(&DAT_01eed7c0);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F78730  EffectShaderSetting::ShaderSettingLuminanceShimmer  size=440  [class]
void EffectShaderSetting::ShaderSettingLuminanceShimmer(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_7c [12];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  uVar2 = (*(code *)(&PTR_LAB_016dfd38)[*(byte *)(param_1 + 0x15)])();
  FUN_00fa1d50(&DAT_01eed88c,uVar2);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x400) == 0) {
        DAT_01eed870 = DAT_01eed870 & 0xff111fff | 0x111000;
      }
      else {
        DAT_01eed870 = DAT_01eed870 & 0xff333fff | 0x333000;
      }
    }
    else {
      DAT_01eed870 = DAT_01eed870 & 0xff111fff | 0x111000;
    }
  }
  else {
    DAT_01eed870 = DAT_01eed870 & 0xff333fff | 0x333000;
  }
  FUN_00f5e750(*(uint *)(param_1 + 8) >> 7 & 1);
  FUN_00fa1d50(&DAT_01eed868,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eed898,*(undefined4 *)(param_1 + 0x1c));
  iVar3 = (*(uint *)(param_1 + 8) >> 5 & 1) * 0x10;
  fStack_70 = *(float *)(&DAT_018d7130 + iVar3) * *(float *)(param_1 + 0x80);
  fStack_6c = *(float *)(&DAT_018d7134 + iVar3) * *(float *)(param_1 + 0x84);
  fStack_68 = *(float *)(&DAT_018d7138 + iVar3) * *(float *)(param_1 + 0x88);
  fStack_64 = *(float *)(&DAT_018d713c + iVar3) * *(float *)(param_1 + 0x8c);
  FUN_00f9ec50(&DAT_01eed85c,&fStack_70,4);
  FUN_00f9eec0(&DAT_01eed850,local_60);
  FUN_00f9ec50(&DAT_01eed880,param_1 + 0x90,4);
  FUN_00f9ec50(&DAT_01eed874,param_1 + 0xa0,4);
  FUN_00f990e0(&DAT_01eed828);
  if ((~(*(ushort *)(param_1 + 0xc) >> 0xd) & 1) != 0) {
    FUN_00dd5650(&DAT_016e3054,
                 "EffectShaderSetting::ShaderSettingLuminanceShimmer: ALPHA WRITE ENABLE = TRUE");
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

