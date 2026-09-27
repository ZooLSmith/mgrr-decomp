// src/effect/cEspShaderMultiParticle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F615B0..00F8B770, 3 functions

#include "mgrr.h"
#include "cEspShaderMultiParticle.h"

// 00F615B0  cEspShaderMultiParticle::vf08  size=259  [class]
undefined4 __fastcall cEspShaderMultiParticle::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[9] = 1;
  uVar1 = Fw::StringCopyCat("espshadermultiparticle");
  uVar2 = Fw::StringCopyCat_2("espshadermultiparticle");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e4500);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e4540);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Param");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_ofs_pos");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_spd");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_r_spd");
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Sampler0",0xffffffff,2,1);
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

// 00F8B730  cEspShaderMultiParticle::cEspShaderMultiParticle  size=57  [class]
undefined4 * __fastcall cEspShaderMultiParticle::cEspShaderMultiParticle(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
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
  return param_1;
}

// 00F8B770  cEspShaderMultiParticle::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMultiParticle::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

