// src/ui/cUIWorkExecList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCA930..00D11A20, 2 functions

#include "mgrr.h"
#include "cUIWorkExecList.h"

// 00CCA930  cUIWorkExecList::vf00  size=31  [class]
undefined4 * __thiscall cUIWorkExecList::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D11A20  cUIWorkExecList::cUIWorkExecList  size=88  [class]
void __fastcall cUIWorkExecList::cUIWorkExecList(undefined4 *param_1)

{
  *param_1 = cUIWorkList::vftable;
  param_1[0x13] = vftable;
  if (param_1[0xd] != 0) {
    if (param_1[0xd] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0xd] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = param_1[0xc];
    param_1[0x11] = param_1[0xc];
    param_1[0x12] = param_1[0xc];
  }
  FUN_00dd7270();
  return;
}

