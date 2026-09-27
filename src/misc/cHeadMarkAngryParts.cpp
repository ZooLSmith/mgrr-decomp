// src/misc/cHeadMarkAngryParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB9E20..00D301B0, 5 functions

#include "mgrr.h"
#include "cHeadMarkAngryParts.h"

// 00CB9E20  cHeadMarkAngryParts::vf08  size=78  [class]
void __fastcall cHeadMarkAngryParts::vf08(int param_1)

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
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00CB9E80  FUN_00cb9e80  size=571  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cb9e80(int param_1,float param_2,float param_3,float param_4)

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
  if ((((*(float *)(param_1 + 0x70) < param_4) || (param_2 < 0.0)) || (local_54 < param_2)) ||
     ((param_3 < 0.0 || ((float)aiStack_60[2] + 50.0 < param_3)))) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x34) - _DAT_018b650c;
    *(float *)(param_1 + 0x34) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(*(float *)(param_1 + 0x34) != 0.0);
    }
  }
  else {
    param_4 = param_4 / *(float *)(param_1 + 0x70);
    if (1.0 < param_4) {
      param_4 = 1.0;
    }
    fVar1 = 1.2 - param_4 * 0.9;
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(float *)(param_1 + 0x30) = fVar1;
    }
    fVar2 = _DAT_018b650c;
    if (*(float *)(param_1 + 0x30) <= fVar1) {
      if ((*(float *)(param_1 + 0x30) < fVar1) &&
         (fVar3 = *(float *)(param_1 + 0x30) + _DAT_018b650c, *(float *)(param_1 + 0x30) = fVar3,
         fVar1 < fVar3)) {
        *(float *)(param_1 + 0x30) = fVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x30) - _DAT_018b650c;
      *(float *)(param_1 + 0x30) = fVar3;
      if (fVar3 < fVar1) {
        *(float *)(param_1 + 0x30) = fVar1;
      }
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x34) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    fVar1 = *(float *)(param_1 + 0x38) + 0.2;
    *(float *)(param_1 + 0x38) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x38) - 0.2;
    *(float *)(param_1 + 0x38) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  D3DXMatrixScaling(local_50,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x30));
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
         *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

// 00CE38B0  cHeadMarkAngryParts::vf00  size=63  [class]
undefined4 * __thiscall cHeadMarkAngryParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEF150  cHeadMarkAngryParts::create  size=371  [class]
void __fastcall cHeadMarkAngryParts::create(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x3c);
    if ((iVar4 != -1) && ((iVar4 == 5 || (iVar4 == 2)))) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = 1;
      goto switchD_00cef170_caseD_1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 5;
    break;
  case 1:
switchD_00cef170_caseD_1:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(0), iVar4 != 0)) {
      FUN_00cdeec0(1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
switchD_00cef170_caseD_3:
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (*(int *)(param_1 + 0x3c) == -1) {
        if (*(int *)(param_1 + 0x60) < 1) {
          *(undefined4 *)(param_1 + 0x60) = 0;
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(2);
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(2);
        }
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    break;
  case 3:
    goto switchD_00cef170_caseD_3;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(2), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
      goto switchD_00cef170_caseD_5;
    }
    break;
  case 5:
switchD_00cef170_caseD_5:
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x50) - DAT_01bea380;
      fVar3 = *(float *)(param_1 + 0x54) - DAT_01bea384;
      fVar2 = *(float *)(param_1 + 0x58) - DAT_01bea388;
      FUN_00cb9e80(local_20,local_1c,SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2));
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      goto LAB_00cef2b9;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
LAB_00cef2b9:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00D301B0  cHeadMarkAngryParts::cHeadMarkAngryParts  size=139  [class]
undefined4 * cHeadMarkAngryParts::cHeadMarkAngryParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0xc] = 0x3f800000;
    puVar1[4] = 1;
    puVar1[0xd] = 0x3f800000;
    puVar1[0x1b] = 1;
    puVar1[1] = 0;
    puVar1[0xe] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0x1c] = 0x41f00000;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[3] = "cHeadMarkAngryParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(0x30);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

