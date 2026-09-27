// src/unsorted/unit_0049CAE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0049CAE0..0049CB40, 3 functions

#include "mgrr.h"

// 0049CAE0  FUN_0049cae0  size=48  [run]
void FUN_0049cae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_50 [76];
  
  FUN_00ddd140(local_50,param_2);
  D3DXMatrixMultiply(param_1,local_50,param_3);
  return;
}

// 0049CB10  FUN_0049cb10  size=48  [run]
void FUN_0049cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_50 [76];
  
  FUN_00ddd140(local_50,param_2);
  D3DXMatrixMultiply(param_1,local_50,param_3);
  return;
}

// 0049CB40  FUN_0049cb40  size=160  [run]
void __thiscall FUN_0049cb40(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_0163e534);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eTarget");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x1c);
  }
  return;
}

