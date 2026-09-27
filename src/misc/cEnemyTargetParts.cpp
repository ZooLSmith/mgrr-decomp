// src/misc/cEnemyTargetParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7F00..00D2E320, 6 functions

#include "types.h"

// 00CB7F00  cEnemyTargetParts::vf08  size=150  [class]
void __fastcall cEnemyTargetParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8c);
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xec);
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x100);
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x114);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  return;
}

// 00CD2E40  cEnemyTargetParts::cEnemyTargetParts  size=93  [class]
void __fastcall cEnemyTargetParts::cEnemyTargetParts(undefined4 *param_1)

{
  param_1[0x1a] = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x19) = 0xffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}

// 00CDE8D0  cEnemyTargetParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyTargetParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CFF320  cEnemyTargetParts::vf14  size=1157  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnemyTargetParts::vf14(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float afStack_bc [2];
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if ((_DAT_01dc50a0 & 1) == 0) {
    _DAT_01dc50a0 = _DAT_01dc50a0 | 1;
    _DAT_01dc5094 = -1.0;
    _DAT_01dc5098 = 1.5;
    _DAT_01dc509c = 0;
  }
  local_b4 = FUN_00f98a90();
  afStack_bc[1] = (float)local_b4 * 0.5;
  local_b4 = FUN_00f98aa0();
  local_5c = ((*(float *)(param_1 + 0x44) - (float)local_b4 * 0.5) / ((float)local_b4 * 0.5)) *
             _DAT_01dc5094;
  fVar4 = ((*(float *)(param_1 + 0x40) - afStack_bc[1]) / afStack_bc[1]) * _DAT_01dc5098;
  local_68 = *(undefined4 *)(param_1 + 0x68);
  local_64 = *(undefined4 *)(param_1 + 0x68);
  local_60 = 0x3f800000;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_74 = 0x3f800000;
  local_88 = 0x3f800000;
  local_9c = 0x3f800000;
  local_b0 = 0x3f800000;
  if (fVar4 != 0.0) {
    D3DXMatrixRotationY(local_50,fVar4);
    D3DXMatrixMultiply(afStack_bc + 1,auStack_58,afStack_bc + 1);
  }
  if (local_5c != 0.0) {
    D3DXMatrixRotationX(local_50,local_5c);
    D3DXMatrixMultiply(afStack_bc + 1,auStack_58,afStack_bc + 1);
  }
  FUN_00ddd140(local_50,&local_68);
  D3DXMatrixMultiply(&local_b0,local_50,&local_b0);
  local_8c = *(undefined4 *)(param_1 + 0x40);
  local_88 = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x18) != 0) {
    pfVar7 = afStack_bc;
    pfVar8 = (float *)(*(int *)(param_1 + 0x18) + 0x10);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x48) == 2) {
    if (((iVar6 != 0) && (uVar1 < *(uint *)(iVar6 + 0x80))) &&
       (iVar6 = uVar1 * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
      *(undefined4 *)(iVar6 + 0x3b0) = 1;
    }
  }
  else if (((iVar6 != 0) && (uVar1 < *(uint *)(iVar6 + 0x80))) &&
          (iVar6 = uVar1 * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
    *(undefined4 *)(iVar6 + 0x3b0) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar6 + 0x80))) &&
     (iVar6 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
    *(undefined4 *)(iVar6 + 0x3b0) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (((iVar6 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar6 + 0x80))) &&
     (iVar6 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
    *(undefined4 *)(iVar6 + 0x3b0) = *(undefined4 *)(param_1 + 0x54);
  }
  iVar6 = *(int *)(param_1 + 0x48);
  if (iVar6 != *(int *)(param_1 + 0x34)) {
    if ((iVar6 == 0) || (iVar6 == 1)) {
      if (*(int *)(param_1 + 0x34) == 2) {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x24),1,3);
      }
      iVar6 = *(int *)(param_1 + 0x18);
      if (((iVar6 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar6 + 0x80))) &&
         ((piVar2 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar6 + 0x7c)),
          piVar2 != (int *)0x0 && (iVar6 = (**(code **)(*piVar2 + 8))(), iVar6 == 3)))) {
        uVar5 = FUN_00e03ea0("HUD_PIECE_09");
        piVar2[0x2a] = -1;
        piVar2[0x2b] = 0;
        if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
           (iVar6 = FUN_00cb1cd0(uVar5), -1 < iVar6)) {
          piVar2[0x2a] = iVar6;
          piVar2[0x2b] = 0;
          piVar2[0x2e] = 0;
        }
      }
    }
    else if (iVar6 == 2) {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"HUD_PIECE_10",0,0xffffffff);
    }
    else if (iVar6 == 3) {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"HUD_PIECE_09",0,0xffffffff);
    }
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fVar4 = 0.0;
    if (*(int *)(param_1 + 0x50) != 0) {
      fVar4 = (float)*(int *)(param_1 + 0x4c) / (float)*(int *)(param_1 + 0x50);
    }
    FUN_00cce3d0(*(undefined4 *)(param_1 + 0x20),fVar4 * 4.712389);
  }
  iVar6 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar6 != iVar3) {
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    else if (iVar6 == 2) {
      if (iVar3 != 3) {
        *(undefined4 *)(param_1 + 0x58) = 1;
      }
    }
    else if (iVar6 == 3) {
      if (iVar3 != 2) {
        *(undefined4 *)(param_1 + 0x58) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
      FUN_00cdf240(0,1);
    }
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
        FUN_00cdf240(0,1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
      FUN_00cdf240(0,1);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (((DAT_01dc14c8 == (int *)0x0) || (iVar6 = (**(code **)(*DAT_01dc14c8 + 0x32c))(), iVar6 == 0))
     && ((DAT_01bea060 & 0x2000000) == 0)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x38);
    }
  }
  else if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x3c) = iVar6;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  return;
}

// 00D2E280  cEnemyTargetParts::cEnemyTargetParts_2  size=156  [class]
void __fastcall cEnemyTargetParts::cEnemyTargetParts_2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x6c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x1a] = 0x3f800000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0xd] = 0xffffffff;
    puVar1[0x12] = 0xffffffff;
    puVar1[0x18] = 0xffffffff;
    *(undefined2 *)(puVar1 + 0x19) = 0xffff;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[3] = "cEnemyTargetParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(0x16);
    puVar1[5] = uVar2;
    *(undefined4 **)(param_1 + 4) = puVar1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00D2E320  FUN_00d2e320  size=134  [callgraph]
undefined4 __thiscall FUN_00d2e320(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4 + param_2 * 4);
  if (iVar1 == 0) {
    iVar1 = FUN_00dd3500(0x6c,&DAT_01b7be50);
    if (iVar1 != 0) {
      iVar1 = cEnemyTargetParts::cEnemyTargetParts();
      if (iVar1 != 0) {
        *(char **)(iVar1 + 0xc) = "cEnemyTargetParts";
        *(undefined4 *)(iVar1 + 8) = 4;
        uVar2 = FUN_00d29960(0x16);
        *(undefined4 *)(iVar1 + 0x14) = uVar2;
      }
      *(int *)(param_1 + 4 + param_2 * 4) = iVar1;
      return 0;
    }
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}

