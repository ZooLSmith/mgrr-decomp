// src/misc/esp170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D1450..00F23340, 4 functions

#include "mgrr.h"
#include "esp170.h"

// 009D1450  esp170::preTrans  size=61  [class]
undefined4 __thiscall
esp170::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = esp13::preTrans(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x428) = 0x80;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  return 1;
}

// 009E0180  esp170::esp170  size=18  [class]
undefined4 * __fastcall esp170::esp170(undefined4 *param_1)

{
  esp13::esp13();
  *param_1 = vftable;
  return param_1;
}

// 009E01B0  esp170::vf00  size=36  [class]
undefined4 * __thiscall esp170::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F23340  esp170::vf08  size=64  [class]
void __fastcall esp170::vf08(int param_1)

{
  undefined4 uVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_00e9fef0();
  local_8 = FUN_00e9feb0();
  local_10 = param_1 + 0x3a0;
  local_4 = uVar1;
  local_c = FUN_00e9fe70();
  FUN_00f16b60(&local_10);
  return;
}

