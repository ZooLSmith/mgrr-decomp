// src/misc/cChapterSelectMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A900..009ABFD0, 10 functions

#include "mgrr.h"
#include "cChapterSelectMenuParts.h"

// 0099A900  cChapterSelectMenuParts::cChapterSelectMenuParts  size=191  [class]
undefined4 * __thiscall
cChapterSelectMenuParts::cChapterSelectMenuParts(undefined4 *param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  cChapterResultParts::cChapterResultParts_2();
  param_1[0xdb] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  Hw::cTexture::cTexture_6();
  param_1[0x13e] = (int)param_2;
  param_1[0x13f] = (int)param_3;
  *(undefined1 *)((int)param_1 + 0x4e7) = 0xff;
  *(undefined4 *)((int)param_1 + 0x4ed) = 0;
  param_1[0x13d] = 0;
  param_1[0x140] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0xffffffff;
  param_1[0x14a] = 0;
  puVar1 = param_1 + 0x13a;
  iVar2 = 5;
  do {
    *(undefined1 *)((int)puVar1 + -6) = 0xff;
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  FUN_00f972f0();
  return param_1;
}

// 0099AA30  FUN_0099aa30  size=78  [callgraph]
int FUN_0099aa30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x52c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cChapterSelectMenuParts::cChapterSelectMenuParts(param_1,param_2);
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cChapterSelectMenuParts";
      FUN_00d29ca0(0x59,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 0099AA80  FUN_0099aa80  size=648  [callgraph]
void __thiscall FUN_0099aa80(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_8 [2];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x528) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    if (param_4 != 0) {
      iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x394));
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x4bc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4b8) = 9;
        *(undefined4 *)(param_1 + 0x4bc) = 1;
      }
      *(undefined4 *)(param_1 + 0x504) = 0;
    }
    if (param_5 != 0) {
      iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3b8));
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x4c4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c0) = 0x12;
        *(undefined4 *)(param_1 + 0x4c4) = 1;
      }
    }
    if ((param_4 != 0) || (param_5 != 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b8),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3bc),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c0),0);
      *(undefined4 *)(param_1 + 0x508) = 0;
    }
    FUN_00cb28a0(*(undefined4 *)(param_1 + 900),
                 *(float *)(param_1 + 0x508) + *(float *)(param_1 + 0x504));
    if (param_3 != 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),0xc);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),0xc);
      puVar3 = (undefined4 *)(param_1 + 0x3e0);
      iVar2 = 10;
      do {
        FUN_00ce4ce0(*puVar3,0xc);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar3 = (undefined4 *)(param_1 + 0x43c);
      iVar2 = 8;
      do {
        FUN_00ce4ce0(*puVar3,0xc);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (param_2 == 1) {
    fVar4 = (float10)FUN_00989850(0x16,0);
    FUN_00cb32a0(local_8,*(undefined4 *)(param_1 + 0x3c4));
    fVar1 = local_8[0] + local_8[0] + (float)fVar4;
    if (*(char *)(param_1 + 0x4ef) == '\0') {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3c8),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3cc),1,3);
    }
    iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3c4));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4d0) = 0x15;
      *(undefined4 *)(param_1 + 0x4d4) = 1;
    }
    *(float *)(param_1 + 0x510) = fVar1;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 900),fVar1 + *(float *)(param_1 + 0x50c));
    if (param_3 != 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a0),0xc);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c4),0xc);
      puVar3 = (undefined4 *)(param_1 + 0x3e0);
      iVar2 = 10;
      do {
        FUN_00ce4ce0(*puVar3,0xc);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar3 = (undefined4 *)(param_1 + 0x43c);
      iVar2 = 8;
      do {
        FUN_00ce4ce0(*puVar3,0xc);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}

// 0099AD10  cChapterSelectMenuParts::vf0C  size=247  [class]
void __fastcall cChapterSelectMenuParts::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(0x13,0,0,0,*(int *)(param_1 + 0x18),0xb,1);
    FUN_00d389f0(0x13,1,0,0,*(undefined4 *)(param_1 + 0x18),0xe,1);
    FUN_00d389f0(0x13,2,0,0,*(undefined4 *)(param_1 + 0x18),0x15,1);
    FUN_00d389f0(0x13,3,0,0,*(undefined4 *)(param_1 + 0x18),0x18,1);
    FUN_00d389f0(0x13,3,0,0,*(undefined4 *)(param_1 + 0x18),7,1);
    FUN_00d389f0(0x13,4,0,0,*(undefined4 *)(param_1 + 0x18),8,1);
  }
  return;
}

