// src/misc/cCollectionDiskItemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098B950..009AFDE0, 5 functions

#include "mgrr.h"
#include "cCollectionDiskItemParts.h"

// 0098B950  cCollectionDiskItemParts::cCollectionDiskItemParts  size=80  [class]
undefined4 * __fastcall cCollectionDiskItemParts::cCollectionDiskItemParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  Hw::cTexture::cTexture_6();
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00f972f0();
  return param_1;
}

// 0098B9E0  cCollectionDiskItemParts::vf08  size=24  [class]
void __fastcall cCollectionDiskItemParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_00cb2600(0);
  return;
}

// 0098BA10  FUN_0098ba10  size=56  [callgraph]
void __fastcall FUN_0098ba10(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00f972f0();
  if (*(int *)(param_1 + 0x58) != -1) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  }
  return;
}

// 0099D270  cCollectionDiskItemParts::vf14  size=279  [class]
void __fastcall cCollectionDiskItemParts::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_40 [64];
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x20) != -1) {
      _sprintf_s(local_40,0x40,"ui\\collection\\collect_%02d.wtb",*(int *)(param_1 + 0x20));
      uVar2 = FUN_00e9e570(7,local_40,&DAT_01b7eb10,1,0);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      *(undefined4 *)(param_1 + 0x58) = uVar2;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x58));
    if (iVar1 != 0) {
      iVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x58));
      if (iVar1 != 0) {
        FUN_00fa25d0(iVar1);
        *(int *)(param_1 + 0x2c) = param_1 + 0x3c;
        if (*(int *)(param_1 + 0x48) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x44);
        }
        *(undefined4 *)(param_1 + 0x38) = uVar2;
        FUN_00ccde60(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
        FUN_00cb2600(1);
        FUN_00ce4d70(0);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        return;
      }
      FUN_0098ba10();
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24))) {
    FUN_00cb2600(0);
    FUN_0098ba10();
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return;
  }
  return;
}

// 009AFDE0  cCollectionDiskItemParts::vf00  size=99  [class]
undefined4 * __thiscall cCollectionDiskItemParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00f972f0();
  if (param_1[0x16] != -1) {
    FUN_00e9d6a0(param_1[0x16]);
    param_1[0x16] = 0xffffffff;
  }
  Hw::cTexture::cTexture_5();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

