// src/effect/cEspShaderMask2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5EC90..00F8AC90, 3 functions

#include "mgrr.h"
#include "cEspShaderMask2.h"

// 00F5EC90  cEspShaderMask2::vf08  size=271  [class]
undefined4 __fastcall cEspShaderMask2::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderMask2");
  uVar3 = Fw::StringCopyCat_2("EspShaderMask2");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c);
      if (iVar4 != 0) {
        uVar5 = 2;
        iVar4 = 2;
        if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
          uVar5 = 3;
          iVar4 = 3;
        }
        uVar1 = param_1[0x12];
        param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
        param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
        iVar4 = FUN_00fa39a0(param_1 + 0x13,PTR_s_g_Sampler1_0188ff20);
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)((int)param_1 + 0x57) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = param_1[0x15];
          param_1[0x15] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          param_1[0x15] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
          (**(code **)(*param_1 + 0xc))();
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F81150  cEspShaderMask2::cEspShaderMask2  size=18  [class]
undefined4 * __fastcall cEspShaderMask2::cEspShaderMask2(undefined4 *param_1)

{
  cEspShaderMask::cEspShaderMask();
  *param_1 = vftable;
  return param_1;
}

// 00F8AC90  cEspShaderMask2::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMask2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

