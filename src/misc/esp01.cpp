// src/misc/esp01.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD360..00F2D7B0, 5 functions

#include "types.h"

// 00ECD360  esp01::esp01  size=29  [class]
undefined4 * __fastcall esp01::esp01(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00ED0750  esp01::vf00  size=30  [class]
undefined4 __thiscall esp01::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED5300  esp01::vf10  size=1  [class]
void esp01::vf10(void)

{
  return;
}

// 00F207D0  esp01::vf08  size=9132  [class]
void __fastcall esp01::vf08(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 extraout_ST0;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float *pfStack_2f0;
  undefined1 auStack_2d4 [4];
  float fStack_2d0;
  float local_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  float fStack_25c;
  int local_258;
  int local_254;
  float local_24c;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined1 auStack_210 [8];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float afStack_1f0 [48];
  undefined1 auStack_130 [64];
  undefined4 local_f0 [16];
  undefined1 auStack_b0 [64];
  undefined2 local_70;
  undefined2 local_6e;
  float local_6c [22];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_2d4;
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
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) goto LAB_00f22b67;
  afStack_1f0[0x2e] = 0.0;
  afStack_1f0[0x2d] = 0.0;
  local_254 = 0;
  afStack_1f0[0x2c] = 0.0;
  local_258 = 0;
  afStack_1f0[0x2b] = 0.0;
  local_70 = 0xffff;
  afStack_1f0[0x29] = 0.0;
  local_6e = 0;
  afStack_1f0[0x28] = 0.0;
  local_6c[0] = 0.0;
  afStack_1f0[0x27] = 0.0;
  local_6c[1] = 0.0;
  afStack_1f0[0x26] = 0.0;
  local_6c[2] = 0.0;
  afStack_1f0[0x24] = 0.0;
  afStack_1f0[0x23] = 0.0;
  afStack_1f0[0x22] = 0.0;
  afStack_1f0[0x21] = 0.0;
  afStack_1f0[0x2f] = 1.0;
  afStack_1f0[0x2a] = 1.0;
  afStack_1f0[0x25] = 1.0;
  afStack_1f0[0x20] = 1.0;
  local_24c = 0.0;
  local_290 = 0.0;
  local_28c = 0.0;
  local_288 = 0.0;
  local_284 = 0.0;
  if (*(int *)(param_1 + 0x4c8) != 0) {
    local_f0[0xe] = 0;
    local_f0[0xd] = 0;
    local_f0[0xc] = 0;
    local_f0[0xb] = 0;
    local_f0[9] = 0;
    local_f0[8] = 0;
    local_f0[7] = 0;
    local_f0[6] = 0;
    local_f0[4] = 0;
    local_f0[3] = 0;
    local_f0[2] = 0;
    local_f0[1] = 0;
    local_f0[0xf] = 0x3f800000;
    local_f0[10] = 0x3f800000;
    local_f0[5] = 0x3f800000;
    local_f0[0] = 0x3f800000;
    if (*(int *)(param_1 + 0x50) == 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100000;
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
      FUN_00edfcd0();
      pfStack_2f0 = (float *)0xf209a5;
      FUN_00f20370();
      FUN_00efed20();
    }
    local_240 = *(float *)(param_1 + 400);
    iVar2 = *(int *)(param_1 + 0x4cc);
    local_23c = *(float *)(param_1 + 0x194);
    local_238 = *(float *)(param_1 + 0x198);
    puVar3 = (undefined4 *)(param_1 + 0x470);
    puVar9 = local_f0;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    local_234 = *(float *)(param_1 + 0x19c);
    local_2b0 = 0.0;
    local_2ac = -1.0;
    local_2a8 = 0.0;
    if (iVar2 == 1) {
      pfStack_2f0 = (float *)0xf20c2b;
      D3DXVec3TransformNormal();
      local_2cc = local_2ac * local_2ac + local_2b0 * local_2b0 + local_2a8 * local_2a8;
      if (local_2cc < 0.0 == (local_2cc == 0.0)) {
        FUN_00ddf460();
      }
      else {
LAB_00f20afa:
        FUN_00dd5650();
        local_2b0 = 0.0;
        local_2ac = 1.0;
        local_2a8 = 0.0;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = FUN_00a81330();
      if ((iVar2 == 0) || (iVar2 = FUN_00a7c800(), iVar2 == 0)) {
        FUN_00dd5650();
      }
      else {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a7c800();
        }
        iVar2 = FUN_00a12210();
        if (iVar2 == 0) {
          FUN_00dd5650();
        }
        else {
          pfStack_2f0 = (float *)0xf20a88;
          D3DXVec3TransformNormal();
          local_2cc = local_2ac * local_2ac + local_2b0 * local_2b0 + local_2a8 * local_2a8;
          if (local_2cc < 0.0 != (local_2cc == 0.0)) goto LAB_00f20afa;
          FUN_00ddf460();
        }
      }
    }
    local_2cc = *(float *)(param_1 + 0x4e0);
    local_2a0 = local_2cc * local_2b0;
    local_29c = local_2cc * local_2ac;
    local_298 = local_2cc * local_2a8;
    local_294 = local_2cc * local_2a4;
    local_2b0 = local_240 + local_2a0;
    local_2ac = local_23c + local_29c;
    local_2a8 = local_238 + local_298;
    local_2a4 = local_234 + local_294;
    if ((*(int *)(param_1 + 0x4e4) == 2) || (*(int *)(param_1 + 0x4e4) == 4)) {
      local_2a0 = local_2b0 - local_240;
      local_29c = local_2ac - local_23c;
      local_298 = local_2a8 - local_238;
      local_294 = local_2a4 - local_234;
      FUN_00ddf460();
      fVar10 = (float10)FUN_00fdecda();
      local_2cc = (float)fVar10;
      local_24c = local_2cc;
    }
    FUN_009d60e0();
    pfStack_2f0 = (float *)0xf20cde;
    iVar2 = FUN_009d60a0();
    if (((iVar2 != 0) && ((*(int *)(param_1 + 0x4c8) != 2 || (iVar2 = FUN_009cf240(), iVar2 != 0))))
       && ((iVar2 = FUN_009d6110(), iVar2 != 0 || (*(int *)(param_1 + 0x454) != 1)))) {
      puVar3 = (undefined4 *)FUN_009cf200();
      *(undefined4 *)(param_1 + 400) = *puVar3;
      *(undefined4 *)(param_1 + 0x194) = puVar3[1];
      *(undefined4 *)(param_1 + 0x198) = puVar3[2];
      *(undefined4 *)(param_1 + 0x19c) = puVar3[3];
      pfVar4 = (float *)FUN_009cf220();
      local_2a0 = *pfVar4;
      local_29c = pfVar4[1];
      local_298 = pfVar4[2];
      local_2cc = local_2a0 * local_2a0 + local_298 * local_298;
      fVar10 = (float10)FUN_00fdef70();
      local_2cc = (float)fVar10;
      fVar10 = (float10)FUN_00fdecda();
      local_2cc = (float)fVar10;
      local_290 = 1.5707964 - local_2cc;
      fVar10 = (float10)FUN_00fdecda();
      local_2cc = (float)fVar10;
      local_288 = 0.0;
      local_284 = 0.0;
      *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x1b0) + local_290;
      *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) + local_2cc;
      *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) + 0.0;
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) + 0.0;
      local_28c = local_2cc;
      if (*(int *)(param_1 + 0x4c8) == 3) {
        iVar2 = FUN_009d60f0();
        local_258 = iVar2;
        local_70 = FUN_009cf270();
        iVar8 = FUN_009cf290();
        if ((iVar2 != 0) && (iVar8 != 0)) {
          afStack_1f0[0xe] = 0.0;
          afStack_1f0[0xd] = 0.0;
          afStack_1f0[0xc] = 0.0;
          afStack_1f0[0xb] = 0.0;
          afStack_1f0[9] = 0.0;
          afStack_1f0[8] = 0.0;
          afStack_1f0[7] = 0.0;
          afStack_1f0[6] = 0.0;
          afStack_1f0[4] = 0.0;
          afStack_1f0[3] = 0.0;
          afStack_1f0[2] = 0.0;
          afStack_1f0[1] = 0.0;
          afStack_1f0[0xf] = 1.0;
          afStack_1f0[10] = 1.0;
          afStack_1f0[5] = 1.0;
          afStack_1f0[0] = 1.0;
          if (local_288 != 0.0) {
            D3DXMatrixRotationZ();
            pfStack_2f0 = afStack_1f0 + 0xe;
            D3DXMatrixMultiply(&uStack_1f8);
          }
          if (local_28c != 0.0) {
            D3DXMatrixRotationY();
            pfStack_2f0 = afStack_1f0 + 0xe;
            D3DXMatrixMultiply(&uStack_1f8);
          }
          if (local_290 != 0.0) {
            D3DXMatrixRotationX();
            pfStack_2f0 = afStack_1f0 + 0xe;
            D3DXMatrixMultiply(&uStack_1f8);
          }
          afStack_1f0[0xc] = *(float *)(param_1 + 400);
          afStack_1f0[0xd] = *(float *)(param_1 + 0x194);
          afStack_1f0[0xe] = *(float *)(param_1 + 0x198);
          pfStack_2f0 = (float *)0xf20ff1;
          D3DXMatrixInverse();
          pfStack_2f0 = local_6c;
          D3DXMatrixMultiply(afStack_1f0 + 0x2d,&uStack_1fc);
          pfStack_2f0 = (float *)0xf21025;
          FID_conflict__memcpy(auStack_b0,auStack_130,0x40);
          local_254 = 1;
        }
      }
      goto LAB_00f21039;
    }
    goto LAB_00f22b60;
  }
