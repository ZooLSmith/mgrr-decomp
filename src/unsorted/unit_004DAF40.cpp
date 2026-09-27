// src/unsorted/unit_004DAF40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004DAF40..004DB1A0, 4 functions

#include "types.h"

// 004DAF40  FUN_004daf40  size=52  [run]
void FUN_004daf40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  thunk_FUN_00ddc1d0(local_50,param_2,param_4);
  D3DXMatrixMultiply(param_1,local_50,param_3);
  return;
}

// 004DB010  FUN_004db010  size=47  [run]
void FUN_004db010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_3;
  D3DXMatrixRotationX();
  D3DXVec3TransformNormal(param_1,param_2,&puStack_58);
  return;
}

// 004DB040  FUN_004db040  size=47  [run]
void FUN_004db040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_3;
  D3DXMatrixRotationX();
  D3DXVec3TransformNormal(param_1,param_2,&puStack_58);
  return;
}

// 004DB1A0  FUN_004db1a0  size=81  [run]
void __thiscall FUN_004db1a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x2f0) = *param_2;
  *(undefined4 *)(param_1 + 0x2f4) = param_2[1];
  *(undefined4 *)(param_1 + 0x2f8) = param_2[2];
  *(undefined4 *)(param_1 + 0x2fc) = param_2[3];
  *(undefined4 *)(param_1 + 0x300) = *param_3;
  *(undefined4 *)(param_1 + 0x304) = param_3[1];
  *(undefined4 *)(param_1 + 0x308) = param_3[2];
  *(undefined4 *)(param_1 + 0x30c) = param_3[3];
  return;
}

