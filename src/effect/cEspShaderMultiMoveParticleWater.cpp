// src/effect/cEspShaderMultiMoveParticleWater.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C9C0..00F8BB60, 4 functions

#include "mgrr.h"
#include "cEspShaderMultiMoveParticleWater.h"

// 00F5C9C0  cEspShaderMultiMoveParticleWater::vf0C  size=1  [class]
void cEspShaderMultiMoveParticleWater::vf0C(void)

{
  return;
}

// 00F61A50  cEspShaderMultiMoveParticleWater::vf08  size=343  [class]
undefined4 __fastcall cEspShaderMultiMoveParticleWater::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[9] = 1;
  uVar1 = Fw::StringCopyCat("espshadermultimoveparticlewater");
  uVar2 = Fw::StringCopyCat_2("espshadermultimoveparticlewater");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e4854);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e4894);
        return 0;
      }
      iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Param");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_ColParam");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_ofs_pos");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_spd");
            if (iVar3 != 0) {
              iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_r_spd");
              if (iVar3 != 0) {
                iVar3 = FUN_00f9e6d0(param_1 + 0x22,"g_sp_color");
                if (iVar3 != 0) {
                  iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Sampler0",0xffffffff,2,1);
                  if (iVar3 != 0) {
                    iVar3 = FUN_009e01e0(param_1 + 0x25,"g_Sampler1",0xffffffff,2,3);
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
  return 0;
}

// 00F8BA10  cEspShaderMultiMoveParticleWater::cEspShaderMultiMoveParticleWater  size=332  [class]
/* WARNING: Removing unreachable block (ram,0x00f8ba96) */
/* WARNING: Removing unreachable block (ram,0x00f8bb13) */

undefined4 * __fastcall
cEspShaderMultiMoveParticleWater::cEspShaderMultiMoveParticleWater(undefined4 *param_1)

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
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1000111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00F8BB60  cEspShaderMultiMoveParticleWater::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMultiMoveParticleWater::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

