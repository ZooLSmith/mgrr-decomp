// src/unsorted/unit_009DCAF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DCAF0..009DCAF0, 1 functions

#include "types.h"

// 009DCAF0  FUN_009dcaf0  size=142  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009dcaf0(int param_1,int param_2,int param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_2 + 0x50);
  local_1c = *(float *)(param_2 + 0x54);
  local_18 = *(float *)(param_2 + 0x58);
  local_14 = *(float *)(param_2 + 0x5c);
  if ((*(uint *)(param_2 + 0x9c) & 0x8000000) == 0) {
    local_20 = _DAT_018d5df0 * local_20;
    local_1c = _DAT_018d5df0 * local_1c;
    local_18 = local_18 * _DAT_018d5df0;
  }
  if (*(int *)(param_3 + 4) != 0) {
    local_14 = local_14 * *(float *)(*(int *)(param_3 + 4) + 0x1c);
  }
  FUN_00f9ec50(*(int *)(param_1 + 0x78) + 0x34,&local_20,4);
  return;
}

