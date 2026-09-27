// src/unsorted/unit_0094FE80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094FE80..0094FE80, 1 functions

#include "mgrr.h"

// 0094FE80  FUN_0094fe80  size=107  [run]
int * FUN_0094fe80(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar1 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      piVar2 = (int *)cItemStageDropViscera::cItemStageDropViscera();
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        piVar4 = param_1;
        piVar5 = piVar2 + 2;
        for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        piVar2[0x14] = param_2;
        (**(code **)(iVar1 + 8))(param_1);
      }
      return piVar2;
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

