// src/havok/cHavok.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930340..00930340, 1 functions

#include "mgrr.h"

// 00930340  cHavok::startupBaseSystem  size=137  [class]
undefined4 __fastcall cHavok::startupBaseSystem(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0092c290();
  FUN_00dd7290(0);
  uVar1 = FUN_01010f40(0x200000);
  iVar2 = FUN_010132d0(param_1 + 0xc,uVar1);
  *(int *)(param_1 + 0x1c) = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0164e780,"cHavok::startupBaseSystem");
    return 0;
  }
  hkNativeFileSystem::hkNativeFileSystem(iVar2,&DAT_008fd460,0);
  *(undefined4 *)(param_1 + 0x44) = 1;
  HkRemoveManagerImplement::HkRemoveManagerImplement();
  HkSystemGroupManagerImplement::HkSystemGroupManagerImplement();
  FUN_0092ee30();
  FUN_00905d10();
  FUN_008fd480();
  return 1;
}

