// src/misc/cItemInfoDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB0C0..00CD4EF0, 2 functions

#include "mgrr.h"
#include "cItemInfoDisp.h"

// 00CBB0C0  cItemInfoDisp::cItemInfoDisp  size=43  [class]
void __fastcall cItemInfoDisp::cItemInfoDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  DAT_01dc0e18 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CD4EF0  cItemInfoDisp::vf00  size=63  [class]
undefined4 * __thiscall cItemInfoDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DAT_01dc0e18 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

