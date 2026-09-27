// src/misc/cQTEButton.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC860..00CD5B10, 3 functions

#include "mgrr.h"
#include "cQTEButton.h"

// 00CBC860  cQTEButton::cQTEButton_2  size=55  [class]
void __fastcall cQTEButton::cQTEButton_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  return;
}

// 00CBC8A0  cQTEButton::cQTEButton  size=67  [class]
undefined4 * cQTEButton::cQTEButton(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    DAT_01dc1274 = 0;
    DAT_01dc1278 = 0;
    DAT_01dc127c = 0;
    DAT_01dc1280 = 0;
    DAT_018b56b4 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD5B10  cQTEButton::vf00  size=75  [class]
undefined4 * __thiscall cQTEButton::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

