// src/misc/cFreeMissionDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8C60..00D2FB90, 5 functions

#include "mgrr.h"
#include "cFreeMissionDispParts.h"

// 00CB8C60  cFreeMissionDispParts::vf08  size=56  [class]
void __fastcall cFreeMissionDispParts::vf08(int param_1)

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

// 00CE3610  cFreeMissionDispParts::vf00  size=63  [class]
undefined4 * __thiscall cFreeMissionDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEE160  cFreeMissionDispParts::create  size=1898  [class]
void __fastcall cFreeMissionDispParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    if (*(int *)(param_1 + 0x30) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0();
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    break;
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar7 = FUN_00cdf400(), iVar7 != 0)) {
      FUN_00cdeec0();
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  case 2:
    if ((((byte)DAT_01bea090 & 0x40) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(undefined4 *)(param_1 + 0x3c) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar7 = FUN_00cdf400(), iVar7 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
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
  iVar7 = FUN_00f98aa0();
  fVar5 = (float)iVar7 * 0.125;
  iVar7 = FUN_00f98aa0();
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0x3f800000;
  iVar8 = FUN_00c12740();
  local_40 = *(float *)(param_1 + 0x50) - *(float *)(iVar8 + 0x1b0);
  local_3c = *(float *)(param_1 + 0x54) - *(float *)(iVar8 + 0x1b4);
  local_38 = *(float *)(param_1 + 0x58) - *(float *)(iVar8 + 0x1b8);
  local_34 = *(float *)(param_1 + 0x5c) - *(float *)(iVar8 + 0x1bc);
  if (((local_40 == 0.0) && (local_3c == 0.0)) && (local_38 == 0.0)) {
    local_40 = *(float *)(param_1 + 0x50) - *(float *)(DAT_01dc1490 + 0x40);
    local_3c = *(float *)(param_1 + 0x54) - *(float *)(DAT_01dc1490 + 0x44);
    local_38 = *(float *)(param_1 + 0x58) - *(float *)(DAT_01dc1490 + 0x48);
    local_34 = *(float *)(param_1 + 0x5c) - *(float *)(DAT_01dc1490 + 0x4c);
  }
  fVar6 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
  if (fVar6 < 0.0 == (fVar6 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650();
    local_38 = 0.0;
    local_3c = 1.0;
    local_40 = local_38;
  }
  local_40 = DAT_01bea390 + local_40 * 0.1;
  local_3c = DAT_01bea394 + local_3c * 0.1;
  local_38 = DAT_01bea398 + local_38 * 0.1;
  local_34 = local_34 * 0.1 + DAT_01bea39c;
  iVar8 = FUN_00d9fa80(&local_50,&local_40);
  if (iVar8 != 0) {
    local_50 = local_50 - fVar1;
    local_4c = local_4c - fVar2;
    fVar6 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar6 < 0.0 == (fVar6 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650();
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
  }
  iVar8 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
  local_30 = local_20;
  if (iVar8 == 0) {
    local_1c = local_4c * fVar2 * 2.0 + fVar2;
    local_30 = local_50 * fVar1 * 2.0 + fVar1;
  }
  local_24 = 0x3f800000;
  local_28 = 0;
  uVar9 = (uint)(iVar8 == 0);
  if (fVar3 <= local_30) {
    local_40 = local_30;
    local_3c = local_1c;
    if (fVar4 < local_30) {
      local_3c = fVar2;
      if (local_50 != 0.0) {
        local_3c = ((fVar4 - fVar1) * local_4c) / local_50 + fVar2;
      }
      uVar9 = 1;
      local_40 = fVar4;
    }
  }
  else {
    local_3c = fVar2;
    if (local_50 != 0.0) {
      local_3c = ((fVar3 - fVar1) * local_4c) / local_50 + fVar2;
    }
    uVar9 = 1;
    local_40 = fVar3;
  }
  fVar3 = fVar5;
  if ((local_3c < fVar5) || (fVar3 = (float)iVar7 - fVar5, (float)iVar7 - fVar5 < local_3c)) {
    local_3c = fVar3;
    if (local_4c == 0.0) {
      uVar9 = 1;
      local_40 = fVar1;
    }
    else {
      uVar9 = 1;
      local_40 = ((local_3c - fVar2) * local_50) / local_4c + fVar1;
    }
  }
  else if (uVar9 == 0) {
    fVar1 = *(float *)(param_1 + 0x40);
    if (!NAN(fVar1) && 99.9 < fVar1 != (fVar1 == 99.9)) {
      fVar1 = 99.9;
    }
    local_2c = local_1c;
    _sprintf_s((char *)&local_20,0x10,"%.1fM",(double)fVar1);
    if (local_20._0_1_ == '1') {
      local_20 = (float)CONCAT31(local_20._1_3_,0x23);
    }
    FUN_00cce090(*(undefined4 *)(param_1 + 0x1c),&local_20);
    goto LAB_00cee7f8;
  }
  local_30 = local_30 - local_40;
  local_2c = local_1c - local_3c;
  local_28 = 0;
  local_24 = 0;
  if ((local_30 == 0.0) && (local_2c == 0.0)) {
    FUN_00cb2af0(*(undefined4 *)(param_1 + 0x20),0);
  }
  else {
    fVar1 = local_2c * local_2c + local_30 * local_30;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      fVar10 = (float10)fpatan((float10)local_2c,(float10)local_30);
      FUN_00cb2af0(*(undefined4 *)(param_1 + 0x20),(float)fVar10);
    }
    else {
      FUN_00dd5650();
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0;
      fVar10 = (float10)fpatan((float10)1.0,(float10)0.0);
      FUN_00cb2af0(*(undefined4 *)(param_1 + 0x20),(float)fVar10);
    }
  }
LAB_00cee7f8:
  iVar7 = *(int *)(param_1 + 0x18);
  if (((iVar7 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar7 + 0x80))) &&
     (iVar7 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
    *(uint *)(iVar7 + 0x3b0) = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) = local_40;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = local_3c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    if (*(float *)(param_1 + 0x40) < 101.0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x1c),1,3);
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
  }
  else if (102.0 < *(float *)(param_1 + 0x40)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0();
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (uVar9 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (((iVar7 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar7 + 0x80))) &&
     (iVar7 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar7 + 0x7c), iVar7 != 0)) {
    *(undefined4 *)(iVar7 + 0x3b0) = *(undefined4 *)(param_1 + 0x34);
  }
  return;
}

// 00D2FB10  cFreeMissionDispParts::cFreeMissionDispParts  size=116  [class]
undefined4 * cFreeMissionDispParts::cFreeMissionDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x10] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0x3f800000;
    puVar1[3] = "cFreeMissionDispParts";
    puVar1[2] = 9;
    uVar2 = FUN_00d29960(0x21);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D2FB90  FUN_00d2fb90  size=288  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d2fb90(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0;
  do {
    param_1 = param_1 + 1;
    if (*(int *)((int)&DAT_01dc0030 + uVar10) == 0) {
      *(undefined4 *)((int)&DAT_01dc0080 + uVar10) = 0xffffffff;
      if (*param_1 != 0) {
        *(undefined4 *)(*param_1 + 0x38) = 1;
      }
    }
    if (*(int *)((int)&DAT_01dc0080 + uVar10) != -1) {
      if (*param_1 == 0) {
        iVar9 = cFreeMissionDispParts::cFreeMissionDispParts();
        *param_1 = iVar9;
      }
      pfVar4 = *(float **)((int)&DAT_01dc0058 + uVar10);
      fVar1 = pfVar4[1];
      fVar2 = pfVar4[2];
      fVar3 = pfVar4[3];
      fVar6 = *pfVar4 - *(float *)(DAT_01dc1490 + 0x40);
      fVar8 = fVar1 - *(float *)(DAT_01dc1490 + 0x44);
      fVar7 = fVar2 - *(float *)(DAT_01dc1490 + 0x48);
      iVar9 = *param_1;
      if (*(int *)((int)&DAT_01dc0080 + uVar10) < 0xb) {
        *(float *)(iVar9 + 0x50) = *pfVar4;
        *(float *)(iVar9 + 0x54) = fVar1;
        *(float *)(iVar9 + 0x58) = fVar2;
        *(float *)(iVar9 + 0x5c) = fVar3;
        *(undefined4 *)(iVar9 + 0x30) = 1;
        *(float *)(iVar9 + 0x40) = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
      }
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
      puVar5 = (undefined4 *)*param_1;
      if ((puVar5[0xf] == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
        *param_1 = 0;
      }
    }
    uVar10 = uVar10 + 4;
  } while (uVar10 < 0x28);
  DAT_01dc0030 = 0;
  DAT_01dc0034 = 0;
  _DAT_01dc0038 = 0;
  _DAT_01dc003c = 0;
  _DAT_01dc0040 = 0;
  _DAT_01dc0044 = 0;
  _DAT_01dc0048 = 0;
  _DAT_01dc004c = 0;
  _DAT_01dc0050 = 0;
  _DAT_01dc0054 = 0;
  return;
}

