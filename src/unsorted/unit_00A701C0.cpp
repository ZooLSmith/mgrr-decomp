// src/unsorted/unit_00A701C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A701C0..00A70290, 3 functions

#include "mgrr.h"

// 00A701C0  FUN_00a701c0  size=45  [run]
void __fastcall FUN_00a701c0(int param_1)

{
  FUN_00dd8450();
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  thunk_FUN_00dd8450();
  return;
}

// 00A701F0  FUN_00a701f0  size=153  [run]
int __thiscall
FUN_00a701f0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[8];
    while (*piVar3 != 0) {
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 0x4e;
      if (*param_1 <= uVar1) {
        return 0;
      }
    }
    piVar3 = (int *)param_1[8] + uVar1 * 0x4e;
    if (piVar3 != (int *)0x0) {
      if (param_5 == (char *)0x0) {
        param_5 = " ";
      }
      _strcpy_s((char *)(piVar3 + 1),0x20,param_5);
      iVar2 = FUN_00dd7870(param_2,param_3,param_4,piVar3 + 1);
      if (iVar2 != 0) {
        *piVar3 = iVar2;
        _memset(piVar3 + 0xe,0,0x100);
        return iVar2;
      }
      return 0;
    }
  }
  return 0;
}

// 00A70290  FUN_00a70290  size=85  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a70290(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00dd7500();
  uVar2 = 0;
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[8];
    do {
      if (*piVar3 == iVar1) {
        ((int *)param_1[8])[uVar2 * 0x4e] = 0;
        FUN_00dd8580();
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x4e;
    } while (uVar2 < *param_1);
  }
  _DAT_00000000 = 0;
  FUN_00dd8580();
  return;
}

