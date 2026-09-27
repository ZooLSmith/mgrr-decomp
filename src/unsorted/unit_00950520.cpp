// src/unsorted/unit_00950520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00950520..00950860, 9 functions

#include "types.h"

// 00950520  FUN_00950520  size=14  [run]
void __fastcall FUN_00950520(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00950530  FUN_00950530  size=26  [run]
void __fastcall FUN_00950530(int param_1)

{
  FUN_00dd7240();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00950550  FUN_00950550  size=80  [run]
void __fastcall FUN_00950550(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar2 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_0094e250();
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 009505A0  FUN_009505a0  size=73  [run]
void __fastcall FUN_009505a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar2 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_0094e250();
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 009505F0  FUN_009505f0  size=73  [run]
void __fastcall FUN_009505f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar2 + *(int *)(param_1 + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_0094e250();
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00950640  FUN_00950640  size=178  [run]
undefined4 __thiscall FUN_00950640(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x68) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar3 = piVar4 + *(int *)(param_1 + 8);
  do {
    if (piVar4 == piVar3) {
LAB_0095067d:
      if (*(int *)(param_1 + 0x68) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    piVar2 = (int *)*piVar4;
    if (*piVar2 == param_2) {
      if (piVar2 != (int *)0x0) {
        piVar2 = piVar2 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 != 0) goto LAB_009506dc;
        puVar5 = *(undefined4 **)(param_1 + 4);
        puVar1 = puVar5 + *(int *)(param_1 + 8);
        if (puVar5 == puVar1) goto LAB_009506dc;
        break;
      }
      goto LAB_0095067d;
    }
    piVar4 = piVar4 + 1;
  } while( true );
  while (puVar5 = puVar5 + 1, puVar5 != puVar1) {
    piVar3 = (int *)*puVar5;
    if (*piVar3 == param_2) {
      FUN_0094e250();
      FUN_00dd4920(piVar3);
      FUN_0094fb10(puVar5);
      break;
    }
  }
LAB_009506dc:
  if (*(int *)(param_1 + 0x68) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

// 00950700  FUN_00950700  size=246  [run]
undefined4 __thiscall FUN_00950700(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  piVar4 = *(int **)(param_1 + 4);
  piVar7 = piVar4 + *(int *)(param_1 + 8);
  if (piVar4 != piVar7) {
    uVar8 = 0;
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == param_2) {
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        uVar5 = 0;
        if (piVar1[1] != 0) {
          piVar7 = (int *)piVar1[3];
          do {
            if (*piVar7 == param_3) {
              piVar7 = (int *)piVar1[3] + uVar5 * 3;
              if (piVar7 == (int *)0x0) {
                return 0;
              }
              uVar3 = FUN_00dde2a0(0,100);
              uVar5 = 0;
              if (piVar7[1] != 0) {
                uVar6 = 0;
                while ((uVar3 < uVar6 ||
                       ((uint)*(ushort *)(piVar7[2] + 2 + uVar5 * 8) + (uint)uVar6 <= (uint)uVar3)))
                {
                  uVar6 = uVar6 + *(short *)(piVar7[2] + 2 + uVar5 * 8);
                  uVar5 = uVar5 + 1;
                  if ((uint)piVar7[1] <= uVar5) {
                    return 0;
                  }
                }
                if (param_4 != (undefined4 *)0x0) {
                  iVar2 = piVar7[2];
                  *param_4 = *(undefined4 *)(iVar2 + uVar5 * 8);
                  param_4[1] = *(undefined4 *)(iVar2 + 4 + uVar5 * 8);
                }
                uVar8 = FUN_0094df20(*(undefined2 *)(piVar7[2] + uVar5 * 8));
              }
              return uVar8;
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 3;
          } while (uVar5 < (uint)piVar1[1]);
          return 0;
        }
        return 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar7);
  }
  return 0;
}

// 00950810  FUN_00950810  size=67  [run]
void __fastcall FUN_00950810(int param_1)

{
  FUN_00d9f450();
  *(undefined4 *)(param_1 + 0x204) = 0x40000000;
  *(undefined4 *)(param_1 + 0x200) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x144) = 0xbe99999a;
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  DAT_01b37358 = 0;
  return;
}

// 00950860  FUN_00950860  size=74  [run]
void __fastcall FUN_00950860(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != piVar1 + *(int *)(param_1 + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  DAT_01b37358 = 0;
  return;
}

