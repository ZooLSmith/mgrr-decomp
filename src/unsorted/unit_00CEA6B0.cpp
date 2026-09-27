// src/unsorted/unit_00CEA6B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEA6B0..00CEAA60, 7 functions

#include "types.h"

// 00CEA6B0  FUN_00cea6b0  size=131  [run]
void __fastcall FUN_00cea6b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  if (*(int *)(param_1 + 0x314) != 0) {
    *(undefined4 *)(param_1 + 0x31c) = 0;
    if (*(int *)(param_1 + 800) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x314),0);
      *(undefined4 *)(param_1 + 800) = 0;
    }
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  if (*(int *)(param_1 + 0x368) != 0) {
    *(undefined4 *)(param_1 + 0x370) = 0;
    if (*(int *)(param_1 + 0x374) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x368),0);
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(undefined4 *)(param_1 + 0x36c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00CEA740  FUN_00cea740  size=113  [run]
void __fastcall FUN_00cea740(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00dd7270();
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 00CEA7C0  FUN_00cea7c0  size=72  [run]
void __fastcall FUN_00cea7c0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00cea6b0();
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 8))(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00cea740();
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00CEA810  FUN_00cea810  size=276  [run]
undefined4 __thiscall FUN_00cea810(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 1) {
    return 1;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0x30) = param_4;
    iVar1 = FUN_009831f0(param_3,param_2);
    if ((((iVar1 != 0) && (iVar1 = FUN_00cc5a50(param_3,param_2), iVar1 != 0)) &&
        (iVar1 = FUN_00a4b740(0x20,param_2), iVar1 != 0)) &&
       ((iVar1 = FUN_00cc5b40(0x20,param_2), iVar1 != 0 && (iVar1 = FUN_00dd7240(), iVar1 != 0)))) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00983210();
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x38),0);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x4c),0);
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
        *(undefined4 *)(param_1 + 0x6c) = 0;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_00dd7270();
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 0;
  }
  return 0;
}

// 00CEA930  FUN_00cea930  size=189  [run]
void __fastcall FUN_00cea930(int param_1)

{
  if ((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_00983250();
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  FUN_00983210();
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x38),0);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x4c),0);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_00dd7270();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

// 00CEAA00  FUN_00ceaa00  size=94  [run]
void __fastcall FUN_00ceaa00(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00dd7270();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

// 00CEAA60  FUN_00ceaa60  size=67  [run]
undefined4 FUN_00ceaa60(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  if (param_1[2] != 0) {
    FUN_00ceaa00();
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
    }
  }
  param_1[2] = 0;
  return 1;
}

