// src/unsorted/unit_00ACCCC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACCCC0..00ACCCC0, 1 functions

#include "mgrr.h"

// 00ACCCC0  FUN_00acccc0  size=314  [run]
int __thiscall FUN_00acccc0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = param_2;
  uStack_10 = 0xacccce;
  Bh0064::vfD8();
  if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
    if (param_2 == 0) {
      iStack_c = 0;
      uStack_10 = 0xaccdef;
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))();
    }
    else {
      uStack_10 = 0xacccf8;
      iStack_c = param_1;
      FUN_008f3cb0();
      iStack_c = 1;
      uStack_10 = 0xaccd0a;
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))();
      uStack_10 = 1;
      pcStack_14 = "_hvk_hontai";
      FUN_008f2b20();
      uStack_10 = 0;
      pcStack_14 = "hvk_smoke";
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x10c))(0x18);
      FUN_008f1600(0x20);
      FUN_004066f0();
      uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x10))(&iStack_c,"_hvk_hontai");
      FUN_00910ab0(uVar2);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x10))(&pcStack_14,"_hvk_smoke");
      FUN_00910ab0(uVar2);
      FUN_009277e0();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return param_1 + 0x8dc;
        }
      }
    }
  }
  return param_1 + 0x8dc;
}

