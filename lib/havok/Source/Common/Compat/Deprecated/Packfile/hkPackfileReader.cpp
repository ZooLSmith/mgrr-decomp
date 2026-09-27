// lib/havok/Source/Common/Compat/Deprecated/Packfile/hkPackfileReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0105FA00..0105FA00, 1 functions

#include "mgrr.h"

// 0105FA00  FUN_0105fa00  size=149  [__FILE__]
void __fastcall FUN_0105fa00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_210 [524];
  
  iVar1 = FUN_0105f9b0();
  if (iVar1 == 0) {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar5 = ". Did you call hkVersionUtil::updateToCurrentVersion() or did it fail?";
    uVar2 = FUN_010500f0(". Did you call hkVersionUtil::updateToCurrentVersion() or did it fail?");
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    pcVar4 = " but the current version is ";
    FUN_01018d00("Loaded data contains version ");
    FUN_01018d00(uVar3);
    FUN_01018d00(pcVar4);
    FUN_01018d00(uVar2);
    FUN_01018d00(pcVar5);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0x7aef6c06,local_210,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Compat\\Deprecated\\Packfile\\hkPackfileReader.cpp"
               ,0x48);
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

