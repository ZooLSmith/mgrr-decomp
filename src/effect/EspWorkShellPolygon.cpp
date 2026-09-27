// src/effect/EspWorkShellPolygon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E5200..009F5DE0, 10 functions

#include "mgrr.h"
#include "EspWorkShellPolygon.h"

// 009E5200  FUN_009e5200  size=140  [callgraph]
void __fastcall FUN_009e5200(undefined4 *param_1)

{
  param_1[0x23] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  return;
}

// 009E5290  EspWorkShellPolygon::vf08  size=250  [class]
void __fastcall EspWorkShellPolygon::vf08(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = param_1 + 0x3a0;
  FUN_00edfc20(iVar1);
  local_34 = *(undefined4 *)(param_1 + 0x480);
  local_30 = *(undefined4 *)(param_1 + 0x450);
  local_2c = *(undefined4 *)(param_1 + 0x454);
  local_28 = *(undefined4 *)(param_1 + 0x458);
  local_1c = *(undefined4 *)(param_1 + 0x464);
  local_24 = *(undefined4 *)(param_1 + 0x45c);
  local_20 = *(undefined4 *)(param_1 + 0x460);
  local_c = DAT_01b78870;
  local_18 = *(undefined4 *)(param_1 + 0x468);
  local_14 = *(undefined4 *)(param_1 + 0x46c);
  local_10 = iVar1;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x140), puVar2 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0x14);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  local_8 = uVar4;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x130), puVar2 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
    if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
      uVar3 = FUN_00f59ed0(0x13);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  local_4 = uVar4;
  FUN_009dba90(&local_34);
  return;
}

// 009E5390  FUN_009e5390  size=634  [between]
undefined4 __thiscall FUN_009e5390(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (piVar2 = (int *)(*(int *)(param_1 + 0x58) + 0xf0), piVar2 != (int *)0x0)) {
    puVar6 = (uint *)*piVar2;
    if ((uint *)((int)puVar6 + 0xfU & 0xfffffff0) != puVar6) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (puVar6 != (uint *)0x0) {
      if ((((*puVar6 & 0x80000000) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
         (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x100), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x10);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x30;
            *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 1;
          }
        }
      }
      if ((((*puVar6 & 0x40000000) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
         (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x110), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x11);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x30;
            *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 2;
          }
        }
      }
      if ((((*puVar6 & 0x20000000) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
         (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x120), puVar4 != (uint *)0x0)) {
        uVar1 = *puVar4;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x12);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x20;
          iVar5 = FUN_00f8ee60();
          if (iVar5 != 0) {
            *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x30;
            *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 4;
          }
        }
      }
      if ((*puVar6 & 0x8000000) != 0) {
        *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x40;
      }
      if ((*puVar6 & 0x4000000) != 0) {
        *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x40;
      }
      if ((((*puVar6 & 0x200000) != 0) && (*(int *)(param_1 + 0x58) != 0)) &&
         (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x160), puVar6 != (uint *)0x0)) {
        uVar1 = *puVar6;
        if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
          uVar3 = FUN_00f59ed0(0x16);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
        if (uVar1 != 0) {
          *(short *)(param_1 + 0x486) = *(short *)(param_1 + 0x486) + 0x30;
        }
      }
    }
  }
  FUN_009db6b0(param_2,param_3);
  if (*(short *)(param_1 + 0x486) != 0) {
    iVar5 = FUN_00dd29b0(*(short *)(param_1 + 0x486),0x20,0,0);
    *(int *)(param_1 + 0x480) = iVar5;
    if (iVar5 == 0) {
      FUN_009cca90(param_1,&DAT_0165ada8,*(undefined2 *)(param_1 + 0x486));
      return 0;
    }
  }
  return 1;
}

