// src/unsorted/unit_00A19870.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A19870..00A19870, 1 functions

#include "types.h"

// 00A19870  FUN_00a19870  size=89  [run]
undefined4 __thiscall FUN_00a19870(undefined4 param_1,byte param_2)

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
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

