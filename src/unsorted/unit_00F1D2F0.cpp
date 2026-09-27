// src/unsorted/unit_00F1D2F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F1D2F0..00F1D2F0, 1 functions

#include "mgrr.h"

// 00F1D2F0  FUN_00f1d2f0  size=375  [run]
void __fastcall FUN_00f1d2f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(param_1 + 300) = 0x43fa0000;
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  }
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x474) + *(float *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x478);
  *(float *)(param_1 + 0x46c) =
       *(float *)(*(int *)(param_1 + 0x24) + 0x8c) / *(float *)(*(int *)(param_1 + 0x24) + 0x84);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x474) * 1.2 + *(float *)(param_1 + 0x470);
  return;
}

