// src/misc/cChainCombo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5D10..00CD09D0, 4 functions

#include "mgrr.h"
#include "cChainCombo.h"

// 00CB5D10  cChainCombo::cChainCombo  size=59  [class]
void __fastcall cChainCombo::cChainCombo(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  DAT_018b440c = 0;
  return;
}

// 00CB5D50  cChainCombo::cChainCombo_2  size=33  [class]
void __fastcall cChainCombo::cChainCombo_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  return;
}

// 00CB5D80  cChainCombo::cChainCombo  size=82  [class]
undefined4 * cChainCombo::cChainCombo(void)

{
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[0xc] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = local_14;
    DAT_018b440c = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD09D0  cChainCombo::vf00  size=53  [class]
undefined4 * __thiscall cChainCombo::vf00(undefined4 *param_1,byte param_2)

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

