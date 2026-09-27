// src/misc/cDepressionScreenDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD1C60..00D2CF70, 5 functions

#include "mgrr.h"
#include "cDepressionScreenDispParts.h"

// 00CD1C60  cDepressionScreenDispParts::vf14  size=112  [class]
void __fastcall cDepressionScreenDispParts::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00f98a90();
  if (((iVar2 != 800) && (iVar2 != 0x690)) && (iVar2 != 0x780)) {
    FUN_00ccdf50(*(undefined4 *)(param_1 + 0x1c),0x44344000);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 1) {
      piVar1[2] = 0x44340000;
    }
  }
  return;
}

// 00CE3530  cDepressionScreenDispParts::vf00  size=63  [class]
undefined4 * __thiscall cDepressionScreenDispParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEC1A0  cDepressionScreenDispParts::vf08  size=52  [class]
void __fastcall cDepressionScreenDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D2CF10  cDepressionScreenDispParts::cDepressionScreenDispParts  size=95  [class]
undefined4 * cDepressionScreenDispParts::cDepressionScreenDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x20,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[3] = "cDepressionScreenDispParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x12);
    puVar1[4] = 0;
    puVar1[5] = uVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00D2CF70  FUN_00d2cf70  size=28  [callgraph]
void __fastcall FUN_00d2cf70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    uVar1 = cDepressionScreenDispParts::cDepressionScreenDispParts();
    *(undefined4 *)(param_1 + 4) = uVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d2cf8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return;
}

