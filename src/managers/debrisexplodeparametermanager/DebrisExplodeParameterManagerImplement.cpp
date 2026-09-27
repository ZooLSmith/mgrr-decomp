// src/managers/debrisexplodeparametermanager/DebrisExplodeParameterManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093FDC0..00944640, 10 functions

#include "mgrr.h"
#include "DebrisExplodeParameterManagerImplement.h"

// 0093FDC0  DebrisExplodeParameterManagerImplement::vf08  size=98  [class]
void __thiscall DebrisExplodeParameterManagerImplement::vf08(int param_1,int param_2)

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

// 0093FE30  FUN_0093fe30  size=102  [callgraph]
void __fastcall FUN_0093fe30(int param_1)

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
        (**(code **)(*piVar2 + 0x2c))(1);
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

// 00942810  DebrisExplodeParameterManagerImplement::vf00  size=188  [class]
void __fastcall DebrisExplodeParameterManagerImplement::vf00(int param_1)

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
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x2c))(1);
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

// 009428D0  DebrisExplodeParameterManagerImplement::thunk_vf00  size=5  [class]
void __fastcall DebrisExplodeParameterManagerImplement::thunk_vf00(int param_1)

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
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x2c))(1);
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

// 00943DC0  DebrisExplodeParameterManagerImplement::vf0C  size=55  [class]
void __thiscall DebrisExplodeParameterManagerImplement::vf0C(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_Em0030_018865b8;
  do {
    uVar1 = FUN_009fde60(*ppuVar2);
    (**(code **)(*param_1 + 4))(uVar1,param_2);
    ppuVar2 = ppuVar2 + 1;
  } while ((int)ppuVar2 < 0x1886610);
  return;
}

// 00943E00  DebrisExplodeParameterManagerImplement::vf10  size=59  [class]
undefined4 __thiscall DebrisExplodeParameterManagerImplement::vf10(int param_1,int param_2)

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

// 00943E40  DebrisExplodeParameterManagerImplement::vf14  size=61  [class]
undefined4 __thiscall DebrisExplodeParameterManagerImplement::vf14(int param_1,int param_2)

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
        return 1;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00943E80  DebrisExplodeParameterManagerImplement::vf18  size=55  [class]
int __thiscall DebrisExplodeParameterManagerImplement::vf18(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  piVar4 = *(int **)(iVar2 + 4);
  iVar3 = 0;
  if (piVar4 != piVar4 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar4 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar4 + 8) == param_2) {
        return iVar3;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (piVar4 != piVar1);
  }
  return -1;
}

// 00943EE0  DebrisExplodeParameterManagerImplement::vf1C  size=50  [class]
undefined4 * __thiscall
DebrisExplodeParameterManagerImplement::vf1C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_0093fe30();
  FUN_00dd7270();
  *param_1 = DebrisExplodeParameterManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00944640  DebrisExplodeParameterManagerImplement::vf04  size=233  [class]
int __thiscall
DebrisExplodeParameterManagerImplement::vf04(int param_1,int param_2,undefined4 param_3)

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
        goto LAB_00944715;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  local_4 = 0;
  uVar6 = FUN_00a54ae0(&local_4,param_3,"debrisExplodeParameter.bxm");
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar7 = FUN_00dd3500(0xc,uVar3);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = DebrisExplodeParameterImplement::DebrisExplodeParameterImplement(uVar3,uVar6);
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
LAB_00944715:
  if (iVar4 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return iVar7;
}

