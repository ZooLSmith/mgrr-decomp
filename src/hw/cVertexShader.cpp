// src/hw/cVertexShader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9C190..015F47E0, 32 functions

#include "types.h"

// 00F9C190  Hw::cVertexShader::cVertexShader  size=48  [class]
void __fastcall Hw::cVertexShader::cVertexShader(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  param_1[1] = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = cPixelShader::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  return;
}

// 00FA0180  Hw::cVertexShader::cVertexShader_8  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_8(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA04C0  Hw::cVertexShader::cVertexShader_9  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_9(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA04E0  FUN_00fa04e0  size=135  [between]
undefined4 __thiscall FUN_00fa04e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00f9ce80(param_1 + 4,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00f9cf40(param_1 + 0x14,param_3,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA05B0  FUN_00fa05b0  size=115  [between]
void __thiscall FUN_00fa05b0(int param_1,uint param_2)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  local_c = (float)(param_2 >> 8 & 0xff) / 255.0;
  local_8 = (float)(param_2 & 0xff) / 255.0;
  local_4 = (float)(param_2 >> 0x18) / 255.0;
  FUN_00f9ea50(param_1 + 0x40,&local_10,4);
  return;
}

// 00FA06A0  Hw::cVertexShader::cVertexShader_10  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_10(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA1DA0  Hw::cVertexShader::cVertexShader_4  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_4(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA1EA0  Hw::cVertexShader::cVertexShader_5  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_5(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA1EC0  thunk_FUN_00fa04e0  size=5  [between]
undefined4 __thiscall thunk_FUN_00fa04e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00f9ce80(param_1 + 4,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00f9cf40(param_1 + 0x14,param_3,*(undefined4 *)(param_1 + 0x24));
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
        if (iVar1 != 0) {
          iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
          if (iVar1 != 0) {
            iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FA1ED0  FUN_00fa1ed0  size=20  [between]
void __thiscall FUN_00fa1ed0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FA1EF0  FUN_00fa1ef0  size=20  [between]
void __thiscall FUN_00fa1ef0(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x34,param_2);
  return;
}

// 00FA1F10  thunk_FUN_00fa05b0  size=5  [between]
void __thiscall thunk_FUN_00fa05b0(int param_1,uint param_2)

{
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_10 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  fStack_c = (float)(param_2 >> 8 & 0xff) / 255.0;
  fStack_8 = (float)(param_2 & 0xff) / 255.0;
  fStack_4 = (float)(param_2 >> 0x18) / 255.0;
  FUN_00f9ea50(param_1 + 0x40,&fStack_10,4);
  return;
}

// 00FA1F40  Hw::cVertexShader::cVertexShader_7  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_7(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA1FF0  Hw::cVertexShader::cVertexShader_6  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_6(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA20B0  Hw::cVertexShader::cVertexShader_2  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_2(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA21D0  Hw::cVertexShader::cVertexShader_3  size=30  [class]
void __fastcall Hw::cVertexShader::cVertexShader_3(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = vftable;
  return;
}

// 00FA21F0  FUN_00fa21f0  size=54  [callgraph]
bool __thiscall FUN_00fa21f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00fa04e0(param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00f9e6d0(param_1 + 0x4c,"g_OutLineColor");
  return iVar1 != 0;
}

// 00FA39F0  Hw::cVertexShader::cVertexShader_12  size=307  [class]
/* WARNING: Removing unreachable block (ram,0x00fa3a72) */
/* WARNING: Removing unreachable block (ram,0x00fa3ae3) */

void __fastcall Hw::cVertexShader::cVertexShader_12(undefined4 *param_1)

{
  param_1[1] = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = cPixelShader::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  *param_1 = cShaderCharacter::vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return;
}

// 00FA3C30  Hw::cVertexShader::cVertexShader_11  size=298  [class]
/* WARNING: Removing unreachable block (ram,0x00fa3ca9) */
/* WARNING: Removing unreachable block (ram,0x00fa3d1a) */

void __fastcall Hw::cVertexShader::cVertexShader_11(undefined4 *param_1)

{
  param_1[1] = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = cPixelShader::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  *param_1 = cShaderPFT::vftable;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1000111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  return;
}

// 00FA3E60  Hw::cVertexShader::cVertexShader_14  size=189  [class]
/* WARNING: Removing unreachable block (ram,0x00fa3eeb) */

void __fastcall Hw::cVertexShader::cVertexShader_14(undefined4 *param_1)

{
  int local_4;
  
  param_1[1] = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = cPixelShader::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  *param_1 = cShaderPFTyuv::vftable;
  param_1 = param_1 + 0x13;
  local_4 = 2;
  do {
    param_1[2] = 0x1000000;
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0x1000000;
    param_1[2] = 0x1111111;
    param_1 = param_1 + 3;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  return;
}

// 00FA4150  Hw::cVertexShader::cVertexShader_13  size=189  [class]
/* WARNING: Removing unreachable block (ram,0x00fa41db) */

void __fastcall Hw::cVertexShader::cVertexShader_13(undefined4 *param_1)

{
  int local_4;
  
  param_1[1] = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = cPixelShader::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  *param_1 = cShaderPFTyuva::vftable;
  param_1 = param_1 + 0x13;
  local_4 = 3;
  do {
    param_1[2] = 0x1000000;
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0x1000000;
    param_1[2] = 0x1111111;
    param_1 = param_1 + 3;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  return;
}

// 00FA8BB0  Hw::cVertexShader::vf00  size=31  [class]
undefined4 * __thiscall Hw::cVertexShader::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F4640  Hw::cVertexShader::cVertexShader_15  size=41  [class]
void Hw::cVertexShader::cVertexShader_15(void)

{
  PTR_vftable_018da5e8 = (undefined *)cShader::vftable;
  cShader::vf04();
  PTR_vftable_018da5fc = (undefined *)cPixelShader::vftable;
  PTR_vftable_018da5ec = (undefined *)vftable;
  return;
}

// 015F4670  FUN_015f4670  size=20  [between]
void FUN_015f4670(void)

{
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

// 015F4690  Hw::cVertexShader::cVertexShader_16  size=41  [class]
void Hw::cVertexShader::cVertexShader_16(void)

{
  PTR_vftable_018da4f0 = (undefined *)cShader::vftable;
  cShader::vf04();
  PTR_vftable_018da504 = (undefined *)cPixelShader::vftable;
  PTR_vftable_018da4f4 = (undefined *)vftable;
  return;
}

// 015F46C0  Hw::cVertexShader::cVertexShader_17  size=41  [class]
void Hw::cVertexShader::cVertexShader_17(void)

{
  PTR_vftable_018da540 = (undefined *)cShader::vftable;
  cShader::vf04();
  PTR_vftable_018da554 = (undefined *)cPixelShader::vftable;
  PTR_vftable_018da544 = (undefined *)vftable;
  return;
}

// 015F46F0  Hw::cVertexShader::cVertexShader_18  size=41  [class]
void Hw::cVertexShader::cVertexShader_18(void)

{
  PTR_vftable_018da590 = (undefined *)cShader::vftable;
  cShader::vf04();
  PTR_vftable_018da5a4 = (undefined *)cPixelShader::vftable;
  PTR_vftable_018da594 = (undefined *)vftable;
  return;
}

// 015F4720  Hw::cVertexShader::cVertexShader_19  size=41  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cVertexShader::cVertexShader_19(void)

{
  _DAT_01f20760 = cShader::vftable;
  cShader::vf04();
  _DAT_01f20774 = cPixelShader::vftable;
  _DAT_01f20764 = vftable;
  return;
}

// 015F4750  Hw::cVertexShader::cVertexShader_20  size=41  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cVertexShader::cVertexShader_20(void)

{
  _DAT_01f207b8 = cShader::vftable;
  cShader::vf04();
  _DAT_01f207cc = cPixelShader::vftable;
  _DAT_01f207bc = vftable;
  return;
}

// 015F4780  Hw::cVertexShader::cVertexShader_21  size=41  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cVertexShader::cVertexShader_21(void)

{
  _DAT_01f20810 = cShader::vftable;
  cShader::vf04();
  _DAT_01f20824 = cPixelShader::vftable;
  _DAT_01f20814 = vftable;
  return;
}

// 015F47B0  Hw::cVertexShader::cVertexShader_22  size=41  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cVertexShader::cVertexShader_22(void)

{
  _DAT_01f20880 = cShader::vftable;
  cShader::vf04();
  _DAT_01f20894 = cPixelShader::vftable;
  _DAT_01f20884 = vftable;
  return;
}

// 015F47E0  Hw::cVertexShader::cVertexShader_23  size=41  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cVertexShader::cVertexShader_23(void)

{
  _DAT_01f20900 = cShader::vftable;
  cShader::vf04();
  _DAT_01f20914 = cPixelShader::vftable;
  _DAT_01f20904 = vftable;
  return;
}

