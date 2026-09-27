// src/misc/cHeadMarkParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB94D0..00D3D030, 5 functions

#include "mgrr.h"
#include "cHeadMarkParts.h"

// 00CB94D0  cHeadMarkParts::vf08  size=78  [class]
void __fastcall cHeadMarkParts::vf08(int param_1)

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

// 00CB9520  FUN_00cb9520  size=571  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cb9520(int param_1,float param_2,float param_3,float param_4)

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
    fVar1 = *(float *)(param_1 + 0x34) - _DAT_018b64ec;
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
    fVar2 = _DAT_018b64ec;
    if (*(float *)(param_1 + 0x30) <= fVar1) {
      if ((*(float *)(param_1 + 0x30) < fVar1) &&
         (fVar3 = *(float *)(param_1 + 0x30) + _DAT_018b64ec, *(float *)(param_1 + 0x30) = fVar3,
         fVar1 < fVar3)) {
        *(float *)(param_1 + 0x30) = fVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x30) - _DAT_018b64ec;
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
  if (*(int *)(param_1 + 0x44) == 0) {
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

// 00CDEA90  cHeadMarkParts::vf00  size=63  [class]
undefined4 * __thiscall cHeadMarkParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D00810  cHeadMarkParts::vf14  size=567  [class]
void __fastcall cHeadMarkParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    if (*(int *)(param_1 + 0x40) != -1) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 0x3c);
    if (iVar4 == -1) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    if (iVar4 == 0) {
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),0x620530fa);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),0x620530fa);
      pcVar5 = "HUD_PIECE_13";
    }
    else {
      if (iVar4 != 1) {
        *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
        break;
      }
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),0x64914254);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),0x64914254);
      pcVar5 = "HUD_PIECE_15";
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),pcVar5,0,0xffffffff);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  case 1:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
switchD_00d0082d_caseD_2:
    if (*(int *)(param_1 + 0x3c) == -1) {
      if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(0), iVar4 != 0)) {
        FUN_00cdeec0(1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_00d00935:
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        if (*(int *)(param_1 + 0x3c) == -1) {
          if (*(int *)(param_1 + 0x60) < 1) {
            *(undefined4 *)(param_1 + 0x60) = 0;
            if (*(int *)(param_1 + 0x18) != 0) {
              FUN_00cdeec0(2);
            }
            goto LAB_00d00978;
          }
        }
        else {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x3c);
          *(undefined4 *)(param_1 + 0x60) = 0;
          if (*(int *)(param_1 + 0x18) == 0) {
LAB_00d00978:
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
          else {
            FUN_00cdeec0(2);
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
    break;
  case 2:
    goto switchD_00d0082d_caseD_2;
  case 3:
    goto LAB_00d00935;
  case 4:
    if ((*(int *)(param_1 + 0x18) == 0) || (iVar4 = FUN_00cdf400(2), iVar4 == 0)) {
      *(uint *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x40) != -1) - 1 & 5;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x50) - DAT_01bea380;
      fVar3 = *(float *)(param_1 + 0x54) - DAT_01bea384;
      fVar2 = *(float *)(param_1 + 0x58) - DAT_01bea388;
      FUN_00cb9520(local_20,local_1c,SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2));
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      goto LAB_00d00a3d;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
LAB_00d00a3d:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00D3D030  cHeadMarkParts::cHeadMarkParts  size=4170  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cHeadMarkParts::cHeadMarkParts(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint local_b8;
  undefined4 *local_b4;
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
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar10 = 0;
  iVar12 = 0;
  do {
    if (((&DAT_01dbff60)[iVar12] != DAT_01dc0e00) && (iVar6 = FUN_00cb9ab0(iVar12), iVar6 != 0)) {
      iVar10 = iVar10 + 1;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x14);
  if (0 < iVar10) {
    if (*(int *)(param_1 + 0x194) != 0) {
      local_b8 = 0;
      local_b4 = (undefined4 *)0x0;
      uVar7 = FUN_00907560((int *)(param_1 + 0x194),&local_70,&local_80,&local_b8,&local_b4,0,0,0);
      *(undefined4 *)(param_1 + 0x198 + *(int *)(param_1 + 0x1e8) * 4) = uVar7;
    }
    local_b8 = 0;
    do {
      if (*(int *)((int)&DAT_01dbff60 + local_b8) != DAT_01dc0e00) {
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        if (0x13 < *(int *)(param_1 + 0x1e8)) {
          *(undefined4 *)(param_1 + 0x1e8) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x1e8);
        iVar12 = *(int *)(param_1 + 4 + iVar10 * 4);
        bVar5 = false;
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0x54 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xa4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xf4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 100) == 0)) {
          bVar5 = true;
        }
        iVar10 = *(int *)(param_1 + 0x144 + iVar10 * 4);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x68) == 0)) || (bVar5)) goto LAB_00d3d3e3;
      }
      if (*(int *)((int)&DAT_01dbff64 + local_b8) != DAT_01dc0e00) {
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        if (0x13 < *(int *)(param_1 + 0x1e8)) {
          *(undefined4 *)(param_1 + 0x1e8) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x1e8);
        iVar12 = *(int *)(param_1 + 4 + iVar10 * 4);
        bVar5 = false;
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0x54 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xa4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xf4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 100) == 0)) {
          bVar5 = true;
        }
        iVar10 = *(int *)(param_1 + 0x144 + iVar10 * 4);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x68) == 0)) || (bVar5)) goto LAB_00d3d3e3;
      }
      if (*(int *)(&DAT_01dbff68 + local_b8) != DAT_01dc0e00) {
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        if (0x13 < *(int *)(param_1 + 0x1e8)) {
          *(undefined4 *)(param_1 + 0x1e8) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x1e8);
        iVar12 = *(int *)(param_1 + 4 + iVar10 * 4);
        bVar5 = false;
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0x54 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xa4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xf4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 100) == 0)) {
          bVar5 = true;
        }
        iVar10 = *(int *)(param_1 + 0x144 + iVar10 * 4);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x68) == 0)) || (bVar5)) goto LAB_00d3d3e3;
      }
      if (*(int *)(&DAT_01dbff6c + local_b8) != DAT_01dc0e00) {
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        if (0x13 < *(int *)(param_1 + 0x1e8)) {
          *(undefined4 *)(param_1 + 0x1e8) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x1e8);
        iVar12 = *(int *)(param_1 + 4 + iVar10 * 4);
        bVar5 = false;
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0x54 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xa4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xf4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 100) == 0)) {
          bVar5 = true;
        }
        iVar10 = *(int *)(param_1 + 0x144 + iVar10 * 4);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x68) == 0)) || (bVar5)) goto LAB_00d3d3e3;
      }
      if (*(int *)(&DAT_01dbff70 + local_b8) != DAT_01dc0e00) {
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
        if (0x13 < *(int *)(param_1 + 0x1e8)) {
          *(undefined4 *)(param_1 + 0x1e8) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x1e8);
        iVar12 = *(int *)(param_1 + 4 + iVar10 * 4);
        bVar5 = false;
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0x54 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xa4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x68) == 0)) {
          bVar5 = true;
        }
        iVar12 = *(int *)(param_1 + 0xf4 + iVar10 * 4);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 100) == 0)) {
          bVar5 = true;
        }
        iVar10 = *(int *)(param_1 + 0x144 + iVar10 * 4);
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x68) == 0)) || (bVar5)) goto LAB_00d3d3e3;
      }
      local_b8 = local_b8 + 0x14;
      if (0x4f < local_b8) goto LAB_00d3d3e3;
    } while( true );
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    RayCastManager::getWork(param_1 + 0x194);
  }
  uVar13 = 0;
