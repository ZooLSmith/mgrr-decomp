// src/misc/cFreeMissionDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8D30..00CD43C0, 3 functions

#include "types.h"

// 00CB8D30  cFreeMissionDisp::cFreeMissionDisp  size=224  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cFreeMissionDisp::cFreeMissionDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc0080 = 0xffffffff;
  DAT_01dc0058 = 0;
  DAT_01dc0030 = 0;
  param_1[2] = 0;
  DAT_01dc0084 = 0xffffffff;
  DAT_01dc005c = 0;
  DAT_01dc0034 = 0;
  param_1[3] = 0;
  _DAT_01dc0088 = 0xffffffff;
  _DAT_01dc0060 = 0;
  _DAT_01dc0038 = 0;
  param_1[4] = 0;
  _DAT_01dc008c = 0xffffffff;
  _DAT_01dc0064 = 0;
  _DAT_01dc003c = 0;
  param_1[5] = 0;
  _DAT_01dc0090 = 0xffffffff;
  _DAT_01dc0068 = 0;
  _DAT_01dc0040 = 0;
  param_1[6] = 0;
  _DAT_01dc0094 = 0xffffffff;
  _DAT_01dc006c = 0;
  _DAT_01dc0044 = 0;
  param_1[7] = 0;
  _DAT_01dc0098 = 0xffffffff;
  _DAT_01dc0070 = 0;
  _DAT_01dc0048 = 0;
  param_1[8] = 0;
  _DAT_01dc009c = 0xffffffff;
  _DAT_01dc0074 = 0;
  _DAT_01dc004c = 0;
  param_1[9] = 0;
  _DAT_01dc00a0 = 0xffffffff;
  _DAT_01dc0078 = 0;
  _DAT_01dc0050 = 0;
  param_1[10] = 0;
  _DAT_01dc00a4 = 0xffffffff;
  _DAT_01dc007c = 0;
  _DAT_01dc0054 = 0;
  return;
}

// 00CB8E40  FUN_00cb8e40  size=29  [callgraph]
undefined4 FUN_00cb8e40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x2c,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cFreeMissionDisp::cFreeMissionDisp();
    return uVar2;
  }
  return 0;
}

// 00CD43C0  cFreeMissionDisp::vf00  size=69  [class]
int * __thiscall cFreeMissionDisp::vf00(int *param_1,byte param_2)

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

