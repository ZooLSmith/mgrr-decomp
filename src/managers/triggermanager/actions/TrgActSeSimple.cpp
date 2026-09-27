// src/managers/triggermanager/actions/TrgActSeSimple.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C92770..00C92770, 1 functions

#include "mgrr.h"

// 00C92770  Trigger::Act::SE_SIMPLE  size=319  [class]
undefined4 __fastcall Trigger::Act::SE_SIMPLE(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 local_410 [1036];
  
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    FUN_00dd5650(&DAT_016af5b0);
    return 0;
  }
  pbVar1 = (byte *)(iVar6 + 8);
  pbVar7 = &DAT_016416fa;
  pbVar3 = pbVar1;
  do {
    bVar2 = *pbVar3;
    bVar8 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_00c927d0:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00c927d5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar8 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_00c927d0;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00c927d5:
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016af580);
    return 0;
  }
  uVar5 = FUN_00959930(local_410,&DAT_0165864c,&DAT_016af57c,pbVar1);
  if (*(int *)(iVar6 + 0x18) == -1) {
    iVar6 = FUN_00e5e050(uVar5,0);
  }
  else {
    iVar4 = FUN_00c84800(*(int *)(iVar6 + 0x18),&local_42c);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_016af54c,*(undefined4 *)(iVar6 + 0x18));
      goto LAB_00c92845;
    }
    local_420 = local_42c;
    local_41c = local_428;
    local_418 = local_424;
    local_414 = 0x3f800000;
    iVar6 = FUN_00e5e080(uVar5,&local_420,0,0xffffffff,0);
  }
  if (iVar6 != 0) {
    return 1;
  }
LAB_00c92845:
  uVar5 = FUN_00959930(local_410,&DAT_016af518,pbVar1);
  FUN_00dd5650(uVar5);
  return 0;
}

