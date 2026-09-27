// src/unsorted/unit_00FB0CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FB0CA0..00FB1070, 22 functions

#include "types.h"

// 00FB0CA0  FUN_00fb0ca0  size=25  [run]
undefined4 __thiscall FUN_00fb0ca0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = 0x24;
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return 1;
}

// 00FB0CC0  FUN_00fb0cc0  size=57  [run]
void __fastcall FUN_00fb0cc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return;
}

// 00FB0D00  FUN_00fb0d00  size=80  [run]
void __fastcall FUN_00fb0d00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00FB0D50  FUN_00fb0d50  size=34  [run]
void __fastcall FUN_00fb0d50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0xc);
  FUN_00fa1d50(param_1 + 0x58,uVar1);
  return;
}

// 00FB0D80  FUN_00fb0d80  size=34  [run]
void __fastcall FUN_00fb0d80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 100,uVar1);
  return;
}

// 00FB0DB0  FUN_00fb0db0  size=34  [run]
void __fastcall FUN_00fb0db0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x70,uVar1);
  return;
}

// 00FB0DE0  FUN_00fb0de0  size=23  [run]
void __thiscall FUN_00fb0de0(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FB0E00  FUN_00fb0e00  size=47  [run]
void __thiscall FUN_00fb0e00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f9ec50(param_1 + 0x88,param_2,4);
  FUN_00f9ec50(param_1 + 0x7c,param_3,4);
  return;
}

// 00FB0E30  FUN_00fb0e30  size=28  [run]
void __thiscall FUN_00fb0e30(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0xac,param_2,4);
  return;
}

// 00FB0E50  FUN_00fb0e50  size=50  [run]
void __thiscall FUN_00fb0e50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f9ec50(param_1 + 0xa0,param_3,4);
  FUN_00f9ec50(param_1 + 0x94,param_2,4);
  return;
}

// 00FB0E90  FUN_00fb0e90  size=65  [run]
void __thiscall FUN_00fb0e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00f9ec50(param_1 + 0x88,param_2,4);
  FUN_00f9ec50(param_1 + 0x94,param_3,4);
  FUN_00f9ec50(param_1 + 0x7c,param_4,4);
  return;
}

// 00FB0EE0  FUN_00fb0ee0  size=22  [run]
bool FUN_00fb0ee0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e690(param_1);
  return iVar1 != 0;
}

// 00FB0F00  FUN_00fb0f00  size=26  [run]
bool FUN_00fb0f00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  return iVar1 != 0;
}

// 00FB0F20  FUN_00fb0f20  size=18  [run]
undefined4 * __fastcall FUN_00fb0f20(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f2370;
  return param_1;
}

// 00FB0F40  FUN_00fb0f40  size=26  [run]
bool FUN_00fb0f40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

// 00FB0F70  FUN_00fb0f70  size=36  [run]
void __thiscall FUN_00fb0f70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB0FA0  FUN_00fb0fa0  size=18  [run]
undefined4 * __fastcall FUN_00fb0fa0(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = &PTR_FUN_016f2378;
  return param_1;
}

// 00FB0FC0  FUN_00fb0fc0  size=26  [run]
bool FUN_00fb0fc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_1,param_2);
  return iVar1 != 0;
}

// 00FB0FF0  FUN_00fb0ff0  size=25  [run]
void __thiscall FUN_00fb0ff0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x34,param_2,4);
  return;
}

// 00FB1010  FUN_00fb1010  size=34  [run]
void __fastcall FUN_00fb1010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1040  FUN_00fb1040  size=34  [run]
void __fastcall FUN_00fb1040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FB1070  FUN_00fb1070  size=46  [run]
bool FUN_00fb1070(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00a281f0("ModelShaderEvWtrPs.pso");
  uVar2 = FUN_00a281f0("ModelShaderEvWtrVs.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  return iVar3 != 0;
}

