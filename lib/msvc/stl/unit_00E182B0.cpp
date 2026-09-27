// lib/msvc/stl/unit_00E182B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E182B0..00E182B0, 1 functions

#include "types.h"

// 00E182B0  std::bad_alloc::bad_alloc  size=82  [run]
int std::bad_alloc::bad_alloc(char *param_1)

{
  int iVar1;
  undefined **local_c [3];
  
  iVar1 = 0;
  if ((param_1 != (char *)0x0) && (iVar1 = FUN_00dd34e0(param_1), iVar1 == 0)) {
    param_1 = (char *)0x0;
    exception::exception((exception *)local_c,&param_1);
    local_c[0] = vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01878eb0);
  }
  return iVar1;
}

