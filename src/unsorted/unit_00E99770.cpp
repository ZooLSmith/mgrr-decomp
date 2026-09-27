// src/unsorted/unit_00E99770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E99770..00E997F0, 3 functions

#include "types.h"

// 00E99770  FUN_00e99770  size=66  [run]
uint FUN_00e99770(undefined1 *param_1)

{
  uint uVar1;
  int local_8;
  int local_4;
  
  uVar1 = FUN_00e98bb0(&local_8);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  if (local_8 != 0 || local_4 != 0) {
    *param_1 = 1;
    return 1;
  }
  *param_1 = 0;
  return 1;
}

// 00E997C0  FUN_00e997c0  size=41  [run]
undefined4 FUN_00e997c0(float *param_1)

{
  char cVar1;
  double local_8;
  
  cVar1 = FUN_00e98cd0(&local_8);
  if (cVar1 != '\0') {
    *param_1 = (float)local_8;
    return 1;
  }
  return 0;
}

// 00E997F0  FUN_00e997f0  size=118  [run]
int * __thiscall FUN_00e997f0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_1 = iVar2;
  if (iVar2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  if ((int *)param_2[1] != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)param_2[1] + 0xc))();
    iVar2 = FUN_00dd29b0(uVar1,0x20,0,0);
    if (iVar2 != 0) {
      (**(code **)(*(int *)param_2[1] + 8))(iVar2);
      param_1[1] = iVar2;
      return param_1;
    }
  }
  param_1[1] = 0;
  return param_1;
}