// 009AB030  FUN_009ab030  size=99  [callgraph]
void __thiscall
FUN_009ab030(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FUN_0099a440(param_1 + 0x8c,&DAT_016575ac,param_2);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = param_5;
  *(undefined4 *)(param_1 + 0x114) = param_4;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return;
}

// 009AB0E0  cChapterSelectMenuParts::vf00  size=30  [class]
undefined4 __thiscall cChapterSelectMenuParts::vf00(undefined4 param_1,byte param_2)

{
  cChapterResultParts::cChapterResultParts();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AB100  FUN_009ab100  size=398  [between]
void __thiscall FUN_009ab100(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x380),7);
  FUN_00989cf0(param_2,param_3);
  bVar3 = (byte)param_3;
  if (param_2 != 0) {
    FUN_0099aa80(param_2,1,0,0);
    *(int *)(param_1 + 0x4fc) = (int)(char)bVar3;
    FUN_0098a1c0();
    FUN_0098a320(*(undefined4 *)(param_1 + 0x4f8));
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4f8);
  if ((iVar2 < 0) || (7 < iVar2)) {
    if ((iVar2 < 8) || (9 < iVar2)) {
      if ((iVar2 < 10) || (0x11 < iVar2)) goto LAB_009ab19a;
      if (9 < bVar3) goto LAB_009ab18b;
      uVar4 = 1;
    }
    else if (bVar3 < 8) {
      uVar4 = 1;
    }
    else {
      if (7 < (byte)(bVar3 - 10)) {
        uVar4 = 1;
        uVar1 = 0;
        goto LAB_009ab191;
      }
      uVar4 = 0;
    }
LAB_009ab18f:
    uVar1 = 1;
  }
  else {
    if ((byte)(bVar3 - 10) < 8) {
LAB_009ab18b:
      uVar4 = 0;
      goto LAB_009ab18f;
    }
    uVar4 = 1;
    if ((byte)(bVar3 - 8) < 2) goto LAB_009ab18f;
    uVar1 = 0;
  }
LAB_009ab191:
  FUN_0099aa80(0,1,uVar1,uVar4);
LAB_009ab19a:
  FUN_0098a320((int)(char)bVar3);
  *(int *)(param_1 + 0x4f8) = (int)(char)bVar3;
  if (*(int *)(param_1 + 0x36c) == 0) {
    return;
  }
  uVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x438));
  iVar2 = FUN_009c5030(0xffffffff,1);
  if (((iVar2 == 0) && (iVar2 = FUN_009c5130(8,0xffffffff), iVar2 == 0)) &&
     (iVar2 = FUN_009c5130(9,0xffffffff), iVar2 == 0)) {
    FUN_009ab030("select_chapter",uVar1,0x41700000,0);
    return;
  }
  if (*(int *)(param_1 + 0x4f8) < 10) {
    FUN_009ab030("select_chapter_clear",uVar1,0x41700000,0);
    return;
  }
  FUN_009ab030("select_chapter",uVar1,0x41700000,0);
  return;
}

