// lib/havok/unit_008EB9C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EB9C0..008EB9C0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 008EB9C0  hkpAllCdPointCollector::hkpAllCdPointCollector_18  size=290  [run]
undefined4 __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_18(int param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1a0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0x7f7fffee;
    *puVar2 = vftable;
    puVar2[4] = puVar2 + 8;
    puVar2[6] = 0x80000008;
    puVar2[5] = 0;
    puVar2[1] = 0x7f7fffee;
    *puVar2 = CharacterControlPointCollector::vftable;
  }
  *(undefined4 **)(param_1 + 0x128) = puVar2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1a0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = vftable;
    puVar2[1] = 0x7f7fffee;
    puVar2[4] = puVar2 + 8;
    puVar2[6] = 0x80000008;
    puVar2[5] = 0;
    puVar2[1] = 0x7f7fffee;
    *puVar2 = CharacterControlPointCollector::vftable;
  }
  *(undefined4 **)(param_1 + 300) = puVar2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1a0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = vftable;
    puVar2[1] = 0x7f7fffee;
    puVar2[4] = puVar2 + 8;
    puVar2[6] = 0x80000008;
    puVar2[5] = 0;
    puVar2[1] = 0x7f7fffee;
    *puVar2 = ContactPointCollector::vftable;
  }
  *(undefined4 **)(param_1 + 0x130) = puVar2;
  if (((*(int *)(param_1 + 0x128) != 0) && (*(int *)(param_1 + 300) != 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    return 1;
  }
  FUN_008e0dc0();
  return 0;
}