LAB_00f21039:
  *(float *)(param_1 + 400) = *(float *)(param_1 + 0x4b0) + *(float *)(param_1 + 400);
  *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x4b4) + *(float *)(param_1 + 0x194);
  *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x4b8) + *(float *)(param_1 + 0x198);
  *(float *)(param_1 + 0x19c) = *(float *)(param_1 + 0x4bc) + *(float *)(param_1 + 0x19c);
  FUN_00edfc20();
  FUN_00efbd40();
  local_2cc = 1.0;
  if (*(float *)(param_1 + 0x4d0) != 0.0) {
    pfVar4 = (float *)FUN_00e9fe70();
    fStack_2c4 = *pfVar4 - *(float *)(param_1 + 400);
    fVar18 = pfVar4[1] - *(float *)(param_1 + 0x194);
    fVar1 = pfVar4[2] - *(float *)(param_1 + 0x198);
    fStack_2c8 = fVar1 * fVar1 + fVar18 * fVar18 + fStack_2c4 * fStack_2c4;
    fStack_2d0 = *(float *)(param_1 + 0x4d4) * *(float *)(param_1 + 0x4d4);
    if (fStack_2d0 < fStack_2c8) {
      fVar10 = (float10)FUN_00fdef70();
      fVar18 = ((float)fVar10 - *(float *)(param_1 + 0x4d4)) /
               (*(float *)(param_1 + 0x4d8) - *(float *)(param_1 + 0x4d4));
      if (1.0 < fVar18) {
        fVar18 = 1.0;
      }
      fStack_2d0 = 1.0 - fVar18;
      local_2cc = fVar18 * *(float *)(param_1 + 0x4d0) + fStack_2d0;
    }
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
  }
  if (((*(uint *)(param_1 + 0x38) & 0x100000) == 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    fStack_280 = *(float *)(param_1 + 400);
    fStack_27c = *(float *)(param_1 + 0x194);
    fStack_278 = *(float *)(param_1 + 0x198);
    fStack_274 = *(float *)(param_1 + 0x19c);
    if (*(int *)(param_1 + 0x4c8) == 3) {
      fStack_270 = 0.0;
      fStack_26c = 0.0;
      fStack_268 = 0.0;
      uStack_264 = 0;
      if (local_254 == 0) {
        iVar2 = *(int *)(param_1 + 0x4e4);
        if (iVar2 == 2) {
          fStack_2c0 = afStack_1f0[0x2c];
          fStack_2bc = afStack_1f0[0x2d];
          fStack_2b8 = afStack_1f0[0x2e];
          fStack_2d0 = afStack_1f0[0x21] * afStack_1f0[0x21] + afStack_1f0[0x20] * afStack_1f0[0x20]
                       + afStack_1f0[0x22] * afStack_1f0[0x22];
          fVar10 = (float10)FUN_00fdef70();
          fStack_2c4 = (float)fVar10;
          fStack_2d0 = afStack_1f0[0x25] * afStack_1f0[0x25] + afStack_1f0[0x24] * afStack_1f0[0x24]
                       + afStack_1f0[0x26] * afStack_1f0[0x26];
          fVar10 = (float10)FUN_00fdef70();
          fStack_2c8 = (float)fVar10;
          fStack_2d0 = afStack_1f0[0x29] * afStack_1f0[0x29] + afStack_1f0[0x28] * afStack_1f0[0x28]
                       + afStack_1f0[0x2a] * afStack_1f0[0x2a];
          fVar10 = (float10)FUN_00fdef70();
          fStack_2d0 = (float)fVar10;
          pfStack_2f0 = afStack_1f0 + 0x20;
          D3DXMatrixScaling();
          local_2b0 = 0.0;
          local_2a8 = 0.0;
          local_2a4 = 0.0;
          local_2ac = fStack_25c + 0.0;
          thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_2b0,5);
          D3DXMatrixMultiply(afStack_1f0 + 0x1c,afStack_1f0 + 0x1c,afStack_1f0 + 0x2c);
          afStack_1f0[0x2c] = fStack_2c0 + afStack_1f0[0x2c];
LAB_00f21711:
          afStack_1f0[0x2d] = fStack_2bc + afStack_1f0[0x2d];
          afStack_1f0[0x2e] = fStack_2b8 + afStack_1f0[0x2e];
        }
        else {
          if (iVar2 == 3) {
            fStack_2c0 = afStack_1f0[0x2c];
            fStack_2bc = afStack_1f0[0x2d];
            fStack_2b8 = afStack_1f0[0x2e];
            fStack_2d0 = afStack_1f0[0x21] * afStack_1f0[0x21] +
                         afStack_1f0[0x20] * afStack_1f0[0x20] +
                         afStack_1f0[0x22] * afStack_1f0[0x22];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2c4 = (float)fVar10;
            fStack_2d0 = afStack_1f0[0x25] * afStack_1f0[0x25] +
                         afStack_1f0[0x24] * afStack_1f0[0x24] +
                         afStack_1f0[0x26] * afStack_1f0[0x26];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2c8 = (float)fVar10;
            fStack_2d0 = afStack_1f0[0x29] * afStack_1f0[0x29] +
                         afStack_1f0[0x28] * afStack_1f0[0x28] +
                         afStack_1f0[0x2a] * afStack_1f0[0x2a];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2d0 = (float)fVar10;
            pfStack_2f0 = afStack_1f0 + 0x20;
            D3DXMatrixScaling();
            thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_2a0,5);
            D3DXMatrixMultiply(afStack_1f0 + 0x1c,afStack_1f0 + 0x1c,afStack_1f0 + 0x2c);
            afStack_1f0[0x2c] = afStack_1f0[0x2c] + fStack_2c0;
            goto LAB_00f21711;
          }
          if (iVar2 == 4) {
            fStack_2c0 = afStack_1f0[0x2c];
            fStack_2bc = afStack_1f0[0x2d];
            fStack_2b8 = afStack_1f0[0x2e];
            fStack_2d0 = afStack_1f0[0x21] * afStack_1f0[0x21] +
                         afStack_1f0[0x20] * afStack_1f0[0x20] +
                         afStack_1f0[0x22] * afStack_1f0[0x22];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2c4 = (float)fVar10;
            fStack_2d0 = afStack_1f0[0x25] * afStack_1f0[0x25] +
                         afStack_1f0[0x24] * afStack_1f0[0x24] +
                         afStack_1f0[0x26] * afStack_1f0[0x26];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2c8 = (float)fVar10;
            fStack_2d0 = afStack_1f0[0x29] * afStack_1f0[0x29] +
                         afStack_1f0[0x28] * afStack_1f0[0x28] +
                         afStack_1f0[0x2a] * afStack_1f0[0x2a];
            fVar10 = (float10)FUN_00fdef70();
            fStack_2d0 = (float)fVar10;
            pfStack_2f0 = afStack_1f0 + 0x20;
            D3DXMatrixScaling();
            local_2b0 = local_2a0;
            local_2a8 = local_298;
            local_2a4 = local_294;
            local_2ac = local_29c + fStack_25c;
            thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_2b0,5);
            D3DXMatrixMultiply(afStack_1f0 + 0x1c,afStack_1f0 + 0x1c,afStack_1f0 + 0x2c);
            afStack_1f0[0x2c] = afStack_1f0[0x2c] + fStack_2c0;
            goto LAB_00f21711;
          }
        }
        uVar19 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = *(undefined4 *)(param_1 + 0x4c0);
        pfStack_2f0 = (float *)0x0;
        fStack_2d0 = *(float *)(param_1 + 0x100) * local_2cc;
        uVar15 = *(undefined4 *)(param_1 + 0x4c4);
        uVar5 = *(uint *)(param_1 + 0x6c) & 0xfffffbff;
        uVar12 = *(undefined4 *)(param_1 + 0x74);
        pfVar4 = &fStack_270;
        pfVar7 = afStack_1f0 + 0x20;
        goto LAB_00f223e4;
      }
    }
    else {
      iVar2 = FUN_00ee0480();
      if (iVar2 == 0) {
        switch(*(undefined4 *)(param_1 + 0x4e4)) {
        case 1:
          local_2b0 = (float)extraout_ST0;
          local_2ac = (float)extraout_ST0;
          local_2a8 = (float)extraout_ST0;
          local_2a4 = (float)extraout_ST0;
          break;
        case 2:
          local_2b0 = (float)extraout_ST0;
          local_2a8 = (float)extraout_ST0;
          local_2a4 = (float)extraout_ST0;
          local_2ac = local_24c + 0.0;
          break;
        case 3:
          local_2b0 = local_290;
          local_2ac = local_28c;
          local_2a8 = local_288;
          local_2a4 = local_284;
          break;
        case 4:
          local_2b0 = local_290;
          local_2a8 = local_288;
          local_2a4 = local_284;
          local_2ac = local_28c + local_24c;
          break;
        default:
          local_2b0 = *(float *)(param_1 + 0x1b0);
          local_2ac = *(float *)(param_1 + 0x1b4);
          local_2a8 = *(float *)(param_1 + 0x1b8);
          local_2a4 = *(float *)(param_1 + 0x1bc);
        }
        uVar19 = *(undefined4 *)(param_1 + 0x88);
        uVar14 = *(undefined4 *)(param_1 + 0x4c4);
        pfStack_2f0 = (float *)0x0;
        fVar18 = *(float *)(param_1 + 0x100) * local_2cc;
        uVar15 = *(undefined4 *)(param_1 + 0x4c0);
        uVar17 = 0xff;
        uVar16 = 0;
        uVar12 = *(undefined4 *)(param_1 + 0x6c);
        uVar13 = *(undefined4 *)(param_1 + 0x74);
        uVar11 = *(undefined4 *)(param_1 + 0x78);
        pfVar4 = &local_2b0;
        pfVar7 = &fStack_280;
        fStack_2d0 = fVar18;
        uVar6 = FUN_00a81330(pfVar7,pfVar4,uVar11,uVar13,uVar12,uVar15,uVar14,0,0xff,fVar18,uVar19);
        FUN_00f42b60(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x458),
                     *(undefined4 *)(param_1 + 0x460),param_1 + 0x7c,uVar6,pfVar7,pfVar4,uVar11,
                     uVar13,uVar12,uVar15,uVar14,uVar16,uVar17,fVar18,uVar19);
      }
    }
    goto LAB_00f22b60;
  }
  iVar2 = *(int *)(param_1 + 0x4c8);
  if (*(int *)(param_1 + 0x4e8) == 0) {
    FUN_00edfcd0();
    pfStack_2f0 = (float *)0xf21d56;
    FUN_00f20370();
    FUN_00efed20();
    iVar8 = FUN_009d4a40();
    fStack_2d0 = -*(float *)(iVar8 + 0x14);
    fStack_2c8 = -*(float *)(iVar8 + 0x18);
    fStack_278 = 0.0;
    pfStack_2f0 = (float *)0xf21da4;
    fStack_280 = fStack_2d0;
    fStack_27c = fStack_2c8;
    D3DXVec3TransformNormal();
    afStack_1f0[0x1c] = afStack_1f0[0x1c] + fStack_270;
    afStack_1f0[0x1d] = fStack_26c + afStack_1f0[0x1d];
    afStack_1f0[0x1e] = fStack_268 + afStack_1f0[0x1e];
    if (iVar2 != 0) {
      afStack_1f0[0x1c] = *(float *)(param_1 + 400);
      afStack_1f0[0x1d] = *(float *)(param_1 + 0x194);
      afStack_1f0[0x1e] = *(float *)(param_1 + 0x198);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50);
    afStack_1f0[0x1e] = 0.0;
    afStack_1f0[0x1d] = 0.0;
    afStack_1f0[0x1c] = 0.0;
    afStack_1f0[0x1b] = 0.0;
    afStack_1f0[0x19] = 0.0;
    afStack_1f0[0x18] = 0.0;
    afStack_1f0[0x17] = 0.0;
    afStack_1f0[0x16] = 0.0;
    afStack_1f0[0x14] = 0.0;
    afStack_1f0[0x13] = 0.0;
    afStack_1f0[0x12] = 0.0;
    afStack_1f0[0x11] = 0.0;
    afStack_1f0[0x1f] = 1.0;
    afStack_1f0[0x1a] = 1.0;
    afStack_1f0[0x15] = 1.0;
    afStack_1f0[0x10] = 1.0;
    if (iVar2 == 0) {
      local_294 = 0.0;
      local_298 = 0.0;
      local_29c = 0.0;
      local_2a0 = 0.0;
    }
    else {
      local_2a0 = *(float *)(iVar2 + 0x40);
      local_29c = *(float *)(iVar2 + 0x44);
      local_298 = *(float *)(iVar2 + 0x48);
      local_294 = *(float *)(iVar2 + 0x4c);
    }
    fStack_2c0 = *(float *)(param_1 + 0x4b0) + *(float *)(param_1 + 0x180);
    fStack_2bc = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x4b4);
    fStack_2b8 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x4b8);
    fStack_2b4 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x4bc);
    fStack_280 = fStack_2c0 + local_2a0;
    fStack_27c = fStack_2bc + local_29c;
    fStack_278 = fStack_2b8 + local_298;
    fStack_274 = fStack_2b4 + local_294;
    pfStack_2f0 = (float *)0xf21a46;
    D3DXVec3TransformNormal();
    pfStack_2f0 = afStack_1f0 + 0xd;
    afStack_1f0[0x19] = afStack_1f0[0x19] + fStack_27c;
    afStack_1f0[0x1a] = fStack_278 + afStack_1f0[0x1a];
    afStack_1f0[0x1b] = fStack_274 + afStack_1f0[0x1b];
    D3DXMatrixMultiply(pfStack_2f0,param_1 + 0x200);
    afStack_1f0[8] = 0.0;
    afStack_1f0[7] = 0.0;
    afStack_1f0[6] = 0.0;
    afStack_1f0[5] = 0.0;
    afStack_1f0[3] = 0.0;
    afStack_1f0[2] = 0.0;
    afStack_1f0[1] = 0.0;
    afStack_1f0[0] = 0.0;
    uStack_1f8 = 0;
    uStack_1fc = 0;
    uStack_200 = 0;
    uStack_204 = 0;
    afStack_1f0[9] = 1.0;
    afStack_1f0[4] = 1.0;
    uStack_1f4 = 0x3f800000;
    uStack_208 = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(afStack_1f0 + 0x2a,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(auStack_210,afStack_1f0 + 0x28,auStack_210);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(afStack_1f0 + 0x2a,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(auStack_210,afStack_1f0 + 0x28,auStack_210);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(afStack_1f0 + 0x2a,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(auStack_210,afStack_1f0 + 0x28,auStack_210);
    }
    D3DXMatrixMultiply(afStack_1f0 + 10,&uStack_208,afStack_1f0 + 10);
    local_294 = *(float *)(param_1 + 0x100);
    local_290 = *(float *)(param_1 + 0x104);
    if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
      local_28c = 1.0;
      FUN_00ddd140(afStack_1f0 + 0x27,&local_294);
    }
    else {
      local_28c = *(float *)(param_1 + 0x108);
      FUN_00ddd140(afStack_1f0 + 0x27,&local_294);
    }
    D3DXMatrixMultiply(afStack_1f0 + 7,afStack_1f0 + 0x27,afStack_1f0 + 7);
    iVar2 = FUN_009d4a40();
    pfStack_2f0 = (float *)(*(float *)(iVar2 + 0x14) - 0.5);
    D3DXVec3TransformNormal(&local_2a0,&pfStack_2f0,afStack_1f0 + 4);
    afStack_1f0[0x1c] = afStack_1f0[0x1c] + fStack_270;
    afStack_1f0[0x1d] = fStack_26c + afStack_1f0[0x1d];
    afStack_1f0[0x1e] = fStack_268 + afStack_1f0[0x1e];
  }
  fStack_2c0 = *(float *)(param_1 + 400);
  fStack_2bc = *(float *)(param_1 + 0x194);
  fStack_2b8 = *(float *)(param_1 + 0x198);
  if (*(int *)(param_1 + 0x4c8) == 3) {
    local_2a0 = 0.0;
    local_29c = 0.0;
    local_298 = 0.0;
    local_294 = 0.0;
    switch(*(undefined4 *)(param_1 + 0x4e4)) {
    case 1:
      afStack_1f0[0xe] = 0.0;
      afStack_1f0[0xd] = 0.0;
      afStack_1f0[0xc] = 0.0;
      afStack_1f0[0xb] = 0.0;
      afStack_1f0[9] = 0.0;
      afStack_1f0[8] = 0.0;
      afStack_1f0[7] = 0.0;
      afStack_1f0[6] = 0.0;
      afStack_1f0[4] = 0.0;
      afStack_1f0[3] = 0.0;
      afStack_1f0[2] = 0.0;
      afStack_1f0[1] = 0.0;
      afStack_1f0[0xf] = 1.0;
      afStack_1f0[10] = 1.0;
      afStack_1f0[5] = 1.0;
      afStack_1f0[0] = 1.0;
      break;
    case 2:
      fStack_27c = local_24c + 0.0;
      afStack_1f0[0xe] = 0.0;
      afStack_1f0[0xd] = 0.0;
      afStack_1f0[0xc] = 0.0;
      afStack_1f0[0xb] = 0.0;
      afStack_1f0[9] = 0.0;
      afStack_1f0[8] = 0.0;
      afStack_1f0[7] = 0.0;
      afStack_1f0[6] = 0.0;
      afStack_1f0[4] = 0.0;
      afStack_1f0[3] = 0.0;
      afStack_1f0[2] = 0.0;
      afStack_1f0[1] = 0.0;
      afStack_1f0[0xf] = 1.0;
      afStack_1f0[10] = 1.0;
      afStack_1f0[5] = 1.0;
      afStack_1f0[0] = 1.0;
      if (fStack_27c != 0.0) {
        D3DXMatrixRotationY();
LAB_00f21f7b:
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      break;
    case 3:
      afStack_1f0[0xe] = 0.0;
      afStack_1f0[0xd] = 0.0;
      afStack_1f0[0xc] = 0.0;
      afStack_1f0[0xb] = 0.0;
      afStack_1f0[9] = 0.0;
      afStack_1f0[8] = 0.0;
      afStack_1f0[7] = 0.0;
      afStack_1f0[6] = 0.0;
      afStack_1f0[4] = 0.0;
      afStack_1f0[3] = 0.0;
      afStack_1f0[2] = 0.0;
      afStack_1f0[1] = 0.0;
      afStack_1f0[0xf] = 1.0;
      afStack_1f0[10] = 1.0;
      afStack_1f0[5] = 1.0;
      afStack_1f0[0] = 1.0;
      if (local_288 != 0.0) {
        D3DXMatrixRotationZ();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (local_28c != 0.0) {
        D3DXMatrixRotationY();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (local_290 != 0.0) {
        D3DXMatrixRotationX();
        goto LAB_00f21f7b;
      }
      break;
    case 4:
      fStack_280 = local_290;
      fStack_27c = local_28c + local_24c;
      afStack_1f0[0xe] = 0.0;
      afStack_1f0[0xd] = 0.0;
      afStack_1f0[0xc] = 0.0;
      afStack_1f0[0xb] = 0.0;
      afStack_1f0[9] = 0.0;
      afStack_1f0[8] = 0.0;
      afStack_1f0[7] = 0.0;
      afStack_1f0[6] = 0.0;
      afStack_1f0[4] = 0.0;
      afStack_1f0[3] = 0.0;
      afStack_1f0[2] = 0.0;
      afStack_1f0[1] = 0.0;
      afStack_1f0[0xf] = 1.0;
      afStack_1f0[10] = 1.0;
      afStack_1f0[5] = 1.0;
      afStack_1f0[0] = 1.0;
      if (local_288 != 0.0) {
        D3DXMatrixRotationZ();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (fStack_27c != 0.0) {
        D3DXMatrixRotationY();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (fStack_280 != 0.0) {
        D3DXMatrixRotationX();
        goto LAB_00f21f7b;
      }
      break;
    default:
      afStack_1f0[0xe] = 0.0;
      afStack_1f0[0xd] = 0.0;
      afStack_1f0[0xc] = 0.0;
      afStack_1f0[0xb] = 0.0;
      afStack_1f0[9] = 0.0;
      afStack_1f0[8] = 0.0;
      afStack_1f0[7] = 0.0;
      afStack_1f0[6] = 0.0;
      afStack_1f0[4] = 0.0;
      afStack_1f0[3] = 0.0;
      afStack_1f0[2] = 0.0;
      afStack_1f0[1] = 0.0;
      afStack_1f0[0xf] = 1.0;
      afStack_1f0[10] = 1.0;
      afStack_1f0[5] = 1.0;
      afStack_1f0[0] = 1.0;
      if (*(float *)(param_1 + 0x1b8) != 0.0) {
        fStack_2d0 = *(float *)(param_1 + 0x1b8);
        D3DXMatrixRotationZ();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (*(float *)(param_1 + 0x1b4) != 0.0) {
        fStack_2d0 = *(float *)(param_1 + 0x1b4);
        D3DXMatrixRotationY();
        pfStack_2f0 = afStack_1f0 + 0x2e;
        D3DXMatrixMultiply(&uStack_1f8);
      }
      if (*(float *)(param_1 + 0x1b0) != 0.0) {
        fStack_2d0 = *(float *)(param_1 + 0x1b0);
        D3DXMatrixRotationX();
        goto LAB_00f21f7b;
      }
    }
    afStack_1f0[0xc] = afStack_1f0[0xc] + fStack_2c0;
    uVar19 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(uint *)(param_1 + 0x6c);
    afStack_1f0[0xd] = afStack_1f0[0xd] + fStack_2bc;
    pfStack_2f0 = *(float **)(param_1 + 0x70);
    afStack_1f0[0xe] = afStack_1f0[0xe] + fStack_2b8;
    uVar14 = *(undefined4 *)(param_1 + 0x4c0);
    fStack_2d0 = *(float *)(param_1 + 0x100) * local_2cc;
    uVar15 = *(undefined4 *)(param_1 + 0x4c4);
    if (local_254 == 0) {
      uVar5 = uVar5 & 0xfffff0ff;
    }
    uVar12 = *(undefined4 *)(param_1 + 0x74);
    pfVar4 = &local_2a0;
    pfVar7 = afStack_1f0;
LAB_00f223e4:
    FUN_00f41b10(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x458),
                 *(undefined4 *)(param_1 + 0x460),param_1 + 0x7c,local_258,pfVar7,pfVar4,
                 *(undefined4 *)(param_1 + 0x78),uVar12,uVar5,uVar14,uVar15,0,0xff,fStack_2d0,uVar19
                );
    goto LAB_00f22b60;
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  if ((((uVar5 & 0x400) != 0) || ((uVar5 & 0x800) != 0)) || ((uVar5 & 0x100) != 0)) {
    FUN_009cca90();
    goto LAB_00f22b60;
  }
  switch(*(undefined4 *)(param_1 + 0x4e4)) {
  case 1:
    fStack_2d0 = afStack_1f0[0x11] * afStack_1f0[0x11] + afStack_1f0[0x10] * afStack_1f0[0x10] +
                 afStack_1f0[0x12] * afStack_1f0[0x12];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c4 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x15] * afStack_1f0[0x15] + afStack_1f0[0x14] * afStack_1f0[0x14] +
                 afStack_1f0[0x16] * afStack_1f0[0x16];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c8 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x19] * afStack_1f0[0x19] + afStack_1f0[0x18] * afStack_1f0[0x18] +
                 afStack_1f0[0x1a] * afStack_1f0[0x1a];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2d0 = (float)fVar10;
    fStack_2c0 = afStack_1f0[0x1c];
    fStack_2bc = afStack_1f0[0x1d];
    fStack_2b8 = afStack_1f0[0x1e];
    pfStack_2f0 = afStack_1f0 + 0x10;
    D3DXMatrixScaling();
    afStack_1f0[0x1c] = fStack_2c0;
    afStack_1f0[0x1d] = fStack_2bc;
    afStack_1f0[0x1e] = fStack_2b8;
    goto switchD_00f22459_default;
  case 2:
    fStack_2c0 = afStack_1f0[0x1c];
    fStack_2bc = afStack_1f0[0x1d];
    fStack_2b8 = afStack_1f0[0x1e];
    fStack_2d0 = afStack_1f0[0x11] * afStack_1f0[0x11] + afStack_1f0[0x10] * afStack_1f0[0x10] +
                 afStack_1f0[0x12] * afStack_1f0[0x12];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c4 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x15] * afStack_1f0[0x15] + afStack_1f0[0x14] * afStack_1f0[0x14] +
                 afStack_1f0[0x16] * afStack_1f0[0x16];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c8 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x19] * afStack_1f0[0x19] + afStack_1f0[0x18] * afStack_1f0[0x18] +
                 afStack_1f0[0x1a] * afStack_1f0[0x1a];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2d0 = (float)fVar10;
    pfStack_2f0 = afStack_1f0 + 0x10;
    D3DXMatrixScaling();
    local_290 = 0.0;
    local_288 = 0.0;
    local_284 = 0.0;
    local_28c = fStack_25c + 0.0;
    thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_290,5);
    D3DXMatrixMultiply(afStack_1f0 + 0xc,afStack_1f0 + 0xc,afStack_1f0 + 0x2c);
    afStack_1f0[0x1c] = afStack_1f0[0x1c] + fStack_2c0;
    break;
  case 3:
    fStack_2c0 = afStack_1f0[0x1c];
    fStack_2bc = afStack_1f0[0x1d];
    fStack_2b8 = afStack_1f0[0x1e];
    fStack_2d0 = afStack_1f0[0x11] * afStack_1f0[0x11] + afStack_1f0[0x10] * afStack_1f0[0x10] +
                 afStack_1f0[0x12] * afStack_1f0[0x12];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c4 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x15] * afStack_1f0[0x15] + afStack_1f0[0x14] * afStack_1f0[0x14] +
                 afStack_1f0[0x16] * afStack_1f0[0x16];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c8 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x19] * afStack_1f0[0x19] + afStack_1f0[0x18] * afStack_1f0[0x18] +
                 afStack_1f0[0x1a] * afStack_1f0[0x1a];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2d0 = (float)fVar10;
    pfStack_2f0 = afStack_1f0 + 0x10;
    D3DXMatrixScaling();
    thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_2a0,5);
    D3DXMatrixMultiply(afStack_1f0 + 0xc,afStack_1f0 + 0xc,afStack_1f0 + 0x2c);
    afStack_1f0[0x1c] = afStack_1f0[0x1c] + fStack_2c0;
    break;
  case 4:
    fStack_2c0 = afStack_1f0[0x1c];
    fStack_2bc = afStack_1f0[0x1d];
    fStack_2b8 = afStack_1f0[0x1e];
    fStack_2d0 = afStack_1f0[0x11] * afStack_1f0[0x11] + afStack_1f0[0x10] * afStack_1f0[0x10] +
                 afStack_1f0[0x12] * afStack_1f0[0x12];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c4 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x15] * afStack_1f0[0x15] + afStack_1f0[0x14] * afStack_1f0[0x14] +
                 afStack_1f0[0x16] * afStack_1f0[0x16];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2c8 = (float)fVar10;
    fStack_2d0 = afStack_1f0[0x19] * afStack_1f0[0x19] + afStack_1f0[0x18] * afStack_1f0[0x18] +
                 afStack_1f0[0x1a] * afStack_1f0[0x1a];
    fVar10 = (float10)FUN_00fdef70();
    fStack_2d0 = (float)fVar10;
    pfStack_2f0 = afStack_1f0 + 0x10;
    D3DXMatrixScaling();
    local_290 = local_2a0;
    local_288 = local_298;
    local_284 = local_294;
    local_28c = local_29c + fStack_25c;
    thunk_FUN_00ddc1d0(afStack_1f0 + 0x2c,&local_290,5);
    D3DXMatrixMultiply(afStack_1f0 + 0xc,afStack_1f0 + 0xc,afStack_1f0 + 0x2c);
    afStack_1f0[0x1c] = fStack_2c0 + afStack_1f0[0x1c];
    break;
  default:
    goto switchD_00f22459_default;
  }
  afStack_1f0[0x1d] = fStack_2bc + afStack_1f0[0x1d];
  afStack_1f0[0x1e] = fStack_2b8 + afStack_1f0[0x1e];
