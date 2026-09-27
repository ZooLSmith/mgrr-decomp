// src/unsorted/unit_00ECCC30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECCC30..00ECCF60, 5 functions

#include "types.h"

// 00ECCC30  FUN_00eccc30  size=58  [run]
void FUN_00eccc30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    *param_1 = param_3;
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 4) = 0;
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) == param_2) {
      *(int *)(iVar1 + 8) = param_3;
    }
    else {
      *(int *)(iVar1 + 0xc) = param_3;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = iVar1;
    }
  }
  return;
}

// 00ECCC70  FUN_00eccc70  size=70  [run]
int FUN_00eccc70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    return *(int *)(param_2 + 4);
  }
  iVar2 = *(int *)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int *)(param_2 + 8) = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = iVar2;
  *(int *)(iVar1 + 0xc) = param_2;
  if (iVar2 == 0) {
    *param_1 = iVar1;
    return iVar1;
  }
  if (*(int *)(iVar2 + 8) == param_2) {
    *(int *)(iVar2 + 8) = iVar1;
    return iVar2;
  }
  *(int *)(iVar2 + 0xc) = iVar1;
  return iVar2;
}

// 00ECCCC0  FUN_00ecccc0  size=70  [run]
int FUN_00ecccc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    return *(int *)(param_2 + 4);
  }
  iVar2 = *(int *)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  iVar3 = *(int *)(iVar1 + 8);
  *(int *)(param_2 + 0xc) = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = iVar2;
  *(int *)(iVar1 + 8) = param_2;
  if (iVar2 == 0) {
    *param_1 = iVar1;
    return iVar1;
  }
  if (*(int *)(iVar2 + 8) == param_2) {
    *(int *)(iVar2 + 8) = iVar1;
    return iVar2;
  }
  *(int *)(iVar2 + 0xc) = iVar1;
  return iVar2;
}

// 00ECCD10  FUN_00eccd10  size=588  [run]
void FUN_00eccd10(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    return;
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    *param_2 = 0;
    return;
  }
  iVar1 = param_2[1];
  do {
    if (iVar1 == 0) {
      *param_2 = 0;
      return;
    }
    piVar2 = (int *)param_2[1];
    piVar9 = (int *)piVar2[2];
    if (piVar9 == param_2) {
      piVar9 = (int *)piVar2[3];
    }
    if (piVar9 == (int *)0x0) {
LAB_00eccedb:
      *piVar2 = 0;
      *param_2 = 1;
    }
    else {
      if (*piVar9 != 0) {
        *piVar2 = 1;
        *piVar9 = 0;
        piVar9 = (int *)piVar2[2];
        if (piVar9 == param_2) {
          iVar1 = piVar2[3];
          if (iVar1 == 0) {
LAB_00eccdb3:
            piVar9 = (int *)piVar2[3];
          }
          else {
            iVar6 = piVar2[1];
            piVar2[1] = iVar1;
            iVar3 = *(int *)(iVar1 + 8);
            piVar2[3] = iVar3;
            if (iVar3 != 0) {
              *(int **)(iVar3 + 4) = piVar2;
            }
            *(int *)(iVar1 + 4) = iVar6;
            *(int **)(iVar1 + 8) = piVar2;
            if (iVar6 == 0) {
              *param_1 = iVar1;
              piVar9 = (int *)piVar2[3];
            }
            else {
              if (*(int **)(iVar6 + 8) != piVar2) {
                *(int *)(iVar6 + 0xc) = iVar1;
                goto LAB_00eccdb3;
              }
              *(int *)(iVar6 + 8) = iVar1;
              piVar9 = (int *)piVar2[3];
            }
          }
        }
        else {
          if (piVar9 != (int *)0x0) {
            iVar1 = piVar2[1];
            piVar2[1] = (int)piVar9;
            iVar6 = piVar9[3];
            piVar2[2] = iVar6;
            if (iVar6 != 0) {
              *(int **)(iVar6 + 4) = piVar2;
            }
            piVar9[1] = iVar1;
            piVar9[3] = (int)piVar2;
            if (iVar1 == 0) {
              *param_1 = (int)piVar9;
            }
            else if (*(int **)(iVar1 + 8) == piVar2) {
              *(int **)(iVar1 + 8) = piVar9;
            }
            else {
              *(int **)(iVar1 + 0xc) = piVar9;
            }
          }
          piVar9 = (int *)piVar2[2];
        }
      }
      if (piVar9 == (int *)0x0) goto LAB_00eccedb;
      piVar4 = (int *)piVar9[2];
      piVar5 = (int *)piVar9[3];
      if (((*piVar2 == 0) && ((piVar4 == (int *)0x0 || (*piVar4 == 0)))) &&
         ((piVar5 == (int *)0x0 || (*piVar5 == 0)))) {
        *piVar9 = 1;
      }
      else {
        if (((piVar4 == (int *)0x0) || (*piVar4 == 0)) && ((piVar5 == (int *)0x0 || (*piVar5 == 0)))
           ) {
          *piVar2 = 0;
          *piVar9 = 1;
          return;
        }
        if (((((int *)piVar2[2] == param_2) && (piVar4 != (int *)0x0)) && (*piVar4 == 1)) &&
           ((piVar5 == (int *)0x0 || (*piVar5 == 0)))) {
          *piVar4 = 0;
          *piVar9 = 1;
          FUN_00eccc70(param_1,piVar9);
          piVar7 = piVar9;
          piVar8 = (int *)0x0;
          piVar9 = piVar4;
        }
        else {
          piVar7 = piVar5;
          piVar8 = piVar4;
          if (((((int *)piVar2[3] == param_2) && ((piVar4 == (int *)0x0 || (*piVar4 == 0)))) &&
              (piVar5 != (int *)0x0)) && (*piVar5 == 1)) {
            *piVar5 = 0;
            *piVar9 = 1;
            FUN_00ecccc0(param_1,piVar9);
            piVar7 = (int *)0x0;
            piVar8 = piVar9;
            piVar9 = piVar5;
          }
        }
        if ((((int *)piVar2[2] == param_2) && (piVar7 != (int *)0x0)) && (*piVar7 == 1)) {
          iVar1 = *piVar2;
          if (piVar9 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar9;
          }
          *piVar2 = iVar6;
          *piVar9 = iVar1;
          *piVar7 = 0;
          FUN_00ecccc0(param_1,piVar2);
          return;
        }
        if ((((int *)piVar2[3] == param_2) && (piVar8 != (int *)0x0)) && (*piVar8 == 1)) {
          iVar1 = *piVar2;
          if (piVar9 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar9;
          }
          *piVar2 = iVar6;
          *piVar9 = iVar1;
          *piVar8 = 0;
          FUN_00eccc70(param_1,piVar2);
          return;
        }
      }
    }
    iVar1 = piVar2[1];
    param_2 = piVar2;
  } while( true );
}

// 00ECCF60  FUN_00eccf60  size=53  [run]
void __fastcall FUN_00eccf60(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

