// src/effect/cEspShaderLine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C430..00F8AE50, 4 functions

#include "types.h"

// 00F5C430  cEspShaderLine::vf04  size=17  [class]
void __fastcall cEspShaderLine::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00F5E2F0  cEspShaderLine::vf08  size=77  [class]
bool __fastcall cEspShaderLine::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderLine");
  uVar2 = Fw::StringCopyCat_2("EspShaderLine");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = FUN_00f9e6d0(param_1 + 0x4c,"g_WorldViewProjMatrix");
  return iVar3 != 0;
}

// 00F81520  cEspShaderLine::cEspShaderLine  size=30  [class]
undefined4 * __fastcall cEspShaderLine::cEspShaderLine(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  return param_1;
}

// 00F8AE50  cEspShaderLine::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderLine::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