// 009AB290  FUN_009ab290  size=398  [between]
void __thiscall FUN_009ab290(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 900),7);
  FUN_00989cf0(param_2,param_3);
  bVar3 = (byte)param_3;
  if (param_2 != 0) {
    FUN_0099aa80(param_2,1,0,0);
    *(int *)(param_1 + 0x4fc) = (int)(char)bVar3;
    FUN_0098a1c0();
    FUN_0098a320(*(undefined4 *)(param_1 + 0x4f8));
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4f8);
  if ((iVar2 < 0) || (7 < iVar2)) {
    if ((iVar2 < 8) || (9 < iVar2)) {
      if ((iVar2 < 10) || (0x11 < iVar2)) goto LAB_009ab32a;
      if (9 < bVar3) goto LAB_009ab31b;
      uVar4 = 1;
    }
    else if (bVar3 < 8) {
      uVar4 = 1;
    }
    else {
      if (7 < (byte)(bVar3 - 10)) {
        uVar4 = 1;
        uVar1 = 0;
        goto LAB_009ab321;
      }
      uVar4 = 0;
    }
LAB_009ab31f:
    uVar1 = 1;
  }
  else {
    if ((byte)(bVar3 - 10) < 8) {
LAB_009ab31b:
      uVar4 = 0;
      goto LAB_009ab31f;
    }
    uVar4 = 1;
    if ((byte)(bVar3 - 8) < 2) goto LAB_009ab31f;
    uVar1 = 0;
  }
LAB_009ab321:
  FUN_0099aa80(0,1,uVar1,uVar4);
LAB_009ab32a:
  FUN_0098a320((int)(char)bVar3);
  *(int *)(param_1 + 0x4f8) = (int)(char)bVar3;
  if (*(int *)(param_1 + 0x36c) == 0) {
    return;
  }
  uVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x438));
  iVar2 = FUN_009c5030(0xffffffff,1);
  if (((iVar2 == 0) && (iVar2 = FUN_009c5130(8,0xffffffff), iVar2 == 0)) &&
     (iVar2 = FUN_009c5130(9,0xffffffff), iVar2 == 0)) {
    FUN_009ab030("select_chapter",uVar1,0x41700000,0);
    return;
  }
  if (*(int *)(param_1 + 0x4f8) < 10) {
    FUN_009ab030("select_chapter_clear",uVar1,0x41700000,0);
    return;
  }
  FUN_009ab030("select_chapter",uVar1,0x41700000,0);
  return;
}

