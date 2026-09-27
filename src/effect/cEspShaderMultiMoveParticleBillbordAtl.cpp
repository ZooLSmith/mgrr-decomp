// src/effect/cEspShaderMultiMoveParticleBillbordAtl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F637D0..00F8C470, 3 functions

#include "mgrr.h"
#include "cEspShaderMultiMoveParticleBillbordAtl.h"

// 00F637D0  cEspShaderMultiMoveParticleBillbordAtl::vf08  size=357  [class]
undefined4 __fastcall cEspShaderMultiMoveParticleBillbordAtl::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadermultimoveparticlebillbordatl");
  uVar2 = Fw::StringCopyCat_2("espshadermultimoveparticlebillbordatl");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e5698);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e56d8);
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
        }
      }
    }
  }
  return 0;
}

// 00F8C450  cEspShaderMultiMoveParticleBillbordAtl::cEspShaderMultiMoveParticleBillbordAtl  size=18  [class]
undefined4 * __fastcall
cEspShaderMultiMoveParticleBillbordAtl::cEspShaderMultiMoveParticleBillbordAtl(undefined4 *param_1)

{
  cEspShaderMultiMoveParticleBillbord::cEspShaderMultiMoveParticleBillbord();
  *param_1 = vftable;
  return param_1;
}

// 00F8C470  cEspShaderMultiMoveParticleBillbordAtl::vf00  size=36  [class]
undefined4 * __thiscall
cEspShaderMultiMoveParticleBillbordAtl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

