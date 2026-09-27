// src/unsorted/unit_0094F460.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094F460..0094F460, 1 functions

#include "mgrr.h"

// 0094F460  FUN_0094f460  size=403  [run]
void FUN_0094f460(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 - 1U < 0x20) {
    bVar2 = (byte)(param_2 - 1U);
    if (param_1 == 0x15e901d6) {
      iVar1 = FUN_00d46780();
      if (iVar1 == 0) {
        iVar1 = FUN_00d467a0();
        if (iVar1 != 0) {
          DAT_01b7383c = DAT_01b7383c | 1 << (bVar2 & 0x1f);
        }
      }
      else {
        DAT_01b73824 = DAT_01b73824 | 1 << (bVar2 & 0x1f);
      }
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x263b6dae) {
      DAT_01b73818 = DAT_01b73818 | 1 << (bVar2 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x513c5d38) {
      DAT_01b73830 = DAT_01b73830 | 1 << (bVar2 & 0x1f);
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x3855170f) {
      iVar1 = FUN_00d46780();
      if (iVar1 == 0) {
        iVar1 = FUN_00d467a0();
        if (iVar1 != 0) {
          DAT_01b75984 = DAT_01b75984 | 1 << (bVar2 & 0x1f);
        }
      }
      else {
        DAT_01b7597c = DAT_01b7597c | 1 << (bVar2 & 0x1f);
      }
      FUN_009c8c00();
      return;
    }
    if (param_1 == 0x4cbfda41) {
      iVar1 = FUN_00d46780();
      if (iVar1 == 0) {
        iVar1 = FUN_00d467a0();
        if (iVar1 != 0) {
          DAT_01b75988 = DAT_01b75988 | 1 << (bVar2 & 0x1f);
        }
      }
      else {
        DAT_01b75980 = DAT_01b75980 | 1 << (bVar2 & 0x1f);
      }
      FUN_009c8c00();
      return;
    }
  }
  return;
}

