// src/managers/triggermanager/cActEmMsgDirect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F2F0..00C924A0, 6 functions

#include "mgrr.h"

// 00C7F2F0  Trigger::cActEmMsgDirect::vf10  size=57  [class]
void __fastcall Trigger::cActEmMsgDirect::vf10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00c15c50(piVar1 + 2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = FUN_00e03ea0(piVar1 + 10);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    if (*piVar1 == 0x3c) {
      *(int *)(param_1 + 0x10) = piVar1[0xe];
    }
  }
  return;
}

// 00C8AD70  Trigger::cActEmMsgDirect::vf08  size=1  [class]
void Trigger::cActEmMsgDirect::vf08(void)

{
  return;
}

// 00C8AD80  Trigger::cActEmMsgDirect::vf0C  size=1  [class]
void Trigger::cActEmMsgDirect::vf0C(void)

{
  return;
}

// 00C8ADA0  Trigger::cActEmMsgDirect::vf14  size=1  [class]
void Trigger::cActEmMsgDirect::vf14(void)

{
  return;
}

// 00C92490  Trigger::cActEmMsgDirect::vf00  size=6  [class]
undefined * Trigger::cActEmMsgDirect::vf00(void)

{
  return &DAT_01dbe0f0;
}

// 00C924A0  Trigger::cActEmMsgDirect::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsgDirect::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