// 009E5610  FUN_009e5610  size=1590  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009e5610(int param_1,float *param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfStack_1c0;
  float *pfStack_1bc;
  float *pfStack_1b8;
  float **local_1b4;
  undefined1 auStack_1a4 [4];
  float local_1a0;
  float local_19c;
  float *local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float *local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float afStack_16c [3];
  float afStack_160 [33];
  float local_dc;
  float local_d8 [2];
  undefined1 local_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [120];
  
  local_1b4 = (float **)(afStack_160 + 0x20);
  pfStack_1b8 = (float *)0x9e562d;
  FUN_00ee0200();
  bVar2 = true;
  local_190 = (float *)(afStack_160[0x20] +
                       *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170));
  local_18c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174) + local_dc;
  local_188 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178) + local_d8[0];
  local_1a0 = *(float *)(param_1 + 0x1c0);
  local_19c = *(float *)(param_1 + 0x1c4);
  local_1b4 = *(float ***)(param_1 + 0x1c8);
  local_180 = *(float **)(param_1 + 0x100);
  local_17c = *(float *)(param_1 + 0x104);
  local_178 = *(float *)(param_1 + 0x108);
  local_174 = 0;
  if (((local_1a0 != 0.0) || (local_19c != 0.0)) || ((float)local_1b4 != 0.0)) {
    param_2[0xe] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xb] = 0.0;
    param_2[9] = 0.0;
    param_2[8] = 0.0;
    param_2[7] = 0.0;
    param_2[6] = 0.0;
    param_2[4] = 0.0;
    param_2[3] = 0.0;
    param_2[2] = 0.0;
    param_2[1] = 0.0;
    param_2[0xf] = 1.0;
    param_2[10] = 1.0;
    param_2[5] = 1.0;
    *param_2 = 1.0;
    if ((float)local_1b4 != 0.0) {
      pfStack_1b8 = (float *)local_d0;
      pfStack_1bc = (float *)0x9e5746;
      D3DXMatrixRotationZ();
      pfStack_1bc = param_2;
      pfStack_1c0 = local_d8;
      D3DXMatrixMultiply(param_2);
    }
    if (local_19c != 0.0) {
      pfStack_1b8 = (float *)local_d0;
      pfStack_1bc = (float *)0x9e578b;
      local_1b4 = (float **)local_19c;
      D3DXMatrixRotationY();
      pfStack_1bc = param_2;
      pfStack_1c0 = local_d8;
      D3DXMatrixMultiply(param_2);
    }
    if (local_1a0 == 0.0) {
      bVar2 = false;
    }
    else {
      pfStack_1b8 = (float *)local_d0;
      pfStack_1bc = (float *)0x9e57c6;
      local_1b4 = (float **)local_1a0;
      D3DXMatrixRotationX();
      pfStack_1bc = param_2;
      pfStack_1c0 = local_d8;
      D3DXMatrixMultiply(param_2);
      bVar2 = false;
    }
  }
  if ((((float)local_180 != 0.0) || (local_17c != 0.0)) || (local_178 != 0.0)) {
    if (bVar2) {
      pfStack_1b8 = (float *)local_17c;
      pfStack_1bc = local_180;
      pfStack_1c0 = param_2;
      local_1b4 = (float **)local_178;
      D3DXMatrixScaling();
      bVar2 = false;
    }
    else {
      local_1b4 = &local_180;
      pfStack_1b8 = (float *)local_d0;
      pfStack_1bc = (float *)0x9e5866;
      FUN_00ddd140();
      local_1b4 = (float **)local_d0;
      pfStack_1b8 = param_2;
      pfStack_1bc = param_2;
      pfStack_1c0 = (float *)0x9e5878;
      D3DXMatrixMultiply();
      bVar2 = false;
    }
  }
  if ((((float)local_190 == 0.0) && (local_18c == 0.0)) && (local_188 == 0.0)) {
    if (bVar2) {
      param_2[0xe] = 0.0;
      param_2[0xd] = 0.0;
      param_2[0xc] = 0.0;
      param_2[0xb] = 0.0;
      param_2[9] = 0.0;
      param_2[8] = 0.0;
      param_2[7] = 0.0;
      param_2[6] = 0.0;
      param_2[4] = 0.0;
      param_2[3] = 0.0;
      param_2[2] = 0.0;
      param_2[1] = 0.0;
      param_2[0xf] = 1.0;
      param_2[10] = 1.0;
      param_2[5] = 1.0;
      *param_2 = 1.0;
      return;
    }
  }
  else if (bVar2) {
    local_1b4 = (float **)local_188;
    pfStack_1b8 = (float *)local_18c;
    pfStack_1bc = local_190;
    pfStack_1c0 = param_2;
    D3DXMatrixTranslation();
  }
  else {
    param_2[0xc] = param_2[0xc] + (float)local_190;
    param_2[0xd] = local_18c + param_2[0xd];
    param_2[0xe] = param_2[0xe] + local_188;
  }
  afStack_160[0xe] = 0.0;
  afStack_160[0xd] = 0.0;
  afStack_160[0xc] = 0.0;
  afStack_160[0xb] = 0.0;
  afStack_160[9] = 0.0;
  afStack_160[8] = 0.0;
  afStack_160[7] = 0.0;
  afStack_160[6] = 0.0;
  afStack_160[4] = 0.0;
  afStack_160[3] = 0.0;
  afStack_160[2] = 0.0;
  afStack_160[1] = 0.0;
  afStack_160[0x1e] = 0.0;
  afStack_160[0x1d] = 0.0;
  afStack_160[0x1c] = 0.0;
  afStack_160[0x1b] = 0.0;
  afStack_160[0x19] = 0.0;
  afStack_160[0x18] = 0.0;
  afStack_160[0x17] = 0.0;
  afStack_160[0x16] = 0.0;
  afStack_160[0x14] = 0.0;
  afStack_160[0x13] = 0.0;
  afStack_160[0x12] = 0.0;
  afStack_160[0x11] = 0.0;
  afStack_160[0xf] = 1.0;
  afStack_160[10] = 1.0;
  afStack_160[5] = 1.0;
  afStack_160[0] = 1.0;
  afStack_160[0x1f] = 1.0;
  afStack_160[0x1a] = 1.0;
  afStack_160[0x15] = 1.0;
  afStack_160[0x10] = 1.0;
  if ((*(byte *)(param_1 + 0x488) & 0x20) == 0) {
    local_1b4 = *(float ***)(param_3 + 0x138);
    pfStack_1c0 = afStack_160;
    pfStack_1b8 = *(float **)(param_3 + 0x134);
    pfStack_1bc = *(float **)(param_3 + 0x130);
    D3DXMatrixTranslation();
    D3DXMatrixTranslation
              (afStack_160 + 0xc,*(float *)(param_3 + 0x130) * -1.0,
               *(float *)(param_3 + 0x134) * -1.0,*(float *)(param_3 + 0x138) * -1.0);
  }
  else {
    local_1b4 = (float **)(int)*(short *)(param_1 + 0x4e);
    pfStack_1b8 = (float *)0x9e59b7;
    iVar3 = FUN_00a12290();
    if (iVar3 != 0) {
      local_1b4 = *(float ***)(iVar3 + 0x48);
      pfStack_1c0 = afStack_160;
      pfStack_1b8 = *(float **)(iVar3 + 0x44);
      pfStack_1bc = *(float **)(iVar3 + 0x40);
      D3DXMatrixTranslation();
      D3DXMatrixTranslation
                (afStack_160 + 0xc,*(float *)(iVar3 + 0x40) * -1.0,*(float *)(iVar3 + 0x44) * -1.0,
                 *(float *)(iVar3 + 0x48) * -1.0);
      if ((_DAT_01b7b250 & 1) == 0) {
        _DAT_01b7b250 = _DAT_01b7b250 | 1;
        _DAT_01b7b240 = 0;
        _DAT_01b7b244 = 0;
        _DAT_01b7b248 = 0;
        _DAT_01b7b24c = 0x3f800000;
      }
      fVar1 = *(float *)(iVar3 + 0x10);
      local_188 = *(float *)(iVar3 + 0x30);
      fStack_184 = *(float *)(iVar3 + 0x34);
      local_18c = *(float *)(iVar3 + 0x38);
      pfStack_1c0 = (float *)(1.0 / SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                                         fVar1 * fVar1 +
                                         *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18)));
      pfStack_1bc = (float *)(1.0 / SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                                         *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                                         *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24)));
      pfStack_1b8 = (float *)(1.0 / SQRT(local_18c * local_18c +
                                         local_188 * local_188 + fStack_184 * fStack_184));
      FUN_00ddd140(auStack_b0,&pfStack_1c0);
      D3DXMatrixMultiply(afStack_160 + 0x1c,auStack_b0,(float *)(iVar3 + 0x10));
      uStack_cc = _DAT_01b7b240;
      uStack_c8 = _DAT_01b7b244;
      uStack_c4 = _DAT_01b7b248;
      D3DXMatrixInverse(auStack_7c,0,afStack_160 + 0x19);
      D3DXMatrixMultiply(afStack_160 + 2,afStack_160 + 2,auStack_88);
      D3DXMatrixMultiply(auStack_1a4,afStack_160 + 0x13,auStack_1a4);
    }
  }
  local_1b4 = (float **)param_2;
  pfStack_1b8 = afStack_160 + 0x10;
  pfStack_1bc = param_2;
  pfStack_1c0 = (float *)0x9e5c32;
  D3DXMatrixMultiply();
  pfStack_1c0 = afStack_16c;
  D3DXMatrixMultiply(param_2,param_2);
  return;
}

