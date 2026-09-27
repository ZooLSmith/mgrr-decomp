// src/unsorted/unit_015F2280.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 015F2280..015F22D0, 5 functions

#include "mgrr.h"

// 015F2280  FUN_015f2280  size=10  [run]
void FUN_015f2280(void)

{
  FUN_00f4e3d0();
  return;
}

// 015F2290  FUN_015f2290  size=10  [run]
void FUN_015f2290(void)

{
  FUN_00fa5c80();
  return;
}

// 015F22A0  FUN_015f22a0  size=10  [run]
void FUN_015f22a0(void)

{
  Hw::cIndexBufferHeap::cIndexBufferHeap();
  return;
}

// 015F22B0  FUN_015f22b0  size=32  [run]
void FUN_015f22b0(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00fa5c80();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 015F22D0  FUN_015f22d0  size=32  [run]
void FUN_015f22d0(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    Hw::cIndexBufferHeap::cIndexBufferHeap();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

