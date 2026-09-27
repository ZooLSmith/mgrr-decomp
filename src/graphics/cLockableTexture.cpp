// src/graphics/cLockableTexture.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F97510..00F97510, 1 functions

#include "mgrr.h"

// 00F97510  cLockableTexture::unlock  size=43  [class]
undefined4 __fastcall cLockableTexture::unlock(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,0);
    if (-1 < iVar2) {
      return 1;
    }
    FUN_00dd5650(&DAT_016eb5a8);
  }
  return 0;
}