// 009AB420  cChapterSelectMenuParts::vf08  size=2937  [class]
void __fastcall cChapterSelectMenuParts::vf08(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  int local_8;
  
  uVar3 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x370) = uVar3;
  uVar3 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x374) = uVar3;
  uVar3 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x378) = uVar3;
  uVar3 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x37c) = uVar3;
  uVar3 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x380) = uVar3;
  uVar3 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 900) = uVar3;
  uVar3 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x388) = uVar3;
  uVar3 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x38c) = uVar3;
  uVar3 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x390) = uVar3;
  uVar3 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x394) = uVar3;
  uVar3 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x398) = uVar3;
  uVar3 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x39c) = uVar3;
  uVar3 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x3b8) = uVar3;
  uVar3 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x3bc) = uVar3;
  uVar3 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x3c0) = uVar3;
  uVar3 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x3a0) = uVar3;
  uVar3 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x3a4) = uVar3;
  uVar3 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x3a8) = uVar3;
  uVar3 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  uVar3 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x3c8) = uVar3;
  uVar3 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  uVar3 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x3ac) = uVar3;
  uVar3 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x3b0) = uVar3;
  uVar3 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x3b4) = uVar3;
  uVar3 = FUN_00cb25d0(0x22);
  *(undefined4 *)(param_1 + 0x3d0) = uVar3;
  uVar3 = FUN_00cb25d0(0x23);
  *(undefined4 *)(param_1 + 0x3d4) = uVar3;
  uVar3 = FUN_00cb25d0(0x24);
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  uVar3 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  uVar3 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  uVar3 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  uVar3 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 1000) = uVar3;
  uVar3 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x3ec) = uVar3;
  uVar3 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0x3f0) = uVar3;
  uVar3 = FUN_00cb25d0(0x37);
  *(undefined4 *)(param_1 + 0x3f4) = uVar3;
  uVar3 = FUN_00cb25d0(0x38);
  *(undefined4 *)(param_1 + 0x3f8) = uVar3;
  uVar3 = FUN_00cb25d0(0x39);
  *(undefined4 *)(param_1 + 0x3fc) = uVar3;
  uVar3 = FUN_00cb25d0(0x3a);
  *(undefined4 *)(param_1 + 0x400) = uVar3;
  uVar3 = FUN_00cb25d0(0x3b);
  *(undefined4 *)(param_1 + 0x404) = uVar3;
  uVar3 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x408) = uVar3;
  uVar3 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x40c) = uVar3;
  uVar3 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0x410) = uVar3;
  uVar3 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0x414) = uVar3;
  uVar3 = FUN_00cb25d0(0x40);
  *(undefined4 *)(param_1 + 0x418) = uVar3;
  uVar3 = FUN_00cb25d0(0x41);
  *(undefined4 *)(param_1 + 0x41c) = uVar3;
  uVar3 = FUN_00cb25d0(0x42);
  *(undefined4 *)(param_1 + 0x420) = uVar3;
  uVar3 = FUN_00cb25d0(0x43);
  *(undefined4 *)(param_1 + 0x424) = uVar3;
  uVar3 = FUN_00cb25d0(0x44);
  *(undefined4 *)(param_1 + 0x428) = uVar3;
  uVar3 = FUN_00cb25d0(0x45);
  *(undefined4 *)(param_1 + 0x42c) = uVar3;
  uVar3 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x430) = uVar3;
  uVar3 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x434) = uVar3;
  uVar3 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x438) = uVar3;
  uVar3 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x43c) = uVar3;
  uVar3 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x440) = uVar3;
  uVar3 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x444) = uVar3;
  uVar3 = FUN_00cb25d0(0x4a);
  *(undefined4 *)(param_1 + 0x448) = uVar3;
  uVar3 = FUN_00cb25d0(0x4b);
  *(undefined4 *)(param_1 + 0x44c) = uVar3;
  uVar3 = FUN_00cb25d0(0x4c);
  *(undefined4 *)(param_1 + 0x450) = uVar3;
  uVar3 = FUN_00cb25d0(0x4d);
  *(undefined4 *)(param_1 + 0x454) = uVar3;
  uVar3 = FUN_00cb25d0(0x4e);
  *(undefined4 *)(param_1 + 0x458) = uVar3;
  uVar3 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x45c) = uVar3;
  uVar3 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x460) = uVar3;
  uVar3 = FUN_00cb25d0(0x53);
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  uVar3 = FUN_00cb25d0(0x54);
  *(undefined4 *)(param_1 + 0x468) = uVar3;
  uVar3 = FUN_00cb25d0(0x55);
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  uVar3 = FUN_00cb25d0(0x56);
  *(undefined4 *)(param_1 + 0x470) = uVar3;
  uVar3 = FUN_00cb25d0(0x57);
  *(undefined4 *)(param_1 + 0x474) = uVar3;
  uVar3 = FUN_00cb25d0(0x58);
  *(undefined4 *)(param_1 + 0x478) = uVar3;
  uVar3 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x47c) = uVar3;
  if (*(char *)(param_1 + 0x4ef) == '\0') {
    FUN_00cb2600(1);
  }
  uVar3 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x430));
  FUN_00cb2240(uVar3);
  *(undefined1 *)(param_1 + 0x262) = 0;
  FUN_00cc1f80();
  FUN_00d192b0(*(undefined4 *)(param_1 + 0x4f8),*(undefined4 *)(param_1 + 0x4fc));
  switch(*(undefined4 *)(param_1 + 0x4f8)) {
  case 8:
  case 9:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_TITLE_04",0,0xffffffff);
    pcVar8 = "CHAPTER_TITLE_04";
    goto LAB_009ab9fd;
  case 10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_01",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_01";
    break;
  case 0xb:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_02",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_02";
    break;
  case 0xc:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_03",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_03";
    break;
  case 0xd:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_04",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_04";
    break;
  case 0xe:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_08",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_08";
    break;
  case 0xf:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_05",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_05";
    break;
  case 0x10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_06",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_06";
    break;
  case 0x11:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_07",0,0xffffffff);
    pcVar8 = "CHAPTER_BOSS_07";
    break;
  default:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_TITLE_01",0,0xffffffff);
    pcVar8 = "CHAPTER_TITLE_01";
LAB_009ab9fd:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),pcVar8,0,0xffffffff);
    uVar3 = 1;
    goto LAB_009aba0d;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),pcVar8,0,0xffffffff);
  uVar3 = 0;
