// src/misc/cTutorialDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC0970..00CD9010, 4 functions

#include "mgrr.h"
#include "cTutorialDisp.h"

// 00CC0970  cTutorialDisp::cTutorialDisp_2  size=105  [class]
void __fastcall cTutorialDisp::cTutorialDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00CC09E0  cTutorialDisp::cTutorialDisp  size=33  [class]
void __fastcall cTutorialDisp::cTutorialDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  return;
}

// 00CC0A10  FUN_00cc0a10  size=29  [callgraph]
undefined4 FUN_00cc0a10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x78,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cTutorialDisp::cTutorialDisp_2();
    return uVar2;
  }
  return 0;
}

// 00CD9010  cTutorialDisp::vf00  size=53  [class]
undefined4 * __thiscall cTutorialDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

