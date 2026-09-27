// src/unsorted/unit_00F2CFB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F2CFB0..00F2D0A0, 2 functions

#include "types.h"

// 00F2CFB0  FUN_00f2cfb0  size=238  [run]
undefined4 __fastcall FUN_00f2cfb0(int param_1)

{
  int *piVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar3 == (uint *)0x0)) {
LAB_00f2cfe7:
    FUN_009cca90(param_1,&DAT_016de848);
    return 0;
  }
  uVar6 = *puVar3;
  if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
    uVar4 = FUN_00f59ed0(0xf);
    FUN_00dd5650(&DAT_016597b4,uVar4);
  }
  if (uVar6 == 0) goto LAB_00f2cfe7;
  uVar2 = *(ushort *)(uVar6 + 0x14);
  *(ushort *)(param_1 + 0x4c0) = uVar2;
  uVar6 = (uint)uVar2;
  piVar1 = (int *)(param_1 + 0x4b0);
  *piVar1 = 0;
  if (*(int *)(param_1 + 100) == 0) {
LAB_00f2d027:
    iVar5 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3();
    if (uVar6 - 0xf000 < 0x20) {
      iVar5 = *(int *)(iVar5 + -0x37fd8 + uVar6 * 4);
LAB_00f2d03e:
      if (iVar5 != 0) {
        *piVar1 = iVar5;
        goto LAB_00f2d044;
      }
    }
    else {
      if (uVar6 < 0x1001) {
        iVar5 = *(int *)(iVar5 + 0x28 + uVar6 * 4);
        goto LAB_00f2d03e;
      }
      *piVar1 = 0;
    }
    FUN_009cca90(param_1,&DAT_016de87c,*(undefined2 *)(param_1 + 0x4c0));
  }
  else {
    iVar5 = FUN_00f4a2d0(uVar6,piVar1);
    if (iVar5 == 0) goto LAB_00f2d027;
LAB_00f2d044:
    iVar5 = FUN_009d59e0(0x50000,*piVar1,param_1);
    if (iVar5 != 0) {
      FUN_00a7c970(iVar5);
      return 1;
    }
  }
  return 0;
}

// 00F2D0A0  FUN_00f2d0a0  size=238  [run]
undefined4 __fastcall FUN_00f2d0a0(int param_1)

{
  int *piVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar3 == (uint *)0x0)) {
LAB_00f2d0d7:
    FUN_009cca90(param_1,&DAT_016de8f4);
    return 0;
  }
  uVar6 = *puVar3;
  if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
    uVar4 = FUN_00f59ed0(0xf);
    FUN_00dd5650(&DAT_016597b4,uVar4);
  }
  if (uVar6 == 0) goto LAB_00f2d0d7;
  uVar2 = *(ushort *)(uVar6 + 0x14);
  *(ushort *)(param_1 + 0x4d0) = uVar2;
  uVar6 = (uint)uVar2;
  piVar1 = (int *)(param_1 + 0x4c0);
  *piVar1 = 0;
  if (*(int *)(param_1 + 100) == 0) {
LAB_00f2d117:
    iVar5 = Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3();
    if (uVar6 - 0xf000 < 0x20) {
      iVar5 = *(int *)(iVar5 + -0x37fd8 + uVar6 * 4);
LAB_00f2d12e:
      if (iVar5 != 0) {
        *piVar1 = iVar5;
        goto LAB_00f2d134;
      }
    }
    else {
      if (uVar6 < 0x1001) {
        iVar5 = *(int *)(iVar5 + 0x28 + uVar6 * 4);
        goto LAB_00f2d12e;
      }
      *piVar1 = 0;
    }
    FUN_009cca90(param_1,&DAT_016deaf8,*(undefined2 *)(param_1 + 0x4d0));
  }
  else {
    iVar5 = FUN_00f4a2d0(uVar6,piVar1);
    if (iVar5 == 0) goto LAB_00f2d117;
LAB_00f2d134:
    iVar5 = FUN_009d59e0(0x50000,*piVar1,param_1);
    if (iVar5 != 0) {
      FUN_00a7c970(iVar5);
      return 1;
    }
  }
  return 0;
}

