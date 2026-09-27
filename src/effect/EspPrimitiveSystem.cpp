// src/effect/EspPrimitiveSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F51100..00F51100, 1 functions

#include "types.h"

// 00F51100  EspPrimitiveSystem::createIndexBuffer  size=84  [class]
bool EspPrimitiveSystem::createIndexBuffer(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 & 1) != 0) {
    FUN_00dd5650(&DAT_016e0e30,param_2,2);
  }
  FUN_00fa44a0();
  iVar1 = FUN_00f9c7d0((param_2 >> 1) * param_3,&DAT_01ee6634 + DAT_01ee65c0 * 0x1c);
  return iVar1 != 0;
}

