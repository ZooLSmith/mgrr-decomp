// src/misc/ContentCheckFrame.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009896C0..00999750, 5 functions

#include "mgrr.h"
#include "ContentCheckFrame.h"

// 009896C0  ContentCheckFrame::ContentCheckFrame_2  size=25  [class]
undefined4 * __fastcall ContentCheckFrame::ContentCheckFrame_2(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[7] = 0;
  return param_1;
}

// 00989700  ContentCheckFrame::vf00  size=36  [class]
undefined4 * __thiscall ContentCheckFrame::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00999450  ContentCheckFrame::vf08  size=701  [class]
void __fastcall ContentCheckFrame::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(9);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_00cb25d0(0x1c);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_00cb25d0(0x1d);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x48),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x50),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x54),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x5c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x60),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 100),0);
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  FUN_00cb2600(1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),1);
  return;
}

// 00999710  ContentCheckFrame::vf14  size=8  [class]
void __fastcall ContentCheckFrame::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}

// 00999750  ContentCheckFrame::ContentCheckFrame  size=109  [class]
undefined4 * __fastcall ContentCheckFrame::ContentCheckFrame(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = ContentCheckWindow::vftable;
  param_1[7] = 0;
  puVar1 = (undefined4 *)FUN_00dd3500(0xa4,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[3] = "ContentCheckFrame";
    FUN_00d29ca0(0x7d,0xb);
    puVar1[4] = 0;
    param_1[0xe] = puVar1;
    return param_1;
  }
  param_1[0xe] = 0;
  return param_1;
}

