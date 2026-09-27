// src/enemy/emc190/Emc190MoveCheckLinearCastCollector.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008074C0..00807560, 3 functions

#include "mgrr.h"
#include "Emc190MoveCheckLinearCastCollector.h"
#include "hkpCdPointCollector.h"

// 008074C0  Emc190MoveCheckLinearCastCollector::vf04  size=67  [class]
void Emc190MoveCheckLinearCastCollector::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  for (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc))
  {
    iVar2 = iVar1;
  }
  if (((*(char *)(iVar2 + 0x18) == '\x01') && (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0))
     && (iVar2 = FUN_00910ba0(iVar2), iVar2 == 0)) {
    hkpAllCdPointCollector::vf04(param_1);
  }
  return;
}

// 00807510  hkpCdPointCollector::hkpCdPointCollector_23  size=77  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_23(undefined4 *param_1)

{
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 00807560  Emc190MoveCheckLinearCastCollector::vf00  size=117  [class]
undefined4 * __thiscall Emc190MoveCheckLinearCastCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1a0);
  }
  return param_1;
}

