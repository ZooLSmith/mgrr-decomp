// src/managers/triggermanager/cActEmMsgDirectByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80B80..00C93E00, 6 functions

#include "mgrr.h"

// 00C80B80  Trigger::cActEmMsgDirectByNumber::vf10  size=42  [class]
void __fastcall Trigger::cActEmMsgDirectByNumber::vf10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00c15c50(piVar1 + 2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (*piVar1 == 0x38) {
      *(int *)(param_1 + 0xc) = piVar1[0xd];
    }
  }
  return;
}

// 00C8DBD0  Trigger::cActEmMsgDirectByNumber::vf08  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf08(void)

{
  return;
}

// 00C8DBE0  Trigger::cActEmMsgDirectByNumber::vf0C  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf0C(void)

{
  return;
}

// 00C8DC00  Trigger::cActEmMsgDirectByNumber::vf14  size=1  [class]
void Trigger::cActEmMsgDirectByNumber::vf14(void)

{
  return;
}

// 00C93DF0  Trigger::cActEmMsgDirectByNumber::vf00  size=6  [class]
undefined * Trigger::cActEmMsgDirectByNumber::vf00(void)

{
  return &DAT_01dbe218;
}

// 00C93E00  Trigger::cActEmMsgDirectByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsgDirectByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

