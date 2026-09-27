// src/managers/scenebgmanager/SceneBgManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C142A0..00C5EB00, 2 functions

#include "types.h"

// 00C142A0  SceneBgManager::vf9C  size=31  [class]
undefined4 * __thiscall SceneBgManager::vf9C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5EB00  SceneBgManager::SceneBgManager  size=186  [class]
void __fastcall SceneBgManager::SceneBgManager(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  int *piVar3;
  
  *param_1 = SceneBgManagerImplement::vftable;
  FUN_00d8a1d0(0x3a,param_1[0x4575]);
  iVar4 = 8;
  do {
    iVar1 = iVar4;
    FUN_009350a0();
    iVar4 = iVar1 + -1;
  } while (iVar4 != 0);
  iVar1 = iVar1 + 6;
  piVar2 = param_1 + 0x458d;
  do {
    piVar3 = piVar2 + -0x8ae;
    piVar2[-0x8af] = (int)lib::Array<SceneBgWork::LayoutUnit>::vftable;
    if (*piVar3 != 0) {
      piVar2[-0x8ad] = 0;
    }
    *piVar3 = 0;
    piVar2[-0x8ac] = 0;
    if (piVar2[-0x8bb] != 0) {
      piVar2[-0x8b9] = 0;
      if (piVar2[-0x8b8] != 0) {
        FUN_00dd48d0(piVar2[-0x8bb],0);
        piVar2[-0x8b8] = 0;
      }
      piVar2[-0x8bb] = 0;
      piVar2[-0x8ba] = 0;
    }
    if (piVar2[-0x8c2] != 0) {
      if (piVar2[-0x8c2] != 0) {
        FUN_00dd48d0(piVar2[-0x8c2],0);
        piVar2[-0x8c2] = 0;
      }
      piVar2[-0x8c1] = 0;
      piVar2[-0x8c0] = 0;
      piVar2[-0x8bf] = piVar2[-0x8c3];
      piVar2[-0x8be] = piVar2[-0x8c3];
      piVar2[-0x8bd] = piVar2[-0x8c3];
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar3;
  } while (-1 < iVar1);
  *param_1 = vftable;
  return;
}

