// src/unsorted/unit_008FD480.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FD480..008FD4D0, 2 functions

#include "mgrr.h"

// 008FD480  FUN_008fd480  size=73  [run]
void FUN_008fd480(void)

{
  (**(code **)(*DAT_01f8fc58 + 0x10))(0xad903171,(uint)DAT_01f8fc58 & 0xffffff00);
  (**(code **)(*DAT_01f8fc58 + 0x10))(0xf0123245,(uint)DAT_01f8fc58 & 0xffffff00);
  (**(code **)(*DAT_01f8fc58 + 0x10))(0x2ff8c16f,(uint)DAT_01f8fc58 & 0xffffff00);
  return;
}

// 008FD4D0  FUN_008fd4d0  size=109  [run]
undefined4 FUN_008fd4d0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 & 0x20000) != 0) {
    uVar1 = 0x1b;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = 0x1b;
  }
  if ((param_1 & 0x4000) != 0) {
    uVar1 = 0x16;
  }
  if ((param_1 & 0x400000) != 0) {
    uVar1 = 0x1b;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x14;
  }
  if ((param_1 & 0x800) != 0) {
    uVar1 = 0x1b;
  }
  if ((param_1 & 0x2000000) != 0) {
    uVar1 = 0x1b;
  }
  if ((param_1 & 0x200) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}

