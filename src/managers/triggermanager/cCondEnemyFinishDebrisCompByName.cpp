// src/managers/triggermanager/cCondEnemyFinishDebrisCompByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D640..00C86940, 5 functions

#include "mgrr.h"

// 00C7D640  Trigger::cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName  size=37  [class]
void __fastcall
Trigger::cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7D680  Trigger::cCondEnemyFinishDebrisCompByName::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishDebrisCompByName::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * 60.0;
  return;
}

// 00C7D6A0  Trigger::cCondEnemyFinishDebrisCompByName::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByName::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C86920  Trigger::cCondEnemyFinishDebrisCompByName::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishDebrisCompByName::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86940  Trigger::cCondEnemyFinishDebrisCompByName::vf14  size=196  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishDebrisCompByName::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac454);
  }
  else if ((DAT_01bea060 & 0x400) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = __stricmp("all",*(char **)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar2 = FUN_00c18cc0(DAT_01d5bad4);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        if (*(int *)(param_1 + 0x20) == 1) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        iVar1 = FUN_00c18c70(*(undefined4 *)(param_1 + 0x10));
        if (iVar1 == 1) {
          uVar2 = FUN_00c191c0(*(undefined4 *)(param_1 + 0x10));
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
          (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 1;
      }
      fVar3 = (float10)FUN_00e03a90(0);
      *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0;
}

