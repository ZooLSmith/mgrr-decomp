// src/misc/esp34.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED2D80..00F360D0, 4 functions

#include "mgrr.h"
#include "esp34.h"

// 00ED2D80  esp34::esp34  size=18  [class]
undefined4 * __fastcall esp34::esp34(undefined4 *param_1)

{
  FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>();
  *param_1 = vftable;
  return param_1;
}

// 00ED2DB0  esp34::vf00  size=30  [class]
undefined4 __thiscall esp34::vf00(undefined4 param_1,byte param_2)

{
  Spline<Hw::cVec4>::Spline<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F1A9B0  esp34::vf08  size=1036  [class]
void __fastcall esp34::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 extraout_ST0;
  float10 fVar9;
  undefined1 auStack_d8 [8];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  float local_a0 [6];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_d8;
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  local_b4 = *(float *)(param_1 + 0x530) * *(float *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x528);
  *(float *)(param_1 + 0x528) = *(float *)(param_1 + 0x528) + local_b4;
  iVar6 = FUN_00ed90d0();
  if (iVar6 == 0) {
    iVar6 = FUN_00fdbc60();
    iVar7 = FUN_00fdbc60();
    if ((iVar6 != iVar7) && (iVar6 = *(int *)(param_1 + 0x450) + -1, iVar6 != 0)) {
      iVar7 = iVar6 * 0xc;
      do {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x45c) + iVar7);
        *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x45c) + -0xc + iVar7);
        puVar8[1] = puVar8[-2];
        puVar8[2] = puVar8[-1];
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x460) + iVar7);
        *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x460) + -0xc + iVar7);
        iVar7 = iVar7 + -0xc;
        iVar6 = iVar6 + -1;
        puVar8[1] = puVar8[-2];
        puVar8[2] = puVar8[-1];
      } while (iVar6 != 0);
    }
    local_d0 = 0.0;
    local_c8 = 0.0;
    local_c4 = 0;
    local_68 = 0.0;
    local_6c = 0.0;
    local_70 = 0.0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_a0[4] = 0.0;
    local_a0[3] = 0.0;
    local_a0[2] = 0.0;
    local_a0[1] = 0.0;
    local_cc = (float)extraout_ST0;
    local_64 = (float)extraout_ST0;
    local_78 = (float)extraout_ST0;
    local_a0[5] = (float)extraout_ST0;
    local_a0[0] = (float)extraout_ST0;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(local_60,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(local_a8,&local_68,local_a8);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(local_60,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(local_a8,&local_68,local_a8);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(local_60,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(local_a8,&local_68,local_a8);
    }
    D3DXVec3TransformNormal(&local_d0,&local_d0,local_a0);
    local_d0 = local_70 + local_d0;
    local_cc = local_6c + local_cc;
    local_c8 = local_68 + local_c8;
    if (*(int *)(param_1 + 0x50) != 0) {
      D3DXVec3TransformNormal(&local_d0,&local_d0,*(int *)(param_1 + 0x50) + 0x10);
    }
    fVar2 = *(float *)(param_1 + 0x104);
    pfVar5 = *(float **)(param_1 + 0x45c);
    fVar3 = *(float *)(param_1 + 0x194);
    fVar4 = *(float *)(param_1 + 0x198);
    *pfVar5 = *(float *)(param_1 + 400) + fVar2 * local_d0;
    pfVar5[1] = fVar3 + local_cc * fVar2;
    pfVar5[2] = fVar4 + fVar2 * local_c8;
    pfVar5 = *(float **)(param_1 + 0x460);
    fVar3 = *(float *)(param_1 + 0x194);
    fVar4 = *(float *)(param_1 + 0x198);
    *pfVar5 = *(float *)(param_1 + 400) - fVar2 * local_d0;
    pfVar5[1] = fVar3 - local_cc * fVar2;
    pfVar5[2] = fVar4 - fVar2 * local_c8;
  }
  pfVar5 = *(float **)(param_1 + 0x45c);
  iVar6 = *(int *)(param_1 + 0x450);
  local_b0 = pfVar5[iVar6 * 3 + -3] + *pfVar5;
  local_ac = pfVar5[iVar6 * 3 + -2] + pfVar5[1];
  local_a8[0] = pfVar5[iVar6 * 3 + -1] + pfVar5[2];
  *(float *)(param_1 + 0x130) = local_b0 * 0.5;
  *(float *)(param_1 + 0x134) = local_ac * 0.5;
  *(float *)(param_1 + 0x138) = local_a8[0] * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar5 = *(float **)(param_1 + 0x45c);
  iVar6 = *(int *)(param_1 + 0x450);
  local_d0 = *pfVar5 - pfVar5[iVar6 * 3 + -3];
  local_cc = pfVar5[1] - pfVar5[iVar6 * 3 + -2];
  local_c8 = pfVar5[2] - pfVar5[iVar6 * 3 + -1];
  local_b4 = local_c8 * local_c8 + local_cc * local_cc + local_d0 * local_d0;
  fVar9 = (float10)FUN_00fdef70();
  local_b4 = (float)fVar9;
  *(float *)(param_1 + 300) = local_b4;
  FUN_00ed7ce0();
  __security_check_cookie(local_14 ^ (uint)auStack_d8);
  return;
}

