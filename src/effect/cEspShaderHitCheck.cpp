// src/effect/cEspShaderHitCheck.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5F410..00F8ADF0, 3 functions

#include "mgrr.h"
#include "cEspShaderHitCheck.h"

// 00F5F410  cEspShaderHitCheck::vf08  size=201  [class]
undefined4 __fastcall cEspShaderHitCheck::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderHitCheck");
  uVar2 = Fw::StringCopyCat_2("EspShaderHitCheck");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_WorldMatrix");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_FloorData");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_FloorOffset");
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
              if (iVar3 != 0) {
                (**(code **)(*param_1 + 0xc))();
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F814D0  cEspShaderHitCheck::cEspShaderHitCheck  size=48  [class]
undefined4 * __fastcall cEspShaderHitCheck::cEspShaderHitCheck(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 00F8ADF0  cEspShaderHitCheck::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderHitCheck::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

