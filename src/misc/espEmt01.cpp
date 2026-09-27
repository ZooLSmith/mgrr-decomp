// src/misc/espEmt01.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1C60..00F0A320, 4 functions

#include "types.h"

// 00ED1C60  espEmt01::espEmt01  size=28  [class]
undefined4 * __fastcall espEmt01::espEmt01(undefined4 *param_1)

{
  cEspBase::cEspBase_8();
  param_1[0x148] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00ED1D90  espEmt01::vf00  size=30  [class]
undefined4 __thiscall espEmt01::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF6870  espEmt01::vf1C  size=517  [class]
void __thiscall
espEmt01::vf1C(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_74;
  fVar3 = (float)param_5;
  if (param_5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar2 = (float)param_4;
  if (param_4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar1 = *(int *)(param_1 + 0x550);
  local_74 = (fVar3 * *(float *)(param_1 + 0x554)) / fVar2 + *(float *)(param_1 + 0x558);
  if (iVar1 == 0) {
    D3DXMatrixRotationY(param_2,local_74);
  }
  else if (iVar1 == 1) {
    D3DXMatrixRotationZ(param_2,local_74);
  }
  else if (iVar1 == 2) {
    D3DXMatrixRotationX(param_2,local_74);
  }
  else {
    fVar4 = (float10)FUN_00dde300(0,0x3f800000);
    local_70 = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0,0x3f800000);
    local_74 = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0,0x3f800000);
    fVar5 = (float10)2.0;
    fVar6 = (float10)3.1415927410125732;
    local_6c = (float)(fVar4 * fVar5 * fVar6);
    local_68 = (float)((float10)local_74 * fVar5 * fVar6);
    local_64 = (float)(fVar5 * (float10)local_70 * fVar6);
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    param_2[0xf] = 0x3f800000;
    param_2[10] = 0x3f800000;
    param_2[5] = 0x3f800000;
    *param_2 = 0x3f800000;
    if (local_64 != 0.0) {
      D3DXMatrixRotationZ(local_60,local_64);
      D3DXMatrixMultiply(param_2,&local_68,param_2);
    }
    if (local_68 != 0.0) {
      D3DXMatrixRotationY(local_60,local_68);
      D3DXMatrixMultiply(param_2,&local_68,param_2);
    }
    if (local_6c != 0.0) {
      D3DXMatrixRotationX(local_60,local_6c);
      D3DXMatrixMultiply(param_2,&local_68,param_2);
    }
  }
  D3DXMatrixMultiply(param_2,param_2,param_3);
  __security_check_cookie(uStack_20 ^ (uint)&stack0xffffff80);
  return;
}

// 00F0A320  espEmt01::vf04  size=228  [class]
undefined4 __thiscall
espEmt01::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = espEmt00::vf04(param_2,param_3,param_4);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x554) = 0x40c90fdb;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0xe0), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(0xe);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x550) = (int)*psVar1;
        if (psVar1[1] != 0) {
          *(float *)(param_1 + 0x554) = ((float)(int)psVar1[1] * 2.0 * 3.1415927) / 360.0;
        }
        *(float *)(param_1 + 0x558) = ((float)(int)psVar1[2] * 2.0 * 3.1415927) / 360.0;
      }
    }
    if (*(uint *)(param_1 + 0x550) < 4) {
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd718,*(uint *)(param_1 + 0x550));
  }
  return 0;
}

