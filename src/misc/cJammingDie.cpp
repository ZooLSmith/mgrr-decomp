// src/misc/cJammingDie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB4A0..00CD51E0, 3 functions

#include "mgrr.h"
#include "cJammingDie.h"

// 00CBB4A0  cJammingDie::cJammingDie_2  size=33  [class]
void __fastcall cJammingDie::cJammingDie_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBB4D0  cJammingDie::cJammingDie  size=40  [class]
undefined4 * cJammingDie::cJammingDie(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc0ec0 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD51E0  cJammingDie::vf00  size=53  [class]
undefined4 * __thiscall cJammingDie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

