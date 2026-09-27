// src/effect/EffectCallParam.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DFFB60..00DFFB60, 1 functions

#include "mgrr.h"

// 00DFFB60  EffectCallParam::setObjBaseSpd  size=43  [class]
void __thiscall EffectCallParam::setObjBaseSpd(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c800();
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
    return;
  }
  FUN_00dd5650(&DAT_016ca57c);
  return;
}

