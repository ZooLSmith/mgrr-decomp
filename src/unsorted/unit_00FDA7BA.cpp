// src/unsorted/unit_00FDA7BA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA7BA..00FDA7BA, 1 functions

#include "mgrr.h"

// 00FDA7BA  FUN_00fda7ba  size=41  [run]
void FUN_00fda7ba(void)

{
  LONG LVar1;
  _Rmtx *p_Var2;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_018e85b8);
  if (LVar1 < 0) {
    p_Var2 = (_Rmtx *)&DAT_01f8ed38;
    do {
      __Mtxdst(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x1f8ed98);
  }
  return;
}

