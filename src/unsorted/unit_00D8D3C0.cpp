// src/unsorted/unit_00D8D3C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8D3C0..00D8D400, 2 functions

#include "types.h"

// 00D8D3C0  FUN_00d8d3c0  size=49  [run]
void __fastcall FUN_00d8d3c0(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  param_3 = param_3 & 1;
  if (param_3 == 0) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = *unaff_ESI;
  }
  *param_1 = uVar1;
  if (param_3 == 0) {
    uVar1 = param_2[1];
  }
  else {
    uVar1 = unaff_ESI[1];
  }
  param_1[1] = uVar1;
  if (param_3 != 0) {
    param_1[2] = unaff_ESI[2];
    return;
  }
  param_1[2] = param_2[2];
  return;
}

// 00D8D400  FUN_00d8d400  size=39  [run]
float10 FUN_00d8d400(float *param_1,float *param_2,float *param_3)

{
  return ((float10)*param_1 - (float10)*param_3) * ((float10)param_2[2] - (float10)param_3[2]) -
         ((float10)*param_2 - (float10)*param_3) * ((float10)param_1[2] - (float10)param_3[2]);
}