switchD_00f22459_default:
  uVar19 = *(undefined4 *)(param_1 + 0x88);
  uVar14 = *(undefined4 *)(param_1 + 0x4c4);
  pfStack_2f0 = *(float **)(param_1 + 0x70);
  fVar18 = *(float *)(param_1 + 0x100) * local_2cc;
  uVar15 = *(undefined4 *)(param_1 + 0x4c0);
  uVar17 = 0xff;
  uVar16 = 0;
  uVar12 = *(undefined4 *)(param_1 + 0x6c);
  uVar13 = *(undefined4 *)(param_1 + 0x74);
  uVar11 = *(undefined4 *)(param_1 + 0x78);
  iVar2 = param_1 + 0x1b0;
  pfVar4 = afStack_1f0 + 0x10;
  fStack_2d0 = fVar18;
  uVar6 = FUN_00a81330(pfVar4,iVar2,uVar11,uVar13,uVar12,uVar15,uVar14,0,0xff,fVar18,uVar19);
  FUN_00f41b10(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x458),
               *(undefined4 *)(param_1 + 0x460),param_1 + 0x7c,uVar6,pfVar4,iVar2,uVar11,uVar13,
               uVar12,uVar15,uVar14,uVar16,uVar17,fVar18,uVar19);
LAB_00f22b60:
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
LAB_00f22b67:
  __security_check_cookie(local_14 ^ (uint)auStack_2d4);
  return;
}

