// lib/havok/Source/Common/Compat/Deprecated/Compat/updates/hkCompat_hk450b1_hk450r1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01037300..01037300, 1 functions

#include "types.h"

// 01037300  FUN_01037300  size=93  [__FILE__]
void FUN_01037300(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00("the object being versioned should not be present in a 4.5.0 b1 file");
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x50c1bb4a,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Compat\\updates\\hkCompat_hk450b1_hk450r1.cpp"
                     ,0x38);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  return;
}