LAB_00d3d563:
  do {
    if ((&DAT_01dbfe20)[uVar13] == 0) {
      (&DAT_01dbff60)[uVar13] = 0;
    }
    if ((&DAT_01dbff10)[uVar13] == 0x2c200) {
      *(undefined4 *)(param_1 + 0x198 + uVar13 * 4) = 0;
    }
    if ((&DAT_01dbff10)[uVar13] == 0x28080) {
      *(undefined4 *)(param_1 + 0x198 + uVar13 * 4) = 0;
    }
    if ((&DAT_01dbff10)[uVar13] == 0x28081) {
      *(undefined4 *)(param_1 + 0x198 + uVar13 * 4) = 0;
    }
    if (DAT_018b9174 == 0xc75) {
      *(undefined4 *)(param_1 + 0x198 + uVar13 * 4) = 0;
    }
    iVar10 = (&DAT_01dbfec0)[uVar13];
    if (iVar10 == -1) {
      puVar8 = *(undefined4 **)(param_1 + 4 + uVar13 * 4);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[0x1a] != 0)) {
        (**(code **)*puVar8)(1);
        *(undefined4 *)(param_1 + 4 + uVar13 * 4) = 0;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x54 + uVar13 * 4);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[0x1a] != 0)) {
        (**(code **)*puVar8)(1);
        *(undefined4 *)(param_1 + 0x54 + uVar13 * 4) = 0;
      }
      puVar8 = *(undefined4 **)(param_1 + 0xa4 + uVar13 * 4);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[0x1a] != 0)) {
        (**(code **)*puVar8)(1);
        *(undefined4 *)(param_1 + 0xa4 + uVar13 * 4) = 0;
      }
      puVar8 = *(undefined4 **)(param_1 + 0xf4 + uVar13 * 4);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[0x19] != 0)) {
        (**(code **)*puVar8)(1);
        *(undefined4 *)(param_1 + 0xf4 + uVar13 * 4) = 0;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x144 + uVar13 * 4);
      if ((puVar8 != (undefined4 *)0x0) && (puVar8[0x1a] != 0)) {
        (**(code **)*puVar8)(1);
        *(undefined4 *)(param_1 + 0x144 + uVar13 * 4) = 0;
      }
    }
    else if (iVar10 == 3) {
      if (*(int *)(param_1 + 0xa4 + uVar13 * 4) == 0) {
        puVar9 = (undefined4 *)FUN_00dd3500(0x90,&DAT_01b7be50);
        puVar8 = (undefined4 *)0x0;
        if (puVar9 != (undefined4 *)0x0) {
          puVar9[1] = 0;
          puVar9[0xe] = 0;
          puVar9[2] = 0;
          puVar9[0xf] = 0;
          puVar9[3] = 0;
          puVar9[0x10] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[0x20] = 0x41f00000;
          *puVar9 = cHeadMarkStunParts::vftable;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0x12] = 0;
          puVar9[0x18] = 0;
          puVar9[0x1a] = 0;
          puVar9[4] = 1;
          puVar9[0x11] = 1;
          puVar9[0x1b] = 1;
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9[0x16] = 0;
          puVar9[0x17] = 0x3f800000;
          puVar9[0x1f] = 0x3f800000;
          puVar9[0x1c] = 0;
          puVar9[0x1d] = 0;
          puVar9[0x1e] = 0;
          puVar9[3] = "cHeadMarkStunParts";
          puVar9[2] = 4;
          local_b4 = puVar9;
          uVar7 = FUN_00d29960(0x2e);
          puVar9[5] = uVar7;
          puVar8 = puVar9;
        }
        *(undefined4 **)(param_1 + 0xa4 + uVar13 * 4) = puVar8;
      }
    }
    else if (iVar10 == 4) {
      if (*(int *)(param_1 + 0xf4 + uVar13 * 4) == 0) {
        puVar9 = (undefined4 *)FUN_00dd3500(0x70,&DAT_01b7be50);
        puVar8 = (undefined4 *)0x0;
        if (puVar9 != (undefined4 *)0x0) {
          puVar9[1] = 0;
          puVar9[0xe] = 0;
          puVar9[2] = 0;
          puVar9[0xf] = 0;
          puVar9[3] = 0;
          puVar9[0x10] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[0x1b] = 0x41f00000;
          *puVar9 = cHeadMarkShockParts::vftable;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0x12] = 0;
          puVar9[0x18] = 0;
          puVar9[0x19] = 0;
          puVar9[4] = 1;
          puVar9[0x11] = 1;
          puVar9[0x1a] = 1;
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9[0x16] = 0;
          puVar9[0x17] = 0x3f800000;
          puVar9[3] = "cHeadMarkShockParts";
          puVar9[2] = 4;
          local_b4 = puVar9;
          uVar7 = FUN_00d29960(0x2f);
          puVar9[5] = uVar7;
          puVar8 = puVar9;
        }
        *(undefined4 **)(param_1 + 0xf4 + uVar13 * 4) = puVar8;
      }
    }
    else if (iVar10 == 2) {
      if (*(int *)(param_1 + 0x54 + uVar13 * 4) == 0) {
        uVar7 = cHeadMarkAlertParts::cHeadMarkAlertParts();
        *(undefined4 *)(param_1 + 0x54 + uVar13 * 4) = uVar7;
      }
    }
    else if (iVar10 == 5) {
      if (*(int *)(param_1 + 0x144 + uVar13 * 4) == 0) {
        uVar7 = cHeadMarkAngryParts::cHeadMarkAngryParts();
        *(undefined4 *)(param_1 + 0x144 + uVar13 * 4) = uVar7;
      }
    }
    else if (*(int *)(param_1 + 4 + uVar13 * 4) == 0) {
      puVar9 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
      puVar8 = (undefined4 *)0x0;
      if (puVar9 != (undefined4 *)0x0) {
        puVar9[0xc] = 0x3f800000;
        puVar9[4] = 1;
        puVar9[0xd] = 0x3f800000;
        puVar9[0x1b] = 1;
        puVar9[0xe] = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[0x1c] = 0x41f00000;
        puVar9[3] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        *puVar9 = vftable;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xf] = 0xffffffff;
        puVar9[0x10] = 0xffffffff;
        puVar9[0x11] = 0;
        puVar9[0x18] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        puVar9[3] = "cHeadMarkParts";
        puVar9[2] = 4;
        local_b4 = puVar9;
        uVar7 = FUN_00d29960(0x2c);
        puVar9[5] = uVar7;
        puVar8 = puVar9;
      }
      *(undefined4 **)(param_1 + 4 + uVar13 * 4) = puVar8;
    }
    local_b8 = 0x41f00000;
    if ((&DAT_01dbff10)[uVar13] == 0x20600) {
      local_b8 = 0x42700000;
    }
    if (*(int *)(param_1 + 4 + uVar13 * 4) != 0) {
      FUN_00cb9960(&local_90,(&DAT_01dbff10)[uVar13],&DAT_01dc4780 + uVar13 * 0x10);
      iVar10 = *(int *)(param_1 + 4 + uVar13 * 4);
      iVar12 = (&DAT_01dbfec0)[uVar13];
      uVar7 = (&DAT_01dbfe70)[uVar13];
      uVar3 = *(undefined4 *)(param_1 + 0x198 + uVar13 * 4);
      *(undefined4 *)(iVar10 + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x50) = local_90;
      *(undefined4 *)(iVar10 + 0x54) = local_8c;
      *(undefined4 *)(iVar10 + 0x58) = local_88;
      *(undefined4 *)(iVar10 + 0x5c) = local_84;
      *(undefined4 *)(iVar10 + 0x44) = uVar3;
      *(uint *)(iVar10 + 0x70) = local_b8;
      if ((((iVar12 != *(int *)(iVar10 + 0x3c)) && (iVar12 != -1)) &&
          (*(int *)(iVar10 + 0x3c) = iVar12, iVar12 != 3)) && ((iVar12 != 2 && (iVar12 != 5)))) {
        *(undefined4 *)(iVar10 + 100) = uVar7;
        *(undefined4 *)(iVar10 + 0x68) = 0;
      }
      if ((&DAT_01dbfe20)[uVar13] == 0) {
        *(undefined4 *)(*(int *)(param_1 + 4 + uVar13 * 4) + 0x60) = 0;
      }
      (**(code **)(**(int **)(param_1 + 4 + uVar13 * 4) + 4))();
    }
    if (*(int *)(param_1 + 0x54 + uVar13 * 4) != 0) {
      FUN_00cb9960(&local_a0,(&DAT_01dbff10)[uVar13],&DAT_01dc4780 + uVar13 * 0x10);
      iVar10 = *(int *)(param_1 + 0x54 + uVar13 * 4);
      iVar12 = (&DAT_01dbfec0)[uVar13];
      uVar7 = (&DAT_01dbfe70)[uVar13];
      uVar3 = *(undefined4 *)(param_1 + 0x198 + uVar13 * 4);
      *(undefined4 *)(iVar10 + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x50) = local_a0;
      *(undefined4 *)(iVar10 + 0x54) = local_9c;
      *(undefined4 *)(iVar10 + 0x58) = local_98;
      *(undefined4 *)(iVar10 + 0x5c) = local_94;
      *(undefined4 *)(iVar10 + 0x40) = uVar3;
      *(uint *)(iVar10 + 0x70) = local_b8;
      if (((iVar12 != *(int *)(iVar10 + 0x3c)) && (iVar12 != -1)) && (iVar12 != 3)) {
        *(int *)(iVar10 + 0x3c) = iVar12;
        *(undefined4 *)(iVar10 + 100) = uVar7;
        *(undefined4 *)(iVar10 + 0x68) = 0;
      }
      if ((&DAT_01dbfe20)[uVar13] == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x54 + uVar13 * 4) + 0x60) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x54 + uVar13 * 4) + 4))();
    }
    if (*(int *)(param_1 + 0x144 + uVar13 * 4) != 0) {
      FUN_00cb9960(&local_b0,(&DAT_01dbff10)[uVar13],&DAT_01dc4780 + uVar13 * 0x10);
      iVar10 = *(int *)(param_1 + 0x144 + uVar13 * 4);
      iVar12 = (&DAT_01dbfec0)[uVar13];
      uVar7 = (&DAT_01dbfe70)[uVar13];
      uVar3 = *(undefined4 *)(param_1 + 0x198 + uVar13 * 4);
      *(undefined4 *)(iVar10 + 0x3c) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x50) = local_b0;
      *(undefined4 *)(iVar10 + 0x54) = local_ac;
      *(undefined4 *)(iVar10 + 0x58) = local_a8;
      *(undefined4 *)(iVar10 + 0x5c) = local_a4;
      *(undefined4 *)(iVar10 + 0x40) = uVar3;
      *(uint *)(iVar10 + 0x70) = local_b8;
      if (((iVar12 != *(int *)(iVar10 + 0x3c)) && (iVar12 != -1)) && (iVar12 != 3)) {
        *(int *)(iVar10 + 0x3c) = iVar12;
        *(undefined4 *)(iVar10 + 100) = uVar7;
        *(undefined4 *)(iVar10 + 0x68) = 0;
      }
      if ((&DAT_01dbfe20)[uVar13] == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x144 + uVar13 * 4) + 0x60) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x144 + uVar13 * 4) + 4))();
    }
    if (*(int *)(param_1 + 0xa4 + uVar13 * 4) != 0) {
      FUN_00cb9960(&local_70,(&DAT_01dbff10)[uVar13],&DAT_01dc4780 + uVar13 * 0x10);
      uVar7 = (&DAT_01dc4c80)[uVar13 * 4];
      local_b4 = (undefined4 *)0x0;
      uVar3 = (&DAT_01dc4c84)[uVar13 * 4];
      uVar1 = (&DAT_01dc4c88)[uVar13 * 4];
      uVar2 = (&DAT_01dc4c8c)[uVar13 * 4];
      iVar10 = (&DAT_01dbff10)[uVar13];
      if ((((iVar10 == 0x20030) || (iVar10 == 0x20033)) ||
          ((iVar10 == 0x20035 || ((iVar10 == 0x20040 || (iVar10 == 0x20060)))))) ||
         ((((iVar10 == 0x20070 ||
            ((((((iVar10 == 0x20071 || (iVar10 == 0x20080)) || (iVar10 == 0x20081)) ||
               ((iVar10 == 0x20100 || (iVar10 == 0x20120)))) ||
              (((iVar10 == 0x20121 || ((iVar10 == 0x20180 || (iVar10 == 0x20190)))) ||
               (iVar10 == 0x201c0)))) ||
             (((((((iVar10 == 0x20220 || (iVar10 == 0x20500)) || (iVar10 == 0x20600)) ||
                 ((iVar10 == 0x21010 || (iVar10 == 0x2c030)))) || (iVar10 == 0x2c033)) ||
               ((iVar10 == 0x2c035 || (iVar10 == 0x2c040)))) ||
              ((iVar10 == 0x2c060 ||
               (((iVar10 == 0x2c070 || (iVar10 == 0x2c071)) || (iVar10 == 0x2c080)))))))))) ||
           (((((iVar10 == 0x2c081 || (iVar10 == 0x2c100)) || (iVar10 == 0x2c120)) ||
             ((iVar10 == 0x2c190 || (iVar10 == 0x2c220)))) ||
            (((iVar10 == 0x28030 ||
              (((iVar10 == 0x28033 || (iVar10 == 0x28035)) || (iVar10 == 0x28040)))) ||
             ((iVar10 == 0x28060 || (iVar10 == 0x28070)))))))) ||
          ((iVar10 == 0x28071 ||
           (((iVar10 == 0x28080 || (iVar10 == 0x28081)) ||
            ((iVar10 == 0x28120 ||
             (((iVar10 == 0x28180 || (iVar10 == 0x28220)) || (iVar10 == 0x11500)))))))))))) {
        local_b4 = (undefined4 *)0x1;
      }
      iVar12 = *(int *)(param_1 + 0xa4 + uVar13 * 4);
      iVar6 = (&DAT_01dbfec0)[uVar13];
      uVar4 = *(undefined4 *)(param_1 + 0x198 + uVar13 * 4);
      *(undefined4 *)(iVar12 + 0x44) = 0xffffffff;
      *(undefined4 *)(iVar12 + 0x50) = local_70;
      *(undefined4 *)(iVar12 + 0x54) = uStack_6c;
      *(undefined4 *)(iVar12 + 0x58) = uStack_68;
      *(undefined4 *)(iVar12 + 0x5c) = uStack_64;
      *(undefined4 *)(iVar12 + 0x48) = uVar4;
      *(uint *)(iVar12 + 0x80) = local_b8;
      *(undefined4 *)(iVar12 + 0x70) = uVar7;
      *(undefined4 *)(iVar12 + 0x74) = uVar3;
      *(undefined4 *)(iVar12 + 0x78) = uVar1;
      *(undefined4 *)(iVar12 + 0x7c) = uVar2;
      if (((iVar6 != *(int *)(iVar12 + 0x44)) && (iVar6 != -1)) && (iVar6 == 3)) {
        *(undefined4 *)(iVar12 + 0x44) = 3;
        *(uint *)(iVar12 + 100) = (uint)(iVar10 == 0x11400);
        *(undefined4 **)(iVar12 + 0x60) = local_b4;
        *(undefined4 *)(iVar12 + 0x68) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0xa4 + uVar13 * 4) + 4))();
    }
    if (*(int *)(param_1 + 0xf4 + uVar13 * 4) != 0) {
      FUN_00cb9960(&local_80,(&DAT_01dbff10)[uVar13],&DAT_01dc4780 + uVar13 * 0x10);
      iVar10 = (&DAT_01dbff10)[uVar13];
      uVar7 = 0;
      if ((((((((iVar10 == 0x20030) || (iVar10 == 0x20033)) ||
              ((iVar10 == 0x20035 ||
               ((((iVar10 == 0x20040 || (iVar10 == 0x20060)) || (iVar10 == 0x20070)) ||
                ((iVar10 == 0x20071 || (iVar10 == 0x20080)))))))) ||
             ((iVar10 == 0x20081 || ((iVar10 == 0x20100 || (iVar10 == 0x20120)))))) ||
            ((iVar10 == 0x20121 ||
             (((iVar10 == 0x20180 || (iVar10 == 0x20190)) || (iVar10 == 0x201c0)))))) ||
           ((((iVar10 == 0x20220 || (iVar10 == 0x20500)) || (iVar10 == 0x20600)) ||
            ((iVar10 == 0x21010 || (iVar10 == 0x2c030)))))) ||
          ((((((iVar10 == 0x2c033 ||
               (((iVar10 == 0x2c035 || (iVar10 == 0x2c040)) || (iVar10 == 0x2c060)))) ||
              ((iVar10 == 0x2c070 || (iVar10 == 0x2c071)))) || (iVar10 == 0x2c080)) ||
            (((iVar10 == 0x2c081 || (iVar10 == 0x2c100)) ||
             ((iVar10 == 0x2c120 ||
              ((((iVar10 == 0x2c190 || (iVar10 == 0x2c220)) || (iVar10 == 0x28030)) ||
               ((iVar10 == 0x28033 || (iVar10 == 0x28035)))))))))) ||
           ((iVar10 == 0x28040 || ((iVar10 == 0x28060 || (iVar10 == 0x28070)))))))) ||
         (((iVar10 == 0x28071 ||
           (((iVar10 == 0x28080 || (iVar10 == 0x28081)) || (iVar10 == 0x28120)))) ||
          ((iVar10 == 0x28220 || (iVar10 == 0x11500)))))) {
        uVar7 = 1;
      }
      iVar10 = *(int *)(param_1 + 0xf4 + uVar13 * 4);
      iVar12 = (&DAT_01dbfec0)[uVar13];
      uVar3 = *(undefined4 *)(param_1 + 0x198 + uVar13 * 4);
      *(undefined4 *)(iVar10 + 0x44) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x50) = local_80;
      *(undefined4 *)(iVar10 + 0x54) = uStack_7c;
      *(undefined4 *)(iVar10 + 0x58) = uStack_78;
      *(undefined4 *)(iVar10 + 0x5c) = uStack_74;
      *(undefined4 *)(iVar10 + 0x48) = uVar3;
      *(uint *)(iVar10 + 0x6c) = local_b8;
      if (((iVar12 != *(int *)(iVar10 + 0x44)) && (iVar12 != -1)) && (iVar12 == 4)) {
        *(undefined4 *)(iVar10 + 0x44) = 4;
        *(undefined4 *)(iVar10 + 0x60) = uVar7;
        *(undefined4 *)(iVar10 + 100) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0xf4 + uVar13 * 4) + 4))();
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x14);
  piVar11 = (int *)(param_1 + 0x54);
  uVar13 = 0;
  do {
    bVar5 = false;
    if ((piVar11[-0x14] != 0) && (*(int *)(piVar11[-0x14] + 0x68) == 0)) {
      bVar5 = true;
    }
    if ((*piVar11 != 0) && (*(int *)(*piVar11 + 0x68) == 0)) {
      bVar5 = true;
    }
    if ((piVar11[0x14] != 0) && (*(int *)(piVar11[0x14] + 0x68) == 0)) {
      bVar5 = true;
    }
    if ((piVar11[0x28] != 0) && (*(int *)(piVar11[0x28] + 100) == 0)) {
      bVar5 = true;
    }
    if (((piVar11[0x3c] == 0) || (*(int *)(piVar11[0x3c] + 0x68) != 0)) && (!bVar5)) {
      piVar11[0x51] = 0;
    }
    *(undefined4 *)((int)&DAT_01dbfe20 + uVar13) = 0;
    *(undefined4 *)((int)&DAT_01dbfec0 + uVar13) = 0xffffffff;
    uVar13 = uVar13 + 4;
    piVar11 = piVar11 + 1;
  } while (uVar13 < 0x50);
  return;
