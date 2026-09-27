// src/unsorted/unit_004D9E40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D9E40..004D9EF0, 2 functions

#include "types.h"

// 004D9E40  FUN_004d9e40  size=164  [run]
void __fastcall FUN_004d9e40(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0xdc0) & 1) == 0)) &&
     (*(float *)(param_1 + 0x11ec) <= 0.0)) {
    iVar2 = FUN_004bfee0();
    if ((iVar2 == 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
      bVar1 = false;
      fVar4 = (float10)FUN_004b5050();
      if (fVar4 < (float10)0.5 != (fVar4 == (float10)0.5)) {
        FUN_004ba0a0();
        uVar3 = FUN_004b72d0();
        if (uVar3 < 7) {
          bVar1 = true;
        }
      }
      iVar2 = FUN_004ba1b0();
      if ((iVar2 != 0) && (!bVar1)) {
        FUN_004d91d0();
        return;
      }
      FUN_004d95e0();
      return;
    }
  }
  return;
}

// 004D9EF0  FUN_004d9ef0  size=320  [run]
/* WARNING: Switch with 1 destination removed at 0x004d9fa5 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x004d9fbf : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x004d9fd9 : 4 cases all go to same destination */

void __fastcall FUN_004d9ef0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 == 0x20000) {
      FUN_004c12f0();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_004d9aa0();
        break;
      case 0x10002:
        FUN_004c03f0();
        break;
      case 0x10007:
        FUN_004d9e40();
      }
    }
  }
  else if (iVar1 < 0x30001) {
    switch(iVar1) {
    case 0x20007:
      FUN_004c2680();
      break;
    case 0x20008:
      FUN_004c29e0();
    }
  }
  else if ((((0x40000 < iVar1) && (0x50000 < iVar1)) && (0x60000 < iVar1)) &&
          ((iVar1 < 0x70001 && (iVar1 != 0x70000)))) {
    switch(iVar1) {
    case 0x60001:
      FUN_004c9a40();
    }
  }
  iVar1 = FUN_00ac82f0();
  if (iVar1 != 0) {
    FUN_004bf790();
  }
  FUN_004d2320();
  return;
}

