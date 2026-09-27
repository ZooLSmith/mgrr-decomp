// lib/havok/unit_008E1F40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1F40..008E2140, 4 functions

#include "mgrr.h"
#include "hkBaseObject.h"

// 008E1F40  hkBaseObject::hkBaseObject_218  size=142  [run]
void hkBaseObject::hkBaseObject_218(undefined4 param_1)

{
  int *piVar1;
  undefined **local_a0 [28];
  undefined4 local_30;
  
  FUN_004066f0();
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
  FUN_01269700(local_a0);
  local_30 = param_1;
  FUN_0126a610(local_a0);
  local_a0[0] = vftable;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E1FD0  hkBaseObject::hkBaseObject_217  size=210  [run]
float10 hkBaseObject::hkBaseObject_217(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined **local_a0 [28];
  float local_30;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
  FUN_01269700(local_a0);
  local_a0[0] = vftable;
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return (float10)local_30;
}

// 008E20B0  hkBaseObject::hkBaseObject_210  size=139  [run]
void hkBaseObject::hkBaseObject_210(undefined4 param_1)

{
  int *piVar1;
  undefined **local_a0 [27];
  undefined4 local_34;
  
  FUN_004066f0();
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
  FUN_01269700(local_a0);
  local_34 = param_1;
  FUN_0126a610(local_a0);
  local_a0[0] = vftable;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E2140  hkBaseObject::hkBaseObject_213  size=207  [run]
float10 hkBaseObject::hkBaseObject_213(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined **local_a0 [27];
  float local_34;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
  FUN_01269700(local_a0);
  local_a0[0] = vftable;
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return (float10)local_34;
}

