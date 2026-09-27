// src/unsorted/unit_00EDAF90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDAF90..00EDAFD0, 2 functions

#include "mgrr.h"

// 00EDAF90  FUN_00edaf90  size=63  [run]
void __fastcall FUN_00edaf90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4b4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  Spline<float>::Spline<float>_2();
  return;
}

// 00EDAFD0  FUN_00edafd0  size=34  [run]
void FUN_00edafd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      switchD_0080dbae::default();
      return;
    }
  }
  return;
}

