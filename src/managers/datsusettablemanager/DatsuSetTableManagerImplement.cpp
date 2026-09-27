// src/managers/datsusettablemanager/DatsuSetTableManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093C3A0..0093D760, 7 functions

#include "mgrr.h"
#include "DatsuSetTableManagerImplement.h"

// 0093C3A0  DatsuSetTableManagerImplement::vf08  size=98  [class]
void __thiscall DatsuSetTableManagerImplement::vf08(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0x28);
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 != puVar4 + *(int *)(iVar2 + 8)) {
    puVar1 = puVar4 + *(int *)(iVar2 + 8);
    do {
      piVar3 = (int *)*puVar4;
      if (piVar3[2] == param_2) {
        *piVar3 = *piVar3 + -1;
        if (*piVar3 < 1) {
          piVar3[1] = 1;
        }
        break;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 0093C410  FUN_0093c410  size=102  [callgraph]
void __fastcall FUN_0093c410(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00dd7270();
  piVar3 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  if (piVar3 != piVar3 + *(int *)(*(int *)(param_1 + 0x28) + 8)) {
    do {
      iVar1 = *piVar3;
      piVar2 = *(int **)(iVar1 + 0xc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))(1);
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) +
                              *(int *)(*(int *)(param_1 + 0x28) + 8) * 4));
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 0093C8A0  DatsuSetTableManagerImplement::thunk_vf00  size=5  [class]
void __fastcall DatsuSetTableManagerImplement::thunk_vf00(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  if (piVar5 != piVar5 + *(int *)(*(int *)(param_1 + 0x28) + 8)) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 4) == 0) {
        piVar6 = piVar5 + 1;
      }
      else {
        if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x20))(1);
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x28);
        uVar2 = *(uint *)(iVar1 + 8);
        iVar3 = *(int *)(iVar1 + 4);
        piVar6 = (int *)(iVar3 + uVar2 * 4);
        if ((((piVar5 != piVar6) && (iVar3 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)piVar5 - iVar3 >> 2) < uVar2)) {
          for (piVar4 = piVar5; piVar4 != piVar6 + -1; piVar4 = piVar4 + 1) {
            *piVar4 = piVar4[1];
          }
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
          piVar6 = piVar5;
        }
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) +
                              *(int *)(*(int *)(param_1 + 0x28) + 8) * 4));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 0093D040  DatsuSetTableManagerImplement::vf0C  size=36  [class]
void __thiscall DatsuSetTableManagerImplement::vf0C(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(*param_1 + 4))(iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  return;
}

// 0093D070  DatsuSetTableManagerImplement::vf10  size=59  [class]
undefined4 __thiscall DatsuSetTableManagerImplement::vf10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 8) == param_2) {
        return *(undefined4 *)(*piVar3 + 0xc);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 0093D0D0  DatsuSetTableManagerImplement::vf14  size=50  [class]
undefined4 * __thiscall DatsuSetTableManagerImplement::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_0093c410();
  FUN_00dd7270();
  *param_1 = DatsuSetTableManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093D760  DatsuSetTableManagerImplement::vf04  size=233  [class]
int __thiscall DatsuSetTableManagerImplement::vf04(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  iVar7 = *(int *)(param_1 + 0x28);
  puVar5 = *(undefined4 **)(iVar7 + 4);
  if (puVar5 != puVar5 + *(int *)(iVar7 + 8)) {
    puVar1 = puVar5 + *(int *)(iVar7 + 8);
    do {
      piVar2 = (int *)*puVar5;
      if (piVar2[2] == param_2) {
        *piVar2 = *piVar2 + 1;
        iVar7 = piVar2[3];
        iVar4 = *(int *)(param_1 + 0x20);
        goto LAB_0093d835;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  local_4 = 0;
  uVar6 = FUN_00a54ae0(&local_4,param_3,"datsuSetTable.bxm");
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar7 = FUN_00dd3500(0xc,uVar3);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = DatsuSetTableImplement::DatsuSetTableImplement(uVar3,uVar6);
  }
  local_8 = (int *)FUN_00dd3500(0x10,*(undefined4 *)(param_1 + 4));
  if (local_8 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    *local_8 = 0;
    local_8[1] = 0;
    local_8[2] = param_2;
    local_8[3] = iVar7;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(&local_8);
  *local_8 = *local_8 + 1;
  iVar4 = *(int *)(param_1 + 0x20);
LAB_0093d835:
  if (iVar4 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return iVar7;
}

