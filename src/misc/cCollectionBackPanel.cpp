// src/misc/cCollectionBackPanel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098B6F0..009AFDC0, 6 functions

#include "mgrr.h"
#include "cCollectionBackPanel.h"

// 0098B6F0  cCollectionBackPanel::cCollectionBackPanel  size=95  [class]
undefined4 * __fastcall cCollectionBackPanel::cCollectionBackPanel(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  Hw::cTexture::cTexture_6();
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_00f972f0();
  return param_1;
}

// 0098B790  cCollectionBackPanel::vf08  size=335  [class]
void __fastcall cCollectionBackPanel::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_40 [64];
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_009c5530(&DAT_01b6efe0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar2 = FUN_009c4bf0();
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (iVar2 == -1) {
    piVar3 = &DAT_01b70e74;
    do {
      if (0 < *piVar3) {
        *(undefined4 *)(param_1 + 0x5c) = 7;
        *(undefined4 *)(param_1 + 0x60) = 1;
        break;
      }
      piVar3 = piVar3 + 0x30;
    } while ((int)piVar3 < 0x1b71234);
  }
  else {
    *(uint *)(param_1 + 0x60) =
         (uint)(0 < (int)(&DAT_01b6f434)[(iVar2 * 3 + *(int *)(param_1 + 0x5c) * 0xf) * 0x10]);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00cad140(*(undefined4 *)(param_1 + 0x5c),local_40,0x40,&DAT_01655794);
    uVar1 = FUN_00e9e570(5,local_40,&DAT_01b7eb10,1,0);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    FUN_00cad140(*(undefined4 *)(param_1 + 0x5c),local_40,0x40,&DAT_01655790);
  }
  else {
    FUN_00cad0d0(*(undefined4 *)(param_1 + 0x5c),local_40,0x40,&DAT_01655794);
    uVar1 = FUN_00e9e570(5,local_40,&DAT_01b7eb10,1,0);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    FUN_00cad0d0(*(undefined4 *)(param_1 + 0x5c),local_40,0x40,&DAT_01655790);
  }
  uVar1 = FUN_00e9e570(5,local_40,&DAT_01b82da0,1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_00cb2600(0);
  return;
}

// 0098B8E0  FUN_0098b8e0  size=82  [callgraph]
void __fastcall FUN_0098b8e0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x28) != -1) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x24) != -1) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  return;
}

// 0099D060  cCollectionBackPanel::~cCollectionBackPanel  size=104  [class]
void __fastcall cCollectionBackPanel::~cCollectionBackPanel(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f972f0();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_1[10] != -1) {
    FUN_00e9d6a0(param_1[10]);
    param_1[10] = 0xffffffff;
  }
  if (param_1[9] != -1) {
    FUN_00e9d6a0(param_1[9]);
    param_1[9] = 0xffffffff;
  }
  Hw::cTexture::cTexture_5();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099D0D0  cCollectionBackPanel::vf14  size=269  [class]
void __fastcall cCollectionBackPanel::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *_Format;
  char local_40 [64];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x24));
    iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x28));
    if ((iVar1 != 0) && (iVar2 != 0)) {
      FUN_00de3530();
      uVar3 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x24));
      uVar4 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x28));
      FUN_00de3540(uVar3,uVar4);
      if (*(int *)(param_1 + 0x60) == 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x5c);
        _Format = "ui_chapter_pre_%02d.wtb";
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x5c);
        _Format = "ui_chapter_%02d.wtb";
      }
      _sprintf_s(local_40,0x40,_Format,uVar3);
      uVar3 = FUN_00de4550(local_40,0);
      FUN_00fa25d0(uVar3);
      *(int *)(param_1 + 0x30) = param_1 + 0x40;
      if (*(int *)(param_1 + 0x4c) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x48);
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x2c);
      FUN_00ce4d70(1);
      FUN_00cb2600(1);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x20) == 2) {
    FUN_0098b8e0();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return;
  }
  return;
}

// 009AFDC0  cCollectionBackPanel::vf00  size=30  [class]
undefined4 __thiscall cCollectionBackPanel::vf00(undefined4 param_1,byte param_2)

{
  ~cCollectionBackPanel();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

