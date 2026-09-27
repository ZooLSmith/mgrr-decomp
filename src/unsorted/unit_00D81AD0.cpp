// src/unsorted/unit_00D81AD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D81AD0..00D81AD0, 1 functions

#include "types.h"

// 00D81AD0  FUN_00d81ad0  size=167  [run]
void FUN_00d81ad0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_01dc538c;
  if (DAT_01dc538c != DAT_01dc538c + DAT_01dc5394) {
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        iVar2 = 0x3f;
        do {
          cEspControler::~cEspControler();
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
        FUN_00dd4920(iVar1);
      }
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_01dc538c + DAT_01dc5394);
  }
  FUN_00dd7270();
  DAT_01dc5394 = 0;
  if (DAT_01dc538c != (int *)0x0) {
    DAT_01dc5394 = 0;
    if (DAT_01dc5398 != 0) {
      FUN_00dd48d0(DAT_01dc538c,0);
      DAT_01dc5398 = 0;
    }
    DAT_01dc538c = (int *)0x0;
    DAT_01dc5390 = 0;
  }
  return;
}

