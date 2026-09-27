// src/unsorted/unit_009AAD70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009AAD70..009AAD70, 1 functions

#include "mgrr.h"

// 009AAD70  FUN_009aad70  size=91  [run]
void FUN_009aad70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_01b3922c;
  if (DAT_01b3922c != 0) {
    iVar2 = FUN_00999fa0();
    if (iVar2 == 2) {
      *(undefined4 *)(iVar1 + 0x10) = 2;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    if ((*(int *)(iVar1 + 0x10) == 2) || (*(int *)(iVar1 + 0x10) == 1)) {
      DAT_01bea060 = DAT_01bea060 & 0xffffefff;
      DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
      DAT_01bea084 = DAT_01bea084 & 0xffff8fff;
      DAT_01b3922c = 0;
    }
  }
  return;
}

