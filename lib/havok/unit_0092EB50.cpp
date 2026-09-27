// lib/havok/unit_0092EB50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092EB50..0092EBF0, 2 functions

#include "types.h"

// 0092EB50  HkDataManager::HkDataManager  size=153  [run]
void __fastcall HkDataManager::HkDataManager(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  *param_1 = HkDataManagerImplement::vftable;
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
    param_1[0x1d] = 0;
  }
  if (param_1[0x1c] != 0) {
    FUN_010102e0();
    iVar1 = param_1[0x1c];
    if (iVar1 != 0) {
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0xc);
      param_1[0x1c] = 0;
    }
  }
  FUN_00dd7340();
  FUN_0092eb00();
  FUN_00dd7270();
  FUN_00dd7270();
  FUN_0092e620();
  *param_1 = vftable;
  return;
}

// 0092EBF0  HkDataManagerImplement::vf00  size=30  [run]
undefined4 __thiscall HkDataManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  HkDataManager::HkDataManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

