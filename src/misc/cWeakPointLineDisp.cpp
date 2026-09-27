// src/misc/cWeakPointLineDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1B80..00D41320, 3 functions

#include "types.h"

// 00CC1B80  cWeakPointLineDisp::~cWeakPointLineDisp  size=90  [class]
void __fastcall cWeakPointLineDisp::~cWeakPointLineDisp(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[1] = 0;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[3] = 0;
  }
  return;
}

// 00CDA780  cWeakPointLineDisp::vf00  size=30  [class]
undefined4 __thiscall cWeakPointLineDisp::vf00(undefined4 param_1,byte param_2)

{
  ~cWeakPointLineDisp();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D41320  cWeakPointLineDisp::cWeakPointLineDisp  size=50  [class]
undefined4 * cWeakPointLineDisp::cWeakPointLineDisp(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7be50);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_00d36520();
    puVar2 = puVar1;
  }
  return puVar2;
}

