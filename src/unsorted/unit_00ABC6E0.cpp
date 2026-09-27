// src/unsorted/unit_00ABC6E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ABC6E0..00ABCA20, 6 functions

#include "mgrr.h"

// 00ABC6E0  FUN_00abc6e0  size=102  [run]
void __fastcall FUN_00abc6e0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00abc740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 00ABC750  FUN_00abc750  size=102  [run]
void __fastcall FUN_00abc750(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00abc7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 00ABC7C0  FUN_00abc7c0  size=102  [run]
void __fastcall FUN_00abc7c0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00abc820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 00ABC830  FUN_00abc830  size=254  [run]
undefined4 __thiscall FUN_00abc830(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00abc6e0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0xc);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(int *)(param_1 + 4) = iVar3;
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0xc) / 0xc;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00ABC930  FUN_00abc930  size=239  [run]
undefined4 __thiscall FUN_00abc930(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00abc750();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 << 6);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3ffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00ABCA20  FUN_00abca20  size=244  [run]
undefined4 __thiscall FUN_00abca20(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00abc7c0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

