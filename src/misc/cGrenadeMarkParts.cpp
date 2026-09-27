// src/misc/cGrenadeMarkParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB9330..00CEE8E0, 4 functions

#include "mgrr.h"
#include "cGrenadeMarkParts.h"

// 00CB9330  cGrenadeMarkParts::vf08  size=56  [class]
void __fastcall cGrenadeMarkParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x146);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CD44B0  cGrenadeMarkParts::cGrenadeMarkParts  size=86  [class]
undefined4 * __fastcall cGrenadeMarkParts::cGrenadeMarkParts(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00a7c930();
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  FUN_00a7c950();
  return param_1;
}

// 00CE36F0  cGrenadeMarkParts::vf00  size=63  [class]
undefined4 * __thiscall cGrenadeMarkParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEE8E0  cGrenadeMarkParts::create  size=1738  [class]
void __fastcall cGrenadeMarkParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      FUN_00e5e0c0("core_se_btl_grenade_alert",iVar7,0xffffffff,0);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else if ((*(int *)(param_1 + 0x34) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar7 = FUN_00f98a90();
  fVar1 = (float)iVar7 * 0.5;
  iVar7 = FUN_00f98aa0();
  fVar2 = (float)iVar7 * 0.5;
  iVar7 = FUN_00f98a90();
  fVar3 = (float)iVar7 * 0.0952381;
  iVar7 = FUN_00f98a90();
  fVar4 = (float)iVar7 - fVar3;
  if (((byte)DAT_01bea090 & 0x40) == 0) {
    iVar7 = FUN_00f98aa0();
    fVar5 = (float)iVar7 * 0.11111111;
  }
  else {
    iVar7 = FUN_00f98aa0();
    fVar5 = (float)iVar7 * 0.125;
  }
  iVar7 = FUN_00f98aa0();
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0x3f800000;
  iVar8 = FUN_00c12740(0);
  local_30 = *(float *)(param_1 + 0x40) - *(float *)(iVar8 + 0x1b0);
  local_2c = *(float *)(param_1 + 0x44) - *(float *)(iVar8 + 0x1b4);
  local_28 = *(float *)(param_1 + 0x48) - *(float *)(iVar8 + 0x1b8);
  local_24 = *(float *)(param_1 + 0x4c) - *(float *)(iVar8 + 0x1bc);
  if (local_30 == 0.0) {
    if (((local_2c == 0.0) && (local_28 == 0.0)) && (DAT_01dc1490 != 0)) {
      local_30 = *(float *)(param_1 + 0x40) - *(float *)(DAT_01dc1490 + 0x40);
      local_2c = *(float *)(param_1 + 0x44) - *(float *)(DAT_01dc1490 + 0x44);
      local_28 = *(float *)(param_1 + 0x48) - *(float *)(DAT_01dc1490 + 0x48);
      local_24 = *(float *)(param_1 + 0x4c) - *(float *)(DAT_01dc1490 + 0x4c);
    }
    if (((local_30 != 0.0) || (local_2c != 0.0)) || (local_28 != 0.0)) goto LAB_00ceeafb;
  }
  else {
LAB_00ceeafb:
    fVar6 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
    if (fVar6 < 0.0 == (fVar6 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_2c = 1.0;
      local_30 = local_28;
    }
  }
  local_30 = DAT_01bea390 + local_30 * 0.1;
  local_2c = DAT_01bea394 + local_2c * 0.1;
  local_28 = DAT_01bea398 + local_28 * 0.1;
  local_24 = local_24 * 0.1 + DAT_01bea39c;
  iVar8 = FUN_00d9fa80(&local_40,&local_30);
  if (iVar8 != 0) {
    local_40 = local_40 - fVar1;
    local_3c = local_3c - fVar2;
    fVar6 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar6 < 0.0 == (fVar6 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
  }
  iVar8 = FUN_00d9fa80(&local_30,(float *)(param_1 + 0x40));
  fVar11 = (float10)local_3c;
  if (iVar8 == 0) {
    fVar12 = (float10)local_40 * (float10)fVar1 * (float10)2.0 + (float10)fVar1;
    local_20 = (float)fVar12;
    fVar13 = fVar11 * (float10)fVar2 * (float10)2.0 + (float10)fVar2;
    local_1c = (float)fVar13;
  }
  else {
    fVar12 = (float10)local_30;
    local_20 = local_30;
    fVar13 = (float10)local_2c;
    local_1c = local_2c;
  }
  local_14 = 1.0;
  local_18 = 0.0;
  fVar16 = (float10)fVar1;
  fVar14 = (float10)fVar2;
  fVar17 = (float10)0;
  uVar10 = (uint)(iVar8 == 0);
  local_30 = (float)fVar12;
  local_2c = (float)fVar13;
  if ((float10)fVar3 <= fVar12) {
    if ((float10)fVar4 < fVar12) {
      fVar12 = (float10)fVar4;
      fVar13 = fVar14;
      local_2c = fVar2;
      if (fVar17 != (float10)local_40) {
        fVar13 = (((float10)fVar4 - fVar16) * fVar11) / (float10)local_40 + fVar14;
        local_2c = (float)fVar13;
      }
      uVar10 = 1;
      local_30 = fVar4;
    }
  }
  else {
    fVar12 = (float10)fVar3;
    fVar13 = fVar14;
    local_2c = fVar2;
    if (fVar17 != (float10)local_40) {
      fVar13 = (((float10)fVar3 - fVar16) * fVar11) / (float10)local_40 + fVar14;
      local_2c = (float)fVar13;
    }
    uVar10 = 1;
    local_30 = fVar3;
  }
  fVar15 = (float10)fVar5;
  if ((fVar13 < (float10)fVar5) ||
     (fVar15 = (float10)((float)iVar7 - fVar5), fVar5 = (float)iVar7 - fVar5, fVar15 < fVar13)) {
    local_2c = fVar5;
    fVar13 = fVar15;
    if (fVar17 == fVar11) {
      uVar10 = 1;
      fVar12 = fVar16;
      local_30 = fVar1;
    }
    else {
      uVar10 = 1;
      fVar12 = (((float10)local_2c - fVar14) * (float10)local_40) / fVar11 + fVar16;
      local_30 = (float)fVar12;
    }
  }
  else if (uVar10 == 0) goto LAB_00ceef22;
  fVar12 = (float10)local_20 - fVar12;
  fVar13 = (float10)local_1c - fVar13;
  local_20 = (float)fVar12;
  local_1c = (float)fVar13;
  local_18 = (float)fVar17;
  local_14 = (float)fVar17;
  if ((fVar17 != fVar12) || (fVar17 != fVar13)) {
    fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
    if (fVar11 < fVar17 == (fVar11 == fVar17)) {
      FUN_00ddf460(&local_20,&local_20);
      fVar17 = (float10)fpatan((float10)local_1c,(float10)local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
      fVar17 = (float10)fpatan((float10)1.0,(float10)0.0);
    }
  }
  FUN_00cb2af0(*(undefined4 *)(param_1 + 0x20),(float)fVar17);
  fVar13 = (float10)local_2c;
  fVar12 = (float10)local_30;
LAB_00ceef22:
  iVar7 = *(int *)(param_1 + 0x18);
  if (((iVar7 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar7 + 0x80))) &&
     (iVar7 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
    *(uint *)(iVar7 + 0x3b0) = uVar10;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) = (float)fVar12;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = (float)fVar13;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  if ((*(uint *)(param_1 + 0x2c) != uVar10) || (*(int *)(param_1 + 0x30) != 0)) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar9 = 1;
      if (uVar10 != 0) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 2;
      if (uVar10 != 0) {
        uVar9 = 3;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(uVar9);
    }
    *(uint *)(param_1 + 0x2c) = uVar10;
  }
  return;
}

