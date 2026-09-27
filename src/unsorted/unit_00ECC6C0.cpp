// src/unsorted/unit_00ECC6C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECC6C0..00ECC6C0, 1 functions

#include "mgrr.h"

// 00ECC6C0  FUN_00ecc6c0  size=114  [run]
void FUN_00ecc6c0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_4 = param_4 * -1.0;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_1 = *param_2 + param_4 * *param_3;
  param_1[1] = param_2[1] + fVar1 * param_4;
  param_1[2] = param_2[2] + fVar2 * param_4;
  param_1[3] = param_2[3] + param_4 * fVar3;
  return;
}

