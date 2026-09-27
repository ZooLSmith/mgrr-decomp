// src/unsorted/unit_0093BDB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093BDB0..0093BDD0, 3 functions

#include "types.h"

// 0093BDB0  FUN_0093bdb0  size=1  [run]
void FUN_0093bdb0(void)

{
  return;
}

// 0093BDC0  FUN_0093bdc0  size=1  [run]
void FUN_0093bdc0(void)

{
  return;
}

// 0093BDD0  FUN_0093bdd0  size=228  [run]
void FUN_0093bdd0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  
  if ((param_1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x13e0) = 0;
    switch(param_2) {
    case 0:
      uVar2 = FUN_00b7c980(0);
      FUN_00b94770(uVar2);
      fVar4 = (float10)FUN_00bc2f00(0);
      FUN_00be8310((float)fVar4);
      break;
    case 1:
      *(undefined4 *)(iVar1 + 0x13e8) = 0x43f00000;
      *(undefined4 *)(iVar1 + 0x13e0) = 1;
      FUN_00bda2b0(0x42c80000);
      return;
    case 2:
      *(undefined4 *)(iVar1 + 0x13e0) = 4;
      *(undefined4 *)(iVar1 + 0x13f0) = 0x43f00000;
      break;
    case 3:
      piVar3 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar3 + 0x3c))(1000);
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x13e0) = 2;
      *(undefined4 *)(iVar1 + 0x13ec) = 0x43f00000;
      break;
    default:
      goto switchD_0093be03_default;
    }
    FUN_00bda2b0(0x42480000);
  }
switchD_0093be03_default:
  return;
}

