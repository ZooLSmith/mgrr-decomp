// src/misc/cCodecMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098A850..0099C620, 3 functions

#include "mgrr.h"
#include "cCodecMenu.h"

// 0098A850  cCodecMenu::cCodecMenu_2  size=33  [class]
void __fastcall cCodecMenu::cCodecMenu_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  return;
}

// 0098A880  cCodecMenu::cCodecMenu  size=40  [class]
undefined4 * cCodecMenu::cCodecMenu(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0099C620  cCodecMenu::vf00  size=53  [class]
undefined4 * __thiscall cCodecMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

