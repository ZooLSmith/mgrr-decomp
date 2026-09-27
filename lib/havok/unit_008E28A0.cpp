// lib/havok/unit_008E28A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E28A0..008E28A0, 1 functions

#include "mgrr.h"
#include "hkBaseObject.h"

// 008E28A0  hkBaseObject::hkBaseObject_209  size=207  [run]
float10 hkBaseObject::hkBaseObject_209(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined **local_a0 [23];
  float local_44;
  
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
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo();
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
  return (float10)local_44;
}

