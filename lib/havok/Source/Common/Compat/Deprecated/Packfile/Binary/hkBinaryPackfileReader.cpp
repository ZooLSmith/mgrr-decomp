// lib/havok/Source/Common/Compat/Deprecated/Packfile/Binary/hkBinaryPackfileReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01055A00..01055A00, 1 functions

#include "types.h"

// 01055A00  FUN_01055a00  size=198  [__FILE__]
void FUN_01055a00(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined1 local_210 [524];
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = *(int *)(unaff_EDI + iVar2 * 8);
      if ((iVar1 != 0) && (*(int *)(unaff_EDI + 4 + iVar2 * 8) == 0)) {
        iVar1 = FUN_01010160(iVar1,0);
        *(int *)(unaff_EDI + 4 + iVar2 * 8) = iVar1;
        if (iVar1 == 0) {
          hkErrStream::hkErrStream(local_210,0x200);
          uVar3 = *(undefined4 *)(unaff_EDI + iVar2 * 8);
          pcVar5 = 
          "You will have to set manually corresponding class pointer in the variant. Otherwise you have to store metadata in the packfile."
          ;
          puVar4 = &DAT_0170216c;
          FUN_01018d00("Can not find class pointer for an object at 0x");
          FUN_01018c60(uVar3);
          FUN_01018d00(puVar4);
          FUN_01018d00(pcVar5);
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0x67fde46,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Packfile\\Binary\\hkBinaryPackfileReader.cpp"
                     ,0x57);
          hkBaseObject::hkBaseObject_38();
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return;
}

