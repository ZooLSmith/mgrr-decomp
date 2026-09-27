// src/effect/cEspShaderWaterWave.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C800..00F8B700, 4 functions

#include "mgrr.h"
#include "cEspShaderWaterWave.h"

// 00F5C800  cEspShaderWaterWave::vf0C  size=1  [class]
void cEspShaderWaterWave::vf0C(void)

{
  return;
}

// 00F612E0  cEspShaderWaterWave::vf08  size=356  [class]
undefined4 __fastcall cEspShaderWaterWave::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = Fw::StringCopyCat("EspShaderWaterWave");
  uVar2 = Fw::StringCopyCat_2("EspShaderWaterWave");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_WorldMatrix_vtx");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_WorldMatrix_pix");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x1c,"g_CamPos");
          if (iVar3 != 0) {
            iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_Rate");
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Sampler[0]",0,2,1);
              if (iVar3 != 0) {
                iVar3 = FUN_009e01e0(param_1 + 0x22,"g_Sampler[1]",1,2,1);
                if (iVar3 != 0) {
                  iVar3 = FUN_009e01e0(param_1 + 0x25,"g_Sampler[2]",2,2,3);
                  if (iVar3 != 0) {
                    iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler2v");
                    if (iVar3 != 0) {
                      uVar4 = 2;
                      iVar3 = 2;
                      if ((*(byte *)((int)param_1 + 0xab) & 0x1f) != 1) {
                        uVar4 = 3;
                        iVar3 = 3;
                      }
                      param_1[0x2a] = iVar3 << 8 | param_1[0x2a] & 0xfffff020U | uVar4 | 0x20;
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

// 00F81DB0  cEspShaderWaterWave::cEspShaderWaterWave  size=814  [class]
/* WARNING: Removing unreachable block (ram,0x00f81e24) */
/* WARNING: Removing unreachable block (ram,0x00f81ea1) */
/* WARNING: Removing unreachable block (ram,0x00f82012) */
/* WARNING: Removing unreachable block (ram,0x00f81f18) */
/* WARNING: Removing unreachable block (ram,0x00f81f9b) */
/* WARNING: Removing unreachable block (ram,0x00f82095) */

undefined4 * __fastcall cEspShaderWaterWave::cEspShaderWaterWave(undefined4 *param_1)

{
  uint uVar1;
  
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
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  return param_1;
}

// 00F8B700  cEspShaderWaterWave::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderWaterWave::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

