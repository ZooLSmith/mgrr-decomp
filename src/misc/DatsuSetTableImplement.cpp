// src/misc/DatsuSetTableImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093BED0..0093D6E0, 10 functions

#include "mgrr.h"
#include "DatsuSetTableImplement.h"

// 0093BED0  DatsuSetTableImplement::vf1C  size=3  [class]
void DatsuSetTableImplement::vf1C(void)

{
  return;
}

// 0093D3E0  DatsuSetTableImplement::DatsuSetTableImplement  size=143  [class]
undefined4 * __thiscall
DatsuSetTableImplement::DatsuSetTableImplement(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int unaff_EDI;
  int local_74;
  
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (param_3 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(param_3);
    cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
    FUN_0093d370(&stack0xffffff84,"datsuSetTable",param_1);
    if (cVar1 != '\0') {
      (**(code **)(unaff_EDI + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  return param_1;
}

// 0093D480  DatsuSetTableImplement::vf20  size=31  [class]
undefined4 * __thiscall DatsuSetTableImplement::vf20(undefined4 *param_1,byte param_2)

{
  *param_1 = DatsuSetTable::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093D500  DatsuSetTableImplement::vf00  size=73  [class]
int __thiscall DatsuSetTableImplement::vf00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return *piVar2;
}

// 0093D550  DatsuSetTableImplement::vf04  size=75  [class]
int __thiscall DatsuSetTableImplement::vf04(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[1];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[1];
}

// 0093D5A0  DatsuSetTableImplement::vf08  size=75  [class]
int __thiscall DatsuSetTableImplement::vf08(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[2];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[2];
}

// 0093D5F0  DatsuSetTableImplement::vf0C  size=75  [class]
int __thiscall DatsuSetTableImplement::vf0C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[3];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[3];
}

// 0093D640  DatsuSetTableImplement::vf10  size=75  [class]
int __thiscall DatsuSetTableImplement::vf10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[4];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[4];
}

// 0093D690  DatsuSetTableImplement::vf14  size=75  [class]
int __thiscall DatsuSetTableImplement::vf14(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[5];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[5];
}

// 0093D6E0  DatsuSetTableImplement::vf18  size=75  [class]
int __thiscall DatsuSetTableImplement::vf18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 7) {
    piVar3 = piVar2;
    do {
      if (*piVar3 == param_2) {
        return piVar3[6];
      }
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar2 + *(int *)(iVar1 + 8) * 7);
  }
  return piVar2[6];
}

