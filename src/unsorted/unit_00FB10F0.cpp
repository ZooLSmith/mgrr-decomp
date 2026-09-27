// src/unsorted/unit_00FB10F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FB10F0..00FB1270, 10 functions

#include "mgrr.h"

// 00FB10F0  FUN_00fb10f0  size=18  [run]
undefined4 * __fastcall FUN_00fb10f0(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f23c8;
  return param_1;
}

// 00FB1110  FUN_00fb1110  size=26  [run]
bool FUN_00fb1110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

// 00FB1140  FUN_00fb1140  size=36  [run]
void __thiscall FUN_00fb1140(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1170  FUN_00fb1170  size=23  [run]
void __thiscall FUN_00fb1170(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x28,param_2);
  return;
}

// 00FB1190  FUN_00fb1190  size=25  [run]
void __thiscall FUN_00fb1190(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x34,param_2,4);
  return;
}

// 00FB11B0  FUN_00fb11b0  size=36  [run]
void __thiscall FUN_00fb11b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB11E0  FUN_00fb11e0  size=36  [run]
void __thiscall FUN_00fb11e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00FB1210  FUN_00fb1210  size=36  [run]
void __thiscall FUN_00fb1210(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  return;
}

// 00FB1240  FUN_00fb1240  size=36  [run]
void __thiscall FUN_00fb1240(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FB1270  FUN_00fb1270  size=54  [run]
void __fastcall FUN_00fb1270(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00eaf7d0();
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_00fa1d50(param_1 + 100,0);
    return;
  }
  FUN_00fa1d50(param_1 + 100,*(undefined4 *)(iVar1 + 8));
  return;
}

