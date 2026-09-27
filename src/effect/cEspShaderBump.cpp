// src/effect/cEspShaderBump.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C2B0..00F8ADC0, 4 functions

#include "mgrr.h"
#include "cEspShaderBump.h"

// 00F5C2B0  cEspShaderBump::vf0C  size=1  [class]
void cEspShaderBump::vf0C(void)

{
  return;
}

// 00F5F2F0  cEspShaderBump::vf08  size=287  [class]
undefined4 __fastcall cEspShaderBump::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderBump");
  uVar2 = Fw::StringCopyCat_2("EspShaderBump");
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
            iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
            if (iVar3 != 0) {
              iVar3 = FUN_00f9e6d0(param_1 + 0x1f,"g_Rate");
              if (iVar3 != 0) {
                iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
                if (iVar3 != 0) {
                  iVar3 = FUN_009e01e0(param_1 + 0x22,"g_Texture1",1,2,1);
                  if (iVar3 != 0) {
                    iVar3 = FUN_009e01e0(param_1 + 0x25,"g_Texture2",2,2,3);
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

// 00F81290  cEspShaderBump::cEspShaderBump  size=564  [class]
/* WARNING: Removing unreachable block (ram,0x00f81304) */
/* WARNING: Removing unreachable block (ram,0x00f81381) */
/* WARNING: Removing unreachable block (ram,0x00f813f8) */
/* WARNING: Removing unreachable block (ram,0x00f8147b) */

undefined4 * __fastcall cEspShaderBump::cEspShaderBump(undefined4 *param_1)

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
  return param_1;
}

// 00F8ADC0  cEspShaderBump::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderBump::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

