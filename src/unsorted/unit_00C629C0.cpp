// src/unsorted/unit_00C629C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C629C0..00C629C0, 1 functions

#include "mgrr.h"

// 00C629C0  FUN_00c629c0  size=48  [run]
void __fastcall FUN_00c629c0(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))();
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  RayCastManager::getWork(param_1 + 5);
  return;
}

