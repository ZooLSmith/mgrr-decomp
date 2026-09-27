// src/unsorted/unit_00F20370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F20370..00F20370, 1 functions

#include "mgrr.h"

// 00F20370  FUN_00f20370  size=319  [run]
void __thiscall FUN_00f20370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  
  local_10 = *(undefined4 *)(param_1 + 0x100);
  local_c = *(undefined4 *)(param_1 + 0x104);
  local_2c = param_3;
  local_24 = param_1 + 0x180;
  local_8 = *(undefined4 *)(param_1 + 0x108);
  local_28 = param_4;
  local_20 = param_1 + 0x170;
  local_1c = param_1 + 400;
  local_18 = param_1 + 0x1c0;
  local_14 = param_1 + 0x200;
  local_4 = *(short *)(param_1 + 0x4e);
  local_30 = (uint *)(param_1 + 0x30);
  local_34 = (uint *)(param_1 + 0x38);
  local_40 = param_2;
  local_3c = param_1 + 0x130;
  local_38 = param_1 + 0x124;
  if ((local_4 == -3) || ((*local_30 & 0x100) != 0)) {
    FUN_00efd280(&local_40,&local_34);
    return;
  }
  if ((*local_34 & 0x20) != 0) {
    FUN_00f0b6f0(&local_40,&local_34);
    return;
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    FUN_00f0bf60(&local_40,&local_34);
    return;
  }
  if ((*local_34 & 0x100000) != 0) {
    FUN_00f0d230(&local_40,&local_34);
    return;
  }
  FUN_00f0cce0(&local_40,&local_34);
  return;
}

