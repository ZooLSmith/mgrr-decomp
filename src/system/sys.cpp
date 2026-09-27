// src/system/sys.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E91360..00E91360, 1 functions

#include "types.h"

// 00E91360  sys::String  size=52  [class]
undefined4 sys::String(void)

{
  int iVar1;
  
  if (DAT_01dda6a0 == '\0') {
    iVar1 = Hw::cHeapVariable::vf40(0x4cc20,&DAT_01b7bcf0,"sys::String");
    if (iVar1 != 0) {
      DAT_01dda6a0 = 1;
      return 1;
    }
  }
  return 0;
}

