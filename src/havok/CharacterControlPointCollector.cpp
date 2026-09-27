// src/havok/CharacterControlPointCollector.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1B90..008EBAF0, 2 functions

#include "mgrr.h"
#include "CharacterControlPointCollector.h"

// 008E1B90  CharacterControlPointCollector::vf04  size=68  [class]
void CharacterControlPointCollector::vf04(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x34);
  for (iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc))
  {
    iVar3 = iVar2;
  }
  iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  if (((iVar3 == 0) || (uVar1 = *(uint *)(iVar3 + 0xc), uVar1 == 0)) ||
     ((*(uint *)((-(uint)(uVar1 != 0) & uVar1) + 8) & 0x2000) == 0)) {
    hkpAllCdPointCollector::vf04(param_1);
  }
  return;
}

// 008EBAF0  CharacterControlPointCollector::vf00  size=117  [class]
undefined4 * __thiscall CharacterControlPointCollector::vf00(undefined4 *param_1,byte param_2)

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

