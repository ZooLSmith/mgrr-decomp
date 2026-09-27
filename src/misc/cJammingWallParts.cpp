// src/misc/cJammingWallParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB7F0..00D314C0, 5 functions

#include "mgrr.h"
#include "cJammingWallParts.h"

// 00CBB7F0  cJammingWallParts::vf08  size=15  [class]
void __fastcall cJammingWallParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CBB800  cJammingWallParts::vf14  size=20  [class]
void __fastcall cJammingWallParts::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x24) == 0)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

// 00CE3A70  cJammingWallParts::vf00  size=63  [class]
undefined4 * __thiscall cJammingWallParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D31460  cJammingWallParts::cJammingWallParts  size=91  [class]
undefined4 * cJammingWallParts::cJammingWallParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[3] = "cJammingWallParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x2a);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D314C0  FUN_00d314c0  size=82  [callgraph]
void __fastcall FUN_00d314c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_01dc0ecc != 0) && (*(int *)(param_1 + 4) == 0)) {
    uVar2 = cJammingWallParts::cJammingWallParts();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x24) = DAT_01dc0ecc;
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    puVar1 = *(undefined4 **)(param_1 + 4);
    if ((puVar1[8] == 1) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}

