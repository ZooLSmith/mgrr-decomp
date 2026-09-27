// src/unsorted/unit_00CBB500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB500..00CBB640, 2 functions

#include "mgrr.h"

// 00CBB500  FUN_00cbb500  size=58  [run]
/* WARNING: Removing unreachable block (ram,0x00cbb525) */

undefined4 FUN_00cbb500(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01dc0ec0;
  LOCK();
  DAT_01dc0ec0 = param_1;
  UNLOCK();
  return uVar1;
}

// 00CBB640  FUN_00cbb640  size=343  [run]
void __thiscall FUN_00cbb640(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  param_3 = param_3 * 0.2;
  if ((param_2 <= param_3 * 0.0) || (param_3 <= param_2)) {
    if ((param_2 <= param_3) || (param_3 * 2.0 <= param_2)) {
      if ((param_2 <= param_3 * 2.0) || (param_3 * 3.0 <= param_2)) {
        if ((param_2 <= param_3 * 3.0) || (param_3 * 4.0 <= param_2)) {
          fVar2 = 1.0;
          fVar1 = 10.0;
        }
        else {
          fVar1 = 1.0 - (param_2 - param_3 * 3.0) / param_3;
          fVar2 = fVar1 * 3.0 + 1.0;
          fVar1 = (fVar1 + 1.0) * 10.0;
        }
      }
      else {
        fVar1 = 1.0 - (param_2 - param_3 * 2.0) / param_3;
        fVar2 = fVar1 * 6.0 + 4.0;
        fVar1 = fVar1 * 40.0 + 20.0;
      }
    }
    else {
      fVar1 = 1.0 - (param_2 - param_3) / param_3;
      fVar2 = (fVar1 + 1.0) * 10.0;
      fVar1 = fVar1 * 140.0 + 60.0;
    }
  }
  else {
    fVar2 = 20.0;
    fVar1 = 200.0;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if ((((*(uint *)(iVar3 + 0x1e4) < *(uint *)(iVar3 + 0xc0)) &&
       (iVar3 = *(uint *)(iVar3 + 0x1e4) * 0x400 + *(int *)(iVar3 + 0xbc), iVar3 != 0)) &&
      (iVar3 = *(int *)(iVar3 + 0x3f4), iVar3 != 0)) && (*(int *)(iVar3 + 4) == 0x3f2)) {
    *(float *)(iVar3 + 0x1c) = fVar2;
    *(float *)(iVar3 + 0x20) = fVar1;
    return;
  }
  return;
}

