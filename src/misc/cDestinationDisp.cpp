// src/misc/cDestinationDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7720..00CD1BE0, 3 functions

#include "types.h"

// 00CB7720  cDestinationDisp::cDestinationDisp  size=224  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cDestinationDisp::cDestinationDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc0444 = 0xffffffff;
  DAT_01dc041c = 0;
  DAT_01dc03f4 = 0;
  param_1[2] = 0;
  DAT_01dc0448 = 0xffffffff;
  DAT_01dc0420 = 0;
  DAT_01dc03f8 = 0;
  param_1[3] = 0;
  _DAT_01dc044c = 0xffffffff;
  _DAT_01dc0424 = 0;
  _DAT_01dc03fc = 0;
  param_1[4] = 0;
  _DAT_01dc0450 = 0xffffffff;
  _DAT_01dc0428 = 0;
  _DAT_01dc0400 = 0;
  param_1[5] = 0;
  _DAT_01dc0454 = 0xffffffff;
  _DAT_01dc042c = 0;
  _DAT_01dc0404 = 0;
  param_1[6] = 0;
  _DAT_01dc0458 = 0xffffffff;
  _DAT_01dc0430 = 0;
  _DAT_01dc0408 = 0;
  param_1[7] = 0;
  _DAT_01dc045c = 0xffffffff;
  _DAT_01dc0434 = 0;
  _DAT_01dc040c = 0;
  param_1[8] = 0;
  _DAT_01dc0460 = 0xffffffff;
  _DAT_01dc0438 = 0;
  _DAT_01dc0410 = 0;
  param_1[9] = 0;
  _DAT_01dc0464 = 0xffffffff;
  _DAT_01dc043c = 0;
  _DAT_01dc0414 = 0;
  param_1[10] = 0;
  _DAT_01dc0468 = 0xffffffff;
  _DAT_01dc0440 = 0;
  _DAT_01dc0418 = 0;
  return;
}

// 00CB7830  FUN_00cb7830  size=29  [callgraph]
undefined4 FUN_00cb7830(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x2c,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cDestinationDisp::cDestinationDisp();
    return uVar2;
  }
  return 0;
}

// 00CD1BE0  cDestinationDisp::vf00  size=69  [class]
int * __thiscall cDestinationDisp::vf00(int *param_1,byte param_2)

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

