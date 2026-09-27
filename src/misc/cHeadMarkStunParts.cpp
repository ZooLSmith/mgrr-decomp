// src/misc/cHeadMarkStunParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBA440..00D00C30, 4 functions

#include "mgrr.h"
#include "cHeadMarkStunParts.h"

// 00CBA440  cHeadMarkStunParts::vf08  size=116  [class]
void __fastcall cHeadMarkStunParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x100);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x114);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x128);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00CBA4C0  FUN_00cba4c0  size=572  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cba4c0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_60 [3];
  float local_54;
  undefined1 local_50 [76];
  
  aiStack_60[2] = FUN_00f98a90();
  local_54 = (float)aiStack_60[2] + 50.0;
  aiStack_60[2] = FUN_00f98aa0();
  if ((((*(float *)(param_1 + 0x80) < param_4) || (param_2 < 0.0)) || (local_54 < param_2)) ||
     ((param_3 < 0.0 || ((float)aiStack_60[2] + 50.0 < param_3)))) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x3c) - _DAT_018b6514;
    *(float *)(param_1 + 0x3c) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(*(float *)(param_1 + 0x3c) != 0.0);
    }
  }
  else {
    param_4 = param_4 / *(float *)(param_1 + 0x80);
    if (1.0 < param_4) {
      param_4 = 1.0;
    }
    fVar1 = 1.2 - param_4 * 0.9;
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(float *)(param_1 + 0x38) = fVar1;
    }
    fVar2 = _DAT_018b6514;
    if (*(float *)(param_1 + 0x38) <= fVar1) {
      if ((*(float *)(param_1 + 0x38) < fVar1) &&
         (fVar3 = *(float *)(param_1 + 0x38) + _DAT_018b6514, *(float *)(param_1 + 0x38) = fVar3,
         fVar1 < fVar3)) {
        *(float *)(param_1 + 0x38) = fVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x38) - _DAT_018b6514;
      *(float *)(param_1 + 0x38) = fVar3;
      if (fVar3 < fVar1) {
        *(float *)(param_1 + 0x38) = fVar1;
      }
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    fVar1 = *(float *)(param_1 + 0x40) + 0.2;
    *(float *)(param_1 + 0x40) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x40) - 0.2;
    *(float *)(param_1 + 0x40) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  D3DXMatrixScaling(local_50,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x38),
                    *(undefined4 *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar5 = aiStack_60;
    piVar6 = (int *)(*(int *)(param_1 + 0x18) + 0x10);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) = param_2;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x5c) =
         *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}

// 00CE3840  cHeadMarkStunParts::vf00  size=63  [class]
undefined4 * __thiscall cHeadMarkStunParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D00C30  cHeadMarkStunParts::create  size=494  [class]
void __fastcall cHeadMarkStunParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 0:
    if ((*(int *)(param_1 + 0x44) == -1) || (*(int *)(param_1 + 0x44) != 3)) {
      *(undefined4 *)(param_1 + 0x34) = 5;
      break;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      if (*(int *)(param_1 + 100) == 0) {
        FUN_00e5e080("core_se_btl_bmi_error",param_1 + 0x70,0,0xffffffff,0);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        pcVar6 = "HUD_PIECE_23";
      }
      else {
        FUN_00e5e080("core_se_btl_bmi_error",param_1 + 0x70,0,0xffffffff,0);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        pcVar6 = "HUD_PIECE_47";
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pcVar6 = "HUD_PIECE_30";
    }
    FUN_00cf9770(uVar5,pcVar6,0,0xffffffff);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  case 1:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
switchD_00d00c4c_caseD_2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(0), iVar4 != 0)) {
      FUN_00cdeec0(1);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x20),3);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x24),4);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x28),5);
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
switchD_00d00c4c_caseD_3:
      if (*(int *)(param_1 + 0x44) != 3) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(2);
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
    break;
  case 2:
    goto switchD_00d00c4c_caseD_2;
  case 3:
    goto switchD_00d00c4c_caseD_3;
  case 4:
    if ((*(int *)(param_1 + 0x18) == 0) || (iVar4 = FUN_00cdf400(2), iVar4 == 0)) break;
    *(undefined4 *)(param_1 + 0x34) = 5;
  case 5:
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    break;
  default:
    break;
  }
  iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x50) - DAT_01bea380;
    fVar3 = *(float *)(param_1 + 0x54) - DAT_01bea384;
    fVar2 = *(float *)(param_1 + 0x58) - DAT_01bea388;
    FUN_00cba4c0(local_20,local_1c,SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1));
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

