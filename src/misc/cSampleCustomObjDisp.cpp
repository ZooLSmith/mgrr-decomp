// src/misc/cSampleCustomObjDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC5560..00CDDC70, 2 functions

#include "types.h"

// 00CC5560  cSampleCustomObjDisp::cSampleCustomObjDisp  size=33  [class]
void __fastcall cSampleCustomObjDisp::cSampleCustomObjDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CDDC70  cSampleCustomObjDisp::vf00  size=53  [class]
undefined4 * __thiscall cSampleCustomObjDisp::vf00(undefined4 *param_1,byte param_2)

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

