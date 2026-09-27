// src/unsorted/unit_008D7B20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D7B20..008D8050, 15 functions

#include "mgrr.h"

// 008D7B20  FUN_008d7b20  size=73  [run]
void __thiscall FUN_008d7b20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = piVar1[2];
  if (*(char *)(piVar1[2] + 0xd) == '\0') {
    *(int **)piVar1[2] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 8)) {
    *(int **)(iVar2 + 8) = piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 4) = piVar1;
  piVar1[2] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 008D7B70  FUN_008d7b70  size=73  [run]
void __thiscall FUN_008d7b70(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[2];
  param_2[2] = piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    *(int **)piVar1[1] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 4)) {
    *(int **)(iVar2 + 4) = piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 8) = piVar1;
  piVar1[1] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 008D7BC0  FUN_008d7bc0  size=64  [run]
void FUN_008d7bc0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    iVar4 = *(int *)(param_1[1] + 8);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      do {
        iVar4 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar4 + 0xd) == '\0');
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[1]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
  }
  return;
}

// 008D7D10  FUN_008d7d10  size=57  [run]
int * __thiscall FUN_008d7d10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) {
        return piVar3;
      }
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  return (int *)0x0;
}

// 008D7D70  FUN_008d7d70  size=60  [run]
int * __thiscall FUN_008d7d70(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7da5;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7da5:
  return piVar3 + 2;
}

// 008D7DB0  FUN_008d7db0  size=60  [run]
int __thiscall FUN_008d7db0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7de5;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7de5:
  return piVar3[4];
}

// 008D7DF0  FUN_008d7df0  size=94  [run]
float10 __thiscall FUN_008d7df0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7e25;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7e25:
  fVar4 = (float10)-1.0;
  if (fVar4 != (float10)(float)piVar3[5]) {
    fVar4 = (float10)(float)piVar3[5] * (float10)0.016666668;
  }
  return fVar4;
}

// 008D7E50  FUN_008d7e50  size=94  [run]
float10 __thiscall FUN_008d7e50(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7e85;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7e85:
  fVar4 = (float10)-1.0;
  if (fVar4 != (float10)(float)piVar3[6]) {
    fVar4 = (float10)(float)piVar3[6] * (float10)0.016666668;
  }
  return fVar4;
}

// 008D7EB0  FUN_008d7eb0  size=66  [run]
float10 __thiscall FUN_008d7eb0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7ee5;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7ee5:
  return (float10)(float)piVar3[7] * (float10)0.016666668;
}

// 008D7F00  FUN_008d7f00  size=66  [run]
float10 __thiscall FUN_008d7f00(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7f35;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7f35:
  return (float10)(float)piVar3[8] * (float10)0.016666668;
}

// 008D7F50  FUN_008d7f50  size=60  [run]
int __thiscall FUN_008d7f50(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7f85;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7f85:
  return piVar3[9];
}

// 008D7F90  FUN_008d7f90  size=60  [run]
int __thiscall FUN_008d7f90(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d7fc5;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d7fc5:
  return piVar3[10];
}

// 008D7FD0  FUN_008d7fd0  size=60  [run]
int __thiscall FUN_008d7fd0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d8005;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d8005:
  return piVar3[0xb];
}

// 008D8010  FUN_008d8010  size=60  [run]
int __thiscall FUN_008d8010(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d8045;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d8045:
  return piVar3[0xc];
}

// 008D8050  FUN_008d8050  size=60  [run]
int __thiscall FUN_008d8050(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 0xf) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 0xf;
    do {
      if (*piVar3 == param_2) goto LAB_008d8085;
      piVar3 = piVar3 + 0xf;
    } while (piVar3 != piVar1);
  }
  piVar3 = (int *)0x0;
LAB_008d8085:
  return piVar3[0xd];
}

