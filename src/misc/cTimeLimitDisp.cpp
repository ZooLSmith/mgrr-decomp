// src/misc/cTimeLimitDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBFCF0..00CD8E30, 3 functions

#include "mgrr.h"
#include "cTimeLimitDisp.h"

// 00CBFCF0  cTimeLimitDisp::cTimeLimitDisp  size=33  [class]
void __fastcall cTimeLimitDisp::cTimeLimitDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBFD20  cTimeLimitDisp::cTimeLimitDisp_2  size=54  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cTimeLimitDisp::cTimeLimitDisp_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    _DAT_01dc1358 = 0;
    _DAT_01dc135c = 0;
    DAT_01dc1360 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD8E30  cTimeLimitDisp::vf00  size=53  [class]
undefined4 * __thiscall cTimeLimitDisp::vf00(undefined4 *param_1,byte param_2)

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

