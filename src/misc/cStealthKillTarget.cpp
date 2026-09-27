// src/misc/cStealthKillTarget.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF670..00CD86E0, 3 functions

#include "mgrr.h"
#include "cStealthKillTarget.h"

// 00CBF670  cStealthKillTarget::cStealthKillTarget_2  size=33  [class]
void __fastcall cStealthKillTarget::cStealthKillTarget_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBF6A0  cStealthKillTarget::cStealthKillTarget  size=60  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cStealthKillTarget::cStealthKillTarget(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    _DAT_01dbf944 = 0;
    DAT_01dbf94c = 0;
    DAT_01dbf948 = 0;
    DAT_01dbf940 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD86E0  cStealthKillTarget::vf00  size=53  [class]
undefined4 * __thiscall cStealthKillTarget::vf00(undefined4 *param_1,byte param_2)

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

