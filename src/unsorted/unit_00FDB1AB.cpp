// src/unsorted/unit_00FDB1AB.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB1AB..00FDB1CB, 3 functions

#include "types.h"

// 00FDB1AB  FUN_00fdb1ab  size=23  [run]
void __fastcall FUN_00fdb1ab(undefined4 *param_1)

{
  __Mtxdst((_Rmtx *)*param_1);
  FUN_00dd4920(*param_1);
  return;
}

// 00FDB1C2  FUN_00fdb1c2  size=9  [run]
void __fastcall FUN_00fdb1c2(undefined4 *param_1)

{
  __Mtxlock((_Rmtx *)*param_1);
  return;
}

// 00FDB1CB  FUN_00fdb1cb  size=9  [run]
void __fastcall FUN_00fdb1cb(undefined4 *param_1)

{
  __Mtxunlock((_Rmtx *)*param_1);
  return;
}