// 00F2D7B0  esp01::vf04  size=1027  [class]
undefined4 __thiscall
esp01::vf04(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  float fVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar6 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar6 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4c4) = param_4;
  iVar6 = 0x10;
  if (*(int *)(param_1 + 0x50) == 0) {
    puVar7 = (undefined4 *)(param_1 + 0x470);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    puVar7 = (undefined4 *)(param_1 + 0x470);
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x50) + 0x10);
    puVar10 = puVar7;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    D3DXMatrixMultiply(puVar7,param_3,puVar7);
  }
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  iVar6 = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar7 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar7;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar8 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar8);
    }
    if (psVar2 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = (int)*psVar2;
      *(int *)(param_1 + 0x460) = (int)psVar2[1];
      *(int *)(param_1 + 0x4c0) = (int)psVar2[2];
      *(int *)(param_1 + 0x4e8) = (int)(char)psVar2[9];
      switch(psVar2[3]) {
      case 0:
        *(undefined4 *)(param_1 + 0x4c8) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x4c8) = 1;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x4c8) = 2;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x4c8) = 3;
      }
      sVar5 = psVar2[4];
      if (sVar5 == 0) {
        *(undefined4 *)(param_1 + 0x4cc) = 0;
      }
      else if (sVar5 == 1) {
        *(undefined4 *)(param_1 + 0x4cc) = 1;
      }
      else if (sVar5 == 2) {
        *(undefined4 *)(param_1 + 0x4cc) = 2;
      }
      if (psVar2[5] != 0) {
        sVar5 = FUN_00dde2d0(*(undefined2 *)(param_1 + 0x460),psVar2[5]);
        *(int *)(param_1 + 0x460) = (int)sVar5;
      }
      if ((char)psVar2[8] == '\0') {
        *(undefined4 *)(param_1 + 0x454) = 0;
      }
      else if ((char)psVar2[8] == '\x01') {
        *(undefined4 *)(param_1 + 0x454) = 1;
      }
      switch(*(undefined1 *)((int)psVar2 + 0x11)) {
      case 0:
        *(undefined4 *)(param_1 + 0x4e4) = 0;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x4e4) = 1;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x4e4) = 2;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x4e4) = 3;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x4e4) = 4;
      }
      iVar6 = (int)*(char *)((int)psVar2 + 0x13);
    }
  }
  *(undefined4 *)(param_1 + 0x4e0) = 0x42480000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar7 != (undefined4 *)0x0)) {
    puVar7 = (undefined4 *)*puVar7;
    if ((undefined4 *)((int)puVar7 + 0xfU & 0xfffffff0) != puVar7) {
      uVar8 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar8);
    }
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x4b0) = *puVar7;
      *(undefined4 *)(param_1 + 0x4b4) = puVar7[1];
      *(undefined4 *)(param_1 + 0x4b8) = puVar7[2];
      *(undefined4 *)(param_1 + 0x4bc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x4d0) = puVar7[3];
      *(undefined4 *)(param_1 + 0x4d4) = puVar7[4];
      fVar1 = (float)puVar7[5];
      *(float *)(param_1 + 0x4d8) = fVar1;
      if ((fVar1 == 0.0) && (*(float *)(param_1 + 0x4d4) == 0.0)) {
        *(undefined4 *)(param_1 + 0x4d0) = 0;
      }
      if (1e-06 < (float)puVar7[0xe]) {
        *(undefined4 *)(param_1 + 0x4e0) = puVar7[0xe];
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x450);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar4 = **(uint **)(param_1 + 0x58);
      if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
        uVar8 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar8);
      }
      if ((uVar4 != 0) && (*(uint *)(param_1 + 0x4c0) == (uint)*(byte *)(uVar4 + 0x14))) {
        FUN_009cca90(param_1,&DAT_016da3fc,*(uint *)(param_1 + 0x4c0));
        return 0;
      }
    }
  }
  else {
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x458) = 0;
      FUN_009df6d0();
      uVar8 = FUN_00f4b0b0(0);
      FUN_009df740();
      *(undefined4 *)(param_1 + 0x45c) = uVar8;
    }
    else {
      if (iVar3 != 2) {
        FUN_009cca90(param_1,&DAT_016da484,iVar3);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0x4c0) = 0xff;
  }
  if (*(int *)(param_1 + 0x458) == 0xfff) {
    FUN_009cca90(param_1,&DAT_016da580);
    return 0;
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfbffffff;
  FUN_00a7c960(param_1 + 0x8c);
  switch(iVar6) {
  case 1:
    uVar8 = 2;
    break;
  case 2:
    uVar8 = 3;
    break;
  case 3:
    uVar8 = 4;
    break;
  case 4:
    uVar8 = 5;
    break;
  case 5:
    iVar6 = FUN_009d4800(6);
    if (iVar6 == 0) {
      return 0;
    }
  default:
    goto switchD_00f2db5c_default;
  }
  iVar6 = FUN_009d4800(uVar8);
  if (iVar6 == 0) {
    return 0;
  }
switchD_00f2db5c_default:
  return 1;
}

