// src/unsorted/unit_00ED8080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8080..00ED8080, 1 functions

#include "mgrr.h"

// 00ED8080  FUN_00ed8080  size=232  [run]
void __fastcall FUN_00ed8080(int param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_1c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_18 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_14 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  thunk_FUN_00dde510(&local_30,&local_2c,&local_20,(float *)(param_1 + 0x4d0));
  *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + -local_30;
  *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) + local_2c;
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x1c8) + local_28;
  *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x1cc) + local_24;
  *(float *)(param_1 + 0x4d0) = local_20;
  *(float *)(param_1 + 0x4d4) = local_1c;
  *(float *)(param_1 + 0x4d8) = local_18;
  *(float *)(param_1 + 0x4dc) = local_14;
  return;
}

