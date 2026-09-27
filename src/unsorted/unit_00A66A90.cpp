// src/unsorted/unit_00A66A90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A66A90..00A66A90, 1 functions

#include "mgrr.h"

// 00A66A90  FUN_00a66a90  size=47  [run]
void FUN_00a66a90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_3;
  D3DXMatrixRotationY();
  D3DXVec3TransformNormal(param_1,param_2,&puStack_58);
  return;
}

