// src/hw/MemoryDevice.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3B80..00DD3BB0, 2 functions

#include "mgrr.h"

// 00DD3B80  Hw::MemoryDevice::allocPhysical  size=48  [class]
LPVOID __thiscall Hw::MemoryDevice::allocPhysical(int param_1,SIZE_T param_2,int param_3)

{
  LPVOID pvVar1;
  
  if (param_3 != 0x1000) {
    FUN_00dd5650(&DAT_016c45c8);
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(*(HANDLE *)(param_1 + 0x40),1,param_2);
  return pvVar1;
}

// 00DD3BB0  Hw::MemoryDevice::allocPhysical_2  size=48  [class]
LPVOID __thiscall Hw::MemoryDevice::allocPhysical_2(int param_1,SIZE_T param_2,int param_3)

{
  LPVOID pvVar1;
  
  if (param_3 != 0x1000) {
    FUN_00dd5650(&DAT_016c45c8);
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(*(HANDLE *)(param_1 + 0x40),1,param_2);
  return pvVar1;
}

