// src/sound/SoundSeAttrSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CB4F0..009CB4F0, 1 functions

#include "mgrr.h"

// 009CB4F0  SoundSeAttrSystem::Se  size=165  [class]
int SoundSeAttrSystem::Se(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < (int)(&DAT_01b78830)[DAT_01b781b8 * 2]) {
    piVar2 = (int *)((&DAT_01b78834)[DAT_01b781b8 * 2] + 0x28);
    while (*piVar2 != *param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xb;
      if ((int)(&DAT_01b78830)[DAT_01b781b8 * 2] <= iVar1) {
        return 0;
      }
    }
    piVar2 = (int *)FUN_009ca1b0(param_1);
    if (((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) &&
       (iVar1 = *piVar2, iVar1 != 0)) {
      iVar3 = FUN_00a4a2d0();
      if ((iVar3 != 0) && (piVar2[1] != 0)) {
        iVar1 = piVar2[1];
      }
      iVar1 = FUN_00e5e080(iVar1,param_1 + 4,0,0xffffffff,0);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_01659008,*param_1,*piVar2);
      }
      return iVar1;
    }
  }
  return 0;
}

