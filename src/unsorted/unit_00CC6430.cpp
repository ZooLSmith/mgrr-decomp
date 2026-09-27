// src/unsorted/unit_00CC6430.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC6430..00CC72A0, 11 functions

#include "types.h"

// 00CC6430  FUN_00cc6430  size=149  [run]
void FUN_00cc6430(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  *param_1 = fVar2;
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[1] = fVar1;
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[2] = fVar1;
  fVar1 = param_1[3];
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      param_1[3] = 1.0;
      return;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[3] = fVar1;
  return;
}

// 00CC64D0  FUN_00cc64d0  size=1016  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00cc64d0(float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar6;
  float fStack_b4;
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74 [2];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c [22];
  
  local_74[0] = 0.0;
  *param_2 = 0.0;
  FUN_00d9fa80(&local_60,param_3);
  iVar5 = FUN_00de5710(param_3,0x3dcccccd);
  if (iVar5 != 0) goto LAB_00cc685b;
  D3DXVec3TransformNormal(local_b0,param_3,&DAT_01bea280);
  fVar3 = _DAT_01bea2b0 + unaff_ESI;
  fVar4 = _DAT_01bea2b4 + unaff_EBX;
  fVar2 = fStack_b4 + _DAT_01bea2b8;
  fStack_9c = 0.0;
  fStack_98 = 0.0;
  fStack_94 = 1.0;
  uStack_90 = 0;
  FUN_00ddf460(&fStack_9c,&fStack_9c);
  fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&stack0xffffff44,&stack0xffffff44);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar2 = 0.0;
    fVar4 = 1.0;
    fVar3 = 0.0;
  }
  fStack_a8 = fStack_94 * fVar4 - fVar2 * fStack_98;
  fStack_a4 = fVar2 * fStack_9c - fStack_94 * fVar3;
  fStack_a0 = fStack_98 * fVar3 - fStack_9c * fVar4;
  fVar1 = fStack_a0 * fStack_a0 + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4;
  fStack_7c = fStack_a8;
  fStack_78 = fStack_a4;
  local_74[0] = fStack_a0;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_7c,&fStack_7c);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_7c = 0.0;
    fStack_78 = 1.0;
    local_74[0] = 0.0;
  }
  fVar3 = fStack_78 * fStack_94 - local_74[0] * fStack_98;
  fVar1 = local_74[0] * fStack_9c - fStack_94 * fStack_7c;
  fStack_a0 = fStack_98 * fStack_7c - fStack_9c * fStack_78;
  fVar2 = fStack_a0 * fStack_a0 + fVar3 * fVar3 + fVar1 * fVar1;
  fStack_a8 = fVar3;
  fStack_a4 = fVar1;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&stack0xffffff44,&stack0xffffff44);
    if (((float10)0 == (float10)fVar3) || ((float10)0 == (float10)fVar1)) goto LAB_00cc67ff;
    fVar6 = (float10)fpatan((float10)fVar1,(float10)fVar3);
    fVar6 = -fVar6;
    *param_2 = (float)(fVar6 - (float10)1.5707964);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
LAB_00cc67ff:
    fVar6 = (float10)fStack_80;
  }
  uStack_6c = 0xc42f0000;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 1.0;
  D3DXMatrixRotationZ(local_5c,(float)fVar6);
  D3DXVec3TransformNormal(local_74,local_74,&uStack_64);
  local_60 = fStack_80 + 640.0;
  local_5c[0] = fStack_7c + 360.0;
LAB_00cc685b:
  if (0.0 <= local_60) {
    if (1280.0 < local_60) {
      local_60 = 1280.0;
    }
  }
  else {
    local_60 = 0.0;
  }
  *param_1 = local_60;
  fVar1 = 0.0;
  if ((0.0 <= local_5c[0]) && (fVar1 = local_5c[0], 720.0 < local_5c[0])) {
    param_1[1] = 720.0;
    return iVar5 == 0;
  }
  param_1[1] = fVar1;
  return iVar5 == 0;
}

