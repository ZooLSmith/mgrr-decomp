// src/unsorted/unit_00D64910.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D64910..00D64910, 1 functions

#include "types.h"

// 00D64910  FUN_00d64910  size=256  [run]
void __fastcall FUN_00d64910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e03ea0("PD20_EVE2");
  if (DAT_018b9178 == iVar1) {
    iVar1 = *(int *)(param_1 + 300);
    if (iVar1 == 0) {
      DAT_01bea060 = DAT_01bea060 | 0x48000000;
      DAT_01bea070 = DAT_01bea070 | 0x210400;
      (**(code **)(*(int *)(param_1 + 0x11c) + 4))(0xc,0,1);
      *(undefined4 *)(param_1 + 300) = 1;
    }
    else if (iVar1 == 1) {
      iVar1 = FUN_00999fa0();
      if (iVar1 == 2) {
        DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
        DAT_01bea060 = DAT_01bea060 & 0xb7ffffff;
        FUN_00d5ea40("PD20_VR",1,0);
        DAT_01bea070 = DAT_01bea070 & 0xfffeffff;
        *(undefined4 *)(param_1 + 300) = 2;
        return;
      }
      if ((iVar1 == 1) || (iVar1 == -1)) {
        *(undefined4 *)(param_1 + 300) = 2;
        FUN_00a4ac40(0xd30,"Pd30_MOVIE",0xd010);
        return;
      }
    }
    else if (iVar1 == 2) {
      DAT_01bea070 = DAT_01bea070 & 0xfffffbff;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      return;
    }
  }
  return;
}

