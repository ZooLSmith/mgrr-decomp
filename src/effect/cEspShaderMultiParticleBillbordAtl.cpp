// src/effect/cEspShaderMultiParticleBillbordAtl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F63C90..00F8C7D0, 3 functions

#include "mgrr.h"
#include "cEspShaderMultiParticleBillbordAtl.h"

// 00F63C90  cEspShaderMultiParticleBillbordAtl::vf08  size=384  [class]
undefined4 __fastcall cEspShaderMultiParticleBillbordAtl::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadermultiparticlebillbordatl");
  uVar2 = Fw::StringCopyCat_2("espshadermultiparticlebillbordatl");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e59e8);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e5a28);
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
              iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_alpha_param");
              if (iVar3 != 0) {
                iVar3 = FUN_00f9e6d0(param_1 + 0x22,"g_z_rot_param");
                if (iVar3 != 0) {
                  iVar3 = FUN_00f9e6d0(param_1 + 0x25,"g_sin_dist_param");
                  if (iVar3 != 0) {
                    iVar3 = FUN_00f9e6d0(param_1 + 0x28,"g_sin_time_param");
                    if (iVar3 != 0) {
                      iVar3 = FUN_00f9e6d0(param_1 + 0x2b,"g_RotMatrix");
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
  }
  return 0;
}

// 00F8C7B0  cEspShaderMultiParticleBillbordAtl::cEspShaderMultiParticleBillbordAtl  size=18  [class]
undefined4 * __fastcall
cEspShaderMultiParticleBillbordAtl::cEspShaderMultiParticleBillbordAtl(undefined4 *param_1)

{
  cEspShaderMultiParticleBillbord::cEspShaderMultiParticleBillbord();
  *param_1 = vftable;
  return param_1;
}

// 00F8C7D0  cEspShaderMultiParticleBillbordAtl::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMultiParticleBillbordAtl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

