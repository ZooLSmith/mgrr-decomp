// src/unsorted/unit_0044D850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0044D850..0044D850, 1 functions

#include "mgrr.h"

// 0044D850  FUN_0044d850  size=160  [run]
int __thiscall FUN_0044d850(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_8;
  float local_4;
  
  local_4 = 100.0;
  local_8 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    if (0 < *(int *)(param_1 + 0x18d4 + iVar5 * 4)) {
      switch(iVar5) {
      case 0:
        uVar6 = 0;
        break;
      case 1:
        uVar6 = 4;
        break;
      case 2:
        uVar6 = 0x10;
        break;
      case 3:
        uVar6 = 0x17;
        break;
      default:
        goto switchD_0044d87f_default;
      }
      iVar4 = FUN_00a12210(uVar6);
switchD_0044d87f_default:
      fVar1 = *param_2 - *(float *)(iVar4 + 0x40);
      fVar3 = param_2[1] - *(float *)(iVar4 + 0x44);
      fVar2 = param_2[2] - *(float *)(iVar4 + 0x48);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      if (fVar1 < local_4) {
        local_8 = iVar5;
        local_4 = fVar1;
      }
    }
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return local_8;
    }
  } while( true );
}

