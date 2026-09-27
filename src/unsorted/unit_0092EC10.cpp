// src/unsorted/unit_0092EC10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092EC10..0092EC10, 1 functions

#include "types.h"

// 0092EC10  FUN_0092ec10  size=237  [run]
undefined4 FUN_0092ec10(void)

{
  LPVOID pvVar1;
  int iVar2;
  int local_20;
  int local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  int iStack_c;
  
  FUN_0100efe0(&local_20);
  DAT_01b35fb0 = local_20;
  FUN_01011710();
  local_1c = DAT_01b35fb0 + -1;
  local_14 = 0x32000;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x268);
  *(undefined2 *)(iVar2 + 4) = 0x268;
  DAT_01b35fb8 = hkCpuJobThreadPool::hkCpuJobThreadPool(&local_20);
  if (DAT_01b35fb8 == 0) {
    FUN_00dd5650(&DAT_0164d7e8,"HkThreadSystem::startupCpuThreadPool");
    uStack_10 = 0;
    if (-1 < iStack_c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,iStack_c * 4);
    }
    return 0;
  }
  uStack_10 = 0;
  if (-1 < iStack_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,iStack_c * 4);
  }
  return 1;
}

