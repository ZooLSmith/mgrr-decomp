// src/unsorted/unit_004FBAC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004FBAC0..004FBB40, 4 functions

#include "mgrr.h"

// 004FBAC0  FUN_004fbac0  size=13  [run]
bool __fastcall FUN_004fbac0(int param_1)

{
  return *(int *)(param_1 + 0xdc4) == 2;
}

// 004FBAE0  FUN_004fbae0  size=51  [run]
void __fastcall FUN_004fbae0(int param_1)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0xea4) == 0) &&
     (fVar1 = *(float *)(param_1 + 0xde4), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
    *(undefined4 *)(param_1 + 0xea4) = 1;
    *(undefined4 *)(param_1 + 0xf4c) = 0x3f000000;
  }
  return;
}

// 004FBB20  FUN_004fbb20  size=32  [run]
void FUN_004fbb20(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 004FBB40  FUN_004fbb40  size=61  [run]
void __fastcall FUN_004fbb40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  (**(code **)(*(int *)(param_1 + 0xdf0) + 4))();
  RayCastManager::getWork(param_1 + 0xea0);
  return;
}