LAB_00d3d3e3:
  local_a0 = _DAT_01bea630;
  iVar10 = (&DAT_01dbff10)[*(int *)(param_1 + 0x1e8)];
  local_9c = _DAT_01bea634;
  local_98 = _DAT_01bea638;
  local_94 = _DAT_01bea63c;
  if ((iVar10 == 0x20080) || (iVar10 == 0x20081)) {
    local_90 = 0;
    local_8c = 0x3fa66666;
    local_88 = 0;
    local_84 = 0x3f800000;
    D3DXVec4Transform(&local_b0,&local_90,&DAT_01dc4780 + *(int *)(param_1 + 0x1e8) * 0x10);
  }
  else {
    puVar8 = (undefined4 *)
             FUN_00cb9960(&local_80,iVar10,&DAT_01dc4780 + *(int *)(param_1 + 0x1e8) * 0x10);
    local_b0 = *puVar8;
    local_ac = puVar8[1];
    local_a8 = puVar8[2];
    local_a4 = puVar8[3];
  }
  local_60[0] = param_1 + 0x194;
  local_50 = local_a0;
  local_4c = local_9c;
  local_48 = local_98;
  local_60[1] = 0;
  local_44 = local_94;
  local_30 = 0xd;
  local_2c = 0;
  local_40 = local_b0;
  local_28 = 8;
  local_24 = 0;
  local_3c = local_ac;
  local_20 = "HeadMark";
  local_1c = 0;
  local_38 = local_a8;
  local_18 = 0;
  local_34 = local_a4;
  HavokRayCastManager::set(local_60);
  uVar13 = 0;
  goto LAB_00d3d563;
}

