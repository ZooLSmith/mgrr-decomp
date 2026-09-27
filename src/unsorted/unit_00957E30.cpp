// src/unsorted/unit_00957E30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00957E30..00957EF0, 2 functions

#include "mgrr.h"

// 00957E30  FUN_00957e30  size=160  [run]
void __thiscall FUN_00957e30(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_0164fcc4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_0163e534);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eRoom");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0x24);
  }
  return;
}

// 00957EF0  FUN_00957ef0  size=3  [run]
void FUN_00957ef0(void)

{
  return;
}