LAB_009aba0d:
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x47c),uVar3);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3a4),"CHAPTER_TITLE_02",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3a8),"CHAPTER_TITLE_02",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3b0),"CHAPTER_TITLE_03",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3b4),"CHAPTER_TITLE_03",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3bc),"CHAPTER_SEL_00",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c0),"CHAPTER_SEL_00",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c8),"CHAPTER_SEL_11",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3cc),"CHAPTER_SEL_11",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3d4),"CHAPTER_SEL_20",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3d8),"CHAPTER_SEL_20",0,0xffffffff);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a0),3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c4),3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3ac),3);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d0),3);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a0),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a4),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a8),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3ac),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b0),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b4),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b8),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3bc),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c0),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c4),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c8),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3cc),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3d0),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3d4),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x3d8),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x37c),0);
  FUN_00cb2630(1);
  iVar4 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar4 != 0) {
      uVar3 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar4 + 4) = uVar3;
    }
  }
  *(int *)(param_1 + 0x36c) = iVar4;
  if (iVar4 != 0) {
    uVar3 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x438));
    iVar4 = FUN_009c5030(0xffffffff,1);
    if ((((iVar4 == 0) && (iVar4 = FUN_009c5130(8,0xffffffff), iVar4 == 0)) &&
        (iVar4 = FUN_009c5130(9,0xffffffff), iVar4 == 0)) || (9 < *(int *)(param_1 + 0x4f8))) {
      pcVar8 = "select_chapter";
    }
    else {
      pcVar8 = "select_chapter_clear";
    }
    FUN_009ab030(pcVar8,uVar3,0x41700000,0);
  }
  bVar1 = 0;
  do {
    iVar4 = (int)(char)bVar1;
    bVar1 = bVar1 + 1;
    *(undefined4 *)(param_1 + 0x4bc + iVar4 * 8) = 0;
  } while (bVar1 < 4);
  *(undefined4 *)(param_1 + 0x4d8) = 0x1010101;
  *(undefined4 *)(param_1 + 0x4dc) = 0x1010101;
  *(undefined2 *)(param_1 + 0x4e0) = 0x101;
  pcVar8 = (char *)(param_1 + 0x4e2);
  local_8 = 5;
  do {
    iVar7 = 0;
    iVar4 = 8;
    do {
      iVar5 = FUN_009c5130(iVar7,pcVar8 + (-0x4e2 - param_1));
      if (iVar5 != 0) {
        *pcVar8 = *pcVar8 + '\x01';
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*pcVar8 < '\a') {
      *pcVar8 = *pcVar8 + '\x01';
    }
    pcVar8 = pcVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar4 = FUN_009c6b20(4);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x4e2) = 0x9090909;
    *(undefined1 *)(param_1 + 0x4e6) = 9;
  }
  iVar4 = FUN_009c6b20(3);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x4e2) = 0x9090909;
  }
  iVar4 = FUN_009c6b20(2);
  if (iVar4 != 0) {
    *(undefined2 *)(param_1 + 0x4e2) = 0x909;
    *(undefined1 *)(param_1 + 0x4e4) = 9;
  }
  iVar4 = FUN_009c6c60(4);
  if (iVar4 != 0) {
    puVar6 = (undefined1 *)(param_1 + 0x4e8);
    iVar4 = 5;
    do {
      puVar6[-6] = 0x11;
      *puVar6 = 1;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_009c6c60(3);
  if (iVar4 != 0) {
    puVar6 = (undefined1 *)(param_1 + 0x4e8);
    iVar4 = 4;
    do {
      puVar6[-6] = 0x11;
      *puVar6 = 1;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_009c6c60(2);
  if (iVar4 != 0) {
    puVar6 = (undefined1 *)(param_1 + 0x4e8);
    iVar4 = 3;
    do {
      puVar6[-6] = 0x11;
      *puVar6 = 1;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_009c45b0();
  if (((iVar4 != 0) && (iVar4 = FUN_009c5530(&DAT_01b6efe0), iVar4 != 8)) &&
     ((iVar4 != 9 && (iVar7 = FUN_009c4bf0(), *(char *)(iVar7 + 0x4e2 + param_1) < iVar4)))) {
    uVar2 = FUN_009c5530(&DAT_01b6efe0);
    iVar4 = FUN_009c4bf0();
    *(undefined1 *)(iVar4 + 0x4e2 + param_1) = uVar2;
  }
  *(undefined1 *)(param_1 + 0x4e7) = 2;
  iVar4 = FUN_009c5030(2,1);
  if (((iVar4 != 0) || (iVar4 = FUN_009c5130(8,2), iVar4 != 0)) ||
     ((iVar4 = FUN_009c5130(9,2), iVar4 != 0 || (DAT_01b73810 != 0)))) {
    *(char *)(param_1 + 0x4e7) = *(char *)(param_1 + 0x4e7) + '\x01';
  }
  iVar4 = FUN_009c5030(3,1);
  if ((((iVar4 != 0) || (iVar4 = FUN_009c5130(8,3), iVar4 != 0)) ||
      (iVar4 = FUN_009c5130(9,3), iVar4 != 0)) || (DAT_01b73810 != 0)) {
    *(char *)(param_1 + 0x4e7) = *(char *)(param_1 + 0x4e7) + '\x01';
  }
  FUN_0098a1c0();
  FUN_0098a320(*(undefined4 *)(param_1 + 0x4f8));
  FUN_00989cf0(0,*(undefined1 *)(param_1 + 0x4f8));
  FUN_00989cf0(1,*(undefined1 *)(param_1 + 0x4fc));
  return;
}

// 009ABFD0  cChapterSelectMenuParts::vf14  size=2571  [class]
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall cChapterSelectMenuParts::vf14(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 *puVar9;
  float10 fVar10;
  char *_Format;
  float local_58 [2];
  float local_50 [2];
  char local_48 [68];
  
  iVar4 = FUN_00c20a50();
  if (iVar4 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    return;
  }
  iVar4 = 0;
  do {
    FUN_00d38a30(0x13,iVar4,*(undefined4 *)(param_1 + 0x18));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  cVar2 = *(char *)(param_1 + 0x4ed);
  if (cVar2 == '\0') {
    iVar4 = *(int *)(param_1 + 0x500);
    if (iVar4 == 0) {
      iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x394));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4bc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4b8) = 9;
        *(undefined4 *)(param_1 + 0x4bc) = 1;
      }
      iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3b8));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4c4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c0) = 0x12;
        *(undefined4 *)(param_1 + 0x4c4) = 1;
      }
      if (9 < *(int *)(param_1 + 0x4f8)) {
        *(undefined4 *)(param_1 + 0x4c4) = 0;
      }
      FUN_00ce4d70(0xb);
      if (*(char *)(param_1 + 0x4ef) != '\0') goto LAB_009ac0ec;
    }
    else {
      if (iVar4 == 10) {
LAB_009ac0ec:
        fVar10 = (float10)FUN_00989850(0xd,0);
        fVar1 = (float)fVar10;
        FUN_00cb32a0(local_58,*(undefined4 *)(param_1 + 0x3a0));
        fVar3 = local_58[0] + local_58[0];
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x3a0),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a0),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a4),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x3a8),1);
        if (*(char *)(param_1 + 0x4ef) == '\0') {
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3a4),1,3);
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3a8),1,3);
        }
        iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3a0));
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x4cc) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x4c8) = 0xc;
          *(undefined4 *)(param_1 + 0x4cc) = 1;
        }
        iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3c4));
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3c4),*(float *)(iVar4 + 0xc0) + fVar1);
        iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3c8));
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3c8),*(float *)(iVar4 + 0xc0) + fVar1);
        iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3cc));
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3cc),*(float *)(iVar4 + 0xc0) + fVar1);
        *(float *)(param_1 + 0x50c) = fVar3 + fVar1;
        if (*(char *)(param_1 + 0x4ef) == '\0') goto LAB_009ac2f9;
      }
      else if (iVar4 != 0x1e) goto LAB_009ac2f9;
      fVar10 = (float10)FUN_00989850(0x16,0);
      FUN_00cb32a0(local_58,*(undefined4 *)(param_1 + 0x3c4));
      fVar1 = local_58[0] + local_58[0];
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x3c4),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c8),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3cc),1);
      if (*(char *)(param_1 + 0x4ef) == '\0') {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3c8),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3cc),1,3);
      }
      FUN_0098a160(3,0x15);
      *(char *)(param_1 + 0x4ed) = *(char *)(param_1 + 0x4ed) + '\x01';
      *(float *)(param_1 + 0x510) = fVar1 + (float)fVar10;
    }
