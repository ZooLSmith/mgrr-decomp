// src/misc/GameProxy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00932750..00932750, 1 functions

#include "types.h"

// 00932750  GameProxy::getPhaseData  size=33  [class]
undefined4 * GameProxy::getPhaseData(int param_1)

{
  if (DAT_018b9174 != param_1) {
    FUN_00dd5650(&DAT_0164eb8c);
    return (undefined4 *)0x0;
  }
  return &DAT_018b92f0;
}

