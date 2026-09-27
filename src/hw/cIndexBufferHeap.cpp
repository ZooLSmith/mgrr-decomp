// src/hw/cIndexBufferHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9C7F0..00FAAA50, 3 functions

#include "types.h"

// 00F9C7F0  Hw::cIndexBufferHeap::cIndexBufferHeap_2  size=29  [class]
void __fastcall Hw::cIndexBufferHeap::cIndexBufferHeap_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00FA5C20  Hw::cIndexBufferHeap::cIndexBufferHeap  size=68  [class]
void __fastcall Hw::cIndexBufferHeap::cIndexBufferHeap(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = vftable;
  if (param_1[2] != 0) {
    FUN_00fa16d0(param_1[1]);
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}

// 00FAAA50  Hw::cIndexBufferHeap::vf00  size=88  [class]
undefined4 * __thiscall Hw::cIndexBufferHeap::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = vftable;
  if (param_1[2] != 0) {
    FUN_00fa16d0(param_1[1]);
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

