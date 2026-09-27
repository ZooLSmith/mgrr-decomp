// src/misc/cGrenadeMark.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB9410..00CD4510, 4 functions

#include "mgrr.h"
#include "cGrenadeMark.h"

// 00CB9410  cGrenadeMark::cGrenadeMark  size=84  [class]
undefined4 * __fastcall cGrenadeMark::cGrenadeMark(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  uVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    FUN_00a7c950();
    FUN_00a7c950();
    *(undefined4 *)((int)&DAT_01dbffb0 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x80);
  FUN_00dd7240();
  return param_1;
}

// 00CB9470  cGrenadeMark::~cGrenadeMark  size=54  [class]
void __fastcall cGrenadeMark::~cGrenadeMark(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)vftable;
  iVar1 = 0x20;
  do {
    param_1 = param_1 + 1;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00dd7270();
  return;
}

// 00CB94B0  FUN_00cb94b0  size=32  [callgraph]
undefined4 FUN_00cb94b0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x84,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cGrenadeMark::cGrenadeMark();
    return uVar2;
  }
  return 0;
}

// 00CD4510  cGrenadeMark::vf00  size=30  [class]
undefined4 __thiscall cGrenadeMark::vf00(undefined4 param_1,byte param_2)

{
  ~cGrenadeMark();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

