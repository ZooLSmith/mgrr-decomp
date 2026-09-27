// lib/havok/Source/Common/Compat/Deprecated/Compat/updates/hkCompat_hk201010r1_hk201020r1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0102CDE0..0102CDE0, 1 functions

#include "mgrr.h"

// 0102CDE0  FUN_0102cde0  size=98  [__FILE__]
undefined4 FUN_0102cde0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00("Should never be called");
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x13e06964,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Compat\\updates\\hkCompat_hk201010r1_hk201020r1.cpp"
                     ,0x20);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  hkBaseObject::hkBaseObject_38();
  return 1;
}

