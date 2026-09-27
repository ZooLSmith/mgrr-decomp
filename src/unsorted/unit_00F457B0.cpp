// src/unsorted/unit_00F457B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F457B0..00F45870, 3 functions

#include "mgrr.h"

// 00F457B0  FUN_00f457b0  size=132  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f457b0(void)

{
  if (DAT_01b83c2c == 0) {
    DAT_01ee5420 = 0;
  }
  else {
    DAT_01ee5420 = FUN_00fa0740(0);
  }
  if (DAT_01b83c20 == 0) {
    DAT_01ee541c = 0;
  }
  else {
    DAT_01ee541c = FUN_00fa0740(0);
  }
  DAT_01ee5418 = DAT_01ee541c;
  if (DAT_01b83c10 == 0) {
    _DAT_01ee5414 = 0;
  }
  else {
    _DAT_01ee5414 = FUN_00fa0740(0);
  }
  if (DAT_01b83c24 != 0) {
    _DAT_01ee5410 = FUN_00fa0740(0);
    return;
  }
  _DAT_01ee5410 = 0;
  return;
}

// 00F45840  FUN_00f45840  size=45  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f45840(void)

{
  FID_conflict__memcpy(&DAT_018d7130,&DAT_018d7150,0x20);
  _DAT_018d7150 = _DAT_018d5df0;
  _DAT_018d7154 = _DAT_018d5df0;
  _DAT_018d7158 = _DAT_018d5df0;
  return;
}

// 00F45870  FUN_00f45870  size=34  [run]
void __fastcall FUN_00f45870(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009ce020(param_1);
  FUN_009ce040(uVar1);
  DAT_01ee541c = FUN_00fa0740(0);
  return;
}

