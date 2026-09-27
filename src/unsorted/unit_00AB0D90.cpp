// src/unsorted/unit_00AB0D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AB0D90..00AB0D90, 1 functions

#include "mgrr.h"

// 00AB0D90  FUN_00ab0d90  size=78  [run]
void __fastcall FUN_00ab0d90(int param_1)

{
  if (*(int *)(param_1 + 0xb8c) != 0) {
    *(undefined4 *)(param_1 + 0xb94) = 0;
    if (*(int *)(param_1 + 0xb98) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xb8c),0);
      *(undefined4 *)(param_1 + 0xb98) = 0;
    }
    *(undefined4 *)(param_1 + 0xb8c) = 0;
    *(undefined4 *)(param_1 + 0xb90) = 0;
  }
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  return;
}

