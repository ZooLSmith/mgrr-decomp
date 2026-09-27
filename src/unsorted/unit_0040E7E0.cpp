// src/unsorted/unit_0040E7E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040E7E0..0040E880, 4 functions

#include "types.h"

// 0040E7E0  FUN_0040e7e0  size=47  [run]
void FUN_0040e7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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

// 0040E810  FUN_0040e810  size=47  [run]
void FUN_0040e810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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

// 0040E840  FUN_0040e840  size=51  [run]
void FUN_0040e840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  FUN_00ddc1d0(local_50,param_3,param_4);
  D3DXVec3TransformNormal(param_1,param_2,local_50);
  return;
}

// 0040E880  FUN_0040e880  size=51  [run]
void FUN_0040e880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  FUN_00ddc1d0(local_50,param_3,param_4);
  D3DXVec3TransformNormal(param_1,param_2,local_50);
  return;
}

