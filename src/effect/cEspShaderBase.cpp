// src/effect/cEspShaderBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C100..015F40F0, 203 functions

#include "mgrr.h"
#include "cEspShaderBase.h"

// 00F5C100  cEspShaderBase::cEspShaderBase_2  size=11  [class]
void __fastcall cEspShaderBase::cEspShaderBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00F5D070  cEspShaderBase::cEspShaderBase  size=11  [class]
void __fastcall cEspShaderBase::cEspShaderBase(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00F5E560  cEspShaderBase::vf08  size=199  [class]
undefined4 __fastcall cEspShaderBase::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderBase");
  uVar3 = Fw::StringCopyCat_2("EspShaderBase");
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
          (**(code **)(*param_1 + 0xc))();
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F807D0  cEspShaderBase::cEspShaderBase_4  size=88  [class]
void __fastcall cEspShaderBase::cEspShaderBase_4(undefined4 *param_1)

{
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
  param_1[0x1e] = 0x1111111;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1111111;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1111111;
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00F80E00  cEspShaderBase::cEspShaderBase_3  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00f80e55) */
/* WARNING: Removing unreachable block (ram,0x00f80ec8) */

undefined4 * __fastcall cEspShaderBase::cEspShaderBase_3(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00F867A0  cEspShaderBase::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F2370  cEspShaderBase::cEspShaderBase_5  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_5(void)

{
  _DAT_01ee7a00 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2390  cEspShaderBase::cEspShaderBase_6  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_6(void)

{
  _DAT_01ee7a50 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F23B0  cEspShaderBase::cEspShaderBase_7  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_7(void)

{
  _DAT_01ee7aa0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F23D0  cEspShaderBase::cEspShaderBase_8  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_8(void)

{
  _DAT_01ee7af8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F23F0  cEspShaderBase::cEspShaderBase_9  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_9(void)

{
  _DAT_01ee7b68 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2410  cEspShaderBase::cEspShaderBase_10  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_10(void)

{
  _DAT_01ee7bc0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2430  cEspShaderBase::cEspShaderBase_11  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_11(void)

{
  _DAT_01ee7c18 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2450  cEspShaderBase::cEspShaderBase_12  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_12(void)

{
  _DAT_01ee7c70 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2470  cEspShaderBase::cEspShaderBase_13  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_13(void)

{
  _DAT_01ee7ce0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2490  cEspShaderBase::cEspShaderBase_14  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_14(void)

{
  _DAT_01ee7d50 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F24B0  cEspShaderBase::cEspShaderBase_15  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_15(void)

{
  _DAT_01ee7df0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F24D0  cEspShaderBase::cEspShaderBase_16  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_16(void)

{
  _DAT_01ee7e60 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F24F0  cEspShaderBase::cEspShaderBase_17  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_17(void)

{
  _DAT_01ee7eb0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2510  cEspShaderBase::cEspShaderBase_18  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_18(void)

{
  _DAT_01ee7f08 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2530  cEspShaderBase::cEspShaderBase_19  size=20  [class]
void cEspShaderBase::cEspShaderBase_19(void)

{
  DAT_01ee7f78 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2550  cEspShaderBase::cEspShaderBase_20  size=20  [class]
void cEspShaderBase::cEspShaderBase_20(void)

{
  DAT_01ee7fe0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2570  cEspShaderBase::cEspShaderBase_21  size=20  [class]
void cEspShaderBase::cEspShaderBase_21(void)

{
  DAT_01ee8048 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2590  cEspShaderBase::cEspShaderBase_22  size=20  [class]
void cEspShaderBase::cEspShaderBase_22(void)

{
  DAT_01ee80b0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F25B0  cEspShaderBase::cEspShaderBase_23  size=20  [class]
void cEspShaderBase::cEspShaderBase_23(void)

{
  DAT_01ee8130 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F25D0  cEspShaderBase::cEspShaderBase_24  size=20  [class]
void cEspShaderBase::cEspShaderBase_24(void)

{
  DAT_01ee81a0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F25F0  cEspShaderBase::cEspShaderBase_25  size=20  [class]
void cEspShaderBase::cEspShaderBase_25(void)

{
  DAT_01ee8210 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2610  cEspShaderBase::cEspShaderBase_26  size=20  [class]
void cEspShaderBase::cEspShaderBase_26(void)

{
  DAT_01ee8280 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2630  cEspShaderBase::cEspShaderBase_27  size=20  [class]
void cEspShaderBase::cEspShaderBase_27(void)

{
  DAT_01ee82f0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2650  cEspShaderBase::cEspShaderBase_28  size=20  [class]
void cEspShaderBase::cEspShaderBase_28(void)

{
  DAT_01ee8378 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2670  cEspShaderBase::cEspShaderBase_29  size=20  [class]
void cEspShaderBase::cEspShaderBase_29(void)

{
  DAT_01ee83f8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2690  cEspShaderBase::cEspShaderBase_30  size=20  [class]
void cEspShaderBase::cEspShaderBase_30(void)

{
  DAT_01ee8460 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F26B0  cEspShaderBase::cEspShaderBase_31  size=20  [class]
void cEspShaderBase::cEspShaderBase_31(void)

{
  DAT_01ee84c8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F26D0  cEspShaderBase::cEspShaderBase_32  size=20  [class]
void cEspShaderBase::cEspShaderBase_32(void)

{
  DAT_01ee8530 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F26F0  cEspShaderBase::cEspShaderBase_33  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_33(void)

{
  _DAT_01ee85b0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2710  cEspShaderBase::cEspShaderBase_34  size=20  [class]
void cEspShaderBase::cEspShaderBase_34(void)

{
  DAT_01ee8618 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2730  cEspShaderBase::cEspShaderBase_35  size=20  [class]
void cEspShaderBase::cEspShaderBase_35(void)

{
  DAT_01ee8680 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2750  cEspShaderBase::cEspShaderBase_36  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_36(void)

{
  _DAT_01ee86e8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2770  cEspShaderBase::cEspShaderBase_37  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_37(void)

{
  _DAT_01ee8740 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2790  cEspShaderBase::cEspShaderBase_38  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_38(void)

{
  _DAT_01ee8798 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F27B0  cEspShaderBase::cEspShaderBase_39  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_39(void)

{
  _DAT_01ee8818 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F27D0  cEspShaderBase::cEspShaderBase_40  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_40(void)

{
  _DAT_01ee8898 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F27F0  cEspShaderBase::cEspShaderBase_41  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_41(void)

{
  _DAT_01ee8900 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2810  cEspShaderBase::cEspShaderBase_42  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_42(void)

{
  _DAT_01ee89b0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2830  cEspShaderBase::cEspShaderBase_43  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_43(void)

{
  _DAT_01ee8a08 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2850  cEspShaderBase::cEspShaderBase_44  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_44(void)

{
  _DAT_01ee8a78 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2870  cEspShaderBase::cEspShaderBase_45  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_45(void)

{
  _DAT_01ee8af8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2890  cEspShaderBase::cEspShaderBase_46  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_46(void)

{
  _DAT_01ee8b90 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F28B0  cEspShaderBase::cEspShaderBase_47  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_47(void)

{
  _DAT_01ee8c10 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F28D0  cEspShaderBase::cEspShaderBase_48  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_48(void)

{
  _DAT_01ee8ca8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F28F0  cEspShaderBase::cEspShaderBase_49  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_49(void)

{
  _DAT_01ee8d48 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2910  cEspShaderBase::cEspShaderBase_50  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_50(void)

{
  _DAT_01ee8dc8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2930  cEspShaderBase::cEspShaderBase_51  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_51(void)

{
  _DAT_01ee8e60 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2950  cEspShaderBase::cEspShaderBase_52  size=20  [class]
void cEspShaderBase::cEspShaderBase_52(void)

{
  DAT_01ee8eb8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2970  cEspShaderBase::cEspShaderBase_53  size=20  [class]
void cEspShaderBase::cEspShaderBase_53(void)

{
  DAT_01ee8f28 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2990  cEspShaderBase::cEspShaderBase_54  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_54(void)

{
  _DAT_01ee8f98 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F29B0  cEspShaderBase::cEspShaderBase_55  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_55(void)

{
  _DAT_01ee8ff0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F29D0  cEspShaderBase::cEspShaderBase_56  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_56(void)

{
  _DAT_01ee9058 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F29F0  cEspShaderBase::cEspShaderBase_57  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_57(void)

{
  _DAT_01ee90d8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2A10  cEspShaderBase::cEspShaderBase_58  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_58(void)

{
  _DAT_01ee9140 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2A30  cEspShaderBase::cEspShaderBase_59  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_59(void)

{
  _DAT_01ee91a8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2A50  cEspShaderBase::cEspShaderBase_60  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_60(void)

{
  _DAT_01ee9228 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2A70  cEspShaderBase::cEspShaderBase_61  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_61(void)

{
  _DAT_01ee92c0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2A90  cEspShaderBase::cEspShaderBase_62  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_62(void)

{
  _DAT_01ee9330 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2AB0  cEspShaderBase::cEspShaderBase_63  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_63(void)

{
  _DAT_01ee93c8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2AD0  cEspShaderBase::cEspShaderBase_64  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_64(void)

{
  _DAT_01ee9420 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2AF0  cEspShaderBase::cEspShaderBase_65  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_65(void)

{
  _DAT_01ee9488 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2B10  cEspShaderBase::cEspShaderBase_66  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_66(void)

{
  _DAT_01ee9508 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2B30  cEspShaderBase::cEspShaderBase_67  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_67(void)

{
  _DAT_01ee9570 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2B50  cEspShaderBase::cEspShaderBase_68  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_68(void)

{
  _DAT_01ee95f0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2B70  cEspShaderBase::cEspShaderBase_69  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_69(void)

{
  _DAT_01ee9660 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2B90  cEspShaderBase::cEspShaderBase_70  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_70(void)

{
  _DAT_01ee96e8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2BB0  cEspShaderBase::cEspShaderBase_71  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_71(void)

{
  _DAT_01ee9788 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2BD0  cEspShaderBase::cEspShaderBase_72  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_72(void)

{
  _DAT_01ee9828 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2BF0  cEspShaderBase::cEspShaderBase_73  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_73(void)

{
  _DAT_01ee98d8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2C10  cEspShaderBase::cEspShaderBase_74  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_74(void)

{
  _DAT_01ee9988 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2C30  cEspShaderBase::cEspShaderBase_75  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_75(void)

{
  _DAT_01ee9a58 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2C50  cEspShaderBase::cEspShaderBase_76  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_76(void)

{
  _DAT_01ee9b10 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2C70  cEspShaderBase::cEspShaderBase_77  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_77(void)

{
  _DAT_01ee9bc8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2C90  cEspShaderBase::cEspShaderBase_78  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_78(void)

{
  _DAT_01ee9c68 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2CB0  cEspShaderBase::cEspShaderBase_79  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_79(void)

{
  _DAT_01ee9d08 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2CD0  cEspShaderBase::cEspShaderBase_80  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_80(void)

{
  _DAT_01ee9d78 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2CF0  cEspShaderBase::cEspShaderBase_81  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_81(void)

{
  _DAT_01ee9df8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2D10  cEspShaderBase::cEspShaderBase_82  size=38  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_82(void)

{
  _DAT_01ee9ecc = 0xffffffff;
  _DAT_01ee9ed0 = 0xffffffff;
  _DAT_01ee9ed4 = 0xffffffff;
  _DAT_01ee9e80 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2D40  cEspShaderBase::cEspShaderBase_83  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_83(void)

{
  _DAT_01eec560 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2D60  cEspShaderBase::cEspShaderBase_84  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_84(void)

{
  _DAT_01eec5d0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2D80  cEspShaderBase::cEspShaderBase_85  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_85(void)

{
  _DAT_01eec640 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2DA0  cEspShaderBase::cEspShaderBase_86  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_86(void)

{
  _DAT_01eec6c8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2DC0  cEspShaderBase::cEspShaderBase_87  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_87(void)

{
  _DAT_01eec7b8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2DE0  cEspShaderBase::cEspShaderBase_88  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_88(void)

{
  _DAT_01eec858 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2E00  cEspShaderBase::cEspShaderBase_89  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_89(void)

{
  _DAT_01eec8e0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2E20  cEspShaderBase::cEspShaderBase_90  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_90(void)

{
  _DAT_01eec968 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2E40  cEspShaderBase::cEspShaderBase_91  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_91(void)

{
  _DAT_01eec9d0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2E60  cEspShaderBase::cEspShaderBase_92  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_92(void)

{
  _DAT_01eeca40 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2E80  cEspShaderBase::cEspShaderBase_93  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_93(void)

{
  _DAT_01eecab0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2EA0  cEspShaderBase::cEspShaderBase_94  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_94(void)

{
  _DAT_01eecb20 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2EC0  cEspShaderBase::cEspShaderBase_95  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_95(void)

{
  _DAT_01eecb90 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2EE0  cEspShaderBase::cEspShaderBase_96  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_96(void)

{
  _DAT_01eecbf8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2F00  cEspShaderBase::cEspShaderBase_97  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_97(void)

{
  _DAT_01eecc68 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2F20  cEspShaderBase::cEspShaderBase_98  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_98(void)

{
  _DAT_01eeccd0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2F40  cEspShaderBase::cEspShaderBase_99  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_99(void)

{
  _DAT_01eecd38 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2F60  cEspShaderBase::cEspShaderBase_100  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_100(void)

{
  _DAT_01eecda0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2F80  cEspShaderBase::cEspShaderBase_101  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_101(void)

{
  _DAT_01eece20 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2FA0  cEspShaderBase::cEspShaderBase_102  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_102(void)

{
  _DAT_01eece90 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2FC0  cEspShaderBase::cEspShaderBase_103  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_103(void)

{
  _DAT_01eecf18 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F2FE0  cEspShaderBase::cEspShaderBase_104  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_104(void)

{
  _DAT_01eecfb8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3000  cEspShaderBase::cEspShaderBase_105  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_105(void)

{
  _DAT_01eed040 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3020  cEspShaderBase::cEspShaderBase_106  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_106(void)

{
  _DAT_01eed0b0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3040  cEspShaderBase::cEspShaderBase_107  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_107(void)

{
  _DAT_01eed118 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3060  cEspShaderBase::cEspShaderBase_108  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_108(void)

{
  _DAT_01eed1c8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3080  cEspShaderBase::cEspShaderBase_109  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_109(void)

{
  _DAT_01eed280 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F30A0  cEspShaderBase::cEspShaderBase_110  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_110(void)

{
  _DAT_01eed2d0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F30C0  cEspShaderBase::cEspShaderBase_111  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_111(void)

{
  _DAT_01eed320 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F30E0  cEspShaderBase::cEspShaderBase_112  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_112(void)

{
  _DAT_01eed370 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3100  cEspShaderBase::cEspShaderBase_113  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_113(void)

{
  _DAT_01eed3f0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3120  cEspShaderBase::cEspShaderBase_114  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_114(void)

{
  _DAT_01eed478 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3140  cEspShaderBase::cEspShaderBase_115  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_115(void)

{
  _DAT_01eed510 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3160  cEspShaderBase::cEspShaderBase_116  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_116(void)

{
  _DAT_01eed5a8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3180  cEspShaderBase::cEspShaderBase_117  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_117(void)

{
  _DAT_01eed630 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F31A0  cEspShaderBase::cEspShaderBase_118  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_118(void)

{
  _DAT_01eed688 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F31C0  cEspShaderBase::cEspShaderBase_119  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_119(void)

{
  _DAT_01eed6f0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F31E0  cEspShaderBase::cEspShaderBase_120  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_120(void)

{
  _DAT_01eed758 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3200  cEspShaderBase::cEspShaderBase_121  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_121(void)

{
  _DAT_01eed7c0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3220  cEspShaderBase::cEspShaderBase_122  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_122(void)

{
  _DAT_01eed828 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3240  cEspShaderBase::cEspShaderBase_123  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_123(void)

{
  _DAT_01eed8a8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3260  cEspShaderBase::cEspShaderBase_124  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_124(void)

{
  _DAT_01eed910 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3280  cEspShaderBase::cEspShaderBase_125  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_125(void)

{
  _DAT_01eed978 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F32A0  cEspShaderBase::cEspShaderBase_126  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_126(void)

{
  _DAT_01eed9e0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F32C0  cEspShaderBase::cEspShaderBase_127  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_127(void)

{
  _DAT_01eeda50 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F32E0  cEspShaderBase::cEspShaderBase_128  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_128(void)

{
  _DAT_01eedac0 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3300  cEspShaderBase::cEspShaderBase_129  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_129(void)

{
  _DAT_01eedb48 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3320  cEspShaderBase::cEspShaderBase_130  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_130(void)

{
  _DAT_01eedbb8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3340  cEspShaderBase::cEspShaderBase_131  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_131(void)

{
  _DAT_01eedc40 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3360  cEspShaderBase::cEspShaderBase_132  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_132(void)

{
  _DAT_01eedca8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3390  FUN_015f3390  size=54  [between]
void FUN_015f3390(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00de3560();
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar2 = FUN_00de3580(0);
    FUN_00dd3d90(uVar2,uVar3);
    FUN_00de3540(0,0);
  }
  return;
}

// 015F33D0  cEspShaderBase::cEspShaderBase_133  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_133(void)

{
  DAT_01ee9f44 = 0x1111111;
  _DAT_01ee9f50 = 0x1111111;
  _DAT_01ee9f5c = 0x1111111;
  _DAT_01ee9f24 = 0xffffffff;
  _DAT_01ee9f28 = 0xffffffff;
  _DAT_01ee9f2c = 0xffffffff;
  _DAT_01ee9f30 = 0xffffffff;
  _DAT_01ee9f34 = 0xffffffff;
  _DAT_01ee9f38 = 0xffffffff;
  _DAT_01ee9f3c = 0xffffffff;
  _DAT_01ee9f40 = 0xffffffff;
  _DAT_01ee9f48 = 0xffffffff;
  _DAT_01ee9f4c = 0xffffffff;
  _DAT_01ee9f54 = 0xffffffff;
  _DAT_01ee9f58 = 0xffffffff;
  _DAT_01ee9ed8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3440  cEspShaderBase::cEspShaderBase_134  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_134(void)

{
  DAT_01ee9fd4 = 0x1111111;
  _DAT_01ee9fe0 = 0x1111111;
  _DAT_01ee9fec = 0x1111111;
  _DAT_01ee9fb4 = 0xffffffff;
  _DAT_01ee9fb8 = 0xffffffff;
  _DAT_01ee9fbc = 0xffffffff;
  _DAT_01ee9fc0 = 0xffffffff;
  _DAT_01ee9fc4 = 0xffffffff;
  _DAT_01ee9fc8 = 0xffffffff;
  _DAT_01ee9fcc = 0xffffffff;
  _DAT_01ee9fd0 = 0xffffffff;
  _DAT_01ee9fd8 = 0xffffffff;
  _DAT_01ee9fdc = 0xffffffff;
  _DAT_01ee9fe4 = 0xffffffff;
  _DAT_01ee9fe8 = 0xffffffff;
  _DAT_01ee9f68 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F34B0  cEspShaderBase::cEspShaderBase_135  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_135(void)

{
  DAT_01eea064 = 0x1111111;
  _DAT_01eea070 = 0x1111111;
  _DAT_01eea07c = 0x1111111;
  _DAT_01eea044 = 0xffffffff;
  _DAT_01eea048 = 0xffffffff;
  _DAT_01eea04c = 0xffffffff;
  _DAT_01eea050 = 0xffffffff;
  _DAT_01eea054 = 0xffffffff;
  _DAT_01eea058 = 0xffffffff;
  _DAT_01eea05c = 0xffffffff;
  _DAT_01eea060 = 0xffffffff;
  _DAT_01eea068 = 0xffffffff;
  _DAT_01eea06c = 0xffffffff;
  _DAT_01eea074 = 0xffffffff;
  _DAT_01eea078 = 0xffffffff;
  _DAT_01ee9ff8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3520  cEspShaderBase::cEspShaderBase_136  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_136(void)

{
  DAT_01eea0f4 = 0x1111111;
  _DAT_01eea100 = 0x1111111;
  _DAT_01eea10c = 0x1111111;
  _DAT_01eea0d4 = 0xffffffff;
  _DAT_01eea0d8 = 0xffffffff;
  _DAT_01eea0dc = 0xffffffff;
  _DAT_01eea0e0 = 0xffffffff;
  _DAT_01eea0e4 = 0xffffffff;
  _DAT_01eea0e8 = 0xffffffff;
  _DAT_01eea0ec = 0xffffffff;
  _DAT_01eea0f0 = 0xffffffff;
  _DAT_01eea0f8 = 0xffffffff;
  _DAT_01eea0fc = 0xffffffff;
  _DAT_01eea104 = 0xffffffff;
  _DAT_01eea108 = 0xffffffff;
  _DAT_01eea088 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3590  cEspShaderBase::cEspShaderBase_137  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_137(void)

{
  DAT_01eea184 = 0x1111111;
  _DAT_01eea190 = 0x1111111;
  _DAT_01eea19c = 0x1111111;
  _DAT_01eea164 = 0xffffffff;
  _DAT_01eea168 = 0xffffffff;
  _DAT_01eea16c = 0xffffffff;
  _DAT_01eea170 = 0xffffffff;
  _DAT_01eea174 = 0xffffffff;
  _DAT_01eea178 = 0xffffffff;
  _DAT_01eea17c = 0xffffffff;
  _DAT_01eea180 = 0xffffffff;
  _DAT_01eea188 = 0xffffffff;
  _DAT_01eea18c = 0xffffffff;
  _DAT_01eea194 = 0xffffffff;
  _DAT_01eea198 = 0xffffffff;
  _DAT_01eea118 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3600  cEspShaderBase::cEspShaderBase_138  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_138(void)

{
  DAT_01eea214 = 0x1111111;
  _DAT_01eea220 = 0x1111111;
  _DAT_01eea22c = 0x1111111;
  _DAT_01eea1f4 = 0xffffffff;
  _DAT_01eea1f8 = 0xffffffff;
  _DAT_01eea1fc = 0xffffffff;
  _DAT_01eea200 = 0xffffffff;
  _DAT_01eea204 = 0xffffffff;
  _DAT_01eea208 = 0xffffffff;
  _DAT_01eea20c = 0xffffffff;
  _DAT_01eea210 = 0xffffffff;
  _DAT_01eea218 = 0xffffffff;
  _DAT_01eea21c = 0xffffffff;
  _DAT_01eea224 = 0xffffffff;
  _DAT_01eea228 = 0xffffffff;
  _DAT_01eea1a8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3670  cEspShaderBase::cEspShaderBase_139  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_139(void)

{
  DAT_01eea2a4 = 0x1111111;
  _DAT_01eea2b0 = 0x1111111;
  _DAT_01eea2bc = 0x1111111;
  _DAT_01eea284 = 0xffffffff;
  _DAT_01eea288 = 0xffffffff;
  _DAT_01eea28c = 0xffffffff;
  _DAT_01eea290 = 0xffffffff;
  _DAT_01eea294 = 0xffffffff;
  _DAT_01eea298 = 0xffffffff;
  _DAT_01eea29c = 0xffffffff;
  _DAT_01eea2a0 = 0xffffffff;
  _DAT_01eea2a8 = 0xffffffff;
  _DAT_01eea2ac = 0xffffffff;
  _DAT_01eea2b4 = 0xffffffff;
  _DAT_01eea2b8 = 0xffffffff;
  _DAT_01eea238 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F36E0  cEspShaderBase::cEspShaderBase_140  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_140(void)

{
  DAT_01eea334 = 0x1111111;
  _DAT_01eea340 = 0x1111111;
  _DAT_01eea34c = 0x1111111;
  _DAT_01eea314 = 0xffffffff;
  _DAT_01eea318 = 0xffffffff;
  _DAT_01eea31c = 0xffffffff;
  _DAT_01eea320 = 0xffffffff;
  _DAT_01eea324 = 0xffffffff;
  _DAT_01eea328 = 0xffffffff;
  _DAT_01eea32c = 0xffffffff;
  _DAT_01eea330 = 0xffffffff;
  _DAT_01eea338 = 0xffffffff;
  _DAT_01eea33c = 0xffffffff;
  _DAT_01eea344 = 0xffffffff;
  _DAT_01eea348 = 0xffffffff;
  _DAT_01eea2c8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3750  cEspShaderBase::cEspShaderBase_141  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_141(void)

{
  DAT_01eea3c4 = 0x1111111;
  _DAT_01eea3d0 = 0x1111111;
  _DAT_01eea3dc = 0x1111111;
  _DAT_01eea3a4 = 0xffffffff;
  _DAT_01eea3a8 = 0xffffffff;
  _DAT_01eea3ac = 0xffffffff;
  _DAT_01eea3b0 = 0xffffffff;
  _DAT_01eea3b4 = 0xffffffff;
  _DAT_01eea3b8 = 0xffffffff;
  _DAT_01eea3bc = 0xffffffff;
  _DAT_01eea3c0 = 0xffffffff;
  _DAT_01eea3c8 = 0xffffffff;
  _DAT_01eea3cc = 0xffffffff;
  _DAT_01eea3d4 = 0xffffffff;
  _DAT_01eea3d8 = 0xffffffff;
  _DAT_01eea358 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F37C0  cEspShaderBase::cEspShaderBase_142  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_142(void)

{
  DAT_01eea454 = 0x1111111;
  _DAT_01eea460 = 0x1111111;
  _DAT_01eea46c = 0x1111111;
  _DAT_01eea434 = 0xffffffff;
  _DAT_01eea438 = 0xffffffff;
  _DAT_01eea43c = 0xffffffff;
  _DAT_01eea440 = 0xffffffff;
  _DAT_01eea444 = 0xffffffff;
  _DAT_01eea448 = 0xffffffff;
  _DAT_01eea44c = 0xffffffff;
  _DAT_01eea450 = 0xffffffff;
  _DAT_01eea458 = 0xffffffff;
  _DAT_01eea45c = 0xffffffff;
  _DAT_01eea464 = 0xffffffff;
  _DAT_01eea468 = 0xffffffff;
  _DAT_01eea3e8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3830  cEspShaderBase::cEspShaderBase_143  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_143(void)

{
  DAT_01eea4e4 = 0x1111111;
  _DAT_01eea4f0 = 0x1111111;
  _DAT_01eea4fc = 0x1111111;
  _DAT_01eea4c4 = 0xffffffff;
  _DAT_01eea4c8 = 0xffffffff;
  _DAT_01eea4cc = 0xffffffff;
  _DAT_01eea4d0 = 0xffffffff;
  _DAT_01eea4d4 = 0xffffffff;
  _DAT_01eea4d8 = 0xffffffff;
  _DAT_01eea4dc = 0xffffffff;
  _DAT_01eea4e0 = 0xffffffff;
  _DAT_01eea4e8 = 0xffffffff;
  _DAT_01eea4ec = 0xffffffff;
  _DAT_01eea4f4 = 0xffffffff;
  _DAT_01eea4f8 = 0xffffffff;
  _DAT_01eea478 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F38A0  cEspShaderBase::cEspShaderBase_144  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_144(void)

{
  DAT_01eea574 = 0x1111111;
  _DAT_01eea580 = 0x1111111;
  _DAT_01eea58c = 0x1111111;
  _DAT_01eea554 = 0xffffffff;
  _DAT_01eea558 = 0xffffffff;
  _DAT_01eea55c = 0xffffffff;
  _DAT_01eea560 = 0xffffffff;
  _DAT_01eea564 = 0xffffffff;
  _DAT_01eea568 = 0xffffffff;
  _DAT_01eea56c = 0xffffffff;
  _DAT_01eea570 = 0xffffffff;
  _DAT_01eea578 = 0xffffffff;
  _DAT_01eea57c = 0xffffffff;
  _DAT_01eea584 = 0xffffffff;
  _DAT_01eea588 = 0xffffffff;
  _DAT_01eea508 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3910  cEspShaderBase::cEspShaderBase_145  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_145(void)

{
  DAT_01eea604 = 0x1111111;
  _DAT_01eea610 = 0x1111111;
  _DAT_01eea61c = 0x1111111;
  _DAT_01eea5e4 = 0xffffffff;
  _DAT_01eea5e8 = 0xffffffff;
  _DAT_01eea5ec = 0xffffffff;
  _DAT_01eea5f0 = 0xffffffff;
  _DAT_01eea5f4 = 0xffffffff;
  _DAT_01eea5f8 = 0xffffffff;
  _DAT_01eea5fc = 0xffffffff;
  _DAT_01eea600 = 0xffffffff;
  _DAT_01eea608 = 0xffffffff;
  _DAT_01eea60c = 0xffffffff;
  _DAT_01eea614 = 0xffffffff;
  _DAT_01eea618 = 0xffffffff;
  _DAT_01eea598 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3980  cEspShaderBase::cEspShaderBase_146  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_146(void)

{
  DAT_01eea694 = 0x1111111;
  _DAT_01eea6a0 = 0x1111111;
  _DAT_01eea6ac = 0x1111111;
  _DAT_01eea674 = 0xffffffff;
  _DAT_01eea678 = 0xffffffff;
  _DAT_01eea67c = 0xffffffff;
  _DAT_01eea680 = 0xffffffff;
  _DAT_01eea684 = 0xffffffff;
  _DAT_01eea688 = 0xffffffff;
  _DAT_01eea68c = 0xffffffff;
  _DAT_01eea690 = 0xffffffff;
  _DAT_01eea698 = 0xffffffff;
  _DAT_01eea69c = 0xffffffff;
  _DAT_01eea6a4 = 0xffffffff;
  _DAT_01eea6a8 = 0xffffffff;
  _DAT_01eea628 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F39F0  cEspShaderBase::cEspShaderBase_147  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_147(void)

{
  DAT_01eea724 = 0x1111111;
  _DAT_01eea730 = 0x1111111;
  _DAT_01eea73c = 0x1111111;
  _DAT_01eea704 = 0xffffffff;
  _DAT_01eea708 = 0xffffffff;
  _DAT_01eea70c = 0xffffffff;
  _DAT_01eea710 = 0xffffffff;
  _DAT_01eea714 = 0xffffffff;
  _DAT_01eea718 = 0xffffffff;
  _DAT_01eea71c = 0xffffffff;
  _DAT_01eea720 = 0xffffffff;
  _DAT_01eea728 = 0xffffffff;
  _DAT_01eea72c = 0xffffffff;
  _DAT_01eea734 = 0xffffffff;
  _DAT_01eea738 = 0xffffffff;
  _DAT_01eea6b8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3A60  cEspShaderBase::cEspShaderBase_148  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_148(void)

{
  DAT_01eea7b4 = 0x1111111;
  _DAT_01eea7c0 = 0x1111111;
  _DAT_01eea7cc = 0x1111111;
  _DAT_01eea794 = 0xffffffff;
  _DAT_01eea798 = 0xffffffff;
  _DAT_01eea79c = 0xffffffff;
  _DAT_01eea7a0 = 0xffffffff;
  _DAT_01eea7a4 = 0xffffffff;
  _DAT_01eea7a8 = 0xffffffff;
  _DAT_01eea7ac = 0xffffffff;
  _DAT_01eea7b0 = 0xffffffff;
  _DAT_01eea7b8 = 0xffffffff;
  _DAT_01eea7bc = 0xffffffff;
  _DAT_01eea7c4 = 0xffffffff;
  _DAT_01eea7c8 = 0xffffffff;
  _DAT_01eea748 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3AD0  cEspShaderBase::cEspShaderBase_149  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_149(void)

{
  DAT_01eea844 = 0x1111111;
  _DAT_01eea850 = 0x1111111;
  _DAT_01eea85c = 0x1111111;
  _DAT_01eea824 = 0xffffffff;
  _DAT_01eea828 = 0xffffffff;
  _DAT_01eea82c = 0xffffffff;
  _DAT_01eea830 = 0xffffffff;
  _DAT_01eea834 = 0xffffffff;
  _DAT_01eea838 = 0xffffffff;
  _DAT_01eea83c = 0xffffffff;
  _DAT_01eea840 = 0xffffffff;
  _DAT_01eea848 = 0xffffffff;
  _DAT_01eea84c = 0xffffffff;
  _DAT_01eea854 = 0xffffffff;
  _DAT_01eea858 = 0xffffffff;
  _DAT_01eea7d8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3B40  cEspShaderBase::cEspShaderBase_150  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_150(void)

{
  DAT_01eea8d4 = 0x1111111;
  _DAT_01eea8e0 = 0x1111111;
  _DAT_01eea8ec = 0x1111111;
  _DAT_01eea8b4 = 0xffffffff;
  _DAT_01eea8b8 = 0xffffffff;
  _DAT_01eea8bc = 0xffffffff;
  _DAT_01eea8c0 = 0xffffffff;
  _DAT_01eea8c4 = 0xffffffff;
  _DAT_01eea8c8 = 0xffffffff;
  _DAT_01eea8cc = 0xffffffff;
  _DAT_01eea8d0 = 0xffffffff;
  _DAT_01eea8d8 = 0xffffffff;
  _DAT_01eea8dc = 0xffffffff;
  _DAT_01eea8e4 = 0xffffffff;
  _DAT_01eea8e8 = 0xffffffff;
  _DAT_01eea868 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3BB0  cEspShaderBase::cEspShaderBase_151  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_151(void)

{
  DAT_01eea964 = 0x1111111;
  _DAT_01eea970 = 0x1111111;
  _DAT_01eea97c = 0x1111111;
  _DAT_01eea944 = 0xffffffff;
  _DAT_01eea948 = 0xffffffff;
  _DAT_01eea94c = 0xffffffff;
  _DAT_01eea950 = 0xffffffff;
  _DAT_01eea954 = 0xffffffff;
  _DAT_01eea958 = 0xffffffff;
  _DAT_01eea95c = 0xffffffff;
  _DAT_01eea960 = 0xffffffff;
  _DAT_01eea968 = 0xffffffff;
  _DAT_01eea96c = 0xffffffff;
  _DAT_01eea974 = 0xffffffff;
  _DAT_01eea978 = 0xffffffff;
  _DAT_01eea8f8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3C20  cEspShaderBase::cEspShaderBase_152  size=106  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_152(void)

{
  DAT_01eea9f4 = 0x1111111;
  _DAT_01eeaa00 = 0x1111111;
  _DAT_01eeaa0c = 0x1111111;
  _DAT_01eea9d4 = 0xffffffff;
  _DAT_01eea9d8 = 0xffffffff;
  _DAT_01eea9dc = 0xffffffff;
  _DAT_01eea9e0 = 0xffffffff;
  _DAT_01eea9e4 = 0xffffffff;
  _DAT_01eea9e8 = 0xffffffff;
  _DAT_01eea9ec = 0xffffffff;
  _DAT_01eea9f0 = 0xffffffff;
  _DAT_01eea9f8 = 0xffffffff;
  _DAT_01eea9fc = 0xffffffff;
  _DAT_01eeaa04 = 0xffffffff;
  _DAT_01eeaa08 = 0xffffffff;
  _DAT_01eea988 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3C90  FUN_015f3c90  size=10  [between]
void FUN_015f3c90(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CA0  FUN_015f3ca0  size=10  [between]
void FUN_015f3ca0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CB0  FUN_015f3cb0  size=10  [between]
void FUN_015f3cb0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CC0  FUN_015f3cc0  size=10  [between]
void FUN_015f3cc0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CD0  FUN_015f3cd0  size=10  [between]
void FUN_015f3cd0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CE0  FUN_015f3ce0  size=10  [between]
void FUN_015f3ce0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3CF0  FUN_015f3cf0  size=10  [between]
void FUN_015f3cf0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D00  FUN_015f3d00  size=10  [between]
void FUN_015f3d00(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D10  FUN_015f3d10  size=10  [between]
void FUN_015f3d10(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D20  FUN_015f3d20  size=10  [between]
void FUN_015f3d20(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D30  FUN_015f3d30  size=10  [between]
void FUN_015f3d30(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D40  FUN_015f3d40  size=10  [between]
void FUN_015f3d40(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D50  FUN_015f3d50  size=10  [between]
void FUN_015f3d50(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D60  FUN_015f3d60  size=10  [between]
void FUN_015f3d60(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D70  FUN_015f3d70  size=10  [between]
void FUN_015f3d70(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D80  FUN_015f3d80  size=10  [between]
void FUN_015f3d80(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3D90  FUN_015f3d90  size=10  [between]
void FUN_015f3d90(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DA0  FUN_015f3da0  size=10  [between]
void FUN_015f3da0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DB0  FUN_015f3db0  size=10  [between]
void FUN_015f3db0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DC0  FUN_015f3dc0  size=10  [between]
void FUN_015f3dc0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DD0  FUN_015f3dd0  size=10  [between]
void FUN_015f3dd0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DE0  FUN_015f3de0  size=10  [between]
void FUN_015f3de0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3DF0  FUN_015f3df0  size=10  [between]
void FUN_015f3df0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E00  FUN_015f3e00  size=10  [between]
void FUN_015f3e00(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E10  FUN_015f3e10  size=10  [between]
void FUN_015f3e10(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E20  FUN_015f3e20  size=10  [between]
void FUN_015f3e20(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E30  FUN_015f3e30  size=10  [between]
void FUN_015f3e30(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E40  FUN_015f3e40  size=10  [between]
void FUN_015f3e40(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E50  FUN_015f3e50  size=10  [between]
void FUN_015f3e50(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E60  FUN_015f3e60  size=10  [between]
void FUN_015f3e60(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E70  FUN_015f3e70  size=10  [between]
void FUN_015f3e70(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E80  FUN_015f3e80  size=10  [between]
void FUN_015f3e80(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3E90  FUN_015f3e90  size=10  [between]
void FUN_015f3e90(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3EA0  FUN_015f3ea0  size=10  [between]
void FUN_015f3ea0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3EB0  FUN_015f3eb0  size=10  [between]
void FUN_015f3eb0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3EC0  FUN_015f3ec0  size=10  [between]
void FUN_015f3ec0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3ED0  FUN_015f3ed0  size=10  [between]
void FUN_015f3ed0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3EE0  FUN_015f3ee0  size=10  [between]
void FUN_015f3ee0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3EF0  FUN_015f3ef0  size=10  [between]
void FUN_015f3ef0(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3F00  FUN_015f3f00  size=10  [between]
void FUN_015f3f00(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3F10  FUN_015f3f10  size=10  [between]
void FUN_015f3f10(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3F20  FUN_015f3f20  size=10  [between]
void FUN_015f3f20(void)

{
  cEspShaderBase::cEspShaderBase_4();
  return;
}

// 015F3F30  cEspShaderBase::cEspShaderBase_153  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_153(void)

{
  _DAT_01eec354 = 0xffffffff;
  _DAT_01eec358 = 0xffffffff;
  _DAT_01eec35c = 0xffffffff;
  _DAT_01eec360 = 0xffffffff;
  _DAT_01eec364 = 0xffffffff;
  _DAT_01eec368 = 0xffffffff;
  _DAT_01eec36c = 0xffffffff;
  _DAT_01eec370 = 0xffffffff;
  DAT_01eec374 = 0x1111111;
  _DAT_01eec308 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F3F80  cEspShaderBase::cEspShaderBase_154  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_154(void)

{
  _DAT_01eec3cc = 0xffffffff;
  _DAT_01eec3d0 = 0xffffffff;
  _DAT_01eec3d4 = 0xffffffff;
  _DAT_01eec3d8 = 0xffffffff;
  _DAT_01eec3dc = 0xffffffff;
  _DAT_01eec3e0 = 0xffffffff;
  _DAT_01eec3e4 = 0xffffffff;
  _DAT_01eec3e8 = 0xffffffff;
  DAT_01eec3ec = 0x1111111;
  _DAT_01eec380 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F4000  cEspShaderBase::cEspShaderBase_155  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_155(void)

{
  _DAT_01eec444 = 0xffffffff;
  _DAT_01eec448 = 0xffffffff;
  _DAT_01eec44c = 0xffffffff;
  _DAT_01eec450 = 0xffffffff;
  _DAT_01eec454 = 0xffffffff;
  _DAT_01eec458 = 0xffffffff;
  _DAT_01eec45c = 0xffffffff;
  _DAT_01eec460 = 0xffffffff;
  DAT_01eec464 = 0x1111111;
  _DAT_01eec3f8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F4050  cEspShaderBase::cEspShaderBase_156  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_156(void)

{
  _DAT_01eec4bc = 0xffffffff;
  _DAT_01eec4c0 = 0xffffffff;
  _DAT_01eec4c4 = 0xffffffff;
  _DAT_01eec4c8 = 0xffffffff;
  _DAT_01eec4cc = 0xffffffff;
  _DAT_01eec4d0 = 0xffffffff;
  _DAT_01eec4d4 = 0xffffffff;
  _DAT_01eec4d8 = 0xffffffff;
  DAT_01eec4dc = 0x1111111;
  _DAT_01eec470 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F40A0  cEspShaderBase::cEspShaderBase_157  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_157(void)

{
  _DAT_01eec534 = 0xffffffff;
  _DAT_01eec538 = 0xffffffff;
  _DAT_01eec53c = 0xffffffff;
  _DAT_01eec540 = 0xffffffff;
  _DAT_01eec544 = 0xffffffff;
  _DAT_01eec548 = 0xffffffff;
  _DAT_01eec54c = 0xffffffff;
  _DAT_01eec550 = 0xffffffff;
  DAT_01eec554 = 0x1111111;
  _DAT_01eec4e8 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F40F0  cEspShaderBase::cEspShaderBase_158  size=43  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderBase::cEspShaderBase_158(void)

{
  _DAT_01eec7a8 = 0xffffffff;
  _DAT_01eec7ac = 0xffffffff;
  _DAT_01eec7b0 = 0x1111111;
  _DAT_01eec738 = vftable;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

