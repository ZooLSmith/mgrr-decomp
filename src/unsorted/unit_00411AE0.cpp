// src/unsorted/unit_00411AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411AE0..00411AE0, 1 functions

#include "types.h"

// 00411AE0  FUN_00411ae0  size=247  [run]
void __fastcall FUN_00411ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_160 [348];
  
  FUN_004039a0(1,param_1,0);
  FUN_00e021c0(param_1);
  FUN_00dffb30(param_1 + 0x2d4);
  FUN_00a8c8b0(param_1[300],local_160);
  FUN_00e5e0c0("r204_se_labo_glass01",param_1,0xffffffff,0);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x2d0] = 1;
  if (DAT_018b9174 == 0x220) {
    iVar1 = param_1[0x13b];
    iVar2 = FUN_00e03ea0(&DAT_0163cc0c);
    if (iVar1 == iVar2) {
      FUN_00c81e40(0x43);
      return;
    }
    iVar1 = param_1[0x13b];
    iVar2 = FUN_00e03ea0(&DAT_0163cc04);
    if (iVar1 == iVar2) {
      FUN_00c81e40(0x44);
      return;
    }
    iVar1 = param_1[0x13b];
    iVar2 = FUN_00e03ea0(&DAT_0163cbfc);
    if (iVar1 == iVar2) {
      FUN_00c81e40(0x45);
    }
  }
  return;
}

