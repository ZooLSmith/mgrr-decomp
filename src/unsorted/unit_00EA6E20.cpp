// src/unsorted/unit_00EA6E20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EA6E20..00EA6E90, 2 functions

#include "mgrr.h"

// 00EA6E20  FUN_00ea6e20  size=97  [run]
uint __thiscall FUN_00ea6e20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  if (*(char *)(*param_1 + 0xd) == '\0') {
    iVar1 = *param_2;
    piVar4 = (int *)*param_1;
    do {
      iVar2 = piVar4[4];
      bVar6 = SBORROW4(iVar2,iVar1);
      iVar3 = iVar2 - iVar1;
      if (iVar2 == iVar1) {
        bVar6 = (uint)piVar4[5] < (uint)param_2[1];
        if ((piVar4[5] == param_2[1]) &&
           (bVar6 = (uint)piVar4[6] < (uint)param_2[2], piVar4[6] == param_2[2])) {
          bVar6 = SBORROW4(piVar4[7],param_2[3]);
          iVar3 = piVar4[7] - param_2[3];
          goto LAB_00ea6e54;
        }
      }
      else {
LAB_00ea6e54:
        bVar6 = bVar6 != iVar3 < 0;
      }
      if (bVar6) {
        piVar5 = (int *)piVar4[1];
      }
      else {
        piVar5 = (int *)piVar4[2];
        param_1 = piVar4;
      }
      piVar4 = piVar5;
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  return (*(char *)((int)param_1 + 0xd) != '\0') - 1 & (uint)param_1;
}

// 00EA6E90  FUN_00ea6e90  size=87  [run]
uint __thiscall FUN_00ea6e90(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)(*param_1 + 0xd) == '\0') {
    piVar1 = (int *)*param_1;
    do {
      if (piVar1[4] == *param_2) {
        bVar3 = (uint)piVar1[5] < (uint)param_2[1];
        if (piVar1[5] == param_2[1]) {
          bVar3 = (uint)piVar1[6] < (uint)param_2[2];
        }
      }
      else {
        bVar3 = piVar1[4] < *param_2;
      }
      if (bVar3) {
        piVar2 = (int *)piVar1[1];
      }
      else {
        piVar2 = (int *)piVar1[2];
        param_1 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  return (*(char *)((int)param_1 + 0xd) != '\0') - 1 & (uint)param_1;
}

