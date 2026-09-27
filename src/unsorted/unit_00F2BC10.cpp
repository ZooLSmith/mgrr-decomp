// src/unsorted/unit_00F2BC10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F2BC10..00F2BD60, 2 functions

#include "types.h"

// 00F2BC10  FUN_00f2bc10  size=334  [run]
undefined4 __fastcall FUN_00f2bc10(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar3 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar3;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) == 0) {
    if ((*(ushort *)(uVar7 + 4) < 0xfe) || (0xff < *(ushort *)(uVar7 + 4))) {
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    else {
      if (*(int *)(param_1 + 100) != 0) {
        iVar5 = FUN_00f4a2a0(0xf9,(int *)(param_1 + 0x424));
        if (iVar5 != 0) goto LAB_00f2bd1c;
      }
      iVar5 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
              cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
      if (*(int *)(iVar5 + 0x40c) == 0) {
        FUN_009cca90(param_1,&DAT_016dcf90,*(undefined2 *)(uVar7 + 6));
        return 0;
      }
      *(int *)(param_1 + 0x424) = *(int *)(iVar5 + 0x40c);
    }
  }
  else {
    uVar1 = *(ushort *)(uVar7 + 6);
    if (((uVar1 != 0xfc) && (uVar1 != 0xfd)) && (uVar1 < 0x100)) {
      iVar5 = FUN_00f20580(uVar1,param_1 + 0x424,*(undefined4 *)(param_1 + 100));
      if (iVar5 == 0) {
        FUN_009cca90(param_1,&DAT_016dcf00,*(undefined2 *)(uVar7 + 6));
        return 0;
      }
    }
  }
LAB_00f2bd1c:
  if (*(int *)(param_1 + 0x420) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(uint *)(*(int *)(param_1 + 0x420) + 0x14);
  }
  if ((((*(uint *)(param_1 + 0x38) & 0x4000000) != 0) && (*(int *)(param_1 + 0x424) != 0)) &&
     (uVar2 = *(uint *)(*(int *)(param_1 + 0x424) + 0x14), uVar6 < uVar2)) {
    uVar6 = uVar2;
  }
  FUN_00ed4ff0(uVar7,uVar6);
  return 1;
}

// 00F2BD60  FUN_00f2bd60  size=468  [run]
undefined4 __thiscall FUN_00f2bd60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_20;
  
  iStack_20 = param_4;
  iVar2 = (*(code *)(&PTR_cEspDrawWork44_P_2_018d6b64)[*(int *)(param_1 + 0x47c)])(param_2,param_3);
  if (iVar2 != 0) {
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f20370(iVar2 + 0x40,param_1 + 0x3c8,*(undefined4 *)(param_1 + 0x28));
    fVar1 = 1.0;
    *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
    if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
      fVar1 = 0.0;
      if (*(float *)(param_1 + 0x90) != 0.0) {
        fVar1 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
      }
    }
    *(float *)(param_1 + 0x124) = fVar1;
    FUN_00f26b40(iVar2);
    FUN_00f45d50();
    iStack_20 = iVar2;
    FUN_00f49500(&iStack_20);
    if (*(int *)(param_1 + 0x478) == 0) {
      if ((DAT_01eddb74 == -0x38) && (*(int *)(*(int *)(param_1 + 0x420) + 0x14) == 0)) {
        FUN_00dd5650(&DAT_016da0c8,0xfe,0);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x1000000;
      }
      else {
        iVar3 = FUN_00fa0740(0);
        *(int *)(iVar2 + 0x18) = iVar3;
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
        }
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x1000000;
      }
    }
    else {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 1;
    }
    fVar1 = 1.0 - *(float *)(param_1 + 0x474);
    *(float *)(iVar2 + 0xa0) = fVar1 * 0.25;
    *(float *)(iVar2 + 0xa4) = fVar1 * 0.5;
    *(float *)(iVar2 + 0xa8) = fVar1 * 0.75;
    *(float *)(iVar2 + 0xac) = fVar1;
    uVar4 = FUN_00e9fe70();
    uVar5 = FUN_00e9fe60(uVar4);
    FUN_00edc9e0(iVar2,iVar2,param_1 + 0x3c8,uVar5,uVar4);
    return 1;
  }
  return 0;
}

