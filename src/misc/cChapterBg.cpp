// src/misc/cChapterBg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00989130..00CE4DC0, 19 functions

#include "mgrr.h"
#include "cChapterBg.h"

// 00989130  cChapterBg::cChapterBg  size=84  [class]
undefined4 * __fastcall cChapterBg::cChapterBg(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  Hw::cTexture::cTexture_6();
  *(undefined1 *)((int)param_1 + 0xf7) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf6) = 0xff;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 0x29;
  iVar2 = 0x14;
  do {
    puVar1[-0x14] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}

// 00989190  cChapterBg::vf0C  size=1  [class]
void cChapterBg::vf0C(void)

{
  return;
}

// 009891A0  cChapterBg::vf10  size=1  [class]
void cChapterBg::vf10(void)

{
  return;
}

// 009891B0  cChapterBg::vf18  size=1  [class]
void cChapterBg::vf18(void)

{
  return;
}

// 009891C0  FUN_009891c0  size=100  [between]
int FUN_009891c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xfc,&DAT_01b7be50);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = cChapterBg::cChapterBg();
  if (iVar1 != 0) {
    *(char **)(iVar1 + 0xc) = "cChapterBg";
    if (DAT_018b9174 == 0xf01) {
      FUN_00d29ca0(0x5a,8);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return iVar1;
    }
    FUN_00d29ca0(0x5a,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return iVar1;
}

// 00989230  cChapterBg::vf08  size=58  [class]
void __fastcall cChapterBg::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_00f972f0();
  uVar2 = 0;
  uVar1 = FUN_00cb25d0(0xd);
  FUN_00cb2310(uVar1,uVar2);
  FUN_00cb2600(1);
  return;
}

// 00989270  FUN_00989270  size=275  [callgraph]
void __thiscall FUN_00989270(int param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  char local_41;
  undefined1 local_40 [64];
  
  local_41 = '\0';
  if (-1 < param_2) {
    local_41 = param_2;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar2 = (int)local_41;
  if (param_3 == '\0') {
    FUN_00cad140(iVar2,local_40,0x40,&DAT_01655794);
  }
  else {
    FUN_00cad0d0(iVar2,local_40,0x40,&DAT_01655794);
  }
  uVar1 = FUN_00e9e570(5,local_40,&DAT_01b7eb10,1,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (param_3 == '\0') {
    FUN_00cad140(iVar2,local_40,0x40,&DAT_01655790);
  }
  else {
    FUN_00cad0d0(iVar2,local_40,0x40,&DAT_01655790);
  }
  uVar1 = FUN_00e9e570(5,local_40,&DAT_01b82da0,1,0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(char *)(param_1 + 0xf8) = param_3;
  *(char *)(param_1 + 0xf6) = local_41;
  *(undefined2 *)(param_1 + 0xf4) = 1;
  return;
}

// 00989390  FUN_00989390  size=80  [callgraph]
void __fastcall FUN_00989390(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 0099A600  cChapterBg::~cChapterBg  size=146  [class]
void __fastcall cChapterBg::~cChapterBg(undefined4 *param_1)

{
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
  if (param_1[0x15] != 0) {
    FUN_00e9d6a0(param_1[0x15]);
    param_1[0x15] = 0;
  }
  if (param_1[0x29] != 0) {
    FUN_00e9d6a0(param_1[0x29]);
    param_1[0x29] = 0;
  }
  Hw::cTexture::cTexture_5();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099A6A0  FUN_0099a6a0  size=13  [callgraph]
void __thiscall FUN_0099a6a0(int param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *_Format;
  char acStack_40 [64];
  
  FUN_00de3530();
  iVar3 = (int)(char)((param_3 != '\0') - 1U & 10) + (int)param_2;
  uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x54 + iVar3 * 4));
  uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0xa4 + iVar3 * 4));
  FUN_00de3540(uVar1,uVar2);
  if (param_3 == '\0') {
    _Format = "ui_chapter_pre_%02d.wtb";
  }
  else {
    _Format = "ui_chapter_%02d.wtb";
  }
  _sprintf_s(acStack_40,0x40,_Format,(int)param_2);
  uVar1 = FUN_00de4550(acStack_40,0);
  FUN_00fa25d0(uVar1);
  *(int *)(param_1 + 0x28) = param_1 + 0x38;
  if (*(int *)(param_1 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar3 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(1);
  FUN_00ccde60(uVar1,iVar3);
  return;
}

// 009AADD0  cChapterBg::vf00  size=30  [class]
undefined4 __thiscall cChapterBg::vf00(undefined4 param_1,byte param_2)

{
  ~cChapterBg();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AADF0  cChapterBg::vf14  size=576  [class]
void __fastcall cChapterBg::vf14(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Format;
  undefined4 uVar5;
  char local_40 [64];
  
  cVar1 = *(char *)(param_1 + 0xf4);
  if (cVar1 == '\0') {
    uVar4 = FUN_009c51b0(0,1);
    FUN_00989270(0,uVar4);
    return;
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0xf5) != '\0') {
      FUN_00de3530();
      uVar4 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x54));
      uVar5 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0xa4));
      FUN_00de3540(uVar4,uVar5);
      if (*(char *)(param_1 + 0xf8) == '\0') {
        cVar1 = *(char *)(param_1 + 0xf6);
        _Format = "ui_chapter_pre_%02d.wtb";
      }
      else {
        cVar1 = *(char *)(param_1 + 0xf6);
        _Format = "ui_chapter_%02d.wtb";
      }
      _sprintf_s(local_40,0x40,_Format,(int)cVar1);
      *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_1 + 0xf8);
      *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(param_1 + 0xf6);
      FUN_00989390();
      *(undefined1 *)(param_1 + 0xf5) = 1;
      uVar4 = FUN_00de4550(local_40,0);
      FUN_00fa25d0(uVar4);
      *(int *)(param_1 + 0x28) = param_1 + 0x38;
      if (*(int *)(param_1 + 0x44) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x40);
      }
      iVar2 = param_1 + 0x24;
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      uVar4 = FUN_00cb25d0(1);
      FUN_00ccde60(uVar4,iVar2);
      FUN_00ce4dc0(1,1);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      uVar4 = FUN_00cb25d0(1);
      FUN_00cb2310(uVar4,uVar5);
      *(char *)(param_1 + 0xf4) = *(char *)(param_1 + 0xf4) + '\x01';
      return;
    }
    if (-1 < *(char *)(param_1 + 0xf6)) {
      iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x54));
      iVar3 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0xa4));
      if ((iVar2 != 0) && (iVar3 != 0)) {
        if ((*(char *)(param_1 + 0xf6) != *(char *)(param_1 + 0xf7)) ||
           (*(char *)(param_1 + 0xf8) != *(char *)(param_1 + 0xf9))) {
          uVar5 = 0;
          uVar4 = FUN_00cb25d0(1);
          FUN_00cb2310(uVar4,uVar5);
        }
        *(undefined1 *)(param_1 + 0xf5) = 1;
      }
    }
  }
  else if (((cVar1 == '\n') && (iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x54)), iVar2 != 0))
          && (iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0xa4)), iVar2 != 0)) {
    iVar2 = FUN_009c51b0(0,1);
    FUN_0099a6a0(0,iVar2 != 0);
    FUN_00ce4dc0(1,1);
    *(char *)(param_1 + 0xf4) = *(char *)(param_1 + 0xf4) + '\x01';
    return;
  }
  return;
}

