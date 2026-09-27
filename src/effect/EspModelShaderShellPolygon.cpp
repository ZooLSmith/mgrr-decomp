// src/effect/EspModelShaderShellPolygon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E6290..009F0D40, 4 functions

#include "mgrr.h"
#include "EspModelShaderShellPolygon.h"

// 009E6290  EspModelShaderShellPolygon::vf08  size=228  [class]
bool __thiscall EspModelShaderShellPolygon::vf08(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat(param_2);
  uVar3 = Fw::StringCopyCat_2(param_2);
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_CommonParam");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler0");
        if (iVar4 != 0) {
          iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_UvParam0");
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = *(uint *)(param_1 + 0x48);
            *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
            iVar4 = FUN_00f9e6d0(param_1 + 0x70,"g_WorldMatrix");
            return iVar4 != 0;
          }
        }
      }
    }
  }
  return false;
}

// 009ECAF0  EspModelShaderShellPolygon::vf04  size=288  [class]
/* WARNING: Removing unreachable block (ram,0x009ecb35) */
/* WARNING: Removing unreachable block (ram,0x009ecbb0) */

void __fastcall EspModelShaderShellPolygon::vf04(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff010 | 0x1000111;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xe1111010 | 0x1111111;
  *(uint *)(param_1 + 0x48) = uVar1 & 0xe1111010 | 0x1111111;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe1111010 | 0x1111111;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0x7fffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 009F0C80  EspModelShaderShellPolygon::EspModelShaderShellPolygon  size=177  [class]
/* WARNING: Removing unreachable block (ram,0x009f0cde) */

undefined4 * __fastcall EspModelShaderShellPolygon::EspModelShaderShellPolygon(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  puVar1 = param_1 + 0x10;
  local_4 = 1;
  do {
    puVar1[2] = 0x1000000;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0x1000000;
    puVar1[2] = 0x1111111;
    puVar1 = puVar1 + 3;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  return param_1;
}

// 009F0D40  EspModelShaderShellPolygon::vf00  size=36  [class]
undefined4 * __thiscall EspModelShaderShellPolygon::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspModelShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

