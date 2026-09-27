// src/effect/cEffectDatsuDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7BB0..00CD2A30, 3 functions

#include "types.h"

// 00CB7BB0  cEffectDatsuDisp::cEffectDatsuDisp_2  size=51  [class]
void __fastcall cEffectDatsuDisp::cEffectDatsuDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08b8 = 0;
  DAT_01dc08bc = 0;
  DAT_01dc08c0 = 0;
  return;
}

// 00CB7BF0  cEffectDatsuDisp::cEffectDatsuDisp  size=52  [class]
undefined4 * cEffectDatsuDisp::cEffectDatsuDisp(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc08b8 = 0;
    DAT_01dc08bc = 0;
    DAT_01dc08c0 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD2A30  cEffectDatsuDisp::vf00  size=71  [class]
undefined4 * __thiscall cEffectDatsuDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc08b8 = 0;
  DAT_01dc08bc = 0;
  DAT_01dc08c0 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

