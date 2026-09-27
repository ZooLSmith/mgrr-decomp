// src/unsorted/unit_00A19620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A19620..00A19680, 2 functions

#include "types.h"

// 00A19620  FUN_00a19620  size=89  [run]
undefined4 * __fastcall FUN_00a19620(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_00a06cd0();
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_00a06470();
  return param_1;
}

// 00A19680  FUN_00a19680  size=69  [run]
void FUN_00a19680(void)

{
  int extraout_ECX;
  
  cModelDataResource::release();
  FUN_00a147a0();
  FUN_00a06cd0();
  *(undefined4 *)(extraout_ECX + 0xe0) = 0;
  *(undefined4 *)(extraout_ECX + 0xe4) = 0;
  *(undefined4 *)(extraout_ECX + 0xe8) = 0;
  *(undefined4 *)(extraout_ECX + 0xec) = 0;
  *(undefined4 *)(extraout_ECX + 0xf0) = 0;
  return;
}

