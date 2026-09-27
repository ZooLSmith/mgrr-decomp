// src/effect/cEspShaderScreenBlur.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5CD50..00F8C940, 4 functions

#include "mgrr.h"
#include "cEspShaderScreenBlur.h"

// 00F5CD50  cEspShaderScreenBlur::vf0C  size=1  [class]
void cEspShaderScreenBlur::vf0C(void)

{
  return;
}

// 00F64090  cEspShaderScreenBlur::vf08  size=177  [class]
undefined4 __fastcall cEspShaderScreenBlur::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderScreenBlur");
  uVar2 = Fw::StringCopyCat_2("EspShaderScreenBlur");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_Blur");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x19,"g_BgTexture0",1,2,3);
            if (iVar3 != 0) {
              (**(code **)(*param_1 + 0xc))();
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F82680  cEspShaderScreenBlur::cEspShaderScreenBlur  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00f826d5) */
/* WARNING: Removing unreachable block (ram,0x00f82748) */

undefined4 * __fastcall cEspShaderScreenBlur::cEspShaderScreenBlur(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00F8C940  cEspShaderScreenBlur::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderScreenBlur::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

