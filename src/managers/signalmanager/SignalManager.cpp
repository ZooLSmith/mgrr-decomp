// src/managers/signalmanager/SignalManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D897D0..00D8A650, 2 functions

#include "types.h"

// 00D897D0  SignalManager::vf08  size=31  [class]
undefined4 * __thiscall SignalManager::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8A650  SignalManager::SignalManager  size=152  [class]
void __fastcall SignalManager::SignalManager(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[2];
  *param_1 = SignalManagerImplement::vftable;
  if (piVar2 != piVar2 + param_1[3]) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_00d89f20();
        if (*(undefined4 **)(iVar1 + 0x28) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar1 + 0x28))(1);
          *(undefined4 *)(iVar1 + 0x28) = 0;
        }
        FUN_00dd7270();
        FUN_00dd7270();
        FUN_00dd4920(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(param_1[2] + param_1[3] * 4));
  }
  if (param_1[2] != 0) {
    param_1[3] = 0;
  }
  param_1[1] = lib::Array<Signal*>::vftable;
  if (param_1[2] != 0) {
    param_1[3] = 0;
  }
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = vftable;
  return;
}

