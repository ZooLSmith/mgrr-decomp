// src/effect/EspShaderMultiMoveParticleBillbord_Shimmer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F63940..00F8C6C0, 3 functions

#include "mgrr.h"
#include "EspShaderMultiMoveParticleBillbord_Shimmer.h"

// 00F63940  EspShaderMultiMoveParticleBillbord_Shimmer::vf08  size=450  [class]
undefined4 __fastcall EspShaderMultiMoveParticleBillbord_Shimmer::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadermultimoveparticlebillbord_Shimmer");
  uVar2 = Fw::StringCopyCat_2("espshadermultimoveparticlebillbord_Shimmer");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e57a4);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e57e4);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Param");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_alpha_param");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_r_pos");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_spd");
            if (iVar3 != 0) {
              iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_r_spd");
              if (iVar3 != 0) {
                iVar3 = FUN_00f9e6d0(param_1 + 0x25,"g_z_rot_param");
                if (iVar3 != 0) {
                  iVar3 = FUN_00f9e6d0(param_1 + 0x28,"g_GravVec");
                  if (iVar3 != 0) {
                    iVar3 = FUN_00f9e6d0(param_1 + 0x22,"g_RotMatrix");
                    if (iVar3 != 0) {
                      iVar3 = FUN_00f9e6d0(param_1 + 0x2b,"g_Rate");
                      if (iVar3 != 0) {
                        iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Sampler0",0,2,1);
                        if (iVar3 != 0) {
                          iVar3 = FUN_009e01e0(param_1 + 0x2e,"g_Sampler1",1,2,3);
                          if (iVar3 != 0) {
                            iVar3 = FUN_009e01e0(param_1 + 0x31,"g_Sampler2",2,2,1);
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
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F8C4A0  EspShaderMultiMoveParticleBillbord_Shimmer::EspShaderMultiMoveParticleBillbord_Shimmer  size=533  [class]
/* WARNING: Removing unreachable block (ram,0x00f8c4f3) */
/* WARNING: Removing unreachable block (ram,0x00f8c570) */
/* WARNING: Removing unreachable block (ram,0x00f8c5e7) */
/* WARNING: Removing unreachable block (ram,0x00f8c670) */

undefined4 * __fastcall
EspShaderMultiMoveParticleBillbord_Shimmer::EspShaderMultiMoveParticleBillbord_Shimmer
          (undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderMultiMoveParticleBillbord::cEspShaderMultiMoveParticleBillbord();
  *param_1 = vftable;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x30] = 0x1000000;
  param_1[0x30] = 0x1000111;
  param_1[0x30] = 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0x1000000;
  param_1[0x30] = 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  return param_1;
}

// 00F8C6C0  EspShaderMultiMoveParticleBillbord_Shimmer::vf00  size=36  [class]
undefined4 * __thiscall
EspShaderMultiMoveParticleBillbord_Shimmer::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