// 00CE4C50  cChapterBg::vf04  size=139  [class]
void __fastcall cChapterBg::vf04(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0xc))();
      param_1[1] = 2;
    }
    else if (iVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00ce4c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  FUN_00c1cf50();
  iVar1 = FUN_00c1cfd0();
  if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
    if ((param_1[4] != 0) && (iVar1 = FUN_00cad390(), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00ccdda0(param_1[2]);
    if (iVar1 == 0) {
      param_1[1] = -1;
      return;
    }
    (**(code **)(*param_1 + 8))();
    (**(code **)(*param_1 + 0x14))();
    param_1[1] = 1;
  }
  return;
}

// 00CE4CE0  FUN_00ce4ce0  size=36  [callgraph]
bool __thiscall FUN_00ce4ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = FUN_00cded00(param_2,param_3);
  return iVar1 != 0;
}

// 00CE4D10  FUN_00ce4d10  size=41  [callgraph]
bool __thiscall FUN_00ce4d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = FUN_00cded80(param_2,param_3,param_4);
  return iVar1 != 0;
}

// 00CE4D40  FUN_00ce4d40  size=41  [callgraph]
bool __thiscall FUN_00ce4d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = FUN_00cdee20(param_2,param_3,param_4);
  return iVar1 != 0;
}

// 00CE4D70  FUN_00ce4d70  size=15  [callgraph]
void __fastcall FUN_00ce4d70(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0();
    return;
  }
  return;
}

// 00CE4D80  FUN_00ce4d80  size=37  [callgraph]
void __thiscall FUN_00ce4d80(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(param_2);
    FUN_00cdf240(param_2,1);
  }
  return;
}

// 00CE4DC0  FUN_00ce4dc0  size=15  [callgraph]
void __fastcall FUN_00ce4dc0(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdef90();
    return;
  }
  return;
}

