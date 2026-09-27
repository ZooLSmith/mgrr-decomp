// src/misc/cResultBg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC32A0..00D36AF0, 6 functions

#include "mgrr.h"
#include "cResultBg.h"

// 00CC32A0  cResultBg::vf08  size=146  [class]
void __fastcall cResultBg::vf08(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_00f972f0();
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && ((uint)*(ushort *)(iVar1 + 0x88) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = (uint)*(ushort *)(iVar1 + 0x88) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && ((uint)*(ushort *)(iVar1 + 0xa0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = (uint)*(ushort *)(iVar1 + 0xa0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CC3340  FUN_00cc3340  size=349  [callgraph]
void __fastcall FUN_00cc3340(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_40 [64];
  
  uVar1 = DAT_018b9148;
  uVar3 = DAT_018b9148 & 0xf00;
  if (uVar3 < 0x601) {
    if (uVar3 == 0x600) {
      iVar5 = 6;
      goto LAB_00cc33ff;
    }
    if (uVar3 < 0x301) {
      if (uVar3 == 0x300) {
        iVar5 = 3;
        goto LAB_00cc33ff;
      }
      if (uVar3 == 0x100) {
        iVar5 = 1;
        goto LAB_00cc33ff;
      }
      if (uVar3 == 0x200) {
        iVar5 = 2;
        goto LAB_00cc33ff;
      }
    }
    else {
      if (uVar3 == 0x400) {
        iVar5 = 4;
        goto LAB_00cc33ff;
      }
      if (uVar3 == 0x500) {
        iVar5 = 5;
        goto LAB_00cc33ff;
      }
    }
  }
  else if (uVar3 < 0xc01) {
    if (uVar3 == 0xc00) {
      iVar5 = 8;
      goto LAB_00cc33ff;
    }
    if (uVar3 == 0x700) {
LAB_00cc33cb:
      iVar5 = 7;
      goto LAB_00cc33ff;
    }
    if (uVar3 == 0xa00) {
      iVar5 = 0;
      goto LAB_00cc33ff;
    }
  }
  else {
    if (uVar3 == 0xd00) {
      iVar5 = 9;
      goto LAB_00cc33ff;
    }
    if (uVar3 == 0xf00) goto LAB_00cc33cb;
  }
  sVar2 = FUN_00dde2d0(0,7);
  iVar5 = (int)sVar2;
LAB_00cc33ff:
  if ((uVar1 == 0xf32) || (uVar1 == 0xf31)) {
    iVar5 = 8;
  }
  else if ((uVar1 == 0xf34) || (uVar1 == 0xf33)) {
    iVar5 = 9;
  }
  FUN_00cad0d0(iVar5,local_40,0x40,&DAT_01655794);
  uVar4 = FUN_00e9e570(5,local_40,&DAT_01b7eb10,1,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_00cad0d0(iVar5,local_40,0x40,&DAT_01655790);
  uVar4 = FUN_00e9e570(5,local_40,&DAT_01b82da0,1,0);
  *(char *)(param_1 + 0x56) = (char)iVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return;
}

// 00CDBD50  cResultBg::~cResultBg  size=131  [class]
void __fastcall cResultBg::~cResultBg(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f972f0();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1[7] != 0) {
    FUN_00e9d6a0(param_1[7]);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    FUN_00e9d6a0(param_1[8]);
    param_1[8] = 0;
  }
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  Hw::cTexture::~cTexture();
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CDBDE0  cResultBg::create  size=304  [class]
void __fastcall cResultBg::create(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_40 [64];
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_00cc3340();
    *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
    return;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    if (*(char *)(param_1 + 0x55) != '\0') {
      iVar1 = *(int *)(param_1 + 0x18);
      if (((iVar1 != 0) && ((uint)*(ushort *)(iVar1 + 0x88) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = (uint)*(ushort *)(iVar1 + 0x88) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 1;
      }
      *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
      return;
    }
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x1c));
    iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x20));
    if ((iVar1 != 0) && (iVar2 != 0)) {
      *(undefined1 *)(param_1 + 0x55) = 1;
      FUN_00de3530();
      uVar3 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x1c));
      uVar4 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x20));
      FUN_00de3540(uVar3,uVar4);
      _sprintf_s(local_40,0x40,"ui_chapter_%02d.wtb",(int)*(char *)(param_1 + 0x56));
      uVar3 = FUN_00de4550(local_40,0);
      FUN_00fa25d0(uVar3);
      *(int *)(param_1 + 0x28) = param_1 + 0x38;
      if (*(int *)(param_1 + 0x44) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x40);
      }
      iVar1 = param_1 + 0x24;
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      uVar3 = FUN_00cb25d0(1);
      FUN_00ccde60(uVar3,iVar1);
    }
  }
  return;
}

// 00CF38F0  cResultBg::vf00  size=30  [class]
undefined4 __thiscall cResultBg::vf00(undefined4 param_1,byte param_2)

{
  ~cResultBg();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D36AF0  cResultBg::cResultBg  size=102  [class]
undefined4 * cResultBg::cResultBg(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x58,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    Hw::cTexture::cTexture();
    puVar1[3] = "cResultBg";
    puVar1[2] = 0;
    uVar2 = FUN_00d29960(0x83);
    puVar1[4] = 0;
    puVar1[5] = uVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

