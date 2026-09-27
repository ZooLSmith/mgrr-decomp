// src/unsorted/unit_00CFDB20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFDB20..00CFE0F0, 8 functions

#include "mgrr.h"

// 00CFDB20  FUN_00cfdb20  size=234  [run]
undefined4 __fastcall FUN_00cfdb20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != iVar3 + *(int *)(param_1 + 0x3c) * 0xc) {
      do {
        puVar1 = *(undefined4 **)(iVar3 + 8);
        if (puVar1 != (undefined4 *)0x0) {
          FUN_00ceaa00();
          (**(code **)*puVar1)(1);
        }
        iVar3 = (iVar3 - *(int *)(param_1 + 0x34)) / 0xc;
        if (iVar3 < *(int *)(param_1 + 0x3c) + -1) {
          iVar4 = iVar3 * 0xc;
          iVar2 = iVar3;
          do {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0x34) + iVar4);
            *puVar1 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc + iVar4);
            puVar1[1] = puVar1[4];
            puVar1[2] = puVar1[5];
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0xc;
          } while (iVar2 < *(int *)(param_1 + 0x3c) + -1);
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        iVar3 = *(int *)(param_1 + 0x34) + iVar3 * 0xc;
      } while (iVar3 != *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0xc);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return 0;
}

// 00CFDC10  FUN_00cfdc10  size=32  [run]
void FUN_00cfdc10(void)

{
  if (DAT_01dc0730 != 0) {
    FUN_00ccfed0();
    FUN_00cfdb20();
    return;
  }
  return;
}

// 00CFDC80  FUN_00cfdc80  size=67  [run]
undefined4
FUN_00cfdc80(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((DAT_01dc0730 != 0) && (*(int *)(DAT_01dc073c + 0x70) != 0)) {
    uVar1 = FUN_00cfcd00(param_1 << 0x10 | (uint)param_2,param_3,param_4,param_5,0xffffffff,param_6)
    ;
    return uVar1;
  }
  return 0;
}

// 00CFDD10  FUN_00cfdd10  size=50  [run]
undefined4 FUN_00cfdd10(int param_1,ushort param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_01dc0730 != 0) && (*(int *)(DAT_01dc073c + 0x70) != 0)) {
    uVar1 = FUN_00cfcee0(param_1 << 0x10 | (uint)param_2,param_3);
    return uVar1;
  }
  return 0;
}

// 00CFDDA0  FUN_00cfdda0  size=183  [run]
undefined4 FUN_00cfdda0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_50 [19];
  
  if (DAT_01dc0730 != 0) {
    piVar2 = *(int **)(DAT_01dc073c + 0x60);
    if (piVar2 != piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11) {
      piVar1 = piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11;
      do {
        piVar4 = piVar2;
        piVar5 = local_50;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        if (local_50[0] == param_1) {
          iVar3 = piVar2[6];
          goto LAB_00cfde09;
        }
        piVar2 = piVar2 + 0x11;
      } while (piVar2 != piVar1);
    }
    iVar3 = 0;
LAB_00cfde09:
    switch(iVar3) {
    case 1:
    case 2:
      piVar2 = *(int **)(DAT_01dc073c + 0x60);
      if (piVar2 != piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11) {
        piVar1 = piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11;
        do {
          if (*piVar2 == param_1) {
            return 1;
          }
          piVar2 = piVar2 + 0x11;
        } while (piVar2 != piVar1);
      }
    }
  }
  return 0;
}

// 00CFDE70  FUN_00cfde70  size=183  [run]
undefined4 FUN_00cfde70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_50 [19];
  
  if (DAT_01dc0730 != 0) {
    piVar2 = *(int **)(DAT_01dc073c + 0x60);
    if (piVar2 != piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11) {
      piVar1 = piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11;
      do {
        piVar4 = piVar2;
        piVar5 = local_50;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        if (local_50[0] == param_1) {
          iVar3 = piVar2[6];
          goto LAB_00cfded9;
        }
        piVar2 = piVar2 + 0x11;
      } while (piVar2 != piVar1);
    }
    iVar3 = 0;
LAB_00cfded9:
    switch(iVar3) {
    case 3:
    case 4:
      piVar2 = *(int **)(DAT_01dc073c + 0x60);
      if (piVar2 != piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11) {
        piVar1 = piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11;
        do {
          if (*piVar2 == param_1) {
            return 1;
          }
          piVar2 = piVar2 + 0x11;
        } while (piVar2 != piVar1);
      }
    }
  }
  return 0;
}

// 00CFDF40  FUN_00cfdf40  size=109  [run]
int FUN_00cfdf40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_50 [19];
  
  if (DAT_01dc0730 != 0) {
    piVar2 = *(int **)(DAT_01dc073c + 0x60);
    if (piVar2 != piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11) {
      piVar1 = piVar2 + *(int *)(DAT_01dc073c + 0x68) * 0x11;
      do {
        piVar4 = piVar2;
        piVar5 = local_50;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        if (local_50[0] == param_1) {
          return piVar2[6];
        }
        piVar2 = piVar2 + 0x11;
      } while (piVar2 != piVar1);
    }
  }
  return 0;
}

// 00CFE0F0  FUN_00cfe0f0  size=34  [run]
undefined4 FUN_00cfe0f0(undefined4 param_1)

{
  if (DAT_01dc0730 == 0) {
    return 0;
  }
  FUN_00cfcb70(param_1);
  return 1;
}

