// src/unsorted/unit_00F4BA30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4BA30..00F4BA30, 1 functions

#include "mgrr.h"

// 00F4BA30  FUN_00f4ba30  size=518  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f4ba30(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_01ee6550 != 0) {
    EspReadWriteLock::enterWrite();
    piVar3 = DAT_018d72ac;
    if (DAT_018d72ac != DAT_018d72ac + DAT_018d72b4) {
      do {
        FUN_009e02a0(*(undefined4 *)(*piVar3 + 4));
        uVar1 = *(uint *)(*piVar3 + 4);
        *(undefined2 *)(uVar1 + 0x48) = 0;
        *(undefined4 *)(uVar1 + 0x3c) = 0;
        *(undefined4 *)(uVar1 + 0x40) = 0;
        *(undefined4 *)(uVar1 + 0x44) = 0;
        *(undefined1 *)(uVar1 + 0x2c) = 0;
        *(undefined4 *)(uVar1 + 8) = 0xfff;
        Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
        ~cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>();
        FUN_00f4ae70();
        if (((DAT_018d72d8 != 0) && (DAT_018d72d8 <= uVar1)) &&
           (uVar1 < DAT_018d72dc * 0x58 + DAT_018d72d8)) {
          cXml::cXml();
          FUN_00f4c880(uVar1);
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != DAT_018d72ac + DAT_018d72b4);
    }
    FUN_00f4dbf0();
    if (DAT_018d72ac != (int *)0x0) {
      DAT_018d72b4 = 0;
      if (DAT_018d72b8 != 0) {
        FUN_00dd48d0(DAT_018d72ac,0);
        DAT_018d72b8 = 0;
      }
      DAT_018d72ac = (int *)0x0;
      DAT_018d72b0 = 0;
    }
    if ((DAT_018d7298 != 0) && (DAT_018d72a0 != 0)) {
      FUN_00dd3d90(DAT_018d7298,0);
    }
    _DAT_018d7288 = 0;
    _DAT_018d728c = 0;
    _DAT_018d7290 = 0;
    DAT_018d72a0 = 0;
    DAT_018d7298 = 0;
    DAT_018d729c = 0;
    if ((DAT_018d72d8 != 0) && (DAT_018d72e0 != 0)) {
      FUN_00dd3d90(DAT_018d72d8,0);
    }
    _DAT_018d72c8 = 0;
    _DAT_018d72cc = 0;
    DAT_018d72d0 = 0;
    DAT_018d72e0 = 0;
    DAT_018d72d8 = 0;
    DAT_018d72dc = 0;
    FUN_00f4b8a0();
    FUN_00f4a9c0();
    iVar2 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
    FUN_00a2a170();
    if ((*(int *)(iVar2 + 0x18) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      FUN_00dd3d90(*(int *)(iVar2 + 0x18),0);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>();
    FUN_00f3b960();
    if ((*(int *)(iVar2 + 0x18) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      FUN_00dd3d90(*(int *)(iVar2 + 0x18),0);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    _DAT_01ee542c = 0;
    FUN_00eaac50();
    FUN_00dd7270();
    FUN_00dd7270();
    return;
  }
  return;
}

