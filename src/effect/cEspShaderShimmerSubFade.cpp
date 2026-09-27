// src/effect/cEspShaderShimmerSubFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69CF0..00F8E390, 3 functions

#include "mgrr.h"
#include "cEspShaderShimmerSubFade.h"

// 00F69CF0  cEspShaderShimmerSubFade::vf08  size=243  [class]
undefined4 __fastcall cEspShaderShimmerSubFade::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadershimmersubfade");
  uVar2 = Fw::StringCopyCat_2("espshadershimmersubfade");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_SubFadeParameter");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x22,"g_BgTexture0",1,2,3);
              if (iVar3 != 0) {
                iVar3 = FUN_009e01e0(param_1 + 0x25,"g_MaskTexture0",2,2,1);
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

// 00F83580  cEspShaderShimmerSubFade::cEspShaderShimmerSubFade  size=539  [class]
/* WARNING: Removing unreachable block (ram,0x00f835d9) */
/* WARNING: Removing unreachable block (ram,0x00f83656) */
/* WARNING: Removing unreachable block (ram,0x00f836cd) */
/* WARNING: Removing unreachable block (ram,0x00f83756) */

undefined4 * __fastcall cEspShaderShimmerSubFade::cEspShaderShimmerSubFade(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderShimmer::cEspShaderShimmer();
  *param_1 = vftable;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1000111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00F8E390  cEspShaderShimmerSubFade::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderShimmerSubFade::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

