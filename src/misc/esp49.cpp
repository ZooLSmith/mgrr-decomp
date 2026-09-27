// src/misc/esp49.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1C20..00F38360, 7 functions

#include "types.h"

// 00ED1C20  esp49::esp49  size=18  [class]
undefined4 * __fastcall esp49::esp49(undefined4 *param_1)

{
  esp02::esp02();
  *param_1 = vftable;
  return param_1;
}

// 00ED2E60  esp49::vf00  size=36  [class]
undefined4 * __thiscall esp49::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspModel::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDA210  esp49::vf14  size=64  [class]
void __fastcall esp49::vf14(int param_1)

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

// 00EF63D0  esp49::vf0C  size=32  [class]
void __fastcall esp49::vf0C(int param_1)

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

// 00EF63F0  esp49::vf10  size=306  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp49::vf10(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  pfVar2 = (float *)FUN_00e9fe70();
  pfVar3 = (float *)FUN_00e9feb0();
  local_30 = *pfVar3 - *pfVar2;
  local_2c = pfVar3[1] - pfVar2[1];
  local_28 = pfVar3[2] - pfVar2[2];
  local_24 = pfVar3[3] - pfVar2[3];
  fVar1 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  local_30 = _DAT_018d6f44 * local_30;
  local_2c = _DAT_018d6f44 * local_2c;
  local_28 = _DAT_018d6f44 * local_28;
  local_24 = _DAT_018d6f44 * local_24;
  pfVar2 = (float *)FUN_00e9fe70();
  fVar1 = pfVar2[2];
  *(float *)(param_1 + 0x180) = local_30 + *pfVar2;
  *(float *)(param_1 + 0x188) = fVar1 + local_28;
  return;
}

// 00F2C530  esp49::vf08  size=5  [class]
void __fastcall esp49::vf08(int param_1)

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
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_ec [12];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
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
  undefined1 auStack_78 [100];
  uint uStack_14;
  
  uStack_14 = DAT_018e8764 ^ (uint)auStack_124;
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
      fStack_a8 = 0.0;
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_b4 = 0.0;
      fStack_bc = 0.0;
      uStack_c0 = 0;
      uStack_c4 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_d4 = 0;
      uStack_d8 = 0;
      uStack_dc = 0;
      uStack_a4 = 0x3f800000;
      fStack_b8 = 1.0;
      uStack_cc = 0x3f800000;
      uStack_e0 = 0x3f800000;
      if (iVar3 == 0) {
        fStack_114 = 0.0;
        fStack_118 = 0.0;
        fStack_11c = 0.0;
        fStack_120 = 0.0;
      }
      else {
        fStack_120 = *(float *)(iVar3 + 0x40);
        fStack_11c = *(float *)(iVar3 + 0x44);
        fStack_118 = *(float *)(iVar3 + 0x48);
        fStack_114 = *(float *)(iVar3 + 0x4c);
      }
      fStack_110 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
      fStack_10c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
      fStack_108 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
      fStack_104 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
      fStack_100 = fStack_110 + fStack_120;
      fStack_fc = fStack_10c + fStack_11c;
      fStack_f8 = fStack_108 + fStack_118;
      fStack_f4 = fStack_104 + fStack_114;
      puStack_140 = (undefined1 *)0xf2737d;
      D3DXVec3TransformNormal();
      puStack_140 = auStack_ec;
      fStack_bc = fStack_bc + fStack_11c;
      iStack_144 = param_1 + 0x200;
      fStack_b8 = fStack_118 + fStack_b8;
      fStack_b4 = fStack_114 + fStack_b4;
      D3DXMatrixMultiply(puStack_140);
      uStack_80 = 0;
      uStack_84 = 0;
      uStack_88 = 0;
      uStack_8c = 0;
      uStack_94 = 0;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      fStack_a8 = 0.0;
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_b4 = 0.0;
      uStack_7c = 0x3f800000;
      uStack_90 = 0x3f800000;
      uStack_a4 = 0x3f800000;
      fStack_b8 = 1.0;
      if (*(float *)(param_1 + 0x1c8) != 0.0) {
        D3DXMatrixRotationZ(auStack_78,*(undefined4 *)(param_1 + 0x1c8));
        D3DXMatrixMultiply(&uStack_c0,&uStack_80,&uStack_c0);
      }
      if (*(float *)(param_1 + 0x1c4) != 0.0) {
        D3DXMatrixRotationY(auStack_78,*(undefined4 *)(param_1 + 0x1c4));
        D3DXMatrixMultiply(&uStack_c0,&uStack_80,&uStack_c0);
      }
      if (*(float *)(param_1 + 0x1c0) != 0.0) {
        D3DXMatrixRotationX(auStack_78,*(undefined4 *)(param_1 + 0x1c0));
        D3DXMatrixMultiply(&uStack_c0,&uStack_80,&uStack_c0);
      }
      D3DXMatrixMultiply(&fStack_f8,&fStack_b8,&fStack_f8);
      iStack_144 = *(int *)(iVar1 + 0x70);
      puStack_140 = *(undefined1 **)(iVar1 + 0x74);
      FUN_00ddd140(&uStack_84,&iStack_144);
      D3DXMatrixMultiply(&fStack_104,&uStack_84,&fStack_104);
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
      fStack_11c = *(float *)(uVar6 + 0x18) - 0.5;
      fStack_120 = *(float *)(uVar6 + 0x14) - 0.5;
      fStack_118 = 0.0;
      D3DXVec3TransformNormal(&puStack_140,&fStack_120,&fStack_110);
      fStack_b0 = fStack_110 + fStack_b0;
      fStack_ac = fStack_10c + fStack_ac;
      fStack_a8 = fStack_108 + fStack_a8;
      puStack_140 = (undefined1 *)0xf27608;
      FID_conflict__memcpy((void *)(iVar1 + 0x10),&uStack_e0,0x40);
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    }
    FUN_00ee0500();
    if (((((*(byte *)(param_1 + 0x3c) & 8) != 0) && (*(int *)(param_1 + 0x120) == 0)) &&
        (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c800(), *(char *)(iVar1 + 0x470) != '\0')) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
  }
  __security_check_cookie(uStack_14 ^ (uint)auStack_124);
  return;
}

// 00F38360  esp49::vf04  size=29  [class]
bool esp49::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = esp02::vf04(param_1,param_2,param_3);
  return iVar1 != 0;
}

