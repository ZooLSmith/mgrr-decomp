// src/graphics/cModelShader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FEA0..00F94610, 4 functions

#include "mgrr.h"
#include "cModelShader.h"

// 00F8FEA0  cModelShader::~cModelShader  size=11  [class]
void __fastcall cModelShader::~cModelShader(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00F930A0  cModelShader::vf04  size=47  [class]
void __fastcall cModelShader::vf04(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      puVar1[-2] = 0xffffffff;
      puVar1[-1] = 0xffffffff;
      *puVar1 = 0x1111111;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (uVar2 < *(uint *)(param_1 + 0xfc));
  }
  Hw::cShader::vf04();
  return;
}

// 00F931D0  cModelShader::cModelShader  size=195  [class]
/* WARNING: Removing unreachable block (ram,0x00f93222) */

undefined4 * __fastcall cModelShader::cModelShader(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  puVar1 = param_1 + 10;
  local_4 = 0xf;
  do {
    puVar1[2] = 0x1000000;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0x1000000;
    puVar1[2] = 0x1111111;
    puVar1 = puVar1 + 3;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return param_1;
}

// 00F94610  cModelShader::vf00  size=36  [class]
undefined4 * __thiscall cModelShader::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

