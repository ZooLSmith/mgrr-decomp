// src/camera/cCameraShake.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D9FC00..015F0BC0, 5 functions

#include "mgrr.h"
#include "cCameraShake.h"

// 00D9FC00  cCameraShake::vf00  size=31  [class]
undefined4 * __thiscall cCameraShake::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA3A90  cCameraShake::vf04  size=14  [class]
void __fastcall cCameraShake::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

// 00DA3AA0  cCameraShake::vf08  size=1  [class]
void cCameraShake::vf08(void)

{
  return;
}

// 00DA3AB0  cCameraShake::vf0C  size=39  [class]
void cCameraShake::vf0C(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  return;
}

// 015F0BC0  cCameraShake::cCameraShake  size=33  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cCameraShake::cCameraShake(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  _DAT_01dc63a0 = vftable;
  puVar1 = (undefined4 *)&DAT_01dc63a0;
  iVar2 = 0xf;
  do {
    puVar1 = puVar1 + -0x11;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  return;
}

