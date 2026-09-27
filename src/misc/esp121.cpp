// src/misc/esp121.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0700..009E2E50, 5 functions

#include "types.h"

// 009D0700  esp121::vf04  size=140  [class]
void __thiscall esp121::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return;
  }
  FUN_00efcb90();
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined1 *)(param_1 + 0x470) = 0;
  if ((*(byte *)(param_1 + 0x3c) & 0x80) != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100400;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40000000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  *(undefined1 *)(param_1 + 0x440) = 1;
  return;
}

// 009D0790  esp121::vf10  size=44  [class]
void __fastcall esp121::vf10(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar1 = *(undefined2 *)(param_1 + 0x4e);
  *(undefined2 *)(param_1 + 0x4e) = 0xfffa;
  *(undefined4 *)(param_1 + 0x50) = 0;
  esp108::vf10();
  *(undefined2 *)(param_1 + 0x4e) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return;
}

// 009D4410  esp121::esp121  size=18  [class]
undefined4 * __fastcall esp121::esp121(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF630  esp121::vf00  size=30  [class]
undefined4 __thiscall esp121::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E2E50  esp121::vf08  size=236  [class]
void __fastcall esp121::vf08(int param_1)

{
  float *pfVar1;
  undefined1 local_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  pfVar1 = (float *)(param_1 + 0x180);
  *pfVar1 = *(float *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  esp39::vf08();
  *(float *)(param_1 + 0x450) = *pfVar1;
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  FID_conflict__memcpy(local_50,&DAT_01ede0b0,0x40);
  D3DXVec3TransformNormal(pfVar1,param_1 + 400,local_50);
  *pfVar1 = *pfVar1 + fStack_2c;
  *(float *)(param_1 + 0x184) = fStack_28 + *(float *)(param_1 + 0x184);
  *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) + fStack_24;
  *pfVar1 = *pfVar1 * 10.0;
  *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x184) * 10.0;
  *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) * 10.0;
  *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) * 10.0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x184) * -1.0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}

