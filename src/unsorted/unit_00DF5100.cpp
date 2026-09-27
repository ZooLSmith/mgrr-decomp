// src/unsorted/unit_00DF5100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DF5100..00DF5100, 1 functions

#include "types.h"

// 00DF5100  FUN_00df5100  size=211  [run]
undefined4 FUN_00df5100(LPCWSTR param_1,int param_2,char param_3,char param_4,undefined4 *param_5)

{
  DWORD DVar1;
  HANDLE pvVar2;
  DWORD dwDesiredAccess;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  
  if (param_1 == (LPCWSTR)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    DVar1 = 1;
    dwDesiredAccess = 0x80000000;
    dwCreationDisposition = 3;
    goto LAB_00df515b;
  case 1:
    DVar1 = 2;
    dwDesiredAccess = 0x40000000;
    break;
  case 2:
    DVar1 = 2;
    dwDesiredAccess = 0x40000000;
    dwCreationDisposition = 2;
    goto LAB_00df515b;
  case 3:
    DVar1 = 3;
    dwDesiredAccess = 0xc0000000;
    break;
  default:
    *param_5 = 0;
    return 0x1f;
  }
  dwCreationDisposition = 4;
LAB_00df515b:
  dwFlagsAndAttributes = 0x8000000;
  if ((param_4 != '\0') && (param_2 == 0)) {
    dwFlagsAndAttributes = 0x28000000;
  }
  if (param_3 != '\0') {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x40000000;
  }
  pvVar2 = CreateFileW(param_1,dwDesiredAccess,DVar1,(LPSECURITY_ATTRIBUTES)0x0,
                       dwCreationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  *param_5 = pvVar2;
  if (pvVar2 != (HANDLE)0xffffffff) {
    return 1;
  }
  DVar1 = GetLastError();
  if ((DVar1 != 2) && (DVar1 != 3)) {
    return 2;
  }
  return 0x42;
}

