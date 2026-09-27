// src/misc/cCutPointDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7350..00CD1950, 4 functions

#include "types.h"

// 00CB7350  cCutPointDisp::cCutPointDisp  size=158  [class]
undefined4 * __fastcall cCutPointDisp::cCutPointDisp(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  *param_1 = vftable;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    *(undefined4 *)((int)&DAT_01dc0760 + uVar2) = 0;
    *(undefined4 *)((int)&DAT_01dc07e0 + uVar2) = 0;
    *(undefined4 *)((int)&DAT_01dc06b0 + uVar2) = 0;
    *(undefined4 *)((int)&DAT_01dc0630 + uVar2) = 0xffffffff;
    *(undefined4 *)((int)&DAT_01dc05b0 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x80);
  puVar5 = param_1 + 0x21;
  iVar4 = 0;
  iVar1 = 0x10;
  puVar3 = &DAT_01dc4198;
  do {
    *puVar5 = 0;
    puVar3[-2] = 0;
    *(undefined4 *)((int)&DAT_01dc04f0 + iVar4) = 0;
    puVar3[-1] = 0;
    *(undefined4 *)((int)&DAT_01dc04b0 + iVar4) = 0;
    *puVar3 = 0;
    *(undefined4 *)((int)&DAT_01dc0470 + iVar4) = 0xffffffff;
    puVar3[1] = 0x3f800000;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 4;
  } while (iVar1 != 0);
  return param_1;
}

// 00CB73F0  cCutPointDisp::~cCutPointDisp  size=86  [class]
void __fastcall cCutPointDisp::~cCutPointDisp(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 0x20;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1 = param_1 + 0x21;
  iVar2 = 0x10;
  do {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CB7450  FUN_00cb7450  size=32  [callgraph]
undefined4 FUN_00cb7450(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xc4,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cCutPointDisp::cCutPointDisp();
    return uVar2;
  }
  return 0;
}

// 00CD1950  cCutPointDisp::vf00  size=30  [class]
undefined4 __thiscall cCutPointDisp::vf00(undefined4 param_1,byte param_2)

{
  ~cCutPointDisp();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