// 009E5C50  EspWorkShellPolygon::EspWorkShellPolygon  size=140  [class]
undefined4 * __fastcall EspWorkShellPolygon::EspWorkShellPolygon(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *param_1 = vftable;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x126] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x127] = 0x3f800000;
  return param_1;
}

// 009E5CE0  EspWorkShellPolygon::vf1C  size=1  [class]
void EspWorkShellPolygon::vf1C(void)

{
  return;
}

// 009E5D00  EspWorkShellPolygon::vf00  size=36  [class]
undefined4 * __thiscall EspWorkShellPolygon::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F5C10  EspWorkShellPolygon::vf14  size=16  [class]
void EspWorkShellPolygon::vf14(void)

{
  esp39::vf14();
  Spline<float>::Spline<float>_3();
  return;
}

// 009F5C20  EspWorkShellPolygon::vf04  size=444  [class]
undefined4 __thiscall
EspWorkShellPolygon::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00a7c990(&DAT_01ee11f4);
  if ((((iVar2 == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
      (iVar2 = FUN_00a7c800(), iVar2 != 0)) && (*(int *)(param_1 + 0x50) != 0)) {
    if (*(short *)(param_1 + 0x400) != -1) {
      FUN_009cca90(param_1,&DAT_0165bb24);
      return 0;
    }
    iVar2 = FUN_009d4a80();
    pfVar3 = (float *)FUN_009d4ac0();
    iVar4 = FUN_009d4b80();
    iVar5 = FUN_009dba00();
    if (iVar5 == 0) {
      FUN_009cca90(param_1,&DAT_0165ad74);
    }
    else if (((iVar4 != 0) && (iVar6 = FUN_009db5d0(), iVar6 != 0)) &&
            ((iVar6 = FUN_009e5390(iVar2,iVar5), iVar6 != 0 &&
             ((iVar6 = FixedSplineLoop<float>::FixedSplineLoop<float>_3(iVar4), iVar6 != 0 &&
              (iVar5 = FUN_009db710(iVar2,iVar5), iVar5 != 0)))))) {
      if ((iVar2 != 0) && (*(short *)(iVar2 + 6) != 0)) {
        *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 0x10;
      }
      *(undefined4 *)(param_1 + 0x498) = 0x3c23d70a;
      if ((iVar2 != 0) &&
         (*(float *)(param_1 + 0x498) = (float)(int)*(short *)(iVar2 + 8) * 0.001 + 0.01,
         *(char *)(iVar2 + 0x10) != '\0')) {
        *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 0x20;
      }
      *(undefined4 *)(param_1 + 0x49c) = 0x3f800000;
      if ((pfVar3 != (float *)0x0) && (*pfVar3 != 0.0)) {
        *(float *)(param_1 + 0x49c) = *pfVar3;
      }
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x17) != '\0')) {
        *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) | 0x40;
      }
      uVar1 = *(undefined1 *)(iVar4 + 0x16);
      *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x440) = uVar1;
      return 1;
    }
    return 0;
  }
  FUN_009cca90(param_1,&DAT_0165baf8);
  return 0;
}

