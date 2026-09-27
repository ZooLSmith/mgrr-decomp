// src/effect/EspModelShaderShellPolygon2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E6470..009F3E80, 4 functions

#include "mgrr.h"
#include "EspModelShaderShellPolygon2.h"

// 009E6470  EspModelShaderShellPolygon2::vf08  size=138  [class]
undefined4 __thiscall EspModelShaderShellPolygon2::vf08(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = EspModelShaderShellPolygon::vf08(param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x4c,"g_Sampler1");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 100,"g_UvParam1");
      if (iVar2 != 0) {
        uVar3 = 2;
        iVar2 = 2;
        if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
          uVar3 = 3;
          iVar2 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x54);
        *(uint *)(param_1 + 0x54) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
        *(uint *)(param_1 + 0x54) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
        return 1;
      }
    }
  }
  return 0;
}

// 009F28C0  EspModelShaderShellPolygon2::EspModelShaderShellPolygon2  size=18  [class]
undefined4 * __fastcall
EspModelShaderShellPolygon2::EspModelShaderShellPolygon2(undefined4 *param_1)

{
  EspModelShaderShellPolygon::EspModelShaderShellPolygon();
  *param_1 = vftable;
  return param_1;
}

// 009F28F0  EspModelShaderShellPolygon2::vf00  size=36  [class]
undefined4 * __thiscall EspModelShaderShellPolygon2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspModelShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F3E80  EspModelShaderShellPolygon2::EspModelShaderShellPolygon2_2  size=56  [class]
undefined4 * EspModelShaderShellPolygon2::EspModelShaderShellPolygon2_2(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x7c,0x20,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x7c);
  EspModelShaderShellPolygon::EspModelShaderShellPolygon();
  *_Dst = vftable;
  return _Dst;
}

