// src/misc/cLockOnMarkerDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB9A0..00CD5390, 3 functions

#include "types.h"

// 00CBB9A0  cLockOnMarkerDisp::cLockOnMarkerDisp  size=348  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cLockOnMarkerDisp::cLockOnMarkerDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0xb] = 0xffffffff;
  param_1[1] = 0;
  DAT_01dc0ed0 = 0;
  DAT_01dc0ef8 = 0;
  DAT_01dbfb68 = 0;
  DAT_01dbfb40 = 0;
  DAT_01dbfb18 = 0;
  param_1[2] = 0;
  DAT_01dc0ed4 = 0;
  DAT_01dc0efc = 0;
  DAT_01dbfb6c = 0;
  DAT_01dbfb44 = 0;
  DAT_01dbfb1c = 0;
  param_1[3] = 0;
  _DAT_01dc0ed8 = 0;
  _DAT_01dc0f00 = 0;
  _DAT_01dbfb70 = 0;
  _DAT_01dbfb48 = 0;
  _DAT_01dbfb20 = 0;
  param_1[4] = 0;
  _DAT_01dc0edc = 0;
  _DAT_01dc0f04 = 0;
  _DAT_01dbfb74 = 0;
  _DAT_01dbfb4c = 0;
  _DAT_01dbfb24 = 0;
  param_1[5] = 0;
  _DAT_01dc0ee0 = 0;
  _DAT_01dc0f08 = 0;
  _DAT_01dbfb78 = 0;
  _DAT_01dbfb50 = 0;
  _DAT_01dbfb28 = 0;
  param_1[6] = 0;
  _DAT_01dc0ee4 = 0;
  _DAT_01dc0f0c = 0;
  _DAT_01dbfb7c = 0;
  _DAT_01dbfb54 = 0;
  _DAT_01dbfb2c = 0;
  param_1[7] = 0;
  _DAT_01dc0ee8 = 0;
  _DAT_01dc0f10 = 0;
  _DAT_01dbfb80 = 0;
  _DAT_01dbfb58 = 0;
  _DAT_01dbfb30 = 0;
  param_1[8] = 0;
  _DAT_01dc0eec = 0;
  _DAT_01dc0f14 = 0;
  _DAT_01dbfb84 = 0;
  _DAT_01dbfb5c = 0;
  _DAT_01dbfb34 = 0;
  param_1[9] = 0;
  _DAT_01dc0ef0 = 0;
  _DAT_01dc0f18 = 0;
  _DAT_01dbfb88 = 0;
  _DAT_01dbfb60 = 0;
  _DAT_01dbfb38 = 0;
  param_1[10] = 0;
  _DAT_01dc0ef4 = 0;
  _DAT_01dc0f1c = 0;
  _DAT_01dbfb8c = 0;
  _DAT_01dbfb64 = 0;
  _DAT_01dbfb3c = 0;
  return;
}

// 00CBBB30  FUN_00cbbb30  size=29  [callgraph]
undefined4 FUN_00cbbb30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x30,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cLockOnMarkerDisp::cLockOnMarkerDisp();
    return uVar2;
  }
  return 0;
}

// 00CD5390  cLockOnMarkerDisp::vf00  size=69  [class]
int * __thiscall cLockOnMarkerDisp::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 10;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

