// src/misc/cWeakPointDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1850..00CDA670, 2 functions

#include "mgrr.h"
#include "cWeakPointDisp.h"

// 00CC1850  cWeakPointDisp::cWeakPointDisp  size=64  [class]
undefined4 * cWeakPointDisp::cWeakPointDisp(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x7c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    iVar2 = 0;
    puVar3 = puVar1;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      *(undefined4 *)((int)&DAT_01dc1378 + iVar2) = 0;
      *(undefined4 *)((int)&DAT_01dbf770 + iVar2) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x78);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CDA670  cWeakPointDisp::vf00  size=69  [class]
int * __thiscall cWeakPointDisp::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 0x1e;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

