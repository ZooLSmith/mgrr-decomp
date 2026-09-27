// src/effect/EffectAttrCallHitCategoryWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DBB50..009DC010, 10 functions

#include "types.h"

// 009DBB50  FUN_009dbb50  size=32  [callgraph]
void __fastcall FUN_009dbb50(undefined4 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0xfff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  return;
}

// 009DBB70  FUN_009dbb70  size=377  [callgraph]
undefined4 __thiscall FUN_009dbb70(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcStack_30;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcStack_30 = "DataName";
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,&stack0xffffffd8,0x10);
  }
  uVar2 = FUN_00f4a580(&stack0xffffffd8,0);
  *param_1 = uVar2;
  uStack_4 = 0;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EstId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,&uStack_c);
  }
  param_1[1] = uStack_c;
  uStack_8 = 0;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BehaviorKind");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,&uStack_10);
  }
  param_1[3] = uStack_10;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"HitObjName");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,&pcStack_30,0x10);
    uVar2 = FUN_009fde60(&pcStack_30);
    param_1[4] = uVar2;
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 5);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 2);
  }
  return 1;
}

// 009DBCF0  FUN_009dbcf0  size=70  [callgraph]
void __fastcall FUN_009dbcf0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  return;
}

// 009DBD40  FUN_009dbd40  size=29  [callgraph]
void __thiscall FUN_009dbd40(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x4bc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x4f0);
  }
  return;
}

// 009DBD60  FUN_009dbd60  size=32  [callgraph]
void __thiscall FUN_009dbd60(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x20) = param_2;
    iVar1 = FUN_00a7c800();
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x4bc);
  }
  return;
}

// 009DBD80  FUN_009dbd80  size=29  [callgraph]
void __thiscall FUN_009dbd80(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x4bc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x4f0);
  }
  return;
}

// 009DBDA0  FUN_009dbda0  size=337  [callgraph]
/* WARNING: Removing unreachable block (ram,0x009dbe94) */
/* WARNING: Removing unreachable block (ram,0x009dbe96) */
/* WARNING: Removing unreachable block (ram,0x009dbe00) */
/* WARNING: Removing unreachable block (ram,0x009dbe4b) */
/* WARNING: Removing unreachable block (ram,0x009dbe92) */
/* WARNING: Removing unreachable block (ram,0x009dbe98) */
/* WARNING: Removing unreachable block (ram,0x009dbed4) */

undefined4 FUN_009dbda0(void)

{
  return 1;
}

// 009DBF00  FUN_009dbf00  size=76  [callgraph]
void __fastcall FUN_009dbf00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x44) == -1) {
      iVar1 = FUN_00a7c800();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x4bc);
      }
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar1 = FUN_00a7c800();
      if (iVar1 != 0) {
        iVar1 = FUN_00a12210((int)*(short *)(param_1 + 0x24));
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x3c) = iVar1 + 0x10;
        }
      }
    }
  }
  return;
}

// 009DBF90  FUN_009dbf90  size=95  [callgraph]
void __fastcall FUN_009dbf90(undefined4 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[9] = 0;
  param_1[0x12] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  param_1[7] = 0;
  param_1[0x15] = 0xfff;
  param_1[6] = 0;
  param_1[0x16] = 0xffff;
  param_1[4] = 0;
  param_1[0x17] = 0;
  param_1[3] = 0;
  param_1[0x18] = 0;
  param_1[2] = 0;
  param_1[0x19] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}

// 009DC010  EffectAttrCallHitCategoryWork::readXml  size=1351  [class]
undefined4 __thiscall
EffectAttrCallHitCategoryWork::readXml(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  char *pcVar6;
  undefined4 uVar7;
  
  uVar7 = param_3;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_01658f34);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 9);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"EffectAttrHit_All");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xfff;
      puVar2[5] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xffffffff;
    }
    *param_1 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_0165a2f0);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165a298);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(unaff_EBP,"EffectAttrHit_Pl");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xfff;
      puVar2[5] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xffffffff;
    }
    param_1[1] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_0165a238);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165a1f8);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(unaff_EDI,"EffectAttrHit_Em");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xfff;
      puVar2[5] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xffffffff;
    }
    param_1[2] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_0165a198);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165a158);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(uVar7,"EffectAttrHit_Scr");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xfff;
      puVar2[5] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xffffffff;
    }
    param_1[3] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_0165a0f8);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165a0b8);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"EffectAttrHit_Wp");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xfff;
      puVar2[5] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0xffffffff;
    }
    param_1[4] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_0165a058);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_0165a018);
      return 0;
    }
  }
  pcVar6 = "EffectAttrHit_Car";
  iVar1 = (**(code **)(*param_2 + 0x18))(unaff_EBP,"EffectAttrHit_Car");
  if (iVar1 != -1) {
    iVar4 = FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_009dbb50();
    }
    param_1[5] = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_01659fb8);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01659f78);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(unaff_EDI,"EffectAttrHit_Ba");
  if (iVar1 != -1) {
    iVar4 = FUN_00dd3500(0x18,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_009dbb50();
    }
    param_1[6] = iVar4;
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_01659f18);
      return 0;
    }
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallData");
    iVar1 = FUN_009dbb70(param_2,uVar3);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01659ed8);
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(uVar7,"EffectAttrHit_ObjId");
  if (iVar1 != -1) {
    uVar5 = (**(code **)(*param_2 + 0x10))(iVar1);
    param_1[8] = uVar5;
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar5 * 0x18),&DAT_01b7bd48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_00401040(iVar1,0x18,uVar5,FUN_009dbb50);
    }
    param_1[7] = iVar1;
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01659e70);
      return 0;
    }
    uVar5 = 0;
    if (param_1[8] != 0) {
      iVar1 = 0;
      do {
        puVar2 = (undefined4 *)(param_1[7] + iVar1);
        puVar2[5] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0xfff;
        puVar2[4] = 0xffffffff;
        iVar4 = (**(code **)(*param_2 + 0x14))(pcVar6,uVar5);
        if (iVar4 != -1) {
          FUN_009dbb70(param_2,iVar4);
        }
        uVar5 = uVar5 + 1;
        iVar1 = iVar1 + 0x18;
      } while (uVar5 < (uint)param_1[8]);
    }
  }
  return 1;
}