LAB_009ac2f9:
    *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 1;
    if (*(char *)(param_1 + 0x4ef) != '\0') goto LAB_009ac30b;
  }
  else if (cVar2 == '\x01') {
LAB_009ac30b:
    iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x3c8));
    if (iVar4 == 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x37c),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),0xc);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),0xc);
      puVar9 = (undefined4 *)(param_1 + 0x3e0);
      iVar4 = 10;
      do {
        FUN_00ce4ce0(*puVar9,0xc);
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      puVar9 = (undefined4 *)(param_1 + 0x43c);
      iVar4 = 8;
      do {
        FUN_00ce4ce0(*puVar9,0xc);
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x390),"HUD_PLACE_00",0,0xffffffff);
      if (*(char *)(param_1 + 0x4ef) == '\0') {
        FUN_00ce4d70(0xd);
      }
      else {
        FUN_00ce4dc0(0xd,1);
      }
      *(char *)(param_1 + 0x4ed) = *(char *)(param_1 + 0x4ed) + '\x01';
      *(undefined1 *)(param_1 + 0x261) = 1;
    }
  }
  else if ((cVar2 == '\x02') && (*(char *)(param_1 + 0x260) == '\t')) {
    FUN_00ce4d70(0xb);
    *(char *)(param_1 + 0x4ed) = *(char *)(param_1 + 0x4ed) + '\x01';
  }
  switch(*(undefined4 *)(param_1 + 0x528)) {
  case 0:
    if (*(int *)(param_1 + 0x4bc) != 0) {
      if (*(char *)(param_1 + 0x4ef) == '\0') {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x398),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x39c),1,3);
      }
      iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x394));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4bc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4b8) = 9;
        *(undefined4 *)(param_1 + 0x4bc) = 1;
      }
      *(undefined4 *)(param_1 + 0x504) = 0;
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4b8) * 4),0);
    }
    break;
  case 1:
    fVar10 = (float10)FUN_00989850(*(int *)(param_1 + 0x4b8) + 1,0);
    FUN_00cb32a0(local_58,*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4b8) * 4));
    fVar1 = local_58[0] + local_58[0];
    FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4b8) * 4));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4b8) * 4),
                 (fVar1 + (float)fVar10) / local_50[0]);
    if (*(int *)(param_1 + 0x4f4) == 0) {
      fVar1 = local_58[0] + local_58[0] + (float)fVar10;
      *(float *)(param_1 + 0x504) = fVar1;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 900),fVar1 + *(float *)(param_1 + 0x508) + local_58[0])
      ;
    }
    iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x374 + *(int *)(param_1 + 0x4b8) * 4));
    if (iVar4 != 0) goto switchD_009ac405_default;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    break;
  case 2:
    if (*(int *)(param_1 + 0x4c4) == 0) {
      if ((-1 < *(int *)(param_1 + 0x4f8)) && (*(int *)(param_1 + 0x4f8) < 10)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x47c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b8),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x3bc),1);
        uVar6 = *(undefined4 *)(param_1 + 0x3c0);
        goto LAB_009ac65f;
      }
    }
    else {
      if (*(char *)(param_1 + 0x4ef) == '\0') {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3bc),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3c0),1,3);
      }
      iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x3b8));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4c4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c0) = 0x12;
        *(undefined4 *)(param_1 + 0x4c4) = 1;
      }
      *(undefined4 *)(param_1 + 0x508) = 0;
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4c0) * 4),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x47c),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3b8),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3bc),1);
      uVar6 = *(undefined4 *)(param_1 + 0x3c0);
