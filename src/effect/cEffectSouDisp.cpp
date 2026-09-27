// src/effect/cEffectSouDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7C50..00CD2AB0, 3 functions

#include "types.h"

// 00CB7C50  cEffectSouDisp::cEffectSouDisp_2  size=51  [class]
void __fastcall cEffectSouDisp::cEffectSouDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08c4 = 0;
  DAT_01dc08c8 = 0;
  DAT_01dc08cc = 0;
  return;
}

// 00CB7C90  cEffectSouDisp::cEffectSouDisp  size=52  [class]
undefined4 * cEffectSouDisp::cEffectSouDisp(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc08c4 = 0;
    DAT_01dc08c8 = 0;
    DAT_01dc08cc = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD2AB0  cEffectSouDisp::vf00  size=71  [class]
undefined4 * __thiscall cEffectSouDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08c4 = 0;
  DAT_01dc08c8 = 0;
  DAT_01dc08cc = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

