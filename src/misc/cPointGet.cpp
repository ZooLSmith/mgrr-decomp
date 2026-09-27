// src/misc/cPointGet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBFF0..00CD5990, 3 functions

#include "types.h"

// 00CBBFF0  cPointGet::cPointGet  size=403  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPointGet::cPointGet(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc4dc0 = 0;
  DAT_01dc4dc4 = 0;
  DAT_01dbf9b4 = 0;
  DAT_01dc4dc8 = 0;
  DAT_01dbf98c = 0;
  DAT_01dc4dcc = 0;
  param_1[2] = 0;
  DAT_01dc4dd0 = 0;
  DAT_01dbf9b8 = 0;
  DAT_01dc4dd4 = 0;
  DAT_01dbf990 = 0;
  DAT_01dc4dd8 = 0;
  DAT_01dc4ddc = 0;
  param_1[3] = 0;
  _DAT_01dc4de0 = 0;
  _DAT_01dbf9bc = 0;
  _DAT_01dc4de4 = 0;
  _DAT_01dbf994 = 0;
  _DAT_01dc4de8 = 0;
  _DAT_01dc4dec = 0;
  param_1[4] = 0;
  _DAT_01dc4df0 = 0;
  _DAT_01dbf9c0 = 0;
  _DAT_01dc4df4 = 0;
  _DAT_01dbf998 = 0;
  _DAT_01dc4df8 = 0;
  _DAT_01dc4dfc = 0;
  param_1[5] = 0;
  _DAT_01dc4e00 = 0;
  _DAT_01dbf9c4 = 0;
  _DAT_01dc4e04 = 0;
  _DAT_01dbf99c = 0;
  _DAT_01dc4e08 = 0;
  _DAT_01dc4e0c = 0;
  param_1[6] = 0;
  _DAT_01dc4e10 = 0;
  _DAT_01dbf9c8 = 0;
  _DAT_01dc4e14 = 0;
  _DAT_01dbf9a0 = 0;
  _DAT_01dc4e18 = 0;
  _DAT_01dc4e1c = 0;
  param_1[7] = 0;
  _DAT_01dc4e20 = 0;
  _DAT_01dbf9cc = 0;
  _DAT_01dc4e24 = 0;
  _DAT_01dbf9a4 = 0;
  _DAT_01dc4e28 = 0;
  _DAT_01dc4e2c = 0;
  param_1[8] = 0;
  _DAT_01dc4e30 = 0;
  _DAT_01dbf9d0 = 0;
  _DAT_01dc4e34 = 0;
  _DAT_01dbf9a8 = 0;
  _DAT_01dc4e38 = 0;
  _DAT_01dc4e3c = 0;
  param_1[9] = 0;
  _DAT_01dc4e40 = 0;
  _DAT_01dbf9d4 = 0;
  _DAT_01dc4e44 = 0;
  _DAT_01dbf9ac = 0;
  _DAT_01dc4e48 = 0;
  _DAT_01dc4e4c = 0;
  param_1[10] = 0;
  _DAT_01dc4e50 = 0;
  _DAT_01dbf9d8 = 0;
  _DAT_01dc4e54 = 0;
  _DAT_01dbf9b0 = 0;
  _DAT_01dc4e58 = 0;
  _DAT_01dc4e5c = 0;
  return;
}

// 00CBC1C0  FUN_00cbc1c0  size=29  [callgraph]
undefined4 FUN_00cbc1c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x2c,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cPointGet::cPointGet();
    return uVar2;
  }
  return 0;
}

// 00CD5990  cPointGet::vf00  size=69  [class]
int * __thiscall cPointGet::vf00(int *param_1,byte param_2)

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