// 009F5DE0  EspWorkShellPolygon::vf10  size=1121  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall EspWorkShellPolygon::vf10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_10 [16];
  
  fVar3 = *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x25c);
  if (fVar3 < 0.01 == (fVar3 == 0.01)) {
    iVar4 = FUN_009dba00();
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_0165ad74);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
    if ((*(byte *)(iVar4 + 0x4c8) & 3) != 0) {
      iVar4 = FUN_009f8ea0(local_10,0x10,*(undefined4 *)(iVar4 + 0x4b0),0);
      if (iVar4 == 0) {
        FUN_009ccaa0(param_1,&DAT_0165bb4c);
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
    if (((*(char *)(iVar4 + 0x470) == '\0') && (DAT_01edd490 != 0)) &&
       (iVar5 = cPrimHeap::allocBuffer(0xc0,0x20), iVar5 != 0)) {
      FUN_009e5200();
      FUN_009e5610(iVar5 + 0x10,iVar4);
      *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x250);
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x254);
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 600);
      *(float *)(iVar5 + 0x5c) = *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x25c);
      *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(param_1 + 0x498);
      if (*(undefined4 **)(param_1 + 0x468) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + 100) = **(undefined4 **)(param_1 + 0x468);
      }
      if (*(undefined4 **)(param_1 + 0x46c) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + 0x68) = **(undefined4 **)(param_1 + 0x46c);
        *(uint *)(iVar5 + 0x9c) = *(uint *)(iVar5 + 0x9c) | 0x8000000;
      }
      *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(param_1 + 0x49c);
      *(uint *)(iVar5 + 0x98) = (uint)*(byte *)(param_1 + 0x440);
      FUN_009d3450(0,~(*(uint *)(param_1 + 0x38) >> 4) & 1);
      FUN_009d3450(1,*(uint *)(param_1 + 0x3c) >> 4 & 1);
      FUN_009d3450(2,*(uint *)(param_1 + 0x3c) >> 0x1b & 1);
      FUN_009d3450(3,*(uint *)(param_1 + 0x38) >> 10 & 1);
      if (*(int *)(param_1 + 0x468) == 0) {
        if (*(int *)(param_1 + 0x46c) == 0) {
          iVar6 = *(int *)(param_1 + 0x450);
          if (iVar6 == 0) {
            return;
          }
          if (*(int *)(iVar6 + 4) == 0) {
            return;
          }
          iVar6 = FUN_00fa0740(*(undefined2 *)(iVar6 + 0xc));
          if (iVar6 == 0) {
            return;
          }
          *(int *)(iVar5 + 0x90) = iVar6;
          puVar2 = *(undefined4 **)(param_1 + 0x45c);
          if (puVar2 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar5 + 0x70) = _DAT_0188f610;
            *(undefined4 *)(iVar5 + 0x74) = _DAT_0188f614;
            *(undefined4 *)(iVar5 + 0x78) = _DAT_0188f618;
            uVar1 = _DAT_0188f61c;
          }
          else {
            if ((*(byte *)(puVar2 + 6) & 1) == 0) {
              uVar1 = 0x3f800000;
              fVar3 = -1.0;
            }
            else {
              uVar1 = *puVar2;
              fVar3 = -(float)puVar2[1];
            }
            *(undefined4 *)(iVar5 + 0x70) = uVar1;
            *(float *)(iVar5 + 0x74) = fVar3;
            *(undefined4 *)(iVar5 + 0x78) = puVar2[4];
            uVar1 = puVar2[5];
          }
          *(undefined4 *)(iVar5 + 0x7c) = uVar1;
          iVar6 = *(int *)(param_1 + 0x458);
          if (iVar6 == 0) {
            *(uint *)(iVar5 + 0xa0) = *(byte *)(param_1 + 0x488) >> 3 & 2;
          }
          else {
            if (*(int *)(iVar6 + 4) == 0) {
              return;
            }
            iVar6 = FUN_00fa0740(*(undefined2 *)(iVar6 + 0xc));
            if (iVar6 == 0) {
              return;
            }
            *(int *)(iVar5 + 0x94) = iVar6;
            puVar2 = *(undefined4 **)(param_1 + 0x464);
            if (puVar2 == (undefined4 *)0x0) {
              *(undefined4 *)(iVar5 + 0x80) = _DAT_0188f610;
              *(undefined4 *)(iVar5 + 0x84) = _DAT_0188f614;
              *(undefined4 *)(iVar5 + 0x88) = _DAT_0188f618;
              uVar1 = _DAT_0188f61c;
            }
            else {
              if ((*(byte *)(puVar2 + 6) & 1) == 0) {
                uVar1 = 0x3f800000;
                fVar3 = -1.0;
              }
              else {
                uVar1 = *puVar2;
                fVar3 = -(float)puVar2[1];
              }
              *(undefined4 *)(iVar5 + 0x80) = uVar1;
              *(float *)(iVar5 + 0x84) = fVar3;
              *(undefined4 *)(iVar5 + 0x88) = puVar2[4];
              uVar1 = puVar2[5];
            }
            *(undefined4 *)(iVar5 + 0x8c) = uVar1;
            *(uint *)(iVar5 + 0xa0) = (*(byte *)(param_1 + 0x488) & 0x10 | 8) >> 3;
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0x454);
          if (iVar6 == 0) {
            return;
          }
          if (*(int *)(iVar6 + 4) == 0) {
            return;
          }
          iVar6 = FUN_00fa0740(*(undefined2 *)(iVar6 + 0xc));
          if (iVar6 == 0) {
            return;
          }
          *(int *)(iVar5 + 0x90) = iVar6;
          puVar2 = *(undefined4 **)(param_1 + 0x460);
          if (puVar2 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar5 + 0x70) = _DAT_0188f610;
            *(undefined4 *)(iVar5 + 0x74) = _DAT_0188f614;
            *(undefined4 *)(iVar5 + 0x78) = _DAT_0188f618;
            *(undefined4 *)(iVar5 + 0x7c) = _DAT_0188f61c;
            *(undefined4 *)(iVar5 + 0xa0) = 5;
          }
          else {
            if ((*(byte *)(puVar2 + 6) & 1) == 0) {
              uVar1 = 0x3f800000;
              fVar3 = -1.0;
            }
            else {
              uVar1 = *puVar2;
              fVar3 = -(float)puVar2[1];
            }
            *(undefined4 *)(iVar5 + 0x70) = uVar1;
            *(float *)(iVar5 + 0x74) = fVar3;
            *(undefined4 *)(iVar5 + 0x78) = puVar2[4];
            *(undefined4 *)(iVar5 + 0x7c) = puVar2[5];
            *(undefined4 *)(iVar5 + 0xa0) = 5;
          }
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x450);
        if (iVar6 == 0) {
          return;
        }
        if (*(int *)(iVar6 + 4) == 0) {
          return;
        }
        iVar6 = FUN_00fa0740(*(undefined2 *)(iVar6 + 0xc));
        if (iVar6 == 0) {
          return;
        }
        *(int *)(iVar5 + 0x90) = iVar6;
        puVar2 = *(undefined4 **)(param_1 + 0x45c);
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined4 *)(iVar5 + 0x70) = _DAT_0188f610;
          *(undefined4 *)(iVar5 + 0x74) = _DAT_0188f614;
          *(undefined4 *)(iVar5 + 0x78) = _DAT_0188f618;
          *(undefined4 *)(iVar5 + 0x7c) = _DAT_0188f61c;
          *(undefined4 *)(iVar5 + 0xa0) = 4;
        }
        else {
          if ((*(byte *)(puVar2 + 6) & 1) == 0) {
            uVar1 = 0x3f800000;
            fVar3 = -1.0;
          }
          else {
            uVar1 = *puVar2;
            fVar3 = -(float)puVar2[1];
          }
          *(undefined4 *)(iVar5 + 0x70) = uVar1;
          *(float *)(iVar5 + 0x74) = fVar3;
          *(undefined4 *)(iVar5 + 0x78) = puVar2[4];
          *(undefined4 *)(iVar5 + 0x7c) = puVar2[5];
          *(undefined4 *)(iVar5 + 0xa0) = 4;
        }
      }
      FUN_009f23b0(iVar4,iVar5);
    }
  }
  return;
}

