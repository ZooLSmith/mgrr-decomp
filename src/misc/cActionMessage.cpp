// src/misc/cActionMessage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5470..00CD02D0, 3 functions

#include "mgrr.h"
#include "cActionMessage.h"

// 00CB5470  cActionMessage::cActionMessage_2  size=33  [class]
void __fastcall cActionMessage::cActionMessage_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  return;
}

// 00CB54A0  cActionMessage::cActionMessage  size=56  [class]
undefined4 * cActionMessage::cActionMessage(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[4] = 0;
    DAT_01dc0740 = 0;
    DAT_01dc0744 = 0;
    DAT_018b3a2c = 0xffffffff;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD02D0  cActionMessage::vf00  size=53  [class]
undefined4 * __thiscall cActionMessage::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

