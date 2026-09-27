// src/misc/cItemGetDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBAA60..00CD4C60, 4 functions

#include "mgrr.h"
#include "cItemGetDisp.h"

// 00CBAA60  cItemGetDisp::cItemGetDisp  size=427  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemGetDisp::cItemGetDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dbfda0 = 0xffffffff;
  DAT_01dbfda4 = 0xffffffff;
  _DAT_01dbfda8 = 0xffffffff;
  _DAT_01dbfdac = 0xffffffff;
  _DAT_01dbfdb0 = 0xffffffff;
  _DAT_01dbfdb4 = 0xffffffff;
  _DAT_01dbfdb8 = 0xffffffff;
  _DAT_01dbfdbc = 0xffffffff;
  _DAT_01dbfdc0 = 0xffffffff;
  _DAT_01dbfdc4 = 0xffffffff;
  _DAT_01dbfdc8 = 0xffffffff;
  _DAT_01dbfdcc = 0xffffffff;
  _DAT_01dbfdd0 = 0xffffffff;
  _DAT_01dbfdd4 = 0xffffffff;
  _DAT_01dbfdd8 = 0xffffffff;
  DAT_01dbfddc = 0xffffffff;
  DAT_018b561c = 0xffffffff;
  DAT_01dbfd20 = 0;
  DAT_01dbfd24 = 0;
  _DAT_01dbfd28 = 0;
  _DAT_01dbfd2c = 0;
  _DAT_01dbfd30 = 0;
  _DAT_01dbfd34 = 0;
  _DAT_01dbfd38 = 0;
  _DAT_01dbfd3c = 0;
  _DAT_01dbfd40 = 0;
  _DAT_01dbfd44 = 0;
  _DAT_01dbfd48 = 0;
  _DAT_01dbfd4c = 0;
  _DAT_01dbfd50 = 0;
  _DAT_01dbfd54 = 0;
  _DAT_01dbfd58 = 0;
  DAT_01dbfd5c = 0;
  DAT_01dbfd60 = 0;
  DAT_01dbfd64 = 0;
  _DAT_01dbfd68 = 0;
  _DAT_01dbfd6c = 0;
  _DAT_01dbfd70 = 0;
  _DAT_01dbfd74 = 0;
  _DAT_01dbfd78 = 0;
  _DAT_01dbfd7c = 0;
  _DAT_01dbfd80 = 0;
  _DAT_01dbfd84 = 0;
  _DAT_01dbfd88 = 0;
  _DAT_01dbfd8c = 0;
  _DAT_01dbfd90 = 0;
  _DAT_01dbfd94 = 0;
  _DAT_01dbfd98 = 0;
  DAT_01dbfd9c = 0;
  DAT_01dbfde0 = 0;
  DAT_01dbfde4 = 0;
  _DAT_01dbfde8 = 0;
  _DAT_01dbfdec = 0;
  _DAT_01dbfdf0 = 0;
  _DAT_01dbfdf4 = 0;
  _DAT_01dbfdf8 = 0;
  _DAT_01dbfdfc = 0;
  _DAT_01dbfe00 = 0;
  _DAT_01dbfe04 = 0;
  _DAT_01dbfe08 = 0;
  _DAT_01dbfe0c = 0;
  _DAT_01dbfe10 = 0;
  _DAT_01dbfe14 = 0;
  _DAT_01dbfe18 = 0;
  _DAT_01dbfe1c = 0;
  DAT_01dc0e04 = 0;
  DAT_01dc0e08 = 0;
  DAT_01dc0e0c = 0;
  return;
}

// 00CBAC10  cItemGetDisp::cItemGetDisp_2  size=33  [class]
void __fastcall cItemGetDisp::cItemGetDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBAC40  FUN_00cbac40  size=29  [callgraph]
undefined4 FUN_00cbac40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(8,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cItemGetDisp::cItemGetDisp();
    return uVar2;
  }
  return 0;
}

// 00CD4C60  cItemGetDisp::vf00  size=53  [class]
undefined4 * __thiscall cItemGetDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

