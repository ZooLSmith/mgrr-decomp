// src/effect/cEspShaderMultiMoveLine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5E440..00F8BC60, 3 functions

#include "mgrr.h"
#include "cEspShaderMultiMoveLine.h"

// 00F5E440  cEspShaderMultiMoveLine::vf08  size=273  [class]
undefined4 __fastcall cEspShaderMultiMoveLine::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadermultimoveline");
  uVar2 = Fw::StringCopyCat_2("espshadermultimoveline");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e4a0c);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e4a4c);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Param");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_ColParam");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_r_pos");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_spd");
            if (iVar3 != 0) {
              iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_r_spd");
              if (iVar3 != 0) {
                iVar3 = FUN_00f9e6d0(param_1 + 0x22,"g_GravVec");
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
  }
  return 0;
}

// 00F8BC00  cEspShaderMultiMoveLine::cEspShaderMultiMoveLine  size=90  [class]
undefined4 * __fastcall cEspShaderMultiMoveLine::cEspShaderMultiMoveLine(undefined4 *param_1)

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
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  return param_1;
}

// 00F8BC60  cEspShaderMultiMoveLine::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMultiMoveLine::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

