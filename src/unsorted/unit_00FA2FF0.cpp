// src/unsorted/unit_00FA2FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA2FF0..00FA3260, 4 functions

#include "mgrr.h"

// 00FA2FF0  FUN_00fa2ff0  size=211  [run]
undefined4 FUN_00fa2ff0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0xa6;
  iVar1 = (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa6,0x44000000);
  if ((iVar1 < 0) || (iVar1 = (**(code **)(*DAT_01f206d4 + 0xa4))(DAT_01f206d4), iVar1 < 0)) {
    return 0;
  }
  iVar1 = 0;
  piVar3 = DAT_01f20704;
  do {
    piVar4 = (int *)0x0;
    if (iVar1 == 0) {
      if (piVar3 != (int *)0x0) {
        DAT_01f20704 = (int *)0x0;
        piVar4 = piVar3;
        goto LAB_00fa305c;
      }
    }
    else {
LAB_00fa305c:
      iVar2 = (**(code **)(*DAT_01f206d4 + 0x94))(DAT_01f206d4,iVar1,piVar4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar3 = DAT_01f20704;
      if (iVar2 < 0) {
        return 0;
      }
    }
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0x9c))(DAT_01f206d4,*(undefined4 *)(iVar5 + 8));
      }
      return 1;
    }
  } while( true );
}

// 00FA30D0  FUN_00fa30d0  size=228  [run]
undefined4 __thiscall FUN_00fa30d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_ESI;
  int *piVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  piVar2 = (int *)(param_3 + 4);
  local_4 = param_1;
  do {
    iVar1 = *piVar2;
    if (*(int *)((param_2 - param_3) + (int)piVar2) != iVar1) {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
        FUN_00fa07f0();
      }
      iVar1 = FUN_00fa0e20(iVar3,*(undefined4 *)((param_2 - param_3) + (int)piVar2));
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar3 < 4);
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 == *(int *)(param_3 + 0x24)) {
    return 1;
  }
  if (iVar3 == 0) {
    iVar3 = param_4;
  }
  if (*(int *)(iVar3 + 4) == 0) {
    if ((DAT_01f206d4 != (int *)0x0) &&
       (iVar3 = (**(code **)(*DAT_01f206d4 + 0x9c))(DAT_01f206d4,*(undefined4 *)(iVar3 + 8)),
       -1 < iVar3)) {
      return 1;
    }
    return 0;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    piVar2 = &local_4;
    iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x48))(*(int **)(iVar3 + 4),0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*DAT_01f206d4 + 0x9c))(DAT_01f206d4,unaff_ESI);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      if (-1 < iVar3) {
        return 1;
      }
    }
  }
  return 0;
}

// 00FA31C0  FUN_00fa31c0  size=156  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa31c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_01f20758 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20740);
  }
  local_20 = param_2;
  local_18 = param_5;
  local_24 = param_3;
  local_28 = param_1;
  local_c = param_8;
  local_14 = param_6;
  local_1c = param_4;
  local_8 = param_9;
  local_10 = param_7;
  local_4 = param_10;
  cFixedList::insert_30(&param_1,&DAT_01f20738,&local_28);
  _DAT_01f20658 = _DAT_01f20658 + 1;
  if (DAT_01f20758 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20740);
  }
  return;
}

// 00FA3260  FUN_00fa3260  size=409  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00fa3260(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_01f134d0;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x7f7fffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_01f126d0;
  for (iVar1 = 0x380; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x7f7fffff;
    puVar2 = puVar2 + 1;
  }
  DAT_01f126c4 = 0;
  DAT_01f126c0 = 0;
  _DAT_01f126bc = 0;
  _DAT_01f126b8 = 0;
  _DAT_01f126b4 = 0;
  _DAT_01f126b0 = 0;
  FUN_00f998d0();
  if (DAT_01f206d4 != (int *)0x0) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x9c,1);
  }
  (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xae,0);
  FUN_00f98fb0();
  DAT_01f20590 = 0;
  DAT_01f2058c = 0;
  iVar1 = FUN_00fa2ff0(DAT_01f20564);
  if (iVar1 != 0) {
    DAT_018da6d4 = 0;
    DAT_018da6d8 = 0;
    DAT_018da6dc = 0;
    DAT_018da6e0 = 0;
    DAT_018da6e4 = 0;
    DAT_018da6e8 = 0;
    DAT_018da6ec = 0;
    DAT_018da6f0 = 0;
    DAT_018da6f4 = 0;
    DAT_018da6f8 = 0;
    DAT_018da6fc = 0;
    DAT_01f20584 = DAT_01f206dc;
    DAT_01f20580 = DAT_01f206e0;
    FUN_00f98cf0();
    if (DAT_018da644 != 1) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,1);
      }
      DAT_018da644 = 1;
    }
    if (DAT_018da688 != 7) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xa8,7);
      }
      DAT_018da688 = 7;
    }
    if (DAT_018da64c != 4) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x17,4);
      }
      DAT_018da64c = 4;
    }
    DAT_01f20560 = DAT_01f20560 + 1;
    if (DAT_01f20560 == 0) {
      DAT_01f20560 = 1;
    }
    return 1;
  }
  return 0;
}

