// src/effect/cEspShaderMultiParticleBillbord.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F63B10..00F8C780, 3 functions

#include "types.h"

// 00F63B10  cEspShaderMultiParticleBillbord::vf08  size=384  [class]
undefined4 __fastcall cEspShaderMultiParticleBillbord::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadermultiparticlebillbord");
  uVar2 = Fw::StringCopyCat_2("espshadermultiparticlebillbord");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e58c4);
    }
    else {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016e5904);
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

// 00F8C6F0  cEspShaderMultiParticleBillbord::cEspShaderMultiParticleBillbord  size=144  [class]
undefined4 * __fastcall
cEspShaderMultiParticleBillbord::cEspShaderMultiParticleBillbord(undefined4 *param_1)

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
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  return param_1;
}

// 00F8C780  cEspShaderMultiParticleBillbord::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderMultiParticleBillbord::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

