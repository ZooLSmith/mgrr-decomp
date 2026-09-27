// src/effect/cEspShaderShimmerBlur.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5D160..00F8E360, 4 functions

#include "mgrr.h"
#include "cEspShaderShimmerBlur.h"

// 00F5D160  cEspShaderShimmerBlur::vf0C  size=1  [class]
void cEspShaderShimmerBlur::vf0C(void)

{
  return;
}

// 00F699E0  cEspShaderShimmerBlur::vf08  size=339  [class]
undefined4 __fastcall cEspShaderShimmerBlur::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("espshadershimmerblur");
  uVar3 = Fw::StringCopyCat_2("espshadershimmerblur");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
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
          iVar4 = FUN_00fa39a0(param_1 + 0x19,PTR_s_g_Sampler1_0188ff20);
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)((int)param_1 + 0x6f) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = param_1[0x1b];
            param_1[0x1b] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            param_1[0x1b] = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
            iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
            if (iVar4 != 0) {
              iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_Blur");
              if (iVar4 != 0) {
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

// 00F83360  cEspShaderShimmerBlur::cEspShaderShimmerBlur  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00f833b5) */
/* WARNING: Removing unreachable block (ram,0x00f83428) */

undefined4 * __fastcall cEspShaderShimmerBlur::cEspShaderShimmerBlur(undefined4 *param_1)

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

// 00F8E360  cEspShaderShimmerBlur::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderShimmerBlur::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