// 00F360D0  esp34::preTrans  size=1031  [class]
void __thiscall esp34::preTrans(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  float unaff_ESI;
  uint uVar11;
  int *local_e4;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float fStack_b0;
  undefined1 auStack_a8 [8];
  int local_a0 [9];
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_d8;
  local_e4 = param_4;
  iVar8 = cEspStrip2p::preTrans(param_2,param_3);
  if (iVar8 == 0) {
    __security_check_cookie(local_14 ^ (uint)&fStack_d8);
    return;
  }
  if ((*(int *)(param_2 + 4) != 0) &&
     (puVar9 = (uint *)(*(int *)(param_2 + 4) + 0x80), puVar9 != (uint *)0x0)) {
    uVar11 = *puVar9;
    if ((uVar11 + 0xf & 0xfffffff0) != uVar11) {
      local_e4 = (int *)0x8;
      uVar10 = FUN_00f59ed0();
      FUN_00dd5650(&DAT_016597b4,uVar10);
    }
    if (uVar11 != 0) {
      *(int *)(param_1 + 0x5a0) = (int)*(short *)(uVar11 + 6);
      *(int *)(param_1 + 0x5a4) = (int)*(char *)(uVar11 + 0x15);
    }
  }
  piVar1 = (int *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  local_e4 = piVar1;
  FUN_00efb130();
  local_e4 = piVar1;
  FUN_00efbd40();
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x19c);
  local_d0 = 0;
  local_cc = 0x3f800000;
  local_64 = 0x3f800000;
  local_78 = 1.0;
  local_a0[5] = 0x3f800000;
  local_a0[0] = 0x3f800000;
  local_c8 = 0;
  local_c4 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0.0;
  local_7c = 0.0;
  local_a0[8] = 0;
  local_a0[7] = 0;
  local_a0[6] = 0;
  local_a0[4] = 0;
  local_a0[3] = 0;
  local_a0[2] = 0;
  local_a0[1] = 0;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    local_e4 = *(int **)(param_1 + 0x1c8);
    D3DXMatrixRotationZ(local_60);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    local_e4 = *(int **)(param_1 + 0x1c4);
    D3DXMatrixRotationY(local_60);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    local_e4 = *(int **)(param_1 + 0x1c0);
    D3DXMatrixRotationX(local_60);
    D3DXMatrixMultiply(auStack_a8,&local_68,auStack_a8);
  }
  local_e4 = local_a0;
  D3DXVec3TransformNormal(&local_d0,&local_d0);
  fVar7 = local_7c + unaff_ESI;
  fStack_d8 = local_78 + fStack_d8;
  fStack_d4 = local_74 + fStack_d4;
  if (*(int *)(param_1 + 0x50) != 0) {
    D3DXVec3TransformNormal(&stack0xffffff24,&stack0xffffff24,*(int *)(param_1 + 0x50) + 0x10);
  }
  fStack_b0 = *(float *)(param_1 + 0x104);
  pfVar4 = *(float **)(param_1 + 0x45c);
  fVar7 = fStack_b0 * fVar7;
  fVar2 = *(float *)(param_1 + 0x194);
  fVar3 = *(float *)(param_1 + 0x198);
  *pfVar4 = *(float *)(param_1 + 400) + fVar7;
  pfVar4[1] = fVar2 + fStack_d8 * fStack_b0;
  pfVar4[2] = fVar3 + fStack_b0 * fStack_d4;
  pfVar4 = *(float **)(param_1 + 0x460);
  fVar2 = *(float *)(param_1 + 0x194);
  fVar3 = *(float *)(param_1 + 0x198);
  *pfVar4 = *(float *)(param_1 + 400) - fVar7;
  pfVar4[1] = fVar2 - fStack_d8 * fStack_b0;
  pfVar4[2] = fVar3 - fStack_b0 * fStack_d4;
  puVar5 = *(undefined4 **)(param_1 + 0x45c);
  local_cc = *puVar5;
  local_c8 = puVar5[1];
  local_c4 = puVar5[2];
  puVar5 = *(undefined4 **)(param_1 + 0x460);
  uVar10 = *puVar5;
  fStack_d8 = (float)puVar5[1];
  fStack_d4 = (float)puVar5[2];
  uVar11 = 1;
  if (1 < *(uint *)(param_1 + 0x450)) {
    iVar8 = 0xc;
    do {
      iVar6 = *(int *)(param_1 + 0x45c);
      *(undefined4 *)(iVar6 + iVar8) = local_cc;
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 0xc;
      *(undefined4 *)(iVar6 + -8 + iVar8) = local_c8;
      *(undefined4 *)(iVar6 + -4 + iVar8) = local_c4;
      iVar6 = *(int *)(param_1 + 0x460);
      *(undefined4 *)(iVar6 + -0xc + iVar8) = uVar10;
      *(float *)(iVar6 + -8 + iVar8) = fStack_d8;
      *(float *)(iVar6 + -4 + iVar8) = fStack_d4;
    } while (uVar11 < *(uint *)(param_1 + 0x450));
  }
  if (*(int *)(param_1 + 0x5a4) != 1) {
    __security_check_cookie(uStack_20 ^ (uint)&local_e4);
    return;
  }
  *(undefined4 *)(param_1 + 0x590) = local_cc;
  *(undefined4 *)(param_1 + 0x594) = local_c8;
  *(undefined4 *)(param_1 + 0x598) = local_c4;
  *(undefined4 *)(param_1 + 0x59c) = 0x3f800000;
  __security_check_cookie(uStack_20 ^ (uint)&local_e4);
  return;
}

