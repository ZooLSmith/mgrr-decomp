// src/effect/cEspShaderSoftPT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C500..00F8AEB0, 5 functions

#include "mgrr.h"
#include "cEspShaderSoftPT.h"

// 00F5C500  cEspShaderSoftPT::vf0C  size=1  [class]
void cEspShaderSoftPT::vf0C(void)

{
  return;
}

// 00F5F6C0  cEspShaderSoftPT::vf08  size=315  [class]
/* WARNING: Removing unreachable block (ram,0x00f5f7ce) */

undefined4 __fastcall cEspShaderSoftPT::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderSoftPT");
  uVar3 = Fw::StringCopyCat_2("EspShaderSoftPT");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
      (iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)))) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_009e01e0(param_1 + 0x16,"g_BgTexture0",1,1,3);
    if (iVar4 != 0) {
      uVar5 = param_1[0x18];
      param_1[0x18] = uVar5 & 0xe1ffffff | 0x1000000;
      param_1[0x18] = uVar5 & 0xe1fff000 | 0x1000101;
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
  }
  return 0;
}

// 00F5F800  cEspShaderSoftPT::vf10  size=60  [class]
undefined4 __thiscall cEspShaderSoftPT::vf10(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       (param_2 | param_2 << 4) << 0xc | *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0x14;
  return 1;
}

// 00F81640  cEspShaderSoftPT::cEspShaderSoftPT  size=257  [class]
/* WARNING: Removing unreachable block (ram,0x00f8168c) */
/* WARNING: Removing unreachable block (ram,0x00f816ff) */

undefined4 * __fastcall cEspShaderSoftPT::cEspShaderSoftPT(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00F8AEB0  cEspShaderSoftPT::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderSoftPT::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

