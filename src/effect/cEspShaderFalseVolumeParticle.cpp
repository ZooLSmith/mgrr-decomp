// src/effect/cEspShaderFalseVolumeParticle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5E340..00F8ED70, 3 functions

#include "mgrr.h"
#include "cEspShaderFalseVolumeParticle.h"

// 00F5E340  cEspShaderFalseVolumeParticle::vf08  size=256  [class]
undefined4 __fastcall cEspShaderFalseVolumeParticle::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshaderfalsevolumeparticle");
  uVar2 = Fw::StringCopyCat_2("espshaderfalsevolumeparticle");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_WorldMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e43f8);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_LightDirection");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e443c);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e447c);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_Ambient");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e44ac);
        return 0;
      }
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
    FUN_00dd5650(&DAT_016e43bc);
  }
  return 0;
}

// 00F8ED40  cEspShaderFalseVolumeParticle::cEspShaderFalseVolumeParticle  size=48  [class]
undefined4 * __fastcall
cEspShaderFalseVolumeParticle::cEspShaderFalseVolumeParticle(undefined4 *param_1)

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
  return param_1;
}

// 00F8ED70  cEspShaderFalseVolumeParticle::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderFalseVolumeParticle::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

