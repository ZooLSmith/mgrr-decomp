// src/unsorted/unit_00996120.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996120..009967E0, 7 functions

#include "mgrr.h"

// 00996120  FUN_00996120  size=574  [run]
void __fastcall FUN_00996120(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char local_10 [16];
  
  iVar6 = 0x23;
  do {
    uVar3 = FUN_00cb25d0(1);
    *(undefined4 *)(param_1 + 0x55c) = uVar3;
    uVar3 = FUN_00cb25d0(2);
    *(undefined4 *)(param_1 + 0x560) = uVar3;
    uVar3 = FUN_00cb25d0(3);
    *(undefined4 *)(param_1 + 0x564) = uVar3;
    uVar3 = FUN_00cb25d0(5);
    *(undefined4 *)(param_1 + 0x568) = uVar3;
    uVar3 = FUN_00cb25d0(6);
    *(undefined4 *)(param_1 + 0x56c) = uVar3;
    uVar3 = FUN_00cb25d0(7);
    *(undefined4 *)(param_1 + 0x570) = uVar3;
    uVar3 = FUN_00cb25d0(8);
    *(undefined4 *)(param_1 + 0x574) = uVar3;
    uVar3 = FUN_00cb25d0(9);
    *(undefined4 *)(param_1 + 0x578) = uVar3;
    uVar3 = FUN_00cb25d0(10);
    *(undefined4 *)(param_1 + 0x57c) = uVar3;
    uVar3 = FUN_00cb25d0(0xb);
    *(undefined4 *)(param_1 + 0x580) = uVar3;
    uVar3 = FUN_00cb25d0(0xc);
    *(undefined4 *)(param_1 + 0x584) = uVar3;
    uVar3 = FUN_00cb25d0(0xd);
    *(undefined4 *)(param_1 + 0x588) = uVar3;
    uVar3 = FUN_00cb25d0(0xe);
    *(undefined4 *)(param_1 + 0x58c) = uVar3;
    uVar3 = FUN_00cb25d0(0xf);
    *(undefined4 *)(param_1 + 0x590) = uVar3;
    uVar3 = FUN_00cb25d0(0x15);
    *(undefined4 *)(param_1 + 0x594) = uVar3;
    uVar3 = FUN_00cb25d0(0x16);
    *(undefined4 *)(param_1 + 0x598) = uVar3;
    uVar3 = FUN_00cb25d0(0x17);
    *(undefined4 *)(param_1 + 0x59c) = uVar3;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x594),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x598),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x59c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x578),0);
    sVar2 = FUN_00dde2d0(1,6);
    _sprintf_s(local_10,0x10,"barcode_0%d",(int)sVar2);
    uVar3 = FUN_00e03ea0(local_10);
    FUN_00cce1e0(*(undefined4 *)(param_1 + 0x588),uVar3);
    sVar2 = FUN_00dde2d0(1,6);
    _sprintf_s(local_10,0x10,"barcode_0%d",(int)sVar2);
    uVar3 = FUN_00e03ea0(local_10);
    FUN_00cce1e0(*(undefined4 *)(param_1 + 0x58c),uVar3);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(param_1 + 0x5af) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b3) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b7) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5bb) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5bf) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5c3) = 0xff;
  cVar5 = '\0';
LAB_00996320:
  do {
    cVar1 = FUN_00dde2d0(0,0x14);
    cVar4 = '\0';
    if ('\0' < cVar5) {
      do {
        if (cVar1 == *(char *)(cVar4 + 0x5af + param_1)) goto LAB_00996320;
        cVar4 = cVar4 + '\x01';
      } while (cVar4 < cVar5);
    }
    iVar6 = (int)cVar5;
    cVar5 = cVar5 + '\x01';
    *(char *)(iVar6 + 0x5af + param_1) = cVar1;
    if ('\x14' < cVar5) {
      return;
    }
  } while( true );
}

// 00996370  FUN_00996370  size=226  [run]
void __thiscall FUN_00996370(int param_1,undefined4 param_2,int param_3)

{
  char local_8 [8];
  
  if (-1 < param_3) {
    _sprintf_s(local_8,8,"%03d",param_3);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x580),local_8);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x55c),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x560),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x578),0);
    return;
  }
  FUN_00cce090(*(undefined4 *)(param_1 + 0x580),&DAT_016563a8);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x55c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x560),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x578),1);
  return;
}

// 00996460  FUN_00996460  size=85  [run]
void __fastcall FUN_00996460(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0("vr_icon_02");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x568),uVar1);
  uVar1 = FUN_00e03ea0("vr_icon_02");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x56c),uVar1);
  return;
}

// 009964C0  FUN_009964c0  size=183  [run]
void __thiscall FUN_009964c0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_3 == 0) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x57c),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x584),0);
    uVar1 = FUN_00e03ea0("vr_icon_01");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x568),uVar1);
    pcVar2 = "vr_icon_01";
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x57c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x584),1);
    uVar1 = FUN_00e03ea0("vr_icon_03");
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x568),uVar1);
    pcVar2 = "vr_icon_03";
  }
  uVar1 = FUN_00e03ea0(pcVar2);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x56c),uVar1);
  return;
}

// 00996580  FUN_00996580  size=85  [run]
void __fastcall FUN_00996580(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0("vr_icon_03");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x568),uVar1);
  uVar1 = FUN_00e03ea0("vr_icon_03");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x56c),uVar1);
  return;
}

// 00996650  FUN_00996650  size=179  [run]
void __thiscall FUN_00996650(int param_1,undefined4 param_2,int param_3)

{
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x560),0);
  if (param_3 == 1) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x594),1);
    return;
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x560),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x594),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x598),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x59c),0);
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x59c),1);
    return;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x598),1);
  return;
}

// 009967E0  FUN_009967e0  size=118  [run]
void __fastcall FUN_009967e0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(undefined4 *)(param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  if (*(int *)(param_1 + 0x5cc) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x5cc));
    *(undefined4 *)(param_1 + 0x5cc) = 0;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x5d0));
    *(undefined4 *)(param_1 + 0x5d0) = 0;
  }
  *(undefined1 *)(param_1 + 0x604) = 0;
  *(undefined1 *)(param_1 + 0x5a2) = 0;
  return;
}

