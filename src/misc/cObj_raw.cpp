// src/misc/cObj_raw.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F88E0..009F8A10, 5 functions

#include "mgrr.h"
#include "cObj.h"

// 009F88E0  cObj::~cObj  size=72  [class]
void __fastcall cObj::~cObj(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0x145] != 0) {
    FUN_00dd5650(&DAT_0165bed8);
  }
  param_1[0x13d] = cXmlBinary::vftable;
  FUN_00e04180();
  param_1[0x13d] = cXml::vftable;
  cModel::~cModel();
  return;
}

// 009F8930  FUN_009f8930  size=11  [between]
void FUN_009f8930(void)

{
  FUN_00de3540();
  return;
}

// 009F8940  FUN_009f8940  size=168  [between]
void __thiscall FUN_009f8940(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x4a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x4a8) = param_2[3];
  *(undefined4 *)(param_1 + 0x4ac) = param_2[2];
  *(undefined4 *)(param_1 + 0x4a0) = *param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2[0x14];
  *(undefined4 *)(param_1 + 0x54) = param_2[0x15];
  *(undefined4 *)(param_1 + 0x58) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x94) = param_2[0x18];
  *(undefined4 *)(param_1 + 0x98) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x74) = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x78) = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  puVar2 = param_2 + 4;
  puVar3 = (undefined4 *)(param_1 + 0xb0);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x490) = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x49c) = param_2[0x1e];
  D3DXMatrixInverse(param_1 + 0xf0,0,(undefined4 *)(param_1 + 0xb0));
  return;
}

// 009F89F0  FUN_009f89f0  size=30  [between]
undefined4 __thiscall FUN_009f89f0(undefined4 param_1,byte param_2)

{
  thunk_FUN_00a1bdd0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F8A10  FUN_009f8a10  size=31  [between]
bool __thiscall FUN_009f8a10(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4b4);
  iVar1 = FUN_00a12110(param_2);
  return iVar1 != 0;
}

