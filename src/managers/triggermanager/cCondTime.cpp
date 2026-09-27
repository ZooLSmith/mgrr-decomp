// src/managers/triggermanager/cCondTime.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C78CC0..00C84CC0, 7 functions

#include "mgrr.h"

// 00C78CC0  Trigger::cCondTime::cCondTime  size=37  [class]
void __fastcall Trigger::cCondTime::cCondTime(undefined4 *param_1)

{
  param_1[4] = 0xbf800000;
  param_1[5] = 0xbf800000;
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  return;
}

// 00C78D30  Trigger::cCondTime::vf0C  size=39  [class]
undefined4 __fastcall Trigger::cCondTime::vf0C(int param_1)

{
  if (*(float *)(param_1 + 0x10) != -1.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x10) + 1.0;
    return 1;
  }
  return 0;
}

// 00C78D60  Trigger::cCondTime::vf10  size=45  [class]
void __fastcall Trigger::cCondTime::vf10(int param_1)

{
  float10 fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x14)) && ((DAT_01bea060 & 0x2000400) == 0)) {
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x14) = (float)((float10)*(float *)(param_1 + 0x14) - fVar1);
  }
  return;
}

// 00C78D90  Trigger::cCondTime::vf14  size=21  [class]
undefined4 __fastcall Trigger::cCondTime::vf14(int param_1)

{
  if (*(float *)(param_1 + 0x14) <= 0.0) {
    return 1;
  }
  return 0;
}

// 00C78DC0  Trigger::cCondTime::vf20  size=36  [class]
undefined4 __fastcall Trigger::cCondTime::vf20(int param_1)

{
  if (*(float *)(param_1 + 0x10) != -1.0) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x10) + 1.0;
  }
  return 1;
}

// 00C84CA0  Trigger::cCondTime::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondTime::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84CC0  Trigger::cCondTime::vf1C  size=16  [class]
void __thiscall Trigger::cCondTime::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

