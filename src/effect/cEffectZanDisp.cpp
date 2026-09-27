// src/effect/cEffectZanDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7CF0..00CD2B30, 3 functions

#include "mgrr.h"
#include "cEffectZanDisp.h"

// 00CB7CF0  cEffectZanDisp::cEffectZanDisp  size=51  [class]
void __fastcall cEffectZanDisp::cEffectZanDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08d0 = 0;
  DAT_01dc08d4 = 0;
  DAT_01dc08d8 = 0;
  return;
}

// 00CB7D30  cEffectZanDisp::cEffectZanDisp_2  size=52  [class]
undefined4 * cEffectZanDisp::cEffectZanDisp_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc08d0 = 0;
    DAT_01dc08d4 = 0;
    DAT_01dc08d8 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD2B30  cEffectZanDisp::vf00  size=71  [class]
undefined4 * __thiscall cEffectZanDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08d0 = 0;
  DAT_01dc08d4 = 0;
  DAT_01dc08d8 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

