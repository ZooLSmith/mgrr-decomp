// src/unsorted/unit_00F2C2D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F2C2D0..00F2C2D0, 1 functions

#include "mgrr.h"

// 00F2C2D0  FUN_00f2c2d0  size=262  [run]
undefined4 __fastcall FUN_00f2c2d0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  piVar1 = (int *)(param_1 + 0x458);
  *piVar1 = 0;
  uVar6 = (uint)*(ushort *)(uVar5 + 4);
  if ((*(int *)(param_1 + 100) == 0) || (iVar4 = FUN_00f4a2d0(uVar6,piVar1), iVar4 == 0)) {
    iVar4 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>();
    if (uVar6 - 0xf000 < 0x20) {
      iVar4 = *(int *)(iVar4 + -0x37fd8 + uVar6 * 4);
LAB_00f2c342:
      if (iVar4 != 0) {
        *piVar1 = iVar4;
        goto LAB_00f2c348;
      }
    }
    else {
      if (uVar6 < 0x1001) {
        iVar4 = *(int *)(iVar4 + 0x28 + uVar6 * 4);
        goto LAB_00f2c342;
      }
      *piVar1 = 0;
    }
    FUN_009cca90(param_1,&DAT_016dd268,*(undefined2 *)(uVar5 + 4));
  }
  else {
LAB_00f2c348:
    iVar4 = FUN_009d59e0(0x50000,*piVar1,param_1);
    if (iVar4 != 0) {
      FUN_00a7c970(iVar4);
      uVar5 = *(uint *)(param_1 + 0x3c);
      iVar4 = FUN_00a7c800();
      if (iVar4 != 0) {
        FUN_00a0ba60(uVar5 >> 0xd & 1);
        FUN_00a13340(uVar5 >> 0xc & 1);
      }
      return 1;
    }
  }
  return 0;
}

