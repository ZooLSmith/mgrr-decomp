// src/unsorted/unit_009D9B70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D9B70..009D9E30, 3 functions

#include "types.h"

// 009D9B70  FUN_009d9b70  size=506  [run]
void __thiscall FUN_009d9b70(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  int local_4;
  
  if ((*(int *)(param_3 + 4) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_3 + 4) + 0x30), puVar2 == (uint *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar2;
    if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
      local_4 = param_1;
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  iVar1 = param_2;
  local_4 = 0;
  param_2 = 0;
  iVar3 = cEsp::FixTexture(&local_4,&param_2,*(undefined2 *)(uVar6 + 4),
                           *(undefined2 *)(param_1 + 0x432),*(undefined4 *)(param_1 + 0x420),1);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  else {
    iVar3 = FUN_00fa0740(param_2);
    *(int *)(iVar1 + 0x18) = iVar3;
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
    }
  }
  if ((*(uint *)(param_3 + 0x18) & 0x8000000) == 0) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
    if (((0xfd < *(ushort *)(uVar6 + 4)) && (*(ushort *)(uVar6 + 4) < 0x100)) &&
       (*(int *)(param_1 + 0x424) != 0)) {
      uVar4 = FUN_00fa0740(0);
      *(undefined4 *)(iVar1 + 0x1c) = uVar4;
    }
  }
  else {
    uVar5 = (ushort)*(byte *)(uVar6 + 0x26);
    if ((*(uint *)(param_3 + 0x18) & 0x4000000) != 0) {
      uVar5 = *(ushort *)(param_1 + 0x432);
    }
    local_4 = 0;
    param_2 = 0;
    iVar3 = cEsp::FixTexture(&local_4,&param_2,*(undefined2 *)(uVar6 + 6),uVar5,
                             *(undefined4 *)(param_1 + 0x424),1);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    else {
      iVar3 = FUN_00fa0740(param_2);
      *(int *)(iVar1 + 0x1c) = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
      }
    }
  }
  if ((*(byte *)(param_3 + 0x18) & 0x80) != 0) {
    param_2 = 0;
    param_3 = 0;
    iVar3 = cEsp::FixTexture(&param_2,&param_3,*(undefined2 *)(uVar6 + 4),
                             *(undefined2 *)(param_1 + 0x442),*(undefined4 *)(param_1 + 0x420),1);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    else {
      iVar3 = FUN_00fa0740(param_3);
      *(int *)(iVar1 + 0x20) = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
      }
    }
    *(float *)(iVar1 + 0xc0) = *(float *)(param_1 + 0x438) - (float)*(ushort *)(param_1 + 0x432);
    return;
  }
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}

// 009D9D70  FUN_009d9d70  size=170  [run]
void __thiscall FUN_009d9d70(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_2[2] = *(uint *)(param_1 + 0x24);
  if ((*(int *)(param_3 + 4) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_3 + 4) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  param_2[1] = uVar3;
  if (*(uint **)(param_3 + 4) == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(uint **)(param_3 + 4);
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  *param_2 = uVar3;
  if (*(int *)(param_1 + 0x50) != 0) {
    param_2[3] = *(int *)(param_1 + 0x50) + 0x10;
    param_2[4] = *(uint *)(param_1 + 0x84);
    return;
  }
  param_2[3] = 0;
  param_2[4] = *(uint *)(param_1 + 0x84);
  return;
}

// 009D9E30  FUN_009d9e30  size=858  [run]
undefined4 __thiscall
FUN_009d9e30(int param_1,int param_2,int *param_3,undefined4 param_4,float *param_5)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 0x4e);
  if ((sVar1 != -3) && ((*(uint *)(param_1 + 0x30) & 0x100) == 0)) {
    if ((sVar1 < -3) && (-0xe < sVar1)) {
      iVar5 = (int)*(char *)(*param_3 + 0x16);
      uVar3 = 9;
      switch(sVar1) {
      case -0xd:
        uVar3 = 0x12;
        break;
      case -0xc:
        FUN_00a212c0(0x11,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -0xb:
        FUN_00a212c0(0x10,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -10:
        FUN_00a212c0(0xf,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -9:
        FUN_00a212c0(0xe,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -8:
        FUN_00a212c0(0xd,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -7:
        FUN_00a212c0(0xc,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -6:
        FUN_00a212c0(0xb,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      case -5:
        FUN_00a212c0(10,iVar5,&LAB_00f97db0,param_2,0);
        return 1;
      }
      FUN_00a212c0(uVar3,iVar5,&LAB_00f97db0,param_2,0);
      return 1;
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x2000000) == 0) {
      if (*(char *)(*param_3 + 0x16) == -0x40) {
        FUN_00a212c0(0x51,0,&LAB_00f97db0,param_2,0);
        return 1;
      }
      pfVar4 = (float *)(param_1 + 0x1a0);
      if ((*(uint *)(param_1 + 0x30) & 0x100000) == 0) {
        pfVar4 = (float *)(param_1 + 400);
      }
      fVar2 = SQRT((*param_5 - *pfVar4) * (*param_5 - *pfVar4) +
                   (param_5[1] - pfVar4[1]) * (param_5[1] - pfVar4[1]) +
                   (param_5[2] - pfVar4[2]) * (param_5[2] - pfVar4[2])) - *(float *)(param_3[1] + 8)
      ;
      *(float *)(param_1 + 0x39c) = fVar2;
      uVar3 = FUN_00933520(fVar2,(int)*(char *)(*param_3 + 0x16));
      FUN_00a212c0(0x51,uVar3,&LAB_00f97db0,param_2,0);
      return 1;
    }
    iVar5 = (int)*(char *)(*param_3 + 0x16);
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    else if (0x13 < iVar5) {
      if (iVar5 < 0x1e) {
        FUN_00a212c0(0x4c,iVar5 + -0x14,&LAB_00f97db0,param_2,0);
        return 1;
      }
      if (0x27 < iVar5) {
        return 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
      *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x8000;
      iVar5 = iVar5 + -0x1e;
      goto LAB_009da16f;
    }
    FUN_00a212c0(0x4b,iVar5,&LAB_00f97db0,param_2,0);
    return 1;
  }
  if (*(char *)(*param_3 + 0x16) < '2') {
    FUN_00a212c0(0x5c,*(char *)(*param_3 + 0x16) + 0x40,&LAB_00f97db0,param_2,0);
    return 1;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x8000;
  iVar5 = *(char *)(*param_3 + 0x16) + -0x32;
LAB_009da16f:
  FUN_00a212c0(99,iVar5,&LAB_00f97db0,param_2,0);
  return 1;
}

