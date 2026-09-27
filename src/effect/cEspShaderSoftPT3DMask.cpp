// src/effect/cEspShaderSoftPT3DMask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C5D0..00F8B080, 5 functions

#include "mgrr.h"
#include "cEspShaderSoftPT3DMask.h"

// 00F5C5D0  cEspShaderSoftPT3DMask::vf0C  size=1  [class]
void cEspShaderSoftPT3DMask::vf0C(void)

{
  return;
}

// 00F5FC40  cEspShaderSoftPT3DMask::vf08  size=345  [class]
/* WARNING: Removing unreachable block (ram,0x00f5fd6c) */

undefined4 __fastcall cEspShaderSoftPT3DMask::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderSoftPT3DMask");
  uVar3 = Fw::StringCopyCat_2("EspShaderSoftPT3DMask");
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
    iVar4 = FUN_009e01e0(param_1 + 0x16,"g_Sampler2",2,1,3);
    if ((iVar4 != 0) && (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_Sampler1",1,2,1), iVar4 != 0)) {
      uVar5 = param_1[0x18];
      param_1[0x18] = uVar5 & 0xe1ffffff | 0x1000000;
      param_1[0x18] = uVar5 & 0xe1fff000 | 0x1000101;
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
  }
  return 0;
}

// 00F5FDA0  cEspShaderSoftPT3DMask::vf10  size=92  [class]
undefined4 __thiscall cEspShaderSoftPT3DMask::vf10(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  *(uint *)(param_1 + 0x6c) =
       *(uint *)(param_1 + 0x6c) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  return 1;
}

// 00F8AF90  cEspShaderSoftPT3DMask::cEspShaderSoftPT3DMask  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x00f8afca) */
/* WARNING: Removing unreachable block (ram,0x00f8b03c) */

undefined4 * __fastcall cEspShaderSoftPT3DMask::cEspShaderSoftPT3DMask(undefined4 *param_1)

{
  cEspShaderSoftPT::cEspShaderSoftPT();
  *param_1 = vftable;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00F8B080  cEspShaderSoftPT3DMask::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderSoftPT3DMask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

