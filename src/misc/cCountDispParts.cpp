// src/misc/cCountDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7020..00D2C520, 5 functions

#include "types.h"

// 00CB7020  cCountDispParts::vf08  size=56  [class]
void __fastcall cCountDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CE3350  cCountDispParts::vf00  size=63  [class]
undefined4 * __thiscall cCountDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEB370  cCountDispParts::vf14  size=373  [class]
void __fastcall cCountDispParts::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  char local_10 [16];
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_00ceb4d9;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else if (iVar2 != 1) {
    if (((iVar2 == 2) && (*(int *)(param_1 + 0x18) != 0)) && (iVar2 = FUN_00cdf400(2), iVar2 != 0))
    {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    goto LAB_00ceb4d9;
  }
  if ((*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x34)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x38))) {
    local_10[1] = '\0';
    local_10[2] = '\0';
    local_10[3] = '\0';
    local_10[4] = '\0';
    local_10[5] = '\0';
    local_10[6] = '\0';
    local_10[7] = '\0';
    local_10[8] = '\0';
    local_10[9] = '\0';
    local_10[10] = '\0';
    local_10[0xb] = '\0';
    local_10[0xc] = '\0';
    local_10[0xd] = '\0';
    local_10[0xe] = '\0';
    local_10[0xf] = 0;
    local_10[0] = '\0';
    _sprintf_s(local_10,0x10,"%d/%d",*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) &&
        ((*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)))) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
      FUN_00cb3cc0(piVar1,local_10);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
      FUN_00cb3cc0(piVar1,local_10);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  if (((*(int *)(param_1 + 0x18) != 0) && (iVar2 = FUN_00cdf400(1), iVar2 != 0)) &&
     (*(int *)(param_1 + 0x28) == 0)) {
    FUN_00cdeec0(2);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
LAB_00ceb4d9:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00D2C4B0  cCountDispParts::cCountDispParts  size=103  [class]
undefined4 * cCountDispParts::cCountDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[3] = "cCountDispParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0xd);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D2C520  FUN_00d2c520  size=101  [callgraph]
void __fastcall FUN_00d2c520(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (DAT_01dc0754 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar3 = cCountDispParts::cCountDispParts();
      *(undefined4 *)(param_1 + 4) = uVar3;
    }
    uVar3 = DAT_01dc075c;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x2c) = DAT_01dc0758;
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    *(undefined4 *)(iVar1 + 0x28) = 1;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    puVar2 = *(undefined4 **)(param_1 + 4);
    if ((puVar2[9] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  DAT_01dc0754 = 0;
  return;
}

