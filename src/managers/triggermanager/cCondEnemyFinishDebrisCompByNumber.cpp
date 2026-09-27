// src/managers/triggermanager/cCondEnemyFinishDebrisCompByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D540..00C86900, 4 functions

#include "mgrr.h"

// 00C7D540  Trigger::cCondEnemyFinishDebrisCompByNumber::vf14  size=185  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByNumber::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if ((((DAT_01dbd1d0 != 0) && (*(int *)(DAT_01dbd1d8 + 0xc) == 0x520)) &&
      (iVar2 = *(int *)(DAT_01dbd1d8 + 0x10), iVar1 = FUN_00e03ea0("P520_RUN_SAVE"), iVar2 == iVar1)
      ) && ((*(int *)(param_1 + 0x10) == 0xd && ((DAT_01bea060 & 0x2000000) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (iVar2 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10)), iVar2 == 1)) {
    uVar3 = FUN_00c19190(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar4 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7D600  Trigger::cCondEnemyFinishDebrisCompByNumber::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishDebrisCompByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7D620  Trigger::cCondEnemyFinishDebrisCompByNumber::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C86900  Trigger::cCondEnemyFinishDebrisCompByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisCompByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

