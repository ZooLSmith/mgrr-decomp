// src/unsorted/unit_00559C00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00559C00..00559DE0, 4 functions

#include "mgrr.h"

// 00559C00  FUN_00559c00  size=47  [run]
void FUN_00559c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_3;
  D3DXMatrixRotationZ();
  D3DXVec3TransformNormal(param_1,param_2,&puStack_58);
  return;
}

// 00559C30  FUN_00559c30  size=47  [run]
void FUN_00559c30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  puStack_58 = local_50;
  local_54 = param_3;
  D3DXMatrixRotationZ();
  D3DXVec3TransformNormal(param_1,param_2,&puStack_58);
  return;
}

// 00559C70  FUN_00559c70  size=35  [run]
bool __thiscall FUN_00559c70(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}

// 00559DE0  FUN_00559de0  size=47  [run]
float10 FUN_00559de0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  return (float10)iVar1 / (float10)iVar2;
}

