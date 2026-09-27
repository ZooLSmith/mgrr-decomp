// src/unsorted/unit_00921240.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00921240..00921280, 2 functions

#include "types.h"

// 00921240  FUN_00921240  size=50  [run]
int __thiscall FUN_00921240(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_009211c0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}

// 00921280  FUN_00921280  size=104  [run]
void FUN_00921280(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    FUN_0091f260(param_1,param_2,param_3);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

