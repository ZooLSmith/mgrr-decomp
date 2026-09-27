// src/unsorted/unit_0099FB30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099FB30..0099FED0, 2 functions

#include "types.h"

// 0099FB30  FUN_0099fb30  size=895  [run]
void __thiscall FUN_0099fb30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  *(undefined1 *)(param_1 + 0x74) = 0;
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_00cb25d0(0x62);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  FUN_00ce4d70(0);
  FUN_00cb2600(1);
  switch(param_2) {
  case 0:
    uVar1 = FUN_00e03ea0("custom_icon_00");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_02",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x34),"CUSTOM_TITLE_02",0,0xffffffff);
    FUN_00ce4d70(9);
    goto LAB_0099fe6a;
  case 1:
    uVar1 = FUN_00e03ea0("custom_icon_01");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_03",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_03";
    break;
  case 2:
    uVar1 = FUN_00e03ea0("custom_icon_02");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_04",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_04";
    goto LAB_0099fd3f;
  case 3:
    uVar1 = FUN_00e03ea0("custom_icon_03");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_05",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_05";
    goto LAB_0099fe47;
  case 4:
    uVar1 = FUN_00e03ea0("custom_icon_04");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_06",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_06";
    break;
  case 5:
    uVar1 = FUN_00e03ea0("custom_icon_05");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_07",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_07";
LAB_0099fd3f:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x34),pcVar2,0,0xffffffff);
    FUN_00ce4dc0(1,1);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    goto LAB_0099fe63;
  case 6:
    uVar1 = FUN_00e03ea0("custom_icon_06");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CUSTOM_TITLE_08",0,0xffffffff);
    pcVar2 = "CUSTOM_TITLE_08";
LAB_0099fe47:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x34),pcVar2,0,0xffffffff);
    FUN_00ce4dc0(1,1);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    goto LAB_0099fe63;
  default:
    goto LAB_0099fe6a;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x34),pcVar2,0,0xffffffff);
  FUN_00ce4dc0(1,1);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
LAB_0099fe63:
  FUN_00cb2310(uVar1,0);
LAB_0099fe6a:
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
  FUN_00ce4d70(7);
  FUN_0098f690();
  *(uint *)(param_1 + 0x78) = (uint)DAT_01dc1418;
  return;
}

// 0099FED0  FUN_0099fed0  size=128  [run]
void __fastcall FUN_0099fed0(int param_1)

{
  if (*(char *)(param_1 + 0x74) == '\x01') {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x30),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x34),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x38),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3c),1,3);
    *(char *)(param_1 + 0x74) = *(char *)(param_1 + 0x74) + '\x01';
  }
  if (*(uint *)(param_1 + 0x78) != (uint)DAT_01dc1418) {
    FUN_0098f690();
    *(uint *)(param_1 + 0x78) = (uint)DAT_01dc1418;
  }
  return;
}

