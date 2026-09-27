// src/unsorted/unit_00CD5090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5090..00CD5090, 1 functions

#include "types.h"

// 00CD5090  FUN_00cd5090  size=329  [run]
void __thiscall FUN_00cd5090(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if ((param_2 <= 0.8) || (1.0 < param_2)) {
    if ((param_2 <= 0.6) || (0.8 < param_2)) {
      if ((param_2 <= 0.4) || (0.6 < param_2)) {
        if ((param_2 <= 0.2) || (0.4 < param_2)) {
          fVar2 = 1.0;
          fVar1 = 10.0;
        }
        else {
          fVar1 = (param_2 - 0.2) * 5.0;
          fVar2 = fVar1 * 3.0 + 1.0;
          fVar1 = (fVar1 + 1.0) * 10.0;
        }
      }
      else {
        fVar1 = (param_2 - 0.4) * 5.0;
        fVar2 = fVar1 * 6.0 + 4.0;
        fVar1 = fVar1 * 40.0 + 20.0;
      }
    }
    else {
      fVar1 = (param_2 - 0.6) * 5.0;
      fVar2 = (fVar1 + 1.0) * 10.0;
      fVar1 = fVar1 * 140.0 + 60.0;
    }
  }
  else {
    fVar2 = 20.0;
    fVar1 = 200.0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar3 + 0x80))) &&
      (iVar3 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) &&
     ((iVar3 = *(int *)(iVar3 + 0x3f4), iVar3 != 0 && (*(int *)(iVar3 + 4) == 0x3f2)))) {
    *(float *)(iVar3 + 0x1c) = fVar2;
    *(float *)(iVar3 + 0x20) = fVar1;
    return;
  }
  return;
}

