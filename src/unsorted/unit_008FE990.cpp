// src/unsorted/unit_008FE990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FE990..008FE9A0, 2 functions

#include "mgrr.h"

// 008FE990  FUN_008fe990  size=6  [run]
undefined4 FUN_008fe990(void)

{
  return DAT_01b35dbc;
}

// 008FE9A0  FUN_008fe9a0  size=30  [run]
void FUN_008fe9a0(void)

{
  if (DAT_01b35dbc != (int *)0x0) {
    (**(code **)(*DAT_01b35dbc + 8))(1);
    DAT_01b35dbc = (int *)0x0;
  }
  return;
}

