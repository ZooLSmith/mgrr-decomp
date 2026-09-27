// src/misc/Entity.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A7C810..00A7C810, 1 functions

#include "mgrr.h"

// 00A7C810  Entity::createAnimation  size=88  [class]
bool __fastcall Entity::createAnimation(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00dd5650(&DAT_01663db0);
    return true;
  }
  iVar1 = FUN_00dd3500(0x344,&DAT_01b7bd48);
  if (iVar1 != 0) {
    iVar1 = FUN_00e35080();
    *(int *)(param_1 + 0x40) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return false;
}

