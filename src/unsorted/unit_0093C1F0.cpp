// src/unsorted/unit_0093C1F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093C1F0..0093C1F0, 1 functions

#include "mgrr.h"

// 0093C1F0  FUN_0093c1f0  size=408  [run]
undefined4
FUN_0093c1f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_a0 [128];
  int iStack_20;
  
  if (((param_3 == 2) || (param_3 == 4)) && (iVar1 = FUN_0093e370(param_2), iVar1 == 0)) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    uVar2 = FUN_00dde2a0(0,100);
    iVar6 = 0;
    iVar1 = 0;
    while( true ) {
      switch(iVar1) {
      case 0:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 4))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      case 1:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 8))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      case 2:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 0x10))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      case 3:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 0xc))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      case 4:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 0x14))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      case 5:
        piVar3 = (int *)(**(code **)(*DAT_01b36a20 + 0x10))(param_1);
        iVar4 = (**(code **)(*piVar3 + 0x18))(param_1);
        iVar6 = iVar6 + iVar4;
        break;
      default:
        iVar6 = 100;
      }
      if ((int)(uVar2 & 0xffff) <= iVar6) break;
      iVar1 = iVar1 + 1;
      if (5 < iVar1) {
        return 0xffffffff;
      }
    }
    if (iVar1 != 5) {
      FUN_00405140(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      iStack_20 = iVar1;
      uVar5 = FUN_00c5abe0(auStack_a0);
      return uVar5;
    }
  }
  return 0xffffffff;
}

