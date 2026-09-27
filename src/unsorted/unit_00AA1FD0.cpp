// src/unsorted/unit_00AA1FD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA1FD0..00AA2010, 2 functions

#include "mgrr.h"

// 00AA1FD0  FUN_00aa1fd0  size=54  [run]
void __fastcall FUN_00aa1fd0(int param_1)

{
  Behavior::vf44();
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  return;
}

// 00AA2010  FUN_00aa2010  size=76  [run]
void __fastcall FUN_00aa2010(int param_1)

{
  switchD_0080dbae::default();
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

