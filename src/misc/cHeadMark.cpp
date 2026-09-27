// src/misc/cHeadMark.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB97D0..00CD4700, 4 functions

#include "mgrr.h"
#include "cHeadMark.h"

// 00CB97D0  cHeadMark::cHeadMark  size=193  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall cHeadMark::cHeadMark(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = vftable;
  FUN_00904d60();
  param_1[0x7a] = 0;
  iVar3 = 0;
  _DAT_01dc0dfc = 0;
  puVar2 = param_1 + 0x15;
  iVar4 = 0x14;
  puVar1 = &DAT_01dc47b4;
  do {
    puVar2[-0x14] = 0;
    *puVar2 = 0;
    puVar2[0x14] = 0;
    puVar2[0x28] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x51] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)((int)&DAT_01dbff60 + iVar3) = 0;
    puVar1[-1] = 0;
    *(undefined4 *)((int)&DAT_01dbff10 + iVar3) = 0xffffffff;
    puVar1[-2] = 0;
    *(undefined4 *)((int)&DAT_01dbfec0 + iVar3) = 0xffffffff;
    puVar1[-4] = 0;
    *(undefined4 *)((int)&DAT_01dbfe70 + iVar3) = 0;
    puVar1[-5] = 0;
    *(undefined4 *)((int)&DAT_01dbfe20 + iVar3) = 0;
    puVar1[-6] = 0;
    puVar1[-7] = 0;
    puVar2 = puVar2 + 1;
    puVar1[-9] = 0;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + -1;
    puVar1[-10] = 0;
    puVar1[-0xb] = 0;
    puVar1[-0xc] = 0;
    puVar1[2] = 0x3f800000;
    puVar1[-3] = 0x3f800000;
    puVar1[-8] = 0x3f800000;
    puVar1[-0xd] = 0x3f800000;
    puVar1 = puVar1 + 0x10;
  } while (iVar4 != 0);
  DAT_01dc0e00 = 0;
  return param_1;
}

// 00CB98A0  cHeadMark::~cHeadMark  size=157  [class]
void __fastcall cHeadMark::~cHeadMark(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = vftable;
  piVar2 = param_1 + 0x15;
  iVar1 = 0x14;
  do {
    if ((undefined4 *)piVar2[-0x14] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-0x14])(1);
      piVar2[-0x14] = 0;
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    if ((undefined4 *)piVar2[0x14] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[0x14])(1);
      piVar2[0x14] = 0;
    }
    if ((undefined4 *)piVar2[0x28] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[0x28])(1);
      piVar2[0x28] = 0;
    }
    if ((undefined4 *)piVar2[0x3c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[0x3c])(1);
      piVar2[0x3c] = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  RayCastManager::getWork(param_1 + 0x65);
  FUN_00905ce0();
  return;
}

// 00CB9940  FUN_00cb9940  size=32  [callgraph]
undefined4 FUN_00cb9940(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x1ec,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cHeadMark::cHeadMark();
    return uVar2;
  }
  return 0;
}

// 00CD4700  cHeadMark::vf00  size=30  [class]
undefined4 __thiscall cHeadMark::vf00(undefined4 param_1,byte param_2)

{
  ~cHeadMark();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

