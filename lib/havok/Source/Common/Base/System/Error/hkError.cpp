// lib/havok/Source/Common/Base/System/Error/hkError.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0100B210..0100B2F0, 2 functions

#include "types.h"

// 0100B210  FUN_0100b210  size=223  [__FILE__]
void FUN_0100b210(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  iVar2 = (int)*(short *)(param_1 + 6);
  pcVar10 = " * Do you have more than 32768 references? (unlikely)\n";
  pcVar9 = " * Is this a valid object?\n";
  pcVar8 = 
  " * In a multithreaded environment, what is the hkReferencedObject lock mode you use (see setLockMode())?\n"
  ;
  pcVar7 = " * Have you called removeReference too many times?\n";
  pcVar6 = " * Are you calling delete instead of removeReference?\n";
  puVar5 = &DAT_0170216c;
  puVar4 = &DAT_01702164;
  pcVar3 = " with ref count of ";
  FUN_01018d00("Reference count error on object ");
  FUN_01018c60(param_1);
  FUN_01018d00(pcVar3);
  FUN_01018dc0(iVar2);
  FUN_01018d00(puVar4);
  FUN_01018d00(param_2);
  FUN_01018d00(puVar5);
  FUN_01018d00(pcVar6);
  FUN_01018d00(pcVar7);
  FUN_01018d00(pcVar8);
  FUN_01018d00(pcVar9);
  FUN_01018d00(pcVar10);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x2c66f2d8,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\System\\Error\\hkError.cpp"
                     ,0x21);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  return;
}

// 0100B2F0  FUN_0100b2f0  size=92  [__FILE__]
void FUN_0100b2f0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00(param_1);
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x2636fe25,local_210,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\System\\Error\\hkError.cpp"
                     ,0x28);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  return;
}

