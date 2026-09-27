// src/managers/triggermanager/cCondTimeSta.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D080..00C866C0, 3 functions

#include "mgrr.h"

// 00C7D080  Trigger::cCondTimeSta::vf0C  size=39  [class]
undefined4 __fastcall Trigger::cCondTimeSta::vf0C(int param_1)

{
  if (*(float *)(param_1 + 0x30) != -1.0) {
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 1.0;
    return 1;
  }
  return 0;
}

// 00C7D170  Trigger::cCondTimeSta::vf1C  size=117  [class]
void __thiscall Trigger::cCondTimeSta::vf1C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  piVar3 = (int *)(param_1 + 0x10);
  piVar4 = (int *)(param_2 + 8);
  piVar6 = piVar3;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x28);
  iVar2 = 8;
  do {
    if (*piVar3 != -1) {
      uVar5 = 0;
      do {
        iVar1 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar5 * 2]);
        if (*piVar3 == iVar1) {
          piVar3[9] = uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x19);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

// 00C866C0  Trigger::cCondTimeSta::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTimeSta::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

