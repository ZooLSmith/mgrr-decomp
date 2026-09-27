// src/managers/triggermanager/conditions/TrgCondStaFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C8E0..00C7D0B0, 2 functions

#include "mgrr.h"

// 00C7C8E0  Trigger::Cond::STA_FLAG  size=64  [class]
bool __fastcall Trigger::Cond::STA_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) >> 5]) != 0;
  }
  FUN_00dd5650(&DAT_016a9d84);
  return false;
}

// 00C7D0B0  Trigger::Cond::STA_FLAG_2  size=134  [class]
void __fastcall Trigger::Cond::STA_FLAG_2(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  
  uVar3 = 1;
  piVar2 = (int *)(param_1 + 0x34);
  iVar1 = 8;
  do {
    if (piVar2[-9] != -1) {
      if (*piVar2 == -1) {
        FUN_00dd5650(&DAT_016a9d84);
      }
      else {
        uVar3 = uVar3 & (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *piVar2 * 8) & 0x1f) &
                        (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *piVar2 * 8) >> 5]) != 0;
      }
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)(param_1 + 0x54) = uVar3 ^ 1;
  if (((uVar3 ^ 1) == 1) && (0.0 < *(float *)(param_1 + 0x30))) {
    fVar4 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x30) = (float)((float10)*(float *)(param_1 + 0x30) - fVar4);
  }
  return;
}

