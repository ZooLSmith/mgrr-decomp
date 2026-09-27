// lib/msvc/stl/unit_00E1AF30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1AF30..00E1AF30, 1 functions

#include "mgrr.h"

// 00E1AF30  std::numpunct<char>::numpunct<char>  size=126  [run]
undefined4 std::numpunct<char>::numpunct<char>(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_00dd34e0(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar3 = *(int *)(*param_2 + 0x18);
      bVar4 = true;
      if (iVar3 == 0) {
        iVar3 = *param_2 + 0x1c;
      }
      uVar2 = runtime_error::runtime_error_2(iVar3);
      puVar1[1] = 0;
      *puVar1 = vftable;
      FUN_00e17a50(uVar2,1);
    }
    *param_1 = (int)puVar1;
    if (bVar4) {
      FUN_00e18d90();
    }
  }
  return 4;
}

