// src/unsorted/unit_00CBFC20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBFC20..00CBFC40, 3 functions

#include "mgrr.h"

// 00CBFC20  FUN_00cbfc20  size=15  [run]
void __fastcall FUN_00cbfc20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cbfa60();
    return;
  }
  return;
}

// 00CBFC30  FUN_00cbfc30  size=15  [run]
void __fastcall FUN_00cbfc30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cbf8b0();
    return;
  }
  return;
}

// 00CBFC40  FUN_00cbfc40  size=125  [run]
void FUN_00cbfc40(undefined4 param_1,char *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00fdbc60();
  iVar3 = iVar1 / 0x3c;
  iVar1 = iVar1 % 0x3c;
  iVar2 = FUN_00fdbc60();
  if (iVar3 < 100) {
    if (999 < iVar2) {
      iVar2 = 0;
    }
  }
  else {
    iVar3 = 99;
    iVar1 = 0x3b;
    iVar2 = 99;
  }
  _sprintf_s(param_2,param_3,"%02d:%02d.%02d",iVar3,iVar1,iVar2);
  return;
}

