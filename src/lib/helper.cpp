// src/lib/helper.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004013E0..00402270, 9 functions

#include "types.h"

// 004013E0  lib::helper::AllocatorProxy::Core::vf00  size=31  [class]
undefined4 * __thiscall lib::helper::AllocatorProxy::Core::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00401710  lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf04  size=31  [class]
undefined4 __thiscall
lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00dd29b0(param_2,0x20,0,0);
    return uVar1;
  }
  return 0;
}

// 00401730  lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf08  size=18  [class]
void lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf08(undefined4 param_1)

{
  FUN_00dd48d0(param_1,0);
  return;
}

// 00401750  lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf00  size=31  [class]
undefined4 * __thiscall
lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Core::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004017B0  FUN_004017b0  size=24  [callgraph]
void __fastcall FUN_004017b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  FUN_00dd48d0(param_1,0);
  return;
}

// 00401F90  FUN_00401f90  size=104  [callgraph]
undefined4 * __thiscall FUN_00401f90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  
  if (param_2 != param_1) {
    uVar1 = *param_2;
    iVar2 = param_2[1];
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
    piVar3 = (int *)param_1[1];
    param_1[1] = iVar2;
    *param_1 = uVar1;
    if (piVar3 != (int *)0x0) {
      LVar4 = InterlockedDecrement(piVar3 + 1);
      if (LVar4 == 0) {
        (**(code **)(*piVar3 + 4))();
        LVar4 = InterlockedDecrement(piVar3 + 2);
        if (LVar4 == 0) {
          (**(code **)(*piVar3 + 8))();
        }
      }
    }
    return param_1;
  }
  return param_1;
}

// 004020E0  lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>  size=205  [class]
bool __thiscall
lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
          (int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  LONG LVar3;
  undefined4 *local_8;
  int *local_4;
  
  if ((param_2 == 0) ||
     (puVar1 = (undefined4 *)FUN_00dd29b0(8,0x20,0,0), puVar1 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = param_2;
    *puVar1 = vftable;
  }
  local_8 = puVar1;
  if (((puVar1 == (undefined4 *)0x0) || (param_2 == 0)) ||
     (piVar2 = (int *)FUN_00dd29b0(0x18,0x20,0,0), piVar2 == (int *)0x0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 1;
    piVar2[2] = 1;
    *piVar2 = (int)detail::
                   SharedCoreImpl<lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>,lib::helper::DeleterByAllocator<sys::AllocatorByHeap>,sys::AllocatorByHeap>
                   ::vftable;
    piVar2[3] = (int)puVar1;
    piVar2[4] = param_2;
    piVar2[5] = param_2;
  }
  local_4 = piVar2;
  FUN_00401f90(&local_8);
  if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
    (**(code **)(*piVar2 + 4))();
    LVar3 = InterlockedDecrement(piVar2 + 2);
    if (LVar3 == 0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  return *param_1 != 0;
}

// 00402200  FUN_00402200  size=102  [callgraph]
void __fastcall FUN_00402200(int param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00402260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

// 00402270  FUN_00402270  size=246  [callgraph]
undefined4 __thiscall FUN_00402270(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00402200();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 8);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x1fffffff;
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

