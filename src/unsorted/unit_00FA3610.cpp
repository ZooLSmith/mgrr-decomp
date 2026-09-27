// src/unsorted/unit_00FA3610.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA3610..00FA39A0, 6 functions

#include "types.h"

// 00FA3610  FUN_00fa3610  size=228  [run]
undefined4 FUN_00fa3610(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x1c) & 0x20) == 0)) {
    return 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  iVar1 = FUN_00f9e370(uVar3);
  if (iVar1 == 0) {
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) {
    Hw::cInfoHash::eraseNormal(param_1);
  }
  else {
    Hw::cInfoHash::eraseReduce(param_1);
  }
  if (*(int *)(iVar1 + 0x14) < 2) {
    DAT_01f126cc = DAT_01f126cc + 1;
    if ((*(uint *)(iVar1 + 8) & 0x200) != 0) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffdff;
      piVar2 = (int *)FUN_00f9e300(0x132ed5c3);
      if (piVar2 != (int *)0x0) {
        if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
          if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)piVar2[1];
          }
        }
        else {
          uVar3 = *(undefined4 *)*piVar2;
        }
        Hw::cInfoHash::eraseReduce(uVar3);
      }
    }
    if (*(int *)(iVar1 + 0x14) < 1) {
      FUN_00fa1a90(iVar1);
    }
  }
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return 1;
}

// 00FA3700  FUN_00fa3700  size=164  [run]
void FUN_00fa3700(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (DAT_01f20a18 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if ((*(uint *)(param_1 + 8) & 0x700000) != 0) {
      DAT_01f126cc = DAT_01f126cc + 1;
    }
    if ((*(int *)(param_1 + 0x14) < 2) && ((*(uint *)(param_1 + 8) & 0x200) != 0)) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffdff;
      piVar1 = (int *)FUN_00f9e300(0x132ed5c3);
      if (piVar1 != (int *)0x0) {
        if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
          if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)piVar1[1];
          }
        }
        else {
          uVar2 = *(undefined4 *)*piVar1;
        }
        Hw::cInfoHash::eraseReduce(uVar2);
      }
    }
    if (*(int *)(param_1 + 0x14) < 1) {
      FUN_00fa1a90(param_1);
    }
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
  }
  return;
}

// 00FA37B0  FUN_00fa37b0  size=119  [run]
undefined4 FUN_00fa37b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_01f21b60 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
  }
  iVar1 = Hw::TextureManager_2(param_2,param_3,0);
  if (iVar1 == 0) {
    if (DAT_01f21b60 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 8);
  *(uint *)(param_1 + 0x10) = (uint)(*(int *)(iVar1 + 0xc) != 0);
  if (DAT_01f21b60 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
  }
  return 1;
}

// 00FA3830  FUN_00fa3830  size=201  [run]
/* WARNING: Removing unreachable block (ram,0x00fa3856) */

void FUN_00fa3830(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = param_1;
  LOCK();
  DAT_01f126c8 = 1;
  UNLOCK();
  param_1 = (undefined4 *)param_1[2];
  if (param_1 != (undefined4 *)0x0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + 0x2c + puVar3[1]);
      piVar4 = &DAT_01f204e0;
      iVar5 = 0x10;
      do {
        if (iVar1 == *piVar4) {
          *piVar4 = 0;
          piVar4[1] = 0;
        }
        piVar4 = piVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (puVar3[4] == 0) {
        FUN_00fa3610(puVar3[1] + iVar6);
      }
      iVar6 = iVar6 + 0x30;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)puVar3[1];
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-1] == 0) {
      FUN_00dd4940(puVar2 + -1);
    }
    else {
      (**(code **)*puVar2)(3);
    }
  }
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  return;
}

// 00FA3900  FUN_00fa3900  size=152  [run]
/* WARNING: Removing unreachable block (ram,0x00fa3936) */

void FUN_00fa3900(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  LOCK();
  DAT_01f126c8 = 1;
  UNLOCK();
  iVar2 = param_1[5];
  if (iVar2 == 0) {
    iVar2 = *param_1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      if (((*(byte *)(*(int *)(iVar2 + 0x14) + uVar3 * 4 + iVar2) & 1) == 0) && (param_1[4] == 0)) {
        FUN_00fa3610(param_1[1] + iVar4);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar3 < uVar1);
  }
  param_1[4] = 1;
  return;
}

// 00FA39A0  FUN_00fa39a0  size=74  [run]
undefined4 FUN_00fa39a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa08f0(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00fa0850(param_1,param_2);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ebd04,param_2);
      return 0;
    }
  }
  return 1;
}

