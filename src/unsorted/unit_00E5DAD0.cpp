// src/unsorted/unit_00E5DAD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E5DAD0..00E5DF10, 5 functions

#include "types.h"

// 00E5DAD0  FUN_00e5dad0  size=278  [run]
void FUN_00e5dad0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  for (iVar1 = (**(code **)(DAT_01dd96f0 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(*piVar3 + 0x1c))(iVar1)) {
    FUN_00df3b40(*(undefined4 *)(iVar1 + 4),1);
    *(undefined4 *)(iVar1 + 4) = 0;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + -4);
    }
  }
  if (DAT_01dd9760 != 0) {
    FUN_00dd4940(DAT_01dd9760);
    DAT_01dd9760 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd96f0 + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
    (**(code **)(DAT_01dd96f0 + 8))();
  }
  FUN_00df39f0(DAT_01dd94f8);
  iVar1 = (**(code **)(DAT_01dd9688 + 0xc))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(DAT_01dd9688 + 0x1c))(0);
  while (iVar1 != 0) {
    iVar2 = (**(code **)(DAT_01dd9688 + 0x1c))(iVar1);
    FUN_00dd4920(iVar1);
    iVar1 = iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00e5dbe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_01dd9688 + 8))();
  return;
}

// 00E5DC80  FUN_00e5dc80  size=191  [run]
void FUN_00e5dc80(void)

{
  int iVar1;
  int *piVar2;
  
  for (iVar1 = (**(code **)(DAT_01dd98d8 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(*piVar2 + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 0x44) != 0) {
      FUN_00df3b40(*(int *)(iVar1 + 0x44),1);
      *(undefined4 *)(iVar1 + 0x44) = 0;
    }
    if (*(int *)(iVar1 + 0x40) != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x40) + 0xc);
      *piVar2 = *piVar2 + -1;
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(iVar1 + -4);
    }
  }
  if (DAT_01dd9948 != 0) {
    FUN_00dd4940(DAT_01dd9948);
    DAT_01dd9948 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd98d8 + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
    (**(code **)(DAT_01dd98d8 + 8))();
  }
  FUN_00e65480();
  FUN_00dd7270();
  return;
}

// 00E5DD40  FUN_00e5dd40  size=227  [run]
int FUN_00e5dd40(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  piVar1 = (int *)FUN_00e62e50();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00e62cc0(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        piVar1[2] = *param_1;
        piVar1[3] = param_1[1];
        piVar1[4] = param_1[2];
        iVar2 = FUN_00e5c000(0,0xffffffff,0);
        piVar1[0x10] = iVar2;
        if (iVar2 != 0) {
          if ((piVar1[4] & 0x80000000U) != 0) {
            piVar1[1] = piVar1[1] | 2;
          }
          FUN_00e55460();
          iVar2 = FUN_00e4a010();
          if (iVar2 != 0) {
            iVar2 = *piVar1;
            if (DAT_01dd9860 != 0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
            }
            return iVar2;
          }
        }
        FUN_00e58fb0(piVar1);
        goto LAB_00e5ddf1;
      }
      FUN_00e62d80(iVar2);
    }
    FUN_00e62d80(*piVar1);
    FUN_00dd4920(piVar1);
  }
LAB_00e5ddf1:
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return 0;
}

// 00E5DE30  FUN_00e5de30  size=216  [run]
int FUN_00e5de30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  piVar1 = (int *)FUN_00e62e50();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00e62cc0(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        piVar1[2] = *param_1;
        piVar1[3] = param_1[1];
        piVar1[4] = param_1[2];
        iVar2 = FUN_00e5d4e0(param_2,param_3,param_4);
        if (iVar2 == 0) {
          FUN_00e58fb0(piVar1);
        }
        else {
          iVar2 = FUN_00e4a010();
          if (iVar2 != 0) {
            iVar2 = *piVar1;
            if (DAT_01dd9860 != 0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
            }
            return iVar2;
          }
          FUN_00e58fb0(piVar1);
        }
        goto LAB_00e5dec3;
      }
      FUN_00e62d80(iVar2);
    }
    FUN_00e62d80(*piVar1);
    FUN_00dd4920(piVar1);
  }
LAB_00e5dec3:
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return 0;
}

// 00E5DF10  FUN_00e5df10  size=268  [run]
int FUN_00e5df10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  piVar1 = (int *)FUN_00e62e50();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00e62cc0(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        piVar1[2] = *param_1;
        piVar1[3] = param_1[1];
        piVar1[4] = param_1[2];
        iVar2 = FUN_00e5c000(*param_2,param_2[1],0);
        piVar1[0x10] = iVar2;
        if (iVar2 != 0) {
          piVar1[1] = piVar1[1] | 2;
          piVar1[5] = *param_2;
          piVar1[6] = param_2[1];
          FUN_00e55460();
          iVar2 = FUN_00e4a010();
          if (iVar2 != 0) {
            iVar2 = *piVar1;
            if (DAT_01dd9860 != 0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
            }
            return iVar2;
          }
        }
        FUN_00e58fb0(piVar1);
        if (DAT_01dd9860 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
        }
        return 0;
      }
      FUN_00e62d80(iVar2);
    }
    FUN_00e62d80(*piVar1);
    FUN_00dd4920(piVar1);
  }
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return 0;
}