LAB_009ac65f:
      FUN_00cb2310(uVar6,1);
    }
    fVar10 = (float10)FUN_00989850(10,0);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3b8),(float)fVar10);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3bc),(float)fVar10);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x3c0),(float)fVar10);
    break;
  case 3:
    fVar10 = (float10)FUN_00989850(*(int *)(param_1 + 0x4c0) + 1,0);
    FUN_00cb32a0(local_58,*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4c0) * 4));
    fVar1 = local_58[0] + local_58[0];
    FUN_00cb3240(local_50,*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4c0) * 4));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4c0) * 4),
                 (fVar1 + (float)fVar10) / local_50[0]);
    if (*(int *)(param_1 + 0x4f4) == 0) {
      fVar1 = local_58[0];
      if (*(int *)(param_1 + 0x4f8) < 10) {
        fVar1 = local_58[0] + local_58[0] + (float)fVar10;
      }
      *(float *)(param_1 + 0x508) = fVar1;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 900),fVar1 + *(float *)(param_1 + 0x504));
    }
    iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x374 + *(int *)(param_1 + 0x4c0) * 4));
    if (iVar4 != 0) goto switchD_009ac405_default;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    break;
  default:
    goto switchD_009ac405_default;
  }
  *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
switchD_009ac405_default:
  bVar8 = 2;
  do {
    iVar4 = (int)(char)bVar8;
    if (*(int *)(param_1 + 0x4bc + iVar4 * 8) != 0) {
      fVar10 = (float10)FUN_00989850(*(int *)(param_1 + 0x4b8 + iVar4 * 8) + 1,0);
      FUN_00cb32a0(local_58,*(undefined4 *)
                             (param_1 + 0x370 + *(int *)(param_1 + 0x4b8 + iVar4 * 8) * 4));
      fVar1 = local_58[0] + local_58[0];
      FUN_00cb3240(local_50,*(undefined4 *)
                             (param_1 + 0x370 + *(int *)(param_1 + 0x4b8 + iVar4 * 8) * 4));
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x370 + *(int *)(param_1 + 0x4b8 + iVar4 * 8) * 4),
                   (fVar1 + (float)fVar10) / local_50[0]);
      if (bVar8 == 3) {
        *(float *)(param_1 + 0x510) = local_58[0] + local_58[0] + (float)fVar10;
      }
      if (*(int *)(param_1 + 0x4f4) == 1) {
        FUN_00cb28a0(*(undefined4 *)(param_1 + 900),
                     *(float *)(param_1 + 0x510) + *(float *)(param_1 + 0x50c));
      }
      iVar5 = FUN_00cb2e50(*(undefined4 *)
                            (param_1 + 0x374 + *(int *)(param_1 + 0x4b8 + iVar4 * 8) * 4));
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x4bc + iVar4 * 8) = 0;
      }
    }
    bVar8 = bVar8 + 1;
  } while (bVar8 < 4);
  if ((*(int *)(param_1 + 0x51c) == 0) && (-1 < *(int *)(param_1 + 0x520))) {
    iVar4 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x480));
    iVar5 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x484));
    if ((iVar4 != 0) && (iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x51c) = 1;
      FUN_00de3530();
      uVar6 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x480));
      uVar7 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x484));
      FUN_00de3540(uVar6,uVar7);
      if (*(char *)(*(int *)(param_1 + 0x520) + 0x4d8 + param_1) == '\0') {
        _Format = "ui_chapter_pre_%02d.wtb";
      }
      else {
        _Format = "ui_chapter_%02d.wtb";
      }
      _sprintf_s(local_48,0x40,_Format,*(int *)(param_1 + 0x520));
      uVar6 = FUN_00de4550(local_48,0);
      FUN_00fa25d0(uVar6);
      *(int *)(param_1 + 0x48c) = param_1 + 0x49c;
      if (*(int *)(param_1 + 0x4a8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x4a4);
      }
      *(undefined4 *)(param_1 + 0x498) = uVar6;
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x388),param_1 + 0x488);
      FUN_00ce4d70(8);
      if (*(char *)(*(int *)(param_1 + 0x520) + 0x4d8 + param_1) == '\0') {
        FUN_00ce4d70(9);
      }
    }
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x388),1);
  }
  FUN_00d277c0();
  FUN_009a2a10();
  return;
}

