// lib/havok/Source/Common/Compat/Deprecated/Compat/updates/hkCompat_hk461r1_hk500b1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01036790..01036790, 1 functions

#include "types.h"

// 01036790  FUN_01036790  size=96  [__FILE__]
void FUN_01036790(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00("This function should never be called.");
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x29d6a3f5,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Compat\\updates\\hkCompat_hk461r1_hk500b1.cpp"
                     ,0x103);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  return;
}

