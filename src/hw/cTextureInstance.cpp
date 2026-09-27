// src/hw/cTextureInstance.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9E5A0..00FA9E40, 6 functions

#include "mgrr.h"

// 00F9E5A0  Hw::cTextureInstance::cTextureInstance_3  size=116  [class]
uint * Hw::cTextureInstance::cTextureInstance_3(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x30 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x30)
  ;
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,&DAT_01f21af0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    iVar4 = param_1 - 1;
    puVar3 = puVar1;
    if (-1 < iVar4) {
      do {
        *puVar3 = (uint)vftable;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 1;
        puVar3[5] = 0;
        puVar3[10] = 0;
        puVar3 = puVar3 + 0xc;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return puVar1;
    }
  }
  return puVar1;
}

// 00F9F230  Hw::cTextureInstance::cTextureInstance  size=72  [class]
void __fastcall Hw::cTextureInstance::cTextureInstance(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = vftable;
  if (param_1[8] != 0) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[1] = 0;
    }
    param_1[1] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[8] = 1;
  return;
}

// 00F9F280  Hw::cTextureInstance::cTextureInstance_4  size=70  [class]
void __fastcall Hw::cTextureInstance::cTextureInstance_4(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = cTargetTexture::vftable;
  param_1[7] = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  return;
}

// 00F9F330  Hw::cTextureInstance::cTextureInstance_5  size=70  [class]
void __fastcall Hw::cTextureInstance::cTextureInstance_5(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *param_1 = cShareTargetTexture::vftable;
  return;
}

// 00F9F490  Hw::cTextureInstance::cTextureInstance_2  size=67  [class]
void __fastcall Hw::cTextureInstance::cTextureInstance_2(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = cLockableTexture::vftable;
  param_1[7] = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  return;
}

// 00FA9E40  Hw::cTextureInstance::vf00  size=213  [class]
undefined4 * __thiscall Hw::cTextureInstance::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 & 2) != 0) {
    iVar2 = param_1[-1] + -1;
    if (-1 < iVar2) {
      piVar3 = param_1 + param_1[-1] * 0xc + 1;
      do {
        piVar4 = piVar3 + -0xc;
        piVar3[-0xd] = (int)vftable;
        if (piVar3[-5] != 0) {
          piVar1 = (int *)*piVar4;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar4 = 0;
          }
          *piVar4 = 0;
        }
        iVar2 = iVar2 + -1;
        *piVar4 = 0;
        piVar3[-0xb] = 0;
        piVar3[-10] = 0;
        piVar3[-9] = 0;
        piVar3[-7] = 0;
        piVar3[-6] = 0;
        piVar3[-5] = 1;
        piVar3[-8] = 0;
        piVar3[-3] = 0;
        piVar3 = piVar4;
      } while (-1 < iVar2);
    }
    if ((param_2 & 1) != 0) {
      FUN_00dd4940(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = vftable;
  if (param_1[8] != 0) {
    piVar3 = (int *)param_1[1];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_1[1] = 0;
    }
    param_1[1] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  param_1[5] = 0;
  param_1[10] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

