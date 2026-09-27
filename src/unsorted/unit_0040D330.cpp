// src/unsorted/unit_0040D330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040D330..0040D390, 3 functions

#include "types.h"

// 0040D330  FUN_0040d330  size=48  [run]
void FUN_0040d330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_2;
  D3DXMatrixRotationX();
  D3DXMatrixMultiply(param_1,&puStack_58,param_3);
  return;
}

// 0040D360  FUN_0040d360  size=48  [run]
void FUN_0040d360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_2;
  D3DXMatrixRotationY();
  D3DXMatrixMultiply(param_1,&puStack_58,param_3);
  return;
}

// 0040D390  FUN_0040d390  size=48  [run]
void FUN_0040d390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_2;
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(param_1,&puStack_58,param_3);
  return;
}

