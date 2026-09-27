// src/enemy/em0111/state/CharacterControlPointCollectorEm0111.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D9D40..004DAA90, 2 functions

#include "mgrr.h"
#include "CharacterControlPointCollectorEm0111.h"

// 004D9D40  CharacterControlPointCollectorEm0111::vf04  size=167  [class]
void CharacterControlPointCollectorEm0111::vf04(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  iVar4 = iVar3;
  for (iVar2 = *(int *)(iVar3 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    iVar4 = iVar2;
  }
  iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
  if (iVar4 != 0) {
    for (iVar2 = *(int *)(iVar3 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      iVar3 = iVar2;
    }
    if (((((*(char *)(iVar3 + 0x18) == '\x01') && (*(char *)(iVar3 + 0x10) + iVar3 != 0)) &&
         (uVar1 = *(uint *)(iVar4 + 0xc), uVar1 != 0)) &&
        ((*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0 &&
         (iVar3 = FUN_008f7780(iVar4), iVar3 != 0)))) &&
       ((((iVar3 = *(int *)(iVar3 + 0x4b4), iVar3 == 0x20112 ||
          ((iVar3 == 0x20113 || (iVar3 == 0x20114)))) || (iVar3 == 0x20115)) ||
        ((iVar3 == 0x20116 || (iVar3 == 0x2011a)))))) {
      hkpAllCdPointCollector::vf04(param_1);
    }
  }
  return;
}

// 004DAA90  CharacterControlPointCollectorEm0111::vf00  size=117  [class]
undefined4 * __thiscall CharacterControlPointCollectorEm0111::vf00(undefined4 *param_1,byte param_2)

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