// 00CC6A00  FUN_00cc6a00  size=305  [run]
void FUN_00cc6a00(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if ((float)param_2[10] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[10]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if ((float)param_2[9] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[9]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if ((float)param_2[8] != 0.0) {
    D3DXMatrixRotationX(local_50,param_2[8]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  FUN_00ddd140(local_50,param_2 + 4);
  D3DXMatrixMultiply(param_1,local_50,param_1);
  param_1[0x10] = param_2[0xc];
  param_1[0x11] = param_2[0xd];
  param_1[0x12] = param_2[0xe];
  param_1[0x13] = param_2[0xf];
  param_1[0x14] = param_2[0x10];
  param_1[0x15] = param_2[0x11];
  param_1[0x16] = param_2[0x12];
  param_1[0x17] = param_2[0x13];
  return;
}

// 00CC6D70  FUN_00cc6d70  size=212  [run]
undefined4 FUN_00cc6d70(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  uVar3 = *(uint *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00a8cab0();
  }
  if ((uVar3 & 0xf0000) != 0x20000) {
    return 0;
  }
  if (uVar3 == 0x20060) {
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01b34c80;
      (**(code **)(*piVar1 + 4))(&DAT_01b34c80);
      iVar4 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar4 != 0) & (uint)piVar1;
    }
    if (*(int *)(uVar3 + 0x1b64) == 0) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0x20180) {
      return 0;
    }
    if (uVar3 == 0x201a1) {
      return 0;
    }
    if (uVar3 == 0x20200) {
      return 0;
    }
    if (uVar3 == 0x2020a) {
      return 0;
    }
    if (((((uVar3 == 0x20140) || (uVar3 == 0x20142)) || (uVar3 == 0x20144)) || (uVar3 == 0x20160))
       && ((iVar4 == 8 && (iVar2 == 0xc0000)))) {
      return 0;
    }
  }
  return 1;
}

// 00CC6E50  FUN_00cc6e50  size=290  [run]
undefined4 FUN_00cc6e50(int param_1)

{
  ushort uVar1;
  
  switch(DAT_01dc2cd8) {
  case 2:
    uVar1 = 0;
    do {
      if ((&DAT_016b6788)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6770 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 3:
    uVar1 = 0;
    do {
      if ((&DAT_016b6698)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6680 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 4:
    uVar1 = 0;
    do {
      if ((&DAT_016b6800)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b67e8 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 5:
    uVar1 = 0;
    do {
      if ((&DAT_016b6710)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b66f8 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 6:
    uVar1 = 0;
    do {
      if ((&DAT_016b6878)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6860 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return *(undefined4 *)(&DAT_016b55a0 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return 0;
}

// 00CC6FA0  FUN_00cc6fa0  size=290  [run]
undefined4 FUN_00cc6fa0(int param_1)

{
  ushort uVar1;
  
  switch(DAT_01dc2cd8) {
  case 2:
    uVar1 = 0;
    do {
      if ((&DAT_016b6788)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b677c + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 3:
    uVar1 = 0;
    do {
      if ((&DAT_016b6698)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b668c + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 4:
    uVar1 = 0;
    do {
      if ((&DAT_016b6800)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b67f4 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 5:
    uVar1 = 0;
    do {
      if ((&DAT_016b6710)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6704 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 6:
    uVar1 = 0;
    do {
      if ((&DAT_016b6878)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b686c + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return *(undefined4 *)(&DAT_016b55ac + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return 0;
}

// 00CC70F0  FUN_00cc70f0  size=290  [run]
undefined4 FUN_00cc70f0(int param_1)

{
  ushort uVar1;
  
  switch(DAT_01dc2cd8) {
  case 2:
    uVar1 = 0;
    do {
      if ((&DAT_016b6788)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6780 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 3:
    uVar1 = 0;
    do {
      if ((&DAT_016b6698)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6690 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 4:
    uVar1 = 0;
    do {
      if ((&DAT_016b6800)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b67f8 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 5:
    uVar1 = 0;
    do {
      if ((&DAT_016b6710)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6708 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    break;
  case 6:
    uVar1 = 0;
    do {
      if ((&DAT_016b6878)[(short)uVar1 * 10] == param_1) {
        return *(undefined4 *)(&DAT_016b6870 + (short)uVar1 * 0x28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  uVar1 = 0;
  do {
    if ((&DAT_016b55b8)[(short)uVar1 * 10] == param_1) {
      return *(undefined4 *)(&DAT_016b55b0 + (short)uVar1 * 0x28);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6c);
  return 0;
}

// 00CC7240  FUN_00cc7240  size=26  [run]
void FUN_00cc7240(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa070();
    return;
  }
  FUN_00cc6e50();
  return;
}

// 00CC7260  FUN_00cc7260  size=26  [run]
void FUN_00cc7260(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa140();
    return;
  }
  FUN_00cc6fa0();
  return;
}

// 00CC7280  FUN_00cc7280  size=26  [run]
void FUN_00cc7280(int param_1)

{
  if (param_1 < 0) {
    FUN_00caa190();
    return;
  }
  FUN_00cc70f0();
  return;
}

// 00CC72A0  FUN_00cc72a0  size=54  [run]
int __fastcall FUN_00cc72a0(int param_1)

{
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1;
}

