// src/unsorted/unit_00EC2170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC2170..00EC2170, 1 functions

#include "types.h"

// 00EC2170  FUN_00ec2170  size=180  [run]
void __thiscall FUN_00ec2170(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  uVar1 = 0;
  piVar8 = param_1;
  do {
    if (*piVar8 == -1) {
      piVar8 = param_1 + uVar1 * 3;
      *piVar8 = param_2;
      piVar8[2] = param_3;
      piVar8[1] = 1;
      goto LAB_00ec21a3;
    }
    uVar1 = uVar1 + 1;
    piVar8 = piVar8 + 3;
  } while (uVar1 < 8);
  FUN_00dd5650(&DAT_016d4528);
LAB_00ec21a3:
  if ((((param_2 != 0xfffd) && (param_1[0x19] == 0)) && (param_1[0x1a] == 0)) &&
     (param_1[0x1b] == 0)) {
    uVar9 = 0x41700000;
    uVar2 = FUN_00eaadb0(0x28);
    uVar3 = FUN_00eaadb0(100);
    uVar4 = FUN_00eaadb0(0);
    uVar5 = FUN_00eaadb0(0x28);
    uVar6 = FUN_00eaadb0(100);
    uVar7 = FUN_00eaadb0(0);
    FUN_00ec1b70(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar9);
  }
  return;
}

