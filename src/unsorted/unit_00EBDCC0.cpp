// src/unsorted/unit_00EBDCC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBDCC0..00EBDE50, 4 functions

#include "types.h"

// 00EBDCC0  FUN_00ebdcc0  size=135  [run]
void __fastcall FUN_00ebdcc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x7c);
  if (piVar4 != *(int **)(param_1 + 0x80)) {
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x14) == 0) {
        if ((*(byte *)(iVar1 + 8) & 1) != 0) goto LAB_00ebdce7;
        iVar2 = piVar4[1];
        piVar5 = (int *)piVar4[2];
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar5;
        }
        if (piVar5 != (int *)0x0) {
          piVar5[1] = iVar2;
        }
        if (*(int **)(param_1 + 0x7c) == piVar4) {
          *(int **)(param_1 + 0x7c) = piVar5;
        }
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        iVar2 = *(int *)(param_1 + 0x78);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar2 + 4);
        }
        piVar4[1] = iVar3;
        piVar4[2] = iVar2;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4;
        }
        if (iVar2 != 0) {
          *(int **)(iVar2 + 4) = piVar4;
        }
        *(int **)(param_1 + 0x78) = piVar4;
        FUN_00dd4920(iVar1);
      }
      else {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
LAB_00ebdce7:
        piVar5 = (int *)piVar4[2];
      }
      piVar4 = piVar5;
    } while (piVar5 != *(int **)(param_1 + 0x80));
  }
  return;
}

// 00EBDD50  FUN_00ebdd50  size=119  [run]
void __thiscall FUN_00ebdd50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x7c);
  if (puVar3 != *(undefined4 **)(param_1 + 0x80)) {
    while (piVar1 = (int *)*puVar3, *piVar1 != param_2) {
      puVar3 = (undefined4 *)puVar3[2];
      if (puVar3 == *(undefined4 **)(param_1 + 0x80)) {
        return;
      }
    }
    iVar2 = puVar3[1];
    iVar4 = puVar3[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar4;
    }
    if (iVar4 != 0) {
      *(int *)(iVar4 + 4) = iVar2;
    }
    if (*(undefined4 **)(param_1 + 0x7c) == puVar3) {
      *(int *)(param_1 + 0x7c) = iVar4;
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 4);
    }
    puVar3[1] = iVar4;
    puVar3[2] = iVar2;
    if (iVar4 != 0) {
      *(undefined4 **)(iVar4 + 8) = puVar3;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar3;
    }
    *(undefined4 **)(param_1 + 0x78) = puVar3;
    FUN_00dd4920(piVar1);
  }
  return;
}

// 00EBDDD0  FUN_00ebddd0  size=113  [run]
void __fastcall FUN_00ebddd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x7c);
  if (piVar5 != *(int **)(param_1 + 0x80)) {
    do {
      iVar1 = piVar5[1];
      iVar2 = *piVar5;
      piVar3 = (int *)piVar5[2];
      if (iVar1 != 0) {
        *(int **)(iVar1 + 8) = piVar3;
      }
      if (piVar3 != (int *)0x0) {
        piVar3[1] = iVar1;
      }
      if (*(int **)(param_1 + 0x7c) == piVar5) {
        *(int **)(param_1 + 0x7c) = piVar3;
      }
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 4);
      }
      piVar5[1] = iVar4;
      piVar5[2] = iVar1;
      if (iVar4 != 0) {
        *(int **)(iVar4 + 8) = piVar5;
      }
      if (iVar1 != 0) {
        *(int **)(iVar1 + 4) = piVar5;
      }
      *(int **)(param_1 + 0x78) = piVar5;
      if (iVar2 != 0) {
        FUN_00dd4920(iVar2);
      }
      piVar5 = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0x80));
  }
  return;
}

// 00EBDE50  FUN_00ebde50  size=199  [run]
undefined4 * __thiscall FUN_00ebde50(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)FUN_00dd2bc0();
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  local_4 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016d2fd0);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  param_2 = (int *)param_1[0x1f];
  while( true ) {
    if (param_2 == (int *)param_1[0x20]) {
      cFixedList::insert_28(&param_2,param_1 + 0x20,&local_4);
      return puVar1;
    }
    if (param_3 < *(int *)(*param_2 + 4)) break;
    param_2 = (int *)param_2[2];
  }
  cFixedList::insert_28(&param_3,&param_2,&local_4);
  return puVar1;
}

