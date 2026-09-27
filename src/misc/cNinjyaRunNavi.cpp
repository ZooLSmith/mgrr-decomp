// src/misc/cNinjyaRunNavi.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBBE0..00CBBC50, 3 functions

#include "types.h"

// 00CBBBE0  cNinjyaRunNavi::cNinjyaRunNavi  size=60  [class]
void __fastcall cNinjyaRunNavi::cNinjyaRunNavi(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = vftable;
  param_1 = param_1 + 0x21;
  uVar1 = 0;
  do {
    param_1[-0x20] = 0;
    *param_1 = 0;
    *(undefined4 *)((int)&DAT_01dc0fa0 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01dc10a0 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01dbfa98 + uVar1) = 0;
    uVar1 = uVar1 + 4;
    param_1 = param_1 + 1;
  } while (uVar1 < 0x80);
  return;
}

// 00CBBC30  cNinjyaRunNavi::vf00  size=31  [class]
undefined4 * __thiscall cNinjyaRunNavi::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CBBC50  FUN_00cbbc50  size=32  [callgraph]
undefined4 FUN_00cbbc50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x104,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cNinjyaRunNavi::cNinjyaRunNavi();
    return uVar2;
  }
  return 0;
}

